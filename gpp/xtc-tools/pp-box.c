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
ATerm term_w_32;
ATerm term_u_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_e_32;
ATerm term_c_32;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_e_30;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_o_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_o_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_s_26;
ATerm term_j_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_p_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_j_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_n_24;
ATerm term_y_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_s_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_t_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_q_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_h_18;
ATerm term_b_18;
ATerm term_v_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_w_16;
ATerm term_m_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_l_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_n_13;
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
ATerm term_z_12;
ATerm term_y_12;
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
ATerm term_k_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_o_10;
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
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_f_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_m_8;
ATerm term_g_8;
void init_constant_terms (void)
{
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_9, term_m_8, term_l_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_q_9, term_r_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_v_9, term_w_9);
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
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_o_10, term_p_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_10, term_t_10, term_u_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_10, term_z_10, term_d_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_11, term_i_11, term_k_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_o_11, term_p_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_11, term_u_11, term_v_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_z_11, term_c_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_k_12, term_n_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_q_12, term_r_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_v_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_z_12, term_c_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_f_13, term_g_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_o_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_x_13, term_y_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_e_14);
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
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_t_14, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_y_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_e_15, term_f_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_q_15, term_s_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_b_22);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_f_21);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_w_16);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_z_24);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_24);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym__2, term_j_25, term_l_17);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_z_25, term_a_26);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_g_29, term_l_17);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym__2, term_k_29, term_l_17);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym__2, term_v_27, term_l_17);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_c_32, term_l_17);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.pp.af", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm u_5 (ATerm h_26, ATerm i_26, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm b_6 (ATerm j_15, ATerm k_15, ATerm);
ATerm d_6 (ATerm z_59 (ATerm), ATerm v_157, ATerm r_15, ATerm);
ATerm e_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm);
ATerm e_6 (ATerm f_12, ATerm g_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm e_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm o_58 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm x_75 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm i_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm d_7 (ATerm t_6, ATerm);
ATerm conc_0_0 (ATerm);
ATerm g_6 (ATerm i_72 (ATerm), ATerm p_27, ATerm n_27, ATerm);
ATerm w_8 (ATerm w_7, ATerm);
ATerm x_8 (ATerm c_8, ATerm e_8, ATerm i_8, ATerm);
ATerm y_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm q_73 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm p_73 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm r_73 (ATerm), ATerm);
ATerm w_5 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm m_22, ATerm l_22, ATerm);
ATerm x_5 (ATerm w_67 (ATerm), ATerm i_22, ATerm h_22, ATerm);
ATerm i_1 (ATerm);
ATerm y_5 (ATerm d_29, ATerm e_29, ATerm f_29, ATerm);
ATerm z_5 (ATerm t_73 (ATerm), ATerm n_29, ATerm m_29, ATerm);
ATerm h_6 (ATerm k_31, ATerm l_31, ATerm);
ATerm g_15 (ATerm s_14, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm a_6 (ATerm p_15, ATerm);
ATerm c_6 (ATerm s_31, ATerm t_31, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm s_17 (ATerm d_16, ATerm);
ATerm t_17 (ATerm k_16, ATerm l_16, ATerm o_16, ATerm);
ATerm w_17 (ATerm z_16, ATerm a_17, ATerm g_17, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm k_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm v_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm o_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm p_79 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm l_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_22 (ATerm i_21, ATerm);
ATerm z_2 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm i_6 (ATerm l_12, ATerm m_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm j_6 (ATerm l_28, ATerm m_28, ATerm);
ATerm end_scope_1_0 (ATerm f_72 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm e_72 (ATerm), ATerm);
ATerm g_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm j_75 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm xtc_io_1_0 (ATerm k_75 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm k_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm r_6 (ATerm g_30, ATerm h_30, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm p_6 (ATerm g_28, ATerm h_28, ATerm f_28, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm k_6 (ATerm b_26, ATerm c_26, ATerm);
ATerm foldr_2_0 (ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_73 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm c_5 (ATerm);
ATerm need_help_1_0 (ATerm l_77 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm c_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_6 (ATerm m_46, ATerm n_46, ATerm);
ATerm debug_1_0 (ATerm x_59 (ATerm), ATerm);
ATerm map_1_0 (ATerm s_63 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm p_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm o_6 (ATerm x_29, ATerm y_29, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm f_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm k_51 (ATerm), ATerm l_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_79 (ATerm), ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm v_6 (ATerm);
ATerm b_7 (ATerm);
ATerm parse_options_1_0 (ATerm i_79 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm i_7 (ATerm);
ATerm k_7 (ATerm);
ATerm q_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm d_8 (ATerm);
ATerm io_pp_box_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm u_5 (ATerm h_26, ATerm i_26, ATerm t)
{
  ATerm t_4 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(h_26, i_26);
      ;
      LocalPopChoice(f_8);
    }
  else
    {
      t = t_4;
      t = SSL_subtr(h_26, i_26);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,q_0 = NULL;
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
    t = u_5(b_0, q_0, t);
    c_0 = t;
    t = SSL_int_to_string(c_0);
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
      t = term_q_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm c_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_r_8);
      c_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_0, (ATerm) ATinsert(ATempty, term_r_8));
      t = h_6(w_0, c_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm b_6 (ATerm j_15, ATerm k_15, ATerm t)
{
  ATerm d_1 = NULL;
  t = SSL_write_term_to_stream_baf(j_15, k_15);
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_1);
  return(t);
}
ATerm d_6 (ATerm z_59 (ATerm), ATerm v_157, ATerm r_15, ATerm t)
{
  ATerm e_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_157, term_s_8);
  t = open_stream_0_0(t);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_1, r_15);
  t = z_59(t);
  t = fclose_0_0(t);
  t = r_15;
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_8 = ATgetArgument(t, 0);
      if(match_cons(t_8, sym_Stream_1))
        {
          p_1 = ATgetArgument(t_8, 0);
        }
      else
        _fail(t);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(p_1, q_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm f_1 = NULL,g_1 = NULL;
  f_1 = t;
  t = xtc_new_file_0_0(t);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_1, f_1);
  t = d_6(e_0, g_1, f_1, t);
  t = SSL_close_file(g_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(g_76, h_76, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm e_6 (ATerm f_12, ATerm g_12, ATerm t)
{
  t = SSL_execvp(f_12, g_12);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
  s_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      t_2 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,t_0 = NULL;
        t = SSL_int_to_string(t_2);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_8), s_0), term_u_8);
        t_0 = t;
        t = SSL_concat_strings(t_0);
      }
    }
  else
    {
      ATerm l_1 = NULL,m_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          t_2 = ATgetArgument(t, 0);
          u_2 = ATgetArgument(t, 1);
          v_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(u_2);
      l_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_2), term_f_9), l_1), term_a_9), t_2);
      m_1 = t;
      t = SSL_concat_strings(m_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_64 (ATerm), ATerm t)
{
  ATerm y_2 = NULL;
  ATerm f_0 (ATerm t)
  {
    t = e_64(t);
    if(((y_2 != NULL) && (y_2 != t)))
      _fail(t);
    else
      y_2 = t;
    return(t);
  }
  t = fetch_1_0(f_0, t);
  t = not_null(y_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_3 = NULL;
  b_3 = t;
  {
    ATerm g_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm i_9 = ATgetArgument(t, 0);
              if((b_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm j_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_15), term_l_15), term_z_14), term_v_14), term_p_14), term_l_14), term_h_14), term_z_13), term_s_13), term_l_13), term_h_13), term_d_13), term_w_12), term_s_12), term_o_12), term_d_12), term_x_11), term_r_11), term_l_11), term_e_11), term_w_10), term_r_10), term_l_10), term_h_10), term_d_10), term_z_9), term_s_9), term_m_9);
        t = fetch_elem_1_0(o_0, t);
        ;
        LocalPopChoice(h_9);
      }
    else
      {
        t = g_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm j_3 = NULL,t_3 = NULL;
  j_3 = t;
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_15 = ATgetArgument(t, 0);
            t_3 = ATgetArgument(t, 1);
            {
              ATerm x_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_15);
        {
          ATerm y_15 = t;
          int z_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_1 = NULL,w_1 = NULL,x_1 = NULL;
              t = t_3;
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
              LocalPopChoice(z_15);
            }
          else
            {
              t = y_15;
              t = j_3;
            }
        }
      }
    else
      {
        t = u_15;
        t = j_3;
      }
    t = j_3;
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
  ATerm c_4 = NULL,d_4 = NULL;
  d_4 = t;
  t = fork_0_0(t);
  c_4 = t;
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = d_4;
        t = o_58(t);
        ;
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        t = SSL_waitpid(c_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_16 = ATgetArgument(t, 0);
            if(((ATgetType(h_16) != AT_INT) || (ATgetInt((ATermInt) h_16) != 0)))
              _fail(t);
            {
              ATerm i_16 = ATgetArgument(t, 1);
            }
            {
              ATerm j_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = d_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm x_75 (ATerm), ATerm t)
{
  ATerm f_4 = NULL,i_4 = NULL;
  i_4 = t;
  t = x_75(t);
  t = xtc_find_0_0(t);
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_4, i_4);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm j_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, f_4, i_4);
      t = e_6(f_4, i_4, t);
      t = term_m_16;
      j_4 = t;
      t = SSL_exit(j_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
    t = i_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm i_64 (ATerm), ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm j_5 = NULL,m_5 = NULL,n_5 = NULL;
    n_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_5 = ATgetFirst((ATermList) t);
        m_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_2 = NULL,a_3 = NULL,a_2 = NULL;
          t = SSLgetAnnotations(n_5);
          n_2 = t;
          t = m_5;
          t = o_5(t);
          a_3 = t;
          t = (ATerm) ATinsert(CheckATermList(a_3), j_5);
          a_2 = t;
          t = SSLsetAnnotations(a_2, n_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_5;
        t = i_64(t);
      }
    return(t);
  }
  t = o_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL;
  l_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_4;
    }
  else
    {
      ATerm v_0 (ATerm t)
      {
        t = not_null(n_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_4 = ATgetFirst((ATermList) t);
          if(((n_4 != NULL) && (n_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_4;
      t = at_end_1_0(v_0, t);
    }
  return(t);
}
ATerm d_7 (ATerm t_6, ATerm t)
{
  ATerm u_6 = NULL;
  t = SSL_explode_term(t_6);
  if(match_cons(t, sym__2))
    {
      ATerm n_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_16) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
  a_7 = t;
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      z_6 = ATgetArgument(t, 1);
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
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
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            t = d_7(a_7, t);
          }
      }
    }
  else
    {
      t = d_7(a_7, t);
    }
  return(t);
}
ATerm g_6 (ATerm i_72 (ATerm), ATerm p_27, ATerm n_27, ATerm t)
{
  ATerm h_7 = NULL,j_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
  m_7 = t;
  t = i_72(t);
  h_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_7, p_27, n_27);
  t = p_6(h_7, p_27, n_27, t);
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_7 = NULL;
        t = term_w_16;
        p_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_7, term_w_16);
        t = o_6(h_7, p_7, t);
        ;
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_7 = ATgetFirst((ATermList) t);
        l_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_w_16;
    n_7 = t;
    t = (ATerm) ATinsert(CheckATermList(l_7), (ATerm) ATinsert(CheckATermList(j_7), p_27));
    o_7 = t;
    t = SSL_table_put(h_7, n_7, o_7);
    t = m_7;
  }
  return(t);
}
ATerm w_8 (ATerm w_7, ATerm t)
{
  t = w_7;
  {
    ATerm y_16 = t;
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
        t = y_16;
      }
    t = term_d_17;
    t = debug_1_0(y_0, t);
    t = (ATerm) ATmakeAppl(sym__2, w_7, term_s_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm x_8 (ATerm c_8, ATerm e_8, ATerm i_8, ATerm t)
{
  t = SSL_open_file(c_8, e_8);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
  n_8 = t;
  if(match_cons(t, sym__2))
    {
      o_8 = ATgetArgument(t, 0);
      p_8 = ATgetArgument(t, 1);
      {
        ATerm f_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_8(n_8, t);
            ;
            LocalPopChoice(k_17);
          }
        else
          {
            t = f_17;
            t = x_8(o_8, p_8, n_8, t);
          }
      }
    }
  else
    {
      t = w_8(n_8, t);
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
  ATerm b_9 = NULL,e_9 = NULL,n_9 = NULL;
  t = term_l_17;
  t = new_0_0(t);
  b_9 = t;
  t = term_m_17;
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_9, term_m_17);
  t = n_6(b_9, e_9, t);
  n_9 = t;
  {
    ATerm o_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_r_8);
        p_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_9, (ATerm) ATinsert(ATempty, term_r_8));
        t = h_6(n_9, p_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(u_17);
      }
    else
      {
        t = o_17;
        t = n_9;
      }
  }
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL;
  t = new_file_0_0(t);
  x_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_9, term_s_8);
  t = open_file_0_0(t);
  t = term_l_17;
  y_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_9, term_l_17);
  t = g_6(z_0, x_9, y_9, t);
  t = x_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm v_10 = NULL,x_10 = NULL;
  v_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_3 = NULL,i_3 = NULL;
      t = v_10;
      t = xtc_new_file_0_0(t);
      h_3 = t;
      t = r_0(t);
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATinsert(ATinsert(ATempty, h_3), term_b_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(h_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_3);
    }
  else
    {
      ATerm y_3 = NULL,b_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          x_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_10;
      t = xtc_new_file_0_0(t);
      y_3 = t;
      t = r_0(t);
      b_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_3), term_b_18), x_10), term_h_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(y_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_3);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm a_11 = NULL;
  ATerm a_1 (ATerm t)
  {
    ATerm b_11 = NULL,c_11 = NULL;
    b_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_11), b_11);
    t = o_6(not_null(a_11), b_11, t);
    c_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_11, c_11);
    return(t);
  }
  if(((a_11 != NULL) && (a_11 != t)))
    _fail(t);
  else
    a_11 = t;
  t = SSL_table_keys(a_11);
  t = map_1_0(a_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm q_73 (ATerm), ATerm t)
{
  ATerm g_11 = NULL;
  g_11 = t;
  {
    ATerm o_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_11 = NULL;
        t = term_g_8;
        t = get_config_0_0(t);
        j_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_11, term_t_14);
        t = geq_0_0(t);
        t = g_11;
        t = q_73(t);
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = o_18;
        t = g_11;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm p_73 (ATerm), ATerm t)
{
  ATerm q_11 = NULL;
  q_11 = t;
  {
    ATerm r_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_11 = NULL;
        t = term_g_8;
        t = get_config_0_0(t);
        s_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_11, term_u_11);
        t = geq_0_0(t);
        t = q_11;
        t = p_73(t);
        ;
        LocalPopChoice(y_18);
      }
    else
      {
        t = r_18;
        t = q_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm r_73 (ATerm), ATerm t)
{
  ATerm w_11 = NULL;
  w_11 = t;
  {
    ATerm b_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_12 = NULL;
        t = term_g_8;
        t = get_config_0_0(t);
        a_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_12, term_b_10);
        t = geq_0_0(t);
        t = w_11;
        t = r_73(t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = b_19;
        t = w_11;
      }
  }
  return(t);
}
ATerm w_5 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm m_22, ATerm l_22, ATerm t)
{
  t = a_68(t);
  {
    ATerm b_1 (ATerm t)
    {
      ATerm e_12 = NULL;
      e_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, e_12);
      t = z_67(t);
      return(t);
    }
    t = fetch_1_0(b_1, t);
    t = l_22;
  }
  return(t);
}
ATerm x_5 (ATerm w_67 (ATerm), ATerm i_22, ATerm h_22, ATerm t)
{
  ATerm m_13 (ATerm t)
  {
    ATerm x_12 = NULL,a_13 = NULL,b_13 = NULL;
    x_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_13 = ATgetFirst((ATermList) t);
            b_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_19 = t;
          int m_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_12;
              {
                ATerm h_1 (ATerm t)
                {
                  t = h_22;
                  return(t);
                }
                t = w_5(w_67, h_1, a_13, b_13, t);
                t = m_13(t);
              }
              ;
              LocalPopChoice(m_19);
            }
          else
            {
              t = f_19;
              {
                ATerm r_4 = NULL,w_4 = NULL,c_2 = NULL;
                t = SSLgetAnnotations(x_12);
                r_4 = t;
                t = b_13;
                t = m_13(t);
                w_4 = t;
                t = (ATerm) ATinsert(CheckATermList(w_4), a_13);
                c_2 = t;
                t = SSLsetAnnotations(c_2, r_4);
              }
            }
        }
      }
    return(t);
  }
  t = i_22;
  t = m_13(t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm c_14 = NULL;
  if(match_cons(t, sym__2))
    {
      c_14 = ATgetArgument(t, 0);
      if((c_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm y_5 (ATerm d_29, ATerm e_29, ATerm f_29, ATerm t)
{
  ATerm q_13 = NULL,u_13 = NULL,w_13 = NULL;
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_29, e_29);
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_19 = ATgetArgument(t, 0);
            ATerm q_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_29, e_29);
        t = o_6(d_29, e_29, t);
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = (ATerm) ATempty;
      }
    w_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_13, f_29);
    t = x_5(i_1, w_13, f_29, t);
    u_13 = t;
    t = SSL_table_put(d_29, e_29, u_13);
    t = q_13;
  }
  return(t);
}
ATerm z_5 (ATerm t_73 (ATerm), ATerm n_29, ATerm m_29, ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm d_14 = NULL,g_14 = NULL;
    if(match_cons(t, sym__2))
      {
        d_14 = ATgetArgument(t, 0);
        g_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, n_29, d_14, g_14);
    t = t_73(t);
    return(t);
  }
  t = m_29;
  t = map_1_0(j_1, t);
  return(t);
}
ATerm h_6 (ATerm k_31, ATerm l_31, ATerm t)
{
  t = SSL_access(k_31, l_31);
  return(t);
}
ATerm g_15 (ATerm s_14, ATerm t)
{
  t = SSL_fclose(s_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_15 = NULL,d_15 = NULL;
  d_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_15 = ATgetArgument(t, 0);
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_15);
            ;
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            t = g_15(d_15, t);
          }
      }
    }
  else
    {
      t = g_15(d_15, t);
    }
  return(t);
}
ATerm a_6 (ATerm p_15, ATerm t)
{
  t = SSL_read_term_from_stream(p_15);
  return(t);
}
ATerm c_6 (ATerm s_31, ATerm t_31, ATerm t)
{
  ATerm h_15 = NULL;
  t = SSL_fopen(s_31, t_31);
  h_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_15);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_15 = NULL;
  t = SSL_stdin_stream();
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_15);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_15 = NULL;
  t = SSL_stdout_stream();
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_15 = NULL;
  t = SSL_stderr_stream();
  n_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_15);
  return(t);
}
ATerm s_17 (ATerm d_16, ATerm t)
{
  ATerm e_16 = NULL;
  t = SSL_explode_term(d_16);
  if(match_cons(t, sym__2))
    {
      ATerm t_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_19 = ATgetArgument(t, 1);
        if(((ATgetType(u_19) == AT_LIST) && !(ATisEmpty(u_19))))
          {
            e_16 = ATgetFirst((ATermList) u_19);
            {
              ATerm v_19 = (ATerm) ATgetNext((ATermList) u_19);
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
ATerm t_17 (ATerm k_16, ATerm l_16, ATerm o_16, ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,x_16 = NULL,e_2 = NULL;
  t = SSLgetAnnotations(o_16);
  r_16 = t;
  t = k_16;
  if(match_cons(t, sym_Path_1))
    {
      x_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_16, l_16);
  e_2 = t;
  t = SSLsetAnnotations(e_2, r_16);
  if(match_cons(t, sym__2))
    {
      p_16 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(p_16, q_16, t);
  return(t);
}
ATerm w_17 (ATerm z_16, ATerm a_17, ATerm g_17, ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,n_17 = NULL,h_2 = NULL;
  t = SSLgetAnnotations(g_17);
  j_17 = t;
  t = SSL_is_string(z_16);
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_17, a_17);
  h_2 = t;
  t = SSLsetAnnotations(h_2, j_17);
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      i_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(h_17, i_17, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_19 = ATgetArgument(t, 0);
      ATerm y_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  p_17 = t;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
      {
        ATerm a_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_17(p_17, t);
            ;
            LocalPopChoice(c_20);
          }
        else
          {
            t = a_20;
            {
              ATerm d_20 = t;
              int e_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_17(q_17, r_17, p_17, t);
                  ;
                  LocalPopChoice(e_20);
                }
              else
                {
                  t = d_20;
                  t = w_17(q_17, r_17, p_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_17(p_17, t);
    }
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_f_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_18 = NULL;
      a_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_18, term_i_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      t = debug_1_0(k_1, t);
      _fail(t);
    }
  y_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(z_17, t);
  x_17 = t;
  t = y_17;
  t = fclose_0_0(t);
  t = x_17;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm m_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_18 = NULL,d_18 = NULL;
      c_18 = t;
      t = (ATerm) ATinsert(ATempty, term_q_20);
      d_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_18, (ATerm) ATinsert(ATempty, term_q_20));
      t = h_6(c_18, d_18, t);
      LocalPopChoice(o_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = m_20;
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_20 = t;
            if((PushChoice() == 0))
              {
                ATerm e_18 = NULL,f_18 = NULL;
                e_18 = t;
                t = (ATerm) ATinsert(ATempty, term_r_8);
                f_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, e_18, (ATerm) ATinsert(ATempty, term_r_8));
                t = h_6(e_18, f_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_20;
              }
            t = debug_1_0(n_1, t);
            ;
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            t = debug_1_0(o_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_x_20;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_y_20;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,z_18 = NULL;
  w_18 = t;
  t = term_b_16;
  x_18 = t;
  t = (ATerm) ATinsert(ATempty, term_z_20);
  z_18 = t;
  t = SSL_printnl(x_18, z_18);
  t = w_18;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm a_19 = NULL,c_19 = NULL,e_19 = NULL;
  if(match_cons(t, sym__3))
    {
      a_19 = ATgetArgument(t, 0);
      c_19 = ATgetArgument(t, 1);
      e_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_5(a_19, c_19, e_19, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
  g_19 = t;
  t = term_b_16;
  h_19 = t;
  t = (ATerm) ATinsert(ATempty, term_c_21);
  i_19 = t;
  t = SSL_printnl(h_19, i_19);
  t = g_19;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
  j_19 = t;
  t = term_b_16;
  k_19 = t;
  t = (ATerm) ATinsert(ATempty, term_z_20);
  l_19 = t;
  t = SSL_printnl(k_19, l_19);
  t = j_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm g_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,p_18 = NULL,s_18 = NULL,t_18 = NULL;
  g_18 = t;
  t = if_verbose5_1_0(r_1, t);
  {
    ATerm d_21 = t;
    if((PushChoice() == 0))
      {
        ATerm u_18 = NULL,v_18 = NULL;
        t = term_e_21;
        u_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, g_18);
        v_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Imported_1, g_18));
        t = o_6(u_18, v_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_21;
      }
    j_18 = t;
    t = term_e_21;
    p_18 = t;
    t = term_f_21;
    s_18 = t;
    t = (ATerm) ATinsert(ATempty, g_18);
    t_18 = t;
    t = SSL_table_put(p_18, s_18, t_18);
    t = j_18;
    t = if_verbose4_1_0(t_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(y_1, t);
    i_18 = t;
    t = term_e_21;
    n_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_21, i_18);
    t = z_5(z_1, n_18, i_18, t);
    t = if_verbose6_1_0(b_2, t);
    t = term_e_21;
    k_18 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, g_18);
    l_18 = t;
    t = (ATerm) ATempty;
    m_18 = t;
    t = SSL_table_put(k_18, l_18, m_18);
    t = (ATerm) ATmakeAppl(sym__3, term_e_21, (ATerm)ATmakeAppl(sym_Imported_1, g_18), (ATerm) ATempty);
    t = if_verbose4_1_0(d_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm o_71 (ATerm), ATerm t)
{
  ATerm x_19 = NULL,z_19 = NULL,b_20 = NULL;
  x_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_19 = ATgetFirst((ATermList) t);
          b_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_6 = NULL,w_6 = NULL,x_6 = NULL,k_2 = NULL;
            t = SSLgetAnnotations(x_19);
            m_6 = t;
            t = z_19;
            t = o_71(t);
            w_6 = t;
            t = b_20;
            t = filter_1_0(o_71, t);
            x_6 = t;
            t = (ATerm) ATinsert(CheckATermList(x_6), w_6);
            k_2 = t;
            t = SSLsetAnnotations(k_2, m_6);
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            t = b_20;
            t = filter_1_0(o_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm p_79 (ATerm), ATerm t)
{
  ATerm k_20 (ATerm t)
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_79(t);
        t = k_20(t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
      }
    return(t);
  }
  t = k_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_20 = NULL;
            t = term_y_21;
            n_20 = t;
            t = SSL_getenv(n_20);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL;
  t = term_e_21;
  a_21 = t;
  t = term_b_22;
  b_21 = t;
  t = term_c_22;
  t = o_6(a_21, b_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm d_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_22;
      }
  }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm p_20 = NULL;
  t = if_verbose5_1_0(f_2, t);
  p_20 = t;
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_20 = NULL,u_20 = NULL;
        t = term_e_21;
        r_20 = t;
        t = term_f_21;
        u_20 = t;
        t = term_j_22;
        t = o_6(r_20, u_20, t);
        ;
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        {
          ATerm w_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          w_20 = t;
          t = repeat_1_0(i_2, t);
          t = w_20;
        }
      }
    t = p_20;
    t = if_verbose5_1_0(j_2, t);
  }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm q_22 (ATerm i_21, ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
  t = term_e_21;
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, i_21);
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Tool_1, i_21));
  t = o_6(m_21, n_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_22 = ATgetFirst((ATermList) t);
      if(match_cons(n_22, sym__2))
        {
          ATerm r_22 = ATgetArgument(n_22, 0);
          l_21 = ATgetArgument(n_22, 1);
        }
      else
        _fail(t);
      {
        ATerm p_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_21;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = debug_1_0(c_3, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_e_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(e_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_s_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_21 = NULL,p_21 = NULL,s_21 = NULL;
      t = if_verbose5_1_0(o_2, t);
      t = xtc_load_0_0(t);
      s_21 = t;
      if(match_cons(t, sym__2))
        {
          o_21 = ATgetArgument(t, 0);
          p_21 = ATgetArgument(t, 1);
          {
            ATerm v_22 = t;
            int w_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_21 = NULL,x_21 = NULL,a_22 = NULL;
                t = term_e_21;
                x_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, o_21);
                a_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Tool_1, o_21));
                t = o_6(x_21, a_22, t);
                {
                  ATerm r_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((p_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((w_21 != NULL) && (w_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          w_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(r_2, t);
                  t = not_null(w_21);
                }
                ;
                LocalPopChoice(w_22);
              }
            else
              {
                t = v_22;
                t = q_22(s_21, t);
              }
          }
        }
      else
        {
          t = q_22(s_21, t);
        }
      t = if_verbose5_1_0(z_2, t);
      ;
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      {
        ATerm o_22 = NULL,r_7 = NULL,s_7 = NULL;
        o_22 = t;
        t = term_b_16;
        r_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_22), o_22), term_x_22);
        s_7 = t;
        t = SSL_printnl(r_7, s_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_22), o_22), term_x_22);
        t = if_verbose5_1_0(d_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm i_6 (ATerm l_12, ATerm m_12, ATerm t)
{
  t = SSL_copy(l_12, m_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
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
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_7 = NULL;
        t = o_23;
        t = n_0(t);
        z_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = z_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = z_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, p_23, z_7);
        t = i_6(p_23, z_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_23);
        ;
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        {
          ATerm b_23 = t;
          int c_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_8 = NULL;
              t = o_23;
              t = n_0(t);
              j_8 = t;
              {
                ATerm d_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm k_8 = NULL;
                    k_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = k_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = k_8;
                          }
                        else
                          {
                            t = k_8;
                            if((p_23 != t))
                              {
                                _fail(t);
                              }
                            t = k_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_23;
                  }
                t = (ATerm) ATmakeAppl(sym__2, p_23, j_8);
                t = i_6(p_23, j_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, p_23);
              }
              ;
              LocalPopChoice(c_23);
            }
          else
            {
              t = b_23;
              t = o_23;
              t = n_0(t);
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
ATerm j_6 (ATerm l_28, ATerm m_28, ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL;
  w_23 = t;
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_28, m_28);
        t = o_6(l_28, m_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_23 = ATgetFirst((ATermList) t);
            v_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_23);
        t = SSL_table_put(l_28, m_28, v_23);
        t = (ATerm) ATmakeAppl(sym__3, l_28, m_28, v_23);
      }
    else
      {
        t = e_23;
        t = SSL_table_remove(l_28, m_28);
        t = (ATerm) ATmakeAppl(sym__2, l_28, m_28);
      }
    t = w_23;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  ATerm x_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
  c_24 = t;
  t = f_72(t);
  b_24 = t;
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_24 = NULL;
        t = term_w_16;
        e_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_24, term_w_16);
        t = o_6(b_24, e_24, t);
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
        a_24 = ATgetFirst((ATermList) t);
        x_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_w_16;
    d_24 = t;
    t = SSL_table_put(b_24, d_24, x_23);
    t = a_24;
    {
      ATerm f_3 (ATerm t)
      {
        ATerm f_24 = NULL;
        f_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_24, f_24);
        t = j_6(b_24, f_24, t);
        return(t);
      }
      t = map_1_0(f_3, t);
      t = c_24;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm t)
{
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_73(t);
      t = b_73(t);
      ;
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
      t = b_73(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_72 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  i_24 = t;
  t = e_72(t);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_24, term_w_16);
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_23 = ATgetArgument(t, 0);
            ATerm q_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_w_16;
        q_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_24, term_w_16);
        t = o_6(h_24, q_24, t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = (ATerm) ATempty;
      }
    j_24 = t;
    t = term_w_16;
    k_24 = t;
    t = (ATerm) ATinsert(CheckATermList(j_24), (ATerm) ATempty);
    l_24 = t;
    t = SSL_table_put(h_24, k_24, l_24);
    t = i_24;
  }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm b_25 = NULL;
  b_25 = t;
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(b_25);
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = b_25;
      }
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_75 (ATerm), ATerm t)
{
  ATerm t_24 = NULL;
  ATerm k_3 (ATerm t)
  {
    ATerm u_24 = NULL;
    u_24 = t;
    {
      ATerm t_23 = t;
      int u_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_24 = NULL,w_24 = NULL;
          t = term_v_17;
          v_24 = t;
          t = term_w_16;
          w_24 = t;
          t = term_y_23;
          t = o_6(v_24, w_24, t);
          ;
          LocalPopChoice(u_23);
        }
      else
        {
          t = t_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((t_24 != NULL) && (t_24 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            t_24 = ATgetFirst((ATermList) t);
          {
            ATerm z_23 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = t_24;
      t = map_1_0(l_3, t);
      t = u_24;
      t = end_scope_1_0(m_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(g_3, t);
  t = restore_always_2_0(j_75, k_3, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm g_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_24);
    }
  else
    {
      t = g_24;
      t = term_n_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm k_75 (ATerm), ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_25 = NULL;
        t = term_h_18;
        t = get_config_0_0(t);
        e_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_25);
        ;
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        t = term_q_8;
      }
    t = k_75(t);
    t = copy_to_1_0(p_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(o_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,k_25 = NULL,l_25 = NULL;
  g_25 = t;
  t = term_l_17;
  t = whoami_0_0(t);
  h_25 = t;
  t = term_b_16;
  k_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_24), h_25), term_r_24);
  l_25 = t;
  t = SSL_printnl(k_25, l_25);
  t = term_m_8;
  i_25 = t;
  t = SSL_exit(i_25);
  t = g_25;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  if(match_string(t, "-k"))
    {
      t = o_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_25;
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  q_25 = t;
  t = SSL_string_to_int(q_25);
  r_25 = t;
  t = term_x_24;
  s_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_24, r_25);
  t = r_6(s_25, r_25, t);
  t = q_25;
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, s_3, u_3, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm w_25 = NULL;
  w_25 = t;
  if(match_string(t, "-S"))
    {
      t = w_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_25;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL;
  t = term_g_8;
  d_26 = t;
  t = term_z_24;
  e_26 = t;
  t = term_a_25;
  t = r_6(d_26, e_26, t);
  t = term_c_25;
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,k_26 = NULL;
  f_26 = t;
  t = SSL_string_to_int(f_26);
  g_26 = t;
  t = term_g_8;
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_8, g_26);
  t = r_6(k_26, g_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_26);
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_f_25;
  return(t);
}
ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL;
  t = term_j_25;
  l_26 = t;
  t = term_l_17;
  m_26 = t;
  t = term_m_25;
  t = r_6(l_26, m_26, t);
  t = term_n_25;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_p_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_3, w_3, x_3, t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      {
        ATerm v_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_3, a_4, e_4, t);
            ;
            LocalPopChoice(x_25);
          }
        else
          {
            t = v_25;
            t = Option_3_0(g_4, h_4, k_4, t);
          }
      }
    }
  return(t);
}
ATerm r_6 (ATerm g_30, ATerm h_30, ATerm t)
{
  ATerm n_26 = NULL;
  t = term_y_25;
  n_26 = t;
  t = SSL_table_put(n_26, g_30, h_30);
  t = (ATerm) ATmakeAppl(sym__3, term_y_25, g_30, h_30);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
      t = term_l_17;
      t = h_0(t);
      v_26 = t;
      t = term_z_25;
      w_26 = t;
      t = term_a_26;
      x_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_25, term_a_26, v_26);
      t = p_6(w_26, x_26, v_26, t);
      _fail(t);
    }
  else
    {
      ATerm b_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_26 = ATgetFirst((ATermList) t);
          u_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_26;
      t = d_0(t);
      t = term_l_17;
      t = g_0(t);
      b_27 = t;
      t = (ATerm) ATinsert(CheckATermList(u_26), b_27);
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm d_27 = NULL;
  d_27 = t;
  if(match_string(t, "-o"))
    {
      t = d_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_27;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL;
  e_27 = t;
  t = term_b_18;
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_18, e_27);
  t = r_6(f_27, e_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_27);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
ATerm p_6 (ATerm g_28, ATerm h_28, ATerm f_28, ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_28, h_28);
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_26 = ATgetArgument(t, 0);
            ATerm r_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_28, h_28);
        t = o_6(g_28, h_28, t);
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = (ATerm) ATempty;
      }
    t_27 = t;
    t = (ATerm) ATinsert(CheckATermList(t_27), f_28);
    u_27 = t;
    t = SSL_table_put(g_28, h_28, u_27);
    t = s_27;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_28 = NULL,a_29 = NULL,i_29 = NULL;
      t = term_l_17;
      t = m_0(t);
      x_28 = t;
      t = term_z_25;
      a_29 = t;
      t = term_a_26;
      i_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_25, term_a_26, x_28);
      t = p_6(a_29, i_29, x_28, t);
      _fail(t);
    }
  else
    {
      ATerm s_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_28 = ATgetFirst((ATermList) t);
          r_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_28 = ATgetFirst((ATermList) t);
          t_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_28;
      t = k_0(t);
      t = s_28;
      t = l_0(t);
      s_29 = t;
      t = (ATerm) ATinsert(CheckATermList(t_28), s_29);
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm u_29 = NULL;
  u_29 = t;
  if(match_string(t, "-i"))
    {
      t = u_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_29;
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL;
  v_29 = t;
  t = term_h_18;
  w_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_18, v_29);
  t = r_6(w_29, v_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_29);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_s_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_4, u_4, v_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_17;
  t = whoami_0_0(t);
  z_29 = t;
  t = term_b_16;
  b_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_26), z_29);
  c_30 = t;
  t = SSL_printnl(b_30, c_30);
  t = term_m_8;
  a_30 = t;
  t = SSL_exit(a_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm k_6 (ATerm b_26, ATerm c_26, ATerm t)
{
  ATerm a_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_26, c_26);
      ;
      LocalPopChoice(c_27);
    }
  else
    {
      t = a_27;
      t = SSL_addr(b_26, c_26);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,n_30 = NULL;
  i_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_30;
      t = k_70(t);
    }
  else
    {
      ATerm b_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_30 = ATgetFirst((ATermList) t);
          n_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_30;
      t = foldr_2_0(k_70, l_70, t);
      b_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_30, b_31);
      t = l_70(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  if(match_cons(t, sym__2))
    {
      c_9 = ATgetArgument(t, 0);
      d_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(c_9, d_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_31 = NULL,v_8 = NULL,y_8 = NULL;
  t = times_0_0(t);
  y_8 = t;
  t = SSL_explode_term(y_8);
  if(match_cons(t, sym__2))
    {
      ATerm g_27 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_8;
  t = foldr_2_0(x_4, z_4, t);
  e_31 = t;
  t = SSL_TicksToSeconds(e_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_31 = NULL,w_31 = NULL,x_31 = NULL;
  r_31 = t;
  if(match_cons(t, sym__2))
    {
      w_31 = ATgetArgument(t, 0);
      x_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_31;
        if((w_31 != t))
          {
            _fail(t);
          }
        t = r_31;
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = (ATerm) ATmakeAppl(sym__2, w_31, x_31);
        {
          ATerm j_27 = t;
          int k_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_31, x_31);
              ;
              LocalPopChoice(k_27);
            }
          else
            {
              t = j_27;
              t = SSL_gtr(w_31, x_31);
            }
          t = (ATerm) ATmakeAppl(sym__2, w_31, x_31);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_73 (ATerm), ATerm t)
{
  ATerm b_32 = NULL;
  b_32 = t;
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_32 = NULL;
        t = term_g_8;
        t = get_config_0_0(t);
        d_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_32, term_m_8);
        t = geq_0_0(t);
        t = b_32;
        t = m_73(t);
        ;
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        t = b_32;
      }
  }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm f_32 = NULL,o_32 = NULL,s_32 = NULL,t_32 = NULL;
  t = run_time_0_0(t);
  f_32 = t;
  t = term_l_17;
  t = whoami_0_0(t);
  o_32 = t;
  t = term_b_16;
  s_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_27), f_32), term_a_9), o_32);
  t_32 = t;
  t = SSL_printnl(s_32, t_32);
  t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_27), f_32), term_a_9), o_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_24;
  v_32 = t;
  t = SSL_exit(v_32);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL;
  l_33 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_33;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_33 = ATgetArgument(t, 0);
          {
            ATerm t_9 = NULL,m_2 = NULL;
            t = SSLgetAnnotations(l_33);
            t_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_33);
            m_2 = t;
            t = SSLsetAnnotations(m_2, t_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_33;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_77 (ATerm), ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      t = fetch_1_0(c_5, t);
    }
  t = l_77(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_33 = ATgetFirst((ATermList) t);
      p_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_33 = NULL,z_33 = NULL;
        ATerm d_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_33)), not_null(z_33));
          return(t);
        }
        t = p_33;
        t = j_0(t);
        if(((y_33 != NULL) && (y_33 != t)))
          _fail(t);
        else
          y_33 = t;
        t = o_33;
        t = i_0(t);
        if(((z_33 != NULL) && (z_33 != t)))
          _fail(t);
        else
          z_33 = t;
        t = p_33;
        t = reverse_acc_2_0(i_0, d_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_17;
      t = j_0(t);
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,q_2 = NULL;
  f_34 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_34);
  d_34 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_34);
  q_2 = t;
  t = SSLsetAnnotations(q_2, d_34);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm h_34 = NULL;
  h_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_34), term_w_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL;
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
      t = fetch_1_0(g_5, t);
    }
  t = term_z_27;
  t = echo_0_0(t);
  t = term_z_25;
  b_34 = t;
  t = term_a_26;
  c_34 = t;
  t = term_a_28;
  t = o_6(b_34, c_34, t);
  t = reverse_acc_2_0(_id, i_5, t);
  t = map_1_0(k_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_64 (ATerm), ATerm t)
{
  ATerm f_35 (ATerm t)
  {
    ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
    c_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_35 = ATgetFirst((ATermList) t);
        e_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_28 = t;
      int c_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_10 = NULL,q_10 = NULL,w_2 = NULL;
          t = SSLgetAnnotations(c_35);
          m_10 = t;
          t = d_35;
          t = c_64(t);
          q_10 = t;
          t = (ATerm) ATinsert(CheckATermList(e_35), q_10);
          w_2 = t;
          t = SSLsetAnnotations(w_2, m_10);
          ;
          LocalPopChoice(c_28);
        }
      else
        {
          t = b_28;
          {
            ATerm f_11 = NULL,m_11 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(c_35);
            f_11 = t;
            t = e_35;
            t = f_35(t);
            m_11 = t;
            t = (ATerm) ATinsert(CheckATermList(m_11), d_35);
            x_2 = t;
            t = SSLsetAnnotations(x_2, f_11);
          }
        }
    }
    return(t);
  }
  t = f_35(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
  j_35 = t;
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_28 = ATgetFirst((ATermList) t);
                ATerm j_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_35;
          }
        ;
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        t = (ATerm) ATinsert(ATempty, j_35);
      }
    k_35 = t;
    t = term_n_24;
    l_35 = t;
    t = SSL_printnl(l_35, k_35);
    t = j_35;
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
ATerm n_6 (ATerm m_46, ATerm n_46, ATerm t)
{
  t = SSL_strcat(m_46, n_46);
  return(t);
}
ATerm debug_1_0 (ATerm x_59 (ATerm), ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL;
  p_35 = t;
  t = x_59(t);
  q_35 = t;
  t = term_b_16;
  r_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_35), q_35);
  s_35 = t;
  t = SSL_printnl(r_35, s_35);
  t = p_35;
  return(t);
}
ATerm map_1_0 (ATerm s_63 (ATerm), ATerm t)
{
  ATerm h_36 (ATerm t)
  {
    ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
    e_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_36;
      }
    else
      {
        ATerm b_12 = NULL,i_12 = NULL,j_12 = NULL,n_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_36 = ATgetFirst((ATermList) t);
            g_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_36);
        b_12 = t;
        t = f_36;
        t = s_63(t);
        i_12 = t;
        t = g_36;
        t = h_36(t);
        j_12 = t;
        t = (ATerm) ATinsert(CheckATermList(j_12), i_12);
        n_3 = t;
        t = SSLsetAnnotations(n_3, b_12);
      }
    return(t);
  }
  t = h_36(t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm k_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = k_28;
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_o_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_36 = NULL;
      p_36 = t;
      t = SSL_is_string(p_36);
      ;
      LocalPopChoice(u_28);
    }
  else
    {
      t = p_28;
      {
        ATerm v_28 = t;
        int w_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_5, t);
            ;
            LocalPopChoice(w_28);
          }
        else
          {
            t = v_28;
            {
              ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
              v_36 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_36 = ATgetArgument(t, 0);
                  t = w_36;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_36 = ATgetArgument(t, 0);
                      t = w_36;
                      {
                        ATerm y_28 = t;
                        int z_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(z_28);
                          }
                        else
                          {
                            t = y_28;
                            t = debug_1_0(p_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm b_37 = NULL,c_37 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_36 = ATgetArgument(t, 0);
                          x_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_36;
                      t = eval_config_0_0(t);
                      b_37 = t;
                      t = x_36;
                      t = eval_config_0_0(t);
                      c_37 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_37, c_37);
                      t = n_6(b_37, c_37, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm o_6 (ATerm x_29, ATerm y_29, ATerm t)
{
  t = SSL_table_get(x_29, y_29);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL;
  g_37 = t;
  t = term_y_25;
  h_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_25, g_37);
  t = o_6(h_37, g_37, t);
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_37 = NULL,j_37 = NULL;
        t = eval_config_0_0(t);
        i_37 = t;
        t = term_y_25;
        j_37 = t;
        t = SSL_table_put(j_37, g_37, i_37);
        t = i_37;
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
ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL;
  t = term_g_29;
  m_37 = t;
  t = term_l_17;
  n_37 = t;
  t = term_h_29;
  t = r_6(m_37, n_37, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL;
  t = term_g_29;
  q_37 = t;
  t = term_l_17;
  r_37 = t;
  t = term_h_29;
  t = r_6(q_37, r_37, t);
  t = term_k_29;
  o_37 = t;
  t = term_l_17;
  p_37 = t;
  t = term_l_29;
  t = r_6(o_37, p_37, t);
  t = term_o_29;
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_p_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_5, r_5, s_5, t);
      ;
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
      t = Option_3_0(t_5, v_5, f_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_51 (ATerm), ATerm l_51 (ATerm), ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,q_3 = NULL;
  x_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_37 = ATgetFirst((ATermList) t);
      u_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_37);
  s_37 = t;
  t = t_37;
  t = k_51(t);
  v_37 = t;
  t = u_37;
  t = l_51(t);
  w_37 = t;
  t = (ATerm) ATinsert(CheckATermList(w_37), v_37);
  q_3 = t;
  t = SSLsetAnnotations(q_3, s_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_79 (ATerm), ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,h_38 = NULL,i_38 = NULL,y_4 = NULL;
  c_38 = t;
  {
    ATerm t_29 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_30;
        t = j_79(t);
        ;
        LocalPopChoice(d_30);
      }
    else
      {
        t = t_29;
      }
    t = c_38;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_38 = ATgetFirst((ATermList) t);
        f_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_38);
    d_38 = t;
    t = term_z_26;
    i_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_26, e_38);
    t = r_6(i_38, e_38, t);
    t = f_38;
    {
      ATerm s_38 (ATerm t)
      {
        ATerm f_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_30 = t;
            int m_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_38 = NULL;
                l_38 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_38;
                ;
                LocalPopChoice(m_30);
              }
            else
              {
                t = l_30;
                t = j_79(t);
                t = Cons_2_0(_id, s_38, t);
              }
            ;
            LocalPopChoice(k_30);
          }
        else
          {
            t = f_30;
            {
              ATerm o_38 = NULL,p_38 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_38 = ATgetFirst((ATermList) t);
                  p_38 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_38), (ATerm) ATmakeAppl(sym_Undefined_1, o_38));
            }
          }
        return(t);
      }
      t = s_38(t);
      h_38 = t;
      t = (ATerm) ATinsert(CheckATermList(h_38), (ATerm) ATmakeAppl(sym_Program_1, e_38));
      y_4 = t;
      t = SSLsetAnnotations(y_4, d_38);
    }
  }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm e_39 = NULL;
  e_39 = t;
  if(match_string(t, "--help"))
    {
      t = e_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_39;
        }
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL;
  t = term_v_27;
  f_39 = t;
  t = term_l_17;
  g_39 = t;
  t = term_o_30;
  t = r_6(f_39, g_39, t);
  t = term_p_30;
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm b_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
  z_38 = t;
  t = term_z_25;
  b_39 = t;
  t = term_a_26;
  c_39 = t;
  t = (ATerm) ATempty;
  d_39 = t;
  t = SSL_table_put(b_39, c_39, d_39);
  t = z_38;
  {
    ATerm l_6 (ATerm t)
    {
      ATerm r_30 = t;
      int s_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_79(t);
          ;
          LocalPopChoice(s_30);
        }
      else
        {
          t = r_30;
          {
            ATerm t_30 = t;
            int u_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_6, s_6, v_6, t);
                ;
                LocalPopChoice(u_30);
              }
            else
              {
                t = t_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_6, t);
    {
      ATerm v_30 = t;
      int w_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_39 = NULL;
          n_39 = t;
          {
            ATerm x_30 = t;
            int y_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_13 = NULL;
                t = n_39;
                {
                  ATerm z_30 = t;
                  int a_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_v_27;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(a_31);
                    }
                  else
                    {
                      t = z_30;
                      t = fetch_1_0(b_7, t);
                    }
                  t = n_39;
                  t = default_system_usage_0_0(t);
                  t = term_z_24;
                  p_13 = t;
                  t = SSL_exit(p_13);
                }
                ;
                LocalPopChoice(y_30);
              }
            else
              {
                t = x_30;
                {
                  ATerm v_13 = NULL;
                  t = term_g_29;
                  t = get_config_0_0(t);
                  t = n_39;
                  t = default_system_about_0_0(t);
                  t = term_z_24;
                  v_13 = t;
                  t = SSL_exit(v_13);
                }
              }
          }
          ;
          LocalPopChoice(w_30);
        }
      else
        {
          t = v_30;
          {
            ATerm c_31 = t;
            int d_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
                ATerm c_7 (ATerm t)
                {
                  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,a_5 = NULL;
                  t_39 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      s_39 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_39);
                  r_39 = t;
                  t = s_39;
                  if(((x_38 != NULL) && (x_38 != t)))
                    _fail(t);
                  else
                    x_38 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, s_39);
                  a_5 = t;
                  t = SSLsetAnnotations(a_5, r_39);
                  return(t);
                }
                t = fetch_1_0(c_7, t);
                t = term_b_16;
                p_39 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_38)), term_f_31);
                q_39 = t;
                t = SSL_printnl(p_39, q_39);
                t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_38)), term_f_31));
                t = default_system_usage_0_0(t);
                t = term_m_8;
                o_39 = t;
                t = SSL_exit(o_39);
                ;
                LocalPopChoice(d_31);
              }
            else
              {
                t = c_31;
              }
          }
        }
      y_38 = t;
      t = term_z_25;
      a_39 = t;
      t = SSL_table_destroy(a_39);
      t = y_38;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL;
  t = parse_options_1_0(n_77, t);
  y_39 = t;
  t = term_g_31;
  b_40 = t;
  t = SSL_table_create(b_40);
  t = term_g_31;
  z_39 = t;
  t = term_h_31;
  a_40 = t;
  t = SSL_table_put(z_39, a_40, y_39);
  t = y_39;
  t = p_77(t);
  {
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_77, t);
        ;
        LocalPopChoice(j_31);
      }
    else
      {
        t = i_31;
        {
          ATerm m_31 = t;
          int n_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_77(t);
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
ATerm e_7 (ATerm t)
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
        ATerm q_31 = t;
        int u_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(u_31);
          }
        else
          {
            t = q_31;
            {
              ATerm v_31 = t;
              int y_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(g_7, i_7, k_7, t);
                  ;
                  LocalPopChoice(y_31);
                }
              else
                {
                  t = v_31;
                  {
                    ATerm z_31 = t;
                    int a_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(a_32);
                      }
                    else
                      {
                        t = z_31;
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
ATerm f_7 (ATerm t)
{
  t = xtc_io_1_0(q_7, t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL;
  t = term_c_32;
  j_40 = t;
  t = term_l_17;
  k_40 = t;
  t = term_e_32;
  t = r_6(j_40, k_40, t);
  t = term_g_32;
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_h_32;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_40 = NULL,s_40 = NULL;
      s_40 = t;
      if(match_cons(t, sym_FILE_1))
        {
          r_40 = ATgetArgument(t, 0);
          {
            ATerm f_14 = NULL,e_5 = NULL;
            t = SSLgetAnnotations(s_40);
            f_14 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, r_40);
            e_5 = t;
            t = SSLsetAnnotations(e_5, f_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_40;
        }
      LocalPopChoice(j_32);
      t = xtc_transform_file_2_0(t_7, u_7, t);
    }
  else
    {
      t = i_32;
      t = xtc_transform_term_2_0(v_7, x_7, t);
    }
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_41 = NULL,b_41 = NULL;
        b_41 = t;
        if(match_cons(t, sym_FILE_1))
          {
            a_41 = ATgetArgument(t, 0);
            {
              ATerm q_14 = NULL,f_5 = NULL;
              t = SSLgetAnnotations(b_41);
              q_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_41);
              f_5 = t;
              t = SSLsetAnnotations(f_5, q_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_41;
          }
        LocalPopChoice(l_32);
        t = xtc_transform_file_2_0(y_7, pass_verbose_0_0, t);
      }
    else
      {
        t = k_32;
        t = xtc_transform_term_2_0(a_8, pass_verbose_0_0, t);
      }
    {
      ATerm m_32 = t;
      int n_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_41 = NULL,i_41 = NULL;
          i_41 = t;
          if(match_cons(t, sym_FILE_1))
            {
              h_41 = ATgetArgument(t, 0);
              {
                ATerm c_15 = NULL,h_5 = NULL;
                t = SSLgetAnnotations(i_41);
                c_15 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, h_41);
                h_5 = t;
                t = SSLsetAnnotations(h_5, c_15);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = i_41;
            }
          LocalPopChoice(n_32);
          t = xtc_transform_file_2_0(b_8, pass_verbose_0_0, t);
        }
      else
        {
          t = m_32;
          t = xtc_transform_term_2_0(d_8, pass_verbose_0_0, t);
        }
    }
  }
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm t_40 = NULL;
  t = term_q_32;
  t = xtc_find_0_0(t);
  t_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_40), term_r_32);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm u_40 = NULL;
  t = term_q_32;
  t = xtc_find_0_0(t);
  u_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_40), term_r_32);
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_w_32;
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_w_32;
  return(t);
}
ATerm io_pp_box_0_0 (ATerm t)
{
  t = option_wrap_4_0(e_7, default_usage_0_0, _id, f_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_box_0_0(t);
  return(t);
}
