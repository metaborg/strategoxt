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
ATerm term_n_32;
ATerm term_m_32;
ATerm term_h_32;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_a_31;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_o_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_q_28;
ATerm term_t_27;
ATerm term_j_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_m_26;
ATerm term_f_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_r_25;
ATerm term_m_25;
ATerm term_g_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_r_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_f_24;
ATerm term_a_24;
ATerm term_w_23;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_b_22;
ATerm term_v_21;
ATerm term_s_21;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_z_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_h_20;
ATerm term_d_20;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_n_19;
ATerm term_r_18;
ATerm term_r_17;
ATerm term_p_17;
ATerm term_n_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_g_16;
ATerm term_u_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_g_14;
ATerm term_f_14;
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
ATerm term_q_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
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
ATerm term_l_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_j_10;
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
ATerm term_d_9;
ATerm term_b_9;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_i_8;
ATerm term_d_8;
ATerm term_o_4;
void init_constant_terms (void)
{
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_9, term_d_9, term_h_9);
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
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_w_9, term_y_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_10, term_b_10, term_c_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_10, term_f_10, term_g_10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_10, term_m_10, term_n_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_u_10, term_w_10);
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
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_f_11, term_i_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_11, term_m_11, term_n_11);
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
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_g_12, term_h_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_p_12, term_q_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_t_12, term_u_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_z_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_e_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_13, term_j_13, term_k_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_o_13, term_q_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_w_13, term_y_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_c_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_g_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_l_14, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_r_14, term_s_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_b_15, term_c_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_l_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_q_20);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("visamb.pp.af", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.pp.af", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_n_17, term_g_16);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_r_18, term_m_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_24);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_e_25, term_c_17);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym__2, term_c_26, term_d_26);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_a_29, term_c_17);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_g_29, term_c_17);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym__2, term_f_27, term_c_17);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, term_q_31, term_c_17);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Vis-amb", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm read_from_0_0 (ATerm);
ATerm t_5 (ATerm r_27, ATerm s_27, ATerm);
ATerm u_5 (ATerm d_72 (ATerm), ATerm v_180, ATerm z_27, ATerm);
ATerm b_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm);
ATerm v_5 (ATerm n_24, ATerm o_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm s_70 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm e_90 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm z_6 (ATerm r_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm e_6 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm);
ATerm h_8 (ATerm u_7, ATerm);
ATerm k_8 (ATerm w_7, ATerm a_8, ATerm b_8, ATerm);
ATerm a_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm b_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm y_5 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm);
ATerm z_5 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm);
ATerm g_1 (ATerm);
ATerm a_6 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm);
ATerm b_6 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm);
ATerm f_6 (ATerm l_48, ATerm m_48, ATerm);
ATerm t_14 (ATerm h_14, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_6 (ATerm x_27, ATerm);
ATerm d_6 (ATerm t_48, ATerm u_48, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm y_16 (ATerm o_15, ATerm);
ATerm z_16 (ATerm w_15, ATerm z_15, ATerm a_16, ATerm);
ATerm b_17 (ATerm k_16, ATerm l_16, ATerm m_16, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm w_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm l_2 (ATerm);
ATerm u_21 (ATerm v_20, ATerm);
ATerm o_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm build_pp_tables_0_0 (ATerm);
ATerm g_6 (ATerm t_24, ATerm u_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm h_6 (ATerm m_45, ATerm n_45, ATerm);
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm xtc_io_1_0 (ATerm r_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm c_4 (ATerm);
ATerm g_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm p_6 (ATerm h_47, ATerm i_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm m_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm n_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm n_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm i_6 (ATerm c_43, ATerm d_43, ATerm);
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm x_4 (ATerm);
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm l_6 (ATerm y_41, ATerm z_41, ATerm);
ATerm debug_1_0 (ATerm b_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm k_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm m_6 (ATerm y_46, ATerm z_46, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm s_6 (ATerm);
ATerm w_6 (ATerm);
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm);
ATerm y_6 (ATerm);
ATerm b_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm j_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm c_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm o_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_o_4;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm s_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_d_8);
      s_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_0, (ATerm) ATinsert(ATempty, term_d_8));
      t = f_6(o_0, s_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm t_5 (ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm t_0 = NULL;
  t = SSL_write_term_to_stream_baf(r_27, s_27);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_0);
  return(t);
}
ATerm u_5 (ATerm d_72 (ATerm), ATerm v_180, ATerm z_27, ATerm t)
{
  ATerm u_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_180, term_i_8);
  t = open_stream_0_0(t);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_0, z_27);
  t = d_72(t);
  t = fclose_0_0(t);
  t = z_27;
  return(t);
}
ATerm b_0 (ATerm t)
{
  ATerm z_0 = NULL,c_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_8 = ATgetArgument(t, 0);
      if(match_cons(j_8, sym_Stream_1))
        {
          z_0 = ATgetArgument(j_8, 0);
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
  t = u_5(b_0, w_0, v_0, t);
  t = SSL_close_file(w_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_0);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_90, o_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm v_5 (ATerm n_24, ATerm o_24, ATerm t)
{
  t = SSL_execvp(n_24, o_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL;
  q_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      r_2 = ATgetArgument(t, 0);
      {
        ATerm r_0 = NULL,x_0 = NULL;
        t = SSL_int_to_string(r_2);
        r_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_8), r_0), term_p_8);
        x_0 = t;
        t = SSL_concat_strings(x_0);
      }
    }
  else
    {
      ATerm j_1 = NULL,k_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          r_2 = ATgetArgument(t, 0);
          s_2 = ATgetArgument(t, 1);
          t_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(s_2);
      j_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_2), term_s_8), j_1), term_r_8), r_2);
      k_1 = t;
      t = SSL_concat_strings(k_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm w_2 = NULL;
  ATerm f_0 (ATerm t)
  {
    t = i_76(t);
    if(((w_2 != NULL) && (w_2 != t)))
      _fail(t);
    else
      w_2 = t;
    return(t);
  }
  t = fetch_1_0(f_0, t);
  t = not_null(w_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm x_2 = NULL;
  if(((x_2 != NULL) && (x_2 != t)))
    _fail(t);
  else
    x_2 = t;
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm y_8 = ATgetArgument(t, 0);
              if(((x_2 != NULL) && (x_2 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                x_2 = ATgetArgument(t, 1);
              {
                ATerm a_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_15), term_y_14), term_o_14), term_i_14), term_d_14), term_z_13), term_u_13), term_m_13), term_f_13), term_a_13), term_w_12), term_r_12), term_i_12), term_d_12), term_z_11), term_v_11), term_p_11), term_j_11), term_c_11), term_x_10), term_r_10), term_h_10), term_d_10), term_z_9), term_u_9), term_q_9), term_m_9), term_i_9);
        t = fetch_elem_1_0(n_0, t);
        ;
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(x_2));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm g_3 = NULL,q_3 = NULL;
  g_3 = t;
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_15 = ATgetArgument(t, 0);
            q_3 = ATgetArgument(t, 1);
            {
              ATerm h_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_15);
        {
          ATerm i_15 = t;
          int j_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_1 = NULL,x_1 = NULL,z_1 = NULL;
              t = q_3;
              {
                ATerm k_15 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_15;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                v_1 = t;
                t = term_l_15;
                x_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, v_1), term_m_15);
                z_1 = t;
                t = SSL_printnl(x_1, z_1);
                t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATempty, v_1), term_m_15));
              }
              ;
              LocalPopChoice(j_15);
            }
          else
            {
              t = i_15;
              t = g_3;
            }
        }
      }
    else
      {
        t = e_15;
        t = g_3;
      }
    t = g_3;
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
  ATerm a_4 = NULL,b_4 = NULL;
  b_4 = t;
  t = fork_0_0(t);
  a_4 = t;
  {
    ATerm n_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = b_4;
        t = s_70(t);
        ;
        LocalPopChoice(q_15);
      }
    else
      {
        t = n_15;
        t = SSL_waitpid(a_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_15 = ATgetArgument(t, 0);
            if(((ATgetType(r_15) != AT_INT) || (ATgetInt((ATermInt) r_15) != 0)))
              _fail(t);
            {
              ATerm s_15 = ATgetArgument(t, 1);
            }
            {
              ATerm t_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = b_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  if(((e_4 != NULL) && (e_4 != t)))
    _fail(t);
  else
    e_4 = t;
  t = e_90(t);
  t = xtc_find_0_0(t);
  if(((d_4 != NULL) && (d_4 != t)))
    _fail(t);
  else
    d_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_4), not_null(e_4));
  {
    ATerm p_0 (ATerm t)
    {
      ATerm f_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_4), not_null(e_4));
      t = v_5(not_null(d_4), not_null(e_4), t);
      t = term_u_15;
      f_4 = t;
      t = SSL_exit(f_4);
      return(t);
    }
    t = fork_and_wait_1_0(p_0, t);
    t = not_null(e_4);
  }
  return(t);
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
    j_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_5 = ATgetFirst((ATermList) t);
        i_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_2 = NULL,p_2 = NULL,o_1 = NULL;
          t = SSLgetAnnotations(j_5);
          f_2 = t;
          t = i_5;
          t = m_5(t);
          p_2 = t;
          t = (ATerm) ATinsert(CheckATermList(p_2), h_5);
          o_1 = t;
          t = SSLsetAnnotations(o_1, f_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_5;
        t = m_76(t);
      }
    return(t);
  }
  t = m_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL;
  j_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_4;
    }
  else
    {
      ATerm q_0 (ATerm t)
      {
        t = not_null(l_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((k_4 != NULL) && (k_4 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            k_4 = ATgetFirst((ATermList) t);
          if(((l_4 != NULL) && (l_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(k_4);
      t = at_end_1_0(q_0, t);
    }
  return(t);
}
ATerm z_6 (ATerm r_5, ATerm t)
{
  ATerm r_6 = NULL;
  t = SSL_explode_term(r_5);
  if(match_cons(t, sym__2))
    {
      ATerm v_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
  if(((v_6 != NULL) && (v_6 != t)))
    _fail(t);
  else
    v_6 = t;
  if(match_cons(t, sym__2))
    {
      t_6 = ATgetArgument(t, 0);
      u_6 = ATgetArgument(t, 1);
      {
        ATerm x_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = not_null(u_6);
              return(t);
            }
            t = not_null(t_6);
            t = at_end_1_0(y_0, t);
            ;
            LocalPopChoice(y_15);
          }
        else
          {
            t = x_15;
            t = z_6(not_null(v_6), t);
          }
      }
    }
  else
    {
      t = z_6(not_null(v_6), t);
    }
  return(t);
}
ATerm e_6 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm t)
{
  ATerm a_7 = NULL,c_7 = NULL,d_7 = NULL,h_7 = NULL,i_7 = NULL,k_7 = NULL;
  h_7 = t;
  t = p_86(t);
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_7, q_44, o_44);
  t = n_6(a_7, q_44, o_44, t);
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_7 = NULL;
        t = term_g_16;
        m_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_7, term_g_16);
        t = m_6(a_7, m_7, t);
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
        c_7 = ATgetFirst((ATermList) t);
        d_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_16;
    i_7 = t;
    t = (ATerm) ATinsert(CheckATermList(d_7), (ATerm) ATinsert(CheckATermList(c_7), q_44));
    k_7 = t;
    t = SSL_table_put(a_7, i_7, k_7);
    t = h_7;
  }
  return(t);
}
ATerm h_8 (ATerm u_7, ATerm t)
{
  t = u_7;
  {
    ATerm h_16 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_16 = ATgetArgument(t, 0);
            ATerm q_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_16;
      }
    t = term_r_16;
    t = debug_1_0(a_1, t);
    t = (ATerm) ATmakeAppl(sym__2, u_7, term_i_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm k_8 (ATerm w_7, ATerm a_8, ATerm b_8, ATerm t)
{
  t = SSL_open_file(w_7, a_8);
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_t_16;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
  e_8 = t;
  if(match_cons(t, sym__2))
    {
      f_8 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
      {
        ATerm u_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_8(e_8, t);
            ;
            LocalPopChoice(a_17);
          }
        else
          {
            t = u_16;
            t = k_8(f_8, g_8, e_8, t);
          }
      }
    }
  else
    {
      t = h_8(e_8, t);
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
  ATerm n_8 = NULL,o_8 = NULL,t_8 = NULL;
  t = term_c_17;
  t = new_0_0(t);
  n_8 = t;
  t = term_d_17;
  o_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_8, term_d_17);
  t = l_6(n_8, o_8, t);
  t_8 = t;
  {
    ATerm i_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_8 = NULL;
        t = (ATerm) ATinsert(ATempty, term_d_8);
        z_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_8, (ATerm) ATinsert(ATempty, term_d_8));
        t = f_6(t_8, z_8, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(k_17);
      }
    else
      {
        t = i_17;
        t = t_8;
      }
  }
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_n_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm c_9 = NULL,f_9 = NULL;
  t = new_file_0_0(t);
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_9, term_i_8);
  t = open_file_0_0(t);
  t = term_c_17;
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_9, term_c_17);
  t = e_6(b_1, c_9, f_9, t);
  t = c_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL;
  k_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_3 = NULL,e_3 = NULL;
      t = k_10;
      t = xtc_new_file_0_0(t);
      d_3 = t;
      t = m_0(t);
      e_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_3, (ATerm) ATinsert(ATinsert(ATempty, d_3), term_p_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(d_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_3);
    }
  else
    {
      ATerm r_3 = NULL,v_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          l_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_10;
      t = xtc_new_file_0_0(t);
      r_3 = t;
      t = m_0(t);
      v_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_3), term_p_17), l_10), term_r_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(r_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_3);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm o_10 = NULL;
  ATerm d_1 (ATerm t)
  {
    ATerm p_10 = NULL,q_10 = NULL;
    p_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_10), p_10);
    t = m_6(not_null(o_10), p_10, t);
    q_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_10, q_10);
    return(t);
  }
  if(((o_10 != NULL) && (o_10 != t)))
    _fail(t);
  else
    o_10 = t;
  t = SSL_table_keys(not_null(o_10));
  t = map_1_0(d_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm v_10 = NULL;
  v_10 = t;
  {
    ATerm k_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_10 = NULL;
        t = term_r_18;
        t = get_config_0_0(t);
        z_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_10, term_f_14);
        t = geq_0_0(t);
        t = v_10;
        t = x_87(t);
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = k_18;
        t = v_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm e_11 = NULL;
  e_11 = t;
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_11 = NULL;
        t = term_r_18;
        t = get_config_0_0(t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, term_m_11);
        t = geq_0_0(t);
        t = e_11;
        t = w_87(t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = e_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_11 = NULL;
        t = term_r_18;
        t = get_config_0_0(t);
        q_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_11, term_s_9);
        t = geq_0_0(t);
        t = o_11;
        t = y_87(t);
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        t = o_11;
      }
  }
  return(t);
}
ATerm y_5 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm t)
{
  t = e_80(t);
  {
    ATerm e_1 (ATerm t)
    {
      ATerm u_11 = NULL;
      u_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_34), u_11);
      t = d_80(t);
      return(t);
    }
    t = fetch_1_0(e_1, t);
    t = not_null(t_34);
  }
  return(t);
}
ATerm z_5 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm t)
{
  ATerm v_12 (ATerm t)
  {
    ATerm j_12 = NULL,n_12 = NULL,o_12 = NULL;
    j_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(p_34);
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
          ATerm w_18 = t;
          int x_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_12;
              {
                ATerm f_1 (ATerm t)
                {
                  t = not_null(p_34);
                  return(t);
                }
                t = y_5(a_80, f_1, not_null(n_12), not_null(o_12), t);
                t = v_12(t);
              }
              ;
              LocalPopChoice(x_18);
            }
          else
            {
              t = w_18;
              {
                ATerm p_4 = NULL,s_4 = NULL,q_1 = NULL;
                t = SSLgetAnnotations(j_12);
                p_4 = t;
                t = o_12;
                t = v_12(t);
                s_4 = t;
                t = (ATerm) ATinsert(CheckATermList(s_4), n_12);
                q_1 = t;
                t = SSLsetAnnotations(q_1, p_4);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(q_34);
  t = v_12(t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm p_13 = NULL;
  if(match_cons(t, sym__2))
    {
      p_13 = ATgetArgument(t, 0);
      if((p_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm a_6 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm t)
{
  ATerm b_13 = NULL,i_13 = NULL,l_13 = NULL;
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_19 = ATgetArgument(t, 0);
            ATerm b_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
        t = m_6(e_46, f_46, t);
        ;
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        t = (ATerm) ATempty;
      }
    l_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_13, g_46);
    t = z_5(g_1, l_13, g_46, t);
    i_13 = t;
    t = SSL_table_put(e_46, f_46, i_13);
    t = b_13;
  }
  return(t);
}
ATerm b_6 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm s_13 = NULL,t_13 = NULL;
    if(match_cons(t, sym__2))
      {
        s_13 = ATgetArgument(t, 0);
        t_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(o_46), s_13, t_13);
    t = a_88(t);
    return(t);
  }
  t = not_null(n_46);
  t = map_1_0(h_1, t);
  return(t);
}
ATerm f_6 (ATerm l_48, ATerm m_48, ATerm t)
{
  t = SSL_access(l_48, m_48);
  return(t);
}
ATerm t_14 (ATerm h_14, ATerm t)
{
  t = SSL_fclose(h_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_14 = NULL,q_14 = NULL;
  q_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_14 = ATgetArgument(t, 0);
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_14);
            ;
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            t = t_14(q_14, t);
          }
      }
    }
  else
    {
      t = t_14(q_14, t);
    }
  return(t);
}
ATerm c_6 (ATerm x_27, ATerm t)
{
  t = SSL_read_term_from_stream(x_27);
  return(t);
}
ATerm d_6 (ATerm t_48, ATerm u_48, ATerm t)
{
  ATerm u_14 = NULL;
  t = SSL_fopen(t_48, u_48);
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_14 = NULL;
  t = SSL_stdin_stream();
  v_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_14 = NULL;
  t = SSL_stdout_stream();
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_14 = NULL;
  t = SSL_stderr_stream();
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_14);
  return(t);
}
ATerm y_16 (ATerm o_15, ATerm t)
{
  ATerm p_15 = NULL;
  t = SSL_explode_term(o_15);
  if(match_cons(t, sym__2))
    {
      ATerm e_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_19 = ATgetArgument(t, 1);
        if(((ATgetType(f_19) == AT_LIST) && !(ATisEmpty(f_19))))
          {
            p_15 = ATgetFirst((ATermList) f_19);
            {
              ATerm g_19 = (ATerm) ATgetNext((ATermList) f_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm z_16 (ATerm w_15, ATerm z_15, ATerm a_16, ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,i_16 = NULL,s_1 = NULL;
  t = SSLgetAnnotations(a_16);
  d_16 = t;
  t = w_15;
  if(match_cons(t, sym_Path_1))
    {
      i_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_16, z_15);
  s_1 = t;
  t = SSLsetAnnotations(s_1, d_16);
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(b_16, c_16, t);
  return(t);
}
ATerm b_17 (ATerm k_16, ATerm l_16, ATerm m_16, ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,s_16 = NULL,y_1 = NULL;
  t = SSLgetAnnotations(m_16);
  p_16 = t;
  t = SSL_is_string(k_16);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_16, l_16);
  y_1 = t;
  t = SSLsetAnnotations(y_1, p_16);
  if(match_cons(t, sym__2))
    {
      n_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(n_16, o_16, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_19 = ATgetArgument(t, 0);
      ATerm i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  v_16 = t;
  if(match_cons(t, sym__2))
    {
      w_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_16(v_16, t);
            ;
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            {
              ATerm l_19 = t;
              int m_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_16(w_16, x_16, v_16, t);
                  ;
                  LocalPopChoice(m_19);
                }
              else
                {
                  t = l_19;
                  t = b_17(w_16, x_16, v_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_16(v_16, t);
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_n_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_17 = NULL;
      h_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_17, term_s_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      t = debug_1_0(i_1, t);
      _fail(t);
    }
  f_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(g_17, t);
  e_17 = t;
  t = f_17;
  t = fclose_0_0(t);
  t = e_17;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_v_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_17 = NULL,l_17 = NULL;
      j_17 = t;
      t = (ATerm) ATinsert(ATempty, term_y_19);
      l_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_17, (ATerm) ATinsert(ATempty, term_y_19));
      t = f_6(j_17, l_17, t);
      LocalPopChoice(x_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = w_19;
      {
        ATerm z_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_20 = t;
            if((PushChoice() == 0))
              {
                ATerm m_17 = NULL,o_17 = NULL;
                m_17 = t;
                t = (ATerm) ATinsert(ATempty, term_d_8);
                o_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_17, (ATerm) ATinsert(ATempty, term_d_8));
                t = f_6(m_17, o_17, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = c_20;
              }
            t = debug_1_0(l_1, t);
            ;
            LocalPopChoice(a_20);
          }
        else
          {
            t = z_19;
            t = debug_1_0(m_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_d_20;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = debug_1_0(t_1, t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_h_20;
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  t = term_l_15;
  e_18 = t;
  t = (ATerm) ATinsert(ATempty, term_k_20);
  f_18 = t;
  t = SSL_printnl(e_18, f_18);
  t = d_18;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym__3))
    {
      g_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
      i_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_6(g_18, h_18, i_18, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm j_18 = NULL,l_18 = NULL,n_18 = NULL;
  j_18 = t;
  t = term_l_15;
  l_18 = t;
  t = (ATerm) ATinsert(ATempty, term_l_20);
  n_18 = t;
  t = SSL_printnl(l_18, n_18);
  t = j_18;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
  o_18 = t;
  t = term_l_15;
  p_18 = t;
  t = (ATerm) ATinsert(ATempty, term_k_20);
  q_18 = t;
  t = SSL_printnl(p_18, q_18);
  t = o_18;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm q_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  q_17 = t;
  t = if_verbose5_1_0(n_1, t);
  {
    ATerm o_20 = t;
    if((PushChoice() == 0))
      {
        ATerm b_18 = NULL,c_18 = NULL;
        t = term_p_20;
        b_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, q_17);
        c_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_20, (ATerm) ATmakeAppl(sym_Imported_1, q_17));
        t = m_6(b_18, c_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_20;
      }
    t_17 = t;
    t = term_p_20;
    y_17 = t;
    t = term_q_20;
    z_17 = t;
    t = (ATerm) ATinsert(ATempty, q_17);
    a_18 = t;
    t = SSL_table_put(y_17, z_17, a_18);
    t = t_17;
    t = if_verbose4_1_0(r_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(u_1, t);
    s_17 = t;
    t = term_p_20;
    x_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_20, s_17);
    t = b_6(w_1, x_17, s_17, t);
    t = if_verbose6_1_0(a_2, t);
    t = term_p_20;
    u_17 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, q_17);
    v_17 = t;
    t = (ATerm) ATempty;
    w_17 = t;
    t = SSL_table_put(u_17, v_17, w_17);
    t = (ATerm) ATmakeAppl(sym__3, term_p_20, (ATerm)ATmakeAppl(sym_Imported_1, q_17), (ATerm) ATempty);
    t = if_verbose4_1_0(b_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,u_19 = NULL;
  q_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_19 = ATgetFirst((ATermList) t);
          u_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_5 = NULL,o_6 = NULL,q_6 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(q_19);
            x_5 = t;
            t = r_19;
            t = r_83(t);
            o_6 = t;
            t = u_19;
            t = filter_1_0(r_83, t);
            q_6 = t;
            t = (ATerm) ATinsert(CheckATermList(q_6), o_6);
            i_2 = t;
            t = SSLsetAnnotations(i_2, x_5);
            ;
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            t = u_19;
            t = filter_1_0(r_83, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm b_20 (ATerm t)
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_85(t);
        t = b_20(t);
        ;
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
      }
    return(t);
  }
  t = b_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm w_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = w_20;
      {
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_20 = NULL;
            t = term_h_21;
            e_20 = t;
            t = SSL_getenv(e_20);
            ;
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
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
  t = term_i_21;
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  t = term_p_20;
  m_20 = t;
  t = term_l_21;
  n_20 = t;
  t = term_m_21;
  t = m_6(m_20, n_20, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm o_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_21;
      }
  }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm f_20 = NULL;
  t = if_verbose5_1_0(c_2, t);
  f_20 = t;
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_20 = NULL,i_20 = NULL;
        t = term_p_20;
        g_20 = t;
        t = term_q_20;
        i_20 = t;
        t = term_s_21;
        t = m_6(g_20, i_20, t);
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        {
          ATerm j_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          j_20 = t;
          t = repeat_1_0(e_2, t);
          t = j_20;
        }
      }
    t = f_20;
    t = if_verbose5_1_0(g_2, t);
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
  t = term_v_21;
  return(t);
}
ATerm u_21 (ATerm v_20, ATerm t)
{
  ATerm x_20 = NULL,a_21 = NULL,b_21 = NULL;
  t = term_p_20;
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, v_20);
  b_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_20, (ATerm) ATmakeAppl(sym_Tool_1, v_20));
  t = m_6(a_21, b_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_21 = ATgetFirst((ATermList) t);
      if(match_cons(y_21, sym__2))
        {
          ATerm a_22 = ATgetArgument(y_21, 0);
          x_20 = ATgetArgument(y_21, 1);
        }
      else
        _fail(t);
      {
        ATerm z_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_20;
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_p_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(a_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_b_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
      t = if_verbose5_1_0(j_2, t);
      t = xtc_load_0_0(t);
      if(((e_21 != NULL) && (e_21 != t)))
        _fail(t);
      else
        e_21 = t;
      if(match_cons(t, sym__2))
        {
          c_21 = ATgetArgument(t, 0);
          d_21 = ATgetArgument(t, 1);
          {
            ATerm e_22 = t;
            int f_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_21 = NULL,k_21 = NULL,n_21 = NULL;
                t = term_p_20;
                if(((k_21 != NULL) && (k_21 != t)))
                  _fail(t);
                else
                  k_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(c_21));
                if(((n_21 != NULL) && (n_21 != t)))
                  _fail(t);
                else
                  n_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_20, (ATerm) ATmakeAppl(sym_Tool_1, not_null(c_21)));
                t = m_6(not_null(k_21), not_null(n_21), t);
                {
                  ATerm n_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((d_21 != NULL) && (d_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          d_21 = ATgetArgument(t, 0);
                        if(((j_21 != NULL) && (j_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(n_2, t);
                  t = not_null(j_21);
                }
                ;
                LocalPopChoice(f_22);
              }
            else
              {
                t = e_22;
                t = u_21(not_null(e_21), t);
              }
          }
        }
      else
        {
          t = u_21(not_null(e_21), t);
        }
      t = if_verbose5_1_0(o_2, t);
      ;
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      {
        ATerm t_21 = NULL,l_7 = NULL,n_7 = NULL;
        t_21 = t;
        t = term_l_15;
        l_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_22), t_21), term_g_22);
        n_7 = t;
        t = SSL_printnl(l_7, n_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_22), t_21), term_g_22);
        t = if_verbose5_1_0(z_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm build_pp_tables_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL;
  t = term_i_22;
  t = xtc_find_0_0(t);
  w_21 = t;
  t = term_j_22;
  t = xtc_find_0_0(t);
  x_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_21), term_k_22), w_21), term_k_22);
  return(t);
}
ATerm g_6 (ATerm t_24, ATerm u_24, ATerm t)
{
  t = SSL_copy(t_24, u_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL;
  q_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL;
        t = q_22;
        t = k_0(t);
        s_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = s_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = s_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, r_22, s_7);
        t = g_6(r_22, s_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_22);
        ;
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        {
          ATerm n_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_8 = NULL;
              t = q_22;
              t = k_0(t);
              l_8 = t;
              {
                ATerm p_22 = t;
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
                            if((r_22 != t))
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
                    t = p_22;
                  }
                t = (ATerm) ATmakeAppl(sym__2, r_22, l_8);
                t = g_6(r_22, l_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, r_22);
              }
              ;
              LocalPopChoice(o_22);
            }
          else
            {
              t = n_22;
              t = q_22;
              t = k_0(t);
              if((r_22 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_22);
            }
        }
      }
  }
  return(t);
}
ATerm h_6 (ATerm m_45, ATerm n_45, ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL;
  x_22 = t;
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
        t = m_6(m_45, n_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_22 = ATgetFirst((ATermList) t);
            w_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_22);
        t = SSL_table_put(m_45, n_45, w_22);
        t = (ATerm) ATmakeAppl(sym__3, m_45, n_45, w_22);
      }
    else
      {
        t = s_22;
        t = SSL_table_remove(m_45, n_45);
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
      }
    t = x_22;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,f_23 = NULL;
  if(((b_23 != NULL) && (b_23 != t)))
    _fail(t);
  else
    b_23 = t;
  t = m_86(t);
  if(((a_23 != NULL) && (a_23 != t)))
    _fail(t);
  else
    a_23 = t;
  {
    ATerm v_22 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_23 = NULL;
        t = term_g_16;
        g_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_23), term_g_16);
        t = m_6(not_null(a_23), g_23, t);
        ;
        LocalPopChoice(c_23);
      }
    else
      {
        t = v_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((z_22 != NULL) && (z_22 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          z_22 = ATgetFirst((ATermList) t);
        if(((y_22 != NULL) && (y_22 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          y_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_16;
    if(((f_23 != NULL) && (f_23 != t)))
      _fail(t);
    else
      f_23 = t;
    t = SSL_table_put(not_null(a_23), not_null(f_23), not_null(y_22));
    t = not_null(z_22);
    {
      ATerm b_3 (ATerm t)
      {
        ATerm h_23 = NULL;
        h_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_23), h_23);
        t = h_6(not_null(a_23), h_23, t);
        return(t);
      }
      t = map_1_0(b_3, t);
      t = not_null(b_23);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t)
{
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_87(t);
      t = i_87(t);
      ;
      LocalPopChoice(e_23);
    }
  else
    {
      t = d_23;
      t = i_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm j_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,p_23 = NULL;
  l_23 = t;
  t = l_86(t);
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_23, term_g_16);
  {
    ATerm i_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_23 = ATgetArgument(t, 0);
            ATerm q_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_16;
        v_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_23, term_g_16);
        t = m_6(j_23, v_23, t);
        ;
        LocalPopChoice(k_23);
      }
    else
      {
        t = i_23;
        t = (ATerm) ATempty;
      }
    m_23 = t;
    t = term_g_16;
    n_23 = t;
    t = (ATerm) ATinsert(CheckATermList(m_23), (ATerm) ATempty);
    p_23 = t;
    t = SSL_table_put(j_23, n_23, p_23);
    t = l_23;
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
  ATerm k_24 = NULL;
  k_24 = t;
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(k_24);
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = k_24;
      }
  }
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_n_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm c_24 = NULL;
  ATerm f_3 (ATerm t)
  {
    ATerm d_24 = NULL;
    d_24 = t;
    {
      ATerm t_23 = t;
      int u_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_24 = NULL,h_24 = NULL;
          t = term_n_17;
          g_24 = t;
          t = term_g_16;
          h_24 = t;
          t = term_w_23;
          t = m_6(g_24, h_24, t);
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
          if(((c_24 != NULL) && (c_24 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            c_24 = ATgetFirst((ATermList) t);
          {
            ATerm x_23 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(c_24);
      t = map_1_0(h_3, t);
      t = d_24;
      t = end_scope_1_0(i_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(c_3, t);
  t = restore_always_2_0(q_89, f_3, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      t = term_a_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_89 (ATerm), ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm b_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_24 = NULL;
        t = term_r_17;
        t = get_config_0_0(t);
        p_24 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_24);
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = b_24;
        t = term_o_4;
      }
    t = r_89(t);
    t = copy_to_1_0(l_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(j_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_24 = NULL,s_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  q_24 = t;
  t = term_c_17;
  t = whoami_0_0(t);
  s_24 = t;
  t = term_l_15;
  w_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_24), s_24), term_f_24);
  x_24 = t;
  t = SSL_printnl(w_24, x_24);
  t = term_d_9;
  v_24 = t;
  t = SSL_exit(v_24);
  t = q_24;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  if(match_string(t, "-k"))
    {
      t = a_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_25;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,f_25 = NULL;
  b_25 = t;
  t = SSL_string_to_int(b_25);
  c_25 = t;
  t = term_j_24;
  f_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_24, c_25);
  t = p_6(f_25, c_25, t);
  t = b_25;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_l_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_3, o_3, p_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm h_25 = NULL;
  h_25 = t;
  if(match_string(t, "-S"))
    {
      t = h_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_25;
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL;
  t = term_r_18;
  i_25 = t;
  t = term_m_24;
  j_25 = t;
  t = term_r_24;
  t = p_6(i_25, j_25, t);
  t = term_y_24;
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm w_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,n_25 = NULL;
  k_25 = t;
  t = SSL_string_to_int(k_25);
  l_25 = t;
  t = term_r_18;
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_18, l_25);
  t = p_6(n_25, l_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_25);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL;
  t = term_e_25;
  o_25 = t;
  t = term_c_17;
  p_25 = t;
  t = term_g_25;
  t = p_6(o_25, p_25, t);
  t = term_m_25;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_r_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_3, t_3, u_3, t);
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = s_25;
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_3, x_3, y_3, t);
            ;
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            t = Option_3_0(z_3, c_4, g_4, t);
          }
      }
    }
  return(t);
}
ATerm p_6 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm q_25 = NULL;
  t = term_b_26;
  q_25 = t;
  t = SSL_table_put(q_25, h_47, i_47);
  t = (ATerm) ATmakeAppl(sym__3, term_b_26, h_47, i_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
      t = term_c_17;
      t = d_0(t);
      v_25 = t;
      t = term_c_26;
      w_25 = t;
      t = term_d_26;
      x_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_26, term_d_26, v_25);
      t = n_6(w_25, x_25, v_25, t);
      _fail(t);
    }
  else
    {
      ATerm e_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_25 = ATgetFirst((ATermList) t);
          u_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_25;
      t = a_0(t);
      t = term_c_17;
      t = c_0(t);
      e_26 = t;
      t = (ATerm) ATinsert(CheckATermList(u_25), e_26);
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  if(match_string(t, "-o"))
    {
      t = g_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_26;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm k_26 = NULL,n_26 = NULL;
  k_26 = t;
  t = term_p_17;
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_17, k_26);
  t = p_6(n_26, k_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_26);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, m_4, t);
  return(t);
}
ATerm n_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_26 = ATgetArgument(t, 0);
            ATerm l_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
        t = m_6(h_45, i_45, t);
        ;
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = (ATerm) ATempty;
      }
    u_26 = t;
    t = (ATerm) ATinsert(CheckATermList(u_26), g_45);
    v_26 = t;
    t = SSL_table_put(h_45, i_45, v_26);
    t = t_26;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
      t = term_c_17;
      t = j_0(t);
      o_27 = t;
      t = term_c_26;
      p_27 = t;
      t = term_d_26;
      q_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_26, term_d_26, o_27);
      t = n_6(p_27, q_27, o_27, t);
      _fail(t);
    }
  else
    {
      ATerm w_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_27 = ATgetFirst((ATermList) t);
          l_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_27 = ATgetFirst((ATermList) t);
          n_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_27;
      t = h_0(t);
      t = m_27;
      t = i_0(t);
      w_27 = t;
      t = (ATerm) ATinsert(CheckATermList(n_27), w_27);
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm b_28 = NULL;
  b_28 = t;
  if(match_string(t, "-i"))
    {
      t = b_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_28;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL;
  c_28 = t;
  t = term_r_17;
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_17, c_28);
  t = p_6(d_28, c_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_28);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, q_4, r_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_17;
  t = whoami_0_0(t);
  e_28 = t;
  t = term_l_15;
  g_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_26), e_28);
  h_28 = t;
  t = SSL_printnl(g_28, h_28);
  t = term_d_9;
  f_28 = t;
  t = SSL_exit(f_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm i_6 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_43, d_43);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      t = SSL_addr(c_43, d_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
  j_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_28;
      t = o_82(t);
    }
  else
    {
      ATerm o_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_28 = ATgetFirst((ATermList) t);
          l_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_28;
      t = foldr_2_0(o_82, p_82, t);
      o_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_28, o_28);
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
  t = term_m_24;
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm e_9 = NULL,g_9 = NULL;
  if(match_cons(t, sym__2))
    {
      e_9 = ATgetArgument(t, 0);
      g_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(e_9, g_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_28 = NULL,w_8 = NULL,x_8 = NULL;
  t = times_0_0(t);
  x_8 = t;
  t = SSL_explode_term(x_8);
  if(match_cons(t, sym__2))
    {
      ATerm s_26 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_8;
  t = foldr_2_0(t_4, u_4, t);
  r_28 = t;
  t = SSL_TicksToSeconds(r_28);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  if(match_cons(t, sym__2))
    {
      d_29 = ATgetArgument(t, 0);
      e_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_29;
        if((d_29 != t))
          {
            _fail(t);
          }
        t = c_29;
        ;
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        t = (ATerm) ATmakeAppl(sym__2, d_29, e_29);
        {
          ATerm y_26 = t;
          int z_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_29, e_29);
              ;
              LocalPopChoice(z_26);
            }
          else
            {
              t = y_26;
              t = SSL_gtr(d_29, e_29);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_29, e_29);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  ATerm p_29 = NULL;
  p_29 = t;
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_29 = NULL;
        t = term_r_18;
        t = get_config_0_0(t);
        r_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_29, term_d_9);
        t = geq_0_0(t);
        t = p_29;
        t = t_87(t);
        ;
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        t = p_29;
      }
  }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm t_29 = NULL,v_29 = NULL,x_29 = NULL,y_29 = NULL;
  t = run_time_0_0(t);
  t_29 = t;
  t = term_c_17;
  t = whoami_0_0(t);
  v_29 = t;
  t = term_l_15;
  x_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_27), t_29), term_r_8), v_29);
  y_29 = t;
  t = SSL_printnl(x_29, y_29);
  t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_27), t_29), term_r_8), v_29));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_24;
  z_29 = t;
  t = SSL_exit(z_29);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL;
  k_30 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_30;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_30 = ATgetArgument(t, 0);
          {
            ATerm x_9 = NULL,k_2 = NULL;
            t = SSLgetAnnotations(k_30);
            x_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_30);
            k_2 = t;
            t = SSLsetAnnotations(k_2, x_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_30;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      t = fetch_1_0(x_4, t);
    }
  t = s_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_30 = ATgetFirst((ATermList) t);
      o_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_30 = NULL,t_30 = NULL;
        ATerm z_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_30)), not_null(t_30));
          return(t);
        }
        t = not_null(o_30);
        t = g_0(t);
        if(((s_30 != NULL) && (s_30 != t)))
          _fail(t);
        else
          s_30 = t;
        t = not_null(n_30);
        t = e_0(t);
        if(((t_30 != NULL) && (t_30 != t)))
          _fail(t);
        else
          t_30 = t;
        t = not_null(o_30);
        t = reverse_acc_2_0(e_0, z_4, t);
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
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,m_2 = NULL;
  z_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_30);
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_30);
  m_2 = t;
  t = SSLsetAnnotations(m_2, x_30);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm b_31 = NULL;
  b_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_31), term_g_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      t = fetch_1_0(c_5, t);
    }
  t = term_j_27;
  t = echo_0_0(t);
  t = term_c_26;
  v_30 = t;
  t = term_d_26;
  w_30 = t;
  t = term_t_27;
  t = m_6(v_30, w_30, t);
  t = reverse_acc_2_0(_id, d_5, t);
  t = map_1_0(f_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm y_31 (ATerm t)
  {
    ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
    v_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_31 = ATgetFirst((ATermList) t);
        x_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_27 = t;
      int v_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_10 = NULL,s_10 = NULL,u_2 = NULL;
          t = SSLgetAnnotations(v_31);
          i_10 = t;
          t = w_31;
          t = g_76(t);
          s_10 = t;
          t = (ATerm) ATinsert(CheckATermList(x_31), s_10);
          u_2 = t;
          t = SSLsetAnnotations(u_2, i_10);
          ;
          LocalPopChoice(v_27);
        }
      else
        {
          t = u_27;
          {
            ATerm h_11 = NULL,k_11 = NULL,v_2 = NULL;
            t = SSLgetAnnotations(v_31);
            h_11 = t;
            t = x_31;
            t = y_31(t);
            k_11 = t;
            t = (ATerm) ATinsert(CheckATermList(k_11), w_31);
            v_2 = t;
            t = SSLsetAnnotations(v_2, h_11);
          }
        }
    }
    return(t);
  }
  t = y_31(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
  c_32 = t;
  {
    ATerm y_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_28 = ATgetFirst((ATermList) t);
                ATerm m_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_32;
          }
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = y_27;
        t = (ATerm) ATinsert(ATempty, c_32);
      }
    d_32 = t;
    t = term_a_24;
    e_32 = t;
    t = SSL_printnl(e_32, d_32);
    t = c_32;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm l_6 (ATerm y_41, ATerm z_41, ATerm t)
{
  t = SSL_strcat(y_41, z_41);
  return(t);
}
ATerm debug_1_0 (ATerm b_72 (ATerm), ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL;
  i_32 = t;
  t = b_72(t);
  j_32 = t;
  t = term_l_15;
  k_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_32), j_32);
  l_32 = t;
  t = SSL_printnl(k_32, l_32);
  t = i_32;
  return(t);
}
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm a_33 (ATerm t)
  {
    ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
    x_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_32;
      }
    else
      {
        ATerm e_12 = NULL,k_12 = NULL,l_12 = NULL,k_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_32 = ATgetFirst((ATermList) t);
            z_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_32);
        e_12 = t;
        t = y_32;
        t = w_75(t);
        k_12 = t;
        t = z_32;
        t = a_33(t);
        l_12 = t;
        t = (ATerm) ATinsert(CheckATermList(l_12), k_12);
        k_3 = t;
        t = SSLsetAnnotations(k_3, e_12);
      }
    return(t);
  }
  t = a_33(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm n_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(p_28);
    }
  else
    {
      t = n_28;
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_q_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_33 = NULL;
      i_33 = t;
      t = SSL_is_string(i_33);
      ;
      LocalPopChoice(t_28);
    }
  else
    {
      t = s_28;
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_5, t);
            ;
            LocalPopChoice(v_28);
          }
        else
          {
            t = u_28;
            {
              ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
              o_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_33 = ATgetArgument(t, 0);
                  t = p_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_33 = ATgetArgument(t, 0);
                      t = p_33;
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
                            t = debug_1_0(k_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_33 = NULL,v_33 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_33 = ATgetArgument(t, 0);
                          q_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_33;
                      t = eval_config_0_0(t);
                      u_33 = t;
                      t = q_33;
                      t = eval_config_0_0(t);
                      v_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_33, v_33);
                      t = l_6(u_33, v_33, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm m_6 (ATerm y_46, ATerm z_46, ATerm t)
{
  t = SSL_table_get(y_46, z_46);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL;
  z_33 = t;
  t = term_b_26;
  a_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_26, z_33);
  t = m_6(a_34, z_33, t);
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_34 = NULL,c_34 = NULL;
        t = eval_config_0_0(t);
        b_34 = t;
        t = term_b_26;
        c_34 = t;
        t = SSL_table_put(c_34, z_33, b_34);
        t = b_34;
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
ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL;
  t = term_a_29;
  f_34 = t;
  t = term_c_17;
  g_34 = t;
  t = term_b_29;
  t = p_6(f_34, g_34, t);
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
ATerm q_5 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL;
  t = term_a_29;
  j_34 = t;
  t = term_c_17;
  k_34 = t;
  t = term_b_29;
  t = p_6(j_34, k_34, t);
  t = term_g_29;
  h_34 = t;
  t = term_c_17;
  i_34 = t;
  t = term_h_29;
  t = p_6(h_34, i_34, t);
  t = term_i_29;
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_5, n_5, o_5, t);
      ;
      LocalPopChoice(l_29);
    }
  else
    {
      t = k_29;
      t = Option_3_0(p_5, q_5, s_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,r_34 = NULL,s_34 = NULL,n_3 = NULL;
  s_34 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_34 = ATgetFirst((ATermList) t);
      n_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_34);
  l_34 = t;
  t = m_34;
  t = o_63(t);
  o_34 = t;
  t = n_34;
  t = p_63(t);
  r_34 = t;
  t = (ATerm) ATinsert(CheckATermList(r_34), o_34);
  n_3 = t;
  t = SSLsetAnnotations(n_3, l_34);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,g_35 = NULL,h_35 = NULL,v_4 = NULL;
  if(((b_35 != NULL) && (b_35 != t)))
    _fail(t);
  else
    b_35 = t;
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_29;
        t = q_93(t);
        ;
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
      }
    t = not_null(b_35);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_35 != NULL) && (d_35 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_35 = ATgetFirst((ATermList) t);
        if(((e_35 != NULL) && (e_35 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          e_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(b_35));
    if(((c_35 != NULL) && (c_35 != t)))
      _fail(t);
    else
      c_35 = t;
    t = term_p_26;
    if(((h_35 != NULL) && (h_35 != t)))
      _fail(t);
    else
      h_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_26, not_null(d_35));
    t = p_6(not_null(h_35), not_null(d_35), t);
    t = not_null(e_35);
    {
      ATerm r_35 (ATerm t)
      {
        ATerm q_29 = t;
        int s_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_29 = t;
            int w_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_35 = NULL;
                k_35 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_35;
                ;
                LocalPopChoice(w_29);
              }
            else
              {
                t = u_29;
                t = q_93(t);
                t = Cons_2_0(_id, r_35, t);
              }
            ;
            LocalPopChoice(s_29);
          }
        else
          {
            t = q_29;
            {
              ATerm n_35 = NULL,o_35 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_35 = ATgetFirst((ATermList) t);
                  o_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_35), (ATerm) ATmakeAppl(sym_Undefined_1, n_35));
            }
          }
        return(t);
      }
      t = r_35(t);
      if(((g_35 != NULL) && (g_35 != t)))
        _fail(t);
      else
        g_35 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(g_35)), (ATerm) ATmakeAppl(sym_Program_1, not_null(d_35)));
      if(((v_4 != NULL) && (v_4 != t)))
        _fail(t);
      else
        v_4 = t;
      t = SSLsetAnnotations(not_null(v_4), not_null(c_35));
    }
  }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm f_36 = NULL;
  f_36 = t;
  if(match_string(t, "--help"))
    {
      t = f_36;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_36;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_36;
        }
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL;
  t = term_f_27;
  g_36 = t;
  t = term_c_17;
  h_36 = t;
  t = term_a_30;
  t = p_6(g_36, h_36, t);
  t = term_b_30;
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm w_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
  if(((y_35 != NULL) && (y_35 != t)))
    _fail(t);
  else
    y_35 = t;
  t = term_c_26;
  if(((c_36 != NULL) && (c_36 != t)))
    _fail(t);
  else
    c_36 = t;
  t = term_d_26;
  if(((d_36 != NULL) && (d_36 != t)))
    _fail(t);
  else
    d_36 = t;
  t = (ATerm) ATempty;
  if(((e_36 != NULL) && (e_36 != t)))
    _fail(t);
  else
    e_36 = t;
  t = SSL_table_put(not_null(c_36), not_null(d_36), not_null(e_36));
  t = not_null(y_35);
  {
    ATerm w_5 (ATerm t)
    {
      ATerm d_30 = t;
      int e_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_93(t);
          ;
          LocalPopChoice(e_30);
        }
      else
        {
          t = d_30;
          {
            ATerm f_30 = t;
            int g_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_6, k_6, s_6, t);
                ;
                LocalPopChoice(g_30);
              }
            else
              {
                t = f_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_5, t);
    {
      ATerm h_30 = t;
      int i_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_36 = NULL;
          o_36 = t;
          {
            ATerm l_30 = t;
            int m_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_13 = NULL;
                t = o_36;
                {
                  ATerm p_30 = t;
                  int q_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_f_27;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(q_30);
                    }
                  else
                    {
                      t = p_30;
                      t = fetch_1_0(w_6, t);
                    }
                  t = o_36;
                  t = default_system_usage_0_0(t);
                  t = term_m_24;
                  h_13 = t;
                  t = SSL_exit(h_13);
                }
                ;
                LocalPopChoice(m_30);
              }
            else
              {
                t = l_30;
                {
                  ATerm r_13 = NULL;
                  t = term_a_29;
                  t = get_config_0_0(t);
                  t = o_36;
                  t = default_system_about_0_0(t);
                  t = term_m_24;
                  r_13 = t;
                  t = SSL_exit(r_13);
                }
              }
          }
          ;
          LocalPopChoice(i_30);
        }
      else
        {
          t = h_30;
          {
            ATerm r_30 = t;
            int u_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
                ATerm x_6 (ATerm t)
                {
                  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,y_4 = NULL;
                  u_36 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      t_36 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_36);
                  s_36 = t;
                  t = t_36;
                  if(((w_35 != NULL) && (w_35 != t)))
                    _fail(t);
                  else
                    w_35 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_36);
                  y_4 = t;
                  t = SSLsetAnnotations(y_4, s_36);
                  return(t);
                }
                t = fetch_1_0(x_6, t);
                t = term_l_15;
                if(((q_36 != NULL) && (q_36 != t)))
                  _fail(t);
                else
                  q_36 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_35)), term_a_31);
                if(((r_36 != NULL) && (r_36 != t)))
                  _fail(t);
                else
                  r_36 = t;
                t = SSL_printnl(not_null(q_36), not_null(r_36));
                t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_35)), term_a_31));
                t = default_system_usage_0_0(t);
                t = term_d_9;
                if(((p_36 != NULL) && (p_36 != t)))
                  _fail(t);
                else
                  p_36 = t;
                t = SSL_exit(not_null(p_36));
                ;
                LocalPopChoice(u_30);
              }
            else
              {
                t = r_30;
              }
          }
        }
      if(((x_35 != NULL) && (x_35 != t)))
        _fail(t);
      else
        x_35 = t;
      t = term_c_26;
      if(((b_36 != NULL) && (b_36 != t)))
        _fail(t);
      else
        b_36 = t;
      t = SSL_table_destroy(not_null(b_36));
      t = not_null(x_35);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
  t = parse_options_1_0(u_91, t);
  z_36 = t;
  t = term_c_31;
  c_37 = t;
  t = SSL_table_create(c_37);
  t = term_c_31;
  a_37 = t;
  t = term_d_31;
  b_37 = t;
  t = SSL_table_put(a_37, b_37, z_36);
  t = z_36;
  t = w_91(t);
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_91, t);
        ;
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        {
          ATerm g_31 = t;
          int h_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_31);
            }
          else
            {
              t = g_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      {
        ATerm k_31 = t;
        int l_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(e_7, f_7, g_7, t);
                  ;
                  LocalPopChoice(n_31);
                }
              else
                {
                  t = m_31;
                  {
                    ATerm o_31 = t;
                    int p_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(p_31);
                      }
                    else
                      {
                        t = o_31;
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
ATerm b_7 (ATerm t)
{
  t = xtc_io_1_0(j_7, t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL;
  t = term_q_31;
  k_37 = t;
  t = term_c_17;
  l_37 = t;
  t = term_r_31;
  t = p_6(k_37, l_37, t);
  t = term_s_31;
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm u_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_37 = NULL,t_37 = NULL;
      t_37 = t;
      if(match_cons(t, sym_FILE_1))
        {
          s_37 = ATgetArgument(t, 0);
          {
            ATerm x_13 = NULL,a_5 = NULL;
            t = SSLgetAnnotations(t_37);
            x_13 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, s_37);
            a_5 = t;
            t = SSLsetAnnotations(a_5, x_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_37;
        }
      LocalPopChoice(z_31);
      t = xtc_transform_file_2_0(o_7, p_7, t);
    }
  else
    {
      t = u_31;
      t = xtc_transform_term_2_0(q_7, r_7, t);
    }
  {
    ATerm a_32 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_37 = NULL,a_38 = NULL;
        a_38 = t;
        if(match_cons(t, sym_FILE_1))
          {
            z_37 = ATgetArgument(t, 0);
            {
              ATerm j_14 = NULL,b_5 = NULL;
              t = SSLgetAnnotations(a_38);
              j_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_37);
              b_5 = t;
              t = SSLsetAnnotations(b_5, j_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_38;
          }
        LocalPopChoice(b_32);
        t = xtc_transform_file_2_0(t_7, build_pp_tables_0_0, t);
      }
    else
      {
        t = a_32;
        t = xtc_transform_term_2_0(v_7, build_pp_tables_0_0, t);
      }
    {
      ATerm f_32 = t;
      int g_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_38 = NULL,h_38 = NULL;
          h_38 = t;
          if(match_cons(t, sym_FILE_1))
            {
              g_38 = ATgetArgument(t, 0);
              {
                ATerm a_15 = NULL,e_5 = NULL;
                t = SSLgetAnnotations(h_38);
                a_15 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, g_38);
                e_5 = t;
                t = SSLsetAnnotations(e_5, a_15);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = h_38;
            }
          LocalPopChoice(g_32);
          t = xtc_transform_file_2_0(x_7, y_7, t);
        }
      else
        {
          t = f_32;
          t = xtc_transform_term_2_0(z_7, c_8, t);
        }
    }
  }
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_h_32;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_h_32;
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_6, default_usage_0_0, _id, b_7, t);
  return(t);
}
