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
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_x_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_z_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_r_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_a_29;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_b_28;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_b_27;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_z_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_n_24;
ATerm term_f_24;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_x_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_h_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_k_17;
ATerm term_c_17;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_v_15;
ATerm term_r_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
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
ATerm term_f_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_t_13;
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
ATerm term_j_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_z_11;
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
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_v_8;
void init_constant_terms (void)
{
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_f_9, term_w_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_9, term_a_10, term_c_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_h_10, term_j_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_o_10, term_p_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_y_10);
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
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_g_11, term_h_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_o_11, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_t_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_11, term_w_11, term_x_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_d_12, term_f_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_o_12, term_p_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_s_12, term_t_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_b_13);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_f_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_o_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_r_13, term_s_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_z_13, term_b_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_l_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_o_14, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_t_14, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_z_14);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_o_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_b_16, term_d_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_d_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_l_21);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_z_17, term_k_17);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym__2, term_v_8, term_z_24);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_24);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_h_25, term_u_17);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym__2, term_i_26, term_j_26);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_m_29, term_u_17);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__2, term_r_29, term_u_17);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym__2, term_e_28, term_u_17);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym__2, term_k_32, term_u_17);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm f_6 (ATerm k_26, ATerm l_26, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm p_6 (ATerm k_15, ATerm l_15, ATerm);
ATerm s_6 (ATerm e_60 (ATerm), ATerm i_159, ATerm s_15, ATerm);
ATerm c_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm);
ATerm t_6 (ATerm g_12, ATerm h_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm j_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm t_58 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm n_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm i_7 (ATerm u_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm v_6 (ATerm n_72 (ATerm), ATerm s_27, ATerm q_27, ATerm);
ATerm x_8 (ATerm g_8, ATerm);
ATerm y_8 (ATerm i_8, ATerm j_8, ATerm k_8, ATerm);
ATerm x_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm g_6 (ATerm y_16, ATerm z_16, ATerm);
ATerm at_last_1_0 (ATerm y_64 (ATerm), ATerm);
ATerm i_6 (ATerm g_64 (ATerm), ATerm m_17, ATerm v_190, ATerm);
ATerm at_suffix_1_0 (ATerm r_64 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm k_64 (ATerm), ATerm);
ATerm list_tokenize_1_0 (ATerm n_87 (ATerm), ATerm);
ATerm d_1 (ATerm);
ATerm h_1 (ATerm);
ATerm string_tokenize_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm remove_extension_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm v_73 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm u_73 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm w_73 (ATerm), ATerm);
ATerm k_6 (ATerm e_68 (ATerm), ATerm f_68 (ATerm), ATerm n_22, ATerm m_22, ATerm);
ATerm l_6 (ATerm b_68 (ATerm), ATerm j_22, ATerm i_22, ATerm);
ATerm s_1 (ATerm);
ATerm m_6 (ATerm g_29, ATerm h_29, ATerm i_29, ATerm);
ATerm n_6 (ATerm y_73 (ATerm), ATerm q_29, ATerm p_29, ATerm);
ATerm w_6 (ATerm n_31, ATerm o_31, ATerm);
ATerm t_22 (ATerm f_22, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm o_6 (ATerm q_15, ATerm);
ATerm q_6 (ATerm v_31, ATerm w_31, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_25 (ATerm q_23, ATerm);
ATerm r_25 (ATerm c_24, ATerm d_24, ATerm g_24, ATerm);
ATerm t_25 (ATerm v_24, ATerm w_24, ATerm x_24, ATerm);
ATerm r_6 (ATerm);
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
ATerm filter_1_0 (ATerm t_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm u_79 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm y_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm e_3 (ATerm);
ATerm p_31 (ATerm g_30, ATerm);
ATerm g_3 (ATerm);
ATerm j_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm x_6 (ATerm m_12, ATerm n_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm y_6 (ATerm o_28, ATerm p_28, ATerm);
ATerm end_scope_1_0 (ATerm k_72 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm j_72 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm o_75 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm xtc_io_1_0 (ATerm p_75 (ATerm), ATerm);
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
ATerm g_7 (ATerm j_30, ATerm k_30, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm e_7 (ATerm j_28, ATerm k_28, ATerm i_28, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_6 (ATerm e_26, ATerm f_26, ATerm);
ATerm foldr_2_0 (ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_73 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm s_5 (ATerm);
ATerm need_help_1_0 (ATerm q_77 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm c_7 (ATerm s_46, ATerm t_46, ATerm);
ATerm debug_1_0 (ATerm c_60 (ATerm), ATerm);
ATerm map_1_0 (ATerm x_63 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm d_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm d_7 (ATerm a_30, ATerm b_30, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm h_6 (ATerm);
ATerm j_6 (ATerm);
ATerm u_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm f_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_51 (ATerm), ATerm p_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm o_79 (ATerm), ATerm);
ATerm m_7 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm parse_options_1_0 (ATerm n_79 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm);
ATerm u_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
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
ATerm t_8 (ATerm);
ATerm io_pp_c_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm f_6 (ATerm k_26, ATerm l_26, ATerm t)
{
  ATerm u_4 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(k_26, l_26);
      ;
      LocalPopChoice(u_8);
    }
  else
    {
      t = u_4;
      t = SSL_subtr(k_26, l_26);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,e_0 = NULL,f_0 = NULL;
  t = term_v_8;
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
        t = term_f_9;
      }
    b_0 = t;
    t = term_f_9;
    f_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_f_9);
    t = f_6(b_0, f_0, t);
    e_0 = t;
    t = SSL_int_to_string(e_0);
    a_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_v_8);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm y_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_g_9;
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
      t = (ATerm) ATinsert(ATempty, term_h_9);
      e_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_0, (ATerm) ATinsert(ATempty, term_h_9));
      t = w_6(y_0, e_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm p_6 (ATerm k_15, ATerm l_15, ATerm t)
{
  ATerm f_1 = NULL;
  t = SSL_write_term_to_stream_baf(k_15, l_15);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_1);
  return(t);
}
ATerm s_6 (ATerm e_60 (ATerm), ATerm i_159, ATerm s_15, ATerm t)
{
  ATerm g_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_159, term_i_9);
  t = r_6(t);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_1, s_15);
  t = e_60(t);
  t = fclose_0_0(t);
  t = s_15;
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_9 = ATgetArgument(t, 0);
      if(match_cons(k_9, sym_Stream_1))
        {
          n_1 = ATgetArgument(k_9, 0);
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
  t = s_6(c_0, m_1, k_1, t);
  t = SSL_close_file(m_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(l_76, m_76, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm t_6 (ATerm g_12, ATerm h_12, ATerm t)
{
  t = SSL_execvp(g_12, h_12);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_9), s_0), term_l_9);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_2), term_o_9), j_1), term_n_9), w_2);
      l_1 = t;
      t = SSL_concat_strings(l_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm j_64 (ATerm), ATerm t)
{
  ATerm c_3 = NULL;
  ATerm o_0 (ATerm t)
  {
    t = j_64(t);
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
    ATerm q_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm t_9 = ATgetArgument(t, 0);
              if((d_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm u_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_16), term_r_15), term_i_15), term_e_15), term_v_14), term_q_14), term_m_14), term_i_14), term_c_14), term_t_13), term_p_13), term_l_13), term_g_13), term_c_13), term_y_12), term_u_12), term_q_12), term_i_12), term_y_11), term_u_11), term_q_11), term_m_11), term_e_11), term_z_10), term_q_10), term_l_10), term_f_10), term_x_9);
        t = fetch_elem_1_0(q_0, t);
        ;
        LocalPopChoice(r_9);
      }
    else
      {
        t = q_9;
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
    ATerm g_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_16 = ATgetArgument(t, 0);
            s_3 = ATgetArgument(t, 1);
            {
              ATerm m_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_16);
        {
          ATerm n_16 = t;
          int o_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_1 = NULL,x_1 = NULL,y_1 = NULL;
              t = s_3;
              {
                ATerm p_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_16;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                v_1 = t;
                t = term_r_16;
                x_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, v_1), term_s_16);
                y_1 = t;
                t = SSL_printnl(x_1, y_1);
                t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, v_1), term_s_16));
              }
              ;
              LocalPopChoice(o_16);
            }
          else
            {
              t = n_16;
              t = h_3;
            }
        }
      }
    else
      {
        t = g_16;
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
ATerm fork_and_wait_1_0 (ATerm t_58 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  e_4 = t;
  t = fork_0_0(t);
  d_4 = t;
  {
    ATerm t_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_4;
        t = t_58(t);
        ;
        LocalPopChoice(v_16);
      }
    else
      {
        t = t_16;
        t = SSL_waitpid(d_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_16 = ATgetArgument(t, 0);
            if(((ATgetType(w_16) != AT_INT) || (ATgetInt((ATermInt) w_16) != 0)))
              _fail(t);
            {
              ATerm x_16 = ATgetArgument(t, 1);
            }
            {
              ATerm b_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL;
  i_4 = t;
  t = c_76(t);
  t = xtc_find_0_0(t);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_4, i_4);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm k_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, h_4, i_4);
      t = t_6(h_4, i_4, t);
      t = term_c_17;
      k_4 = t;
      t = SSL_exit(k_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
    t = i_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm n_64 (ATerm), ATerm t)
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
        t = n_64(t);
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
ATerm i_7 (ATerm u_5, ATerm t)
{
  ATerm w_5 = NULL;
  t = SSL_explode_term(u_5);
  if(match_cons(t, sym__2))
    {
      ATerm e_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_17) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm f_17 = t;
        int g_17 = stack_ptr;
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
            LocalPopChoice(g_17);
          }
        else
          {
            t = f_17;
            t = i_7(e_6, t);
          }
      }
    }
  else
    {
      t = i_7(e_6, t);
    }
  return(t);
}
ATerm v_6 (ATerm n_72 (ATerm), ATerm s_27, ATerm q_27, ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,n_7 = NULL,s_7 = NULL,v_7 = NULL,y_7 = NULL;
  s_7 = t;
  t = n_72(t);
  j_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_7, s_27, q_27);
  t = e_7(j_7, s_27, q_27, t);
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_7 = NULL;
        t = term_k_17;
        z_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_7, term_k_17);
        t = d_7(j_7, z_7, t);
        ;
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_7 = ATgetFirst((ATermList) t);
        n_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_k_17;
    v_7 = t;
    t = (ATerm) ATinsert(CheckATermList(n_7), (ATerm) ATinsert(CheckATermList(k_7), s_27));
    y_7 = t;
    t = SSL_table_put(j_7, v_7, y_7);
    t = s_7;
  }
  return(t);
}
ATerm x_8 (ATerm g_8, ATerm t)
{
  t = g_8;
  {
    ATerm l_17 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_17 = ATgetArgument(t, 0);
            ATerm o_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_17;
      }
    t = term_q_17;
    t = debug_1_0(x_0, t);
    t = (ATerm) ATmakeAppl(sym__2, g_8, term_i_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm y_8 (ATerm i_8, ATerm j_8, ATerm k_8, ATerm t)
{
  t = SSL_open_file(i_8, j_8);
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_r_17;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
  q_8 = t;
  if(match_cons(t, sym__2))
    {
      r_8 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_8(q_8, t);
            ;
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            t = y_8(r_8, s_8, q_8, t);
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
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  t = term_u_17;
  t = new_0_0(t);
  c_9 = t;
  t = term_v_17;
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_9, term_v_17);
  t = c_7(c_9, d_9, t);
  e_9 = t;
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_h_9);
        j_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_9, (ATerm) ATinsert(ATempty, term_h_9));
        t = w_6(e_9, j_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = e_9;
      }
  }
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_z_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm p_9 = NULL,s_9 = NULL;
  t = new_file_0_0(t);
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_9, term_i_9);
  t = open_file_0_0(t);
  t = term_u_17;
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_9, term_u_17);
  t = v_6(z_0, p_9, s_9, t);
  t = p_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL;
  t_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_3 = NULL,n_3 = NULL;
      t = t_10;
      t = xtc_new_file_0_0(t);
      l_3 = t;
      t = r_0(t);
      n_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_3, (ATerm) ATinsert(ATinsert(ATempty, l_3), term_a_18));
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
          u_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_10;
      t = xtc_new_file_0_0(t);
      a_4 = t;
      t = r_0(t);
      b_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_4), term_a_18), u_10), term_b_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(a_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_4);
    }
  return(t);
}
ATerm g_6 (ATerm y_16, ATerm z_16, ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL;
  t = z_16;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_16;
    }
  else
    {
      ATerm q_4 = NULL,w_4 = NULL,b_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_12 = ATgetFirst((ATermList) t);
          c_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_16);
      q_4 = t;
      t = c_12;
      {
        ATerm i_5 (ATerm t)
        {
          ATerm c_18 = t;
          int d_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_5 = NULL;
              a_5 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_5;
              ;
              LocalPopChoice(d_18);
            }
          else
            {
              t = c_18;
              {
                ATerm b_5 = NULL;
                t = Cons_2_0(_id, i_5, t);
                b_5 = t;
                t = (ATerm) ATinsert(CheckATermList(b_5), y_16);
              }
            }
          return(t);
        }
        t = i_5(t);
        w_4 = t;
        t = (ATerm) ATinsert(CheckATermList(w_4), b_12);
        b_2 = t;
        t = SSLsetAnnotations(b_2, q_4);
      }
    }
  return(t);
}
ATerm at_last_1_0 (ATerm y_64 (ATerm), ATerm t)
{
  ATerm y_13 (ATerm t)
  {
    ATerm u_13 = NULL,v_13 = NULL,x_13 = NULL;
    u_13 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_13 = ATgetFirst((ATermList) t);
        x_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_18 = t;
      int j_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_5 = NULL,i_2 = NULL;
          t = SSLgetAnnotations(u_13);
          v_5 = t;
          t = x_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(x_13), v_13);
          i_2 = t;
          t = SSLsetAnnotations(i_2, v_5);
          t = y_64(t);
          ;
          LocalPopChoice(j_18);
        }
      else
        {
          t = i_18;
          {
            ATerm l_7 = NULL,p_7 = NULL,k_2 = NULL;
            t = SSLgetAnnotations(u_13);
            l_7 = t;
            t = x_13;
            t = y_13(t);
            p_7 = t;
            t = (ATerm) ATinsert(CheckATermList(p_7), v_13);
            k_2 = t;
            t = SSLsetAnnotations(k_2, l_7);
          }
        }
    }
    return(t);
  }
  t = y_13(t);
  return(t);
}
ATerm i_6 (ATerm g_64 (ATerm), ATerm m_17, ATerm v_190, ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    ATerm g_14 = NULL;
    g_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_17, g_14);
    t = g_64(t);
    t = g_14;
    return(t);
  }
  t = v_190;
  t = SRTS_one(a_1, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm r_64 (ATerm), ATerm t)
{
  ATerm d_15 (ATerm t)
  {
    ATerm n_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_64(t);
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = n_18;
        {
          ATerm y_14 = NULL,b_15 = NULL,c_15 = NULL,b_8 = NULL,e_8 = NULL,n_2 = NULL;
          y_14 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_15 = ATgetFirst((ATermList) t);
              c_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_14);
          b_8 = t;
          t = c_15;
          t = d_15(t);
          e_8 = t;
          t = (ATerm) ATinsert(CheckATermList(e_8), b_15);
          n_2 = t;
          t = SSLsetAnnotations(n_2, b_8);
        }
      }
    return(t);
  }
  t = d_15(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm k_64 (ATerm), ATerm t)
{
  ATerm j_15 = NULL,t_15 = NULL;
  ATerm b_1 (ATerm t)
  {
    ATerm u_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,c_16 = NULL,e_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,s_2 = NULL,p_2 = NULL;
    j_16 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_16 = ATgetFirst((ATermList) t);
        e_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_16);
    y_15 = t;
    t = c_16;
    t = k_64(t);
    h_16 = t;
    t = (ATerm) ATinsert(CheckATermList(e_16), h_16);
    p_2 = t;
    t = SSLsetAnnotations(p_2, y_15);
    i_16 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_15 = ATgetFirst((ATermList) t);
        x_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_16);
    u_15 = t;
    t = x_15;
    if(((j_15 != NULL) && (j_15 != t)))
      _fail(t);
    else
      j_15 = t;
    t = (ATerm) ATinsert(CheckATermList(x_15), w_15);
    s_2 = t;
    t = SSLsetAnnotations(s_2, u_15);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(b_1, t);
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_15, not_null(j_15));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm n_87 (ATerm), ATerm t)
{
  ATerm u_16 = NULL,a_17 = NULL;
  ATerm q_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(n_87, t);
      ;
      LocalPopChoice(s_18);
    }
  else
    {
      t = q_18;
      {
        ATerm q_16 = NULL;
        q_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_16, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      u_16 = ATgetArgument(t, 0);
      a_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_16;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_17;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm t_18 = ATgetFirst((ATermList) t);
              ATerm w_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = a_17;
          t = list_tokenize_1_0(n_87, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm x_18 = ATgetFirst((ATermList) t);
          ATerm b_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_17;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, u_16);
        }
      else
        {
          ATerm e_18 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm c_19 = ATgetFirst((ATermList) t);
              ATerm d_19 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = a_17;
          t = list_tokenize_1_0(n_87, t);
          e_18 = t;
          t = (ATerm) ATinsert(CheckATermList(e_18), u_16);
        }
    }
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm v_18 = NULL;
  if(match_cons(t, sym__2))
    {
      v_18 = ATgetArgument(t, 0);
      if((v_18 != ATgetArgument(t, 1)))
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
  ATerm y_18 = NULL;
  y_18 = t;
  t = SSL_implode_string(y_18);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,l_18 = NULL,m_18 = NULL,o_18 = NULL,r_18 = NULL,a_3 = NULL;
  r_18 = t;
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_18);
  h_18 = t;
  t = SSL_explode_string(m_18);
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_18, o_18);
  a_3 = t;
  t = SSLsetAnnotations(a_3, h_18);
  if(match_cons(t, sym__2))
    {
      f_18 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_18;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm u_18 = NULL;
      u_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_18, f_18);
      t = i_6(d_1, u_18, f_18, t);
      return(t);
    }
    t = list_tokenize_1_0(c_1, t);
    t = map_1_0(h_1, t);
  }
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm j_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_19 = ATgetFirst((ATermList) t);
      j_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_19;
  return(t);
}
ATerm remove_extension_0_0 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,f_19 = NULL,g_19 = NULL;
  a_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_h_19), a_19);
  t = string_tokenize_0_0(t);
  t = at_last_1_0(i_1, t);
  z_18 = t;
  t = term_i_19;
  g_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_19, z_18);
  t = g_6(g_19, z_18, t);
  f_19 = t;
  t = SSL_concat_strings(f_19);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm k_19 = NULL;
  ATerm p_1 (ATerm t)
  {
    ATerm l_19 = NULL,r_19 = NULL;
    l_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_19), l_19);
    t = d_7(not_null(k_19), l_19, t);
    r_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_19, r_19);
    return(t);
  }
  if(((k_19 != NULL) && (k_19 != t)))
    _fail(t);
  else
    k_19 = t;
  t = SSL_table_keys(k_19);
  t = map_1_0(p_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_73 (ATerm), ATerm t)
{
  ATerm t_19 = NULL;
  t_19 = t;
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_19 = NULL;
        t = term_v_8;
        t = get_config_0_0(t);
        v_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_19, term_x_14);
        t = geq_0_0(t);
        t = t_19;
        t = v_73(t);
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        t = t_19;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_73 (ATerm), ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_20 = NULL;
        t = term_v_8;
        t = get_config_0_0(t);
        d_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_20, term_o_12);
        t = geq_0_0(t);
        t = a_20;
        t = u_73(t);
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        t = a_20;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_73 (ATerm), ATerm t)
{
  ATerm g_20 = NULL;
  g_20 = t;
  {
    ATerm q_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_20 = NULL;
        t = term_v_8;
        t = get_config_0_0(t);
        i_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_20, term_o_10);
        t = geq_0_0(t);
        t = g_20;
        t = w_73(t);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = q_19;
        t = g_20;
      }
  }
  return(t);
}
ATerm k_6 (ATerm e_68 (ATerm), ATerm f_68 (ATerm), ATerm n_22, ATerm m_22, ATerm t)
{
  t = f_68(t);
  {
    ATerm q_1 (ATerm t)
    {
      ATerm k_20 = NULL;
      k_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_22, k_20);
      t = e_68(t);
      return(t);
    }
    t = fetch_1_0(q_1, t);
    t = m_22;
  }
  return(t);
}
ATerm l_6 (ATerm b_68 (ATerm), ATerm j_22, ATerm i_22, ATerm t)
{
  ATerm i_21 (ATerm t)
  {
    ATerm z_20 = NULL,a_21 = NULL,d_21 = NULL;
    z_20 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_21 = ATgetFirst((ATermList) t);
            d_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_19 = t;
          int w_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_20;
              {
                ATerm r_1 (ATerm t)
                {
                  t = i_22;
                  return(t);
                }
                t = k_6(b_68, r_1, a_21, d_21, t);
                t = i_21(t);
              }
              ;
              LocalPopChoice(w_19);
            }
          else
            {
              t = u_19;
              {
                ATerm w_8 = NULL,b_9 = NULL,i_3 = NULL;
                t = SSLgetAnnotations(z_20);
                w_8 = t;
                t = d_21;
                t = i_21(t);
                b_9 = t;
                t = (ATerm) ATinsert(CheckATermList(b_9), a_21);
                i_3 = t;
                t = SSLsetAnnotations(i_3, w_8);
              }
            }
        }
      }
    return(t);
  }
  t = j_22;
  t = i_21(t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm u_21 = NULL;
  if(match_cons(t, sym__2))
    {
      u_21 = ATgetArgument(t, 0);
      if((u_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm g_29, ATerm h_29, ATerm i_29, ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_29, h_29);
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_19 = ATgetArgument(t, 0);
            ATerm b_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_29, h_29);
        t = d_7(g_29, h_29, t);
        ;
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = (ATerm) ATempty;
      }
    q_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_21, i_29);
    t = l_6(s_1, q_21, i_29, t);
    p_21 = t;
    t = SSL_table_put(g_29, h_29, p_21);
    t = o_21;
  }
  return(t);
}
ATerm n_6 (ATerm y_73 (ATerm), ATerm q_29, ATerm p_29, ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm v_21 = NULL,w_21 = NULL;
    if(match_cons(t, sym__2))
      {
        v_21 = ATgetArgument(t, 0);
        w_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, q_29, v_21, w_21);
    t = y_73(t);
    return(t);
  }
  t = p_29;
  t = map_1_0(u_1, t);
  return(t);
}
ATerm w_6 (ATerm n_31, ATerm o_31, ATerm t)
{
  t = SSL_access(n_31, o_31);
  return(t);
}
ATerm t_22 (ATerm f_22, ATerm t)
{
  t = SSL_fclose(f_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_22 = NULL,p_22 = NULL;
  p_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_22 = ATgetArgument(t, 0);
      {
        ATerm c_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_22);
            ;
            LocalPopChoice(e_20);
          }
        else
          {
            t = c_20;
            t = t_22(p_22, t);
          }
      }
    }
  else
    {
      t = t_22(p_22, t);
    }
  return(t);
}
ATerm o_6 (ATerm q_15, ATerm t)
{
  t = SSL_read_term_from_stream(q_15);
  return(t);
}
ATerm q_6 (ATerm v_31, ATerm w_31, ATerm t)
{
  ATerm w_22 = NULL;
  t = SSL_fopen(v_31, w_31);
  w_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_22 = NULL;
  t = SSL_stdin_stream();
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_23 = NULL;
  t = SSL_stdout_stream();
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_23 = NULL;
  t = SSL_stderr_stream();
  d_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_23);
  return(t);
}
ATerm q_25 (ATerm q_23, ATerm t)
{
  ATerm w_23 = NULL;
  t = SSL_explode_term(q_23);
  if(match_cons(t, sym__2))
    {
      ATerm f_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_20 = ATgetArgument(t, 1);
        if(((ATgetType(h_20) == AT_LIST) && !(ATisEmpty(h_20))))
          {
            w_23 = ATgetFirst((ATermList) h_20);
            {
              ATerm j_20 = (ATerm) ATgetNext((ATermList) h_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm r_25 (ATerm c_24, ATerm d_24, ATerm g_24, ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,k_24 = NULL,p_24 = NULL,k_3 = NULL;
  t = SSLgetAnnotations(g_24);
  k_24 = t;
  t = c_24;
  if(match_cons(t, sym_Path_1))
    {
      p_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_24, d_24);
  k_3 = t;
  t = SSLsetAnnotations(k_3, k_24);
  if(match_cons(t, sym__2))
    {
      h_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(h_24, i_24, t);
  return(t);
}
ATerm t_25 (ATerm v_24, ATerm w_24, ATerm x_24, ATerm t)
{
  ATerm y_24 = NULL,c_25 = NULL,d_25 = NULL,g_25 = NULL,m_3 = NULL;
  t = SSLgetAnnotations(x_24);
  d_25 = t;
  t = SSL_is_string(v_24);
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_25, w_24);
  m_3 = t;
  t = SSLsetAnnotations(m_3, d_25);
  if(match_cons(t, sym__2))
    {
      y_24 = ATgetArgument(t, 0);
      c_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(y_24, c_25, t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,p_25 = NULL;
  l_25 = t;
  if(match_cons(t, sym__2))
    {
      m_25 = ATgetArgument(t, 0);
      p_25 = ATgetArgument(t, 1);
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_25(l_25, t);
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            {
              ATerm n_20 = t;
              int o_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_25(m_25, p_25, l_25, t);
                  ;
                  LocalPopChoice(o_20);
                }
              else
                {
                  t = n_20;
                  t = t_25(m_25, p_25, l_25, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_25(l_25, t);
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_p_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_25 = NULL;
      y_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_25, term_s_20);
      t = r_6(t);
      ;
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      t = debug_1_0(w_1, t);
      _fail(t);
    }
  w_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(x_25, t);
  v_25 = t;
  t = w_25;
  t = fclose_0_0(t);
  t = v_25;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_t_20;
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_26 = NULL,b_26 = NULL;
      a_26 = t;
      t = (ATerm) ATinsert(ATempty, term_x_20);
      b_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_26, (ATerm) ATinsert(ATempty, term_x_20));
      t = w_6(a_26, b_26, t);
      LocalPopChoice(w_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = v_20;
      {
        ATerm y_20 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_21 = t;
            if((PushChoice() == 0))
              {
                ATerm c_26 = NULL,d_26 = NULL;
                c_26 = t;
                t = (ATerm) ATinsert(ATempty, term_h_9);
                d_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_26, (ATerm) ATinsert(ATempty, term_h_9));
                t = w_6(c_26, d_26, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = c_21;
              }
            t = debug_1_0(z_1, t);
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = y_20;
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
  t = term_e_21;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  w_26 = t;
  t = term_r_16;
  x_26 = t;
  t = (ATerm) ATinsert(ATempty, term_g_21);
  y_26 = t;
  t = SSL_printnl(x_26, y_26);
  t = w_26;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,c_27 = NULL;
  if(match_cons(t, sym__3))
    {
      z_26 = ATgetArgument(t, 0);
      a_27 = ATgetArgument(t, 1);
      c_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_6(z_26, a_27, c_27, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
  d_27 = t;
  t = term_r_16;
  e_27 = t;
  t = (ATerm) ATinsert(ATempty, term_h_21);
  f_27 = t;
  t = SSL_printnl(e_27, f_27);
  t = d_27;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
  g_27 = t;
  t = term_r_16;
  h_27 = t;
  t = (ATerm) ATinsert(ATempty, term_g_21);
  i_27 = t;
  t = SSL_printnl(h_27, i_27);
  t = g_27;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL;
  g_26 = t;
  t = if_verbose5_1_0(c_2, t);
  {
    ATerm j_21 = t;
    if((PushChoice() == 0))
      {
        ATerm u_26 = NULL,v_26 = NULL;
        t = term_k_21;
        u_26 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, g_26);
        v_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_21, (ATerm) ATmakeAppl(sym_Imported_1, g_26));
        t = d_7(u_26, v_26, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_21;
      }
    m_26 = t;
    t = term_k_21;
    r_26 = t;
    t = term_l_21;
    s_26 = t;
    t = (ATerm) ATinsert(ATempty, g_26);
    t_26 = t;
    t = SSL_table_put(r_26, s_26, t_26);
    t = m_26;
    t = if_verbose4_1_0(e_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(h_2, t);
    h_26 = t;
    t = term_k_21;
    q_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_k_21, h_26);
    t = n_6(j_2, q_26, h_26, t);
    t = if_verbose6_1_0(l_2, t);
    t = term_k_21;
    n_26 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, g_26);
    o_26 = t;
    t = (ATerm) ATempty;
    p_26 = t;
    t = SSL_table_put(n_26, o_26, p_26);
    t = (ATerm) ATmakeAppl(sym__3, term_k_21, (ATerm)ATmakeAppl(sym_Imported_1, g_26), (ATerm) ATempty);
    t = if_verbose4_1_0(m_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm t_71 (ATerm), ATerm t)
{
  ATerm t_28 = NULL,v_28 = NULL,w_28 = NULL;
  t_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_28;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_28 = ATgetFirst((ATermList) t);
          w_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_9 = NULL,d_10 = NULL,e_10 = NULL,x_4 = NULL;
            t = SSLgetAnnotations(t_28);
            y_9 = t;
            t = v_28;
            t = t_71(t);
            d_10 = t;
            t = w_28;
            t = filter_1_0(t_71, t);
            e_10 = t;
            t = (ATerm) ATinsert(CheckATermList(e_10), d_10);
            x_4 = t;
            t = SSLsetAnnotations(x_4, y_9);
            ;
            LocalPopChoice(n_21);
          }
        else
          {
            t = m_21;
            t = w_28;
            t = filter_1_0(t_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  ATerm t_29 (ATerm t)
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_79(t);
        t = t_29(t);
        ;
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
      }
    return(t);
  }
  t = t_29(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_21);
    }
  else
    {
      t = t_21;
      {
        ATerm z_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_29 = NULL;
            t = term_b_22;
            u_29 = t;
            t = SSL_getenv(u_29);
            ;
            LocalPopChoice(a_22);
          }
        else
          {
            t = z_21;
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
  t = term_c_22;
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm z_29 = NULL,c_30 = NULL;
  t = term_k_21;
  z_29 = t;
  t = term_d_22;
  c_30 = t;
  t = term_e_22;
  t = d_7(z_29, c_30, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm g_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_22;
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
  t = term_h_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_29 = NULL;
  t = if_verbose5_1_0(o_2, t);
  v_29 = t;
  {
    ATerm k_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_29 = NULL,x_29 = NULL;
        t = term_k_21;
        w_29 = t;
        t = term_l_21;
        x_29 = t;
        t = term_q_22;
        t = d_7(w_29, x_29, t);
        ;
        LocalPopChoice(o_22);
      }
    else
      {
        t = k_22;
        {
          ATerm y_29 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          y_29 = t;
          t = repeat_1_0(t_2, t);
          t = y_29;
        }
      }
    t = v_29;
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
  t = term_r_22;
  return(t);
}
ATerm p_31 (ATerm g_30, ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL;
  t = term_k_21;
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, g_30);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_21, (ATerm) ATmakeAppl(sym_Tool_1, g_30));
  t = d_7(m_30, n_30, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_22 = ATgetFirst((ATermList) t);
      if(match_cons(s_22, sym__2))
        {
          ATerm v_22 = ATgetArgument(s_22, 0);
          l_30 = ATgetArgument(s_22, 1);
        }
      else
        _fail(t);
      {
        ATerm u_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_30;
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = debug_1_0(j_3, t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_r_22;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_k_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(p_3, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_x_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm y_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_30 = NULL,q_30 = NULL,y_30 = NULL;
      t = if_verbose5_1_0(b_3, t);
      t = xtc_load_0_0(t);
      y_30 = t;
      if(match_cons(t, sym__2))
        {
          p_30 = ATgetArgument(t, 0);
          q_30 = ATgetArgument(t, 1);
          {
            ATerm c_23 = t;
            int e_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
                t = term_k_21;
                f_31 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, p_30);
                g_31 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_k_21, (ATerm) ATmakeAppl(sym_Tool_1, p_30));
                t = d_7(f_31, g_31, t);
                {
                  ATerm f_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((q_30 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((e_31 != NULL) && (e_31 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_31 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(f_3, t);
                  t = not_null(e_31);
                }
                ;
                LocalPopChoice(e_23);
              }
            else
              {
                t = c_23;
                t = p_31(y_30, t);
              }
          }
        }
      else
        {
          t = p_31(y_30, t);
        }
      t = if_verbose5_1_0(g_3, t);
      ;
      LocalPopChoice(a_23);
    }
  else
    {
      t = y_22;
      {
        ATerm m_31 = NULL,r_10 = NULL,s_10 = NULL;
        m_31 = t;
        t = term_r_16;
        r_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_23), m_31), term_f_23);
        s_10 = t;
        t = SSL_printnl(r_10, s_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_23), m_31), term_f_23);
        t = if_verbose5_1_0(o_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm x_6 (ATerm m_12, ATerm n_12, ATerm t)
{
  t = SSL_copy(m_12, n_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_33 = NULL,h_33 = NULL;
  d_33 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_11 = NULL;
        t = d_33;
        t = n_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, h_33, b_11);
        t = x_6(h_33, b_11, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_33);
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
              ATerm j_11 = NULL;
              t = d_33;
              t = n_0(t);
              j_11 = t;
              {
                ATerm l_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm l_11 = NULL;
                    l_11 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = l_11;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = l_11;
                          }
                        else
                          {
                            t = l_11;
                            if((h_33 != t))
                              {
                                _fail(t);
                              }
                            t = l_11;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_23;
                  }
                t = (ATerm) ATmakeAppl(sym__2, h_33, j_11);
                t = x_6(h_33, j_11, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, h_33);
              }
              ;
              LocalPopChoice(k_23);
            }
          else
            {
              t = j_23;
              t = d_33;
              t = n_0(t);
              if((h_33 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_33);
            }
        }
      }
  }
  return(t);
}
ATerm y_6 (ATerm o_28, ATerm p_28, ATerm t)
{
  ATerm q_33 = NULL,t_33 = NULL;
  t_33 = t;
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_28, p_28);
        t = d_7(o_28, p_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_23 = ATgetFirst((ATermList) t);
            q_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_23);
        t = SSL_table_put(o_28, p_28, q_33);
        t = (ATerm) ATmakeAppl(sym__3, o_28, p_28, q_33);
      }
    else
      {
        t = m_23;
        t = SSL_table_remove(o_28, p_28);
        t = (ATerm) ATmakeAppl(sym__2, o_28, p_28);
      }
    t = t_33;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm k_72 (ATerm), ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,b_34 = NULL,f_34 = NULL,j_34 = NULL;
  f_34 = t;
  t = k_72(t);
  b_34 = t;
  {
    ATerm p_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_34 = NULL;
        t = term_k_17;
        k_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_34, term_k_17);
        t = d_7(b_34, k_34, t);
        ;
        LocalPopChoice(r_23);
      }
    else
      {
        t = p_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_33 = ATgetFirst((ATermList) t);
        u_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_k_17;
    j_34 = t;
    t = SSL_table_put(b_34, j_34, u_33);
    t = v_33;
    {
      ATerm q_3 (ATerm t)
      {
        ATerm m_34 = NULL;
        m_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_34, m_34);
        t = y_6(b_34, m_34, t);
        return(t);
      }
      t = map_1_0(q_3, t);
      t = f_34;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_73(t);
      t = g_73(t);
      ;
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      t = g_73(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_72 (ATerm), ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL;
  p_34 = t;
  t = j_72(t);
  o_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_34, term_k_17);
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_34 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_23 = ATgetArgument(t, 0);
            ATerm y_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_17;
        w_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_34, term_k_17);
        t = d_7(o_34, w_34, t);
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = (ATerm) ATempty;
      }
    q_34 = t;
    t = term_k_17;
    r_34 = t;
    t = (ATerm) ATinsert(CheckATermList(q_34), (ATerm) ATempty);
    s_34 = t;
    t = SSL_table_put(o_34, r_34, s_34);
    t = p_34;
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_z_17;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm f_35 = NULL;
  f_35 = t;
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(f_35);
        ;
        LocalPopChoice(a_24);
      }
    else
      {
        t = z_23;
        t = f_35;
      }
  }
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_z_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm o_75 (ATerm), ATerm t)
{
  ATerm z_34 = NULL;
  ATerm t_3 (ATerm t)
  {
    ATerm a_35 = NULL;
    a_35 = t;
    {
      ATerm b_24 = t;
      int e_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_35 = NULL,c_35 = NULL;
          t = term_z_17;
          b_35 = t;
          t = term_k_17;
          c_35 = t;
          t = term_f_24;
          t = d_7(b_35, c_35, t);
          ;
          LocalPopChoice(e_24);
        }
      else
        {
          t = b_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((z_34 != NULL) && (z_34 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            z_34 = ATgetFirst((ATermList) t);
          {
            ATerm j_24 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = z_34;
      t = map_1_0(u_3, t);
      t = a_35;
      t = end_scope_1_0(v_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(r_3, t);
  t = restore_always_2_0(o_75, t_3, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      t = term_n_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm p_75 (ATerm), ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm o_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_35 = NULL;
        t = term_b_18;
        t = get_config_0_0(t);
        i_35 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_35);
        ;
        LocalPopChoice(q_24);
      }
    else
      {
        t = o_24;
        t = term_g_9;
      }
    t = p_75(t);
    t = copy_to_1_0(x_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(w_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,p_35 = NULL;
  j_35 = t;
  t = term_u_17;
  t = whoami_0_0(t);
  k_35 = t;
  t = term_r_16;
  m_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_24), k_35), term_r_24);
  p_35 = t;
  t = SSL_printnl(m_35, p_35);
  t = term_f_9;
  l_35 = t;
  t = SSL_exit(l_35);
  t = j_35;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm s_35 = NULL;
  s_35 = t;
  if(match_string(t, "-k"))
    {
      t = s_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_35;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
  u_35 = t;
  t = SSL_string_to_int(u_35);
  v_35 = t;
  t = term_t_24;
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_24, v_35);
  t = g_7(w_35, v_35, t);
  t = u_35;
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_3, z_3, c_4, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm y_35 = NULL;
  y_35 = t;
  if(match_string(t, "-S"))
    {
      t = y_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_35;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL;
  t = term_v_8;
  z_35 = t;
  t = term_z_24;
  a_36 = t;
  t = term_a_25;
  t = g_7(z_35, a_36, t);
  t = term_b_25;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_e_25;
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
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
  b_36 = t;
  t = SSL_string_to_int(b_36);
  c_36 = t;
  t = term_v_8;
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_8, c_36);
  t = g_7(d_36, c_36, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_36);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_f_25;
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
  ATerm e_36 = NULL,f_36 = NULL;
  t = term_h_25;
  e_36 = t;
  t = term_u_17;
  f_36 = t;
  t = term_i_25;
  t = g_7(e_36, f_36, t);
  t = term_j_25;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_4, g_4, j_4, t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm s_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_4, p_4, r_4, t);
            ;
            LocalPopChoice(u_25);
          }
        else
          {
            t = s_25;
            t = Option_3_0(s_4, t_4, v_4, t);
          }
      }
    }
  return(t);
}
ATerm g_7 (ATerm j_30, ATerm k_30, ATerm t)
{
  ATerm g_36 = NULL;
  t = term_z_25;
  g_36 = t;
  t = SSL_table_put(g_36, j_30, k_30);
  t = (ATerm) ATmakeAppl(sym__3, term_z_25, j_30, k_30);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
      t = term_u_17;
      t = h_0(t);
      l_36 = t;
      t = term_i_26;
      m_36 = t;
      t = term_j_26;
      n_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_26, term_j_26, l_36);
      t = e_7(m_36, n_36, l_36, t);
      _fail(t);
    }
  else
    {
      ATerm q_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_36 = ATgetFirst((ATermList) t);
          k_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_36;
      t = d_0(t);
      t = term_u_17;
      t = g_0(t);
      q_36 = t;
      t = (ATerm) ATinsert(CheckATermList(k_36), q_36);
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm s_36 = NULL;
  s_36 = t;
  if(match_string(t, "-o"))
    {
      t = s_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_36;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL;
  t_36 = t;
  t = term_a_18;
  u_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_18, t_36);
  t = g_7(u_36, t_36, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_36);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_b_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_4, c_5, e_5, t);
  return(t);
}
ATerm e_7 (ATerm j_28, ATerm k_28, ATerm i_28, ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
  w_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_28, k_28);
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
        t = (ATerm) ATmakeAppl(sym__2, j_28, k_28);
        t = d_7(j_28, k_28, t);
        ;
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
        t = (ATerm) ATempty;
      }
    x_36 = t;
    t = (ATerm) ATinsert(CheckATermList(x_36), i_28);
    y_36 = t;
    t = SSL_table_put(j_28, k_28, y_36);
    t = w_36;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
      t = term_u_17;
      t = m_0(t);
      j_37 = t;
      t = term_i_26;
      k_37 = t;
      t = term_j_26;
      l_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_26, term_j_26, j_37);
      t = e_7(k_37, l_37, j_37, t);
      _fail(t);
    }
  else
    {
      ATerm p_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_37 = ATgetFirst((ATermList) t);
          g_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_37 = ATgetFirst((ATermList) t);
          i_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_37;
      t = k_0(t);
      t = h_37;
      t = l_0(t);
      p_37 = t;
      t = (ATerm) ATinsert(CheckATermList(i_37), p_37);
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm r_37 = NULL;
  r_37 = t;
  if(match_string(t, "-i"))
    {
      t = r_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_37;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL;
  s_37 = t;
  t = term_b_18;
  t_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_18, s_37);
  t = g_7(t_37, s_37, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_37);
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_5, n_5, o_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_17;
  t = whoami_0_0(t);
  u_37 = t;
  t = term_r_16;
  w_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_27), u_37);
  x_37 = t;
  t = SSL_printnl(w_37, x_37);
  t = term_f_9;
  v_37 = t;
  t = SSL_exit(v_37);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_27;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_6 (ATerm e_26, ATerm f_26, ATerm t)
{
  ATerm r_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_26, f_26);
      ;
      LocalPopChoice(t_27);
    }
  else
    {
      t = r_27;
      t = SSL_addr(e_26, f_26);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_37;
      t = p_70(t);
    }
  else
    {
      ATerm e_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_38 = ATgetFirst((ATermList) t);
          b_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_38;
      t = foldr_2_0(p_70, q_70, t);
      e_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_38, e_38);
      t = q_70(t);
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
  t = term_z_24;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL;
  if(match_cons(t, sym__2))
    {
      k_12 = ATgetArgument(t, 0);
      l_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(k_12, l_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_38 = NULL,a_12 = NULL,e_12 = NULL;
  t = times_0_0(t);
  e_12 = t;
  t = SSL_explode_term(e_12);
  if(match_cons(t, sym__2))
    {
      ATerm u_27 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12;
  t = foldr_2_0(p_5, q_5, t);
  h_38 = t;
  t = SSL_TicksToSeconds(h_38);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
  s_38 = t;
  if(match_cons(t, sym__2))
    {
      t_38 = ATgetArgument(t, 0);
      u_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_38;
        if((t_38 != t))
          {
            _fail(t);
          }
        t = s_38;
        ;
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        t = (ATerm) ATmakeAppl(sym__2, t_38, u_38);
        {
          ATerm x_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_38, u_38);
              ;
              LocalPopChoice(y_27);
            }
          else
            {
              t = x_27;
              t = SSL_gtr(t_38, u_38);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_38, u_38);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_73 (ATerm), ATerm t)
{
  ATerm y_38 = NULL;
  y_38 = t;
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_39 = NULL;
        t = term_v_8;
        t = get_config_0_0(t);
        a_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_39, term_f_9);
        t = geq_0_0(t);
        t = y_38;
        t = r_73(t);
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = y_38;
      }
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,f_39 = NULL,g_39 = NULL;
  t = run_time_0_0(t);
  c_39 = t;
  t = term_u_17;
  t = whoami_0_0(t);
  d_39 = t;
  t = term_r_16;
  f_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_28), c_39), term_n_9), d_39);
  g_39 = t;
  t = SSL_printnl(f_39, g_39);
  t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_28), c_39), term_n_9), d_39));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_24;
  h_39 = t;
  t = SSL_exit(h_39);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL;
  q_39 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_39;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_39 = ATgetArgument(t, 0);
          {
            ATerm h_13 = NULL,z_4 = NULL;
            t = SSLgetAnnotations(q_39);
            h_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_39);
            z_4 = t;
            t = SSLsetAnnotations(z_4, h_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_39;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
      t = fetch_1_0(s_5, t);
    }
  t = q_77(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_39 = ATgetFirst((ATermList) t);
      u_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_39 = NULL,z_39 = NULL;
        ATerm t_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_39)), not_null(z_39));
          return(t);
        }
        t = u_39;
        t = j_0(t);
        if(((y_39 != NULL) && (y_39 != t)))
          _fail(t);
        else
          y_39 = t;
        t = t_39;
        t = i_0(t);
        if(((z_39 != NULL) && (z_39 != t)))
          _fail(t);
        else
          z_39 = t;
        t = u_39;
        t = reverse_acc_2_0(i_0, t_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_17;
      t = j_0(t);
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,d_5 = NULL;
  f_40 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_40);
  d_40 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_40);
  d_5 = t;
  t = SSLsetAnnotations(d_5, d_40);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm h_40 = NULL;
  h_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_40), term_f_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL;
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      t = fetch_1_0(x_5, t);
    }
  t = term_l_28;
  t = echo_0_0(t);
  t = term_i_26;
  b_40 = t;
  t = term_j_26;
  c_40 = t;
  t = term_m_28;
  t = d_7(b_40, c_40, t);
  t = reverse_acc_2_0(_id, y_5, t);
  t = map_1_0(z_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm h_64 (ATerm), ATerm t)
{
  ATerm e_41 (ATerm t)
  {
    ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
    b_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_41 = ATgetFirst((ATermList) t);
        d_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_28 = t;
      int q_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_14 = NULL,d_14 = NULL,g_5 = NULL;
          t = SSLgetAnnotations(b_41);
          a_14 = t;
          t = c_41;
          t = h_64(t);
          d_14 = t;
          t = (ATerm) ATinsert(CheckATermList(d_41), d_14);
          g_5 = t;
          t = SSLsetAnnotations(g_5, a_14);
          ;
          LocalPopChoice(q_28);
        }
      else
        {
          t = n_28;
          {
            ATerm s_14 = NULL,a_15 = NULL,h_5 = NULL;
            t = SSLgetAnnotations(b_41);
            s_14 = t;
            t = d_41;
            t = e_41(t);
            a_15 = t;
            t = (ATerm) ATinsert(CheckATermList(a_15), c_41);
            h_5 = t;
            t = SSLsetAnnotations(h_5, s_14);
          }
        }
    }
    return(t);
  }
  t = e_41(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL;
  i_41 = t;
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_41;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_28 = ATgetFirst((ATermList) t);
                ATerm x_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_41;
          }
        ;
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = (ATerm) ATinsert(ATempty, i_41);
      }
    j_41 = t;
    t = term_n_24;
    k_41 = t;
    t = SSL_printnl(k_41, j_41);
    t = i_41;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_27;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm c_7 (ATerm s_46, ATerm t_46, ATerm t)
{
  t = SSL_strcat(s_46, t_46);
  return(t);
}
ATerm debug_1_0 (ATerm c_60 (ATerm), ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
  o_41 = t;
  t = c_60(t);
  p_41 = t;
  t = term_r_16;
  q_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_41), p_41);
  r_41 = t;
  t = SSL_printnl(q_41, r_41);
  t = o_41;
  return(t);
}
ATerm map_1_0 (ATerm x_63 (ATerm), ATerm t)
{
  ATerm g_42 (ATerm t)
  {
    ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
    d_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_42;
      }
    else
      {
        ATerm p_15 = NULL,z_15 = NULL,a_16 = NULL,b_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_42 = ATgetFirst((ATermList) t);
            f_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_42);
        p_15 = t;
        t = e_42;
        t = x_63(t);
        z_15 = t;
        t = f_42;
        t = g_42(t);
        a_16 = t;
        t = (ATerm) ATinsert(CheckATermList(a_16), z_15);
        b_10 = t;
        t = SSLsetAnnotations(b_10, p_15);
      }
    return(t);
  }
  t = g_42(t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_a_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_42 = NULL;
      o_42 = t;
      t = SSL_is_string(o_42);
      ;
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_6, t);
            ;
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
            {
              ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
              u_42 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_42 = ATgetArgument(t, 0);
                  t = v_42;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_42 = ATgetArgument(t, 0);
                      t = v_42;
                      {
                        ATerm f_29 = t;
                        int j_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_29);
                          }
                        else
                          {
                            t = f_29;
                            t = debug_1_0(d_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_43 = NULL,b_43 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_42 = ATgetArgument(t, 0);
                          w_42 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_42;
                      t = eval_config_0_0(t);
                      a_43 = t;
                      t = w_42;
                      t = eval_config_0_0(t);
                      b_43 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_43, b_43);
                      t = c_7(a_43, b_43, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm d_7 (ATerm a_30, ATerm b_30, ATerm t)
{
  t = SSL_table_get(a_30, b_30);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL;
  f_43 = t;
  t = term_z_25;
  g_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_25, f_43);
  t = d_7(g_43, f_43, t);
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_43 = NULL,i_43 = NULL;
        t = eval_config_0_0(t);
        h_43 = t;
        t = term_z_25;
        i_43 = t;
        t = SSL_table_put(i_43, f_43, h_43);
        t = h_43;
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
ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL;
  t = term_m_29;
  l_43 = t;
  t = term_u_17;
  m_43 = t;
  t = term_n_29;
  t = g_7(l_43, m_43, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_o_29;
  return(t);
}
ATerm a_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL;
  t = term_m_29;
  p_43 = t;
  t = term_u_17;
  q_43 = t;
  t = term_n_29;
  t = g_7(p_43, q_43, t);
  t = term_r_29;
  n_43 = t;
  t = term_u_17;
  o_43 = t;
  t = term_s_29;
  t = g_7(n_43, o_43, t);
  t = term_d_30;
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_e_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_6, j_6, u_6, t);
      ;
      LocalPopChoice(h_30);
    }
  else
    {
      t = f_30;
      t = Option_3_0(a_7, b_7, f_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_51 (ATerm), ATerm p_51 (ATerm), ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,i_10 = NULL;
  w_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_43 = ATgetFirst((ATermList) t);
      t_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_43);
  r_43 = t;
  t = s_43;
  t = o_51(t);
  u_43 = t;
  t = t_43;
  t = p_51(t);
  v_43 = t;
  t = (ATerm) ATinsert(CheckATermList(v_43), u_43);
  i_10 = t;
  t = SSLsetAnnotations(i_10, r_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_79 (ATerm), ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,g_44 = NULL,h_44 = NULL,k_10 = NULL;
  b_44 = t;
  {
    ATerm i_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_30;
        t = o_79(t);
        ;
        LocalPopChoice(o_30);
      }
    else
      {
        t = i_30;
      }
    t = b_44;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_44 = ATgetFirst((ATermList) t);
        e_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(b_44);
    c_44 = t;
    t = term_p_27;
    h_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_27, d_44);
    t = g_7(h_44, d_44, t);
    t = e_44;
    {
      ATerm r_44 (ATerm t)
      {
        ATerm s_30 = t;
        int t_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_30 = t;
            int v_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_44 = NULL;
                k_44 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_44;
                ;
                LocalPopChoice(v_30);
              }
            else
              {
                t = u_30;
                t = o_79(t);
                t = Cons_2_0(_id, r_44, t);
              }
            ;
            LocalPopChoice(t_30);
          }
        else
          {
            t = s_30;
            {
              ATerm n_44 = NULL,o_44 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_44 = ATgetFirst((ATermList) t);
                  o_44 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_44), (ATerm) ATmakeAppl(sym_Undefined_1, n_44));
            }
          }
        return(t);
      }
      t = r_44(t);
      g_44 = t;
      t = (ATerm) ATinsert(CheckATermList(g_44), (ATerm) ATmakeAppl(sym_Program_1, d_44));
      k_10 = t;
      t = SSLsetAnnotations(k_10, c_44);
    }
  }
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm i_45 = NULL;
  i_45 = t;
  if(match_string(t, "--help"))
    {
      t = i_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_45;
        }
    }
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL;
  t = term_e_28;
  j_45 = t;
  t = term_u_17;
  k_45 = t;
  t = term_w_30;
  t = g_7(j_45, k_45, t);
  t = term_x_30;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_z_30;
  return(t);
}
ATerm r_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_79 (ATerm), ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL;
  y_44 = t;
  t = term_i_26;
  a_45 = t;
  t = term_j_26;
  b_45 = t;
  t = (ATerm) ATempty;
  c_45 = t;
  t = SSL_table_put(a_45, b_45, c_45);
  t = y_44;
  {
    ATerm h_7 (ATerm t)
    {
      ATerm a_31 = t;
      int b_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_79(t);
          ;
          LocalPopChoice(b_31);
        }
      else
        {
          t = a_31;
          {
            ATerm c_31 = t;
            int d_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_7, o_7, q_7, t);
                ;
                LocalPopChoice(d_31);
              }
            else
              {
                t = c_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_7, t);
    {
      ATerm h_31 = t;
      int i_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_45 = NULL;
          r_45 = t;
          {
            ATerm j_31 = t;
            int k_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_17 = NULL;
                t = r_45;
                {
                  ATerm l_31 = t;
                  int q_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_e_28;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(q_31);
                    }
                  else
                    {
                      t = l_31;
                      t = fetch_1_0(r_7, t);
                    }
                  t = r_45;
                  t = default_system_usage_0_0(t);
                  t = term_z_24;
                  d_17 = t;
                  t = SSL_exit(d_17);
                }
                ;
                LocalPopChoice(k_31);
              }
            else
              {
                t = j_31;
                {
                  ATerm h_17 = NULL;
                  t = term_m_29;
                  t = get_config_0_0(t);
                  t = r_45;
                  t = default_system_about_0_0(t);
                  t = term_z_24;
                  h_17 = t;
                  t = SSL_exit(h_17);
                }
              }
          }
          ;
          LocalPopChoice(i_31);
        }
      else
        {
          t = h_31;
          {
            ATerm r_31 = t;
            int s_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
                ATerm t_7 (ATerm t)
                {
                  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,m_10 = NULL;
                  x_45 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      w_45 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_45);
                  v_45 = t;
                  t = w_45;
                  if(((w_44 != NULL) && (w_44 != t)))
                    _fail(t);
                  else
                    w_44 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, w_45);
                  m_10 = t;
                  t = SSLsetAnnotations(m_10, v_45);
                  return(t);
                }
                t = fetch_1_0(t_7, t);
                t = term_r_16;
                t_45 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_44)), term_t_31);
                u_45 = t;
                t = SSL_printnl(t_45, u_45);
                t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_44)), term_t_31));
                t = default_system_usage_0_0(t);
                t = term_f_9;
                s_45 = t;
                t = SSL_exit(s_45);
                ;
                LocalPopChoice(s_31);
              }
            else
              {
                t = r_31;
              }
          }
        }
      x_44 = t;
      t = term_i_26;
      z_44 = t;
      t = SSL_table_destroy(z_44);
      t = x_44;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL;
  t = parse_options_1_0(s_77, t);
  c_46 = t;
  t = term_u_31;
  f_46 = t;
  t = SSL_table_create(f_46);
  t = term_u_31;
  d_46 = t;
  t = term_x_31;
  e_46 = t;
  t = SSL_table_put(d_46, e_46, c_46);
  t = c_46;
  t = u_77(t);
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_77, t);
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        {
          ATerm a_32 = t;
          int b_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_77(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_32);
            }
          else
            {
              t = a_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(d_32);
    }
  else
    {
      t = c_32;
      {
        ATerm e_32 = t;
        int f_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(x_7, a_8, c_8, t);
                  ;
                  LocalPopChoice(h_32);
                }
              else
                {
                  t = g_32;
                  {
                    ATerm i_32 = t;
                    int j_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(j_32);
                      }
                    else
                      {
                        t = i_32;
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
ATerm w_7 (ATerm t)
{
  t = xtc_io_1_0(d_8, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL;
  t = term_k_32;
  n_46 = t;
  t = term_u_17;
  o_46 = t;
  t = term_l_32;
  t = g_7(n_46, o_46, t);
  t = term_m_32;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_46 = NULL,y_46 = NULL;
      y_46 = t;
      if(match_cons(t, sym_FILE_1))
        {
          x_46 = ATgetArgument(t, 0);
          {
            ATerm p_17 = NULL,x_10 = NULL;
            t = SSLgetAnnotations(y_46);
            p_17 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, x_46);
            x_10 = t;
            t = SSLsetAnnotations(x_10, p_17);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_46;
        }
      LocalPopChoice(p_32);
      t = xtc_transform_file_2_0(f_8, h_8, t);
    }
  else
    {
      t = o_32;
      t = xtc_transform_term_2_0(l_8, m_8, t);
    }
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_47 = NULL,h_47 = NULL;
        h_47 = t;
        if(match_cons(t, sym_FILE_1))
          {
            g_47 = ATgetArgument(t, 0);
            {
              ATerm y_17 = NULL,i_11 = NULL;
              t = SSLgetAnnotations(h_47);
              y_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_47);
              i_11 = t;
              t = SSLsetAnnotations(i_11, y_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_47;
          }
        LocalPopChoice(r_32);
        t = xtc_transform_file_2_0(n_8, pass_verbose_0_0, t);
      }
    else
      {
        t = q_32;
        t = xtc_transform_term_2_0(o_8, pass_verbose_0_0, t);
      }
    {
      ATerm s_32 = t;
      int t_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_47 = NULL,o_47 = NULL;
          o_47 = t;
          if(match_cons(t, sym_FILE_1))
            {
              n_47 = ATgetArgument(t, 0);
              {
                ATerm k_18 = NULL,k_11 = NULL;
                t = SSLgetAnnotations(o_47);
                k_18 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, n_47);
                k_11 = t;
                t = SSLsetAnnotations(k_11, k_18);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = o_47;
            }
          LocalPopChoice(t_32);
          t = xtc_transform_file_2_0(p_8, pass_verbose_0_0, t);
        }
      else
        {
          t = s_32;
          t = xtc_transform_term_2_0(t_8, pass_verbose_0_0, t);
        }
    }
  }
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm z_46 = NULL;
  t = term_v_32;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  z_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_46), term_w_32);
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm a_47 = NULL;
  t = term_v_32;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  a_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_47), term_w_32);
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_x_32;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_x_32;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm io_pp_c_0_0 (ATerm t)
{
  t = option_wrap_4_0(u_7, default_usage_0_0, _id, w_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_c_0_0(t);
  return(t);
}
