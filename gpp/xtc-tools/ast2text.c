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
ATerm term_q_32;
ATerm term_p_32;
ATerm term_n_32;
ATerm term_p_31;
ATerm term_l_31;
ATerm term_i_31;
ATerm term_y_30;
ATerm term_p_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_l_29;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_e_28;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_i_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_v_24;
ATerm term_k_24;
ATerm term_g_24;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_r_21;
ATerm term_n_21;
ATerm term_l_21;
ATerm term_h_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_g_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_t_19;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_h_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_t_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_l_10;
ATerm term_h_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_j_8;
ATerm term_c_8;
void init_constant_terms (void)
{
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_9, term_n_8, term_p_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_9, term_s_9, term_t_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_x_9, term_a_10);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_h_10, term_l_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_10, term_q_10, term_r_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_u_10, term_v_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_10, term_y_10, term_c_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_f_11, term_g_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_11, term_j_11, term_m_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_11, term_r_11, term_u_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_z_11, term_a_12);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_e_12, term_f_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_k_12, term_p_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_w_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_g_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_q_13, term_r_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_y_13, term_a_14);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_e_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_o_14, term_p_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_z_14);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_n_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_t_16, term_u_16);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__2, term_r_20, term_e_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_r_20, term_s_20);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym__2, term_m_22, term_b_22);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_u_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_25);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym__2, term_z_25, term_r_8);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym__2, term_q_25, term_r_25);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym__2, term_f_30, term_r_8);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym__2, term_k_30, term_r_8);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym__2, term_h_28, term_r_8);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
ATerm pass_width_0_0 (ATerm);
ATerm c_6 (ATerm l_43, ATerm m_43, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm b_0 (ATerm);
ATerm t_0 (ATerm);
ATerm xtc_abox2text_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm d_6 (ATerm u_27, ATerm v_27, ATerm);
ATerm e_6 (ATerm k_72 (ATerm), ATerm n_180, ATerm c_28, ATerm);
ATerm w_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm);
ATerm f_6 (ATerm q_24, ATerm r_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm p_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm z_70 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm i_100 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm h_100 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm j_100 (ATerm), ATerm);
ATerm i_6 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm x_34, ATerm w_34, ATerm);
ATerm j_6 (ATerm h_80 (ATerm), ATerm t_34, ATerm s_34, ATerm);
ATerm g_1 (ATerm);
ATerm k_6 (ATerm h_46, ATerm i_46, ATerm j_46, ATerm);
ATerm l_6 (ATerm t_87 (ATerm), ATerm r_46, ATerm q_46, ATerm);
ATerm d_10 (ATerm v_9, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm m_6 (ATerm a_28, ATerm);
ATerm n_6 (ATerm w_48, ATerm x_48, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm b_13 (ATerm a_11, ATerm);
ATerm e_13 (ATerm k_11, ATerm l_11, ATerm s_11, ATerm);
ATerm f_13 (ATerm l_12, ATerm m_12, ATerm n_12, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm y_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm s_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm k_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_18 (ATerm o_17, ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm x_89 (ATerm), ATerm);
ATerm o_6 (ATerm w_86 (ATerm), ATerm t_44, ATerm r_44, ATerm);
ATerm s_19 (ATerm d_19, ATerm);
ATerm v_19 (ATerm f_19, ATerm h_19, ATerm j_19, ATerm);
ATerm d_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm p_6 (ATerm o_48, ATerm p_48, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm e_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm q_6 (ATerm w_24, ATerm x_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm r_6 (ATerm p_45, ATerm q_45, ATerm);
ATerm end_scope_1_0 (ATerm t_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm m_3 (ATerm);
ATerm p_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm j_89 (ATerm), ATerm);
ATerm v_3 (ATerm);
ATerm xtc_io_1_0 (ATerm k_89 (ATerm), ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm ast2text_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm at_end_1_0 (ATerm t_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm y_26 (ATerm p_26, ATerm);
ATerm conc_0_0 (ATerm);
ATerm s_6 (ATerm q_47, ATerm p_47, ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm pp_options_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm h_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm w_5 (ATerm);
ATerm abox2text_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm t_6 (ATerm f_43, ATerm g_43, ATerm);
ATerm foldr_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_100 (ATerm), ATerm);
ATerm g_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm v_6 (ATerm);
ATerm need_help_1_0 (ATerm r_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm f_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm n_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_6 (ATerm b_42, ATerm c_42, ATerm);
ATerm debug_1_0 (ATerm i_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm h_7 (ATerm);
ATerm j_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm a_7 (ATerm k_47, ATerm l_47, ATerm);
ATerm x_6 (ATerm b_47, ATerm c_47, ATerm);
ATerm y_6 (ATerm k_45, ATerm l_45, ATerm j_45, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm p_93 (ATerm), ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm parse_options_1_0 (ATerm o_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm);
ATerm z_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_8;
      t = get_config_0_0(t);
      LocalPopChoice(b_8);
      {
        ATerm f_0 = NULL;
        f_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_c_8);
      }
    }
  else
    {
      t = a_8;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm c_6 (ATerm l_43, ATerm m_43, ATerm t)
{
  ATerm f_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(l_43, m_43);
      ;
      LocalPopChoice(h_8);
    }
  else
    {
      t = f_8;
      t = SSL_subtr(l_43, m_43);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL;
  t = term_j_8;
  {
    ATerm k_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_8);
      }
    else
      {
        t = k_8;
        t = term_n_8;
      }
    o_0 = t;
    t = term_n_8;
    q_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_0, term_n_8);
    t = c_6(o_0, q_0, t);
    p_0 = t;
    t = SSL_int_to_string(p_0);
    n_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, n_0), term_j_8);
  }
  return(t);
}
ATerm b_0 (ATerm t)
{
  t = term_o_8;
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_o_8;
  return(t);
}
ATerm xtc_abox2text_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 = NULL,c_1 = NULL;
      c_1 = t;
      if(match_cons(t, sym_FILE_1))
        {
          a_1 = ATgetArgument(t, 0);
          {
            ATerm s_0 = NULL,v_0 = NULL;
            t = SSLgetAnnotations(c_1);
            s_0 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, a_1);
            v_0 = t;
            t = SSLsetAnnotations(v_0, s_0);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_1;
        }
      LocalPopChoice(q_8);
      {
        ATerm r_0 (ATerm t)
        {
          ATerm h_1 = NULL,i_1 = NULL,n_1 = NULL;
          t = term_r_8;
          t = o_90(t);
          n_1 = t;
          t = SSL_int_to_string(n_1);
          h_1 = t;
          t = term_r_8;
          t = pass_verbose_0_0(t);
          i_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, h_1), term_c_8), i_1);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(b_0, r_0, t);
      }
    }
  else
    {
      t = p_8;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm q_1 = NULL,r_1 = NULL,t_1 = NULL;
          t = term_r_8;
          t = o_90(t);
          t_1 = t;
          t = SSL_int_to_string(t_1);
          q_1 = t;
          t = term_r_8;
          t = pass_verbose_0_0(t);
          r_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, q_1), term_c_8), r_1);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(t_0, u_0, t);
      }
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm e_2 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_t_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm l_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          e_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_v_8);
      l_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_2, (ATerm) ATinsert(ATempty, term_v_8));
      t = p_6(e_2, l_2, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm d_6 (ATerm u_27, ATerm v_27, ATerm t)
{
  ATerm p_2 = NULL;
  t = SSL_write_term_to_stream_baf(u_27, v_27);
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_2);
  return(t);
}
ATerm e_6 (ATerm k_72 (ATerm), ATerm n_180, ATerm c_28, ATerm t)
{
  ATerm q_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_180, term_w_8);
  t = open_stream_0_0(t);
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_2, c_28);
  t = k_72(t);
  t = fclose_0_0(t);
  t = c_28;
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_9 = ATgetArgument(t, 0);
      if(match_cons(a_9, sym_Stream_1))
        {
          t_2 = ATgetArgument(a_9, 0);
        }
      else
        _fail(t);
      u_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(t_2, u_2, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL;
  r_2 = t;
  t = xtc_new_file_0_0(t);
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_2, r_2);
  t = e_6(w_0, s_2, r_2, t);
  t = SSL_close_file(s_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, s_2);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(g_90, h_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm f_6 (ATerm q_24, ATerm r_24, ATerm t)
{
  t = SSL_execvp(q_24, r_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,w_3 = NULL,x_3 = NULL;
  t_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      u_3 = ATgetArgument(t, 0);
      {
        ATerm k_1 = NULL,l_1 = NULL;
        t = SSL_int_to_string(u_3);
        k_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_9), k_1), term_b_9);
        l_1 = t;
        t = SSL_concat_strings(l_1);
      }
    }
  else
    {
      ATerm c_2 = NULL,d_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          u_3 = ATgetArgument(t, 0);
          w_3 = ATgetArgument(t, 1);
          x_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(w_3);
      c_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_3), term_e_9), c_2), term_d_9), u_3);
      d_2 = t;
      t = SSL_concat_strings(d_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_76 (ATerm), ATerm t)
{
  ATerm b_4 = NULL;
  ATerm y_0 (ATerm t)
  {
    t = p_76(t);
    if(((b_4 != NULL) && (b_4 != t)))
      _fail(t);
    else
      b_4 = t;
    return(t);
  }
  t = fetch_1_0(y_0, t);
  t = not_null(b_4);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm d_4 = NULL;
  if(((d_4 != NULL) && (d_4 != t)))
    _fail(t);
  else
    d_4 = t;
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm h_9 = ATgetArgument(t, 0);
              if(((d_4 != NULL) && (d_4 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                d_4 = ATgetArgument(t, 1);
              {
                ATerm m_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_16), term_q_16), term_k_16), term_g_16), term_c_16), term_y_15), term_u_15), term_p_15), term_h_15), term_t_14), term_f_14), term_b_14), term_u_13), term_j_13), term_x_12), term_q_12), term_h_12), term_b_12), term_v_11), term_o_11), term_h_11), term_d_11), term_w_10), term_s_10), term_o_10), term_b_10), term_u_9), term_q_9);
        t = fetch_elem_1_0(b_1, t);
        ;
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(d_4));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm j_4 = NULL,t_4 = NULL;
  j_4 = t;
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm y_16 = ATgetArgument(t, 0);
            t_4 = ATgetArgument(t, 1);
            {
              ATerm z_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(x_16);
        {
          ATerm a_17 = t;
          int c_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL,o_2 = NULL,v_2 = NULL;
              t = t_4;
              {
                ATerm d_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_17;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                m_2 = t;
                t = term_l_17;
                o_2 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, m_2), term_m_17);
                v_2 = t;
                t = SSL_printnl(o_2, v_2);
                t = (ATerm) ATmakeAppl(sym__2, term_l_17, (ATerm) ATinsert(ATinsert(ATempty, m_2), term_m_17));
              }
              ;
              LocalPopChoice(c_17);
            }
          else
            {
              t = a_17;
              t = j_4;
            }
        }
      }
    else
      {
        t = w_16;
        t = j_4;
      }
    t = j_4;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm z_70 (ATerm), ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL;
  f_5 = t;
  t = fork_0_0(t);
  e_5 = t;
  {
    ATerm n_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = f_5;
        t = z_70(t);
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = n_17;
        t = SSL_waitpid(e_5);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_17 = ATgetArgument(t, 0);
            if(((ATgetType(r_17) != AT_INT) || (ATgetInt((ATermInt) r_17) != 0)))
              _fail(t);
            {
              ATerm w_17 = ATgetArgument(t, 1);
            }
            {
              ATerm y_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_5;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm i_5 = NULL;
  ATerm d_1 (ATerm t)
  {
    ATerm j_5 = NULL,k_5 = NULL;
    j_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_5), j_5);
    t = x_6(not_null(i_5), j_5, t);
    k_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_5, k_5);
    return(t);
  }
  if(((i_5 != NULL) && (i_5 != t)))
    _fail(t);
  else
    i_5 = t;
  t = SSL_table_keys(not_null(i_5));
  t = map_1_0(d_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm i_100 (ATerm), ATerm t)
{
  ATerm n_5 = NULL;
  n_5 = t;
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_5 = NULL;
        t = term_j_8;
        t = get_config_0_0(t);
        r_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_5, term_e_16);
        t = geq_0_0(t);
        t = n_5;
        t = i_100(t);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = n_5;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm h_100 (ATerm), ATerm t)
{
  ATerm v_5 = NULL;
  v_5 = t;
  {
    ATerm b_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_5 = NULL;
        t = term_j_8;
        t = get_config_0_0(t);
        x_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_5, term_e_12);
        t = geq_0_0(t);
        t = v_5;
        t = h_100(t);
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = b_18;
        t = v_5;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm e_7 = NULL;
  e_7 = t;
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_7 = NULL;
        t = term_j_8;
        t = get_config_0_0(t);
        i_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_7, term_h_10);
        t = geq_0_0(t);
        t = e_7;
        t = j_100(t);
        ;
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        t = e_7;
      }
  }
  return(t);
}
ATerm i_6 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm x_34, ATerm w_34, ATerm t)
{
  t = l_80(t);
  {
    ATerm e_1 (ATerm t)
    {
      ATerm o_7 = NULL;
      o_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_34), o_7);
      t = k_80(t);
      return(t);
    }
    t = fetch_1_0(e_1, t);
    t = not_null(w_34);
  }
  return(t);
}
ATerm j_6 (ATerm h_80 (ATerm), ATerm t_34, ATerm s_34, ATerm t)
{
  ATerm s_8 (ATerm t)
  {
    ATerm g_8 = NULL,i_8 = NULL,l_8 = NULL;
    g_8 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(s_34);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_8 = ATgetFirst((ATermList) t);
            l_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_18 = t;
          int j_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_8;
              {
                ATerm f_1 (ATerm t)
                {
                  t = not_null(s_34);
                  return(t);
                }
                t = i_6(h_80, f_1, not_null(i_8), not_null(l_8), t);
                t = s_8(t);
              }
              ;
              LocalPopChoice(j_18);
            }
          else
            {
              t = i_18;
              {
                ATerm b_3 = NULL,o_3 = NULL,x_0 = NULL;
                t = SSLgetAnnotations(g_8);
                b_3 = t;
                t = l_8;
                t = s_8(t);
                o_3 = t;
                t = (ATerm) ATinsert(CheckATermList(o_3), i_8);
                x_0 = t;
                t = SSLsetAnnotations(x_0, b_3);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(t_34);
  t = s_8(t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm i_9 = NULL;
  if(match_cons(t, sym__2))
    {
      i_9 = ATgetArgument(t, 0);
      if((i_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm k_6 (ATerm h_46, ATerm i_46, ATerm j_46, ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_18 = ATgetArgument(t, 0);
            ATerm p_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
        t = x_6(h_46, i_46, t);
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        t = (ATerm) ATempty;
      }
    z_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_8, j_46);
    t = j_6(g_1, z_8, j_46, t);
    y_8 = t;
    t = SSL_table_put(h_46, i_46, y_8);
    t = x_8;
  }
  return(t);
}
ATerm l_6 (ATerm t_87 (ATerm), ATerm r_46, ATerm q_46, ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm j_9 = NULL,k_9 = NULL;
    if(match_cons(t, sym__2))
      {
        j_9 = ATgetArgument(t, 0);
        k_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(r_46), j_9, k_9);
    t = t_87(t);
    return(t);
  }
  t = not_null(q_46);
  t = map_1_0(j_1, t);
  return(t);
}
ATerm d_10 (ATerm v_9, ATerm t)
{
  t = SSL_fclose(v_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL;
  z_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_9 = ATgetArgument(t, 0);
      {
        ATerm a_19 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_9);
            ;
            LocalPopChoice(b_19);
          }
        else
          {
            t = a_19;
            t = d_10(z_9, t);
          }
      }
    }
  else
    {
      t = d_10(z_9, t);
    }
  return(t);
}
ATerm m_6 (ATerm a_28, ATerm t)
{
  t = SSL_read_term_from_stream(a_28);
  return(t);
}
ATerm n_6 (ATerm w_48, ATerm x_48, ATerm t)
{
  ATerm g_10 = NULL;
  t = SSL_fopen(w_48, x_48);
  g_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_10);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_10 = NULL;
  t = SSL_stdin_stream();
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_10 = NULL;
  t = SSL_stdout_stream();
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_10 = NULL;
  t = SSL_stderr_stream();
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_10);
  return(t);
}
ATerm b_13 (ATerm a_11, ATerm t)
{
  ATerm b_11 = NULL;
  t = SSL_explode_term(a_11);
  if(match_cons(t, sym__2))
    {
      ATerm c_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_19 = ATgetArgument(t, 1);
        if(((ATgetType(e_19) == AT_LIST) && !(ATisEmpty(e_19))))
          {
            b_11 = ATgetFirst((ATermList) e_19);
            {
              ATerm g_19 = (ATerm) ATgetNext((ATermList) e_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_11;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_11;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_11;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_11;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm e_13 (ATerm k_11, ATerm l_11, ATerm s_11, ATerm t)
{
  ATerm t_11 = NULL,w_11 = NULL,x_11 = NULL,j_12 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(s_11);
  x_11 = t;
  t = k_11;
  if(match_cons(t, sym_Path_1))
    {
      j_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_12, l_11);
  z_0 = t;
  t = SSLsetAnnotations(z_0, x_11);
  if(match_cons(t, sym__2))
    {
      t_11 = ATgetArgument(t, 0);
      w_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(t_11, w_11, t);
  return(t);
}
ATerm f_13 (ATerm l_12, ATerm m_12, ATerm n_12, ATerm t)
{
  ATerm o_12 = NULL,r_12 = NULL,s_12 = NULL,v_12 = NULL,u_1 = NULL;
  t = SSLgetAnnotations(n_12);
  s_12 = t;
  t = SSL_is_string(l_12);
  v_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_12, m_12);
  u_1 = t;
  t = SSLsetAnnotations(u_1, s_12);
  if(match_cons(t, sym__2))
    {
      o_12 = ATgetArgument(t, 0);
      r_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(o_12, r_12, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_19 = ATgetArgument(t, 0);
      ATerm k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  y_12 = t;
  if(match_cons(t, sym__2))
    {
      z_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
      {
        ATerm l_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_13(y_12, t);
            ;
            LocalPopChoice(o_19);
          }
        else
          {
            t = l_19;
            {
              ATerm q_19 = t;
              int r_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_13(z_12, a_13, y_12, t);
                  ;
                  LocalPopChoice(r_19);
                }
              else
                {
                  t = q_19;
                  t = f_13(z_12, a_13, y_12, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_13(y_12, t);
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_13 = NULL,l_13 = NULL,m_13 = NULL;
  ATerm u_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_13 = NULL;
      n_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_13, term_x_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_19);
    }
  else
    {
      t = u_19;
      t = debug_1_0(m_1, t);
      _fail(t);
    }
  l_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(m_13, t);
  h_13 = t;
  t = l_13;
  t = fclose_0_0(t);
  t = h_13;
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_13 = NULL,t_13 = NULL;
      s_13 = t;
      t = (ATerm) ATinsert(ATempty, term_g_20);
      t_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_13, (ATerm) ATinsert(ATempty, term_g_20));
      t = p_6(s_13, t_13, t);
      LocalPopChoice(f_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_20;
      {
        ATerm h_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_20 = t;
            if((PushChoice() == 0))
              {
                ATerm v_13 = NULL,x_13 = NULL;
                v_13 = t;
                t = (ATerm) ATinsert(ATempty, term_v_8);
                x_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_13, (ATerm) ATinsert(ATempty, term_v_8));
                t = p_6(v_13, x_13, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_20;
              }
            t = debug_1_0(o_1, t);
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = h_20;
            t = debug_1_0(p_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm v_14 = NULL,a_15 = NULL,b_15 = NULL;
  v_14 = t;
  t = term_l_17;
  a_15 = t;
  t = (ATerm) ATinsert(ATempty, term_o_20);
  b_15 = t;
  t = SSL_printnl(a_15, b_15);
  t = v_14;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
  if(match_cons(t, sym__3))
    {
      c_15 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
      e_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_6(c_15, d_15, e_15, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm f_15 = NULL,i_15 = NULL,j_15 = NULL;
  f_15 = t;
  t = term_l_17;
  i_15 = t;
  t = (ATerm) ATinsert(ATempty, term_p_20);
  j_15 = t;
  t = SSL_printnl(i_15, j_15);
  t = f_15;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm k_15 = NULL,o_15 = NULL,q_15 = NULL;
  k_15 = t;
  t = term_l_17;
  o_15 = t;
  t = (ATerm) ATinsert(ATempty, term_o_20);
  q_15 = t;
  t = SSL_printnl(o_15, q_15);
  t = k_15;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm z_13 = NULL,g_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,q_14 = NULL,r_14 = NULL;
  z_13 = t;
  t = if_verbose5_1_0(s_1, t);
  {
    ATerm q_20 = t;
    if((PushChoice() == 0))
      {
        ATerm s_14 = NULL,u_14 = NULL;
        t = term_r_20;
        s_14 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, z_13);
        u_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATmakeAppl(sym_Imported_1, z_13));
        t = x_6(s_14, u_14, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_20;
      }
    i_14 = t;
    t = term_r_20;
    n_14 = t;
    t = term_s_20;
    q_14 = t;
    t = (ATerm) ATinsert(ATempty, z_13);
    r_14 = t;
    t = SSL_table_put(n_14, q_14, r_14);
    t = i_14;
    t = if_verbose4_1_0(w_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(y_1, t);
    g_14 = t;
    t = term_r_20;
    m_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_20, g_14);
    t = l_6(z_1, m_14, g_14, t);
    t = if_verbose6_1_0(a_2, t);
    t = term_r_20;
    j_14 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, z_13);
    k_14 = t;
    t = (ATerm) ATempty;
    l_14 = t;
    t = SSL_table_put(j_14, k_14, l_14);
    t = (ATerm) ATmakeAppl(sym__3, term_r_20, (ATerm)ATmakeAppl(sym_Imported_1, z_13), (ATerm) ATempty);
    t = if_verbose4_1_0(b_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,s_16 = NULL;
  n_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_16;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_16 = ATgetFirst((ATermList) t);
          s_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_4 = NULL,d_5 = NULL,g_5 = NULL,f_3 = NULL;
            t = SSLgetAnnotations(n_16);
            z_4 = t;
            t = o_16;
            t = y_83(t);
            d_5 = t;
            t = s_16;
            t = filter_1_0(y_83, t);
            g_5 = t;
            t = (ATerm) ATinsert(CheckATermList(g_5), d_5);
            f_3 = t;
            t = SSLsetAnnotations(f_3, z_4);
            ;
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            t = s_16;
            t = filter_1_0(y_83, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm b_17 (ATerm t)
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_85(t);
        t = b_17(t);
        ;
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
      }
    return(t);
  }
  t = b_17(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_20 = t;
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
      t = x_20;
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_17 = NULL;
            t = term_c_21;
            e_17 = t;
            t = SSL_getenv(e_17);
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
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
  t = term_d_21;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  t = term_r_20;
  j_17 = t;
  t = term_e_21;
  k_17 = t;
  t = term_f_21;
  t = x_6(j_17, k_17, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm g_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_21;
      }
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_h_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm f_17 = NULL;
  t = if_verbose5_1_0(f_2, t);
  f_17 = t;
  {
    ATerm i_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_17 = NULL,h_17 = NULL;
        t = term_r_20;
        g_17 = t;
        t = term_s_20;
        h_17 = t;
        t = term_l_21;
        t = x_6(g_17, h_17, t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = i_21;
        {
          ATerm i_17 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          i_17 = t;
          t = repeat_1_0(h_2, t);
          t = i_17;
        }
      }
    t = f_17;
    t = if_verbose5_1_0(i_2, t);
  }
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_n_21;
  return(t);
}
ATerm o_18 (ATerm o_17, ATerm t)
{
  ATerm q_17 = NULL,s_17 = NULL,t_17 = NULL;
  t = term_r_20;
  s_17 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, o_17);
  t_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATmakeAppl(sym_Tool_1, o_17));
  t = x_6(s_17, t_17, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_21 = ATgetFirst((ATermList) t);
      if(match_cons(o_21, sym__2))
        {
          ATerm q_21 = ATgetArgument(o_21, 0);
          q_17 = ATgetArgument(o_21, 1);
        }
      else
        _fail(t);
      {
        ATerm p_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_17;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_n_21;
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
  t = term_r_21;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_17 = NULL,v_17 = NULL,x_17 = NULL;
      t = if_verbose5_1_0(k_2, t);
      t = xtc_load_0_0(t);
      if(((x_17 != NULL) && (x_17 != t)))
        _fail(t);
      else
        x_17 = t;
      if(match_cons(t, sym__2))
        {
          u_17 = ATgetArgument(t, 0);
          v_17 = ATgetArgument(t, 1);
          {
            ATerm u_21 = t;
            int v_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
                t = term_r_20;
                if(((d_18 != NULL) && (d_18 != t)))
                  _fail(t);
                else
                  d_18 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(u_17));
                if(((e_18 != NULL) && (e_18 != t)))
                  _fail(t);
                else
                  e_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATmakeAppl(sym_Tool_1, not_null(u_17)));
                t = x_6(not_null(d_18), not_null(e_18), t);
                {
                  ATerm w_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((v_17 != NULL) && (v_17 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          v_17 = ATgetArgument(t, 0);
                        if(((c_18 != NULL) && (c_18 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(w_2, t);
                  t = not_null(c_18);
                }
                ;
                LocalPopChoice(v_21);
              }
            else
              {
                t = u_21;
                t = o_18(not_null(x_17), t);
              }
          }
        }
      else
        {
          t = o_18(not_null(x_17), t);
        }
      t = if_verbose5_1_0(x_2, t);
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      {
        ATerm m_18 = NULL,y_5 = NULL,a_6 = NULL;
        m_18 = t;
        t = term_l_17;
        y_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_21), m_18), term_w_21);
        a_6 = t;
        t = SSL_printnl(y_5, a_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_21), m_18), term_w_21);
        t = if_verbose5_1_0(z_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL;
  if(((r_18 != NULL) && (r_18 != t)))
    _fail(t);
  else
    r_18 = t;
  t = x_89(t);
  t = xtc_find_0_0(t);
  if(((q_18 != NULL) && (q_18 != t)))
    _fail(t);
  else
    q_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_18), not_null(r_18));
  {
    ATerm c_3 (ATerm t)
    {
      ATerm s_18 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_18), not_null(r_18));
      t = f_6(not_null(q_18), not_null(r_18), t);
      t = term_y_21;
      s_18 = t;
      t = SSL_exit(s_18);
      return(t);
    }
    t = fork_and_wait_1_0(c_3, t);
    t = not_null(r_18);
  }
  return(t);
}
ATerm o_6 (ATerm w_86 (ATerm), ATerm t_44, ATerm r_44, ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  t = w_86(t);
  t_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_18, t_44, r_44);
  t = y_6(t_18, t_44, r_44, t);
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL;
        t = term_b_22;
        z_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_18, term_b_22);
        t = x_6(t_18, z_18, t);
        ;
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_18 = ATgetFirst((ATermList) t);
        v_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_b_22;
    x_18 = t;
    t = (ATerm) ATinsert(CheckATermList(v_18), (ATerm) ATinsert(CheckATermList(u_18), t_44));
    y_18 = t;
    t = SSL_table_put(t_18, x_18, y_18);
    t = w_18;
  }
  return(t);
}
ATerm s_19 (ATerm d_19, ATerm t)
{
  t = d_19;
  {
    ATerm c_22 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_22 = ATgetArgument(t, 0);
            ATerm e_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_22;
      }
    t = term_f_22;
    t = debug_1_0(d_3, t);
    t = (ATerm) ATmakeAppl(sym__2, d_19, term_w_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm v_19 (ATerm f_19, ATerm h_19, ATerm j_19, ATerm t)
{
  t = SSL_open_file(f_19, h_19);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_g_22;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,p_19 = NULL;
  m_19 = t;
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      p_19 = ATgetArgument(t, 1);
      {
        ATerm h_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_19(m_19, t);
            ;
            LocalPopChoice(i_22);
          }
        else
          {
            t = h_22;
            t = v_19(n_19, p_19, m_19, t);
          }
      }
    }
  else
    {
      t = s_19(m_19, t);
    }
  return(t);
}
ATerm p_6 (ATerm o_48, ATerm p_48, ATerm t)
{
  t = SSL_access(o_48, p_48);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,b_20 = NULL;
  t = term_r_8;
  t = new_0_0(t);
  y_19 = t;
  t = term_j_22;
  z_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_19, term_j_22);
  t = w_6(y_19, z_19, t);
  b_20 = t;
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_20 = NULL;
        t = (ATerm) ATinsert(ATempty, term_v_8);
        e_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_20, (ATerm) ATinsert(ATempty, term_v_8));
        t = p_6(b_20, e_20, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        t = b_20;
      }
  }
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_m_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  t = new_file_0_0(t);
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_20, term_w_8);
  t = open_file_0_0(t);
  t = term_r_8;
  j_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_20, term_r_8);
  t = o_6(e_3, i_20, j_20, t);
  t = i_20;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm j_21 = NULL,m_21 = NULL;
  j_21 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_6 = NULL,u_6 = NULL;
      t = j_21;
      t = xtc_new_file_0_0(t);
      h_6 = t;
      t = m_0(t);
      u_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_6, (ATerm) ATinsert(ATinsert(ATempty, h_6), term_o_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(h_6);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_6);
    }
  else
    {
      ATerm d_7 = NULL,g_7 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_21;
      t = xtc_new_file_0_0(t);
      d_7 = t;
      t = m_0(t);
      g_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_7), term_o_22), m_21), term_p_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(d_7);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_7);
    }
  return(t);
}
ATerm q_6 (ATerm w_24, ATerm x_24, ATerm t)
{
  t = SSL_copy(w_24, x_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm n_22 = NULL,q_22 = NULL;
  n_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_7 = NULL;
        t = n_22;
        t = k_0(t);
        p_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = p_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = p_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, q_22, p_7);
        t = q_6(q_22, p_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_22);
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        {
          ATerm t_22 = t;
          int u_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_8 = NULL;
              t = n_22;
              t = k_0(t);
              d_8 = t;
              {
                ATerm v_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm e_8 = NULL;
                    e_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = e_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = e_8;
                          }
                        else
                          {
                            t = e_8;
                            if((q_22 != t))
                              {
                                _fail(t);
                              }
                            t = e_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_22;
                  }
                t = (ATerm) ATmakeAppl(sym__2, q_22, d_8);
                t = q_6(q_22, d_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, q_22);
              }
              ;
              LocalPopChoice(u_22);
            }
          else
            {
              t = t_22;
              t = n_22;
              t = k_0(t);
              if((q_22 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_22);
            }
        }
      }
  }
  return(t);
}
ATerm r_6 (ATerm p_45, ATerm q_45, ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL;
  x_22 = t;
  {
    ATerm y_22 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
        t = x_6(p_45, q_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_23 = ATgetFirst((ATermList) t);
            w_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_23);
        t = SSL_table_put(p_45, q_45, w_22);
        t = (ATerm) ATmakeAppl(sym__3, p_45, q_45, w_22);
      }
    else
      {
        t = y_22;
        t = SSL_table_remove(p_45, q_45);
        t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
      }
    t = x_22;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL;
  if(((c_23 != NULL) && (c_23 != t)))
    _fail(t);
  else
    c_23 = t;
  t = t_86(t);
  if(((b_23 != NULL) && (b_23 != t)))
    _fail(t);
  else
    b_23 = t;
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_23 = NULL;
        t = term_b_22;
        e_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_23), term_b_22);
        t = x_6(not_null(b_23), e_23, t);
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
        if(((a_23 != NULL) && (a_23 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          a_23 = ATgetFirst((ATermList) t);
        if(((z_22 != NULL) && (z_22 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          z_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_b_22;
    if(((d_23 != NULL) && (d_23 != t)))
      _fail(t);
    else
      d_23 = t;
    t = SSL_table_put(not_null(b_23), not_null(d_23), not_null(z_22));
    t = not_null(a_23);
    {
      ATerm g_3 (ATerm t)
      {
        ATerm g_23 = NULL;
        g_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_23), g_23);
        t = r_6(not_null(b_23), g_23, t);
        return(t);
      }
      t = map_1_0(g_3, t);
      t = not_null(c_23);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_87(t);
      t = p_87(t);
      ;
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      t = p_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,n_23 = NULL,o_23 = NULL;
  j_23 = t;
  t = s_86(t);
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_23, term_b_22);
  {
    ATerm r_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_23 = ATgetArgument(t, 0);
            ATerm z_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_b_22;
        s_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_23, term_b_22);
        t = x_6(i_23, s_23, t);
        ;
        LocalPopChoice(t_23);
      }
    else
      {
        t = r_23;
        t = (ATerm) ATempty;
      }
    k_23 = t;
    t = term_b_22;
    n_23 = t;
    t = (ATerm) ATinsert(CheckATermList(k_23), (ATerm) ATempty);
    o_23 = t;
    t = SSL_table_put(i_23, n_23, o_23);
    t = j_23;
  }
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_m_22;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm b_24 = NULL;
  b_24 = t;
  {
    ATerm a_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(b_24);
        ;
        LocalPopChoice(c_24);
      }
    else
      {
        t = a_24;
        t = b_24;
      }
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_m_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_89 (ATerm), ATerm t)
{
  ATerm v_23 = NULL;
  ATerm k_3 (ATerm t)
  {
    ATerm w_23 = NULL;
    w_23 = t;
    {
      ATerm d_24 = t;
      int e_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_23 = NULL,y_23 = NULL;
          t = term_m_22;
          x_23 = t;
          t = term_b_22;
          y_23 = t;
          t = term_g_24;
          t = x_6(x_23, y_23, t);
          ;
          LocalPopChoice(e_24);
        }
      else
        {
          t = d_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((v_23 != NULL) && (v_23 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            v_23 = ATgetFirst((ATermList) t);
          {
            ATerm h_24 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(v_23);
      t = map_1_0(m_3, t);
      t = w_23;
      t = end_scope_1_0(p_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(i_3, t);
  t = restore_always_2_0(j_89, k_3, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      t = term_k_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_24 = NULL;
        t = term_p_22;
        t = get_config_0_0(t);
        f_24 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, f_24);
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        t = term_t_8;
      }
    t = k_89(t);
    t = copy_to_1_0(v_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(s_3, t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_24 = NULL,o_24 = NULL;
      o_24 = t;
      if(match_cons(t, sym_FILE_1))
        {
          n_24 = ATgetArgument(t, 0);
          {
            ATerm u_8 = NULL,h_3 = NULL;
            t = SSLgetAnnotations(o_24);
            u_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, n_24);
            h_3 = t;
            t = SSLsetAnnotations(h_3, u_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_24;
        }
      LocalPopChoice(u_24);
      t = xtc_transform_file_2_0(z_3, a_4, t);
    }
  else
    {
      t = t_24;
      t = xtc_transform_term_2_0(e_4, f_4, t);
    }
  t = xtc_abox2text_1_0(pass_width_0_0, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_d_25;
  t = get_config_0_0(t);
  t = map_1_0(c_4, t);
  t = concat_0_0(t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm p_24 = NULL;
  p_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_24), term_d_25);
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_d_25;
  t = get_config_0_0(t);
  t = map_1_0(g_4, t);
  t = concat_0_0(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm s_24 = NULL;
  s_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_24), term_d_25);
  return(t);
}
ATerm ast2text_0_0 (ATerm t)
{
  t = xtc_io_1_0(y_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
  y_24 = t;
  t = term_r_8;
  t = whoami_0_0(t);
  z_24 = t;
  t = term_l_17;
  b_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_25), z_24), term_f_25);
  c_25 = t;
  t = SSL_printnl(b_25, c_25);
  t = term_n_8;
  a_25 = t;
  t = SSL_exit(a_25);
  t = y_24;
  return(t);
}
ATerm at_end_1_0 (ATerm t_76 (ATerm), ATerm t)
{
  ATerm j_26 (ATerm t)
  {
    ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
    h_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_26 = ATgetFirst((ATermList) t);
        g_26 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_9 = NULL,o_9 = NULL,j_3 = NULL;
          t = SSLgetAnnotations(h_26);
          l_9 = t;
          t = g_26;
          t = j_26(t);
          o_9 = t;
          t = (ATerm) ATinsert(CheckATermList(o_9), f_26);
          j_3 = t;
          t = SSLsetAnnotations(j_3, l_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_26;
        t = t_76(t);
      }
    return(t);
  }
  t = j_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_25 = NULL,g_25 = NULL,h_25 = NULL;
  e_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_25;
    }
  else
    {
      ATerm h_4 (ATerm t)
      {
        t = not_null(h_25);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((g_25 != NULL) && (g_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            g_25 = ATgetFirst((ATermList) t);
          if(((h_25 != NULL) && (h_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(g_25);
      t = at_end_1_0(h_4, t);
    }
  return(t);
}
ATerm y_26 (ATerm p_26, ATerm t)
{
  ATerm q_26 = NULL;
  t = SSL_explode_term(p_26);
  if(match_cons(t, sym__2))
    {
      ATerm j_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,v_26 = NULL;
  if(((v_26 != NULL) && (v_26 != t)))
    _fail(t);
  else
    v_26 = t;
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      t_26 = ATgetArgument(t, 1);
      {
        ATerm k_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_4 (ATerm t)
            {
              t = not_null(t_26);
              return(t);
            }
            t = not_null(s_26);
            t = at_end_1_0(i_4, t);
            ;
            LocalPopChoice(l_25);
          }
        else
          {
            t = k_25;
            t = y_26(not_null(v_26), t);
          }
      }
    }
  else
    {
      t = y_26(not_null(v_26), t);
    }
  return(t);
}
ATerm s_6 (ATerm q_47, ATerm p_47, ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  t = q_47;
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        t = (ATerm) ATempty;
      }
    a_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_47, a_27);
    t = conc_0_0(t);
    z_26 = t;
    t = term_o_25;
    b_27 = t;
    t = SSL_table_put(b_27, q_47, z_26);
    t = (ATerm) ATmakeAppl(sym__3, term_o_25, q_47, z_26);
  }
  return(t);
}
ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
  c_27 = t;
  t = term_d_25;
  d_27 = t;
  t = (ATerm) ATinsert(ATempty, c_27);
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_25, (ATerm) ATinsert(ATempty, c_27));
  t = s_6(d_27, e_27, t);
  t = c_27;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_p_25;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, n_4, o_4, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,s_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_27 = NULL,w_27 = NULL,z_27 = NULL;
      t = term_r_8;
      t = j_0(t);
      t_27 = t;
      t = term_q_25;
      w_27 = t;
      t = term_r_25;
      z_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_25, term_r_25, t_27);
      t = y_6(w_27, z_27, t_27, t);
      _fail(t);
    }
  else
    {
      ATerm k_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_27 = ATgetFirst((ATermList) t);
          n_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_27 = ATgetFirst((ATermList) t);
          s_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_27;
      t = h_0(t);
      t = o_27;
      t = i_0(t);
      k_28 = t;
      t = (ATerm) ATinsert(CheckATermList(s_27), k_28);
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  if(match_string(t, "-k"))
    {
      t = o_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_28;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  t = SSL_string_to_int(p_28);
  q_28 = t;
  t = term_s_25;
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_25, q_28);
  t = a_7(r_28, q_28, t);
  t = p_28;
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_4, r_4, s_4, t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  if(match_string(t, "-S"))
    {
      t = w_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_28;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL;
  t = term_j_8;
  a_29 = t;
  t = term_u_25;
  b_29 = t;
  t = term_v_25;
  t = a_7(a_29, b_29, t);
  t = term_w_25;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  t = SSL_string_to_int(c_29);
  d_29 = t;
  t = term_j_8;
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_8, d_29);
  t = a_7(e_29, d_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_29);
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL;
  t = term_z_25;
  f_29 = t;
  t = term_r_8;
  g_29 = t;
  t = term_a_26;
  t = a_7(f_29, g_29, t);
  t = term_b_26;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_4, v_4, w_4, t);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
        ATerm i_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_4, y_4, a_5, t);
            ;
            LocalPopChoice(k_26);
          }
        else
          {
            t = i_26;
            t = Option_3_0(b_5, c_5, h_5, t);
          }
      }
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm i_29 = NULL;
  i_29 = t;
  if(match_string(t, "-o"))
    {
      t = i_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_29;
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL;
  j_29 = t;
  t = term_o_22;
  k_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_22, j_29);
  t = a_7(k_29, j_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_29);
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_l_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_5, m_5, o_5, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm r_29 = NULL;
  r_29 = t;
  if(match_string(t, "-i"))
    {
      t = r_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_29;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL;
  s_29 = t;
  t = term_p_22;
  t_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_22, s_29);
  t = a_7(t_29, s_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_29);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, q_5, s_5, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm v_29 = NULL;
  v_29 = t;
  if(match_string(t, "-w"))
    {
      t = v_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = v_29;
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm w_29 = NULL,y_29 = NULL;
  w_29 = t;
  t = term_c_8;
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_8, w_29);
  t = a_7(y_29, w_29, t);
  t = w_29;
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_n_26;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm o_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = o_26;
      {
        ATerm u_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(w_26);
          }
        else
          {
            t = u_26;
            {
              ATerm x_26 = t;
              int f_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  ;
                  LocalPopChoice(f_27);
                }
              else
                {
                  t = x_26;
                  {
                    ATerm g_27 = t;
                    int h_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        ;
                        LocalPopChoice(h_27);
                      }
                    else
                      {
                        t = g_27;
                        t = ArgOption_3_0(t_5, u_5, w_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_8;
  t = whoami_0_0(t);
  z_29 = t;
  t = term_l_17;
  b_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_27), z_29);
  c_30 = t;
  t = SSL_printnl(b_30, c_30);
  t = term_n_8;
  a_30 = t;
  t = SSL_exit(a_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_27;
  t = get_config_0_0(t);
  return(t);
}
ATerm t_6 (ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_43, g_43);
      ;
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
      t = SSL_addr(f_43, g_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm t)
{
  ATerm e_30 = NULL,h_30 = NULL,i_30 = NULL;
  e_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_30;
      t = v_82(t);
    }
  else
    {
      ATerm l_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_30 = ATgetFirst((ATermList) t);
          i_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_30;
      t = foldr_2_0(v_82, w_82, t);
      l_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_30, l_30);
      t = w_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL;
  if(match_cons(t, sym__2))
    {
      m_10 = ATgetArgument(t, 0);
      n_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(m_10, n_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_30 = NULL,e_10 = NULL,f_10 = NULL;
  t = times_0_0(t);
  f_10 = t;
  t = SSL_explode_term(f_10);
  if(match_cons(t, sym__2))
    {
      ATerm p_27 = ATgetArgument(t, 0);
      e_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_10;
  t = foldr_2_0(z_5, b_6, t);
  o_30 = t;
  t = SSL_TicksToSeconds(o_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  z_30 = t;
  if(match_cons(t, sym__2))
    {
      a_31 = ATgetArgument(t, 0);
      b_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_31;
        if((a_31 != t))
          {
            _fail(t);
          }
        t = z_30;
        ;
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        t = (ATerm) ATmakeAppl(sym__2, a_31, b_31);
        {
          ATerm x_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_31, b_31);
              ;
              LocalPopChoice(y_27);
            }
          else
            {
              t = x_27;
              t = SSL_gtr(a_31, b_31);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_31, b_31);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  ATerm f_31 = NULL;
  f_31 = t;
  {
    ATerm b_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_31 = NULL;
        t = term_j_8;
        t = get_config_0_0(t);
        h_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_31, term_n_8);
        t = geq_0_0(t);
        t = f_31;
        t = e_100(t);
        ;
        LocalPopChoice(d_28);
      }
    else
      {
        t = b_28;
        t = f_31;
      }
  }
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,m_31 = NULL,n_31 = NULL;
  t = run_time_0_0(t);
  j_31 = t;
  t = term_r_8;
  t = whoami_0_0(t);
  k_31 = t;
  t = term_l_17;
  m_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_28), j_31), term_d_9), k_31);
  n_31 = t;
  t = SSL_printnl(m_31, n_31);
  t = (ATerm) ATmakeAppl(sym__2, term_l_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_28), j_31), term_d_9), k_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_25;
  o_31 = t;
  t = SSL_exit(o_31);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL;
  x_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = x_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          w_31 = ATgetArgument(t, 0);
          {
            ATerm z_10 = NULL,l_3 = NULL;
            t = SSLgetAnnotations(x_31);
            z_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, w_31);
            l_3 = t;
            t = SSLsetAnnotations(l_3, z_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = x_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      t = fetch_1_0(v_6, t);
    }
  t = r_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_32 = ATgetFirst((ATermList) t);
      b_32 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_32 = NULL,g_32 = NULL;
        ATerm z_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_32)), not_null(g_32));
          return(t);
        }
        t = not_null(b_32);
        t = g_0(t);
        if(((f_32 != NULL) && (f_32 != t)))
          _fail(t);
        else
          f_32 = t;
        t = not_null(a_32);
        t = e_0(t);
        if(((g_32 != NULL) && (g_32 != t)))
          _fail(t);
        else
          g_32 = t;
        t = not_null(b_32);
        t = reverse_acc_2_0(e_0, z_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_8;
      t = g_0(t);
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,n_3 = NULL;
  m_32 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_32);
  k_32 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_32);
  n_3 = t;
  t = SSLsetAnnotations(n_3, k_32);
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm o_32 = NULL;
  o_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_32), term_i_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL;
  ATerm j_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = j_28;
      t = fetch_1_0(b_7, t);
    }
  t = term_m_28;
  t = echo_0_0(t);
  t = term_q_25;
  i_32 = t;
  t = term_r_25;
  j_32 = t;
  t = term_n_28;
  t = x_6(i_32, j_32, t);
  t = reverse_acc_2_0(_id, c_7, t);
  t = map_1_0(f_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm n_76 (ATerm), ATerm t)
{
  ATerm l_33 (ATerm t)
  {
    ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
    i_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_33 = ATgetFirst((ATermList) t);
        k_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_28 = t;
      int t_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_11 = NULL,q_11 = NULL,q_3 = NULL;
          t = SSLgetAnnotations(i_33);
          n_11 = t;
          t = j_33;
          t = n_76(t);
          q_11 = t;
          t = (ATerm) ATinsert(CheckATermList(k_33), q_11);
          q_3 = t;
          t = SSLsetAnnotations(q_3, n_11);
          ;
          LocalPopChoice(t_28);
        }
      else
        {
          t = s_28;
          {
            ATerm d_12 = NULL,g_12 = NULL,r_3 = NULL;
            t = SSLgetAnnotations(i_33);
            d_12 = t;
            t = k_33;
            t = l_33(t);
            g_12 = t;
            t = (ATerm) ATinsert(CheckATermList(g_12), j_33);
            r_3 = t;
            t = SSLsetAnnotations(r_3, d_12);
          }
        }
    }
    return(t);
  }
  t = l_33(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
  p_33 = t;
  {
    ATerm u_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_33;
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
            t = p_33;
          }
        ;
        LocalPopChoice(v_28);
      }
    else
      {
        t = u_28;
        t = (ATerm) ATinsert(ATempty, p_33);
      }
    q_33 = t;
    t = term_k_24;
    r_33 = t;
    t = SSL_printnl(r_33, q_33);
    t = p_33;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_27;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm w_6 (ATerm b_42, ATerm c_42, ATerm t)
{
  t = SSL_strcat(b_42, c_42);
  return(t);
}
ATerm debug_1_0 (ATerm i_72 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL;
  v_33 = t;
  t = i_72(t);
  w_33 = t;
  t = term_l_17;
  x_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_33), w_33);
  y_33 = t;
  t = SSL_printnl(x_33, y_33);
  t = v_33;
  return(t);
}
ATerm map_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm n_34 (ATerm t)
  {
    ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
    k_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_34;
      }
    else
      {
        ATerm i_13 = NULL,o_13 = NULL,p_13 = NULL,k_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_34 = ATgetFirst((ATermList) t);
            m_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_34);
        i_13 = t;
        t = l_34;
        t = d_76(t);
        o_13 = t;
        t = m_34;
        t = n_34(t);
        p_13 = t;
        t = (ATerm) ATinsert(CheckATermList(p_13), o_13);
        k_4 = t;
        t = SSLsetAnnotations(k_4, i_13);
      }
    return(t);
  }
  t = n_34(t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm z_28 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(h_29);
    }
  else
    {
      t = z_28;
    }
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_l_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_35 = NULL;
      b_35 = t;
      t = SSL_is_string(b_35);
      ;
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      {
        ATerm o_29 = t;
        int p_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_7, t);
            ;
            LocalPopChoice(p_29);
          }
        else
          {
            t = o_29;
            {
              ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
              h_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_35 = ATgetArgument(t, 0);
                  t = i_35;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_35 = ATgetArgument(t, 0);
                      t = i_35;
                      {
                        ATerm q_29 = t;
                        int u_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(u_29);
                          }
                        else
                          {
                            t = q_29;
                            t = debug_1_0(j_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_35 = NULL,o_35 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_35 = ATgetArgument(t, 0);
                          j_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_35;
                      t = eval_config_0_0(t);
                      n_35 = t;
                      t = j_35;
                      t = eval_config_0_0(t);
                      o_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_35, o_35);
                      t = w_6(n_35, o_35, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL;
  s_35 = t;
  t = term_o_25;
  t_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_25, s_35);
  t = x_6(t_35, s_35, t);
  {
    ATerm x_29 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_35 = NULL,v_35 = NULL;
        t = eval_config_0_0(t);
        u_35 = t;
        t = term_o_25;
        v_35 = t;
        t = SSL_table_put(v_35, s_35, u_35);
        t = u_35;
        ;
        LocalPopChoice(d_30);
      }
    else
      {
        t = x_29;
      }
  }
  return(t);
}
ATerm k_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL;
  t = term_f_30;
  y_35 = t;
  t = term_r_8;
  z_35 = t;
  t = term_g_30;
  t = a_7(y_35, z_35, t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,e_36 = NULL,f_36 = NULL;
  t = term_f_30;
  e_36 = t;
  t = term_r_8;
  f_36 = t;
  t = term_g_30;
  t = a_7(e_36, f_36, t);
  t = term_k_30;
  a_36 = t;
  t = term_r_8;
  b_36 = t;
  t = term_m_30;
  t = a_7(a_36, b_36, t);
  t = term_n_30;
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_p_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_7, l_7, m_7, t);
      ;
      LocalPopChoice(r_30);
    }
  else
    {
      t = q_30;
      t = Option_3_0(n_7, q_7, r_7, t);
    }
  return(t);
}
ATerm a_7 (ATerm k_47, ATerm l_47, ATerm t)
{
  ATerm g_36 = NULL;
  t = term_o_25;
  g_36 = t;
  t = SSL_table_put(g_36, k_47, l_47);
  t = (ATerm) ATmakeAppl(sym__3, term_o_25, k_47, l_47);
  return(t);
}
ATerm x_6 (ATerm b_47, ATerm c_47, ATerm t)
{
  t = SSL_table_get(b_47, c_47);
  return(t);
}
ATerm y_6 (ATerm k_45, ATerm l_45, ATerm j_45, ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
  i_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_45, l_45);
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_30 = ATgetArgument(t, 0);
            ATerm v_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_45, l_45);
        t = x_6(k_45, l_45, t);
        ;
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        t = (ATerm) ATempty;
      }
    j_36 = t;
    t = (ATerm) ATinsert(CheckATermList(j_36), j_45);
    k_36 = t;
    t = SSL_table_put(k_45, l_45, k_36);
    t = i_36;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL;
      t = term_r_8;
      t = d_0(t);
      s_36 = t;
      t = term_q_25;
      t_36 = t;
      t = term_r_25;
      u_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_25, term_r_25, s_36);
      t = y_6(t_36, u_36, s_36, t);
      _fail(t);
    }
  else
    {
      ATerm x_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_36 = ATgetFirst((ATermList) t);
          r_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_36;
      t = a_0(t);
      t = term_r_8;
      t = c_0(t);
      x_36 = t;
      t = (ATerm) ATinsert(CheckATermList(r_36), x_36);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,m_4 = NULL;
  d_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_36 = ATgetFirst((ATermList) t);
      a_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_37);
  y_36 = t;
  t = z_36;
  t = v_63(t);
  b_37 = t;
  t = a_37;
  t = w_63(t);
  c_37 = t;
  t = (ATerm) ATinsert(CheckATermList(c_37), b_37);
  m_4 = t;
  t = SSLsetAnnotations(m_4, y_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,n_37 = NULL,o_37 = NULL,p_4 = NULL;
  if(((i_37 != NULL) && (i_37 != t)))
    _fail(t);
  else
    i_37 = t;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_30;
        t = p_93(t);
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
      }
    t = not_null(i_37);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_37 != NULL) && (k_37 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_37 = ATgetFirst((ATermList) t);
        if(((l_37 != NULL) && (l_37 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          l_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(i_37));
    if(((j_37 != NULL) && (j_37 != t)))
      _fail(t);
    else
      j_37 = t;
    t = term_j_27;
    if(((o_37 != NULL) && (o_37 != t)))
      _fail(t);
    else
      o_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_27, not_null(k_37));
    t = a_7(not_null(o_37), not_null(k_37), t);
    t = not_null(l_37);
    {
      ATerm y_37 (ATerm t)
      {
        ATerm c_31 = t;
        int d_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_31 = t;
            int g_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_37 = NULL;
                r_37 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_37;
                ;
                LocalPopChoice(g_31);
              }
            else
              {
                t = e_31;
                t = p_93(t);
                t = Cons_2_0(_id, y_37, t);
              }
            ;
            LocalPopChoice(d_31);
          }
        else
          {
            t = c_31;
            {
              ATerm u_37 = NULL,v_37 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_37 = ATgetFirst((ATermList) t);
                  v_37 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_37), (ATerm) ATmakeAppl(sym_Undefined_1, u_37));
            }
          }
        return(t);
      }
      t = y_37(t);
      if(((n_37 != NULL) && (n_37 != t)))
        _fail(t);
      else
        n_37 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(n_37)), (ATerm) ATmakeAppl(sym_Program_1, not_null(k_37)));
      if(((p_4 != NULL) && (p_4 != t)))
        _fail(t);
      else
        p_4 = t;
      t = SSLsetAnnotations(not_null(p_4), not_null(j_37));
    }
  }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm k_38 = NULL;
  k_38 = t;
  if(match_string(t, "--help"))
    {
      t = k_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_38;
        }
    }
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL;
  t = term_h_28;
  l_38 = t;
  t = term_r_8;
  m_38 = t;
  t = term_i_31;
  t = a_7(l_38, m_38, t);
  t = term_l_31;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_p_31;
  return(t);
}
ATerm x_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_93 (ATerm), ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL;
  if(((f_38 != NULL) && (f_38 != t)))
    _fail(t);
  else
    f_38 = t;
  t = term_q_25;
  if(((h_38 != NULL) && (h_38 != t)))
    _fail(t);
  else
    h_38 = t;
  t = term_r_25;
  if(((i_38 != NULL) && (i_38 != t)))
    _fail(t);
  else
    i_38 = t;
  t = (ATerm) ATempty;
  if(((j_38 != NULL) && (j_38 != t)))
    _fail(t);
  else
    j_38 = t;
  t = SSL_table_put(not_null(h_38), not_null(i_38), not_null(j_38));
  t = not_null(f_38);
  {
    ATerm s_7 (ATerm t)
    {
      ATerm q_31 = t;
      int r_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_93(t);
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
                t = Option_3_0(u_7, v_7, w_7, t);
                ;
                LocalPopChoice(t_31);
              }
            else
              {
                t = s_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_7, t);
    {
      ATerm u_31 = t;
      int v_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_38 = NULL;
          t_38 = t;
          {
            ATerm y_31 = t;
            int z_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_14 = NULL;
                t = t_38;
                {
                  ATerm c_32 = t;
                  int d_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_h_28;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(d_32);
                    }
                  else
                    {
                      t = c_32;
                      t = fetch_1_0(x_7, t);
                    }
                  t = t_38;
                  t = default_system_usage_0_0(t);
                  t = term_u_25;
                  w_14 = t;
                  t = SSL_exit(w_14);
                }
                ;
                LocalPopChoice(z_31);
              }
            else
              {
                t = y_31;
                {
                  ATerm g_15 = NULL;
                  t = term_f_30;
                  t = get_config_0_0(t);
                  t = t_38;
                  t = default_system_about_0_0(t);
                  t = term_u_25;
                  g_15 = t;
                  t = SSL_exit(g_15);
                }
              }
          }
          ;
          LocalPopChoice(v_31);
        }
      else
        {
          t = u_31;
          {
            ATerm e_32 = t;
            int h_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
                ATerm y_7 (ATerm t)
                {
                  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,t_7 = NULL;
                  z_38 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      y_38 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_38);
                  x_38 = t;
                  t = y_38;
                  if(((d_38 != NULL) && (d_38 != t)))
                    _fail(t);
                  else
                    d_38 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, y_38);
                  t_7 = t;
                  t = SSLsetAnnotations(t_7, x_38);
                  return(t);
                }
                t = fetch_1_0(y_7, t);
                t = term_l_17;
                if(((v_38 != NULL) && (v_38 != t)))
                  _fail(t);
                else
                  v_38 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_38)), term_n_32);
                if(((w_38 != NULL) && (w_38 != t)))
                  _fail(t);
                else
                  w_38 = t;
                t = SSL_printnl(not_null(v_38), not_null(w_38));
                t = (ATerm) ATmakeAppl(sym__2, term_l_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_38)), term_n_32));
                t = default_system_usage_0_0(t);
                t = term_n_8;
                if(((u_38 != NULL) && (u_38 != t)))
                  _fail(t);
                else
                  u_38 = t;
                t = SSL_exit(not_null(u_38));
                ;
                LocalPopChoice(h_32);
              }
            else
              {
                t = e_32;
              }
          }
        }
      if(((e_38 != NULL) && (e_38 != t)))
        _fail(t);
      else
        e_38 = t;
      t = term_q_25;
      if(((g_38 != NULL) && (g_38 != t)))
        _fail(t);
      else
        g_38 = t;
      t = SSL_table_destroy(not_null(g_38));
      t = not_null(e_38);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
  t = parse_options_1_0(t_91, t);
  e_39 = t;
  t = term_p_32;
  h_39 = t;
  t = SSL_table_create(h_39);
  t = term_p_32;
  f_39 = t;
  t = term_q_32;
  g_39 = t;
  t = SSL_table_put(f_39, g_39, e_39);
  t = e_39;
  t = v_91(t);
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_91, t);
        ;
        LocalPopChoice(s_32);
      }
    else
      {
        t = r_32;
        {
          ATerm t_32 = t;
          int u_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_32);
            }
          else
            {
              t = t_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_options_0_0(t);
      ;
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      t = pp_options_0_0(t);
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(z_7, default_usage_0_0, _id, ast2text_0_0, t);
  return(t);
}
