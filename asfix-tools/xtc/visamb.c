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
ATerm term_m_32;
ATerm term_l_32;
ATerm term_j_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_f_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_p_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_c_29;
ATerm term_g_28;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_k_27;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_m_26;
ATerm term_a_26;
ATerm term_x_25;
ATerm term_v_25;
ATerm term_r_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_h_25;
ATerm term_e_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_l_24;
ATerm term_t_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_j_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_j_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_y_19;
ATerm term_g_18;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_m_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_u_16;
ATerm term_j_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_l_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
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
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_n_4;
void init_constant_terms (void)
{
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_9, term_e_9, term_h_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_9, term_k_9, term_l_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_9, term_o_9, term_p_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_9, term_s_9, term_t_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_w_9, term_x_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_10, term_b_10, term_c_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_10, term_g_10, term_h_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_m_10, term_q_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_10, term_v_10, term_w_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_10, term_a_11, term_b_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_f_11, term_h_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_m_11, term_n_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_t_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_x_11, term_y_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_12, term_b_12, term_c_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_i_12, term_j_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_s_12, term_v_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_z_12);
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
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_q_13, term_r_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_w_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_e_14, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_m_14, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_q_14, term_w_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_f_15, term_g_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym__2, term_x_20, term_r_21);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym__2, term_x_20, term_y_20);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("visamb.pp.af", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.pp.af", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_u_16);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__2, term_g_18, term_x_24);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_24);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym__2, term_e_25, term_e_17);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__2, term_v_25, term_x_25);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_e_17);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym__2, term_h_29, term_e_17);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym__2, term_n_27, term_e_17);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_e_17);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Vis-amb", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm read_from_0_0 (ATerm);
ATerm t_5 (ATerm j_15, ATerm k_15, ATerm);
ATerm u_5 (ATerm x_59 (ATerm), ATerm h_158, ATerm r_15, ATerm);
ATerm a_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm);
ATerm v_5 (ATerm f_12, ATerm g_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm c_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm m_58 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm e_78 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm g_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm y_6 (ATerm q_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm e_6 (ATerm p_74 (ATerm), ATerm k_32, ATerm i_32, ATerm);
ATerm g_8 (ATerm r_7, ATerm);
ATerm h_8 (ATerm v_7, ATerm w_7, ATerm a_8, ATerm);
ATerm a_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm b_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_75 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_75 (ATerm), ATerm);
ATerm y_5 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm m_22, ATerm l_22, ATerm);
ATerm z_5 (ATerm u_67 (ATerm), ATerm i_22, ATerm h_22, ATerm);
ATerm g_1 (ATerm);
ATerm a_6 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm);
ATerm b_6 (ATerm a_76 (ATerm), ATerm i_34, ATerm h_34, ATerm);
ATerm f_6 (ATerm f_36, ATerm g_36, ATerm);
ATerm r_14 (ATerm g_14, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_6 (ATerm p_15, ATerm);
ATerm d_6 (ATerm n_36, ATerm o_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm l_17 (ATerm h_15, ATerm);
ATerm n_17 (ATerm n_15, ATerm o_15, ATerm s_15, ATerm);
ATerm o_17 (ATerm l_16, ATerm m_16, ATerm n_16, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm b_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm m_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm l_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm i_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm g_22 (ATerm d_21, ATerm);
ATerm p_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm build_pp_tables_0_0 (ATerm);
ATerm g_6 (ATerm l_12, ATerm m_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm h_6 (ATerm g_33, ATerm h_33, ATerm);
ATerm end_scope_1_0 (ATerm m_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_74 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_77 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm xtc_io_1_0 (ATerm r_77 (ATerm), ATerm);
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
ATerm y_3 (ATerm);
ATerm b_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm p_6 (ATerm b_35, ATerm c_35, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm n_6 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm i_6 (ATerm w_30, ATerm x_30, ATerm);
ATerm foldr_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_75 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm y_4 (ATerm);
ATerm need_help_1_0 (ATerm s_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm g_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm a_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm l_6 (ATerm s_29, ATerm t_29, ATerm);
ATerm debug_1_0 (ATerm v_59 (ATerm), ATerm);
ATerm map_1_0 (ATerm q_63 (ATerm), ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm m_6 (ATerm s_34, ATerm t_34, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm s_5 (ATerm);
ATerm w_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_81 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm o_6 (ATerm);
ATerm r_6 (ATerm);
ATerm v_6 (ATerm);
ATerm parse_options_1_0 (ATerm p_81 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm j_7 (ATerm);
ATerm l_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm s_7 (ATerm);
ATerm u_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm e_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_n_4;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm s_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          e_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_i_8);
      s_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_0, (ATerm) ATinsert(ATempty, term_i_8));
      t = f_6(e_0, s_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm t_5 (ATerm j_15, ATerm k_15, ATerm t)
{
  ATerm t_0 = NULL;
  t = SSL_write_term_to_stream_baf(j_15, k_15);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_0);
  return(t);
}
ATerm u_5 (ATerm x_59 (ATerm), ATerm h_158, ATerm r_15, ATerm t)
{
  ATerm u_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_158, term_j_8);
  t = open_stream_0_0(t);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_0, r_15);
  t = x_59(t);
  t = fclose_0_0(t);
  t = r_15;
  return(t);
}
ATerm a_0 (ATerm t)
{
  ATerm z_0 = NULL,c_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      if(match_cons(k_8, sym_Stream_1))
        {
          z_0 = ATgetArgument(k_8, 0);
        }
      else
        _fail(t);
      c_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(z_0, c_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL;
  v_0 = t;
  t = xtc_new_file_0_0(t);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_0, v_0);
  t = u_5(a_0, w_0, v_0, t);
  t = SSL_close_file(w_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_0);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_78, o_78, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm v_5 (ATerm f_12, ATerm g_12, ATerm t)
{
  t = SSL_execvp(f_12, g_12);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm o_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL;
  o_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      q_2 = ATgetArgument(t, 0);
      {
        ATerm q_0 = NULL,x_0 = NULL;
        t = SSL_int_to_string(q_2);
        q_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_8), q_0), term_q_8);
        x_0 = t;
        t = SSL_concat_strings(x_0);
      }
    }
  else
    {
      ATerm j_1 = NULL,k_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          q_2 = ATgetArgument(t, 0);
          r_2 = ATgetArgument(t, 1);
          s_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(r_2);
      j_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_2), term_t_8), j_1), term_s_8), q_2);
      k_1 = t;
      t = SSL_concat_strings(k_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm c_64 (ATerm), ATerm t)
{
  ATerm v_2 = NULL;
  ATerm b_0 (ATerm t)
  {
    t = c_64(t);
    if(((v_2 != NULL) && (v_2 != t)))
      _fail(t);
    else
      v_2 = t;
    return(t);
  }
  t = fetch_1_0(b_0, t);
  t = not_null(v_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm w_2 = NULL;
  w_2 = t;
  {
    ATerm u_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm z_8 = ATgetArgument(t, 0);
              if((w_2 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm a_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_15), term_c_15), term_y_14), term_o_14), term_i_14), term_c_14), term_y_13), term_s_13), term_m_13), term_h_13), term_a_13), term_w_12), term_p_12), term_d_12), term_z_11), term_v_11), term_p_11), term_j_11), term_c_11), term_x_10), term_r_10), term_i_10), term_d_10), term_z_9), term_u_9), term_q_9), term_m_9), term_i_9);
        t = fetch_elem_1_0(c_0, t);
        ;
        LocalPopChoice(w_8);
      }
    else
      {
        t = u_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, w_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm d_3 = NULL,o_3 = NULL;
  d_3 = t;
  {
    ATerm m_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm t_15 = ATgetArgument(t, 0);
            o_3 = ATgetArgument(t, 1);
            {
              ATerm u_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_15);
        {
          ATerm y_15 = t;
          int z_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_1 = NULL,z_1 = NULL,a_2 = NULL;
              t = o_3;
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
                w_1 = t;
                t = term_b_16;
                z_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, w_1), term_c_16);
                a_2 = t;
                t = SSL_printnl(z_1, a_2);
                t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATempty, w_1), term_c_16));
              }
              ;
              LocalPopChoice(z_15);
            }
          else
            {
              t = y_15;
              t = d_3;
            }
        }
      }
    else
      {
        t = m_15;
        t = d_3;
      }
    t = d_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm m_58 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL;
  a_4 = t;
  t = fork_0_0(t);
  z_3 = t;
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = a_4;
        t = m_58(t);
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        t = SSL_waitpid(z_3);
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
        t = a_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_78 (ATerm), ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL;
  d_4 = t;
  t = e_78(t);
  t = xtc_find_0_0(t);
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_4, d_4);
  {
    ATerm f_0 (ATerm t)
    {
      ATerm e_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, c_4, d_4);
      t = v_5(c_4, d_4, t);
      t = term_j_16;
      e_4 = t;
      t = SSL_exit(e_4);
      return(t);
    }
    t = fork_and_wait_1_0(f_0, t);
    t = d_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm f_5 = NULL,h_5 = NULL,i_5 = NULL;
    i_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_5 = ATgetFirst((ATermList) t);
        h_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_2 = NULL,x_2 = NULL,l_1 = NULL;
          t = SSLgetAnnotations(i_5);
          g_2 = t;
          t = h_5;
          t = j_5(t);
          x_2 = t;
          t = (ATerm) ATinsert(CheckATermList(x_2), f_5);
          l_1 = t;
          t = SSLsetAnnotations(l_1, g_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_5;
        t = g_64(t);
      }
    return(t);
  }
  t = j_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL;
  i_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_4;
    }
  else
    {
      ATerm o_0 (ATerm t)
      {
        t = not_null(k_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_4 = ATgetFirst((ATermList) t);
          if(((k_4 != NULL) && (k_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_4;
      t = at_end_1_0(o_0, t);
    }
  return(t);
}
ATerm y_6 (ATerm q_5, ATerm t)
{
  ATerm r_5 = NULL;
  t = SSL_explode_term(q_5);
  if(match_cons(t, sym__2))
    {
      ATerm k_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5;
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
        ATerm o_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = t_6;
              return(t);
            }
            t = s_6;
            t = at_end_1_0(y_0, t);
            ;
            LocalPopChoice(p_16);
          }
        else
          {
            t = o_16;
            t = y_6(u_6, t);
          }
      }
    }
  else
    {
      t = y_6(u_6, t);
    }
  return(t);
}
ATerm e_6 (ATerm p_74 (ATerm), ATerm k_32, ATerm i_32, ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,c_7 = NULL,d_7 = NULL,h_7 = NULL,i_7 = NULL;
  d_7 = t;
  t = p_74(t);
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_6, k_32, i_32);
  t = n_6(z_6, k_32, i_32, t);
  {
    ATerm q_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_7 = NULL;
        t = term_u_16;
        k_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_6, term_u_16);
        t = m_6(z_6, k_7, t);
        ;
        LocalPopChoice(s_16);
      }
    else
      {
        t = q_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_7 = ATgetFirst((ATermList) t);
        c_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_u_16;
    h_7 = t;
    t = (ATerm) ATinsert(CheckATermList(c_7), (ATerm) ATinsert(CheckATermList(a_7), k_32));
    i_7 = t;
    t = SSL_table_put(z_6, h_7, i_7);
    t = d_7;
  }
  return(t);
}
ATerm g_8 (ATerm r_7, ATerm t)
{
  t = r_7;
  {
    ATerm v_16 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_16 = ATgetArgument(t, 0);
            ATerm y_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_16;
      }
    t = term_a_17;
    t = debug_1_0(a_1, t);
    t = (ATerm) ATmakeAppl(sym__2, r_7, term_j_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm h_8 (ATerm v_7, ATerm w_7, ATerm a_8, ATerm t)
{
  t = SSL_open_file(v_7, w_7);
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_b_17;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
  d_8 = t;
  if(match_cons(t, sym__2))
    {
      e_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
      {
        ATerm c_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_8(d_8, t);
            ;
            LocalPopChoice(d_17);
          }
        else
          {
            t = c_17;
            t = h_8(e_8, f_8, d_8, t);
          }
      }
    }
  else
    {
      t = g_8(d_8, t);
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
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
  t = term_e_17;
  t = new_0_0(t);
  m_8 = t;
  t = term_f_17;
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_8, term_f_17);
  t = l_6(m_8, n_8, t);
  o_8 = t;
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_8 = NULL;
        t = (ATerm) ATinsert(ATempty, term_i_8);
        v_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_8, (ATerm) ATinsert(ATempty, term_i_8));
        t = f_6(o_8, v_8, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        t = o_8;
      }
  }
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_m_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL;
  t = new_file_0_0(t);
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_9, term_j_8);
  t = open_file_0_0(t);
  t = term_e_17;
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_9, term_e_17);
  t = e_6(b_1, b_9, c_9, t);
  t = b_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm e_10 = NULL,k_10 = NULL;
  e_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm e_3 = NULL,f_3 = NULL;
      t = e_10;
      t = xtc_new_file_0_0(t);
      e_3 = t;
      t = r_0(t);
      f_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_3, (ATerm) ATinsert(ATinsert(ATempty, e_3), term_t_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(e_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_3);
    }
  else
    {
      ATerm v_3 = NULL,x_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_10;
      t = xtc_new_file_0_0(t);
      v_3 = t;
      t = r_0(t);
      x_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_3), term_t_17), k_10), term_u_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(v_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_3);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm n_10 = NULL;
  ATerm d_1 (ATerm t)
  {
    ATerm o_10 = NULL,p_10 = NULL;
    o_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_10), o_10);
    t = m_6(not_null(n_10), o_10, t);
    p_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_10, p_10);
    return(t);
  }
  if(((n_10 != NULL) && (n_10 != t)))
    _fail(t);
  else
    n_10 = t;
  t = SSL_table_keys(n_10);
  t = map_1_0(d_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_75 (ATerm), ATerm t)
{
  ATerm t_10 = NULL;
  t_10 = t;
  {
    ATerm v_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_10 = NULL;
        t = term_g_18;
        t = get_config_0_0(t);
        z_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_10, term_m_14);
        t = geq_0_0(t);
        t = t_10;
        t = x_75(t);
        ;
        LocalPopChoice(z_17);
      }
    else
      {
        t = v_17;
        t = t_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm e_11 = NULL;
  e_11 = t;
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_11 = NULL;
        t = term_g_18;
        t = get_config_0_0(t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, term_m_11);
        t = geq_0_0(t);
        t = e_11;
        t = w_75(t);
        ;
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        t = e_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_75 (ATerm), ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  {
    ATerm q_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_11 = NULL;
        t = term_g_18;
        t = get_config_0_0(t);
        q_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_11, term_s_9);
        t = geq_0_0(t);
        t = o_11;
        t = y_75(t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = q_18;
        t = o_11;
      }
  }
  return(t);
}
ATerm y_5 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm m_22, ATerm l_22, ATerm t)
{
  t = y_67(t);
  {
    ATerm e_1 (ATerm t)
    {
      ATerm u_11 = NULL;
      u_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, u_11);
      t = x_67(t);
      return(t);
    }
    t = fetch_1_0(e_1, t);
    t = l_22;
  }
  return(t);
}
ATerm z_5 (ATerm u_67 (ATerm), ATerm i_22, ATerm h_22, ATerm t)
{
  ATerm u_12 (ATerm t)
  {
    ATerm k_12 = NULL,n_12 = NULL,o_12 = NULL;
    k_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_12 = ATgetFirst((ATermList) t);
            o_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_18 = t;
          int x_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_12;
              {
                ATerm f_1 (ATerm t)
                {
                  t = h_22;
                  return(t);
                }
                t = y_5(u_67, f_1, n_12, o_12, t);
                t = u_12(t);
              }
              ;
              LocalPopChoice(x_18);
            }
          else
            {
              t = v_18;
              {
                ATerm p_4 = NULL,s_4 = NULL,p_1 = NULL;
                t = SSLgetAnnotations(k_12);
                p_4 = t;
                t = o_12;
                t = u_12(t);
                s_4 = t;
                t = (ATerm) ATinsert(CheckATermList(s_4), n_12);
                p_1 = t;
                t = SSLsetAnnotations(p_1, p_4);
              }
            }
        }
      }
    return(t);
  }
  t = i_22;
  t = u_12(t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm l_13 = NULL;
  if(match_cons(t, sym__2))
    {
      l_13 = ATgetArgument(t, 0);
      if((l_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm a_6 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_19 = ATgetArgument(t, 0);
            ATerm j_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
        t = m_6(y_33, z_33, t);
        ;
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        t = (ATerm) ATempty;
      }
    d_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_13, a_34);
    t = z_5(g_1, d_13, a_34, t);
    c_13 = t;
    t = SSL_table_put(y_33, z_33, c_13);
    t = b_13;
  }
  return(t);
}
ATerm b_6 (ATerm a_76 (ATerm), ATerm i_34, ATerm h_34, ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm n_13 = NULL,p_13 = NULL;
    if(match_cons(t, sym__2))
      {
        n_13 = ATgetArgument(t, 0);
        p_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_34, n_13, p_13);
    t = a_76(t);
    return(t);
  }
  t = h_34;
  t = map_1_0(h_1, t);
  return(t);
}
ATerm f_6 (ATerm f_36, ATerm g_36, ATerm t)
{
  t = SSL_access(f_36, g_36);
  return(t);
}
ATerm r_14 (ATerm g_14, ATerm t)
{
  t = SSL_fclose(g_14);
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
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_14);
            ;
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            t = r_14(l_14, t);
          }
      }
    }
  else
    {
      t = r_14(l_14, t);
    }
  return(t);
}
ATerm c_6 (ATerm p_15, ATerm t)
{
  t = SSL_read_term_from_stream(p_15);
  return(t);
}
ATerm d_6 (ATerm n_36, ATerm o_36, ATerm t)
{
  ATerm s_14 = NULL;
  t = SSL_fopen(n_36, o_36);
  s_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_14);
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
  ATerm u_14 = NULL;
  t = SSL_stdout_stream();
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_14 = NULL;
  t = SSL_stderr_stream();
  v_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_14);
  return(t);
}
ATerm l_17 (ATerm h_15, ATerm t)
{
  ATerm i_15 = NULL;
  t = SSL_explode_term(h_15);
  if(match_cons(t, sym__2))
    {
      ATerm m_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_19 = ATgetArgument(t, 1);
        if(((ATgetType(n_19) == AT_LIST) && !(ATisEmpty(n_19))))
          {
            i_15 = ATgetFirst((ATermList) n_19);
            {
              ATerm o_19 = (ATerm) ATgetNext((ATermList) n_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm n_17 (ATerm n_15, ATerm o_15, ATerm s_15, ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,i_16 = NULL,r_1 = NULL;
  t = SSLgetAnnotations(s_15);
  x_15 = t;
  t = n_15;
  if(match_cons(t, sym_Path_1))
    {
      i_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_16, o_15);
  r_1 = t;
  t = SSLsetAnnotations(r_1, x_15);
  if(match_cons(t, sym__2))
    {
      v_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(v_15, w_15, t);
  return(t);
}
ATerm o_17 (ATerm l_16, ATerm m_16, ATerm n_16, ATerm t)
{
  ATerm r_16 = NULL,t_16 = NULL,w_16 = NULL,z_16 = NULL,s_1 = NULL;
  t = SSLgetAnnotations(n_16);
  w_16 = t;
  t = SSL_is_string(l_16);
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_16, m_16);
  s_1 = t;
  t = SSLsetAnnotations(s_1, w_16);
  if(match_cons(t, sym__2))
    {
      r_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(r_16, t_16, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_19 = ATgetArgument(t, 0);
      ATerm q_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  i_17 = t;
  if(match_cons(t, sym__2))
    {
      j_17 = ATgetArgument(t, 0);
      k_17 = ATgetArgument(t, 1);
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_17(i_17, t);
            ;
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            {
              ATerm w_19 = t;
              int x_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_17(j_17, k_17, i_17, t);
                  ;
                  LocalPopChoice(x_19);
                }
              else
                {
                  t = w_19;
                  t = o_17(j_17, k_17, i_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_17(i_17, t);
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_17 = NULL;
      s_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_17, term_b_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
      t = debug_1_0(i_1, t);
      _fail(t);
    }
  q_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(r_17, t);
  p_17 = t;
  t = q_17;
  t = fclose_0_0(t);
  t = p_17;
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_d_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_17 = NULL,x_17 = NULL;
      w_17 = t;
      t = (ATerm) ATinsert(ATempty, term_g_20);
      x_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_17, (ATerm) ATinsert(ATempty, term_g_20));
      t = f_6(w_17, x_17, t);
      LocalPopChoice(f_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = e_20;
      {
        ATerm i_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_20 = t;
            if((PushChoice() == 0))
              {
                ATerm y_17 = NULL,a_18 = NULL;
                y_17 = t;
                t = (ATerm) ATinsert(ATempty, term_i_8);
                a_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, y_17, (ATerm) ATinsert(ATempty, term_i_8));
                t = f_6(y_17, a_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_20;
              }
            t = debug_1_0(m_1, t);
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = i_20;
            t = debug_1_0(n_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_p_20;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,u_18 = NULL;
  r_18 = t;
  t = term_b_16;
  s_18 = t;
  t = (ATerm) ATinsert(ATempty, term_q_20);
  u_18 = t;
  t = SSL_printnl(s_18, u_18);
  t = r_18;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm w_18 = NULL,y_18 = NULL,z_18 = NULL;
  if(match_cons(t, sym__3))
    {
      w_18 = ATgetArgument(t, 0);
      y_18 = ATgetArgument(t, 1);
      z_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_6(w_18, y_18, z_18, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
  a_19 = t;
  t = term_b_16;
  b_19 = t;
  t = (ATerm) ATinsert(ATempty, term_r_20);
  c_19 = t;
  t = SSL_printnl(b_19, c_19);
  t = a_19;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
  d_19 = t;
  t = term_b_16;
  e_19 = t;
  t = (ATerm) ATinsert(ATempty, term_q_20);
  f_19 = t;
  t = SSL_printnl(e_19, f_19);
  t = d_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,h_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
  b_18 = t;
  t = if_verbose5_1_0(o_1, t);
  {
    ATerm v_20 = t;
    if((PushChoice() == 0))
      {
        ATerm o_18 = NULL,p_18 = NULL;
        t = term_x_20;
        o_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, b_18);
        p_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATmakeAppl(sym_Imported_1, b_18));
        t = m_6(o_18, p_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_20;
      }
    d_18 = t;
    t = term_x_20;
    l_18 = t;
    t = term_y_20;
    m_18 = t;
    t = (ATerm) ATinsert(ATempty, b_18);
    n_18 = t;
    t = SSL_table_put(l_18, m_18, n_18);
    t = d_18;
    t = if_verbose4_1_0(t_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(v_1, t);
    c_18 = t;
    t = term_x_20;
    k_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_20, c_18);
    t = b_6(x_1, k_18, c_18, t);
    t = if_verbose6_1_0(y_1, t);
    t = term_x_20;
    e_18 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, b_18);
    f_18 = t;
    t = (ATerm) ATempty;
    h_18 = t;
    t = SSL_table_put(e_18, f_18, h_18);
    t = (ATerm) ATmakeAppl(sym__3, term_x_20, (ATerm)ATmakeAppl(sym_Imported_1, b_18), (ATerm) ATempty);
    t = if_verbose4_1_0(b_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm m_71 (ATerm), ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
  t_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_19 = ATgetFirst((ATermList) t);
          v_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 = NULL,q_6 = NULL,w_6 = NULL,h_2 = NULL;
            t = SSLgetAnnotations(t_19);
            j_6 = t;
            t = u_19;
            t = m_71(t);
            q_6 = t;
            t = v_19;
            t = filter_1_0(m_71, t);
            w_6 = t;
            t = (ATerm) ATinsert(CheckATermList(w_6), q_6);
            h_2 = t;
            t = SSLsetAnnotations(h_2, j_6);
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            t = v_19;
            t = filter_1_0(m_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_73 (ATerm), ATerm t)
{
  ATerm h_20 (ATerm t)
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_73(t);
        t = h_20(t);
        ;
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
      }
    return(t);
  }
  t = h_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm e_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_21);
    }
  else
    {
      t = e_21;
      {
        ATerm n_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_20 = NULL;
            t = term_p_21;
            j_20 = t;
            t = SSL_getenv(j_20);
            ;
            LocalPopChoice(o_21);
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
ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_q_21;
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm u_20 = NULL,w_20 = NULL;
  t = term_x_20;
  u_20 = t;
  t = term_r_21;
  w_20 = t;
  t = term_v_21;
  t = m_6(u_20, w_20, t);
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
ATerm f_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_x_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm m_20 = NULL;
  t = if_verbose5_1_0(c_2, t);
  m_20 = t;
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_20 = NULL,s_20 = NULL;
        t = term_x_20;
        o_20 = t;
        t = term_y_20;
        s_20 = t;
        t = term_a_22;
        t = m_6(o_20, s_20, t);
        ;
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        {
          ATerm t_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          t_20 = t;
          t = repeat_1_0(e_2, t);
          t = t_20;
        }
      }
    t = m_20;
    t = if_verbose5_1_0(f_2, t);
  }
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_b_22;
  return(t);
}
ATerm g_22 (ATerm d_21, ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  t = term_x_20;
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, d_21);
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATmakeAppl(sym_Tool_1, d_21));
  t = m_6(g_21, h_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_22 = ATgetFirst((ATermList) t);
      if(match_cons(c_22, sym__2))
        {
          ATerm f_22 = ATgetArgument(c_22, 0);
          f_21 = ATgetArgument(c_22, 1);
        }
      else
        _fail(t);
      {
        ATerm e_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_21;
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_b_22;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_x_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(a_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm n_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
      t = if_verbose5_1_0(k_2, t);
      t = xtc_load_0_0(t);
      m_21 = t;
      if(match_cons(t, sym__2))
        {
          k_21 = ATgetArgument(t, 0);
          l_21 = ATgetArgument(t, 1);
          {
            ATerm q_22 = t;
            int r_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
                t = term_x_20;
                t_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, k_21);
                u_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATmakeAppl(sym_Tool_1, k_21));
                t = m_6(t_21, u_21, t);
                {
                  ATerm n_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((l_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((s_21 != NULL) && (s_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(n_2, t);
                  t = not_null(s_21);
                }
                ;
                LocalPopChoice(r_22);
              }
            else
              {
                t = q_22;
                t = g_22(m_21, t);
              }
          }
        }
      else
        {
          t = g_22(m_21, t);
        }
      t = if_verbose5_1_0(p_2, t);
      ;
      LocalPopChoice(p_22);
    }
  else
    {
      t = n_22;
      {
        ATerm d_22 = NULL,m_7 = NULL,n_7 = NULL;
        d_22 = t;
        t = term_b_16;
        m_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_22), d_22), term_s_22);
        n_7 = t;
        t = SSL_printnl(m_7, n_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_22), d_22), term_s_22);
        t = if_verbose5_1_0(z_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm build_pp_tables_0_0 (ATerm t)
{
  ATerm k_22 = NULL,o_22 = NULL;
  t = term_u_22;
  t = xtc_find_0_0(t);
  k_22 = t;
  t = term_v_22;
  t = xtc_find_0_0(t);
  o_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_22), term_w_22), k_22), term_w_22);
  return(t);
}
ATerm g_6 (ATerm l_12, ATerm m_12, ATerm t)
{
  t = SSL_copy(l_12, m_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL;
  l_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_7 = NULL;
        t = l_23;
        t = n_0(t);
        t_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = t_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = t_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, m_23, t_7);
        t = g_6(m_23, t_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_23);
        ;
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        {
          ATerm z_22 = t;
          int a_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_8 = NULL;
              t = l_23;
              t = n_0(t);
              l_8 = t;
              {
                ATerm b_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm p_8 = NULL;
                    p_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = p_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = p_8;
                          }
                        else
                          {
                            t = p_8;
                            if((m_23 != t))
                              {
                                _fail(t);
                              }
                            t = p_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_23;
                  }
                t = (ATerm) ATmakeAppl(sym__2, m_23, l_8);
                t = g_6(m_23, l_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_23);
              }
              ;
              LocalPopChoice(a_23);
            }
          else
            {
              t = z_22;
              t = l_23;
              t = n_0(t);
              if((m_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_23);
            }
        }
      }
  }
  return(t);
}
ATerm h_6 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL;
  v_23 = t;
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
        t = m_6(g_33, h_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_23 = ATgetFirst((ATermList) t);
            u_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(d_23);
        t = SSL_table_put(g_33, h_33, u_23);
        t = (ATerm) ATmakeAppl(sym__3, g_33, h_33, u_23);
      }
    else
      {
        t = c_23;
        t = SSL_table_remove(g_33, h_33);
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
      }
    t = v_23;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_74 (ATerm), ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
  z_23 = t;
  t = m_74(t);
  y_23 = t;
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_24 = NULL;
        t = term_u_16;
        b_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_23, term_u_16);
        t = m_6(y_23, b_24, t);
        ;
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_23 = ATgetFirst((ATermList) t);
        w_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_u_16;
    a_24 = t;
    t = SSL_table_put(y_23, a_24, w_23);
    t = x_23;
    {
      ATerm b_3 (ATerm t)
      {
        ATerm c_24 = NULL;
        c_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_23, c_24);
        t = h_6(y_23, c_24, t);
        return(t);
      }
      t = map_1_0(b_3, t);
      t = z_23;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_75(t);
      t = i_75(t);
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      t = i_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_74 (ATerm), ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,i_24 = NULL,j_24 = NULL;
  f_24 = t;
  t = l_74(t);
  e_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_24, term_u_16);
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_23 = ATgetArgument(t, 0);
            ATerm o_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_u_16;
        n_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_24, term_u_16);
        t = m_6(e_24, n_24, t);
        ;
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = (ATerm) ATempty;
      }
    g_24 = t;
    t = term_u_16;
    i_24 = t;
    t = (ATerm) ATinsert(CheckATermList(g_24), (ATerm) ATempty);
    j_24 = t;
    t = SSL_table_put(e_24, i_24, j_24);
    t = f_24;
  }
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_m_17;
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(z_24);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = z_24;
      }
  }
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_m_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm s_24 = NULL;
  ATerm g_3 (ATerm t)
  {
    ATerm t_24 = NULL;
    t_24 = t;
    {
      ATerm r_23 = t;
      int s_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_24 = NULL,v_24 = NULL;
          t = term_m_17;
          u_24 = t;
          t = term_u_16;
          v_24 = t;
          t = term_t_23;
          t = m_6(u_24, v_24, t);
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
          if(((s_24 != NULL) && (s_24 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            s_24 = ATgetFirst((ATermList) t);
          {
            ATerm d_24 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = s_24;
      t = map_1_0(h_3, t);
      t = t_24;
      t = end_scope_1_0(i_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(c_3, t);
  t = restore_always_2_0(q_77, g_3, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm h_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = h_24;
      t = term_l_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_77 (ATerm), ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm m_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_25 = NULL;
        t = term_u_17;
        t = get_config_0_0(t);
        d_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_25);
        ;
        LocalPopChoice(o_24);
      }
    else
      {
        t = m_24;
        t = term_n_4;
      }
    t = r_77(t);
    t = copy_to_1_0(l_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(k_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
  f_25 = t;
  t = term_e_17;
  t = whoami_0_0(t);
  g_25 = t;
  t = term_b_16;
  j_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_24), g_25), term_p_24);
  k_25 = t;
  t = SSL_printnl(j_25, k_25);
  t = term_e_9;
  i_25 = t;
  t = SSL_exit(i_25);
  t = f_25;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm s_25 = NULL;
  s_25 = t;
  if(match_string(t, "-k"))
    {
      t = s_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_25;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,w_25 = NULL;
  t_25 = t;
  t = SSL_string_to_int(t_25);
  u_25 = t;
  t = term_r_24;
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_24, u_25);
  t = p_6(w_25, u_25, t);
  t = t_25;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_w_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, p_3, q_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm y_25 = NULL;
  y_25 = t;
  if(match_string(t, "-S"))
    {
      t = y_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_25;
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm z_25 = NULL,b_26 = NULL;
  t = term_g_18;
  z_25 = t;
  t = term_x_24;
  b_26 = t;
  t = term_y_24;
  t = p_6(z_25, b_26, t);
  t = term_a_25;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_b_25;
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
  ATerm c_26 = NULL,f_26 = NULL,g_26 = NULL;
  c_26 = t;
  t = SSL_string_to_int(c_26);
  f_26 = t;
  t = term_g_18;
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_18, f_26);
  t = p_6(g_26, f_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_26);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm b_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL;
  t = term_e_25;
  h_26 = t;
  t = term_e_17;
  i_26 = t;
  t = term_h_25;
  t = p_6(h_26, i_26, t);
  t = term_l_25;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_m_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_3, s_3, t_3, t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm p_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_3, w_3, y_3, t);
            ;
            LocalPopChoice(q_25);
          }
        else
          {
            t = p_25;
            t = Option_3_0(b_4, f_4, g_4, t);
          }
      }
    }
  return(t);
}
ATerm p_6 (ATerm b_35, ATerm c_35, ATerm t)
{
  ATerm j_26 = NULL;
  t = term_r_25;
  j_26 = t;
  t = SSL_table_put(j_26, b_35, c_35);
  t = (ATerm) ATmakeAppl(sym__3, term_r_25, b_35, c_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
      t = term_e_17;
      t = h_0(t);
      p_26 = t;
      t = term_v_25;
      q_26 = t;
      t = term_x_25;
      r_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_25, term_x_25, p_26);
      t = n_6(q_26, r_26, p_26, t);
      _fail(t);
    }
  else
    {
      ATerm u_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_26 = ATgetFirst((ATermList) t);
          o_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_26;
      t = d_0(t);
      t = term_e_17;
      t = g_0(t);
      u_26 = t;
      t = (ATerm) ATinsert(CheckATermList(o_26), u_26);
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm w_26 = NULL;
  w_26 = t;
  if(match_string(t, "-o"))
    {
      t = w_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_26;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm x_26 = NULL,a_27 = NULL;
  x_26 = t;
  t = term_t_17;
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, x_26);
  t = p_6(a_27, x_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_26);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, l_4, m_4, t);
  return(t);
}
ATerm n_6 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_26 = ATgetArgument(t, 0);
            ATerm l_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
        t = m_6(b_33, c_33, t);
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = (ATerm) ATempty;
      }
    f_27 = t;
    t = (ATerm) ATinsert(CheckATermList(f_27), a_33);
    g_27 = t;
    t = SSL_table_put(b_33, c_33, g_27);
    t = e_27;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm w_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_28 = NULL,j_28 = NULL,k_28 = NULL;
      t = term_e_17;
      t = m_0(t);
      f_28 = t;
      t = term_v_25;
      j_28 = t;
      t = term_x_25;
      k_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_25, term_x_25, f_28);
      t = n_6(j_28, k_28, f_28, t);
      _fail(t);
    }
  else
    {
      ATerm o_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_27 = ATgetFirst((ATermList) t);
          z_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_28 = ATgetFirst((ATermList) t);
          b_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_27;
      t = k_0(t);
      t = a_28;
      t = l_0(t);
      o_28 = t;
      t = (ATerm) ATinsert(CheckATermList(b_28), o_28);
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  if(match_string(t, "-i"))
    {
      t = q_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_28;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL;
  r_28 = t;
  t = term_u_17;
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, r_28);
  t = p_6(s_28, r_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_28);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, q_4, r_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_17;
  t = whoami_0_0(t);
  t_28 = t;
  t = term_b_16;
  v_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_26), t_28);
  w_28 = t;
  t = SSL_printnl(v_28, w_28);
  t = term_e_9;
  u_28 = t;
  t = SSL_exit(u_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm i_6 (ATerm w_30, ATerm x_30, ATerm t)
{
  ATerm v_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_30, x_30);
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = v_26;
      t = SSL_addr(w_30, x_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
  y_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_28;
      t = i_70(t);
    }
  else
    {
      ATerm d_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_28 = ATgetFirst((ATermList) t);
          a_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_29;
      t = foldr_2_0(i_70, j_70, t);
      d_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_28, d_29);
      t = j_70(t);
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
  t = term_x_24;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  if(match_cons(t, sym__2))
    {
      f_9 = ATgetArgument(t, 0);
      g_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(f_9, g_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_29 = NULL,x_8 = NULL,y_8 = NULL;
  t = times_0_0(t);
  y_8 = t;
  t = SSL_explode_term(y_8);
  if(match_cons(t, sym__2))
    {
      ATerm z_26 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_8;
  t = foldr_2_0(u_4, v_4, t);
  g_29 = t;
  t = SSL_TicksToSeconds(g_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_29 = NULL,u_29 = NULL,v_29 = NULL;
  r_29 = t;
  if(match_cons(t, sym__2))
    {
      u_29 = ATgetArgument(t, 0);
      v_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_29;
        if((u_29 != t))
          {
            _fail(t);
          }
        t = r_29;
        ;
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        t = (ATerm) ATmakeAppl(sym__2, u_29, v_29);
        {
          ATerm d_27 = t;
          int h_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_29, v_29);
              ;
              LocalPopChoice(h_27);
            }
          else
            {
              t = d_27;
              t = SSL_gtr(u_29, v_29);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_29, v_29);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_75 (ATerm), ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_30 = NULL;
        t = term_g_18;
        t = get_config_0_0(t);
        d_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_30, term_e_9);
        t = geq_0_0(t);
        t = z_29;
        t = t_75(t);
        ;
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = z_29;
      }
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,i_30 = NULL,j_30 = NULL;
  t = run_time_0_0(t);
  f_30 = t;
  t = term_e_17;
  t = whoami_0_0(t);
  g_30 = t;
  t = term_b_16;
  i_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_27), f_30), term_s_8), g_30);
  j_30 = t;
  t = SSL_printnl(i_30, j_30);
  t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_27), f_30), term_s_8), g_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_24;
  k_30 = t;
  t = SSL_exit(k_30);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  t_30 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_30;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_30 = ATgetArgument(t, 0);
          {
            ATerm y_9 = NULL,j_2 = NULL;
            t = SSLgetAnnotations(t_30);
            y_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_30);
            j_2 = t;
            t = SSLsetAnnotations(j_2, y_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_30;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_79 (ATerm), ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      t = fetch_1_0(y_4, t);
    }
  t = s_79(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_30 = ATgetFirst((ATermList) t);
      z_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_31 = NULL,e_31 = NULL;
        ATerm c_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_31)), not_null(e_31));
          return(t);
        }
        t = z_30;
        t = j_0(t);
        if(((d_31 != NULL) && (d_31 != t)))
          _fail(t);
        else
          d_31 = t;
        t = y_30;
        t = i_0(t);
        if(((e_31 != NULL) && (e_31 != t)))
          _fail(t);
        else
          e_31 = t;
        t = z_30;
        t = reverse_acc_2_0(i_0, c_5, t);
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
ATerm d_5 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_2 = NULL;
  k_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_31);
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_31);
  l_2 = t;
  t = SSLsetAnnotations(l_2, i_31);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm m_31 = NULL;
  m_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_31), term_o_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL;
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      t = fetch_1_0(d_5, t);
    }
  t = term_r_27;
  t = echo_0_0(t);
  t = term_v_25;
  g_31 = t;
  t = term_x_25;
  h_31 = t;
  t = term_s_27;
  t = m_6(g_31, h_31, t);
  t = reverse_acc_2_0(_id, e_5, t);
  t = map_1_0(g_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_64 (ATerm), ATerm t)
{
  ATerm v_32 (ATerm t)
  {
    ATerm r_32 = NULL,s_32 = NULL,u_32 = NULL;
    r_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_32 = ATgetFirst((ATermList) t);
        u_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_27 = t;
      int u_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_10 = NULL,s_10 = NULL,t_2 = NULL;
          t = SSLgetAnnotations(r_32);
          j_10 = t;
          t = s_32;
          t = a_64(t);
          s_10 = t;
          t = (ATerm) ATinsert(CheckATermList(u_32), s_10);
          t_2 = t;
          t = SSLsetAnnotations(t_2, j_10);
          ;
          LocalPopChoice(u_27);
        }
      else
        {
          t = t_27;
          {
            ATerm i_11 = NULL,l_11 = NULL,u_2 = NULL;
            t = SSLgetAnnotations(r_32);
            i_11 = t;
            t = u_32;
            t = v_32(t);
            l_11 = t;
            t = (ATerm) ATinsert(CheckATermList(l_11), s_32);
            u_2 = t;
            t = SSLsetAnnotations(u_2, i_11);
          }
        }
    }
    return(t);
  }
  t = v_32(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
  j_33 = t;
  {
    ATerm v_27 = t;
    int x_27 = stack_ptr;
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
                ATerm y_27 = ATgetFirst((ATermList) t);
                ATerm c_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_33;
          }
        ;
        LocalPopChoice(x_27);
      }
    else
      {
        t = v_27;
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
  t = term_t_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm l_6 (ATerm s_29, ATerm t_29, ATerm t)
{
  t = SSL_strcat(s_29, t_29);
  return(t);
}
ATerm debug_1_0 (ATerm v_59 (ATerm), ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
  p_33 = t;
  t = v_59(t);
  q_33 = t;
  t = term_b_16;
  r_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_33), q_33);
  s_33 = t;
  t = SSL_printnl(r_33, s_33);
  t = p_33;
  return(t);
}
ATerm map_1_0 (ATerm q_63 (ATerm), ATerm t)
{
  ATerm q_34 (ATerm t)
  {
    ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
    n_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_34;
      }
    else
      {
        ATerm h_12 = NULL,r_12 = NULL,t_12 = NULL,j_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_34 = ATgetFirst((ATermList) t);
            p_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_34);
        h_12 = t;
        t = o_34;
        t = q_63(t);
        r_12 = t;
        t = p_34;
        t = q_34(t);
        t_12 = t;
        t = (ATerm) ATinsert(CheckATermList(t_12), r_12);
        j_3 = t;
        t = SSLsetAnnotations(j_3, h_12);
      }
    return(t);
  }
  t = q_34(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_g_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_35 = NULL;
      a_35 = t;
      t = SSL_is_string(a_35);
      ;
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      {
        ATerm l_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_5, t);
            ;
            LocalPopChoice(m_28);
          }
        else
          {
            t = l_28;
            {
              ATerm i_35 = NULL,j_35 = NULL,p_35 = NULL;
              i_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_35 = ATgetArgument(t, 0);
                  t = j_35;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_35 = ATgetArgument(t, 0);
                      t = j_35;
                      {
                        ATerm n_28 = t;
                        int p_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_28);
                          }
                        else
                          {
                            t = n_28;
                            t = debug_1_0(l_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_35 = NULL,x_35 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_35 = ATgetArgument(t, 0);
                          p_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_35;
                      t = eval_config_0_0(t);
                      w_35 = t;
                      t = p_35;
                      t = eval_config_0_0(t);
                      x_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_35, x_35);
                      t = l_6(w_35, x_35, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm m_6 (ATerm s_34, ATerm t_34, ATerm t)
{
  t = SSL_table_get(s_34, t_34);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL;
  b_36 = t;
  t = term_r_25;
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_25, b_36);
  t = m_6(c_36, b_36, t);
  {
    ATerm x_28 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_36 = NULL,e_36 = NULL;
        t = eval_config_0_0(t);
        d_36 = t;
        t = term_r_25;
        e_36 = t;
        t = SSL_table_put(e_36, b_36, d_36);
        t = d_36;
        ;
        LocalPopChoice(b_29);
      }
    else
      {
        t = x_28;
      }
  }
  return(t);
}
ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL;
  t = term_c_29;
  j_36 = t;
  t = term_e_17;
  k_36 = t;
  t = term_e_29;
  t = p_6(j_36, k_36, t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,r_36 = NULL,s_36 = NULL;
  t = term_c_29;
  r_36 = t;
  t = term_e_17;
  s_36 = t;
  t = term_e_29;
  t = p_6(r_36, s_36, t);
  t = term_h_29;
  l_36 = t;
  t = term_e_17;
  m_36 = t;
  t = term_i_29;
  t = p_6(l_36, m_36, t);
  t = term_j_29;
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_5, n_5, o_5, t);
      ;
      LocalPopChoice(m_29);
    }
  else
    {
      t = l_29;
      t = Option_3_0(p_5, s_5, w_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,m_3 = NULL;
  y_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_36 = ATgetFirst((ATermList) t);
      v_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_36);
  t_36 = t;
  t = u_36;
  t = i_51(t);
  w_36 = t;
  t = v_36;
  t = j_51(t);
  x_36 = t;
  t = (ATerm) ATinsert(CheckATermList(x_36), w_36);
  m_3 = t;
  t = SSLsetAnnotations(m_3, t_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_81 (ATerm), ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,n_37 = NULL,o_37 = NULL,q_37 = NULL,s_37 = NULL,t_4 = NULL;
  j_37 = t;
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_29;
        t = q_81(t);
        ;
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
      }
    t = j_37;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_37 = ATgetFirst((ATermList) t);
        o_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_37);
    k_37 = t;
    t = term_t_26;
    s_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_26, n_37);
    t = p_6(s_37, n_37, t);
    t = o_37;
    {
      ATerm h_38 (ATerm t)
      {
        ATerm q_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_29 = t;
            int y_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_37 = NULL;
                w_37 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = w_37;
                ;
                LocalPopChoice(y_29);
              }
            else
              {
                t = x_29;
                t = q_81(t);
                t = Cons_2_0(_id, h_38, t);
              }
            ;
            LocalPopChoice(w_29);
          }
        else
          {
            t = q_29;
            {
              ATerm a_38 = NULL,b_38 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_38 = ATgetFirst((ATermList) t);
                  b_38 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_38), (ATerm) ATmakeAppl(sym_Undefined_1, a_38));
            }
          }
        return(t);
      }
      t = h_38(t);
      q_37 = t;
      t = (ATerm) ATinsert(CheckATermList(q_37), (ATerm) ATmakeAppl(sym_Program_1, n_37));
      t_4 = t;
      t = SSLsetAnnotations(t_4, k_37);
    }
  }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm y_38 = NULL;
  y_38 = t;
  if(match_string(t, "--help"))
    {
      t = y_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_38;
        }
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL;
  t = term_n_27;
  z_38 = t;
  t = term_e_17;
  a_39 = t;
  t = term_a_30;
  t = p_6(z_38, a_39, t);
  t = term_b_30;
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm v_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_81 (ATerm), ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  t_38 = t;
  t = term_v_25;
  v_38 = t;
  t = term_x_25;
  w_38 = t;
  t = (ATerm) ATempty;
  x_38 = t;
  t = SSL_table_put(v_38, w_38, x_38);
  t = t_38;
  {
    ATerm x_5 (ATerm t)
    {
      ATerm e_30 = t;
      int h_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_81(t);
          ;
          LocalPopChoice(h_30);
        }
      else
        {
          t = e_30;
          {
            ATerm l_30 = t;
            int m_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_6, o_6, r_6, t);
                ;
                LocalPopChoice(m_30);
              }
            else
              {
                t = l_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_5, t);
    {
      ATerm n_30 = t;
      int o_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_39 = NULL;
          i_39 = t;
          {
            ATerm p_30 = t;
            int q_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_13 = NULL;
                t = i_39;
                {
                  ATerm r_30 = t;
                  int u_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_n_27;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(u_30);
                    }
                  else
                    {
                      t = r_30;
                      t = fetch_1_0(v_6, t);
                    }
                  t = i_39;
                  t = default_system_usage_0_0(t);
                  t = term_x_24;
                  t_13 = t;
                  t = SSL_exit(t_13);
                }
                ;
                LocalPopChoice(q_30);
              }
            else
              {
                t = p_30;
                {
                  ATerm x_13 = NULL;
                  t = term_c_29;
                  t = get_config_0_0(t);
                  t = i_39;
                  t = default_system_about_0_0(t);
                  t = term_x_24;
                  x_13 = t;
                  t = SSL_exit(x_13);
                }
              }
          }
          ;
          LocalPopChoice(o_30);
        }
      else
        {
          t = n_30;
          {
            ATerm v_30 = t;
            int a_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL;
                ATerm x_6 (ATerm t)
                {
                  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL,w_4 = NULL;
                  o_39 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      n_39 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_39);
                  m_39 = t;
                  t = n_39;
                  if(((m_38 != NULL) && (m_38 != t)))
                    _fail(t);
                  else
                    m_38 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, n_39);
                  w_4 = t;
                  t = SSLsetAnnotations(w_4, m_39);
                  return(t);
                }
                t = fetch_1_0(x_6, t);
                t = term_b_16;
                k_39 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_38)), term_b_31);
                l_39 = t;
                t = SSL_printnl(k_39, l_39);
                t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_38)), term_b_31));
                t = default_system_usage_0_0(t);
                t = term_e_9;
                j_39 = t;
                t = SSL_exit(j_39);
                ;
                LocalPopChoice(a_31);
              }
            else
              {
                t = v_30;
              }
          }
        }
      n_38 = t;
      t = term_v_25;
      u_38 = t;
      t = SSL_table_destroy(u_38);
      t = n_38;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
  t = parse_options_1_0(u_79, t);
  t_39 = t;
  t = term_c_31;
  w_39 = t;
  t = SSL_table_create(w_39);
  t = term_c_31;
  u_39 = t;
  t = term_f_31;
  v_39 = t;
  t = SSL_table_put(u_39, v_39, t_39);
  t = t_39;
  t = w_79(t);
  {
    ATerm l_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_79, t);
        ;
        LocalPopChoice(n_31);
      }
    else
      {
        t = l_31;
        {
          ATerm o_31 = t;
          int p_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_79(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(p_31);
            }
          else
            {
              t = o_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(r_31);
    }
  else
    {
      t = q_31;
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
              ATerm u_31 = t;
              int v_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(f_7, g_7, j_7, t);
                  ;
                  LocalPopChoice(v_31);
                }
              else
                {
                  t = u_31;
                  {
                    ATerm w_31 = t;
                    int x_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(x_31);
                      }
                    else
                      {
                        t = w_31;
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
ATerm e_7 (ATerm t)
{
  t = xtc_io_1_0(l_7, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL;
  t = term_y_31;
  e_40 = t;
  t = term_e_17;
  f_40 = t;
  t = term_z_31;
  t = p_6(e_40, f_40, t);
  t = term_a_32;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_40 = NULL,n_40 = NULL;
      n_40 = t;
      if(match_cons(t, sym_FILE_1))
        {
          m_40 = ATgetArgument(t, 0);
          {
            ATerm f_14 = NULL,z_4 = NULL;
            t = SSLgetAnnotations(n_40);
            f_14 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, m_40);
            z_4 = t;
            t = SSLsetAnnotations(z_4, f_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_40;
        }
      LocalPopChoice(d_32);
      t = xtc_transform_file_2_0(o_7, p_7, t);
    }
  else
    {
      t = c_32;
      t = xtc_transform_term_2_0(q_7, s_7, t);
    }
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_40 = NULL,u_40 = NULL;
        u_40 = t;
        if(match_cons(t, sym_FILE_1))
          {
            t_40 = ATgetArgument(t, 0);
            {
              ATerm x_14 = NULL,a_5 = NULL;
              t = SSLgetAnnotations(u_40);
              x_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_40);
              a_5 = t;
              t = SSLsetAnnotations(a_5, x_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_40;
          }
        LocalPopChoice(f_32);
        t = xtc_transform_file_2_0(u_7, build_pp_tables_0_0, t);
      }
    else
      {
        t = e_32;
        t = xtc_transform_term_2_0(x_7, build_pp_tables_0_0, t);
      }
    {
      ATerm g_32 = t;
      int h_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_41 = NULL,b_41 = NULL;
          b_41 = t;
          if(match_cons(t, sym_FILE_1))
            {
              a_41 = ATgetArgument(t, 0);
              {
                ATerm e_15 = NULL,b_5 = NULL;
                t = SSLgetAnnotations(b_41);
                e_15 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, a_41);
                b_5 = t;
                t = SSLsetAnnotations(b_5, e_15);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = b_41;
            }
          LocalPopChoice(h_32);
          t = xtc_transform_file_2_0(y_7, z_7, t);
        }
      else
        {
          t = g_32;
          t = xtc_transform_term_2_0(b_8, c_8, t);
        }
    }
  }
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_l_32;
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_l_32;
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(b_7, default_usage_0_0, _id, e_7, t);
  return(t);
}
