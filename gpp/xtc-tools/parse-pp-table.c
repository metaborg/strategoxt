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
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_h_32;
ATerm term_j_31;
ATerm term_f_31;
ATerm term_c_31;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_c_30;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_h_29;
ATerm term_q_28;
ATerm term_e_28;
ATerm term_a_28;
ATerm term_v_27;
ATerm term_s_27;
ATerm term_o_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_o_26;
ATerm term_c_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_j_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_l_24;
ATerm term_b_24;
ATerm term_e_23;
ATerm term_a_23;
ATerm term_u_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_k_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_m_21;
ATerm term_b_21;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_j_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_a_20;
ATerm term_m_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_p_17;
ATerm term_n_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_j_16;
ATerm term_b_16;
ATerm term_u_15;
ATerm term_q_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_i_11;
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
ATerm term_n_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
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
ATerm term_v_9;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_c_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_h_8;
void init_constant_terms (void)
{
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_9, term_m_8, term_k_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_r_9, term_u_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_x_9, term_y_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_10, term_b_10, term_c_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_10, term_f_10, term_g_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_j_10, term_k_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_q_10, term_r_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_u_10, term_v_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_10, term_y_10, term_a_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_f_11, term_i_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_o_11, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_t_11, term_u_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_a_12, term_b_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_f_12, term_g_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_j_12, term_l_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_t_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_x_12, term_y_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_b_13, term_c_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_f_13, term_g_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_o_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_w_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_f_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_j_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_o_14, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_u_14, term_v_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym__2, term_x_20, term_u_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_x_20, term_b_21);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_x_17, term_j_16);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_h_8, term_f_25);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_25);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__2, term_e_23, term_n_17);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym__2, term_x_25, term_y_25);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym__2, term_h_29, term_n_17);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_m_18, term_n_17);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_s_27, term_n_17);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_h_32, term_n_17);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table.tbl", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("PP-Table-GrammarId", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
ATerm y_5 (ATerm k_43, ATerm l_43, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm f_6 (ATerm t_27, ATerm u_27, ATerm);
ATerm h_6 (ATerm h_72 (ATerm), ATerm z_179, ATerm b_28, ATerm);
ATerm o_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm);
ATerm i_6 (ATerm p_24, ATerm q_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm w_70 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm i_90 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm i_7 (ATerm q_6, ATerm);
ATerm conc_0_0 (ATerm);
ATerm k_6 (ATerm t_86 (ATerm), ATerm s_44, ATerm q_44, ATerm);
ATerm r_8 (ATerm z_7, ATerm);
ATerm v_8 (ATerm b_8, ATerm c_8, ATerm d_8, ATerm);
ATerm z_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm a_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm b_1 (ATerm);
ATerm pass_v_verbose_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm a_88 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm a_6 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm w_34, ATerm v_34, ATerm);
ATerm b_6 (ATerm e_80 (ATerm), ATerm s_34, ATerm r_34, ATerm);
ATerm l_1 (ATerm);
ATerm c_6 (ATerm g_46, ATerm h_46, ATerm i_46, ATerm);
ATerm d_6 (ATerm e_88 (ATerm), ATerm q_46, ATerm p_46, ATerm);
ATerm l_6 (ATerm n_48, ATerm o_48, ATerm);
ATerm o_15 (ATerm e_15, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm e_6 (ATerm z_27, ATerm);
ATerm g_6 (ATerm v_48, ATerm w_48, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_17 (ATerm d_16, ATerm);
ATerm j_17 (ATerm k_16, ATerm l_16, ATerm m_16, ATerm);
ATerm k_17 (ATerm u_16, ATerm v_16, ATerm w_16, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm w_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm g_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm p_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm h_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm h_22 (ATerm g_21, ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm g_3 (ATerm);
ATerm k_3 (ATerm);
ATerm xtc_sglr_2_0 (ATerm g_100 (ATerm), ATerm h_100 (ATerm), ATerm);
ATerm m_6 (ATerm v_24, ATerm w_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm n_6 (ATerm o_45, ATerm p_45, ATerm);
ATerm end_scope_1_0 (ATerm q_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm p_86 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm u_89 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm xtc_io_1_0 (ATerm v_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm b_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm p_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm v_6 (ATerm j_47, ATerm k_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm t_6 (ATerm j_45, ATerm k_45, ATerm i_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm o_6 (ATerm e_43, ATerm f_43, ATerm);
ATerm foldr_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm g_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm need_help_1_0 (ATerm w_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_6 (ATerm a_42, ATerm b_42, ATerm);
ATerm debug_1_0 (ATerm f_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm s_6 (ATerm a_47, ATerm b_47, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm j_6 (ATerm);
ATerm p_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm u_93 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm parse_options_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm);
ATerm h_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm y_7 (ATerm);
ATerm a_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm y_5 (ATerm k_43, ATerm l_43, ATerm t)
{
  ATerm x_4 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(k_43, l_43);
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = x_4;
      t = SSL_subtr(k_43, l_43);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,p_0 = NULL,r_0 = NULL;
  t = term_h_8;
  {
    ATerm i_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(l_8);
      }
    else
      {
        t = i_8;
        t = term_m_8;
      }
    f_0 = t;
    t = term_m_8;
    r_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_0, term_m_8);
    t = y_5(f_0, r_0, t);
    p_0 = t;
    t = SSL_int_to_string(p_0);
    b_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, b_0), term_h_8);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_n_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm d_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_q_8);
      d_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_0, (ATerm) ATinsert(ATempty, term_q_8));
      t = l_6(w_0, d_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm f_6 (ATerm t_27, ATerm u_27, ATerm t)
{
  ATerm e_1 = NULL;
  t = SSL_write_term_to_stream_baf(t_27, u_27);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_1);
  return(t);
}
ATerm h_6 (ATerm h_72 (ATerm), ATerm z_179, ATerm b_28, ATerm t)
{
  ATerm g_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_179, term_s_8);
  t = open_stream_0_0(t);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_1, b_28);
  t = h_72(t);
  t = fclose_0_0(t);
  t = b_28;
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm k_1 = NULL,r_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_8 = ATgetArgument(t, 0);
      if(match_cons(t_8, sym_Stream_1))
        {
          k_1 = ATgetArgument(t_8, 0);
        }
      else
        _fail(t);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(k_1, r_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL;
  h_1 = t;
  t = xtc_new_file_0_0(t);
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_1, h_1);
  t = h_6(o_0, i_1, h_1, t);
  t = SSL_close_file(i_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(r_90, s_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm i_6 (ATerm p_24, ATerm q_24, ATerm t)
{
  t = SSL_execvp(p_24, q_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
  v_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      w_2 = ATgetArgument(t, 0);
      {
        ATerm t_0 = NULL,u_0 = NULL;
        t = SSL_int_to_string(w_2);
        t_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_8), t_0), term_u_8);
        u_0 = t;
        t = SSL_concat_strings(u_0);
      }
    }
  else
    {
      ATerm n_1 = NULL,o_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          w_2 = ATgetArgument(t, 0);
          x_2 = ATgetArgument(t, 1);
          y_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(x_2);
      n_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_2), term_c_9), n_1), term_x_8), w_2);
      o_1 = t;
      t = SSL_concat_strings(o_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm c_3 = NULL;
  ATerm q_0 (ATerm t)
  {
    t = m_76(t);
    if(((c_3 != NULL) && (c_3 != t)))
      _fail(t);
    else
      c_3 = t;
    return(t);
  }
  t = fetch_1_0(q_0, t);
  t = not_null(c_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm d_3 = NULL;
  if(((d_3 != NULL) && (d_3 != t)))
    _fail(t);
  else
    d_3 = t;
  {
    ATerm e_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm h_9 = ATgetArgument(t, 0);
              if(((d_3 != NULL) && (d_3 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                d_3 = ATgetArgument(t, 1);
              {
                ATerm i_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_15), term_a_15), term_w_14), term_s_14), term_k_14), term_g_14), term_y_13), term_p_13), term_l_13), term_h_13), term_d_13), term_z_12), term_v_12), term_n_12), term_h_12), term_d_12), term_w_11), term_q_11), term_l_11), term_b_11), term_w_10), term_s_10), term_l_10), term_h_10), term_d_10), term_z_9), term_v_9), term_n_9);
        t = fetch_elem_1_0(s_0, t);
        ;
        LocalPopChoice(g_9);
      }
    else
      {
        t = e_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(d_3));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm l_3 = NULL,v_3 = NULL;
  l_3 = t;
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_15 = ATgetArgument(t, 0);
            v_3 = ATgetArgument(t, 1);
            {
              ATerm l_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_15);
        {
          ATerm m_15 = t;
          int n_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_1 = NULL,x_1 = NULL,y_1 = NULL;
              t = v_3;
              {
                ATerm p_15 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_15;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                v_1 = t;
                t = term_q_15;
                x_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, v_1), term_u_15);
                y_1 = t;
                t = SSL_printnl(x_1, y_1);
                t = (ATerm) ATmakeAppl(sym__2, term_q_15, (ATerm) ATinsert(ATinsert(ATempty, v_1), term_u_15));
              }
              ;
              LocalPopChoice(n_15);
            }
          else
            {
              t = m_15;
              t = l_3;
            }
        }
      }
    else
      {
        t = g_15;
        t = l_3;
      }
    t = l_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm w_70 (ATerm), ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL;
  g_4 = t;
  t = fork_0_0(t);
  f_4 = t;
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = g_4;
        t = w_70(t);
        ;
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        t = SSL_waitpid(f_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm y_15 = ATgetArgument(t, 0);
            if(((ATgetType(y_15) != AT_INT) || (ATgetInt((ATermInt) y_15) != 0)))
              _fail(t);
            {
              ATerm z_15 = ATgetArgument(t, 1);
            }
            {
              ATerm a_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = g_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm i_90 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,n_4 = NULL;
  if(((n_4 != NULL) && (n_4 != t)))
    _fail(t);
  else
    n_4 = t;
  t = i_90(t);
  t = xtc_find_0_0(t);
  if(((i_4 != NULL) && (i_4 != t)))
    _fail(t);
  else
    i_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_4), not_null(n_4));
  {
    ATerm v_0 (ATerm t)
    {
      ATerm o_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_4), not_null(n_4));
      t = i_6(not_null(i_4), not_null(n_4), t);
      t = term_b_16;
      o_4 = t;
      t = SSL_exit(o_4);
      return(t);
    }
    t = fork_and_wait_1_0(v_0, t);
    t = not_null(n_4);
  }
  return(t);
}
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm k_5 = NULL,m_5 = NULL,n_5 = NULL;
    n_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_5 = ATgetFirst((ATermList) t);
        m_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_2 = NULL,r_2 = NULL,n_0 = NULL;
          t = SSLgetAnnotations(n_5);
          i_2 = t;
          t = m_5;
          t = o_5(t);
          r_2 = t;
          t = (ATerm) ATinsert(CheckATermList(r_2), k_5);
          n_0 = t;
          t = SSLsetAnnotations(n_0, i_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_5;
        t = q_76(t);
      }
    return(t);
  }
  t = o_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
  q_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_4;
    }
  else
    {
      ATerm x_0 (ATerm t)
      {
        t = not_null(s_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((r_4 != NULL) && (r_4 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            r_4 = ATgetFirst((ATermList) t);
          if(((s_4 != NULL) && (s_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(r_4);
      t = at_end_1_0(x_0, t);
    }
  return(t);
}
ATerm i_7 (ATerm q_6, ATerm t)
{
  ATerm u_6 = NULL;
  t = SSL_explode_term(q_6);
  if(match_cons(t, sym__2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,f_7 = NULL;
  if(((f_7 != NULL) && (f_7 != t)))
    _fail(t);
  else
    f_7 = t;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
      {
        ATerm f_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = not_null(a_7);
              return(t);
            }
            t = not_null(z_6);
            t = at_end_1_0(y_0, t);
            ;
            LocalPopChoice(g_16);
          }
        else
          {
            t = f_16;
            t = i_7(not_null(f_7), t);
          }
      }
    }
  else
    {
      t = i_7(not_null(f_7), t);
    }
  return(t);
}
ATerm k_6 (ATerm t_86 (ATerm), ATerm s_44, ATerm q_44, ATerm t)
{
  ATerm j_7 = NULL,m_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
  p_7 = t;
  t = t_86(t);
  j_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_7, s_44, q_44);
  t = t_6(j_7, s_44, q_44, t);
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL;
        t = term_j_16;
        s_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_7, term_j_16);
        t = s_6(j_7, s_7, t);
        ;
        LocalPopChoice(i_16);
      }
    else
      {
        t = h_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_7 = ATgetFirst((ATermList) t);
        o_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_j_16;
    q_7 = t;
    t = (ATerm) ATinsert(CheckATermList(o_7), (ATerm) ATinsert(CheckATermList(m_7), s_44));
    r_7 = t;
    t = SSL_table_put(j_7, q_7, r_7);
    t = p_7;
  }
  return(t);
}
ATerm r_8 (ATerm z_7, ATerm t)
{
  t = z_7;
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
    t = term_a_17;
    t = debug_1_0(z_0, t);
    t = (ATerm) ATmakeAppl(sym__2, z_7, term_s_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm v_8 (ATerm b_8, ATerm c_8, ATerm d_8, ATerm t)
{
  t = SSL_open_file(b_8, c_8);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_b_17;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,p_8 = NULL;
  j_8 = t;
  if(match_cons(t, sym__2))
    {
      k_8 = ATgetArgument(t, 0);
      p_8 = ATgetArgument(t, 1);
      {
        ATerm d_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_8(j_8, t);
            ;
            LocalPopChoice(g_17);
          }
        else
          {
            t = d_17;
            t = v_8(k_8, p_8, j_8, t);
          }
      }
    }
  else
    {
      t = r_8(j_8, t);
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
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  t = term_n_17;
  t = new_0_0(t);
  z_8 = t;
  t = term_p_17;
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_8, term_p_17);
  t = r_6(z_8, a_9, t);
  b_9 = t;
  {
    ATerm q_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_q_8);
        f_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_9, (ATerm) ATinsert(ATempty, term_q_8));
        t = l_6(b_9, f_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(s_17);
      }
    else
      {
        t = q_17;
        t = b_9;
      }
  }
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_x_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  t = new_file_0_0(t);
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_9, term_s_8);
  t = open_file_0_0(t);
  t = term_n_17;
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_9, term_n_17);
  t = k_6(a_1, s_9, t_9, t);
  t = s_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm m_10 = NULL,o_10 = NULL;
  m_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_3 = NULL,j_3 = NULL;
      t = m_10;
      t = xtc_new_file_0_0(t);
      i_3 = t;
      t = m_0(t);
      j_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_3, (ATerm) ATinsert(ATinsert(ATempty, i_3), term_a_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(i_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_3);
    }
  else
    {
      ATerm w_3 = NULL,a_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_10;
      t = xtc_new_file_0_0(t);
      w_3 = t;
      t = m_0(t);
      a_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_3), term_a_18), o_10), term_c_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(w_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_3);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm c_11 = NULL;
  c_11 = t;
  {
    ATerm e_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_11 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        e_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_11, term_x_9);
        t = geq_0_0(t);
        t = c_11;
        t = z_87(t);
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = e_18;
        t = c_11;
      }
  }
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_m_18);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(b_1, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm g_11 = NULL;
  ATerm c_1 (ATerm t)
  {
    ATerm j_11 = NULL,k_11 = NULL;
    j_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_11), j_11);
    t = s_6(not_null(g_11), j_11, t);
    k_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_11, k_11);
    return(t);
  }
  if(((g_11 != NULL) && (g_11 != t)))
    _fail(t);
  else
    g_11 = t;
  t = SSL_table_keys(not_null(g_11));
  t = map_1_0(c_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm n_11 = NULL;
  n_11 = t;
  {
    ATerm n_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_11 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        v_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_11, term_o_14);
        t = geq_0_0(t);
        t = n_11;
        t = b_88(t);
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = n_18;
        t = n_11;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm y_11 = NULL;
  y_11 = t;
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_12 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        c_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_12, term_t_11);
        t = geq_0_0(t);
        t = y_11;
        t = a_88(t);
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        t = y_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm k_12 = NULL;
  k_12 = t;
  {
    ATerm t_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_12 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        m_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_12, term_b_10);
        t = geq_0_0(t);
        t = k_12;
        t = c_88(t);
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = t_18;
        t = k_12;
      }
  }
  return(t);
}
ATerm a_6 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm w_34, ATerm v_34, ATerm t)
{
  t = i_80(t);
  {
    ATerm f_1 (ATerm t)
    {
      ATerm o_12 = NULL;
      o_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_34), o_12);
      t = h_80(t);
      return(t);
    }
    t = fetch_1_0(f_1, t);
    t = not_null(v_34);
  }
  return(t);
}
ATerm b_6 (ATerm e_80 (ATerm), ATerm s_34, ATerm r_34, ATerm t)
{
  ATerm x_13 (ATerm t)
  {
    ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL;
    q_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(r_34);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_13 = ATgetFirst((ATermList) t);
            s_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_13;
              {
                ATerm j_1 (ATerm t)
                {
                  t = not_null(r_34);
                  return(t);
                }
                t = a_6(e_80, j_1, not_null(r_13), not_null(s_13), t);
                t = x_13(t);
              }
              ;
              LocalPopChoice(i_19);
            }
          else
            {
              t = h_19;
              {
                ATerm m_4 = NULL,v_4 = NULL,c_2 = NULL;
                t = SSLgetAnnotations(q_13);
                m_4 = t;
                t = s_13;
                t = x_13(t);
                v_4 = t;
                t = (ATerm) ATinsert(CheckATermList(v_4), r_13);
                c_2 = t;
                t = SSLsetAnnotations(c_2, m_4);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(s_34);
  t = x_13(t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm l_14 = NULL;
  if(match_cons(t, sym__2))
    {
      l_14 = ATgetArgument(t, 0);
      if((l_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm c_6 (ATerm g_46, ATerm h_46, ATerm i_46, ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_46, h_46);
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_19 = ATgetArgument(t, 0);
            ATerm m_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_46, h_46);
        t = s_6(g_46, h_46, t);
        ;
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        t = (ATerm) ATempty;
      }
    d_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_14, i_46);
    t = b_6(l_1, d_14, i_46, t);
    c_14 = t;
    t = SSL_table_put(g_46, h_46, c_14);
    t = b_14;
  }
  return(t);
}
ATerm d_6 (ATerm e_88 (ATerm), ATerm q_46, ATerm p_46, ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm p_14 = NULL,q_14 = NULL;
    if(match_cons(t, sym__2))
      {
        p_14 = ATgetArgument(t, 0);
        q_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(q_46), p_14, q_14);
    t = e_88(t);
    return(t);
  }
  t = not_null(p_46);
  t = map_1_0(m_1, t);
  return(t);
}
ATerm l_6 (ATerm n_48, ATerm o_48, ATerm t)
{
  t = SSL_access(n_48, o_48);
  return(t);
}
ATerm o_15 (ATerm e_15, ATerm t)
{
  t = SSL_fclose(e_15);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL;
  k_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_15 = ATgetArgument(t, 0);
      {
        ATerm n_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_15);
            ;
            LocalPopChoice(o_19);
          }
        else
          {
            t = n_19;
            t = o_15(k_15, t);
          }
      }
    }
  else
    {
      t = o_15(k_15, t);
    }
  return(t);
}
ATerm e_6 (ATerm z_27, ATerm t)
{
  t = SSL_read_term_from_stream(z_27);
  return(t);
}
ATerm g_6 (ATerm v_48, ATerm w_48, ATerm t)
{
  ATerm r_15 = NULL;
  t = SSL_fopen(v_48, w_48);
  r_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_15);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_15 = NULL;
  t = SSL_stdin_stream();
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_15);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_15 = NULL;
  t = SSL_stdout_stream();
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_15 = NULL;
  t = SSL_stderr_stream();
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_15);
  return(t);
}
ATerm i_17 (ATerm d_16, ATerm t)
{
  ATerm e_16 = NULL;
  t = SSL_explode_term(d_16);
  if(match_cons(t, sym__2))
    {
      ATerm p_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_19 = ATgetArgument(t, 1);
        if(((ATgetType(q_19) == AT_LIST) && !(ATisEmpty(q_19))))
          {
            e_16 = ATgetFirst((ATermList) q_19);
            {
              ATerm r_19 = (ATerm) ATgetNext((ATermList) q_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_16;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_16;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_16;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_16;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm j_17 (ATerm k_16, ATerm l_16, ATerm m_16, ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,s_16 = NULL,e_2 = NULL;
  t = SSLgetAnnotations(m_16);
  p_16 = t;
  t = k_16;
  if(match_cons(t, sym_Path_1))
    {
      s_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_16, l_16);
  e_2 = t;
  t = SSLsetAnnotations(e_2, p_16);
  if(match_cons(t, sym__2))
    {
      n_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(n_16, o_16, t);
  return(t);
}
ATerm k_17 (ATerm u_16, ATerm v_16, ATerm w_16, ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,c_17 = NULL,f_2 = NULL;
  t = SSLgetAnnotations(w_16);
  z_16 = t;
  t = SSL_is_string(u_16);
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_17, v_16);
  f_2 = t;
  t = SSLsetAnnotations(f_2, z_16);
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(x_16, y_16, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,h_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_19 = ATgetArgument(t, 0);
      ATerm t_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  e_17 = t;
  if(match_cons(t, sym__2))
    {
      f_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
      {
        ATerm u_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_17(e_17, t);
            ;
            LocalPopChoice(w_19);
          }
        else
          {
            t = u_19;
            {
              ATerm x_19 = t;
              int z_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_17(f_17, h_17, e_17, t);
                  ;
                  LocalPopChoice(z_19);
                }
              else
                {
                  t = x_19;
                  t = k_17(f_17, h_17, e_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_17(e_17, t);
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,o_17 = NULL;
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_17 = NULL;
      r_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_17, term_e_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
      t = debug_1_0(p_1, t);
      _fail(t);
    }
  m_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(o_17, t);
  l_17 = t;
  t = m_17;
  t = fclose_0_0(t);
  t = l_17;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_f_20;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_17 = NULL,u_17 = NULL;
      t_17 = t;
      t = (ATerm) ATinsert(ATempty, term_j_20);
      u_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_17, (ATerm) ATinsert(ATempty, term_j_20));
      t = l_6(t_17, u_17, t);
      LocalPopChoice(i_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = h_20;
      {
        ATerm k_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_20 = t;
            if((PushChoice() == 0))
              {
                ATerm v_17 = NULL,w_17 = NULL;
                v_17 = t;
                t = (ATerm) ATinsert(ATempty, term_q_8);
                w_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_17, (ATerm) ATinsert(ATempty, term_q_8));
                t = l_6(v_17, w_17, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_20;
              }
            t = debug_1_0(q_1, t);
            ;
            LocalPopChoice(l_20);
          }
        else
          {
            t = k_20;
            t = debug_1_0(s_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,x_18 = NULL;
  u_18 = t;
  t = term_q_15;
  v_18 = t;
  t = (ATerm) ATinsert(ATempty, term_r_20);
  x_18 = t;
  t = SSL_printnl(v_18, x_18);
  t = u_18;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
  if(match_cons(t, sym__3))
    {
      y_18 = ATgetArgument(t, 0);
      z_18 = ATgetArgument(t, 1);
      a_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_6(y_18, z_18, a_19, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  t = term_q_15;
  c_19 = t;
  t = (ATerm) ATinsert(ATempty, term_u_20);
  d_19 = t;
  t = SSL_printnl(c_19, d_19);
  t = b_19;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
  e_19 = t;
  t = term_q_15;
  f_19 = t;
  t = (ATerm) ATinsert(ATempty, term_r_20);
  g_19 = t;
  t = SSL_printnl(f_19, g_19);
  t = e_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,b_18 = NULL,d_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
  y_17 = t;
  t = if_verbose5_1_0(t_1, t);
  {
    ATerm v_20 = t;
    if((PushChoice() == 0))
      {
        ATerm o_18 = NULL,p_18 = NULL;
        t = term_x_20;
        o_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, y_17);
        p_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATmakeAppl(sym_Imported_1, y_17));
        t = s_6(o_18, p_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_20;
      }
    b_18 = t;
    t = term_x_20;
    i_18 = t;
    t = term_b_21;
    j_18 = t;
    t = (ATerm) ATinsert(ATempty, y_17);
    k_18 = t;
    t = SSL_table_put(i_18, j_18, k_18);
    t = b_18;
    t = if_verbose4_1_0(w_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(a_2, t);
    z_17 = t;
    t = term_x_20;
    h_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_20, z_17);
    t = d_6(b_2, h_18, z_17, t);
    t = if_verbose6_1_0(d_2, t);
    t = term_x_20;
    d_18 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, y_17);
    f_18 = t;
    t = (ATerm) ATempty;
    g_18 = t;
    t = SSL_table_put(d_18, f_18, g_18);
    t = (ATerm) ATmakeAppl(sym__3, term_x_20, (ATerm)ATmakeAppl(sym_Imported_1, y_17), (ATerm) ATempty);
    t = if_verbose4_1_0(g_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm v_19 = NULL,y_19 = NULL,b_20 = NULL;
  v_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_19 = ATgetFirst((ATermList) t);
          b_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_5 = NULL,x_6 = NULL,y_6 = NULL,l_2 = NULL;
            t = SSLgetAnnotations(v_19);
            z_5 = t;
            t = y_19;
            t = v_83(t);
            x_6 = t;
            t = b_20;
            t = filter_1_0(v_83, t);
            y_6 = t;
            t = (ATerm) ATinsert(CheckATermList(y_6), x_6);
            l_2 = t;
            t = SSLsetAnnotations(l_2, z_5);
            ;
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
            t = b_20;
            t = filter_1_0(v_83, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm p_85 (ATerm), ATerm t)
{
  ATerm p_20 (ATerm t)
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_85(t);
        t = p_20(t);
        ;
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
      }
    return(t);
  }
  t = p_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm h_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = h_21;
      {
        ATerm n_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_20 = NULL;
            t = term_s_21;
            q_20 = t;
            t = SSL_getenv(q_20);
            ;
            LocalPopChoice(r_21);
          }
        else
          {
            t = n_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_t_21;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  t = term_x_20;
  z_20 = t;
  t = term_u_21;
  a_21 = t;
  t = term_v_21;
  t = s_6(z_20, a_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm w_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_21;
      }
  }
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_20 = NULL;
  t = if_verbose5_1_0(h_2, t);
  s_20 = t;
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_20 = NULL,w_20 = NULL;
        t = term_x_20;
        t_20 = t;
        t = term_b_21;
        w_20 = t;
        t = term_d_22;
        t = s_6(t_20, w_20, t);
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        {
          ATerm y_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          y_20 = t;
          t = repeat_1_0(k_2, t);
          t = y_20;
        }
      }
    t = s_20;
    t = if_verbose5_1_0(m_2, t);
  }
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm h_22 (ATerm g_21, ATerm t)
{
  ATerm i_21 = NULL,k_21 = NULL,l_21 = NULL;
  t = term_x_20;
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, g_21);
  l_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATmakeAppl(sym_Tool_1, g_21));
  t = s_6(k_21, l_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_22 = ATgetFirst((ATermList) t);
      if(match_cons(f_22, sym__2))
        {
          ATerm j_22 = ATgetArgument(f_22, 0);
          i_21 = ATgetArgument(f_22, 1);
        }
      else
        _fail(t);
      {
        ATerm i_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_21;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = debug_1_0(a_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_x_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(f_3, t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
      t = if_verbose5_1_0(p_2, t);
      t = xtc_load_0_0(t);
      if(((q_21 != NULL) && (q_21 != t)))
        _fail(t);
      else
        q_21 = t;
      if(match_cons(t, sym__2))
        {
          o_21 = ATgetArgument(t, 0);
          p_21 = ATgetArgument(t, 1);
          {
            ATerm n_22 = t;
            int o_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
                t = term_x_20;
                if(((y_21 != NULL) && (y_21 != t)))
                  _fail(t);
                else
                  y_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_21));
                if(((z_21 != NULL) && (z_21 != t)))
                  _fail(t);
                else
                  z_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_21)));
                t = s_6(not_null(y_21), not_null(z_21), t);
                {
                  ATerm t_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((p_21 != NULL) && (p_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          p_21 = ATgetArgument(t, 0);
                        if(((x_21 != NULL) && (x_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          x_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(t_2, t);
                  t = not_null(x_21);
                }
                ;
                LocalPopChoice(o_22);
              }
            else
              {
                t = n_22;
                t = h_22(not_null(q_21), t);
              }
          }
        }
      else
        {
          t = h_22(not_null(q_21), t);
        }
      t = if_verbose5_1_0(z_2, t);
      ;
      LocalPopChoice(m_22);
    }
  else
    {
      t = l_22;
      {
        ATerm g_22 = NULL,n_7 = NULL,t_7 = NULL;
        g_22 = t;
        t = term_q_15;
        n_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_22), g_22), term_p_22);
        t_7 = t;
        t = SSL_printnl(n_7, t_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_22), g_22), term_p_22);
        t = if_verbose5_1_0(e_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_r_22;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_r_22;
  return(t);
}
ATerm xtc_sglr_2_0 (ATerm g_100 (ATerm), ATerm h_100 (ATerm), ATerm t)
{
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_22 = NULL,w_22 = NULL;
      w_22 = t;
      if(match_cons(t, sym_FILE_1))
        {
          v_22 = ATgetArgument(t, 0);
          {
            ATerm x_7 = NULL,n_2 = NULL;
            t = SSLgetAnnotations(w_22);
            x_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, v_22);
            n_2 = t;
            t = SSLsetAnnotations(n_2, x_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_22;
        }
      LocalPopChoice(t_22);
      {
        ATerm h_3 (ATerm t)
        {
          ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
          t = term_n_17;
          t = g_100(t);
          t = xtc_find_0_0(t);
          x_22 = t;
          t = term_n_17;
          t = h_100(t);
          y_22 = t;
          t = term_n_17;
          t = pass_v_verbose_0_0(t);
          z_22 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(z_22), y_22), term_e_23), x_22), term_a_23), term_u_22);
          return(t);
        }
        t = xtc_transform_file_2_0(g_3, h_3, t);
      }
    }
  else
    {
      t = s_22;
      {
        ATerm n_3 (ATerm t)
        {
          ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
          t = term_n_17;
          t = g_100(t);
          t = xtc_find_0_0(t);
          b_23 = t;
          t = term_n_17;
          t = h_100(t);
          c_23 = t;
          t = term_n_17;
          t = pass_v_verbose_0_0(t);
          d_23 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(d_23), c_23), term_e_23), b_23), term_a_23), term_u_22);
          return(t);
        }
        t = xtc_transform_term_2_0(k_3, n_3, t);
      }
    }
  return(t);
}
ATerm m_6 (ATerm v_24, ATerm w_24, ATerm t)
{
  t = SSL_copy(v_24, w_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL;
  z_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_8 = NULL;
        t = z_23;
        t = k_0(t);
        o_8 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = o_8;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = o_8;
          }
        t = (ATerm) ATmakeAppl(sym__2, a_24, o_8);
        t = m_6(a_24, o_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_24);
        ;
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        {
          ATerm h_23 = t;
          int i_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_8 = NULL;
              t = z_23;
              t = k_0(t);
              y_8 = t;
              {
                ATerm j_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm d_9 = NULL;
                    d_9 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = d_9;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = d_9;
                          }
                        else
                          {
                            t = d_9;
                            if((a_24 != t))
                              {
                                _fail(t);
                              }
                            t = d_9;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_23;
                  }
                t = (ATerm) ATmakeAppl(sym__2, a_24, y_8);
                t = m_6(a_24, y_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, a_24);
              }
              ;
              LocalPopChoice(i_23);
            }
          else
            {
              t = h_23;
              t = z_23;
              t = k_0(t);
              if((a_24 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_24);
            }
        }
      }
  }
  return(t);
}
ATerm n_6 (ATerm o_45, ATerm p_45, ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL;
  f_24 = t;
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_45, p_45);
        t = s_6(o_45, p_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_23 = ATgetFirst((ATermList) t);
            e_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(l_23);
        t = SSL_table_put(o_45, p_45, e_24);
        t = (ATerm) ATmakeAppl(sym__3, o_45, p_45, e_24);
      }
    else
      {
        t = k_23;
        t = SSL_table_remove(o_45, p_45);
        t = (ATerm) ATmakeAppl(sym__2, o_45, p_45);
      }
    t = f_24;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  ATerm g_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,m_24 = NULL;
  if(((k_24 != NULL) && (k_24 != t)))
    _fail(t);
  else
    k_24 = t;
  t = q_86(t);
  if(((j_24 != NULL) && (j_24 != t)))
    _fail(t);
  else
    j_24 = t;
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_24 = NULL;
        t = term_j_16;
        n_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_24), term_j_16);
        t = s_6(not_null(j_24), n_24, t);
        ;
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_24 != NULL) && (i_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_24 = ATgetFirst((ATermList) t);
        if(((g_24 != NULL) && (g_24 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          g_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_j_16;
    if(((m_24 != NULL) && (m_24 != t)))
      _fail(t);
    else
      m_24 = t;
    t = SSL_table_put(not_null(j_24), not_null(m_24), not_null(g_24));
    t = not_null(i_24);
    {
      ATerm o_3 (ATerm t)
      {
        ATerm o_24 = NULL;
        o_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_24), o_24);
        t = n_6(not_null(j_24), o_24, t);
        return(t);
      }
      t = map_1_0(o_3, t);
      t = not_null(k_24);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_87(t);
      t = m_87(t);
      ;
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      t = m_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_86 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,y_24 = NULL,z_24 = NULL;
  t_24 = t;
  t = p_86(t);
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_24, term_j_16);
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_23 = ATgetArgument(t, 0);
            ATerm u_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_16;
        e_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_24, term_j_16);
        t = s_6(s_24, e_25, t);
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = (ATerm) ATempty;
      }
    u_24 = t;
    t = term_j_16;
    y_24 = t;
    t = (ATerm) ATinsert(CheckATermList(u_24), (ATerm) ATempty);
    z_24 = t;
    t = SSL_table_put(s_24, y_24, z_24);
    t = t_24;
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_x_17;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm v_25 = NULL;
  v_25 = t;
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(v_25);
        ;
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        t = v_25;
      }
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_x_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm i_25 = NULL;
  ATerm q_3 (ATerm t)
  {
    ATerm k_25 = NULL;
    k_25 = t;
    {
      ATerm x_23 = t;
      int y_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_25 = NULL,m_25 = NULL;
          t = term_x_17;
          l_25 = t;
          t = term_j_16;
          m_25 = t;
          t = term_b_24;
          t = s_6(l_25, m_25, t);
          ;
          LocalPopChoice(y_23);
        }
      else
        {
          t = x_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((i_25 != NULL) && (i_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            i_25 = ATgetFirst((ATermList) t);
          {
            ATerm c_24 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(i_25);
      t = map_1_0(s_3, t);
      t = k_25;
      t = end_scope_1_0(t_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(p_3, t);
  t = restore_always_2_0(u_89, q_3, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm d_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_24);
    }
  else
    {
      t = d_24;
      t = term_l_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm v_89 (ATerm), ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm r_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_25 = NULL;
        t = term_c_18;
        t = get_config_0_0(t);
        z_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, z_25);
        ;
        LocalPopChoice(x_24);
      }
    else
      {
        t = r_24;
        t = term_n_8;
      }
    t = v_89(t);
    t = copy_to_1_0(x_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(u_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,d_26 = NULL,e_26 = NULL,h_26 = NULL;
  a_26 = t;
  t = term_n_17;
  t = whoami_0_0(t);
  b_26 = t;
  t = term_q_15;
  e_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_25), b_26), term_a_25);
  h_26 = t;
  t = SSL_printnl(e_26, h_26);
  t = term_m_8;
  d_26 = t;
  t = SSL_exit(d_26);
  t = a_26;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm j_26 = NULL;
  j_26 = t;
  if(match_string(t, "-k"))
    {
      t = j_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_26;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
  k_26 = t;
  t = SSL_string_to_int(k_26);
  l_26 = t;
  t = term_c_25;
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_25, l_26);
  t = v_6(m_26, l_26, t);
  t = k_26;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_3, z_3, b_4, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm p_26 = NULL;
  p_26 = t;
  if(match_string(t, "-S"))
    {
      t = p_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_26;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL;
  t = term_h_8;
  q_26 = t;
  t = term_f_25;
  r_26 = t;
  t = term_g_25;
  t = v_6(q_26, r_26, t);
  t = term_h_25;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_j_25;
  return(t);
}
ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  s_26 = t;
  t = SSL_string_to_int(s_26);
  t_26 = t;
  t = term_h_8;
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_8, t_26);
  t = v_6(u_26, t_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_26);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL;
  t = term_e_23;
  v_26 = t;
  t = term_n_17;
  w_26 = t;
  t = term_o_25;
  t = v_6(v_26, w_26, t);
  t = term_p_25;
  return(t);
}
ATerm u_4 (ATerm t)
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
      t = Option_3_0(d_4, e_4, h_4, t);
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
            t = ArgOption_3_0(j_4, k_4, l_4, t);
            ;
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            t = Option_3_0(p_4, t_4, u_4, t);
          }
      }
    }
  return(t);
}
ATerm v_6 (ATerm j_47, ATerm k_47, ATerm t)
{
  ATerm x_26 = NULL;
  t = term_w_25;
  x_26 = t;
  t = SSL_table_put(x_26, j_47, k_47);
  t = (ATerm) ATmakeAppl(sym__3, term_w_25, j_47, k_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm c_27 = NULL,f_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
      t = term_n_17;
      t = d_0(t);
      g_27 = t;
      t = term_x_25;
      h_27 = t;
      t = term_y_25;
      i_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_25, term_y_25, g_27);
      t = t_6(h_27, i_27, g_27, t);
      _fail(t);
    }
  else
    {
      ATerm r_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_27 = ATgetFirst((ATermList) t);
          f_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_27;
      t = a_0(t);
      t = term_n_17;
      t = c_0(t);
      r_27 = t;
      t = (ATerm) ATinsert(CheckATermList(f_27), r_27);
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm w_27 = NULL;
  w_27 = t;
  if(match_string(t, "-o"))
    {
      t = w_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_27;
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL;
  c_28 = t;
  t = term_a_18;
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_18, c_28);
  t = v_6(d_28, c_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_28);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_4, y_4, z_4, t);
  return(t);
}
ATerm t_6 (ATerm j_45, ATerm k_45, ATerm i_45, ATerm t)
{
  ATerm f_28 = NULL,i_28 = NULL,j_28 = NULL;
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_45, k_45);
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_26 = ATgetArgument(t, 0);
            ATerm n_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_45, k_45);
        t = s_6(j_45, k_45, t);
        ;
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        t = (ATerm) ATempty;
      }
    i_28 = t;
    t = (ATerm) ATinsert(CheckATermList(i_28), i_45);
    j_28 = t;
    t = SSL_table_put(j_45, k_45, j_28);
    t = f_28;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
      t = term_n_17;
      t = j_0(t);
      a_29 = t;
      t = term_x_25;
      b_29 = t;
      t = term_y_25;
      c_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_25, term_y_25, a_29);
      t = t_6(b_29, c_29, a_29, t);
      _fail(t);
    }
  else
    {
      ATerm g_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_28 = ATgetFirst((ATermList) t);
          x_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_28 = ATgetFirst((ATermList) t);
          z_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_28;
      t = h_0(t);
      t = y_28;
      t = i_0(t);
      g_29 = t;
      t = (ATerm) ATinsert(CheckATermList(z_28), g_29);
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm i_29 = NULL;
  i_29 = t;
  if(match_string(t, "-i"))
    {
      t = i_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_29;
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL;
  j_29 = t;
  t = term_c_18;
  k_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_18, j_29);
  t = v_6(k_29, j_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_29);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_o_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, b_5, c_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_17;
  t = whoami_0_0(t);
  q_29 = t;
  t = term_q_15;
  s_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_26), q_29);
  t_29 = t;
  t = SSL_printnl(s_29, t_29);
  t = term_m_8;
  r_29 = t;
  t = SSL_exit(r_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm o_6 (ATerm e_43, ATerm f_43, ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_43, f_43);
      ;
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      t = SSL_addr(e_43, f_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm t)
{
  ATerm v_29 = NULL,x_29 = NULL,y_29 = NULL;
  v_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_29;
      t = s_82(t);
    }
  else
    {
      ATerm b_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_29 = ATgetFirst((ATermList) t);
          y_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_29;
      t = foldr_2_0(s_82, t_82, t);
      b_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_29, b_30);
      t = t_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_f_25;
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL;
  if(match_cons(t, sym__2))
    {
      p_9 = ATgetArgument(t, 0);
      q_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(p_9, q_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_30 = NULL,l_9 = NULL,m_9 = NULL;
  t = times_0_0(t);
  m_9 = t;
  t = SSL_explode_term(m_9);
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9;
  t = foldr_2_0(e_5, g_5, t);
  g_30 = t;
  t = SSL_TicksToSeconds(g_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  if(match_cons(t, sym__2))
    {
      u_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_30;
        if((u_30 != t))
          {
            _fail(t);
          }
        t = t_30;
        ;
        LocalPopChoice(j_27);
      }
    else
      {
        t = e_27;
        t = (ATerm) ATmakeAppl(sym__2, u_30, v_30);
        {
          ATerm k_27 = t;
          int l_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_30, v_30);
              ;
              LocalPopChoice(l_27);
            }
          else
            {
              t = k_27;
              t = SSL_gtr(u_30, v_30);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_30, v_30);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm z_30 = NULL;
  z_30 = t;
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_31 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        b_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_31, term_m_8);
        t = geq_0_0(t);
        t = z_30;
        t = x_87(t);
        ;
        LocalPopChoice(n_27);
      }
    else
      {
        t = m_27;
        t = z_30;
      }
  }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,g_31 = NULL,h_31 = NULL;
  t = run_time_0_0(t);
  d_31 = t;
  t = term_n_17;
  t = whoami_0_0(t);
  e_31 = t;
  t = term_q_15;
  g_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_27), d_31), term_x_8), e_31);
  h_31 = t;
  t = SSL_printnl(g_31, h_31);
  t = (ATerm) ATmakeAppl(sym__2, term_q_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_27), d_31), term_x_8), e_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_25;
  i_31 = t;
  t = SSL_exit(i_31);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL;
  r_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_31 = ATgetArgument(t, 0);
          {
            ATerm p_10 = NULL,s_2 = NULL;
            t = SSLgetAnnotations(r_31);
            p_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_31);
            s_2 = t;
            t = SSLsetAnnotations(s_2, p_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      t = fetch_1_0(j_5, t);
    }
  t = w_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_31 = ATgetFirst((ATermList) t);
      v_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_31 = NULL,a_32 = NULL;
        ATerm l_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_31)), not_null(a_32));
          return(t);
        }
        t = not_null(v_31);
        t = g_0(t);
        if(((z_31 != NULL) && (z_31 != t)))
          _fail(t);
        else
          z_31 = t;
        t = not_null(u_31);
        t = e_0(t);
        if(((a_32 != NULL) && (a_32 != t)))
          _fail(t);
        else
          a_32 = t;
        t = not_null(v_31);
        t = reverse_acc_2_0(e_0, l_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_17;
      t = g_0(t);
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,u_2 = NULL;
  g_32 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_32);
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_32);
  u_2 = t;
  t = SSLsetAnnotations(u_2, e_32);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm i_32 = NULL;
  i_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_32), term_v_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL;
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      t = fetch_1_0(p_5, t);
    }
  t = term_a_28;
  t = echo_0_0(t);
  t = term_x_25;
  c_32 = t;
  t = term_y_25;
  d_32 = t;
  t = term_e_28;
  t = s_6(c_32, d_32, t);
  t = reverse_acc_2_0(_id, q_5, t);
  t = map_1_0(r_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm f_33 (ATerm t)
  {
    ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
    c_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_33 = ATgetFirst((ATermList) t);
        e_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_28 = t;
      int h_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_10 = NULL,h_11 = NULL,b_3 = NULL;
          t = SSLgetAnnotations(c_33);
          z_10 = t;
          t = d_33;
          t = k_76(t);
          h_11 = t;
          t = (ATerm) ATinsert(CheckATermList(e_33), h_11);
          b_3 = t;
          t = SSLsetAnnotations(b_3, z_10);
          ;
          LocalPopChoice(h_28);
        }
      else
        {
          t = g_28;
          {
            ATerm s_11 = NULL,z_11 = NULL,m_3 = NULL;
            t = SSLgetAnnotations(c_33);
            s_11 = t;
            t = e_33;
            t = f_33(t);
            z_11 = t;
            t = (ATerm) ATinsert(CheckATermList(z_11), d_33);
            m_3 = t;
            t = SSLsetAnnotations(m_3, s_11);
          }
        }
    }
    return(t);
  }
  t = f_33(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
  j_33 = t;
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_33;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_28 = ATgetFirst((ATermList) t);
                ATerm n_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_33;
          }
        ;
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        t = (ATerm) ATinsert(ATempty, j_33);
      }
    k_33 = t;
    t = term_l_24;
    l_33 = t;
    t = SSL_printnl(l_33, k_33);
    t = j_33;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm r_6 (ATerm a_42, ATerm b_42, ATerm t)
{
  t = SSL_strcat(a_42, b_42);
  return(t);
}
ATerm debug_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
  p_33 = t;
  t = f_72(t);
  q_33 = t;
  t = term_q_15;
  r_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_33), q_33);
  s_33 = t;
  t = SSL_printnl(r_33, s_33);
  t = p_33;
  return(t);
}
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm t)
{
  ATerm h_34 (ATerm t)
  {
    ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
    e_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_34;
      }
    else
      {
        ATerm p_12 = NULL,s_12 = NULL,u_12 = NULL,r_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_34 = ATgetFirst((ATermList) t);
            g_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_34);
        p_12 = t;
        t = f_34;
        t = a_76(t);
        s_12 = t;
        t = g_34;
        t = h_34(t);
        u_12 = t;
        t = (ATerm) ATinsert(CheckATermList(u_12), s_12);
        r_3 = t;
        t = SSLsetAnnotations(r_3, p_12);
      }
    return(t);
  }
  t = h_34(t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_q_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_34 = NULL;
      p_34 = t;
      t = SSL_is_string(p_34);
      ;
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      {
        ATerm t_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_5, t);
            ;
            LocalPopChoice(u_28);
          }
        else
          {
            t = t_28;
            {
              ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
              b_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_35 = ATgetArgument(t, 0);
                  t = c_35;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_35 = ATgetArgument(t, 0);
                      t = c_35;
                      {
                        ATerm v_28 = t;
                        int d_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(d_29);
                          }
                        else
                          {
                            t = v_28;
                            t = debug_1_0(t_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_35 = NULL,i_35 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_35 = ATgetArgument(t, 0);
                          d_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_35;
                      t = eval_config_0_0(t);
                      h_35 = t;
                      t = d_35;
                      t = eval_config_0_0(t);
                      i_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
                      t = r_6(h_35, i_35, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm s_6 (ATerm a_47, ATerm b_47, ATerm t)
{
  t = SSL_table_get(a_47, b_47);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL;
  m_35 = t;
  t = term_w_25;
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_25, m_35);
  t = s_6(n_35, m_35, t);
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_35 = NULL,p_35 = NULL;
        t = eval_config_0_0(t);
        o_35 = t;
        t = term_w_25;
        p_35 = t;
        t = SSL_table_put(p_35, m_35, o_35);
        t = o_35;
        ;
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
      }
  }
  return(t);
}
ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL;
  t = term_h_29;
  s_35 = t;
  t = term_n_17;
  t_35 = t;
  t = term_l_29;
  t = v_6(s_35, t_35, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL;
  t = term_h_29;
  w_35 = t;
  t = term_n_17;
  x_35 = t;
  t = term_l_29;
  t = v_6(w_35, x_35, t);
  t = term_m_18;
  u_35 = t;
  t = term_n_17;
  v_35 = t;
  t = term_n_29;
  t = v_6(u_35, v_35, t);
  t = term_o_29;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_p_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, v_5, w_5, t);
      ;
      LocalPopChoice(w_29);
    }
  else
    {
      t = u_29;
      t = Option_3_0(x_5, j_6, p_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,c_4 = NULL;
  f_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_35 = ATgetFirst((ATermList) t);
      a_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_36);
  y_35 = t;
  t = z_35;
  t = s_63(t);
  d_36 = t;
  t = a_36;
  t = t_63(t);
  e_36 = t;
  t = (ATerm) ATinsert(CheckATermList(e_36), d_36);
  c_4 = t;
  t = SSLsetAnnotations(c_4, y_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,p_36 = NULL,q_36 = NULL,d_5 = NULL;
  if(((k_36 != NULL) && (k_36 != t)))
    _fail(t);
  else
    k_36 = t;
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_30;
        t = u_93(t);
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
      }
    t = not_null(k_36);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((m_36 != NULL) && (m_36 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          m_36 = ATgetFirst((ATermList) t);
        if(((n_36 != NULL) && (n_36 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          n_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(k_36));
    if(((l_36 != NULL) && (l_36 != t)))
      _fail(t);
    else
      l_36 = t;
    t = term_z_26;
    if(((q_36 != NULL) && (q_36 != t)))
      _fail(t);
    else
      q_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_26, not_null(m_36));
    t = v_6(not_null(q_36), not_null(m_36), t);
    t = not_null(n_36);
    {
      ATerm a_37 (ATerm t)
      {
        ATerm d_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_30 = t;
            int h_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_36 = NULL;
                t_36 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_36;
                ;
                LocalPopChoice(h_30);
              }
            else
              {
                t = f_30;
                t = u_93(t);
                t = Cons_2_0(_id, a_37, t);
              }
            ;
            LocalPopChoice(e_30);
          }
        else
          {
            t = d_30;
            {
              ATerm w_36 = NULL,x_36 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_36 = ATgetFirst((ATermList) t);
                  x_36 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_36), (ATerm) ATmakeAppl(sym_Undefined_1, w_36));
            }
          }
        return(t);
      }
      t = a_37(t);
      if(((p_36 != NULL) && (p_36 != t)))
        _fail(t);
      else
        p_36 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(p_36)), (ATerm) ATmakeAppl(sym_Program_1, not_null(m_36)));
      if(((d_5 != NULL) && (d_5 != t)))
        _fail(t);
      else
        d_5 = t;
      t = SSLsetAnnotations(not_null(d_5), not_null(l_36));
    }
  }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm m_37 = NULL;
  m_37 = t;
  if(match_string(t, "--help"))
    {
      t = m_37;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_37;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_37;
        }
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL;
  t = term_s_27;
  n_37 = t;
  t = term_n_17;
  o_37 = t;
  t = term_i_30;
  t = v_6(n_37, o_37, t);
  t = term_j_30;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm e_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
  if(((h_37 != NULL) && (h_37 != t)))
    _fail(t);
  else
    h_37 = t;
  t = term_x_25;
  if(((j_37 != NULL) && (j_37 != t)))
    _fail(t);
  else
    j_37 = t;
  t = term_y_25;
  if(((k_37 != NULL) && (k_37 != t)))
    _fail(t);
  else
    k_37 = t;
  t = (ATerm) ATempty;
  if(((l_37 != NULL) && (l_37 != t)))
    _fail(t);
  else
    l_37 = t;
  t = SSL_table_put(not_null(j_37), not_null(k_37), not_null(l_37));
  t = not_null(h_37);
  {
    ATerm w_6 (ATerm t)
    {
      ATerm l_30 = t;
      int m_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_93(t);
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
                t = Option_3_0(b_7, c_7, d_7, t);
                ;
                LocalPopChoice(o_30);
              }
            else
              {
                t = n_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_6, t);
    {
      ATerm p_30 = t;
      int q_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_37 = NULL;
          v_37 = t;
          {
            ATerm r_30 = t;
            int s_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_13 = NULL;
                t = v_37;
                {
                  ATerm w_30 = t;
                  int x_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_s_27;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(x_30);
                    }
                  else
                    {
                      t = w_30;
                      t = fetch_1_0(e_7, t);
                    }
                  t = v_37;
                  t = default_system_usage_0_0(t);
                  t = term_f_25;
                  v_13 = t;
                  t = SSL_exit(v_13);
                }
                ;
                LocalPopChoice(s_30);
              }
            else
              {
                t = r_30;
                {
                  ATerm e_14 = NULL;
                  t = term_h_29;
                  t = get_config_0_0(t);
                  t = v_37;
                  t = default_system_about_0_0(t);
                  t = term_f_25;
                  e_14 = t;
                  t = SSL_exit(e_14);
                }
              }
          }
          ;
          LocalPopChoice(q_30);
        }
      else
        {
          t = p_30;
          {
            ATerm y_30 = t;
            int a_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
                ATerm g_7 (ATerm t)
                {
                  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,f_5 = NULL;
                  b_38 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      a_38 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_38);
                  z_37 = t;
                  t = a_38;
                  if(((f_37 != NULL) && (f_37 != t)))
                    _fail(t);
                  else
                    f_37 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, a_38);
                  f_5 = t;
                  t = SSLsetAnnotations(f_5, z_37);
                  return(t);
                }
                t = fetch_1_0(g_7, t);
                t = term_q_15;
                if(((x_37 != NULL) && (x_37 != t)))
                  _fail(t);
                else
                  x_37 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_37)), term_c_31);
                if(((y_37 != NULL) && (y_37 != t)))
                  _fail(t);
                else
                  y_37 = t;
                t = SSL_printnl(not_null(x_37), not_null(y_37));
                t = (ATerm) ATmakeAppl(sym__2, term_q_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_37)), term_c_31));
                t = default_system_usage_0_0(t);
                t = term_m_8;
                if(((w_37 != NULL) && (w_37 != t)))
                  _fail(t);
                else
                  w_37 = t;
                t = SSL_exit(not_null(w_37));
                ;
                LocalPopChoice(a_31);
              }
            else
              {
                t = y_30;
              }
          }
        }
      if(((g_37 != NULL) && (g_37 != t)))
        _fail(t);
      else
        g_37 = t;
      t = term_x_25;
      if(((i_37 != NULL) && (i_37 != t)))
        _fail(t);
      else
        i_37 = t;
      t = SSL_table_destroy(not_null(i_37));
      t = not_null(g_37);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL;
  t = parse_options_1_0(y_91, t);
  g_38 = t;
  t = term_f_31;
  j_38 = t;
  t = SSL_table_create(j_38);
  t = term_f_31;
  h_38 = t;
  t = term_j_31;
  i_38 = t;
  t = SSL_table_put(h_38, i_38, g_38);
  t = g_38;
  t = a_92(t);
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_91, t);
        ;
        LocalPopChoice(l_31);
      }
    else
      {
        t = k_31;
        {
          ATerm m_31 = t;
          int n_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_31);
            }
          else
            {
              t = m_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      {
        ATerm s_31 = t;
        int t_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(t_31);
          }
        else
          {
            t = s_31;
            {
              ATerm w_31 = t;
              int x_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(l_7, u_7, v_7, t);
                  ;
                  LocalPopChoice(x_31);
                }
              else
                {
                  t = w_31;
                  {
                    ATerm y_31 = t;
                    int b_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(b_32);
                      }
                    else
                      {
                        t = y_31;
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
ATerm k_7 (ATerm t)
{
  t = xtc_io_1_0(w_7, t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL;
  t = term_h_32;
  n_38 = t;
  t = term_n_17;
  o_38 = t;
  t = term_j_32;
  t = v_6(n_38, o_38, t);
  t = term_k_32;
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_l_32;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = xtc_sglr_2_0(y_7, a_8, t);
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_38 = NULL,w_38 = NULL;
        w_38 = t;
        if(match_cons(t, sym_FILE_1))
          {
            v_38 = ATgetArgument(t, 0);
            {
              ATerm m_14 = NULL,h_5 = NULL;
              t = SSLgetAnnotations(w_38);
              m_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_38);
              h_5 = t;
              t = SSLsetAnnotations(h_5, m_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_38;
          }
        LocalPopChoice(n_32);
        t = xtc_transform_file_2_0(e_8, pass_verbose_0_0, t);
      }
    else
      {
        t = m_32;
        t = xtc_transform_term_2_0(f_8, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_o_32;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(h_7, default_usage_0_0, _id, k_7, t);
  return(t);
}
