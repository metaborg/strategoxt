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
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_b_31;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_z_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_n_28;
ATerm term_a_28;
ATerm term_y_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_l_27;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_a_26;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_b_24;
ATerm term_x_23;
ATerm term_z_22;
ATerm term_x_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_j_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_w_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_i_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_x_19;
ATerm term_k_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_s_17;
ATerm term_m_17;
ATerm term_f_17;
ATerm term_a_17;
ATerm term_t_16;
ATerm term_i_16;
ATerm term_a_16;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_e_15;
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
ATerm term_r_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
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
ATerm term_o_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_m_10;
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
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_g_8;
void init_constant_terms (void)
{
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_9, term_l_8, term_j_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_9, term_o_9, term_r_9);
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
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_m_10, term_q_10);
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
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_x_10, term_y_10);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_11, term_e_11, term_g_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_11, term_n_11, term_o_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_11, term_t_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_y_11, term_a_12);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_e_12, term_f_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_i_12, term_k_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_q_12, term_r_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_b_13);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_f_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_i_13, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_u_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_z_13, term_d_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_14, term_h_14, term_i_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_m_14, term_n_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_y_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_c_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_z_20, term_t_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym__2, term_z_20, term_a_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_s_17, term_i_16);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_a_25);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_25);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym__2, term_j_25, term_f_17);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_u_25, term_x_25);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym__2, term_l_29, term_f_17);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym__2, term_k_18, term_f_17);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__2, term_o_27, term_f_17);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_f_32, term_f_17);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.tbl", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
ATerm x_5 (ATerm k_43, ATerm l_43, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm e_6 (ATerm t_27, ATerm u_27, ATerm);
ATerm g_6 (ATerm h_72 (ATerm), ATerm v_179, ATerm b_28, ATerm);
ATerm o_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm);
ATerm h_6 (ATerm p_24, ATerm q_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm w_70 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm i_90 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm h_7 (ATerm t_6, ATerm);
ATerm conc_0_0 (ATerm);
ATerm j_6 (ATerm t_86 (ATerm), ATerm s_44, ATerm q_44, ATerm);
ATerm r_8 (ATerm z_7, ATerm);
ATerm v_8 (ATerm b_8, ATerm c_8, ATerm d_8, ATerm);
ATerm z_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm a_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm b_1 (ATerm);
ATerm pass_v_verbose_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm a_88 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm z_5 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm w_34, ATerm v_34, ATerm);
ATerm a_6 (ATerm e_80 (ATerm), ATerm s_34, ATerm r_34, ATerm);
ATerm l_1 (ATerm);
ATerm b_6 (ATerm g_46, ATerm h_46, ATerm i_46, ATerm);
ATerm c_6 (ATerm e_88 (ATerm), ATerm q_46, ATerm p_46, ATerm);
ATerm k_6 (ATerm n_48, ATerm o_48, ATerm);
ATerm q_15 (ATerm d_15, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm d_6 (ATerm z_27, ATerm);
ATerm f_6 (ATerm v_48, ATerm w_48, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_17 (ATerm d_16, ATerm);
ATerm j_17 (ATerm k_16, ATerm l_16, ATerm m_16, ATerm);
ATerm k_17 (ATerm u_16, ATerm v_16, ATerm w_16, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm w_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm g_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm p_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm h_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm h_22 (ATerm f_21, ATerm);
ATerm z_2 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm g_3 (ATerm);
ATerm k_3 (ATerm);
ATerm xtc_sglr_1_0 (ATerm f_100 (ATerm), ATerm);
ATerm l_6 (ATerm v_24, ATerm w_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm m_6 (ATerm o_45, ATerm p_45, ATerm);
ATerm end_scope_1_0 (ATerm q_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm p_86 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm u_89 (ATerm), ATerm);
ATerm w_3 (ATerm);
ATerm xtc_io_1_0 (ATerm v_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm p_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm u_6 (ATerm j_47, ATerm k_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm s_6 (ATerm j_45, ATerm k_45, ATerm i_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_6 (ATerm e_43, ATerm f_43, ATerm);
ATerm foldr_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm g_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm need_help_1_0 (ATerm w_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm q_6 (ATerm a_42, ATerm b_42, ATerm);
ATerm debug_1_0 (ATerm f_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm r_6 (ATerm a_47, ATerm b_47, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm y_5 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm u_93 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm parse_options_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm y_7 (ATerm);
ATerm a_8 (ATerm);
ATerm e_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm x_5 (ATerm k_43, ATerm l_43, ATerm t)
{
  ATerm x_4 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(k_43, l_43);
      ;
      LocalPopChoice(f_8);
    }
  else
    {
      t = x_4;
      t = SSL_subtr(k_43, l_43);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,p_0 = NULL,r_0 = NULL;
  t = term_g_8;
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        t = term_l_8;
      }
    f_0 = t;
    t = term_l_8;
    r_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_0, term_l_8);
    t = x_5(f_0, r_0, t);
    p_0 = t;
    t = SSL_int_to_string(p_0);
    b_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, b_0), term_g_8);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_m_8;
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
      t = (ATerm) ATinsert(ATempty, term_n_8);
      d_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_0, (ATerm) ATinsert(ATempty, term_n_8));
      t = k_6(w_0, d_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm e_6 (ATerm t_27, ATerm u_27, ATerm t)
{
  ATerm e_1 = NULL;
  t = SSL_write_term_to_stream_baf(t_27, u_27);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_1);
  return(t);
}
ATerm g_6 (ATerm h_72 (ATerm), ATerm v_179, ATerm b_28, ATerm t)
{
  ATerm g_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_179, term_q_8);
  t = open_stream_0_0(t);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_1, b_28);
  t = h_72(t);
  t = fclose_0_0(t);
  t = b_28;
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm k_1 = NULL,r_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_8 = ATgetArgument(t, 0);
      if(match_cons(s_8, sym_Stream_1))
        {
          k_1 = ATgetArgument(s_8, 0);
        }
      else
        _fail(t);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(k_1, r_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL;
  h_1 = t;
  t = xtc_new_file_0_0(t);
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_1, h_1);
  t = g_6(o_0, i_1, h_1, t);
  t = SSL_close_file(i_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(r_90, s_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm h_6 (ATerm p_24, ATerm q_24, ATerm t)
{
  t = SSL_execvp(p_24, q_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
  v_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      w_2 = ATgetArgument(t, 0);
      {
        ATerm t_0 = NULL,u_0 = NULL;
        t = SSL_int_to_string(w_2);
        t_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), t_0), term_t_8);
        u_0 = t;
        t = SSL_concat_strings(u_0);
      }
    }
  else
    {
      ATerm n_1 = NULL,o_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          w_2 = ATgetArgument(t, 0);
          x_2 = ATgetArgument(t, 1);
          y_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(x_2);
      n_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_2), term_x_8), n_1), term_w_8), w_2);
      o_1 = t;
      t = SSL_concat_strings(o_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm b_3 = NULL;
  ATerm q_0 (ATerm t)
  {
    t = m_76(t);
    if(((b_3 != NULL) && (b_3 != t)))
      _fail(t);
    else
      b_3 = t;
    return(t);
  }
  t = fetch_1_0(q_0, t);
  t = not_null(b_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm c_3 = NULL;
  if(((c_3 != NULL) && (c_3 != t)))
    _fail(t);
  else
    c_3 = t;
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm g_9 = ATgetArgument(t, 0);
              if(((c_3 != NULL) && (c_3 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                c_3 = ATgetArgument(t, 1);
              {
                ATerm h_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_15), term_z_14), term_v_14), term_r_14), term_j_14), term_e_14), term_x_13), term_o_13), term_k_13), term_g_13), term_c_13), term_y_12), term_s_12), term_m_12), term_g_12), term_c_12), term_v_11), term_p_11), term_k_11), term_a_11), term_v_10), term_r_10), term_k_10), term_g_10), term_c_10), term_y_9), term_u_9), term_k_9);
        t = fetch_elem_1_0(s_0, t);
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(c_3));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm l_3 = NULL,v_3 = NULL;
  l_3 = t;
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_15 = ATgetArgument(t, 0);
            v_3 = ATgetArgument(t, 1);
            {
              ATerm i_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_15);
        {
          ATerm k_15 = t;
          int l_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_1 = NULL,x_1 = NULL,y_1 = NULL;
              t = v_3;
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
                v_1 = t;
                t = term_o_15;
                x_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, v_1), term_p_15);
                y_1 = t;
                t = SSL_printnl(x_1, y_1);
                t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(ATinsert(ATempty, v_1), term_p_15));
              }
              ;
              LocalPopChoice(l_15);
            }
          else
            {
              t = k_15;
              t = l_3;
            }
        }
      }
    else
      {
        t = f_15;
        t = l_3;
      }
    t = l_3;
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
  ATerm e_4 = NULL,f_4 = NULL;
  f_4 = t;
  t = fork_0_0(t);
  e_4 = t;
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = f_4;
        t = w_70(t);
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
        t = SSL_waitpid(e_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_15 = ATgetArgument(t, 0);
            if(((ATgetType(w_15) != AT_INT) || (ATgetInt((ATermInt) w_15) != 0)))
              _fail(t);
            {
              ATerm y_15 = ATgetArgument(t, 1);
            }
            {
              ATerm z_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm i_90 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,m_4 = NULL;
  if(((m_4 != NULL) && (m_4 != t)))
    _fail(t);
  else
    m_4 = t;
  t = i_90(t);
  t = xtc_find_0_0(t);
  if(((h_4 != NULL) && (h_4 != t)))
    _fail(t);
  else
    h_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_4), not_null(m_4));
  {
    ATerm v_0 (ATerm t)
    {
      ATerm o_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_4), not_null(m_4));
      t = h_6(not_null(h_4), not_null(m_4), t);
      t = term_a_16;
      o_4 = t;
      t = SSL_exit(o_4);
      return(t);
    }
    t = fork_and_wait_1_0(v_0, t);
    t = not_null(m_4);
  }
  return(t);
}
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
    n_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_5 = ATgetFirst((ATermList) t);
        m_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_2 = NULL,r_2 = NULL,n_0 = NULL;
          t = SSLgetAnnotations(n_5);
          i_2 = t;
          t = m_5;
          t = p_5(t);
          r_2 = t;
          t = (ATerm) ATinsert(CheckATermList(r_2), l_5);
          n_0 = t;
          t = SSLsetAnnotations(n_0, i_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_5;
        t = q_76(t);
      }
    return(t);
  }
  t = p_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
  q_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_4;
    }
  else
    {
      ATerm x_0 (ATerm t)
      {
        t = not_null(s_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((r_4 != NULL) && (r_4 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            r_4 = ATgetFirst((ATermList) t);
          if(((s_4 != NULL) && (s_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(r_4);
      t = at_end_1_0(x_0, t);
    }
  return(t);
}
ATerm h_7 (ATerm t_6, ATerm t)
{
  ATerm v_6 = NULL;
  t = SSL_explode_term(t_6);
  if(match_cons(t, sym__2))
    {
      ATerm b_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_16) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm z_6 = NULL,a_7 = NULL,e_7 = NULL;
  if(((e_7 != NULL) && (e_7 != t)))
    _fail(t);
  else
    e_7 = t;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
      {
        ATerm c_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = not_null(a_7);
              return(t);
            }
            t = not_null(z_6);
            t = at_end_1_0(y_0, t);
            ;
            LocalPopChoice(f_16);
          }
        else
          {
            t = c_16;
            t = h_7(not_null(e_7), t);
          }
      }
    }
  else
    {
      t = h_7(not_null(e_7), t);
    }
  return(t);
}
ATerm j_6 (ATerm t_86 (ATerm), ATerm s_44, ATerm q_44, ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
  p_7 = t;
  t = t_86(t);
  l_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_7, s_44, q_44);
  t = s_6(l_7, s_44, q_44, t);
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL;
        t = term_i_16;
        s_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_7, term_i_16);
        t = r_6(l_7, s_7, t);
        ;
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_7 = ATgetFirst((ATermList) t);
        o_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_i_16;
    q_7 = t;
    t = (ATerm) ATinsert(CheckATermList(o_7), (ATerm) ATinsert(CheckATermList(m_7), s_44));
    r_7 = t;
    t = SSL_table_put(l_7, q_7, r_7);
    t = p_7;
  }
  return(t);
}
ATerm r_8 (ATerm z_7, ATerm t)
{
  t = z_7;
  {
    ATerm j_16 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_16 = ATgetArgument(t, 0);
            ATerm r_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_16;
      }
    t = term_t_16;
    t = debug_1_0(z_0, t);
    t = (ATerm) ATmakeAppl(sym__2, z_7, term_q_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm v_8 (ATerm b_8, ATerm c_8, ATerm d_8, ATerm t)
{
  t = SSL_open_file(b_8, c_8);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_a_17;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,p_8 = NULL;
  j_8 = t;
  if(match_cons(t, sym__2))
    {
      k_8 = ATgetArgument(t, 0);
      p_8 = ATgetArgument(t, 1);
      {
        ATerm b_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_8(j_8, t);
            ;
            LocalPopChoice(d_17);
          }
        else
          {
            t = b_17;
            t = v_8(k_8, p_8, j_8, t);
          }
      }
    }
  else
    {
      t = r_8(j_8, t);
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
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  t = term_f_17;
  t = new_0_0(t);
  z_8 = t;
  t = term_m_17;
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_8, term_m_17);
  t = q_6(z_8, a_9, t);
  b_9 = t;
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_n_8);
        f_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_9, (ATerm) ATinsert(ATempty, term_n_8));
        t = k_6(b_9, f_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        t = b_9;
      }
  }
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_s_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  t = new_file_0_0(t);
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_9, term_q_8);
  t = open_file_0_0(t);
  t = term_f_17;
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_9, term_f_17);
  t = j_6(a_1, s_9, t_9, t);
  t = s_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm n_10 = NULL,p_10 = NULL;
  n_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_3 = NULL,j_3 = NULL;
      t = n_10;
      t = xtc_new_file_0_0(t);
      i_3 = t;
      t = m_0(t);
      j_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_3, (ATerm) ATinsert(ATinsert(ATempty, i_3), term_w_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(i_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_3);
    }
  else
    {
      ATerm z_3 = NULL,c_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_10;
      t = xtc_new_file_0_0(t);
      z_3 = t;
      t = m_0(t);
      c_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_3), term_w_17), p_10), term_z_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(z_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_3);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm b_11 = NULL;
  b_11 = t;
  {
    ATerm b_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_11 = NULL;
        t = term_g_8;
        t = get_config_0_0(t);
        d_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_11, term_w_9);
        t = geq_0_0(t);
        t = b_11;
        t = z_87(t);
        ;
        LocalPopChoice(d_18);
      }
    else
      {
        t = b_18;
        t = b_11;
      }
  }
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_k_18);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(b_1, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_11 = NULL;
  ATerm c_1 (ATerm t)
  {
    ATerm i_11 = NULL,j_11 = NULL;
    i_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_11), i_11);
    t = r_6(not_null(f_11), i_11, t);
    j_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_11, j_11);
    return(t);
  }
  if(((f_11 != NULL) && (f_11 != t)))
    _fail(t);
  else
    f_11 = t;
  t = SSL_table_keys(not_null(f_11));
  t = map_1_0(c_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm m_11 = NULL;
  m_11 = t;
  {
    ATerm l_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_11 = NULL;
        t = term_g_8;
        t = get_config_0_0(t);
        u_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_11, term_m_14);
        t = geq_0_0(t);
        t = m_11;
        t = b_88(t);
        ;
        LocalPopChoice(n_18);
      }
    else
      {
        t = l_18;
        t = m_11;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm x_11 = NULL;
  x_11 = t;
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_12 = NULL;
        t = term_g_8;
        t = get_config_0_0(t);
        b_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_12, term_r_11);
        t = geq_0_0(t);
        t = x_11;
        t = a_88(t);
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = x_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm j_12 = NULL;
  j_12 = t;
  {
    ATerm r_18 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_12 = NULL;
        t = term_g_8;
        t = get_config_0_0(t);
        l_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_12, term_a_10);
        t = geq_0_0(t);
        t = j_12;
        t = c_88(t);
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = r_18;
        t = j_12;
      }
  }
  return(t);
}
ATerm z_5 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm w_34, ATerm v_34, ATerm t)
{
  t = i_80(t);
  {
    ATerm f_1 (ATerm t)
    {
      ATerm n_12 = NULL;
      n_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_34), n_12);
      t = h_80(t);
      return(t);
    }
    t = fetch_1_0(f_1, t);
    t = not_null(v_34);
  }
  return(t);
}
ATerm a_6 (ATerm e_80 (ATerm), ATerm s_34, ATerm r_34, ATerm t)
{
  ATerm w_13 (ATerm t)
  {
    ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
    p_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(r_34);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_13 = ATgetFirst((ATermList) t);
            r_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_19 = t;
          int h_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_13;
              {
                ATerm j_1 (ATerm t)
                {
                  t = not_null(r_34);
                  return(t);
                }
                t = z_5(e_80, j_1, not_null(q_13), not_null(r_13), t);
                t = w_13(t);
              }
              ;
              LocalPopChoice(h_19);
            }
          else
            {
              t = g_19;
              {
                ATerm n_4 = NULL,v_4 = NULL,c_2 = NULL;
                t = SSLgetAnnotations(p_13);
                n_4 = t;
                t = r_13;
                t = w_13(t);
                v_4 = t;
                t = (ATerm) ATinsert(CheckATermList(v_4), q_13);
                c_2 = t;
                t = SSLsetAnnotations(c_2, n_4);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(s_34);
  t = w_13(t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm o_14 = NULL;
  if(match_cons(t, sym__2))
    {
      o_14 = ATgetArgument(t, 0);
      if((o_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm b_6 (ATerm g_46, ATerm h_46, ATerm i_46, ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
  a_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_46, h_46);
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_19 = ATgetArgument(t, 0);
            ATerm l_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_46, h_46);
        t = r_6(g_46, h_46, t);
        ;
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        t = (ATerm) ATempty;
      }
    c_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_14, i_46);
    t = a_6(l_1, c_14, i_46, t);
    b_14 = t;
    t = SSL_table_put(g_46, h_46, b_14);
    t = a_14;
  }
  return(t);
}
ATerm c_6 (ATerm e_88 (ATerm), ATerm q_46, ATerm p_46, ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm p_14 = NULL,q_14 = NULL;
    if(match_cons(t, sym__2))
      {
        p_14 = ATgetArgument(t, 0);
        q_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(q_46), p_14, q_14);
    t = e_88(t);
    return(t);
  }
  t = not_null(p_46);
  t = map_1_0(m_1, t);
  return(t);
}
ATerm k_6 (ATerm n_48, ATerm o_48, ATerm t)
{
  t = SSL_access(n_48, o_48);
  return(t);
}
ATerm q_15 (ATerm d_15, ATerm t)
{
  t = SSL_fclose(d_15);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_15 = NULL,m_15 = NULL;
  m_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_15 = ATgetArgument(t, 0);
      {
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_15);
            ;
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
            t = q_15(m_15, t);
          }
      }
    }
  else
    {
      t = q_15(m_15, t);
    }
  return(t);
}
ATerm d_6 (ATerm z_27, ATerm t)
{
  t = SSL_read_term_from_stream(z_27);
  return(t);
}
ATerm f_6 (ATerm v_48, ATerm w_48, ATerm t)
{
  ATerm r_15 = NULL;
  t = SSL_fopen(v_48, w_48);
  r_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_15);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_15 = NULL;
  t = SSL_stdin_stream();
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_15);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_15 = NULL;
  t = SSL_stdout_stream();
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_15 = NULL;
  t = SSL_stderr_stream();
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_15);
  return(t);
}
ATerm i_17 (ATerm d_16, ATerm t)
{
  ATerm e_16 = NULL;
  t = SSL_explode_term(d_16);
  if(match_cons(t, sym__2))
    {
      ATerm o_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_19 = ATgetArgument(t, 1);
        if(((ATgetType(p_19) == AT_LIST) && !(ATisEmpty(p_19))))
          {
            e_16 = ATgetFirst((ATermList) p_19);
            {
              ATerm q_19 = (ATerm) ATgetNext((ATermList) p_19);
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
ATerm j_17 (ATerm k_16, ATerm l_16, ATerm m_16, ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,s_16 = NULL,e_2 = NULL;
  t = SSLgetAnnotations(m_16);
  p_16 = t;
  t = k_16;
  if(match_cons(t, sym_Path_1))
    {
      s_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_16, l_16);
  e_2 = t;
  t = SSLsetAnnotations(e_2, p_16);
  if(match_cons(t, sym__2))
    {
      n_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(n_16, o_16, t);
  return(t);
}
ATerm k_17 (ATerm u_16, ATerm v_16, ATerm w_16, ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,c_17 = NULL,f_2 = NULL;
  t = SSLgetAnnotations(w_16);
  z_16 = t;
  t = SSL_is_string(u_16);
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_17, v_16);
  f_2 = t;
  t = SSLsetAnnotations(f_2, z_16);
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(x_16, y_16, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm e_17 = NULL,g_17 = NULL,h_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_19 = ATgetArgument(t, 0);
      ATerm s_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  e_17 = t;
  if(match_cons(t, sym__2))
    {
      g_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_17(e_17, t);
            ;
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
            {
              ATerm v_19 = t;
              int w_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_17(g_17, h_17, e_17, t);
                  ;
                  LocalPopChoice(w_19);
                }
              else
                {
                  t = v_19;
                  t = k_17(g_17, h_17, e_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_17(e_17, t);
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_17 = NULL,n_17 = NULL,q_17 = NULL;
  ATerm z_19 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_17 = NULL;
      r_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_17, term_c_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = z_19;
      t = debug_1_0(p_1, t);
      _fail(t);
    }
  n_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(q_17, t);
  l_17 = t;
  t = n_17;
  t = fclose_0_0(t);
  t = l_17;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_e_20;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_f_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_17 = NULL,u_17 = NULL;
      t_17 = t;
      t = (ATerm) ATinsert(ATempty, term_i_20);
      u_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_17, (ATerm) ATinsert(ATempty, term_i_20));
      t = k_6(t_17, u_17, t);
      LocalPopChoice(h_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_20;
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_20 = t;
            if((PushChoice() == 0))
              {
                ATerm v_17 = NULL,x_17 = NULL;
                v_17 = t;
                t = (ATerm) ATinsert(ATempty, term_n_8);
                x_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_17, (ATerm) ATinsert(ATempty, term_n_8));
                t = k_6(v_17, x_17, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_20;
              }
            t = debug_1_0(q_1, t);
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            t = debug_1_0(s_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  t = term_o_15;
  u_18 = t;
  t = (ATerm) ATinsert(ATempty, term_p_20);
  v_18 = t;
  t = SSL_printnl(u_18, v_18);
  t = t_18;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  if(match_cons(t, sym__3))
    {
      w_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
      y_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_6(w_18, x_18, y_18, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
  z_18 = t;
  t = term_o_15;
  a_19 = t;
  t = (ATerm) ATinsert(ATempty, term_q_20);
  b_19 = t;
  t = SSL_printnl(a_19, b_19);
  t = z_18;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
  c_19 = t;
  t = term_o_15;
  d_19 = t;
  t = (ATerm) ATinsert(ATempty, term_p_20);
  e_19 = t;
  t = SSL_printnl(d_19, e_19);
  t = c_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm y_17 = NULL,a_18 = NULL,c_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,m_18 = NULL;
  y_17 = t;
  t = if_verbose5_1_0(t_1, t);
  {
    ATerm s_20 = t;
    if((PushChoice() == 0))
      {
        ATerm q_18 = NULL,s_18 = NULL;
        t = term_z_20;
        q_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, y_17);
        s_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_20, (ATerm) ATmakeAppl(sym_Imported_1, y_17));
        t = r_6(q_18, s_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_20;
      }
    c_18 = t;
    t = term_z_20;
    i_18 = t;
    t = term_a_21;
    j_18 = t;
    t = (ATerm) ATinsert(ATempty, y_17);
    m_18 = t;
    t = SSL_table_put(i_18, j_18, m_18);
    t = c_18;
    t = if_verbose4_1_0(w_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(a_2, t);
    a_18 = t;
    t = term_z_20;
    h_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_20, a_18);
    t = c_6(b_2, h_18, a_18, t);
    t = if_verbose6_1_0(d_2, t);
    t = term_z_20;
    e_18 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, y_17);
    f_18 = t;
    t = (ATerm) ATempty;
    g_18 = t;
    t = SSL_table_put(e_18, f_18, g_18);
    t = (ATerm) ATmakeAppl(sym__3, term_z_20, (ATerm)ATmakeAppl(sym_Imported_1, y_17), (ATerm) ATempty);
    t = if_verbose4_1_0(g_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm y_19 = NULL,a_20 = NULL,d_20 = NULL;
  y_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_20 = ATgetFirst((ATermList) t);
          d_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_6 = NULL,w_6 = NULL,x_6 = NULL,l_2 = NULL;
            t = SSLgetAnnotations(y_19);
            i_6 = t;
            t = a_20;
            t = v_83(t);
            w_6 = t;
            t = d_20;
            t = filter_1_0(v_83, t);
            x_6 = t;
            t = (ATerm) ATinsert(CheckATermList(x_6), w_6);
            l_2 = t;
            t = SSLsetAnnotations(l_2, i_6);
            ;
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            t = d_20;
            t = filter_1_0(v_83, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm p_85 (ATerm), ATerm t)
{
  ATerm o_20 (ATerm t)
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_85(t);
        t = o_20(t);
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
      }
    return(t);
  }
  t = o_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      {
        ATerm m_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_20 = NULL;
            t = term_o_21;
            r_20 = t;
            t = SSL_getenv(r_20);
            ;
            LocalPopChoice(n_21);
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
ATerm h_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL;
  t = term_z_20;
  x_20 = t;
  t = term_t_21;
  y_20 = t;
  t = term_u_21;
  t = r_6(x_20, y_20, t);
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
ATerm m_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm t_20 = NULL;
  t = if_verbose5_1_0(h_2, t);
  t_20 = t;
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_20 = NULL,v_20 = NULL;
        t = term_z_20;
        u_20 = t;
        t = term_a_21;
        v_20 = t;
        t = term_c_22;
        t = r_6(u_20, v_20, t);
        ;
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        {
          ATerm w_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          w_20 = t;
          t = repeat_1_0(k_2, t);
          t = w_20;
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
  t = term_d_22;
  return(t);
}
ATerm h_22 (ATerm f_21, ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
  t = term_z_20;
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, f_21);
  l_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_20, (ATerm) ATmakeAppl(sym_Tool_1, f_21));
  t = r_6(k_21, l_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_22 = ATgetFirst((ATermList) t);
      if(match_cons(e_22, sym__2))
        {
          ATerm i_22 = ATgetArgument(e_22, 0);
          j_21 = ATgetArgument(e_22, 1);
        }
      else
        _fail(t);
      {
        ATerm f_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_21;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = debug_1_0(d_3, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_z_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(f_3, t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
      t = if_verbose5_1_0(p_2, t);
      t = xtc_load_0_0(t);
      if(((s_21 != NULL) && (s_21 != t)))
        _fail(t);
      else
        s_21 = t;
      if(match_cons(t, sym__2))
        {
          q_21 = ATgetArgument(t, 0);
          r_21 = ATgetArgument(t, 1);
          {
            ATerm m_22 = t;
            int n_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
                t = term_z_20;
                if(((y_21 != NULL) && (y_21 != t)))
                  _fail(t);
                else
                  y_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(q_21));
                if(((z_21 != NULL) && (z_21 != t)))
                  _fail(t);
                else
                  z_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_z_20, (ATerm) ATmakeAppl(sym_Tool_1, not_null(q_21)));
                t = r_6(not_null(y_21), not_null(z_21), t);
                {
                  ATerm t_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((r_21 != NULL) && (r_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          r_21 = ATgetArgument(t, 0);
                        if(((x_21 != NULL) && (x_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          x_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(t_2, t);
                  t = not_null(x_21);
                }
                ;
                LocalPopChoice(n_22);
              }
            else
              {
                t = m_22;
                t = h_22(not_null(s_21), t);
              }
          }
        }
      else
        {
          t = h_22(not_null(s_21), t);
        }
      t = if_verbose5_1_0(z_2, t);
      ;
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm g_22 = NULL,n_7 = NULL,t_7 = NULL;
        g_22 = t;
        t = term_o_15;
        n_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_22), g_22), term_o_22);
        t_7 = t;
        t = SSL_printnl(n_7, t_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_22), g_22), term_o_22);
        t = if_verbose5_1_0(e_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm f_100 (ATerm), ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_22 = NULL,u_22 = NULL;
      u_22 = t;
      if(match_cons(t, sym_FILE_1))
        {
          t_22 = ATgetArgument(t, 0);
          {
            ATerm x_7 = NULL,n_2 = NULL;
            t = SSLgetAnnotations(u_22);
            x_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, t_22);
            n_2 = t;
            t = SSLsetAnnotations(n_2, x_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_22;
        }
      LocalPopChoice(s_22);
      {
        ATerm h_3 (ATerm t)
        {
          ATerm v_22 = NULL,w_22 = NULL;
          t = term_f_17;
          t = f_100(t);
          t = xtc_find_0_0(t);
          v_22 = t;
          t = term_f_17;
          t = pass_v_verbose_0_0(t);
          w_22 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_22), v_22), term_z_22), term_x_22);
          return(t);
        }
        t = xtc_transform_file_2_0(g_3, h_3, t);
      }
    }
  else
    {
      t = r_22;
      {
        ATerm m_3 (ATerm t)
        {
          ATerm y_22 = NULL,b_23 = NULL;
          t = term_f_17;
          t = f_100(t);
          t = xtc_find_0_0(t);
          y_22 = t;
          t = term_f_17;
          t = pass_v_verbose_0_0(t);
          b_23 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_23), y_22), term_z_22), term_x_22);
          return(t);
        }
        t = xtc_transform_term_2_0(k_3, m_3, t);
      }
    }
  return(t);
}
ATerm l_6 (ATerm v_24, ATerm w_24, ATerm t)
{
  t = SSL_copy(v_24, w_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL;
  v_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      w_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_8 = NULL;
        t = v_23;
        t = k_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, w_23, o_8);
        t = l_6(w_23, o_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, w_23);
        ;
        LocalPopChoice(c_23);
      }
    else
      {
        t = a_23;
        {
          ATerm d_23 = t;
          int e_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_8 = NULL;
              t = v_23;
              t = k_0(t);
              y_8 = t;
              {
                ATerm f_23 = t;
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
                            if((w_23 != t))
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
                    t = f_23;
                  }
                t = (ATerm) ATmakeAppl(sym__2, w_23, y_8);
                t = l_6(w_23, y_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, w_23);
              }
              ;
              LocalPopChoice(e_23);
            }
          else
            {
              t = d_23;
              t = v_23;
              t = k_0(t);
              if((w_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_23);
            }
        }
      }
  }
  return(t);
}
ATerm m_6 (ATerm o_45, ATerm p_45, ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  d_24 = t;
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_45, p_45);
        t = r_6(o_45, p_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_23 = ATgetFirst((ATermList) t);
            c_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(h_23);
        t = SSL_table_put(o_45, p_45, c_24);
        t = (ATerm) ATmakeAppl(sym__3, o_45, p_45, c_24);
      }
    else
      {
        t = g_23;
        t = SSL_table_remove(o_45, p_45);
        t = (ATerm) ATmakeAppl(sym__2, o_45, p_45);
      }
    t = d_24;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL;
  if(((h_24 != NULL) && (h_24 != t)))
    _fail(t);
  else
    h_24 = t;
  t = q_86(t);
  if(((g_24 != NULL) && (g_24 != t)))
    _fail(t);
  else
    g_24 = t;
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_24 = NULL;
        t = term_i_16;
        j_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_24), term_i_16);
        t = r_6(not_null(g_24), j_24, t);
        ;
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_24 != NULL) && (f_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_24 = ATgetFirst((ATermList) t);
        if(((e_24 != NULL) && (e_24 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          e_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_i_16;
    if(((i_24 != NULL) && (i_24 != t)))
      _fail(t);
    else
      i_24 = t;
    t = SSL_table_put(not_null(g_24), not_null(i_24), not_null(e_24));
    t = not_null(f_24);
    {
      ATerm o_3 (ATerm t)
      {
        ATerm k_24 = NULL;
        k_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_24), k_24);
        t = m_6(not_null(g_24), k_24, t);
        return(t);
      }
      t = map_1_0(o_3, t);
      t = not_null(h_24);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm t)
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_87(t);
      t = m_87(t);
      ;
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      t = m_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_86 (ATerm), ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL;
  o_24 = t;
  t = p_86(t);
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_24, term_i_16);
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_23 = ATgetArgument(t, 0);
            ATerm q_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_16;
        b_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_24, term_i_16);
        t = r_6(n_24, b_25, t);
        ;
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        t = (ATerm) ATempty;
      }
    r_24 = t;
    t = term_i_16;
    s_24 = t;
    t = (ATerm) ATinsert(CheckATermList(r_24), (ATerm) ATempty);
    t_24 = t;
    t = SSL_table_put(n_24, s_24, t_24);
    t = o_24;
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_s_17;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(r_25);
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = r_25;
      }
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_s_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm f_25 = NULL;
  ATerm q_3 (ATerm t)
  {
    ATerm g_25 = NULL;
    g_25 = t;
    {
      ATerm t_23 = t;
      int u_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_25 = NULL,o_25 = NULL;
          t = term_s_17;
          h_25 = t;
          t = term_i_16;
          o_25 = t;
          t = term_x_23;
          t = r_6(h_25, o_25, t);
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
          if(((f_25 != NULL) && (f_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            f_25 = ATgetFirst((ATermList) t);
          {
            ATerm y_23 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(f_25);
      t = map_1_0(s_3, t);
      t = g_25;
      t = end_scope_1_0(t_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(p_3, t);
  t = restore_always_2_0(u_89, q_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      t = term_b_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm v_89 (ATerm), ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_25 = NULL;
        t = term_z_17;
        t = get_config_0_0(t);
        v_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_25);
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        t = term_m_8;
      }
    t = v_89(t);
    t = copy_to_1_0(w_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(u_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_25 = NULL,y_25 = NULL,z_25 = NULL,c_26 = NULL,d_26 = NULL;
  w_25 = t;
  t = term_f_17;
  t = whoami_0_0(t);
  y_25 = t;
  t = term_o_15;
  c_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_24), y_25), term_u_24);
  d_26 = t;
  t = SSL_printnl(c_26, d_26);
  t = term_l_8;
  z_25 = t;
  t = SSL_exit(z_25);
  t = w_25;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  if(match_string(t, "-k"))
    {
      t = f_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_26;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
  g_26 = t;
  t = SSL_string_to_int(g_26);
  h_26 = t;
  t = term_y_24;
  i_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_24, h_26);
  t = u_6(i_26, h_26, t);
  t = g_26;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_3, y_3, a_4, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm l_26 = NULL;
  l_26 = t;
  if(match_string(t, "-S"))
    {
      t = l_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_26;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  t = term_g_8;
  m_26 = t;
  t = term_a_25;
  n_26 = t;
  t = term_c_25;
  t = u_6(m_26, n_26, t);
  t = term_d_25;
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
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  o_26 = t;
  t = SSL_string_to_int(o_26);
  p_26 = t;
  t = term_g_8;
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_8, p_26);
  t = u_6(q_26, p_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_26);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  t = term_j_25;
  r_26 = t;
  t = term_f_17;
  s_26 = t;
  t = term_k_25;
  t = u_6(r_26, s_26, t);
  t = term_l_25;
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_m_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_4, g_4, i_4, t);
      ;
      LocalPopChoice(p_25);
    }
  else
    {
      t = n_25;
      {
        ATerm q_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_4, k_4, l_4, t);
            ;
            LocalPopChoice(s_25);
          }
        else
          {
            t = q_25;
            t = Option_3_0(p_4, t_4, u_4, t);
          }
      }
    }
  return(t);
}
ATerm u_6 (ATerm j_47, ATerm k_47, ATerm t)
{
  ATerm t_26 = NULL;
  t = term_t_25;
  t_26 = t;
  t = SSL_table_put(t_26, j_47, k_47);
  t = (ATerm) ATmakeAppl(sym__3, term_t_25, j_47, k_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_27 = NULL,d_27 = NULL,h_27 = NULL;
      t = term_f_17;
      t = d_0(t);
      c_27 = t;
      t = term_u_25;
      d_27 = t;
      t = term_x_25;
      h_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_25, term_x_25, c_27);
      t = s_6(d_27, h_27, c_27, t);
      _fail(t);
    }
  else
    {
      ATerm q_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_27 = ATgetFirst((ATermList) t);
          b_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_27;
      t = a_0(t);
      t = term_f_17;
      t = c_0(t);
      q_27 = t;
      t = (ATerm) ATinsert(CheckATermList(b_27), q_27);
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm s_27 = NULL;
  s_27 = t;
  if(match_string(t, "-o"))
    {
      t = s_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_27;
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL;
  v_27 = t;
  t = term_w_17;
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_17, v_27);
  t = u_6(w_27, v_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_27);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_4, y_4, z_4, t);
  return(t);
}
ATerm s_6 (ATerm j_45, ATerm k_45, ATerm i_45, ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_45, k_45);
  {
    ATerm b_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_26 = ATgetArgument(t, 0);
            ATerm k_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_45, k_45);
        t = r_6(j_45, k_45, t);
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = b_26;
        t = (ATerm) ATempty;
      }
    e_28 = t;
    t = (ATerm) ATinsert(CheckATermList(e_28), i_45);
    f_28 = t;
    t = SSL_table_put(j_45, k_45, f_28);
    t = d_28;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
      t = term_f_17;
      t = j_0(t);
      w_28 = t;
      t = term_u_25;
      x_28 = t;
      t = term_x_25;
      y_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_25, term_x_25, w_28);
      t = s_6(x_28, y_28, w_28, t);
      _fail(t);
    }
  else
    {
      ATerm c_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_28 = ATgetFirst((ATermList) t);
          t_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_28 = ATgetFirst((ATermList) t);
          v_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_28;
      t = h_0(t);
      t = u_28;
      t = i_0(t);
      c_29 = t;
      t = (ATerm) ATinsert(CheckATermList(v_28), c_29);
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  if(match_string(t, "-i"))
    {
      t = e_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_29;
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL;
  f_29 = t;
  t = term_z_17;
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_17, f_29);
  t = u_6(g_29, f_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_29);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_u_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, b_5, c_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_17;
  t = whoami_0_0(t);
  h_29 = t;
  t = term_o_15;
  j_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_26), h_29);
  k_29 = t;
  t = SSL_printnl(j_29, k_29);
  t = term_l_8;
  i_29 = t;
  t = SSL_exit(i_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_w_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_6 (ATerm e_43, ATerm f_43, ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_43, f_43);
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      t = SSL_addr(e_43, f_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
  r_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_29;
      t = s_82(t);
    }
  else
    {
      ATerm x_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_29 = ATgetFirst((ATermList) t);
          t_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_29;
      t = foldr_2_0(s_82, t_82, t);
      x_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_29, x_29);
      t = t_82(t);
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
  t = term_a_25;
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
  ATerm c_30 = NULL,l_9 = NULL,m_9 = NULL;
  t = times_0_0(t);
  m_9 = t;
  t = SSL_explode_term(m_9);
  if(match_cons(t, sym__2))
    {
      ATerm z_26 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9;
  t = foldr_2_0(e_5, g_5, t);
  c_30 = t;
  t = SSL_TicksToSeconds(c_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
  p_30 = t;
  if(match_cons(t, sym__2))
    {
      q_30 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_30;
        if((q_30 != t))
          {
            _fail(t);
          }
        t = p_30;
        ;
        LocalPopChoice(f_27);
      }
    else
      {
        t = e_27;
        t = (ATerm) ATmakeAppl(sym__2, q_30, r_30);
        {
          ATerm g_27 = t;
          int i_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_30, r_30);
              ;
              LocalPopChoice(i_27);
            }
          else
            {
              t = g_27;
              t = SSL_gtr(q_30, r_30);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_30, r_30);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm v_30 = NULL;
  v_30 = t;
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_30 = NULL;
        t = term_g_8;
        t = get_config_0_0(t);
        x_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_30, term_l_8);
        t = geq_0_0(t);
        t = v_30;
        t = x_87(t);
        ;
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
        t = v_30;
      }
  }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,c_31 = NULL,d_31 = NULL;
  t = run_time_0_0(t);
  z_30 = t;
  t = term_f_17;
  t = whoami_0_0(t);
  a_31 = t;
  t = term_o_15;
  c_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_27), z_30), term_w_8), a_31);
  d_31 = t;
  t = SSL_printnl(c_31, d_31);
  t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_27), z_30), term_w_8), a_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_25;
  e_31 = t;
  t = SSL_exit(e_31);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL;
  n_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_31 = ATgetArgument(t, 0);
          {
            ATerm o_10 = NULL,s_2 = NULL;
            t = SSLgetAnnotations(n_31);
            o_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_31);
            s_2 = t;
            t = SSLsetAnnotations(s_2, o_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      t = fetch_1_0(j_5, t);
    }
  t = w_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_31 = ATgetFirst((ATermList) t);
      r_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_31 = NULL,w_31 = NULL;
        ATerm k_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_31)), not_null(w_31));
          return(t);
        }
        t = not_null(r_31);
        t = g_0(t);
        if(((v_31 != NULL) && (v_31 != t)))
          _fail(t);
        else
          v_31 = t;
        t = not_null(q_31);
        t = e_0(t);
        if(((w_31 != NULL) && (w_31 != t)))
          _fail(t);
        else
          w_31 = t;
        t = not_null(r_31);
        t = reverse_acc_2_0(e_0, k_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_17;
      t = g_0(t);
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,u_2 = NULL;
  c_32 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_32);
  a_32 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_32);
  u_2 = t;
  t = SSLsetAnnotations(u_2, a_32);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_32), term_p_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  ATerm r_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_27);
    }
  else
    {
      t = r_27;
      t = fetch_1_0(o_5, t);
    }
  t = term_y_27;
  t = echo_0_0(t);
  t = term_u_25;
  y_31 = t;
  t = term_x_25;
  z_31 = t;
  t = term_a_28;
  t = r_6(y_31, z_31, t);
  t = reverse_acc_2_0(_id, q_5, t);
  t = map_1_0(r_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm b_33 (ATerm t)
  {
    ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
    y_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_32 = ATgetFirst((ATermList) t);
        a_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_28 = t;
      int g_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_10 = NULL,h_11 = NULL,a_3 = NULL;
          t = SSLgetAnnotations(y_32);
          z_10 = t;
          t = z_32;
          t = k_76(t);
          h_11 = t;
          t = (ATerm) ATinsert(CheckATermList(a_33), h_11);
          a_3 = t;
          t = SSLsetAnnotations(a_3, z_10);
          ;
          LocalPopChoice(g_28);
        }
      else
        {
          t = c_28;
          {
            ATerm s_11 = NULL,z_11 = NULL,n_3 = NULL;
            t = SSLgetAnnotations(y_32);
            s_11 = t;
            t = a_33;
            t = b_33(t);
            z_11 = t;
            t = (ATerm) ATinsert(CheckATermList(z_11), z_32);
            n_3 = t;
            t = SSLsetAnnotations(n_3, s_11);
          }
        }
    }
    return(t);
  }
  t = b_33(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
  f_33 = t;
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_33;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_28 = ATgetFirst((ATermList) t);
                ATerm k_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_33;
          }
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = (ATerm) ATinsert(ATempty, f_33);
      }
    g_33 = t;
    t = term_b_24;
    h_33 = t;
    t = SSL_printnl(h_33, g_33);
    t = f_33;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_w_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm q_6 (ATerm a_42, ATerm b_42, ATerm t)
{
  t = SSL_strcat(a_42, b_42);
  return(t);
}
ATerm debug_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL;
  l_33 = t;
  t = f_72(t);
  m_33 = t;
  t = term_o_15;
  n_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_33), m_33);
  o_33 = t;
  t = SSL_printnl(n_33, o_33);
  t = l_33;
  return(t);
}
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm t)
{
  ATerm d_34 (ATerm t)
  {
    ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
    a_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_34;
      }
    else
      {
        ATerm p_12 = NULL,t_12 = NULL,u_12 = NULL,r_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_34 = ATgetFirst((ATermList) t);
            c_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_34);
        p_12 = t;
        t = b_34;
        t = a_76(t);
        t_12 = t;
        t = c_34;
        t = d_34(t);
        u_12 = t;
        t = (ATerm) ATinsert(CheckATermList(u_12), t_12);
        r_3 = t;
        t = SSLsetAnnotations(r_3, p_12);
      }
    return(t);
  }
  t = d_34(t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_n_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_34 = NULL;
      l_34 = t;
      t = SSL_is_string(l_34);
      ;
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      {
        ATerm q_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_5, t);
            ;
            LocalPopChoice(r_28);
          }
        else
          {
            t = q_28;
            {
              ATerm t_34 = NULL,u_34 = NULL,y_34 = NULL;
              t_34 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_34 = ATgetArgument(t, 0);
                  t = u_34;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_34 = ATgetArgument(t, 0);
                      t = u_34;
                      {
                        ATerm z_28 = t;
                        int a_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(a_29);
                          }
                        else
                          {
                            t = z_28;
                            t = debug_1_0(t_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_35 = NULL,e_35 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_34 = ATgetArgument(t, 0);
                          y_34 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_34;
                      t = eval_config_0_0(t);
                      d_35 = t;
                      t = y_34;
                      t = eval_config_0_0(t);
                      e_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_35, e_35);
                      t = q_6(d_35, e_35, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm r_6 (ATerm a_47, ATerm b_47, ATerm t)
{
  t = SSL_table_get(a_47, b_47);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL;
  i_35 = t;
  t = term_t_25;
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_25, i_35);
  t = r_6(j_35, i_35, t);
  {
    ATerm b_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_35 = NULL,l_35 = NULL;
        t = eval_config_0_0(t);
        k_35 = t;
        t = term_t_25;
        l_35 = t;
        t = SSL_table_put(l_35, i_35, k_35);
        t = k_35;
        ;
        LocalPopChoice(d_29);
      }
    else
      {
        t = b_29;
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
  ATerm o_35 = NULL,p_35 = NULL;
  t = term_l_29;
  o_35 = t;
  t = term_f_17;
  p_35 = t;
  t = term_m_29;
  t = u_6(o_35, p_35, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_n_29;
  return(t);
}
ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL;
  t = term_l_29;
  s_35 = t;
  t = term_f_17;
  t_35 = t;
  t = term_m_29;
  t = u_6(s_35, t_35, t);
  t = term_k_18;
  q_35 = t;
  t = term_f_17;
  r_35 = t;
  t = term_o_29;
  t = u_6(q_35, r_35, t);
  t = term_p_29;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_q_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, v_5, w_5, t);
      ;
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      t = Option_3_0(y_5, o_6, p_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,b_4 = NULL;
  z_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_35 = ATgetFirst((ATermList) t);
      w_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_35);
  u_35 = t;
  t = v_35;
  t = s_63(t);
  x_35 = t;
  t = w_35;
  t = t_63(t);
  y_35 = t;
  t = (ATerm) ATinsert(CheckATermList(y_35), x_35);
  b_4 = t;
  t = SSLsetAnnotations(b_4, u_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,l_36 = NULL,m_36 = NULL,d_5 = NULL;
  if(((g_36 != NULL) && (g_36 != t)))
    _fail(t);
  else
    g_36 = t;
  {
    ATerm w_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_29;
        t = u_93(t);
        ;
        LocalPopChoice(y_29);
      }
    else
      {
        t = w_29;
      }
    t = not_null(g_36);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_36 != NULL) && (i_36 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_36 = ATgetFirst((ATermList) t);
        if(((j_36 != NULL) && (j_36 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          j_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(g_36));
    if(((h_36 != NULL) && (h_36 != t)))
      _fail(t);
    else
      h_36 = t;
    t = term_w_26;
    if(((m_36 != NULL) && (m_36 != t)))
      _fail(t);
    else
      m_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_26, not_null(i_36));
    t = u_6(not_null(m_36), not_null(i_36), t);
    t = not_null(j_36);
    {
      ATerm w_36 (ATerm t)
      {
        ATerm a_30 = t;
        int b_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_30 = t;
            int e_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_36 = NULL;
                p_36 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_36;
                ;
                LocalPopChoice(e_30);
              }
            else
              {
                t = d_30;
                t = u_93(t);
                t = Cons_2_0(_id, w_36, t);
              }
            ;
            LocalPopChoice(b_30);
          }
        else
          {
            t = a_30;
            {
              ATerm s_36 = NULL,t_36 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_36 = ATgetFirst((ATermList) t);
                  t_36 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_36), (ATerm) ATmakeAppl(sym_Undefined_1, s_36));
            }
          }
        return(t);
      }
      t = w_36(t);
      if(((l_36 != NULL) && (l_36 != t)))
        _fail(t);
      else
        l_36 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(l_36)), (ATerm) ATmakeAppl(sym_Program_1, not_null(i_36)));
      if(((d_5 != NULL) && (d_5 != t)))
        _fail(t);
      else
        d_5 = t;
      t = SSLsetAnnotations(not_null(d_5), not_null(h_36));
    }
  }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm i_37 = NULL;
  i_37 = t;
  if(match_string(t, "--help"))
    {
      t = i_37;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_37;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_37;
        }
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL;
  t = term_o_27;
  j_37 = t;
  t = term_f_17;
  k_37 = t;
  t = term_f_30;
  t = u_6(j_37, k_37, t);
  t = term_g_30;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm f_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
  if(((d_37 != NULL) && (d_37 != t)))
    _fail(t);
  else
    d_37 = t;
  t = term_u_25;
  if(((f_37 != NULL) && (f_37 != t)))
    _fail(t);
  else
    f_37 = t;
  t = term_x_25;
  if(((g_37 != NULL) && (g_37 != t)))
    _fail(t);
  else
    g_37 = t;
  t = (ATerm) ATempty;
  if(((h_37 != NULL) && (h_37 != t)))
    _fail(t);
  else
    h_37 = t;
  t = SSL_table_put(not_null(f_37), not_null(g_37), not_null(h_37));
  t = not_null(d_37);
  {
    ATerm y_6 (ATerm t)
    {
      ATerm i_30 = t;
      int j_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_93(t);
          ;
          LocalPopChoice(j_30);
        }
      else
        {
          t = i_30;
          {
            ATerm k_30 = t;
            int l_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_7, c_7, d_7, t);
                ;
                LocalPopChoice(l_30);
              }
            else
              {
                t = k_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_6, t);
    {
      ATerm m_30 = t;
      int n_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_37 = NULL;
          r_37 = t;
          {
            ATerm o_30 = t;
            int s_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_13 = NULL;
                t = r_37;
                {
                  ATerm t_30 = t;
                  int u_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_o_27;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(u_30);
                    }
                  else
                    {
                      t = t_30;
                      t = fetch_1_0(f_7, t);
                    }
                  t = r_37;
                  t = default_system_usage_0_0(t);
                  t = term_a_25;
                  v_13 = t;
                  t = SSL_exit(v_13);
                }
                ;
                LocalPopChoice(s_30);
              }
            else
              {
                t = o_30;
                {
                  ATerm f_14 = NULL;
                  t = term_l_29;
                  t = get_config_0_0(t);
                  t = r_37;
                  t = default_system_about_0_0(t);
                  t = term_a_25;
                  f_14 = t;
                  t = SSL_exit(f_14);
                }
              }
          }
          ;
          LocalPopChoice(n_30);
        }
      else
        {
          t = m_30;
          {
            ATerm w_30 = t;
            int y_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
                ATerm g_7 (ATerm t)
                {
                  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL,f_5 = NULL;
                  x_37 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      w_37 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_37);
                  v_37 = t;
                  t = w_37;
                  if(((b_37 != NULL) && (b_37 != t)))
                    _fail(t);
                  else
                    b_37 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, w_37);
                  f_5 = t;
                  t = SSLsetAnnotations(f_5, v_37);
                  return(t);
                }
                t = fetch_1_0(g_7, t);
                t = term_o_15;
                if(((t_37 != NULL) && (t_37 != t)))
                  _fail(t);
                else
                  t_37 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_37)), term_b_31);
                if(((u_37 != NULL) && (u_37 != t)))
                  _fail(t);
                else
                  u_37 = t;
                t = SSL_printnl(not_null(t_37), not_null(u_37));
                t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_37)), term_b_31));
                t = default_system_usage_0_0(t);
                t = term_l_8;
                if(((s_37 != NULL) && (s_37 != t)))
                  _fail(t);
                else
                  s_37 = t;
                t = SSL_exit(not_null(s_37));
                ;
                LocalPopChoice(y_30);
              }
            else
              {
                t = w_30;
              }
          }
        }
      if(((c_37 != NULL) && (c_37 != t)))
        _fail(t);
      else
        c_37 = t;
      t = term_u_25;
      if(((e_37 != NULL) && (e_37 != t)))
        _fail(t);
      else
        e_37 = t;
      t = SSL_table_destroy(not_null(e_37));
      t = not_null(c_37);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL;
  t = parse_options_1_0(y_91, t);
  c_38 = t;
  t = term_f_31;
  f_38 = t;
  t = SSL_table_create(f_38);
  t = term_f_31;
  d_38 = t;
  t = term_g_31;
  e_38 = t;
  t = SSL_table_put(d_38, e_38, c_38);
  t = c_38;
  t = a_92(t);
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_91, t);
        ;
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        {
          ATerm j_31 = t;
          int k_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_31);
            }
          else
            {
              t = j_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm l_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(o_31);
    }
  else
    {
      t = l_31;
      {
        ATerm p_31 = t;
        int s_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(s_31);
          }
        else
          {
            t = p_31;
            {
              ATerm t_31 = t;
              int u_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(k_7, u_7, v_7, t);
                  ;
                  LocalPopChoice(u_31);
                }
              else
                {
                  t = t_31;
                  {
                    ATerm x_31 = t;
                    int d_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(d_32);
                      }
                    else
                      {
                        t = x_31;
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
ATerm j_7 (ATerm t)
{
  t = xtc_io_1_0(w_7, t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL;
  t = term_f_32;
  j_38 = t;
  t = term_f_17;
  k_38 = t;
  t = term_g_32;
  t = u_6(j_38, k_38, t);
  t = term_h_32;
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_i_32;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = xtc_sglr_1_0(y_7, t);
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_38 = NULL,s_38 = NULL;
        s_38 = t;
        if(match_cons(t, sym_FILE_1))
          {
            r_38 = ATgetArgument(t, 0);
            {
              ATerm l_14 = NULL,h_5 = NULL;
              t = SSLgetAnnotations(s_38);
              l_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_38);
              h_5 = t;
              t = SSLsetAnnotations(h_5, l_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_38;
          }
        LocalPopChoice(k_32);
        t = xtc_transform_file_2_0(a_8, pass_verbose_0_0, t);
      }
    else
      {
        t = j_32;
        t = xtc_transform_term_2_0(e_8, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_l_32;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(i_7, default_usage_0_0, _id, j_7, t);
  return(t);
}
