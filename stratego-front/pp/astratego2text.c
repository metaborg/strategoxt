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
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_k_29;
ATerm term_f_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_r_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_y_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_b_25;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_t_23;
ATerm term_j_23;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_c_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_b_21;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_d_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_g_18;
ATerm term_v_17;
ATerm term_q_17;
ATerm term_n_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_i_16;
ATerm term_z_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_n_14;
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
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_o_10;
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
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_n_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_m_4;
void init_constant_terms (void)
{
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_8, term_w_8, term_c_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_9, term_f_9, term_g_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_9, term_k_9, term_l_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_9, term_q_9, term_r_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_v_9, term_w_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_9, term_z_9, term_a_10);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_d_10, term_e_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_i_10, term_j_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_n_10, term_o_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_10, term_u_10, term_v_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_a_11, term_c_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_i_11, term_j_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_o_11, term_p_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_t_11, term_u_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_a_12, term_b_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_i_12, term_j_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_o_12, term_p_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_s_12, term_v_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_z_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_c_13, term_e_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_13, term_i_13, term_j_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_p_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_w_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_d_14, term_e_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_14, term_h_14, term_i_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_l_14, term_n_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_t_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_y_14);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_r_20, term_n_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym__2, term_r_20, term_t_20);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym__2, term_n_17, term_i_16);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym__2, term_g_18, term_j_24);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym__2, term_t_24, term_d_17);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_n_25);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym__2, term_i_28, term_d_17);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_v_28, term_d_17);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym__2, term_d_27, term_d_17);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_o_31, term_d_17);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm read_from_0_0 (ATerm);
ATerm y_5 (ATerm k_15, ATerm l_15, ATerm);
ATerm b_6 (ATerm c_60 (ATerm), ATerm e_159, ATerm s_15, ATerm);
ATerm a_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm);
ATerm c_6 (ATerm g_12, ATerm h_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm h_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm r_58 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm j_78 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm l_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm z_6 (ATerm p_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm e_6 (ATerm u_74 (ATerm), ATerm o_32, ATerm m_32, ATerm);
ATerm k_8 (ATerm q_7, ATerm);
ATerm s_8 (ATerm s_7, ATerm x_7, ATerm z_7, ATerm);
ATerm v_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm b_76 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm t_5 (ATerm c_68 (ATerm), ATerm d_68 (ATerm), ATerm n_22, ATerm m_22, ATerm);
ATerm u_5 (ATerm z_67 (ATerm), ATerm j_22, ATerm i_22, ATerm);
ATerm g_1 (ATerm);
ATerm v_5 (ATerm c_34, ATerm d_34, ATerm e_34, ATerm);
ATerm w_5 (ATerm f_76 (ATerm), ATerm m_34, ATerm l_34, ATerm);
ATerm f_6 (ATerm j_36, ATerm k_36, ATerm);
ATerm a_15 (ATerm m_14, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_5 (ATerm q_15, ATerm);
ATerm z_5 (ATerm r_36, ATerm s_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_17 (ATerm v_15, ATerm);
ATerm j_17 (ATerm b_16, ATerm g_16, ATerm h_16, ATerm);
ATerm k_17 (ATerm q_16, ATerm r_16, ATerm s_16, ATerm);
ATerm a_6 (ATerm);
ATerm i_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm u_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm z_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm q_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm h_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm m_2 (ATerm);
ATerm b_22 (ATerm x_20, ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm g_6 (ATerm m_12, ATerm n_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm h_6 (ATerm k_33, ATerm l_33, ATerm);
ATerm end_scope_1_0 (ATerm r_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_74 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm v_77 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm xtc_io_1_0 (ATerm w_77 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm a_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm p_6 (ATerm f_35, ATerm g_35, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm n_6 (ATerm f_33, ATerm g_33, ATerm e_33, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm i_6 (ATerm a_31, ATerm b_31, ATerm);
ATerm foldr_2_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_75 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm a_5 (ATerm);
ATerm need_help_1_0 (ATerm x_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm f_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm l_6 (ATerm v_29, ATerm w_29, ATerm);
ATerm debug_1_0 (ATerm a_60 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_63 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm m_6 (ATerm w_34, ATerm x_34, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm m_51 (ATerm), ATerm n_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm v_81 (ATerm), ATerm);
ATerm d_6 (ATerm);
ATerm k_6 (ATerm);
ATerm o_6 (ATerm);
ATerm r_6 (ATerm);
ATerm parse_options_1_0 (ATerm u_81 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm);
ATerm w_6 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm p_7 (ATerm);
ATerm r_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm y_7 (ATerm);
ATerm a_8 (ATerm);
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
      t = (ATerm) ATinsert(ATempty, term_b_8);
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_0, (ATerm) ATinsert(ATempty, term_b_8));
      t = f_6(s_0, u_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm y_5 (ATerm k_15, ATerm l_15, ATerm t)
{
  ATerm y_0 = NULL;
  t = SSL_write_term_to_stream_baf(k_15, l_15);
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_0);
  return(t);
}
ATerm b_6 (ATerm c_60 (ATerm), ATerm e_159, ATerm s_15, ATerm t)
{
  ATerm a_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_159, term_c_8);
  t = a_6(t);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, s_15);
  t = c_60(t);
  t = fclose_0_0(t);
  t = s_15;
  return(t);
}
ATerm a_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_8 = ATgetArgument(t, 0);
      if(match_cons(d_8, sym_Stream_1))
        {
          d_1 = ATgetArgument(d_8, 0);
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
  t = b_6(a_0, c_1, b_1, t);
  t = SSL_close_file(c_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(s_78, t_78, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm c_6 (ATerm g_12, ATerm h_12, ATerm t)
{
  t = SSL_execvp(g_12, h_12);
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
        ATerm e_0 = NULL,o_0 = NULL;
        t = SSL_int_to_string(p_2);
        e_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_8), e_0), term_e_8);
        o_0 = t;
        t = SSL_concat_strings(o_0);
      }
    }
  else
    {
      ATerm j_1 = NULL,k_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          p_2 = ATgetArgument(t, 0);
          q_2 = ATgetArgument(t, 1);
          r_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(q_2);
      j_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_2), term_n_8), j_1), term_g_8), p_2);
      k_1 = t;
      t = SSL_concat_strings(k_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm h_64 (ATerm), ATerm t)
{
  ATerm u_2 = NULL;
  ATerm b_0 (ATerm t)
  {
    t = h_64(t);
    if(((u_2 != NULL) && (u_2 != t)))
      _fail(t);
    else
      u_2 = t;
    return(t);
  }
  t = fetch_1_0(b_0, t);
  t = not_null(u_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm v_2 = NULL;
  v_2 = t;
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm q_8 = ATgetArgument(t, 0);
              if((v_2 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm r_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_14), term_u_14), term_p_14), term_j_14), term_f_14), term_x_13), term_t_13), term_k_13), term_f_13), term_a_13), term_w_12), term_q_12), term_k_12), term_d_12), term_v_11), term_q_11), term_l_11), term_e_11), term_w_10), term_r_10), term_l_10), term_f_10), term_b_10), term_x_9), term_s_9), term_m_9), term_h_9), term_d_9);
        t = fetch_elem_1_0(c_0, t);
        ;
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, v_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm e_3 = NULL,o_3 = NULL;
  e_3 = t;
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_15 = ATgetArgument(t, 0);
            o_3 = ATgetArgument(t, 1);
            {
              ATerm i_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(e_15);
        {
          ATerm j_15 = t;
          int m_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_1 = NULL,s_1 = NULL,t_1 = NULL;
              t = o_3;
              {
                ATerm n_15 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_15;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                q_1 = t;
                t = term_o_15;
                s_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, q_1), term_p_15);
                t_1 = t;
                t = SSL_printnl(s_1, t_1);
                t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(ATinsert(ATempty, q_1), term_p_15));
              }
              ;
              LocalPopChoice(m_15);
            }
          else
            {
              t = j_15;
              t = e_3;
            }
        }
      }
    else
      {
        t = d_15;
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
ATerm fork_and_wait_1_0 (ATerm r_58 (ATerm), ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL;
  z_3 = t;
  t = fork_0_0(t);
  y_3 = t;
  {
    ATerm r_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = z_3;
        t = r_58(t);
        ;
        LocalPopChoice(t_15);
      }
    else
      {
        t = r_15;
        t = SSL_waitpid(y_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_15 = ATgetArgument(t, 0);
            if(((ATgetType(u_15) != AT_INT) || (ATgetInt((ATermInt) u_15) != 0)))
              _fail(t);
            {
              ATerm x_15 = ATgetArgument(t, 1);
            }
            {
              ATerm y_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm j_78 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  c_4 = t;
  t = j_78(t);
  t = xtc_find_0_0(t);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_4, c_4);
  {
    ATerm f_0 (ATerm t)
    {
      ATerm d_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, b_4, c_4);
      t = c_6(b_4, c_4, t);
      t = term_z_15;
      d_4 = t;
      t = SSL_exit(d_4);
      return(t);
    }
    t = fork_and_wait_1_0(f_0, t);
    t = c_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm l_64 (ATerm), ATerm t)
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
          ATerm l_2 = NULL,x_2 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(h_5);
          l_2 = t;
          t = g_5;
          t = k_5(t);
          x_2 = t;
          t = (ATerm) ATinsert(CheckATermList(x_2), f_5);
          v_1 = t;
          t = SSLsetAnnotations(v_1, l_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_5;
        t = l_64(t);
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
      ATerm q_0 (ATerm t)
      {
        t = not_null(j_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_4 = ATgetFirst((ATermList) t);
          if(((j_4 != NULL) && (j_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_4;
      t = at_end_1_0(q_0, t);
    }
  return(t);
}
ATerm z_6 (ATerm p_5, ATerm t)
{
  ATerm q_6 = NULL;
  t = SSL_explode_term(p_5);
  if(match_cons(t, sym__2))
    {
      ATerm a_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL;
  u_6 = t;
  if(match_cons(t, sym__2))
    {
      s_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
      {
        ATerm c_16 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = t_6;
              return(t);
            }
            t = s_6;
            t = at_end_1_0(t_0, t);
            ;
            LocalPopChoice(d_16);
          }
        else
          {
            t = c_16;
            t = z_6(u_6, t);
          }
      }
    }
  else
    {
      t = z_6(u_6, t);
    }
  return(t);
}
ATerm e_6 (ATerm u_74 (ATerm), ATerm o_32, ATerm m_32, ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,e_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
  g_7 = t;
  t = u_74(t);
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_7, o_32, m_32);
  t = n_6(a_7, o_32, m_32, t);
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_7 = NULL;
        t = term_i_16;
        j_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_7, term_i_16);
        t = m_6(a_7, j_7, t);
        ;
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_7 = ATgetFirst((ATermList) t);
        e_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_i_16;
    h_7 = t;
    t = (ATerm) ATinsert(CheckATermList(e_7), (ATerm) ATinsert(CheckATermList(b_7), o_32));
    i_7 = t;
    t = SSL_table_put(a_7, h_7, i_7);
    t = g_7;
  }
  return(t);
}
ATerm k_8 (ATerm q_7, ATerm t)
{
  t = q_7;
  {
    ATerm m_16 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_16 = ATgetArgument(t, 0);
            ATerm p_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_16;
      }
    t = term_w_16;
    t = debug_1_0(v_0, t);
    t = (ATerm) ATmakeAppl(sym__2, q_7, term_c_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm s_8 (ATerm s_7, ATerm x_7, ATerm z_7, ATerm t)
{
  t = SSL_open_file(s_7, x_7);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_x_16;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
  h_8 = t;
  if(match_cons(t, sym__2))
    {
      i_8 = ATgetArgument(t, 0);
      j_8 = ATgetArgument(t, 1);
      {
        ATerm z_16 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_8(h_8, t);
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = z_16;
            t = s_8(i_8, j_8, h_8, t);
          }
      }
    }
  else
    {
      t = k_8(h_8, t);
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
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
  t = term_d_17;
  t = new_0_0(t);
  x_8 = t;
  t = term_e_17;
  y_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_8, term_e_17);
  t = l_6(x_8, y_8, t);
  z_8 = t;
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_b_8);
        j_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_8, (ATerm) ATinsert(ATempty, term_b_8));
        t = f_6(z_8, j_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        t = z_8;
      }
  }
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = term_n_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL;
  t = new_file_0_0(t);
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_9, term_c_8);
  t = open_file_0_0(t);
  t = term_d_17;
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_9, term_d_17);
  t = e_6(w_0, o_9, p_9, t);
  t = o_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL;
  p_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_3 = NULL,g_3 = NULL;
      t = p_10;
      t = xtc_new_file_0_0(t);
      d_3 = t;
      t = r_0(t);
      g_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_3, (ATerm) ATinsert(ATinsert(ATempty, d_3), term_q_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(d_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_3);
    }
  else
    {
      ATerm w_3 = NULL,x_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          q_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_10;
      t = xtc_new_file_0_0(t);
      w_3 = t;
      t = r_0(t);
      x_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_3), term_q_17), q_10), term_v_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(w_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_3);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_10 = NULL;
  ATerm x_0 (ATerm t)
  {
    ATerm x_10 = NULL,y_10 = NULL;
    x_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_10), x_10);
    t = m_6(not_null(t_10), x_10, t);
    y_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_10, y_10);
    return(t);
  }
  if(((t_10 != NULL) && (t_10 != t)))
    _fail(t);
  else
    t_10 = t;
  t = SSL_table_keys(t_10);
  t = map_1_0(x_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm b_11 = NULL;
  b_11 = t;
  {
    ATerm w_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL;
        t = term_g_18;
        t = get_config_0_0(t);
        h_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_11, term_h_14);
        t = geq_0_0(t);
        t = b_11;
        t = c_76(t);
        ;
        LocalPopChoice(z_17);
      }
    else
      {
        t = w_17;
        t = b_11;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_76 (ATerm), ATerm t)
{
  ATerm k_11 = NULL;
  k_11 = t;
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_11 = NULL;
        t = term_g_18;
        t = get_config_0_0(t);
        m_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_11, term_i_11);
        t = geq_0_0(t);
        t = k_11;
        t = b_76(t);
        ;
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        t = k_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm r_11 = NULL;
  r_11 = t;
  {
    ATerm q_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_11 = NULL;
        t = term_g_18;
        t = get_config_0_0(t);
        w_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_11, term_q_9);
        t = geq_0_0(t);
        t = r_11;
        t = d_76(t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = q_18;
        t = r_11;
      }
  }
  return(t);
}
ATerm t_5 (ATerm c_68 (ATerm), ATerm d_68 (ATerm), ATerm n_22, ATerm m_22, ATerm t)
{
  t = d_68(t);
  {
    ATerm z_0 (ATerm t)
    {
      ATerm z_11 = NULL;
      z_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_22, z_11);
      t = c_68(t);
      return(t);
    }
    t = fetch_1_0(z_0, t);
    t = m_22;
  }
  return(t);
}
ATerm u_5 (ATerm z_67 (ATerm), ATerm j_22, ATerm i_22, ATerm t)
{
  ATerm h_13 (ATerm t)
  {
    ATerm t_12 = NULL,u_12 = NULL,d_13 = NULL;
    t_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_12 = ATgetFirst((ATermList) t);
            d_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_18 = t;
          int x_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_12;
              {
                ATerm f_1 (ATerm t)
                {
                  t = i_22;
                  return(t);
                }
                t = t_5(z_67, f_1, u_12, d_13, t);
                t = h_13(t);
              }
              ;
              LocalPopChoice(x_18);
            }
          else
            {
              t = v_18;
              {
                ATerm p_4 = NULL,s_4 = NULL,y_1 = NULL;
                t = SSLgetAnnotations(t_12);
                p_4 = t;
                t = d_13;
                t = h_13(t);
                s_4 = t;
                t = (ATerm) ATinsert(CheckATermList(s_4), u_12);
                y_1 = t;
                t = SSLsetAnnotations(y_1, p_4);
              }
            }
        }
      }
    return(t);
  }
  t = j_22;
  t = h_13(t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm y_13 = NULL;
  if(match_cons(t, sym__2))
    {
      y_13 = ATgetArgument(t, 0);
      if((y_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm v_5 (ATerm c_34, ATerm d_34, ATerm e_34, ATerm t)
{
  ATerm o_13 = NULL,r_13 = NULL,s_13 = NULL;
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_19 = ATgetArgument(t, 0);
            ATerm g_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
        t = m_6(c_34, d_34, t);
        ;
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = (ATerm) ATempty;
      }
    s_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_13, e_34);
    t = u_5(g_1, s_13, e_34, t);
    r_13 = t;
    t = SSL_table_put(c_34, d_34, r_13);
    t = o_13;
  }
  return(t);
}
ATerm w_5 (ATerm f_76 (ATerm), ATerm m_34, ATerm l_34, ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm z_13 = NULL,a_14 = NULL;
    if(match_cons(t, sym__2))
      {
        z_13 = ATgetArgument(t, 0);
        a_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_34, z_13, a_14);
    t = f_76(t);
    return(t);
  }
  t = l_34;
  t = map_1_0(h_1, t);
  return(t);
}
ATerm f_6 (ATerm j_36, ATerm k_36, ATerm t)
{
  t = SSL_access(j_36, k_36);
  return(t);
}
ATerm a_15 (ATerm m_14, ATerm t)
{
  t = SSL_fclose(m_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_14 = NULL,v_14 = NULL;
  v_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_14 = ATgetArgument(t, 0);
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_14);
            ;
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            t = a_15(v_14, t);
          }
      }
    }
  else
    {
      t = a_15(v_14, t);
    }
  return(t);
}
ATerm x_5 (ATerm q_15, ATerm t)
{
  t = SSL_read_term_from_stream(q_15);
  return(t);
}
ATerm z_5 (ATerm r_36, ATerm s_36, ATerm t)
{
  ATerm b_15 = NULL;
  t = SSL_fopen(r_36, s_36);
  b_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_15);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_15 = NULL;
  t = SSL_stdin_stream();
  c_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_15);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_15 = NULL;
  t = SSL_stdout_stream();
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_15 = NULL;
  t = SSL_stderr_stream();
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_15);
  return(t);
}
ATerm i_17 (ATerm v_15, ATerm t)
{
  ATerm w_15 = NULL;
  t = SSL_explode_term(v_15);
  if(match_cons(t, sym__2))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_19 = ATgetArgument(t, 1);
        if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
          {
            w_15 = ATgetFirst((ATermList) k_19);
            {
              ATerm l_19 = (ATerm) ATgetNext((ATermList) k_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm j_17 (ATerm b_16, ATerm g_16, ATerm h_16, ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,o_16 = NULL,a_2 = NULL;
  t = SSLgetAnnotations(h_16);
  l_16 = t;
  t = b_16;
  if(match_cons(t, sym_Path_1))
    {
      o_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_16, g_16);
  a_2 = t;
  t = SSLsetAnnotations(a_2, l_16);
  if(match_cons(t, sym__2))
    {
      j_16 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(j_16, k_16, t);
  return(t);
}
ATerm k_17 (ATerm q_16, ATerm r_16, ATerm s_16, ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,y_16 = NULL,b_2 = NULL;
  t = SSLgetAnnotations(s_16);
  v_16 = t;
  t = SSL_is_string(q_16);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_16, r_16);
  b_2 = t;
  t = SSLsetAnnotations(b_2, v_16);
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(t_16, u_16, t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,h_17 = NULL;
  a_17 = t;
  if(match_cons(t, sym__2))
    {
      b_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
      {
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_17(a_17, t);
            ;
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
            {
              ATerm q_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_17(b_17, h_17, a_17, t);
                  ;
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = q_19;
                  t = k_17(b_17, h_17, a_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_17(a_17, t);
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,o_17 = NULL;
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_17 = NULL;
      p_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_17, term_w_19);
      t = a_6(t);
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      t = debug_1_0(i_1, t);
      _fail(t);
    }
  m_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(o_17, t);
  l_17 = t;
  t = m_17;
  t = fclose_0_0(t);
  t = l_17;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_17 = NULL,s_17 = NULL;
      r_17 = t;
      t = (ATerm) ATinsert(ATempty, term_d_20);
      s_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_17, (ATerm) ATinsert(ATempty, term_d_20));
      t = f_6(r_17, s_17, t);
      LocalPopChoice(b_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = a_20;
      {
        ATerm e_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_20 = t;
            if((PushChoice() == 0))
              {
                ATerm t_17 = NULL,u_17 = NULL;
                t_17 = t;
                t = (ATerm) ATinsert(ATempty, term_b_8);
                u_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_17, (ATerm) ATinsert(ATempty, term_b_8));
                t = f_6(t_17, u_17, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_20;
              }
            t = debug_1_0(l_1, t);
            ;
            LocalPopChoice(g_20);
          }
        else
          {
            t = e_20;
            t = debug_1_0(m_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_k_20;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  n_18 = t;
  t = term_o_15;
  o_18 = t;
  t = (ATerm) ATinsert(ATempty, term_n_20);
  p_18 = t;
  t = SSL_printnl(o_18, p_18);
  t = n_18;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,u_18 = NULL;
  if(match_cons(t, sym__3))
    {
      r_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
      u_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_5(r_18, s_18, u_18, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm w_18 = NULL,y_18 = NULL,z_18 = NULL;
  w_18 = t;
  t = term_o_15;
  y_18 = t;
  t = (ATerm) ATinsert(ATempty, term_p_20);
  z_18 = t;
  t = SSL_printnl(y_18, z_18);
  t = w_18;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
  a_19 = t;
  t = term_o_15;
  b_19 = t;
  t = (ATerm) ATinsert(ATempty, term_n_20);
  c_19 = t;
  t = SSL_printnl(b_19, c_19);
  t = a_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,h_18 = NULL,k_18 = NULL;
  x_17 = t;
  t = if_verbose5_1_0(n_1, t);
  {
    ATerm q_20 = t;
    if((PushChoice() == 0))
      {
        ATerm l_18 = NULL,m_18 = NULL;
        t = term_r_20;
        l_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, x_17);
        m_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATmakeAppl(sym_Imported_1, x_17));
        t = m_6(l_18, m_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_20;
      }
    a_18 = t;
    t = term_r_20;
    f_18 = t;
    t = term_t_20;
    h_18 = t;
    t = (ATerm) ATinsert(ATempty, x_17);
    k_18 = t;
    t = SSL_table_put(f_18, h_18, k_18);
    t = a_18;
    t = if_verbose4_1_0(p_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(u_1, t);
    y_17 = t;
    t = term_r_20;
    e_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_20, y_17);
    t = w_5(w_1, e_18, y_17, t);
    t = if_verbose6_1_0(x_1, t);
    t = term_r_20;
    b_18 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, x_17);
    c_18 = t;
    t = (ATerm) ATempty;
    d_18 = t;
    t = SSL_table_put(b_18, c_18, d_18);
    t = (ATerm) ATmakeAppl(sym__3, term_r_20, (ATerm)ATmakeAppl(sym_Imported_1, x_17), (ATerm) ATempty);
    t = if_verbose4_1_0(z_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_71 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,r_19 = NULL;
  o_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_19 = ATgetFirst((ATermList) t);
          r_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 = NULL,x_6 = NULL,y_6 = NULL,g_2 = NULL;
            t = SSLgetAnnotations(o_19);
            j_6 = t;
            t = p_19;
            t = r_71(t);
            x_6 = t;
            t = r_19;
            t = filter_1_0(r_71, t);
            y_6 = t;
            t = (ATerm) ATinsert(CheckATermList(y_6), x_6);
            g_2 = t;
            t = SSLsetAnnotations(g_2, j_6);
            ;
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
            t = r_19;
            t = filter_1_0(r_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm q_73 (ATerm), ATerm t)
{
  ATerm z_19 (ATerm t)
  {
    ATerm w_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_73(t);
        t = z_19(t);
        ;
        LocalPopChoice(y_20);
      }
    else
      {
        t = w_20;
      }
    return(t);
  }
  t = z_19(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_20 = NULL;
            t = term_k_21;
            c_20 = t;
            t = SSL_getenv(c_20);
            ;
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
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
  t = term_l_21;
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm o_20 = NULL,s_20 = NULL;
  t = term_r_20;
  o_20 = t;
  t = term_n_21;
  s_20 = t;
  t = term_q_21;
  t = m_6(o_20, s_20, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm r_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_21;
      }
  }
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm f_20 = NULL;
  t = if_verbose5_1_0(c_2, t);
  f_20 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_20 = NULL,j_20 = NULL;
        t = term_r_20;
        h_20 = t;
        t = term_t_20;
        j_20 = t;
        t = term_v_21;
        t = m_6(h_20, j_20, t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        {
          ATerm m_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          m_20 = t;
          t = repeat_1_0(e_2, t);
          t = m_20;
        }
      }
    t = f_20;
    t = if_verbose5_1_0(f_2, t);
  }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm b_22 (ATerm x_20, ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
  t = term_r_20;
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_20);
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATmakeAppl(sym_Tool_1, x_20));
  t = m_6(d_21, e_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_21 = ATgetFirst((ATermList) t);
      if(match_cons(x_21, sym__2))
        {
          ATerm z_21 = ATgetArgument(x_21, 0);
          c_21 = ATgetArgument(x_21, 1);
        }
      else
        _fail(t);
      {
        ATerm y_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_21;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_r_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(a_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
      t = if_verbose5_1_0(j_2, t);
      t = xtc_load_0_0(t);
      h_21 = t;
      if(match_cons(t, sym__2))
        {
          f_21 = ATgetArgument(t, 0);
          g_21 = ATgetArgument(t, 1);
          {
            ATerm f_22 = t;
            int g_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_21 = NULL,o_21 = NULL,p_21 = NULL;
                t = term_r_20;
                o_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, f_21);
                p_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATmakeAppl(sym_Tool_1, f_21));
                t = m_6(o_21, p_21, t);
                {
                  ATerm n_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((g_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((m_21 != NULL) && (m_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          m_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(n_2, t);
                  t = not_null(m_21);
                }
                ;
                LocalPopChoice(g_22);
              }
            else
              {
                t = f_22;
                t = b_22(h_21, t);
              }
          }
        }
      else
        {
          t = b_22(h_21, t);
        }
      t = if_verbose5_1_0(w_2, t);
      ;
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm a_22 = NULL,n_7 = NULL,o_7 = NULL;
        a_22 = t;
        t = term_o_15;
        n_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_22), a_22), term_h_22);
        o_7 = t;
        t = SSL_printnl(n_7, o_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_22), a_22), term_h_22);
        t = if_verbose5_1_0(z_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm g_6 (ATerm m_12, ATerm n_12, ATerm t)
{
  t = SSL_copy(m_12, n_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL;
  f_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_7 = NULL;
        t = f_23;
        t = n_0(t);
        w_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = w_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = w_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, g_23, w_7);
        t = g_6(g_23, w_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, g_23);
        ;
        LocalPopChoice(o_22);
      }
    else
      {
        t = l_22;
        {
          ATerm p_22 = t;
          int q_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_8 = NULL;
              t = f_23;
              t = n_0(t);
              l_8 = t;
              {
                ATerm r_22 = t;
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
                            if((g_23 != t))
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
                    t = r_22;
                  }
                t = (ATerm) ATmakeAppl(sym__2, g_23, l_8);
                t = g_6(g_23, l_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, g_23);
              }
              ;
              LocalPopChoice(q_22);
            }
          else
            {
              t = p_22;
              t = f_23;
              t = n_0(t);
              if((g_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_23);
            }
        }
      }
  }
  return(t);
}
ATerm h_6 (ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL;
  l_23 = t;
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
        t = m_6(k_33, l_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_22 = ATgetFirst((ATermList) t);
            k_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_22);
        t = SSL_table_put(k_33, l_33, k_23);
        t = (ATerm) ATmakeAppl(sym__3, k_33, l_33, k_23);
      }
    else
      {
        t = s_22;
        t = SSL_table_remove(k_33, l_33);
        t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
      }
    t = l_23;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_74 (ATerm), ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,q_23 = NULL,r_23 = NULL,u_23 = NULL;
  r_23 = t;
  t = r_74(t);
  q_23 = t;
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL;
        t = term_i_16;
        v_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_23, term_i_16);
        t = m_6(q_23, v_23, t);
        ;
        LocalPopChoice(w_22);
      }
    else
      {
        t = v_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_23 = ATgetFirst((ATermList) t);
        m_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_i_16;
    u_23 = t;
    t = SSL_table_put(q_23, u_23, m_23);
    t = n_23;
    {
      ATerm b_3 (ATerm t)
      {
        ATerm w_23 = NULL;
        w_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_23, w_23);
        t = h_6(q_23, w_23, t);
        return(t);
      }
      t = map_1_0(b_3, t);
      t = r_23;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_75(t);
      t = n_75(t);
      ;
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      t = n_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_74 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
  z_23 = t;
  t = q_74(t);
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_23, term_i_16);
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_23 = ATgetArgument(t, 0);
            ATerm c_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_16;
        g_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_23, term_i_16);
        t = m_6(y_23, g_24, t);
        ;
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        t = (ATerm) ATempty;
      }
    a_24 = t;
    t = term_i_16;
    b_24 = t;
    t = (ATerm) ATinsert(CheckATermList(a_24), (ATerm) ATempty);
    c_24 = t;
    t = SSL_table_put(y_23, b_24, c_24);
    t = z_23;
  }
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_n_17;
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm s_24 = NULL;
  s_24 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(s_24);
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        t = s_24;
      }
  }
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_n_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  ATerm k_24 = NULL;
  ATerm f_3 (ATerm t)
  {
    ATerm l_24 = NULL;
    l_24 = t;
    {
      ATerm h_23 = t;
      int i_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_24 = NULL,n_24 = NULL;
          t = term_n_17;
          m_24 = t;
          t = term_i_16;
          n_24 = t;
          t = term_j_23;
          t = m_6(m_24, n_24, t);
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
          if(((k_24 != NULL) && (k_24 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            k_24 = ATgetFirst((ATermList) t);
          {
            ATerm o_23 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = k_24;
      t = map_1_0(h_3, t);
      t = l_24;
      t = end_scope_1_0(j_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(c_3, t);
  t = restore_always_2_0(v_77, f_3, t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm p_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = p_23;
      t = term_t_23;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_77 (ATerm), ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm x_23 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL;
        t = term_v_17;
        t = get_config_0_0(t);
        v_24 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_24);
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = x_23;
        t = term_m_4;
      }
    t = w_77(t);
    t = copy_to_1_0(m_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(k_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,c_25 = NULL;
  w_24 = t;
  t = term_d_17;
  t = whoami_0_0(t);
  y_24 = t;
  t = term_o_15;
  a_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_24), y_24), term_e_24);
  c_25 = t;
  t = SSL_printnl(a_25, c_25);
  t = term_w_8;
  z_24 = t;
  t = SSL_exit(z_24);
  t = w_24;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm f_25 = NULL;
  f_25 = t;
  if(match_string(t, "-k"))
    {
      t = f_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_25;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm g_25 = NULL,i_25 = NULL,j_25 = NULL;
  g_25 = t;
  t = SSL_string_to_int(g_25);
  i_25 = t;
  t = term_h_24;
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_24, i_25);
  t = p_6(j_25, i_25, t);
  t = g_25;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_i_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, p_3, q_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  if(match_string(t, "-S"))
    {
      t = r_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_25;
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL;
  t = term_g_18;
  s_25 = t;
  t = term_j_24;
  t_25 = t;
  t = term_o_24;
  t = p_6(s_25, t_25, t);
  t = term_p_24;
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
ATerm v_3 (ATerm t)
{
  ATerm u_25 = NULL,w_25 = NULL,x_25 = NULL;
  u_25 = t;
  t = SSL_string_to_int(u_25);
  w_25 = t;
  t = term_g_18;
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_18, w_25);
  t = p_6(x_25, w_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_25);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  t = term_t_24;
  y_25 = t;
  t = term_d_17;
  z_25 = t;
  t = term_u_24;
  t = p_6(y_25, z_25, t);
  t = term_x_24;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_b_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_3, s_3, t_3, t);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm h_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_3, v_3, a_4, t);
            ;
            LocalPopChoice(k_25);
          }
        else
          {
            t = h_25;
            t = Option_3_0(e_4, f_4, g_4, t);
          }
      }
    }
  return(t);
}
ATerm p_6 (ATerm f_35, ATerm g_35, ATerm t)
{
  ATerm b_26 = NULL;
  t = term_l_25;
  b_26 = t;
  t = SSL_table_put(b_26, f_35, g_35);
  t = (ATerm) ATmakeAppl(sym__3, term_l_25, f_35, g_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
      t = term_d_17;
      t = h_0(t);
      i_26 = t;
      t = term_m_25;
      j_26 = t;
      t = term_n_25;
      k_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_25, term_n_25, i_26);
      t = n_6(j_26, k_26, i_26, t);
      _fail(t);
    }
  else
    {
      ATerm o_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_26 = ATgetFirst((ATermList) t);
          h_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_26;
      t = d_0(t);
      t = term_d_17;
      t = g_0(t);
      o_26 = t;
      t = (ATerm) ATinsert(CheckATermList(h_26), o_26);
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm q_26 = NULL;
  q_26 = t;
  if(match_string(t, "-o"))
    {
      t = q_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_26;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  r_26 = t;
  t = term_q_17;
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, r_26);
  t = p_6(s_26, r_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_26);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, l_4, n_4, t);
  return(t);
}
ATerm n_6 (ATerm f_33, ATerm g_33, ATerm e_33, ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_33, g_33);
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_25 = ATgetArgument(t, 0);
            ATerm a_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_33, g_33);
        t = m_6(f_33, g_33, t);
        ;
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        t = (ATerm) ATempty;
      }
    v_26 = t;
    t = (ATerm) ATinsert(CheckATermList(v_26), e_33);
    w_26 = t;
    t = SSL_table_put(f_33, g_33, w_26);
    t = u_26;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm k_27 = NULL,n_27 = NULL,q_27 = NULL,t_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
      t = term_d_17;
      t = m_0(t);
      u_27 = t;
      t = term_m_25;
      v_27 = t;
      t = term_n_25;
      w_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_25, term_n_25, u_27);
      t = n_6(v_27, w_27, u_27, t);
      _fail(t);
    }
  else
    {
      ATerm f_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_27 = ATgetFirst((ATermList) t);
          n_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_27 = ATgetFirst((ATermList) t);
          t_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_27;
      t = k_0(t);
      t = q_27;
      t = l_0(t);
      f_28 = t;
      t = (ATerm) ATinsert(CheckATermList(t_27), f_28);
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm k_28 = NULL;
  k_28 = t;
  if(match_string(t, "-i"))
    {
      t = k_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_28;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL;
  l_28 = t;
  t = term_v_17;
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, l_28);
  t = p_6(m_28, l_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_28);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, q_4, r_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_17;
  t = whoami_0_0(t);
  n_28 = t;
  t = term_o_15;
  p_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_26), n_28);
  q_28 = t;
  t = SSL_printnl(p_28, q_28);
  t = term_w_8;
  o_28 = t;
  t = SSL_exit(o_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm i_6 (ATerm a_31, ATerm b_31, ATerm t)
{
  ATerm f_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_31, b_31);
      ;
      LocalPopChoice(l_26);
    }
  else
    {
      t = f_26;
      t = SSL_addr(a_31, b_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
  s_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_28;
      t = n_70(t);
    }
  else
    {
      ATerm x_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_28 = ATgetFirst((ATermList) t);
          u_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_28;
      t = foldr_2_0(n_70, o_70, t);
      x_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_28, x_28);
      t = o_70(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_j_24;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  if(match_cons(t, sym__2))
    {
      a_9 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(a_9, b_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_29 = NULL,t_8 = NULL,u_8 = NULL;
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
  t = foldr_2_0(u_4, v_4, t);
  a_29 = t;
  t = SSL_TicksToSeconds(a_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
  l_29 = t;
  if(match_cons(t, sym__2))
    {
      m_29 = ATgetArgument(t, 0);
      n_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_29;
        if((m_29 != t))
          {
            _fail(t);
          }
        t = l_29;
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = n_26;
        t = (ATerm) ATmakeAppl(sym__2, m_29, n_29);
        {
          ATerm t_26 = t;
          int x_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_29, n_29);
              ;
              LocalPopChoice(x_26);
            }
          else
            {
              t = t_26;
              t = SSL_gtr(m_29, n_29);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_29, n_29);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_75 (ATerm), ATerm t)
{
  ATerm r_29 = NULL;
  r_29 = t;
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_29 = NULL;
        t = term_g_18;
        t = get_config_0_0(t);
        t_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_29, term_w_8);
        t = geq_0_0(t);
        t = r_29;
        t = y_75(t);
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = r_29;
      }
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm y_29 = NULL,a_30 = NULL,d_30 = NULL,f_30 = NULL;
  t = run_time_0_0(t);
  y_29 = t;
  t = term_d_17;
  t = whoami_0_0(t);
  a_30 = t;
  t = term_o_15;
  d_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_27), y_29), term_g_8), a_30);
  f_30 = t;
  t = SSL_printnl(d_30, f_30);
  t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_27), y_29), term_g_8), a_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_24;
  g_30 = t;
  t = SSL_exit(g_30);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL;
  p_30 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_30;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_30 = ATgetArgument(t, 0);
          {
            ATerm t_9 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(p_30);
            t_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_30);
            i_2 = t;
            t = SSLsetAnnotations(i_2, t_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_30;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_27);
    }
  else
    {
      t = b_27;
      t = fetch_1_0(a_5, t);
    }
  t = x_79(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_30 = ATgetFirst((ATermList) t);
      t_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_30 = NULL,y_30 = NULL;
        ATerm b_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_30)), not_null(y_30));
          return(t);
        }
        t = t_30;
        t = j_0(t);
        if(((x_30 != NULL) && (x_30 != t)))
          _fail(t);
        else
          x_30 = t;
        t = s_30;
        t = i_0(t);
        if(((y_30 != NULL) && (y_30 != t)))
          _fail(t);
        else
          y_30 = t;
        t = t_30;
        t = reverse_acc_2_0(i_0, b_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_17;
      t = j_0(t);
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,k_2 = NULL;
  g_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_31);
  e_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_31);
  k_2 = t;
  t = SSLsetAnnotations(k_2, e_31);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm i_31 = NULL;
  i_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_31), term_e_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL;
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      t = fetch_1_0(c_5, t);
    }
  t = term_h_27;
  t = echo_0_0(t);
  t = term_m_25;
  c_31 = t;
  t = term_n_25;
  d_31 = t;
  t = term_i_27;
  t = m_6(c_31, d_31, t);
  t = reverse_acc_2_0(_id, d_5, t);
  t = map_1_0(e_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_64 (ATerm), ATerm t)
{
  ATerm f_32 (ATerm t)
  {
    ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
    c_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_32 = ATgetFirst((ATermList) t);
        e_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_27 = t;
      int l_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_10 = NULL,k_10 = NULL,s_2 = NULL;
          t = SSLgetAnnotations(c_32);
          h_10 = t;
          t = d_32;
          t = f_64(t);
          k_10 = t;
          t = (ATerm) ATinsert(CheckATermList(e_32), k_10);
          s_2 = t;
          t = SSLsetAnnotations(s_2, h_10);
          ;
          LocalPopChoice(l_27);
        }
      else
        {
          t = j_27;
          {
            ATerm d_11 = NULL,g_11 = NULL,t_2 = NULL;
            t = SSLgetAnnotations(c_32);
            d_11 = t;
            t = e_32;
            t = f_32(t);
            g_11 = t;
            t = (ATerm) ATinsert(CheckATermList(g_11), d_32);
            t_2 = t;
            t = SSLsetAnnotations(t_2, d_11);
          }
        }
    }
    return(t);
  }
  t = f_32(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  u_32 = t;
  {
    ATerm m_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_27 = ATgetFirst((ATermList) t);
                ATerm r_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_32;
          }
        ;
        LocalPopChoice(o_27);
      }
    else
      {
        t = m_27;
        t = (ATerm) ATinsert(ATempty, u_32);
      }
    v_32 = t;
    t = term_t_23;
    w_32 = t;
    t = SSL_printnl(w_32, v_32);
    t = u_32;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm l_6 (ATerm v_29, ATerm w_29, ATerm t)
{
  t = SSL_strcat(v_29, w_29);
  return(t);
}
ATerm debug_1_0 (ATerm a_60 (ATerm), ATerm t)
{
  ATerm i_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL;
  i_33 = t;
  t = a_60(t);
  m_33 = t;
  t = term_o_15;
  n_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_33), m_33);
  o_33 = t;
  t = SSL_printnl(n_33, o_33);
  t = i_33;
  return(t);
}
ATerm map_1_0 (ATerm v_63 (ATerm), ATerm t)
{
  ATerm i_34 (ATerm t)
  {
    ATerm a_34 = NULL,b_34 = NULL,h_34 = NULL;
    a_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_34;
      }
    else
      {
        ATerm y_11 = NULL,c_12 = NULL,e_12 = NULL,i_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_34 = ATgetFirst((ATermList) t);
            h_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_34);
        y_11 = t;
        t = b_34;
        t = v_63(t);
        c_12 = t;
        t = h_34;
        t = i_34(t);
        e_12 = t;
        t = (ATerm) ATinsert(CheckATermList(e_12), c_12);
        i_3 = t;
        t = SSLsetAnnotations(i_3, y_11);
      }
    return(t);
  }
  t = i_34(t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm s_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(x_27);
    }
  else
    {
      t = s_27;
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_y_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_34 = NULL;
      u_34 = t;
      t = SSL_is_string(u_34);
      ;
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      {
        ATerm b_28 = t;
        int c_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_5, t);
            ;
            LocalPopChoice(c_28);
          }
        else
          {
            t = b_28;
            {
              ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
              c_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_35 = ATgetArgument(t, 0);
                  t = d_35;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_35 = ATgetArgument(t, 0);
                      t = d_35;
                      {
                        ATerm d_28 = t;
                        int e_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(e_28);
                          }
                        else
                          {
                            t = d_28;
                            t = debug_1_0(j_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_35 = NULL,l_35 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_35 = ATgetArgument(t, 0);
                          e_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_35;
                      t = eval_config_0_0(t);
                      k_35 = t;
                      t = e_35;
                      t = eval_config_0_0(t);
                      l_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_35, l_35);
                      t = l_6(k_35, l_35, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm m_6 (ATerm w_34, ATerm x_34, ATerm t)
{
  t = SSL_table_get(w_34, x_34);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL;
  u_35 = t;
  t = term_l_25;
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_25, u_35);
  t = m_6(v_35, u_35, t);
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_35 = NULL,a_36 = NULL;
        t = eval_config_0_0(t);
        z_35 = t;
        t = term_l_25;
        a_36 = t;
        t = SSL_table_put(a_36, u_35, z_35);
        t = z_35;
        ;
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
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
  ATerm d_36 = NULL,e_36 = NULL;
  t = term_i_28;
  d_36 = t;
  t = term_d_17;
  e_36 = t;
  t = term_j_28;
  t = p_6(d_36, e_36, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_r_28;
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
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  t = term_i_28;
  h_36 = t;
  t = term_d_17;
  i_36 = t;
  t = term_j_28;
  t = p_6(h_36, i_36, t);
  t = term_v_28;
  f_36 = t;
  t = term_d_17;
  g_36 = t;
  t = term_w_28;
  t = p_6(f_36, g_36, t);
  t = term_y_28;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_5, m_5, n_5, t);
      ;
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
      t = Option_3_0(o_5, q_5, r_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_51 (ATerm), ATerm n_51 (ATerm), ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,l_3 = NULL;
  q_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_36 = ATgetFirst((ATermList) t);
      n_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_36);
  l_36 = t;
  t = m_36;
  t = m_51(t);
  o_36 = t;
  t = n_36;
  t = n_51(t);
  p_36 = t;
  t = (ATerm) ATinsert(CheckATermList(p_36), o_36);
  l_3 = t;
  t = SSLsetAnnotations(l_3, l_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,e_37 = NULL,f_37 = NULL,t_4 = NULL;
  z_36 = t;
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_29;
        t = v_81(t);
        ;
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
      }
    t = z_36;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_37 = ATgetFirst((ATermList) t);
        c_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_36);
    a_37 = t;
    t = term_e_26;
    f_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_26, b_37);
    t = p_6(f_37, b_37, t);
    t = c_37;
    {
      ATerm z_37 (ATerm t)
      {
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_29 = t;
            int j_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_37 = NULL;
                o_37 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = o_37;
                ;
                LocalPopChoice(j_29);
              }
            else
              {
                t = i_29;
                t = v_81(t);
                t = Cons_2_0(_id, z_37, t);
              }
            ;
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
            {
              ATerm t_37 = NULL,u_37 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_37 = ATgetFirst((ATermList) t);
                  u_37 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(u_37), (ATerm) ATmakeAppl(sym_Undefined_1, t_37));
            }
          }
        return(t);
      }
      t = z_37(t);
      e_37 = t;
      t = (ATerm) ATinsert(CheckATermList(e_37), (ATerm) ATmakeAppl(sym_Program_1, b_37));
      t_4 = t;
      t = SSLsetAnnotations(t_4, a_37);
    }
  }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm p_38 = NULL;
  p_38 = t;
  if(match_string(t, "--help"))
    {
      t = p_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_38;
        }
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL;
  t = term_d_27;
  q_38 = t;
  t = term_d_17;
  r_38 = t;
  t = term_k_29;
  t = p_6(q_38, r_38, t);
  t = term_o_29;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_p_29;
  return(t);
}
ATerm r_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  ATerm f_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL;
  k_38 = t;
  t = term_m_25;
  m_38 = t;
  t = term_n_25;
  n_38 = t;
  t = (ATerm) ATempty;
  o_38 = t;
  t = SSL_table_put(m_38, n_38, o_38);
  t = k_38;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm q_29 = t;
      int s_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_81(t);
          ;
          LocalPopChoice(s_29);
        }
      else
        {
          t = q_29;
          {
            ATerm u_29 = t;
            int x_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_6, k_6, o_6, t);
                ;
                LocalPopChoice(x_29);
              }
            else
              {
                t = u_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_5, t);
    {
      ATerm z_29 = t;
      int b_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_39 = NULL;
          d_39 = t;
          {
            ATerm c_30 = t;
            int e_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_13 = NULL;
                t = d_39;
                {
                  ATerm h_30 = t;
                  int i_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_d_27;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(i_30);
                    }
                  else
                    {
                      t = h_30;
                      t = fetch_1_0(r_6, t);
                    }
                  t = d_39;
                  t = default_system_usage_0_0(t);
                  t = term_j_24;
                  l_13 = t;
                  t = SSL_exit(l_13);
                }
                ;
                LocalPopChoice(e_30);
              }
            else
              {
                t = c_30;
                {
                  ATerm q_13 = NULL;
                  t = term_i_28;
                  t = get_config_0_0(t);
                  t = d_39;
                  t = default_system_about_0_0(t);
                  t = term_j_24;
                  q_13 = t;
                  t = SSL_exit(q_13);
                }
              }
          }
          ;
          LocalPopChoice(b_30);
        }
      else
        {
          t = z_29;
          {
            ATerm j_30 = t;
            int k_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
                ATerm v_6 (ATerm t)
                {
                  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,w_4 = NULL;
                  k_39 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      j_39 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_39);
                  i_39 = t;
                  t = j_39;
                  if(((f_38 != NULL) && (f_38 != t)))
                    _fail(t);
                  else
                    f_38 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, j_39);
                  w_4 = t;
                  t = SSLsetAnnotations(w_4, i_39);
                  return(t);
                }
                t = fetch_1_0(v_6, t);
                t = term_o_15;
                f_39 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_38)), term_l_30);
                g_39 = t;
                t = SSL_printnl(f_39, g_39);
                t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_38)), term_l_30));
                t = default_system_usage_0_0(t);
                t = term_w_8;
                e_39 = t;
                t = SSL_exit(e_39);
                ;
                LocalPopChoice(k_30);
              }
            else
              {
                t = j_30;
              }
          }
        }
      j_38 = t;
      t = term_m_25;
      l_38 = t;
      t = SSL_table_destroy(l_38);
      t = j_38;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  t = parse_options_1_0(z_79, t);
  p_39 = t;
  t = term_m_30;
  s_39 = t;
  t = SSL_table_create(s_39);
  t = term_m_30;
  q_39 = t;
  t = term_n_30;
  r_39 = t;
  t = SSL_table_put(q_39, r_39, p_39);
  t = p_39;
  t = b_80(t);
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_80, t);
        ;
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        {
          ATerm u_30 = t;
          int v_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_80(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(v_30);
            }
          else
            {
              t = u_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm w_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(z_30);
    }
  else
    {
      t = w_30;
      {
        ATerm h_31 = t;
        int j_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(j_31);
          }
        else
          {
            t = h_31;
            {
              ATerm k_31 = t;
              int l_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(d_7, f_7, k_7, t);
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
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(n_31);
                      }
                    else
                      {
                        t = m_31;
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
ATerm c_7 (ATerm t)
{
  t = xtc_io_1_0(l_7, t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL;
  t = term_o_31;
  y_39 = t;
  t = term_d_17;
  z_39 = t;
  t = term_p_31;
  t = p_6(y_39, z_39, t);
  t = term_q_31;
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_40 = NULL,h_40 = NULL;
      h_40 = t;
      if(match_cons(t, sym_FILE_1))
        {
          g_40 = ATgetArgument(t, 0);
          {
            ATerm c_14 = NULL,y_4 = NULL;
            t = SSLgetAnnotations(h_40);
            c_14 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, g_40);
            y_4 = t;
            t = SSLsetAnnotations(y_4, c_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_40;
        }
      LocalPopChoice(t_31);
      t = xtc_transform_file_2_0(m_7, p_7, t);
    }
  else
    {
      t = s_31;
      t = xtc_transform_term_2_0(r_7, t_7, t);
    }
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_40 = NULL,q_40 = NULL;
        q_40 = t;
        if(match_cons(t, sym_FILE_1))
          {
            p_40 = ATgetArgument(t, 0);
            {
              ATerm o_14 = NULL,z_4 = NULL;
              t = SSLgetAnnotations(q_40);
              o_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_40);
              z_4 = t;
              t = SSLsetAnnotations(z_4, o_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_40;
          }
        LocalPopChoice(v_31);
        t = xtc_transform_file_2_0(u_7, v_7, t);
      }
    else
      {
        t = u_31;
        t = xtc_transform_term_2_0(y_7, a_8, t);
      }
  }
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm i_40 = NULL;
  t = term_x_31;
  t = xtc_find_0_0(t);
  i_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_40), term_y_31);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm j_40 = NULL;
  t = term_x_31;
  t = xtc_find_0_0(t);
  j_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_40), term_y_31);
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_z_31;
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_z_31;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm astratego2text_0_0 (ATerm t)
{
  t = option_wrap_4_0(w_6, default_usage_0_0, _id, c_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = astratego2text_0_0(t);
  return(t);
}
