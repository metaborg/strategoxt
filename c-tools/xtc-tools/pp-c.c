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
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_s_33;
ATerm term_o_33;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_y_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_a_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_b_29;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_o_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_f_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_p_25;
ATerm term_c_25;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_r_24;
ATerm term_n_24;
ATerm term_g_24;
ATerm term_c_24;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_m_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_o_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_f_20;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_z_16;
ATerm term_r_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
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
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_a_9;
ATerm term_t_8;
void init_constant_terms (void)
{
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_a_9, term_v_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_9, term_z_9, term_b_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_10, term_g_10, term_i_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_n_10, term_o_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_10, term_x_10, term_y_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_c_11, term_d_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_g_11, term_h_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_o_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_11, term_s_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_v_11, term_w_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_12, term_b_12, term_c_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_h_12, term_i_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_n_12, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_v_12, term_w_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_z_12, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_e_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_13, term_h_13, term_i_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_u_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_a_14, term_b_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_g_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_j_14, term_k_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_n_14, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_t_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_z_14, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_h_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_r_15, term_y_15);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_u_21);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_h_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_z_16);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym__2, term_t_8, term_c_25);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_25);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym__2, term_j_26, term_k_17);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym__2, term_s_26, term_t_26);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_m_29, term_k_17);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym__2, term_p_29, term_k_17);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__2, term_d_28, term_k_17);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_e_32, term_k_17);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm f_6 (ATerm r_38, ATerm s_38, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm p_6 (ATerm t_27, ATerm u_27, ATerm);
ATerm r_6 (ATerm h_72 (ATerm), ATerm l_180, ATerm b_28, ATerm);
ATerm q_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm);
ATerm s_6 (ATerm p_24, ATerm q_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm w_70 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm e_88 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm i_7 (ATerm w_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm u_6 (ATerm p_84 (ATerm), ATerm z_39, ATerm x_39, ATerm);
ATerm x_8 (ATerm g_8, ATerm);
ATerm z_8 (ATerm i_8, ATerm j_8, ATerm k_8, ATerm);
ATerm z_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm a_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm g_6 (ATerm h_29, ATerm i_29, ATerm);
ATerm at_last_1_0 (ATerm b_77 (ATerm), ATerm);
ATerm i_6 (ATerm j_76 (ATerm), ATerm v_29, ATerm y_211, ATerm);
ATerm at_suffix_1_0 (ATerm u_76 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm n_76 (ATerm), ATerm);
ATerm list_tokenize_1_0 (ATerm p_99 (ATerm), ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm string_tokenize_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm remove_extension_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_85 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_85 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_85 (ATerm), ATerm);
ATerm k_6 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm w_34, ATerm v_34, ATerm);
ATerm l_6 (ATerm e_80 (ATerm), ATerm s_34, ATerm r_34, ATerm);
ATerm t_1 (ATerm);
ATerm m_6 (ATerm n_41, ATerm o_41, ATerm p_41, ATerm);
ATerm n_6 (ATerm a_86 (ATerm), ATerm x_41, ATerm w_41, ATerm);
ATerm v_6 (ATerm u_43, ATerm v_43, ATerm);
ATerm e_22 (ATerm q_21, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm o_6 (ATerm z_27, ATerm);
ATerm q_6 (ATerm c_44, ATerm d_44, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_24 (ATerm r_22, ATerm);
ATerm s_24 (ATerm b_23, ATerm f_23, ATerm j_23, ATerm);
ATerm t_24 (ATerm t_23, ATerm w_23, ATerm x_23, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm j_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm w_91 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm y_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm f_3 (ATerm);
ATerm s_29 (ATerm g_28, ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm w_6 (ATerm v_24, ATerm w_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm x_6 (ATerm v_40, ATerm w_40, ATerm);
ATerm end_scope_1_0 (ATerm m_84 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_84 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_87 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm xtc_io_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm d_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm m_4 (ATerm);
ATerm p_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm w_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm f_7 (ATerm q_42, ATerm r_42, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_7 (ATerm q_40, ATerm r_40, ATerm p_40, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm j_5 (ATerm);
ATerm n_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm y_6 (ATerm l_38, ATerm m_38, ATerm);
ATerm foldr_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_85 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm s_5 (ATerm);
ATerm need_help_1_0 (ATerm s_89 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm b_7 (ATerm w_58, ATerm x_58, ATerm);
ATerm debug_1_0 (ATerm f_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm c_7 (ATerm h_42, ATerm i_42, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm j_6 (ATerm);
ATerm t_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm e_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_91 (ATerm), ATerm);
ATerm h_7 (ATerm);
ATerm l_7 (ATerm);
ATerm n_7 (ATerm);
ATerm p_7 (ATerm);
ATerm parse_options_1_0 (ATerm p_91 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm a_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm f_8 (ATerm);
ATerm h_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm io_pp_c_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm f_6 (ATerm r_38, ATerm s_38, ATerm t)
{
  ATerm v_4 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(r_38, s_38);
      ;
      LocalPopChoice(s_8);
    }
  else
    {
      t = v_4;
      t = SSL_subtr(r_38, s_38);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,o_0 = NULL,p_0 = NULL;
  t = term_t_8;
  {
    ATerm u_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(y_8);
      }
    else
      {
        t = u_8;
        t = term_a_9;
      }
    f_0 = t;
    t = term_a_9;
    p_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_0, term_a_9);
    t = f_6(f_0, p_0, t);
    o_0 = t;
    t = SSL_int_to_string(o_0);
    b_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, b_0), term_t_8);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm y_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_e_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm e_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_f_9);
      e_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_0, (ATerm) ATinsert(ATempty, term_f_9));
      t = v_6(y_0, e_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm p_6 (ATerm t_27, ATerm u_27, ATerm t)
{
  ATerm g_1 = NULL;
  t = SSL_write_term_to_stream_baf(t_27, u_27);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_1);
  return(t);
}
ATerm r_6 (ATerm h_72 (ATerm), ATerm l_180, ATerm b_28, ATerm t)
{
  ATerm k_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_180, term_g_9);
  t = open_stream_0_0(t);
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_1, b_28);
  t = h_72(t);
  t = fclose_0_0(t);
  t = b_28;
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_9 = ATgetArgument(t, 0);
      if(match_cons(i_9, sym_Stream_1))
        {
          o_1 = ATgetArgument(i_9, 0);
        }
      else
        _fail(t);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(o_1, p_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL;
  m_1 = t;
  t = xtc_new_file_0_0(t);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_1, m_1);
  t = r_6(q_0, n_1, m_1, t);
  t = SSL_close_file(n_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_88, o_88, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm s_6 (ATerm p_24, ATerm q_24, ATerm t)
{
  t = SSL_execvp(p_24, q_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL;
  w_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_2 = ATgetArgument(t, 0);
      {
        ATerm t_0 = NULL,v_0 = NULL;
        t = SSL_int_to_string(x_2);
        t_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_9), t_0), term_k_9);
        v_0 = t;
        t = SSL_concat_strings(v_0);
      }
    }
  else
    {
      ATerm j_1 = NULL,l_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_2 = ATgetArgument(t, 0);
          z_2 = ATgetArgument(t, 1);
          a_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(z_2);
      j_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_n_9), j_1), term_m_9), x_2);
      l_1 = t;
      t = SSL_concat_strings(l_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm d_3 = NULL;
  ATerm r_0 (ATerm t)
  {
    t = m_76(t);
    if(((d_3 != NULL) && (d_3 != t)))
      _fail(t);
    else
      d_3 = t;
    return(t);
  }
  t = fetch_1_0(r_0, t);
  t = not_null(d_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm e_3 = NULL;
  if(((e_3 != NULL) && (e_3 != t)))
    _fail(t);
  else
    e_3 = t;
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm q_9 = ATgetArgument(t, 0);
              if(((e_3 != NULL) && (e_3 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                e_3 = ATgetArgument(t, 1);
              {
                ATerm t_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_15), term_j_15), term_d_15), term_u_14), term_p_14), term_l_14), term_h_14), term_d_14), term_w_13), term_o_13), term_k_13), term_f_13), term_b_13), term_x_12), term_t_12), term_p_12), term_j_12), term_d_12), term_x_11), term_t_11), term_p_11), term_l_11), term_e_11), term_z_10), term_p_10), term_k_10), term_e_10), term_w_9);
        t = fetch_elem_1_0(s_0, t);
        ;
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(e_3));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm i_3 = NULL,u_3 = NULL;
  i_3 = t;
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm c_16 = ATgetArgument(t, 0);
            u_3 = ATgetArgument(t, 1);
            {
              ATerm d_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_16);
        {
          ATerm f_16 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_1 = NULL,x_1 = NULL,y_1 = NULL;
              t = u_3;
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
                v_1 = t;
                t = term_i_16;
                x_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, v_1), term_j_16);
                y_1 = t;
                t = SSL_printnl(x_1, y_1);
                t = (ATerm) ATmakeAppl(sym__2, term_i_16, (ATerm) ATinsert(ATinsert(ATempty, v_1), term_j_16));
              }
              ;
              LocalPopChoice(g_16);
            }
          else
            {
              t = f_16;
              t = i_3;
            }
        }
      }
    else
      {
        t = a_16;
        t = i_3;
      }
    t = i_3;
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
  ATerm e_4 = NULL,f_4 = NULL;
  f_4 = t;
  t = fork_0_0(t);
  e_4 = t;
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = f_4;
        t = w_70(t);
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        t = SSL_waitpid(e_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_16 = ATgetArgument(t, 0);
            if(((ATgetType(m_16) != AT_INT) || (ATgetInt((ATermInt) m_16) != 0)))
              _fail(t);
            {
              ATerm n_16 = ATgetArgument(t, 1);
            }
            {
              ATerm o_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,k_4 = NULL;
  if(((k_4 != NULL) && (k_4 != t)))
    _fail(t);
  else
    k_4 = t;
  t = e_88(t);
  t = xtc_find_0_0(t);
  if(((i_4 != NULL) && (i_4 != t)))
    _fail(t);
  else
    i_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_4), not_null(k_4));
  {
    ATerm u_0 (ATerm t)
    {
      ATerm l_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_4), not_null(k_4));
      t = s_6(not_null(i_4), not_null(k_4), t);
      t = term_r_16;
      l_4 = t;
      t = SSL_exit(l_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
    t = not_null(k_4);
  }
  return(t);
}
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL;
    m_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_5 = ATgetFirst((ATermList) t);
        l_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_2 = NULL,q_2 = NULL,n_0 = NULL;
          t = SSLgetAnnotations(m_5);
          f_2 = t;
          t = l_5;
          t = p_5(t);
          q_2 = t;
          t = (ATerm) ATinsert(CheckATermList(q_2), k_5);
          n_0 = t;
          t = SSLsetAnnotations(n_0, f_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_5;
        t = q_76(t);
      }
    return(t);
  }
  t = p_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,r_4 = NULL;
  n_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_4;
    }
  else
    {
      ATerm w_0 (ATerm t)
      {
        t = not_null(r_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((o_4 != NULL) && (o_4 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            o_4 = ATgetFirst((ATermList) t);
          if(((r_4 != NULL) && (r_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(o_4);
      t = at_end_1_0(w_0, t);
    }
  return(t);
}
ATerm i_7 (ATerm w_5, ATerm t)
{
  ATerm z_5 = NULL;
  t = SSL_explode_term(w_5);
  if(match_cons(t, sym__2))
    {
      ATerm s_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_6 = NULL,e_6 = NULL,h_6 = NULL;
  if(((h_6 != NULL) && (h_6 != t)))
    _fail(t);
  else
    h_6 = t;
  if(match_cons(t, sym__2))
    {
      c_6 = ATgetArgument(t, 0);
      e_6 = ATgetArgument(t, 1);
      {
        ATerm t_16 = t;
        int u_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              t = not_null(e_6);
              return(t);
            }
            t = not_null(c_6);
            t = at_end_1_0(x_0, t);
            ;
            LocalPopChoice(u_16);
          }
        else
          {
            t = t_16;
            t = i_7(not_null(h_6), t);
          }
      }
    }
  else
    {
      t = i_7(not_null(h_6), t);
    }
  return(t);
}
ATerm u_6 (ATerm p_84 (ATerm), ATerm z_39, ATerm x_39, ATerm t)
{
  ATerm j_7 = NULL,m_7 = NULL,r_7 = NULL,u_7 = NULL,x_7 = NULL,y_7 = NULL;
  u_7 = t;
  t = p_84(t);
  j_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_7, z_39, x_39);
  t = d_7(j_7, z_39, x_39, t);
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_7 = NULL;
        t = term_z_16;
        z_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_7, term_z_16);
        t = c_7(j_7, z_7, t);
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
        m_7 = ATgetFirst((ATermList) t);
        r_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_z_16;
    x_7 = t;
    t = (ATerm) ATinsert(CheckATermList(r_7), (ATerm) ATinsert(CheckATermList(m_7), z_39));
    y_7 = t;
    t = SSL_table_put(j_7, x_7, y_7);
    t = u_7;
  }
  return(t);
}
ATerm x_8 (ATerm g_8, ATerm t)
{
  t = g_8;
  {
    ATerm a_17 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_17 = ATgetArgument(t, 0);
            ATerm c_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_17;
      }
    t = term_d_17;
    t = debug_1_0(z_0, t);
    t = (ATerm) ATmakeAppl(sym__2, g_8, term_g_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm z_8 (ATerm i_8, ATerm j_8, ATerm k_8, ATerm t)
{
  t = SSL_open_file(i_8, j_8);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,w_8 = NULL;
  q_8 = t;
  if(match_cons(t, sym__2))
    {
      r_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
      {
        ATerm f_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_8(q_8, t);
            ;
            LocalPopChoice(g_17);
          }
        else
          {
            t = f_17;
            t = z_8(r_8, w_8, q_8, t);
          }
      }
    }
  else
    {
      t = x_8(q_8, t);
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
  ATerm c_9 = NULL,d_9 = NULL,h_9 = NULL;
  t = term_k_17;
  t = new_0_0(t);
  c_9 = t;
  t = term_l_17;
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_9, term_l_17);
  t = b_7(c_9, d_9, t);
  h_9 = t;
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_f_9);
        j_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_9, (ATerm) ATinsert(ATempty, term_f_9));
        t = v_6(h_9, j_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        t = h_9;
      }
  }
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL;
  t = new_file_0_0(t);
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_9, term_g_9);
  t = open_file_0_0(t);
  t = term_k_17;
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_9, term_k_17);
  t = u_6(a_1, r_9, s_9, t);
  t = r_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL;
  t_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_3 = NULL,n_3 = NULL;
      t = t_10;
      t = xtc_new_file_0_0(t);
      l_3 = t;
      t = m_0(t);
      n_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_3, (ATerm) ATinsert(ATinsert(ATempty, l_3), term_w_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(l_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_3);
    }
  else
    {
      ATerm a_4 = NULL,c_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_10;
      t = xtc_new_file_0_0(t);
      a_4 = t;
      t = m_0(t);
      c_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_4), term_w_17), u_10), term_y_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(a_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_4);
    }
  return(t);
}
ATerm g_6 (ATerm h_29, ATerm i_29, ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL;
  t = i_29;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_29;
    }
  else
    {
      ATerm q_4 = NULL,x_4 = NULL,b_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((y_11 != NULL) && (y_11 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            y_11 = ATgetFirst((ATermList) t);
          if(((z_11 != NULL) && (z_11 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(not_null(i_29));
      if(((q_4 != NULL) && (q_4 != t)))
        _fail(t);
      else
        q_4 = t;
      t = not_null(z_11);
      {
        ATerm i_5 (ATerm t)
        {
          ATerm z_17 = t;
          int a_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_5 = NULL;
              a_5 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_5;
              ;
              LocalPopChoice(a_18);
            }
          else
            {
              t = z_17;
              {
                ATerm b_5 = NULL;
                t = Cons_2_0(_id, i_5, t);
                b_5 = t;
                t = (ATerm) ATinsert(CheckATermList(b_5), not_null(h_29));
              }
            }
          return(t);
        }
        t = i_5(t);
        if(((x_4 != NULL) && (x_4 != t)))
          _fail(t);
        else
          x_4 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(x_4)), not_null(y_11));
        if(((b_2 != NULL) && (b_2 != t)))
          _fail(t);
        else
          b_2 = t;
        t = SSLsetAnnotations(not_null(b_2), not_null(q_4));
      }
    }
  return(t);
}
ATerm at_last_1_0 (ATerm b_77 (ATerm), ATerm t)
{
  ATerm t_13 (ATerm t)
  {
    ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL;
    q_13 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_13 = ATgetFirst((ATermList) t);
        s_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_18 = t;
      int f_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_5 = NULL,i_2 = NULL;
          t = SSLgetAnnotations(q_13);
          v_5 = t;
          t = s_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(s_13), r_13);
          i_2 = t;
          t = SSLsetAnnotations(i_2, v_5);
          t = b_77(t);
          ;
          LocalPopChoice(f_18);
        }
      else
        {
          t = e_18;
          {
            ATerm k_7 = NULL,o_7 = NULL,k_2 = NULL;
            t = SSLgetAnnotations(q_13);
            k_7 = t;
            t = s_13;
            t = t_13(t);
            o_7 = t;
            t = (ATerm) ATinsert(CheckATermList(o_7), r_13);
            k_2 = t;
            t = SSLsetAnnotations(k_2, k_7);
          }
        }
    }
    return(t);
  }
  t = t_13(t);
  return(t);
}
ATerm i_6 (ATerm j_76 (ATerm), ATerm v_29, ATerm y_211, ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm y_13 = NULL;
    y_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_29), y_13);
    t = j_76(t);
    t = y_13;
    return(t);
  }
  t = not_null(y_211);
  t = SRTS_one(b_1, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm u_76 (ATerm), ATerm t)
{
  ATerm b_15 (ATerm t)
  {
    ATerm g_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_76(t);
        ;
        LocalPopChoice(i_18);
      }
    else
      {
        t = g_18;
        {
          ATerm x_14 = NULL,y_14 = NULL,a_15 = NULL,b_8 = NULL,e_8 = NULL,n_2 = NULL;
          x_14 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_14 = ATgetFirst((ATermList) t);
              a_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_14);
          b_8 = t;
          t = a_15;
          t = b_15(t);
          e_8 = t;
          t = (ATerm) ATinsert(CheckATermList(e_8), y_14);
          n_2 = t;
          t = SSLsetAnnotations(n_2, b_8);
        }
      }
    return(t);
  }
  t = b_15(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm n_76 (ATerm), ATerm t)
{
  ATerm g_15 = NULL,i_15 = NULL;
  ATerm c_1 (ATerm t)
  {
    ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,w_15 = NULL,s_2 = NULL,p_2 = NULL;
    w_15 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_15 = ATgetFirst((ATermList) t);
        s_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(w_15);
    o_15 = t;
    t = p_15;
    t = n_76(t);
    t_15 = t;
    t = (ATerm) ATinsert(CheckATermList(s_15), t_15);
    p_2 = t;
    t = SSLsetAnnotations(p_2, o_15);
    u_15 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_15 = ATgetFirst((ATermList) t);
        n_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_15);
    l_15 = t;
    t = n_15;
    if(((g_15 != NULL) && (g_15 != t)))
      _fail(t);
    else
      g_15 = t;
    t = (ATerm) ATinsert(CheckATermList(n_15), m_15);
    s_2 = t;
    t = SSLsetAnnotations(s_2, l_15);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(c_1, t);
  if(((i_15 != NULL) && (i_15 != t)))
    _fail(t);
  else
    i_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_15), not_null(g_15));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm q_16 = NULL,v_16 = NULL;
  ATerm j_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(p_99, t);
      ;
      LocalPopChoice(n_18);
    }
  else
    {
      t = j_18;
      {
        ATerm e_16 = NULL;
        e_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_16, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      v_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_16;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_16;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm o_18 = ATgetFirst((ATermList) t);
              ATerm p_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_16;
          t = list_tokenize_1_0(p_99, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm q_18 = ATgetFirst((ATermList) t);
          ATerm t_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_16;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, q_16);
        }
      else
        {
          ATerm i_17 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_18 = ATgetFirst((ATermList) t);
              ATerm y_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_16;
          t = list_tokenize_1_0(p_99, t);
          i_17 = t;
          t = (ATerm) ATinsert(CheckATermList(i_17), q_16);
        }
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm b_18 = NULL;
  if(match_cons(t, sym__2))
    {
      b_18 = ATgetArgument(t, 0);
      if((b_18 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm c_18 = NULL;
  c_18 = t;
  t = SSL_implode_string(c_18);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm j_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,v_2 = NULL;
  if(((t_17 != NULL) && (t_17 != t)))
    _fail(t);
  else
    t_17 = t;
  if(match_cons(t, sym__2))
    {
      if(((o_17 != NULL) && (o_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_17 = ATgetArgument(t, 0);
      if(((r_17 != NULL) && (r_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(t_17));
  if(((n_17 != NULL) && (n_17 != t)))
    _fail(t);
  else
    n_17 = t;
  t = SSL_explode_string(not_null(r_17));
  if(((s_17 != NULL) && (s_17 != t)))
    _fail(t);
  else
    s_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_17), not_null(s_17));
  if(((v_2 != NULL) && (v_2 != t)))
    _fail(t);
  else
    v_2 = t;
  t = SSLsetAnnotations(not_null(v_2), not_null(n_17));
  if(match_cons(t, sym__2))
    {
      if(((j_17 != NULL) && (j_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_17 = ATgetArgument(t, 0);
      if(((m_17 != NULL) && (m_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(m_17);
  {
    ATerm d_1 (ATerm t)
    {
      ATerm u_17 = NULL;
      u_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_17, not_null(j_17));
      t = i_6(f_1, u_17, not_null(j_17), t);
      return(t);
    }
    t = list_tokenize_1_0(d_1, t);
    t = map_1_0(h_1, t);
  }
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm r_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_19 = ATgetFirst((ATermList) t);
      r_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_18;
  return(t);
}
ATerm remove_extension_0_0 (ATerm t)
{
  ATerm d_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL;
  k_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_b_19), k_18);
  t = string_tokenize_0_0(t);
  t = at_last_1_0(i_1, t);
  d_18 = t;
  t = term_c_19;
  m_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_19, d_18);
  t = g_6(m_18, d_18, t);
  l_18 = t;
  t = SSL_concat_strings(l_18);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm s_18 = NULL;
  ATerm q_1 (ATerm t)
  {
    ATerm u_18 = NULL,v_18 = NULL;
    u_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_18), u_18);
    t = c_7(not_null(s_18), u_18, t);
    v_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_18, v_18);
    return(t);
  }
  if(((s_18 != NULL) && (s_18 != t)))
    _fail(t);
  else
    s_18 = t;
  t = SSL_table_keys(not_null(s_18));
  t = map_1_0(q_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm x_18 = NULL;
  x_18 = t;
  {
    ATerm e_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL;
        t = term_t_8;
        t = get_config_0_0(t);
        z_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_18, term_r_14);
        t = geq_0_0(t);
        t = x_18;
        t = x_85(t);
        ;
        LocalPopChoice(g_19);
      }
    else
      {
        t = e_19;
        t = x_18;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  ATerm d_19 = NULL;
  d_19 = t;
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_19 = NULL;
        t = term_t_8;
        t = get_config_0_0(t);
        f_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_19, term_h_12);
        t = geq_0_0(t);
        t = d_19;
        t = w_85(t);
        ;
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        t = d_19;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm j_19 = NULL;
  j_19 = t;
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_19 = NULL;
        t = term_t_8;
        t = get_config_0_0(t);
        n_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_19, term_n_10);
        t = geq_0_0(t);
        t = j_19;
        t = y_85(t);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = j_19;
      }
  }
  return(t);
}
ATerm k_6 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm w_34, ATerm v_34, ATerm t)
{
  t = i_80(t);
  {
    ATerm r_1 (ATerm t)
    {
      ATerm p_19 = NULL;
      p_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_34), p_19);
      t = h_80(t);
      return(t);
    }
    t = fetch_1_0(r_1, t);
    t = not_null(v_34);
  }
  return(t);
}
ATerm l_6 (ATerm e_80 (ATerm), ATerm s_34, ATerm r_34, ATerm t)
{
  ATerm l_20 (ATerm t)
  {
    ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
    g_20 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(r_34);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_20 = ATgetFirst((ATermList) t);
            i_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_19 = t;
          int o_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_20;
              {
                ATerm s_1 (ATerm t)
                {
                  t = not_null(r_34);
                  return(t);
                }
                t = k_6(e_80, s_1, not_null(h_20), not_null(i_20), t);
                t = l_20(t);
              }
              ;
              LocalPopChoice(o_19);
            }
          else
            {
              t = m_19;
              {
                ATerm v_8 = NULL,b_9 = NULL,c_3 = NULL;
                t = SSLgetAnnotations(g_20);
                v_8 = t;
                t = i_20;
                t = l_20(t);
                b_9 = t;
                t = (ATerm) ATinsert(CheckATermList(b_9), h_20);
                c_3 = t;
                t = SSLsetAnnotations(c_3, v_8);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(s_34);
  t = l_20(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm w_20 = NULL;
  if(match_cons(t, sym__2))
    {
      w_20 = ATgetArgument(t, 0);
      if((w_20 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm n_41, ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  o_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_19 = ATgetArgument(t, 0);
            ATerm t_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
        t = c_7(n_41, o_41, t);
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = (ATerm) ATempty;
      }
    q_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_20, p_41);
    t = l_6(t_1, q_20, p_41, t);
    p_20 = t;
    t = SSL_table_put(n_41, o_41, p_20);
    t = o_20;
  }
  return(t);
}
ATerm n_6 (ATerm a_86 (ATerm), ATerm x_41, ATerm w_41, ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm x_20 = NULL,y_20 = NULL;
    if(match_cons(t, sym__2))
      {
        x_20 = ATgetArgument(t, 0);
        y_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(x_41), x_20, y_20);
    t = a_86(t);
    return(t);
  }
  t = not_null(w_41);
  t = map_1_0(u_1, t);
  return(t);
}
ATerm v_6 (ATerm u_43, ATerm v_43, ATerm t)
{
  t = SSL_access(u_43, v_43);
  return(t);
}
ATerm e_22 (ATerm q_21, ATerm t)
{
  t = SSL_fclose(q_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL;
  z_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_21 = ATgetArgument(t, 0);
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_21);
            ;
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            t = e_22(z_21, t);
          }
      }
    }
  else
    {
      t = e_22(z_21, t);
    }
  return(t);
}
ATerm o_6 (ATerm z_27, ATerm t)
{
  t = SSL_read_term_from_stream(z_27);
  return(t);
}
ATerm q_6 (ATerm c_44, ATerm d_44, ATerm t)
{
  ATerm f_22 = NULL;
  t = SSL_fopen(c_44, d_44);
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_22 = NULL;
  t = SSL_stdin_stream();
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_22 = NULL;
  t = SSL_stdout_stream();
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_22);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_22 = NULL;
  t = SSL_stderr_stream();
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_22);
  return(t);
}
ATerm o_24 (ATerm r_22, ATerm t)
{
  ATerm u_22 = NULL;
  t = SSL_explode_term(r_22);
  if(match_cons(t, sym__2))
    {
      ATerm w_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_19 = ATgetArgument(t, 1);
        if(((ATgetType(x_19) == AT_LIST) && !(ATisEmpty(x_19))))
          {
            u_22 = ATgetFirst((ATermList) x_19);
            {
              ATerm y_19 = (ATerm) ATgetNext((ATermList) x_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_22;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_22;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_22;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_22;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm s_24 (ATerm b_23, ATerm f_23, ATerm j_23, ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,r_23 = NULL,k_3 = NULL;
  t = SSLgetAnnotations(j_23);
  m_23 = t;
  t = b_23;
  if(match_cons(t, sym_Path_1))
    {
      r_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_23, f_23);
  k_3 = t;
  t = SSLsetAnnotations(k_3, m_23);
  if(match_cons(t, sym__2))
    {
      k_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(k_23, l_23, t);
  return(t);
}
ATerm t_24 (ATerm t_23, ATerm w_23, ATerm x_23, ATerm t)
{
  ATerm y_23 = NULL,a_24 = NULL,b_24 = NULL,h_24 = NULL,m_3 = NULL;
  t = SSLgetAnnotations(x_23);
  b_24 = t;
  t = SSL_is_string(t_23);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_24, w_23);
  m_3 = t;
  t = SSLsetAnnotations(m_3, b_24);
  if(match_cons(t, sym__2))
    {
      y_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(y_23, a_24, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_19 = ATgetArgument(t, 0);
      ATerm a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  j_24 = t;
  if(match_cons(t, sym__2))
    {
      k_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_24(j_24, t);
            ;
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            {
              ATerm d_20 = t;
              int e_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_24(k_24, l_24, j_24, t);
                  ;
                  LocalPopChoice(e_20);
                }
              else
                {
                  t = d_20;
                  t = t_24(k_24, l_24, j_24, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_24(j_24, t);
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_f_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_25 = NULL;
      b_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_25, term_m_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      t = debug_1_0(w_1, t);
      _fail(t);
    }
  z_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(a_25, t);
  y_24 = t;
  t = z_24;
  t = fclose_0_0(t);
  t = y_24;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_r_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_25 = NULL,e_25 = NULL;
      d_25 = t;
      t = (ATerm) ATinsert(ATempty, term_u_20);
      e_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_25, (ATerm) ATinsert(ATempty, term_u_20));
      t = v_6(d_25, e_25, t);
      LocalPopChoice(t_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = s_20;
      {
        ATerm v_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_21 = t;
            if((PushChoice() == 0))
              {
                ATerm f_25 = NULL,g_25 = NULL;
                f_25 = t;
                t = (ATerm) ATinsert(ATempty, term_f_9);
                g_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_25, (ATerm) ATinsert(ATempty, term_f_9));
                t = v_6(f_25, g_25, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_21;
              }
            t = debug_1_0(z_1, t);
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = v_20;
            t = debug_1_0(a_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_b_21;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  t = term_i_16;
  v_25 = t;
  t = (ATerm) ATinsert(ATempty, term_d_21);
  w_25 = t;
  t = SSL_printnl(v_25, w_25);
  t = u_25;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm x_25 = NULL,a_26 = NULL,b_26 = NULL;
  if(match_cons(t, sym__3))
    {
      x_25 = ATgetArgument(t, 0);
      a_26 = ATgetArgument(t, 1);
      b_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_6(x_25, a_26, b_26, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
  c_26 = t;
  t = term_i_16;
  d_26 = t;
  t = (ATerm) ATinsert(ATempty, term_e_21);
  e_26 = t;
  t = SSL_printnl(d_26, e_26);
  t = c_26;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
  g_26 = t;
  t = term_i_16;
  h_26 = t;
  t = (ATerm) ATinsert(ATempty, term_d_21);
  i_26 = t;
  t = SSL_printnl(h_26, i_26);
  t = g_26;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,q_25 = NULL,r_25 = NULL;
  h_25 = t;
  t = if_verbose5_1_0(c_2, t);
  {
    ATerm f_21 = t;
    if((PushChoice() == 0))
      {
        ATerm s_25 = NULL,t_25 = NULL;
        t = term_g_21;
        s_25 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, h_25);
        t_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATmakeAppl(sym_Imported_1, h_25));
        t = c_7(s_25, t_25, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_21;
      }
    j_25 = t;
    t = term_g_21;
    o_25 = t;
    t = term_h_21;
    q_25 = t;
    t = (ATerm) ATinsert(ATempty, h_25);
    r_25 = t;
    t = SSL_table_put(o_25, q_25, r_25);
    t = j_25;
    t = if_verbose4_1_0(e_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(h_2, t);
    i_25 = t;
    t = term_g_21;
    n_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_21, i_25);
    t = n_6(j_2, n_25, i_25, t);
    t = if_verbose6_1_0(l_2, t);
    t = term_g_21;
    k_25 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, h_25);
    l_25 = t;
    t = (ATerm) ATempty;
    m_25 = t;
    t = SSL_table_put(k_25, l_25, m_25);
    t = (ATerm) ATmakeAppl(sym__3, term_g_21, (ATerm)ATmakeAppl(sym_Imported_1, h_25), (ATerm) ATempty);
    t = if_verbose4_1_0(m_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  e_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_27;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_27 = ATgetFirst((ATermList) t);
          g_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_9 = NULL,c_10 = NULL,d_10 = NULL,b_4 = NULL;
            t = SSLgetAnnotations(e_27);
            y_9 = t;
            t = f_27;
            t = v_83(t);
            c_10 = t;
            t = g_27;
            t = filter_1_0(v_83, t);
            d_10 = t;
            t = (ATerm) ATinsert(CheckATermList(d_10), c_10);
            b_4 = t;
            t = SSLsetAnnotations(b_4, y_9);
            ;
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            t = g_27;
            t = filter_1_0(v_83, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm p_27 (ATerm t)
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_91(t);
        t = p_27(t);
        ;
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
      }
    return(t);
  }
  t = p_27(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      {
        ATerm p_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_27 = NULL;
            t = term_s_21;
            q_27 = t;
            t = SSL_getenv(q_27);
            ;
            LocalPopChoice(r_21);
          }
        else
          {
            t = p_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = debug_1_0(r_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_t_21;
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm x_27 = NULL,c_28 = NULL;
  t = term_g_21;
  x_27 = t;
  t = term_u_21;
  c_28 = t;
  t = term_v_21;
  t = c_7(x_27, c_28, t);
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
ATerm u_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_x_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_27 = NULL;
  t = if_verbose5_1_0(o_2, t);
  r_27 = t;
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_27 = NULL,v_27 = NULL;
        t = term_g_21;
        s_27 = t;
        t = term_h_21;
        v_27 = t;
        t = term_c_22;
        t = c_7(s_27, v_27, t);
        ;
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        {
          ATerm w_27 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          w_27 = t;
          t = repeat_1_0(t_2, t);
          t = w_27;
        }
      }
    t = r_27;
    t = if_verbose5_1_0(u_2, t);
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = debug_1_0(f_3, t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm s_29 (ATerm g_28, ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
  t = term_g_21;
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, g_28);
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATmakeAppl(sym_Tool_1, g_28));
  t = c_7(j_28, k_28, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_22 = ATgetFirst((ATermList) t);
      if(match_cons(j_22, sym__2))
        {
          ATerm l_22 = ATgetArgument(j_22, 0);
          i_28 = ATgetArgument(j_22, 1);
        }
      else
        _fail(t);
      {
        ATerm k_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_28;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = debug_1_0(j_3, t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_g_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(p_3, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_m_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_28 = NULL,m_28 = NULL,p_28 = NULL;
      t = if_verbose5_1_0(b_3, t);
      t = xtc_load_0_0(t);
      if(((p_28 != NULL) && (p_28 != t)))
        _fail(t);
      else
        p_28 = t;
      if(match_cons(t, sym__2))
        {
          l_28 = ATgetArgument(t, 0);
          m_28 = ATgetArgument(t, 1);
          {
            ATerm p_22 = t;
            int q_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
                t = term_g_21;
                if(((v_28 != NULL) && (v_28 != t)))
                  _fail(t);
                else
                  v_28 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(l_28));
                if(((w_28 != NULL) && (w_28 != t)))
                  _fail(t);
                else
                  w_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATmakeAppl(sym_Tool_1, not_null(l_28)));
                t = c_7(not_null(v_28), not_null(w_28), t);
                {
                  ATerm g_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((m_28 != NULL) && (m_28 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          m_28 = ATgetArgument(t, 0);
                        if(((u_28 != NULL) && (u_28 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(g_3, t);
                  t = not_null(u_28);
                }
                ;
                LocalPopChoice(q_22);
              }
            else
              {
                t = p_22;
                t = s_29(not_null(p_28), t);
              }
          }
        }
      else
        {
          t = s_29(not_null(p_28), t);
        }
      t = if_verbose5_1_0(h_3, t);
      ;
      LocalPopChoice(o_22);
    }
  else
    {
      t = n_22;
      {
        ATerm r_29 = NULL,q_10 = NULL,r_10 = NULL;
        r_29 = t;
        t = term_i_16;
        q_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_22), r_29), term_s_22);
        r_10 = t;
        t = SSL_printnl(q_10, r_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_22), r_29), term_s_22);
        t = if_verbose5_1_0(o_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm w_6 (ATerm v_24, ATerm w_24, ATerm t)
{
  t = SSL_copy(v_24, w_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL;
  w_30 = t;
  if(match_cons(t, sym_FILE_1))
    {
      x_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_11 = NULL;
        t = w_30;
        t = k_0(t);
        b_11 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = b_11;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = b_11;
          }
        t = (ATerm) ATmakeAppl(sym__2, x_30, b_11);
        t = w_6(x_30, b_11, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, x_30);
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
              ATerm j_11 = NULL;
              t = w_30;
              t = k_0(t);
              j_11 = t;
              {
                ATerm z_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm k_11 = NULL;
                    k_11 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = k_11;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = k_11;
                          }
                        else
                          {
                            t = k_11;
                            if((x_30 != t))
                              {
                                _fail(t);
                              }
                            t = k_11;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_22;
                  }
                t = (ATerm) ATmakeAppl(sym__2, x_30, j_11);
                t = w_6(x_30, j_11, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, x_30);
              }
              ;
              LocalPopChoice(y_22);
            }
          else
            {
              t = x_22;
              t = w_30;
              t = k_0(t);
              if((x_30 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_30);
            }
        }
      }
  }
  return(t);
}
ATerm x_6 (ATerm v_40, ATerm w_40, ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL;
  c_31 = t;
  {
    ATerm a_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
        t = c_7(v_40, w_40, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_23 = ATgetFirst((ATermList) t);
            b_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_23);
        t = SSL_table_put(v_40, w_40, b_31);
        t = (ATerm) ATmakeAppl(sym__3, v_40, w_40, b_31);
      }
    else
      {
        t = a_23;
        t = SSL_table_remove(v_40, w_40);
        t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
      }
    t = c_31;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  if(((g_31 != NULL) && (g_31 != t)))
    _fail(t);
  else
    g_31 = t;
  t = m_84(t);
  if(((f_31 != NULL) && (f_31 != t)))
    _fail(t);
  else
    f_31 = t;
  {
    ATerm e_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_31 = NULL;
        t = term_z_16;
        i_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_31), term_z_16);
        t = c_7(not_null(f_31), i_31, t);
        ;
        LocalPopChoice(g_23);
      }
    else
      {
        t = e_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_31 != NULL) && (e_31 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_31 = ATgetFirst((ATermList) t);
        if(((d_31 != NULL) && (d_31 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          d_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_z_16;
    if(((h_31 != NULL) && (h_31 != t)))
      _fail(t);
    else
      h_31 = t;
    t = SSL_table_put(not_null(f_31), not_null(h_31), not_null(d_31));
    t = not_null(e_31);
    {
      ATerm q_3 (ATerm t)
      {
        ATerm j_31 = NULL;
        j_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_31), j_31);
        t = x_6(not_null(f_31), j_31, t);
        return(t);
      }
      t = map_1_0(q_3, t);
      t = not_null(g_31);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_85(t);
      t = i_85(t);
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      t = i_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,q_31 = NULL,r_31 = NULL;
  m_31 = t;
  t = l_84(t);
  l_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_31, term_z_16);
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_31 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_23 = ATgetArgument(t, 0);
            ATerm q_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_z_16;
        x_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_31, term_z_16);
        t = c_7(l_31, x_31, t);
        ;
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        t = (ATerm) ATempty;
      }
    n_31 = t;
    t = term_z_16;
    q_31 = t;
    t = (ATerm) ATinsert(CheckATermList(n_31), (ATerm) ATempty);
    r_31 = t;
    t = SSL_table_put(l_31, q_31, r_31);
    t = m_31;
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm g_32 = NULL;
  g_32 = t;
  {
    ATerm s_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(g_32);
        ;
        LocalPopChoice(u_23);
      }
    else
      {
        t = s_23;
        t = g_32;
      }
  }
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm a_32 = NULL;
  ATerm s_3 (ATerm t)
  {
    ATerm b_32 = NULL;
    b_32 = t;
    {
      ATerm v_23 = t;
      int z_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_32 = NULL,d_32 = NULL;
          t = term_v_17;
          c_32 = t;
          t = term_z_16;
          d_32 = t;
          t = term_c_24;
          t = c_7(c_32, d_32, t);
          ;
          LocalPopChoice(z_23);
        }
      else
        {
          t = v_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((a_32 != NULL) && (a_32 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            a_32 = ATgetFirst((ATermList) t);
          {
            ATerm d_24 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(a_32);
      t = map_1_0(t_3, t);
      t = b_32;
      t = end_scope_1_0(v_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(r_3, t);
  t = restore_always_2_0(q_87, s_3, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      t = term_g_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm i_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_32 = NULL;
        t = term_y_17;
        t = get_config_0_0(t);
        j_32 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_32);
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = i_24;
        t = term_e_9;
      }
    t = r_87(t);
    t = copy_to_1_0(x_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(w_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL;
  k_32 = t;
  t = term_k_17;
  t = whoami_0_0(t);
  l_32 = t;
  t = term_i_16;
  n_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_24), l_32), term_n_24);
  o_32 = t;
  t = SSL_printnl(n_32, o_32);
  t = term_a_9;
  m_32 = t;
  t = SSL_exit(m_32);
  t = k_32;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm q_32 = NULL;
  q_32 = t;
  if(match_string(t, "-k"))
    {
      t = q_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_32;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
  r_32 = t;
  t = SSL_string_to_int(r_32);
  s_32 = t;
  t = term_u_24;
  t_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_24, s_32);
  t = f_7(t_32, s_32, t);
  t = r_32;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_x_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_3, z_3, d_4, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm v_32 = NULL;
  v_32 = t;
  if(match_string(t, "-S"))
    {
      t = v_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_32;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL;
  t = term_t_8;
  w_32 = t;
  t = term_c_25;
  x_32 = t;
  t = term_p_25;
  t = f_7(w_32, x_32, t);
  t = term_y_25;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm m_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
  y_32 = t;
  t = SSL_string_to_int(y_32);
  z_32 = t;
  t = term_t_8;
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_8, z_32);
  t = f_7(a_33, z_32, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_32);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL;
  t = term_j_26;
  b_33 = t;
  t = term_k_17;
  c_33 = t;
  t = term_k_26;
  t = f_7(b_33, c_33, t);
  t = term_l_26;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_4, h_4, j_4, t);
      ;
      LocalPopChoice(o_26);
    }
  else
    {
      t = n_26;
      {
        ATerm p_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_4, p_4, s_4, t);
            ;
            LocalPopChoice(q_26);
          }
        else
          {
            t = p_26;
            t = Option_3_0(t_4, u_4, w_4, t);
          }
      }
    }
  return(t);
}
ATerm f_7 (ATerm q_42, ATerm r_42, ATerm t)
{
  ATerm d_33 = NULL;
  t = term_r_26;
  d_33 = t;
  t = SSL_table_put(d_33, q_42, r_42);
  t = (ATerm) ATmakeAppl(sym__3, term_r_26, q_42, r_42);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
      t = term_k_17;
      t = d_0(t);
      i_33 = t;
      t = term_s_26;
      j_33 = t;
      t = term_t_26;
      k_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_26, term_t_26, i_33);
      t = d_7(j_33, k_33, i_33, t);
      _fail(t);
    }
  else
    {
      ATerm n_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_33 = ATgetFirst((ATermList) t);
          h_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_33;
      t = a_0(t);
      t = term_k_17;
      t = c_0(t);
      n_33 = t;
      t = (ATerm) ATinsert(CheckATermList(h_33), n_33);
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm p_33 = NULL;
  p_33 = t;
  if(match_string(t, "-o"))
    {
      t = p_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_33;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL;
  q_33 = t;
  t = term_w_17;
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_17, q_33);
  t = f_7(r_33, q_33, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_33);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_u_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_4, c_5, e_5, t);
  return(t);
}
ATerm d_7 (ATerm q_40, ATerm r_40, ATerm p_40, ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_26 = ATgetArgument(t, 0);
            ATerm y_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
        t = c_7(q_40, r_40, t);
        ;
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
        t = (ATerm) ATempty;
      }
    u_33 = t;
    t = (ATerm) ATinsert(CheckATermList(u_33), p_40);
    v_33 = t;
    t = SSL_table_put(q_40, r_40, v_33);
    t = t_33;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
      t = term_k_17;
      t = j_0(t);
      g_34 = t;
      t = term_s_26;
      h_34 = t;
      t = term_t_26;
      i_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_26, term_t_26, g_34);
      t = d_7(h_34, i_34, g_34, t);
      _fail(t);
    }
  else
    {
      ATerm m_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_34 = ATgetFirst((ATermList) t);
          d_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_34 = ATgetFirst((ATermList) t);
          f_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_34;
      t = h_0(t);
      t = e_34;
      t = i_0(t);
      m_34 = t;
      t = (ATerm) ATinsert(CheckATermList(f_34), m_34);
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm o_34 = NULL;
  o_34 = t;
  if(match_string(t, "-i"))
    {
      t = o_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_34;
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL;
  p_34 = t;
  t = term_y_17;
  q_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_17, p_34);
  t = f_7(q_34, p_34, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_34);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_z_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_5, j_5, n_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,y_34 = NULL,a_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_17;
  t = whoami_0_0(t);
  t_34 = t;
  t = term_i_16;
  y_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_27), t_34);
  a_35 = t;
  t = SSL_printnl(y_34, a_35);
  t = term_a_9;
  u_34 = t;
  t = SSL_exit(u_34);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_27;
  t = get_config_0_0(t);
  return(t);
}
ATerm y_6 (ATerm l_38, ATerm m_38, ATerm t)
{
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_38, m_38);
      ;
      LocalPopChoice(d_27);
    }
  else
    {
      t = c_27;
      t = SSL_addr(l_38, m_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
  c_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_35;
      t = s_82(t);
    }
  else
    {
      ATerm h_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_35 = ATgetFirst((ATermList) t);
          e_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_35;
      t = foldr_2_0(s_82, t_82, t);
      h_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_35, h_35);
      t = t_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm k_12 = NULL,m_12 = NULL;
  if(match_cons(t, sym__2))
    {
      k_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(k_12, m_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_35 = NULL,e_12 = NULL,f_12 = NULL;
  t = times_0_0(t);
  f_12 = t;
  t = SSL_explode_term(f_12);
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_12;
  t = foldr_2_0(o_5, q_5, t);
  k_35 = t;
  t = SSL_TicksToSeconds(k_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
  v_35 = t;
  if(match_cons(t, sym__2))
    {
      w_35 = ATgetArgument(t, 0);
      x_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_35;
        if((w_35 != t))
          {
            _fail(t);
          }
        t = v_35;
        ;
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = (ATerm) ATmakeAppl(sym__2, w_35, x_35);
        {
          ATerm k_27 = t;
          int l_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_35, x_35);
              ;
              LocalPopChoice(l_27);
            }
          else
            {
              t = k_27;
              t = SSL_gtr(w_35, x_35);
            }
          t = (ATerm) ATmakeAppl(sym__2, w_35, x_35);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_85 (ATerm), ATerm t)
{
  ATerm d_36 = NULL;
  d_36 = t;
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_36 = NULL;
        t = term_t_8;
        t = get_config_0_0(t);
        f_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_36, term_a_9);
        t = geq_0_0(t);
        t = d_36;
        t = t_85(t);
        ;
        LocalPopChoice(n_27);
      }
    else
      {
        t = m_27;
        t = d_36;
      }
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,k_36 = NULL,l_36 = NULL;
  t = run_time_0_0(t);
  h_36 = t;
  t = term_k_17;
  t = whoami_0_0(t);
  i_36 = t;
  t = term_i_16;
  k_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_27), h_36), term_m_9), i_36);
  l_36 = t;
  t = SSL_printnl(k_36, l_36);
  t = (ATerm) ATmakeAppl(sym__2, term_i_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_27), h_36), term_m_9), i_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_25;
  m_36 = t;
  t = SSL_exit(m_36);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL;
  v_36 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_36;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          u_36 = ATgetArgument(t, 0);
          {
            ATerm j_13 = NULL,z_4 = NULL;
            t = SSLgetAnnotations(v_36);
            j_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, u_36);
            z_4 = t;
            t = SSLsetAnnotations(z_4, j_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_36;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm y_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_28);
    }
  else
    {
      t = y_27;
      t = fetch_1_0(s_5, t);
    }
  t = s_89(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_36 = ATgetFirst((ATermList) t);
      z_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_37 = NULL,e_37 = NULL;
        ATerm t_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_37)), not_null(e_37));
          return(t);
        }
        t = not_null(z_36);
        t = g_0(t);
        if(((d_37 != NULL) && (d_37 != t)))
          _fail(t);
        else
          d_37 = t;
        t = not_null(y_36);
        t = e_0(t);
        if(((e_37 != NULL) && (e_37 != t)))
          _fail(t);
        else
          e_37 = t;
        t = not_null(z_36);
        t = reverse_acc_2_0(e_0, t_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_17;
      t = g_0(t);
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,d_5 = NULL;
  k_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_37);
  i_37 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_37);
  d_5 = t;
  t = SSLsetAnnotations(d_5, i_37);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm m_37 = NULL;
  m_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_37), term_e_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL;
  ATerm f_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = f_28;
      t = fetch_1_0(u_5, t);
    }
  t = term_n_28;
  t = echo_0_0(t);
  t = term_s_26;
  g_37 = t;
  t = term_t_26;
  h_37 = t;
  t = term_o_28;
  t = c_7(g_37, h_37, t);
  t = reverse_acc_2_0(_id, x_5, t);
  t = map_1_0(y_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm j_38 (ATerm t)
  {
    ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
    g_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_38 = ATgetFirst((ATermList) t);
        i_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_28 = t;
      int r_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_13 = NULL,c_14 = NULL,g_5 = NULL;
          t = SSLgetAnnotations(g_38);
          z_13 = t;
          t = h_38;
          t = k_76(t);
          c_14 = t;
          t = (ATerm) ATinsert(CheckATermList(i_38), c_14);
          g_5 = t;
          t = SSLsetAnnotations(g_5, z_13);
          ;
          LocalPopChoice(r_28);
        }
      else
        {
          t = q_28;
          {
            ATerm s_14 = NULL,v_14 = NULL,h_5 = NULL;
            t = SSLgetAnnotations(g_38);
            s_14 = t;
            t = i_38;
            t = j_38(t);
            v_14 = t;
            t = (ATerm) ATinsert(CheckATermList(v_14), h_38);
            h_5 = t;
            t = SSLsetAnnotations(h_5, s_14);
          }
        }
    }
    return(t);
  }
  t = j_38(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,t_38 = NULL;
  p_38 = t;
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_38;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_28 = ATgetFirst((ATermList) t);
                ATerm y_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_38;
          }
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = (ATerm) ATinsert(ATempty, p_38);
      }
    q_38 = t;
    t = term_g_24;
    t_38 = t;
    t = SSL_printnl(t_38, q_38);
    t = p_38;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_27;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm b_7 (ATerm w_58, ATerm x_58, ATerm t)
{
  t = SSL_strcat(w_58, x_58);
  return(t);
}
ATerm debug_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL;
  x_38 = t;
  t = f_72(t);
  y_38 = t;
  t = term_i_16;
  z_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_38), y_38);
  a_39 = t;
  t = SSL_printnl(z_38, a_39);
  t = x_38;
  return(t);
}
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm t)
{
  ATerm p_39 (ATerm t)
  {
    ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL;
    m_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_39;
      }
    else
      {
        ATerm k_15 = NULL,v_15 = NULL,x_15 = NULL,a_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_39 = ATgetFirst((ATermList) t);
            o_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_39);
        k_15 = t;
        t = n_39;
        t = a_76(t);
        v_15 = t;
        t = o_39;
        t = p_39(t);
        x_15 = t;
        t = (ATerm) ATinsert(CheckATermList(x_15), v_15);
        a_10 = t;
        t = SSLsetAnnotations(a_10, k_15);
      }
    return(t);
  }
  t = p_39(t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_40 = NULL;
      j_40 = t;
      t = SSL_is_string(j_40);
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
            t = map_1_0(a_6, t);
            ;
            LocalPopChoice(f_29);
          }
        else
          {
            t = e_29;
            {
              ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL;
              z_40 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_41 = ATgetArgument(t, 0);
                  t = a_41;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_41 = ATgetArgument(t, 0);
                      t = a_41;
                      {
                        ATerm g_29 = t;
                        int j_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_29);
                          }
                        else
                          {
                            t = g_29;
                            t = debug_1_0(b_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_41 = NULL,g_41 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_41 = ATgetArgument(t, 0);
                          b_41 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_41;
                      t = eval_config_0_0(t);
                      f_41 = t;
                      t = b_41;
                      t = eval_config_0_0(t);
                      g_41 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_41, g_41);
                      t = b_7(f_41, g_41, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm c_7 (ATerm h_42, ATerm i_42, ATerm t)
{
  t = SSL_table_get(h_42, i_42);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL;
  k_41 = t;
  t = term_r_26;
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_26, k_41);
  t = c_7(l_41, k_41, t);
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_41 = NULL,s_41 = NULL;
        t = eval_config_0_0(t);
        m_41 = t;
        t = term_r_26;
        s_41 = t;
        t = SSL_table_put(s_41, k_41, m_41);
        t = m_41;
        ;
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
      }
  }
  return(t);
}
ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm v_41 = NULL,a_42 = NULL;
  t = term_m_29;
  v_41 = t;
  t = term_k_17;
  a_42 = t;
  t = term_n_29;
  t = f_7(v_41, a_42, t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_o_29;
  return(t);
}
ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL;
  t = term_m_29;
  d_42 = t;
  t = term_k_17;
  e_42 = t;
  t = term_n_29;
  t = f_7(d_42, e_42, t);
  t = term_p_29;
  b_42 = t;
  t = term_k_17;
  c_42 = t;
  t = term_q_29;
  t = f_7(b_42, c_42, t);
  t = term_t_29;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_u_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_6, j_6, t_6, t);
      ;
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      t = Option_3_0(z_6, a_7, e_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,h_10 = NULL;
  m_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_42 = ATgetFirst((ATermList) t);
      j_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_42);
  f_42 = t;
  t = g_42;
  t = s_63(t);
  k_42 = t;
  t = j_42;
  t = t_63(t);
  l_42 = t;
  t = (ATerm) ATinsert(CheckATermList(l_42), k_42);
  h_10 = t;
  t = SSLsetAnnotations(h_10, f_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_91 (ATerm), ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,y_42 = NULL,e_43 = NULL,j_10 = NULL;
  if(((t_42 != NULL) && (t_42 != t)))
    _fail(t);
  else
    t_42 = t;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_30;
        t = q_91(t);
        ;
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
      }
    t = not_null(t_42);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((v_42 != NULL) && (v_42 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          v_42 = ATgetFirst((ATermList) t);
        if(((w_42 != NULL) && (w_42 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          w_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(t_42));
    if(((u_42 != NULL) && (u_42 != t)))
      _fail(t);
    else
      u_42 = t;
    t = term_b_27;
    if(((e_43 != NULL) && (e_43 != t)))
      _fail(t);
    else
      e_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_27, not_null(v_42));
    t = f_7(not_null(e_43), not_null(v_42), t);
    t = not_null(w_42);
    {
      ATerm r_43 (ATerm t)
      {
        ATerm b_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_30 = t;
            int e_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_43 = NULL;
                k_43 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_43;
                ;
                LocalPopChoice(e_30);
              }
            else
              {
                t = d_30;
                t = q_91(t);
                t = Cons_2_0(_id, r_43, t);
              }
            ;
            LocalPopChoice(c_30);
          }
        else
          {
            t = b_30;
            {
              ATerm n_43 = NULL,o_43 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_43 = ATgetFirst((ATermList) t);
                  o_43 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_43), (ATerm) ATmakeAppl(sym_Undefined_1, n_43));
            }
          }
        return(t);
      }
      t = r_43(t);
      if(((y_42 != NULL) && (y_42 != t)))
        _fail(t);
      else
        y_42 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(y_42)), (ATerm) ATmakeAppl(sym_Program_1, not_null(v_42)));
      if(((j_10 != NULL) && (j_10 != t)))
        _fail(t);
      else
        j_10 = t;
      t = SSLsetAnnotations(not_null(j_10), not_null(u_42));
    }
  }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm j_44 = NULL;
  j_44 = t;
  if(match_string(t, "--help"))
    {
      t = j_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_44;
        }
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL;
  t = term_d_28;
  k_44 = t;
  t = term_k_17;
  l_44 = t;
  t = term_f_30;
  t = f_7(k_44, l_44, t);
  t = term_g_30;
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm p_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_91 (ATerm), ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL;
  if(((a_44 != NULL) && (a_44 != t)))
    _fail(t);
  else
    a_44 = t;
  t = term_s_26;
  if(((g_44 != NULL) && (g_44 != t)))
    _fail(t);
  else
    g_44 = t;
  t = term_t_26;
  if(((h_44 != NULL) && (h_44 != t)))
    _fail(t);
  else
    h_44 = t;
  t = (ATerm) ATempty;
  if(((i_44 != NULL) && (i_44 != t)))
    _fail(t);
  else
    i_44 = t;
  t = SSL_table_put(not_null(g_44), not_null(h_44), not_null(i_44));
  t = not_null(a_44);
  {
    ATerm g_7 (ATerm t)
    {
      ATerm i_30 = t;
      int j_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_91(t);
          ;
          LocalPopChoice(j_30);
        }
      else
        {
          t = i_30;
          {
            ATerm k_30 = t;
            int l_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_7, l_7, n_7, t);
                ;
                LocalPopChoice(l_30);
              }
            else
              {
                t = k_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_7, t);
    {
      ATerm m_30 = t;
      int n_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_44 = NULL;
          y_44 = t;
          {
            ATerm o_30 = t;
            int p_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_16 = NULL;
                t = y_44;
                {
                  ATerm q_30 = t;
                  int r_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_d_28;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(r_30);
                    }
                  else
                    {
                      t = q_30;
                      t = fetch_1_0(p_7, t);
                    }
                  t = y_44;
                  t = default_system_usage_0_0(t);
                  t = term_c_25;
                  p_16 = t;
                  t = SSL_exit(p_16);
                }
                ;
                LocalPopChoice(p_30);
              }
            else
              {
                t = o_30;
                {
                  ATerm y_16 = NULL;
                  t = term_m_29;
                  t = get_config_0_0(t);
                  t = y_44;
                  t = default_system_about_0_0(t);
                  t = term_c_25;
                  y_16 = t;
                  t = SSL_exit(y_16);
                }
              }
          }
          ;
          LocalPopChoice(n_30);
        }
      else
        {
          t = m_30;
          {
            ATerm s_30 = t;
            int t_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_44 = NULL,c_45 = NULL,d_45 = NULL;
                ATerm q_7 (ATerm t)
                {
                  ATerm e_45 = NULL,f_45 = NULL,h_45 = NULL,l_10 = NULL;
                  h_45 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      f_45 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_45);
                  e_45 = t;
                  t = f_45;
                  if(((y_43 != NULL) && (y_43 != t)))
                    _fail(t);
                  else
                    y_43 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, f_45);
                  l_10 = t;
                  t = SSLsetAnnotations(l_10, e_45);
                  return(t);
                }
                t = fetch_1_0(q_7, t);
                t = term_i_16;
                if(((c_45 != NULL) && (c_45 != t)))
                  _fail(t);
                else
                  c_45 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_43)), term_u_30);
                if(((d_45 != NULL) && (d_45 != t)))
                  _fail(t);
                else
                  d_45 = t;
                t = SSL_printnl(not_null(c_45), not_null(d_45));
                t = (ATerm) ATmakeAppl(sym__2, term_i_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_43)), term_u_30));
                t = default_system_usage_0_0(t);
                t = term_a_9;
                if(((z_44 != NULL) && (z_44 != t)))
                  _fail(t);
                else
                  z_44 = t;
                t = SSL_exit(not_null(z_44));
                ;
                LocalPopChoice(t_30);
              }
            else
              {
                t = s_30;
              }
          }
        }
      if(((z_43 != NULL) && (z_43 != t)))
        _fail(t);
      else
        z_43 = t;
      t = term_s_26;
      if(((b_44 != NULL) && (b_44 != t)))
        _fail(t);
      else
        b_44 = t;
      t = SSL_table_destroy(not_null(b_44));
      t = not_null(z_43);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,u_45 = NULL;
  t = parse_options_1_0(u_89, t);
  o_45 = t;
  t = term_v_30;
  u_45 = t;
  t = SSL_table_create(u_45);
  t = term_v_30;
  p_45 = t;
  t = term_y_30;
  q_45 = t;
  t = SSL_table_put(p_45, q_45, o_45);
  t = o_45;
  t = w_89(t);
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_89, t);
        ;
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        {
          ATerm k_31 = t;
          int o_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_89(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_31);
            }
          else
            {
              t = k_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm p_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(s_31);
    }
  else
    {
      t = p_31;
      {
        ATerm t_31 = t;
        int u_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(u_31);
          }
        else
          {
            t = t_31;
            {
              ATerm v_31 = t;
              int w_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(v_7, w_7, a_8, t);
                  ;
                  LocalPopChoice(w_31);
                }
              else
                {
                  t = v_31;
                  {
                    ATerm y_31 = t;
                    int z_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(z_31);
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
ATerm t_7 (ATerm t)
{
  t = xtc_io_1_0(c_8, t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm c_46 = NULL,i_46 = NULL;
  t = term_e_32;
  c_46 = t;
  t = term_k_17;
  i_46 = t;
  t = term_f_32;
  t = f_7(c_46, i_46, t);
  t = term_h_32;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_i_32;
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm p_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_46 = NULL,q_46 = NULL;
      q_46 = t;
      if(match_cons(t, sym_FILE_1))
        {
          p_46 = ATgetArgument(t, 0);
          {
            ATerm h_17 = NULL,v_10 = NULL;
            t = SSLgetAnnotations(q_46);
            h_17 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, p_46);
            v_10 = t;
            t = SSLsetAnnotations(v_10, h_17);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_46;
        }
      LocalPopChoice(u_32);
      t = xtc_transform_file_2_0(d_8, f_8, t);
    }
  else
    {
      t = p_32;
      t = xtc_transform_term_2_0(h_8, l_8, t);
    }
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_46 = NULL,a_47 = NULL;
        a_47 = t;
        if(match_cons(t, sym_FILE_1))
          {
            z_46 = ATgetArgument(t, 0);
            {
              ATerm x_17 = NULL,w_10 = NULL;
              t = SSLgetAnnotations(a_47);
              x_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_46);
              w_10 = t;
              t = SSLsetAnnotations(w_10, x_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_47;
          }
        LocalPopChoice(f_33);
        t = xtc_transform_file_2_0(m_8, pass_verbose_0_0, t);
      }
    else
      {
        t = e_33;
        t = xtc_transform_term_2_0(n_8, pass_verbose_0_0, t);
      }
    {
      ATerm l_33 = t;
      int m_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_47 = NULL,h_47 = NULL;
          h_47 = t;
          if(match_cons(t, sym_FILE_1))
            {
              g_47 = ATgetArgument(t, 0);
              {
                ATerm h_18 = NULL,i_11 = NULL;
                t = SSLgetAnnotations(h_47);
                h_18 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, g_47);
                i_11 = t;
                t = SSLsetAnnotations(i_11, h_18);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = h_47;
            }
          LocalPopChoice(m_33);
          t = xtc_transform_file_2_0(o_8, pass_verbose_0_0, t);
        }
      else
        {
          t = l_33;
          t = xtc_transform_term_2_0(p_8, pass_verbose_0_0, t);
        }
    }
  }
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_o_33;
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm r_46 = NULL;
  t = term_s_33;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  r_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_46), term_w_33);
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = term_o_33;
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm t_46 = NULL;
  t = term_s_33;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  t_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_46), term_w_33);
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_x_33;
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_x_33;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_y_33;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_y_33;
  return(t);
}
ATerm io_pp_c_0_0 (ATerm t)
{
  t = option_wrap_4_0(s_7, default_usage_0_0, _id, t_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_c_0_0(t);
  return(t);
}
