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
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_e_30;
ATerm term_v_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_a_29;
ATerm term_e_28;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_y_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_m_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_j_24;
ATerm term_g_24;
ATerm term_b_24;
ATerm term_x_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_k_23;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_e_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_k_19;
ATerm term_a_19;
ATerm term_w_18;
ATerm term_t_18;
ATerm term_q_18;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_j_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_u_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_u_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_a_11;
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
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_h_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_j_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_z_7;
ATerm term_t_7;
void init_constant_terms (void)
{
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_8, term_z_7, term_u_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_8, term_x_8, term_z_8);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_9, term_f_9, term_h_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_9, term_l_9, term_n_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_9, term_u_9, term_w_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_9, term_a_10, term_e_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_h_10, term_i_10);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_10, term_l_10, term_m_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_10, term_q_10, term_r_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_u_10, term_v_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_10, term_y_10, term_a_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_f_11, term_g_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_11, term_l_11, term_o_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_11, term_t_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_a_12, term_d_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_l_12, term_m_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_r_12, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_y_12, term_z_12);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_i_13, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_r_13, term_x_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_f_14, term_g_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_p_14, term_q_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_y_14, term_f_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_q_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_y_15, term_z_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_e_16, term_f_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_l_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_v_19);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, term_e_22, term_q_21);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_p_24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_24);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__2, term_x_24, term_y_21);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym__2, term_x_23, term_b_24);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym__2, term_d_29, term_y_21);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_g_29, term_y_21);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__2, term_b_27, term_y_21);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm t_2 (ATerm x_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm x_5 (ATerm i_43, ATerm j_43, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm pass_width_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm y_5 (ATerm r_27, ATerm s_27, ATerm);
ATerm z_5 (ATerm d_72 (ATerm), ATerm f_182, ATerm z_27, ATerm);
ATerm q_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm);
ATerm a_6 (ATerm n_24, ATerm o_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm s_70 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm d_6 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm);
ATerm e_6 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm);
ATerm a_1 (ATerm);
ATerm f_6 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm);
ATerm g_6 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm);
ATerm m_11 (ATerm c_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm h_6 (ATerm x_27, ATerm);
ATerm i_6 (ATerm t_48, ATerm u_48, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_13 (ATerm b_12, ATerm);
ATerm w_13 (ATerm g_12, ATerm h_12, ATerm i_12, ATerm);
ATerm z_13 (ATerm v_12, ATerm w_12, ATerm a_13, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm f_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm s_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm g_2 (ATerm);
ATerm v_18 (ATerm x_17, ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm o_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm e_90 (ATerm), ATerm);
ATerm j_6 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm);
ATerm o_20 (ATerm t_19, ATerm);
ATerm r_20 (ATerm x_19, ATerm z_19, ATerm c_20, ATerm);
ATerm s_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm k_6 (ATerm l_48, ATerm m_48, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm abox2text_0_0 (ATerm);
ATerm l_6 (ATerm t_24, ATerm u_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm m_6 (ATerm m_45, ATerm n_45, ATerm);
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm);
ATerm w_3 (ATerm);
ATerm xtc_io_1_0 (ATerm r_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm b_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm i_5 (ATerm);
ATerm abox2text_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_6 (ATerm c_43, ATerm d_43, ATerm);
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm q_6 (ATerm y_41, ATerm z_41, ATerm);
ATerm debug_1_0 (ATerm b_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm w_5 (ATerm);
ATerm b_6 (ATerm);
ATerm p_6 (ATerm);
ATerm t_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm u_6 (ATerm h_47, ATerm i_47, ATerm);
ATerm r_6 (ATerm y_46, ATerm z_46, ATerm);
ATerm s_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm);
ATerm a_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm i_7 (ATerm);
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm);
ATerm n_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm l_1 = NULL,m_1 = NULL,q_1 = NULL;
    q_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_1 = ATgetFirst((ATermList) t);
        m_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_0 = NULL,c_1 = NULL,x_0 = NULL;
          t = SSLgetAnnotations(q_1);
          u_0 = t;
          t = m_1;
          t = t_1(t);
          c_1 = t;
          t = (ATerm) ATinsert(CheckATermList(c_1), l_1);
          x_0 = t;
          t = SSLsetAnnotations(x_0, u_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_1;
        t = m_76(t);
      }
    return(t);
  }
  t = t_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_0 = NULL,n_0 = NULL,o_0 = NULL;
  f_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_0;
    }
  else
    {
      ATerm b_0 (ATerm t)
      {
        t = not_null(o_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((n_0 != NULL) && (n_0 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            n_0 = ATgetFirst((ATermList) t);
          if(((o_0 != NULL) && (o_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(n_0);
      t = at_end_1_0(b_0, t);
    }
  return(t);
}
ATerm t_2 (ATerm x_1, ATerm t)
{
  ATerm d_2 = NULL;
  t = SSL_explode_term(x_1);
  if(match_cons(t, sym__2))
    {
      ATerm s_0 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_0) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,p_2 = NULL;
  if(((p_2 != NULL) && (p_2 != t)))
    _fail(t);
  else
    p_2 = t;
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
      {
        ATerm o_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              t = not_null(n_2);
              return(t);
            }
            t = not_null(m_2);
            t = at_end_1_0(p_0, t);
            ;
            LocalPopChoice(q_7);
          }
        else
          {
            t = o_7;
            t = t_2(not_null(p_2), t);
          }
      }
    }
  else
    {
      t = t_2(not_null(p_2), t);
    }
  return(t);
}
ATerm x_5 (ATerm i_43, ATerm j_43, ATerm t)
{
  ATerm r_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(i_43, j_43);
      ;
      LocalPopChoice(s_7);
    }
  else
    {
      t = r_7;
      t = SSL_subtr(i_43, j_43);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,z_2 = NULL;
  t = term_t_7;
  {
    ATerm w_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(x_7);
      }
    else
      {
        t = w_7;
        t = term_z_7;
      }
    v_2 = t;
    t = term_z_7;
    z_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_2, term_z_7);
    t = x_5(v_2, z_2, t);
    w_2 = t;
    t = SSL_int_to_string(w_2);
    u_2 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, u_2), term_t_7);
  }
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_8;
      t = get_config_0_0(t);
      LocalPopChoice(b_8);
      {
        ATerm a_3 = NULL;
        a_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, a_3), term_c_8);
      }
    }
  else
    {
      t = a_8;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm e_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_e_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm j_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          e_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_f_8);
      j_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_3, (ATerm) ATinsert(ATempty, term_f_8));
      t = k_6(e_3, j_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm y_5 (ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm k_3 = NULL;
  t = SSL_write_term_to_stream_baf(r_27, s_27);
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_3);
  return(t);
}
ATerm z_5 (ATerm d_72 (ATerm), ATerm f_182, ATerm z_27, ATerm t)
{
  ATerm l_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_182, term_g_8);
  t = open_stream_0_0(t);
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_3, z_27);
  t = d_72(t);
  t = fclose_0_0(t);
  t = z_27;
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm p_3 = NULL,r_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      if(match_cons(h_8, sym_Stream_1))
        {
          p_3 = ATgetArgument(h_8, 0);
        }
      else
        _fail(t);
      r_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(p_3, r_3, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm m_3 = NULL,o_3 = NULL;
  m_3 = t;
  t = xtc_new_file_0_0(t);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_3, m_3);
  t = z_5(q_0, o_3, m_3, t);
  t = SSL_close_file(o_3);
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_3);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_90, o_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm a_6 (ATerm n_24, ATerm o_24, ATerm t)
{
  t = SSL_execvp(n_24, o_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,w_4 = NULL;
  q_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      r_4 = ATgetArgument(t, 0);
      {
        ATerm p_1 = NULL,r_1 = NULL;
        t = SSL_int_to_string(r_4);
        p_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_8), p_1), term_j_8);
        r_1 = t;
        t = SSL_concat_strings(r_1);
      }
    }
  else
    {
      ATerm f_2 = NULL,h_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          r_4 = ATgetArgument(t, 0);
          s_4 = ATgetArgument(t, 1);
          w_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(s_4);
      f_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_4), term_o_8), f_2), term_n_8), r_4);
      h_2 = t;
      t = SSL_concat_strings(h_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm a_5 = NULL;
  ATerm r_0 (ATerm t)
  {
    t = i_76(t);
    if(((a_5 != NULL) && (a_5 != t)))
      _fail(t);
    else
      a_5 = t;
    return(t);
  }
  t = fetch_1_0(r_0, t);
  t = not_null(a_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm c_5 = NULL;
  if(((c_5 != NULL) && (c_5 != t)))
    _fail(t);
  else
    c_5 = t;
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm r_8 = ATgetArgument(t, 0);
              if(((c_5 != NULL) && (c_5 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                c_5 = ATgetArgument(t, 1);
              {
                ATerm s_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_16), term_a_16), term_r_15), term_n_15), term_g_15), term_u_14), term_h_14), term_y_13), term_o_13), term_k_13), term_g_13), term_t_12), term_o_12), term_e_12), term_x_11), term_p_11), term_h_11), term_b_11), term_w_10), term_s_10), term_n_10), term_j_10), term_f_10), term_y_9), term_o_9), term_j_9), term_a_9), term_v_8);
        t = fetch_elem_1_0(t_0, t);
        ;
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(c_5));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm h_5 = NULL,r_5 = NULL;
  h_5 = t;
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_16 = ATgetArgument(t, 0);
            r_5 = ATgetArgument(t, 1);
            {
              ATerm n_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_16);
        {
          ATerm o_16 = t;
          int p_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_2 = NULL,y_2 = NULL,b_3 = NULL;
              t = r_5;
              {
                ATerm q_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_16;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                q_2 = t;
                t = term_r_16;
                y_2 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, q_2), term_s_16);
                b_3 = t;
                t = SSL_printnl(y_2, b_3);
                t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, q_2), term_s_16));
              }
              ;
              LocalPopChoice(p_16);
            }
          else
            {
              t = o_16;
              t = h_5;
            }
        }
      }
    else
      {
        t = k_16;
        t = h_5;
      }
    t = h_5;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm s_70 (ATerm), ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL;
  c_7 = t;
  t = fork_0_0(t);
  b_7 = t;
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = c_7;
        t = s_70(t);
        ;
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
        t = SSL_waitpid(b_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_16 = ATgetArgument(t, 0);
            if(((ATgetType(v_16) != AT_INT) || (ATgetInt((ATermInt) v_16) != 0)))
              _fail(t);
            {
              ATerm z_16 = ATgetArgument(t, 1);
            }
            {
              ATerm a_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_7;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_7 = NULL;
  ATerm v_0 (ATerm t)
  {
    ATerm g_7 = NULL,h_7 = NULL;
    g_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_7), g_7);
    t = r_6(not_null(f_7), g_7, t);
    h_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_7, h_7);
    return(t);
  }
  if(((f_7 != NULL) && (f_7 != t)))
    _fail(t);
  else
    f_7 = t;
  t = SSL_table_keys(not_null(f_7));
  t = map_1_0(v_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm k_7 = NULL;
  k_7 = t;
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_7 = NULL;
        t = term_t_7;
        t = get_config_0_0(t);
        p_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_7, term_l_15);
        t = geq_0_0(t);
        t = k_7;
        t = x_87(t);
        ;
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        t = k_7;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm u_7 = NULL;
  u_7 = t;
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL;
        t = term_t_7;
        t = get_config_0_0(t);
        y_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_7, term_f_11);
        t = geq_0_0(t);
        t = u_7;
        t = w_87(t);
        ;
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        t = u_7;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm d_8 = NULL;
  d_8 = t;
  {
    ATerm f_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_8 = NULL;
        t = term_t_7;
        t = get_config_0_0(t);
        i_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_8, term_l_9);
        t = geq_0_0(t);
        t = d_8;
        t = y_87(t);
        ;
        LocalPopChoice(h_17);
      }
    else
      {
        t = f_17;
        t = d_8;
      }
  }
  return(t);
}
ATerm d_6 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm t)
{
  t = e_80(t);
  {
    ATerm w_0 (ATerm t)
    {
      ATerm k_8 = NULL;
      k_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_34), k_8);
      t = d_80(t);
      return(t);
    }
    t = fetch_1_0(w_0, t);
    t = not_null(t_34);
  }
  return(t);
}
ATerm e_6 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm t)
{
  ATerm g_9 (ATerm t)
  {
    ATerm y_8 = NULL,b_9 = NULL,d_9 = NULL;
    y_8 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(p_34);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_9 = ATgetFirst((ATermList) t);
            d_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_8;
              {
                ATerm y_0 (ATerm t)
                {
                  t = not_null(p_34);
                  return(t);
                }
                t = d_6(a_80, y_0, not_null(b_9), not_null(d_9), t);
                t = g_9(t);
              }
              ;
              LocalPopChoice(p_17);
            }
          else
            {
              t = i_17;
              {
                ATerm n_3 = NULL,t_3 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(y_8);
                n_3 = t;
                t = d_9;
                t = g_9(t);
                t_3 = t;
                t = (ATerm) ATinsert(CheckATermList(t_3), b_9);
                z_0 = t;
                t = SSLsetAnnotations(z_0, n_3);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(q_34);
  t = g_9(t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm b_10 = NULL;
  if(match_cons(t, sym__2))
    {
      b_10 = ATgetArgument(t, 0);
      if((b_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm f_6 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm t)
{
  ATerm m_9 = NULL,q_9 = NULL,s_9 = NULL;
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_17 = ATgetArgument(t, 0);
            ATerm u_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
        t = r_6(e_46, f_46, t);
        ;
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        t = (ATerm) ATempty;
      }
    s_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_9, g_46);
    t = e_6(a_1, s_9, g_46, t);
    q_9 = t;
    t = SSL_table_put(e_46, f_46, q_9);
    t = m_9;
  }
  return(t);
}
ATerm g_6 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm c_10 = NULL,d_10 = NULL;
    if(match_cons(t, sym__2))
      {
        c_10 = ATgetArgument(t, 0);
        d_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(o_46), c_10, d_10);
    t = a_88(t);
    return(t);
  }
  t = not_null(n_46);
  t = map_1_0(d_1, t);
  return(t);
}
ATerm m_11 (ATerm c_11, ATerm t)
{
  t = SSL_fclose(c_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL;
  k_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_11 = ATgetArgument(t, 0);
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_11);
            ;
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            t = m_11(k_11, t);
          }
      }
    }
  else
    {
      t = m_11(k_11, t);
    }
  return(t);
}
ATerm h_6 (ATerm x_27, ATerm t)
{
  t = SSL_read_term_from_stream(x_27);
  return(t);
}
ATerm i_6 (ATerm t_48, ATerm u_48, ATerm t)
{
  ATerm n_11 = NULL;
  t = SSL_fopen(t_48, u_48);
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_11);
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
  ATerm u_11 = NULL;
  t = SSL_stdout_stream();
  u_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_11 = NULL;
  t = SSL_stderr_stream();
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_11);
  return(t);
}
ATerm v_13 (ATerm b_12, ATerm t)
{
  ATerm c_12 = NULL;
  t = SSL_explode_term(b_12);
  if(match_cons(t, sym__2))
    {
      ATerm y_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_18 = ATgetArgument(t, 1);
        if(((ATgetType(d_18) == AT_LIST) && !(ATisEmpty(d_18))))
          {
            c_12 = ATgetFirst((ATermList) d_18);
            {
              ATerm e_18 = (ATerm) ATgetNext((ATermList) d_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_12;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_12;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_12;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_12;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm w_13 (ATerm g_12, ATerm h_12, ATerm i_12, ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,n_12 = NULL,q_12 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(i_12);
  n_12 = t;
  t = g_12;
  if(match_cons(t, sym_Path_1))
    {
      q_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_12, h_12);
  b_1 = t;
  t = SSLsetAnnotations(b_1, n_12);
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      k_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(j_12, k_12, t);
  return(t);
}
ATerm z_13 (ATerm v_12, ATerm w_12, ATerm a_13, ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,e_13 = NULL,p_13 = NULL,e_1 = NULL;
  t = SSLgetAnnotations(a_13);
  e_13 = t;
  t = SSL_is_string(v_12);
  p_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_13, w_12);
  e_1 = t;
  t = SSLsetAnnotations(e_1, e_13);
  if(match_cons(t, sym__2))
    {
      b_13 = ATgetArgument(t, 0);
      c_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(b_13, c_13, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_18 = ATgetArgument(t, 0);
      ATerm h_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  s_13 = t;
  if(match_cons(t, sym__2))
    {
      t_13 = ATgetArgument(t, 0);
      u_13 = ATgetArgument(t, 1);
      {
        ATerm i_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_13(s_13, t);
            ;
            LocalPopChoice(k_18);
          }
        else
          {
            t = i_18;
            {
              ATerm l_18 = t;
              int m_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_13(t_13, u_13, s_13, t);
                  ;
                  LocalPopChoice(m_18);
                }
              else
                {
                  t = l_18;
                  t = z_13(t_13, u_13, s_13, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_13(s_13, t);
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_q_18;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,d_14 = NULL;
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_14 = NULL;
      e_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_14, term_t_18);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      t = debug_1_0(f_1, t);
      _fail(t);
    }
  b_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_6(d_14, t);
  a_14 = t;
  t = b_14;
  t = fclose_0_0(t);
  t = a_14;
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_w_18;
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm c_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_14 = NULL,l_14 = NULL;
      k_14 = t;
      t = (ATerm) ATinsert(ATempty, term_k_19);
      l_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_14, (ATerm) ATinsert(ATempty, term_k_19));
      t = k_6(k_14, l_14, t);
      LocalPopChoice(i_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = c_19;
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_19 = t;
            if((PushChoice() == 0))
              {
                ATerm m_14 = NULL,n_14 = NULL;
                m_14 = t;
                t = (ATerm) ATinsert(ATempty, term_f_8);
                n_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_14, (ATerm) ATinsert(ATempty, term_f_8));
                t = k_6(m_14, n_14, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_19;
              }
            t = debug_1_0(g_1, t);
            ;
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            t = debug_1_0(h_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = debug_1_0(j_1, t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = debug_1_0(n_1, t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,s_15 = NULL;
  i_15 = t;
  t = term_r_16;
  j_15 = t;
  t = (ATerm) ATinsert(ATempty, term_q_19);
  s_15 = t;
  t = SSL_printnl(j_15, s_15);
  t = i_15;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm t_15 = NULL,v_15 = NULL,w_15 = NULL;
  if(match_cons(t, sym__3))
    {
      t_15 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
      w_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_6(t_15, v_15, w_15, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm x_15 = NULL,b_16 = NULL,d_16 = NULL;
  x_15 = t;
  t = term_r_16;
  b_16 = t;
  t = (ATerm) ATinsert(ATempty, term_r_19);
  d_16 = t;
  t = SSL_printnl(b_16, d_16);
  t = x_15;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  g_16 = t;
  t = term_r_16;
  h_16 = t;
  t = (ATerm) ATinsert(ATempty, term_q_19);
  i_16 = t;
  t = SSL_printnl(h_16, i_16);
  t = g_16;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm o_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,x_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL;
  o_14 = t;
  t = if_verbose5_1_0(i_1, t);
  {
    ATerm s_19 = t;
    if((PushChoice() == 0))
      {
        ATerm e_15 = NULL,h_15 = NULL;
        t = term_u_19;
        e_15 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, o_14);
        h_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATmakeAppl(sym_Imported_1, o_14));
        t = r_6(e_15, h_15, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_19;
      }
    s_14 = t;
    t = term_u_19;
    b_15 = t;
    t = term_v_19;
    c_15 = t;
    t = (ATerm) ATinsert(ATempty, o_14);
    d_15 = t;
    t = SSL_table_put(b_15, c_15, d_15);
    t = s_14;
    t = if_verbose4_1_0(k_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(o_1, t);
    r_14 = t;
    t = term_u_19;
    a_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_19, r_14);
    t = g_6(s_1, a_15, r_14, t);
    t = if_verbose6_1_0(v_1, t);
    t = term_u_19;
    t_14 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, o_14);
    x_14 = t;
    t = (ATerm) ATempty;
    z_14 = t;
    t = SSL_table_put(t_14, x_14, z_14);
    t = (ATerm) ATmakeAppl(sym__3, term_u_19, (ATerm)ATmakeAppl(sym_Imported_1, o_14), (ATerm) ATempty);
    t = if_verbose4_1_0(w_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  w_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_16;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_16 = ATgetFirst((ATermList) t);
          y_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm w_19 = t;
        int y_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_5 = NULL,g_5 = NULL,k_5 = NULL,u_1 = NULL;
            t = SSLgetAnnotations(w_16);
            d_5 = t;
            t = x_16;
            t = r_83(t);
            g_5 = t;
            t = y_16;
            t = filter_1_0(r_83, t);
            k_5 = t;
            t = (ATerm) ATinsert(CheckATermList(k_5), g_5);
            u_1 = t;
            t = SSLsetAnnotations(u_1, d_5);
            ;
            LocalPopChoice(y_19);
          }
        else
          {
            t = w_19;
            t = y_16;
            t = filter_1_0(r_83, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm g_17 (ATerm t)
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_85(t);
        t = g_17(t);
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
      }
    return(t);
  }
  t = g_17(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_17 = NULL;
            t = term_i_20;
            j_17 = t;
            t = SSL_getenv(j_17);
            ;
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm o_17 = NULL,q_17 = NULL;
  t = term_u_19;
  o_17 = t;
  t = term_l_20;
  q_17 = t;
  t = term_p_20;
  t = r_6(o_17, q_17, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm q_20 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_20;
      }
  }
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_s_20;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_17 = NULL;
  t = if_verbose5_1_0(y_1, t);
  k_17 = t;
  {
    ATerm u_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_17 = NULL,m_17 = NULL;
        t = term_u_19;
        l_17 = t;
        t = term_v_19;
        m_17 = t;
        t = term_y_20;
        t = r_6(l_17, m_17, t);
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = u_20;
        {
          ATerm n_17 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          n_17 = t;
          t = repeat_1_0(a_2, t);
          t = n_17;
        }
      }
    t = k_17;
    t = if_verbose5_1_0(b_2, t);
  }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm v_18 (ATerm x_17, ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  t = term_u_19;
  a_18 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_17);
  b_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATmakeAppl(sym_Tool_1, x_17));
  t = r_6(a_18, b_18, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_21 = ATgetFirst((ATermList) t);
      if(match_cons(b_21, sym__2))
        {
          ATerm d_21 = ATgetArgument(b_21, 0);
          z_17 = ATgetArgument(b_21, 1);
        }
      else
        _fail(t);
      {
        ATerm c_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_17;
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_u_19;
  t = table_getlist_0_0(t);
  t = debug_1_0(o_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_18 = NULL,f_18 = NULL,j_18 = NULL;
      t = if_verbose5_1_0(e_2, t);
      t = xtc_load_0_0(t);
      if(((j_18 != NULL) && (j_18 != t)))
        _fail(t);
      else
        j_18 = t;
      if(match_cons(t, sym__2))
        {
          c_18 = ATgetArgument(t, 0);
          f_18 = ATgetArgument(t, 1);
          {
            ATerm j_21 = t;
            int k_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
                t = term_u_19;
                if(((o_18 != NULL) && (o_18 != t)))
                  _fail(t);
                else
                  o_18 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(c_18));
                if(((p_18 != NULL) && (p_18 != t)))
                  _fail(t);
                else
                  p_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATmakeAppl(sym_Tool_1, not_null(c_18)));
                t = r_6(not_null(o_18), not_null(p_18), t);
                {
                  ATerm i_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((f_18 != NULL) && (f_18 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          f_18 = ATgetArgument(t, 0);
                        if(((n_18 != NULL) && (n_18 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          n_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(i_2, t);
                  t = not_null(n_18);
                }
                ;
                LocalPopChoice(k_21);
              }
            else
              {
                t = j_21;
                t = v_18(not_null(j_18), t);
              }
          }
        }
      else
        {
          t = v_18(not_null(j_18), t);
        }
      t = if_verbose5_1_0(j_2, t);
      ;
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      {
        ATerm u_18 = NULL,c_6 = NULL,o_6 = NULL;
        u_18 = t;
        t = term_r_16;
        c_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_21), u_18), term_l_21);
        o_6 = t;
        t = SSL_printnl(c_6, o_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_21), u_18), term_l_21);
        t = if_verbose5_1_0(l_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL;
  if(((y_18 != NULL) && (y_18 != t)))
    _fail(t);
  else
    y_18 = t;
  t = e_90(t);
  t = xtc_find_0_0(t);
  if(((x_18 != NULL) && (x_18 != t)))
    _fail(t);
  else
    x_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_18), not_null(y_18));
  {
    ATerm r_2 (ATerm t)
    {
      ATerm z_18 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_18), not_null(y_18));
      t = a_6(not_null(x_18), not_null(y_18), t);
      t = term_n_21;
      z_18 = t;
      t = SSL_exit(z_18);
      return(t);
    }
    t = fork_and_wait_1_0(r_2, t);
    t = not_null(y_18);
  }
  return(t);
}
ATerm j_6 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm t)
{
  ATerm b_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
  f_19 = t;
  t = p_86(t);
  b_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_19, q_44, o_44);
  t = s_6(b_19, q_44, o_44, t);
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_19 = NULL;
        t = term_q_21;
        j_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_19, term_q_21);
        t = r_6(b_19, j_19, t);
        ;
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_19 = ATgetFirst((ATermList) t);
        e_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_q_21;
    g_19 = t;
    t = (ATerm) ATinsert(CheckATermList(e_19), (ATerm) ATinsert(CheckATermList(d_19), q_44));
    h_19 = t;
    t = SSL_table_put(b_19, g_19, h_19);
    t = f_19;
  }
  return(t);
}
ATerm o_20 (ATerm t_19, ATerm t)
{
  t = t_19;
  {
    ATerm r_21 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_21 = ATgetArgument(t, 0);
            ATerm t_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_21;
      }
    t = term_u_21;
    t = debug_1_0(s_2, t);
    t = (ATerm) ATmakeAppl(sym__2, t_19, term_g_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm r_20 (ATerm x_19, ATerm z_19, ATerm c_20, ATerm t)
{
  t = SSL_open_file(x_19, z_19);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm k_20 = NULL,m_20 = NULL,n_20 = NULL;
  k_20 = t;
  if(match_cons(t, sym__2))
    {
      m_20 = ATgetArgument(t, 0);
      n_20 = ATgetArgument(t, 1);
      {
        ATerm w_21 = t;
        int x_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_20(k_20, t);
            ;
            LocalPopChoice(x_21);
          }
        else
          {
            t = w_21;
            t = r_20(m_20, n_20, k_20, t);
          }
      }
    }
  else
    {
      t = o_20(k_20, t);
    }
  return(t);
}
ATerm k_6 (ATerm l_48, ATerm m_48, ATerm t)
{
  t = SSL_access(l_48, m_48);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm t_20 = NULL,v_20 = NULL,w_20 = NULL;
  t = term_y_21;
  t = new_0_0(t);
  t_20 = t;
  t = term_z_21;
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_20, term_z_21);
  t = q_6(t_20, v_20, t);
  w_20 = t;
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_21 = NULL;
        t = (ATerm) ATinsert(ATempty, term_f_8);
        a_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_20, (ATerm) ATinsert(ATempty, term_f_8));
        t = k_6(w_20, a_21, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        t = w_20;
      }
  }
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL;
  t = new_file_0_0(t);
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_21, term_g_8);
  t = open_file_0_0(t);
  t = term_y_21;
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_21, term_y_21);
  t = j_6(x_2, h_21, i_21, t);
  t = h_21;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL;
  a_22 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm y_6 = NULL,z_6 = NULL;
      t = a_22;
      t = xtc_new_file_0_0(t);
      y_6 = t;
      t = m_0(t);
      z_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_6, (ATerm) ATinsert(ATinsert(ATempty, y_6), term_f_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(y_6);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_6);
    }
  else
    {
      ATerm l_7 = NULL,m_7 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_22;
      t = xtc_new_file_0_0(t);
      l_7 = t;
      t = m_0(t);
      m_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_7), term_f_22), b_22), term_g_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(l_7);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_7);
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_h_22;
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm o_22 = NULL,r_22 = NULL;
  t = term_y_21;
  t = pass_width_0_0(t);
  o_22 = t;
  t = term_y_21;
  t = pass_verbose_0_0(t);
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_22, r_22);
  t = conc_0_0(t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_h_22;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL;
  t = term_y_21;
  t = pass_width_0_0(t);
  t_22 = t;
  t = term_y_21;
  t = pass_verbose_0_0(t);
  u_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_22, u_22);
  t = conc_0_0(t);
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_22 = NULL,n_22 = NULL;
      n_22 = t;
      if(match_cons(t, sym_FILE_1))
        {
          m_22 = ATgetArgument(t, 0);
          {
            ATerm v_7 = NULL,y_3 = NULL;
            t = SSLgetAnnotations(n_22);
            v_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, m_22);
            y_3 = t;
            t = SSLsetAnnotations(y_3, v_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_22;
        }
      LocalPopChoice(j_22);
      t = xtc_transform_file_2_0(c_3, d_3, t);
    }
  else
    {
      t = i_22;
      t = xtc_transform_term_2_0(f_3, g_3, t);
    }
  return(t);
}
ATerm l_6 (ATerm t_24, ATerm u_24, ATerm t)
{
  t = SSL_copy(t_24, u_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL;
  o_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_8 = NULL;
        t = o_23;
        t = k_0(t);
        l_8 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = l_8;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = l_8;
          }
        t = (ATerm) ATmakeAppl(sym__2, p_23, l_8);
        t = l_6(p_23, l_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_23);
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
              ATerm c_9 = NULL;
              t = o_23;
              t = k_0(t);
              c_9 = t;
              {
                ATerm s_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm i_9 = NULL;
                    i_9 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = i_9;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = i_9;
                          }
                        else
                          {
                            t = i_9;
                            if((p_23 != t))
                              {
                                _fail(t);
                              }
                            t = i_9;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_22;
                  }
                t = (ATerm) ATmakeAppl(sym__2, p_23, c_9);
                t = l_6(p_23, c_9, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, p_23);
              }
              ;
              LocalPopChoice(q_22);
            }
          else
            {
              t = p_22;
              t = o_23;
              t = k_0(t);
              if((p_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_23);
            }
        }
      }
  }
  return(t);
}
ATerm m_6 (ATerm m_45, ATerm n_45, ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL;
  w_23 = t;
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
        t = r_6(m_45, n_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_22 = ATgetFirst((ATermList) t);
            v_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(w_22);
        t = SSL_table_put(m_45, n_45, v_23);
        t = (ATerm) ATmakeAppl(sym__3, m_45, n_45, v_23);
      }
    else
      {
        t = v_22;
        t = SSL_table_remove(m_45, n_45);
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
      }
    t = w_23;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,c_24 = NULL,d_24 = NULL;
  if(((c_24 != NULL) && (c_24 != t)))
    _fail(t);
  else
    c_24 = t;
  t = m_86(t);
  if(((a_24 != NULL) && (a_24 != t)))
    _fail(t);
  else
    a_24 = t;
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_24 = NULL;
        t = term_q_21;
        e_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_24), term_q_21);
        t = r_6(not_null(a_24), e_24, t);
        ;
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((z_23 != NULL) && (z_23 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          z_23 = ATgetFirst((ATermList) t);
        if(((y_23 != NULL) && (y_23 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          y_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_q_21;
    if(((d_24 != NULL) && (d_24 != t)))
      _fail(t);
    else
      d_24 = t;
    t = SSL_table_put(not_null(a_24), not_null(d_24), not_null(y_23));
    t = not_null(z_23);
    {
      ATerm h_3 (ATerm t)
      {
        ATerm f_24 = NULL;
        f_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_24), f_24);
        t = m_6(not_null(a_24), f_24, t);
        return(t);
      }
      t = map_1_0(h_3, t);
      t = not_null(c_24);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t)
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_87(t);
      t = i_87(t);
      ;
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      t = i_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
  i_24 = t;
  t = l_86(t);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_24, term_q_21);
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_23 = ATgetArgument(t, 0);
            ATerm f_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_21;
        v_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_24, term_q_21);
        t = r_6(h_24, v_24, t);
        ;
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        t = (ATerm) ATempty;
      }
    k_24 = t;
    t = term_q_21;
    l_24 = t;
    t = (ATerm) ATinsert(CheckATermList(k_24), (ATerm) ATempty);
    m_24 = t;
    t = SSL_table_put(h_24, l_24, m_24);
    t = i_24;
  }
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm l_25 = NULL;
  l_25 = t;
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(l_25);
        ;
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        t = l_25;
      }
  }
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm e_25 = NULL;
  ATerm q_3 (ATerm t)
  {
    ATerm f_25 = NULL;
    f_25 = t;
    {
      ATerm i_23 = t;
      int j_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_25 = NULL,h_25 = NULL;
          t = term_e_22;
          g_25 = t;
          t = term_q_21;
          h_25 = t;
          t = term_k_23;
          t = r_6(g_25, h_25, t);
          ;
          LocalPopChoice(j_23);
        }
      else
        {
          t = i_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((e_25 != NULL) && (e_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            e_25 = ATgetFirst((ATermList) t);
          {
            ATerm l_23 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(e_25);
      t = map_1_0(s_3, t);
      t = f_25;
      t = end_scope_1_0(u_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(i_3, t);
  t = restore_always_2_0(q_89, q_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      t = term_q_23;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_89 (ATerm), ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_25 = NULL;
        t = term_g_22;
        t = get_config_0_0(t);
        p_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_25);
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = term_e_8;
      }
    t = r_89(t);
    t = copy_to_1_0(w_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(v_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  s_25 = t;
  t = term_y_21;
  t = whoami_0_0(t);
  t_25 = t;
  t = term_r_16;
  v_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_23), t_25), term_t_23);
  w_25 = t;
  t = SSL_printnl(v_25, w_25);
  t = term_z_7;
  u_25 = t;
  t = SSL_exit(u_25);
  t = s_25;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
      t = term_y_21;
      t = j_0(t);
      f_26 = t;
      t = term_x_23;
      g_26 = t;
      t = term_b_24;
      h_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_23, term_b_24, f_26);
      t = s_6(g_26, h_26, f_26, t);
      _fail(t);
    }
  else
    {
      ATerm n_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_26 = ATgetFirst((ATermList) t);
          c_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_26 = ATgetFirst((ATermList) t);
          e_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_26;
      t = h_0(t);
      t = d_26;
      t = i_0(t);
      n_26 = t;
      t = (ATerm) ATinsert(CheckATermList(e_26), n_26);
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm r_26 = NULL;
  r_26 = t;
  if(match_string(t, "-k"))
    {
      t = r_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_26;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,x_26 = NULL;
  s_26 = t;
  t = SSL_string_to_int(s_26);
  t_26 = t;
  t = term_g_24;
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_24, t_26);
  t = u_6(x_26, t_26, t);
  t = s_26;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_j_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_3, z_3, a_4, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm d_27 = NULL;
  d_27 = t;
  if(match_string(t, "-S"))
    {
      t = d_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_27;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL;
  t = term_t_7;
  g_27 = t;
  t = term_p_24;
  h_27 = t;
  t = term_q_24;
  t = u_6(g_27, h_27, t);
  t = term_r_24;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_s_24;
  return(t);
}
ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,m_27 = NULL;
  i_27 = t;
  t = SSL_string_to_int(i_27);
  j_27 = t;
  t = term_t_7;
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_7, j_27);
  t = u_6(m_27, j_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_27);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_w_24;
  return(t);
}
ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL;
  t = term_x_24;
  n_27 = t;
  t = term_y_21;
  o_27 = t;
  t = term_y_24;
  t = u_6(n_27, o_27, t);
  t = term_z_24;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, d_4, f_4, t);
      ;
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      {
        ATerm d_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_4, j_4, k_4, t);
            ;
            LocalPopChoice(i_25);
          }
        else
          {
            t = d_25;
            t = Option_3_0(l_4, n_4, o_4, t);
          }
      }
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm q_27 = NULL;
  q_27 = t;
  if(match_string(t, "-o"))
    {
      t = q_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_27;
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm w_27 = NULL,d_28 = NULL;
  w_27 = t;
  t = term_f_22;
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_22, w_27);
  t = u_6(d_28, w_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_27);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_j_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_4, u_4, v_4, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm f_28 = NULL;
  f_28 = t;
  if(match_string(t, "-i"))
    {
      t = f_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_28;
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL;
  g_28 = t;
  t = term_g_22;
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_22, g_28);
  t = u_6(h_28, g_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_28);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, y_4, b_5, t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm j_28 = NULL;
  j_28 = t;
  if(match_string(t, "-w"))
    {
      t = j_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = j_28;
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL;
  k_28 = t;
  t = term_c_8;
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_8, k_28);
  t = u_6(l_28, k_28, t);
  t = k_28;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_m_25;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
            {
              ATerm x_25 = t;
              int y_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  ;
                  LocalPopChoice(y_25);
                }
              else
                {
                  t = x_25;
                  {
                    ATerm z_25 = t;
                    int a_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        ;
                        LocalPopChoice(a_26);
                      }
                    else
                      {
                        t = z_25;
                        t = ArgOption_3_0(e_5, f_5, i_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_21;
  t = whoami_0_0(t);
  m_28 = t;
  t = term_r_16;
  o_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_26), m_28);
  p_28 = t;
  t = SSL_printnl(o_28, p_28);
  t = term_z_7;
  n_28 = t;
  t = SSL_exit(n_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_6 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_43, d_43);
      ;
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      t = SSL_addr(c_43, d_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
  r_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_28;
      t = o_82(t);
    }
  else
    {
      ATerm w_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_28 = ATgetFirst((ATermList) t);
          t_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_28;
      t = foldr_2_0(o_82, p_82, t);
      w_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_28, w_28);
      t = p_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm v_9 = NULL,x_9 = NULL;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      x_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(v_9, x_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_28 = NULL,p_9 = NULL,r_9 = NULL;
  t = times_0_0(t);
  r_9 = t;
  t = SSL_explode_term(r_9);
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9;
  t = foldr_2_0(l_5, m_5, t);
  z_28 = t;
  t = SSL_TicksToSeconds(z_28);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  p_29 = t;
  if(match_cons(t, sym__2))
    {
      q_29 = ATgetArgument(t, 0);
      r_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_29;
        if((q_29 != t))
          {
            _fail(t);
          }
        t = p_29;
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = (ATerm) ATmakeAppl(sym__2, q_29, r_29);
        {
          ATerm q_26 = t;
          int u_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_29, r_29);
              ;
              LocalPopChoice(u_26);
            }
          else
            {
              t = q_26;
              t = SSL_gtr(q_29, r_29);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_29, r_29);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_29 = NULL;
        t = term_t_7;
        t = get_config_0_0(t);
        y_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_29, term_z_7);
        t = geq_0_0(t);
        t = w_29;
        t = t_87(t);
        ;
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
        t = w_29;
      }
  }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,f_30 = NULL,g_30 = NULL;
  t = run_time_0_0(t);
  a_30 = t;
  t = term_y_21;
  t = whoami_0_0(t);
  b_30 = t;
  t = term_r_16;
  f_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_26), a_30), term_n_8), b_30);
  g_30 = t;
  t = SSL_printnl(f_30, g_30);
  t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_26), a_30), term_n_8), b_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_24;
  h_30 = t;
  t = SSL_exit(h_30);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  q_30 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_30;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_30 = ATgetArgument(t, 0);
          {
            ATerm o_10 = NULL,b_4 = NULL;
            t = SSLgetAnnotations(q_30);
            o_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_30);
            b_4 = t;
            t = SSLsetAnnotations(b_4, o_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_30;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      t = fetch_1_0(o_5, t);
    }
  t = s_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_30 = ATgetFirst((ATermList) t);
      u_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_30 = NULL,z_30 = NULL;
        ATerm p_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_30)), not_null(z_30));
          return(t);
        }
        t = not_null(u_30);
        t = g_0(t);
        if(((y_30 != NULL) && (y_30 != t)))
          _fail(t);
        else
          y_30 = t;
        t = not_null(t_30);
        t = e_0(t);
        if(((z_30 != NULL) && (z_30 != t)))
          _fail(t);
        else
          z_30 = t;
        t = not_null(u_30);
        t = reverse_acc_2_0(e_0, p_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_21;
      t = g_0(t);
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,e_4 = NULL;
  f_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_31);
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_31);
  e_4 = t;
  t = SSLsetAnnotations(e_4, d_31);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm h_31 = NULL;
  h_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_31), term_c_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL;
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      t = fetch_1_0(q_5, t);
    }
  t = term_k_27;
  t = echo_0_0(t);
  t = term_x_23;
  b_31 = t;
  t = term_b_24;
  c_31 = t;
  t = term_l_27;
  t = r_6(b_31, c_31, t);
  t = reverse_acc_2_0(_id, s_5, t);
  t = map_1_0(t_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm e_32 (ATerm t)
  {
    ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
    b_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_32 = ATgetFirst((ATermList) t);
        d_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_27 = t;
      int t_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_10 = NULL,e_11 = NULL,g_4 = NULL;
          t = SSLgetAnnotations(b_32);
          z_10 = t;
          t = c_32;
          t = g_76(t);
          e_11 = t;
          t = (ATerm) ATinsert(CheckATermList(d_32), e_11);
          g_4 = t;
          t = SSLsetAnnotations(g_4, z_10);
          ;
          LocalPopChoice(t_27);
        }
      else
        {
          t = p_27;
          {
            ATerm w_11 = NULL,z_11 = NULL,h_4 = NULL;
            t = SSLgetAnnotations(b_32);
            w_11 = t;
            t = d_32;
            t = e_32(t);
            z_11 = t;
            t = (ATerm) ATinsert(CheckATermList(z_11), c_32);
            h_4 = t;
            t = SSLsetAnnotations(h_4, w_11);
          }
        }
    }
    return(t);
  }
  t = e_32(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  i_32 = t;
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_27 = ATgetFirst((ATermList) t);
                ATerm a_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_32;
          }
        ;
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        t = (ATerm) ATinsert(ATempty, i_32);
      }
    j_32 = t;
    t = term_q_23;
    k_32 = t;
    t = SSL_printnl(k_32, j_32);
    t = i_32;
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
ATerm q_6 (ATerm y_41, ATerm z_41, ATerm t)
{
  t = SSL_strcat(y_41, z_41);
  return(t);
}
ATerm debug_1_0 (ATerm b_72 (ATerm), ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  o_32 = t;
  t = b_72(t);
  p_32 = t;
  t = term_r_16;
  q_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_32), p_32);
  r_32 = t;
  t = SSL_printnl(q_32, r_32);
  t = o_32;
  return(t);
}
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm g_33 (ATerm t)
  {
    ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
    d_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_33;
      }
    else
      {
        ATerm x_12 = NULL,d_13 = NULL,f_13 = NULL,m_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_33 = ATgetFirst((ATermList) t);
            f_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_33);
        x_12 = t;
        t = e_33;
        t = w_75(t);
        d_13 = t;
        t = f_33;
        t = g_33(t);
        f_13 = t;
        t = (ATerm) ATinsert(CheckATermList(f_13), d_13);
        m_4 = t;
        t = SSLsetAnnotations(m_4, x_12);
      }
    return(t);
  }
  t = g_33(t);
  return(t);
}
ATerm u_5 (ATerm t)
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
ATerm v_5 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_33 = NULL;
      o_33 = t;
      t = SSL_is_string(o_33);
      ;
      LocalPopChoice(q_28);
    }
  else
    {
      t = i_28;
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_5, t);
            ;
            LocalPopChoice(v_28);
          }
        else
          {
            t = u_28;
            {
              ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
              u_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_33 = ATgetArgument(t, 0);
                  t = v_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_33 = ATgetArgument(t, 0);
                      t = v_33;
                      {
                        ATerm x_28 = t;
                        int y_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(y_28);
                          }
                        else
                          {
                            t = x_28;
                            t = debug_1_0(v_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_34 = NULL,b_34 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_33 = ATgetArgument(t, 0);
                          w_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_33;
                      t = eval_config_0_0(t);
                      a_34 = t;
                      t = w_33;
                      t = eval_config_0_0(t);
                      b_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_34, b_34);
                      t = q_6(a_34, b_34, t);
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
  ATerm f_34 = NULL,g_34 = NULL;
  f_34 = t;
  t = term_a_29;
  g_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_29, f_34);
  t = r_6(g_34, f_34, t);
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_34 = NULL,i_34 = NULL;
        t = eval_config_0_0(t);
        h_34 = t;
        t = term_a_29;
        i_34 = t;
        t = SSL_table_put(i_34, f_34, h_34);
        t = h_34;
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
      }
  }
  return(t);
}
ATerm w_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL;
  t = term_d_29;
  l_34 = t;
  t = term_y_21;
  m_34 = t;
  t = term_e_29;
  t = u_6(l_34, m_34, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm t_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,r_34 = NULL,s_34 = NULL;
  t = term_d_29;
  r_34 = t;
  t = term_y_21;
  s_34 = t;
  t = term_e_29;
  t = u_6(r_34, s_34, t);
  t = term_g_29;
  n_34 = t;
  t = term_y_21;
  o_34 = t;
  t = term_h_29;
  t = u_6(n_34, o_34, t);
  t = term_i_29;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_5, b_6, p_6, t);
      ;
      LocalPopChoice(l_29);
    }
  else
    {
      t = k_29;
      t = Option_3_0(t_6, v_6, w_6, t);
    }
  return(t);
}
ATerm u_6 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm w_34 = NULL;
  t = term_a_29;
  w_34 = t;
  t = SSL_table_put(w_34, h_47, i_47);
  t = (ATerm) ATmakeAppl(sym__3, term_a_29, h_47, i_47);
  return(t);
}
ATerm r_6 (ATerm y_46, ATerm z_46, ATerm t)
{
  t = SSL_table_get(y_46, z_46);
  return(t);
}
ATerm s_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_29 = ATgetArgument(t, 0);
            ATerm s_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
        t = r_6(h_45, i_45, t);
        ;
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        t = (ATerm) ATempty;
      }
    a_35 = t;
    t = (ATerm) ATinsert(CheckATermList(a_35), g_45);
    b_35 = t;
    t = SSL_table_put(h_45, i_45, b_35);
    t = z_34;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
      t = term_y_21;
      t = d_0(t);
      j_35 = t;
      t = term_x_23;
      k_35 = t;
      t = term_b_24;
      l_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_23, term_b_24, j_35);
      t = s_6(k_35, l_35, j_35, t);
      _fail(t);
    }
  else
    {
      ATerm o_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_35 = ATgetFirst((ATermList) t);
          i_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_35;
      t = a_0(t);
      t = term_y_21;
      t = c_0(t);
      o_35 = t;
      t = (ATerm) ATinsert(CheckATermList(i_35), o_35);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,p_4 = NULL;
  u_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_35 = ATgetFirst((ATermList) t);
      r_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_35);
  p_35 = t;
  t = q_35;
  t = o_63(t);
  s_35 = t;
  t = r_35;
  t = p_63(t);
  t_35 = t;
  t = (ATerm) ATinsert(CheckATermList(t_35), s_35);
  p_4 = t;
  t = SSLsetAnnotations(p_4, p_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,g_36 = NULL,h_36 = NULL,z_4 = NULL;
  if(((b_36 != NULL) && (b_36 != t)))
    _fail(t);
  else
    b_36 = t;
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_29;
        t = q_93(t);
        ;
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
      }
    t = not_null(b_36);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_36 != NULL) && (d_36 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_36 = ATgetFirst((ATermList) t);
        if(((e_36 != NULL) && (e_36 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          e_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(b_36));
    if(((c_36 != NULL) && (c_36 != t)))
      _fail(t);
    else
      c_36 = t;
    t = term_j_26;
    if(((h_36 != NULL) && (h_36 != t)))
      _fail(t);
    else
      h_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_26, not_null(d_36));
    t = u_6(not_null(h_36), not_null(d_36), t);
    t = not_null(e_36);
    {
      ATerm r_36 (ATerm t)
      {
        ATerm x_29 = t;
        int z_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_30 = t;
            int d_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_36 = NULL;
                k_36 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_36;
                ;
                LocalPopChoice(d_30);
              }
            else
              {
                t = c_30;
                t = q_93(t);
                t = Cons_2_0(_id, r_36, t);
              }
            ;
            LocalPopChoice(z_29);
          }
        else
          {
            t = x_29;
            {
              ATerm n_36 = NULL,o_36 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_36 = ATgetFirst((ATermList) t);
                  o_36 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_36), (ATerm) ATmakeAppl(sym_Undefined_1, n_36));
            }
          }
        return(t);
      }
      t = r_36(t);
      if(((g_36 != NULL) && (g_36 != t)))
        _fail(t);
      else
        g_36 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(g_36)), (ATerm) ATmakeAppl(sym_Program_1, not_null(d_36)));
      if(((z_4 != NULL) && (z_4 != t)))
        _fail(t);
      else
        z_4 = t;
      t = SSLsetAnnotations(not_null(z_4), not_null(c_36));
    }
  }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm d_37 = NULL;
  d_37 = t;
  if(match_string(t, "--help"))
    {
      t = d_37;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_37;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_37;
        }
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL;
  t = term_b_27;
  e_37 = t;
  t = term_y_21;
  f_37 = t;
  t = term_e_30;
  t = u_6(e_37, f_37, t);
  t = term_i_30;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm i_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
  if(((y_36 != NULL) && (y_36 != t)))
    _fail(t);
  else
    y_36 = t;
  t = term_x_23;
  if(((a_37 != NULL) && (a_37 != t)))
    _fail(t);
  else
    a_37 = t;
  t = term_b_24;
  if(((b_37 != NULL) && (b_37 != t)))
    _fail(t);
  else
    b_37 = t;
  t = (ATerm) ATempty;
  if(((c_37 != NULL) && (c_37 != t)))
    _fail(t);
  else
    c_37 = t;
  t = SSL_table_put(not_null(a_37), not_null(b_37), not_null(c_37));
  t = not_null(y_36);
  {
    ATerm x_6 (ATerm t)
    {
      ATerm k_30 = t;
      int l_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_93(t);
          ;
          LocalPopChoice(l_30);
        }
      else
        {
          t = k_30;
          {
            ATerm m_30 = t;
            int n_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_7, d_7, e_7, t);
                ;
                LocalPopChoice(n_30);
              }
            else
              {
                t = m_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_6, t);
    {
      ATerm o_30 = t;
      int r_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_37 = NULL;
          m_37 = t;
          {
            ATerm s_30 = t;
            int v_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_14 = NULL;
                t = m_37;
                {
                  ATerm w_30 = t;
                  int x_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_b_27;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(x_30);
                    }
                  else
                    {
                      t = w_30;
                      t = fetch_1_0(i_7, t);
                    }
                  t = m_37;
                  t = default_system_usage_0_0(t);
                  t = term_p_24;
                  i_14 = t;
                  t = SSL_exit(i_14);
                }
                ;
                LocalPopChoice(v_30);
              }
            else
              {
                t = s_30;
                {
                  ATerm v_14 = NULL;
                  t = term_d_29;
                  t = get_config_0_0(t);
                  t = m_37;
                  t = default_system_about_0_0(t);
                  t = term_p_24;
                  v_14 = t;
                  t = SSL_exit(v_14);
                }
              }
          }
          ;
          LocalPopChoice(r_30);
        }
      else
        {
          t = o_30;
          {
            ATerm a_31 = t;
            int g_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
                ATerm j_7 (ATerm t)
                {
                  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,j_5 = NULL;
                  s_37 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      r_37 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_37);
                  q_37 = t;
                  t = r_37;
                  if(((w_36 != NULL) && (w_36 != t)))
                    _fail(t);
                  else
                    w_36 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_37);
                  j_5 = t;
                  t = SSLsetAnnotations(j_5, q_37);
                  return(t);
                }
                t = fetch_1_0(j_7, t);
                t = term_r_16;
                if(((o_37 != NULL) && (o_37 != t)))
                  _fail(t);
                else
                  o_37 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_36)), term_i_31);
                if(((p_37 != NULL) && (p_37 != t)))
                  _fail(t);
                else
                  p_37 = t;
                t = SSL_printnl(not_null(o_37), not_null(p_37));
                t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_36)), term_i_31));
                t = default_system_usage_0_0(t);
                t = term_z_7;
                if(((n_37 != NULL) && (n_37 != t)))
                  _fail(t);
                else
                  n_37 = t;
                t = SSL_exit(not_null(n_37));
                ;
                LocalPopChoice(g_31);
              }
            else
              {
                t = a_31;
              }
          }
        }
      if(((x_36 != NULL) && (x_36 != t)))
        _fail(t);
      else
        x_36 = t;
      t = term_x_23;
      if(((z_36 != NULL) && (z_36 != t)))
        _fail(t);
      else
        z_36 = t;
      t = SSL_table_destroy(not_null(z_36));
      t = not_null(x_36);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL;
  t = parse_options_1_0(u_91, t);
  x_37 = t;
  t = term_j_31;
  a_38 = t;
  t = SSL_table_create(a_38);
  t = term_j_31;
  y_37 = t;
  t = term_k_31;
  z_37 = t;
  t = SSL_table_put(y_37, z_37, x_37);
  t = x_37;
  t = w_91(t);
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_91, t);
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        {
          ATerm n_31 = t;
          int o_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_31);
            }
          else
            {
              t = n_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = xtc_io_1_0(abox2text_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, n_7, t);
  return(t);
}
