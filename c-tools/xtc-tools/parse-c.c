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
ATerm term_m_30;
ATerm term_l_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_s_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_v_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_j_27;
ATerm term_e_27;
ATerm term_u_26;
ATerm term_d_26;
ATerm term_y_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_f_25;
ATerm term_l_24;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_q_21;
ATerm term_f_21;
ATerm term_q_18;
ATerm term_s_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
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
ATerm term_y_11;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_t_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_t_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
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
ATerm term_y_6;
ATerm term_x_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_h_6;
ATerm term_b_6;
void init_constant_terms (void)
{
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_6, term_h_6, term_y_6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_7, term_b_7, term_c_7);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_7, term_h_7, term_i_7);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_7, term_q_7, term_s_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_7, term_w_7, term_y_7);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_8, term_b_8, term_c_8);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_8, term_j_8, term_k_8);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_8, term_o_8, term_p_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_9, term_b_9, term_c_9);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_9, term_k_9, term_l_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_p_9, term_q_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_9, term_u_9, term_x_9);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_10, term_e_10, term_f_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_e_11, term_f_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_o_11, term_q_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_x_11, term_y_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_12, term_b_12, term_c_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_f_12, term_g_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_j_12, term_m_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_p_12, term_q_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_f_13, term_g_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_v_13);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_j_14, term_l_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_q_14, term_t_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_f_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_j_15, term_k_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_25);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym__3, term_l_28, term_m_28, term_y_16);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("C.tbl", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm g_72 (ATerm), ATerm);
ATerm n_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm);
ATerm o_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm v_70 (ATerm), ATerm);
ATerm assert_1_0 (ATerm r_86 (ATerm), ATerm);
ATerm q_5 (ATerm b_5, ATerm);
ATerm r_5 (ATerm d_5, ATerm e_5, ATerm f_5, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm t_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm q_68 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm y_0 (ATerm);
ATerm pass_v_verbose_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm a_88 (ATerm), ATerm);
ATerm union_1_0 (ATerm e_80 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm y_9 (ATerm r_9, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm t_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm n_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm t_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm a_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm g_2 (ATerm);
ATerm j_2 (ATerm);
ATerm xtc_sglr_1_0 (ATerm d_100 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm o_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm n_86 (ATerm), ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm s_89 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm xtc_io_1_0 (ATerm t_89 (ATerm), ATerm);
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
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_87 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm need_help_1_0 (ATerm u_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm x_68 (ATerm), ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm y_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm);
ATerm _2_0 (ATerm c_59 (ATerm), ATerm d_59 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm z_75 (ATerm), ATerm);
ATerm e_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_63 (ATerm), ATerm s_63 (ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm s_93 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm parse_options_1_0 (ATerm r_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,p_0 = NULL;
  t = term_b_6;
  {
    ATerm c_6 = t;
    int d_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
        {
          ATerm f_6 = t;
          int g_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_0 = NULL;
              t = eval_config_0_0(t);
              s_0 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_0);
              t = s_0;
              ;
              LocalPopChoice(g_6);
            }
          else
            {
              t = f_6;
            }
        }
        ;
        LocalPopChoice(d_6);
      }
    else
      {
        t = c_6;
        t = term_h_6;
      }
    c_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_0, term_h_6);
    {
      ATerm i_6 = t;
      int k_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(c_0, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(k_6);
        }
      else
        {
          t = i_6;
          t = SSL_subtr(c_0, (ATerm) ATmakeInt(1));
        }
      p_0 = t;
      t = SSL_int_to_string(p_0);
      e_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, e_0), term_b_6);
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
      t = term_o_6;
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
  ATerm j_1 = NULL,r_1 = NULL,s_1 = NULL;
  if(match_cons(t, sym__2))
    {
      j_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_1, term_p_6);
  t = open_stream_0_0(t);
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_1, r_1);
  t = g_72(t);
  t = fclose_0_0(t);
  t = r_1;
  return(t);
}
ATerm n_0 (ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_6 = ATgetArgument(t, 0);
      if(match_cons(q_6, sym_Stream_1))
        {
          b_2 = ATgetArgument(q_6, 0);
        }
      else
        _fail(t);
      c_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(b_2, c_2);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_2);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL;
  y_1 = t;
  t = xtc_new_file_0_0(t);
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_1, y_1);
  t = WriteToFile_1_0(n_0, t);
  t = SSL_close_file(z_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(p_90, q_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm f_2 = NULL;
  f_2 = t;
  t = SSL_explode_string(f_2);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm e_2 = NULL;
  t = map_1_0(o_0, t);
  t = concat_0_0(t);
  e_2 = t;
  t = SSL_implode_string(e_2);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm c_3 = NULL,e_3 = NULL,g_3 = NULL,i_3 = NULL;
  c_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      e_3 = ATgetArgument(t, 0);
      {
        ATerm c_1 = NULL;
        t = SSL_int_to_string(e_3);
        c_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_6), c_1), term_r_6);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm u_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          e_3 = ATgetArgument(t, 0);
          g_3 = ATgetArgument(t, 1);
          i_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(g_3);
      u_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_3), term_u_6), u_1), term_t_6), e_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm m_3 = NULL;
  ATerm q_0 (ATerm t)
  {
    t = m_76(t);
    if(((m_3 != NULL) && (m_3 != t)))
      _fail(t);
    else
      m_3 = t;
    return(t);
  }
  t = fetch_1_0(q_0, t);
  t = not_null(m_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm n_3 = NULL;
  n_3 = t;
  {
    ATerm v_6 = t;
    int w_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_15), term_g_15), term_u_14), term_m_14), term_e_14), term_o_13), term_k_13), term_y_12), term_u_12), term_n_12), term_h_12), term_d_12), term_z_11), term_r_11), term_h_11), term_g_10), term_c_10), term_s_9), term_n_9), term_e_9), term_t_8), term_l_8), term_e_8), term_z_7), term_t_7), term_n_7), term_d_7), term_z_6);
        {
          ATerm r_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm m_15 = ATgetArgument(t, 0);
                if((n_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm n_15 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(r_0, t);
        }
        ;
        LocalPopChoice(w_6);
      }
    else
      {
        t = v_6;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, n_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm s_3 = NULL;
  s_3 = t;
  {
    ATerm o_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_4 = NULL,i_2 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_15 = ATgetArgument(t, 0);
            a_4 = ATgetArgument(t, 1);
            {
              ATerm y_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = a_4;
        {
          ATerm z_15 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_15;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          i_2 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_a_16, (ATerm) ATinsert(ATinsert(ATempty, i_2), term_c_16));
        }
        ;
        LocalPopChoice(q_15);
      }
    else
      {
        t = o_15;
      }
    t = s_3;
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
  ATerm i_4 = NULL,k_4 = NULL;
  i_4 = t;
  t = fork_0_0(t);
  k_4 = t;
  {
    ATerm e_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_4;
        t = v_70(t);
        ;
        LocalPopChoice(i_16);
      }
    else
      {
        t = e_16;
        t = SSL_waitpid(k_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_16 = ATgetArgument(t, 0);
            if(((ATgetType(j_16) != AT_INT) || (ATgetInt((ATermInt) j_16) != 0)))
              _fail(t);
            {
              ATerm m_16 = ATgetArgument(t, 1);
            }
            {
              ATerm n_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_4;
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm r_86 (ATerm), ATerm t)
{
  ATerm o_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL;
  if(match_cons(t, sym__2))
    {
      o_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_86(t);
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_4, o_4, t_4);
  t = table_push_0_0(t);
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(u_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(q_16);
      }
    else
      {
        t = p_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_4 = ATgetFirst((ATermList) t);
        w_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(u_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(w_4), (ATerm) ATinsert(CheckATermList(v_4), o_4)));
    t = (ATerm) ATmakeAppl(sym__2, o_4, t_4);
  }
  return(t);
}
ATerm q_5 (ATerm b_5, ATerm t)
{
  t = b_5;
  {
    ATerm s_16 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_16 = ATgetArgument(t, 0);
            ATerm v_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_16;
      }
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, b_5, term_p_6);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm r_5 (ATerm d_5, ATerm e_5, ATerm f_5, ATerm t)
{
  t = SSL_open_file(d_5, e_5);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm k_5 = NULL,m_5 = NULL,n_5 = NULL;
  k_5 = t;
  if(match_cons(t, sym__2))
    {
      m_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
      {
        ATerm w_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_5(k_5, t);
            ;
            LocalPopChoice(x_16);
          }
        else
          {
            t = w_16;
            t = r_5(m_5, n_5, k_5, t);
          }
      }
    }
  else
    {
      t = q_5(k_5, t);
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
  ATerm a_6 = NULL;
  t = term_y_16;
  t = new_0_0(t);
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_6, term_z_16);
  t = conc_strings_0_0(t);
  {
    ATerm a_17 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_6 = NULL;
        e_6 = t;
        t = SSL_access(e_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(b_17);
      }
    else
      {
        t = a_17;
      }
  }
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_6 = NULL;
  t = new_file_0_0(t);
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_6, term_p_6);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, j_6, term_y_16);
  t = assert_1_0(t_0, t);
  t = j_6;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL;
  f_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm j_4 = NULL,p_4 = NULL,h_5 = NULL,l_5 = NULL;
      t = f_7;
      t = xtc_new_file_0_0(t);
      j_4 = t;
      t = m_0(t);
      p_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_4, (ATerm) ATinsert(ATinsert(ATempty, j_4), term_g_17));
      {
        ATerm i_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm n_17 = ATgetArgument(t, 0);
                ATerm q_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_4;
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, j_4), term_g_17);
                return(t);
              }
              t = at_end_1_0(u_0, t);
            }
            ;
            LocalPopChoice(k_17);
          }
        else
          {
            t = i_17;
            {
              ATerm g_5 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, p_4, (ATerm) ATinsert(ATinsert(ATempty, j_4), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm r_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) r_17) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  g_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_5;
              t = concat_0_0(t);
            }
          }
        h_5 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        l_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_5, h_5);
        {
          ATerm v_0 (ATerm t)
          {
            t = SSL_execvp(l_5, h_5);
            return(t);
          }
          t = fork_and_wait_1_0(v_0, t);
          t = SSL_close_file(j_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, j_4);
        }
      }
    }
  else
    {
      ATerm u_5 = NULL,v_5 = NULL,m_6 = NULL,n_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          g_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_7;
      t = xtc_new_file_0_0(t);
      u_5 = t;
      t = m_0(t);
      v_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_5), term_g_17), g_7), term_s_17));
      {
        ATerm t_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm b_18 = ATgetArgument(t, 0);
                ATerm h_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_5;
            {
              ATerm w_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_5), term_g_17), g_7), term_s_17);
                return(t);
              }
              t = at_end_1_0(w_0, t);
            }
            ;
            LocalPopChoice(a_18);
          }
        else
          {
            t = t_17;
            {
              ATerm l_6 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_5), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), g_7), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm i_18 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_18) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  l_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_6;
              t = concat_0_0(t);
            }
          }
        m_6 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        n_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_6, m_6);
        {
          ATerm x_0 (ATerm t)
          {
            t = SSL_execvp(n_6, m_6);
            return(t);
          }
          t = fork_and_wait_1_0(x_0, t);
          t = SSL_close_file(u_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, u_5);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm q_68 (ATerm), ATerm t)
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
  t = q_68(t);
  l_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, l_7), j_7);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm k_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_7 = NULL,r_7 = NULL;
      p_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm o_18 = t;
        int p_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_8 = NULL;
            t = eval_config_0_0(t);
            h_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_8);
            t = h_8;
            ;
            LocalPopChoice(p_18);
          }
        else
          {
            t = o_18;
          }
        r_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_7, term_h_7);
        t = geq_0_0(t);
        t = p_7;
        t = x_87(t);
      }
      ;
      LocalPopChoice(n_18);
    }
  else
    {
      t = k_18;
    }
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_18);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(y_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm r_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_7 = NULL,x_7 = NULL;
      v_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm x_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_8 = NULL;
            t = eval_config_0_0(t);
            u_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_8);
            t = u_8;
            ;
            LocalPopChoice(a_19);
          }
        else
          {
            t = x_18;
          }
        x_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_7, term_j_14);
        t = geq_0_0(t);
        t = v_7;
        t = z_87(t);
      }
      ;
      LocalPopChoice(w_18);
    }
  else
    {
      t = r_18;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_8 = NULL,g_8 = NULL;
      d_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm d_19 = t;
        int e_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_9 = NULL;
            t = eval_config_0_0(t);
            m_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), m_9);
            t = m_9;
            ;
            LocalPopChoice(e_19);
          }
        else
          {
            t = d_19;
          }
        g_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_8, term_u_9);
        t = geq_0_0(t);
        t = d_8;
        t = y_87(t);
      }
      ;
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm m_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_8 = NULL,m_8 = NULL;
      i_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_10 = NULL;
            t = eval_config_0_0(t);
            u_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_10);
            t = u_10;
            ;
            LocalPopChoice(w_19);
          }
        else
          {
            t = t_19;
          }
        m_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_8, term_q_7);
        t = geq_0_0(t);
        t = i_8;
        t = a_88(t);
      }
      ;
      LocalPopChoice(o_19);
    }
  else
    {
      t = m_19;
    }
  return(t);
}
ATerm union_1_0 (ATerm e_80 (ATerm), ATerm t)
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
      ATerm x_19 = t;
      int y_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = r_8;
          ;
          LocalPopChoice(y_19);
        }
      else
        {
          t = x_19;
          {
            ATerm z_19 = t;
            int b_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_11 = NULL,i_11 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    d_11 = ATgetFirst((ATermList) t);
                    i_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = r_8;
                {
                  ATerm z_0 (ATerm t)
                  {
                    ATerm m_11 = NULL;
                    m_11 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_11, m_11);
                    t = e_80(t);
                    return(t);
                  }
                  t = fetch_1_0(z_0, t);
                  t = i_11;
                  t = s_8(t);
                }
                ;
                LocalPopChoice(b_20);
              }
            else
              {
                t = z_19;
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
ATerm a_1 (ATerm t)
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
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_20 = ATgetArgument(t, 0);
            ATerm f_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_8, w_8);
        ;
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = (ATerm) ATempty;
      }
    y_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_8, x_8);
    t = union_1_0(a_1, t);
    z_8 = t;
    t = SSL_table_put(v_8, w_8, z_8);
    t = (ATerm) ATmakeAppl(sym__3, v_8, w_8, x_8);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL;
  if(match_cons(t, sym__2))
    {
      h_9 = ATgetArgument(t, 0);
      g_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9;
  {
    ATerm b_1 (ATerm t)
    {
      ATerm i_9 = NULL,j_9 = NULL;
      if(match_cons(t, sym__2))
        {
          i_9 = ATgetArgument(t, 0);
          j_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, h_9, i_9, j_9);
      t = c_88(t);
      return(t);
    }
    t = map_1_0(b_1, t);
  }
  return(t);
}
ATerm y_9 (ATerm r_9, ATerm t)
{
  t = SSL_fclose(r_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL;
  w_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_9 = ATgetArgument(t, 0);
      {
        ATerm h_20 = t;
        int i_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_9);
            ;
            LocalPopChoice(i_20);
          }
        else
          {
            t = h_20;
            t = y_9(w_9, t);
          }
      }
    }
  else
    {
      t = y_9(w_9, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_9 = NULL;
  t = SSL_stdin_stream();
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_10 = NULL;
  t = SSL_stdout_stream();
  a_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_10 = NULL;
  t = SSL_stderr_stream();
  b_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_10);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm k_10 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      k_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_10;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm o_10 = NULL;
  o_10 = t;
  t = SSL_is_string(o_10);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_20 = ATgetArgument(t, 0);
      ATerm n_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_13 = NULL,z_13 = NULL;
        r_13 = t;
        t = SSL_explode_term(r_13);
        if(match_cons(t, sym__2))
          {
            ATerm s_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_20) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_20 = ATgetArgument(t, 1);
              if(((ATgetType(t_20) == AT_LIST) && !(ATisEmpty(t_20))))
                {
                  z_13 = ATgetFirst((ATermList) t_20);
                  {
                    ATerm u_20 = (ATerm) ATgetNext((ATermList) t_20);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = z_13;
        if(match_cons(t, sym_stderr_0))
          {
            t = z_13;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = z_13;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = z_13;
                t = stdin_stream_0_0(t);
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
          int a_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
              t = _2_0(d_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  h_10 = ATgetArgument(t, 0);
                  i_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(h_10, i_10);
              j_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, j_10);
              ;
              LocalPopChoice(a_21);
            }
          else
            {
              t = v_20;
              {
                ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
                t = _2_0(e_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    l_10 = ATgetArgument(t, 0);
                    m_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(l_10, m_10);
                n_10 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, n_10);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_10 = NULL;
      s_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_10, term_f_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      {
        ATerm d_14 = NULL;
        d_14 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_14), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = d_14;
        _fail(t);
      }
    }
  p_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(r_10);
  q_10 = t;
  t = p_10;
  t = fclose_0_0(t);
  t = q_10;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm i_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_10 = NULL;
      v_10 = t;
      t = SSL_access(v_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(l_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = i_21;
      {
        ATerm m_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_14 = NULL;
            ATerm o_21 = t;
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
                t = o_21;
              }
            g_14 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_14), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = g_14;
            ;
            LocalPopChoice(n_21);
          }
        else
          {
            t = m_21;
            {
              ATerm o_14 = NULL;
              o_14 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_14), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = o_14;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm w_14 = NULL;
  w_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_14), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
  t = w_14;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm e_15 = NULL;
  e_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_15), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
  t = e_15;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm a_11 = NULL;
  a_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = a_11;
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm b_11 = NULL;
  b_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
  t = b_11;
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm c_11 = NULL;
  c_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = c_11;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
  x_10 = t;
  t = if_verbose5_1_0(f_1, t);
  {
    ATerm p_21 = t;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, x_10));
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_21;
      }
    y_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, x_10));
    t = y_10;
    t = if_verbose4_1_0(i_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(k_1, t);
    z_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_21, z_10);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(l_1, t);
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, x_10), (ATerm) ATempty);
    t = (ATerm) ATmakeAppl(sym__3, term_q_21, (ATerm)ATmakeAppl(sym_Imported_1, x_10), (ATerm) ATempty);
    t = if_verbose4_1_0(m_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              t = filter_1_0(t_83, t);
              return(t);
            }
            t = Cons_2_0(t_83, n_1, t);
            ;
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            {
              ATerm g_11 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm a_22 = ATgetFirst((ATermList) t);
                  g_11 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = g_11;
              t = filter_1_0(t_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm n_85 (ATerm), ATerm t)
{
  ATerm j_11 (ATerm t)
  {
    ATerm b_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_85(t);
        t = j_11(t);
        ;
        LocalPopChoice(d_22);
      }
    else
      {
        t = b_22;
      }
    return(t);
  }
  t = j_11(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_15 = NULL;
            t = eval_config_0_0(t);
            p_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), p_15);
            t = p_15;
            ;
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
          }
      }
      ;
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm t_15 = NULL;
  t_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_15), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
  t = t_15;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm k_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_22;
      }
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm d_16 = NULL;
  d_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_16), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
  t = d_16;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_11 = NULL;
  t = if_verbose5_1_0(o_1, t);
  k_11 = t;
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        {
          ATerm l_11 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          l_11 = t;
          t = repeat_1_0(p_1, t);
          t = l_11;
        }
      }
    t = k_11;
    t = if_verbose5_1_0(q_1, t);
  }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm u_16 = NULL;
  u_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_16), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = u_16;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm p_19 = NULL;
  p_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_19), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = p_19;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm p_22 = NULL;
  t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
  t = map_1_0(a_2, t);
  p_22 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_22), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
  t = p_22;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL;
  n_22 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), n_22);
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_22, o_22);
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(t_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_18 = NULL,t_18 = NULL,v_18 = NULL;
            if(match_cons(t, sym__2))
              {
                s_18 = ATgetArgument(t, 0);
                t_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, s_18));
            {
              ATerm v_1 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((t_18 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((v_18 != NULL) && (v_18 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      v_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(v_1, t);
              t = not_null(v_18);
            }
            ;
            LocalPopChoice(t_22);
          }
        else
          {
            t = s_22;
            {
              ATerm z_18 = NULL,n_19 = NULL;
              z_18 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, z_18));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm u_22 = ATgetFirst((ATermList) t);
                  if(match_cons(u_22, sym__2))
                    {
                      ATerm x_22 = ATgetArgument(u_22, 0);
                      n_19 = ATgetArgument(u_22, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm w_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = n_19;
            }
          }
        t = if_verbose5_1_0(w_1, t);
      }
      ;
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      {
        ATerm p_11 = NULL;
        p_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), p_11), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_22), p_11), term_y_22);
        t = if_verbose5_1_0(x_1, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm d_100 (ATerm), ATerm t)
{
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_23 = t;
      int h_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(h_23);
        }
      else
        {
          t = f_23;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(e_23);
      {
        ATerm h_2 (ATerm t)
        {
          ATerm s_11 = NULL,t_11 = NULL;
          t = term_y_16;
          t = d_100(t);
          t = xtc_find_0_0(t);
          s_11 = t;
          t = term_y_16;
          t = pass_v_verbose_0_0(t);
          t_11 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_11), s_11), term_j_23), term_i_23);
          return(t);
        }
        t = xtc_transform_file_2_0(g_2, h_2, t);
      }
    }
  else
    {
      t = d_23;
      {
        ATerm k_2 (ATerm t)
        {
          ATerm v_11 = NULL,w_11 = NULL;
          t = term_y_16;
          t = d_100(t);
          t = xtc_find_0_0(t);
          v_11 = t;
          t = term_y_16;
          t = pass_v_verbose_0_0(t);
          w_11 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_11), v_11), term_j_23), term_i_23);
          return(t);
        }
        t = xtc_transform_term_2_0(j_2, k_2, t);
      }
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_22 = NULL;
        t = k_12;
        t = k_0(t);
        v_22 = t;
        {
          ATerm m_23 = t;
          int o_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(o_23);
            }
          else
            {
              t = m_23;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(l_12, v_22);
          t = (ATerm) ATmakeAppl(sym_FILE_1, l_12);
        }
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        {
          ATerm p_23 = t;
          int q_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_23 = NULL;
              t = k_12;
              t = k_0(t);
              b_23 = t;
              {
                ATerm s_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm t_23 = t;
                    int u_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
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
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(z_23);
                            }
                          else
                            {
                              t = y_23;
                              {
                                ATerm c_23 = NULL;
                                c_23 = t;
                                if((l_12 != t))
                                  {
                                    _fail(t);
                                  }
                                t = c_23;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_23;
                  }
                t = SSL_copy(l_12, b_23);
                t = (ATerm) ATmakeAppl(sym_FILE_1, l_12);
              }
              ;
              LocalPopChoice(q_23);
            }
          else
            {
              t = p_23;
              t = k_12;
              t = k_0(t);
              if((l_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_12);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      r_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_12, s_12);
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_24 = ATgetArgument(t, 0);
            ATerm f_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_12, s_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_24 = ATgetFirst((ATermList) t);
            g_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_23;
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = (ATerm) ATempty;
      }
    t_12 = t;
    t = SSL_table_put(r_12, s_12, t_12);
    t = (ATerm) ATmakeAppl(sym__2, r_12, s_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm o_86 (ATerm), ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  a_13 = t;
  t = o_86(t);
  b_13 = t;
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(b_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_13 = ATgetFirst((ATermList) t);
        c_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(b_13, (ATerm)ATmakeAppl(sym_Scopes_0), c_13);
    t = d_13;
    {
      ATerm l_2 (ATerm t)
      {
        ATerm e_13 = NULL;
        e_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_13, e_13);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(l_2, t);
      t = a_13;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_87(t);
      t = k_87(t);
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      t = k_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
  h_13 = t;
  t = n_86(t);
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_13, term_l_24);
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_24 = ATgetArgument(t, 0);
            ATerm q_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(i_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = (ATerm) ATempty;
      }
    j_13 = t;
    t = SSL_table_put(i_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(j_13), (ATerm) ATempty));
    t = h_13;
  }
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm r_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_13 = NULL;
      u_13 = t;
      t = SSL_remove(u_13);
      ;
      LocalPopChoice(t_24);
    }
  else
    {
      t = r_24;
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm p_13 = NULL;
  t = begin_scope_1_0(m_2, t);
  {
    ATerm n_2 (ATerm t)
    {
      ATerm q_13 = NULL;
      q_13 = t;
      {
        ATerm u_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(v_24);
          }
        else
          {
            t = u_24;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((p_13 != NULL) && (p_13 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              p_13 = ATgetFirst((ATermList) t);
            {
              ATerm x_24 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(p_13);
        t = map_1_0(o_2, t);
        t = q_13;
        t = end_scope_1_0(p_2, t);
      }
      return(t);
    }
    t = restore_always_2_0(s_89, n_2, t);
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_23 = NULL;
            t = eval_config_0_0(t);
            r_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), r_23);
            t = r_23;
            ;
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
          }
      }
      ;
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      t = term_f_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_13 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm i_25 = t;
          int j_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_23 = NULL;
              t = eval_config_0_0(t);
              n_23 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), n_23);
              t = n_23;
              ;
              LocalPopChoice(j_25);
            }
          else
            {
              t = i_25;
            }
          w_13 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, w_13);
        }
        ;
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        t = term_o_6;
      }
    t = t_89(t);
    t = copy_to_1_0(r_2, t);
    return(t);
  }
  t = xtc_temp_files_1_0(q_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL;
  x_13 = t;
  t = term_y_16;
  t = whoami_0_0(t);
  y_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), y_13), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = x_13;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm a_14 = NULL;
  a_14 = t;
  if(match_string(t, "-k"))
    {
      t = a_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_14;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL;
  b_14 = t;
  t = SSL_string_to_int(b_14);
  c_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), c_14);
  t = b_14;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, u_2, t);
  return(t);
}
ATerm v_2 (ATerm t)
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
ATerm w_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_m_25;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_n_25;
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
  ATerm i_14 = NULL,k_14 = NULL;
  i_14 = t;
  t = SSL_string_to_int(i_14);
  k_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_14);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_14);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm b_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_p_25;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_q_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_2, w_2, x_2, t);
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
            t = ArgOption_3_0(y_2, z_2, a_3, t);
            ;
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            t = Option_3_0(b_3, d_3, f_3, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_14 = NULL,r_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_14 = NULL;
      t = term_y_16;
      t = d_0(t);
      s_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_25, term_w_25, s_14);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm v_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_14 = ATgetFirst((ATermList) t);
          r_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_14;
      t = a_0(t);
      t = term_y_16;
      t = b_0(t);
      v_14 = t;
      t = (ATerm) ATinsert(CheckATermList(r_14), v_14);
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm x_14 = NULL;
  x_14 = t;
  if(match_string(t, "-o"))
    {
      t = x_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_14;
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), y_14);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_14);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_3, j_3, k_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,h_15 = NULL;
  if(match_cons(t, sym__3))
    {
      b_15 = ATgetArgument(t, 0);
      c_15 = ATgetArgument(t, 1);
      d_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_15, c_15);
  {
    ATerm z_25 = t;
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
        t = SSL_table_get(b_15, c_15);
        ;
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        t = (ATerm) ATempty;
      }
    h_15 = t;
    t = SSL_table_put(b_15, c_15, (ATerm) ATinsert(CheckATermList(h_15), d_15));
    t = (ATerm) ATmakeAppl(sym__3, b_15, c_15, d_15);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,v_15 = NULL,w_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_15 = NULL;
      t = term_y_16;
      t = j_0(t);
      x_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_25, term_w_25, x_15);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm b_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_15 = ATgetFirst((ATermList) t);
          s_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_15 = ATgetFirst((ATermList) t);
          w_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_15;
      t = h_0(t);
      t = v_15;
      t = i_0(t);
      b_16 = t;
      t = (ATerm) ATinsert(CheckATermList(w_15), b_16);
    }
  return(t);
}
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
ATerm o_3 (ATerm t)
{
  ATerm g_16 = NULL;
  g_16 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), g_16);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_16);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_3, o_3, p_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_16;
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
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL;
        t = eval_config_0_0(t);
        v_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_23);
        t = v_23;
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_82(t);
      ;
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
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
        t = foldr_2_0(q_82, r_82, t);
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_16, o_16);
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
ATerm q_3 (ATerm t)
{
  t = term_l_25;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL;
  if(match_cons(t, sym__2))
    {
      a_24 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_24, b_24);
        ;
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        t = SSL_addr(a_24, b_24);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_16 = NULL,w_23 = NULL,x_23 = NULL;
  t = times_0_0(t);
  w_23 = t;
  t = SSL_explode_term(w_23);
  if(match_cons(t, sym__2))
    {
      ATerm k_26 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_23;
  t = foldr_2_0(q_3, r_3, t);
  r_16 = t;
  t = SSL_TicksToSeconds(r_16);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  if(match_cons(t, sym__2))
    {
      d_17 = ATgetArgument(t, 0);
      e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_17;
        if((d_17 != t))
          {
            _fail(t);
          }
        t = c_17;
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = c_17;
        {
          ATerm n_26 = t;
          int o_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_17, e_17);
              ;
              LocalPopChoice(o_26);
            }
          else
            {
              t = n_26;
              t = SSL_gtr(d_17, e_17);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_17, e_17);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_17 = NULL,j_17 = NULL;
      h_17 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm s_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_24 = NULL;
            t = eval_config_0_0(t);
            o_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_24);
            t = o_24;
            ;
            LocalPopChoice(t_26);
          }
        else
          {
            t = s_26;
          }
        j_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_17, term_h_6);
        t = geq_0_0(t);
        t = h_17;
        t = v_87(t);
      }
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL;
  t = run_time_0_0(t);
  l_17 = t;
  t = term_y_16;
  t = whoami_0_0(t);
  m_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), l_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), m_17));
  t = (ATerm) ATmakeAppl(sym__2, term_a_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_26), l_17), term_t_6), m_17));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm v_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = v_26;
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_91 (ATerm), ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_24 = NULL;
            t = eval_config_0_0(t);
            s_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_24);
            t = s_24;
            ;
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
          }
      }
      ;
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      t = fetch_1_0(u_3, t);
    }
  t = u_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_17 = ATgetFirst((ATermList) t);
      p_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_17 = NULL,v_17 = NULL;
        t = p_17;
        t = g_0(t);
        u_17 = t;
        t = o_17;
        t = f_0(t);
        v_17 = t;
        t = p_17;
        {
          ATerm v_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(u_17), v_17);
            return(t);
          }
          t = reverse_acc_2_0(f_0, v_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_16;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm x_68 (ATerm), ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
  z_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_17);
  w_17 = t;
  t = x_17;
  t = x_68(t);
  y_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, y_17), w_17);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm c_18 = NULL;
  c_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_18), term_e_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm h_27 = t;
        int i_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_24 = NULL;
            t = eval_config_0_0(t);
            w_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_24);
            t = w_24;
            ;
            LocalPopChoice(i_27);
          }
        else
          {
            t = h_27;
          }
      }
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      t = fetch_1_0(w_3, t);
    }
  t = term_j_27;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, x_3, t);
  t = map_1_0(y_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
  g_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      e_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_18);
  d_18 = t;
  t = e_18;
  t = y_68(t);
  f_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, f_18), d_18);
  return(t);
}
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm j_18 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_76, _id, t);
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        t = Cons_2_0(_id, j_18, t);
      }
    return(t);
  }
  t = j_18(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL;
  l_18 = t;
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_18;
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
            t = l_18;
          }
        ;
        LocalPopChoice(n_27);
      }
    else
      {
        t = m_27;
        t = (ATerm) ATinsert(ATempty, l_18);
      }
    m_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), m_18);
    t = l_18;
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
        ATerm a_25 = NULL;
        t = eval_config_0_0(t);
        a_25 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_25);
        t = a_25;
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
        ATerm u_18 = NULL,y_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_18 = ATgetFirst((ATermList) t);
            y_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_18;
        {
          ATerm z_3 (ATerm t)
          {
            t = y_18;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(z_3, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm f_19 (ATerm t)
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_19, t);
        ;
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_76(t);
      }
    return(t);
  }
  t = f_19(t);
  return(t);
}
ATerm _2_0 (ATerm c_59 (ATerm), ATerm d_59 (ATerm), ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  l_19 = t;
  if(match_cons(t, sym__2))
    {
      h_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_19);
  g_19 = t;
  t = h_19;
  t = c_59(t);
  j_19 = t;
  t = i_19;
  t = d_59(t);
  k_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, j_19, k_19), g_19);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm r_19 = NULL;
  r_19 = t;
  t = SSL_explode_string(r_19);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm s_19 = NULL;
  s_19 = t;
  t = SSL_explode_string(s_19);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm q_19 = NULL;
  t = _2_0(b_4, c_4, t);
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
          ATerm d_4 (ATerm t)
          {
            t = v_19;
            return(t);
          }
          t = at_end_1_0(d_4, t);
        }
        ;
        LocalPopChoice(x_27);
      }
    else
      {
        t = w_27;
        {
          ATerm d_25 = NULL,e_25 = NULL;
          d_25 = t;
          t = SSL_explode_term(d_25);
          if(match_cons(t, sym__2))
            {
              ATerm y_27 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_27) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              e_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_25;
          t = concat_0_0(t);
        }
      }
    q_19 = t;
    t = SSL_implode_string(q_19);
  }
  return(t);
}
ATerm map_1_0 (ATerm z_75 (ATerm), ATerm t)
{
  ATerm a_20 (ATerm t)
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
        t = Cons_2_0(z_75, a_20, t);
      }
    return(t);
  }
  t = a_20(t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_20 = NULL;
      g_20 = t;
      t = SSL_is_string(g_20);
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
            t = map_1_0(e_4, t);
            ;
            LocalPopChoice(g_28);
          }
        else
          {
            t = f_28;
            {
              ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
              k_20 = t;
              if(match_cons(t, sym_Path_1))
                {
                  l_20 = ATgetArgument(t, 0);
                  t = l_20;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      l_20 = ATgetArgument(t, 0);
                      t = l_20;
                      {
                        ATerm h_28 = t;
                        int i_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), l_20);
                            {
                              ATerm j_28 = t;
                              int k_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_25 = NULL;
                                  t = eval_config_0_0(t);
                                  x_25 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), l_20, x_25);
                                  t = x_25;
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
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_20), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = l_20;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm q_20 = NULL,r_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          l_20 = ATgetArgument(t, 0);
                          m_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_20;
                      t = eval_config_0_0(t);
                      q_20 = t;
                      t = m_20;
                      t = eval_config_0_0(t);
                      r_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_20, r_20);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_n_28;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_o_28;
  return(t);
}
ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_p_28;
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_q_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_4, g_4, h_4, t);
      ;
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      t = Option_3_0(l_4, m_4, n_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_63 (ATerm), ATerm s_63 (ATerm), ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,b_21 = NULL,c_21 = NULL;
  c_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_20 = ATgetFirst((ATermList) t);
      y_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_21);
  w_20 = t;
  t = x_20;
  t = r_63(t);
  z_20 = t;
  t = y_20;
  t = s_63(t);
  b_21 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(b_21), z_20), w_20);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm h_21 = NULL;
  h_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_21);
  t = (ATerm) ATmakeAppl(sym_Program_1, h_21);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_93 (ATerm), ATerm t)
{
  ATerm g_21 = NULL;
  g_21 = t;
  {
    ATerm t_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_28;
        t = s_93(t);
        ;
        LocalPopChoice(u_28);
      }
    else
      {
        t = t_28;
      }
    t = g_21;
    {
      ATerm r_4 (ATerm t)
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
                t = s_93(t);
                t = Cons_2_0(_id, r_4, t);
              }
            ;
            LocalPopChoice(x_28);
          }
        else
          {
            t = w_28;
            {
              ATerm j_21 = NULL,k_21 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_21 = ATgetFirst((ATermList) t);
                  k_21 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(k_21), (ATerm) ATmakeAppl(sym_Undefined_1, j_21));
            }
          }
        return(t);
      }
      t = Cons_2_0(q_4, r_4, t);
    }
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm u_21 = NULL;
  u_21 = t;
  if(match_string(t, "--help"))
    {
      t = u_21;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_21;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_21;
        }
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_a_29;
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm a_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  r_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = r_21;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm c_29 = t;
      int d_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_93(t);
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
                t = Option_3_0(x_4, y_4, z_4, t);
                ;
                LocalPopChoice(f_29);
              }
            else
              {
                t = e_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_4, t);
    {
      ATerm g_29 = t;
      int h_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_21 = NULL;
          z_21 = t;
          {
            ATerm i_29 = t;
            int j_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = z_21;
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
                            ATerm p_26 = NULL;
                            t = eval_config_0_0(t);
                            p_26 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), p_26);
                            t = p_26;
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
                      t = fetch_1_0(a_5, t);
                    }
                  t = z_21;
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
                      ATerm w_26 = NULL;
                      t = eval_config_0_0(t);
                      w_26 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), w_26);
                      t = w_26;
                      ;
                      LocalPopChoice(p_29);
                    }
                  else
                    {
                      t = o_29;
                    }
                  t = z_21;
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
                ATerm c_5 (ATerm t)
                {
                  ATerm i_5 (ATerm t)
                  {
                    if(((s_21 != NULL) && (s_21 != t)))
                      _fail(t);
                    else
                      s_21 = t;
                    return(t);
                  }
                  t = Undefined_1_0(i_5, t);
                  return(t);
                }
                t = fetch_1_0(c_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(s_21)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_a_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_21)), term_s_29));
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
      t_21 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = t_21;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm t)
{
  ATerm c_22 = NULL;
  t = parse_options_1_0(w_91, t);
  c_22 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), c_22);
  t = c_22;
  t = y_91(t);
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_91, t);
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
              t = z_91(t);
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
ATerm j_5 (ATerm t)
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
                  t = Option_3_0(p_5, s_5, t_5, t);
                  ;
                  LocalPopChoice(c_30);
                }
              else
                {
                  t = b_30;
                  {
                    ATerm d_30 = t;
                    int e_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(e_30);
                      }
                    else
                      {
                        t = d_30;
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
  t = xtc_io_1_0(w_5, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_30;
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = xtc_sglr_1_0(x_5, t);
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(k_30);
          }
        else
          {
            t = j_30;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(i_30);
        t = xtc_transform_file_2_0(y_5, pass_verbose_0_0, t);
      }
    else
      {
        t = h_30;
        t = xtc_transform_term_2_0(z_5, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_l_30;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_m_30;
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_m_30;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(j_5, default_usage_0_0, _id, o_5, t);
  return(t);
}
