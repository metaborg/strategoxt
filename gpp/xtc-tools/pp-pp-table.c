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
ATerm term_o_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_r_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_q_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_s_28;
ATerm term_v_27;
ATerm term_q_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_e_27;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_k_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_t_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_j_25;
ATerm term_g_25;
ATerm term_e_25;
ATerm term_a_25;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_m_24;
ATerm term_g_24;
ATerm term_y_23;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_g_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_w_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_l_21;
ATerm term_y_20;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_u_19;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_a_18;
ATerm term_t_17;
ATerm term_o_17;
ATerm term_j_17;
ATerm term_c_17;
ATerm term_p_16;
ATerm term_d_16;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_e_13;
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
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_w_11;
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
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_d_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_f_8;
void init_constant_terms (void)
{
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_9, term_m_8, term_k_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_9, term_p_9, term_q_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_9, term_u_9, term_w_9);
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
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_j_10, term_k_10);
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
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_11, term_u_11, term_v_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_a_12, term_c_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_i_12, term_j_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_m_12, term_n_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_q_12, term_r_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_v_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_z_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_e_13, term_f_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_k_13, term_l_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_r_13, term_s_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_y_13);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_f_14, term_g_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_k_14, term_l_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_o_14, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_u_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_z_14, term_b_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_h_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_t_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_y_20);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_a_18, term_p_16);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_f_8, term_u_24);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_24);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym__2, term_j_25, term_o_17);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__2, term_h_26, term_i_26);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_o_17);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym__2, term_h_29, term_o_17);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_o_17);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym__2, term_s_31, term_o_17);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.pp.af", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table.pp.af", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm v_5 (ATerm r_38, ATerm s_38, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm c_6 (ATerm t_27, ATerm u_27, ATerm);
ATerm e_6 (ATerm h_72 (ATerm), ATerm x_180, ATerm b_28, ATerm);
ATerm o_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm);
ATerm f_6 (ATerm p_24, ATerm q_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm w_70 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm e_88 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm i_7 (ATerm u_6, ATerm);
ATerm conc_0_0 (ATerm);
ATerm h_6 (ATerm p_84 (ATerm), ATerm z_39, ATerm x_39, ATerm);
ATerm x_8 (ATerm x_7, ATerm);
ATerm y_8 (ATerm e_8, ATerm i_8, ATerm l_8, ATerm);
ATerm y_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_85 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_85 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_85 (ATerm), ATerm);
ATerm x_5 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm w_34, ATerm v_34, ATerm);
ATerm y_5 (ATerm e_80 (ATerm), ATerm s_34, ATerm r_34, ATerm);
ATerm h_1 (ATerm);
ATerm z_5 (ATerm n_41, ATerm o_41, ATerm p_41, ATerm);
ATerm a_6 (ATerm a_86 (ATerm), ATerm x_41, ATerm w_41, ATerm);
ATerm i_6 (ATerm u_43, ATerm v_43, ATerm);
ATerm d_15 (ATerm t_14, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm b_6 (ATerm z_27, ATerm);
ATerm d_6 (ATerm c_44, ATerm d_44, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm e_17 (ATerm w_15, ATerm);
ATerm f_17 (ATerm c_16, ATerm e_16, ATerm f_16, ATerm);
ATerm g_17 (ATerm q_16, ATerm r_16, ATerm s_16, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm c_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm w_91 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm n_2 (ATerm);
ATerm p_2 (ATerm);
ATerm a_22 (ATerm x_20, ATerm);
ATerm s_2 (ATerm);
ATerm a_3 (ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm j_6 (ATerm v_24, ATerm w_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm k_6 (ATerm v_40, ATerm w_40, ATerm);
ATerm end_scope_1_0 (ATerm m_84 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_84 (ATerm), ATerm);
ATerm g_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_87 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm xtc_io_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm s_6 (ATerm q_42, ATerm r_42, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm q_6 (ATerm q_40, ATerm r_40, ATerm p_40, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm l_6 (ATerm l_38, ATerm m_38, ATerm);
ATerm foldr_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_85 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm c_5 (ATerm);
ATerm need_help_1_0 (ATerm s_89 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm e_5 (ATerm);
ATerm g_5 (ATerm);
ATerm j_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm o_6 (ATerm u_58, ATerm v_58, ATerm);
ATerm debug_1_0 (ATerm f_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm p_6 (ATerm h_42, ATerm i_42, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm w_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_91 (ATerm), ATerm);
ATerm n_6 (ATerm);
ATerm r_6 (ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm parse_options_1_0 (ATerm p_91 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm k_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm io_pp_pp_table_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm v_5 (ATerm r_38, ATerm s_38, ATerm t)
{
  ATerm v_4 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(r_38, s_38);
      ;
      LocalPopChoice(d_8);
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
  ATerm b_0 = NULL,f_0 = NULL,n_0 = NULL,r_0 = NULL;
  t = term_f_8;
  {
    ATerm g_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(k_8);
      }
    else
      {
        t = g_8;
        t = term_m_8;
      }
    f_0 = t;
    t = term_m_8;
    r_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_0, term_m_8);
    t = v_5(f_0, r_0, t);
    n_0 = t;
    t = SSL_int_to_string(n_0);
    b_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, b_0), term_f_8);
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
      ATerm c_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_q_8);
      c_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_0, (ATerm) ATinsert(ATempty, term_q_8));
      t = i_6(w_0, c_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm c_6 (ATerm t_27, ATerm u_27, ATerm t)
{
  ATerm d_1 = NULL;
  t = SSL_write_term_to_stream_baf(t_27, u_27);
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_1);
  return(t);
}
ATerm e_6 (ATerm h_72 (ATerm), ATerm x_180, ATerm b_28, ATerm t)
{
  ATerm e_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_180, term_r_8);
  t = open_stream_0_0(t);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_1, b_28);
  t = h_72(t);
  t = fclose_0_0(t);
  t = b_28;
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm q_1 = NULL,w_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_8 = ATgetArgument(t, 0);
      if(match_cons(s_8, sym_Stream_1))
        {
          q_1 = ATgetArgument(s_8, 0);
        }
      else
        _fail(t);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(q_1, w_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm g_1 = NULL,p_1 = NULL;
  g_1 = t;
  t = xtc_new_file_0_0(t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_1, g_1);
  t = e_6(o_0, p_1, g_1, t);
  t = SSL_close_file(p_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, p_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_88, o_88, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm f_6 (ATerm p_24, ATerm q_24, ATerm t)
{
  t = SSL_execvp(p_24, q_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
  t_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      u_2 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,t_0 = NULL;
        t = SSL_int_to_string(u_2);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_8), s_0), term_t_8);
        t_0 = t;
        t = SSL_concat_strings(t_0);
      }
    }
  else
    {
      ATerm k_1 = NULL,l_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          u_2 = ATgetArgument(t, 0);
          v_2 = ATgetArgument(t, 1);
          w_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(v_2);
      k_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_2), term_d_9), k_1), term_a_9), u_2);
      l_1 = t;
      t = SSL_concat_strings(l_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm b_3 = NULL;
  ATerm p_0 (ATerm t)
  {
    t = m_76(t);
    if(((b_3 != NULL) && (b_3 != t)))
      _fail(t);
    else
      b_3 = t;
    return(t);
  }
  t = fetch_1_0(p_0, t);
  t = not_null(b_3);
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
        ATerm q_0 (ATerm t)
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_15), term_c_15), term_v_14), term_q_14), term_m_14), term_h_14), term_c_14), term_v_13), term_m_13), term_i_13), term_a_13), term_w_12), term_s_12), term_o_12), term_k_12), term_d_12), term_w_11), term_r_11), term_l_11), term_e_11), term_w_10), term_r_10), term_m_10), term_h_10), term_d_10), term_x_9), term_r_9), term_l_9);
        t = fetch_elem_1_0(q_0, t);
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
  ATerm k_3 = NULL,u_3 = NULL;
  k_3 = t;
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_15 = ATgetArgument(t, 0);
            u_3 = ATgetArgument(t, 1);
            {
              ATerm p_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(m_15);
        {
          ATerm q_15 = t;
          int r_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_1 = NULL,v_1 = NULL,x_1 = NULL;
              t = u_3;
              {
                ATerm s_15 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_15;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                t_1 = t;
                t = term_t_15;
                v_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, t_1), term_u_15);
                x_1 = t;
                t = SSL_printnl(v_1, x_1);
                t = (ATerm) ATmakeAppl(sym__2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, t_1), term_u_15));
              }
              ;
              LocalPopChoice(r_15);
            }
          else
            {
              t = q_15;
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
ATerm fork_and_wait_1_0 (ATerm w_70 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  e_4 = t;
  t = fork_0_0(t);
  d_4 = t;
  {
    ATerm v_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_4;
        t = w_70(t);
        ;
        LocalPopChoice(y_15);
      }
    else
      {
        t = v_15;
        t = SSL_waitpid(d_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_15 = ATgetArgument(t, 0);
            if(((ATgetType(z_15) != AT_INT) || (ATgetInt((ATermInt) z_15) != 0)))
              _fail(t);
            {
              ATerm a_16 = ATgetArgument(t, 1);
            }
            {
              ATerm b_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL;
  if(((j_4 != NULL) && (j_4 != t)))
    _fail(t);
  else
    j_4 = t;
  t = e_88(t);
  t = xtc_find_0_0(t);
  if(((i_4 != NULL) && (i_4 != t)))
    _fail(t);
  else
    i_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_4), not_null(j_4));
  {
    ATerm u_0 (ATerm t)
    {
      ATerm k_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_4), not_null(j_4));
      t = f_6(not_null(i_4), not_null(j_4), t);
      t = term_d_16;
      k_4 = t;
      t = SSL_exit(k_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
    t = not_null(j_4);
  }
  return(t);
}
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
    o_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_5 = ATgetFirst((ATermList) t);
        n_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_2 = NULL,z_2 = NULL,b_2 = NULL;
          t = SSLgetAnnotations(o_5);
          g_2 = t;
          t = n_5;
          t = q_5(t);
          z_2 = t;
          t = (ATerm) ATinsert(CheckATermList(z_2), m_5);
          b_2 = t;
          t = SSLsetAnnotations(b_2, g_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_5;
        t = q_76(t);
      }
    return(t);
  }
  t = q_5(t);
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
      t = not_null(n_4);
      t = at_end_1_0(v_0, t);
    }
  return(t);
}
ATerm i_7 (ATerm u_6, ATerm t)
{
  ATerm v_6 = NULL;
  t = SSL_explode_term(u_6);
  if(match_cons(t, sym__2))
    {
      ATerm i_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,c_7 = NULL;
  if(((c_7 != NULL) && (c_7 != t)))
    _fail(t);
  else
    c_7 = t;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
      {
        ATerm j_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              t = not_null(a_7);
              return(t);
            }
            t = not_null(z_6);
            t = at_end_1_0(x_0, t);
            ;
            LocalPopChoice(l_16);
          }
        else
          {
            t = j_16;
            t = i_7(not_null(c_7), t);
          }
      }
    }
  else
    {
      t = i_7(not_null(c_7), t);
    }
  return(t);
}
ATerm h_6 (ATerm p_84 (ATerm), ATerm z_39, ATerm x_39, ATerm t)
{
  ATerm j_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  n_7 = t;
  t = p_84(t);
  j_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_7, z_39, x_39);
  t = q_6(j_7, z_39, x_39, t);
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_7 = NULL;
        t = term_p_16;
        q_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_7, term_p_16);
        t = p_6(j_7, q_7, t);
        ;
        LocalPopChoice(n_16);
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
    t = term_p_16;
    o_7 = t;
    t = (ATerm) ATinsert(CheckATermList(m_7), (ATerm) ATinsert(CheckATermList(l_7), z_39));
    p_7 = t;
    t = SSL_table_put(j_7, o_7, p_7);
    t = n_7;
  }
  return(t);
}
ATerm x_8 (ATerm x_7, ATerm t)
{
  t = x_7;
  {
    ATerm w_16 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_16 = ATgetArgument(t, 0);
            ATerm z_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_16;
      }
    t = term_c_17;
    t = debug_1_0(y_0, t);
    t = (ATerm) ATmakeAppl(sym__2, x_7, term_r_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm y_8 (ATerm e_8, ATerm i_8, ATerm l_8, ATerm t)
{
  t = SSL_open_file(e_8, i_8);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_j_17;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,w_8 = NULL;
  o_8 = t;
  if(match_cons(t, sym__2))
    {
      p_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
      {
        ATerm l_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_8(o_8, t);
            ;
            LocalPopChoice(m_17);
          }
        else
          {
            t = l_17;
            t = y_8(p_8, w_8, o_8, t);
          }
      }
    }
  else
    {
      t = x_8(o_8, t);
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
  ATerm f_9 = NULL,n_9 = NULL,o_9 = NULL;
  t = term_o_17;
  t = new_0_0(t);
  f_9 = t;
  t = term_t_17;
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_9, term_t_17);
  t = o_6(f_9, n_9, t);
  o_9 = t;
  {
    ATerm w_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_q_8);
        v_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_9, (ATerm) ATinsert(ATempty, term_q_8));
        t = i_6(o_9, v_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = w_17;
        t = o_9;
      }
  }
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_a_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL;
  t = new_file_0_0(t);
  y_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_9, term_r_8);
  t = open_file_0_0(t);
  t = term_o_17;
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_9, term_o_17);
  t = h_6(z_0, y_9, z_9, t);
  t = y_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm v_10 = NULL,x_10 = NULL;
  v_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_3 = NULL,i_3 = NULL;
      t = v_10;
      t = xtc_new_file_0_0(t);
      h_3 = t;
      t = m_0(t);
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATinsert(ATinsert(ATempty, h_3), term_t_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(h_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_3);
    }
  else
    {
      ATerm v_3 = NULL,y_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          x_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_10;
      t = xtc_new_file_0_0(t);
      v_3 = t;
      t = m_0(t);
      y_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_3), term_t_18), x_10), term_v_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(v_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_3);
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
    t = p_6(not_null(a_11), b_11, t);
    c_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_11, c_11);
    return(t);
  }
  if(((a_11 != NULL) && (a_11 != t)))
    _fail(t);
  else
    a_11 = t;
  t = SSL_table_keys(not_null(a_11));
  t = map_1_0(a_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm g_11 = NULL;
  g_11 = t;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_11 = NULL;
        t = term_f_8;
        t = get_config_0_0(t);
        j_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_11, term_o_14);
        t = geq_0_0(t);
        t = g_11;
        t = x_85(t);
        ;
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = g_11;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  ATerm q_11 = NULL;
  q_11 = t;
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_11 = NULL;
        t = term_f_8;
        t = get_config_0_0(t);
        s_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_11, term_u_11);
        t = geq_0_0(t);
        t = q_11;
        t = w_85(t);
        ;
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        t = q_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm x_11 = NULL;
  x_11 = t;
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_11 = NULL;
        t = term_f_8;
        t = get_config_0_0(t);
        z_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_11, term_b_10);
        t = geq_0_0(t);
        t = x_11;
        t = y_85(t);
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
        t = x_11;
      }
  }
  return(t);
}
ATerm x_5 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm w_34, ATerm v_34, ATerm t)
{
  t = i_80(t);
  {
    ATerm b_1 (ATerm t)
    {
      ATerm g_12 = NULL;
      g_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_34), g_12);
      t = h_80(t);
      return(t);
    }
    t = fetch_1_0(b_1, t);
    t = not_null(v_34);
  }
  return(t);
}
ATerm y_5 (ATerm e_80 (ATerm), ATerm s_34, ATerm r_34, ATerm t)
{
  ATerm n_13 (ATerm t)
  {
    ATerm c_13 = NULL,d_13 = NULL,h_13 = NULL;
    c_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(r_34);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_13 = ATgetFirst((ATermList) t);
            h_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_13;
              {
                ATerm f_1 (ATerm t)
                {
                  t = not_null(r_34);
                  return(t);
                }
                t = x_5(e_80, f_1, not_null(d_13), not_null(h_13), t);
                t = n_13(t);
              }
              ;
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              {
                ATerm q_4 = NULL,w_4 = NULL,d_2 = NULL;
                t = SSLgetAnnotations(c_13);
                q_4 = t;
                t = h_13;
                t = n_13(t);
                w_4 = t;
                t = (ATerm) ATinsert(CheckATermList(w_4), d_13);
                d_2 = t;
                t = SSLsetAnnotations(d_2, q_4);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(s_34);
  t = n_13(t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm z_13 = NULL;
  if(match_cons(t, sym__2))
    {
      z_13 = ATgetArgument(t, 0);
      if((z_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm z_5 (ATerm n_41, ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm q_13 = NULL,t_13 = NULL,u_13 = NULL;
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_19 = ATgetArgument(t, 0);
            ATerm i_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
        t = p_6(n_41, o_41, t);
        ;
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = (ATerm) ATempty;
      }
    u_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_13, p_41);
    t = y_5(h_1, u_13, p_41, t);
    t_13 = t;
    t = SSL_table_put(n_41, o_41, t_13);
    t = q_13;
  }
  return(t);
}
ATerm a_6 (ATerm a_86 (ATerm), ATerm x_41, ATerm w_41, ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm b_14 = NULL,e_14 = NULL;
    if(match_cons(t, sym__2))
      {
        b_14 = ATgetArgument(t, 0);
        e_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(x_41), b_14, e_14);
    t = a_86(t);
    return(t);
  }
  t = not_null(w_41);
  t = map_1_0(i_1, t);
  return(t);
}
ATerm i_6 (ATerm u_43, ATerm v_43, ATerm t)
{
  t = SSL_access(u_43, v_43);
  return(t);
}
ATerm d_15 (ATerm t_14, ATerm t)
{
  t = SSL_fclose(t_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_14 = NULL,a_15 = NULL;
  a_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_14 = ATgetArgument(t, 0);
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_14);
            ;
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            t = d_15(a_15, t);
          }
      }
    }
  else
    {
      t = d_15(a_15, t);
    }
  return(t);
}
ATerm b_6 (ATerm z_27, ATerm t)
{
  t = SSL_read_term_from_stream(z_27);
  return(t);
}
ATerm d_6 (ATerm c_44, ATerm d_44, ATerm t)
{
  ATerm g_15 = NULL;
  t = SSL_fopen(c_44, d_44);
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_15);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_15 = NULL;
  t = SSL_stdin_stream();
  j_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_15);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_15 = NULL;
  t = SSL_stdout_stream();
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_15);
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
ATerm e_17 (ATerm w_15, ATerm t)
{
  ATerm x_15 = NULL;
  t = SSL_explode_term(w_15);
  if(match_cons(t, sym__2))
    {
      ATerm l_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_19 = ATgetArgument(t, 1);
        if(((ATgetType(m_19) == AT_LIST) && !(ATisEmpty(m_19))))
          {
            x_15 = ATgetFirst((ATermList) m_19);
            {
              ATerm n_19 = (ATerm) ATgetNext((ATermList) m_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm f_17 (ATerm c_16, ATerm e_16, ATerm f_16, ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,k_16 = NULL,o_16 = NULL,h_2 = NULL;
  t = SSLgetAnnotations(f_16);
  k_16 = t;
  t = c_16;
  if(match_cons(t, sym_Path_1))
    {
      o_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_16, e_16);
  h_2 = t;
  t = SSLsetAnnotations(h_2, k_16);
  if(match_cons(t, sym__2))
    {
      g_16 = ATgetArgument(t, 0);
      h_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(g_16, h_16, t);
  return(t);
}
ATerm g_17 (ATerm q_16, ATerm r_16, ATerm s_16, ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,y_16 = NULL,i_2 = NULL;
  t = SSLgetAnnotations(s_16);
  v_16 = t;
  t = SSL_is_string(q_16);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_16, r_16);
  i_2 = t;
  t = SSLsetAnnotations(i_2, v_16);
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(t_16, u_16, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,d_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_19 = ATgetArgument(t, 0);
      ATerm p_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  a_17 = t;
  if(match_cons(t, sym__2))
    {
      b_17 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_17(a_17, t);
            ;
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            {
              ATerm s_19 = t;
              int t_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_17(b_17, d_17, a_17, t);
                  ;
                  LocalPopChoice(t_19);
                }
              else
                {
                  t = s_19;
                  t = g_17(b_17, d_17, a_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_17(a_17, t);
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,k_17 = NULL;
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_17 = NULL;
      n_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_17, term_a_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      t = debug_1_0(j_1, t);
      _fail(t);
    }
  i_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_6(k_17, t);
  h_17 = t;
  t = i_17;
  t = fclose_0_0(t);
  t = h_17;
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_17 = NULL,q_17 = NULL;
      p_17 = t;
      t = (ATerm) ATinsert(ATempty, term_f_20);
      q_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_17, (ATerm) ATinsert(ATempty, term_f_20));
      t = i_6(p_17, q_17, t);
      LocalPopChoice(e_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_20;
      {
        ATerm g_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_20 = t;
            if((PushChoice() == 0))
              {
                ATerm r_17 = NULL,s_17 = NULL;
                r_17 = t;
                t = (ATerm) ATinsert(ATempty, term_q_8);
                s_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_17, (ATerm) ATinsert(ATempty, term_q_8));
                t = i_6(r_17, s_17, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_20;
              }
            t = debug_1_0(m_1, t);
            ;
            LocalPopChoice(l_20);
          }
        else
          {
            t = g_20;
            t = debug_1_0(n_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_q_20;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_s_20;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  j_18 = t;
  t = term_t_15;
  k_18 = t;
  t = (ATerm) ATinsert(ATempty, term_t_20);
  l_18 = t;
  t = SSL_printnl(k_18, l_18);
  t = j_18;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
  if(match_cons(t, sym__3))
    {
      m_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
      o_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_5(m_18, n_18, o_18, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  p_18 = t;
  t = term_t_15;
  q_18 = t;
  t = (ATerm) ATinsert(ATempty, term_u_20);
  r_18 = t;
  t = SSL_printnl(q_18, r_18);
  t = p_18;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm s_18 = NULL,u_18 = NULL,w_18 = NULL;
  s_18 = t;
  t = term_t_15;
  u_18 = t;
  t = (ATerm) ATinsert(ATempty, term_t_20);
  w_18 = t;
  t = SSL_printnl(u_18, w_18);
  t = s_18;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,x_17 = NULL,z_17 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
  u_17 = t;
  t = if_verbose5_1_0(o_1, t);
  {
    ATerm v_20 = t;
    if((PushChoice() == 0))
      {
        ATerm h_18 = NULL,i_18 = NULL;
        t = term_w_20;
        h_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, u_17);
        i_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_20, (ATerm) ATmakeAppl(sym_Imported_1, u_17));
        t = p_6(h_18, i_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_20;
      }
    x_17 = t;
    t = term_w_20;
    e_18 = t;
    t = term_y_20;
    f_18 = t;
    t = (ATerm) ATinsert(ATempty, u_17);
    g_18 = t;
    t = SSL_table_put(e_18, f_18, g_18);
    t = x_17;
    t = if_verbose4_1_0(s_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(y_1, t);
    v_17 = t;
    t = term_w_20;
    d_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_20, v_17);
    t = a_6(z_1, d_18, v_17, t);
    t = if_verbose6_1_0(a_2, t);
    t = term_w_20;
    z_17 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, u_17);
    b_18 = t;
    t = (ATerm) ATempty;
    c_18 = t;
    t = SSL_table_put(z_17, b_18, c_18);
    t = (ATerm) ATmakeAppl(sym__3, term_w_20, (ATerm)ATmakeAppl(sym_Imported_1, u_17), (ATerm) ATempty);
    t = if_verbose4_1_0(c_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
  v_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_19 = ATgetFirst((ATermList) t);
          x_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_6 = NULL,t_6 = NULL,x_6 = NULL,l_2 = NULL;
            t = SSLgetAnnotations(v_19);
            m_6 = t;
            t = w_19;
            t = v_83(t);
            t_6 = t;
            t = x_19;
            t = filter_1_0(v_83, t);
            x_6 = t;
            t = (ATerm) ATinsert(CheckATermList(x_6), t_6);
            l_2 = t;
            t = SSLsetAnnotations(l_2, m_6);
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            t = x_19;
            t = filter_1_0(v_83, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm h_20 (ATerm t)
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_91(t);
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
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_21);
    }
  else
    {
      t = h_21;
      {
        ATerm m_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_20 = NULL;
            t = term_q_21;
            i_20 = t;
            t = SSL_getenv(i_20);
            ;
            LocalPopChoice(p_21);
          }
        else
          {
            t = m_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm p_20 = NULL,r_20 = NULL;
  t = term_w_20;
  p_20 = t;
  t = term_t_21;
  r_20 = t;
  t = term_u_21;
  t = p_6(p_20, r_20, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm v_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_21;
      }
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
  t = term_w_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm j_20 = NULL;
  t = if_verbose5_1_0(e_2, t);
  j_20 = t;
  {
    ATerm x_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_20 = NULL,n_20 = NULL;
        t = term_w_20;
        k_20 = t;
        t = term_y_20;
        n_20 = t;
        t = term_b_22;
        t = p_6(k_20, n_20, t);
        ;
        LocalPopChoice(z_21);
      }
    else
      {
        t = x_21;
        {
          ATerm o_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          o_20 = t;
          t = repeat_1_0(j_2, t);
          t = o_20;
        }
      }
    t = j_20;
    t = if_verbose5_1_0(k_2, t);
  }
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm a_22 (ATerm x_20, ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
  t = term_w_20;
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_20);
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_20, (ATerm) ATmakeAppl(sym_Tool_1, x_20));
  t = p_6(e_21, f_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_22 = ATgetFirst((ATermList) t);
      if(match_cons(d_22, sym__2))
        {
          ATerm f_22 = ATgetArgument(d_22, 0);
          d_21 = ATgetArgument(d_22, 1);
        }
      else
        _fail(t);
      {
        ATerm e_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_21;
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = debug_1_0(a_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_w_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(e_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_g_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_21 = NULL,j_21 = NULL,k_21 = NULL;
      t = if_verbose5_1_0(n_2, t);
      t = xtc_load_0_0(t);
      if(((k_21 != NULL) && (k_21 != t)))
        _fail(t);
      else
        k_21 = t;
      if(match_cons(t, sym__2))
        {
          g_21 = ATgetArgument(t, 0);
          j_21 = ATgetArgument(t, 1);
          {
            ATerm j_22 = t;
            int k_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_21 = NULL,o_21 = NULL,r_21 = NULL;
                t = term_w_20;
                if(((o_21 != NULL) && (o_21 != t)))
                  _fail(t);
                else
                  o_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(g_21));
                if(((r_21 != NULL) && (r_21 != t)))
                  _fail(t);
                else
                  r_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_20, (ATerm) ATmakeAppl(sym_Tool_1, not_null(g_21)));
                t = p_6(not_null(o_21), not_null(r_21), t);
                {
                  ATerm q_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((j_21 != NULL) && (j_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          j_21 = ATgetArgument(t, 0);
                        if(((n_21 != NULL) && (n_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          n_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(q_2, t);
                  t = not_null(n_21);
                }
                ;
                LocalPopChoice(k_22);
              }
            else
              {
                t = j_22;
                t = a_22(not_null(k_21), t);
              }
          }
        }
      else
        {
          t = a_22(not_null(k_21), t);
        }
      t = if_verbose5_1_0(s_2, t);
      ;
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      {
        ATerm y_21 = NULL,r_7 = NULL,s_7 = NULL;
        y_21 = t;
        t = term_t_15;
        r_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_22), y_21), term_l_22);
        s_7 = t;
        t = SSL_printnl(r_7, s_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_22), y_21), term_l_22);
        t = if_verbose5_1_0(c_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm j_6 (ATerm v_24, ATerm w_24, ATerm t)
{
  t = SSL_copy(v_24, w_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL;
  t_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      u_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL;
        t = t_22;
        t = k_0(t);
        y_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = y_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = y_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, u_22, y_7);
        t = j_6(u_22, y_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, u_22);
        ;
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
        {
          ATerm p_22 = t;
          int q_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_8 = NULL;
              t = t_22;
              t = k_0(t);
              h_8 = t;
              {
                ATerm r_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm j_8 = NULL;
                    j_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = j_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = j_8;
                          }
                        else
                          {
                            t = j_8;
                            if((u_22 != t))
                              {
                                _fail(t);
                              }
                            t = j_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_22;
                  }
                t = (ATerm) ATmakeAppl(sym__2, u_22, h_8);
                t = j_6(u_22, h_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, u_22);
              }
              ;
              LocalPopChoice(q_22);
            }
          else
            {
              t = p_22;
              t = t_22;
              t = k_0(t);
              if((u_22 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_22);
            }
        }
      }
  }
  return(t);
}
ATerm k_6 (ATerm v_40, ATerm w_40, ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL;
  z_22 = t;
  {
    ATerm s_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
        t = p_6(v_40, w_40, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_22 = ATgetFirst((ATermList) t);
            y_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_22);
        t = SSL_table_put(v_40, w_40, y_22);
        t = (ATerm) ATmakeAppl(sym__3, v_40, w_40, y_22);
      }
    else
      {
        t = s_22;
        t = SSL_table_remove(v_40, w_40);
        t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
      }
    t = z_22;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,d_23 = NULL,f_23 = NULL,g_23 = NULL;
  if(((f_23 != NULL) && (f_23 != t)))
    _fail(t);
  else
    f_23 = t;
  t = m_84(t);
  if(((d_23 != NULL) && (d_23 != t)))
    _fail(t);
  else
    d_23 = t;
  {
    ATerm x_22 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_23 = NULL;
        t = term_p_16;
        h_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_23), term_p_16);
        t = p_6(not_null(d_23), h_23, t);
        ;
        LocalPopChoice(c_23);
      }
    else
      {
        t = x_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((b_23 != NULL) && (b_23 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          b_23 = ATgetFirst((ATermList) t);
        if(((a_23 != NULL) && (a_23 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          a_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_p_16;
    if(((g_23 != NULL) && (g_23 != t)))
      _fail(t);
    else
      g_23 = t;
    t = SSL_table_put(not_null(d_23), not_null(g_23), not_null(a_23));
    t = not_null(b_23);
    {
      ATerm f_3 (ATerm t)
      {
        ATerm i_23 = NULL;
        i_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_23), i_23);
        t = k_6(not_null(d_23), i_23, t);
        return(t);
      }
      t = map_1_0(f_3, t);
      t = not_null(f_23);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t)
{
  ATerm e_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_85(t);
      t = i_85(t);
      ;
      LocalPopChoice(j_23);
    }
  else
    {
      t = e_23;
      t = i_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  l_23 = t;
  t = l_84(t);
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_23, term_p_16);
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_23 = ATgetArgument(t, 0);
            ATerm s_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_p_16;
        v_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_23, term_p_16);
        t = p_6(k_23, v_23, t);
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = (ATerm) ATempty;
      }
    o_23 = t;
    t = term_p_16;
    p_23 = t;
    t = (ATerm) ATinsert(CheckATermList(o_23), (ATerm) ATempty);
    q_23 = t;
    t = SSL_table_put(k_23, p_23, q_23);
    t = l_23;
  }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_a_18;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm h_24 = NULL;
  h_24 = t;
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(h_24);
        ;
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        t = h_24;
      }
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_a_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm z_23 = NULL;
  ATerm j_3 (ATerm t)
  {
    ATerm b_24 = NULL;
    b_24 = t;
    {
      ATerm w_23 = t;
      int x_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_24 = NULL,e_24 = NULL;
          t = term_a_18;
          c_24 = t;
          t = term_p_16;
          e_24 = t;
          t = term_y_23;
          t = p_6(c_24, e_24, t);
          ;
          LocalPopChoice(x_23);
        }
      else
        {
          t = w_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((z_23 != NULL) && (z_23 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            z_23 = ATgetFirst((ATermList) t);
          {
            ATerm a_24 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(z_23);
      t = map_1_0(l_3, t);
      t = b_24;
      t = end_scope_1_0(m_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(g_3, t);
  t = restore_always_2_0(q_87, j_3, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm d_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = d_24;
      t = term_g_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_24 = NULL;
        t = term_v_18;
        t = get_config_0_0(t);
        k_24 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_24);
        ;
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        t = term_n_8;
      }
    t = r_87(t);
    t = copy_to_1_0(p_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(n_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_24 = NULL,n_24 = NULL,o_24 = NULL,y_24 = NULL,z_24 = NULL;
  l_24 = t;
  t = term_o_17;
  t = whoami_0_0(t);
  n_24 = t;
  t = term_t_15;
  y_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_24), n_24), term_m_24);
  z_24 = t;
  t = SSL_printnl(y_24, z_24);
  t = term_m_8;
  o_24 = t;
  t = SSL_exit(o_24);
  t = l_24;
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm b_25 = NULL;
  b_25 = t;
  if(match_string(t, "-k"))
    {
      t = b_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_25;
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,f_25 = NULL;
  c_25 = t;
  t = SSL_string_to_int(c_25);
  d_25 = t;
  t = term_s_24;
  f_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_24, d_25);
  t = s_6(f_25, d_25, t);
  t = c_25;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_t_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_3, r_3, t_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
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
ATerm x_3 (ATerm t)
{
  ATerm i_25 = NULL,k_25 = NULL;
  t = term_f_8;
  i_25 = t;
  t = term_u_24;
  k_25 = t;
  t = term_x_24;
  t = s_6(i_25, k_25, t);
  t = term_a_25;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_e_25;
  return(t);
}
ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm l_25 = NULL,o_25 = NULL,p_25 = NULL;
  l_25 = t;
  t = SSL_string_to_int(l_25);
  o_25 = t;
  t = term_f_8;
  p_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_8, o_25);
  t = s_6(p_25, o_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_25);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_g_25;
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
  ATerm q_25 = NULL,r_25 = NULL;
  t = term_j_25;
  q_25 = t;
  t = term_o_17;
  r_25 = t;
  t = term_m_25;
  t = s_6(q_25, r_25, t);
  t = term_n_25;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_3, x_3, z_3, t);
      ;
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
      {
        ATerm b_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_4, b_4, c_4, t);
            ;
            LocalPopChoice(c_26);
          }
        else
          {
            t = b_26;
            t = Option_3_0(f_4, g_4, h_4, t);
          }
      }
    }
  return(t);
}
ATerm s_6 (ATerm q_42, ATerm r_42, ATerm t)
{
  ATerm s_25 = NULL;
  t = term_e_26;
  s_25 = t;
  t = SSL_table_put(s_25, q_42, r_42);
  t = (ATerm) ATmakeAppl(sym__3, term_e_26, q_42, r_42);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
      t = term_o_17;
      t = d_0(t);
      y_25 = t;
      t = term_h_26;
      z_25 = t;
      t = term_i_26;
      a_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_26, term_i_26, y_25);
      t = q_6(z_25, a_26, y_25, t);
      _fail(t);
    }
  else
    {
      ATerm d_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_25 = ATgetFirst((ATermList) t);
          x_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_25;
      t = a_0(t);
      t = term_o_17;
      t = c_0(t);
      d_26 = t;
      t = (ATerm) ATinsert(CheckATermList(x_25), d_26);
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  if(match_string(t, "-o"))
    {
      t = f_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_26;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm g_26 = NULL,j_26 = NULL;
  g_26 = t;
  t = term_t_18;
  j_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_18, g_26);
  t = s_6(j_26, g_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_26);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, p_4, r_4, t);
  return(t);
}
ATerm q_6 (ATerm q_40, ATerm r_40, ATerm p_40, ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_26 = ATgetArgument(t, 0);
            ATerm r_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
        t = p_6(q_40, r_40, t);
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = (ATerm) ATempty;
      }
    o_26 = t;
    t = (ATerm) ATinsert(CheckATermList(o_26), p_40);
    p_26 = t;
    t = SSL_table_put(q_40, r_40, p_26);
    t = n_26;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm f_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_27 = NULL,r_27 = NULL,s_27 = NULL;
      t = term_o_17;
      t = j_0(t);
      o_27 = t;
      t = term_h_26;
      r_27 = t;
      t = term_i_26;
      s_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_26, term_i_26, o_27);
      t = q_6(r_27, s_27, o_27, t);
      _fail(t);
    }
  else
    {
      ATerm c_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_27 = ATgetFirst((ATermList) t);
          i_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_27 = ATgetFirst((ATermList) t);
          k_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_27;
      t = h_0(t);
      t = j_27;
      t = i_0(t);
      c_28 = t;
      t = (ATerm) ATinsert(CheckATermList(k_27), c_28);
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm e_28 = NULL;
  e_28 = t;
  if(match_string(t, "-i"))
    {
      t = e_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_28;
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL;
  f_28 = t;
  t = term_v_18;
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_18, f_28);
  t = s_6(g_28, f_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_28);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_s_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_4, t_4, u_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_17;
  t = whoami_0_0(t);
  h_28 = t;
  t = term_t_15;
  j_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_26), h_28);
  k_28 = t;
  t = SSL_printnl(j_28, k_28);
  t = term_m_8;
  i_28 = t;
  t = SSL_exit(i_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm l_6 (ATerm l_38, ATerm m_38, ATerm t)
{
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_38, m_38);
      ;
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      t = SSL_addr(l_38, m_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
  m_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_28;
      t = s_82(t);
    }
  else
    {
      ATerm r_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_28 = ATgetFirst((ATermList) t);
          o_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_28;
      t = foldr_2_0(s_82, t_82, t);
      r_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_28, r_28);
      t = t_82(t);
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
  t = term_u_24;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL;
  if(match_cons(t, sym__2))
    {
      b_9 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_6(b_9, c_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_28 = NULL,u_8 = NULL,v_8 = NULL;
  t = times_0_0(t);
  v_8 = t;
  t = SSL_explode_term(v_8);
  if(match_cons(t, sym__2))
    {
      ATerm x_26 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8;
  t = foldr_2_0(x_4, y_4, t);
  u_28 = t;
  t = SSL_TicksToSeconds(u_28);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,j_29 = NULL;
  f_29 = t;
  if(match_cons(t, sym__2))
    {
      g_29 = ATgetArgument(t, 0);
      j_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_29;
        if((g_29 != t))
          {
            _fail(t);
          }
        t = f_29;
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATmakeAppl(sym__2, g_29, j_29);
        {
          ATerm a_27 = t;
          int b_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_29, j_29);
              ;
              LocalPopChoice(b_27);
            }
          else
            {
              t = a_27;
              t = SSL_gtr(g_29, j_29);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_29, j_29);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_85 (ATerm), ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_30 = NULL;
        t = term_f_8;
        t = get_config_0_0(t);
        b_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_30, term_m_8);
        t = geq_0_0(t);
        t = z_29;
        t = t_85(t);
        ;
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        t = z_29;
      }
  }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm d_30 = NULL,g_30 = NULL,i_30 = NULL,j_30 = NULL;
  t = run_time_0_0(t);
  d_30 = t;
  t = term_o_17;
  t = whoami_0_0(t);
  g_30 = t;
  t = term_t_15;
  i_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_27), d_30), term_a_9), g_30);
  j_30 = t;
  t = SSL_printnl(i_30, j_30);
  t = (ATerm) ATmakeAppl(sym__2, term_t_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_27), d_30), term_a_9), g_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_24;
  k_30 = t;
  t = SSL_exit(k_30);
  return(t);
}
ATerm c_5 (ATerm t)
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
            ATerm s_9 = NULL,o_2 = NULL;
            t = SSLgetAnnotations(t_30);
            s_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_30);
            o_2 = t;
            t = SSLsetAnnotations(o_2, s_9);
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
ATerm need_help_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      t = fetch_1_0(c_5, t);
    }
  t = s_89(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_30 = ATgetFirst((ATermList) t);
      x_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_31 = NULL,c_31 = NULL;
        ATerm d_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_31)), not_null(c_31));
          return(t);
        }
        t = not_null(x_30);
        t = g_0(t);
        if(((b_31 != NULL) && (b_31 != t)))
          _fail(t);
        else
          b_31 = t;
        t = not_null(w_30);
        t = e_0(t);
        if(((c_31 != NULL) && (c_31 != t)))
          _fail(t);
        else
          c_31 = t;
        t = not_null(x_30);
        t = reverse_acc_2_0(e_0, d_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_17;
      t = g_0(t);
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,r_2 = NULL;
  i_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_31);
  g_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_31);
  r_2 = t;
  t = SSLsetAnnotations(r_2, g_31);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm k_31 = NULL;
  k_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_31), term_m_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL;
  ATerm n_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_27);
    }
  else
    {
      t = n_27;
      t = fetch_1_0(e_5, t);
    }
  t = term_q_27;
  t = echo_0_0(t);
  t = term_h_26;
  e_31 = t;
  t = term_i_26;
  f_31 = t;
  t = term_v_27;
  t = p_6(e_31, f_31, t);
  t = reverse_acc_2_0(_id, g_5, t);
  t = map_1_0(j_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm h_32 (ATerm t)
  {
    ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
    e_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_32 = ATgetFirst((ATermList) t);
        g_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_27 = t;
      int x_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_10 = NULL,q_10 = NULL,x_2 = NULL;
          t = SSLgetAnnotations(e_32);
          l_10 = t;
          t = f_32;
          t = k_76(t);
          q_10 = t;
          t = (ATerm) ATinsert(CheckATermList(g_32), q_10);
          x_2 = t;
          t = SSLsetAnnotations(x_2, l_10);
          ;
          LocalPopChoice(x_27);
        }
      else
        {
          t = w_27;
          {
            ATerm f_11 = NULL,m_11 = NULL,y_2 = NULL;
            t = SSLgetAnnotations(e_32);
            f_11 = t;
            t = g_32;
            t = h_32(t);
            m_11 = t;
            t = (ATerm) ATinsert(CheckATermList(m_11), f_32);
            y_2 = t;
            t = SSLsetAnnotations(y_2, f_11);
          }
        }
    }
    return(t);
  }
  t = h_32(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
  l_32 = t;
  {
    ATerm y_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_28 = ATgetFirst((ATermList) t);
                ATerm l_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_32;
          }
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = y_27;
        t = (ATerm) ATinsert(ATempty, l_32);
      }
    m_32 = t;
    t = term_g_24;
    n_32 = t;
    t = SSL_printnl(n_32, m_32);
    t = l_32;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm o_6 (ATerm u_58, ATerm v_58, ATerm t)
{
  t = SSL_strcat(u_58, v_58);
  return(t);
}
ATerm debug_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL;
  r_32 = t;
  t = f_72(t);
  s_32 = t;
  t = term_t_15;
  t_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_32), s_32);
  u_32 = t;
  t = SSL_printnl(t_32, u_32);
  t = r_32;
  return(t);
}
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm t)
{
  ATerm j_33 (ATerm t)
  {
    ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
    g_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_33;
      }
    else
      {
        ATerm b_12 = NULL,f_12 = NULL,h_12 = NULL,o_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_33 = ATgetFirst((ATermList) t);
            i_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_33);
        b_12 = t;
        t = h_33;
        t = a_76(t);
        f_12 = t;
        t = i_33;
        t = j_33(t);
        h_12 = t;
        t = (ATerm) ATinsert(CheckATermList(h_12), f_12);
        o_3 = t;
        t = SSLsetAnnotations(o_3, b_12);
      }
    return(t);
  }
  t = j_33(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_s_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_33 = NULL;
      r_33 = t;
      t = SSL_is_string(r_33);
      ;
      LocalPopChoice(v_28);
    }
  else
    {
      t = t_28;
      {
        ATerm w_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_5, t);
            ;
            LocalPopChoice(x_28);
          }
        else
          {
            t = w_28;
            {
              ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
              x_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_33 = ATgetArgument(t, 0);
                  t = y_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_33 = ATgetArgument(t, 0);
                      t = y_33;
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
                            t = debug_1_0(l_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_34 = NULL,e_34 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_33 = ATgetArgument(t, 0);
                          z_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_33;
                      t = eval_config_0_0(t);
                      d_34 = t;
                      t = z_33;
                      t = eval_config_0_0(t);
                      e_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_34, e_34);
                      t = o_6(d_34, e_34, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm p_6 (ATerm h_42, ATerm i_42, ATerm t)
{
  t = SSL_table_get(h_42, i_42);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL;
  i_34 = t;
  t = term_e_26;
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_26, i_34);
  t = p_6(j_34, i_34, t);
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_34 = NULL,l_34 = NULL;
        t = eval_config_0_0(t);
        k_34 = t;
        t = term_e_26;
        l_34 = t;
        t = SSL_table_put(l_34, i_34, k_34);
        t = k_34;
        ;
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
      }
  }
  return(t);
}
ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  t = term_c_29;
  o_34 = t;
  t = term_o_17;
  p_34 = t;
  t = term_d_29;
  t = s_6(o_34, p_34, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_e_29;
  return(t);
}
ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm q_34 = NULL,t_34 = NULL,u_34 = NULL,y_34 = NULL;
  t = term_c_29;
  u_34 = t;
  t = term_o_17;
  y_34 = t;
  t = term_d_29;
  t = s_6(u_34, y_34, t);
  t = term_h_29;
  q_34 = t;
  t = term_o_17;
  t_34 = t;
  t = term_i_29;
  t = s_6(q_34, t_34, t);
  t = term_k_29;
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_l_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_5, r_5, s_5, t);
      ;
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      t = Option_3_0(t_5, u_5, w_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,s_3 = NULL;
  f_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_35 = ATgetFirst((ATermList) t);
      c_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_35);
  a_35 = t;
  t = b_35;
  t = s_63(t);
  d_35 = t;
  t = c_35;
  t = t_63(t);
  e_35 = t;
  t = (ATerm) ATinsert(CheckATermList(e_35), d_35);
  s_3 = t;
  t = SSLsetAnnotations(s_3, a_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_91 (ATerm), ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,p_35 = NULL,q_35 = NULL,z_4 = NULL;
  if(((k_35 != NULL) && (k_35 != t)))
    _fail(t);
  else
    k_35 = t;
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_29;
        t = q_91(t);
        ;
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
      }
    t = not_null(k_35);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((m_35 != NULL) && (m_35 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          m_35 = ATgetFirst((ATermList) t);
        if(((n_35 != NULL) && (n_35 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          n_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(k_35));
    if(((l_35 != NULL) && (l_35 != t)))
      _fail(t);
    else
      l_35 = t;
    t = term_u_26;
    if(((q_35 != NULL) && (q_35 != t)))
      _fail(t);
    else
      q_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_26, not_null(m_35));
    t = s_6(not_null(q_35), not_null(m_35), t);
    t = not_null(n_35);
    {
      ATerm a_36 (ATerm t)
      {
        ATerm r_29 = t;
        int s_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_29 = t;
            int u_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_35 = NULL;
                t_35 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_35;
                ;
                LocalPopChoice(u_29);
              }
            else
              {
                t = t_29;
                t = q_91(t);
                t = Cons_2_0(_id, a_36, t);
              }
            ;
            LocalPopChoice(s_29);
          }
        else
          {
            t = r_29;
            {
              ATerm w_35 = NULL,x_35 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_35 = ATgetFirst((ATermList) t);
                  x_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_35), (ATerm) ATmakeAppl(sym_Undefined_1, w_35));
            }
          }
        return(t);
      }
      t = a_36(t);
      if(((p_35 != NULL) && (p_35 != t)))
        _fail(t);
      else
        p_35 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(p_35)), (ATerm) ATmakeAppl(sym_Program_1, not_null(m_35)));
      if(((z_4 != NULL) && (z_4 != t)))
        _fail(t);
      else
        z_4 = t;
      t = SSLsetAnnotations(not_null(z_4), not_null(l_35));
    }
  }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm o_36 = NULL;
  o_36 = t;
  if(match_string(t, "--help"))
    {
      t = o_36;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_36;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_36;
        }
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL;
  t = term_l_27;
  p_36 = t;
  t = term_o_17;
  q_36 = t;
  t = term_v_29;
  t = s_6(p_36, q_36, t);
  t = term_w_29;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm y_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_91 (ATerm), ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL;
  if(((j_36 != NULL) && (j_36 != t)))
    _fail(t);
  else
    j_36 = t;
  t = term_h_26;
  if(((l_36 != NULL) && (l_36 != t)))
    _fail(t);
  else
    l_36 = t;
  t = term_i_26;
  if(((m_36 != NULL) && (m_36 != t)))
    _fail(t);
  else
    m_36 = t;
  t = (ATerm) ATempty;
  if(((n_36 != NULL) && (n_36 != t)))
    _fail(t);
  else
    n_36 = t;
  t = SSL_table_put(not_null(l_36), not_null(m_36), not_null(n_36));
  t = not_null(j_36);
  {
    ATerm g_6 (ATerm t)
    {
      ATerm y_29 = t;
      int a_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_91(t);
          ;
          LocalPopChoice(a_30);
        }
      else
        {
          t = y_29;
          {
            ATerm c_30 = t;
            int e_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_6, r_6, w_6, t);
                ;
                LocalPopChoice(e_30);
              }
            else
              {
                t = c_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_6, t);
    {
      ATerm f_30 = t;
      int h_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_36 = NULL;
          x_36 = t;
          {
            ATerm l_30 = t;
            int m_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_13 = NULL;
                t = x_36;
                {
                  ATerm n_30 = t;
                  int o_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_27;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(o_30);
                    }
                  else
                    {
                      t = n_30;
                      t = fetch_1_0(y_6, t);
                    }
                  t = x_36;
                  t = default_system_usage_0_0(t);
                  t = term_u_24;
                  g_13 = t;
                  t = SSL_exit(g_13);
                }
                ;
                LocalPopChoice(m_30);
              }
            else
              {
                t = l_30;
                {
                  ATerm p_13 = NULL;
                  t = term_c_29;
                  t = get_config_0_0(t);
                  t = x_36;
                  t = default_system_about_0_0(t);
                  t = term_u_24;
                  p_13 = t;
                  t = SSL_exit(p_13);
                }
              }
          }
          ;
          LocalPopChoice(h_30);
        }
      else
        {
          t = f_30;
          {
            ATerm p_30 = t;
            int q_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
                ATerm b_7 (ATerm t)
                {
                  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,b_5 = NULL;
                  d_37 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      c_37 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_37);
                  b_37 = t;
                  t = c_37;
                  if(((h_36 != NULL) && (h_36 != t)))
                    _fail(t);
                  else
                    h_36 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, c_37);
                  b_5 = t;
                  t = SSLsetAnnotations(b_5, b_37);
                  return(t);
                }
                t = fetch_1_0(b_7, t);
                t = term_t_15;
                if(((z_36 != NULL) && (z_36 != t)))
                  _fail(t);
                else
                  z_36 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_36)), term_r_30);
                if(((a_37 != NULL) && (a_37 != t)))
                  _fail(t);
                else
                  a_37 = t;
                t = SSL_printnl(not_null(z_36), not_null(a_37));
                t = (ATerm) ATmakeAppl(sym__2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_36)), term_r_30));
                t = default_system_usage_0_0(t);
                t = term_m_8;
                if(((y_36 != NULL) && (y_36 != t)))
                  _fail(t);
                else
                  y_36 = t;
                t = SSL_exit(not_null(y_36));
                ;
                LocalPopChoice(q_30);
              }
            else
              {
                t = p_30;
              }
          }
        }
      if(((i_36 != NULL) && (i_36 != t)))
        _fail(t);
      else
        i_36 = t;
      t = term_h_26;
      if(((k_36 != NULL) && (k_36 != t)))
        _fail(t);
      else
        k_36 = t;
      t = SSL_table_destroy(not_null(k_36));
      t = not_null(i_36);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
  t = parse_options_1_0(u_89, t);
  i_37 = t;
  t = term_u_30;
  l_37 = t;
  t = SSL_table_create(l_37);
  t = term_u_30;
  j_37 = t;
  t = term_v_30;
  k_37 = t;
  t = SSL_table_put(j_37, k_37, i_37);
  t = i_37;
  t = w_89(t);
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_89, t);
        ;
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        {
          ATerm a_31 = t;
          int d_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_89(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_31);
            }
          else
            {
              t = a_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm j_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(l_31);
    }
  else
    {
      t = j_31;
      {
        ATerm m_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(f_7, g_7, h_7, t);
                  ;
                  LocalPopChoice(p_31);
                }
              else
                {
                  t = o_31;
                  {
                    ATerm q_31 = t;
                    int r_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(r_31);
                      }
                    else
                      {
                        t = q_31;
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
  t = xtc_io_1_0(k_7, t);
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
  ATerm t_37 = NULL,u_37 = NULL;
  t = term_s_31;
  t_37 = t;
  t = term_o_17;
  u_37 = t;
  t = term_t_31;
  t = s_6(t_37, u_37, t);
  t = term_u_31;
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_v_31;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm w_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_38 = NULL,c_38 = NULL;
      c_38 = t;
      if(match_cons(t, sym_FILE_1))
        {
          b_38 = ATgetArgument(t, 0);
          {
            ATerm a_14 = NULL,f_5 = NULL;
            t = SSLgetAnnotations(c_38);
            a_14 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, b_38);
            f_5 = t;
            t = SSLsetAnnotations(f_5, a_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_38;
        }
      LocalPopChoice(x_31);
      t = xtc_transform_file_2_0(t_7, u_7, t);
    }
  else
    {
      t = w_31;
      t = xtc_transform_term_2_0(v_7, w_7, t);
    }
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_38 = NULL,t_38 = NULL;
        t_38 = t;
        if(match_cons(t, sym_FILE_1))
          {
            q_38 = ATgetArgument(t, 0);
            {
              ATerm j_14 = NULL,h_5 = NULL;
              t = SSLgetAnnotations(t_38);
              j_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_38);
              h_5 = t;
              t = SSLsetAnnotations(h_5, j_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_38;
          }
        LocalPopChoice(z_31);
        t = xtc_transform_file_2_0(z_7, pass_verbose_0_0, t);
      }
    else
      {
        t = y_31;
        t = xtc_transform_term_2_0(a_8, pass_verbose_0_0, t);
      }
    {
      ATerm a_32 = t;
      int b_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_38 = NULL,a_39 = NULL;
          a_39 = t;
          if(match_cons(t, sym_FILE_1))
            {
              z_38 = ATgetArgument(t, 0);
              {
                ATerm y_14 = NULL,i_5 = NULL;
                t = SSLgetAnnotations(a_39);
                y_14 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, z_38);
                i_5 = t;
                t = SSLsetAnnotations(i_5, y_14);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = a_39;
            }
          LocalPopChoice(b_32);
          t = xtc_transform_file_2_0(b_8, pass_verbose_0_0, t);
        }
      else
        {
          t = a_32;
          t = xtc_transform_term_2_0(c_8, pass_verbose_0_0, t);
        }
    }
  }
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL;
  t = term_d_32;
  t = xtc_find_0_0(t);
  d_38 = t;
  t = term_i_32;
  t = xtc_find_0_0(t);
  e_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_38), term_j_32), d_38), term_j_32);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL;
  t = term_d_32;
  t = xtc_find_0_0(t);
  g_38 = t;
  t = term_i_32;
  t = xtc_find_0_0(t);
  h_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_38), term_j_32), g_38), term_j_32);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_o_32;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_o_32;
  return(t);
}
ATerm io_pp_pp_table_0_0 (ATerm t)
{
  t = option_wrap_4_0(d_7, default_usage_0_0, _id, e_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_pp_table_0_0(t);
  return(t);
}
