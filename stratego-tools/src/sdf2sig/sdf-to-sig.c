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
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_k_31;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_f_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_u_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_n_26;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_z_23;
ATerm term_z_22;
ATerm term_p_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_f_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_o_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_y_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_j_18;
ATerm term_z_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_n_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
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
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_t_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_q_4;
void init_constant_terms (void)
{
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_8, term_a_9, term_b_9);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_9, term_e_9, term_f_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_9, term_l_9, term_m_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_p_9, term_q_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_9, term_t_9, term_u_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_9, term_z_9, term_a_10);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_d_10, term_h_10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_10, term_k_10, term_l_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_10, term_q_10, term_s_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_10, term_y_10, term_a_11);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_11, term_e_11, term_g_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_11, term_j_11, term_l_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_11, term_q_11, term_s_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_v_11, term_w_11);
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
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_e_12, term_f_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_j_12, term_k_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_q_12, term_r_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_x_12, term_y_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_f_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_l_13, term_m_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_a_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_e_14, term_f_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_m_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_z_14, term_a_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_j_20, term_k_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_j_20, term_k_20);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym__2, term_l_17, term_n_16);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_u_24);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_24);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym__2, term_e_25, term_e_17);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, term_r_25, term_s_25);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym__2, term_d_28, term_e_17);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym__2, term_i_28, term_e_17);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_u_26, term_e_17);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2sig", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("dummy.pp", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("unpack", 0, ATtrue));
}
ATerm n_5 (ATerm n_24, ATerm o_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm s_70 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm e_90 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm v_5 (ATerm r_27, ATerm s_27, ATerm);
ATerm x_5 (ATerm d_72 (ATerm), ATerm t_182, ATerm z_27, ATerm);
ATerm q_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm c_7 (ATerm o_6, ATerm);
ATerm conc_0_0 (ATerm);
ATerm y_5 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm);
ATerm j_8 (ATerm w_7, ATerm);
ATerm l_8 (ATerm a_8, ATerm b_8, ATerm d_8, ATerm);
ATerm u_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm v_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm q_5 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm);
ATerm r_5 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm);
ATerm b_1 (ATerm);
ATerm s_5 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm);
ATerm t_5 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm);
ATerm z_5 (ATerm l_48, ATerm m_48, ATerm);
ATerm o_14 (ATerm z_13, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm u_5 (ATerm x_27, ATerm);
ATerm w_5 (ATerm t_48, ATerm u_48, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_17 (ATerm g_15, ATerm);
ATerm b_17 (ATerm l_15, ATerm n_15, ATerm q_15, ATerm);
ATerm c_17 (ATerm h_16, ATerm i_16, ATerm j_16, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm d_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm e_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm g_2 (ATerm);
ATerm k_2 (ATerm);
ATerm x_21 (ATerm d_21, ATerm);
ATerm n_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm e_6 (ATerm y_41, ATerm z_41, ATerm);
ATerm debug_1_0 (ATerm b_72 (ATerm), ATerm);
ATerm u_2 (ATerm);
ATerm w_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm a_6 (ATerm m_45, ATerm n_45, ATerm);
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm l_3 (ATerm);
ATerm n_3 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm f_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm k_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm b_6 (ATerm c_43, ATerm d_43, ATerm);
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm s_4 (ATerm);
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm f_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm i_6 (ATerm h_47, ATerm i_47, ATerm);
ATerm f_6 (ATerm y_46, ATerm z_46, ATerm);
ATerm g_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm k_6 (ATerm);
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm h_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm sdf_to_sig_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm n_5 (ATerm n_24, ATerm o_24, ATerm t)
{
  t = SSL_execvp(n_24, o_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,c_2 = NULL,d_2 = NULL;
  v_1 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      w_1 = ATgetArgument(t, 0);
      {
        ATerm o_0 = NULL,p_0 = NULL;
        t = SSL_int_to_string(w_1);
        o_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_8), o_0), term_q_4);
        p_0 = t;
        t = SSL_concat_strings(p_0);
      }
    }
  else
    {
      ATerm g_1 = NULL,h_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          w_1 = ATgetArgument(t, 0);
          c_2 = ATgetArgument(t, 1);
          d_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(c_2);
      g_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_2), term_t_8), g_1), term_n_8), w_1);
      h_1 = t;
      t = SSL_concat_strings(h_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm h_2 = NULL;
  ATerm b_0 (ATerm t)
  {
    t = i_76(t);
    if(((h_2 != NULL) && (h_2 != t)))
      _fail(t);
    else
      h_2 = t;
    return(t);
  }
  t = fetch_1_0(b_0, t);
  t = not_null(h_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm i_2 = NULL;
  if(((i_2 != NULL) && (i_2 != t)))
    _fail(t);
  else
    i_2 = t;
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm w_8 = ATgetArgument(t, 0);
              if(((i_2 != NULL) && (i_2 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                i_2 = ATgetArgument(t, 1);
              {
                ATerm y_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_15), term_u_14), term_n_14), term_g_14), term_b_14), term_w_13), term_s_13), term_n_13), term_h_13), term_a_13), term_t_12), term_o_12), term_h_12), term_c_12), term_y_11), term_t_11), term_n_11), term_h_11), term_b_11), term_u_10), term_m_10), term_i_10), term_b_10), term_w_9), term_r_9), term_n_9), term_i_9), term_c_9);
        t = fetch_elem_1_0(f_0, t);
        ;
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(i_2));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm o_2 = NULL,b_3 = NULL;
  o_2 = t;
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_15 = ATgetArgument(t, 0);
            b_3 = ATgetArgument(t, 1);
            {
              ATerm f_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_15);
        {
          ATerm i_15 = t;
          int j_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_1 = NULL,x_1 = NULL,y_1 = NULL;
              t = b_3;
              {
                ATerm k_15 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_15;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                t_1 = t;
                t = term_m_15;
                x_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, t_1), term_o_15);
                y_1 = t;
                t = SSL_printnl(x_1, y_1);
                t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATinsert(ATempty, t_1), term_o_15));
              }
              ;
              LocalPopChoice(j_15);
            }
          else
            {
              t = i_15;
              t = o_2;
            }
        }
      }
    else
      {
        t = c_15;
        t = o_2;
      }
    t = o_2;
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
  ATerm k_3 = NULL,m_3 = NULL;
  m_3 = t;
  t = fork_0_0(t);
  k_3 = t;
  {
    ATerm p_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = m_3;
        t = s_70(t);
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = p_15;
        t = SSL_waitpid(k_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_15 = ATgetArgument(t, 0);
            if(((ATgetType(u_15) != AT_INT) || (ATgetInt((ATermInt) u_15) != 0)))
              _fail(t);
            {
              ATerm v_15 = ATgetArgument(t, 1);
            }
            {
              ATerm w_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = m_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL;
  if(((q_3 != NULL) && (q_3 != t)))
    _fail(t);
  else
    q_3 = t;
  t = e_90(t);
  t = xtc_find_0_0(t);
  if(((p_3 != NULL) && (p_3 != t)))
    _fail(t);
  else
    p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_3), not_null(q_3));
  {
    ATerm m_0 (ATerm t)
    {
      ATerm r_3 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_3), not_null(q_3));
      t = n_5(not_null(p_3), not_null(q_3), t);
      t = term_x_15;
      r_3 = t;
      t = SSL_exit(r_3);
      return(t);
    }
    t = fork_and_wait_1_0(m_0, t);
    t = not_null(q_3);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm u_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_z_15;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm y_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_16);
      y_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_3, (ATerm) ATinsert(ATempty, term_a_16));
      t = z_5(u_3, y_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm v_5 (ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm z_3 = NULL;
  t = SSL_write_term_to_stream_baf(r_27, s_27);
  z_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_3);
  return(t);
}
ATerm x_5 (ATerm d_72 (ATerm), ATerm t_182, ATerm z_27, ATerm t)
{
  ATerm a_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_182, term_b_16);
  t = open_stream_0_0(t);
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_4, z_27);
  t = d_72(t);
  t = fclose_0_0(t);
  t = z_27;
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      if(match_cons(c_16, sym_Stream_1))
        {
          d_4 = ATgetArgument(c_16, 0);
        }
      else
        _fail(t);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(d_4, e_4, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  b_4 = t;
  t = xtc_new_file_0_0(t);
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_4, b_4);
  t = x_5(q_0, c_4, b_4, t);
  t = SSL_close_file(c_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_4);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_90, o_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    ATerm h_5 = NULL,c_6 = NULL,d_6 = NULL;
    d_6 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_5 = ATgetFirst((ATermList) t);
        c_6 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_2 = NULL,m_2 = NULL,n_0 = NULL;
          t = SSLgetAnnotations(d_6);
          j_2 = t;
          t = c_6;
          t = h_6(t);
          m_2 = t;
          t = (ATerm) ATinsert(CheckATermList(m_2), h_5);
          n_0 = t;
          t = SSLsetAnnotations(n_0, j_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_6;
        t = m_76(t);
      }
    return(t);
  }
  t = h_6(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_4 = NULL,l_4 = NULL,m_4 = NULL;
  j_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_4;
    }
  else
    {
      ATerm r_0 (ATerm t)
      {
        t = not_null(m_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((l_4 != NULL) && (l_4 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            l_4 = ATgetFirst((ATermList) t);
          if(((m_4 != NULL) && (m_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(l_4);
      t = at_end_1_0(r_0, t);
    }
  return(t);
}
ATerm c_7 (ATerm o_6, ATerm t)
{
  ATerm r_6 = NULL;
  t = SSL_explode_term(o_6);
  if(match_cons(t, sym__2))
    {
      ATerm e_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
  if(((x_6 != NULL) && (x_6 != t)))
    _fail(t);
  else
    x_6 = t;
  if(match_cons(t, sym__2))
    {
      v_6 = ATgetArgument(t, 0);
      w_6 = ATgetArgument(t, 1);
      {
        ATerm f_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = not_null(w_6);
              return(t);
            }
            t = not_null(v_6);
            t = at_end_1_0(t_0, t);
            ;
            LocalPopChoice(g_16);
          }
        else
          {
            t = f_16;
            t = c_7(not_null(x_6), t);
          }
      }
    }
  else
    {
      t = c_7(not_null(x_6), t);
    }
  return(t);
}
ATerm y_5 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm t)
{
  ATerm d_7 = NULL,g_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,r_7 = NULL;
  j_7 = t;
  t = p_86(t);
  d_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_7, q_44, o_44);
  t = g_6(d_7, q_44, o_44, t);
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL;
        t = term_n_16;
        s_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_7, term_n_16);
        t = f_6(d_7, s_7, t);
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_7 = ATgetFirst((ATermList) t);
        i_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_n_16;
    k_7 = t;
    t = (ATerm) ATinsert(CheckATermList(i_7), (ATerm) ATinsert(CheckATermList(g_7), q_44));
    r_7 = t;
    t = SSL_table_put(d_7, k_7, r_7);
    t = j_7;
  }
  return(t);
}
ATerm j_8 (ATerm w_7, ATerm t)
{
  t = w_7;
  {
    ATerm q_16 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_16 = ATgetArgument(t, 0);
            ATerm t_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_16;
      }
    t = term_u_16;
    t = debug_1_0(u_0, t);
    t = (ATerm) ATmakeAppl(sym__2, w_7, term_b_16);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm l_8 (ATerm a_8, ATerm b_8, ATerm d_8, ATerm t)
{
  t = SSL_open_file(a_8, b_8);
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
  g_8 = t;
  if(match_cons(t, sym__2))
    {
      h_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
      {
        ATerm w_16 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_8(g_8, t);
            ;
            LocalPopChoice(d_17);
          }
        else
          {
            t = w_16;
            t = l_8(h_8, i_8, g_8, t);
          }
      }
    }
  else
    {
      t = j_8(g_8, t);
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
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
  t = term_e_17;
  t = new_0_0(t);
  o_8 = t;
  t = term_g_17;
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_8, term_g_17);
  t = e_6(o_8, p_8, t);
  q_8 = t;
  {
    ATerm i_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_8 = NULL;
        t = (ATerm) ATinsert(ATempty, term_a_16);
        x_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_8, (ATerm) ATinsert(ATempty, term_a_16));
        t = z_5(q_8, x_8, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(k_17);
      }
    else
      {
        t = i_17;
        t = q_8;
      }
  }
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_l_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL;
  t = new_file_0_0(t);
  g_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_9, term_b_16);
  t = open_file_0_0(t);
  t = term_e_17;
  h_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_9, term_e_17);
  t = y_5(v_0, g_9, h_9, t);
  t = g_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL;
  e_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm z_2 = NULL,a_3 = NULL;
      t = e_10;
      t = xtc_new_file_0_0(t);
      z_2 = t;
      t = l_0(t);
      a_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_3, (ATerm) ATinsert(ATinsert(ATempty, z_2), term_n_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(k_0, t);
      t = SSL_close_file(z_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_2);
    }
  else
    {
      ATerm o_3 = NULL,s_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_10;
      t = xtc_new_file_0_0(t);
      o_3 = t;
      t = l_0(t);
      s_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_3), term_n_17), f_10), term_z_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(k_0, t);
      t = SSL_close_file(o_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_3);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm n_10 = NULL;
  ATerm x_0 (ATerm t)
  {
    ATerm o_10 = NULL,r_10 = NULL;
    o_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_10), o_10);
    t = f_6(not_null(n_10), o_10, t);
    r_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_10, r_10);
    return(t);
  }
  if(((n_10 != NULL) && (n_10 != t)))
    _fail(t);
  else
    n_10 = t;
  t = SSL_table_keys(not_null(n_10));
  t = map_1_0(x_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm t_10 = NULL;
  t_10 = t;
  {
    ATerm b_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_10 = NULL;
        t = term_j_18;
        t = get_config_0_0(t);
        v_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_10, term_e_14);
        t = geq_0_0(t);
        t = t_10;
        t = x_87(t);
        ;
        LocalPopChoice(h_18);
      }
    else
      {
        t = b_18;
        t = t_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  {
    ATerm k_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_11 = NULL;
        t = term_j_18;
        t = get_config_0_0(t);
        f_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_11, term_j_11);
        t = geq_0_0(t);
        t = d_11;
        t = w_87(t);
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = k_18;
        t = d_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm k_11 = NULL;
  k_11 = t;
  {
    ATerm n_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_11 = NULL;
        t = term_j_18;
        t = get_config_0_0(t);
        m_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_11, term_p_9);
        t = geq_0_0(t);
        t = k_11;
        t = y_87(t);
        ;
        LocalPopChoice(o_18);
      }
    else
      {
        t = n_18;
        t = k_11;
      }
  }
  return(t);
}
ATerm q_5 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm t)
{
  t = e_80(t);
  {
    ATerm y_0 (ATerm t)
    {
      ATerm p_11 = NULL;
      p_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_34), p_11);
      t = d_80(t);
      return(t);
    }
    t = fetch_1_0(y_0, t);
    t = not_null(t_34);
  }
  return(t);
}
ATerm r_5 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm t)
{
  ATerm s_12 (ATerm t)
  {
    ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
    l_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(p_34);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_12 = ATgetFirst((ATermList) t);
            n_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_18 = t;
          int r_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_12;
              {
                ATerm a_1 (ATerm t)
                {
                  t = not_null(p_34);
                  return(t);
                }
                t = q_5(a_80, a_1, not_null(m_12), not_null(n_12), t);
                t = s_12(t);
              }
              ;
              LocalPopChoice(r_18);
            }
          else
            {
              t = p_18;
              {
                ATerm i_4 = NULL,r_4 = NULL,s_0 = NULL;
                t = SSLgetAnnotations(l_12);
                i_4 = t;
                t = n_12;
                t = s_12(t);
                r_4 = t;
                t = (ATerm) ATinsert(CheckATermList(r_4), m_12);
                s_0 = t;
                t = SSLsetAnnotations(s_0, i_4);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(q_34);
  t = s_12(t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm g_13 = NULL;
  if(match_cons(t, sym__2))
    {
      g_13 = ATgetArgument(t, 0);
      if((g_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm s_5 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm t)
{
  ATerm w_12 = NULL,b_13 = NULL,c_13 = NULL;
  w_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_18 = ATgetArgument(t, 0);
            ATerm y_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
        t = f_6(e_46, f_46, t);
        ;
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        t = (ATerm) ATempty;
      }
    c_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_13, g_46);
    t = r_5(b_1, c_13, g_46, t);
    b_13 = t;
    t = SSL_table_put(e_46, f_46, b_13);
    t = w_12;
  }
  return(t);
}
ATerm t_5 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm j_13 = NULL,k_13 = NULL;
    if(match_cons(t, sym__2))
      {
        j_13 = ATgetArgument(t, 0);
        k_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(o_46), j_13, k_13);
    t = a_88(t);
    return(t);
  }
  t = not_null(n_46);
  t = map_1_0(c_1, t);
  return(t);
}
ATerm z_5 (ATerm l_48, ATerm m_48, ATerm t)
{
  t = SSL_access(l_48, m_48);
  return(t);
}
ATerm o_14 (ATerm z_13, ATerm t)
{
  t = SSL_fclose(z_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL;
  l_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_14 = ATgetArgument(t, 0);
      {
        ATerm z_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_14);
            ;
            LocalPopChoice(a_19);
          }
        else
          {
            t = z_18;
            t = o_14(l_14, t);
          }
      }
    }
  else
    {
      t = o_14(l_14, t);
    }
  return(t);
}
ATerm u_5 (ATerm x_27, ATerm t)
{
  t = SSL_read_term_from_stream(x_27);
  return(t);
}
ATerm w_5 (ATerm t_48, ATerm u_48, ATerm t)
{
  ATerm p_14 = NULL;
  t = SSL_fopen(t_48, u_48);
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_14 = NULL;
  t = SSL_stdin_stream();
  t_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_14 = NULL;
  t = SSL_stdout_stream();
  v_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_14 = NULL;
  t = SSL_stderr_stream();
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_14);
  return(t);
}
ATerm a_17 (ATerm g_15, ATerm t)
{
  ATerm h_15 = NULL;
  t = SSL_explode_term(g_15);
  if(match_cons(t, sym__2))
    {
      ATerm d_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_19 = ATgetArgument(t, 1);
        if(((ATgetType(e_19) == AT_LIST) && !(ATisEmpty(e_19))))
          {
            h_15 = ATgetFirst((ATermList) e_19);
            {
              ATerm g_19 = (ATerm) ATgetNext((ATermList) e_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_17 (ATerm l_15, ATerm n_15, ATerm q_15, ATerm t)
{
  ATerm r_15 = NULL,t_15 = NULL,y_15 = NULL,d_16 = NULL,w_0 = NULL;
  t = SSLgetAnnotations(q_15);
  y_15 = t;
  t = l_15;
  if(match_cons(t, sym_Path_1))
    {
      d_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_16, n_15);
  w_0 = t;
  t = SSLsetAnnotations(w_0, y_15);
  if(match_cons(t, sym__2))
    {
      r_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(r_15, t_15, t);
  return(t);
}
ATerm c_17 (ATerm h_16, ATerm i_16, ATerm j_16, ATerm t)
{
  ATerm m_16 = NULL,o_16 = NULL,p_16 = NULL,s_16 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(j_16);
  p_16 = t;
  t = SSL_is_string(h_16);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_16, i_16);
  z_0 = t;
  t = SSLsetAnnotations(z_0, p_16);
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(m_16, o_16, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      ATerm k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  x_16 = t;
  if(match_cons(t, sym__2))
    {
      y_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_17(x_16, t);
            ;
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            {
              ATerm n_19 = t;
              int o_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_17(y_16, z_16, x_16, t);
                  ;
                  LocalPopChoice(o_19);
                }
              else
                {
                  t = n_19;
                  t = c_17(y_16, z_16, x_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_17(x_16, t);
    }
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_17 = NULL,h_17 = NULL,j_17 = NULL;
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_17 = NULL;
      m_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_17, term_s_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      t = debug_1_0(d_1, t);
      _fail(t);
    }
  h_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_5(j_17, t);
  f_17 = t;
  t = h_17;
  t = fclose_0_0(t);
  t = f_17;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_17 = NULL,p_17 = NULL;
      o_17 = t;
      t = (ATerm) ATinsert(ATempty, term_x_19);
      p_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_17, (ATerm) ATinsert(ATempty, term_x_19));
      t = z_5(o_17, p_17, t);
      LocalPopChoice(w_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = v_19;
      {
        ATerm y_19 = t;
        int z_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_20 = t;
            if((PushChoice() == 0))
              {
                ATerm q_17 = NULL,r_17 = NULL;
                q_17 = t;
                t = (ATerm) ATinsert(ATempty, term_a_16);
                r_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, q_17, (ATerm) ATinsert(ATempty, term_a_16));
                t = z_5(q_17, r_17, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_20;
              }
            t = debug_1_0(e_1, t);
            ;
            LocalPopChoice(z_19);
          }
        else
          {
            t = y_19;
            t = debug_1_0(f_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = debug_1_0(l_1, t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm g_18 = NULL,i_18 = NULL,l_18 = NULL;
  g_18 = t;
  t = term_m_15;
  i_18 = t;
  t = (ATerm) ATinsert(ATempty, term_g_20);
  l_18 = t;
  t = SSL_printnl(i_18, l_18);
  t = g_18;
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm q_18 = NULL,s_18 = NULL,v_18 = NULL;
  if(match_cons(t, sym__3))
    {
      q_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
      v_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_5(q_18, s_18, v_18, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm x_18 = NULL,b_19 = NULL,c_19 = NULL;
  x_18 = t;
  t = term_m_15;
  b_19 = t;
  t = (ATerm) ATinsert(ATempty, term_h_20);
  c_19 = t;
  t = SSL_printnl(b_19, c_19);
  t = x_18;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm f_19 = NULL,h_19 = NULL,i_19 = NULL;
  f_19 = t;
  t = term_m_15;
  h_19 = t;
  t = (ATerm) ATinsert(ATempty, term_g_20);
  i_19 = t;
  t = SSL_printnl(h_19, i_19);
  t = f_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,a_18 = NULL,c_18 = NULL,d_18 = NULL;
  s_17 = t;
  t = if_verbose5_1_0(j_1, t);
  {
    ATerm i_20 = t;
    if((PushChoice() == 0))
      {
        ATerm e_18 = NULL,f_18 = NULL;
        t = term_j_20;
        e_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, s_17);
        f_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATmakeAppl(sym_Imported_1, s_17));
        t = f_6(e_18, f_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_20;
      }
    u_17 = t;
    t = term_j_20;
    a_18 = t;
    t = term_k_20;
    c_18 = t;
    t = (ATerm) ATinsert(ATempty, s_17);
    d_18 = t;
    t = SSL_table_put(a_18, c_18, d_18);
    t = u_17;
    t = if_verbose4_1_0(n_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(p_1, t);
    t_17 = t;
    t = term_j_20;
    y_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_20, t_17);
    t = t_5(q_1, y_17, t_17, t);
    t = if_verbose6_1_0(r_1, t);
    t = term_j_20;
    v_17 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, s_17);
    w_17 = t;
    t = (ATerm) ATempty;
    x_17 = t;
    t = SSL_table_put(v_17, w_17, x_17);
    t = (ATerm) ATmakeAppl(sym__3, term_j_20, (ATerm)ATmakeAppl(sym_Imported_1, s_17), (ATerm) ATempty);
    t = if_verbose4_1_0(s_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
  d_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_20;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_20 = ATgetFirst((ATermList) t);
          f_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_5 = NULL,m_6 = NULL,n_6 = NULL,i_1 = NULL;
            t = SSLgetAnnotations(d_20);
            p_5 = t;
            t = e_20;
            t = r_83(t);
            m_6 = t;
            t = f_20;
            t = filter_1_0(r_83, t);
            n_6 = t;
            t = (ATerm) ATinsert(CheckATermList(n_6), m_6);
            i_1 = t;
            t = SSLsetAnnotations(i_1, p_5);
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            t = f_20;
            t = filter_1_0(r_83, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm n_20 (ATerm t)
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_85(t);
        t = n_20(t);
        ;
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
      }
    return(t);
  }
  t = n_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_20 = NULL;
            t = term_c_21;
            q_20 = t;
            t = SSL_getenv(q_20);
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm x_20 = NULL,z_20 = NULL;
  t = term_j_20;
  x_20 = t;
  t = term_k_21;
  z_20 = t;
  t = term_l_21;
  t = f_6(x_20, z_20, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm n_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_21;
      }
  }
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_20 = NULL;
  t = if_verbose5_1_0(u_1, t);
  r_20 = t;
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_20 = NULL,v_20 = NULL;
        t = term_j_20;
        s_20 = t;
        t = term_k_20;
        v_20 = t;
        t = term_u_21;
        t = f_6(s_20, v_20, t);
        ;
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        {
          ATerm w_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          w_20 = t;
          t = repeat_1_0(a_2, t);
          t = w_20;
        }
      }
    t = r_20;
    t = if_verbose5_1_0(b_2, t);
  }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm x_21 (ATerm d_21, ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  t = term_j_20;
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, d_21);
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATmakeAppl(sym_Tool_1, d_21));
  t = f_6(g_21, h_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_21 = ATgetFirst((ATermList) t);
      if(match_cons(y_21, sym__2))
        {
          ATerm e_22 = ATgetArgument(y_21, 0);
          f_21 = ATgetArgument(y_21, 1);
        }
      else
        _fail(t);
      {
        ATerm b_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_21;
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = debug_1_0(r_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_j_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(t_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_f_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21 = NULL,j_21 = NULL,m_21 = NULL;
      t = if_verbose5_1_0(g_2, t);
      t = xtc_load_0_0(t);
      if(((m_21 != NULL) && (m_21 != t)))
        _fail(t);
      else
        m_21 = t;
      if(match_cons(t, sym__2))
        {
          i_21 = ATgetArgument(t, 0);
          j_21 = ATgetArgument(t, 1);
          {
            ATerm i_22 = t;
            int j_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
                t = term_j_20;
                if(((q_21 != NULL) && (q_21 != t)))
                  _fail(t);
                else
                  q_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(i_21));
                if(((r_21 != NULL) && (r_21 != t)))
                  _fail(t);
                else
                  r_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATmakeAppl(sym_Tool_1, not_null(i_21)));
                t = f_6(not_null(q_21), not_null(r_21), t);
                {
                  ATerm l_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((j_21 != NULL) && (j_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          j_21 = ATgetArgument(t, 0);
                        if(((p_21 != NULL) && (p_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(l_2, t);
                  t = not_null(p_21);
                }
                ;
                LocalPopChoice(j_22);
              }
            else
              {
                t = i_22;
                t = x_21(not_null(m_21), t);
              }
          }
        }
      else
        {
          t = x_21(not_null(m_21), t);
        }
      t = if_verbose5_1_0(n_2, t);
      ;
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      {
        ATerm w_21 = NULL,e_7 = NULL,f_7 = NULL;
        w_21 = t;
        t = term_m_15;
        e_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_22), w_21), term_k_22);
        f_7 = t;
        t = SSL_printnl(e_7, f_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_22), w_21), term_k_22);
        t = if_verbose5_1_0(s_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm e_6 (ATerm y_41, ATerm z_41, ATerm t)
{
  t = SSL_strcat(y_41, z_41);
  return(t);
}
ATerm debug_1_0 (ATerm b_72 (ATerm), ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,c_22 = NULL,d_22 = NULL;
  z_21 = t;
  t = b_72(t);
  a_22 = t;
  t = term_m_15;
  c_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_21), a_22);
  d_22 = t;
  t = SSL_printnl(c_22, d_22);
  t = z_21;
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(o_22);
    }
  else
    {
      t = n_22;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_p_22;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_22 = NULL;
      m_22 = t;
      t = SSL_is_string(m_22);
      ;
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      {
        ATerm s_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_2, t);
            ;
            LocalPopChoice(v_22);
          }
        else
          {
            t = s_22;
            {
              ATerm t_22 = NULL,u_22 = NULL,w_22 = NULL;
              t_22 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_22 = ATgetArgument(t, 0);
                  t = u_22;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_22 = ATgetArgument(t, 0);
                      t = u_22;
                      {
                        ATerm x_22 = t;
                        int y_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(y_22);
                          }
                        else
                          {
                            t = x_22;
                            t = debug_1_0(w_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_23 = NULL,e_23 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_22 = ATgetArgument(t, 0);
                          w_22 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_22;
                      t = eval_config_0_0(t);
                      d_23 = t;
                      t = w_22;
                      t = eval_config_0_0(t);
                      e_23 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_23, e_23);
                      t = e_6(d_23, e_23, t);
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
  ATerm o_23 = NULL,p_23 = NULL;
  o_23 = t;
  t = term_z_22;
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_22, o_23);
  t = f_6(p_23, o_23, t);
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_23 = NULL,s_23 = NULL;
        t = eval_config_0_0(t);
        r_23 = t;
        t = term_z_22;
        s_23 = t;
        t = SSL_table_put(s_23, o_23, r_23);
        t = r_23;
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
      }
  }
  return(t);
}
ATerm a_6 (ATerm m_45, ATerm n_45, ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL;
  x_23 = t;
  {
    ATerm c_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
        t = f_6(m_45, n_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_23 = ATgetFirst((ATermList) t);
            w_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_23);
        t = SSL_table_put(m_45, n_45, w_23);
        t = (ATerm) ATmakeAppl(sym__3, m_45, n_45, w_23);
      }
    else
      {
        t = c_23;
        t = SSL_table_remove(m_45, n_45);
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
      }
    t = x_23;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL;
  if(((d_24 != NULL) && (d_24 != t)))
    _fail(t);
  else
    d_24 = t;
  t = m_86(t);
  if(((c_24 != NULL) && (c_24 != t)))
    _fail(t);
  else
    c_24 = t;
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_24 = NULL;
        t = term_n_16;
        f_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_24), term_n_16);
        t = f_6(not_null(c_24), f_24, t);
        ;
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((b_24 != NULL) && (b_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          b_24 = ATgetFirst((ATermList) t);
        if(((a_24 != NULL) && (a_24 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          a_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_n_16;
    if(((e_24 != NULL) && (e_24 != t)))
      _fail(t);
    else
      e_24 = t;
    t = SSL_table_put(not_null(c_24), not_null(e_24), not_null(a_24));
    t = not_null(b_24);
    {
      ATerm x_2 (ATerm t)
      {
        ATerm g_24 = NULL;
        g_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_24), g_24);
        t = a_6(not_null(c_24), g_24, t);
        return(t);
      }
      t = map_1_0(x_2, t);
      t = not_null(d_24);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t)
{
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_87(t);
      t = i_87(t);
      ;
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
      t = i_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
  j_24 = t;
  t = l_86(t);
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_24, term_n_16);
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_23 = ATgetArgument(t, 0);
            ATerm q_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_16;
        t_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_24, term_n_16);
        t = f_6(i_24, t_24, t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = (ATerm) ATempty;
      }
    k_24 = t;
    t = term_n_16;
    l_24 = t;
    t = (ATerm) ATinsert(CheckATermList(k_24), (ATerm) ATempty);
    m_24 = t;
    t = SSL_table_put(i_24, l_24, m_24);
    t = j_24;
  }
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_l_17;
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm c_25 = NULL;
  c_25 = t;
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(c_25);
        ;
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        t = c_25;
      }
  }
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_l_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm w_24 = NULL;
  ATerm c_3 (ATerm t)
  {
    ATerm x_24 = NULL;
    x_24 = t;
    {
      ATerm v_23 = t;
      int y_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_24 = NULL,z_24 = NULL;
          t = term_l_17;
          y_24 = t;
          t = term_n_16;
          z_24 = t;
          t = term_z_23;
          t = f_6(y_24, z_24, t);
          ;
          LocalPopChoice(y_23);
        }
      else
        {
          t = v_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_24 != NULL) && (w_24 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_24 = ATgetFirst((ATermList) t);
          {
            ATerm h_24 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(w_24);
      t = map_1_0(d_3, t);
      t = x_24;
      t = end_scope_1_0(e_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(y_2, t);
  t = restore_always_2_0(q_89, c_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,q_25 = NULL;
  j_25 = t;
  t = term_e_17;
  t = whoami_0_0(t);
  k_25 = t;
  t = term_m_15;
  m_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_24), k_25), term_p_24);
  q_25 = t;
  t = SSL_printnl(m_25, q_25);
  t = term_a_9;
  l_25 = t;
  t = SSL_exit(l_25);
  t = j_25;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm w_25 = NULL;
  w_25 = t;
  if(match_string(t, "-k"))
    {
      t = w_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_25;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
  z_25 = t;
  t = SSL_string_to_int(z_25);
  a_26 = t;
  t = term_r_24;
  b_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_24, a_26);
  t = i_6(b_26, a_26, t);
  t = z_25;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_s_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_3, g_3, h_3, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  if(match_string(t, "-S"))
    {
      t = f_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_26;
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL;
  t = term_j_18;
  g_26 = t;
  t = term_u_24;
  h_26 = t;
  t = term_v_24;
  t = i_6(g_26, h_26, t);
  t = term_a_25;
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_b_25;
  return(t);
}
ATerm n_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm l_26 = NULL,p_26 = NULL,q_26 = NULL;
  l_26 = t;
  t = SSL_string_to_int(l_26);
  p_26 = t;
  t = term_j_18;
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_18, p_26);
  t = i_6(q_26, p_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_26);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm w_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  t = term_e_25;
  r_26 = t;
  t = term_e_17;
  s_26 = t;
  t = term_f_25;
  t = i_6(r_26, s_26, t);
  t = term_g_25;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_h_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_3, j_3, l_3, t);
      ;
      LocalPopChoice(n_25);
    }
  else
    {
      t = i_25;
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_3, t_3, v_3, t);
            ;
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            t = Option_3_0(w_3, x_3, f_4, t);
          }
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_27 = NULL,b_27 = NULL,d_27 = NULL;
      t = term_e_17;
      t = j_0(t);
      a_27 = t;
      t = term_r_25;
      b_27 = t;
      t = term_s_25;
      d_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_25, term_s_25, a_27);
      t = g_6(b_27, d_27, a_27, t);
      _fail(t);
    }
  else
    {
      ATerm i_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_26 = ATgetFirst((ATermList) t);
          x_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_26 = ATgetFirst((ATermList) t);
          z_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_26;
      t = h_0(t);
      t = y_26;
      t = i_0(t);
      i_27 = t;
      t = (ATerm) ATinsert(CheckATermList(z_26), i_27);
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm k_27 = NULL;
  k_27 = t;
  if(match_string(t, "-i"))
    {
      t = k_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_27;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL;
  l_27 = t;
  t = term_z_17;
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_17, l_27);
  t = i_6(m_27, l_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_27);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, h_4, k_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_17;
  t = whoami_0_0(t);
  n_27 = t;
  t = term_m_15;
  p_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_25), n_27);
  q_27 = t;
  t = SSL_printnl(p_27, q_27);
  t = term_a_9;
  o_27 = t;
  t = SSL_exit(o_27);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_25;
  t = get_config_0_0(t);
  return(t);
}
ATerm b_6 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_43, d_43);
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      t = SSL_addr(c_43, d_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm t)
{
  ATerm v_27 = NULL,a_28 = NULL,b_28 = NULL;
  v_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_27;
      t = o_82(t);
    }
  else
    {
      ATerm e_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_28 = ATgetFirst((ATermList) t);
          b_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_28;
      t = foldr_2_0(o_82, p_82, t);
      e_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_28, e_28);
      t = p_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL;
  if(match_cons(t, sym__2))
    {
      r_8 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(r_8, s_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_28 = NULL,c_8 = NULL,k_8 = NULL;
  t = times_0_0(t);
  k_8 = t;
  t = SSL_explode_term(k_8);
  if(match_cons(t, sym__2))
    {
      ATerm c_26 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8;
  t = foldr_2_0(n_4, o_4, t);
  h_28 = t;
  t = SSL_TicksToSeconds(h_28);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
  y_28 = t;
  if(match_cons(t, sym__2))
    {
      z_28 = ATgetArgument(t, 0);
      a_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_29;
        if((z_28 != t))
          {
            _fail(t);
          }
        t = y_28;
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
        {
          ATerm i_26 = t;
          int j_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_28, a_29);
              ;
              LocalPopChoice(j_26);
            }
          else
            {
              t = i_26;
              t = SSL_gtr(z_28, a_29);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  {
    ATerm k_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_29 = NULL;
        t = term_j_18;
        t = get_config_0_0(t);
        g_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_29, term_a_9);
        t = geq_0_0(t);
        t = e_29;
        t = t_87(t);
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = k_26;
        t = e_29;
      }
  }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm i_29 = NULL,o_29 = NULL,q_29 = NULL,r_29 = NULL;
  t = run_time_0_0(t);
  i_29 = t;
  t = term_e_17;
  t = whoami_0_0(t);
  o_29 = t;
  t = term_m_15;
  q_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_26), i_29), term_n_8), o_29);
  r_29 = t;
  t = SSL_printnl(q_29, r_29);
  t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_26), i_29), term_n_8), o_29));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_24;
  s_29 = t;
  t = SSL_exit(s_29);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm b_30 = NULL,e_30 = NULL;
  e_30 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_30;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_30 = ATgetArgument(t, 0);
          {
            ATerm k_9 = NULL,k_1 = NULL;
            t = SSLgetAnnotations(e_30);
            k_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_30);
            k_1 = t;
            t = SSLsetAnnotations(k_1, k_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_30;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm t)
{
  ATerm o_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_26);
    }
  else
    {
      t = o_26;
      t = fetch_1_0(s_4, t);
    }
  t = s_91(t);
  return(t);
}
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm u_30 (ATerm t)
  {
    ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
    r_30 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_30;
      }
    else
      {
        ATerm v_9 = NULL,y_9 = NULL,g_10 = NULL,m_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_30 = ATgetFirst((ATermList) t);
            t_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_30);
        v_9 = t;
        t = s_30;
        t = w_75(t);
        y_9 = t;
        t = t_30;
        t = u_30(t);
        g_10 = t;
        t = (ATerm) ATinsert(CheckATermList(g_10), y_9);
        m_1 = t;
        t = SSLsetAnnotations(m_1, v_9);
      }
    return(t);
  }
  t = u_30(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_30 = ATgetFirst((ATermList) t);
      y_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_31 = NULL,d_31 = NULL;
        ATerm t_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_31)), not_null(d_31));
          return(t);
        }
        t = not_null(y_30);
        t = g_0(t);
        if(((c_31 != NULL) && (c_31 != t)))
          _fail(t);
        else
          c_31 = t;
        t = not_null(x_30);
        t = e_0(t);
        if(((d_31 != NULL) && (d_31 != t)))
          _fail(t);
        else
          d_31 = t;
        t = not_null(y_30);
        t = reverse_acc_2_0(e_0, t_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_17;
      t = g_0(t);
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,f_2 = NULL;
  j_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_31);
  h_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_31);
  f_2 = t;
  t = SSLsetAnnotations(f_2, h_31);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm l_31 = NULL;
  l_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_31), term_v_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL;
  ATerm c_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_27);
    }
  else
    {
      t = c_27;
      t = fetch_1_0(u_4, t);
    }
  t = term_f_27;
  t = echo_0_0(t);
  t = term_r_25;
  f_31 = t;
  t = term_s_25;
  g_31 = t;
  t = term_g_27;
  t = f_6(f_31, g_31, t);
  t = reverse_acc_2_0(_id, w_4, t);
  t = map_1_0(x_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm i_32 (ATerm t)
  {
    ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
    f_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_32 = ATgetFirst((ATermList) t);
        h_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_27 = t;
      int j_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_10 = NULL,z_10 = NULL,p_2 = NULL;
          t = SSLgetAnnotations(f_32);
          w_10 = t;
          t = g_32;
          t = g_76(t);
          z_10 = t;
          t = (ATerm) ATinsert(CheckATermList(h_32), z_10);
          p_2 = t;
          t = SSLsetAnnotations(p_2, w_10);
          ;
          LocalPopChoice(j_27);
        }
      else
        {
          t = h_27;
          {
            ATerm r_11 = NULL,x_11 = NULL,q_2 = NULL;
            t = SSLgetAnnotations(f_32);
            r_11 = t;
            t = h_32;
            t = i_32(t);
            x_11 = t;
            t = (ATerm) ATinsert(CheckATermList(x_11), g_32);
            q_2 = t;
            t = SSLsetAnnotations(q_2, r_11);
          }
        }
    }
    return(t);
  }
  t = i_32(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
  m_32 = t;
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_32;
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
            t = m_32;
          }
        ;
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        t = (ATerm) ATinsert(ATempty, m_32);
      }
    n_32 = t;
    t = term_c_28;
    o_32 = t;
    t = SSL_printnl(o_32, n_32);
    t = m_32;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_25;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL;
  t = term_d_28;
  s_32 = t;
  t = term_e_17;
  t_32 = t;
  t = term_f_28;
  t = i_6(s_32, t_32, t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_g_28;
  return(t);
}
ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL;
  t = term_d_28;
  w_32 = t;
  t = term_e_17;
  x_32 = t;
  t = term_f_28;
  t = i_6(w_32, x_32, t);
  t = term_i_28;
  u_32 = t;
  t = term_e_17;
  v_32 = t;
  t = term_j_28;
  t = i_6(u_32, v_32, t);
  t = term_k_28;
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_l_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_4, a_5, b_5, t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      t = Option_3_0(f_5, i_5, j_5, t);
    }
  return(t);
}
ATerm i_6 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm y_32 = NULL;
  t = term_z_22;
  y_32 = t;
  t = SSL_table_put(y_32, h_47, i_47);
  t = (ATerm) ATmakeAppl(sym__3, term_z_22, h_47, i_47);
  return(t);
}
ATerm f_6 (ATerm y_46, ATerm z_46, ATerm t)
{
  t = SSL_table_get(y_46, z_46);
  return(t);
}
ATerm g_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_28 = ATgetArgument(t, 0);
            ATerm r_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
        t = f_6(h_45, i_45, t);
        ;
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        t = (ATerm) ATempty;
      }
    b_33 = t;
    t = (ATerm) ATinsert(CheckATermList(b_33), g_45);
    c_33 = t;
    t = SSL_table_put(h_45, i_45, c_33);
    t = a_33;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
      t = term_e_17;
      t = d_0(t);
      k_33 = t;
      t = term_r_25;
      l_33 = t;
      t = term_s_25;
      m_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_25, term_s_25, k_33);
      t = g_6(l_33, m_33, k_33, t);
      _fail(t);
    }
  else
    {
      ATerm p_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_33 = ATgetFirst((ATermList) t);
          j_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_33;
      t = a_0(t);
      t = term_e_17;
      t = c_0(t);
      p_33 = t;
      t = (ATerm) ATinsert(CheckATermList(j_33), p_33);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,v_2 = NULL;
  v_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_33 = ATgetFirst((ATermList) t);
      s_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_33);
  q_33 = t;
  t = r_33;
  t = o_63(t);
  t_33 = t;
  t = s_33;
  t = p_63(t);
  u_33 = t;
  t = (ATerm) ATinsert(CheckATermList(u_33), t_33);
  v_2 = t;
  t = SSLsetAnnotations(v_2, q_33);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,f_34 = NULL,g_34 = NULL,v_4 = NULL;
  if(((a_34 != NULL) && (a_34 != t)))
    _fail(t);
  else
    a_34 = t;
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_28;
        t = q_93(t);
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
      }
    t = not_null(a_34);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((c_34 != NULL) && (c_34 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          c_34 = ATgetFirst((ATermList) t);
        if(((d_34 != NULL) && (d_34 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          d_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(a_34));
    if(((b_34 != NULL) && (b_34 != t)))
      _fail(t);
    else
      b_34 = t;
    t = term_v_25;
    if(((g_34 != NULL) && (g_34 != t)))
      _fail(t);
    else
      g_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_25, not_null(c_34));
    t = i_6(not_null(g_34), not_null(c_34), t);
    t = not_null(d_34);
    {
      ATerm s_34 (ATerm t)
      {
        ATerm v_28 = t;
        int w_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_28 = t;
            int b_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_34 = NULL;
                j_34 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_34;
                ;
                LocalPopChoice(b_29);
              }
            else
              {
                t = x_28;
                t = q_93(t);
                t = Cons_2_0(_id, s_34, t);
              }
            ;
            LocalPopChoice(w_28);
          }
        else
          {
            t = v_28;
            {
              ATerm m_34 = NULL,n_34 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_34 = ATgetFirst((ATermList) t);
                  n_34 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_34), (ATerm) ATmakeAppl(sym_Undefined_1, m_34));
            }
          }
        return(t);
      }
      t = s_34(t);
      if(((f_34 != NULL) && (f_34 != t)))
        _fail(t);
      else
        f_34 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(f_34)), (ATerm) ATmakeAppl(sym_Program_1, not_null(c_34)));
      if(((v_4 != NULL) && (v_4 != t)))
        _fail(t);
      else
        v_4 = t;
      t = SSLsetAnnotations(not_null(v_4), not_null(b_34));
    }
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm i_35 = NULL;
  i_35 = t;
  if(match_string(t, "--help"))
    {
      t = i_35;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_35;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_35;
        }
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL;
  t = term_u_26;
  j_35 = t;
  t = term_e_17;
  k_35 = t;
  t = term_c_29;
  t = i_6(j_35, k_35, t);
  t = term_d_29;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm k_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL;
  if(((d_35 != NULL) && (d_35 != t)))
    _fail(t);
  else
    d_35 = t;
  t = term_r_25;
  if(((f_35 != NULL) && (f_35 != t)))
    _fail(t);
  else
    f_35 = t;
  t = term_s_25;
  if(((g_35 != NULL) && (g_35 != t)))
    _fail(t);
  else
    g_35 = t;
  t = (ATerm) ATempty;
  if(((h_35 != NULL) && (h_35 != t)))
    _fail(t);
  else
    h_35 = t;
  t = SSL_table_put(not_null(f_35), not_null(g_35), not_null(h_35));
  t = not_null(d_35);
  {
    ATerm k_5 (ATerm t)
    {
      ATerm h_29 = t;
      int j_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_93(t);
          ;
          LocalPopChoice(j_29);
        }
      else
        {
          t = h_29;
          {
            ATerm k_29 = t;
            int l_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_5, m_5, o_5, t);
                ;
                LocalPopChoice(l_29);
              }
            else
              {
                t = k_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_5, t);
    {
      ATerm m_29 = t;
      int n_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_35 = NULL;
          r_35 = t;
          {
            ATerm p_29 = t;
            int t_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_12 = NULL;
                t = r_35;
                {
                  ATerm u_29 = t;
                  int v_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_u_26;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(v_29);
                    }
                  else
                    {
                      t = u_29;
                      t = fetch_1_0(k_6, t);
                    }
                  t = r_35;
                  t = default_system_usage_0_0(t);
                  t = term_u_24;
                  g_12 = t;
                  t = SSL_exit(g_12);
                }
                ;
                LocalPopChoice(t_29);
              }
            else
              {
                t = p_29;
                {
                  ATerm u_12 = NULL;
                  t = term_d_28;
                  t = get_config_0_0(t);
                  t = r_35;
                  t = default_system_about_0_0(t);
                  t = term_u_24;
                  u_12 = t;
                  t = SSL_exit(u_12);
                }
              }
          }
          ;
          LocalPopChoice(n_29);
        }
      else
        {
          t = m_29;
          {
            ATerm w_29 = t;
            int x_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL;
                ATerm l_6 (ATerm t)
                {
                  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,y_4 = NULL;
                  x_35 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      w_35 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_35);
                  v_35 = t;
                  t = w_35;
                  if(((b_35 != NULL) && (b_35 != t)))
                    _fail(t);
                  else
                    b_35 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, w_35);
                  y_4 = t;
                  t = SSLsetAnnotations(y_4, v_35);
                  return(t);
                }
                t = fetch_1_0(l_6, t);
                t = term_m_15;
                if(((t_35 != NULL) && (t_35 != t)))
                  _fail(t);
                else
                  t_35 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_35)), term_y_29);
                if(((u_35 != NULL) && (u_35 != t)))
                  _fail(t);
                else
                  u_35 = t;
                t = SSL_printnl(not_null(t_35), not_null(u_35));
                t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_35)), term_y_29));
                t = default_system_usage_0_0(t);
                t = term_a_9;
                if(((s_35 != NULL) && (s_35 != t)))
                  _fail(t);
                else
                  s_35 = t;
                t = SSL_exit(not_null(s_35));
                ;
                LocalPopChoice(x_29);
              }
            else
              {
                t = w_29;
              }
          }
        }
      if(((c_35 != NULL) && (c_35 != t)))
        _fail(t);
      else
        c_35 = t;
      t = term_r_25;
      if(((e_35 != NULL) && (e_35 != t)))
        _fail(t);
      else
        e_35 = t;
      t = SSL_table_destroy(not_null(e_35));
      t = not_null(c_35);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  t = parse_options_1_0(u_91, t);
  e_36 = t;
  t = term_z_29;
  h_36 = t;
  t = SSL_table_create(h_36);
  t = term_z_29;
  f_36 = t;
  t = term_a_30;
  g_36 = t;
  t = SSL_table_put(f_36, g_36, e_36);
  t = e_36;
  t = w_91(t);
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_91, t);
        ;
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        {
          ATerm f_30 = t;
          int g_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_30);
            }
          else
            {
              t = f_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = verbose_option_0_0(t);
            ;
            LocalPopChoice(k_30);
          }
        else
          {
            t = j_30;
            t = keep_option_0_0(t);
          }
      }
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = xtc_temp_files_1_0(s_6, t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm u_36 = NULL;
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_36 = NULL;
      t = term_z_17;
      t = get_config_0_0(t);
      v_36 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_36);
      ;
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      t = term_z_15;
    }
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_37 = NULL,c_37 = NULL;
        c_37 = t;
        if(match_cons(t, sym_FILE_1))
          {
            b_37 = ATgetArgument(t, 0);
            {
              ATerm z_12 = NULL,c_5 = NULL;
              t = SSLgetAnnotations(c_37);
              z_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_37);
              c_5 = t;
              t = SSLsetAnnotations(c_5, z_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_37;
          }
        LocalPopChoice(o_30);
        t = xtc_transform_file_2_0(t_6, u_6, t);
      }
    else
      {
        t = n_30;
        t = xtc_transform_term_2_0(y_6, z_6, t);
      }
    {
      ATerm p_30 = t;
      int q_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_37 = NULL,l_37 = NULL;
          l_37 = t;
          if(match_cons(t, sym_FILE_1))
            {
              k_37 = ATgetArgument(t, 0);
              {
                ATerm o_13 = NULL,d_5 = NULL;
                t = SSLgetAnnotations(l_37);
                o_13 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, k_37);
                d_5 = t;
                t = SSLsetAnnotations(d_5, o_13);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = l_37;
            }
          LocalPopChoice(q_30);
          t = xtc_transform_file_2_0(a_7, b_7, t);
        }
      else
        {
          t = p_30;
          t = xtc_transform_term_2_0(h_7, l_7, t);
        }
      {
        ATerm v_30 = t;
        int w_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_37 = NULL,s_37 = NULL;
            s_37 = t;
            if(match_cons(t, sym_FILE_1))
              {
                r_37 = ATgetArgument(t, 0);
                {
                  ATerm c_14 = NULL,e_5 = NULL;
                  t = SSLgetAnnotations(s_37);
                  c_14 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, r_37);
                  e_5 = t;
                  t = SSLsetAnnotations(e_5, c_14);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = s_37;
              }
            LocalPopChoice(w_30);
            t = xtc_transform_file_2_0(m_7, n_7, t);
          }
        else
          {
            t = v_30;
            t = xtc_transform_term_2_0(o_7, p_7, t);
          }
        {
          ATerm z_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_37 = NULL,z_37 = NULL;
              z_37 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  y_37 = ATgetArgument(t, 0);
                  {
                    ATerm j_14 = NULL,g_5 = NULL;
                    t = SSLgetAnnotations(z_37);
                    j_14 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, y_37);
                    g_5 = t;
                    t = SSLsetAnnotations(g_5, j_14);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = z_37;
                }
              LocalPopChoice(a_31);
              t = xtc_transform_file_2_0(q_7, t_7, t);
            }
          else
            {
              t = z_30;
              t = xtc_transform_term_2_0(u_7, v_7, t);
            }
          {
            ATerm b_31 = t;
            int e_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_38 = NULL,m_38 = NULL;
                m_38 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    l_38 = ATgetArgument(t, 0);
                    {
                      ATerm x_14 = NULL,j_6 = NULL;
                      t = SSLgetAnnotations(m_38);
                      x_14 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, l_38);
                      j_6 = t;
                      t = SSLsetAnnotations(j_6, x_14);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = m_38;
                  }
                LocalPopChoice(e_31);
                t = xtc_transform_file_2_0(x_7, y_7, t);
              }
            else
              {
                t = b_31;
                t = xtc_transform_term_2_0(z_7, e_8, t);
              }
            if(match_cons(t, sym_FILE_1))
              {
                u_36 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATempty, term_k_31), u_36);
            t = xtc_command_1_0(f_8, t);
          }
        }
      }
    }
  }
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm d_37 = NULL;
  t = term_n_31;
  t = xtc_find_0_0(t);
  d_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_37), term_p_31), term_o_31);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm e_37 = NULL;
  t = term_n_31;
  t = xtc_find_0_0(t);
  e_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_37), term_p_31), term_o_31);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL;
  t = term_t_31;
  t = xtc_find_0_0(t);
  a_38 = t;
  t = term_u_31;
  t = xtc_find_0_0(t);
  b_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_38), term_p_31), a_38), term_p_31);
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL;
  t = term_t_31;
  t = xtc_find_0_0(t);
  d_38 = t;
  t = term_u_31;
  t = xtc_find_0_0(t);
  e_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_38), term_p_31), d_38), term_p_31);
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_v_31;
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_v_31;
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm sdf_to_sig_0_0 (ATerm t)
{
  t = option_wrap_4_0(p_6, default_usage_0_0, _id, q_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = sdf_to_sig_0_0(t);
  return(t);
}
