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
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_r_30;
ATerm term_i_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_b_29;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_c_28;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_o_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_a_27;
ATerm term_k_26;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_p_24;
ATerm term_k_24;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_z_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_n_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_a_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_q_20;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_j_17;
ATerm term_b_17;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_u_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
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
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
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
ATerm term_i_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_y_11;
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
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_v_10;
ATerm term_u_10;
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
ATerm term_y_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_u_8;
void init_constant_terms (void)
{
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
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
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_e_9, term_v_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_9, term_z_9, term_b_10);
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
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_10, term_v_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_b_11, term_c_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_f_11, term_g_11);
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
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_c_12, term_e_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_n_12, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_v_12, term_w_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_z_12, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_e_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_i_13, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_y_13, term_a_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_e_14, term_g_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_j_14, term_k_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_n_14, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_s_14, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_y_14);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_g_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_n_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_a_16, term_c_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym__2, term_l_21, term_f_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_l_21, term_m_21);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_j_17);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_a_25);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_25);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym__2, term_i_25, term_t_17);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym__2, term_a_27, term_h_27);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym__2, term_p_29, term_t_17);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__2, term_c_30, term_t_17);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym__2, term_i_28, term_t_17);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym__2, term_l_32, term_t_17);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm f_6 (ATerm h_26, ATerm i_26, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm p_6 (ATerm j_15, ATerm k_15, ATerm);
ATerm r_6 (ATerm z_59 (ATerm), ATerm v_157, ATerm r_15, ATerm);
ATerm c_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm);
ATerm s_6 (ATerm f_12, ATerm g_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm e_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm o_58 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm x_75 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm i_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm h_7 (ATerm u_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm u_6 (ATerm i_72 (ATerm), ATerm p_27, ATerm n_27, ATerm);
ATerm w_8 (ATerm f_8, ATerm);
ATerm x_8 (ATerm h_8, ATerm i_8, ATerm j_8, ATerm);
ATerm x_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm g_6 (ATerm x_16, ATerm y_16, ATerm);
ATerm at_last_1_0 (ATerm t_64 (ATerm), ATerm);
ATerm i_6 (ATerm b_64 (ATerm), ATerm l_17, ATerm i_189, ATerm);
ATerm at_suffix_1_0 (ATerm m_64 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm f_64 (ATerm), ATerm);
ATerm list_tokenize_1_0 (ATerm i_87 (ATerm), ATerm);
ATerm d_1 (ATerm);
ATerm h_1 (ATerm);
ATerm string_tokenize_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm remove_extension_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm q_73 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm p_73 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm r_73 (ATerm), ATerm);
ATerm k_6 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm m_22, ATerm l_22, ATerm);
ATerm l_6 (ATerm w_67 (ATerm), ATerm i_22, ATerm h_22, ATerm);
ATerm s_1 (ATerm);
ATerm m_6 (ATerm d_29, ATerm e_29, ATerm f_29, ATerm);
ATerm n_6 (ATerm t_73 (ATerm), ATerm n_29, ATerm m_29, ATerm);
ATerm v_6 (ATerm k_31, ATerm l_31, ATerm);
ATerm s_22 (ATerm e_22, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm o_6 (ATerm p_15, ATerm);
ATerm q_6 (ATerm s_31, ATerm t_31, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm p_25 (ATerm p_23, ATerm);
ATerm q_25 (ATerm b_24, ATerm c_24, ATerm f_24, ATerm);
ATerm s_25 (ATerm u_24, ATerm v_24, ATerm w_24, ATerm);
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
ATerm filter_1_0 (ATerm o_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm p_79 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm y_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm e_3 (ATerm);
ATerm o_31 (ATerm f_30, ATerm);
ATerm g_3 (ATerm);
ATerm j_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm w_6 (ATerm l_12, ATerm m_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm x_6 (ATerm l_28, ATerm m_28, ATerm);
ATerm end_scope_1_0 (ATerm f_72 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm e_72 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm j_75 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm xtc_io_1_0 (ATerm k_75 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm c_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm f_7 (ATerm g_30, ATerm h_30, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_7 (ATerm g_28, ATerm h_28, ATerm f_28, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm y_6 (ATerm b_26, ATerm c_26, ATerm);
ATerm foldr_2_0 (ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_73 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm s_5 (ATerm);
ATerm need_help_1_0 (ATerm l_77 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm c_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm b_7 (ATerm o_46, ATerm p_46, ATerm);
ATerm debug_1_0 (ATerm x_59 (ATerm), ATerm);
ATerm map_1_0 (ATerm s_63 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm d_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm c_7 (ATerm x_29, ATerm y_29, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm h_6 (ATerm);
ATerm j_6 (ATerm);
ATerm t_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm e_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm k_51 (ATerm), ATerm l_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_79 (ATerm), ATerm);
ATerm l_7 (ATerm);
ATerm n_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm parse_options_1_0 (ATerm i_79 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm z_7 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm e_8 (ATerm);
ATerm g_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm s_8 (ATerm);
ATerm io_pp_c_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm f_6 (ATerm h_26, ATerm i_26, ATerm t)
{
  ATerm u_4 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(h_26, i_26);
      ;
      LocalPopChoice(t_8);
    }
  else
    {
      t = u_4;
      t = SSL_subtr(h_26, i_26);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,e_0 = NULL,f_0 = NULL;
  t = term_u_8;
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        t = term_e_9;
      }
    b_0 = t;
    t = term_e_9;
    f_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_e_9);
    t = f_6(b_0, f_0, t);
    e_0 = t;
    t = SSL_int_to_string(e_0);
    a_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_u_8);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm y_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_f_9;
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
      t = (ATerm) ATinsert(ATempty, term_g_9);
      e_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_0, (ATerm) ATinsert(ATempty, term_g_9));
      t = v_6(y_0, e_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm p_6 (ATerm j_15, ATerm k_15, ATerm t)
{
  ATerm f_1 = NULL;
  t = SSL_write_term_to_stream_baf(j_15, k_15);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_1);
  return(t);
}
ATerm r_6 (ATerm z_59 (ATerm), ATerm v_157, ATerm r_15, ATerm t)
{
  ATerm g_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_157, term_h_9);
  t = open_stream_0_0(t);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_1, r_15);
  t = z_59(t);
  t = fclose_0_0(t);
  t = r_15;
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_9 = ATgetArgument(t, 0);
      if(match_cons(j_9, sym_Stream_1))
        {
          n_1 = ATgetArgument(j_9, 0);
        }
      else
        _fail(t);
      o_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(n_1, o_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm k_1 = NULL,m_1 = NULL;
  k_1 = t;
  t = xtc_new_file_0_0(t);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_1, k_1);
  t = r_6(c_0, m_1, k_1, t);
  t = SSL_close_file(m_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(g_76, h_76, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm s_6 (ATerm f_12, ATerm g_12, ATerm t)
{
  t = SSL_execvp(f_12, g_12);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,z_2 = NULL;
  v_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      w_2 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,t_0 = NULL;
        t = SSL_int_to_string(w_2);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_9), s_0), term_k_9);
        t_0 = t;
        t = SSL_concat_strings(t_0);
      }
    }
  else
    {
      ATerm j_1 = NULL,l_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          w_2 = ATgetArgument(t, 0);
          x_2 = ATgetArgument(t, 1);
          z_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(x_2);
      j_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_2), term_n_9), j_1), term_m_9), w_2);
      l_1 = t;
      t = SSL_concat_strings(l_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_64 (ATerm), ATerm t)
{
  ATerm c_3 = NULL;
  ATerm o_0 (ATerm t)
  {
    t = e_64(t);
    if(((c_3 != NULL) && (c_3 != t)))
      _fail(t);
    else
      c_3 = t;
    return(t);
  }
  t = fetch_1_0(o_0, t);
  t = not_null(c_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm d_3 = NULL;
  d_3 = t;
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm s_9 = ATgetArgument(t, 0);
              if((d_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm t_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_16), term_q_15), term_h_15), term_d_15), term_u_14), term_p_14), term_l_14), term_h_14), term_b_14), term_s_13), term_o_13), term_k_13), term_f_13), term_b_13), term_x_12), term_t_12), term_p_12), term_h_12), term_x_11), term_t_11), term_p_11), term_l_11), term_d_11), term_y_10), term_p_10), term_k_10), term_e_10), term_w_9);
        t = fetch_elem_1_0(q_0, t);
        ;
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, d_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm h_3 = NULL,s_3 = NULL;
  h_3 = t;
  {
    ATerm f_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm k_16 = ATgetArgument(t, 0);
            s_3 = ATgetArgument(t, 1);
            {
              ATerm l_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(j_16);
        {
          ATerm m_16 = t;
          int n_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_1 = NULL,x_1 = NULL,y_1 = NULL;
              t = s_3;
              {
                ATerm o_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_16;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                v_1 = t;
                t = term_q_16;
                x_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, v_1), term_r_16);
                y_1 = t;
                t = SSL_printnl(x_1, y_1);
                t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATinsert(ATempty, v_1), term_r_16));
              }
              ;
              LocalPopChoice(n_16);
            }
          else
            {
              t = m_16;
              t = h_3;
            }
        }
      }
    else
      {
        t = f_16;
        t = h_3;
      }
    t = h_3;
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
    ATerm s_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_4;
        t = o_58(t);
        ;
        LocalPopChoice(u_16);
      }
    else
      {
        t = s_16;
        t = SSL_waitpid(d_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_16 = ATgetArgument(t, 0);
            if(((ATgetType(v_16) != AT_INT) || (ATgetInt((ATermInt) v_16) != 0)))
              _fail(t);
            {
              ATerm w_16 = ATgetArgument(t, 1);
            }
            {
              ATerm a_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm x_75 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL;
  i_4 = t;
  t = x_75(t);
  t = xtc_find_0_0(t);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_4, i_4);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm k_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, h_4, i_4);
      t = s_6(h_4, i_4, t);
      t = term_b_17;
      k_4 = t;
      t = SSL_exit(k_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
    t = i_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm i_64 (ATerm), ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
    l_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_5 = ATgetFirst((ATermList) t);
        k_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_2 = NULL,q_2 = NULL,t_1 = NULL;
          t = SSLgetAnnotations(l_5);
          f_2 = t;
          t = k_5;
          t = m_5(t);
          q_2 = t;
          t = (ATerm) ATinsert(CheckATermList(q_2), j_5);
          t_1 = t;
          t = SSLsetAnnotations(t_1, f_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_5;
        t = i_64(t);
      }
    return(t);
  }
  t = m_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL;
  m_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_4;
    }
  else
    {
      ATerm v_0 (ATerm t)
      {
        t = not_null(o_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((n_4 != NULL) && (n_4 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            n_4 = ATgetFirst((ATermList) t);
          if(((o_4 != NULL) && (o_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_4;
      t = at_end_1_0(v_0, t);
    }
  return(t);
}
ATerm h_7 (ATerm u_5, ATerm t)
{
  ATerm w_5 = NULL;
  t = SSL_explode_term(u_5);
  if(match_cons(t, sym__2))
    {
      ATerm d_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,e_6 = NULL;
  e_6 = t;
  if(match_cons(t, sym__2))
    {
      b_6 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
      {
        ATerm e_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_0 (ATerm t)
            {
              t = c_6;
              return(t);
            }
            t = b_6;
            t = at_end_1_0(w_0, t);
            ;
            LocalPopChoice(f_17);
          }
        else
          {
            t = e_17;
            t = h_7(e_6, t);
          }
      }
    }
  else
    {
      t = h_7(e_6, t);
    }
  return(t);
}
ATerm u_6 (ATerm i_72 (ATerm), ATerm p_27, ATerm n_27, ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL,m_7 = NULL,r_7 = NULL,u_7 = NULL,x_7 = NULL;
  r_7 = t;
  t = i_72(t);
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_7, p_27, n_27);
  t = d_7(i_7, p_27, n_27, t);
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL;
        t = term_j_17;
        y_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_7, term_j_17);
        t = c_7(i_7, y_7, t);
        ;
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_7 = ATgetFirst((ATermList) t);
        m_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_j_17;
    u_7 = t;
    t = (ATerm) ATinsert(CheckATermList(m_7), (ATerm) ATinsert(CheckATermList(j_7), p_27));
    x_7 = t;
    t = SSL_table_put(i_7, u_7, x_7);
    t = r_7;
  }
  return(t);
}
ATerm w_8 (ATerm f_8, ATerm t)
{
  t = f_8;
  {
    ATerm k_17 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_17 = ATgetArgument(t, 0);
            ATerm n_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_17;
      }
    t = term_p_17;
    t = debug_1_0(x_0, t);
    t = (ATerm) ATmakeAppl(sym__2, f_8, term_h_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm x_8 (ATerm h_8, ATerm i_8, ATerm j_8, ATerm t)
{
  t = SSL_open_file(h_8, i_8);
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_q_17;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
  p_8 = t;
  if(match_cons(t, sym__2))
    {
      q_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
      {
        ATerm r_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_8(p_8, t);
            ;
            LocalPopChoice(s_17);
          }
        else
          {
            t = r_17;
            t = x_8(q_8, r_8, p_8, t);
          }
      }
    }
  else
    {
      t = w_8(p_8, t);
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
  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
  t = term_t_17;
  t = new_0_0(t);
  b_9 = t;
  t = term_u_17;
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_9, term_u_17);
  t = b_7(b_9, c_9, t);
  d_9 = t;
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_g_9);
        i_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_9, (ATerm) ATinsert(ATempty, term_g_9));
        t = v_6(d_9, i_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        t = d_9;
      }
  }
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_9 = NULL,r_9 = NULL;
  t = new_file_0_0(t);
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_9, term_h_9);
  t = open_file_0_0(t);
  t = term_t_17;
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_9, term_t_17);
  t = u_6(z_0, o_9, r_9, t);
  t = o_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL;
  s_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_3 = NULL,n_3 = NULL;
      t = s_10;
      t = xtc_new_file_0_0(t);
      l_3 = t;
      t = r_0(t);
      n_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_3, (ATerm) ATinsert(ATinsert(ATempty, l_3), term_z_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(l_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_3);
    }
  else
    {
      ATerm a_4 = NULL,b_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_10;
      t = xtc_new_file_0_0(t);
      a_4 = t;
      t = r_0(t);
      b_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_4), term_z_17), t_10), term_a_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(a_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_4);
    }
  return(t);
}
ATerm g_6 (ATerm x_16, ATerm y_16, ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL;
  t = y_16;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_16;
    }
  else
    {
      ATerm q_4 = NULL,w_4 = NULL,b_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_12 = ATgetFirst((ATermList) t);
          b_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_16);
      q_4 = t;
      t = b_12;
      {
        ATerm i_5 (ATerm t)
        {
          ATerm b_18 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_5 = NULL;
              a_5 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_5;
              ;
              LocalPopChoice(c_18);
            }
          else
            {
              t = b_18;
              {
                ATerm b_5 = NULL;
                t = Cons_2_0(_id, i_5, t);
                b_5 = t;
                t = (ATerm) ATinsert(CheckATermList(b_5), x_16);
              }
            }
          return(t);
        }
        t = i_5(t);
        if(((w_4 != NULL) && (w_4 != t)))
          _fail(t);
        else
          w_4 = t;
        t = (ATerm) ATinsert(CheckATermList(w_4), a_12);
        if(((b_2 != NULL) && (b_2 != t)))
          _fail(t);
        else
          b_2 = t;
        t = SSLsetAnnotations(b_2, q_4);
      }
    }
  return(t);
}
ATerm at_last_1_0 (ATerm t_64 (ATerm), ATerm t)
{
  ATerm x_13 (ATerm t)
  {
    ATerm t_13 = NULL,u_13 = NULL,w_13 = NULL;
    t_13 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_13 = ATgetFirst((ATermList) t);
        w_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_18 = t;
      int i_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_5 = NULL,i_2 = NULL;
          t = SSLgetAnnotations(t_13);
          v_5 = t;
          t = w_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(w_13), u_13);
          i_2 = t;
          t = SSLsetAnnotations(i_2, v_5);
          t = t_64(t);
          ;
          LocalPopChoice(i_18);
        }
      else
        {
          t = h_18;
          {
            ATerm k_7 = NULL,o_7 = NULL,k_2 = NULL;
            t = SSLgetAnnotations(t_13);
            k_7 = t;
            t = w_13;
            t = x_13(t);
            o_7 = t;
            t = (ATerm) ATinsert(CheckATermList(o_7), u_13);
            k_2 = t;
            t = SSLsetAnnotations(k_2, k_7);
          }
        }
    }
    return(t);
  }
  t = x_13(t);
  return(t);
}
ATerm i_6 (ATerm b_64 (ATerm), ATerm l_17, ATerm i_189, ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm f_14 = NULL;
    f_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_17, f_14);
    t = b_64(t);
    t = f_14;
    return(t);
  }
  t = i_189;
  t = SRTS_one(a_1, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm m_64 (ATerm), ATerm t)
{
  ATerm c_15 (ATerm t)
  {
    ATerm m_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_64(t);
        ;
        LocalPopChoice(o_18);
      }
    else
      {
        t = m_18;
        {
          ATerm x_14 = NULL,a_15 = NULL,b_15 = NULL,a_8 = NULL,d_8 = NULL,n_2 = NULL;
          x_14 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_15 = ATgetFirst((ATermList) t);
              b_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_14);
          a_8 = t;
          t = b_15;
          t = c_15(t);
          d_8 = t;
          t = (ATerm) ATinsert(CheckATermList(d_8), a_15);
          n_2 = t;
          t = SSLsetAnnotations(n_2, a_8);
        }
      }
    return(t);
  }
  t = c_15(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm f_64 (ATerm), ATerm t)
{
  ATerm i_15 = NULL,s_15 = NULL;
  ATerm b_1 (ATerm t)
  {
    ATerm t_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,b_16 = NULL,d_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,s_2 = NULL,p_2 = NULL;
    i_16 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_16 = ATgetFirst((ATermList) t);
        d_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_16);
    x_15 = t;
    t = b_16;
    t = f_64(t);
    g_16 = t;
    t = (ATerm) ATinsert(CheckATermList(d_16), g_16);
    p_2 = t;
    t = SSLsetAnnotations(p_2, x_15);
    h_16 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_15 = ATgetFirst((ATermList) t);
        w_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_16);
    t_15 = t;
    t = w_15;
    if(((i_15 != NULL) && (i_15 != t)))
      _fail(t);
    else
      i_15 = t;
    t = (ATerm) ATinsert(CheckATermList(w_15), v_15);
    s_2 = t;
    t = SSLsetAnnotations(s_2, t_15);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(b_1, t);
  if(((s_15 != NULL) && (s_15 != t)))
    _fail(t);
  else
    s_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_15, not_null(i_15));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm i_87 (ATerm), ATerm t)
{
  ATerm t_16 = NULL,z_16 = NULL;
  ATerm p_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(i_87, t);
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = p_18;
      {
        ATerm p_16 = NULL;
        p_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_16, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_16;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_16;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm s_18 = ATgetFirst((ATermList) t);
              ATerm v_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = z_16;
          t = list_tokenize_1_0(i_87, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm w_18 = ATgetFirst((ATermList) t);
          ATerm a_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_16;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, t_16);
        }
      else
        {
          ATerm d_18 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_19 = ATgetFirst((ATermList) t);
              ATerm c_19 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = z_16;
          t = list_tokenize_1_0(i_87, t);
          d_18 = t;
          t = (ATerm) ATinsert(CheckATermList(d_18), t_16);
        }
    }
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm u_18 = NULL;
  if(match_cons(t, sym__2))
    {
      u_18 = ATgetArgument(t, 0);
      if((u_18 != ATgetArgument(t, 1)))
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
  ATerm x_18 = NULL;
  x_18 = t;
  t = SSL_implode_string(x_18);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,k_18 = NULL,l_18 = NULL,n_18 = NULL,q_18 = NULL,a_3 = NULL;
  q_18 = t;
  if(match_cons(t, sym__2))
    {
      k_18 = ATgetArgument(t, 0);
      l_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_18);
  g_18 = t;
  t = SSL_explode_string(l_18);
  n_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_18, n_18);
  a_3 = t;
  t = SSLsetAnnotations(a_3, g_18);
  if(match_cons(t, sym__2))
    {
      e_18 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_18;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm t_18 = NULL;
      t_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_18, e_18);
      t = i_6(d_1, t_18, e_18, t);
      return(t);
    }
    t = list_tokenize_1_0(c_1, t);
    t = map_1_0(h_1, t);
  }
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm i_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_19 = ATgetFirst((ATermList) t);
      i_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_19;
  return(t);
}
ATerm remove_extension_0_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,e_19 = NULL,f_19 = NULL;
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_g_19), z_18);
  t = string_tokenize_0_0(t);
  t = at_last_1_0(i_1, t);
  y_18 = t;
  t = term_h_19;
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_19, y_18);
  t = g_6(f_19, y_18, t);
  e_19 = t;
  t = SSL_concat_strings(e_19);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm j_19 = NULL;
  ATerm p_1 (ATerm t)
  {
    ATerm k_19 = NULL,q_19 = NULL;
    k_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), k_19);
    t = c_7(not_null(j_19), k_19, t);
    q_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_19, q_19);
    return(t);
  }
  if(((j_19 != NULL) && (j_19 != t)))
    _fail(t);
  else
    j_19 = t;
  t = SSL_table_keys(j_19);
  t = map_1_0(p_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm q_73 (ATerm), ATerm t)
{
  ATerm s_19 = NULL;
  s_19 = t;
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_19 = NULL;
        t = term_u_8;
        t = get_config_0_0(t);
        u_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_19, term_w_14);
        t = geq_0_0(t);
        t = s_19;
        t = q_73(t);
        ;
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = s_19;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm p_73 (ATerm), ATerm t)
{
  ATerm z_19 = NULL;
  z_19 = t;
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_20 = NULL;
        t = term_u_8;
        t = get_config_0_0(t);
        c_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_20, term_n_12);
        t = geq_0_0(t);
        t = z_19;
        t = p_73(t);
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = z_19;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm r_73 (ATerm), ATerm t)
{
  ATerm f_20 = NULL;
  f_20 = t;
  {
    ATerm p_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_20 = NULL;
        t = term_u_8;
        t = get_config_0_0(t);
        h_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_20, term_n_10);
        t = geq_0_0(t);
        t = f_20;
        t = r_73(t);
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = p_19;
        t = f_20;
      }
  }
  return(t);
}
ATerm k_6 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm m_22, ATerm l_22, ATerm t)
{
  t = a_68(t);
  {
    ATerm q_1 (ATerm t)
    {
      ATerm j_20 = NULL;
      j_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, j_20);
      t = z_67(t);
      return(t);
    }
    t = fetch_1_0(q_1, t);
    t = l_22;
  }
  return(t);
}
ATerm l_6 (ATerm w_67 (ATerm), ATerm i_22, ATerm h_22, ATerm t)
{
  ATerm h_21 (ATerm t)
  {
    ATerm y_20 = NULL,z_20 = NULL,c_21 = NULL;
    y_20 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_20 = ATgetFirst((ATermList) t);
            c_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_19 = t;
          int v_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_20;
              {
                ATerm r_1 (ATerm t)
                {
                  t = h_22;
                  return(t);
                }
                t = k_6(w_67, r_1, z_20, c_21, t);
                t = h_21(t);
              }
              ;
              LocalPopChoice(v_19);
            }
          else
            {
              t = t_19;
              {
                ATerm v_8 = NULL,a_9 = NULL,i_3 = NULL;
                t = SSLgetAnnotations(y_20);
                v_8 = t;
                t = c_21;
                t = h_21(t);
                a_9 = t;
                t = (ATerm) ATinsert(CheckATermList(a_9), z_20);
                i_3 = t;
                t = SSLsetAnnotations(i_3, v_8);
              }
            }
        }
      }
    return(t);
  }
  t = i_22;
  t = h_21(t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm t_21 = NULL;
  if(match_cons(t, sym__2))
    {
      t_21 = ATgetArgument(t, 0);
      if((t_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm d_29, ATerm e_29, ATerm f_29, ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_29, e_29);
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_19 = ATgetArgument(t, 0);
            ATerm a_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_29, e_29);
        t = c_7(d_29, e_29, t);
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        t = (ATerm) ATempty;
      }
    p_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_21, f_29);
    t = l_6(s_1, p_21, f_29, t);
    o_21 = t;
    t = SSL_table_put(d_29, e_29, o_21);
    t = n_21;
  }
  return(t);
}
ATerm n_6 (ATerm t_73 (ATerm), ATerm n_29, ATerm m_29, ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm u_21 = NULL,v_21 = NULL;
    if(match_cons(t, sym__2))
      {
        u_21 = ATgetArgument(t, 0);
        v_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, n_29, u_21, v_21);
    t = t_73(t);
    return(t);
  }
  t = m_29;
  t = map_1_0(u_1, t);
  return(t);
}
ATerm v_6 (ATerm k_31, ATerm l_31, ATerm t)
{
  t = SSL_access(k_31, l_31);
  return(t);
}
ATerm s_22 (ATerm e_22, ATerm t)
{
  t = SSL_fclose(e_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_22 = NULL,o_22 = NULL;
  o_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_22 = ATgetArgument(t, 0);
      {
        ATerm b_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_22);
            ;
            LocalPopChoice(d_20);
          }
        else
          {
            t = b_20;
            t = s_22(o_22, t);
          }
      }
    }
  else
    {
      t = s_22(o_22, t);
    }
  return(t);
}
ATerm o_6 (ATerm p_15, ATerm t)
{
  t = SSL_read_term_from_stream(p_15);
  return(t);
}
ATerm q_6 (ATerm s_31, ATerm t_31, ATerm t)
{
  ATerm v_22 = NULL;
  t = SSL_fopen(s_31, t_31);
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_22 = NULL;
  t = SSL_stdin_stream();
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_23 = NULL;
  t = SSL_stdout_stream();
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_23 = NULL;
  t = SSL_stderr_stream();
  c_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_23);
  return(t);
}
ATerm p_25 (ATerm p_23, ATerm t)
{
  ATerm v_23 = NULL;
  t = SSL_explode_term(p_23);
  if(match_cons(t, sym__2))
    {
      ATerm e_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_20 = ATgetArgument(t, 1);
        if(((ATgetType(g_20) == AT_LIST) && !(ATisEmpty(g_20))))
          {
            v_23 = ATgetFirst((ATermList) g_20);
            {
              ATerm i_20 = (ATerm) ATgetNext((ATermList) g_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm q_25 (ATerm b_24, ATerm c_24, ATerm f_24, ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,j_24 = NULL,o_24 = NULL,k_3 = NULL;
  t = SSLgetAnnotations(f_24);
  j_24 = t;
  t = b_24;
  if(match_cons(t, sym_Path_1))
    {
      o_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_24, c_24);
  k_3 = t;
  t = SSLsetAnnotations(k_3, j_24);
  if(match_cons(t, sym__2))
    {
      g_24 = ATgetArgument(t, 0);
      h_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(g_24, h_24, t);
  return(t);
}
ATerm s_25 (ATerm u_24, ATerm v_24, ATerm w_24, ATerm t)
{
  ATerm x_24 = NULL,b_25 = NULL,c_25 = NULL,f_25 = NULL,m_3 = NULL;
  t = SSLgetAnnotations(w_24);
  c_25 = t;
  t = SSL_is_string(u_24);
  f_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_25, v_24);
  m_3 = t;
  t = SSLsetAnnotations(m_3, c_25);
  if(match_cons(t, sym__2))
    {
      x_24 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(x_24, b_25, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,o_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_20 = ATgetArgument(t, 0);
      ATerm l_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  k_25 = t;
  if(match_cons(t, sym__2))
    {
      l_25 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
      {
        ATerm m_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_25(k_25, t);
            ;
            LocalPopChoice(n_20);
          }
        else
          {
            t = m_20;
            {
              ATerm o_20 = t;
              int p_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_25(l_25, o_25, k_25, t);
                  ;
                  LocalPopChoice(p_20);
                }
              else
                {
                  t = o_20;
                  t = s_25(l_25, o_25, k_25, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_25(k_25, t);
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_q_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_25 = NULL;
      x_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_25, term_t_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      t = debug_1_0(w_1, t);
      _fail(t);
    }
  v_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(w_25, t);
  u_25 = t;
  t = v_25;
  t = fclose_0_0(t);
  t = u_25;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_v_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_25 = NULL,a_26 = NULL;
      z_25 = t;
      t = (ATerm) ATinsert(ATempty, term_a_21);
      a_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_25, (ATerm) ATinsert(ATempty, term_a_21));
      t = v_6(z_25, a_26, t);
      LocalPopChoice(x_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = w_20;
      {
        ATerm b_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_21 = t;
            if((PushChoice() == 0))
              {
                ATerm d_26 = NULL,e_26 = NULL;
                d_26 = t;
                t = (ATerm) ATinsert(ATempty, term_g_9);
                e_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_26, (ATerm) ATinsert(ATempty, term_g_9));
                t = v_6(d_26, e_26, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_21;
              }
            t = debug_1_0(z_1, t);
            ;
            LocalPopChoice(d_21);
          }
        else
          {
            t = b_21;
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
  t = term_f_21;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_g_21;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
  v_26 = t;
  t = term_q_16;
  w_26 = t;
  t = (ATerm) ATinsert(ATempty, term_i_21);
  x_26 = t;
  t = SSL_printnl(w_26, x_26);
  t = v_26;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,b_27 = NULL;
  if(match_cons(t, sym__3))
    {
      y_26 = ATgetArgument(t, 0);
      z_26 = ATgetArgument(t, 1);
      b_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_6(y_26, z_26, b_27, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
  c_27 = t;
  t = term_q_16;
  d_27 = t;
  t = (ATerm) ATinsert(ATempty, term_j_21);
  e_27 = t;
  t = SSL_printnl(d_27, e_27);
  t = c_27;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,s_27 = NULL;
  f_27 = t;
  t = term_q_16;
  g_27 = t;
  t = (ATerm) ATinsert(ATempty, term_i_21);
  s_27 = t;
  t = SSL_printnl(g_27, s_27);
  t = f_27;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
  f_26 = t;
  t = if_verbose5_1_0(c_2, t);
  {
    ATerm k_21 = t;
    if((PushChoice() == 0))
      {
        ATerm t_26 = NULL,u_26 = NULL;
        t = term_l_21;
        t_26 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, f_26);
        u_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_21, (ATerm) ATmakeAppl(sym_Imported_1, f_26));
        t = c_7(t_26, u_26, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_21;
      }
    l_26 = t;
    t = term_l_21;
    q_26 = t;
    t = term_m_21;
    r_26 = t;
    t = (ATerm) ATinsert(ATempty, f_26);
    s_26 = t;
    t = SSL_table_put(q_26, r_26, s_26);
    t = l_26;
    t = if_verbose4_1_0(e_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(h_2, t);
    g_26 = t;
    t = term_l_21;
    p_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_21, g_26);
    t = n_6(j_2, p_26, g_26, t);
    t = if_verbose6_1_0(l_2, t);
    t = term_l_21;
    m_26 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, f_26);
    n_26 = t;
    t = (ATerm) ATempty;
    o_26 = t;
    t = SSL_table_put(m_26, n_26, o_26);
    t = (ATerm) ATmakeAppl(sym__3, term_l_21, (ATerm)ATmakeAppl(sym_Imported_1, f_26), (ATerm) ATempty);
    t = if_verbose4_1_0(m_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm o_71 (ATerm), ATerm t)
{
  ATerm s_28 = NULL,u_28 = NULL,v_28 = NULL;
  s_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_28;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_28 = ATgetFirst((ATermList) t);
          v_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_9 = NULL,c_10 = NULL,d_10 = NULL,x_4 = NULL;
            t = SSLgetAnnotations(s_28);
            x_9 = t;
            t = u_28;
            t = o_71(t);
            c_10 = t;
            t = v_28;
            t = filter_1_0(o_71, t);
            d_10 = t;
            t = (ATerm) ATinsert(CheckATermList(d_10), c_10);
            x_4 = t;
            t = SSLsetAnnotations(x_4, x_9);
            ;
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            t = v_28;
            t = filter_1_0(o_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm p_79 (ATerm), ATerm t)
{
  ATerm s_29 (ATerm t)
  {
    ATerm s_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_79(t);
        t = s_29(t);
        ;
        LocalPopChoice(w_21);
      }
    else
      {
        t = s_21;
      }
    return(t);
  }
  t = s_29(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_29 = NULL;
            t = term_c_22;
            t_29 = t;
            t = SSL_getenv(t_29);
            ;
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
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
  t = term_d_22;
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  t = term_l_21;
  a_30 = t;
  t = term_f_22;
  b_30 = t;
  t = term_g_22;
  t = c_7(a_30, b_30, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm j_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_22;
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
  t = term_n_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm u_29 = NULL;
  t = if_verbose5_1_0(o_2, t);
  u_29 = t;
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_29 = NULL,w_29 = NULL;
        t = term_l_21;
        v_29 = t;
        t = term_m_21;
        w_29 = t;
        t = term_r_22;
        t = c_7(v_29, w_29, t);
        ;
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        {
          ATerm z_29 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          z_29 = t;
          t = repeat_1_0(t_2, t);
          t = z_29;
        }
      }
    t = u_29;
    t = if_verbose5_1_0(u_2, t);
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = debug_1_0(e_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm o_31 (ATerm f_30, ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
  t = term_l_21;
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, f_30);
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_21, (ATerm) ATmakeAppl(sym_Tool_1, f_30));
  t = c_7(l_30, m_30, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_22 = ATgetFirst((ATermList) t);
      if(match_cons(u_22, sym__2))
        {
          ATerm x_22 = ATgetArgument(u_22, 0);
          k_30 = ATgetArgument(u_22, 1);
        }
      else
        _fail(t);
      {
        ATerm w_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_30;
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = debug_1_0(j_3, t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_l_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(p_3, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_z_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm b_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_30 = NULL,u_30 = NULL,w_30 = NULL;
      t = if_verbose5_1_0(b_3, t);
      t = xtc_load_0_0(t);
      w_30 = t;
      if(match_cons(t, sym__2))
        {
          o_30 = ATgetArgument(t, 0);
          u_30 = ATgetArgument(t, 1);
          {
            ATerm e_23 = t;
            int f_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
                t = term_l_21;
                e_31 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, o_30);
                f_31 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_21, (ATerm) ATmakeAppl(sym_Tool_1, o_30));
                t = c_7(e_31, f_31, t);
                {
                  ATerm f_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((u_30 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((d_31 != NULL) && (d_31 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          d_31 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(f_3, t);
                  t = not_null(d_31);
                }
                ;
                LocalPopChoice(f_23);
              }
            else
              {
                t = e_23;
                t = o_31(w_30, t);
              }
          }
        }
      else
        {
          t = o_31(w_30, t);
        }
      t = if_verbose5_1_0(g_3, t);
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = b_23;
      {
        ATerm n_31 = NULL,q_10 = NULL,r_10 = NULL;
        n_31 = t;
        t = term_q_16;
        q_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_23), n_31), term_g_23);
        r_10 = t;
        t = SSL_printnl(q_10, r_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_23), n_31), term_g_23);
        t = if_verbose5_1_0(o_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm w_6 (ATerm l_12, ATerm m_12, ATerm t)
{
  t = SSL_copy(l_12, m_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_33 = NULL,g_33 = NULL;
  c_33 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_11 = NULL;
        t = c_33;
        t = n_0(t);
        a_11 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = a_11;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = a_11;
          }
        t = (ATerm) ATmakeAppl(sym__2, g_33, a_11);
        t = w_6(g_33, a_11, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, g_33);
        ;
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        {
          ATerm k_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_11 = NULL;
              t = c_33;
              t = n_0(t);
              i_11 = t;
              {
                ATerm m_23 = t;
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
                            if((g_33 != t))
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
                    t = m_23;
                  }
                t = (ATerm) ATmakeAppl(sym__2, g_33, i_11);
                t = w_6(g_33, i_11, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, g_33);
              }
              ;
              LocalPopChoice(l_23);
            }
          else
            {
              t = k_23;
              t = c_33;
              t = n_0(t);
              if((g_33 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_33);
            }
        }
      }
  }
  return(t);
}
ATerm x_6 (ATerm l_28, ATerm m_28, ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL;
  q_33 = t;
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_28, m_28);
        t = c_7(l_28, m_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_23 = ATgetFirst((ATermList) t);
            p_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(o_23);
        t = SSL_table_put(l_28, m_28, p_33);
        t = (ATerm) ATmakeAppl(sym__3, l_28, m_28, p_33);
      }
    else
      {
        t = n_23;
        t = SSL_table_remove(l_28, m_28);
        t = (ATerm) ATmakeAppl(sym__2, l_28, m_28);
      }
    t = q_33;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,e_34 = NULL,g_34 = NULL;
  e_34 = t;
  t = f_72(t);
  a_34 = t;
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_34 = NULL;
        t = term_j_17;
        h_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_34, term_j_17);
        t = c_7(a_34, h_34, t);
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_33 = ATgetFirst((ATermList) t);
        y_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_j_17;
    g_34 = t;
    t = SSL_table_put(a_34, g_34, y_33);
    t = z_33;
    {
      ATerm q_3 (ATerm t)
      {
        ATerm j_34 = NULL;
        j_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_34, j_34);
        t = x_6(a_34, j_34, t);
        return(t);
      }
      t = map_1_0(q_3, t);
      t = e_34;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_73(t);
      t = b_73(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      t = b_73(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_72 (ATerm), ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
  o_34 = t;
  t = e_72(t);
  n_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_34, term_j_17);
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_34 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_23 = ATgetArgument(t, 0);
            ATerm z_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_17;
        v_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_34, term_j_17);
        t = c_7(n_34, v_34, t);
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        t = (ATerm) ATempty;
      }
    p_34 = t;
    t = term_j_17;
    q_34 = t;
    t = (ATerm) ATinsert(CheckATermList(p_34), (ATerm) ATempty);
    r_34 = t;
    t = SSL_table_put(n_34, q_34, r_34);
    t = o_34;
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm e_35 = NULL;
  e_35 = t;
  {
    ATerm a_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(e_35);
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = a_24;
        t = e_35;
      }
  }
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_75 (ATerm), ATerm t)
{
  ATerm y_34 = NULL;
  ATerm t_3 (ATerm t)
  {
    ATerm z_34 = NULL;
    z_34 = t;
    {
      ATerm e_24 = t;
      int i_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_35 = NULL,b_35 = NULL;
          t = term_y_17;
          a_35 = t;
          t = term_j_17;
          b_35 = t;
          t = term_k_24;
          t = c_7(a_35, b_35, t);
          ;
          LocalPopChoice(i_24);
        }
      else
        {
          t = e_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((y_34 != NULL) && (y_34 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            y_34 = ATgetFirst((ATermList) t);
          {
            ATerm l_24 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = y_34;
      t = map_1_0(u_3, t);
      t = z_34;
      t = end_scope_1_0(v_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(r_3, t);
  t = restore_always_2_0(j_75, t_3, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      t = term_p_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm k_75 (ATerm), ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_35 = NULL;
        t = term_a_18;
        t = get_config_0_0(t);
        h_35 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_35);
        ;
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = term_f_9;
      }
    t = k_75(t);
    t = copy_to_1_0(x_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(w_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,o_35 = NULL;
  i_35 = t;
  t = term_t_17;
  t = whoami_0_0(t);
  j_35 = t;
  t = term_q_16;
  l_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_24), j_35), term_s_24);
  o_35 = t;
  t = SSL_printnl(l_35, o_35);
  t = term_e_9;
  k_35 = t;
  t = SSL_exit(k_35);
  t = i_35;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm r_35 = NULL;
  r_35 = t;
  if(match_string(t, "-k"))
    {
      t = r_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_35;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
  t_35 = t;
  t = SSL_string_to_int(t_35);
  u_35 = t;
  t = term_y_24;
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_24, u_35);
  t = f_7(v_35, u_35, t);
  t = t_35;
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_3, z_3, c_4, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm x_35 = NULL;
  x_35 = t;
  if(match_string(t, "-S"))
    {
      t = x_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_35;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL;
  t = term_u_8;
  y_35 = t;
  t = term_a_25;
  z_35 = t;
  t = term_d_25;
  t = f_7(y_35, z_35, t);
  t = term_e_25;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  t = SSL_string_to_int(a_36);
  b_36 = t;
  t = term_u_8;
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, b_36);
  t = f_7(c_36, b_36, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_36);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_h_25;
  return(t);
}
ATerm s_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL;
  t = term_i_25;
  d_36 = t;
  t = term_t_17;
  e_36 = t;
  t = term_j_25;
  t = f_7(d_36, e_36, t);
  t = term_m_25;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_4, g_4, j_4, t);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = r_25;
      {
        ATerm y_25 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_4, p_4, r_4, t);
            ;
            LocalPopChoice(j_26);
          }
        else
          {
            t = y_25;
            t = Option_3_0(s_4, t_4, v_4, t);
          }
      }
    }
  return(t);
}
ATerm f_7 (ATerm g_30, ATerm h_30, ATerm t)
{
  ATerm f_36 = NULL;
  t = term_k_26;
  f_36 = t;
  t = SSL_table_put(f_36, g_30, h_30);
  t = (ATerm) ATmakeAppl(sym__3, term_k_26, g_30, h_30);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
      t = term_t_17;
      t = h_0(t);
      k_36 = t;
      t = term_a_27;
      l_36 = t;
      t = term_h_27;
      m_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_27, term_h_27, k_36);
      t = d_7(l_36, m_36, k_36, t);
      _fail(t);
    }
  else
    {
      ATerm p_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_36 = ATgetFirst((ATermList) t);
          j_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_36;
      t = d_0(t);
      t = term_t_17;
      t = g_0(t);
      p_36 = t;
      t = (ATerm) ATinsert(CheckATermList(j_36), p_36);
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm r_36 = NULL;
  r_36 = t;
  if(match_string(t, "-o"))
    {
      t = r_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_36;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL;
  s_36 = t;
  t = term_z_17;
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_17, s_36);
  t = f_7(t_36, s_36, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_36);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_4, c_5, e_5, t);
  return(t);
}
ATerm d_7 (ATerm g_28, ATerm h_28, ATerm f_28, ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_28, h_28);
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_27 = ATgetArgument(t, 0);
            ATerm m_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_28, h_28);
        t = c_7(g_28, h_28, t);
        ;
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
        t = (ATerm) ATempty;
      }
    w_36 = t;
    t = (ATerm) ATinsert(CheckATermList(w_36), f_28);
    x_36 = t;
    t = SSL_table_put(g_28, h_28, x_36);
    t = v_36;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL;
      t = term_t_17;
      t = m_0(t);
      i_37 = t;
      t = term_a_27;
      j_37 = t;
      t = term_h_27;
      k_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_27, term_h_27, i_37);
      t = d_7(j_37, k_37, i_37, t);
      _fail(t);
    }
  else
    {
      ATerm o_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_37 = ATgetFirst((ATermList) t);
          f_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_37 = ATgetFirst((ATermList) t);
          h_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_37;
      t = k_0(t);
      t = g_37;
      t = l_0(t);
      o_37 = t;
      t = (ATerm) ATinsert(CheckATermList(h_37), o_37);
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm q_37 = NULL;
  q_37 = t;
  if(match_string(t, "-i"))
    {
      t = q_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_37;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL;
  r_37 = t;
  t = term_a_18;
  s_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_18, r_37);
  t = f_7(s_37, r_37, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_37);
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_5, n_5, o_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_17;
  t = whoami_0_0(t);
  t_37 = t;
  t = term_q_16;
  v_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_27), t_37);
  w_37 = t;
  t = SSL_printnl(v_37, w_37);
  t = term_e_9;
  u_37 = t;
  t = SSL_exit(u_37);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_27;
  t = get_config_0_0(t);
  return(t);
}
ATerm y_6 (ATerm b_26, ATerm c_26, ATerm t)
{
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_26, c_26);
      ;
      LocalPopChoice(u_27);
    }
  else
    {
      t = t_27;
      t = SSL_addr(b_26, c_26);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_37;
      t = k_70(t);
    }
  else
    {
      ATerm d_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_37 = ATgetFirst((ATermList) t);
          a_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_38;
      t = foldr_2_0(k_70, l_70, t);
      d_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_37, d_38);
      t = l_70(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL;
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      k_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(j_12, k_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_38 = NULL,z_11 = NULL,d_12 = NULL;
  t = times_0_0(t);
  d_12 = t;
  t = SSL_explode_term(d_12);
  if(match_cons(t, sym__2))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_11;
  t = foldr_2_0(p_5, q_5, t);
  g_38 = t;
  t = SSL_TicksToSeconds(g_38);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
  r_38 = t;
  if(match_cons(t, sym__2))
    {
      s_38 = ATgetArgument(t, 0);
      t_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_38;
        if((s_38 != t))
          {
            _fail(t);
          }
        t = r_38;
        ;
        LocalPopChoice(x_27);
      }
    else
      {
        t = w_27;
        t = (ATerm) ATmakeAppl(sym__2, s_38, t_38);
        {
          ATerm y_27 = t;
          int z_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_38, t_38);
              ;
              LocalPopChoice(z_27);
            }
          else
            {
              t = y_27;
              t = SSL_gtr(s_38, t_38);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_38, t_38);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_73 (ATerm), ATerm t)
{
  ATerm x_38 = NULL;
  x_38 = t;
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_38 = NULL;
        t = term_u_8;
        t = get_config_0_0(t);
        z_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_38, term_e_9);
        t = geq_0_0(t);
        t = x_38;
        t = m_73(t);
        ;
        LocalPopChoice(b_28);
      }
    else
      {
        t = a_28;
        t = x_38;
      }
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,e_39 = NULL,f_39 = NULL;
  t = run_time_0_0(t);
  b_39 = t;
  t = term_t_17;
  t = whoami_0_0(t);
  c_39 = t;
  t = term_q_16;
  e_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_28), b_39), term_m_9), c_39);
  f_39 = t;
  t = SSL_printnl(e_39, f_39);
  t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_28), b_39), term_m_9), c_39));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_25;
  g_39 = t;
  t = SSL_exit(g_39);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL;
  p_39 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_39;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_39 = ATgetArgument(t, 0);
          {
            ATerm g_13 = NULL,z_4 = NULL;
            t = SSLgetAnnotations(p_39);
            g_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_39);
            z_4 = t;
            t = SSLsetAnnotations(z_4, g_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_39;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_77 (ATerm), ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      t = fetch_1_0(s_5, t);
    }
  t = l_77(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_39 = ATgetFirst((ATermList) t);
      t_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_39 = NULL,y_39 = NULL;
        ATerm t_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_39)), not_null(y_39));
          return(t);
        }
        t = t_39;
        t = j_0(t);
        if(((x_39 != NULL) && (x_39 != t)))
          _fail(t);
        else
          x_39 = t;
        t = s_39;
        t = i_0(t);
        if(((y_39 != NULL) && (y_39 != t)))
          _fail(t);
        else
          y_39 = t;
        t = t_39;
        t = reverse_acc_2_0(i_0, t_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_17;
      t = j_0(t);
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL,d_5 = NULL;
  e_40 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_40);
  c_40 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_40);
  d_5 = t;
  t = SSLsetAnnotations(d_5, c_40);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm g_40 = NULL;
  g_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_40), term_j_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL;
  ATerm k_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = k_28;
      t = fetch_1_0(x_5, t);
    }
  t = term_o_28;
  t = echo_0_0(t);
  t = term_a_27;
  a_40 = t;
  t = term_h_27;
  b_40 = t;
  t = term_p_28;
  t = c_7(a_40, b_40, t);
  t = reverse_acc_2_0(_id, y_5, t);
  t = map_1_0(z_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_64 (ATerm), ATerm t)
{
  ATerm d_41 (ATerm t)
  {
    ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL;
    a_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_41 = ATgetFirst((ATermList) t);
        c_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_28 = t;
      int r_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_13 = NULL,c_14 = NULL,g_5 = NULL;
          t = SSLgetAnnotations(a_41);
          z_13 = t;
          t = b_41;
          t = c_64(t);
          c_14 = t;
          t = (ATerm) ATinsert(CheckATermList(c_41), c_14);
          g_5 = t;
          t = SSLsetAnnotations(g_5, z_13);
          ;
          LocalPopChoice(r_28);
        }
      else
        {
          t = q_28;
          {
            ATerm r_14 = NULL,z_14 = NULL,h_5 = NULL;
            t = SSLgetAnnotations(a_41);
            r_14 = t;
            t = c_41;
            t = d_41(t);
            z_14 = t;
            t = (ATerm) ATinsert(CheckATermList(z_14), b_41);
            h_5 = t;
            t = SSLsetAnnotations(h_5, r_14);
          }
        }
    }
    return(t);
  }
  t = d_41(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL;
  h_41 = t;
  {
    ATerm t_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_41;
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
            t = h_41;
          }
        ;
        LocalPopChoice(w_28);
      }
    else
      {
        t = t_28;
        t = (ATerm) ATinsert(ATempty, h_41);
      }
    i_41 = t;
    t = term_p_24;
    j_41 = t;
    t = SSL_printnl(j_41, i_41);
    t = h_41;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_27;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm b_7 (ATerm o_46, ATerm p_46, ATerm t)
{
  t = SSL_strcat(o_46, p_46);
  return(t);
}
ATerm debug_1_0 (ATerm x_59 (ATerm), ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL;
  n_41 = t;
  t = x_59(t);
  o_41 = t;
  t = term_q_16;
  p_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_41), o_41);
  q_41 = t;
  t = SSL_printnl(p_41, q_41);
  t = n_41;
  return(t);
}
ATerm map_1_0 (ATerm s_63 (ATerm), ATerm t)
{
  ATerm f_42 (ATerm t)
  {
    ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
    c_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_42;
      }
    else
      {
        ATerm o_15 = NULL,y_15 = NULL,z_15 = NULL,a_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_42 = ATgetFirst((ATermList) t);
            e_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_42);
        o_15 = t;
        t = d_42;
        t = s_63(t);
        y_15 = t;
        t = e_42;
        t = f_42(t);
        z_15 = t;
        t = (ATerm) ATinsert(CheckATermList(z_15), y_15);
        a_10 = t;
        t = SSLsetAnnotations(a_10, o_15);
      }
    return(t);
  }
  t = f_42(t);
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
ATerm d_6 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_42 = NULL;
      n_42 = t;
      t = SSL_is_string(n_42);
      ;
      LocalPopChoice(g_29);
    }
  else
    {
      t = c_29;
      {
        ATerm h_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_6, t);
            ;
            LocalPopChoice(i_29);
          }
        else
          {
            t = h_29;
            {
              ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
              t_42 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_42 = ATgetArgument(t, 0);
                  t = u_42;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_42 = ATgetArgument(t, 0);
                      t = u_42;
                      {
                        ATerm j_29 = t;
                        int k_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_29);
                          }
                        else
                          {
                            t = j_29;
                            t = debug_1_0(d_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm z_42 = NULL,a_43 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_42 = ATgetArgument(t, 0);
                          v_42 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_42;
                      t = eval_config_0_0(t);
                      z_42 = t;
                      t = v_42;
                      t = eval_config_0_0(t);
                      a_43 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_42, a_43);
                      t = b_7(z_42, a_43, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm c_7 (ATerm x_29, ATerm y_29, ATerm t)
{
  t = SSL_table_get(x_29, y_29);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL;
  e_43 = t;
  t = term_k_26;
  f_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_26, e_43);
  t = c_7(f_43, e_43, t);
  {
    ATerm l_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_43 = NULL,h_43 = NULL;
        t = eval_config_0_0(t);
        g_43 = t;
        t = term_k_26;
        h_43 = t;
        t = SSL_table_put(h_43, e_43, g_43);
        t = g_43;
        ;
        LocalPopChoice(o_29);
      }
    else
      {
        t = l_29;
      }
  }
  return(t);
}
ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL;
  t = term_p_29;
  k_43 = t;
  t = term_t_17;
  l_43 = t;
  t = term_q_29;
  t = f_7(k_43, l_43, t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_r_29;
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
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL;
  t = term_p_29;
  o_43 = t;
  t = term_t_17;
  p_43 = t;
  t = term_q_29;
  t = f_7(o_43, p_43, t);
  t = term_c_30;
  m_43 = t;
  t = term_t_17;
  n_43 = t;
  t = term_d_30;
  t = f_7(m_43, n_43, t);
  t = term_e_30;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_6, j_6, t_6, t);
      ;
      LocalPopChoice(n_30);
    }
  else
    {
      t = j_30;
      t = Option_3_0(z_6, a_7, e_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_51 (ATerm), ATerm l_51 (ATerm), ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,h_10 = NULL;
  v_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_43 = ATgetFirst((ATermList) t);
      s_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_43);
  q_43 = t;
  t = r_43;
  t = k_51(t);
  t_43 = t;
  t = s_43;
  t = l_51(t);
  u_43 = t;
  t = (ATerm) ATinsert(CheckATermList(u_43), t_43);
  h_10 = t;
  t = SSLsetAnnotations(h_10, q_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_79 (ATerm), ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,f_44 = NULL,g_44 = NULL,j_10 = NULL;
  a_44 = t;
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_30;
        t = j_79(t);
        ;
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
      }
    t = a_44;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_44 = ATgetFirst((ATermList) t);
        d_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_44);
    b_44 = t;
    t = term_r_27;
    g_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_27, c_44);
    t = f_7(g_44, c_44, t);
    t = d_44;
    {
      ATerm q_44 (ATerm t)
      {
        ATerm s_30 = t;
        int t_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_30 = t;
            int x_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_44 = NULL;
                j_44 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_44;
                ;
                LocalPopChoice(x_30);
              }
            else
              {
                t = v_30;
                t = j_79(t);
                t = Cons_2_0(_id, q_44, t);
              }
            ;
            LocalPopChoice(t_30);
          }
        else
          {
            t = s_30;
            {
              ATerm m_44 = NULL,n_44 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_44 = ATgetFirst((ATermList) t);
                  n_44 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_44), (ATerm) ATmakeAppl(sym_Undefined_1, m_44));
            }
          }
        return(t);
      }
      t = q_44(t);
      if(((f_44 != NULL) && (f_44 != t)))
        _fail(t);
      else
        f_44 = t;
      t = (ATerm) ATinsert(CheckATermList(f_44), (ATerm) ATmakeAppl(sym_Program_1, c_44));
      if(((j_10 != NULL) && (j_10 != t)))
        _fail(t);
      else
        j_10 = t;
      t = SSLsetAnnotations(j_10, b_44);
    }
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm h_45 = NULL;
  h_45 = t;
  if(match_string(t, "--help"))
    {
      t = h_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_45;
        }
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL;
  t = term_i_28;
  i_45 = t;
  t = term_t_17;
  j_45 = t;
  t = term_y_30;
  t = f_7(i_45, j_45, t);
  t = term_z_30;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_a_31;
  return(t);
}
ATerm q_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL;
  x_44 = t;
  t = term_a_27;
  e_45 = t;
  t = term_h_27;
  f_45 = t;
  t = (ATerm) ATempty;
  g_45 = t;
  t = SSL_table_put(e_45, f_45, g_45);
  t = x_44;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm b_31 = t;
      int c_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_79(t);
          ;
          LocalPopChoice(c_31);
        }
      else
        {
          t = b_31;
          {
            ATerm g_31 = t;
            int h_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_7, n_7, p_7, t);
                ;
                LocalPopChoice(h_31);
              }
            else
              {
                t = g_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_7, t);
    {
      ATerm i_31 = t;
      int j_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_45 = NULL;
          q_45 = t;
          {
            ATerm m_31 = t;
            int p_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_17 = NULL;
                t = q_45;
                {
                  ATerm q_31 = t;
                  int r_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_i_28;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(r_31);
                    }
                  else
                    {
                      t = q_31;
                      t = fetch_1_0(q_7, t);
                    }
                  t = q_45;
                  t = default_system_usage_0_0(t);
                  t = term_a_25;
                  c_17 = t;
                  t = SSL_exit(c_17);
                }
                ;
                LocalPopChoice(p_31);
              }
            else
              {
                t = m_31;
                {
                  ATerm g_17 = NULL;
                  t = term_p_29;
                  t = get_config_0_0(t);
                  t = q_45;
                  t = default_system_about_0_0(t);
                  t = term_a_25;
                  g_17 = t;
                  t = SSL_exit(g_17);
                }
              }
          }
          ;
          LocalPopChoice(j_31);
        }
      else
        {
          t = i_31;
          {
            ATerm u_31 = t;
            int v_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL;
                ATerm s_7 (ATerm t)
                {
                  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,l_10 = NULL;
                  w_45 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      v_45 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_45);
                  u_45 = t;
                  t = v_45;
                  if(((v_44 != NULL) && (v_44 != t)))
                    _fail(t);
                  else
                    v_44 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, v_45);
                  l_10 = t;
                  t = SSLsetAnnotations(l_10, u_45);
                  return(t);
                }
                t = fetch_1_0(s_7, t);
                t = term_q_16;
                if(((s_45 != NULL) && (s_45 != t)))
                  _fail(t);
                else
                  s_45 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_44)), term_w_31);
                if(((t_45 != NULL) && (t_45 != t)))
                  _fail(t);
                else
                  t_45 = t;
                t = SSL_printnl(s_45, t_45);
                t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_44)), term_w_31));
                t = default_system_usage_0_0(t);
                t = term_e_9;
                if(((r_45 != NULL) && (r_45 != t)))
                  _fail(t);
                else
                  r_45 = t;
                t = SSL_exit(r_45);
                ;
                LocalPopChoice(v_31);
              }
            else
              {
                t = u_31;
              }
          }
        }
      if(((w_44 != NULL) && (w_44 != t)))
        _fail(t);
      else
        w_44 = t;
      t = term_a_27;
      if(((y_44 != NULL) && (y_44 != t)))
        _fail(t);
      else
        y_44 = t;
      t = SSL_table_destroy(y_44);
      t = w_44;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL;
  t = parse_options_1_0(n_77, t);
  b_46 = t;
  t = term_x_31;
  e_46 = t;
  t = SSL_table_create(e_46);
  t = term_x_31;
  c_46 = t;
  t = term_y_31;
  d_46 = t;
  t = SSL_table_put(c_46, d_46, b_46);
  t = b_46;
  t = p_77(t);
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_77, t);
        ;
        LocalPopChoice(a_32);
      }
    else
      {
        t = z_31;
        {
          ATerm b_32 = t;
          int c_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_77(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_32);
            }
          else
            {
              t = b_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm d_32 = t;
  int e_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(e_32);
    }
  else
    {
      t = d_32;
      {
        ATerm f_32 = t;
        int g_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(g_32);
          }
        else
          {
            t = f_32;
            {
              ATerm h_32 = t;
              int i_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(w_7, z_7, b_8, t);
                  ;
                  LocalPopChoice(i_32);
                }
              else
                {
                  t = h_32;
                  {
                    ATerm j_32 = t;
                    int k_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(k_32);
                      }
                    else
                      {
                        t = j_32;
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
ATerm v_7 (ATerm t)
{
  t = xtc_io_1_0(c_8, t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL;
  t = term_l_32;
  m_46 = t;
  t = term_t_17;
  n_46 = t;
  t = term_m_32;
  t = f_7(m_46, n_46, t);
  t = term_n_32;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_o_32;
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm p_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_46 = NULL,x_46 = NULL;
      x_46 = t;
      if(match_cons(t, sym_FILE_1))
        {
          w_46 = ATgetArgument(t, 0);
          {
            ATerm o_17 = NULL,w_10 = NULL;
            t = SSLgetAnnotations(x_46);
            o_17 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, w_46);
            w_10 = t;
            t = SSLsetAnnotations(w_10, o_17);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_46;
        }
      LocalPopChoice(q_32);
      t = xtc_transform_file_2_0(e_8, g_8, t);
    }
  else
    {
      t = p_32;
      t = xtc_transform_term_2_0(k_8, l_8, t);
    }
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_47 = NULL,g_47 = NULL;
        g_47 = t;
        if(match_cons(t, sym_FILE_1))
          {
            f_47 = ATgetArgument(t, 0);
            {
              ATerm x_17 = NULL,h_11 = NULL;
              t = SSLgetAnnotations(g_47);
              x_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_47);
              h_11 = t;
              t = SSLsetAnnotations(h_11, x_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_47;
          }
        LocalPopChoice(s_32);
        t = xtc_transform_file_2_0(m_8, pass_verbose_0_0, t);
      }
    else
      {
        t = r_32;
        t = xtc_transform_term_2_0(n_8, pass_verbose_0_0, t);
      }
    {
      ATerm t_32 = t;
      int u_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_47 = NULL,n_47 = NULL;
          n_47 = t;
          if(match_cons(t, sym_FILE_1))
            {
              m_47 = ATgetArgument(t, 0);
              {
                ATerm j_18 = NULL,j_11 = NULL;
                t = SSLgetAnnotations(n_47);
                j_18 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_47);
                j_11 = t;
                t = SSLsetAnnotations(j_11, j_18);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = n_47;
            }
          LocalPopChoice(u_32);
          t = xtc_transform_file_2_0(o_8, pass_verbose_0_0, t);
        }
      else
        {
          t = t_32;
          t = xtc_transform_term_2_0(s_8, pass_verbose_0_0, t);
        }
    }
  }
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_v_32;
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm y_46 = NULL;
  t = term_w_32;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  y_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_46), term_x_32);
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_v_32;
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm z_46 = NULL;
  t = term_w_32;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  z_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_46), term_x_32);
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_z_32;
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_z_32;
  return(t);
}
ATerm io_pp_c_0_0 (ATerm t)
{
  t = option_wrap_4_0(t_7, default_usage_0_0, _id, v_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_c_0_0(t);
  return(t);
}
