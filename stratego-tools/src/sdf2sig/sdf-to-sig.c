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
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_h_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_g_30;
ATerm term_d_30;
ATerm term_u_29;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_y_27;
ATerm term_w_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_s_26;
ATerm term_g_25;
ATerm term_t_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_f_24;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_q_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_e_23;
ATerm term_u_22;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_i_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_r_21;
ATerm term_o_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_x_18;
ATerm term_t_18;
ATerm term_m_18;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_d_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_k_9;
ATerm term_h_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_w_7;
ATerm term_x_4;
void init_constant_terms (void)
{
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_8, term_w_8, term_b_9);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_9, term_k_9, term_o_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_9, term_v_9, term_w_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_10, term_c_10, term_d_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_10, term_g_10, term_h_10);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_10, term_l_10, term_m_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_10, term_r_10, term_t_10);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_11, term_d_11, term_h_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_k_11, term_l_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_p_11, term_s_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_x_11, term_y_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_d_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_m_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_t_12, term_u_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_i_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_s_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_z_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_d_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_l_14, term_m_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_14, term_p_14, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_v_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_d_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_l_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_t_15, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_d_16, term_h_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_k_16, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_q_16, term_r_16);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_m_23);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_u_22);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__2, term_j_19, term_m_18);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_d_27);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_27);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym__2, term_p_27, term_c_19);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_g_28, term_h_28);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym__2, term_s_30, term_c_19);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym__2, term_v_30, term_c_19);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__2, term_d_30, term_c_19);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2sig", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("dummy.pp", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("unpack", 0, ATtrue));
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
ATerm z_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm q_6 (ATerm d_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm y_5 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm);
ATerm p_7 (ATerm f_7, ATerm);
ATerm q_7 (ATerm h_7, ATerm i_7, ATerm j_7, ATerm);
ATerm c_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm f_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm n_68 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm q_5 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm);
ATerm r_5 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm);
ATerm j_1 (ATerm);
ATerm s_5 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm);
ATerm t_5 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm);
ATerm z_5 (ATerm l_48, ATerm m_48, ATerm);
ATerm s_10 (ATerm j_10, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm u_5 (ATerm x_27, ATerm);
ATerm w_5 (ATerm t_48, ATerm u_48, ATerm);
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm j_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm q_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm p_16 (ATerm s_15, ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm e_6 (ATerm y_41, ATerm z_41, ATerm);
ATerm debug_1_0 (ATerm b_72 (ATerm), ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm a_6 (ATerm m_45, ATerm n_45, ATerm);
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm q_3 (ATerm);
ATerm u_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm b_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm b_6 (ATerm c_43, ATerm d_43, ATerm);
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm i_4 (ATerm);
ATerm l_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm p_4 (ATerm);
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm u_68 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm v_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_4 (ATerm);
ATerm z_4 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm i_6 (ATerm h_47, ATerm i_47, ATerm);
ATerm f_6 (ATerm y_46, ATerm z_46, ATerm);
ATerm g_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm k_6 (ATerm);
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm u_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm g_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm u_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
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
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL;
  f_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      g_2 = ATgetArgument(t, 0);
      {
        ATerm o_0 = NULL,p_0 = NULL;
        t = SSL_int_to_string(g_2);
        o_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), o_0), term_x_4);
        p_0 = t;
        t = SSL_concat_strings(p_0);
      }
    }
  else
    {
      ATerm d_1 = NULL,e_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          g_2 = ATgetArgument(t, 0);
          h_2 = ATgetArgument(t, 1);
          i_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(h_2);
      d_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_2), term_o_8), d_1), term_n_8), g_2);
      e_1 = t;
      t = SSL_concat_strings(e_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm o_2 = NULL;
  ATerm w_0 (ATerm t)
  {
    t = i_76(t);
    if(((o_2 != NULL) && (o_2 != t)))
      _fail(t);
    else
      o_2 = t;
    return(t);
  }
  t = fetch_1_0(w_0, t);
  t = not_null(o_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  {
    ATerm r_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_16), term_m_16), term_i_16), term_b_16), term_q_15), term_m_15), term_i_15), term_y_14), term_r_14), term_n_14), term_e_14), term_a_14), term_t_13), term_j_13), term_v_12), term_p_12), term_f_12), term_a_12), term_t_11), term_m_11), term_i_11), term_u_10), term_n_10), term_i_10), term_e_10), term_x_9), term_p_9), term_e_9);
        {
          ATerm x_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm w_16 = ATgetArgument(t, 0);
                if((p_2 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm y_16 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(x_0, t);
        }
        ;
        LocalPopChoice(t_8);
      }
    else
      {
        t = r_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, p_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm s_2 = NULL;
  s_2 = t;
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_3 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_17 = ATgetArgument(t, 0);
            i_3 = ATgetArgument(t, 1);
            {
              ATerm c_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_3;
        {
          ATerm d_17 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_17;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          r_1 = t;
          t = term_f_17;
          s_1 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, r_1), term_g_17);
          t_1 = t;
          t = SSL_printnl(s_1, t_1);
          t = (ATerm) ATmakeAppl(sym__2, term_f_17, (ATerm) ATinsert(ATinsert(ATempty, r_1), term_g_17));
        }
        ;
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
      }
    t = s_2;
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
  ATerm o_3 = NULL,p_3 = NULL;
  o_3 = t;
  t = fork_0_0(t);
  p_3 = t;
  {
    ATerm h_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = o_3;
        t = s_70(t);
        ;
        LocalPopChoice(l_17);
      }
    else
      {
        t = h_17;
        t = SSL_waitpid(p_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_17 = ATgetArgument(t, 0);
            if(((ATgetType(m_17) != AT_INT) || (ATgetInt((ATermInt) m_17) != 0)))
              _fail(t);
            {
              ATerm n_17 = ATgetArgument(t, 1);
            }
            {
              ATerm o_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = o_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  r_3 = t;
  t = e_90(t);
  t = xtc_find_0_0(t);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_3, r_3);
  {
    ATerm y_0 (ATerm t)
    {
      ATerm t_3 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, s_3, r_3);
      t = n_5(s_3, r_3, t);
      t = term_p_17;
      t_3 = t;
      t = SSL_exit(t_3);
      return(t);
    }
    t = fork_and_wait_1_0(y_0, t);
    t = r_3;
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm a_4 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_s_17;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm c_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_t_17);
      c_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_4, (ATerm) ATinsert(ATempty, term_t_17));
      t = z_5(a_4, c_4, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm v_5 (ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm d_4 = NULL;
  t = SSL_write_term_to_stream_baf(r_27, s_27);
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_4);
  return(t);
}
ATerm x_5 (ATerm d_72 (ATerm), ATerm t_182, ATerm z_27, ATerm t)
{
  ATerm e_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_182, term_u_17);
  t = open_stream_0_0(t);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_4, z_27);
  t = d_72(t);
  t = fclose_0_0(t);
  t = z_27;
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_17 = ATgetArgument(t, 0);
      if(match_cons(x_17, sym_Stream_1))
        {
          m_4 = ATgetArgument(x_17, 0);
        }
      else
        _fail(t);
      n_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(m_4, n_4, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL;
  j_4 = t;
  t = xtc_new_file_0_0(t);
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_4, j_4);
  t = x_5(z_0, k_4, j_4, t);
  t = SSL_close_file(k_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_4);
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
  ATerm y_4 (ATerm t)
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_4, t);
        ;
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_76(t);
      }
    return(t);
  }
  t = y_4(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_18);
    }
  else
    {
      t = a_18;
      {
        ATerm q_4 = NULL,r_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_4 = ATgetFirst((ATermList) t);
            r_4 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_4;
        {
          ATerm a_1 (ATerm t)
          {
            t = r_4;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_1, t);
        }
      }
    }
  return(t);
}
ATerm q_6 (ATerm d_5, ATerm t)
{
  ATerm c_6 = NULL;
  t = SSL_explode_term(d_5);
  if(match_cons(t, sym__2))
    {
      ATerm e_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_6 = NULL,h_6 = NULL,j_6 = NULL;
  j_6 = t;
  if(match_cons(t, sym__2))
    {
      d_6 = ATgetArgument(t, 0);
      h_6 = ATgetArgument(t, 1);
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              t = h_6;
              return(t);
            }
            t = d_6;
            t = at_end_1_0(b_1, t);
            ;
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            t = q_6(j_6, t);
          }
      }
    }
  else
    {
      t = q_6(j_6, t);
    }
  return(t);
}
ATerm y_5 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,a_7 = NULL;
  r_6 = t;
  t = p_86(t);
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_6, q_44, o_44);
  t = g_6(s_6, q_44, o_44, t);
  {
    ATerm j_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_7 = NULL;
        t = term_m_18;
        b_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_6, term_m_18);
        t = f_6(s_6, b_7, t);
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = j_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_6 = ATgetFirst((ATermList) t);
        w_6 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_m_18;
    x_6 = t;
    t = (ATerm) ATinsert(CheckATermList(w_6), (ATerm) ATinsert(CheckATermList(v_6), q_44));
    a_7 = t;
    t = SSL_table_put(s_6, x_6, a_7);
    t = r_6;
  }
  return(t);
}
ATerm p_7 (ATerm f_7, ATerm t)
{
  t = f_7;
  {
    ATerm o_18 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_18 = ATgetArgument(t, 0);
            ATerm r_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_18;
      }
    t = term_t_18;
    t = debug_1_0(c_1, t);
    t = (ATerm) ATmakeAppl(sym__2, f_7, term_u_17);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm q_7 (ATerm h_7, ATerm i_7, ATerm j_7, ATerm t)
{
  t = SSL_open_file(h_7, i_7);
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_x_18;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL;
  m_7 = t;
  if(match_cons(t, sym__2))
    {
      n_7 = ATgetArgument(t, 0);
      o_7 = ATgetArgument(t, 1);
      {
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_7(m_7, t);
            ;
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
            t = q_7(n_7, o_7, m_7, t);
          }
      }
    }
  else
    {
      t = p_7(m_7, t);
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
  ATerm r_7 = NULL,s_7 = NULL;
  t = term_c_19;
  t = new_0_0(t);
  r_7 = t;
  t = term_f_19;
  s_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_7, term_f_19);
  t = e_6(r_7, s_7, t);
  {
    ATerm g_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_7 = NULL,v_7 = NULL;
        t_7 = t;
        t = (ATerm) ATinsert(ATempty, term_t_17);
        v_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_7, (ATerm) ATinsert(ATempty, term_t_17));
        t = z_5(t_7, v_7, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(i_19);
      }
    else
      {
        t = g_19;
      }
  }
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_j_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL;
  t = new_file_0_0(t);
  x_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_7, term_u_17);
  t = open_file_0_0(t);
  t = term_c_19;
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_7, term_c_19);
  t = y_5(f_1, x_7, y_7, t);
  t = x_7;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL;
  l_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm y_1 = NULL,z_1 = NULL;
      t = l_8;
      t = xtc_new_file_0_0(t);
      y_1 = t;
      t = l_0(t);
      z_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_1, (ATerm) ATinsert(ATinsert(ATempty, y_1), term_k_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(k_0, t);
      t = SSL_close_file(y_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_1);
    }
  else
    {
      ATerm k_2 = NULL,l_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_8;
      t = xtc_new_file_0_0(t);
      k_2 = t;
      t = l_0(t);
      l_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_2), term_k_19), m_8), term_l_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(k_0, t);
      t = SSL_close_file(k_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_2);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm n_68 (ATerm), ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,s_8 = NULL,u_8 = NULL,b_0 = NULL,f_0 = NULL;
  u_8 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_8);
  p_8 = t;
  t = q_8;
  t = n_68(t);
  s_8 = t;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, s_8);
  b_0 = t;
  t = SSLsetAnnotations(b_0, p_8);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm x_8 = NULL;
  x_8 = t;
  t = SSL_table_keys(x_8);
  {
    ATerm g_1 (ATerm t)
    {
      ATerm y_8 = NULL,z_8 = NULL;
      y_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_8, y_8);
      t = f_6(x_8, y_8, t);
      z_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_8, z_8);
      return(t);
    }
    t = map_1_0(g_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_9 = NULL,c_9 = NULL;
      a_9 = t;
      t = term_o_19;
      t = get_config_0_0(t);
      c_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_9, term_t_15);
      t = geq_0_0(t);
      t = a_9;
      t = x_87(t);
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm q_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_9 = NULL,f_9 = NULL;
      d_9 = t;
      t = term_o_19;
      t = get_config_0_0(t);
      f_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_9, term_c_12);
      t = geq_0_0(t);
      t = d_9;
      t = w_87(t);
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = q_19;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm u_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_9 = NULL,i_9 = NULL;
      g_9 = t;
      t = term_o_19;
      t = get_config_0_0(t);
      i_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_9, term_c_10);
      t = geq_0_0(t);
      t = g_9;
      t = y_87(t);
      ;
      LocalPopChoice(x_19);
    }
  else
    {
      t = u_19;
    }
  return(t);
}
ATerm q_5 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm t)
{
  t = e_80(t);
  {
    ATerm h_1 (ATerm t)
    {
      ATerm j_9 = NULL;
      j_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_34, j_9);
      t = d_80(t);
      return(t);
    }
    t = fetch_1_0(h_1, t);
    t = t_34;
  }
  return(t);
}
ATerm r_5 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm t)
{
  t = q_34;
  {
    ATerm q_9 (ATerm t)
    {
      ATerm y_19 = t;
      int a_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_34;
          ;
          LocalPopChoice(a_20);
        }
      else
        {
          t = y_19;
          {
            ATerm b_20 = t;
            int d_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
                l_9 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_9 = ATgetFirst((ATermList) t);
                    n_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = l_9;
                {
                  ATerm i_1 (ATerm t)
                  {
                    t = p_34;
                    return(t);
                  }
                  t = q_5(a_80, i_1, m_9, n_9, t);
                  t = q_9(t);
                }
                ;
                LocalPopChoice(d_20);
              }
            else
              {
                t = b_20;
                t = Cons_2_0(_id, q_9, t);
              }
          }
        }
      return(t);
    }
    t = q_9(t);
  }
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm y_9 = NULL;
  if(match_cons(t, sym__2))
    {
      y_9 = ATgetArgument(t, 0);
      if((y_9 != ATgetArgument(t, 1)))
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
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_20 = ATgetArgument(t, 0);
            ATerm l_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
        t = f_6(e_46, f_46, t);
        ;
        LocalPopChoice(h_20);
      }
    else
      {
        t = g_20;
        t = (ATerm) ATempty;
      }
    t_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_9, g_46);
    t = r_5(j_1, t_9, g_46, t);
    u_9 = t;
    t = SSL_table_put(e_46, f_46, u_9);
    t = s_9;
  }
  return(t);
}
ATerm t_5 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm t)
{
  t = n_46;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm z_9 = NULL,a_10 = NULL;
      if(match_cons(t, sym__2))
        {
          z_9 = ATgetArgument(t, 0);
          a_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, o_46, z_9, a_10);
      t = a_88(t);
      return(t);
    }
    t = map_1_0(k_1, t);
  }
  return(t);
}
ATerm z_5 (ATerm l_48, ATerm m_48, ATerm t)
{
  t = SSL_access(l_48, m_48);
  return(t);
}
ATerm s_10 (ATerm j_10, ATerm t)
{
  t = SSL_fclose(j_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL;
  q_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_10 = ATgetArgument(t, 0);
      {
        ATerm q_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_10);
            ;
            LocalPopChoice(v_20);
          }
        else
          {
            t = q_20;
            t = s_10(q_10, t);
          }
      }
    }
  else
    {
      t = s_10(q_10, t);
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
  ATerm v_10 = NULL;
  t = SSL_fopen(t_48, u_48);
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_10);
  return(t);
}
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,m_0 = NULL,n_0 = NULL;
  b_11 = t;
  if(match_cons(t, sym__2))
    {
      x_10 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_11);
  w_10 = t;
  t = x_10;
  t = z_58(t);
  z_10 = t;
  t = y_10;
  t = a_59(t);
  a_11 = t;
  n_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_10, a_11);
  m_0 = t;
  t = SSLsetAnnotations(m_0, w_10);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_11 = NULL;
  t = SSL_stdin_stream();
  e_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_11 = NULL;
  t = SSL_stdout_stream();
  f_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_11 = NULL;
  t = SSL_stderr_stream();
  g_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_11);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm u_11 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      u_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11;
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm e_12 = NULL;
  e_12 = t;
  t = SSL_is_string(e_12);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_20 = ATgetArgument(t, 0);
      ATerm b_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_11 = NULL,e_3 = NULL;
        o_11 = t;
        t = SSL_explode_term(o_11);
        if(match_cons(t, sym__2))
          {
            ATerm i_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_21 = ATgetArgument(t, 1);
              if(((ATgetType(m_21) == AT_LIST) && !(ATisEmpty(m_21))))
                {
                  e_3 = ATgetFirst((ATermList) m_21);
                  {
                    ATerm n_21 = (ATerm) ATgetNext((ATermList) m_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = e_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = e_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = e_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        {
          ATerm o_21 = t;
          int q_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_11 = NULL,r_11 = NULL;
              t = _2_0(l_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  q_11 = ATgetArgument(t, 0);
                  r_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_5(q_11, r_11, t);
              ;
              LocalPopChoice(q_21);
            }
          else
            {
              t = o_21;
              {
                ATerm v_11 = NULL,z_11 = NULL;
                t = _2_0(m_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    v_11 = ATgetArgument(t, 0);
                    z_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_5(v_11, z_11, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_r_21;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
  ATerm s_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_12 = NULL;
      j_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_12, term_a_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_21);
    }
  else
    {
      t = s_21;
      t = debug_1_0(n_1, t);
      _fail(t);
    }
  g_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_5(i_12, t);
  h_12 = t;
  t = g_12;
  t = fclose_0_0(t);
  t = h_12;
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm e_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_12 = NULL,o_12 = NULL;
      n_12 = t;
      t = (ATerm) ATinsert(ATempty, term_i_22);
      o_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_12, (ATerm) ATinsert(ATempty, term_i_22));
      t = z_5(n_12, o_12, t);
      LocalPopChoice(h_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = e_22;
      {
        ATerm j_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_22 = t;
            if((PushChoice() == 0))
              {
                ATerm q_12 = NULL,r_12 = NULL;
                q_12 = t;
                t = (ATerm) ATinsert(ATempty, term_t_17);
                r_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, q_12, (ATerm) ATinsert(ATempty, term_t_17));
                t = z_5(q_12, r_12, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_22;
              }
            t = debug_1_0(o_1, t);
            ;
            LocalPopChoice(k_22);
          }
        else
          {
            t = j_22;
            t = debug_1_0(p_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_m_22;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = debug_1_0(w_1, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
  o_13 = t;
  t = term_f_17;
  p_13 = t;
  t = (ATerm) ATinsert(ATempty, term_o_22);
  q_13 = t;
  t = SSL_printnl(p_13, q_13);
  t = o_13;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm r_13 = NULL,u_13 = NULL,v_13 = NULL;
  if(match_cons(t, sym__3))
    {
      r_13 = ATgetArgument(t, 0);
      u_13 = ATgetArgument(t, 1);
      v_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_5(r_13, u_13, v_13, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm w_13 = NULL,f_14 = NULL,g_14 = NULL;
  w_13 = t;
  t = term_f_17;
  f_14 = t;
  t = (ATerm) ATinsert(ATempty, term_p_22);
  g_14 = t;
  t = SSL_printnl(f_14, g_14);
  t = w_13;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm h_14 = NULL,j_14 = NULL,k_14 = NULL;
  h_14 = t;
  t = term_f_17;
  j_14 = t;
  t = (ATerm) ATinsert(ATempty, term_o_22);
  k_14 = t;
  t = SSL_printnl(j_14, k_14);
  t = h_14;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL;
  w_12 = t;
  t = if_verbose5_1_0(q_1, t);
  {
    ATerm r_22 = t;
    if((PushChoice() == 0))
      {
        ATerm m_13 = NULL,n_13 = NULL;
        t = term_s_22;
        m_13 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, w_12);
        n_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_22, (ATerm) ATmakeAppl(sym_Imported_1, w_12));
        t = f_6(m_13, n_13, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_22;
      }
    x_12 = t;
    t = term_s_22;
    z_12 = t;
    t = term_u_22;
    a_13 = t;
    t = (ATerm) ATinsert(ATempty, w_12);
    b_13 = t;
    t = SSL_table_put(z_12, a_13, b_13);
    t = x_12;
    t = if_verbose4_1_0(v_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(x_1, t);
    y_12 = t;
    t = term_s_22;
    e_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_22, y_12);
    t = t_5(a_2, e_13, y_12, t);
    t = if_verbose6_1_0(b_2, t);
    t = term_s_22;
    f_13 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, w_12);
    g_13 = t;
    t = (ATerm) ATempty;
    h_13 = t;
    t = SSL_table_put(f_13, g_13, h_13);
    t = (ATerm) ATmakeAppl(sym__3, term_s_22, (ATerm)ATmakeAppl(sym_Imported_1, w_12), (ATerm) ATempty);
    t = if_verbose4_1_0(c_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 (ATerm t)
            {
              t = filter_1_0(r_83, t);
              return(t);
            }
            t = Cons_2_0(r_83, d_2, t);
            ;
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            {
              ATerm u_14 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_22 = ATgetFirst((ATermList) t);
                  u_14 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = u_14;
              t = filter_1_0(r_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm w_14 (ATerm t)
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_85(t);
        t = w_14(t);
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
      }
    return(t);
  }
  t = w_14(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm f_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_14 = NULL;
            t = term_h_23;
            x_14 = t;
            t = SSL_getenv(x_14);
            ;
            LocalPopChoice(g_23);
          }
        else
          {
            t = f_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_i_23;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL;
  t = term_s_22;
  f_15 = t;
  t = term_m_23;
  g_15 = t;
  t = term_n_23;
  t = f_6(f_15, g_15, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm o_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_23;
      }
  }
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm a_15 = NULL;
  t = if_verbose5_1_0(e_2, t);
  a_15 = t;
  {
    ATerm r_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_15 = NULL,c_15 = NULL;
        t = term_s_22;
        b_15 = t;
        t = term_u_22;
        c_15 = t;
        t = term_u_23;
        t = f_6(b_15, c_15, t);
        ;
        LocalPopChoice(t_23);
      }
    else
      {
        t = r_23;
        {
          ATerm e_15 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          e_15 = t;
          t = repeat_1_0(m_2, t);
          t = e_15;
        }
      }
    t = a_15;
    t = if_verbose5_1_0(n_2, t);
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = debug_1_0(t_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_v_23;
  return(t);
}
ATerm p_16 (ATerm s_15, ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  t = term_s_22;
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, s_15);
  w_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_22, (ATerm) ATmakeAppl(sym_Tool_1, s_15));
  t = f_6(v_15, w_15, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_24 = ATgetFirst((ATermList) t);
      if(match_cons(a_24, sym__2))
        {
          ATerm e_24 = ATgetArgument(a_24, 0);
          u_15 = ATgetArgument(a_24, 1);
        }
      else
        _fail(t);
      {
        ATerm b_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_15;
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = debug_1_0(w_2, t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_v_23;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_s_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm g_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(r_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
        z_15 = t;
        if(match_cons(t, sym__2))
          {
            x_15 = ATgetArgument(t, 0);
            y_15 = ATgetArgument(t, 1);
            {
              ATerm k_24 = t;
              int l_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
                  t = term_s_22;
                  f_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, x_15);
                  g_16 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_s_22, (ATerm) ATmakeAppl(sym_Tool_1, x_15));
                  t = f_6(f_16, g_16, t);
                  {
                    ATerm u_2 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((y_15 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((e_16 != NULL) && (e_16 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            e_16 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(u_2, t);
                    t = not_null(e_16);
                  }
                  ;
                  LocalPopChoice(l_24);
                }
              else
                {
                  t = k_24;
                  t = p_16(z_15, t);
                }
            }
          }
        else
          {
            t = p_16(z_15, t);
          }
        t = if_verbose5_1_0(v_2, t);
      }
      ;
      LocalPopChoice(j_24);
    }
  else
    {
      t = g_24;
      {
        ATerm o_16 = NULL,v_3 = NULL,w_3 = NULL;
        o_16 = t;
        t = term_f_17;
        v_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_24), o_16), term_m_24);
        w_3 = t;
        t = SSL_printnl(v_3, w_3);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_24), o_16), term_m_24);
        t = if_verbose5_1_0(x_2, t);
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
  ATerm s_16 = NULL,u_16 = NULL,v_16 = NULL,x_16 = NULL;
  s_16 = t;
  t = b_72(t);
  u_16 = t;
  t = term_f_17;
  v_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_16), u_16);
  x_16 = t;
  t = SSL_printnl(v_16, x_16);
  t = s_16;
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm q_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(s_24);
    }
  else
    {
      t = q_24;
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_t_24;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_17 = NULL;
      e_17 = t;
      t = SSL_is_string(e_17);
      ;
      LocalPopChoice(y_24);
    }
  else
    {
      t = x_24;
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_2, t);
            ;
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
            {
              ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
              i_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_17 = ATgetArgument(t, 0);
                  t = j_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_17 = ATgetArgument(t, 0);
                      t = j_17;
                      {
                        ATerm e_25 = t;
                        int f_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(f_25);
                          }
                        else
                          {
                            t = e_25;
                            t = debug_1_0(a_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm q_17 = NULL,r_17 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_17 = ATgetArgument(t, 0);
                          k_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_17;
                      t = eval_config_0_0(t);
                      q_17 = t;
                      t = k_17;
                      t = eval_config_0_0(t);
                      r_17 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_17, r_17);
                      t = e_6(q_17, r_17, t);
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
  ATerm v_17 = NULL,w_17 = NULL;
  v_17 = t;
  t = term_g_25;
  w_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_25, v_17);
  t = f_6(w_17, v_17, t);
  {
    ATerm i_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_18 = NULL,d_18 = NULL;
        t = eval_config_0_0(t);
        b_18 = t;
        t = term_g_25;
        d_18 = t;
        t = SSL_table_put(d_18, v_17, b_18);
        t = b_18;
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = i_25;
      }
  }
  return(t);
}
ATerm a_6 (ATerm m_45, ATerm n_45, ATerm t)
{
  ATerm f_18 = NULL,i_18 = NULL;
  f_18 = t;
  {
    ATerm l_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
        t = f_6(m_45, n_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_25 = ATgetFirst((ATermList) t);
            i_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_25);
        t = SSL_table_put(m_45, n_45, i_18);
        t = (ATerm) ATmakeAppl(sym__3, m_45, n_45, i_18);
      }
    else
      {
        t = l_25;
        t = SSL_table_remove(m_45, n_45);
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
      }
    t = f_18;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm k_18 = NULL,n_18 = NULL,p_18 = NULL,s_18 = NULL,u_18 = NULL;
  k_18 = t;
  t = m_86(t);
  n_18 = t;
  {
    ATerm t_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_18 = NULL;
        t = term_m_18;
        v_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_18, term_m_18);
        t = f_6(n_18, v_18, t);
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = t_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_18 = ATgetFirst((ATermList) t);
        p_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_m_18;
    u_18 = t;
    t = SSL_table_put(n_18, u_18, p_18);
    t = s_18;
    {
      ATerm b_3 (ATerm t)
      {
        ATerm w_18 = NULL;
        w_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_18, w_18);
        t = a_6(n_18, w_18, t);
        return(t);
      }
      t = map_1_0(b_3, t);
      t = k_18;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_87(t);
      t = i_87(t);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      t = i_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,d_19 = NULL,e_19 = NULL,h_19 = NULL;
  a_19 = t;
  t = l_86(t);
  b_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_19, term_m_18);
  {
    ATerm a_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_19 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_26 = ATgetArgument(t, 0);
            ATerm n_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_m_18;
        p_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_19, term_m_18);
        t = f_6(b_19, p_19, t);
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = a_26;
        t = (ATerm) ATempty;
      }
    d_19 = t;
    t = term_m_18;
    e_19 = t;
    t = (ATerm) ATinsert(CheckATermList(d_19), (ATerm) ATempty);
    h_19 = t;
    t = SSL_table_put(b_19, e_19, h_19);
    t = a_19;
  }
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_j_19;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm o_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_19 = NULL;
      z_19 = t;
      t = SSL_remove(z_19);
      ;
      LocalPopChoice(p_26);
    }
  else
    {
      t = o_26;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_j_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm r_19 = NULL;
  t = begin_scope_1_0(c_3, t);
  {
    ATerm d_3 (ATerm t)
    {
      ATerm s_19 = NULL;
      s_19 = t;
      {
        ATerm q_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_19 = NULL,w_19 = NULL;
            t = term_j_19;
            v_19 = t;
            t = term_m_18;
            w_19 = t;
            t = term_s_26;
            t = f_6(v_19, w_19, t);
            ;
            LocalPopChoice(r_26);
          }
        else
          {
            t = q_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((r_19 != NULL) && (r_19 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              r_19 = ATgetFirst((ATermList) t);
            {
              ATerm t_26 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(r_19);
        t = map_1_0(f_3, t);
        t = s_19;
        t = end_scope_1_0(g_3, t);
      }
      return(t);
    }
    t = restore_always_2_0(q_89, d_3, t);
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_20 = NULL,e_20 = NULL,f_20 = NULL,i_20 = NULL,j_20 = NULL;
  c_20 = t;
  t = term_c_19;
  t = whoami_0_0(t);
  e_20 = t;
  t = term_f_17;
  f_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_26), e_20), term_y_26);
  i_20 = t;
  t = SSL_printnl(f_20, i_20);
  t = term_w_8;
  j_20 = t;
  t = SSL_exit(j_20);
  t = c_20;
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm m_20 = NULL;
  m_20 = t;
  if(match_string(t, "-k"))
    {
      t = m_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_20;
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  n_20 = t;
  t = SSL_string_to_int(n_20);
  o_20 = t;
  t = term_b_27;
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_27, o_20);
  t = i_6(p_20, o_20, t);
  t = n_20;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_c_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_3, j_3, k_3, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm r_20 = NULL;
  r_20 = t;
  if(match_string(t, "-S"))
    {
      t = r_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_20;
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL;
  t = term_o_19;
  s_20 = t;
  t = term_d_27;
  t_20 = t;
  t = term_e_27;
  t = i_6(s_20, t_20, t);
  t = term_f_27;
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm q_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm u_20 = NULL,x_20 = NULL,y_20 = NULL;
  u_20 = t;
  t = SSL_string_to_int(u_20);
  x_20 = t;
  t = term_o_19;
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_19, x_20);
  t = i_6(y_20, x_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_20);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm y_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  t = term_p_27;
  z_20 = t;
  t = term_c_19;
  a_21 = t;
  t = term_q_27;
  t = i_6(z_20, a_21, t);
  t = term_w_27;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_y_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_3, m_3, n_3, t);
      ;
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
      {
        ATerm e_28 = t;
        int f_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_3, u_3, x_3, t);
            ;
            LocalPopChoice(f_28);
          }
        else
          {
            t = e_28;
            t = Option_3_0(y_3, z_3, b_4, t);
          }
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
      t = term_c_19;
      t = j_0(t);
      j_21 = t;
      t = term_g_28;
      k_21 = t;
      t = term_h_28;
      l_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_28, term_h_28, j_21);
      t = g_6(k_21, l_21, j_21, t);
      _fail(t);
    }
  else
    {
      ATerm p_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_21 = ATgetFirst((ATermList) t);
          f_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_21 = ATgetFirst((ATermList) t);
          h_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_21;
      t = h_0(t);
      t = g_21;
      t = i_0(t);
      p_21 = t;
      t = (ATerm) ATinsert(CheckATermList(h_21), p_21);
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm t_21 = NULL;
  t_21 = t;
  if(match_string(t, "-i"))
    {
      t = t_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_21;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL;
  u_21 = t;
  t = term_l_19;
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_19, u_21);
  t = i_6(v_21, u_21, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_21);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_s_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_4, g_4, h_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,b_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_19;
  t = whoami_0_0(t);
  x_21 = t;
  t = term_f_17;
  y_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_28), x_21);
  z_21 = t;
  t = SSL_printnl(y_21, z_21);
  t = term_w_8;
  b_22 = t;
  t = SSL_exit(b_22);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_28;
  t = get_config_0_0(t);
  return(t);
}
ATerm b_6 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_43, d_43);
      ;
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
      t = SSL_addr(c_43, d_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm t)
{
  ATerm x_28 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_82(t);
      ;
      LocalPopChoice(c_29);
    }
  else
    {
      t = x_28;
      {
        ATerm f_22 = NULL,g_22 = NULL,q_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_22 = ATgetFirst((ATermList) t);
            g_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_22;
        t = foldr_2_0(o_82, p_82, t);
        q_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_22, q_22);
        t = p_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      f_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(f_5, g_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_22 = NULL,a_5 = NULL,b_5 = NULL;
  t = times_0_0(t);
  a_5 = t;
  t = SSL_explode_term(a_5);
  if(match_cons(t, sym__2))
    {
      ATerm d_29 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5;
  t = foldr_2_0(i_4, l_4, t);
  t_22 = t;
  t = SSL_TicksToSeconds(t_22);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
  j_23 = t;
  if(match_cons(t, sym__2))
    {
      k_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_23;
        if((k_23 != t))
          {
            _fail(t);
          }
        t = j_23;
        ;
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        t = (ATerm) ATmakeAppl(sym__2, k_23, l_23);
        {
          ATerm l_29 = t;
          int m_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_23, l_23);
              ;
              LocalPopChoice(m_29);
            }
          else
            {
              t = l_29;
              t = SSL_gtr(k_23, l_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_23, l_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  ATerm n_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_23 = NULL,s_23 = NULL;
      p_23 = t;
      t = term_o_19;
      t = get_config_0_0(t);
      s_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_23, term_w_8);
      t = geq_0_0(t);
      t = p_23;
      t = t_87(t);
      ;
      LocalPopChoice(r_29);
    }
  else
    {
      t = n_29;
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
  t = run_time_0_0(t);
  w_23 = t;
  t = term_c_19;
  t = whoami_0_0(t);
  x_23 = t;
  t = term_f_17;
  y_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_29), w_23), term_n_8), x_23);
  z_23 = t;
  t = SSL_printnl(y_23, z_23);
  t = (ATerm) ATmakeAppl(sym__2, term_f_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_29), w_23), term_n_8), x_23));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_27;
  c_24 = t;
  t = SSL_exit(c_24);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm v_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(y_29);
    }
  else
    {
      t = v_29;
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm t)
{
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
      t = fetch_1_0(p_4, t);
    }
  t = s_91(t);
  return(t);
}
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm d_24 (ATerm t)
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        t = Cons_2_0(w_75, d_24, t);
      }
    return(t);
  }
  t = d_24(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_24 = ATgetFirst((ATermList) t);
      i_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_24 = NULL,u_24 = NULL;
        t = i_24;
        t = g_0(t);
        r_24 = t;
        t = h_24;
        t = e_0(t);
        u_24 = t;
        t = i_24;
        {
          ATerm s_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(r_24), u_24);
            return(t);
          }
          t = reverse_acc_2_0(e_0, s_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_19;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm u_68 (ATerm), ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,z_24 = NULL,a_25 = NULL,q_0 = NULL,r_0 = NULL;
  a_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_25);
  v_24 = t;
  t = w_24;
  t = u_68(t);
  z_24 = t;
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_24);
  q_0 = t;
  t = SSLsetAnnotations(q_0, v_24);
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm j_25 = NULL;
  j_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_25), term_g_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_25 = NULL,h_25 = NULL;
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      t = fetch_1_0(t_4, t);
    }
  t = term_j_30;
  t = echo_0_0(t);
  t = term_g_28;
  d_25 = t;
  t = term_h_28;
  h_25 = t;
  t = term_k_30;
  t = f_6(d_25, h_25, t);
  t = reverse_acc_2_0(_id, u_4, t);
  t = map_1_0(v_4, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm v_68 (ATerm), ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,s_0 = NULL,t_0 = NULL;
  p_25 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      n_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_25);
  m_25 = t;
  t = n_25;
  t = v_68(t);
  o_25 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, o_25);
  s_0 = t;
  t = SSLsetAnnotations(s_0, m_25);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm s_25 (ATerm t)
  {
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_76, _id, t);
        ;
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
        t = Cons_2_0(_id, s_25, t);
      }
    return(t);
  }
  t = s_25(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_25;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_30 = ATgetFirst((ATermList) t);
                ATerm q_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_25;
          }
        ;
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        t = (ATerm) ATinsert(ATempty, u_25);
      }
    v_25 = t;
    t = term_r_30;
    w_25 = t;
    t = SSL_printnl(w_25, v_25);
    t = u_25;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_28;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm b_26 = NULL,d_26 = NULL;
  t = term_s_30;
  b_26 = t;
  t = term_c_19;
  d_26 = t;
  t = term_t_30;
  t = i_6(b_26, d_26, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL;
  t = term_s_30;
  e_26 = t;
  t = term_c_19;
  f_26 = t;
  t = term_t_30;
  t = i_6(e_26, f_26, t);
  t = term_v_30;
  g_26 = t;
  t = term_c_19;
  h_26 = t;
  t = term_w_30;
  t = i_6(g_26, h_26, t);
  t = term_x_30;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_y_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_4, z_4, c_5, t);
      ;
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
      t = Option_3_0(e_5, h_5, i_5, t);
    }
  return(t);
}
ATerm i_6 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm i_26 = NULL;
  t = term_g_25;
  i_26 = t;
  t = SSL_table_put(i_26, h_47, i_47);
  t = (ATerm) ATmakeAppl(sym__3, term_g_25, h_47, i_47);
  return(t);
}
ATerm f_6 (ATerm y_46, ATerm z_46, ATerm t)
{
  t = SSL_table_get(y_46, z_46);
  return(t);
}
ATerm g_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_31 = ATgetArgument(t, 0);
            ATerm e_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
        t = f_6(h_45, i_45, t);
        ;
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        t = (ATerm) ATempty;
      }
    l_26 = t;
    t = (ATerm) ATinsert(CheckATermList(l_26), g_45);
    m_26 = t;
    t = SSL_table_put(h_45, i_45, m_26);
    t = k_26;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_26 = NULL,x_26 = NULL,a_27 = NULL;
      t = term_c_19;
      t = d_0(t);
      w_26 = t;
      t = term_g_28;
      x_26 = t;
      t = term_h_28;
      a_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_28, term_h_28, w_26);
      t = g_6(x_26, a_27, w_26, t);
      _fail(t);
    }
  else
    {
      ATerm h_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_26 = ATgetFirst((ATermList) t);
          v_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_26;
      t = a_0(t);
      t = term_c_19;
      t = c_0(t);
      h_27 = t;
      t = (ATerm) ATinsert(CheckATermList(v_26), h_27);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,u_0 = NULL,v_0 = NULL;
  n_27 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_27 = ATgetFirst((ATermList) t);
      k_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_27);
  i_27 = t;
  t = j_27;
  t = o_63(t);
  l_27 = t;
  t = k_27;
  t = p_63(t);
  m_27 = t;
  v_0 = t;
  t = (ATerm) ATinsert(CheckATermList(m_27), l_27);
  u_0 = t;
  t = SSLsetAnnotations(u_0, i_27);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL;
  u_27 = t;
  t = term_u_28;
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_28, u_27);
  t = i_6(v_27, u_27, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, u_27);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_31;
        t = q_93(t);
        ;
        LocalPopChoice(g_31);
      }
    else
      {
        t = f_31;
      }
    t = t_27;
    {
      ATerm k_5 (ATerm t)
      {
        ATerm i_31 = t;
        int j_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_31 = t;
            int l_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(l_31);
              }
            else
              {
                t = k_31;
                t = q_93(t);
                t = Cons_2_0(_id, k_5, t);
              }
            ;
            LocalPopChoice(j_31);
          }
        else
          {
            t = i_31;
            {
              ATerm a_28 = NULL,b_28 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_28 = ATgetFirst((ATermList) t);
                  b_28 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_28), (ATerm) ATmakeAppl(sym_Undefined_1, a_28));
            }
          }
        return(t);
      }
      t = Cons_2_0(j_5, k_5, t);
    }
  }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm p_28 = NULL;
  p_28 = t;
  if(match_string(t, "--help"))
    {
      t = p_28;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_28;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_28;
        }
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  t = term_d_30;
  q_28 = t;
  t = term_c_19;
  r_28 = t;
  t = term_m_31;
  t = i_6(q_28, r_28, t);
  t = term_n_31;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_o_31;
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
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL;
  i_28 = t;
  t = term_g_28;
  l_28 = t;
  t = term_h_28;
  m_28 = t;
  t = (ATerm) ATempty;
  n_28 = t;
  t = SSL_table_put(l_28, m_28, n_28);
  t = i_28;
  {
    ATerm l_5 (ATerm t)
    {
      ATerm p_31 = t;
      int q_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_93(t);
          ;
          LocalPopChoice(q_31);
        }
      else
        {
          t = p_31;
          {
            ATerm r_31 = t;
            int s_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_5, o_5, p_5, t);
                ;
                LocalPopChoice(s_31);
              }
            else
              {
                t = r_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_5, t);
    {
      ATerm t_31 = t;
      int u_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_28 = NULL;
          y_28 = t;
          {
            ATerm v_31 = t;
            int w_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_6 = NULL;
                t = y_28;
                {
                  ATerm x_31 = t;
                  int y_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_d_30;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(y_31);
                    }
                  else
                    {
                      t = x_31;
                      t = fetch_1_0(k_6, t);
                    }
                  t = y_28;
                  t = default_system_usage_0_0(t);
                  t = term_d_27;
                  t_6 = t;
                  t = SSL_exit(t_6);
                }
                ;
                LocalPopChoice(w_31);
              }
            else
              {
                t = v_31;
                {
                  ATerm c_7 = NULL;
                  t = term_s_30;
                  t = get_config_0_0(t);
                  t = y_28;
                  t = default_system_about_0_0(t);
                  t = term_d_27;
                  c_7 = t;
                  t = SSL_exit(c_7);
                }
              }
          }
          ;
          LocalPopChoice(u_31);
        }
      else
        {
          t = t_31;
          {
            ATerm z_31 = t;
            int a_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL;
                ATerm l_6 (ATerm t)
                {
                  ATerm m_6 (ATerm t)
                  {
                    if(((j_28 != NULL) && (j_28 != t)))
                      _fail(t);
                    else
                      j_28 = t;
                    return(t);
                  }
                  t = Undefined_1_0(m_6, t);
                  return(t);
                }
                t = fetch_1_0(l_6, t);
                t = term_f_17;
                z_28 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_28)), term_b_32);
                a_29 = t;
                t = SSL_printnl(z_28, a_29);
                t = (ATerm) ATmakeAppl(sym__2, term_f_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_28)), term_b_32));
                t = default_system_usage_0_0(t);
                t = term_w_8;
                b_29 = t;
                t = SSL_exit(b_29);
                ;
                LocalPopChoice(a_32);
              }
            else
              {
                t = z_31;
              }
          }
        }
      k_28 = t;
      t = term_g_28;
      o_28 = t;
      t = SSL_table_destroy(o_28);
      t = k_28;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  t = parse_options_1_0(u_91, t);
  e_29 = t;
  t = term_c_32;
  f_29 = t;
  t = SSL_table_create(f_29);
  t = term_c_32;
  g_29 = t;
  t = term_d_32;
  h_29 = t;
  t = SSL_table_put(g_29, h_29, e_29);
  t = e_29;
  t = w_91(t);
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_91, t);
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
              t = x_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_32);
            }
          else
            {
              t = g_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = verbose_option_0_0(t);
            ;
            LocalPopChoice(l_32);
          }
        else
          {
            t = k_32;
            t = keep_option_0_0(t);
          }
      }
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = xtc_temp_files_1_0(p_6, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm i_29 = NULL;
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_29 = NULL;
      t = term_l_19;
      t = get_config_0_0(t);
      o_29 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_29);
      ;
      LocalPopChoice(n_32);
    }
  else
    {
      t = m_32;
      t = term_s_17;
    }
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_32 = t;
        int r_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(r_32);
          }
        else
          {
            t = q_32;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(p_32);
        t = xtc_transform_file_2_0(u_6, y_6, t);
      }
    else
      {
        t = o_32;
        t = xtc_transform_term_2_0(z_6, d_7, t);
      }
    {
      ATerm s_32 = t;
      int t_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_32 = t;
          int v_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(v_32);
            }
          else
            {
              t = u_32;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(t_32);
          t = xtc_transform_file_2_0(e_7, g_7, t);
        }
      else
        {
          t = s_32;
          t = xtc_transform_term_2_0(k_7, l_7, t);
        }
      {
        ATerm w_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_32 = t;
            int z_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(z_32);
              }
            else
              {
                t = y_32;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(x_32);
            t = xtc_transform_file_2_0(u_7, z_7, t);
          }
        else
          {
            t = w_32;
            t = xtc_transform_term_2_0(a_8, b_8, t);
          }
        {
          ATerm a_33 = t;
          int b_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_33 = t;
              int d_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(d_33);
                }
              else
                {
                  t = c_33;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(b_33);
              t = xtc_transform_file_2_0(c_8, d_8, t);
            }
          else
            {
              t = a_33;
              t = xtc_transform_term_2_0(e_8, f_8, t);
            }
          {
            ATerm e_33 = t;
            int f_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_33 = t;
                int h_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(h_33);
                  }
                else
                  {
                    t = g_33;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(f_33);
                t = xtc_transform_file_2_0(g_8, h_8, t);
              }
            else
              {
                t = e_33;
                t = xtc_transform_term_2_0(i_8, j_8, t);
              }
            if(match_cons(t, sym_FILE_1))
              {
                i_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATempty, term_i_33), i_29);
            t = xtc_command_1_0(k_8, t);
          }
        }
      }
    }
  }
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_j_33;
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm p_29 = NULL;
  t = term_k_33;
  t = xtc_find_0_0(t);
  p_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_29), term_m_33), term_l_33);
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_j_33;
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm q_29 = NULL;
  t = term_k_33;
  t = xtc_find_0_0(t);
  q_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_29), term_m_33), term_l_33);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_o_33;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_o_33;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_p_33;
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL;
  t = term_q_33;
  t = xtc_find_0_0(t);
  s_29 = t;
  t = term_r_33;
  t = xtc_find_0_0(t);
  t_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_29), term_m_33), s_29), term_m_33);
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_p_33;
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL;
  t = term_q_33;
  t = xtc_find_0_0(t);
  w_29 = t;
  t = term_r_33;
  t = xtc_find_0_0(t);
  x_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_29), term_m_33), w_29), term_m_33);
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_s_33;
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_s_33;
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_t_33;
  return(t);
}
ATerm sdf_to_sig_0_0 (ATerm t)
{
  t = option_wrap_4_0(n_6, default_usage_0_0, _id, o_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = sdf_to_sig_0_0(t);
  return(t);
}
