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
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_x_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_a_30;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_o_28;
ATerm term_j_28;
ATerm term_a_28;
ATerm term_i_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_k_26;
ATerm term_r_25;
ATerm term_p_24;
ATerm term_n_24;
ATerm term_e_23;
ATerm term_t_22;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_l_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_x_17;
ATerm term_u_17;
ATerm term_o_16;
ATerm term_m_16;
ATerm term_w_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_r_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_m_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_i_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_a_8;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_z_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_t_6;
ATerm term_y_5;
void init_constant_terms (void)
{
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_7, term_t_6, term_h_7);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_7, term_k_7, term_n_7);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_7, term_u_7, term_a_8);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_8, term_e_8, term_i_8);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_8, term_n_8, term_o_8);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_8, term_t_8, term_u_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_8, term_x_8, term_y_8);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_9, term_n_9, term_o_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_9, term_t_9, term_u_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_y_9, term_a_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_10, term_g_10, term_h_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_n_10, term_t_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_y_10);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_f_11, term_g_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_11, term_j_11, term_l_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_q_11, term_v_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_a_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_a_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_13, term_i_13, term_j_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_o_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_r_13, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_y_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_g_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_j_14, term_k_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_w_14, term_x_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_g_15, term_h_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_n_15);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_26);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__3, term_q_29, term_r_29, term_u_17);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm g_72 (ATerm), ATerm);
ATerm o_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm v_70 (ATerm), ATerm);
ATerm assert_1_0 (ATerm n_84 (ATerm), ATerm);
ATerm m_5 (ATerm a_5, ATerm);
ATerm p_5 (ATerm c_5, ATerm d_5, ATerm e_5, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm s_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm q_68 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm at_last_1_0 (ATerm b_77 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm u_76 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm n_76 (ATerm), ATerm);
ATerm list_tokenize_1_0 (ATerm n_99 (ATerm), ATerm);
ATerm d_1 (ATerm);
ATerm i_1 (ATerm);
ATerm string_tokenize_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm remove_extension_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm v_85 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm u_85 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm w_85 (ATerm), ATerm);
ATerm union_1_0 (ATerm e_80 (ATerm), ATerm);
ATerm l_1 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm y_85 (ATerm), ATerm);
ATerm r_11 (ATerm k_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm t_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm t_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm u_91 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm k_84 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm j_84 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm o_87 (ATerm), ATerm);
ATerm t_2 (ATerm);
ATerm xtc_io_1_0 (ATerm p_87 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_85 (ATerm), ATerm);
ATerm v_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm need_help_1_0 (ATerm q_89 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm x_68 (ATerm), ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm y_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm);
ATerm _2_0 (ATerm c_59 (ATerm), ATerm d_59 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm z_75 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_63 (ATerm), ATerm s_63 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm o_91 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm n_5 (ATerm);
ATerm parse_options_1_0 (ATerm n_91 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm w_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm io_pp_c_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,n_0 = NULL;
  t = term_y_5;
  {
    ATerm p_6 = t;
    int q_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
        {
          ATerm r_6 = t;
          int s_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_0 = NULL;
              t = eval_config_0_0(t);
              r_0 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_0);
              t = r_0;
              ;
              LocalPopChoice(s_6);
            }
          else
            {
              t = r_6;
            }
        }
        ;
        LocalPopChoice(q_6);
      }
    else
      {
        t = p_6;
        t = term_t_6;
      }
    c_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_0, term_t_6);
    {
      ATerm u_6 = t;
      int v_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(c_0, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(v_6);
        }
      else
        {
          t = u_6;
          t = SSL_subtr(c_0, (ATerm) ATmakeInt(1));
        }
      n_0 = t;
      t = SSL_int_to_string(n_0);
      e_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, e_0), term_y_5);
    }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm e_1 = NULL,h_1 = NULL;
  e_1 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_w_6;
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
ATerm WriteToFile_1_0 (ATerm g_72 (ATerm), ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL;
  if(match_cons(t, sym__2))
    {
      o_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_1, term_x_6);
  t = open_stream_0_0(t);
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_1, p_1);
  t = g_72(t);
  t = fclose_0_0(t);
  t = p_1;
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_6 = ATgetArgument(t, 0);
      if(match_cons(y_6, sym_Stream_1))
        {
          a_2 = ATgetArgument(y_6, 0);
        }
      else
        _fail(t);
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(a_2, b_2);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_2);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL;
  r_1 = t;
  t = xtc_new_file_0_0(t);
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_1, r_1);
  t = WriteToFile_1_0(o_0, t);
  t = SSL_close_file(s_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, s_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(l_88, m_88, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  c_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      d_3 = ATgetArgument(t, 0);
      {
        ATerm c_1 = NULL;
        t = SSL_int_to_string(d_3);
        c_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_7), c_1), term_z_6);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm v_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          d_3 = ATgetArgument(t, 0);
          e_3 = ATgetArgument(t, 1);
          f_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(e_3);
      v_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_3), term_d_7), v_1), term_c_7), d_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm j_3 = NULL;
  ATerm p_0 (ATerm t)
  {
    t = m_76(t);
    if(((j_3 != NULL) && (j_3 != t)))
      _fail(t);
    else
      j_3 = t;
    return(t);
  }
  t = fetch_1_0(p_0, t);
  t = not_null(j_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm l_3 = NULL;
  l_3 = t;
  {
    ATerm e_7 = t;
    int f_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_15), term_i_15), term_d_15), term_z_14), term_l_14), term_h_14), term_z_13), term_t_13), term_p_13), term_k_13), term_f_13), term_m_12), term_w_11), term_m_11), term_h_11), term_d_11), term_u_10), term_l_10), term_d_10), term_v_9), term_p_9), term_a_9), term_v_8), term_q_8), term_k_8), term_c_8), term_o_7), term_i_7);
        {
          ATerm q_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm x_15 = ATgetArgument(t, 0);
                if((l_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm c_16 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(q_0, t);
        }
        ;
        LocalPopChoice(f_7);
      }
    else
      {
        t = e_7;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, l_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm q_3 = NULL;
  q_3 = t;
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_3 = NULL,f_2 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_16 = ATgetArgument(t, 0);
            z_3 = ATgetArgument(t, 1);
            {
              ATerm k_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_3;
        {
          ATerm l_16 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_16;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          f_2 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_m_16, (ATerm) ATinsert(ATinsert(ATempty, f_2), term_o_16));
        }
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
      }
    t = q_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm v_70 (ATerm), ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL;
  f_4 = t;
  t = fork_0_0(t);
  g_4 = t;
  {
    ATerm r_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = f_4;
        t = v_70(t);
        ;
        LocalPopChoice(s_16);
      }
    else
      {
        t = r_16;
        t = SSL_waitpid(g_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_16 = ATgetArgument(t, 0);
            if(((ATgetType(z_16) != AT_INT) || (ATgetInt((ATermInt) z_16) != 0)))
              _fail(t);
            {
              ATerm a_17 = ATgetArgument(t, 1);
            }
            {
              ATerm b_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_4;
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  ATerm k_4 = NULL,m_4 = NULL,p_4 = NULL,r_4 = NULL,s_4 = NULL;
  if(match_cons(t, sym__2))
    {
      k_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_84(t);
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_4, k_4, m_4);
  t = table_push_0_0(t);
  {
    ATerm c_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(p_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(e_17);
      }
    else
      {
        t = c_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_4 = ATgetFirst((ATermList) t);
        s_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(p_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(s_4), (ATerm) ATinsert(CheckATermList(r_4), k_4)));
    t = (ATerm) ATmakeAppl(sym__2, k_4, m_4);
  }
  return(t);
}
ATerm m_5 (ATerm a_5, ATerm t)
{
  t = a_5;
  {
    ATerm f_17 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_17 = ATgetArgument(t, 0);
            ATerm m_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_17;
      }
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, a_5, term_x_6);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm p_5 (ATerm c_5, ATerm d_5, ATerm e_5, ATerm t)
{
  t = SSL_open_file(c_5, d_5);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
  j_5 = t;
  if(match_cons(t, sym__2))
    {
      k_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
      {
        ATerm n_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_5(j_5, t);
            ;
            LocalPopChoice(p_17);
          }
        else
          {
            t = n_17;
            t = p_5(k_5, l_5, j_5, t);
          }
      }
    }
  else
    {
      t = m_5(j_5, t);
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
  ATerm r_5 = NULL;
  t = term_u_17;
  t = new_0_0(t);
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_5, term_x_17);
  t = conc_strings_0_0(t);
  {
    ATerm y_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_5 = NULL;
        x_5 = t;
        t = SSL_access(x_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = y_17;
      }
  }
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_b_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_6 = NULL;
  t = new_file_0_0(t);
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_6, term_x_6);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, j_6, term_u_17);
  t = assert_1_0(s_0, t);
  t = j_6;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL;
  l_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_4 = NULL,n_4 = NULL,z_4 = NULL,f_5 = NULL;
      t = l_7;
      t = xtc_new_file_0_0(t);
      l_4 = t;
      t = m_0(t);
      n_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_4, (ATerm) ATinsert(ATinsert(ATempty, l_4), term_d_18));
      {
        ATerm e_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm i_18 = ATgetArgument(t, 0);
                ATerm j_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_4;
            {
              ATerm t_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, l_4), term_d_18);
                return(t);
              }
              t = at_end_1_0(t_0, t);
            }
            ;
            LocalPopChoice(h_18);
          }
        else
          {
            t = e_18;
            {
              ATerm y_4 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, n_4, (ATerm) ATinsert(ATinsert(ATempty, l_4), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm k_18 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_18) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  y_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_4;
              t = concat_0_0(t);
            }
          }
        z_4 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        f_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_5, z_4);
        {
          ATerm u_0 (ATerm t)
          {
            t = SSL_execvp(f_5, z_4);
            return(t);
          }
          t = fork_and_wait_1_0(u_0, t);
          t = SSL_close_file(l_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, l_4);
        }
      }
    }
  else
    {
      ATerm s_5 = NULL,v_5 = NULL,i_6 = NULL,k_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_7;
      t = xtc_new_file_0_0(t);
      s_5 = t;
      t = m_0(t);
      v_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_5), term_d_18), m_7), term_l_18));
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm r_18 = ATgetArgument(t, 0);
                ATerm s_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_5;
            {
              ATerm v_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_5), term_d_18), m_7), term_l_18);
                return(t);
              }
              t = at_end_1_0(v_0, t);
            }
            ;
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            {
              ATerm h_6 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_5), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), m_7), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm u_18 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_18) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  h_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_6;
              t = concat_0_0(t);
            }
          }
        i_6 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        k_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_6, i_6);
        {
          ATerm w_0 (ATerm t)
          {
            t = SSL_execvp(k_6, i_6);
            return(t);
          }
          t = fork_and_wait_1_0(w_0, t);
          t = SSL_close_file(s_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, s_5);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm q_68 (ATerm), ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
  s_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_7);
  p_7 = t;
  t = q_7;
  t = q_68(t);
  r_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, r_7), p_7);
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm w_7 = NULL;
  w_7 = t;
  t = SSL_explode_string(w_7);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm v_7 = NULL;
  t = map_1_0(x_0, t);
  t = concat_0_0(t);
  v_7 = t;
  t = SSL_implode_string(v_7);
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL;
  if(match_cons(t, sym__2))
    {
      x_7 = ATgetArgument(t, 0);
      y_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7;
  {
    ATerm w_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_18);
      }
    else
      {
        t = w_18;
        {
          ATerm y_0 (ATerm t)
          {
            ATerm c_19 = t;
            int d_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_19);
              }
            else
              {
                t = c_19;
                {
                  ATerm z_7 = NULL;
                  t = Cons_2_0(_id, y_0, t);
                  z_7 = t;
                  t = (ATerm) ATinsert(CheckATermList(z_7), x_7);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, y_0, t);
        }
      }
  }
  return(t);
}
ATerm z_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm b_77 (ATerm), ATerm t)
{
  ATerm b_8 (ATerm t)
  {
    ATerm e_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_0, t);
        t = b_77(t);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = e_19;
        t = Cons_2_0(_id, b_8, t);
      }
    return(t);
  }
  t = b_8(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm u_76 (ATerm), ATerm t)
{
  ATerm f_8 (ATerm t)
  {
    ATerm m_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_76(t);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = m_19;
        t = Cons_2_0(_id, f_8, t);
      }
    return(t);
  }
  t = f_8(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm n_76 (ATerm), ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL;
  ATerm a_1 (ATerm t)
  {
    t = Cons_2_0(n_76, _id, t);
    {
      ATerm b_1 (ATerm t)
      {
        if(((g_8 != NULL) && (g_8 != t)))
          _fail(t);
        else
          g_8 = t;
        return(t);
      }
      t = Cons_2_0(_id, b_1, t);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1_0(a_1, t);
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_8, not_null(g_8));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm n_99 (ATerm), ATerm t)
{
  ATerm p_8 = NULL,s_8 = NULL;
  ATerm t_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(n_99, t);
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = t_19;
      {
        ATerm m_8 = NULL;
        m_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_8, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      p_8 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_8;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_19 = ATgetFirst((ATermList) t);
              ATerm z_19 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_8;
          t = list_tokenize_1_0(n_99, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm a_20 = ATgetFirst((ATermList) t);
          ATerm b_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, p_8);
        }
      else
        {
          ATerm c_9 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm c_20 = ATgetFirst((ATermList) t);
              ATerm d_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_8;
          t = list_tokenize_1_0(n_99, t);
          c_9 = t;
          t = (ATerm) ATinsert(CheckATermList(c_9), p_8);
        }
    }
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm g_9 = NULL;
  g_9 = t;
  t = SSL_explode_string(g_9);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm j_9 = NULL;
  j_9 = t;
  t = SSL_implode_string(j_9);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL;
  t = _2_0(_id, d_1, t);
  if(match_cons(t, sym__2))
    {
      e_9 = ATgetArgument(t, 0);
      f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm h_9 = NULL;
      ATerm g_1 (ATerm t)
      {
        ATerm o_6 = NULL;
        o_6 = t;
        if(((h_9 != NULL) && (h_9 != t)))
          _fail(t);
        else
          h_9 = t;
        t = o_6;
        return(t);
      }
      if(((h_9 != NULL) && (h_9 != t)))
        _fail(t);
      else
        h_9 = t;
      t = e_9;
      t = SRTS_one(g_1, t);
      return(t);
    }
    t = list_tokenize_1_0(f_1, t);
    t = map_1_0(i_1, t);
  }
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm m_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_20 = ATgetFirst((ATermList) t);
      m_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_9;
  return(t);
}
ATerm remove_extension_0_0 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL;
  k_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_h_20), k_9);
  t = string_tokenize_0_0(t);
  t = at_last_1_0(j_1, t);
  l_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_20, l_9);
  t = separate_by_0_0(t);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_9 = NULL,s_9 = NULL;
      q_9 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_7 = NULL;
            t = eval_config_0_0(t);
            a_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_7);
            t = a_7;
            ;
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
          }
        s_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_9, term_w_14);
        t = geq_0_0(t);
        t = q_9;
        t = v_85(t);
      }
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_85 (ATerm), ATerm t)
{
  ATerm u_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_9 = NULL,b_10 = NULL;
      z_9 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_8 = NULL;
            t = eval_config_0_0(t);
            j_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_8);
            t = j_8;
            ;
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
          }
        b_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_10, term_n_10);
        t = geq_0_0(t);
        t = z_9;
        t = u_85(t);
      }
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = u_20;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_10 = NULL,e_10 = NULL;
      c_10 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_8 = NULL;
            t = eval_config_0_0(t);
            z_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_8);
            t = z_8;
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
          }
        e_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_10, term_e_8);
        t = geq_0_0(t);
        t = c_10;
        t = w_85(t);
      }
      ;
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
    }
  return(t);
}
ATerm union_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL;
  if(match_cons(t, sym__2))
    {
      i_10 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10;
  {
    ATerm k_10 (ATerm t)
    {
      ATerm i_21 = t;
      int j_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_10;
          ;
          LocalPopChoice(j_21);
        }
      else
        {
          t = i_21;
          {
            ATerm k_21 = t;
            int l_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_9 = NULL,d_9 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    b_9 = ATgetFirst((ATermList) t);
                    d_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = j_10;
                {
                  ATerm k_1 (ATerm t)
                  {
                    ATerm x_9 = NULL;
                    x_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_9, x_9);
                    t = e_80(t);
                    return(t);
                  }
                  t = fetch_1_0(k_1, t);
                  t = d_9;
                  t = k_10(t);
                }
                ;
                LocalPopChoice(l_21);
              }
            else
              {
                t = k_21;
                t = Cons_2_0(_id, k_10, t);
              }
          }
        }
      return(t);
    }
    t = k_10(t);
  }
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm x_10 = NULL;
  if(match_cons(t, sym__2))
    {
      x_10 = ATgetArgument(t, 0);
      if((x_10 != ATgetArgument(t, 1)))
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
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL;
  if(match_cons(t, sym__3))
    {
      o_10 = ATgetArgument(t, 0);
      p_10 = ATgetArgument(t, 1);
      q_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_10, p_10);
  {
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_21 = ATgetArgument(t, 0);
            ATerm t_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(o_10, p_10);
        ;
        LocalPopChoice(o_21);
      }
    else
      {
        t = n_21;
        t = (ATerm) ATempty;
      }
    r_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_10, q_10);
    t = union_1_0(l_1, t);
    s_10 = t;
    t = SSL_table_put(o_10, p_10, s_10);
    t = (ATerm) ATmakeAppl(sym__3, o_10, p_10, q_10);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL;
  if(match_cons(t, sym__2))
    {
      a_11 = ATgetArgument(t, 0);
      z_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm b_11 = NULL,c_11 = NULL;
      if(match_cons(t, sym__2))
        {
          b_11 = ATgetArgument(t, 0);
          c_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, a_11, b_11, c_11);
      t = y_85(t);
      return(t);
    }
    t = map_1_0(m_1, t);
  }
  return(t);
}
ATerm r_11 (ATerm k_11, ATerm t)
{
  t = SSL_fclose(k_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL;
  p_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_11 = ATgetArgument(t, 0);
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_11);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            t = r_11(p_11, t);
          }
      }
    }
  else
    {
      t = r_11(p_11, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_11 = NULL;
  t = SSL_stdin_stream();
  s_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_11 = NULL;
  t = SSL_stdout_stream();
  t_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_11 = NULL;
  t = SSL_stderr_stream();
  u_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_11);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm d_12 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      d_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_12;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm h_12 = NULL;
  h_12 = t;
  t = SSL_is_string(h_12);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_21 = ATgetArgument(t, 0);
      ATerm z_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_12 = NULL,w_12 = NULL;
        v_12 = t;
        t = SSL_explode_term(v_12);
        if(match_cons(t, sym__2))
          {
            ATerm i_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_22) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_22 = ATgetArgument(t, 1);
              if(((ATgetType(j_22) == AT_LIST) && !(ATisEmpty(j_22))))
                {
                  w_12 = ATgetFirst((ATermList) j_22);
                  {
                    ATerm k_22 = (ATerm) ATgetNext((ATermList) j_22);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_12;
        if(match_cons(t, sym_stderr_0))
          {
            t = w_12;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = w_12;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = w_12;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        {
          ATerm n_22 = t;
          int q_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_11 = NULL,b_12 = NULL,c_12 = NULL;
              t = _2_0(n_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  z_11 = ATgetArgument(t, 0);
                  b_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(z_11, b_12);
              c_12 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, c_12);
              ;
              LocalPopChoice(q_22);
            }
          else
            {
              t = n_22;
              {
                ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
                t = _2_0(t_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    e_12 = ATgetArgument(t, 0);
                    f_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(e_12, f_12);
                g_12 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, g_12);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_12 = NULL;
      l_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_12, term_t_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
        ATerm e_13 = NULL;
        e_13 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_13), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = e_13;
        _fail(t);
      }
    }
  i_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(k_12);
  j_12 = t;
  t = i_12;
  t = fclose_0_0(t);
  t = j_12;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_12 = NULL;
      n_12 = t;
      t = SSL_access(n_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(v_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = u_22;
      {
        ATerm a_23 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_13 = NULL;
            ATerm c_23 = t;
            if((PushChoice() == 0))
              {
                ATerm o_12 = NULL;
                o_12 = t;
                t = SSL_access(o_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = c_23;
              }
            l_13 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_13), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = l_13;
            ;
            LocalPopChoice(b_23);
          }
        else
          {
            t = a_23;
            {
              ATerm c_14 = NULL;
              c_14 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_14), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = c_14;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm s_14 = NULL;
  s_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_14), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
  t = s_14;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_14), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
  t = y_14;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm s_12 = NULL;
  s_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = s_12;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm t_12 = NULL;
  t_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
  t = t_12;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm u_12 = NULL;
  u_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = u_12;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
  p_12 = t;
  t = if_verbose5_1_0(u_1, t);
  {
    ATerm d_23 = t;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, p_12));
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_23;
      }
    q_12 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, p_12));
    t = q_12;
    t = if_verbose4_1_0(w_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(x_1, t);
    r_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_23, r_12);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(y_1, t);
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, p_12), (ATerm) ATempty);
    t = (ATerm) ATmakeAppl(sym__3, term_e_23, (ATerm)ATmakeAppl(sym_Imported_1, p_12), (ATerm) ATempty);
    t = if_verbose4_1_0(z_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      {
        ATerm l_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 (ATerm t)
            {
              t = filter_1_0(t_83, t);
              return(t);
            }
            t = Cons_2_0(t_83, d_2, t);
            ;
            LocalPopChoice(m_23);
          }
        else
          {
            t = l_23;
            {
              ATerm z_12 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm n_23 = ATgetFirst((ATermList) t);
                  z_12 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = z_12;
              t = filter_1_0(t_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm u_91 (ATerm), ATerm t)
{
  ATerm b_13 (ATerm t)
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_91(t);
        t = b_13(t);
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
      }
    return(t);
  }
  t = b_13(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm v_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_15 = NULL;
            t = eval_config_0_0(t);
            r_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), r_15);
            t = r_15;
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
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm v_15 = NULL;
  v_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_15), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
  t = v_15;
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm a_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_24;
      }
  }
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm y_15 = NULL;
  y_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_15), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
  t = y_15;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm c_13 = NULL;
  t = if_verbose5_1_0(e_2, t);
  c_13 = t;
  {
    ATerm b_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = b_24;
        {
          ATerm d_13 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          d_13 = t;
          t = repeat_1_0(g_2, t);
          t = d_13;
        }
      }
    t = c_13;
    t = if_verbose5_1_0(h_2, t);
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm f_16 = NULL;
  f_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_16), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = f_16;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm g_18 = NULL;
  g_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_18), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = g_18;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm q_23 = NULL;
  t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
  t = map_1_0(m_2, t);
  q_23 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_23), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
  t = q_23;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL;
  o_23 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), o_23);
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_23, p_23);
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(i_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_16 = NULL,v_16 = NULL,d_17 = NULL;
            if(match_cons(t, sym__2))
              {
                u_16 = ATgetArgument(t, 0);
                v_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, u_16));
            {
              ATerm j_2 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((v_16 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((d_17 != NULL) && (d_17 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      d_17 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(j_2, t);
              t = not_null(d_17);
            }
            ;
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            {
              ATerm t_17 = NULL,f_18 = NULL;
              t_17 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, t_17));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm k_24 = ATgetFirst((ATermList) t);
                  if(match_cons(k_24, sym__2))
                    {
                      ATerm m_24 = ATgetArgument(k_24, 0);
                      f_18 = ATgetArgument(k_24, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm l_24 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = f_18;
            }
          }
        t = if_verbose5_1_0(k_2, t);
      }
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      {
        ATerm h_13 = NULL;
        h_13 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), h_13), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_24), h_13), term_n_24);
        t = if_verbose5_1_0(l_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL;
  w_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      x_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_23 = NULL;
        t = w_13;
        t = k_0(t);
        w_23 = t;
        {
          ATerm t_24 = t;
          int u_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(u_24);
            }
          else
            {
              t = t_24;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(x_13, w_23);
          t = (ATerm) ATmakeAppl(sym_FILE_1, x_13);
        }
        ;
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        {
          ATerm v_24 = t;
          int z_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_24 = NULL;
              t = w_13;
              t = k_0(t);
              c_24 = t;
              {
                ATerm a_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm d_25 = t;
                    int e_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
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
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(g_25);
                            }
                          else
                            {
                              t = f_25;
                              {
                                ATerm d_24 = NULL;
                                d_24 = t;
                                if((x_13 != t))
                                  {
                                    _fail(t);
                                  }
                                t = d_24;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_25;
                  }
                t = SSL_copy(x_13, c_24);
                t = (ATerm) ATmakeAppl(sym_FILE_1, x_13);
              }
              ;
              LocalPopChoice(z_24);
            }
          else
            {
              t = v_24;
              t = w_13;
              t = k_0(t);
              if((x_13 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_13);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym__2))
    {
      d_14 = ATgetArgument(t, 0);
      e_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_14, e_14);
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_25 = ATgetArgument(t, 0);
            ATerm k_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(d_14, e_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_25 = ATgetFirst((ATermList) t);
            h_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_24;
        ;
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        t = (ATerm) ATempty;
      }
    f_14 = t;
    t = SSL_table_put(d_14, e_14, f_14);
    t = (ATerm) ATmakeAppl(sym__2, d_14, e_14);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm k_84 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
  m_14 = t;
  t = k_84(t);
  n_14 = t;
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_14 = ATgetFirst((ATermList) t);
        o_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_14, (ATerm)ATmakeAppl(sym_Scopes_0), o_14);
    t = p_14;
    {
      ATerm n_2 (ATerm t)
      {
        ATerm q_14 = NULL;
        q_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_14, q_14);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(n_2, t);
      t = m_14;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm t)
{
  ATerm o_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_85(t);
      t = g_85(t);
      ;
      LocalPopChoice(q_25);
    }
  else
    {
      t = o_25;
      t = g_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL;
  t_14 = t;
  t = j_84(t);
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_14, term_r_25);
  {
    ATerm s_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_25 = ATgetArgument(t, 0);
            ATerm w_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_25);
      }
    else
      {
        t = s_25;
        t = (ATerm) ATempty;
      }
    v_14 = t;
    t = SSL_table_put(u_14, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(v_14), (ATerm) ATempty));
    t = t_14;
  }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_b_18;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_15 = NULL;
      m_15 = t;
      t = SSL_remove(m_15);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_b_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  ATerm f_15 = NULL;
  t = begin_scope_1_0(o_2, t);
  {
    ATerm p_2 (ATerm t)
    {
      ATerm j_15 = NULL;
      j_15 = t;
      {
        ATerm a_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(c_26);
          }
        else
          {
            t = a_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((f_15 != NULL) && (f_15 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              f_15 = ATgetFirst((ATermList) t);
            {
              ATerm d_26 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(f_15);
        t = map_1_0(q_2, t);
        t = j_15;
        t = end_scope_1_0(r_2, t);
      }
      return(t);
    }
    t = restore_always_2_0(o_87, p_2, t);
  }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_24 = NULL;
            t = eval_config_0_0(t);
            s_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), s_24);
            t = s_24;
            ;
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
          }
      }
      ;
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
      t = term_k_26;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm p_87 (ATerm), ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_15 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm n_26 = t;
          int o_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_24 = NULL;
              t = eval_config_0_0(t);
              o_24 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), o_24);
              t = o_24;
              ;
              LocalPopChoice(o_26);
            }
          else
            {
              t = n_26;
            }
          o_15 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, o_15);
        }
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = term_w_6;
      }
    t = p_87(t);
    t = copy_to_1_0(t_2, t);
    return(t);
  }
  t = xtc_temp_files_1_0(s_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL;
  p_15 = t;
  t = term_u_17;
  t = whoami_0_0(t);
  q_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), q_15), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = p_15;
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm s_15 = NULL;
  s_15 = t;
  if(match_string(t, "-k"))
    {
      t = s_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_15;
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL;
  t_15 = t;
  t = SSL_string_to_int(t_15);
  u_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), u_15);
  t = t_15;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_2, v_2, w_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm z_15 = NULL;
  z_15 = t;
  if(match_string(t, "-S"))
    {
      t = z_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_15;
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_r_26;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_s_26;
  return(t);
}
ATerm a_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL;
  a_16 = t;
  t = SSL_string_to_int(a_16);
  b_16 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_16);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_16);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_t_26;
  return(t);
}
ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_u_26;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_v_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_2, y_2, z_2, t);
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_3, b_3, g_3, t);
            ;
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
            t = Option_3_0(h_3, i_3, k_3, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_16 = NULL;
      t = term_u_17;
      t = d_0(t);
      i_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_27, term_c_27, i_16);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm n_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_16 = ATgetFirst((ATermList) t);
          h_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_16;
      t = a_0(t);
      t = term_u_17;
      t = b_0(t);
      n_16 = t;
      t = (ATerm) ATinsert(CheckATermList(h_16), n_16);
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm p_16 = NULL;
  p_16 = t;
  if(match_string(t, "-o"))
    {
      t = p_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_16;
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm q_16 = NULL;
  q_16 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), q_16);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_16);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_3, n_3, o_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm t_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
  if(match_cons(t, sym__3))
    {
      t_16 = ATgetArgument(t, 0);
      w_16 = ATgetArgument(t, 1);
      x_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_16, w_16);
  {
    ATerm e_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_27 = ATgetArgument(t, 0);
            ATerm h_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_16, w_16);
        ;
        LocalPopChoice(f_27);
      }
    else
      {
        t = e_27;
        t = (ATerm) ATempty;
      }
    y_16 = t;
    t = SSL_table_put(t_16, w_16, (ATerm) ATinsert(CheckATermList(y_16), x_16));
    t = (ATerm) ATmakeAppl(sym__3, t_16, w_16, x_16);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_17 = NULL;
      t = term_u_17;
      t = j_0(t);
      k_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_27, term_c_27, k_17);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm o_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_17 = ATgetFirst((ATermList) t);
          h_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_17;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_17 = ATgetFirst((ATermList) t);
          j_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_17;
      t = h_0(t);
      t = i_17;
      t = i_0(t);
      o_17 = t;
      t = (ATerm) ATinsert(CheckATermList(j_17), o_17);
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm q_17 = NULL;
  q_17 = t;
  if(match_string(t, "-i"))
    {
      t = q_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_17;
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm r_17 = NULL;
  r_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), r_17);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_17);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_3, r_3, s_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_17 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_17;
  t = whoami_0_0(t);
  s_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), s_17));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_24 = NULL;
        t = eval_config_0_0(t);
        w_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_24);
        t = w_24;
        ;
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_82(t);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      {
        ATerm v_17 = NULL,w_17 = NULL,z_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_17 = ATgetFirst((ATermList) t);
            w_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_17;
        t = foldr_2_0(q_82, r_82, t);
        z_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_17, z_17);
        t = r_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_q_26;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL;
  if(match_cons(t, sym__2))
    {
      b_25 = ATgetArgument(t, 0);
      c_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(b_25, c_25);
        ;
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        t = SSL_addr(b_25, c_25);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_18 = NULL,x_24 = NULL,y_24 = NULL;
  t = times_0_0(t);
  x_24 = t;
  t = SSL_explode_term(x_24);
  if(match_cons(t, sym__2))
    {
      ATerm p_27 = ATgetArgument(t, 0);
      y_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_24;
  t = foldr_2_0(t_3, u_3, t);
  c_18 = t;
  t = SSL_TicksToSeconds(c_18);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
  o_18 = t;
  if(match_cons(t, sym__2))
    {
      p_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_18;
        if((p_18 != t))
          {
            _fail(t);
          }
        t = o_18;
        ;
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        t = o_18;
        {
          ATerm t_27 = t;
          int u_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_18, q_18);
              ;
              LocalPopChoice(u_27);
            }
          else
            {
              t = t_27;
              t = SSL_gtr(p_18, q_18);
            }
          t = (ATerm) ATmakeAppl(sym__2, p_18, q_18);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_85 (ATerm), ATerm t)
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_18 = NULL,v_18 = NULL;
      t_18 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_25 = NULL;
            t = eval_config_0_0(t);
            p_25 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_25);
            t = p_25;
            ;
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
          }
        v_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_18, term_t_6);
        t = geq_0_0(t);
        t = t_18;
        t = r_85(t);
      }
      ;
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL;
  t = run_time_0_0(t);
  x_18 = t;
  t = term_u_17;
  t = whoami_0_0(t);
  y_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), x_18), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), y_18));
  t = (ATerm) ATmakeAppl(sym__2, term_m_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_28), x_18), term_c_7), y_18));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
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
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(e_28);
          }
        else
          {
            t = d_28;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm h_28 = t;
        int i_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_25 = NULL;
            t = eval_config_0_0(t);
            t_25 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), t_25);
            t = t_25;
            ;
            LocalPopChoice(i_28);
          }
        else
          {
            t = h_28;
          }
      }
      ;
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      t = fetch_1_0(w_3, t);
    }
  t = q_89(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_19 = ATgetFirst((ATermList) t);
      b_19 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_19 = NULL,g_19 = NULL;
        t = b_19;
        t = g_0(t);
        f_19 = t;
        t = a_19;
        t = f_0(t);
        g_19 = t;
        t = b_19;
        {
          ATerm x_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(f_19), g_19);
            return(t);
          }
          t = reverse_acc_2_0(f_0, x_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_17;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm x_68 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  k_19 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_19);
  h_19 = t;
  t = i_19;
  t = x_68(t);
  j_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, j_19), h_19);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm n_19 = NULL;
  n_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_19), term_j_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm m_28 = t;
        int n_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_25 = NULL;
            t = eval_config_0_0(t);
            x_25 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_25);
            t = x_25;
            ;
            LocalPopChoice(n_28);
          }
        else
          {
            t = m_28;
          }
      }
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      t = fetch_1_0(y_3, t);
    }
  t = term_o_28;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, a_4, t);
  t = map_1_0(b_4, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  r_19 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      p_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_19);
  o_19 = t;
  t = p_19;
  t = y_68(t);
  q_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, q_19), o_19);
  return(t);
}
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm u_19 (ATerm t)
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_76, _id, t);
        ;
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = Cons_2_0(_id, u_19, t);
      }
    return(t);
  }
  t = u_19(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL;
  x_19 = t;
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_19;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_28 = ATgetFirst((ATermList) t);
                ATerm u_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_19;
          }
        ;
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = (ATerm) ATinsert(ATempty, x_19);
      }
    y_19 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), y_19);
    t = x_19;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm v_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_26 = NULL;
        t = eval_config_0_0(t);
        b_26 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_26);
        t = b_26;
        ;
        LocalPopChoice(w_28);
      }
    else
      {
        t = v_28;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      {
        ATerm e_20 = NULL,f_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_20 = ATgetFirst((ATermList) t);
            f_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_20;
        {
          ATerm c_4 (ATerm t)
          {
            t = f_20;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(c_4, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm l_20 (ATerm t)
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_20, t);
        ;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_76(t);
      }
    return(t);
  }
  t = l_20(t);
  return(t);
}
ATerm _2_0 (ATerm c_59 (ATerm), ATerm d_59 (ATerm), ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  r_20 = t;
  if(match_cons(t, sym__2))
    {
      n_20 = ATgetArgument(t, 0);
      o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_20);
  m_20 = t;
  t = n_20;
  t = c_59(t);
  p_20 = t;
  t = o_20;
  t = d_59(t);
  q_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, p_20, q_20), m_20);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm w_20 = NULL;
  w_20 = t;
  t = SSL_explode_string(w_20);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm x_20 = NULL;
  x_20 = t;
  t = SSL_explode_string(x_20);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm v_20 = NULL;
  t = _2_0(d_4, e_4, t);
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_20 = NULL,a_21 = NULL;
        if(match_cons(t, sym__2))
          {
            z_20 = ATgetArgument(t, 0);
            a_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_20;
        {
          ATerm h_4 (ATerm t)
          {
            t = a_21;
            return(t);
          }
          t = at_end_1_0(h_4, t);
        }
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        {
          ATerm e_26 = NULL,f_26 = NULL;
          e_26 = t;
          t = SSL_explode_term(e_26);
          if(match_cons(t, sym__2))
            {
              ATerm d_29 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_29) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              f_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_26;
          t = concat_0_0(t);
        }
      }
    v_20 = t;
    t = SSL_implode_string(v_20);
  }
  return(t);
}
ATerm map_1_0 (ATerm z_75 (ATerm), ATerm t)
{
  ATerm f_21 (ATerm t)
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        t = Cons_2_0(z_75, f_21, t);
      }
    return(t);
  }
  t = f_21(t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_21 = NULL;
      m_21 = t;
      t = SSL_is_string(m_21);
      ;
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      {
        ATerm k_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_4, t);
            ;
            LocalPopChoice(l_29);
          }
        else
          {
            t = k_29;
            {
              ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
              q_21 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_21 = ATgetArgument(t, 0);
                  t = r_21;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_21 = ATgetArgument(t, 0);
                      t = r_21;
                      {
                        ATerm m_29 = t;
                        int n_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_21);
                            {
                              ATerm o_29 = t;
                              int p_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_26 = NULL;
                                  t = eval_config_0_0(t);
                                  y_26 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_21, y_26);
                                  t = y_26;
                                  ;
                                  LocalPopChoice(p_29);
                                }
                              else
                                {
                                  t = o_29;
                                }
                            }
                            ;
                            LocalPopChoice(n_29);
                          }
                        else
                          {
                            t = m_29;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_21), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = r_21;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_21 = NULL,x_21 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_21 = ATgetArgument(t, 0);
                          s_21 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_21;
                      t = eval_config_0_0(t);
                      w_21 = t;
                      t = s_21;
                      t = eval_config_0_0(t);
                      x_21 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_21, x_21);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_s_29;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_u_29;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_v_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_4, o_4, q_4, t);
      ;
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      t = Option_3_0(t_4, u_4, v_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_63 (ATerm), ATerm s_63 (ATerm), ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
  h_22 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_22 = ATgetFirst((ATermList) t);
      e_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_22);
  c_22 = t;
  t = d_22;
  t = r_63(t);
  f_22 = t;
  t = e_22;
  t = s_63(t);
  g_22 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(g_22), f_22), c_22);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm m_22 = NULL;
  m_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_22);
  t = (ATerm) ATmakeAppl(sym_Program_1, m_22);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_91 (ATerm), ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_30;
        t = o_91(t);
        ;
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
      }
    t = l_22;
    {
      ATerm x_4 (ATerm t)
      {
        ATerm b_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_30 = t;
            int e_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_30);
              }
            else
              {
                t = d_30;
                t = o_91(t);
                t = Cons_2_0(_id, x_4, t);
              }
            ;
            LocalPopChoice(c_30);
          }
        else
          {
            t = b_30;
            {
              ATerm o_22 = NULL,p_22 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_22 = ATgetFirst((ATermList) t);
                  p_22 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_22), (ATerm) ATmakeAppl(sym_Undefined_1, o_22));
            }
          }
        return(t);
      }
      t = Cons_2_0(w_4, x_4, t);
    }
  }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm z_22 = NULL;
  z_22 = t;
  if(match_string(t, "--help"))
    {
      t = z_22;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_22;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_22;
        }
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_30;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm n_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_91 (ATerm), ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
  w_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = w_22;
  {
    ATerm b_5 (ATerm t)
    {
      ATerm h_30 = t;
      int i_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_91(t);
          ;
          LocalPopChoice(i_30);
        }
      else
        {
          t = h_30;
          {
            ATerm j_30 = t;
            int k_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_5, h_5, i_5, t);
                ;
                LocalPopChoice(k_30);
              }
            else
              {
                t = j_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_5, t);
    {
      ATerm l_30 = t;
      int m_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_23 = NULL;
          f_23 = t;
          {
            ATerm n_30 = t;
            int o_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = f_23;
                {
                  ATerm p_30 = t;
                  int q_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm r_30 = t;
                        int s_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm q_27 = NULL;
                            t = eval_config_0_0(t);
                            q_27 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), q_27);
                            t = q_27;
                            ;
                            LocalPopChoice(s_30);
                          }
                        else
                          {
                            t = r_30;
                          }
                      }
                      ;
                      LocalPopChoice(q_30);
                    }
                  else
                    {
                      t = p_30;
                      t = fetch_1_0(n_5, t);
                    }
                  t = f_23;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(o_30);
              }
            else
              {
                t = n_30;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm t_30 = t;
                  int u_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_27 = NULL;
                      t = eval_config_0_0(t);
                      x_27 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), x_27);
                      t = x_27;
                      ;
                      LocalPopChoice(u_30);
                    }
                  else
                    {
                      t = t_30;
                    }
                  t = f_23;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(m_30);
        }
      else
        {
          t = l_30;
          {
            ATerm v_30 = t;
            int w_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm q_5 (ATerm t)
                  {
                    if(((x_22 != NULL) && (x_22 != t)))
                      _fail(t);
                    else
                      x_22 = t;
                    return(t);
                  }
                  t = Undefined_1_0(q_5, t);
                  return(t);
                }
                t = fetch_1_0(o_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(x_22)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_m_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_22)), term_x_30));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(w_30);
              }
            else
              {
                t = v_30;
              }
          }
        }
      y_22 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = y_22;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm t)
{
  ATerm i_23 = NULL;
  t = parse_options_1_0(s_89, t);
  i_23 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), i_23);
  t = i_23;
  t = u_89(t);
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_89, t);
        ;
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        {
          ATerm a_31 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_89(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_31);
            }
          else
            {
              t = a_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
      {
        ATerm e_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(f_31);
          }
        else
          {
            t = e_31;
            {
              ATerm g_31 = t;
              int h_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(w_5, z_5, a_6, t);
                  ;
                  LocalPopChoice(h_31);
                }
              else
                {
                  t = g_31;
                  {
                    ATerm i_31 = t;
                    int j_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(j_31);
                      }
                    else
                      {
                        t = i_31;
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
ATerm u_5 (ATerm t)
{
  t = xtc_io_1_0(b_6, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_k_31;
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_l_31;
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_31 = t;
      int p_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(p_31);
        }
      else
        {
          t = o_31;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(n_31);
      t = xtc_transform_file_2_0(c_6, d_6, t);
    }
  else
    {
      t = m_31;
      t = xtc_transform_term_2_0(e_6, f_6, t);
    }
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_31 = t;
        int t_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(t_31);
          }
        else
          {
            t = s_31;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(r_31);
        t = xtc_transform_file_2_0(g_6, pass_verbose_0_0, t);
      }
    else
      {
        t = q_31;
        t = xtc_transform_term_2_0(l_6, pass_verbose_0_0, t);
      }
    {
      ATerm u_31 = t;
      int v_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_31 = t;
          int x_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(x_31);
            }
          else
            {
              t = w_31;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(v_31);
          t = xtc_transform_file_2_0(m_6, pass_verbose_0_0, t);
        }
      else
        {
          t = u_31;
          t = xtc_transform_term_2_0(n_6, pass_verbose_0_0, t);
        }
    }
  }
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm j_23 = NULL;
  t = term_z_31;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  j_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_23), term_a_32);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm k_23 = NULL;
  t = term_z_31;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  k_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_23), term_a_32);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm io_pp_c_0_0 (ATerm t)
{
  t = option_wrap_4_0(t_5, default_usage_0_0, _id, u_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_c_0_0(t);
  return(t);
}
