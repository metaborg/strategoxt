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
ATerm term_n_32;
ATerm term_j_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_l_31;
ATerm term_j_31;
ATerm term_h_31;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_k_30;
ATerm term_u_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_o_28;
ATerm term_c_28;
ATerm term_a_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_o_27;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_h_25;
ATerm term_e_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_l_24;
ATerm term_h_24;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_t_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_g_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_q_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_f_21;
ATerm term_d_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_q_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_f_20;
ATerm term_f_18;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_q_16;
ATerm term_i_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
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
ATerm term_q_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_m_10;
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
ATerm term_t_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_b_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_g_8;
void init_constant_terms (void)
{
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
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
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_9, term_m_8, term_j_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_9, term_o_9, term_t_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_w_9, term_x_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_9, term_a_10, term_b_10);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_10, term_e_10, term_f_10);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_10, term_i_10, term_j_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_p_10, term_q_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_10, term_t_10, term_u_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_x_10, term_z_10);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_11, term_e_11, term_i_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_o_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_11, term_t_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_z_11);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_e_12, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_o_12, term_p_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_w_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_z_12, term_a_13);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_f_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_o_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_z_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_g_14, term_h_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_n_14, term_p_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_y_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_c_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym__2, term_h_21, term_b_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_h_21, term_i_21);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym__2, term_p_17, term_q_16);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_u_24);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_24);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__2, term_n_25, term_e_17);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym__2, term_b_26, term_c_26);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_a_29, term_e_17);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_e_17);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_w_27, term_e_17);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_f_32, term_e_17);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("C.tbl", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
ATerm x_5 (ATerm c_31, ATerm d_31, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm e_6 (ATerm j_15, ATerm k_15, ATerm);
ATerm g_6 (ATerm z_59 (ATerm), ATerm f_157, ATerm r_15, ATerm);
ATerm c_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm p_78 (ATerm), ATerm q_78 (ATerm), ATerm);
ATerm h_6 (ATerm f_12, ATerm g_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm e_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm o_58 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm g_78 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm i_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm g_7 (ATerm p_6, ATerm);
ATerm conc_0_0 (ATerm);
ATerm j_6 (ATerm r_74 (ATerm), ATerm k_32, ATerm i_32, ATerm);
ATerm p_8 (ATerm y_7, ATerm);
ATerm r_8 (ATerm a_8, ATerm b_8, ATerm c_8, ATerm);
ATerm y_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm x_75 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm pass_v_verbose_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm z_75 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm y_75 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm a_76 (ATerm), ATerm);
ATerm z_5 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm m_22, ATerm l_22, ATerm);
ATerm a_6 (ATerm w_67 (ATerm), ATerm i_22, ATerm h_22, ATerm);
ATerm l_1 (ATerm);
ATerm b_6 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm);
ATerm c_6 (ATerm c_76 (ATerm), ATerm i_34, ATerm h_34, ATerm);
ATerm k_6 (ATerm f_36, ATerm g_36, ATerm);
ATerm s_15 (ATerm e_15, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm d_6 (ATerm p_15, ATerm);
ATerm f_6 (ATerm n_36, ATerm o_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm y_17 (ATerm n_16, ATerm);
ATerm z_17 (ATerm t_16, ATerm u_16, ATerm v_16, ATerm);
ATerm a_18 (ATerm i_17, ATerm j_17, ATerm k_17, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm v_1 (ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm g_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm o_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm n_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm h_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm w_22 (ATerm p_21, ATerm);
ATerm z_2 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm j_3 (ATerm);
ATerm xtc_sglr_1_0 (ATerm d_88 (ATerm), ATerm);
ATerm l_6 (ATerm l_12, ATerm m_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm m_6 (ATerm g_33, ATerm h_33, ATerm);
ATerm end_scope_1_0 (ATerm o_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm n_74 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm s_77 (ATerm), ATerm);
ATerm w_3 (ATerm);
ATerm xtc_io_1_0 (ATerm t_77 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm f_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm o_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm u_6 (ATerm b_35, ATerm c_35, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm s_6 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_6 (ATerm w_30, ATerm x_30, ATerm);
ATerm foldr_2_0 (ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm g_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_75 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm need_help_1_0 (ATerm u_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm c_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm q_6 (ATerm s_29, ATerm t_29, ATerm);
ATerm debug_1_0 (ATerm x_59 (ATerm), ATerm);
ATerm map_1_0 (ATerm s_63 (ATerm), ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm r_6 (ATerm s_34, ATerm t_34, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm i_6 (ATerm);
ATerm o_6 (ATerm);
ATerm v_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm k_51 (ATerm), ATerm l_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm s_81 (ATerm), ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm parse_options_1_0 (ATerm r_81 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm x_7 (ATerm);
ATerm z_7 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm x_5 (ATerm c_31, ATerm d_31, ATerm t)
{
  ATerm w_4 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(c_31, d_31);
      ;
      LocalPopChoice(f_8);
    }
  else
    {
      t = w_4;
      t = SSL_subtr(c_31, d_31);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,q_0 = NULL;
  t = term_g_8;
  {
    ATerm h_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(l_8);
      }
    else
      {
        t = h_8;
        t = term_m_8;
      }
    b_0 = t;
    t = term_m_8;
    q_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_m_8);
    t = x_5(b_0, q_0, t);
    f_0 = t;
    t = SSL_int_to_string(f_0);
    a_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_g_8);
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
      t = k_6(w_0, d_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm e_6 (ATerm j_15, ATerm k_15, ATerm t)
{
  ATerm e_1 = NULL;
  t = SSL_write_term_to_stream_baf(j_15, k_15);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_1);
  return(t);
}
ATerm g_6 (ATerm z_59 (ATerm), ATerm f_157, ATerm r_15, ATerm t)
{
  ATerm f_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_157, term_s_8);
  t = open_stream_0_0(t);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_1, r_15);
  t = z_59(t);
  t = fclose_0_0(t);
  t = r_15;
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm i_1 = NULL,k_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_8 = ATgetArgument(t, 0);
      if(match_cons(t_8, sym_Stream_1))
        {
          i_1 = ATgetArgument(t_8, 0);
        }
      else
        _fail(t);
      k_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(i_1, k_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL;
  g_1 = t;
  t = xtc_new_file_0_0(t);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, g_1);
  t = g_6(c_0, h_1, g_1, t);
  t = SSL_close_file(h_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm p_78 (ATerm), ATerm q_78 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(p_78, q_78, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm h_6 (ATerm f_12, ATerm g_12, ATerm t)
{
  t = SSL_execvp(f_12, g_12);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
  u_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      v_2 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,t_0 = NULL;
        t = SSL_int_to_string(v_2);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_8), s_0), term_u_8);
        t_0 = t;
        t = SSL_concat_strings(t_0);
      }
    }
  else
    {
      ATerm n_1 = NULL,o_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          v_2 = ATgetArgument(t, 0);
          w_2 = ATgetArgument(t, 1);
          x_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(w_2);
      n_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_2), term_b_9), n_1), term_w_8), v_2);
      o_1 = t;
      t = SSL_concat_strings(o_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_64 (ATerm), ATerm t)
{
  ATerm a_3 = NULL;
  ATerm e_0 (ATerm t)
  {
    t = e_64(t);
    if(((a_3 != NULL) && (a_3 != t)))
      _fail(t);
    else
      a_3 = t;
    return(t);
  }
  t = fetch_1_0(e_0, t);
  t = not_null(a_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_3 = NULL;
  b_3 = t;
  {
    ATerm d_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm g_9 = ATgetArgument(t, 0);
              if((b_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm h_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_15), term_d_15), term_z_14), term_v_14), term_q_14), term_i_14), term_b_14), term_w_13), term_r_13), term_l_13), term_h_13), term_b_13), term_x_12), term_q_12), term_j_12), term_b_12), term_u_11), term_p_11), term_k_11), term_a_11), term_v_10), term_r_10), term_k_10), term_g_10), term_c_10), term_y_9), term_u_9), term_k_9);
        t = fetch_elem_1_0(o_0, t);
        ;
        LocalPopChoice(f_9);
      }
    else
      {
        t = d_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm k_3 = NULL,u_3 = NULL;
  k_3 = t;
  {
    ATerm l_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_15 = ATgetArgument(t, 0);
            u_3 = ATgetArgument(t, 1);
            {
              ATerm v_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_15);
        {
          ATerm w_15 = t;
          int x_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_1 = NULL,w_1 = NULL,x_1 = NULL;
              t = u_3;
              {
                ATerm a_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_16;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                u_1 = t;
                t = term_b_16;
                w_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, u_1), term_c_16);
                x_1 = t;
                t = SSL_printnl(w_1, x_1);
                t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATempty, u_1), term_c_16));
              }
              ;
              LocalPopChoice(x_15);
            }
          else
            {
              t = w_15;
              t = k_3;
            }
        }
      }
    else
      {
        t = l_15;
        t = k_3;
      }
    t = k_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm o_58 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  e_4 = t;
  t = fork_0_0(t);
  d_4 = t;
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_4;
        t = o_58(t);
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        t = SSL_waitpid(d_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm f_16 = ATgetArgument(t, 0);
            if(((ATgetType(f_16) != AT_INT) || (ATgetInt((ATermInt) f_16) != 0)))
              _fail(t);
            {
              ATerm g_16 = ATgetArgument(t, 1);
            }
            {
              ATerm h_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm g_78 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL;
  h_4 = t;
  t = g_78(t);
  t = xtc_find_0_0(t);
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_4, h_4);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm m_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, g_4, h_4);
      t = h_6(g_4, h_4, t);
      t = term_i_16;
      m_4 = t;
      t = SSL_exit(m_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
    t = h_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm i_64 (ATerm), ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm j_5 = NULL,l_5 = NULL,m_5 = NULL;
    m_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_5 = ATgetFirst((ATermList) t);
        l_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_2 = NULL,r_2 = NULL,z_1 = NULL;
          t = SSLgetAnnotations(m_5);
          i_2 = t;
          t = l_5;
          t = n_5(t);
          r_2 = t;
          t = (ATerm) ATinsert(CheckATermList(r_2), j_5);
          z_1 = t;
          t = SSLsetAnnotations(z_1, i_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_5;
        t = i_64(t);
      }
    return(t);
  }
  t = n_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
  p_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_4;
    }
  else
    {
      ATerm v_0 (ATerm t)
      {
        t = not_null(r_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_4 = ATgetFirst((ATermList) t);
          if(((r_4 != NULL) && (r_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_4;
      t = at_end_1_0(v_0, t);
    }
  return(t);
}
ATerm g_7 (ATerm p_6, ATerm t)
{
  ATerm t_6 = NULL;
  t = SSL_explode_term(p_6);
  if(match_cons(t, sym__2))
    {
      ATerm j_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
  a_7 = t;
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      z_6 = ATgetArgument(t, 1);
      {
        ATerm k_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              t = z_6;
              return(t);
            }
            t = y_6;
            t = at_end_1_0(x_0, t);
            ;
            LocalPopChoice(l_16);
          }
        else
          {
            t = k_16;
            t = g_7(a_7, t);
          }
      }
    }
  else
    {
      t = g_7(a_7, t);
    }
  return(t);
}
ATerm j_6 (ATerm r_74 (ATerm), ATerm k_32, ATerm i_32, ATerm t)
{
  ATerm h_7 = NULL,l_7 = NULL,m_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
  o_7 = t;
  t = r_74(t);
  h_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_7, k_32, i_32);
  t = s_6(h_7, k_32, i_32, t);
  {
    ATerm m_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_7 = NULL;
        t = term_q_16;
        r_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_7, term_q_16);
        t = r_6(h_7, r_7, t);
        ;
        LocalPopChoice(p_16);
      }
    else
      {
        t = m_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_7 = ATgetFirst((ATermList) t);
        m_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_q_16;
    p_7 = t;
    t = (ATerm) ATinsert(CheckATermList(m_7), (ATerm) ATinsert(CheckATermList(l_7), k_32));
    q_7 = t;
    t = SSL_table_put(h_7, p_7, q_7);
    t = o_7;
  }
  return(t);
}
ATerm p_8 (ATerm y_7, ATerm t)
{
  t = y_7;
  {
    ATerm r_16 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_16 = ATgetArgument(t, 0);
            ATerm z_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_16;
      }
    t = term_a_17;
    t = debug_1_0(y_0, t);
    t = (ATerm) ATmakeAppl(sym__2, y_7, term_s_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm r_8 (ATerm a_8, ATerm b_8, ATerm c_8, ATerm t)
{
  t = SSL_open_file(a_8, b_8);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_b_17;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
  i_8 = t;
  if(match_cons(t, sym__2))
    {
      j_8 = ATgetArgument(t, 0);
      k_8 = ATgetArgument(t, 1);
      {
        ATerm c_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_8(i_8, t);
            ;
            LocalPopChoice(d_17);
          }
        else
          {
            t = c_17;
            t = r_8(j_8, k_8, i_8, t);
          }
      }
    }
  else
    {
      t = p_8(i_8, t);
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
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
  t = term_e_17;
  t = new_0_0(t);
  y_8 = t;
  t = term_f_17;
  z_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_8, term_f_17);
  t = q_6(y_8, z_8, t);
  a_9 = t;
  {
    ATerm h_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_q_8);
        e_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_9, (ATerm) ATinsert(ATempty, term_q_8));
        t = k_6(a_9, e_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(m_17);
      }
    else
      {
        t = h_17;
        t = a_9;
      }
  }
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_p_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL;
  t = new_file_0_0(t);
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_9, term_s_8);
  t = open_file_0_0(t);
  t = term_e_17;
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_9, term_e_17);
  t = j_6(z_0, r_9, s_9, t);
  t = r_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm l_10 = NULL,n_10 = NULL;
  l_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_3 = NULL,i_3 = NULL;
      t = l_10;
      t = xtc_new_file_0_0(t);
      h_3 = t;
      t = r_0(t);
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATinsert(ATinsert(ATempty, h_3), term_q_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(h_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_3);
    }
  else
    {
      ATerm z_3 = NULL,b_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_10;
      t = xtc_new_file_0_0(t);
      z_3 = t;
      t = r_0(t);
      b_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_3), term_q_17), n_10), term_s_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(z_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_3);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm x_75 (ATerm), ATerm t)
{
  ATerm b_11 = NULL;
  b_11 = t;
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_11 = NULL;
        t = term_g_8;
        t = get_config_0_0(t);
        d_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_11, term_w_9);
        t = geq_0_0(t);
        t = b_11;
        t = x_75(t);
        ;
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = b_11;
      }
  }
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_f_18);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(a_1, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_11 = NULL;
  ATerm b_1 (ATerm t)
  {
    ATerm g_11 = NULL,j_11 = NULL;
    g_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_11), g_11);
    t = r_6(not_null(f_11), g_11, t);
    j_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_11, j_11);
    return(t);
  }
  if(((f_11 != NULL) && (f_11 != t)))
    _fail(t);
  else
    f_11 = t;
  t = SSL_table_keys(f_11);
  t = map_1_0(b_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_75 (ATerm), ATerm t)
{
  ATerm l_11 = NULL;
  l_11 = t;
  {
    ATerm l_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_11 = NULL;
        t = term_g_8;
        t = get_config_0_0(t);
        w_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_11, term_t_14);
        t = geq_0_0(t);
        t = l_11;
        t = z_75(t);
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = l_18;
        t = l_11;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_75 (ATerm), ATerm t)
{
  ATerm a_12 = NULL;
  a_12 = t;
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_12 = NULL;
        t = term_g_8;
        t = get_config_0_0(t);
        c_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_12, term_r_11);
        t = geq_0_0(t);
        t = a_12;
        t = y_75(t);
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        t = a_12;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_76 (ATerm), ATerm t)
{
  ATerm h_12 = NULL;
  h_12 = t;
  {
    ATerm c_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_12 = NULL;
        t = term_g_8;
        t = get_config_0_0(t);
        n_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_12, term_a_10);
        t = geq_0_0(t);
        t = h_12;
        t = a_76(t);
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = c_19;
        t = h_12;
      }
  }
  return(t);
}
ATerm z_5 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm m_22, ATerm l_22, ATerm t)
{
  t = a_68(t);
  {
    ATerm c_1 (ATerm t)
    {
      ATerm r_12 = NULL;
      r_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, r_12);
      t = z_67(t);
      return(t);
    }
    t = fetch_1_0(c_1, t);
    t = l_22;
  }
  return(t);
}
ATerm a_6 (ATerm w_67 (ATerm), ATerm i_22, ATerm h_22, ATerm t)
{
  ATerm u_13 (ATerm t)
  {
    ATerm g_13 = NULL,p_13 = NULL,q_13 = NULL;
    g_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_13 = ATgetFirst((ATermList) t);
            q_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_19 = t;
          int j_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_13;
              {
                ATerm j_1 (ATerm t)
                {
                  t = h_22;
                  return(t);
                }
                t = z_5(w_67, j_1, p_13, q_13, t);
                t = u_13(t);
              }
              ;
              LocalPopChoice(j_19);
            }
          else
            {
              t = h_19;
              {
                ATerm n_4 = NULL,v_4 = NULL,c_2 = NULL;
                t = SSLgetAnnotations(g_13);
                n_4 = t;
                t = q_13;
                t = u_13(t);
                v_4 = t;
                t = (ATerm) ATinsert(CheckATermList(v_4), p_13);
                c_2 = t;
                t = SSLsetAnnotations(c_2, n_4);
              }
            }
        }
      }
    return(t);
  }
  t = i_22;
  t = u_13(t);
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
ATerm b_6 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
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
        t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
        t = r_6(y_33, z_33, t);
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = (ATerm) ATempty;
      }
    f_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_14, a_34);
    t = a_6(l_1, f_14, a_34, t);
    e_14 = t;
    t = SSL_table_put(y_33, z_33, e_14);
    t = d_14;
  }
  return(t);
}
ATerm c_6 (ATerm c_76 (ATerm), ATerm i_34, ATerm h_34, ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm m_14 = NULL,o_14 = NULL;
    if(match_cons(t, sym__2))
      {
        m_14 = ATgetArgument(t, 0);
        o_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_34, m_14, o_14);
    t = c_76(t);
    return(t);
  }
  t = h_34;
  t = map_1_0(m_1, t);
  return(t);
}
ATerm k_6 (ATerm f_36, ATerm g_36, ATerm t)
{
  t = SSL_access(f_36, g_36);
  return(t);
}
ATerm s_15 (ATerm e_15, ATerm t)
{
  t = SSL_fclose(e_15);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL;
  n_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_15 = ATgetArgument(t, 0);
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_15);
            ;
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            t = s_15(n_15, t);
          }
      }
    }
  else
    {
      t = s_15(n_15, t);
    }
  return(t);
}
ATerm d_6 (ATerm p_15, ATerm t)
{
  t = SSL_read_term_from_stream(p_15);
  return(t);
}
ATerm f_6 (ATerm n_36, ATerm o_36, ATerm t)
{
  ATerm t_15 = NULL;
  t = SSL_fopen(n_36, o_36);
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_15);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_15 = NULL;
  t = SSL_stdin_stream();
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_15);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_15 = NULL;
  t = SSL_stdout_stream();
  y_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_15 = NULL;
  t = SSL_stderr_stream();
  z_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_15);
  return(t);
}
ATerm y_17 (ATerm n_16, ATerm t)
{
  ATerm o_16 = NULL;
  t = SSL_explode_term(n_16);
  if(match_cons(t, sym__2))
    {
      ATerm w_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_19 = ATgetArgument(t, 1);
        if(((ATgetType(x_19) == AT_LIST) && !(ATisEmpty(x_19))))
          {
            o_16 = ATgetFirst((ATermList) x_19);
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
  t = o_16;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_16;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_16;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_16;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm z_17 (ATerm t_16, ATerm u_16, ATerm v_16, ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,g_17 = NULL,e_2 = NULL;
  t = SSLgetAnnotations(v_16);
  y_16 = t;
  t = t_16;
  if(match_cons(t, sym_Path_1))
    {
      g_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_17, u_16);
  e_2 = t;
  t = SSLsetAnnotations(e_2, y_16);
  if(match_cons(t, sym__2))
    {
      w_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(w_16, x_16, t);
  return(t);
}
ATerm a_18 (ATerm i_17, ATerm j_17, ATerm k_17, ATerm t)
{
  ATerm l_17 = NULL,n_17 = NULL,o_17 = NULL,r_17 = NULL,f_2 = NULL;
  t = SSLgetAnnotations(k_17);
  o_17 = t;
  t = SSL_is_string(i_17);
  r_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_17, j_17);
  f_2 = t;
  t = SSLsetAnnotations(f_2, o_17);
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      n_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(l_17, n_17, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm t_17 = NULL,w_17 = NULL,x_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_19 = ATgetArgument(t, 0);
      ATerm a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t_17 = t;
  if(match_cons(t, sym__2))
    {
      w_17 = ATgetArgument(t, 0);
      x_17 = ATgetArgument(t, 1);
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_17(t_17, t);
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
                  t = z_17(w_17, x_17, t_17, t);
                  ;
                  LocalPopChoice(e_20);
                }
              else
                {
                  t = d_20;
                  t = a_18(w_17, x_17, t_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_17(t_17, t);
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_f_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL;
  ATerm g_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_18 = NULL;
      e_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_18, term_l_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = g_20;
      t = debug_1_0(p_1, t);
      _fail(t);
    }
  c_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(d_18, t);
  b_18 = t;
  t = c_18;
  t = fclose_0_0(t);
  t = b_18;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_18 = NULL,h_18 = NULL;
      g_18 = t;
      t = (ATerm) ATinsert(ATempty, term_q_20);
      h_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_18, (ATerm) ATinsert(ATempty, term_q_20));
      t = k_6(g_18, h_18, t);
      LocalPopChoice(p_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = o_20;
      {
        ATerm v_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_20 = t;
            if((PushChoice() == 0))
              {
                ATerm i_18 = NULL,j_18 = NULL;
                i_18 = t;
                t = (ATerm) ATinsert(ATempty, term_q_8);
                j_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_18, (ATerm) ATinsert(ATempty, term_q_8));
                t = k_6(i_18, j_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_20;
              }
            t = debug_1_0(q_1, t);
            ;
            LocalPopChoice(x_20);
          }
        else
          {
            t = v_20;
            t = debug_1_0(r_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = debug_1_0(t_1, t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_a_21;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_b_21;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,d_19 = NULL;
  a_19 = t;
  t = term_b_16;
  b_19 = t;
  t = (ATerm) ATinsert(ATempty, term_d_21);
  d_19 = t;
  t = SSL_printnl(b_19, d_19);
  t = a_19;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm e_19 = NULL,g_19 = NULL,i_19 = NULL;
  if(match_cons(t, sym__3))
    {
      e_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
      i_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_6(e_19, g_19, i_19, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  k_19 = t;
  t = term_b_16;
  l_19 = t;
  t = (ATerm) ATinsert(ATempty, term_f_21);
  m_19 = t;
  t = SSL_printnl(l_19, m_19);
  t = k_19;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
  n_19 = t;
  t = term_b_16;
  o_19 = t;
  t = (ATerm) ATinsert(ATempty, term_d_21);
  p_19 = t;
  t = SSL_printnl(o_19, p_19);
  t = n_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm k_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,t_18 = NULL,w_18 = NULL,x_18 = NULL;
  k_18 = t;
  t = if_verbose5_1_0(s_1, t);
  {
    ATerm g_21 = t;
    if((PushChoice() == 0))
      {
        ATerm y_18 = NULL,z_18 = NULL;
        t = term_h_21;
        y_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, k_18);
        z_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATmakeAppl(sym_Imported_1, k_18));
        t = r_6(y_18, z_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_21;
      }
    n_18 = t;
    t = term_h_21;
    t_18 = t;
    t = term_i_21;
    w_18 = t;
    t = (ATerm) ATinsert(ATempty, k_18);
    x_18 = t;
    t = SSL_table_put(t_18, w_18, x_18);
    t = n_18;
    t = if_verbose4_1_0(v_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(a_2, t);
    m_18 = t;
    t = term_h_21;
    r_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_21, m_18);
    t = c_6(b_2, r_18, m_18, t);
    t = if_verbose6_1_0(d_2, t);
    t = term_h_21;
    o_18 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, k_18);
    p_18 = t;
    t = (ATerm) ATempty;
    q_18 = t;
    t = SSL_table_put(o_18, p_18, q_18);
    t = (ATerm) ATmakeAppl(sym__3, term_h_21, (ATerm)ATmakeAppl(sym_Imported_1, k_18), (ATerm) ATempty);
    t = if_verbose4_1_0(g_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm o_71 (ATerm), ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
  h_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_20;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_20 = ATgetFirst((ATermList) t);
          j_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm j_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_5 = NULL,w_6 = NULL,x_6 = NULL,l_2 = NULL;
            t = SSLgetAnnotations(h_20);
            y_5 = t;
            t = i_20;
            t = o_71(t);
            w_6 = t;
            t = j_20;
            t = filter_1_0(o_71, t);
            x_6 = t;
            t = (ATerm) ATinsert(CheckATermList(x_6), w_6);
            l_2 = t;
            t = SSLsetAnnotations(l_2, y_5);
            ;
            LocalPopChoice(k_21);
          }
        else
          {
            t = j_21;
            t = j_20;
            t = filter_1_0(o_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm n_73 (ATerm), ATerm t)
{
  ATerm r_20 (ATerm t)
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_73(t);
        t = r_20(t);
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
      }
    return(t);
  }
  t = r_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      {
        ATerm s_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_20 = NULL;
            t = term_w_21;
            s_20 = t;
            t = SSL_getenv(s_20);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = s_21;
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
  t = term_y_21;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm c_21 = NULL,e_21 = NULL;
  t = term_h_21;
  c_21 = t;
  t = term_b_22;
  e_21 = t;
  t = term_c_22;
  t = r_6(c_21, e_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm f_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_22;
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
  t = term_g_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm t_20 = NULL;
  t = if_verbose5_1_0(h_2, t);
  t_20 = t;
  {
    ATerm k_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_20 = NULL,w_20 = NULL;
        t = term_h_21;
        u_20 = t;
        t = term_i_21;
        w_20 = t;
        t = term_o_22;
        t = r_6(u_20, w_20, t);
        ;
        LocalPopChoice(n_22);
      }
    else
      {
        t = k_22;
        {
          ATerm z_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          z_20 = t;
          t = repeat_1_0(k_2, t);
          t = z_20;
        }
      }
    t = t_20;
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
  t = term_p_22;
  return(t);
}
ATerm w_22 (ATerm p_21, ATerm t)
{
  ATerm r_21 = NULL,t_21 = NULL,u_21 = NULL;
  t = term_h_21;
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, p_21);
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATmakeAppl(sym_Tool_1, p_21));
  t = r_6(t_21, u_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_22 = ATgetFirst((ATermList) t);
      if(match_cons(q_22, sym__2))
        {
          ATerm s_22 = ATgetArgument(q_22, 0);
          r_21 = ATgetArgument(q_22, 1);
        }
      else
        _fail(t);
      {
        ATerm r_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_21;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = debug_1_0(c_3, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_p_22;
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_h_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(e_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm u_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_21 = NULL,z_21 = NULL,a_22 = NULL;
      t = if_verbose5_1_0(p_2, t);
      t = xtc_load_0_0(t);
      a_22 = t;
      if(match_cons(t, sym__2))
        {
          x_21 = ATgetArgument(t, 0);
          z_21 = ATgetArgument(t, 1);
          {
            ATerm y_22 = t;
            int z_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_22 = NULL,e_22 = NULL,j_22 = NULL;
                t = term_h_21;
                e_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, x_21);
                j_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATmakeAppl(sym_Tool_1, x_21));
                t = r_6(e_22, j_22, t);
                {
                  ATerm t_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((z_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((d_22 != NULL) && (d_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          d_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(t_2, t);
                  t = not_null(d_22);
                }
                ;
                LocalPopChoice(z_22);
              }
            else
              {
                t = y_22;
                t = w_22(a_22, t);
              }
          }
        }
      else
        {
          t = w_22(a_22, t);
        }
      t = if_verbose5_1_0(z_2, t);
      ;
      LocalPopChoice(x_22);
    }
  else
    {
      t = u_22;
      {
        ATerm v_22 = NULL,n_7 = NULL,s_7 = NULL;
        v_22 = t;
        t = term_b_16;
        n_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_23), v_22), term_a_23);
        s_7 = t;
        t = SSL_printnl(n_7, s_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_23), v_22), term_a_23);
        t = if_verbose5_1_0(d_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_c_23;
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_c_23;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_23 = NULL,m_23 = NULL;
      m_23 = t;
      if(match_cons(t, sym_FILE_1))
        {
          l_23 = ATgetArgument(t, 0);
          {
            ATerm w_7 = NULL,n_2 = NULL;
            t = SSLgetAnnotations(m_23);
            w_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, l_23);
            n_2 = t;
            t = SSLsetAnnotations(n_2, w_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_23;
        }
      LocalPopChoice(e_23);
      {
        ATerm g_3 (ATerm t)
        {
          ATerm n_23 = NULL,o_23 = NULL;
          t = term_e_17;
          t = d_88(t);
          t = xtc_find_0_0(t);
          n_23 = t;
          t = term_e_17;
          t = pass_v_verbose_0_0(t);
          o_23 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(o_23), n_23), term_g_23), term_f_23);
          return(t);
        }
        t = xtc_transform_file_2_0(f_3, g_3, t);
      }
    }
  else
    {
      t = d_23;
      {
        ATerm m_3 (ATerm t)
        {
          ATerm u_23 = NULL,v_23 = NULL;
          t = term_e_17;
          t = d_88(t);
          t = xtc_find_0_0(t);
          u_23 = t;
          t = term_e_17;
          t = pass_v_verbose_0_0(t);
          v_23 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_23), u_23), term_g_23), term_f_23);
          return(t);
        }
        t = xtc_transform_term_2_0(j_3, m_3, t);
      }
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
  ATerm s_24 = NULL,t_24 = NULL;
  s_24 = t;
  if(match_cons(t, sym_FILE_1))
    {
      t_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_8 = NULL;
        t = s_24;
        t = n_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, t_24, o_8);
        t = l_6(t_24, o_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, t_24);
        ;
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        {
          ATerm j_23 = t;
          int k_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_8 = NULL;
              t = s_24;
              t = n_0(t);
              x_8 = t;
              {
                ATerm p_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm c_9 = NULL;
                    c_9 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = c_9;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = c_9;
                          }
                        else
                          {
                            t = c_9;
                            if((t_24 != t))
                              {
                                _fail(t);
                              }
                            t = c_9;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_23;
                  }
                t = (ATerm) ATmakeAppl(sym__2, t_24, x_8);
                t = l_6(t_24, x_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, t_24);
              }
              ;
              LocalPopChoice(k_23);
            }
          else
            {
              t = j_23;
              t = s_24;
              t = n_0(t);
              if((t_24 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_24);
            }
        }
      }
  }
  return(t);
}
ATerm m_6 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  y_24 = t;
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
        t = r_6(g_33, h_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_23 = ATgetFirst((ATermList) t);
            x_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_23);
        t = SSL_table_put(g_33, h_33, x_24);
        t = (ATerm) ATmakeAppl(sym__3, g_33, h_33, x_24);
      }
    else
      {
        t = q_23;
        t = SSL_table_remove(g_33, h_33);
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
      }
    t = y_24;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm o_74 (ATerm), ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
  c_25 = t;
  t = o_74(t);
  b_25 = t;
  {
    ATerm t_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_25 = NULL;
        t = term_q_16;
        f_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_25, term_q_16);
        t = r_6(b_25, f_25, t);
        ;
        LocalPopChoice(w_23);
      }
    else
      {
        t = t_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_25 = ATgetFirst((ATermList) t);
        z_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_q_16;
    d_25 = t;
    t = SSL_table_put(b_25, d_25, z_24);
    t = a_25;
    {
      ATerm o_3 (ATerm t)
      {
        ATerm g_25 = NULL;
        g_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_25, g_25);
        t = m_6(b_25, g_25, t);
        return(t);
      }
      t = map_1_0(o_3, t);
      t = c_25;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_75(t);
      t = k_75(t);
      ;
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
      t = k_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_74 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  j_25 = t;
  t = n_74(t);
  i_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_25, term_q_16);
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_24 = ATgetArgument(t, 0);
            ATerm c_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_16;
        s_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_25, term_q_16);
        t = r_6(i_25, s_25, t);
        ;
        LocalPopChoice(a_24);
      }
    else
      {
        t = z_23;
        t = (ATerm) ATempty;
      }
    k_25 = t;
    t = term_q_16;
    l_25 = t;
    t = (ATerm) ATinsert(CheckATermList(k_25), (ATerm) ATempty);
    m_25 = t;
    t = SSL_table_put(i_25, l_25, m_25);
    t = j_25;
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_p_17;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(f_26);
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        t = f_26;
      }
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_p_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm s_77 (ATerm), ATerm t)
{
  ATerm w_25 = NULL;
  ATerm q_3 (ATerm t)
  {
    ATerm x_25 = NULL;
    x_25 = t;
    {
      ATerm f_24 = t;
      int g_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_25 = NULL,a_26 = NULL;
          t = term_p_17;
          z_25 = t;
          t = term_q_16;
          a_26 = t;
          t = term_h_24;
          t = r_6(z_25, a_26, t);
          ;
          LocalPopChoice(g_24);
        }
      else
        {
          t = f_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_25 != NULL) && (w_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_25 = ATgetFirst((ATermList) t);
          {
            ATerm i_24 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = w_25;
      t = map_1_0(s_3, t);
      t = x_25;
      t = end_scope_1_0(t_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(p_3, t);
  t = restore_always_2_0(s_77, q_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      t = term_l_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm t_77 (ATerm), ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_26 = NULL;
        t = term_s_17;
        t = get_config_0_0(t);
        o_26 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, o_26);
        ;
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = term_n_8;
      }
    t = t_77(t);
    t = copy_to_1_0(w_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(v_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,t_26 = NULL,u_26 = NULL;
  p_26 = t;
  t = term_e_17;
  t = whoami_0_0(t);
  q_26 = t;
  t = term_b_16;
  t_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_24), q_26), term_o_24);
  u_26 = t;
  t = SSL_printnl(t_26, u_26);
  t = term_m_8;
  r_26 = t;
  t = SSL_exit(r_26);
  t = p_26;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm w_26 = NULL;
  w_26 = t;
  if(match_string(t, "-k"))
    {
      t = w_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_26;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,c_27 = NULL;
  y_26 = t;
  t = SSL_string_to_int(y_26);
  z_26 = t;
  t = term_q_24;
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_24, z_26);
  t = u_6(c_27, z_26, t);
  t = y_26;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_3, y_3, a_4, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm e_27 = NULL;
  e_27 = t;
  if(match_string(t, "-S"))
    {
      t = e_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_27;
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL;
  t = term_g_8;
  f_27 = t;
  t = term_u_24;
  g_27 = t;
  t = term_v_24;
  t = u_6(f_27, g_27, t);
  t = term_w_24;
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_e_25;
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
  ATerm h_27 = NULL,i_27 = NULL,k_27 = NULL;
  h_27 = t;
  t = SSL_string_to_int(h_27);
  i_27 = t;
  t = term_g_8;
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_8, i_27);
  t = u_6(k_27, i_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_27);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_h_25;
  return(t);
}
ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL;
  t = term_n_25;
  l_27 = t;
  t = term_e_17;
  m_27 = t;
  t = term_o_25;
  t = u_6(l_27, m_27, t);
  t = term_p_25;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_q_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, f_4, i_4, t);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = r_25;
      {
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_4, k_4, l_4, t);
            ;
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
            t = Option_3_0(o_4, s_4, t_4, t);
          }
      }
    }
  return(t);
}
ATerm u_6 (ATerm b_35, ATerm c_35, ATerm t)
{
  ATerm n_27 = NULL;
  t = term_y_25;
  n_27 = t;
  t = SSL_table_put(n_27, b_35, c_35);
  t = (ATerm) ATmakeAppl(sym__3, term_y_25, b_35, c_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
      t = term_e_17;
      t = h_0(t);
      s_27 = t;
      t = term_b_26;
      t_27 = t;
      t = term_c_26;
      u_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_26, term_c_26, s_27);
      t = s_6(t_27, u_27, s_27, t);
      _fail(t);
    }
  else
    {
      ATerm b_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_27 = ATgetFirst((ATermList) t);
          r_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_27;
      t = d_0(t);
      t = term_e_17;
      t = g_0(t);
      b_28 = t;
      t = (ATerm) ATinsert(CheckATermList(r_27), b_28);
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm d_28 = NULL;
  d_28 = t;
  if(match_string(t, "-o"))
    {
      t = d_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_28;
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm h_28 = NULL,k_28 = NULL;
  h_28 = t;
  t = term_q_17;
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, h_28);
  t = u_6(k_28, h_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_28);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, x_4, y_4, t);
  return(t);
}
ATerm s_6 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
  {
    ATerm e_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_26 = ATgetArgument(t, 0);
            ATerm i_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
        t = r_6(b_33, c_33, t);
        ;
        LocalPopChoice(g_26);
      }
    else
      {
        t = e_26;
        t = (ATerm) ATempty;
      }
    r_28 = t;
    t = (ATerm) ATinsert(CheckATermList(r_28), a_33);
    s_28 = t;
    t = SSL_table_put(b_33, c_33, s_28);
    t = q_28;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
      t = term_e_17;
      t = m_0(t);
      l_29 = t;
      t = term_b_26;
      m_29 = t;
      t = term_c_26;
      n_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_26, term_c_26, l_29);
      t = s_6(m_29, n_29, l_29, t);
      _fail(t);
    }
  else
    {
      ATerm r_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_29 = ATgetFirst((ATermList) t);
          i_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_29 = ATgetFirst((ATermList) t);
          k_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_29;
      t = k_0(t);
      t = j_29;
      t = l_0(t);
      r_29 = t;
      t = (ATerm) ATinsert(CheckATermList(k_29), r_29);
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm v_29 = NULL;
  v_29 = t;
  if(match_string(t, "-i"))
    {
      t = v_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_29;
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL;
  w_29 = t;
  t = term_s_17;
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_17, w_29);
  t = u_6(x_29, w_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_29);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_4, b_5, c_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_17;
  t = whoami_0_0(t);
  y_29 = t;
  t = term_b_16;
  a_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_26), y_29);
  b_30 = t;
  t = SSL_printnl(a_30, b_30);
  t = term_m_8;
  z_29 = t;
  t = SSL_exit(z_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_6 (ATerm w_30, ATerm x_30, ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_30, x_30);
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      t = SSL_addr(w_30, x_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  d_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_30;
      t = k_70(t);
    }
  else
    {
      ATerm i_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_30 = ATgetFirst((ATermList) t);
          f_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_30;
      t = foldr_2_0(k_70, l_70, t);
      i_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_30, i_30);
      t = l_70(t);
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
  t = term_u_24;
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
  t = n_6(p_9, q_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_30 = NULL,l_9 = NULL,m_9 = NULL;
  t = times_0_0(t);
  m_9 = t;
  t = SSL_explode_term(m_9);
  if(match_cons(t, sym__2))
    {
      ATerm s_26 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9;
  t = foldr_2_0(e_5, g_5, t);
  l_30 = t;
  t = SSL_TicksToSeconds(l_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,e_31 = NULL;
  a_31 = t;
  if(match_cons(t, sym__2))
    {
      b_31 = ATgetArgument(t, 0);
      e_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_31;
        if((b_31 != t))
          {
            _fail(t);
          }
        t = a_31;
        ;
        LocalPopChoice(x_26);
      }
    else
      {
        t = v_26;
        t = (ATerm) ATmakeAppl(sym__2, b_31, e_31);
        {
          ATerm a_27 = t;
          int b_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_31, e_31);
              ;
              LocalPopChoice(b_27);
            }
          else
            {
              t = a_27;
              t = SSL_gtr(b_31, e_31);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_31, e_31);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_75 (ATerm), ATerm t)
{
  ATerm i_31 = NULL;
  i_31 = t;
  {
    ATerm d_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_31 = NULL;
        t = term_g_8;
        t = get_config_0_0(t);
        k_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_31, term_m_8);
        t = geq_0_0(t);
        t = i_31;
        t = v_75(t);
        ;
        LocalPopChoice(j_27);
      }
    else
      {
        t = d_27;
        t = i_31;
      }
  }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,p_31 = NULL,q_31 = NULL;
  t = run_time_0_0(t);
  m_31 = t;
  t = term_e_17;
  t = whoami_0_0(t);
  n_31 = t;
  t = term_b_16;
  p_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_27), m_31), term_w_8), n_31);
  q_31 = t;
  t = SSL_printnl(p_31, q_31);
  t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_27), m_31), term_w_8), n_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_24;
  r_31 = t;
  t = SSL_exit(r_31);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL;
  a_32 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = a_32;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          z_31 = ATgetArgument(t, 0);
          {
            ATerm o_10 = NULL,s_2 = NULL;
            t = SSLgetAnnotations(a_32);
            o_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, z_31);
            s_2 = t;
            t = SSLsetAnnotations(s_2, o_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = a_32;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  ATerm p_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = p_27;
      t = fetch_1_0(k_5, t);
    }
  t = u_79(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_32 = ATgetFirst((ATermList) t);
      p_32 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_32 = NULL,v_32 = NULL;
        ATerm o_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_32)), not_null(v_32));
          return(t);
        }
        t = p_32;
        t = j_0(t);
        if(((u_32 != NULL) && (u_32 != t)))
          _fail(t);
        else
          u_32 = t;
        t = o_32;
        t = i_0(t);
        if(((v_32 != NULL) && (v_32 != t)))
          _fail(t);
        else
          v_32 = t;
        t = p_32;
        t = reverse_acc_2_0(i_0, o_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_17;
      t = j_0(t);
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,y_2 = NULL;
  l_33 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_33);
  j_33 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_33);
  y_2 = t;
  t = SSLsetAnnotations(y_2, j_33);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm n_33 = NULL;
  n_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_33), term_x_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_33 = NULL,i_33 = NULL;
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_27);
    }
  else
    {
      t = y_27;
      t = fetch_1_0(p_5, t);
    }
  t = term_a_28;
  t = echo_0_0(t);
  t = term_b_26;
  e_33 = t;
  t = term_c_26;
  i_33 = t;
  t = term_c_28;
  t = r_6(e_33, i_33, t);
  t = reverse_acc_2_0(_id, q_5, t);
  t = map_1_0(r_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_64 (ATerm), ATerm t)
{
  ATerm v_34 (ATerm t)
  {
    ATerm q_34 = NULL,r_34 = NULL,u_34 = NULL;
    q_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_34 = ATgetFirst((ATermList) t);
        u_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_28 = t;
      int f_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_10 = NULL,h_11 = NULL,l_3 = NULL;
          t = SSLgetAnnotations(q_34);
          y_10 = t;
          t = r_34;
          t = c_64(t);
          h_11 = t;
          t = (ATerm) ATinsert(CheckATermList(u_34), h_11);
          l_3 = t;
          t = SSLsetAnnotations(l_3, y_10);
          ;
          LocalPopChoice(f_28);
        }
      else
        {
          t = e_28;
          {
            ATerm s_11 = NULL,v_11 = NULL,n_3 = NULL;
            t = SSLgetAnnotations(q_34);
            s_11 = t;
            t = u_34;
            t = v_34(t);
            v_11 = t;
            t = (ATerm) ATinsert(CheckATermList(v_11), r_34);
            n_3 = t;
            t = SSLsetAnnotations(n_3, s_11);
          }
        }
    }
    return(t);
  }
  t = v_34(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,d_35 = NULL;
  z_34 = t;
  {
    ATerm g_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_28 = ATgetFirst((ATermList) t);
                ATerm l_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_34;
          }
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = g_28;
        t = (ATerm) ATinsert(ATempty, z_34);
      }
    a_35 = t;
    t = term_l_24;
    d_35 = t;
    t = SSL_printnl(d_35, a_35);
    t = z_34;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm q_6 (ATerm s_29, ATerm t_29, ATerm t)
{
  t = SSL_strcat(s_29, t_29);
  return(t);
}
ATerm debug_1_0 (ATerm x_59 (ATerm), ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,p_35 = NULL;
  h_35 = t;
  t = x_59(t);
  i_35 = t;
  t = term_b_16;
  j_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_35), i_35);
  p_35 = t;
  t = SSL_printnl(j_35, p_35);
  t = h_35;
  return(t);
}
ATerm map_1_0 (ATerm s_63 (ATerm), ATerm t)
{
  ATerm j_36 (ATerm t)
  {
    ATerm e_36 = NULL,h_36 = NULL,i_36 = NULL;
    e_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_36;
      }
    else
      {
        ATerm s_12 = NULL,v_12 = NULL,c_13 = NULL,r_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_36 = ATgetFirst((ATermList) t);
            i_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_36);
        s_12 = t;
        t = h_36;
        t = s_63(t);
        v_12 = t;
        t = i_36;
        t = j_36(t);
        c_13 = t;
        t = (ATerm) ATinsert(CheckATermList(c_13), v_12);
        r_3 = t;
        t = SSLsetAnnotations(r_3, s_12);
      }
    return(t);
  }
  t = j_36(t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_o_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_36 = NULL;
      v_36 = t;
      t = SSL_is_string(v_36);
      ;
      LocalPopChoice(t_28);
    }
  else
    {
      t = p_28;
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_5, t);
            ;
            LocalPopChoice(v_28);
          }
        else
          {
            t = u_28;
            {
              ATerm b_37 = NULL,c_37 = NULL,j_37 = NULL;
              b_37 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_37 = ATgetArgument(t, 0);
                  t = c_37;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_37 = ATgetArgument(t, 0);
                      t = c_37;
                      {
                        ATerm w_28 = t;
                        int x_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(x_28);
                          }
                        else
                          {
                            t = w_28;
                            t = debug_1_0(t_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_37 = NULL,q_37 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_37 = ATgetArgument(t, 0);
                          j_37 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_37;
                      t = eval_config_0_0(t);
                      p_37 = t;
                      t = j_37;
                      t = eval_config_0_0(t);
                      q_37 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_37, q_37);
                      t = q_6(p_37, q_37, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm r_6 (ATerm s_34, ATerm t_34, ATerm t)
{
  t = SSL_table_get(s_34, t_34);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL;
  w_37 = t;
  t = term_y_25;
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_25, w_37);
  t = r_6(x_37, w_37, t);
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_37 = NULL,a_38 = NULL;
        t = eval_config_0_0(t);
        z_37 = t;
        t = term_y_25;
        a_38 = t;
        t = SSL_table_put(a_38, w_37, z_37);
        t = z_37;
        ;
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
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
  ATerm g_38 = NULL,h_38 = NULL;
  t = term_a_29;
  g_38 = t;
  t = term_e_17;
  h_38 = t;
  t = term_b_29;
  t = u_6(g_38, h_38, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm i_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
  t = term_a_29;
  k_38 = t;
  t = term_e_17;
  l_38 = t;
  t = term_b_29;
  t = u_6(k_38, l_38, t);
  t = term_f_18;
  i_38 = t;
  t = term_e_17;
  j_38 = t;
  t = term_d_29;
  t = u_6(i_38, j_38, t);
  t = term_e_29;
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, v_5, w_5, t);
      ;
      LocalPopChoice(o_29);
    }
  else
    {
      t = g_29;
      t = Option_3_0(i_6, o_6, v_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_51 (ATerm), ATerm l_51 (ATerm), ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,a_5 = NULL;
  w_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_38 = ATgetFirst((ATermList) t);
      t_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_38);
  m_38 = t;
  t = n_38;
  t = k_51(t);
  u_38 = t;
  t = t_38;
  t = l_51(t);
  v_38 = t;
  t = (ATerm) ATinsert(CheckATermList(v_38), u_38);
  a_5 = t;
  t = SSLsetAnnotations(a_5, m_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_81 (ATerm), ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,e_39 = NULL,f_39 = NULL,h_39 = NULL,i_39 = NULL,d_5 = NULL;
  b_39 = t;
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_29;
        t = s_81(t);
        ;
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
      }
    t = b_39;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_39 = ATgetFirst((ATermList) t);
        f_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(b_39);
    c_39 = t;
    t = term_l_26;
    i_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_26, e_39);
    t = u_6(i_39, e_39, t);
    t = f_39;
    {
      ATerm s_39 (ATerm t)
      {
        ATerm c_30 = t;
        int g_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_30 = t;
            int j_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_39 = NULL;
                l_39 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_39;
                ;
                LocalPopChoice(j_30);
              }
            else
              {
                t = h_30;
                t = s_81(t);
                t = Cons_2_0(_id, s_39, t);
              }
            ;
            LocalPopChoice(g_30);
          }
        else
          {
            t = c_30;
            {
              ATerm o_39 = NULL,p_39 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_39 = ATgetFirst((ATermList) t);
                  p_39 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_39), (ATerm) ATmakeAppl(sym_Undefined_1, o_39));
            }
          }
        return(t);
      }
      t = s_39(t);
      h_39 = t;
      t = (ATerm) ATinsert(CheckATermList(h_39), (ATerm) ATmakeAppl(sym_Program_1, e_39));
      d_5 = t;
      t = SSLsetAnnotations(d_5, c_39);
    }
  }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm e_40 = NULL;
  e_40 = t;
  if(match_string(t, "--help"))
    {
      t = e_40;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_40;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_40;
        }
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL;
  t = term_w_27;
  f_40 = t;
  t = term_e_17;
  g_40 = t;
  t = term_k_30;
  t = u_6(f_40, g_40, t);
  t = term_m_30;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_n_30;
  return(t);
}
ATerm f_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_81 (ATerm), ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL;
  z_39 = t;
  t = term_b_26;
  b_40 = t;
  t = term_c_26;
  c_40 = t;
  t = (ATerm) ATempty;
  d_40 = t;
  t = SSL_table_put(b_40, c_40, d_40);
  t = z_39;
  {
    ATerm b_7 (ATerm t)
    {
      ATerm o_30 = t;
      int p_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_81(t);
          ;
          LocalPopChoice(p_30);
        }
      else
        {
          t = o_30;
          {
            ATerm q_30 = t;
            int r_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_7, d_7, e_7, t);
                ;
                LocalPopChoice(r_30);
              }
            else
              {
                t = q_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_7, t);
    {
      ATerm s_30 = t;
      int t_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_40 = NULL;
          n_40 = t;
          {
            ATerm u_30 = t;
            int v_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_14 = NULL;
                t = n_40;
                {
                  ATerm y_30 = t;
                  int z_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_w_27;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(z_30);
                    }
                  else
                    {
                      t = y_30;
                      t = fetch_1_0(f_7, t);
                    }
                  t = n_40;
                  t = default_system_usage_0_0(t);
                  t = term_u_24;
                  a_14 = t;
                  t = SSL_exit(a_14);
                }
                ;
                LocalPopChoice(v_30);
              }
            else
              {
                t = u_30;
                {
                  ATerm j_14 = NULL;
                  t = term_a_29;
                  t = get_config_0_0(t);
                  t = n_40;
                  t = default_system_about_0_0(t);
                  t = term_u_24;
                  j_14 = t;
                  t = SSL_exit(j_14);
                }
              }
          }
          ;
          LocalPopChoice(t_30);
        }
      else
        {
          t = s_30;
          {
            ATerm f_31 = t;
            int g_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
                ATerm i_7 (ATerm t)
                {
                  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,f_5 = NULL;
                  t_40 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      s_40 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_40);
                  r_40 = t;
                  t = s_40;
                  if(((x_39 != NULL) && (x_39 != t)))
                    _fail(t);
                  else
                    x_39 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, s_40);
                  f_5 = t;
                  t = SSLsetAnnotations(f_5, r_40);
                  return(t);
                }
                t = fetch_1_0(i_7, t);
                t = term_b_16;
                p_40 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_39)), term_h_31);
                q_40 = t;
                t = SSL_printnl(p_40, q_40);
                t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_39)), term_h_31));
                t = default_system_usage_0_0(t);
                t = term_m_8;
                o_40 = t;
                t = SSL_exit(o_40);
                ;
                LocalPopChoice(g_31);
              }
            else
              {
                t = f_31;
              }
          }
        }
      y_39 = t;
      t = term_b_26;
      a_40 = t;
      t = SSL_table_destroy(a_40);
      t = y_39;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL;
  t = parse_options_1_0(w_79, t);
  y_40 = t;
  t = term_j_31;
  b_41 = t;
  t = SSL_table_create(b_41);
  t = term_j_31;
  z_40 = t;
  t = term_l_31;
  a_41 = t;
  t = SSL_table_put(z_40, a_41, y_40);
  t = y_40;
  t = y_79(t);
  {
    ATerm o_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_79, t);
        ;
        LocalPopChoice(s_31);
      }
    else
      {
        t = o_31;
        {
          ATerm t_31 = t;
          int u_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_79(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_31);
            }
          else
            {
              t = t_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(w_31);
    }
  else
    {
      t = v_31;
      {
        ATerm x_31 = t;
        int y_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(y_31);
          }
        else
          {
            t = x_31;
            {
              ATerm b_32 = t;
              int c_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(t_7, u_7, v_7, t);
                  ;
                  LocalPopChoice(c_32);
                }
              else
                {
                  t = b_32;
                  {
                    ATerm d_32 = t;
                    int e_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(e_32);
                      }
                    else
                      {
                        t = d_32;
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
  t = xtc_io_1_0(x_7, t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL;
  t = term_f_32;
  f_41 = t;
  t = term_e_17;
  g_41 = t;
  t = term_g_32;
  t = u_6(f_41, g_41, t);
  t = term_h_32;
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = xtc_sglr_1_0(z_7, t);
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_41 = NULL,o_41 = NULL;
        o_41 = t;
        if(match_cons(t, sym_FILE_1))
          {
            n_41 = ATgetArgument(t, 0);
            {
              ATerm r_14 = NULL,h_5 = NULL;
              t = SSLgetAnnotations(o_41);
              r_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_41);
              h_5 = t;
              t = SSLsetAnnotations(h_5, r_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_41;
          }
        LocalPopChoice(m_32);
        t = xtc_transform_file_2_0(d_8, pass_verbose_0_0, t);
      }
    else
      {
        t = l_32;
        t = xtc_transform_term_2_0(e_8, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(j_7, default_usage_0_0, _id, k_7, t);
  return(t);
}
