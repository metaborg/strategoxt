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
ATerm term_r_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_g_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_z_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_b_30;
ATerm term_y_29;
ATerm term_w_29;
ATerm term_p_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_s_28;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_e_27;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_r_26;
ATerm term_j_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_e_26;
ATerm term_t_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_m_24;
ATerm term_l_24;
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
ATerm term_p_21;
ATerm term_l_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_u_19;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_z_17;
ATerm term_s_17;
ATerm term_o_17;
ATerm term_i_17;
ATerm term_b_17;
ATerm term_p_16;
ATerm term_d_16;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_k_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_a_15;
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
ATerm term_e_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
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
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
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
ATerm term_z_8;
ATerm term_y_8;
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
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
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
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_j_10, term_l_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_o_10, term_q_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_10, term_t_10, term_u_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_10, term_z_10, term_c_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_11, term_i_11, term_k_11);
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
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_z_11, term_b_12);
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
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_f_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_k_13, term_l_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_r_13, term_u_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_z_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_g_14);
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
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_a_15, term_b_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_g_15, term_h_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
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
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_t_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_x_20);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_z_17, term_p_16);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym__2, term_f_8, term_t_24);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_24);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_i_25, term_o_17);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym__2, term_g_26, term_h_26);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_o_17);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__2, term_f_29, term_o_17);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym__2, term_k_27, term_o_17);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym__2, term_s_31, term_o_17);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.pp.af", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm u_5 (ATerm r_38, ATerm s_38, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm b_6 (ATerm t_27, ATerm u_27, ATerm);
ATerm d_6 (ATerm h_72 (ATerm), ATerm l_180, ATerm b_28, ATerm);
ATerm o_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm);
ATerm e_6 (ATerm p_24, ATerm q_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm w_70 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm e_88 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm h_7 (ATerm u_6, ATerm);
ATerm conc_0_0 (ATerm);
ATerm g_6 (ATerm p_84 (ATerm), ATerm z_39, ATerm x_39, ATerm);
ATerm x_8 (ATerm x_7, ATerm);
ATerm a_9 (ATerm e_8, ATerm i_8, ATerm l_8, ATerm);
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
ATerm w_5 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm w_34, ATerm v_34, ATerm);
ATerm x_5 (ATerm e_80 (ATerm), ATerm s_34, ATerm r_34, ATerm);
ATerm h_1 (ATerm);
ATerm y_5 (ATerm n_41, ATerm o_41, ATerm p_41, ATerm);
ATerm z_5 (ATerm a_86 (ATerm), ATerm x_41, ATerm w_41, ATerm);
ATerm h_6 (ATerm u_43, ATerm v_43, ATerm);
ATerm c_15 (ATerm t_14, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm a_6 (ATerm z_27, ATerm);
ATerm c_6 (ATerm c_44, ATerm d_44, ATerm);
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
ATerm a_22 (ATerm b_21, ATerm);
ATerm s_2 (ATerm);
ATerm a_3 (ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm i_6 (ATerm v_24, ATerm w_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm j_6 (ATerm v_40, ATerm w_40, ATerm);
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
ATerm r_6 (ATerm q_42, ATerm r_42, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm p_6 (ATerm q_40, ATerm r_40, ATerm p_40, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm k_6 (ATerm l_38, ATerm m_38, ATerm);
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
ATerm n_6 (ATerm u_58, ATerm v_58, ATerm);
ATerm debug_1_0 (ATerm f_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm o_6 (ATerm h_42, ATerm i_42, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm f_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_91 (ATerm), ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm parse_options_1_0 (ATerm p_91 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm i_7 (ATerm);
ATerm k_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm io_pp_box_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm u_5 (ATerm r_38, ATerm s_38, ATerm t)
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
    t = u_5(f_0, r_0, t);
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
      t = h_6(w_0, c_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm b_6 (ATerm t_27, ATerm u_27, ATerm t)
{
  ATerm d_1 = NULL;
  t = SSL_write_term_to_stream_baf(t_27, u_27);
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_1);
  return(t);
}
ATerm d_6 (ATerm h_72 (ATerm), ATerm l_180, ATerm b_28, ATerm t)
{
  ATerm e_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_180, term_r_8);
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
  t = b_6(q_1, w_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm g_1 = NULL,p_1 = NULL;
  g_1 = t;
  t = xtc_new_file_0_0(t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_1, g_1);
  t = d_6(o_0, p_1, g_1, t);
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
ATerm e_6 (ATerm p_24, ATerm q_24, ATerm t)
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_8), s_0), term_t_8);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_2), term_d_9), k_1), term_z_8), u_2);
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
    ATerm f_9 = t;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_15), term_d_15), term_v_14), term_q_14), term_m_14), term_h_14), term_c_14), term_v_13), term_n_13), term_i_13), term_a_13), term_w_12), term_s_12), term_o_12), term_k_12), term_d_12), term_w_11), term_r_11), term_m_11), term_d_11), term_v_10), term_r_10), term_m_10), term_h_10), term_d_10), term_x_9), term_r_9), term_l_9);
        t = fetch_elem_1_0(q_0, t);
        ;
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
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
    int n_15 = stack_ptr;
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
        LocalPopChoice(n_15);
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
      t = e_6(not_null(i_4), not_null(j_4), t);
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
ATerm h_7 (ATerm u_6, ATerm t)
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
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
  if(((b_7 != NULL) && (b_7 != t)))
    _fail(t);
  else
    b_7 = t;
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
            t = h_7(not_null(b_7), t);
          }
      }
    }
  else
    {
      t = h_7(not_null(b_7), t);
    }
  return(t);
}
ATerm g_6 (ATerm p_84 (ATerm), ATerm z_39, ATerm x_39, ATerm t)
{
  ATerm j_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  n_7 = t;
  t = p_84(t);
  j_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_7, z_39, x_39);
  t = p_6(j_7, z_39, x_39, t);
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_7 = NULL;
        t = term_p_16;
        q_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_7, term_p_16);
        t = o_6(j_7, q_7, t);
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
    t = term_b_17;
    t = debug_1_0(y_0, t);
    t = (ATerm) ATmakeAppl(sym__2, x_7, term_r_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm a_9 (ATerm e_8, ATerm i_8, ATerm l_8, ATerm t)
{
  t = SSL_open_file(e_8, i_8);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_i_17;
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
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_8(o_8, t);
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            t = a_9(p_8, w_8, o_8, t);
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
  ATerm e_9 = NULL,n_9 = NULL,o_9 = NULL;
  t = term_o_17;
  t = new_0_0(t);
  e_9 = t;
  t = term_s_17;
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_9, term_s_17);
  t = n_6(e_9, n_9, t);
  o_9 = t;
  {
    ATerm v_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_q_8);
        v_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_9, (ATerm) ATinsert(ATempty, term_q_8));
        t = h_6(o_9, v_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = v_17;
        t = o_9;
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
  ATerm y_9 = NULL,z_9 = NULL;
  t = new_file_0_0(t);
  y_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_9, term_r_8);
  t = open_file_0_0(t);
  t = term_o_17;
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_9, term_o_17);
  t = g_6(z_0, y_9, z_9, t);
  t = y_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL;
  w_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_3 = NULL,i_3 = NULL;
      t = w_10;
      t = xtc_new_file_0_0(t);
      h_3 = t;
      t = m_0(t);
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATinsert(ATinsert(ATempty, h_3), term_s_18));
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
      t = (ATerm) ATmakeAppl(sym__2, y_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_3), term_s_18), x_10), term_u_18));
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
    ATerm b_11 = NULL,e_11 = NULL;
    b_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_11), b_11);
    t = o_6(not_null(a_11), b_11, t);
    e_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_11, e_11);
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
        ATerm c_12 = NULL;
        t = term_f_8;
        t = get_config_0_0(t);
        c_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_12, term_b_10);
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
ATerm w_5 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm w_34, ATerm v_34, ATerm t)
{
  t = i_80(t);
  {
    ATerm b_1 (ATerm t)
    {
      ATerm f_12 = NULL;
      f_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_34), f_12);
      t = h_80(t);
      return(t);
    }
    t = fetch_1_0(b_1, t);
    t = not_null(v_34);
  }
  return(t);
}
ATerm x_5 (ATerm e_80 (ATerm), ATerm s_34, ATerm r_34, ATerm t)
{
  ATerm m_13 (ATerm t)
  {
    ATerm b_13 = NULL,c_13 = NULL,g_13 = NULL;
    b_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(r_34);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_13 = ATgetFirst((ATermList) t);
            g_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_13;
              {
                ATerm f_1 (ATerm t)
                {
                  t = not_null(r_34);
                  return(t);
                }
                t = w_5(e_80, f_1, not_null(c_13), not_null(g_13), t);
                t = m_13(t);
              }
              ;
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              {
                ATerm q_4 = NULL,w_4 = NULL,d_2 = NULL;
                t = SSLgetAnnotations(b_13);
                q_4 = t;
                t = g_13;
                t = m_13(t);
                w_4 = t;
                t = (ATerm) ATinsert(CheckATermList(w_4), c_13);
                d_2 = t;
                t = SSLsetAnnotations(d_2, q_4);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(s_34);
  t = m_13(t);
  return(t);
}
ATerm h_1 (ATerm t)
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
ATerm y_5 (ATerm n_41, ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm p_13 = NULL,s_13 = NULL,t_13 = NULL;
  p_13 = t;
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
        t = o_6(n_41, o_41, t);
        ;
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = (ATerm) ATempty;
      }
    t_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_13, p_41);
    t = x_5(h_1, t_13, p_41, t);
    s_13 = t;
    t = SSL_table_put(n_41, o_41, s_13);
    t = p_13;
  }
  return(t);
}
ATerm z_5 (ATerm a_86 (ATerm), ATerm x_41, ATerm w_41, ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm a_14 = NULL,d_14 = NULL;
    if(match_cons(t, sym__2))
      {
        a_14 = ATgetArgument(t, 0);
        d_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(x_41), a_14, d_14);
    t = a_86(t);
    return(t);
  }
  t = not_null(w_41);
  t = map_1_0(i_1, t);
  return(t);
}
ATerm h_6 (ATerm u_43, ATerm v_43, ATerm t)
{
  t = SSL_access(u_43, v_43);
  return(t);
}
ATerm c_15 (ATerm t_14, ATerm t)
{
  t = SSL_fclose(t_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_14 = NULL,z_14 = NULL;
  z_14 = t;
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
            t = c_15(z_14, t);
          }
      }
    }
  else
    {
      t = c_15(z_14, t);
    }
  return(t);
}
ATerm a_6 (ATerm z_27, ATerm t)
{
  t = SSL_read_term_from_stream(z_27);
  return(t);
}
ATerm c_6 (ATerm c_44, ATerm d_44, ATerm t)
{
  ATerm f_15 = NULL;
  t = SSL_fopen(c_44, d_44);
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_15);
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
  ATerm j_15 = NULL;
  t = SSL_stdout_stream();
  j_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_15 = NULL;
  t = SSL_stderr_stream();
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_15);
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
  t = c_6(g_16, h_16, t);
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
  t = c_6(t_16, u_16, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm a_17 = NULL,c_17 = NULL,d_17 = NULL;
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
      c_17 = ATgetArgument(t, 0);
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
                  t = f_17(c_17, d_17, a_17, t);
                  ;
                  LocalPopChoice(t_19);
                }
              else
                {
                  t = s_19;
                  t = g_17(c_17, d_17, a_17, t);
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
  ATerm h_17 = NULL,j_17 = NULL,m_17 = NULL;
  ATerm x_19 = t;
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
      t = x_19;
      t = debug_1_0(j_1, t);
      _fail(t);
    }
  j_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(m_17, t);
  h_17 = t;
  t = j_17;
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
      t = h_6(p_17, q_17, t);
      LocalPopChoice(e_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_20;
      {
        ATerm g_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_20 = t;
            if((PushChoice() == 0))
              {
                ATerm r_17 = NULL,t_17 = NULL;
                r_17 = t;
                t = (ATerm) ATinsert(ATempty, term_q_8);
                t_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_17, (ATerm) ATinsert(ATempty, term_q_8));
                t = h_6(r_17, t_17, t);
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
  t = term_p_20;
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
  t = y_5(m_18, n_18, o_18, t);
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
  ATerm t_18 = NULL,v_18 = NULL,w_18 = NULL;
  t_18 = t;
  t = term_t_15;
  v_18 = t;
  t = (ATerm) ATinsert(ATempty, term_t_20);
  w_18 = t;
  t = SSL_printnl(v_18, w_18);
  t = t_18;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_17 = NULL,w_17 = NULL,y_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
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
        t = o_6(h_18, i_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_20;
      }
    y_17 = t;
    t = term_w_20;
    e_18 = t;
    t = term_x_20;
    f_18 = t;
    t = (ATerm) ATinsert(ATempty, u_17);
    g_18 = t;
    t = SSL_table_put(e_18, f_18, g_18);
    t = y_17;
    t = if_verbose4_1_0(s_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(y_1, t);
    w_17 = t;
    t = term_w_20;
    d_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_20, w_17);
    t = z_5(z_1, d_18, w_17, t);
    t = if_verbose6_1_0(a_2, t);
    t = term_w_20;
    a_18 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, u_17);
    b_18 = t;
    t = (ATerm) ATempty;
    c_18 = t;
    t = SSL_table_put(a_18, b_18, c_18);
    t = (ATerm) ATmakeAppl(sym__3, term_w_20, (ATerm)ATmakeAppl(sym_Imported_1, u_17), (ATerm) ATempty);
    t = if_verbose4_1_0(c_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,y_19 = NULL;
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
          y_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_6 = NULL,t_6 = NULL,w_6 = NULL,l_2 = NULL;
            t = SSLgetAnnotations(v_19);
            m_6 = t;
            t = w_19;
            t = v_83(t);
            t_6 = t;
            t = y_19;
            t = filter_1_0(v_83, t);
            w_6 = t;
            t = (ATerm) ATinsert(CheckATermList(w_6), t_6);
            l_2 = t;
            t = SSLsetAnnotations(l_2, m_6);
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
            t = y_19;
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
    ATerm a_21 = t;
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
        t = a_21;
      }
    return(t);
  }
  t = h_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      {
        ATerm m_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_20 = NULL;
            t = term_p_21;
            i_20 = t;
            t = SSL_getenv(i_20);
            ;
            LocalPopChoice(o_21);
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
  ATerm q_20 = NULL,r_20 = NULL;
  t = term_w_20;
  q_20 = t;
  t = term_t_21;
  r_20 = t;
  t = term_u_21;
  t = o_6(q_20, r_20, t);
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
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_20 = NULL,n_20 = NULL;
        t = term_w_20;
        m_20 = t;
        t = term_x_20;
        n_20 = t;
        t = term_b_22;
        t = o_6(m_20, n_20, t);
        ;
        LocalPopChoice(y_21);
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
ATerm a_22 (ATerm b_21, ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
  t = term_w_20;
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, b_21);
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_20, (ATerm) ATmakeAppl(sym_Tool_1, b_21));
  t = o_6(e_21, f_21, t);
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
      ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
      t = if_verbose5_1_0(n_2, t);
      t = xtc_load_0_0(t);
      if(((k_21 != NULL) && (k_21 != t)))
        _fail(t);
      else
        k_21 = t;
      if(match_cons(t, sym__2))
        {
          i_21 = ATgetArgument(t, 0);
          j_21 = ATgetArgument(t, 1);
          {
            ATerm j_22 = t;
            int k_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_21 = NULL,q_21 = NULL,r_21 = NULL;
                t = term_w_20;
                if(((q_21 != NULL) && (q_21 != t)))
                  _fail(t);
                else
                  q_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(i_21));
                if(((r_21 != NULL) && (r_21 != t)))
                  _fail(t);
                else
                  r_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_20, (ATerm) ATmakeAppl(sym_Tool_1, not_null(i_21)));
                t = o_6(not_null(q_21), not_null(r_21), t);
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
        ATerm z_21 = NULL,r_7 = NULL,s_7 = NULL;
        z_21 = t;
        t = term_t_15;
        r_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_22), z_21), term_l_22);
        s_7 = t;
        t = SSL_printnl(r_7, s_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_22), z_21), term_l_22);
        t = if_verbose5_1_0(c_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm i_6 (ATerm v_24, ATerm w_24, ATerm t)
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
        t = i_6(u_22, y_7, t);
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
                t = i_6(u_22, h_8, t);
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
ATerm j_6 (ATerm v_40, ATerm w_40, ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL;
  z_22 = t;
  {
    ATerm s_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
        t = o_6(v_40, w_40, t);
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
  ATerm a_23 = NULL,c_23 = NULL,d_23 = NULL,f_23 = NULL,g_23 = NULL;
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
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_23 = NULL;
        t = term_p_16;
        h_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_23), term_p_16);
        t = o_6(not_null(d_23), h_23, t);
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = x_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((c_23 != NULL) && (c_23 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          c_23 = ATgetFirst((ATermList) t);
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
    t = not_null(c_23);
    {
      ATerm f_3 (ATerm t)
      {
        ATerm i_23 = NULL;
        i_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_23), i_23);
        t = j_6(not_null(d_23), i_23, t);
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
  ATerm k_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  n_23 = t;
  t = l_84(t);
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_23, term_p_16);
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
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
        t = o_6(k_23, v_23, t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = (ATerm) ATempty;
      }
    o_23 = t;
    t = term_p_16;
    p_23 = t;
    t = (ATerm) ATinsert(CheckATermList(o_23), (ATerm) ATempty);
    q_23 = t;
    t = SSL_table_put(k_23, p_23, q_23);
    t = n_23;
  }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_z_17;
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
  t = term_z_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm a_24 = NULL;
  ATerm j_3 (ATerm t)
  {
    ATerm b_24 = NULL;
    b_24 = t;
    {
      ATerm w_23 = t;
      int x_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_24 = NULL,e_24 = NULL;
          t = term_z_17;
          d_24 = t;
          t = term_p_16;
          e_24 = t;
          t = term_y_23;
          t = o_6(d_24, e_24, t);
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
          if(((a_24 != NULL) && (a_24 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            a_24 = ATgetFirst((ATermList) t);
          {
            ATerm z_23 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(a_24);
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
  ATerm c_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = c_24;
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
        t = term_u_18;
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
  ATerm n_24 = NULL,o_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  n_24 = t;
  t = term_o_17;
  t = whoami_0_0(t);
  o_24 = t;
  t = term_t_15;
  y_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_24), o_24), term_l_24);
  z_24 = t;
  t = SSL_printnl(y_24, z_24);
  t = term_m_8;
  x_24 = t;
  t = SSL_exit(x_24);
  t = n_24;
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
  ATerm c_25 = NULL,e_25 = NULL,f_25 = NULL;
  c_25 = t;
  t = SSL_string_to_int(c_25);
  e_25 = t;
  t = term_r_24;
  f_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_24, e_25);
  t = r_6(f_25, e_25, t);
  t = c_25;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_s_24;
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
  ATerm j_25 = NULL,k_25 = NULL;
  t = term_f_8;
  j_25 = t;
  t = term_t_24;
  k_25 = t;
  t = term_u_24;
  t = r_6(j_25, k_25, t);
  t = term_a_25;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_d_25;
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
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
  n_25 = t;
  t = SSL_string_to_int(n_25);
  o_25 = t;
  t = term_f_8;
  p_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_8, o_25);
  t = r_6(p_25, o_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_25);
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
  t = term_i_25;
  q_25 = t;
  t = term_o_17;
  r_25 = t;
  t = term_l_25;
  t = r_6(q_25, r_25, t);
  t = term_m_25;
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
ATerm r_6 (ATerm q_42, ATerm r_42, ATerm t)
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
      t = term_g_26;
      z_25 = t;
      t = term_h_26;
      a_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_26, term_h_26, y_25);
      t = p_6(z_25, a_26, y_25, t);
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
  ATerm i_26 = NULL,l_26 = NULL;
  i_26 = t;
  t = term_s_18;
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_18, i_26);
  t = r_6(l_26, i_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_26);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, p_4, r_4, t);
  return(t);
}
ATerm p_6 (ATerm q_40, ATerm r_40, ATerm p_40, ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,s_26 = NULL;
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
  {
    ATerm k_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_26 = ATgetArgument(t, 0);
            ATerm q_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
        t = o_6(q_40, r_40, t);
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = k_26;
        t = (ATerm) ATempty;
      }
    o_26 = t;
    t = (ATerm) ATinsert(CheckATermList(o_26), p_40);
    s_26 = t;
    t = SSL_table_put(q_40, r_40, s_26);
    t = n_26;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,n_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_27 = NULL,s_27 = NULL,v_27 = NULL;
      t = term_o_17;
      t = j_0(t);
      r_27 = t;
      t = term_g_26;
      s_27 = t;
      t = term_h_26;
      v_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_26, term_h_26, r_27);
      t = p_6(s_27, v_27, r_27, t);
      _fail(t);
    }
  else
    {
      ATerm c_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_27 = ATgetFirst((ATermList) t);
          i_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_27 = ATgetFirst((ATermList) t);
          n_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_27;
      t = h_0(t);
      t = j_27;
      t = i_0(t);
      c_28 = t;
      t = (ATerm) ATinsert(CheckATermList(n_27), c_28);
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
  t = term_u_18;
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_18, f_28);
  t = r_6(g_28, f_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_28);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_r_26;
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
ATerm k_6 (ATerm l_38, ATerm m_38, ATerm t)
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
  t = term_t_24;
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
  t = k_6(b_9, c_9, t);
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
  ATerm j_29 = NULL,k_29 = NULL,q_29 = NULL;
  j_29 = t;
  if(match_cons(t, sym__2))
    {
      k_29 = ATgetArgument(t, 0);
      q_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_29;
        if((k_29 != t))
          {
            _fail(t);
          }
        t = j_29;
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATmakeAppl(sym__2, k_29, q_29);
        {
          ATerm a_27 = t;
          int b_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_29, q_29);
              ;
              LocalPopChoice(b_27);
            }
          else
            {
              t = a_27;
              t = SSL_gtr(k_29, q_29);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_29, q_29);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_85 (ATerm), ATerm t)
{
  ATerm u_29 = NULL;
  u_29 = t;
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_29 = NULL;
        t = term_f_8;
        t = get_config_0_0(t);
        x_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_29, term_m_8);
        t = geq_0_0(t);
        t = u_29;
        t = t_85(t);
        ;
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        t = u_29;
      }
  }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,c_30 = NULL,d_30 = NULL;
  t = run_time_0_0(t);
  z_29 = t;
  t = term_o_17;
  t = whoami_0_0(t);
  a_30 = t;
  t = term_t_15;
  c_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_27), z_29), term_z_8), a_30);
  d_30 = t;
  t = SSL_printnl(c_30, d_30);
  t = (ATerm) ATmakeAppl(sym__2, term_t_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_27), z_29), term_z_8), a_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_24;
  g_30 = t;
  t = SSL_exit(g_30);
  return(t);
}
ATerm c_5 (ATerm t)
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
            ATerm s_9 = NULL,o_2 = NULL;
            t = SSLgetAnnotations(p_30);
            s_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_30);
            o_2 = t;
            t = SSLsetAnnotations(o_2, s_9);
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
ATerm need_help_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      t = fetch_1_0(c_5, t);
    }
  t = s_89(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_30 = ATgetFirst((ATermList) t);
      t_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_30 = NULL,y_30 = NULL;
        ATerm d_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_30)), not_null(y_30));
          return(t);
        }
        t = not_null(t_30);
        t = g_0(t);
        if(((x_30 != NULL) && (x_30 != t)))
          _fail(t);
        else
          x_30 = t;
        t = not_null(s_30);
        t = e_0(t);
        if(((y_30 != NULL) && (y_30 != t)))
          _fail(t);
        else
          y_30 = t;
        t = not_null(t_30);
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
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,r_2 = NULL;
  e_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_31);
  c_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_31);
  r_2 = t;
  t = SSLsetAnnotations(r_2, c_31);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm g_31 = NULL;
  g_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_31), term_l_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL;
  ATerm m_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_27);
    }
  else
    {
      t = m_27;
      t = fetch_1_0(e_5, t);
    }
  t = term_p_27;
  t = echo_0_0(t);
  t = term_g_26;
  a_31 = t;
  t = term_h_26;
  b_31 = t;
  t = term_q_27;
  t = o_6(a_31, b_31, t);
  t = reverse_acc_2_0(_id, g_5, t);
  t = map_1_0(j_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm d_32 (ATerm t)
  {
    ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
    a_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_32 = ATgetFirst((ATermList) t);
        c_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_27 = t;
      int x_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_10 = NULL,p_10 = NULL,x_2 = NULL;
          t = SSLgetAnnotations(a_32);
          k_10 = t;
          t = b_32;
          t = k_76(t);
          p_10 = t;
          t = (ATerm) ATinsert(CheckATermList(c_32), p_10);
          x_2 = t;
          t = SSLsetAnnotations(x_2, k_10);
          ;
          LocalPopChoice(x_27);
        }
      else
        {
          t = w_27;
          {
            ATerm f_11 = NULL,l_11 = NULL,y_2 = NULL;
            t = SSLgetAnnotations(a_32);
            f_11 = t;
            t = c_32;
            t = d_32(t);
            l_11 = t;
            t = (ATerm) ATinsert(CheckATermList(l_11), b_32);
            y_2 = t;
            t = SSLsetAnnotations(y_2, f_11);
          }
        }
    }
    return(t);
  }
  t = d_32(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
  h_32 = t;
  {
    ATerm y_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_32;
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
            t = h_32;
          }
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = y_27;
        t = (ATerm) ATinsert(ATempty, h_32);
      }
    i_32 = t;
    t = term_g_24;
    j_32 = t;
    t = SSL_printnl(j_32, i_32);
    t = h_32;
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
ATerm n_6 (ATerm u_58, ATerm v_58, ATerm t)
{
  t = SSL_strcat(u_58, v_58);
  return(t);
}
ATerm debug_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL;
  n_32 = t;
  t = f_72(t);
  o_32 = t;
  t = term_t_15;
  p_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_32), o_32);
  q_32 = t;
  t = SSL_printnl(p_32, q_32);
  t = n_32;
  return(t);
}
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm t)
{
  ATerm f_33 (ATerm t)
  {
    ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
    c_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_33;
      }
    else
      {
        ATerm a_12 = NULL,g_12 = NULL,h_12 = NULL,o_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_33 = ATgetFirst((ATermList) t);
            e_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_33);
        a_12 = t;
        t = d_33;
        t = a_76(t);
        g_12 = t;
        t = e_33;
        t = f_33(t);
        h_12 = t;
        t = (ATerm) ATinsert(CheckATermList(h_12), g_12);
        o_3 = t;
        t = SSLsetAnnotations(o_3, a_12);
      }
    return(t);
  }
  t = f_33(t);
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
      ATerm n_33 = NULL;
      n_33 = t;
      t = SSL_is_string(n_33);
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
              ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
              t_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_33 = ATgetArgument(t, 0);
                  t = u_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_33 = ATgetArgument(t, 0);
                      t = u_33;
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
                      ATerm z_33 = NULL,a_34 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_33 = ATgetArgument(t, 0);
                          v_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_33;
                      t = eval_config_0_0(t);
                      z_33 = t;
                      t = v_33;
                      t = eval_config_0_0(t);
                      a_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_33, a_34);
                      t = n_6(z_33, a_34, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm o_6 (ATerm h_42, ATerm i_42, ATerm t)
{
  t = SSL_table_get(h_42, i_42);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL;
  e_34 = t;
  t = term_e_26;
  f_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_26, e_34);
  t = o_6(f_34, e_34, t);
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_34 = NULL,h_34 = NULL;
        t = eval_config_0_0(t);
        g_34 = t;
        t = term_e_26;
        h_34 = t;
        t = SSL_table_put(h_34, e_34, g_34);
        t = g_34;
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
  ATerm k_34 = NULL,l_34 = NULL;
  t = term_c_29;
  k_34 = t;
  t = term_o_17;
  l_34 = t;
  t = term_d_29;
  t = r_6(k_34, l_34, t);
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
ATerm v_5 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL;
  t = term_c_29;
  o_34 = t;
  t = term_o_17;
  p_34 = t;
  t = term_d_29;
  t = r_6(o_34, p_34, t);
  t = term_f_29;
  m_34 = t;
  t = term_o_17;
  n_34 = t;
  t = term_g_29;
  t = r_6(m_34, n_34, t);
  t = term_h_29;
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_i_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_5, r_5, s_5, t);
      ;
      LocalPopChoice(m_29);
    }
  else
    {
      t = l_29;
      t = Option_3_0(t_5, v_5, f_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm t)
{
  ATerm q_34 = NULL,t_34 = NULL,u_34 = NULL,y_34 = NULL,a_35 = NULL,b_35 = NULL,s_3 = NULL;
  b_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_34 = ATgetFirst((ATermList) t);
      u_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_35);
  q_34 = t;
  t = t_34;
  t = s_63(t);
  y_34 = t;
  t = u_34;
  t = t_63(t);
  a_35 = t;
  t = (ATerm) ATinsert(CheckATermList(a_35), y_34);
  s_3 = t;
  t = SSLsetAnnotations(s_3, q_34);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_91 (ATerm), ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,l_35 = NULL,m_35 = NULL,z_4 = NULL;
  if(((g_35 != NULL) && (g_35 != t)))
    _fail(t);
  else
    g_35 = t;
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_29;
        t = q_91(t);
        ;
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
      }
    t = not_null(g_35);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_35 != NULL) && (i_35 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_35 = ATgetFirst((ATermList) t);
        if(((j_35 != NULL) && (j_35 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          j_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(g_35));
    if(((h_35 != NULL) && (h_35 != t)))
      _fail(t);
    else
      h_35 = t;
    t = term_u_26;
    if(((m_35 != NULL) && (m_35 != t)))
      _fail(t);
    else
      m_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_26, not_null(i_35));
    t = r_6(not_null(m_35), not_null(i_35), t);
    t = not_null(j_35);
    {
      ATerm w_35 (ATerm t)
      {
        ATerm r_29 = t;
        int s_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_29 = t;
            int v_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_35 = NULL;
                p_35 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_35;
                ;
                LocalPopChoice(v_29);
              }
            else
              {
                t = t_29;
                t = q_91(t);
                t = Cons_2_0(_id, w_35, t);
              }
            ;
            LocalPopChoice(s_29);
          }
        else
          {
            t = r_29;
            {
              ATerm s_35 = NULL,t_35 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_35 = ATgetFirst((ATermList) t);
                  t_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_35), (ATerm) ATmakeAppl(sym_Undefined_1, s_35));
            }
          }
        return(t);
      }
      t = w_35(t);
      if(((l_35 != NULL) && (l_35 != t)))
        _fail(t);
      else
        l_35 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(l_35)), (ATerm) ATmakeAppl(sym_Program_1, not_null(i_35)));
      if(((z_4 != NULL) && (z_4 != t)))
        _fail(t);
      else
        z_4 = t;
      t = SSLsetAnnotations(not_null(z_4), not_null(h_35));
    }
  }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm k_36 = NULL;
  k_36 = t;
  if(match_string(t, "--help"))
    {
      t = k_36;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_36;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_36;
        }
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL;
  t = term_k_27;
  l_36 = t;
  t = term_o_17;
  m_36 = t;
  t = term_w_29;
  t = r_6(l_36, m_36, t);
  t = term_y_29;
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_b_30;
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
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL;
  if(((f_36 != NULL) && (f_36 != t)))
    _fail(t);
  else
    f_36 = t;
  t = term_g_26;
  if(((h_36 != NULL) && (h_36 != t)))
    _fail(t);
  else
    h_36 = t;
  t = term_h_26;
  if(((i_36 != NULL) && (i_36 != t)))
    _fail(t);
  else
    i_36 = t;
  t = (ATerm) ATempty;
  if(((j_36 != NULL) && (j_36 != t)))
    _fail(t);
  else
    j_36 = t;
  t = SSL_table_put(not_null(h_36), not_null(i_36), not_null(j_36));
  t = not_null(f_36);
  {
    ATerm l_6 (ATerm t)
    {
      ATerm e_30 = t;
      int f_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_91(t);
          ;
          LocalPopChoice(f_30);
        }
      else
        {
          t = e_30;
          {
            ATerm h_30 = t;
            int i_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_6, s_6, x_6, t);
                ;
                LocalPopChoice(i_30);
              }
            else
              {
                t = h_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_6, t);
    {
      ATerm j_30 = t;
      int k_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_36 = NULL;
          t_36 = t;
          {
            ATerm l_30 = t;
            int m_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_13 = NULL;
                t = t_36;
                {
                  ATerm n_30 = t;
                  int q_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_k_27;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(q_30);
                    }
                  else
                    {
                      t = n_30;
                      t = fetch_1_0(y_6, t);
                    }
                  t = t_36;
                  t = default_system_usage_0_0(t);
                  t = term_t_24;
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
                  ATerm q_13 = NULL;
                  t = term_c_29;
                  t = get_config_0_0(t);
                  t = t_36;
                  t = default_system_about_0_0(t);
                  t = term_t_24;
                  q_13 = t;
                  t = SSL_exit(q_13);
                }
              }
          }
          ;
          LocalPopChoice(k_30);
        }
      else
        {
          t = j_30;
          {
            ATerm r_30 = t;
            int u_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
                ATerm c_7 (ATerm t)
                {
                  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,b_5 = NULL;
                  z_36 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      y_36 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_36);
                  x_36 = t;
                  t = y_36;
                  if(((d_36 != NULL) && (d_36 != t)))
                    _fail(t);
                  else
                    d_36 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, y_36);
                  b_5 = t;
                  t = SSLsetAnnotations(b_5, x_36);
                  return(t);
                }
                t = fetch_1_0(c_7, t);
                t = term_t_15;
                if(((v_36 != NULL) && (v_36 != t)))
                  _fail(t);
                else
                  v_36 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_36)), term_v_30);
                if(((w_36 != NULL) && (w_36 != t)))
                  _fail(t);
                else
                  w_36 = t;
                t = SSL_printnl(not_null(v_36), not_null(w_36));
                t = (ATerm) ATmakeAppl(sym__2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_36)), term_v_30));
                t = default_system_usage_0_0(t);
                t = term_m_8;
                if(((u_36 != NULL) && (u_36 != t)))
                  _fail(t);
                else
                  u_36 = t;
                t = SSL_exit(not_null(u_36));
                ;
                LocalPopChoice(u_30);
              }
            else
              {
                t = r_30;
              }
          }
        }
      if(((e_36 != NULL) && (e_36 != t)))
        _fail(t);
      else
        e_36 = t;
      t = term_g_26;
      if(((g_36 != NULL) && (g_36 != t)))
        _fail(t);
      else
        g_36 = t;
      t = SSL_table_destroy(not_null(g_36));
      t = not_null(e_36);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
  t = parse_options_1_0(u_89, t);
  e_37 = t;
  t = term_w_30;
  h_37 = t;
  t = SSL_table_create(h_37);
  t = term_w_30;
  f_37 = t;
  t = term_z_30;
  g_37 = t;
  t = SSL_table_put(f_37, g_37, e_37);
  t = e_37;
  t = w_89(t);
  {
    ATerm f_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_89, t);
        ;
        LocalPopChoice(h_31);
      }
    else
      {
        t = f_31;
        {
          ATerm i_31 = t;
          int j_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_89(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_31);
            }
          else
            {
              t = i_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
                  t = Option_3_0(f_7, g_7, i_7, t);
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
  ATerm p_37 = NULL,q_37 = NULL;
  t = term_s_31;
  p_37 = t;
  t = term_o_17;
  q_37 = t;
  t = term_t_31;
  t = r_6(p_37, q_37, t);
  t = term_u_31;
  return(t);
}
ATerm i_7 (ATerm t)
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
      ATerm x_37 = NULL,y_37 = NULL;
      y_37 = t;
      if(match_cons(t, sym_FILE_1))
        {
          x_37 = ATgetArgument(t, 0);
          {
            ATerm b_14 = NULL,f_5 = NULL;
            t = SSLgetAnnotations(y_37);
            b_14 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, x_37);
            f_5 = t;
            t = SSLsetAnnotations(f_5, b_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_37;
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
        ATerm g_38 = NULL,h_38 = NULL;
        h_38 = t;
        if(match_cons(t, sym_FILE_1))
          {
            g_38 = ATgetArgument(t, 0);
            {
              ATerm j_14 = NULL,h_5 = NULL;
              t = SSLgetAnnotations(h_38);
              j_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_38);
              h_5 = t;
              t = SSLsetAnnotations(h_5, j_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_38;
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
      ATerm e_32 = t;
      int f_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_38 = NULL,q_38 = NULL;
          q_38 = t;
          if(match_cons(t, sym_FILE_1))
            {
              p_38 = ATgetArgument(t, 0);
              {
                ATerm y_14 = NULL,i_5 = NULL;
                t = SSLgetAnnotations(q_38);
                y_14 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, p_38);
                i_5 = t;
                t = SSLsetAnnotations(i_5, y_14);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = q_38;
            }
          LocalPopChoice(f_32);
          t = xtc_transform_file_2_0(b_8, pass_verbose_0_0, t);
        }
      else
        {
          t = e_32;
          t = xtc_transform_term_2_0(c_8, pass_verbose_0_0, t);
        }
    }
  }
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm z_37 = NULL;
  t = term_k_32;
  t = xtc_find_0_0(t);
  z_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_37), term_l_32);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm a_38 = NULL;
  t = term_k_32;
  t = xtc_find_0_0(t);
  a_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_38), term_l_32);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm io_pp_box_0_0 (ATerm t)
{
  t = option_wrap_4_0(d_7, default_usage_0_0, _id, e_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_box_0_0(t);
  return(t);
}
