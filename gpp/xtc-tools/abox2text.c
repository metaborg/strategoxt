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
ATerm term_o_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_y_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_g_29;
ATerm term_y_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_p_28;
ATerm term_c_28;
ATerm term_o_27;
ATerm term_m_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_u_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_m_25;
ATerm term_d_25;
ATerm term_b_25;
ATerm term_u_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_a_24;
ATerm term_w_23;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_j_22;
ATerm term_g_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_m_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_d_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_r_20;
ATerm term_d_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_i_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_v_18;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_w_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_c_11;
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
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_11, term_f_11, term_g_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_11, term_j_11, term_m_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_11, term_s_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_a_12, term_b_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_q_12, term_r_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_z_12, term_a_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_f_13, term_g_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_t_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_z_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_e_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_q_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_w_14, term_d_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_q_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_b_16, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_i_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_l_16, term_m_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_p_16, term_q_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_b_20, term_x_20);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_b_20, term_d_20);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_o_22, term_y_21);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_j_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym__2, term_q_24, term_g_22);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym__2, term_f_24, term_g_24);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_g_22);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__2, term_y_28, term_g_22);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym__2, term_e_27, term_g_22);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
ATerm at_end_1_0 (ATerm g_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm t_2 (ATerm x_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm x_5 (ATerm c_31, ATerm d_31, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm pass_width_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm y_5 (ATerm j_15, ATerm k_15, ATerm);
ATerm z_5 (ATerm x_59 (ATerm), ATerm r_159, ATerm r_15, ATerm);
ATerm o_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm);
ATerm a_6 (ATerm f_12, ATerm g_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm c_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm m_58 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_75 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_75 (ATerm), ATerm);
ATerm d_6 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm m_22, ATerm l_22, ATerm);
ATerm e_6 (ATerm u_67 (ATerm), ATerm i_22, ATerm h_22, ATerm);
ATerm a_1 (ATerm);
ATerm f_6 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm);
ATerm g_6 (ATerm a_76 (ATerm), ATerm i_34, ATerm h_34, ATerm);
ATerm n_11 (ATerm d_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm h_6 (ATerm p_15, ATerm);
ATerm i_6 (ATerm n_36, ATerm o_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_13 (ATerm c_12, ATerm);
ATerm s_13 (ATerm i_12, ATerm j_12, ATerm k_12, ATerm);
ATerm u_13 (ATerm v_12, ATerm w_12, ATerm x_12, ATerm);
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
ATerm filter_1_0 (ATerm m_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm l_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_19 (ATerm i_18, ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm o_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm e_78 (ATerm), ATerm);
ATerm j_6 (ATerm p_74 (ATerm), ATerm k_32, ATerm i_32, ATerm);
ATerm p_20 (ATerm c_20, ATerm);
ATerm s_20 (ATerm e_20, ATerm f_20, ATerm h_20, ATerm);
ATerm s_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm k_6 (ATerm f_36, ATerm g_36, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm abox2text_0_0 (ATerm);
ATerm l_6 (ATerm l_12, ATerm m_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm m_6 (ATerm g_33, ATerm h_33, ATerm);
ATerm end_scope_1_0 (ATerm m_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_74 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_77 (ATerm), ATerm);
ATerm w_3 (ATerm);
ATerm xtc_io_1_0 (ATerm r_77 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
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
ATerm n_6 (ATerm w_30, ATerm x_30, ATerm);
ATerm foldr_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_75 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm need_help_1_0 (ATerm s_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm a_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm q_6 (ATerm s_29, ATerm t_29, ATerm);
ATerm debug_1_0 (ATerm v_59 (ATerm), ATerm);
ATerm map_1_0 (ATerm q_63 (ATerm), ATerm);
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
ATerm u_6 (ATerm b_35, ATerm c_35, ATerm);
ATerm r_6 (ATerm s_34, ATerm t_34, ATerm);
ATerm s_6 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_81 (ATerm), ATerm);
ATerm a_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm i_7 (ATerm);
ATerm parse_options_1_0 (ATerm p_81 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm);
ATerm n_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm g_64 (ATerm), ATerm t)
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
        t = g_64(t);
      }
    return(t);
  }
  t = t_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
    }
  else
    {
      ATerm a_0 (ATerm t)
      {
        t = not_null(e_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_0 = ATgetFirst((ATermList) t);
          if(((e_0 != NULL) && (e_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_0;
      t = at_end_1_0(a_0, t);
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
            ATerm f_0 (ATerm t)
            {
              t = n_2;
              return(t);
            }
            t = m_2;
            t = at_end_1_0(f_0, t);
            ;
            LocalPopChoice(q_7);
          }
        else
          {
            t = o_7;
            t = t_2(p_2, t);
          }
      }
    }
  else
    {
      t = t_2(p_2, t);
    }
  return(t);
}
ATerm x_5 (ATerm c_31, ATerm d_31, ATerm t)
{
  ATerm r_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(c_31, d_31);
      ;
      LocalPopChoice(s_7);
    }
  else
    {
      t = r_7;
      t = SSL_subtr(c_31, d_31);
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
ATerm y_5 (ATerm j_15, ATerm k_15, ATerm t)
{
  ATerm k_3 = NULL;
  t = SSL_write_term_to_stream_baf(j_15, k_15);
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_3);
  return(t);
}
ATerm z_5 (ATerm x_59 (ATerm), ATerm r_159, ATerm r_15, ATerm t)
{
  ATerm l_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_159, term_g_8);
  t = open_stream_0_0(t);
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_3, r_15);
  t = x_59(t);
  t = fclose_0_0(t);
  t = r_15;
  return(t);
}
ATerm o_0 (ATerm t)
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
  t = z_5(o_0, o_3, m_3, t);
  t = SSL_close_file(o_3);
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_3);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_78, o_78, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm a_6 (ATerm f_12, ATerm g_12, ATerm t)
{
  t = SSL_execvp(f_12, g_12);
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
ATerm fetch_elem_1_0 (ATerm c_64 (ATerm), ATerm t)
{
  ATerm a_5 = NULL;
  ATerm q_0 (ATerm t)
  {
    t = c_64(t);
    if(((a_5 != NULL) && (a_5 != t)))
      _fail(t);
    else
      a_5 = t;
    return(t);
  }
  t = fetch_1_0(q_0, t);
  t = not_null(a_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm c_5 = NULL;
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
              if((c_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm s_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_16), term_n_16), term_j_16), term_f_16), term_t_15), term_e_15), term_t_14), term_h_14), term_a_14), term_v_13), term_j_13), term_d_13), term_t_12), term_e_12), term_x_11), term_p_11), term_h_11), term_b_11), term_w_10), term_s_10), term_n_10), term_j_10), term_f_10), term_y_9), term_o_9), term_j_9), term_a_9), term_v_8);
        t = fetch_elem_1_0(t_0, t);
        ;
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, c_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm h_5 = NULL,r_5 = NULL;
  h_5 = t;
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_16 = ATgetArgument(t, 0);
            r_5 = ATgetArgument(t, 1);
            {
              ATerm v_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_16);
        {
          ATerm w_16 = t;
          int x_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_2 = NULL,y_2 = NULL,b_3 = NULL;
              t = r_5;
              {
                ATerm y_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_16;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                q_2 = t;
                t = term_z_16;
                y_2 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, q_2), term_a_17);
                b_3 = t;
                t = SSL_printnl(y_2, b_3);
                t = (ATerm) ATmakeAppl(sym__2, term_z_16, (ATerm) ATinsert(ATinsert(ATempty, q_2), term_a_17));
              }
              ;
              LocalPopChoice(x_16);
            }
          else
            {
              t = w_16;
              t = h_5;
            }
        }
      }
    else
      {
        t = s_16;
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
ATerm fork_and_wait_1_0 (ATerm m_58 (ATerm), ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL;
  c_7 = t;
  t = fork_0_0(t);
  b_7 = t;
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = c_7;
        t = m_58(t);
        ;
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        t = SSL_waitpid(b_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_17 = ATgetArgument(t, 0);
            if(((ATgetType(d_17) != AT_INT) || (ATgetInt((ATermInt) d_17) != 0)))
              _fail(t);
            {
              ATerm e_17 = ATgetArgument(t, 1);
            }
            {
              ATerm f_17 = ATgetArgument(t, 2);
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
  t = SSL_table_keys(f_7);
  t = map_1_0(v_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_75 (ATerm), ATerm t)
{
  ATerm k_7 = NULL;
  k_7 = t;
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_7 = NULL;
        t = term_t_7;
        t = get_config_0_0(t);
        p_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_7, term_b_16);
        t = geq_0_0(t);
        t = k_7;
        t = x_75(t);
        ;
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        t = k_7;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm u_7 = NULL;
  u_7 = t;
  {
    ATerm i_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL;
        t = term_t_7;
        t = get_config_0_0(t);
        y_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_7, term_f_11);
        t = geq_0_0(t);
        t = u_7;
        t = w_75(t);
        ;
        LocalPopChoice(m_17);
      }
    else
      {
        t = i_17;
        t = u_7;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_75 (ATerm), ATerm t)
{
  ATerm d_8 = NULL;
  d_8 = t;
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_8 = NULL;
        t = term_t_7;
        t = get_config_0_0(t);
        i_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_8, term_l_9);
        t = geq_0_0(t);
        t = d_8;
        t = y_75(t);
        ;
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        t = d_8;
      }
  }
  return(t);
}
ATerm d_6 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm m_22, ATerm l_22, ATerm t)
{
  t = y_67(t);
  {
    ATerm w_0 (ATerm t)
    {
      ATerm k_8 = NULL;
      k_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, k_8);
      t = x_67(t);
      return(t);
    }
    t = fetch_1_0(w_0, t);
    t = l_22;
  }
  return(t);
}
ATerm e_6 (ATerm u_67 (ATerm), ATerm i_22, ATerm h_22, ATerm t)
{
  ATerm g_9 (ATerm t)
  {
    ATerm y_8 = NULL,b_9 = NULL,d_9 = NULL;
    y_8 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_22;
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
          ATerm p_17 = t;
          int q_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_8;
              {
                ATerm y_0 (ATerm t)
                {
                  t = h_22;
                  return(t);
                }
                t = d_6(u_67, y_0, b_9, d_9, t);
                t = g_9(t);
              }
              ;
              LocalPopChoice(q_17);
            }
          else
            {
              t = p_17;
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
  t = i_22;
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
ATerm f_6 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm m_9 = NULL,q_9 = NULL,s_9 = NULL;
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
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
        t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
        t = r_6(y_33, z_33, t);
        ;
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        t = (ATerm) ATempty;
      }
    s_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_9, a_34);
    t = e_6(a_1, s_9, a_34, t);
    q_9 = t;
    t = SSL_table_put(y_33, z_33, q_9);
    t = m_9;
  }
  return(t);
}
ATerm g_6 (ATerm a_76 (ATerm), ATerm i_34, ATerm h_34, ATerm t)
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
    t = (ATerm) ATmakeAppl(sym__3, i_34, c_10, d_10);
    t = a_76(t);
    return(t);
  }
  t = h_34;
  t = map_1_0(d_1, t);
  return(t);
}
ATerm n_11 (ATerm d_11, ATerm t)
{
  t = SSL_fclose(d_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  l_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_11 = ATgetArgument(t, 0);
      {
        ATerm v_17 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_11);
            ;
            LocalPopChoice(e_18);
          }
        else
          {
            t = v_17;
            t = n_11(l_11, t);
          }
      }
    }
  else
    {
      t = n_11(l_11, t);
    }
  return(t);
}
ATerm h_6 (ATerm p_15, ATerm t)
{
  t = SSL_read_term_from_stream(p_15);
  return(t);
}
ATerm i_6 (ATerm n_36, ATerm o_36, ATerm t)
{
  ATerm o_11 = NULL;
  t = SSL_fopen(n_36, o_36);
  o_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_11);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_11 = NULL;
  t = SSL_stdin_stream();
  t_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_11 = NULL;
  t = SSL_stdout_stream();
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_11 = NULL;
  t = SSL_stderr_stream();
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_11);
  return(t);
}
ATerm q_13 (ATerm c_12, ATerm t)
{
  ATerm d_12 = NULL;
  t = SSL_explode_term(c_12);
  if(match_cons(t, sym__2))
    {
      ATerm f_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_18 = ATgetArgument(t, 1);
        if(((ATgetType(g_18) == AT_LIST) && !(ATisEmpty(g_18))))
          {
            d_12 = ATgetFirst((ATermList) g_18);
            {
              ATerm h_18 = (ATerm) ATgetNext((ATermList) g_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_12;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_12;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_12;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_12;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm s_13 (ATerm i_12, ATerm j_12, ATerm k_12, ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,s_12 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(k_12);
  p_12 = t;
  t = i_12;
  if(match_cons(t, sym_Path_1))
    {
      s_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_12, j_12);
  b_1 = t;
  t = SSLsetAnnotations(b_1, p_12);
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(n_12, o_12, t);
  return(t);
}
ATerm u_13 (ATerm v_12, ATerm w_12, ATerm x_12, ATerm t)
{
  ATerm y_12 = NULL,b_13 = NULL,c_13 = NULL,i_13 = NULL,e_1 = NULL;
  t = SSLgetAnnotations(x_12);
  c_13 = t;
  t = SSL_is_string(v_12);
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_13, w_12);
  e_1 = t;
  t = SSLsetAnnotations(e_1, c_13);
  if(match_cons(t, sym__2))
    {
      y_12 = ATgetArgument(t, 0);
      b_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(y_12, b_13, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm k_13 = NULL,o_13 = NULL,p_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_18 = ATgetArgument(t, 0);
      ATerm l_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  k_13 = t;
  if(match_cons(t, sym__2))
    {
      o_13 = ATgetArgument(t, 0);
      p_13 = ATgetArgument(t, 1);
      {
        ATerm n_18 = t;
        int o_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_13(k_13, t);
            ;
            LocalPopChoice(o_18);
          }
        else
          {
            t = n_18;
            {
              ATerm t_18 = t;
              int u_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_13(o_13, p_13, k_13, t);
                  ;
                  LocalPopChoice(u_18);
                }
              else
                {
                  t = t_18;
                  t = u_13(o_13, p_13, k_13, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_13(k_13, t);
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_v_18;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_13 = NULL,d_14 = NULL,f_14 = NULL;
  ATerm y_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_14 = NULL;
      g_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_14, term_b_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_19);
    }
  else
    {
      t = y_18;
      t = debug_1_0(f_1, t);
      _fail(t);
    }
  d_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_6(f_14, t);
  w_13 = t;
  t = d_14;
  t = fclose_0_0(t);
  t = w_13;
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_c_19;
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_d_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_14 = NULL,j_14 = NULL;
      i_14 = t;
      t = (ATerm) ATinsert(ATempty, term_i_19);
      j_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_14, (ATerm) ATinsert(ATempty, term_i_19));
      t = k_6(i_14, j_14, t);
      LocalPopChoice(f_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = e_19;
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_19 = t;
            if((PushChoice() == 0))
              {
                ATerm k_14 = NULL,n_14 = NULL;
                k_14 = t;
                t = (ATerm) ATinsert(ATempty, term_f_8);
                n_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_14, (ATerm) ATinsert(ATempty, term_f_8));
                t = k_6(k_14, n_14, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_19;
              }
            t = debug_1_0(g_1, t);
            ;
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
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
  t = term_n_19;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = debug_1_0(n_1, t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,l_15 = NULL;
  h_15 = t;
  t = term_z_16;
  i_15 = t;
  t = (ATerm) ATinsert(ATempty, term_q_19);
  l_15 = t;
  t = SSL_printnl(i_15, l_15);
  t = h_15;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm s_15 = NULL,u_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__3))
    {
      s_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
      v_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_6(s_15, u_15, v_15, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  w_15 = t;
  t = term_z_16;
  x_15 = t;
  t = (ATerm) ATinsert(ATempty, term_z_19);
  y_15 = t;
  t = SSL_printnl(x_15, y_15);
  t = w_15;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm z_15 = NULL,c_16 = NULL,d_16 = NULL;
  z_15 = t;
  t = term_z_16;
  c_16 = t;
  t = (ATerm) ATinsert(ATempty, term_q_19);
  d_16 = t;
  t = SSL_printnl(c_16, d_16);
  t = z_15;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,r_14 = NULL,s_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
  o_14 = t;
  t = if_verbose5_1_0(i_1, t);
  {
    ATerm a_20 = t;
    if((PushChoice() == 0))
      {
        ATerm f_15 = NULL,g_15 = NULL;
        t = term_b_20;
        f_15 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, o_14);
        g_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_20, (ATerm) ATmakeAppl(sym_Imported_1, o_14));
        t = r_6(f_15, g_15, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_20;
      }
    r_14 = t;
    t = term_b_20;
    a_15 = t;
    t = term_d_20;
    b_15 = t;
    t = (ATerm) ATinsert(ATempty, o_14);
    c_15 = t;
    t = SSL_table_put(a_15, b_15, c_15);
    t = r_14;
    t = if_verbose4_1_0(k_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(o_1, t);
    p_14 = t;
    t = term_b_20;
    z_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_20, p_14);
    t = g_6(s_1, z_14, p_14, t);
    t = if_verbose6_1_0(v_1, t);
    t = term_b_20;
    s_14 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, o_14);
    x_14 = t;
    t = (ATerm) ATempty;
    y_14 = t;
    t = SSL_table_put(s_14, x_14, y_14);
    t = (ATerm) ATmakeAppl(sym__3, term_b_20, (ATerm)ATmakeAppl(sym_Imported_1, o_14), (ATerm) ATempty);
    t = if_verbose4_1_0(w_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm m_71 (ATerm), ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
  j_17 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_17;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_17 = ATgetFirst((ATermList) t);
          l_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_20 = t;
        int i_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_5 = NULL,g_5 = NULL,k_5 = NULL,u_1 = NULL;
            t = SSLgetAnnotations(j_17);
            d_5 = t;
            t = k_17;
            t = m_71(t);
            g_5 = t;
            t = l_17;
            t = filter_1_0(m_71, t);
            k_5 = t;
            t = (ATerm) ATinsert(CheckATermList(k_5), g_5);
            u_1 = t;
            t = SSLsetAnnotations(u_1, d_5);
            ;
            LocalPopChoice(i_20);
          }
        else
          {
            t = g_20;
            t = l_17;
            t = filter_1_0(m_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_73 (ATerm), ATerm t)
{
  ATerm w_17 (ATerm t)
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_73(t);
        t = w_17(t);
        ;
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
      }
    return(t);
  }
  t = w_17(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm o_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_20);
    }
  else
    {
      t = o_20;
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_17 = NULL;
            t = term_v_20;
            x_17 = t;
            t = SSL_getenv(x_17);
            ;
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
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
  t = term_w_20;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL;
  t = term_b_20;
  c_18 = t;
  t = term_x_20;
  d_18 = t;
  t = term_a_21;
  t = r_6(c_18, d_18, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm b_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_21;
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
  t = term_d_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm y_17 = NULL;
  t = if_verbose5_1_0(y_1, t);
  y_17 = t;
  {
    ATerm e_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_17 = NULL,a_18 = NULL;
        t = term_b_20;
        z_17 = t;
        t = term_d_20;
        a_18 = t;
        t = term_h_21;
        t = r_6(z_17, a_18, t);
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = e_21;
        {
          ATerm b_18 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          b_18 = t;
          t = repeat_1_0(a_2, t);
          t = b_18;
        }
      }
    t = y_17;
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
  t = term_i_21;
  return(t);
}
ATerm h_19 (ATerm i_18, ATerm t)
{
  ATerm k_18 = NULL,m_18 = NULL,p_18 = NULL;
  t = term_b_20;
  m_18 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, i_18);
  p_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_20, (ATerm) ATmakeAppl(sym_Tool_1, i_18));
  t = r_6(m_18, p_18, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_21 = ATgetFirst((ATermList) t);
      if(match_cons(j_21, sym__2))
        {
          ATerm l_21 = ATgetArgument(j_21, 0);
          k_18 = ATgetArgument(j_21, 1);
        }
      else
        _fail(t);
      {
        ATerm k_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_18;
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_i_21;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_b_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(o_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm n_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
      t = if_verbose5_1_0(e_2, t);
      t = xtc_load_0_0(t);
      s_18 = t;
      if(match_cons(t, sym__2))
        {
          q_18 = ATgetArgument(t, 0);
          r_18 = ATgetArgument(t, 1);
          {
            ATerm r_21 = t;
            int s_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_18 = NULL,x_18 = NULL,z_18 = NULL;
                t = term_b_20;
                x_18 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, q_18);
                z_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_b_20, (ATerm) ATmakeAppl(sym_Tool_1, q_18));
                t = r_6(x_18, z_18, t);
                {
                  ATerm i_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((r_18 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((w_18 != NULL) && (w_18 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          w_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(i_2, t);
                  t = not_null(w_18);
                }
                ;
                LocalPopChoice(s_21);
              }
            else
              {
                t = r_21;
                t = h_19(s_18, t);
              }
          }
        }
      else
        {
          t = h_19(s_18, t);
        }
      t = if_verbose5_1_0(j_2, t);
      ;
      LocalPopChoice(p_21);
    }
  else
    {
      t = n_21;
      {
        ATerm g_19 = NULL,c_6 = NULL,o_6 = NULL;
        g_19 = t;
        t = term_z_16;
        c_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_21), g_19), term_t_21);
        o_6 = t;
        t = SSL_printnl(c_6, o_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_21), g_19), term_t_21);
        t = if_verbose5_1_0(l_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_78 (ATerm), ATerm t)
{
  ATerm l_19 = NULL,p_19 = NULL;
  p_19 = t;
  t = e_78(t);
  t = xtc_find_0_0(t);
  l_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_19, p_19);
  {
    ATerm r_2 (ATerm t)
    {
      ATerm r_19 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, l_19, p_19);
      t = a_6(l_19, p_19, t);
      t = term_v_21;
      r_19 = t;
      t = SSL_exit(r_19);
      return(t);
    }
    t = fork_and_wait_1_0(r_2, t);
    t = p_19;
  }
  return(t);
}
ATerm j_6 (ATerm p_74 (ATerm), ATerm k_32, ATerm i_32, ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  v_19 = t;
  t = p_74(t);
  s_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_19, k_32, i_32);
  t = s_6(s_19, k_32, i_32, t);
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_19 = NULL;
        t = term_y_21;
        y_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_19, term_y_21);
        t = r_6(s_19, y_19, t);
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_19 = ATgetFirst((ATermList) t);
        u_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_y_21;
    w_19 = t;
    t = (ATerm) ATinsert(CheckATermList(u_19), (ATerm) ATinsert(CheckATermList(t_19), k_32));
    x_19 = t;
    t = SSL_table_put(s_19, w_19, x_19);
    t = v_19;
  }
  return(t);
}
ATerm p_20 (ATerm c_20, ATerm t)
{
  t = c_20;
  {
    ATerm z_21 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_22 = ATgetArgument(t, 0);
            ATerm b_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_21;
      }
    t = term_c_22;
    t = debug_1_0(s_2, t);
    t = (ATerm) ATmakeAppl(sym__2, c_20, term_g_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm s_20 (ATerm e_20, ATerm f_20, ATerm h_20, ATerm t)
{
  t = SSL_open_file(e_20, f_20);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  if(match_cons(t, sym__2))
    {
      m_20 = ATgetArgument(t, 0);
      n_20 = ATgetArgument(t, 1);
      {
        ATerm e_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_20(l_20, t);
            ;
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
            t = s_20(m_20, n_20, l_20, t);
          }
      }
    }
  else
    {
      t = p_20(l_20, t);
    }
  return(t);
}
ATerm k_6 (ATerm f_36, ATerm g_36, ATerm t)
{
  t = SSL_access(f_36, g_36);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,c_21 = NULL;
  t = term_g_22;
  t = new_0_0(t);
  y_20 = t;
  t = term_j_22;
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_20, term_j_22);
  t = q_6(y_20, z_20, t);
  c_21 = t;
  {
    ATerm k_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_21 = NULL;
        t = (ATerm) ATinsert(ATempty, term_f_8);
        f_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_21, (ATerm) ATinsert(ATempty, term_f_8));
        t = k_6(c_21, f_21, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(n_22);
      }
    else
      {
        t = k_22;
        t = c_21;
      }
  }
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_o_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_21 = NULL,q_21 = NULL;
  t = new_file_0_0(t);
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_21, term_g_8);
  t = open_file_0_0(t);
  t = term_g_22;
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_21, term_g_22);
  t = j_6(x_2, o_21, q_21, t);
  t = o_21;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL;
  s_22 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm y_6 = NULL,z_6 = NULL;
      t = s_22;
      t = xtc_new_file_0_0(t);
      y_6 = t;
      t = r_0(t);
      z_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_6, (ATerm) ATinsert(ATinsert(ATempty, y_6), term_p_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(y_6);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_6);
    }
  else
    {
      ATerm l_7 = NULL,m_7 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_22;
      t = xtc_new_file_0_0(t);
      l_7 = t;
      t = r_0(t);
      m_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_7), term_p_22), t_22), term_q_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(l_7);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_7);
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_r_22;
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm j_23 = NULL,m_23 = NULL;
  t = term_g_22;
  t = pass_width_0_0(t);
  j_23 = t;
  t = term_g_22;
  t = pass_verbose_0_0(t);
  m_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_23, m_23);
  t = conc_0_0(t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_r_22;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm o_23 = NULL,q_23 = NULL;
  t = term_g_22;
  t = pass_width_0_0(t);
  o_23 = t;
  t = term_g_22;
  t = pass_verbose_0_0(t);
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_23, q_23);
  t = conc_0_0(t);
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_23 = NULL,i_23 = NULL;
      i_23 = t;
      if(match_cons(t, sym_FILE_1))
        {
          h_23 = ATgetArgument(t, 0);
          {
            ATerm v_7 = NULL,y_3 = NULL;
            t = SSLgetAnnotations(i_23);
            v_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, h_23);
            y_3 = t;
            t = SSLsetAnnotations(y_3, v_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_23;
        }
      LocalPopChoice(v_22);
      t = xtc_transform_file_2_0(c_3, d_3, t);
    }
  else
    {
      t = u_22;
      t = xtc_transform_term_2_0(f_3, g_3, t);
    }
  return(t);
}
ATerm l_6 (ATerm l_12, ATerm m_12, ATerm t)
{
  t = SSL_copy(l_12, m_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  m_24 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_8 = NULL;
        t = m_24;
        t = n_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, n_24, l_8);
        t = l_6(n_24, l_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_24);
        ;
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        {
          ATerm y_22 = t;
          int z_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_9 = NULL;
              t = m_24;
              t = n_0(t);
              c_9 = t;
              {
                ATerm a_23 = t;
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
                            if((n_24 != t))
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
                    t = a_23;
                  }
                t = (ATerm) ATmakeAppl(sym__2, n_24, c_9);
                t = l_6(n_24, c_9, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, n_24);
              }
              ;
              LocalPopChoice(z_22);
            }
          else
            {
              t = y_22;
              t = m_24;
              t = n_0(t);
              if((n_24 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_24);
            }
        }
      }
  }
  return(t);
}
ATerm m_6 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL;
  s_24 = t;
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
        t = r_6(g_33, h_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_23 = ATgetFirst((ATermList) t);
            r_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_23);
        t = SSL_table_put(g_33, h_33, r_24);
        t = (ATerm) ATmakeAppl(sym__3, g_33, h_33, r_24);
      }
    else
      {
        t = b_23;
        t = SSL_table_remove(g_33, h_33);
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
      }
    t = s_24;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_74 (ATerm), ATerm t)
{
  ATerm t_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL;
  x_24 = t;
  t = m_74(t);
  w_24 = t;
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_24 = NULL;
        t = term_y_21;
        z_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_24, term_y_21);
        t = r_6(w_24, z_24, t);
        ;
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_24 = ATgetFirst((ATermList) t);
        t_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_y_21;
    y_24 = t;
    t = SSL_table_put(w_24, y_24, t_24);
    t = v_24;
    {
      ATerm h_3 (ATerm t)
      {
        ATerm a_25 = NULL;
        a_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_24, a_25);
        t = m_6(w_24, a_25, t);
        return(t);
      }
      t = map_1_0(h_3, t);
      t = x_24;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm t)
{
  ATerm g_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_75(t);
      t = i_75(t);
      ;
      LocalPopChoice(k_23);
    }
  else
    {
      t = g_23;
      t = i_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_74 (ATerm), ATerm t)
{
  ATerm c_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  f_25 = t;
  t = l_74(t);
  c_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_25, term_y_21);
  {
    ATerm l_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_23 = ATgetArgument(t, 0);
            ATerm r_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_21;
        n_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_25, term_y_21);
        t = r_6(c_25, n_25, t);
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = l_23;
        t = (ATerm) ATempty;
      }
    g_25 = t;
    t = term_y_21;
    h_25 = t;
    t = (ATerm) ATinsert(CheckATermList(g_25), (ATerm) ATempty);
    i_25 = t;
    t = SSL_table_put(c_25, h_25, i_25);
    t = f_25;
  }
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_o_22;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(f_26);
        ;
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
        t = f_26;
      }
  }
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_o_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm s_25 = NULL;
  ATerm q_3 (ATerm t)
  {
    ATerm t_25 = NULL;
    t_25 = t;
    {
      ATerm u_23 = t;
      int v_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_25 = NULL,w_25 = NULL;
          t = term_o_22;
          v_25 = t;
          t = term_y_21;
          w_25 = t;
          t = term_w_23;
          t = r_6(v_25, w_25, t);
          ;
          LocalPopChoice(v_23);
        }
      else
        {
          t = u_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((s_25 != NULL) && (s_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            s_25 = ATgetFirst((ATermList) t);
          {
            ATerm x_23 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = s_25;
      t = map_1_0(s_3, t);
      t = t_25;
      t = end_scope_1_0(u_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(i_3, t);
  t = restore_always_2_0(q_77, q_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      t = term_a_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_77 (ATerm), ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_26 = NULL;
        t = term_q_22;
        t = get_config_0_0(t);
        j_26 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_26);
        ;
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        t = term_e_8;
      }
    t = r_77(t);
    t = copy_to_1_0(w_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(v_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,o_26 = NULL,p_26 = NULL;
  k_26 = t;
  t = term_g_22;
  t = whoami_0_0(t);
  l_26 = t;
  t = term_z_16;
  o_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_24), l_26), term_d_24);
  p_26 = t;
  t = SSL_printnl(o_26, p_26);
  t = term_z_7;
  m_26 = t;
  t = SSL_exit(m_26);
  t = k_26;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
      t = term_g_22;
      t = m_0(t);
      a_27 = t;
      t = term_f_24;
      b_27 = t;
      t = term_g_24;
      c_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_24, term_g_24, a_27);
      t = s_6(b_27, c_27, a_27, t);
      _fail(t);
    }
  else
    {
      ATerm g_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_26 = ATgetFirst((ATermList) t);
          w_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_26 = ATgetFirst((ATermList) t);
          y_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_26;
      t = k_0(t);
      t = x_26;
      t = l_0(t);
      g_27 = t;
      t = (ATerm) ATinsert(CheckATermList(y_26), g_27);
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  if(match_string(t, "-k"))
    {
      t = i_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_27;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,n_27 = NULL;
  j_27 = t;
  t = SSL_string_to_int(j_27);
  k_27 = t;
  t = term_h_24;
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_24, k_27);
  t = u_6(n_27, k_27, t);
  t = j_27;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_i_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_3, z_3, a_4, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm r_27 = NULL;
  r_27 = t;
  if(match_string(t, "-S"))
    {
      t = r_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_27;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL;
  t = term_t_7;
  s_27 = t;
  t = term_j_24;
  t_27 = t;
  t = term_k_24;
  t = u_6(s_27, t_27, t);
  t = term_l_24;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_o_24;
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
  ATerm x_27 = NULL,a_28 = NULL,d_28 = NULL;
  x_27 = t;
  t = SSL_string_to_int(x_27);
  a_28 = t;
  t = term_t_7;
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_7, a_28);
  t = u_6(d_28, a_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_27);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_p_24;
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
  ATerm g_28 = NULL,h_28 = NULL;
  t = term_q_24;
  g_28 = t;
  t = term_g_22;
  h_28 = t;
  t = term_u_24;
  t = u_6(g_28, h_28, t);
  t = term_b_25;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, d_4, f_4, t);
      ;
      LocalPopChoice(j_25);
    }
  else
    {
      t = e_25;
      {
        ATerm k_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_4, j_4, k_4, t);
            ;
            LocalPopChoice(l_25);
          }
        else
          {
            t = k_25;
            t = Option_3_0(l_4, n_4, o_4, t);
          }
      }
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm j_28 = NULL;
  j_28 = t;
  if(match_string(t, "-o"))
    {
      t = j_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_28;
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  m_28 = t;
  t = term_p_22;
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_22, m_28);
  t = u_6(n_28, m_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_28);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_m_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_4, u_4, v_4, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  if(match_string(t, "-i"))
    {
      t = s_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_28;
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL;
  w_28 = t;
  t = term_q_22;
  x_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_22, w_28);
  t = u_6(x_28, w_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_28);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, y_4, b_5, t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm z_28 = NULL;
  z_28 = t;
  if(match_string(t, "-w"))
    {
      t = z_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = z_28;
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL;
  a_29 = t;
  t = term_c_8;
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_8, a_29);
  t = u_6(b_29, a_29, t);
  t = a_29;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_p_25;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      {
        ATerm u_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(x_25);
          }
        else
          {
            t = u_25;
            {
              ATerm y_25 = t;
              int z_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  ;
                  LocalPopChoice(z_25);
                }
              else
                {
                  t = y_25;
                  {
                    ATerm a_26 = t;
                    int b_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        ;
                        LocalPopChoice(b_26);
                      }
                    else
                      {
                        t = a_26;
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
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_22;
  t = whoami_0_0(t);
  c_29 = t;
  t = term_z_16;
  e_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_26), c_29);
  f_29 = t;
  t = SSL_printnl(e_29, f_29);
  t = term_z_7;
  d_29 = t;
  t = SSL_exit(d_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_6 (ATerm w_30, ATerm x_30, ATerm t)
{
  ATerm e_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_30, x_30);
      ;
      LocalPopChoice(g_26);
    }
  else
    {
      t = e_26;
      t = SSL_addr(w_30, x_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
  h_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_29;
      t = i_70(t);
    }
  else
    {
      ATerm m_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_29 = ATgetFirst((ATermList) t);
          j_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_29;
      t = foldr_2_0(i_70, j_70, t);
      m_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_29, m_29);
      t = j_70(t);
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
  t = term_j_24;
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
  ATerm p_29 = NULL,p_9 = NULL,r_9 = NULL;
  t = times_0_0(t);
  r_9 = t;
  t = SSL_explode_term(r_9);
  if(match_cons(t, sym__2))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9;
  t = foldr_2_0(l_5, m_5, t);
  p_29 = t;
  t = SSL_TicksToSeconds(p_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  c_30 = t;
  if(match_cons(t, sym__2))
    {
      d_30 = ATgetArgument(t, 0);
      e_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_30;
        if((d_30 != t))
          {
            _fail(t);
          }
        t = c_30;
        ;
        LocalPopChoice(n_26);
      }
    else
      {
        t = i_26;
        t = (ATerm) ATmakeAppl(sym__2, d_30, e_30);
        {
          ATerm q_26 = t;
          int r_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_30, e_30);
              ;
              LocalPopChoice(r_26);
            }
          else
            {
              t = q_26;
              t = SSL_gtr(d_30, e_30);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_30, e_30);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_75 (ATerm), ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_30 = NULL;
        t = term_t_7;
        t = get_config_0_0(t);
        k_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_30, term_z_7);
        t = geq_0_0(t);
        t = i_30;
        t = t_75(t);
        ;
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        t = i_30;
      }
  }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,p_30 = NULL,q_30 = NULL;
  t = run_time_0_0(t);
  m_30 = t;
  t = term_g_22;
  t = whoami_0_0(t);
  n_30 = t;
  t = term_z_16;
  p_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_26), m_30), term_n_8), n_30);
  q_30 = t;
  t = SSL_printnl(p_30, q_30);
  t = (ATerm) ATmakeAppl(sym__2, term_z_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_26), m_30), term_n_8), n_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_24;
  r_30 = t;
  t = SSL_exit(r_30);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm b_31 = NULL,e_31 = NULL;
  e_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_31 = ATgetArgument(t, 0);
          {
            ATerm o_10 = NULL,b_4 = NULL;
            t = SSLgetAnnotations(e_31);
            o_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_31);
            b_4 = t;
            t = SSLsetAnnotations(b_4, o_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_79 (ATerm), ATerm t)
{
  ATerm z_26 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_27);
    }
  else
    {
      t = z_26;
      t = fetch_1_0(o_5, t);
    }
  t = s_79(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_31 = ATgetFirst((ATermList) t);
      i_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_31 = NULL,n_31 = NULL;
        ATerm p_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_31)), not_null(n_31));
          return(t);
        }
        t = i_31;
        t = j_0(t);
        if(((m_31 != NULL) && (m_31 != t)))
          _fail(t);
        else
          m_31 = t;
        t = h_31;
        t = i_0(t);
        if(((n_31 != NULL) && (n_31 != t)))
          _fail(t);
        else
          n_31 = t;
        t = i_31;
        t = reverse_acc_2_0(i_0, p_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_22;
      t = j_0(t);
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,e_4 = NULL;
  t_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_31);
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_31);
  e_4 = t;
  t = SSLsetAnnotations(e_4, r_31);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm v_31 = NULL;
  v_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_31), term_f_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL;
  ATerm h_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_27);
    }
  else
    {
      t = h_27;
      t = fetch_1_0(q_5, t);
    }
  t = term_m_27;
  t = echo_0_0(t);
  t = term_f_24;
  p_31 = t;
  t = term_g_24;
  q_31 = t;
  t = term_o_27;
  t = r_6(p_31, q_31, t);
  t = reverse_acc_2_0(_id, s_5, t);
  t = map_1_0(t_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_64 (ATerm), ATerm t)
{
  ATerm o_33 (ATerm t)
  {
    ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL;
    l_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_33 = ATgetFirst((ATermList) t);
        n_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_27 = t;
      int q_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_10 = NULL,e_11 = NULL,g_4 = NULL;
          t = SSLgetAnnotations(l_33);
          z_10 = t;
          t = m_33;
          t = a_64(t);
          e_11 = t;
          t = (ATerm) ATinsert(CheckATermList(n_33), e_11);
          g_4 = t;
          t = SSLsetAnnotations(g_4, z_10);
          ;
          LocalPopChoice(q_27);
        }
      else
        {
          t = p_27;
          {
            ATerm u_11 = NULL,z_11 = NULL,h_4 = NULL;
            t = SSLgetAnnotations(l_33);
            u_11 = t;
            t = n_33;
            t = o_33(t);
            z_11 = t;
            t = (ATerm) ATinsert(CheckATermList(z_11), m_33);
            h_4 = t;
            t = SSLsetAnnotations(h_4, u_11);
          }
        }
    }
    return(t);
  }
  t = o_33(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  s_33 = t;
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_33;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_27 = ATgetFirst((ATermList) t);
                ATerm y_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_33;
          }
        ;
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        t = (ATerm) ATinsert(ATempty, s_33);
      }
    t_33 = t;
    t = term_a_24;
    u_33 = t;
    t = SSL_printnl(u_33, t_33);
    t = s_33;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm q_6 (ATerm s_29, ATerm t_29, ATerm t)
{
  t = SSL_strcat(s_29, t_29);
  return(t);
}
ATerm debug_1_0 (ATerm v_59 (ATerm), ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL;
  d_34 = t;
  t = v_59(t);
  e_34 = t;
  t = term_z_16;
  f_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_34), e_34);
  g_34 = t;
  t = SSL_printnl(f_34, g_34);
  t = d_34;
  return(t);
}
ATerm map_1_0 (ATerm q_63 (ATerm), ATerm t)
{
  ATerm d_35 (ATerm t)
  {
    ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
    y_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_34;
      }
    else
      {
        ATerm h_13 = NULL,n_13 = NULL,r_13 = NULL,m_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_34 = ATgetFirst((ATermList) t);
            a_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_34);
        h_13 = t;
        t = z_34;
        t = q_63(t);
        n_13 = t;
        t = a_35;
        t = d_35(t);
        r_13 = t;
        t = (ATerm) ATinsert(CheckATermList(r_13), n_13);
        m_4 = t;
        t = SSLsetAnnotations(m_4, h_13);
      }
    return(t);
  }
  t = d_35(t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm z_27 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_28);
    }
  else
    {
      t = z_27;
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_c_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_35 = NULL;
      q_35 = t;
      t = SSL_is_string(q_35);
      ;
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
      {
        ATerm i_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_5, t);
            ;
            LocalPopChoice(k_28);
          }
        else
          {
            t = i_28;
            {
              ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
              z_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_36 = ATgetArgument(t, 0);
                  t = a_36;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_36 = ATgetArgument(t, 0);
                      t = a_36;
                      {
                        ATerm l_28 = t;
                        int o_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(o_28);
                          }
                        else
                          {
                            t = l_28;
                            t = debug_1_0(v_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_36 = NULL,i_36 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_36 = ATgetArgument(t, 0);
                          b_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_36;
                      t = eval_config_0_0(t);
                      h_36 = t;
                      t = b_36;
                      t = eval_config_0_0(t);
                      i_36 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_36, i_36);
                      t = q_6(h_36, i_36, t);
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
  ATerm m_36 = NULL,r_36 = NULL;
  m_36 = t;
  t = term_p_28;
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_28, m_36);
  t = r_6(r_36, m_36, t);
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_36 = NULL,t_36 = NULL;
        t = eval_config_0_0(t);
        s_36 = t;
        t = term_p_28;
        t_36 = t;
        t = SSL_table_put(t_36, m_36, s_36);
        t = s_36;
        ;
        LocalPopChoice(r_28);
      }
    else
      {
        t = q_28;
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
  ATerm w_36 = NULL,x_36 = NULL;
  t = term_t_28;
  w_36 = t;
  t = term_g_22;
  x_36 = t;
  t = term_u_28;
  t = u_6(w_36, x_36, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_v_28;
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
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL;
  t = term_t_28;
  a_37 = t;
  t = term_g_22;
  b_37 = t;
  t = term_u_28;
  t = u_6(a_37, b_37, t);
  t = term_y_28;
  y_36 = t;
  t = term_g_22;
  z_36 = t;
  t = term_g_29;
  t = u_6(y_36, z_36, t);
  t = term_k_29;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_l_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_5, b_6, p_6, t);
      ;
      LocalPopChoice(o_29);
    }
  else
    {
      t = n_29;
      t = Option_3_0(t_6, v_6, w_6, t);
    }
  return(t);
}
ATerm u_6 (ATerm b_35, ATerm c_35, ATerm t)
{
  ATerm c_37 = NULL;
  t = term_p_28;
  c_37 = t;
  t = SSL_table_put(c_37, b_35, c_35);
  t = (ATerm) ATmakeAppl(sym__3, term_p_28, b_35, c_35);
  return(t);
}
ATerm r_6 (ATerm s_34, ATerm t_34, ATerm t)
{
  t = SSL_table_get(s_34, t_34);
  return(t);
}
ATerm s_6 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm t)
{
  ATerm k_37 = NULL,n_37 = NULL,o_37 = NULL;
  k_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_29 = ATgetArgument(t, 0);
            ATerm v_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
        t = r_6(b_33, c_33, t);
        ;
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        t = (ATerm) ATempty;
      }
    n_37 = t;
    t = (ATerm) ATinsert(CheckATermList(n_37), a_33);
    o_37 = t;
    t = SSL_table_put(b_33, c_33, o_37);
    t = k_37;
  }
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
      t = term_g_22;
      t = h_0(t);
      z_37 = t;
      t = term_f_24;
      a_38 = t;
      t = term_g_24;
      b_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_24, term_g_24, z_37);
      t = s_6(a_38, b_38, z_37, t);
      _fail(t);
    }
  else
    {
      ATerm h_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_37 = ATgetFirst((ATermList) t);
          x_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_37;
      t = d_0(t);
      t = term_g_22;
      t = g_0(t);
      h_38 = t;
      t = (ATerm) ATinsert(CheckATermList(x_37), h_38);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,p_4 = NULL;
  n_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_38 = ATgetFirst((ATermList) t);
      k_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_38);
  i_38 = t;
  t = j_38;
  t = i_51(t);
  l_38 = t;
  t = k_38;
  t = j_51(t);
  m_38 = t;
  t = (ATerm) ATinsert(CheckATermList(m_38), l_38);
  p_4 = t;
  t = SSLsetAnnotations(p_4, i_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_81 (ATerm), ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,x_38 = NULL,y_38 = NULL,z_4 = NULL;
  s_38 = t;
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_29;
        t = q_81(t);
        ;
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
      }
    t = s_38;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_38 = ATgetFirst((ATermList) t);
        v_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_38);
    t_38 = t;
    t = term_d_26;
    y_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_d_26, u_38);
    t = u_6(y_38, u_38, t);
    t = v_38;
    {
      ATerm n_39 (ATerm t)
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_30 = t;
            int f_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_39 = NULL;
                g_39 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = g_39;
                ;
                LocalPopChoice(f_30);
              }
            else
              {
                t = b_30;
                t = q_81(t);
                t = Cons_2_0(_id, n_39, t);
              }
            ;
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            {
              ATerm j_39 = NULL,k_39 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_39 = ATgetFirst((ATermList) t);
                  k_39 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(k_39), (ATerm) ATmakeAppl(sym_Undefined_1, j_39));
            }
          }
        return(t);
      }
      t = n_39(t);
      x_38 = t;
      t = (ATerm) ATinsert(CheckATermList(x_38), (ATerm) ATmakeAppl(sym_Program_1, u_38));
      z_4 = t;
      t = SSLsetAnnotations(z_4, t_38);
    }
  }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm a_40 = NULL;
  a_40 = t;
  if(match_string(t, "--help"))
    {
      t = a_40;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_40;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_40;
        }
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL;
  t = term_e_27;
  b_40 = t;
  t = term_g_22;
  c_40 = t;
  t = term_g_30;
  t = u_6(b_40, c_40, t);
  t = term_h_30;
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
ATerm parse_options_1_0 (ATerm p_81 (ATerm), ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
  v_39 = t;
  t = term_f_24;
  x_39 = t;
  t = term_g_24;
  y_39 = t;
  t = (ATerm) ATempty;
  z_39 = t;
  t = SSL_table_put(x_39, y_39, z_39);
  t = v_39;
  {
    ATerm x_6 (ATerm t)
    {
      ATerm l_30 = t;
      int o_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_81(t);
          ;
          LocalPopChoice(o_30);
        }
      else
        {
          t = l_30;
          {
            ATerm s_30 = t;
            int t_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_7, d_7, e_7, t);
                ;
                LocalPopChoice(t_30);
              }
            else
              {
                t = s_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_6, t);
    {
      ATerm u_30 = t;
      int v_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_40 = NULL;
          j_40 = t;
          {
            ATerm y_30 = t;
            int z_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_14 = NULL;
                t = j_40;
                {
                  ATerm a_31 = t;
                  int f_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_e_27;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(f_31);
                    }
                  else
                    {
                      t = a_31;
                      t = fetch_1_0(i_7, t);
                    }
                  t = j_40;
                  t = default_system_usage_0_0(t);
                  t = term_j_24;
                  v_14 = t;
                  t = SSL_exit(v_14);
                }
                ;
                LocalPopChoice(z_30);
              }
            else
              {
                t = y_30;
                {
                  ATerm m_15 = NULL;
                  t = term_t_28;
                  t = get_config_0_0(t);
                  t = j_40;
                  t = default_system_about_0_0(t);
                  t = term_j_24;
                  m_15 = t;
                  t = SSL_exit(m_15);
                }
              }
          }
          ;
          LocalPopChoice(v_30);
        }
      else
        {
          t = u_30;
          {
            ATerm g_31 = t;
            int j_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
                ATerm j_7 (ATerm t)
                {
                  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,j_5 = NULL;
                  p_40 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      o_40 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_40);
                  n_40 = t;
                  t = o_40;
                  if(((t_39 != NULL) && (t_39 != t)))
                    _fail(t);
                  else
                    t_39 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, o_40);
                  j_5 = t;
                  t = SSLsetAnnotations(j_5, n_40);
                  return(t);
                }
                t = fetch_1_0(j_7, t);
                t = term_z_16;
                l_40 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_39)), term_k_31);
                m_40 = t;
                t = SSL_printnl(l_40, m_40);
                t = (ATerm) ATmakeAppl(sym__2, term_z_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_39)), term_k_31));
                t = default_system_usage_0_0(t);
                t = term_z_7;
                k_40 = t;
                t = SSL_exit(k_40);
                ;
                LocalPopChoice(j_31);
              }
            else
              {
                t = g_31;
              }
          }
        }
      u_39 = t;
      t = term_f_24;
      w_39 = t;
      t = SSL_table_destroy(w_39);
      t = u_39;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL;
  t = parse_options_1_0(u_79, t);
  u_40 = t;
  t = term_l_31;
  x_40 = t;
  t = SSL_table_create(x_40);
  t = term_l_31;
  v_40 = t;
  t = term_o_31;
  w_40 = t;
  t = SSL_table_put(v_40, w_40, u_40);
  t = u_40;
  t = w_79(t);
  {
    ATerm u_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_79, t);
        ;
        LocalPopChoice(w_31);
      }
    else
      {
        t = u_31;
        {
          ATerm x_31 = t;
          int y_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_79(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_31);
            }
          else
            {
              t = x_31;
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
