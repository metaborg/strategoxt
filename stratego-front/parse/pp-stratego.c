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
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_e_30;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_h_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_o_28;
ATerm term_j_28;
ATerm term_y_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_u_26;
ATerm term_p_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_d_26;
ATerm term_l_25;
ATerm term_o_23;
ATerm term_m_23;
ATerm term_j_22;
ATerm term_v_21;
ATerm term_v_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_j_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_t_8;
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
ATerm term_z_7;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_s_7;
ATerm term_p_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_h_7;
ATerm term_f_7;
ATerm term_b_7;
ATerm term_h_6;
void init_constant_terms (void)
{
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_7, term_b_7, term_w_7);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_7, term_a_8, term_c_8);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_8, term_f_8, term_g_8);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_8, term_n_8, term_o_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_8, term_a_9, term_b_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_9, term_m_9, term_n_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_9, term_q_9, term_s_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_b_10, term_c_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_10, term_p_10, term_r_10);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_11, term_d_11, term_e_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_l_11, term_m_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_11, term_q_11, term_t_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_11, term_w_11, term_x_11);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_h_12, term_i_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_s_12, term_t_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_x_12, term_y_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_c_13, term_d_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_k_13, term_l_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_v_13, term_w_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_e_14, term_f_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_j_14, term_k_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_14, term_p_14, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_x_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_c_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_v_15, term_w_15);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_26);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym__3, term_x_28, term_y_28, term_g_18);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm c_72 (ATerm), ATerm);
ATerm o_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm);
ATerm p_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm r_70 (ATerm), ATerm);
ATerm assert_1_0 (ATerm n_86 (ATerm), ATerm);
ATerm p_5 (ATerm y_4, ATerm);
ATerm q_5 (ATerm e_5, ATerm f_5, ATerm g_5, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm t_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm m_68 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm v_87 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm u_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm union_1_0 (ATerm a_80 (ATerm), ATerm);
ATerm d_1 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm x_9 (ATerm r_9, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm p_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm j_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm z_1 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm _2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm k_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm j_86 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm o_89 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm xtc_io_1_0 (ATerm p_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm pp_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm a_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm need_help_1_0 (ATerm q_91 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_75 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm t_68 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm s_4 (ATerm);
ATerm u_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm o_93 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm h_5 (ATerm);
ATerm parse_options_1_0 (ATerm n_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm i_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm pp_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,n_0 = NULL;
  t = term_h_6;
  {
    ATerm x_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
        {
          ATerm z_6 = t;
          int a_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_0 = NULL;
              t = eval_config_0_0(t);
              r_0 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_0);
              t = r_0;
              ;
              LocalPopChoice(a_7);
            }
          else
            {
              t = z_6;
            }
        }
        ;
        LocalPopChoice(y_6);
      }
    else
      {
        t = x_6;
        t = term_b_7;
      }
    c_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_0, term_b_7);
    {
      ATerm d_7 = t;
      int e_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(c_0, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(e_7);
        }
      else
        {
          t = d_7;
          t = SSL_subtr(c_0, (ATerm) ATmakeInt(1));
        }
      n_0 = t;
      t = SSL_int_to_string(n_0);
      e_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, e_0), term_h_6);
    }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL;
  v_0 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_f_7;
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
ATerm WriteToFile_1_0 (ATerm c_72 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      b_1 = ATgetArgument(t, 0);
      c_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_1, term_h_7);
  t = open_stream_0_0(t);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_1, c_1);
  t = c_72(t);
  t = fclose_0_0(t);
  t = c_1;
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_7 = ATgetArgument(t, 0);
      if(match_cons(j_7, sym_Stream_1))
        {
          i_1 = ATgetArgument(j_7, 0);
        }
      else
        _fail(t);
      j_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(i_1, j_1);
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_1);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL;
  g_1 = t;
  t = xtc_new_file_0_0(t);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, g_1);
  t = WriteToFile_1_0(o_0, t);
  t = SSL_close_file(h_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(l_90, m_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm p_1 = NULL;
  p_1 = t;
  t = SSL_explode_string(p_1);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm o_1 = NULL;
  t = map_1_0(p_0, t);
  t = concat_0_0(t);
  o_1 = t;
  t = SSL_implode_string(o_1);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,f_3 = NULL;
  a_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      b_3 = ATgetArgument(t, 0);
      {
        ATerm q_1 = NULL;
        t = SSL_int_to_string(b_3);
        q_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_7), q_1), term_k_7);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm a_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          b_3 = ATgetArgument(t, 0);
          c_3 = ATgetArgument(t, 1);
          f_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(c_3);
      a_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_3), term_s_7), a_2), term_p_7), b_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm i_3 = NULL;
  ATerm q_0 (ATerm t)
  {
    t = i_76(t);
    if(((i_3 != NULL) && (i_3 != t)))
      _fail(t);
    else
      i_3 = t;
    return(t);
  }
  t = fetch_1_0(q_0, t);
  t = not_null(i_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_3 = NULL;
  j_3 = t;
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_15), term_q_15), term_j_15), term_y_14), term_r_14), term_l_14), term_h_14), term_c_14), term_y_13), term_s_13), term_o_13), term_f_13), term_z_12), term_u_12), term_j_12), term_e_12), term_u_11), term_o_11), term_g_11), term_t_10), term_d_10), term_t_9), term_o_9), term_c_9), term_p_8), term_i_8), term_d_8), term_y_7);
        {
          ATerm s_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm c_16 = ATgetArgument(t, 0);
                if((j_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm f_16 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(s_0, t);
        }
        ;
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm p_3 = NULL;
  p_3 = t;
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 = NULL,n_2 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_16 = ATgetArgument(t, 0);
            y_3 = ATgetArgument(t, 1);
            {
              ATerm r_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = y_3;
        {
          ATerm t_16 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_16;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          n_2 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_w_16, (ATerm) ATinsert(ATinsert(ATempty, n_2), term_x_16));
        }
        ;
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
      }
    t = p_3;
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
  ATerm e_4 = NULL,f_4 = NULL;
  e_4 = t;
  t = fork_0_0(t);
  f_4 = t;
  {
    ATerm b_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_4;
        t = r_70(t);
        ;
        LocalPopChoice(d_17);
      }
    else
      {
        t = b_17;
        t = SSL_waitpid(f_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_17 = ATgetArgument(t, 0);
            if(((ATgetType(e_17) != AT_INT) || (ATgetInt((ATermInt) e_17) != 0)))
              _fail(t);
            {
              ATerm f_17 = ATgetArgument(t, 1);
            }
            {
              ATerm g_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_4;
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,t_4 = NULL;
  if(match_cons(t, sym__2))
    {
      m_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_86(t);
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_4, m_4, n_4);
  t = table_push_0_0(t);
  {
    ATerm j_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(o_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = j_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_4 = ATgetFirst((ATermList) t);
        t_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(o_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(t_4), (ATerm) ATinsert(CheckATermList(p_4), m_4)));
    t = (ATerm) ATmakeAppl(sym__2, m_4, n_4);
  }
  return(t);
}
ATerm p_5 (ATerm y_4, ATerm t)
{
  t = y_4;
  {
    ATerm q_17 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_17 = ATgetArgument(t, 0);
            ATerm w_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_17;
      }
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, y_4, term_h_7);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm q_5 (ATerm e_5, ATerm f_5, ATerm g_5, ATerm t)
{
  t = SSL_open_file(e_5, f_5);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,o_5 = NULL;
  k_5 = t;
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
      {
        ATerm x_17 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_5(k_5, t);
            ;
            LocalPopChoice(d_18);
          }
        else
          {
            t = x_17;
            t = q_5(l_5, o_5, k_5, t);
          }
      }
    }
  else
    {
      t = p_5(k_5, t);
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
  ATerm c_6 = NULL;
  t = term_g_18;
  t = new_0_0(t);
  c_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_6, term_h_18);
  t = conc_strings_0_0(t);
  {
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_6 = NULL;
        g_6 = t;
        t = SSL_access(g_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
      }
  }
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_m_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_6 = NULL;
  t = new_file_0_0(t);
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_6, term_h_7);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, j_6, term_g_18);
  t = assert_1_0(t_0, t);
  t = j_6;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm g_7 = NULL,i_7 = NULL;
  g_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm q_4 = NULL,r_4 = NULL,d_5 = NULL,j_5 = NULL;
      t = g_7;
      t = xtc_new_file_0_0(t);
      q_4 = t;
      t = m_0(t);
      r_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_4, (ATerm) ATinsert(ATinsert(ATempty, q_4), term_n_18));
      {
        ATerm q_18 = t;
        int r_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm s_18 = ATgetArgument(t, 0);
                ATerm t_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_4;
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, q_4), term_n_18);
                return(t);
              }
              t = at_end_1_0(u_0, t);
            }
            ;
            LocalPopChoice(r_18);
          }
        else
          {
            t = q_18;
            {
              ATerm c_5 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, r_4, (ATerm) ATinsert(ATinsert(ATempty, q_4), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm u_18 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_18) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  c_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_5;
              t = concat_0_0(t);
            }
          }
        d_5 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        j_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_5, d_5);
        {
          ATerm x_0 (ATerm t)
          {
            t = SSL_execvp(j_5, d_5);
            return(t);
          }
          t = fork_and_wait_1_0(x_0, t);
          t = SSL_close_file(q_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, q_4);
        }
      }
    }
  else
    {
      ATerm t_5 = NULL,u_5 = NULL,l_6 = NULL,m_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_7;
      t = xtc_new_file_0_0(t);
      t_5 = t;
      t = m_0(t);
      u_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_5), term_n_18), i_7), term_v_18));
      {
        ATerm y_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm b_19 = ATgetArgument(t, 0);
                ATerm c_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_5;
            {
              ATerm y_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_5), term_n_18), i_7), term_v_18);
                return(t);
              }
              t = at_end_1_0(y_0, t);
            }
            ;
            LocalPopChoice(a_19);
          }
        else
          {
            t = y_18;
            {
              ATerm k_6 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, u_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_5), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), i_7), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm e_19 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_19) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  k_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_6;
              t = concat_0_0(t);
            }
          }
        l_6 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        m_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_6, l_6);
        {
          ATerm z_0 (ATerm t)
          {
            t = SSL_execvp(m_6, l_6);
            return(t);
          }
          t = fork_and_wait_1_0(z_0, t);
          t = SSL_close_file(t_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, t_5);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm m_68 (ATerm), ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL,r_7 = NULL;
  r_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_7);
  m_7 = t;
  t = n_7;
  t = m_68(t);
  o_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, o_7), m_7);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_7 = NULL,b_8 = NULL;
      x_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm i_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_7 = NULL;
            t = eval_config_0_0(t);
            c_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_7);
            t = c_7;
            ;
            LocalPopChoice(k_19);
          }
        else
          {
            t = i_19;
          }
        b_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_8, term_t_14);
        t = geq_0_0(t);
        t = x_7;
        t = v_87(t);
      }
      ;
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  ATerm n_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_8 = NULL,j_8 = NULL;
      h_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_7 = NULL;
            t = eval_config_0_0(t);
            q_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_7);
            t = q_7;
            ;
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
          }
        j_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_8, term_q_11);
        t = geq_0_0(t);
        t = h_8;
        t = u_87(t);
      }
      ;
      LocalPopChoice(q_19);
    }
  else
    {
      t = n_19;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm t_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_8 = NULL,m_8 = NULL;
      k_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_8 = NULL;
            t = eval_config_0_0(t);
            u_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_8);
            t = u_8;
            ;
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
          }
        m_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_8, term_n_8);
        t = geq_0_0(t);
        t = k_8;
        t = w_87(t);
      }
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = t_19;
    }
  return(t);
}
ATerm union_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL;
  if(match_cons(t, sym__2))
    {
      q_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8;
  {
    ATerm s_8 (ATerm t)
    {
      ATerm i_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = r_8;
          ;
          LocalPopChoice(j_20);
        }
      else
        {
          t = i_20;
          {
            ATerm l_20 = t;
            int o_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_9 = NULL,k_9 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    i_9 = ATgetFirst((ATermList) t);
                    k_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = r_8;
                {
                  ATerm a_1 (ATerm t)
                  {
                    ATerm l_9 = NULL;
                    l_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, i_9, l_9);
                    t = a_80(t);
                    return(t);
                  }
                  t = fetch_1_0(a_1, t);
                  t = k_9;
                  t = s_8(t);
                }
                ;
                LocalPopChoice(o_20);
              }
            else
              {
                t = l_20;
                t = Cons_2_0(_id, s_8, t);
              }
          }
        }
      return(t);
    }
    t = s_8(t);
  }
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm d_9 = NULL;
  if(match_cons(t, sym__2))
    {
      d_9 = ATgetArgument(t, 0);
      if((d_9 != ATgetArgument(t, 1)))
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
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
  if(match_cons(t, sym__3))
    {
      v_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
      x_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_8, w_8);
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_20 = ATgetArgument(t, 0);
            ATerm y_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_8, w_8);
        ;
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        t = (ATerm) ATempty;
      }
    y_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_8, x_8);
    t = union_1_0(d_1, t);
    z_8 = t;
    t = SSL_table_put(v_8, w_8, z_8);
    t = (ATerm) ATmakeAppl(sym__3, v_8, w_8, x_8);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  if(match_cons(t, sym__2))
    {
      g_9 = ATgetArgument(t, 0);
      f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm h_9 = NULL,j_9 = NULL;
      if(match_cons(t, sym__2))
        {
          h_9 = ATgetArgument(t, 0);
          j_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, g_9, h_9, j_9);
      t = y_87(t);
      return(t);
    }
    t = map_1_0(f_1, t);
  }
  return(t);
}
ATerm x_9 (ATerm r_9, ATerm t)
{
  t = SSL_fclose(r_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL;
  v_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_9 = ATgetArgument(t, 0);
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_9);
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            t = x_9(v_9, t);
          }
      }
    }
  else
    {
      t = x_9(v_9, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_9 = NULL;
  t = SSL_stdin_stream();
  y_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_9 = NULL;
  t = SSL_stdout_stream();
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_10 = NULL;
  t = SSL_stderr_stream();
  a_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_10);
  return(t);
}
ATerm l_1 (ATerm t)
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
ATerm m_1 (ATerm t)
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
      ATerm d_21 = ATgetArgument(t, 0);
      ATerm g_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_12 = NULL,l_12 = NULL;
        k_12 = t;
        t = SSL_explode_term(k_12);
        if(match_cons(t, sym__2))
          {
            ATerm j_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_21 = ATgetArgument(t, 1);
              if(((ATgetType(k_21) == AT_LIST) && !(ATisEmpty(k_21))))
                {
                  l_12 = ATgetFirst((ATermList) k_21);
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
        t = l_12;
        if(match_cons(t, sym_stderr_0))
          {
            t = l_12;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = l_12;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = l_12;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        {
          ATerm q_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
              t = _2_0(l_1, _id, t);
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
              LocalPopChoice(r_21);
            }
          else
            {
              t = q_21;
              {
                ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
                t = _2_0(m_1, _id, t);
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
  ATerm n_10 = NULL,o_10 = NULL,q_10 = NULL;
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_10 = NULL;
      s_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_10, term_v_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      {
        ATerm w_12 = NULL;
        w_12 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_12), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = w_12;
        _fail(t);
      }
    }
  n_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(q_10);
  o_10 = t;
  t = n_10;
  t = fclose_0_0(t);
  t = o_10;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm w_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_10 = NULL;
      u_10 = t;
      t = SSL_access(u_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(z_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = w_21;
      {
        ATerm b_22 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_13 = NULL;
            ATerm f_22 = t;
            if((PushChoice() == 0))
              {
                ATerm v_10 = NULL;
                v_10 = t;
                t = SSL_access(v_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_22;
              }
            e_13 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_13), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = e_13;
            ;
            LocalPopChoice(c_22);
          }
        else
          {
            t = b_22;
            {
              ATerm u_13 = NULL;
              u_13 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_13), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = u_13;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm x_13 = NULL;
  x_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_13), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
  t = x_13;
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm g_14 = NULL;
  g_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_14), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
  t = g_14;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm z_10 = NULL;
  z_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = z_10;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm a_11 = NULL;
  a_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
  t = a_11;
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm b_11 = NULL;
  b_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = b_11;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
  w_10 = t;
  t = if_verbose5_1_0(n_1, t);
  {
    ATerm i_22 = t;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, w_10));
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_22;
      }
    x_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, w_10));
    t = x_10;
    t = if_verbose4_1_0(r_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(s_1, t);
    y_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_22, y_10);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(t_1, t);
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, w_10), (ATerm) ATempty);
    t = (ATerm) ATmakeAppl(sym__3, term_j_22, (ATerm)ATmakeAppl(sym_Imported_1, w_10), (ATerm) ATempty);
    t = if_verbose4_1_0(u_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_1 (ATerm t)
            {
              t = filter_1_0(p_83, t);
              return(t);
            }
            t = Cons_2_0(p_83, v_1, t);
            ;
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            {
              ATerm f_11 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm r_22 = ATgetFirst((ATermList) t);
                  f_11 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = f_11;
              t = filter_1_0(p_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm j_85 (ATerm), ATerm t)
{
  ATerm h_11 (ATerm t)
  {
    ATerm s_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_85(t);
        t = h_11(t);
        ;
        LocalPopChoice(v_22);
      }
    else
      {
        t = s_22;
      }
    return(t);
  }
  t = h_11(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_14 = NULL;
            t = eval_config_0_0(t);
            z_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), z_14);
            t = z_14;
            ;
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
          }
      }
      ;
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      {
        ATerm a_23 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(b_23);
          }
        else
          {
            t = a_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm i_15 = NULL;
  i_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_15), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
  t = i_15;
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm c_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_23;
      }
  }
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm s_15 = NULL;
  s_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_15), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
  t = s_15;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm i_11 = NULL;
  t = if_verbose5_1_0(w_1, t);
  i_11 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        {
          ATerm j_11 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          j_11 = t;
          t = repeat_1_0(x_1, t);
          t = j_11;
        }
      }
    t = i_11;
    t = if_verbose5_1_0(y_1, t);
  }
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm h_16 = NULL;
  h_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_16), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = h_16;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_18), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = p_18;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm o_22 = NULL;
  t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
  t = map_1_0(e_2, t);
  o_22 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_22), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
  t = o_22;
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL;
  m_22 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), m_22);
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_22, n_22);
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(z_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_17 = NULL,i_17 = NULL,t_17 = NULL;
            if(match_cons(t, sym__2))
              {
                h_17 = ATgetArgument(t, 0);
                i_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, h_17));
            {
              ATerm b_2 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((i_17 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((t_17 != NULL) && (t_17 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      t_17 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(b_2, t);
              t = not_null(t_17);
            }
            ;
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            {
              ATerm c_18 = NULL,o_18 = NULL;
              c_18 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, c_18));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm j_23 = ATgetFirst((ATermList) t);
                  if(match_cons(j_23, sym__2))
                    {
                      ATerm l_23 = ATgetArgument(j_23, 0);
                      o_18 = ATgetArgument(j_23, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm k_23 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = o_18;
            }
          }
        t = if_verbose5_1_0(c_2, t);
      }
      ;
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      {
        ATerm n_11 = NULL;
        n_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), n_11), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_23), n_11), term_m_23);
        t = if_verbose5_1_0(d_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        ATerm r_11 = NULL,s_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_11 = ATgetFirst((ATermList) t);
            s_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_11;
        {
          ATerm f_2 (ATerm t)
          {
            t = s_11;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(f_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm y_11 (ATerm t)
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_11, t);
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_76(t);
      }
    return(t);
  }
  t = y_11(t);
  return(t);
}
ATerm _2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,f_12 = NULL;
  f_12 = t;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_12);
  z_11 = t;
  t = a_12;
  t = y_58(t);
  c_12 = t;
  t = b_12;
  t = z_58(t);
  d_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, c_12, d_12), z_11);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm n_12 = NULL;
  n_12 = t;
  t = SSL_explode_string(n_12);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm o_12 = NULL;
  o_12 = t;
  t = SSL_explode_string(o_12);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm m_12 = NULL;
  t = _2_0(g_2, h_2, t);
  {
    ATerm t_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_12 = NULL,r_12 = NULL;
        if(match_cons(t, sym__2))
          {
            q_12 = ATgetArgument(t, 0);
            r_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_12;
        {
          ATerm i_2 (ATerm t)
          {
            t = r_12;
            return(t);
          }
          t = at_end_1_0(i_2, t);
        }
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = t_23;
        {
          ATerm t_22 = NULL,u_22 = NULL;
          t_22 = t;
          t = SSL_explode_term(t_22);
          if(match_cons(t, sym__2))
            {
              ATerm w_23 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_23) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              u_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_22;
          t = concat_0_0(t);
        }
      }
    m_12 = t;
    t = SSL_implode_string(m_12);
  }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_23 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_13 = NULL;
      b_13 = t;
      t = SSL_is_string(b_13);
      ;
      LocalPopChoice(c_24);
    }
  else
    {
      t = z_23;
      {
        ATerm d_24 = t;
        int e_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(j_2, t);
            ;
            LocalPopChoice(e_24);
          }
        else
          {
            t = d_24;
            {
              ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
              g_13 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_13 = ATgetArgument(t, 0);
                  t = h_13;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_13 = ATgetArgument(t, 0);
                      t = h_13;
                      {
                        ATerm g_24 = t;
                        int h_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), h_13);
                            {
                              ATerm i_24 = t;
                              int j_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_23 = NULL;
                                  t = eval_config_0_0(t);
                                  n_23 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), h_13, n_23);
                                  t = n_23;
                                  ;
                                  LocalPopChoice(j_24);
                                }
                              else
                                {
                                  t = i_24;
                                }
                            }
                            ;
                            LocalPopChoice(h_24);
                          }
                        else
                          {
                            t = g_24;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_13), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = h_13;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_13 = NULL,n_13 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_13 = ATgetArgument(t, 0);
                          i_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_13;
                      t = eval_config_0_0(t);
                      m_13 = t;
                      t = i_13;
                      t = eval_config_0_0(t);
                      n_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_13, n_13);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  m_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_23 = NULL;
        t = m_14;
        t = k_0(t);
        u_23 = t;
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(n_14, u_23);
          t = (ATerm) ATmakeAppl(sym_FILE_1, n_14);
        }
        ;
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        {
          ATerm p_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_24 = NULL;
              t = m_14;
              t = k_0(t);
              a_24 = t;
              {
                ATerm s_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm t_24 = t;
                    int x_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(x_24);
                      }
                    else
                      {
                        t = t_24;
                        {
                          ATerm y_24 = t;
                          int b_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(b_25);
                            }
                          else
                            {
                              t = y_24;
                              {
                                ATerm b_24 = NULL;
                                b_24 = t;
                                if((n_14 != t))
                                  {
                                    _fail(t);
                                  }
                                t = b_24;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_24;
                  }
                t = SSL_copy(n_14, a_24);
                t = (ATerm) ATmakeAppl(sym_FILE_1, n_14);
              }
              ;
              LocalPopChoice(r_24);
            }
          else
            {
              t = p_24;
              t = m_14;
              t = k_0(t);
              if((n_14 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_14);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
  if(match_cons(t, sym__2))
    {
      u_14 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_14, v_14);
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_25 = ATgetArgument(t, 0);
            ATerm f_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_14, v_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_25 = ATgetFirst((ATermList) t);
            f_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_24;
        ;
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        t = (ATerm) ATempty;
      }
    w_14 = t;
    t = SSL_table_put(u_14, v_14, w_14);
    t = (ATerm) ATmakeAppl(sym__2, u_14, v_14);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm k_86 (ATerm), ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
  d_15 = t;
  t = k_86(t);
  e_15 = t;
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(e_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_15 = ATgetFirst((ATermList) t);
        f_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(e_15, (ATerm)ATmakeAppl(sym_Scopes_0), f_15);
    t = g_15;
    {
      ATerm k_2 (ATerm t)
      {
        ATerm h_15 = NULL;
        h_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_15, h_15);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(k_2, t);
      t = d_15;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_87(t);
      t = g_87(t);
      ;
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
      t = g_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_86 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
  k_15 = t;
  t = j_86(t);
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_15, term_l_25);
  {
    ATerm m_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_25 = ATgetArgument(t, 0);
            ATerm q_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_15, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(o_25);
      }
    else
      {
        t = m_25;
        t = (ATerm) ATempty;
      }
    m_15 = t;
    t = SSL_table_put(l_15, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(m_15), (ATerm) ATempty));
    t = k_15;
  }
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_m_18;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_15 = NULL;
      x_15 = t;
      t = SSL_remove(x_15);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_m_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm o_89 (ATerm), ATerm t)
{
  ATerm t_15 = NULL;
  t = begin_scope_1_0(l_2, t);
  {
    ATerm m_2 (ATerm t)
    {
      ATerm u_15 = NULL;
      u_15 = t;
      {
        ATerm u_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(w_25);
          }
        else
          {
            t = u_25;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((t_15 != NULL) && (t_15 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              t_15 = ATgetFirst((ATermList) t);
            {
              ATerm x_25 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(t_15);
        t = map_1_0(o_2, t);
        t = u_15;
        t = end_scope_1_0(p_2, t);
      }
      return(t);
    }
    t = restore_always_2_0(o_89, m_2, t);
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm y_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
      {
        ATerm b_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_24 = NULL;
            t = eval_config_0_0(t);
            q_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), q_24);
            t = q_24;
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
      t = y_25;
      t = term_d_26;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm p_89 (ATerm), ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_15 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm g_26 = t;
          int h_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_24 = NULL;
              t = eval_config_0_0(t);
              m_24 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), m_24);
              t = m_24;
              ;
              LocalPopChoice(h_26);
            }
          else
            {
              t = g_26;
            }
          z_15 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, z_15);
        }
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = term_f_7;
      }
    t = p_89(t);
    t = copy_to_1_0(r_2, t);
    return(t);
  }
  t = xtc_temp_files_1_0(q_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL;
  a_16 = t;
  t = term_g_18;
  t = whoami_0_0(t);
  b_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), b_16), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = a_16;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm d_16 = NULL;
  d_16 = t;
  if(match_string(t, "-k"))
    {
      t = d_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_16;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm e_16 = NULL,g_16 = NULL;
  e_16 = t;
  t = SSL_string_to_int(e_16);
  g_16 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_16);
  t = e_16;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_i_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, u_2, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm i_16 = NULL;
  i_16 = t;
  if(match_string(t, "-S"))
    {
      t = i_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_16;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_k_26;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_l_26;
  return(t);
}
ATerm y_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL;
  j_16 = t;
  t = SSL_string_to_int(j_16);
  k_16 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_16);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_16);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm e_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_n_26;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_2, w_2, x_2, t);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      {
        ATerm s_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_2, z_2, d_3, t);
            ;
            LocalPopChoice(t_26);
          }
        else
          {
            t = s_26;
            t = Option_3_0(e_3, g_3, h_3, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_16 = NULL;
      t = term_g_18;
      t = d_0(t);
      p_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_26, term_w_26, p_16);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_16 = ATgetFirst((ATermList) t);
          o_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_16;
      t = a_0(t);
      t = term_g_18;
      t = b_0(t);
      s_16 = t;
      t = (ATerm) ATinsert(CheckATermList(o_16), s_16);
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm u_16 = NULL;
  u_16 = t;
  if(match_string(t, "-o"))
    {
      t = u_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_16;
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm v_16 = NULL;
  v_16 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_16);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_16);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_x_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_3, l_3, m_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,c_17 = NULL;
  if(match_cons(t, sym__3))
    {
      y_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
      a_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_16, z_16);
  {
    ATerm y_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_27 = ATgetArgument(t, 0);
            ATerm c_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_16, z_16);
        ;
        LocalPopChoice(a_27);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATempty;
      }
    c_17 = t;
    t = SSL_table_put(y_16, z_16, (ATerm) ATinsert(CheckATermList(c_17), a_17));
    t = (ATerm) ATmakeAppl(sym__3, y_16, z_16, a_17);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_17 = NULL;
      t = term_g_18;
      t = j_0(t);
      o_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_26, term_w_26, o_17);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_17 = ATgetFirst((ATermList) t);
          l_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_17;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_17 = ATgetFirst((ATermList) t);
          n_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_17;
      t = h_0(t);
      t = m_17;
      t = i_0(t);
      s_17 = t;
      t = (ATerm) ATinsert(CheckATermList(n_17), s_17);
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm u_17 = NULL;
  u_17 = t;
  if(match_string(t, "-i"))
    {
      t = u_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_17;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm v_17 = NULL;
  v_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_17);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_17);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_e_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, o_3, q_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm y_17 = NULL;
  y_17 = t;
  if(match_string(t, "-a"))
    {
      t = y_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = y_17;
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm z_17 = NULL;
  z_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = z_17;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--annotations", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm a_18 = NULL;
  a_18 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = a_18;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_3, s_3, t_3, t);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      t = Option_3_0(u_3, v_3, w_3, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_18 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_18;
  t = whoami_0_0(t);
  b_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), b_18));
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
        ATerm u_24 = NULL;
        t = eval_config_0_0(t);
        u_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_24);
        t = u_24;
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
ATerm foldr_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_82(t);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      {
        ATerm e_18 = NULL,f_18 = NULL,i_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_18 = ATgetFirst((ATermList) t);
            f_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_18;
        t = foldr_2_0(m_82, n_82, t);
        i_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_18, i_18);
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
ATerm x_3 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL;
  if(match_cons(t, sym__2))
    {
      z_24 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(z_24, a_25);
        ;
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        t = SSL_addr(z_24, a_25);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_18 = NULL,v_24 = NULL,w_24 = NULL;
  t = times_0_0(t);
  v_24 = t;
  t = SSL_explode_term(v_24);
  if(match_cons(t, sym__2))
    {
      ATerm p_27 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_24;
  t = foldr_2_0(x_3, z_3, t);
  l_18 = t;
  t = SSL_TicksToSeconds(l_18);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,z_18 = NULL;
  w_18 = t;
  if(match_cons(t, sym__2))
    {
      x_18 = ATgetArgument(t, 0);
      z_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_18;
        if((x_18 != t))
          {
            _fail(t);
          }
        t = w_18;
        ;
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        t = w_18;
        {
          ATerm s_27 = t;
          int t_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_18, z_18);
              ;
              LocalPopChoice(t_27);
            }
          else
            {
              t = s_27;
              t = SSL_gtr(x_18, z_18);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_18, z_18);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_19 = NULL,h_19 = NULL;
      d_19 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_27 = t;
        int x_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_25 = NULL;
            t = eval_config_0_0(t);
            n_25 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_25);
            t = n_25;
            ;
            LocalPopChoice(x_27);
          }
        else
          {
            t = w_27;
          }
        h_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_19, term_b_7);
        t = geq_0_0(t);
        t = d_19;
        t = r_87(t);
      }
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm j_19 = NULL,l_19 = NULL;
  t = run_time_0_0(t);
  j_19 = t;
  t = term_g_18;
  t = whoami_0_0(t);
  l_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), j_19), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), l_19));
  t = (ATerm) ATmakeAppl(sym__2, term_w_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_27), j_19), term_p_7), l_19));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
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
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(c_28);
          }
        else
          {
            t = b_28;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_91 (ATerm), ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm f_28 = t;
        int g_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_25 = NULL;
            t = eval_config_0_0(t);
            r_25 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), r_25);
            t = r_25;
            ;
            LocalPopChoice(g_28);
          }
        else
          {
            t = f_28;
          }
      }
      ;
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      t = fetch_1_0(b_4, t);
    }
  t = q_91(t);
  return(t);
}
ATerm map_1_0 (ATerm v_75 (ATerm), ATerm t)
{
  ATerm m_19 (ATerm t)
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = Cons_2_0(v_75, m_19, t);
      }
    return(t);
  }
  t = m_19(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_19 = ATgetFirst((ATermList) t);
      p_19 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_19 = NULL,v_19 = NULL;
        t = p_19;
        t = g_0(t);
        u_19 = t;
        t = o_19;
        t = f_0(t);
        v_19 = t;
        t = p_19;
        {
          ATerm c_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(u_19), v_19);
            return(t);
          }
          t = reverse_acc_2_0(f_0, c_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_18;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm t_68 (ATerm), ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,a_20 = NULL;
  a_20 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_20);
  w_19 = t;
  t = x_19;
  t = t_68(t);
  y_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, y_19), w_19);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm d_20 = NULL;
  d_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_20), term_j_28);
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
            ATerm v_25 = NULL;
            t = eval_config_0_0(t);
            v_25 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_25);
            t = v_25;
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
      t = fetch_1_0(d_4, t);
    }
  t = term_o_28;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, g_4, t);
  t = map_1_0(h_4, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm u_68 (ATerm), ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  h_20 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      f_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_20);
  e_20 = t;
  t = f_20;
  t = u_68(t);
  g_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, g_20), e_20);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm k_20 (ATerm t)
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_76, _id, t);
        ;
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = Cons_2_0(_id, k_20, t);
      }
    return(t);
  }
  t = k_20(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  m_20 = t;
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_20;
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
            t = m_20;
          }
        ;
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = (ATerm) ATinsert(ATempty, m_20);
      }
    n_20 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), n_20);
    t = m_20;
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
        ATerm z_25 = NULL;
        t = eval_config_0_0(t);
        z_25 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_25);
        t = z_25;
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
ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_z_28;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_a_29;
  return(t);
}
ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_b_29;
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_4, j_4, k_4, t);
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      t = Option_3_0(l_4, s_4, u_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL;
  w_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_20 = ATgetFirst((ATermList) t);
      t_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_20);
  r_20 = t;
  t = s_20;
  t = n_63(t);
  u_20 = t;
  t = t_20;
  t = o_63(t);
  v_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(v_20), u_20), r_20);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_21);
  t = (ATerm) ATmakeAppl(sym_Program_1, c_21);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_93 (ATerm), ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_29;
        t = o_93(t);
        ;
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
      }
    t = b_21;
    {
      ATerm w_4 (ATerm t)
      {
        ATerm i_29 = t;
        int j_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_29 = t;
            int l_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(l_29);
              }
            else
              {
                t = k_29;
                t = o_93(t);
                t = Cons_2_0(_id, w_4, t);
              }
            ;
            LocalPopChoice(j_29);
          }
        else
          {
            t = i_29;
            {
              ATerm e_21 = NULL,f_21 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_21 = ATgetFirst((ATermList) t);
                  f_21 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_21), (ATerm) ATmakeAppl(sym_Undefined_1, e_21));
            }
          }
        return(t);
      }
      t = Cons_2_0(v_4, w_4, t);
    }
  }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm p_21 = NULL;
  p_21 = t;
  if(match_string(t, "--help"))
    {
      t = p_21;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_21;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_21;
        }
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_m_29;
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_n_29;
  return(t);
}
ATerm h_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_93 (ATerm), ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = m_21;
  {
    ATerm x_4 (ATerm t)
    {
      ATerm o_29 = t;
      int p_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_93(t);
          ;
          LocalPopChoice(p_29);
        }
      else
        {
          t = o_29;
          {
            ATerm q_29 = t;
            int r_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_4, a_5, b_5, t);
                ;
                LocalPopChoice(r_29);
              }
            else
              {
                t = q_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_4, t);
    {
      ATerm s_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_21 = NULL;
          u_21 = t;
          {
            ATerm u_29 = t;
            int v_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = u_21;
                {
                  ATerm w_29 = t;
                  int x_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm y_29 = t;
                        int z_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm o_26 = NULL;
                            t = eval_config_0_0(t);
                            o_26 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), o_26);
                            t = o_26;
                            ;
                            LocalPopChoice(z_29);
                          }
                        else
                          {
                            t = y_29;
                          }
                      }
                      ;
                      LocalPopChoice(x_29);
                    }
                  else
                    {
                      t = w_29;
                      t = fetch_1_0(h_5, t);
                    }
                  t = u_21;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(v_29);
              }
            else
              {
                t = u_29;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm a_30 = t;
                  int b_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_26 = NULL;
                      t = eval_config_0_0(t);
                      v_26 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), v_26);
                      t = v_26;
                      ;
                      LocalPopChoice(b_30);
                    }
                  else
                    {
                      t = a_30;
                    }
                  t = u_21;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(t_29);
        }
      else
        {
          t = s_29;
          {
            ATerm c_30 = t;
            int d_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_5 (ATerm t)
                {
                  ATerm m_5 (ATerm t)
                  {
                    if(((n_21 != NULL) && (n_21 != t)))
                      _fail(t);
                    else
                      n_21 = t;
                    return(t);
                  }
                  t = Undefined_1_0(m_5, t);
                  return(t);
                }
                t = fetch_1_0(i_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(n_21)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_w_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_21)), term_e_30));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(d_30);
              }
            else
              {
                t = c_30;
              }
          }
        }
      o_21 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = o_21;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm t)
{
  ATerm x_21 = NULL;
  t = parse_options_1_0(s_91, t);
  x_21 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), x_21);
  t = x_21;
  t = u_91(t);
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_91, t);
        ;
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        {
          ATerm h_30 = t;
          int i_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_30);
            }
          else
            {
              t = h_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      ;
      LocalPopChoice(k_30);
    }
  else
    {
      t = j_30;
      {
        ATerm l_30 = t;
        int m_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
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
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(o_30);
                }
              else
                {
                  t = n_30;
                  {
                    ATerm p_30 = t;
                    int q_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(s_5, v_5, w_5, t);
                        ;
                        LocalPopChoice(q_30);
                      }
                    else
                      {
                        t = p_30;
                        {
                          ATerm r_30 = t;
                          int s_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(s_30);
                            }
                          else
                            {
                              t = r_30;
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
ATerm r_5 (ATerm t)
{
  t = xtc_io_1_0(x_5, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_t_30;
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_21 = NULL;
      y_21 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue)));
      {
        ATerm x_30 = t;
        int y_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_26 = NULL;
            t = eval_config_0_0(t);
            z_26 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue)), z_26);
            t = z_26;
            ;
            LocalPopChoice(y_30);
          }
        else
          {
            t = x_30;
          }
        t = y_21;
      }
      ;
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_31 = t;
            int c_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(c_31);
              }
            else
              {
                t = b_31;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(a_31);
            t = xtc_transform_file_2_0(y_5, z_5, t);
          }
        else
          {
            t = z_30;
            t = xtc_transform_term_2_0(a_6, b_6, t);
          }
      }
    }
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_31 = t;
        int g_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(g_31);
          }
        else
          {
            t = f_31;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(e_31);
        t = xtc_transform_file_2_0(d_6, e_6, t);
      }
    else
      {
        t = d_31;
        t = xtc_transform_term_2_0(f_6, i_6, t);
      }
    {
      ATerm h_31 = t;
      int i_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_22 = NULL;
          a_22 = t;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue)));
          {
            ATerm j_31 = t;
            int k_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_27 = NULL;
                t = eval_config_0_0(t);
                d_27 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue)), d_27);
                t = d_27;
                ;
                LocalPopChoice(k_31);
              }
            else
              {
                t = j_31;
              }
            t = a_22;
          }
          ;
          LocalPopChoice(i_31);
        }
      else
        {
          t = h_31;
          {
            ATerm l_31 = t;
            int m_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_31 = t;
                int o_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(o_31);
                  }
                else
                  {
                    t = n_31;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(m_31);
                t = xtc_transform_file_2_0(n_6, o_6, t);
              }
            else
              {
                t = l_31;
                t = xtc_transform_term_2_0(p_6, q_6, t);
              }
          }
        }
      {
        ATerm p_31 = t;
        int q_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_31 = t;
            int s_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(s_31);
              }
            else
              {
                t = r_31;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(q_31);
            t = xtc_transform_file_2_0(r_6, s_6, t);
          }
        else
          {
            t = p_31;
            t = xtc_transform_term_2_0(t_6, u_6, t);
          }
        {
          ATerm t_31 = t;
          int u_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_31 = t;
              int w_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(w_31);
                }
              else
                {
                  t = v_31;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(u_31);
              t = xtc_transform_file_2_0(v_6, pass_verbose_0_0, t);
            }
          else
            {
              t = t_31;
              t = xtc_transform_term_2_0(w_6, pass_verbose_0_0, t);
            }
        }
      }
    }
  }
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_x_31;
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_x_31;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_z_31;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_z_31;
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  t = pass_verbose_0_0(t);
  d_22 = t;
  t = term_b_32;
  t = xtc_find_0_0(t);
  e_22 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(d_22), e_22), term_c_32);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL;
  t = pass_verbose_0_0(t);
  g_22 = t;
  t = term_b_32;
  t = xtc_find_0_0(t);
  h_22 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(g_22), h_22), term_c_32);
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm pp_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(n_5, default_usage_0_0, _id, r_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pp_stratego_0_0(t);
  return(t);
}
