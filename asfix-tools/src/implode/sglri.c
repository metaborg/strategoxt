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
ATerm term_p_32;
ATerm term_o_32;
ATerm term_z_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_c_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_c_29;
ATerm term_t_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_s_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_r_26;
ATerm term_m_26;
ATerm term_w_25;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_y_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_j_22;
ATerm term_h_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_c_20;
ATerm term_n_19;
ATerm term_r_16;
ATerm term_o_16;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_k_14;
ATerm term_g_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_d_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_n_11;
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
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_c_7;
ATerm term_z_6;
ATerm term_w_6;
ATerm term_v_6;
void init_constant_terms (void)
{
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_8, term_h_8, term_i_8);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_8, term_l_8, term_n_8);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_8, term_w_8, term_x_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_9, term_b_9, term_e_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_9, term_r_9, term_s_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_9, term_a_10, term_c_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_10, term_g_10, term_i_10);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_10, term_l_10, term_m_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_10, term_p_10, term_q_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_10, term_t_10, term_u_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_x_10, term_y_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_d_11, term_e_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_l_11, term_n_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_w_11, term_x_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_a_12, term_b_12);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_e_12, term_f_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_k_12, term_l_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_o_12, term_t_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_h_13, term_i_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_n_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_s_13, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_y_13, term_z_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_g_14, term_k_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_t_14, term_u_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_a_15, term_d_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_l_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_s_15, term_t_15);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_26);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym__3, term_s_27, term_t_30, term_h_22);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm i_72 (ATerm), ATerm);
ATerm c_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm);
ATerm e_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm o_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm x_70 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm a_88 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm union_1_0 (ATerm g_80 (ATerm), ATerm);
ATerm q_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm e_88 (ATerm), ATerm);
ATerm d_7 (ATerm x_6, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm u_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm b_1 (ATerm);
ATerm d_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm p_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm m_1 (ATerm);
ATerm o_1 (ATerm);
ATerm v_1 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm assert_1_0 (ATerm t_86 (ATerm), ATerm);
ATerm x_9 (ATerm m_9, ATerm);
ATerm z_9 (ATerm o_9, ATerm p_9, ATerm q_9, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm m_68 (ATerm), ATerm);
ATerm get_parse_table_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm e_2 (ATerm);
ATerm sglr_2_0 (ATerm q_69 (ATerm), ATerm r_69 (ATerm), ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm parse_and_implode_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm q_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm p_86 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm u_89 (ATerm), ATerm);
ATerm t_2 (ATerm);
ATerm xtc_io_1_0 (ATerm v_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm z_2 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm sglri_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm t_4 (ATerm);
ATerm need_help_1_0 (ATerm w_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm t_68 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_76 (ATerm), ATerm);
ATerm _2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm b_76 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm t_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm parse_options_p__1_0 (ATerm u_93 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm parse_options_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm);
ATerm l_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL;
  v_0 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_v_6;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          w_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(w_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm i_72 (ATerm), ATerm t)
{
  ATerm a_1 = NULL,c_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym__2))
    {
      a_1 = ATgetArgument(t, 0);
      c_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_1, term_w_6);
  t = open_stream_0_0(t);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_1, c_1);
  t = i_72(t);
  t = fclose_0_0(t);
  t = c_1;
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_6 = ATgetArgument(t, 0);
      if(match_cons(y_6, sym_Stream_1))
        {
          q_1 = ATgetArgument(y_6, 0);
        }
      else
        _fail(t);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(q_1, r_1);
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_1);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm l_1 = NULL,p_1 = NULL;
  l_1 = t;
  t = xtc_new_file_0_0(t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_1, l_1);
  t = WriteToFile_1_0(c_0, t);
  t = SSL_close_file(p_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, p_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(r_90, s_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm u_1 = NULL;
  u_1 = t;
  t = SSL_explode_string(u_1);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm t_1 = NULL;
  t = map_1_0(e_0, t);
  t = concat_0_0(t);
  t_1 = t;
  t = SSL_implode_string(t_1);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm b_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  b_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      d_3 = ATgetArgument(t, 0);
      {
        ATerm z_0 = NULL;
        t = SSL_int_to_string(d_3);
        z_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_7), z_0), term_z_6);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm n_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          d_3 = ATgetArgument(t, 0);
          e_3 = ATgetArgument(t, 1);
          f_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(e_3);
      n_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_3), term_i_7), n_1), term_h_7), d_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm o_76 (ATerm), ATerm t)
{
  ATerm i_3 = NULL;
  ATerm f_0 (ATerm t)
  {
    t = o_76(t);
    if(((i_3 != NULL) && (i_3 != t)))
      _fail(t);
    else
      i_3 = t;
    return(t);
  }
  t = fetch_1_0(f_0, t);
  t = not_null(i_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm k_3 = NULL;
  k_3 = t;
  {
    ATerm k_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_15), term_m_15), term_i_15), term_v_14), term_o_14), term_b_14), term_u_13), term_q_13), term_j_13), term_a_13), term_u_12), term_m_12), term_g_12), term_c_12), term_y_11), term_p_11), term_j_11), term_z_10), term_v_10), term_r_10), term_n_10), term_j_10), term_d_10), term_w_9), term_l_9), term_z_8), term_o_8), term_j_8);
        {
          ATerm i_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm v_15 = ATgetArgument(t, 0);
                if((k_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm w_15 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(i_0, t);
        }
        ;
        LocalPopChoice(x_7);
      }
    else
      {
        t = k_7;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, k_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm q_3 = NULL;
  q_3 = t;
  {
    ATerm x_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 = NULL,a_2 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm f_16 = ATgetArgument(t, 0);
            y_3 = ATgetArgument(t, 1);
            {
              ATerm g_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = y_3;
        {
          ATerm h_16 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_16;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          a_2 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_o_16, (ATerm) ATinsert(ATinsert(ATempty, a_2), term_r_16));
        }
        ;
        LocalPopChoice(y_15);
      }
    else
      {
        t = x_15;
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
ATerm fork_and_wait_1_0 (ATerm x_70 (ATerm), ATerm t)
{
  ATerm e_4 = NULL,g_4 = NULL;
  e_4 = t;
  t = fork_0_0(t);
  g_4 = t;
  {
    ATerm s_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_4;
        t = x_70(t);
        ;
        LocalPopChoice(u_16);
      }
    else
      {
        t = s_16;
        t = SSL_waitpid(g_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_16 = ATgetArgument(t, 0);
            if(((ATgetType(v_16) != AT_INT) || (ATgetInt((ATermInt) v_16) != 0)))
              _fail(t);
            {
              ATerm x_16 = ATgetArgument(t, 1);
            }
            {
              ATerm y_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_4;
      }
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_4 = NULL,s_4 = NULL;
      l_4 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_2 = NULL;
            t = eval_config_0_0(t);
            f_2 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), f_2);
            t = f_2;
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
          }
        s_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_4, term_t_14);
        t = geq_0_0(t);
        t = l_4;
        t = b_88(t);
      }
      ;
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_5 = NULL,e_5 = NULL;
      c_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm f_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_2 = NULL;
            t = eval_config_0_0(t);
            j_2 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_2);
            t = j_2;
            ;
            LocalPopChoice(g_17);
          }
        else
          {
            t = f_17;
          }
        e_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_5, term_d_11);
        t = geq_0_0(t);
        t = c_5;
        t = a_88(t);
      }
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = d_17;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm h_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_5 = NULL,j_5 = NULL;
      f_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm m_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_2 = NULL;
            t = eval_config_0_0(t);
            y_2 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), y_2);
            t = y_2;
            ;
            LocalPopChoice(o_17);
          }
        else
          {
            t = m_17;
          }
        j_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_5, term_b_9);
        t = geq_0_0(t);
        t = f_5;
        t = c_88(t);
      }
      ;
      LocalPopChoice(l_17);
    }
  else
    {
      t = h_17;
    }
  return(t);
}
ATerm union_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL;
  if(match_cons(t, sym__2))
    {
      n_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5;
  {
    ATerm r_5 (ATerm t)
    {
      ATerm q_17 = t;
      int t_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = o_5;
          ;
          LocalPopChoice(t_17);
        }
      else
        {
          t = q_17;
          {
            ATerm w_17 = t;
            int x_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_3 = NULL,c_3 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    a_3 = ATgetFirst((ATermList) t);
                    c_3 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = o_5;
                {
                  ATerm p_0 (ATerm t)
                  {
                    ATerm j_3 = NULL;
                    j_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_3, j_3);
                    t = g_80(t);
                    return(t);
                  }
                  t = fetch_1_0(p_0, t);
                  t = c_3;
                  t = r_5(t);
                }
                ;
                LocalPopChoice(x_17);
              }
            else
              {
                t = w_17;
                t = Cons_2_0(_id, r_5, t);
              }
          }
        }
      return(t);
    }
    t = r_5(t);
  }
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm k_6 = NULL;
  if(match_cons(t, sym__2))
    {
      k_6 = ATgetArgument(t, 0);
      if((k_6 != ATgetArgument(t, 1)))
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
  ATerm v_5 = NULL,w_5 = NULL,z_5 = NULL,a_6 = NULL,g_6 = NULL;
  if(match_cons(t, sym__3))
    {
      v_5 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
      z_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_5, w_5);
  {
    ATerm y_17 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_18 = ATgetArgument(t, 0);
            ATerm n_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_5, w_5);
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = y_17;
        t = (ATerm) ATempty;
      }
    a_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_6, z_5);
    t = union_1_0(q_0, t);
    g_6 = t;
    t = SSL_table_put(v_5, w_5, g_6);
    t = (ATerm) ATmakeAppl(sym__3, v_5, w_5, z_5);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL;
  if(match_cons(t, sym__2))
    {
      n_6 = ATgetArgument(t, 0);
      m_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6;
  {
    ATerm r_0 (ATerm t)
    {
      ATerm o_6 = NULL,p_6 = NULL;
      if(match_cons(t, sym__2))
        {
          o_6 = ATgetArgument(t, 0);
          p_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, n_6, o_6, p_6);
      t = e_88(t);
      return(t);
    }
    t = map_1_0(r_0, t);
  }
  return(t);
}
ATerm d_7 (ATerm x_6, ATerm t)
{
  t = SSL_fclose(x_6);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL;
  b_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_7 = ATgetArgument(t, 0);
      {
        ATerm o_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_7);
            ;
            LocalPopChoice(q_18);
          }
        else
          {
            t = o_18;
            t = d_7(b_7, t);
          }
      }
    }
  else
    {
      t = d_7(b_7, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_7 = NULL;
  t = SSL_stdin_stream();
  e_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_7);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_7 = NULL;
  t = SSL_stdout_stream();
  f_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_7);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_7 = NULL;
  t = SSL_stderr_stream();
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_7);
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm o_7 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      o_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7;
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm s_7 = NULL;
  s_7 = t;
  t = SSL_is_string(s_7);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_18 = ATgetArgument(t, 0);
      ATerm u_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_4 = NULL,m_4 = NULL;
        f_4 = t;
        t = SSL_explode_term(f_4);
        if(match_cons(t, sym__2))
          {
            ATerm x_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_18) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm y_18 = ATgetArgument(t, 1);
              if(((ATgetType(y_18) == AT_LIST) && !(ATisEmpty(y_18))))
                {
                  m_4 = ATgetFirst((ATermList) y_18);
                  {
                    ATerm b_19 = (ATerm) ATgetNext((ATermList) y_18);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_4;
        if(match_cons(t, sym_stderr_0))
          {
            t = m_4;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = m_4;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = m_4;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        {
          ATerm c_19 = t;
          int d_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
              t = _2_0(s_0, _id, t);
              if(match_cons(t, sym__2))
                {
                  l_7 = ATgetArgument(t, 0);
                  m_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(l_7, m_7);
              n_7 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, n_7);
              ;
              LocalPopChoice(d_19);
            }
          else
            {
              t = c_19;
              {
                ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
                t = _2_0(t_0, _id, t);
                if(match_cons(t, sym__2))
                  {
                    p_7 = ATgetArgument(t, 0);
                    q_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(p_7, q_7);
                r_7 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, r_7);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_7 = NULL;
      w_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_7, term_n_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      {
        ATerm n_4 = NULL;
        n_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_4), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = n_4;
        _fail(t);
      }
    }
  t_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(v_7);
  u_7 = t;
  t = t_7;
  t = fclose_0_0(t);
  t = u_7;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm o_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_7 = NULL;
      y_7 = t;
      t = SSL_access(y_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(t_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = o_19;
      {
        ATerm y_19 = t;
        int z_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_4 = NULL;
            ATerm a_20 = t;
            if((PushChoice() == 0))
              {
                ATerm z_7 = NULL;
                z_7 = t;
                t = SSL_access(z_7, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_20;
              }
            r_4 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_4), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = r_4;
            ;
            LocalPopChoice(z_19);
          }
        else
          {
            t = y_19;
            {
              ATerm a_5 = NULL;
              a_5 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_5), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = a_5;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm i_5 = NULL;
  i_5 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_5), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
  t = i_5;
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm s_5 = NULL;
  s_5 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_5), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
  t = s_5;
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm d_8 = NULL;
  d_8 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = d_8;
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm e_8 = NULL;
  e_8 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
  t = e_8;
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm f_8 = NULL;
  f_8 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = f_8;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
  a_8 = t;
  t = if_verbose5_1_0(u_0, t);
  {
    ATerm b_20 = t;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, a_8));
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_20;
      }
    b_8 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, a_8));
    t = b_8;
    t = if_verbose4_1_0(x_0, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(y_0, t);
    c_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_c_20, c_8);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(b_1, t);
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, a_8), (ATerm) ATempty);
    t = (ATerm) ATmakeAppl(sym__3, term_c_20, (ATerm)ATmakeAppl(sym_Imported_1, a_8), (ATerm) ATempty);
    t = if_verbose4_1_0(d_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      {
        ATerm f_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_1 (ATerm t)
            {
              t = filter_1_0(v_83, t);
              return(t);
            }
            t = Cons_2_0(v_83, e_1, t);
            ;
            LocalPopChoice(j_20);
          }
        else
          {
            t = f_20;
            {
              ATerm m_8 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm k_20 = ATgetFirst((ATermList) t);
                  m_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = m_8;
              t = filter_1_0(v_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm p_85 (ATerm), ATerm t)
{
  ATerm q_8 (ATerm t)
  {
    ATerm l_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_85(t);
        t = q_8(t);
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = l_20;
      }
    return(t);
  }
  t = q_8(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_6 = NULL;
            t = eval_config_0_0(t);
            c_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), c_6);
            t = c_6;
            ;
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
          }
      }
      ;
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm v_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(y_20);
          }
        else
          {
            t = v_20;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm d_6 = NULL;
  d_6 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_6), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
  t = d_6;
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm z_20 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_20;
      }
  }
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm q_6 = NULL;
  q_6 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_6), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
  t = q_6;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_8 = NULL;
  t = if_verbose5_1_0(f_1, t);
  r_8 = t;
  {
    ATerm a_21 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(b_21);
      }
    else
      {
        t = a_21;
        {
          ATerm s_8 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          s_8 = t;
          t = repeat_1_0(h_1, t);
          t = s_8;
        }
      }
    t = r_8;
    t = if_verbose5_1_0(i_1, t);
  }
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm j_7 = NULL;
  j_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_7), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = j_7;
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm k_9 = NULL;
  k_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_9), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = k_9;
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm z_12 = NULL;
  t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
  t = map_1_0(v_1, t);
  z_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_12), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
  t = z_12;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm p_12 = NULL,y_12 = NULL;
  p_12 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), p_12);
  y_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_12, y_12);
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(j_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm k_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_8 = NULL,t_8 = NULL,v_8 = NULL;
            if(match_cons(t, sym__2))
              {
                p_8 = ATgetArgument(t, 0);
                t_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, p_8));
            {
              ATerm k_1 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((t_8 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((v_8 != NULL) && (v_8 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      v_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(k_1, t);
              t = not_null(v_8);
            }
            ;
            LocalPopChoice(n_21);
          }
        else
          {
            t = k_21;
            {
              ATerm f_9 = NULL,j_9 = NULL;
              f_9 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, f_9));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm q_21 = ATgetFirst((ATermList) t);
                  if(match_cons(q_21, sym__2))
                    {
                      ATerm s_21 = ATgetArgument(q_21, 0);
                      j_9 = ATgetArgument(q_21, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm r_21 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = j_9;
            }
          }
        t = if_verbose5_1_0(m_1, t);
      }
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      {
        ATerm y_8 = NULL;
        y_8 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), y_8), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_21), y_8), term_t_21);
        t = if_verbose5_1_0(o_1, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm assert_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym__2))
    {
      c_9 = ATgetArgument(t, 0);
      d_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_86(t);
  g_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_9, c_9, d_9);
  t = table_push_0_0(t);
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(g_9, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_9 = ATgetFirst((ATermList) t);
        i_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(g_9, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(i_9), (ATerm) ATinsert(CheckATermList(h_9), c_9)));
    t = (ATerm) ATmakeAppl(sym__2, c_9, d_9);
  }
  return(t);
}
ATerm x_9 (ATerm m_9, ATerm t)
{
  t = m_9;
  {
    ATerm b_22 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_22 = ATgetArgument(t, 0);
            ATerm d_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_22;
      }
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, m_9, term_w_6);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm z_9 (ATerm o_9, ATerm p_9, ATerm q_9, ATerm t)
{
  t = SSL_open_file(o_9, p_9);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
  t_9 = t;
  if(match_cons(t, sym__2))
    {
      u_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
      {
        ATerm e_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_9(t_9, t);
            ;
            LocalPopChoice(g_22);
          }
        else
          {
            t = e_22;
            t = z_9(u_9, v_9, t_9, t);
          }
      }
    }
  else
    {
      t = x_9(t_9, t);
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
  ATerm b_10 = NULL;
  t = term_h_22;
  t = new_0_0(t);
  b_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_10, term_j_22);
  t = conc_strings_0_0(t);
  {
    ATerm k_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_10 = NULL;
        e_10 = t;
        t = SSL_access(e_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(o_22);
      }
    else
      {
        t = k_22;
      }
  }
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_p_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm h_10 = NULL;
  t = new_file_0_0(t);
  h_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_10, term_w_6);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, h_10, term_h_22);
  t = assert_1_0(w_1, t);
  t = h_10;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL;
  b_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm e_16 = NULL,n_16 = NULL,v_19 = NULL,w_19 = NULL;
      t = b_11;
      t = xtc_new_file_0_0(t);
      e_16 = t;
      t = o_0(t);
      n_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_16, (ATerm) ATinsert(ATinsert(ATempty, e_16), term_q_22));
      {
        ATerm r_22 = t;
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
            t = n_16;
            {
              ATerm x_1 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, e_16), term_q_22);
                return(t);
              }
              t = at_end_1_0(x_1, t);
            }
            ;
            LocalPopChoice(t_22);
          }
        else
          {
            t = r_22;
            {
              ATerm p_19 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, n_16, (ATerm) ATinsert(ATinsert(ATempty, e_16), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm x_22 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) x_22) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  p_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_19;
              t = concat_0_0(t);
            }
          }
        v_19 = t;
        t = n_0(t);
        t = xtc_find_0_0(t);
        w_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_19, v_19);
        {
          ATerm y_1 (ATerm t)
          {
            t = SSL_execvp(w_19, v_19);
            return(t);
          }
          t = fork_and_wait_1_0(y_1, t);
          t = SSL_close_file(e_16);
          t = (ATerm) ATmakeAppl(sym_FILE_1, e_16);
        }
      }
    }
  else
    {
      ATerm h_20 = NULL,i_20 = NULL,m_22 = NULL,n_22 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          c_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_11;
      t = xtc_new_file_0_0(t);
      h_20 = t;
      t = o_0(t);
      i_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_20), term_q_22), c_11), term_y_22));
      {
        ATerm z_22 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm c_23 = ATgetArgument(t, 0);
                ATerm d_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_20;
            {
              ATerm z_1 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_20), term_q_22), c_11), term_y_22);
                return(t);
              }
              t = at_end_1_0(z_1, t);
            }
            ;
            LocalPopChoice(b_23);
          }
        else
          {
            t = z_22;
            {
              ATerm l_22 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, i_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_20), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), c_11), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm f_23 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) f_23) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  l_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_22;
              t = concat_0_0(t);
            }
          }
        m_22 = t;
        t = n_0(t);
        t = xtc_find_0_0(t);
        n_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_22, m_22);
        {
          ATerm b_2 (ATerm t)
          {
            t = SSL_execvp(n_22, m_22);
            return(t);
          }
          t = fork_and_wait_1_0(b_2, t);
          t = SSL_close_file(h_20);
          t = (ATerm) ATmakeAppl(sym_FILE_1, h_20);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm m_68 (ATerm), ATerm t)
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
  t = m_68(t);
  h_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, h_11), f_11);
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue)));
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_22 = NULL;
            t = eval_config_0_0(t);
            s_22 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue)), s_22);
            t = s_22;
            ;
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
          }
      }
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue))));
      t = SSL_exit((ATerm) ATmakeInt(1));
      t = (ATerm) ATinsert(ATempty, term_l_23);
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm sglr_2_0 (ATerm q_69 (ATerm), ATerm r_69 (ATerm), ATerm t)
{
  ATerm n_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_23 = t;
      int s_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(s_23);
        }
      else
        {
          t = r_23;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(q_23);
      {
        ATerm d_2 (ATerm t)
        {
          ATerm m_11 = NULL,o_11 = NULL,q_11 = NULL;
          m_11 = t;
          t = q_69(t);
          o_11 = t;
          t = m_11;
          t = r_69(t);
          q_11 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(q_11), o_11), term_u_23);
          return(t);
        }
        t = xtc_transform_file_2_0(c_2, d_2, t);
      }
    }
  else
    {
      t = n_23;
      {
        ATerm g_2 (ATerm t)
        {
          ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
          s_11 = t;
          t = q_69(t);
          t_11 = t;
          t = s_11;
          t = r_69(t);
          u_11 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(u_11), t_11), term_u_23);
          return(t);
        }
        t = xtc_transform_term_2_0(e_2, g_2, t);
      }
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm v_11 = NULL;
  t = term_v_23;
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue)));
        {
          ATerm y_23 = t;
          int z_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_22 = NULL;
              t = eval_config_0_0(t);
              w_22 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue)), w_22);
              t = w_22;
              ;
              LocalPopChoice(z_23);
            }
          else
            {
              t = y_23;
            }
        }
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        t = (ATerm) ATempty;
      }
    v_11 = t;
    t = (ATerm) ATinsert(CheckATermList(v_11), term_b_24);
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_d_24;
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue)));
        {
          ATerm h_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_23 = NULL;
              t = eval_config_0_0(t);
              a_23 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue)), a_23);
              t = a_23;
              ;
              LocalPopChoice(j_24);
            }
          else
            {
              t = h_24;
            }
        }
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_d_24;
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue)));
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_23 = NULL;
              t = eval_config_0_0(t);
              e_23 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue)), e_23);
              t = e_23;
              ;
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
            }
        }
        ;
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  t = sglr_2_0(get_parse_table_0_0, h_2, t);
  {
    ATerm p_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(x_24);
          }
        else
          {
            t = u_24;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(t_24);
        t = xtc_transform_file_2_0(i_2, k_2, t);
      }
    else
      {
        t = p_24;
        t = xtc_transform_term_2_0(l_2, m_2, t);
      }
  }
  return(t);
}
ATerm copy_to_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  i_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_23 = NULL;
        t = i_12;
        t = m_0(t);
        i_23 = t;
        {
          ATerm a_25 = t;
          int b_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(b_25);
            }
          else
            {
              t = a_25;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(j_12, i_23);
          t = (ATerm) ATmakeAppl(sym_FILE_1, j_12);
        }
        ;
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
        {
          ATerm c_25 = t;
          int d_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_23 = NULL;
              t = i_12;
              t = m_0(t);
              o_23 = t;
              {
                ATerm e_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_25 = t;
                    int g_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(g_25);
                      }
                    else
                      {
                        t = f_25;
                        {
                          ATerm h_25 = t;
                          int i_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(i_25);
                            }
                          else
                            {
                              t = h_25;
                              {
                                ATerm p_23 = NULL;
                                p_23 = t;
                                if((j_12 != t))
                                  {
                                    _fail(t);
                                  }
                                t = p_23;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_25;
                  }
                t = SSL_copy(j_12, o_23);
                t = (ATerm) ATmakeAppl(sym_FILE_1, j_12);
              }
              ;
              LocalPopChoice(d_25);
            }
          else
            {
              t = c_25;
              t = i_12;
              t = m_0(t);
              if((j_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_12);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
  if(match_cons(t, sym__2))
    {
      q_12 = ATgetArgument(t, 0);
      r_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_12, r_12);
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_25 = ATgetArgument(t, 0);
            ATerm o_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(q_12, r_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_25 = ATgetFirst((ATermList) t);
            t_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_23;
        ;
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        t = (ATerm) ATempty;
      }
    s_12 = t;
    t = SSL_table_put(q_12, r_12, s_12);
    t = (ATerm) ATmakeAppl(sym__2, q_12, r_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,e_13 = NULL,f_13 = NULL;
  b_13 = t;
  t = q_86(t);
  c_13 = t;
  {
    ATerm q_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(c_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = q_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_13 = ATgetFirst((ATermList) t);
        e_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(c_13, (ATerm)ATmakeAppl(sym_Scopes_0), e_13);
    t = f_13;
    {
      ATerm n_2 (ATerm t)
      {
        ATerm g_13 = NULL;
        g_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_13, g_13);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(n_2, t);
      t = b_13;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_87(t);
      t = m_87(t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      t = m_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_86 (ATerm), ATerm t)
{
  ATerm m_13 = NULL,o_13 = NULL,p_13 = NULL;
  m_13 = t;
  t = p_86(t);
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_13, term_w_25);
  {
    ATerm x_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_26 = ATgetArgument(t, 0);
            ATerm c_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(o_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(a_26);
      }
    else
      {
        t = x_25;
        t = (ATerm) ATempty;
      }
    p_13 = t;
    t = SSL_table_put(o_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(p_13), (ATerm) ATempty));
    t = m_13;
  }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_p_22;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_14 = NULL;
      a_14 = t;
      t = SSL_remove(a_14);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_p_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm w_13 = NULL;
  t = begin_scope_1_0(o_2, t);
  {
    ATerm p_2 (ATerm t)
    {
      ATerm x_13 = NULL;
      x_13 = t;
      {
        ATerm f_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(g_26);
          }
        else
          {
            t = f_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((w_13 != NULL) && (w_13 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              w_13 = ATgetFirst((ATermList) t);
            {
              ATerm h_26 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(w_13);
        t = map_1_0(q_2, t);
        t = x_13;
        t = end_scope_1_0(r_2, t);
      }
      return(t);
    }
    t = restore_always_2_0(u_89, p_2, t);
  }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
      {
        ATerm k_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_24 = NULL;
            t = eval_config_0_0(t);
            e_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), e_24);
            t = e_24;
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
      t = term_m_26;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm v_89 (ATerm), ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_14 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm p_26 = t;
          int q_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_24 = NULL;
              t = eval_config_0_0(t);
              a_24 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), a_24);
              t = a_24;
              ;
              LocalPopChoice(q_26);
            }
          else
            {
              t = p_26;
            }
          d_14 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, d_14);
        }
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = term_v_6;
      }
    t = v_89(t);
    t = copy_to_1_0(t_2, t);
    return(t);
  }
  t = xtc_temp_files_1_0(s_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  e_14 = t;
  t = term_h_22;
  t = whoami_0_0(t);
  f_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), f_14), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = e_14;
  return(t);
}
ATerm u_2 (ATerm t)
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
ATerm v_2 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL;
  i_14 = t;
  t = SSL_string_to_int(i_14);
  j_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), j_14);
  t = i_14;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_r_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_2, v_2, w_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
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
ATerm z_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_u_26;
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_v_26;
  return(t);
}
ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  m_14 = t;
  t = SSL_string_to_int(m_14);
  n_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_14);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_14);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_w_26;
  return(t);
}
ATerm n_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_x_26;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_y_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_2, z_2, g_3, t);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_3, l_3, m_3, t);
            ;
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            t = Option_3_0(n_3, o_3, p_3, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_14 = NULL;
      t = term_h_22;
      t = d_0(t);
      s_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_27, term_e_27, s_14);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm w_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_14 = ATgetFirst((ATermList) t);
          r_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_14;
      t = a_0(t);
      t = term_h_22;
      t = b_0(t);
      w_14 = t;
      t = (ATerm) ATinsert(CheckATermList(r_14), w_14);
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  if(match_string(t, "-o"))
    {
      t = y_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_14;
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm z_14 = NULL;
  z_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), z_14);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_14);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, s_3, t_3, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm b_15 = NULL;
  b_15 = t;
  if(match_string(t, "-i"))
    {
      t = b_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_15;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm c_15 = NULL;
  c_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), c_15);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_15);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_3, v_3, w_3, t);
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  if(match_cons(t, sym__2))
    {
      e_15 = ATgetArgument(t, 0);
      f_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15;
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_15);
        {
          ATerm j_27 = t;
          int l_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_24 = NULL;
              t = eval_config_0_0(t);
              i_24 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_15, i_24);
              t = i_24;
              ;
              LocalPopChoice(l_27);
            }
          else
            {
              t = j_27;
            }
        }
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = (ATerm) ATempty;
      }
    g_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_15, g_15);
    {
      ATerm m_27 = t;
      int n_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm o_27 = ATgetArgument(t, 0);
              ATerm p_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_15;
          {
            ATerm x_3 (ATerm t)
            {
              t = g_15;
              return(t);
            }
            t = at_end_1_0(x_3, t);
          }
          ;
          LocalPopChoice(n_27);
        }
      else
        {
          t = m_27;
          {
            ATerm m_24 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, f_15, g_15));
            if(match_cons(t, sym__2))
              {
                ATerm q_27 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) q_27) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                m_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_24;
            t = concat_0_0(t);
          }
        }
      h_15 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_15, h_15);
      t = (ATerm) ATmakeAppl(sym__3, term_s_27, e_15, h_15);
    }
  }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym__3))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
      q_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_15, p_15);
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_27 = ATgetArgument(t, 0);
            ATerm w_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(o_15, p_15);
        ;
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        t = (ATerm) ATempty;
      }
    r_15 = t;
    t = SSL_table_put(o_15, p_15, (ATerm) ATinsert(CheckATermList(r_15), q_15));
    t = (ATerm) ATmakeAppl(sym__3, o_15, p_15, q_15);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_16 = NULL;
      t = term_h_22;
      t = l_0(t);
      d_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_27, term_e_27, d_16);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm i_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_15 = ATgetFirst((ATermList) t);
          a_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_16 = ATgetFirst((ATermList) t);
          c_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_15;
      t = j_0(t);
      t = b_16;
      t = k_0(t);
      i_16 = t;
      t = (ATerm) ATinsert(CheckATermList(c_16), i_16);
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm j_16 = NULL;
  j_16 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue)), j_16);
  t = j_16;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm k_16 = NULL;
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_23, k_16);
  t = extend_config_0_0(t);
  t = k_16;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_y_27;
  return(t);
}
ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm l_16 = NULL;
  l_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_24, l_16);
  t = extend_config_0_0(t);
  t = l_16;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_z_27;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(z_3, a_4, b_4, t);
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
            t = ArgOption_3_0(c_4, d_4, h_4, t);
            ;
            LocalPopChoice(d_28);
          }
        else
          {
            t = c_28;
            t = ArgOption_3_0(i_4, j_4, k_4, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_22;
  t = whoami_0_0(t);
  m_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), m_16));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_24 = NULL;
        t = eval_config_0_0(t);
        q_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_24);
        t = q_24;
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_82(t);
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      {
        ATerm p_16 = NULL,q_16 = NULL,t_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_16 = ATgetFirst((ATermList) t);
            q_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_16;
        t = foldr_2_0(s_82, t_82, t);
        t_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_16, t_16);
        t = t_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_t_26;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL;
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(v_24, w_24);
        ;
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
        t = SSL_addr(v_24, w_24);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_16 = NULL,r_24 = NULL,s_24 = NULL;
  t = times_0_0(t);
  r_24 = t;
  t = SSL_explode_term(r_24);
  if(match_cons(t, sym__2))
    {
      ATerm k_28 = ATgetArgument(t, 0);
      s_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_24;
  t = foldr_2_0(o_4, p_4, t);
  w_16 = t;
  t = SSL_TicksToSeconds(w_16);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
  i_17 = t;
  if(match_cons(t, sym__2))
    {
      j_17 = ATgetArgument(t, 0);
      k_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_17;
        if((j_17 != t))
          {
            _fail(t);
          }
        t = i_17;
        ;
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = i_17;
        {
          ATerm n_28 = t;
          int o_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_17, k_17);
              ;
              LocalPopChoice(o_28);
            }
          else
            {
              t = n_28;
              t = SSL_gtr(j_17, k_17);
            }
          t = (ATerm) ATmakeAppl(sym__2, j_17, k_17);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_17 = NULL,p_17 = NULL;
      n_17 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm r_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_25 = NULL;
            t = eval_config_0_0(t);
            j_25 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_25);
            t = j_25;
            ;
            LocalPopChoice(s_28);
          }
        else
          {
            t = r_28;
          }
        p_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_17, term_h_8);
        t = geq_0_0(t);
        t = n_17;
        t = x_87(t);
      }
      ;
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL;
  t = run_time_0_0(t);
  r_17 = t;
  t = term_h_22;
  t = whoami_0_0(t);
  s_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), r_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), s_17));
  t = (ATerm) ATmakeAppl(sym__2, term_o_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_28), r_17), term_h_7), s_17));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      {
        ATerm w_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(x_28);
          }
        else
          {
            t = w_28;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm a_29 = t;
        int b_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_25 = NULL;
            t = eval_config_0_0(t);
            n_25 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), n_25);
            t = n_25;
            ;
            LocalPopChoice(b_29);
          }
        else
          {
            t = a_29;
          }
      }
      ;
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      t = fetch_1_0(t_4, t);
    }
  t = w_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_17 = ATgetFirst((ATermList) t);
      v_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_17 = NULL,a_18 = NULL;
        t = v_17;
        t = h_0(t);
        z_17 = t;
        t = u_17;
        t = g_0(t);
        a_18 = t;
        t = v_17;
        {
          ATerm u_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(z_17), a_18);
            return(t);
          }
          t = reverse_acc_2_0(g_0, u_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_22;
      t = h_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm t_68 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
  e_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_18);
  b_18 = t;
  t = c_18;
  t = t_68(t);
  d_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, d_18), b_18);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm i_18 = NULL;
  i_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_18), term_c_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_18 = NULL;
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_25 = NULL;
            t = eval_config_0_0(t);
            r_25 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_25);
            t = r_25;
            ;
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
          }
        h_18 = t;
      }
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      {
        ATerm v_4 (ATerm t)
        {
          ATerm w_4 (ATerm t)
          {
            if(((h_18 != NULL) && (h_18 != t)))
              _fail(t);
            else
              h_18 = t;
            return(t);
          }
          t = Program_1_0(w_4, t);
          return(t);
        }
        t = fetch_1_0(v_4, t);
      }
    }
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_29), not_null(h_18)), term_j_29);
        t = echo_0_0(t);
        ;
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
      }
    t = term_l_29;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    t = reverse_acc_2_0(_id, x_4, t);
    t = map_1_0(y_4, t);
    {
      ATerm m_29 = t;
      int n_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_29), term_q_29), term_p_29), term_o_29);
          t = echo_0_0(t);
          ;
          LocalPopChoice(n_29);
        }
      else
        {
          t = m_29;
        }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm u_68 (ATerm), ATerm t)
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
  t = u_68(t);
  l_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, l_18), j_18);
  return(t);
}
ATerm fetch_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm p_18 (ATerm t)
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_76, _id, t);
        ;
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        t = Cons_2_0(_id, p_18, t);
      }
    return(t);
  }
  t = p_18(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL;
  r_18 = t;
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_29 = ATgetFirst((ATermList) t);
                ATerm x_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_18;
          }
        ;
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = (ATerm) ATinsert(ATempty, r_18);
      }
    s_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), s_18);
    t = r_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_25 = NULL;
        t = eval_config_0_0(t);
        v_25 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_25);
        t = v_25;
        ;
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
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
          ATerm z_4 (ATerm t)
          {
            t = a_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(z_4, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_76 (ATerm), ATerm t)
{
  ATerm g_19 (ATerm t)
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_19, t);
        ;
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_76(t);
      }
    return(t);
  }
  t = g_19(t);
  return(t);
}
ATerm _2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm t)
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
  t = y_58(t);
  k_19 = t;
  t = j_19;
  t = z_58(t);
  l_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, k_19, l_19), h_19);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm r_19 = NULL;
  r_19 = t;
  t = SSL_explode_string(r_19);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm s_19 = NULL;
  s_19 = t;
  t = SSL_explode_string(s_19);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm q_19 = NULL;
  t = _2_0(b_5, d_5, t);
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_19 = NULL,x_19 = NULL;
        if(match_cons(t, sym__2))
          {
            u_19 = ATgetArgument(t, 0);
            x_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_19;
        {
          ATerm g_5 (ATerm t)
          {
            t = x_19;
            return(t);
          }
          t = at_end_1_0(g_5, t);
        }
        ;
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        {
          ATerm y_25 = NULL,z_25 = NULL;
          y_25 = t;
          t = SSL_explode_term(y_25);
          if(match_cons(t, sym__2))
            {
              ATerm g_30 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_30) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              z_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_25;
          t = concat_0_0(t);
        }
      }
    q_19 = t;
    t = SSL_implode_string(q_19);
  }
  return(t);
}
ATerm map_1_0 (ATerm b_76 (ATerm), ATerm t)
{
  ATerm g_20 (ATerm t)
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        t = Cons_2_0(b_76, g_20, t);
      }
    return(t);
  }
  t = g_20(t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(k_30);
    }
  else
    {
      t = j_30;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_20 = NULL;
      m_20 = t;
      t = SSL_is_string(m_20);
      ;
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      {
        ATerm n_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_5, t);
            ;
            LocalPopChoice(o_30);
          }
        else
          {
            t = n_30;
            {
              ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
              q_20 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_20 = ATgetArgument(t, 0);
                  t = r_20;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_20 = ATgetArgument(t, 0);
                      t = r_20;
                      {
                        ATerm p_30 = t;
                        int q_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_20);
                            {
                              ATerm r_30 = t;
                              int s_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm s_26 = NULL;
                                  t = eval_config_0_0(t);
                                  s_26 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_20, s_26);
                                  t = s_26;
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
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_20), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = r_20;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_20 = NULL,x_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_20 = ATgetArgument(t, 0);
                          s_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_20;
                      t = eval_config_0_0(t);
                      w_20 = t;
                      t = s_20;
                      t = eval_config_0_0(t);
                      x_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_20, x_20);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_u_30;
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_v_30;
  return(t);
}
ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_w_30;
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_x_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_5, l_5, m_5, t);
      ;
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      t = Option_3_0(p_5, q_5, t_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL;
  h_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_21 = ATgetFirst((ATermList) t);
      e_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_21);
  c_21 = t;
  t = d_21;
  t = n_63(t);
  f_21 = t;
  t = e_21;
  t = o_63(t);
  g_21 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(g_21), f_21), c_21);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm m_21 = NULL;
  m_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_21);
  t = (ATerm) ATmakeAppl(sym_Program_1, m_21);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_31;
        t = u_93(t);
        ;
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
      }
    t = l_21;
    {
      ATerm x_5 (ATerm t)
      {
        ATerm d_31 = t;
        int e_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_31 = t;
            int g_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(g_31);
              }
            else
              {
                t = f_31;
                t = u_93(t);
                t = Cons_2_0(_id, x_5, t);
              }
            ;
            LocalPopChoice(e_31);
          }
        else
          {
            t = d_31;
            {
              ATerm o_21 = NULL,p_21 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_21 = ATgetFirst((ATermList) t);
                  p_21 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_21), (ATerm) ATmakeAppl(sym_Undefined_1, o_21));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_5, x_5, t);
    }
  }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm a_22 = NULL;
  a_22 = t;
  if(match_string(t, "--help"))
    {
      t = a_22;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_22;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_22;
        }
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_h_31;
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_i_31;
  return(t);
}
ATerm h_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = x_21;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm j_31 = t;
      int k_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_93(t);
          ;
          LocalPopChoice(k_31);
        }
      else
        {
          t = j_31;
          {
            ATerm l_31 = t;
            int m_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_6, e_6, f_6, t);
                ;
                LocalPopChoice(m_31);
              }
            else
              {
                t = l_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_5, t);
    {
      ATerm n_31 = t;
      int o_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_22 = NULL;
          f_22 = t;
          {
            ATerm p_31 = t;
            int q_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = f_22;
                {
                  ATerm r_31 = t;
                  int s_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm t_31 = t;
                        int u_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm k_27 = NULL;
                            t = eval_config_0_0(t);
                            k_27 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), k_27);
                            t = k_27;
                            ;
                            LocalPopChoice(u_31);
                          }
                        else
                          {
                            t = t_31;
                          }
                      }
                      ;
                      LocalPopChoice(s_31);
                    }
                  else
                    {
                      t = r_31;
                      t = fetch_1_0(h_6, t);
                    }
                  t = f_22;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(q_31);
              }
            else
              {
                t = p_31;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm v_31 = t;
                  int w_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_27 = NULL;
                      t = eval_config_0_0(t);
                      r_27 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), r_27);
                      t = r_27;
                      ;
                      LocalPopChoice(w_31);
                    }
                  else
                    {
                      t = v_31;
                    }
                  t = f_22;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(o_31);
        }
      else
        {
          t = n_31;
          {
            ATerm x_31 = t;
            int y_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_6 (ATerm t)
                {
                  ATerm j_6 (ATerm t)
                  {
                    if(((y_21 != NULL) && (y_21 != t)))
                      _fail(t);
                    else
                      y_21 = t;
                    return(t);
                  }
                  t = Undefined_1_0(j_6, t);
                  return(t);
                }
                t = fetch_1_0(i_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_21)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_o_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_21)), term_z_31));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(y_31);
              }
            else
              {
                t = x_31;
              }
          }
        }
      z_21 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = z_21;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm t)
{
  ATerm i_22 = NULL;
  t = parse_options_1_0(y_91, t);
  i_22 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), i_22);
  t = i_22;
  t = a_92(t);
  {
    ATerm a_32 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_91, t);
        ;
        LocalPopChoice(b_32);
      }
    else
      {
        t = a_32;
        {
          ATerm c_32 = t;
          int d_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_32);
            }
          else
            {
              t = c_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sglri_options_0_0(t);
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
      {
        ATerm g_32 = t;
        int h_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(h_32);
          }
        else
          {
            t = g_32;
            {
              ATerm i_32 = t;
              int j_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(j_32);
                }
              else
                {
                  t = i_32;
                  {
                    ATerm k_32 = t;
                    int l_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(s_6, t_6, u_6, t);
                        ;
                        LocalPopChoice(l_32);
                      }
                    else
                      {
                        t = k_32;
                        {
                          ATerm m_32 = t;
                          int n_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(n_32);
                            }
                          else
                            {
                              t = m_32;
                              t = keep_option_0_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = xtc_io_1_0(parse_and_implode_0_0, t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_o_32;
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(l_6, default_usage_0_0, _id, r_6, t);
  return(t);
}
