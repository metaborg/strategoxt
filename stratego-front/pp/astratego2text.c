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
ATerm term_z_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_o_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_t_29;
ATerm term_p_29;
ATerm term_n_29;
ATerm term_i_29;
ATerm term_b_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_h_28;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_t_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_t_25;
ATerm term_i_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_q_24;
ATerm term_l_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_v_23;
ATerm term_n_23;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_v_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_l_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_a_21;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_k_19;
ATerm term_n_18;
ATerm term_j_18;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_s_16;
ATerm term_o_16;
ATerm term_c_16;
ATerm term_q_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
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
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_z_8;
ATerm term_v_8;
ATerm term_s_8;
ATerm term_k_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_m_4;
void init_constant_terms (void)
{
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_8, term_v_8, term_z_8);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_9, term_e_9, term_f_9);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_9, term_j_9, term_k_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_9, term_p_9, term_q_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_9, term_u_9, term_v_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_9, term_y_9, term_z_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_10, term_c_10, term_d_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_10, term_g_10, term_i_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_m_10, term_n_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_10, term_t_10, term_u_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_10, term_a_11, term_b_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_g_11, term_h_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_o_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_t_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_y_11, term_a_12);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_d_12, term_e_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_j_12, term_k_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_n_12, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_y_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_c_13, term_d_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_13, term_i_13, term_m_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_p_13, term_q_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_z_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_d_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_h_14, term_i_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_m_14, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_s_14, term_t_14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_l_20, term_i_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_l_20, term_n_20);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_c_16);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym__2, term_n_18, term_d_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__2, term_x_24, term_c_17);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_x_25, term_y_25);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_r_28, term_c_17);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym__2, term_x_28, term_c_17);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_b_27, term_c_17);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym__2, term_h_31, term_c_17);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm read_from_0_0 (ATerm);
ATerm y_5 (ATerm r_27, ATerm s_27, ATerm);
ATerm a_6 (ATerm d_72 (ATerm), ATerm f_180, ATerm z_27, ATerm);
ATerm b_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm);
ATerm b_6 (ATerm n_24, ATerm o_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm s_70 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm e_90 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm y_6 (ATerm p_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm d_6 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm);
ATerm j_8 (ATerm p_7, ATerm);
ATerm r_8 (ATerm r_7, ATerm w_7, ATerm y_7, ATerm);
ATerm w_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm x_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm t_5 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm);
ATerm u_5 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm);
ATerm h_1 (ATerm);
ATerm v_5 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm);
ATerm w_5 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm);
ATerm e_6 (ATerm l_48, ATerm m_48, ATerm);
ATerm v_14 (ATerm l_14, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_5 (ATerm x_27, ATerm);
ATerm z_5 (ATerm t_48, ATerm u_48, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm t_16 (ATerm l_15, ATerm);
ATerm u_16 (ATerm s_15, ATerm t_15, ATerm w_15, ATerm);
ATerm v_16 (ATerm f_16, ATerm g_16, ATerm h_16, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm b_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm g_2 (ATerm);
ATerm i_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm o_21 (ATerm m_20, ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm f_6 (ATerm t_24, ATerm u_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm g_6 (ATerm m_45, ATerm n_45, ATerm);
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm f_3 (ATerm);
ATerm i_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm xtc_io_1_0 (ATerm r_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm a_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm k_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm o_6 (ATerm h_47, ATerm i_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm m_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm h_6 (ATerm c_43, ATerm d_43, ATerm);
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm t_4 (ATerm);
ATerm w_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm a_5 (ATerm);
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm k_6 (ATerm y_41, ATerm z_41, ATerm);
ATerm debug_1_0 (ATerm b_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm l_6 (ATerm y_46, ATerm z_46, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm i_6 (ATerm);
ATerm n_6 (ATerm);
ATerm q_6 (ATerm);
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm c_7 (ATerm);
ATerm e_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm q_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm z_7 (ATerm);
ATerm astratego2text_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm s_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_m_4;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_8);
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_0, (ATerm) ATinsert(ATempty, term_a_8));
      t = e_6(s_0, u_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm y_5 (ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm y_0 = NULL;
  t = SSL_write_term_to_stream_baf(r_27, s_27);
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_0);
  return(t);
}
ATerm a_6 (ATerm d_72 (ATerm), ATerm f_180, ATerm z_27, ATerm t)
{
  ATerm a_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_180, term_b_8);
  t = open_stream_0_0(t);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, z_27);
  t = d_72(t);
  t = fclose_0_0(t);
  t = z_27;
  return(t);
}
ATerm b_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if(match_cons(c_8, sym_Stream_1))
        {
          d_1 = ATgetArgument(c_8, 0);
        }
      else
        _fail(t);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(d_1, e_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  b_1 = t;
  t = xtc_new_file_0_0(t);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_1, b_1);
  t = a_6(b_0, c_1, b_1, t);
  t = SSL_close_file(c_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_90, o_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm b_6 (ATerm n_24, ATerm o_24, ATerm t)
{
  t = SSL_execvp(n_24, o_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
  o_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      p_2 = ATgetArgument(t, 0);
      {
        ATerm q_0 = NULL,r_0 = NULL;
        t = SSL_int_to_string(p_2);
        q_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_8), q_0), term_d_8);
        r_0 = t;
        t = SSL_concat_strings(r_0);
      }
    }
  else
    {
      ATerm k_1 = NULL,l_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          p_2 = ATgetArgument(t, 0);
          q_2 = ATgetArgument(t, 1);
          r_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(q_2);
      k_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_2), term_k_8), k_1), term_f_8), p_2);
      l_1 = t;
      t = SSL_concat_strings(l_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm u_2 = NULL;
  ATerm f_0 (ATerm t)
  {
    t = i_76(t);
    if(((u_2 != NULL) && (u_2 != t)))
      _fail(t);
    else
      u_2 = t;
    return(t);
  }
  t = fetch_1_0(f_0, t);
  t = not_null(u_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm v_2 = NULL;
  if(((v_2 != NULL) && (v_2 != t)))
    _fail(t);
  else
    v_2 = t;
  {
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm p_8 = ATgetArgument(t, 0);
              if(((v_2 != NULL) && (v_2 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                v_2 = ATgetArgument(t, 1);
              {
                ATerm q_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_14), term_o_14), term_j_14), term_e_14), term_a_14), term_t_13), term_n_13), term_f_13), term_a_13), term_u_12), term_p_12), term_l_12), term_f_12), term_b_12), term_u_11), term_q_11), term_j_11), term_c_11), term_x_10), term_q_10), term_j_10), term_e_10), term_a_10), term_w_9), term_r_9), term_l_9), term_g_9), term_c_9);
        t = fetch_elem_1_0(o_0, t);
        ;
        LocalPopChoice(o_8);
      }
    else
      {
        t = n_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(v_2));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm e_3 = NULL,o_3 = NULL;
  e_3 = t;
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_15 = ATgetArgument(t, 0);
            o_3 = ATgetArgument(t, 1);
            {
              ATerm c_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_14);
        {
          ATerm e_15 = t;
          int f_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_1 = NULL,t_1 = NULL,u_1 = NULL;
              t = o_3;
              {
                ATerm g_15 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_15;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                r_1 = t;
                t = term_h_15;
                t_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, r_1), term_i_15);
                u_1 = t;
                t = SSL_printnl(t_1, u_1);
                t = (ATerm) ATmakeAppl(sym__2, term_h_15, (ATerm) ATinsert(ATinsert(ATempty, r_1), term_i_15));
              }
              ;
              LocalPopChoice(f_15);
            }
          else
            {
              t = e_15;
              t = e_3;
            }
        }
      }
    else
      {
        t = x_14;
        t = e_3;
      }
    t = e_3;
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
  ATerm y_3 = NULL,z_3 = NULL;
  z_3 = t;
  t = fork_0_0(t);
  y_3 = t;
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = z_3;
        t = s_70(t);
        ;
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        t = SSL_waitpid(y_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_15 = ATgetArgument(t, 0);
            if(((ATgetType(m_15) != AT_INT) || (ATgetInt((ATermInt) m_15) != 0)))
              _fail(t);
            {
              ATerm n_15 = ATgetArgument(t, 1);
            }
            {
              ATerm p_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  if(((c_4 != NULL) && (c_4 != t)))
    _fail(t);
  else
    c_4 = t;
  t = e_90(t);
  t = xtc_find_0_0(t);
  if(((b_4 != NULL) && (b_4 != t)))
    _fail(t);
  else
    b_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_4), not_null(c_4));
  {
    ATerm p_0 (ATerm t)
    {
      ATerm d_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_4), not_null(c_4));
      t = b_6(not_null(b_4), not_null(c_4), t);
      t = term_q_15;
      d_4 = t;
      t = SSL_exit(d_4);
      return(t);
    }
    t = fork_and_wait_1_0(p_0, t);
    t = not_null(c_4);
  }
  return(t);
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
    h_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_5 = ATgetFirst((ATermList) t);
        g_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_2 = NULL,y_2 = NULL,n_0 = NULL;
          t = SSLgetAnnotations(h_5);
          n_2 = t;
          t = g_5;
          t = k_5(t);
          y_2 = t;
          t = (ATerm) ATinsert(CheckATermList(y_2), f_5);
          n_0 = t;
          t = SSLsetAnnotations(n_0, n_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_5;
        t = m_76(t);
      }
    return(t);
  }
  t = k_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
  h_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_4;
    }
  else
    {
      ATerm t_0 (ATerm t)
      {
        t = not_null(j_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((i_4 != NULL) && (i_4 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            i_4 = ATgetFirst((ATermList) t);
          if(((j_4 != NULL) && (j_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(i_4);
      t = at_end_1_0(t_0, t);
    }
  return(t);
}
ATerm y_6 (ATerm p_5, ATerm t)
{
  ATerm p_6 = NULL;
  t = SSL_explode_term(p_5);
  if(match_cons(t, sym__2))
    {
      ATerm r_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
  if(((t_6 != NULL) && (t_6 != t)))
    _fail(t);
  else
    t_6 = t;
  if(match_cons(t, sym__2))
    {
      r_6 = ATgetArgument(t, 0);
      s_6 = ATgetArgument(t, 1);
      {
        ATerm u_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = not_null(s_6);
              return(t);
            }
            t = not_null(r_6);
            t = at_end_1_0(v_0, t);
            ;
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
            t = y_6(not_null(t_6), t);
          }
      }
    }
  else
    {
      t = y_6(not_null(t_6), t);
    }
  return(t);
}
ATerm d_6 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,d_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
  f_7 = t;
  t = p_86(t);
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_6, q_44, o_44);
  t = m_6(z_6, q_44, o_44, t);
  {
    ATerm x_15 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_7 = NULL;
        t = term_c_16;
        i_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_6, term_c_16);
        t = l_6(z_6, i_7, t);
        ;
        LocalPopChoice(b_16);
      }
    else
      {
        t = x_15;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_7 = ATgetFirst((ATermList) t);
        d_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_16;
    g_7 = t;
    t = (ATerm) ATinsert(CheckATermList(d_7), (ATerm) ATinsert(CheckATermList(a_7), q_44));
    h_7 = t;
    t = SSL_table_put(z_6, g_7, h_7);
    t = f_7;
  }
  return(t);
}
ATerm j_8 (ATerm p_7, ATerm t)
{
  t = p_7;
  {
    ATerm e_16 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_16 = ATgetArgument(t, 0);
            ATerm m_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_16;
      }
    t = term_o_16;
    t = debug_1_0(w_0, t);
    t = (ATerm) ATmakeAppl(sym__2, p_7, term_b_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm r_8 (ATerm r_7, ATerm w_7, ATerm y_7, ATerm t)
{
  t = SSL_open_file(r_7, w_7);
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = term_s_16;
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
        ATerm z_16 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_8(g_8, t);
            ;
            LocalPopChoice(b_17);
          }
        else
          {
            t = z_16;
            t = r_8(h_8, i_8, g_8, t);
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
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
  t = term_c_17;
  t = new_0_0(t);
  w_8 = t;
  t = term_d_17;
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_8, term_d_17);
  t = k_6(w_8, x_8, t);
  y_8 = t;
  {
    ATerm j_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_a_8);
        i_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_8, (ATerm) ATinsert(ATempty, term_a_8));
        t = e_6(y_8, i_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(m_17);
      }
    else
      {
        t = j_17;
        t = y_8;
      }
  }
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_o_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL;
  t = new_file_0_0(t);
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_9, term_b_8);
  t = open_file_0_0(t);
  t = term_c_17;
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_9, term_c_17);
  t = d_6(x_0, n_9, o_9, t);
  t = n_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL;
  o_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm g_3 = NULL,j_3 = NULL;
      t = o_10;
      t = xtc_new_file_0_0(t);
      g_3 = t;
      t = m_0(t);
      j_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_3, (ATerm) ATinsert(ATinsert(ATempty, g_3), term_q_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(g_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_3);
    }
  else
    {
      ATerm x_3 = NULL,e_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_10;
      t = xtc_new_file_0_0(t);
      x_3 = t;
      t = m_0(t);
      e_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_3), term_q_17), p_10), term_j_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(x_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_3);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  ATerm z_0 (ATerm t)
  {
    ATerm v_10 = NULL,w_10 = NULL;
    v_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), v_10);
    t = l_6(not_null(s_10), v_10, t);
    w_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_10, w_10);
    return(t);
  }
  if(((s_10 != NULL) && (s_10 != t)))
    _fail(t);
  else
    s_10 = t;
  t = SSL_table_keys(not_null(s_10));
  t = map_1_0(z_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm z_10 = NULL;
  z_10 = t;
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_11 = NULL;
        t = term_n_18;
        t = get_config_0_0(t);
        f_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_11, term_c_14);
        t = geq_0_0(t);
        t = z_10;
        t = x_87(t);
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        t = z_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm i_11 = NULL;
  i_11 = t;
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_11 = NULL;
        t = term_n_18;
        t = get_config_0_0(t);
        k_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_11, term_g_11);
        t = geq_0_0(t);
        t = i_11;
        t = w_87(t);
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = i_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm p_11 = NULL;
  p_11 = t;
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_11 = NULL;
        t = term_n_18;
        t = get_config_0_0(t);
        v_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_11, term_p_9);
        t = geq_0_0(t);
        t = p_11;
        t = y_87(t);
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        t = p_11;
      }
  }
  return(t);
}
ATerm t_5 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm t)
{
  t = e_80(t);
  {
    ATerm f_1 (ATerm t)
    {
      ATerm x_11 = NULL;
      x_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_34), x_11);
      t = d_80(t);
      return(t);
    }
    t = fetch_1_0(f_1, t);
    t = not_null(t_34);
  }
  return(t);
}
ATerm u_5 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm t)
{
  ATerm e_13 (ATerm t)
  {
    ATerm t_12 = NULL,x_12 = NULL,z_12 = NULL;
    t_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(p_34);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_12 = ATgetFirst((ATermList) t);
            z_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_18 = t;
          int t_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_12;
              {
                ATerm g_1 (ATerm t)
                {
                  t = not_null(p_34);
                  return(t);
                }
                t = t_5(a_80, g_1, not_null(x_12), not_null(z_12), t);
                t = e_13(t);
              }
              ;
              LocalPopChoice(t_18);
            }
          else
            {
              t = s_18;
              {
                ATerm q_4 = NULL,v_4 = NULL,x_1 = NULL;
                t = SSLgetAnnotations(t_12);
                q_4 = t;
                t = z_12;
                t = e_13(t);
                v_4 = t;
                t = (ATerm) ATinsert(CheckATermList(v_4), x_12);
                x_1 = t;
                t = SSLsetAnnotations(x_1, q_4);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(q_34);
  t = e_13(t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm r_13 = NULL;
  if(match_cons(t, sym__2))
    {
      r_13 = ATgetArgument(t, 0);
      if((r_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm v_5 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_18 = ATgetArgument(t, 0);
            ATerm x_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
        t = l_6(e_46, f_46, t);
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        t = (ATerm) ATempty;
      }
    l_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_13, g_46);
    t = u_5(h_1, l_13, g_46, t);
    k_13 = t;
    t = SSL_table_put(e_46, f_46, k_13);
    t = j_13;
  }
  return(t);
}
ATerm w_5 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm u_13 = NULL,v_13 = NULL;
    if(match_cons(t, sym__2))
      {
        u_13 = ATgetArgument(t, 0);
        v_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(o_46), u_13, v_13);
    t = a_88(t);
    return(t);
  }
  t = not_null(n_46);
  t = map_1_0(i_1, t);
  return(t);
}
ATerm e_6 (ATerm l_48, ATerm m_48, ATerm t)
{
  t = SSL_access(l_48, m_48);
  return(t);
}
ATerm v_14 (ATerm l_14, ATerm t)
{
  t = SSL_fclose(l_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  r_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_14 = ATgetArgument(t, 0);
      {
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_14);
            ;
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
            t = v_14(r_14, t);
          }
      }
    }
  else
    {
      t = v_14(r_14, t);
    }
  return(t);
}
ATerm x_5 (ATerm x_27, ATerm t)
{
  t = SSL_read_term_from_stream(x_27);
  return(t);
}
ATerm z_5 (ATerm t_48, ATerm u_48, ATerm t)
{
  ATerm w_14 = NULL;
  t = SSL_fopen(t_48, u_48);
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_14 = NULL;
  t = SSL_stdin_stream();
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_15 = NULL;
  t = SSL_stdout_stream();
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_15 = NULL;
  t = SSL_stderr_stream();
  d_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_15);
  return(t);
}
ATerm t_16 (ATerm l_15, ATerm t)
{
  ATerm o_15 = NULL;
  t = SSL_explode_term(l_15);
  if(match_cons(t, sym__2))
    {
      ATerm a_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_19 = ATgetArgument(t, 1);
        if(((ATgetType(b_19) == AT_LIST) && !(ATisEmpty(b_19))))
          {
            o_15 = ATgetFirst((ATermList) b_19);
            {
              ATerm c_19 = (ATerm) ATgetNext((ATermList) b_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm u_16 (ATerm s_15, ATerm t_15, ATerm w_15, ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,d_16 = NULL,z_1 = NULL;
  t = SSLgetAnnotations(w_15);
  a_16 = t;
  t = s_15;
  if(match_cons(t, sym_Path_1))
    {
      d_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_16, t_15);
  z_1 = t;
  t = SSLsetAnnotations(z_1, a_16);
  if(match_cons(t, sym__2))
    {
      y_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(y_15, z_15, t);
  return(t);
}
ATerm v_16 (ATerm f_16, ATerm g_16, ATerm h_16, ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,n_16 = NULL,a_2 = NULL;
  t = SSLgetAnnotations(h_16);
  k_16 = t;
  t = SSL_is_string(f_16);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_16, g_16);
  a_2 = t;
  t = SSLsetAnnotations(a_2, k_16);
  if(match_cons(t, sym__2))
    {
      i_16 = ATgetArgument(t, 0);
      j_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(i_16, j_16, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_19 = ATgetArgument(t, 0);
      ATerm e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  p_16 = t;
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_16(p_16, t);
            ;
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
            {
              ATerm i_19 = t;
              int j_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_16(q_16, r_16, p_16, t);
                  ;
                  LocalPopChoice(j_19);
                }
              else
                {
                  t = i_19;
                  t = v_16(q_16, r_16, p_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_16(p_16, t);
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_k_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_17 = NULL;
      a_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_17, term_p_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      t = debug_1_0(j_1, t);
      _fail(t);
    }
  x_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(y_16, t);
  w_16 = t;
  t = x_16;
  t = fclose_0_0(t);
  t = w_16;
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_q_19;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_r_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_17 = NULL,f_17 = NULL;
      e_17 = t;
      t = (ATerm) ATinsert(ATempty, term_u_19);
      f_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_17, (ATerm) ATinsert(ATempty, term_u_19));
      t = e_6(e_17, f_17, t);
      LocalPopChoice(t_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = s_19;
      {
        ATerm v_19 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_20 = t;
            if((PushChoice() == 0))
              {
                ATerm g_17 = NULL,h_17 = NULL;
                g_17 = t;
                t = (ATerm) ATinsert(ATempty, term_a_8);
                h_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_17, (ATerm) ATinsert(ATempty, term_a_8));
                t = e_6(g_17, h_17, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = c_20;
              }
            t = debug_1_0(m_1, t);
            ;
            LocalPopChoice(b_20);
          }
        else
          {
            t = v_19;
            t = debug_1_0(n_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_h_20;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
  y_17 = t;
  t = term_h_15;
  z_17 = t;
  t = (ATerm) ATinsert(ATempty, term_i_20);
  a_18 = t;
  t = SSL_printnl(z_17, a_18);
  t = y_17;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL;
  if(match_cons(t, sym__3))
    {
      b_18 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
      d_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_5(b_18, c_18, d_18, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  t = term_h_15;
  f_18 = t;
  t = (ATerm) ATinsert(ATempty, term_j_20);
  g_18 = t;
  t = SSL_printnl(f_18, g_18);
  t = e_18;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,k_18 = NULL;
  h_18 = t;
  t = term_h_15;
  i_18 = t;
  t = (ATerm) ATinsert(ATempty, term_i_20);
  k_18 = t;
  t = SSL_printnl(i_18, k_18);
  t = h_18;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm i_17 = NULL,k_17 = NULL,l_17 = NULL,n_17 = NULL,p_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
  i_17 = t;
  t = if_verbose5_1_0(o_1, t);
  {
    ATerm k_20 = t;
    if((PushChoice() == 0))
      {
        ATerm w_17 = NULL,x_17 = NULL;
        t = term_l_20;
        w_17 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, i_17);
        x_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_20, (ATerm) ATmakeAppl(sym_Imported_1, i_17));
        t = l_6(w_17, x_17, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_20;
      }
    l_17 = t;
    t = term_l_20;
    t_17 = t;
    t = term_n_20;
    u_17 = t;
    t = (ATerm) ATinsert(ATempty, i_17);
    v_17 = t;
    t = SSL_table_put(t_17, u_17, v_17);
    t = l_17;
    t = if_verbose4_1_0(q_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(v_1, t);
    k_17 = t;
    t = term_l_20;
    s_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_20, k_17);
    t = w_5(w_1, s_17, k_17, t);
    t = if_verbose6_1_0(y_1, t);
    t = term_l_20;
    n_17 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, i_17);
    p_17 = t;
    t = (ATerm) ATempty;
    r_17 = t;
    t = SSL_table_put(n_17, p_17, r_17);
    t = (ATerm) ATmakeAppl(sym__3, term_l_20, (ATerm)ATmakeAppl(sym_Imported_1, i_17), (ATerm) ATempty);
    t = if_verbose4_1_0(b_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,l_19 = NULL,m_19 = NULL;
  h_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_19 = ATgetFirst((ATermList) t);
          m_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 = NULL,x_6 = NULL,b_7 = NULL,f_2 = NULL;
            t = SSLgetAnnotations(h_19);
            j_6 = t;
            t = l_19;
            t = r_83(t);
            x_6 = t;
            t = m_19;
            t = filter_1_0(r_83, t);
            b_7 = t;
            t = (ATerm) ATinsert(CheckATermList(b_7), x_6);
            f_2 = t;
            t = SSLsetAnnotations(f_2, j_6);
            ;
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            t = m_19;
            t = filter_1_0(r_83, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm w_19 (ATerm t)
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_85(t);
        t = w_19(t);
        ;
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
      }
    return(t);
  }
  t = w_19(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      {
        ATerm b_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_19 = NULL;
            t = term_g_21;
            x_19 = t;
            t = SSL_getenv(x_19);
            ;
            LocalPopChoice(f_21);
          }
        else
          {
            t = b_21;
            t = XTC_REPOSITORY();
          }
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
  t = term_h_21;
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL;
  t = term_l_20;
  e_20 = t;
  t = term_i_21;
  f_20 = t;
  t = term_j_21;
  t = l_6(e_20, f_20, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm k_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_21;
      }
  }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm y_19 = NULL;
  t = if_verbose5_1_0(c_2, t);
  y_19 = t;
  {
    ATerm m_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_19 = NULL,a_20 = NULL;
        t = term_l_20;
        z_19 = t;
        t = term_n_20;
        a_20 = t;
        t = term_q_21;
        t = l_6(z_19, a_20, t);
        ;
        LocalPopChoice(p_21);
      }
    else
      {
        t = m_21;
        {
          ATerm d_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          d_20 = t;
          t = repeat_1_0(e_2, t);
          t = d_20;
        }
      }
    t = y_19;
    t = if_verbose5_1_0(g_2, t);
  }
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_r_21;
  return(t);
}
ATerm o_21 (ATerm m_20, ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  t = term_l_20;
  t_20 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, m_20);
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_20, (ATerm) ATmakeAppl(sym_Tool_1, m_20));
  t = l_6(t_20, u_20, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_21 = ATgetFirst((ATermList) t);
      if(match_cons(s_21, sym__2))
        {
          ATerm u_21 = ATgetArgument(s_21, 0);
          s_20 = ATgetArgument(s_21, 1);
        }
      else
        _fail(t);
      {
        ATerm t_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_20;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_r_21;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_l_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(a_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_20 = NULL,w_20 = NULL,z_20 = NULL;
      t = if_verbose5_1_0(k_2, t);
      t = xtc_load_0_0(t);
      if(((z_20 != NULL) && (z_20 != t)))
        _fail(t);
      else
        z_20 = t;
      if(match_cons(t, sym__2))
        {
          v_20 = ATgetArgument(t, 0);
          w_20 = ATgetArgument(t, 1);
          {
            ATerm y_21 = t;
            int z_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
                t = term_l_20;
                if(((d_21 != NULL) && (d_21 != t)))
                  _fail(t);
                else
                  d_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(v_20));
                if(((e_21 != NULL) && (e_21 != t)))
                  _fail(t);
                else
                  e_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_20, (ATerm) ATmakeAppl(sym_Tool_1, not_null(v_20)));
                t = l_6(not_null(d_21), not_null(e_21), t);
                {
                  ATerm t_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((w_20 != NULL) && (w_20 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          w_20 = ATgetArgument(t, 0);
                        if(((c_21 != NULL) && (c_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(t_2, t);
                  t = not_null(c_21);
                }
                ;
                LocalPopChoice(z_21);
              }
            else
              {
                t = y_21;
                t = o_21(not_null(z_20), t);
              }
          }
        }
      else
        {
          t = o_21(not_null(z_20), t);
        }
      t = if_verbose5_1_0(w_2, t);
      ;
      LocalPopChoice(x_21);
    }
  else
    {
      t = w_21;
      {
        ATerm n_21 = NULL,n_7 = NULL,o_7 = NULL;
        n_21 = t;
        t = term_h_15;
        n_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_22), n_21), term_a_22);
        o_7 = t;
        t = SSL_printnl(n_7, o_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_22), n_21), term_a_22);
        t = if_verbose5_1_0(z_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm f_6 (ATerm t_24, ATerm u_24, ATerm t)
{
  t = SSL_copy(t_24, u_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL;
  i_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_7 = NULL;
        t = i_22;
        t = k_0(t);
        x_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = x_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = x_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, j_22, x_7);
        t = f_6(j_22, x_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_22);
        ;
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        {
          ATerm e_22 = t;
          int f_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_8 = NULL;
              t = i_22;
              t = k_0(t);
              l_8 = t;
              {
                ATerm g_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm m_8 = NULL;
                    m_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = m_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = m_8;
                          }
                        else
                          {
                            t = m_8;
                            if((j_22 != t))
                              {
                                _fail(t);
                              }
                            t = m_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_22;
                  }
                t = (ATerm) ATmakeAppl(sym__2, j_22, l_8);
                t = f_6(j_22, l_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, j_22);
              }
              ;
              LocalPopChoice(f_22);
            }
          else
            {
              t = e_22;
              t = i_22;
              t = k_0(t);
              if((j_22 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_22);
            }
        }
      }
  }
  return(t);
}
ATerm g_6 (ATerm m_45, ATerm n_45, ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL;
  o_22 = t;
  {
    ATerm h_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
        t = l_6(m_45, n_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_22 = ATgetFirst((ATermList) t);
            n_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(k_22);
        t = SSL_table_put(m_45, n_45, n_22);
        t = (ATerm) ATmakeAppl(sym__3, m_45, n_45, n_22);
      }
    else
      {
        t = h_22;
        t = SSL_table_remove(m_45, n_45);
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
      }
    t = o_22;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,t_22 = NULL,u_22 = NULL;
  if(((t_22 != NULL) && (t_22 != t)))
    _fail(t);
  else
    t_22 = t;
  t = m_86(t);
  if(((r_22 != NULL) && (r_22 != t)))
    _fail(t);
  else
    r_22 = t;
  {
    ATerm m_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_22 = NULL;
        t = term_c_16;
        v_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_22), term_c_16);
        t = l_6(not_null(r_22), v_22, t);
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = m_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((q_22 != NULL) && (q_22 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          q_22 = ATgetFirst((ATermList) t);
        if(((p_22 != NULL) && (p_22 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          p_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_16;
    if(((u_22 != NULL) && (u_22 != t)))
      _fail(t);
    else
      u_22 = t;
    t = SSL_table_put(not_null(r_22), not_null(u_22), not_null(p_22));
    t = not_null(q_22);
    {
      ATerm b_3 (ATerm t)
      {
        ATerm w_22 = NULL;
        w_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_22), w_22);
        t = g_6(not_null(r_22), w_22, t);
        return(t);
      }
      t = map_1_0(b_3, t);
      t = not_null(t_22);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t)
{
  ATerm x_22 = t;
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
      t = x_22;
      t = i_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,e_23 = NULL,f_23 = NULL;
  z_22 = t;
  t = l_86(t);
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_22, term_c_16);
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_23 = ATgetArgument(t, 0);
            ATerm h_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_16;
        k_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_22, term_c_16);
        t = l_6(y_22, k_23, t);
        ;
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        t = (ATerm) ATempty;
      }
    a_23 = t;
    t = term_c_16;
    e_23 = t;
    t = (ATerm) ATinsert(CheckATermList(a_23), (ATerm) ATempty);
    f_23 = t;
    t = SSL_table_put(y_22, e_23, f_23);
    t = z_22;
  }
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_o_17;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm w_23 = NULL;
  w_23 = t;
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(w_23);
        ;
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        t = w_23;
      }
  }
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_o_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm o_23 = NULL;
  ATerm d_3 (ATerm t)
  {
    ATerm p_23 = NULL;
    p_23 = t;
    {
      ATerm l_23 = t;
      int m_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_23 = NULL,s_23 = NULL;
          t = term_o_17;
          r_23 = t;
          t = term_c_16;
          s_23 = t;
          t = term_n_23;
          t = l_6(r_23, s_23, t);
          ;
          LocalPopChoice(m_23);
        }
      else
        {
          t = l_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((o_23 != NULL) && (o_23 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            o_23 = ATgetFirst((ATermList) t);
          {
            ATerm q_23 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(o_23);
      t = map_1_0(f_3, t);
      t = p_23;
      t = end_scope_1_0(i_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(c_3, t);
  t = restore_always_2_0(q_89, d_3, t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      t = term_v_23;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_89 (ATerm), ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_24 = NULL;
        t = term_j_18;
        t = get_config_0_0(t);
        f_24 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, f_24);
        ;
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        t = term_m_4;
      }
    t = r_89(t);
    t = copy_to_1_0(m_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(l_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  g_24 = t;
  t = term_c_17;
  t = whoami_0_0(t);
  h_24 = t;
  t = term_h_15;
  j_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_24), h_24), term_z_23);
  k_24 = t;
  t = SSL_printnl(j_24, k_24);
  t = term_v_8;
  i_24 = t;
  t = SSL_exit(i_24);
  t = g_24;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  if(match_string(t, "-k"))
    {
      t = m_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_24;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm p_24 = NULL,r_24 = NULL,s_24 = NULL;
  p_24 = t;
  t = SSL_string_to_int(p_24);
  r_24 = t;
  t = term_b_24;
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_24, r_24);
  t = o_6(s_24, r_24, t);
  t = p_24;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, p_3, q_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  if(match_string(t, "-S"))
    {
      t = w_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_24;
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL;
  t = term_n_18;
  y_24 = t;
  t = term_d_24;
  z_24 = t;
  t = term_e_24;
  t = o_6(y_24, z_24, t);
  t = term_l_24;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_q_24;
  return(t);
}
ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,e_25 = NULL;
  a_25 = t;
  t = SSL_string_to_int(a_25);
  b_25 = t;
  t = term_n_18;
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_18, b_25);
  t = o_6(e_25, b_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_25);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL;
  t = term_x_24;
  f_25 = t;
  t = term_c_17;
  g_25 = t;
  t = term_c_25;
  t = o_6(f_25, g_25, t);
  t = term_d_25;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_3, s_3, t_3, t);
      ;
      LocalPopChoice(l_25);
    }
  else
    {
      t = j_25;
      {
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_3, w_3, a_4, t);
            ;
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
            t = Option_3_0(f_4, g_4, k_4, t);
          }
      }
    }
  return(t);
}
ATerm o_6 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm h_25 = NULL;
  t = term_t_25;
  h_25 = t;
  t = SSL_table_put(h_25, h_47, i_47);
  t = (ATerm) ATmakeAppl(sym__3, term_t_25, h_47, i_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_25 = NULL,m_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
      t = term_c_17;
      t = d_0(t);
      n_25 = t;
      t = term_x_25;
      o_25 = t;
      t = term_y_25;
      p_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_25, term_y_25, n_25);
      t = m_6(o_25, p_25, n_25, t);
      _fail(t);
    }
  else
    {
      ATerm s_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_25 = ATgetFirst((ATermList) t);
          m_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_25;
      t = a_0(t);
      t = term_c_17;
      t = c_0(t);
      s_25 = t;
      t = (ATerm) ATinsert(CheckATermList(m_25), s_25);
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm u_25 = NULL;
  u_25 = t;
  if(match_string(t, "-o"))
    {
      t = u_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_25;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  v_25 = t;
  t = term_q_17;
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, v_25);
  t = o_6(w_25, v_25, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_25);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, n_4, o_4, t);
  return(t);
}
ATerm m_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_26 = ATgetArgument(t, 0);
            ATerm g_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
        t = l_6(h_45, i_45, t);
        ;
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = (ATerm) ATempty;
      }
    d_26 = t;
    t = (ATerm) ATinsert(CheckATermList(d_26), g_45);
    e_26 = t;
    t = SSL_table_put(h_45, i_45, e_26);
    t = c_26;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,y_26 = NULL,z_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_27 = NULL,e_27 = NULL,i_27 = NULL;
      t = term_c_17;
      t = j_0(t);
      a_27 = t;
      t = term_x_25;
      e_27 = t;
      t = term_y_25;
      i_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_25, term_y_25, a_27);
      t = m_6(e_27, i_27, a_27, t);
      _fail(t);
    }
  else
    {
      ATerm m_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_26 = ATgetFirst((ATermList) t);
          v_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_26 = ATgetFirst((ATermList) t);
          z_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_26;
      t = h_0(t);
      t = y_26;
      t = i_0(t);
      m_27 = t;
      t = (ATerm) ATinsert(CheckATermList(z_26), m_27);
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm o_27 = NULL;
  o_27 = t;
  if(match_string(t, "-i"))
    {
      t = o_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_27;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL;
  p_27 = t;
  t = term_j_18;
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_18, p_27);
  t = o_6(q_27, p_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_27);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_4, r_4, s_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_17;
  t = whoami_0_0(t);
  t_27 = t;
  t = term_h_15;
  v_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_26), t_27);
  w_27 = t;
  t = SSL_printnl(v_27, w_27);
  t = term_v_8;
  u_27 = t;
  t = SSL_exit(u_27);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm h_6 (ATerm c_43, ATerm d_43, ATerm t)
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
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
  b_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_28;
      t = o_82(t);
    }
  else
    {
      ATerm g_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_28 = ATgetFirst((ATermList) t);
          d_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_28;
      t = foldr_2_0(o_82, p_82, t);
      g_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_28, g_28);
      t = p_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_d_24;
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  if(match_cons(t, sym__2))
    {
      a_9 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(a_9, b_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_28 = NULL,t_8 = NULL,u_8 = NULL;
  t = times_0_0(t);
  u_8 = t;
  t = SSL_explode_term(u_8);
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      t_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_8;
  t = foldr_2_0(t_4, w_4, t);
  j_28 = t;
  t = SSL_TicksToSeconds(j_28);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  u_28 = t;
  if(match_cons(t, sym__2))
    {
      v_28 = ATgetArgument(t, 0);
      w_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_28;
        if((v_28 != t))
          {
            _fail(t);
          }
        t = u_28;
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = (ATerm) ATmakeAppl(sym__2, v_28, w_28);
        {
          ATerm p_26 = t;
          int q_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_28, w_28);
              ;
              LocalPopChoice(q_26);
            }
          else
            {
              t = p_26;
              t = SSL_gtr(v_28, w_28);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_28, w_28);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_29 = NULL;
        t = term_n_18;
        t = get_config_0_0(t);
        e_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_29, term_v_8);
        t = geq_0_0(t);
        t = a_29;
        t = t_87(t);
        ;
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        t = a_29;
      }
  }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm h_29 = NULL,o_29 = NULL,q_29 = NULL,r_29 = NULL;
  t = run_time_0_0(t);
  h_29 = t;
  t = term_c_17;
  t = whoami_0_0(t);
  o_29 = t;
  t = term_h_15;
  q_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_26), h_29), term_f_8), o_29);
  r_29 = t;
  t = SSL_printnl(q_29, r_29);
  t = (ATerm) ATmakeAppl(sym__2, term_h_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_26), h_29), term_f_8), o_29));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_24;
  s_29 = t;
  t = SSL_exit(s_29);
  return(t);
}
ATerm a_5 (ATerm t)
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
            ATerm t_9 = NULL,h_2 = NULL;
            t = SSLgetAnnotations(e_30);
            t_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_30);
            h_2 = t;
            t = SSLsetAnnotations(h_2, t_9);
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
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      t = fetch_1_0(a_5, t);
    }
  t = s_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_30 = ATgetFirst((ATermList) t);
      i_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_30 = NULL,n_30 = NULL;
        ATerm b_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_30)), not_null(n_30));
          return(t);
        }
        t = not_null(i_30);
        t = g_0(t);
        if(((m_30 != NULL) && (m_30 != t)))
          _fail(t);
        else
          m_30 = t;
        t = not_null(h_30);
        t = e_0(t);
        if(((n_30 != NULL) && (n_30 != t)))
          _fail(t);
        else
          n_30 = t;
        t = not_null(i_30);
        t = reverse_acc_2_0(e_0, b_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_17;
      t = g_0(t);
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL,j_2 = NULL;
  t_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_30);
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_30);
  j_2 = t;
  t = SSLsetAnnotations(j_2, r_30);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm v_30 = NULL;
  v_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_30), term_c_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  ATerm d_27 = t;
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
      t = d_27;
      t = fetch_1_0(c_5, t);
    }
  t = term_g_27;
  t = echo_0_0(t);
  t = term_x_25;
  p_30 = t;
  t = term_y_25;
  q_30 = t;
  t = term_h_27;
  t = l_6(p_30, q_30, t);
  t = reverse_acc_2_0(_id, d_5, t);
  t = map_1_0(e_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm s_31 (ATerm t)
  {
    ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
    p_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_31 = ATgetFirst((ATermList) t);
        r_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_27 = t;
      int k_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_10 = NULL,k_10 = NULL,m_2 = NULL;
          t = SSLgetAnnotations(p_31);
          h_10 = t;
          t = q_31;
          t = g_76(t);
          k_10 = t;
          t = (ATerm) ATinsert(CheckATermList(r_31), k_10);
          m_2 = t;
          t = SSLsetAnnotations(m_2, h_10);
          ;
          LocalPopChoice(k_27);
        }
      else
        {
          t = j_27;
          {
            ATerm d_11 = NULL,l_11 = NULL,s_2 = NULL;
            t = SSLgetAnnotations(p_31);
            d_11 = t;
            t = r_31;
            t = s_31(t);
            l_11 = t;
            t = (ATerm) ATinsert(CheckATermList(l_11), q_31);
            s_2 = t;
            t = SSLsetAnnotations(s_2, d_11);
          }
        }
    }
    return(t);
  }
  t = s_31(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  w_31 = t;
  {
    ATerm l_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_31;
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
            t = w_31;
          }
        ;
        LocalPopChoice(n_27);
      }
    else
      {
        t = l_27;
        t = (ATerm) ATinsert(ATempty, w_31);
      }
    x_31 = t;
    t = term_v_23;
    y_31 = t;
    t = SSL_printnl(y_31, x_31);
    t = w_31;
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
ATerm k_6 (ATerm y_41, ATerm z_41, ATerm t)
{
  t = SSL_strcat(y_41, z_41);
  return(t);
}
ATerm debug_1_0 (ATerm b_72 (ATerm), ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL;
  c_32 = t;
  t = b_72(t);
  d_32 = t;
  t = term_h_15;
  e_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_32), d_32);
  f_32 = t;
  t = SSL_printnl(e_32, f_32);
  t = c_32;
  return(t);
}
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm u_32 (ATerm t)
  {
    ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
    r_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_32;
      }
    else
      {
        ATerm z_11 = NULL,g_12 = NULL,h_12 = NULL,h_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_32 = ATgetFirst((ATermList) t);
            t_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_32);
        z_11 = t;
        t = s_32;
        t = w_75(t);
        g_12 = t;
        t = t_32;
        t = u_32(t);
        h_12 = t;
        t = (ATerm) ATinsert(CheckATermList(h_12), g_12);
        h_3 = t;
        t = SSLsetAnnotations(h_3, z_11);
      }
    return(t);
  }
  t = u_32(t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_h_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_33 = NULL;
      c_33 = t;
      t = SSL_is_string(c_33);
      ;
      LocalPopChoice(k_28);
    }
  else
    {
      t = i_28;
      {
        ATerm l_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_5, t);
            ;
            LocalPopChoice(m_28);
          }
        else
          {
            t = l_28;
            {
              ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
              i_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_33 = ATgetArgument(t, 0);
                  t = j_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_33 = ATgetArgument(t, 0);
                      t = j_33;
                      {
                        ATerm n_28 = t;
                        int o_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(o_28);
                          }
                        else
                          {
                            t = n_28;
                            t = debug_1_0(j_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_33 = NULL,p_33 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_33 = ATgetArgument(t, 0);
                          k_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_33;
                      t = eval_config_0_0(t);
                      o_33 = t;
                      t = k_33;
                      t = eval_config_0_0(t);
                      p_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_33, p_33);
                      t = k_6(o_33, p_33, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm l_6 (ATerm y_46, ATerm z_46, ATerm t)
{
  t = SSL_table_get(y_46, z_46);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL;
  t_33 = t;
  t = term_t_25;
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_25, t_33);
  t = l_6(u_33, t_33, t);
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_33 = NULL,w_33 = NULL;
        t = eval_config_0_0(t);
        v_33 = t;
        t = term_t_25;
        w_33 = t;
        t = SSL_table_put(w_33, t_33, v_33);
        t = v_33;
        ;
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
      }
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL;
  t = term_r_28;
  z_33 = t;
  t = term_c_17;
  a_34 = t;
  t = term_s_28;
  t = o_6(z_33, a_34, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_t_28;
  return(t);
}
ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
  t = term_r_28;
  d_34 = t;
  t = term_c_17;
  e_34 = t;
  t = term_s_28;
  t = o_6(d_34, e_34, t);
  t = term_x_28;
  b_34 = t;
  t = term_c_17;
  c_34 = t;
  t = term_y_28;
  t = o_6(b_34, c_34, t);
  t = term_z_28;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_5, m_5, n_5, t);
      ;
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      t = Option_3_0(o_5, q_5, r_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,k_3 = NULL;
  k_34 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_34 = ATgetFirst((ATermList) t);
      h_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_34);
  f_34 = t;
  t = g_34;
  t = o_63(t);
  i_34 = t;
  t = h_34;
  t = p_63(t);
  j_34 = t;
  t = (ATerm) ATinsert(CheckATermList(j_34), i_34);
  k_3 = t;
  t = SSLsetAnnotations(k_3, f_34);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,w_34 = NULL,y_34 = NULL,a_35 = NULL,b_35 = NULL,v_3 = NULL;
  if(((r_34 != NULL) && (r_34 != t)))
    _fail(t);
  else
    r_34 = t;
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_29;
        t = q_93(t);
        ;
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
      }
    t = not_null(r_34);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((w_34 != NULL) && (w_34 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          w_34 = ATgetFirst((ATermList) t);
        if(((y_34 != NULL) && (y_34 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          y_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(r_34));
    if(((s_34 != NULL) && (s_34 != t)))
      _fail(t);
    else
      s_34 = t;
    t = term_j_26;
    if(((b_35 != NULL) && (b_35 != t)))
      _fail(t);
    else
      b_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_26, not_null(w_34));
    t = o_6(not_null(b_35), not_null(w_34), t);
    t = not_null(y_34);
    {
      ATerm l_35 (ATerm t)
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_29 = t;
            int m_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_35 = NULL;
                e_35 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_35;
                ;
                LocalPopChoice(m_29);
              }
            else
              {
                t = l_29;
                t = q_93(t);
                t = Cons_2_0(_id, l_35, t);
              }
            ;
            LocalPopChoice(k_29);
          }
        else
          {
            t = j_29;
            {
              ATerm h_35 = NULL,i_35 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_35 = ATgetFirst((ATermList) t);
                  i_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_35), (ATerm) ATmakeAppl(sym_Undefined_1, h_35));
            }
          }
        return(t);
      }
      t = l_35(t);
      if(((a_35 != NULL) && (a_35 != t)))
        _fail(t);
      else
        a_35 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(a_35)), (ATerm) ATmakeAppl(sym_Program_1, not_null(w_34)));
      if(((v_3 != NULL) && (v_3 != t)))
        _fail(t);
      else
        v_3 = t;
      t = SSLsetAnnotations(not_null(v_3), not_null(s_34));
    }
  }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm x_35 = NULL;
  x_35 = t;
  if(match_string(t, "--help"))
    {
      t = x_35;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_35;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_35;
        }
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm y_35 = NULL,b_36 = NULL;
  t = term_b_27;
  y_35 = t;
  t = term_c_17;
  b_36 = t;
  t = term_n_29;
  t = o_6(y_35, b_36, t);
  t = term_p_29;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm q_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
  if(((s_35 != NULL) && (s_35 != t)))
    _fail(t);
  else
    s_35 = t;
  t = term_x_25;
  if(((u_35 != NULL) && (u_35 != t)))
    _fail(t);
  else
    u_35 = t;
  t = term_y_25;
  if(((v_35 != NULL) && (v_35 != t)))
    _fail(t);
  else
    v_35 = t;
  t = (ATerm) ATempty;
  if(((w_35 != NULL) && (w_35 != t)))
    _fail(t);
  else
    w_35 = t;
  t = SSL_table_put(not_null(u_35), not_null(v_35), not_null(w_35));
  t = not_null(s_35);
  {
    ATerm s_5 (ATerm t)
    {
      ATerm u_29 = t;
      int v_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_93(t);
          ;
          LocalPopChoice(v_29);
        }
      else
        {
          t = u_29;
          {
            ATerm w_29 = t;
            int x_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_6, i_6, n_6, t);
                ;
                LocalPopChoice(x_29);
              }
            else
              {
                t = w_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_5, t);
    {
      ATerm y_29 = t;
      int z_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_36 = NULL;
          i_36 = t;
          {
            ATerm a_30 = t;
            int c_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_13 = NULL;
                t = i_36;
                {
                  ATerm d_30 = t;
                  int f_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_b_27;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(f_30);
                    }
                  else
                    {
                      t = d_30;
                      t = fetch_1_0(q_6, t);
                    }
                  t = i_36;
                  t = default_system_usage_0_0(t);
                  t = term_d_24;
                  h_13 = t;
                  t = SSL_exit(h_13);
                }
                ;
                LocalPopChoice(c_30);
              }
            else
              {
                t = a_30;
                {
                  ATerm s_13 = NULL;
                  t = term_r_28;
                  t = get_config_0_0(t);
                  t = i_36;
                  t = default_system_about_0_0(t);
                  t = term_d_24;
                  s_13 = t;
                  t = SSL_exit(s_13);
                }
              }
          }
          ;
          LocalPopChoice(z_29);
        }
      else
        {
          t = y_29;
          {
            ATerm g_30 = t;
            int j_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
                ATerm u_6 (ATerm t)
                {
                  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL,u_4 = NULL;
                  o_36 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      n_36 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_36);
                  m_36 = t;
                  t = n_36;
                  if(((q_35 != NULL) && (q_35 != t)))
                    _fail(t);
                  else
                    q_35 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, n_36);
                  u_4 = t;
                  t = SSLsetAnnotations(u_4, m_36);
                  return(t);
                }
                t = fetch_1_0(u_6, t);
                t = term_h_15;
                if(((k_36 != NULL) && (k_36 != t)))
                  _fail(t);
                else
                  k_36 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_35)), term_k_30);
                if(((l_36 != NULL) && (l_36 != t)))
                  _fail(t);
                else
                  l_36 = t;
                t = SSL_printnl(not_null(k_36), not_null(l_36));
                t = (ATerm) ATmakeAppl(sym__2, term_h_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_35)), term_k_30));
                t = default_system_usage_0_0(t);
                t = term_v_8;
                if(((j_36 != NULL) && (j_36 != t)))
                  _fail(t);
                else
                  j_36 = t;
                t = SSL_exit(not_null(j_36));
                ;
                LocalPopChoice(j_30);
              }
            else
              {
                t = g_30;
              }
          }
        }
      if(((r_35 != NULL) && (r_35 != t)))
        _fail(t);
      else
        r_35 = t;
      t = term_x_25;
      if(((t_35 != NULL) && (t_35 != t)))
        _fail(t);
      else
        t_35 = t;
      t = SSL_table_destroy(not_null(t_35));
      t = not_null(r_35);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
  t = parse_options_1_0(u_91, t);
  t_36 = t;
  t = term_l_30;
  w_36 = t;
  t = SSL_table_create(w_36);
  t = term_l_30;
  u_36 = t;
  t = term_o_30;
  v_36 = t;
  t = SSL_table_put(u_36, v_36, t_36);
  t = t_36;
  t = w_91(t);
  {
    ATerm u_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_91, t);
        ;
        LocalPopChoice(w_30);
      }
    else
      {
        t = u_30;
        {
          ATerm x_30 = t;
          int y_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_30);
            }
          else
            {
              t = x_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
      {
        ATerm b_31 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(c_31);
          }
        else
          {
            t = b_31;
            {
              ATerm d_31 = t;
              int e_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(c_7, e_7, j_7, t);
                  ;
                  LocalPopChoice(e_31);
                }
              else
                {
                  t = d_31;
                  {
                    ATerm f_31 = t;
                    int g_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(g_31);
                      }
                    else
                      {
                        t = f_31;
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
ATerm w_6 (ATerm t)
{
  t = xtc_io_1_0(k_7, t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL;
  t = term_h_31;
  c_37 = t;
  t = term_c_17;
  d_37 = t;
  t = term_i_31;
  t = o_6(c_37, d_37, t);
  t = term_j_31;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_37 = NULL,l_37 = NULL;
      l_37 = t;
      if(match_cons(t, sym_FILE_1))
        {
          k_37 = ATgetArgument(t, 0);
          {
            ATerm y_13 = NULL,x_4 = NULL;
            t = SSLgetAnnotations(l_37);
            y_13 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, k_37);
            x_4 = t;
            t = SSLsetAnnotations(x_4, y_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_37;
        }
      LocalPopChoice(m_31);
      t = xtc_transform_file_2_0(l_7, m_7, t);
    }
  else
    {
      t = l_31;
      t = xtc_transform_term_2_0(q_7, s_7, t);
    }
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_37 = NULL,u_37 = NULL;
        u_37 = t;
        if(match_cons(t, sym_FILE_1))
          {
            t_37 = ATgetArgument(t, 0);
            {
              ATerm g_14 = NULL,y_4 = NULL;
              t = SSLgetAnnotations(u_37);
              g_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_37);
              y_4 = t;
              t = SSLsetAnnotations(y_4, g_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_37;
          }
        LocalPopChoice(o_31);
        t = xtc_transform_file_2_0(t_7, u_7, t);
      }
    else
      {
        t = n_31;
        t = xtc_transform_term_2_0(v_7, z_7, t);
      }
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm m_37 = NULL;
  t = term_u_31;
  t = xtc_find_0_0(t);
  m_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_37), term_v_31);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm n_37 = NULL;
  t = term_u_31;
  t = xtc_find_0_0(t);
  n_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_37), term_v_31);
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_z_31;
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_z_31;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm astratego2text_0_0 (ATerm t)
{
  t = option_wrap_4_0(v_6, default_usage_0_0, _id, w_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = astratego2text_0_0(t);
  return(t);
}
