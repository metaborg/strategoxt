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
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_b_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_h_31;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_y_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_q_28;
ATerm term_d_28;
ATerm term_b_28;
ATerm term_y_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_k_26;
ATerm term_b_26;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_w_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_e_23;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_i_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_t_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_e_21;
ATerm term_h_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_k_18;
ATerm term_n_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_c_13;
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
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_z_10;
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
ATerm term_n_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_c_9;
ATerm term_y_8;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_l_8;
ATerm term_u_7;
ATerm term_x_4;
void init_constant_terms (void)
{
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_8, term_c_9, term_f_9);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_9, term_m_9, term_q_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_w_9, term_x_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_d_10, term_e_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_h_10, term_i_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_o_10, term_p_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_10, term_s_10, term_t_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_a_11, term_c_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_h_11, term_i_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_o_11, term_p_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_x_11, term_y_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_d_12, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_h_12, term_i_12);
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
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_g_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_o_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_s_13, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_e_14, term_f_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_m_14, term_n_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_w_14, term_x_14);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_j_15, term_l_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_y_15);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_i_16, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_u_16, term_v_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_k_23);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_n_22);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_k_18);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym__2, term_h_19, term_a_27);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_27);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym__2, term_g_27, term_t_18);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym__2, term_b_28, term_d_28);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, term_q_31, term_t_18);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_t_18);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_r_30, term_t_18);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym__2, term_k_33, term_t_18);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm read_from_0_0 (ATerm);
ATerm y_5 (ATerm r_27, ATerm s_27, ATerm);
ATerm a_6 (ATerm d_72 (ATerm), ATerm f_180, ATerm z_27, ATerm);
ATerm x_0 (ATerm);
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
ATerm q_6 (ATerm e_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm d_6 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm);
ATerm n_7 (ATerm d_7, ATerm);
ATerm o_7 (ATerm f_7, ATerm g_7, ATerm h_7, ATerm);
ATerm i_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm n_68 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm t_5 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm);
ATerm u_5 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm);
ATerm s_1 (ATerm);
ATerm v_5 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm);
ATerm w_5 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm);
ATerm e_6 (ATerm l_48, ATerm m_48, ATerm);
ATerm j_11 (ATerm b_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_5 (ATerm x_27, ATerm);
ATerm z_5 (ATerm t_48, ATerm u_48, ATerm);
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm b_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm x_2 (ATerm);
ATerm t_16 (ATerm x_15, ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm f_6 (ATerm t_24, ATerm u_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm g_6 (ATerm m_45, ATerm n_45, ATerm);
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm g_3 (ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm xtc_io_1_0 (ATerm r_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm o_6 (ATerm h_47, ATerm i_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm m_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm m_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm h_6 (ATerm c_43, ATerm d_43, ATerm);
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm w_4 (ATerm);
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm u_68 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm v_68 (ATerm), ATerm);
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
ATerm m_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm c_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm n_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm);
ATerm j_7 (ATerm);
ATerm s_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm k_8 (ATerm);
ATerm astratego2text_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm a_1 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_x_4;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm c_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_u_7);
      c_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_1, (ATerm) ATinsert(ATempty, term_u_7));
      t = e_6(a_1, c_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm y_5 (ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm e_1 = NULL;
  t = SSL_write_term_to_stream_baf(r_27, s_27);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_1);
  return(t);
}
ATerm a_6 (ATerm d_72 (ATerm), ATerm f_180, ATerm z_27, ATerm t)
{
  ATerm n_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_180, term_l_8);
  t = open_stream_0_0(t);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_1, z_27);
  t = d_72(t);
  t = fclose_0_0(t);
  t = z_27;
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm v_1 = NULL,x_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_8 = ATgetArgument(t, 0);
      if(match_cons(m_8, sym_Stream_1))
        {
          v_1 = ATgetArgument(m_8, 0);
        }
      else
        _fail(t);
      x_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(v_1, x_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm o_1 = NULL,u_1 = NULL;
  o_1 = t;
  t = xtc_new_file_0_0(t);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_1, o_1);
  t = a_6(x_0, u_1, o_1, t);
  t = SSL_close_file(u_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, u_1);
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
  ATerm v_2 = NULL,w_2 = NULL,a_3 = NULL,c_3 = NULL;
  v_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      w_2 = ATgetArgument(t, 0);
      {
        ATerm p_0 = NULL,q_0 = NULL;
        t = SSL_int_to_string(w_2);
        p_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_8), p_0), term_o_8);
        q_0 = t;
        t = SSL_concat_strings(q_0);
      }
    }
  else
    {
      ATerm f_1 = NULL,g_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          w_2 = ATgetArgument(t, 0);
          a_3 = ATgetArgument(t, 1);
          c_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(a_3);
      f_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_3), term_u_8), f_1), term_s_8), w_2);
      g_1 = t;
      t = SSL_concat_strings(g_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm h_3 = NULL;
  ATerm y_0 (ATerm t)
  {
    t = i_76(t);
    if(((h_3 != NULL) && (h_3 != t)))
      _fail(t);
    else
      h_3 = t;
    return(t);
  }
  t = fetch_1_0(y_0, t);
  t = not_null(h_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_3 = NULL;
  j_3 = t;
  {
    ATerm v_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_16), term_q_16), term_m_16), term_f_16), term_u_15), term_h_15), term_r_14), term_i_14), term_u_13), term_q_13), term_h_13), term_w_12), term_s_12), term_o_12), term_k_12), term_f_12), term_b_12), term_v_11), term_m_11), term_d_11), term_y_10), term_u_10), term_q_10), term_j_10), term_f_10), term_b_10), term_r_9), term_i_9);
        {
          ATerm z_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm x_16 = ATgetArgument(t, 0);
                if((j_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm y_16 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(z_0, t);
        }
        ;
        LocalPopChoice(x_8);
      }
    else
      {
        t = v_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_3 = NULL;
  n_3 = t;
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_17 = ATgetArgument(t, 0);
            y_3 = ATgetArgument(t, 1);
            {
              ATerm c_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = y_3;
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
          p_1 = t;
          t = term_e_17;
          q_1 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, p_1), term_f_17);
          r_1 = t;
          t = SSL_printnl(q_1, r_1);
          t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, p_1), term_f_17));
        }
        ;
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
      }
    t = n_3;
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
  ATerm d_4 = NULL,g_4 = NULL;
  d_4 = t;
  t = fork_0_0(t);
  g_4 = t;
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = d_4;
        t = s_70(t);
        ;
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        t = SSL_waitpid(g_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_17 = ATgetArgument(t, 0);
            if(((ATgetType(i_17) != AT_INT) || (ATgetInt((ATermInt) i_17) != 0)))
              _fail(t);
            {
              ATerm j_17 = ATgetArgument(t, 1);
            }
            {
              ATerm k_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = d_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL;
  j_4 = t;
  t = e_90(t);
  t = xtc_find_0_0(t);
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_4, j_4);
  {
    ATerm b_1 (ATerm t)
    {
      ATerm l_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, k_4, j_4);
      t = b_6(k_4, j_4, t);
      t = term_n_17;
      l_4 = t;
      t = SSL_exit(l_4);
      return(t);
    }
    t = fork_and_wait_1_0(b_1, t);
    t = j_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_4, t);
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_76(t);
      }
    return(t);
  }
  t = y_4(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_17);
    }
  else
    {
      t = w_17;
      {
        ATerm s_4 = NULL,u_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_4 = ATgetFirst((ATermList) t);
            u_4 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_4;
        {
          ATerm d_1 (ATerm t)
          {
            t = u_4;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_1, t);
        }
      }
    }
  return(t);
}
ATerm q_6 (ATerm e_5, ATerm t)
{
  ATerm g_5 = NULL;
  t = SSL_explode_term(e_5);
  if(match_cons(t, sym__2))
    {
      ATerm b_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_5 = NULL,k_5 = NULL,l_5 = NULL;
  l_5 = t;
  if(match_cons(t, sym__2))
    {
      h_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
      {
        ATerm e_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              t = k_5;
              return(t);
            }
            t = h_5;
            t = at_end_1_0(h_1, t);
            ;
            LocalPopChoice(h_18);
          }
        else
          {
            t = e_18;
            t = q_6(l_5, t);
          }
      }
    }
  else
    {
      t = q_6(l_5, t);
    }
  return(t);
}
ATerm d_6 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,w_6 = NULL,y_6 = NULL;
  r_6 = t;
  t = p_86(t);
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_6, q_44, o_44);
  t = m_6(s_6, q_44, o_44, t);
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_6 = NULL;
        t = term_k_18;
        z_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_6, term_k_18);
        t = l_6(s_6, z_6, t);
        ;
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_6 = ATgetFirst((ATermList) t);
        u_6 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_k_18;
    w_6 = t;
    t = (ATerm) ATinsert(CheckATermList(u_6), (ATerm) ATinsert(CheckATermList(t_6), q_44));
    y_6 = t;
    t = SSL_table_put(s_6, w_6, y_6);
    t = r_6;
  }
  return(t);
}
ATerm n_7 (ATerm d_7, ATerm t)
{
  t = d_7;
  {
    ATerm m_18 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_18 = ATgetArgument(t, 0);
            ATerm o_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_18;
      }
    t = term_p_18;
    t = debug_1_0(i_1, t);
    t = (ATerm) ATmakeAppl(sym__2, d_7, term_l_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm o_7 (ATerm f_7, ATerm g_7, ATerm h_7, ATerm t)
{
  t = SSL_open_file(f_7, g_7);
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_q_18;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
  k_7 = t;
  if(match_cons(t, sym__2))
    {
      l_7 = ATgetArgument(t, 0);
      m_7 = ATgetArgument(t, 1);
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_7(k_7, t);
            ;
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            t = o_7(l_7, m_7, k_7, t);
          }
      }
    }
  else
    {
      t = n_7(k_7, t);
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
  ATerm p_7 = NULL,q_7 = NULL;
  t = term_t_18;
  t = new_0_0(t);
  p_7 = t;
  t = term_v_18;
  q_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_7, term_v_18);
  t = k_6(p_7, q_7, t);
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_7 = NULL,t_7 = NULL;
        r_7 = t;
        t = (ATerm) ATinsert(ATempty, term_u_7);
        t_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_7, (ATerm) ATinsert(ATempty, term_u_7));
        t = e_6(r_7, t_7, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
      }
  }
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_y_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL;
  t = new_file_0_0(t);
  v_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_7, term_l_8);
  t = open_file_0_0(t);
  t = term_t_18;
  w_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_7, term_t_18);
  t = d_6(j_1, v_7, w_7, t);
  t = v_7;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL;
  i_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm w_1 = NULL,y_1 = NULL;
      t = i_8;
      t = xtc_new_file_0_0(t);
      w_1 = t;
      t = m_0(t);
      y_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_1, (ATerm) ATinsert(ATinsert(ATempty, w_1), term_c_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(w_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_1);
    }
  else
    {
      ATerm e_2 = NULL,l_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_8;
      t = xtc_new_file_0_0(t);
      e_2 = t;
      t = m_0(t);
      l_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_2), term_c_19), j_8), term_e_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(e_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_2);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm n_68 (ATerm), ATerm t)
{
  ATerm n_8 = NULL,p_8 = NULL,r_8 = NULL,t_8 = NULL,b_0 = NULL,f_0 = NULL;
  t_8 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_8);
  n_8 = t;
  t = p_8;
  t = n_68(t);
  r_8 = t;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_8);
  b_0 = t;
  t = SSLsetAnnotations(b_0, n_8);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm w_8 = NULL;
  w_8 = t;
  t = SSL_table_keys(w_8);
  {
    ATerm k_1 (ATerm t)
    {
      ATerm z_8 = NULL,a_9 = NULL;
      z_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_8, z_8);
      t = l_6(w_8, z_8, t);
      a_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_8, a_9);
      return(t);
    }
    t = map_1_0(k_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_9 = NULL,d_9 = NULL;
      b_9 = t;
      t = term_h_19;
      t = get_config_0_0(t);
      d_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_9, term_w_15);
      t = geq_0_0(t);
      t = b_9;
      t = x_87(t);
      ;
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm i_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_9 = NULL,g_9 = NULL;
      e_9 = t;
      t = term_h_19;
      t = get_config_0_0(t);
      g_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_9, term_x_11);
      t = geq_0_0(t);
      t = e_9;
      t = w_87(t);
      ;
      LocalPopChoice(k_19);
    }
  else
    {
      t = i_19;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_9 = NULL,j_9 = NULL;
      h_9 = t;
      t = term_h_19;
      t = get_config_0_0(t);
      j_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_9, term_d_10);
      t = geq_0_0(t);
      t = h_9;
      t = y_87(t);
      ;
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
    }
  return(t);
}
ATerm t_5 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm t)
{
  t = e_80(t);
  {
    ATerm l_1 (ATerm t)
    {
      ATerm k_9 = NULL;
      k_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_34, k_9);
      t = d_80(t);
      return(t);
    }
    t = fetch_1_0(l_1, t);
    t = t_34;
  }
  return(t);
}
ATerm u_5 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm t)
{
  t = q_34;
  {
    ATerm s_9 (ATerm t)
    {
      ATerm t_19 = t;
      int u_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_34;
          ;
          LocalPopChoice(u_19);
        }
      else
        {
          t = t_19;
          {
            ATerm w_19 = t;
            int x_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
                n_9 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    o_9 = ATgetFirst((ATermList) t);
                    p_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = n_9;
                {
                  ATerm m_1 (ATerm t)
                  {
                    t = p_34;
                    return(t);
                  }
                  t = t_5(a_80, m_1, o_9, p_9, t);
                  t = s_9(t);
                }
                ;
                LocalPopChoice(x_19);
              }
            else
              {
                t = w_19;
                t = Cons_2_0(_id, s_9, t);
              }
          }
        }
      return(t);
    }
    t = s_9(t);
  }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm k_10 = NULL;
  if(match_cons(t, sym__2))
    {
      k_10 = ATgetArgument(t, 0);
      if((k_10 != ATgetArgument(t, 1)))
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
  ATerm v_9 = NULL,y_9 = NULL,z_9 = NULL;
  v_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_20 = ATgetArgument(t, 0);
            ATerm e_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
        t = l_6(e_46, f_46, t);
        ;
        LocalPopChoice(c_20);
      }
    else
      {
        t = b_20;
        t = (ATerm) ATempty;
      }
    y_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_9, g_46);
    t = u_5(s_1, y_9, g_46, t);
    z_9 = t;
    t = SSL_table_put(e_46, f_46, z_9);
    t = v_9;
  }
  return(t);
}
ATerm w_5 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm t)
{
  t = n_46;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm l_10 = NULL,m_10 = NULL;
      if(match_cons(t, sym__2))
        {
          l_10 = ATgetArgument(t, 0);
          m_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, o_46, l_10, m_10);
      t = a_88(t);
      return(t);
    }
    t = map_1_0(t_1, t);
  }
  return(t);
}
ATerm e_6 (ATerm l_48, ATerm m_48, ATerm t)
{
  t = SSL_access(l_48, m_48);
  return(t);
}
ATerm j_11 (ATerm b_11, ATerm t)
{
  t = SSL_fclose(b_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  f_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_11 = ATgetArgument(t, 0);
      {
        ATerm f_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_11);
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = f_20;
            t = j_11(f_11, t);
          }
      }
    }
  else
    {
      t = j_11(f_11, t);
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
  ATerm k_11 = NULL;
  t = SSL_fopen(t_48, u_48);
  k_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_11);
  return(t);
}
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm t)
{
  ATerm l_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,n_0 = NULL,o_0 = NULL;
  u_11 = t;
  if(match_cons(t, sym__2))
    {
      q_11 = ATgetArgument(t, 0);
      r_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_11);
  l_11 = t;
  t = q_11;
  t = z_58(t);
  s_11 = t;
  t = r_11;
  t = a_59(t);
  t_11 = t;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_11, t_11);
  n_0 = t;
  t = SSLsetAnnotations(n_0, l_11);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_11 = NULL;
  t = SSL_stdin_stream();
  z_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_12 = NULL;
  t = SSL_stdout_stream();
  a_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_12 = NULL;
  t = SSL_stderr_stream();
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_12);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm a_13 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      a_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm f_13 = NULL;
  f_13 = t;
  t = SSL_is_string(f_13);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_20 = ATgetArgument(t, 0);
      ATerm r_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_12 = NULL,l_3 = NULL;
        x_12 = t;
        t = SSL_explode_term(x_12);
        if(match_cons(t, sym__2))
          {
            ATerm u_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_20) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm x_20 = ATgetArgument(t, 1);
              if(((ATgetType(x_20) == AT_LIST) && !(ATisEmpty(x_20))))
                {
                  l_3 = ATgetFirst((ATermList) x_20);
                  {
                    ATerm y_20 = (ATerm) ATgetNext((ATermList) x_20);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = l_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = l_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = l_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = l_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        {
          ATerm c_21 = t;
          int d_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_12 = NULL,z_12 = NULL;
              t = _2_0(z_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  y_12 = ATgetArgument(t, 0);
                  z_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_5(y_12, z_12, t);
              ;
              LocalPopChoice(d_21);
            }
          else
            {
              t = c_21;
              {
                ATerm b_13 = NULL,e_13 = NULL;
                t = _2_0(a_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    b_13 = ATgetArgument(t, 0);
                    e_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_5(b_13, e_13, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  ATerm g_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_13 = NULL;
      n_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_13, term_m_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_21);
    }
  else
    {
      t = g_21;
      t = debug_1_0(b_2, t);
      _fail(t);
    }
  i_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(k_13, t);
  j_13 = t;
  t = i_13;
  t = fclose_0_0(t);
  t = j_13;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_n_21;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_q_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_13 = NULL,w_13 = NULL;
      p_13 = t;
      t = (ATerm) ATinsert(ATempty, term_t_21);
      w_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_13, (ATerm) ATinsert(ATempty, term_t_21));
      t = e_6(p_13, w_13, t);
      LocalPopChoice(s_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = r_21;
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_21 = t;
            if((PushChoice() == 0))
              {
                ATerm x_13 = NULL,y_13 = NULL;
                x_13 = t;
                t = (ATerm) ATinsert(ATempty, term_u_7);
                y_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_13, (ATerm) ATinsert(ATempty, term_u_7));
                t = e_6(x_13, y_13, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = z_21;
              }
            t = debug_1_0(c_2, t);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            t = debug_1_0(d_2, t);
          }
        t = (ATerm) ATempty;
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
  t = term_e_22;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_f_22;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL;
  t_14 = t;
  t = term_e_17;
  u_14 = t;
  t = (ATerm) ATinsert(ATempty, term_g_22);
  v_14 = t;
  t = SSL_printnl(u_14, v_14);
  t = t_14;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  if(match_cons(t, sym__3))
    {
      y_14 = ATgetArgument(t, 0);
      z_14 = ATgetArgument(t, 1);
      a_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_5(y_14, z_14, a_15, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  t = term_e_17;
  c_15 = t;
  t = (ATerm) ATinsert(ATempty, term_i_22);
  d_15 = t;
  t = SSL_printnl(c_15, d_15);
  t = b_15;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
  e_15 = t;
  t = term_e_17;
  f_15 = t;
  t = (ATerm) ATinsert(ATempty, term_g_22);
  g_15 = t;
  t = SSL_printnl(f_15, g_15);
  t = e_15;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,g_14 = NULL,h_14 = NULL,j_14 = NULL,l_14 = NULL,o_14 = NULL;
  z_13 = t;
  t = if_verbose5_1_0(f_2, t);
  {
    ATerm j_22 = t;
    if((PushChoice() == 0))
      {
        ATerm p_14 = NULL,q_14 = NULL;
        t = term_k_22;
        p_14 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, z_13);
        q_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATmakeAppl(sym_Imported_1, z_13));
        t = l_6(p_14, q_14, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_22;
      }
    a_14 = t;
    t = term_k_22;
    c_14 = t;
    t = term_n_22;
    d_14 = t;
    t = (ATerm) ATinsert(ATempty, z_13);
    g_14 = t;
    t = SSL_table_put(c_14, d_14, g_14);
    t = a_14;
    t = if_verbose4_1_0(h_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(j_2, t);
    b_14 = t;
    t = term_k_22;
    h_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_k_22, b_14);
    t = w_5(k_2, h_14, b_14, t);
    t = if_verbose6_1_0(m_2, t);
    t = term_k_22;
    j_14 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, z_13);
    l_14 = t;
    t = (ATerm) ATempty;
    o_14 = t;
    t = SSL_table_put(j_14, l_14, o_14);
    t = (ATerm) ATmakeAppl(sym__3, term_k_22, (ATerm)ATmakeAppl(sym_Imported_1, z_13), (ATerm) ATempty);
    t = if_verbose4_1_0(n_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm r_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_22);
    }
  else
    {
      t = r_22;
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              t = filter_1_0(r_83, t);
              return(t);
            }
            t = Cons_2_0(r_83, o_2, t);
            ;
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            {
              ATerm k_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_22 = ATgetFirst((ATermList) t);
                  k_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = k_15;
              t = filter_1_0(r_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm m_15 (ATerm t)
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_85(t);
        t = m_15(t);
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
      }
    return(t);
  }
  t = m_15(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm f_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_15 = NULL;
            t = term_h_23;
            n_15 = t;
            t = SSL_getenv(n_15);
            ;
            LocalPopChoice(g_23);
          }
        else
          {
            t = f_23;
            t = XTC_REPOSITORY();
          }
      }
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
  t = term_i_23;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  t = term_k_22;
  s_15 = t;
  t = term_k_23;
  t_15 = t;
  t = term_l_23;
  t = l_6(s_15, t_15, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm n_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_23;
      }
  }
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = debug_1_0(t_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_o_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm o_15 = NULL;
  t = if_verbose5_1_0(p_2, t);
  o_15 = t;
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_15 = NULL,q_15 = NULL;
        t = term_k_22;
        p_15 = t;
        t = term_n_22;
        q_15 = t;
        t = term_r_23;
        t = l_6(p_15, q_15, t);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        {
          ATerm r_15 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          r_15 = t;
          t = repeat_1_0(r_2, t);
          t = r_15;
        }
      }
    t = o_15;
    t = if_verbose5_1_0(s_2, t);
  }
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm t_16 (ATerm x_15, ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  t = term_k_22;
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_15);
  b_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATmakeAppl(sym_Tool_1, x_15));
  t = l_6(a_16, b_16, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_23 = ATgetFirst((ATermList) t);
      if(match_cons(t_23, sym__2))
        {
          ATerm v_23 = ATgetArgument(t_23, 0);
          z_15 = ATgetArgument(t_23, 1);
        }
      else
        _fail(t);
      {
        ATerm u_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_15;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = debug_1_0(b_3, t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_k_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(e_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_w_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(u_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
        e_16 = t;
        if(match_cons(t, sym__2))
          {
            c_16 = ATgetArgument(t, 0);
            d_16 = ATgetArgument(t, 1);
            {
              ATerm z_23 = t;
              int a_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_16 = NULL,j_16 = NULL,k_16 = NULL;
                  t = term_k_22;
                  j_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, c_16);
                  k_16 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATmakeAppl(sym_Tool_1, c_16));
                  t = l_6(j_16, k_16, t);
                  {
                    ATerm y_2 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((d_16 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((h_16 != NULL) && (h_16 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            h_16 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(y_2, t);
                    t = not_null(h_16);
                  }
                  ;
                  LocalPopChoice(a_24);
                }
              else
                {
                  t = z_23;
                  t = t_16(e_16, t);
                }
            }
          }
        else
          {
            t = t_16(e_16, t);
          }
        t = if_verbose5_1_0(z_2, t);
      }
      ;
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
      {
        ATerm s_16 = NULL,b_4 = NULL,c_4 = NULL;
        s_16 = t;
        t = term_e_17;
        b_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_24), s_16), term_e_24);
        c_4 = t;
        t = SSL_printnl(b_4, c_4);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_24), s_16), term_e_24);
        t = if_verbose5_1_0(d_3, t);
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
  ATerm l_17 = NULL,m_17 = NULL;
  l_17 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_4 = NULL;
        t = l_17;
        t = k_0(t);
        n_4 = t;
        {
          ATerm k_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(r_24);
            }
          else
            {
              t = k_24;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_17, n_4);
          t = f_6(m_17, n_4, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, m_17);
        }
        ;
        LocalPopChoice(j_24);
      }
    else
      {
        t = h_24;
        {
          ATerm v_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_5 = NULL;
              t = l_17;
              t = k_0(t);
              a_5 = t;
              {
                ATerm x_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm a_25 = t;
                    int b_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(b_25);
                      }
                    else
                      {
                        t = a_25;
                        {
                          ATerm c_25 = t;
                          int e_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(e_25);
                            }
                          else
                            {
                              t = c_25;
                              {
                                ATerm b_5 = NULL;
                                b_5 = t;
                                if((m_17 != t))
                                  {
                                    _fail(t);
                                  }
                                t = b_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_24;
                  }
                t = (ATerm) ATmakeAppl(sym__2, m_17, a_5);
                t = f_6(m_17, a_5, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_17);
              }
              ;
              LocalPopChoice(w_24);
            }
          else
            {
              t = v_24;
              t = l_17;
              t = k_0(t);
              if((m_17 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_17);
            }
        }
      }
  }
  return(t);
}
ATerm g_6 (ATerm m_45, ATerm n_45, ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL;
  q_17 = t;
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
        t = l_6(m_45, n_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_25 = ATgetFirst((ATermList) t);
            r_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_25);
        t = SSL_table_put(m_45, n_45, r_17);
        t = (ATerm) ATmakeAppl(sym__3, m_45, n_45, r_17);
      }
    else
      {
        t = f_25;
        t = SSL_table_remove(m_45, n_45);
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
      }
    t = q_17;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,x_17 = NULL;
  s_17 = t;
  t = m_86(t);
  t_17 = t;
  {
    ATerm i_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_17 = NULL;
        t = term_k_18;
        y_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_17, term_k_18);
        t = l_6(t_17, y_17, t);
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = i_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_17 = ATgetFirst((ATermList) t);
        u_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_k_18;
    x_17 = t;
    t = SSL_table_put(t_17, x_17, u_17);
    t = v_17;
    {
      ATerm f_3 (ATerm t)
      {
        ATerm a_18 = NULL;
        a_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_17, a_18);
        t = g_6(t_17, a_18, t);
        return(t);
      }
      t = map_1_0(f_3, t);
      t = s_17;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t)
{
  ATerm l_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_87(t);
      t = i_87(t);
      ;
      LocalPopChoice(n_25);
    }
  else
    {
      t = l_25;
      t = i_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,f_18 = NULL,g_18 = NULL,l_18 = NULL;
  c_18 = t;
  t = l_86(t);
  d_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_18, term_k_18);
  {
    ATerm o_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_18 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_25 = ATgetArgument(t, 0);
            ATerm u_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_18;
        u_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_18, term_k_18);
        t = l_6(d_18, u_18, t);
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = o_25;
        t = (ATerm) ATempty;
      }
    f_18 = t;
    t = term_k_18;
    g_18 = t;
    t = (ATerm) ATinsert(CheckATermList(f_18), (ATerm) ATempty);
    l_18 = t;
    t = SSL_table_put(d_18, g_18, l_18);
    t = c_18;
  }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_y_18;
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm v_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_19 = NULL;
      j_19 = t;
      t = SSL_remove(j_19);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = v_25;
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_y_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm z_18 = NULL;
  t = begin_scope_1_0(g_3, t);
  {
    ATerm i_3 (ATerm t)
    {
      ATerm a_19 = NULL;
      a_19 = t;
      {
        ATerm y_25 = t;
        int z_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_19 = NULL,d_19 = NULL;
            t = term_y_18;
            b_19 = t;
            t = term_k_18;
            d_19 = t;
            t = term_b_26;
            t = l_6(b_19, d_19, t);
            ;
            LocalPopChoice(z_25);
          }
        else
          {
            t = y_25;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((z_18 != NULL) && (z_18 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              z_18 = ATgetFirst((ATermList) t);
            {
              ATerm d_26 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(z_18);
        t = map_1_0(k_3, t);
        t = a_19;
        t = end_scope_1_0(m_3, t);
      }
      return(t);
    }
    t = restore_always_2_0(q_89, i_3, t);
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm e_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = e_26;
      t = term_k_26;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_89 (ATerm), ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm m_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_19 = NULL;
        t = term_e_19;
        t = get_config_0_0(t);
        l_19 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_19);
        ;
        LocalPopChoice(q_26);
      }
    else
      {
        t = m_26;
        t = term_x_4;
      }
    t = r_89(t);
    t = copy_to_1_0(p_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(o_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL;
  m_19 = t;
  t = term_t_18;
  t = whoami_0_0(t);
  n_19 = t;
  t = term_e_17;
  q_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_26), n_19), term_r_26);
  r_19 = t;
  t = SSL_printnl(q_19, r_19);
  t = term_c_9;
  s_19 = t;
  t = SSL_exit(s_19);
  t = m_19;
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm v_19 = NULL;
  v_19 = t;
  if(match_string(t, "-k"))
    {
      t = v_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_19;
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  y_19 = t;
  t = SSL_string_to_int(y_19);
  z_19 = t;
  t = term_y_26;
  a_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_26, z_19);
  t = o_6(a_20, z_19, t);
  t = y_19;
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_z_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_3, r_3, s_3, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm g_20 = NULL;
  g_20 = t;
  if(match_string(t, "-S"))
    {
      t = g_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_20;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL;
  t = term_h_19;
  h_20 = t;
  t = term_a_27;
  i_20 = t;
  t = term_b_27;
  t = o_6(h_20, i_20, t);
  t = term_c_27;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_e_27;
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
  ATerm j_20 = NULL,m_20 = NULL,n_20 = NULL;
  j_20 = t;
  t = SSL_string_to_int(j_20);
  m_20 = t;
  t = term_h_19;
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_19, m_20);
  t = o_6(n_20, m_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_20);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  t = term_g_27;
  o_20 = t;
  t = term_t_18;
  p_20 = t;
  t = term_k_27;
  t = o_6(o_20, p_20, t);
  t = term_l_27;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_m_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_3, u_3, v_3, t);
      ;
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      {
        ATerm t_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_3, x_3, z_3, t);
            ;
            LocalPopChoice(u_27);
          }
        else
          {
            t = t_27;
            t = Option_3_0(a_4, e_4, f_4, t);
          }
      }
    }
  return(t);
}
ATerm o_6 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm q_20 = NULL;
  t = term_y_27;
  q_20 = t;
  t = SSL_table_put(q_20, h_47, i_47);
  t = (ATerm) ATmakeAppl(sym__3, term_y_27, h_47, i_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
      t = term_t_18;
      t = d_0(t);
      z_20 = t;
      t = term_b_28;
      a_21 = t;
      t = term_d_28;
      b_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_28, term_d_28, z_20);
      t = m_6(a_21, b_21, z_20, t);
      _fail(t);
    }
  else
    {
      ATerm f_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_20 = ATgetFirst((ATermList) t);
          w_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_20;
      t = a_0(t);
      t = term_t_18;
      t = c_0(t);
      f_21 = t;
      t = (ATerm) ATinsert(CheckATermList(w_20), f_21);
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm h_21 = NULL;
  h_21 = t;
  if(match_string(t, "-o"))
    {
      t = h_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_21;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL;
  i_21 = t;
  t = term_c_19;
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_19, i_21);
  t = o_6(j_21, i_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_21);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_q_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, m_4, t);
  return(t);
}
ATerm m_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm t)
{
  ATerm l_21 = NULL,o_21 = NULL,p_21 = NULL;
  l_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_28 = ATgetArgument(t, 0);
            ATerm z_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
        t = l_6(h_45, i_45, t);
        ;
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = (ATerm) ATempty;
      }
    o_21 = t;
    t = (ATerm) ATinsert(CheckATermList(o_21), g_45);
    p_21 = t;
    t = SSL_table_put(h_45, i_45, p_21);
    t = l_21;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,a_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
      t = term_t_18;
      t = j_0(t);
      b_22 = t;
      t = term_b_28;
      c_22 = t;
      t = term_d_28;
      d_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_28, term_d_28, b_22);
      t = m_6(c_22, d_22, b_22, t);
      _fail(t);
    }
  else
    {
      ATerm h_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_21 = ATgetFirst((ATermList) t);
          x_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_21 = ATgetFirst((ATermList) t);
          a_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_21;
      t = h_0(t);
      t = y_21;
      t = i_0(t);
      h_22 = t;
      t = (ATerm) ATinsert(CheckATermList(a_22), h_22);
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  if(match_string(t, "-i"))
    {
      t = l_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_22;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm m_22 = NULL,o_22 = NULL;
  m_22 = t;
  t = term_e_19;
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_19, m_22);
  t = o_6(o_22, m_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_22);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_a_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,s_22 = NULL,t_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_18;
  t = whoami_0_0(t);
  p_22 = t;
  t = term_e_17;
  q_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_29), p_22);
  s_22 = t;
  t = SSL_printnl(q_22, s_22);
  t = term_c_9;
  t_22 = t;
  t = SSL_exit(t_22);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_c_29;
  t = get_config_0_0(t);
  return(t);
}
ATerm h_6 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_43, d_43);
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      t = SSL_addr(c_43, d_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_82(t);
      ;
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      {
        ATerm x_22 = NULL,z_22 = NULL,j_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_22 = ATgetFirst((ATermList) t);
            z_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_22;
        t = foldr_2_0(o_82, p_82, t);
        j_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_22, j_23);
        t = p_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL;
  if(match_cons(t, sym__2))
    {
      r_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(r_5, s_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_23 = NULL,n_5 = NULL,o_5 = NULL;
  t = times_0_0(t);
  n_5 = t;
  t = SSL_explode_term(n_5);
  if(match_cons(t, sym__2))
    {
      ATerm l_29 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5;
  t = foldr_2_0(r_4, t_4, t);
  m_23 = t;
  t = SSL_TicksToSeconds(m_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  b_24 = t;
  if(match_cons(t, sym__2))
    {
      c_24 = ATgetArgument(t, 0);
      d_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_24;
        if((c_24 != t))
          {
            _fail(t);
          }
        t = b_24;
        ;
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        t = (ATerm) ATmakeAppl(sym__2, c_24, d_24);
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_24, d_24);
              ;
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
              t = SSL_gtr(c_24, d_24);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_24, d_24);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_24 = NULL,i_24 = NULL;
      g_24 = t;
      t = term_h_19;
      t = get_config_0_0(t);
      i_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_24, term_c_9);
      t = geq_0_0(t);
      t = g_24;
      t = t_87(t);
      ;
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,p_24 = NULL,q_24 = NULL;
  t = run_time_0_0(t);
  l_24 = t;
  t = term_t_18;
  t = whoami_0_0(t);
  m_24 = t;
  t = term_e_17;
  p_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_29), l_24), term_s_8), m_24);
  q_24 = t;
  t = SSL_printnl(p_24, q_24);
  t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_29), l_24), term_s_8), m_24));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_27;
  s_24 = t;
  t = SSL_exit(s_24);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      {
        ATerm c_30 = t;
        int d_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(d_30);
          }
        else
          {
            t = c_30;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm t)
{
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      t = fetch_1_0(w_4, t);
    }
  t = s_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_24 = ATgetFirst((ATermList) t);
      z_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_25 = NULL,j_25 = NULL;
        t = z_24;
        t = g_0(t);
        d_25 = t;
        t = y_24;
        t = e_0(t);
        j_25 = t;
        t = z_24;
        {
          ATerm z_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(d_25), j_25);
            return(t);
          }
          t = reverse_acc_2_0(e_0, z_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_18;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm u_68 (ATerm), ATerm t)
{
  ATerm m_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,r_0 = NULL,s_0 = NULL;
  r_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_25);
  m_25 = t;
  t = p_25;
  t = u_68(t);
  q_25 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_25);
  r_0 = t;
  t = SSLsetAnnotations(r_0, m_25);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm c_26 = NULL;
  c_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_26), term_s_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_25 = NULL,a_26 = NULL;
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_30);
    }
  else
    {
      t = t_30;
      t = fetch_1_0(c_5, t);
    }
  t = term_v_30;
  t = echo_0_0(t);
  t = term_b_28;
  w_25 = t;
  t = term_d_28;
  a_26 = t;
  t = term_w_30;
  t = l_6(w_25, a_26, t);
  t = reverse_acc_2_0(_id, d_5, t);
  t = map_1_0(f_5, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm v_68 (ATerm), ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,t_0 = NULL,u_0 = NULL;
  i_26 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      g_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_26);
  f_26 = t;
  t = g_26;
  t = v_68(t);
  h_26 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, h_26);
  t_0 = t;
  t = SSLsetAnnotations(t_0, f_26);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm l_26 (ATerm t)
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_76, _id, t);
        ;
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        t = Cons_2_0(_id, l_26, t);
      }
    return(t);
  }
  t = l_26(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
  n_26 = t;
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_26;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_31 = ATgetFirst((ATermList) t);
                ATerm c_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_26;
          }
        ;
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        t = (ATerm) ATinsert(ATempty, n_26);
      }
    o_26 = t;
    t = term_k_26;
    p_26 = t;
    t = SSL_printnl(p_26, o_26);
    t = n_26;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_c_29;
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
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  t_26 = t;
  t = b_72(t);
  u_26 = t;
  t = term_e_17;
  v_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_26), u_26);
  w_26 = t;
  t = SSL_printnl(v_26, w_26);
  t = t_26;
  return(t);
}
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm x_26 (ATerm t)
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_31);
      }
    else
      {
        t = d_31;
        t = Cons_2_0(w_75, x_26, t);
      }
    return(t);
  }
  t = x_26(t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_h_31;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_27 = NULL;
      d_27 = t;
      t = SSL_is_string(d_27);
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
            t = map_1_0(i_5, t);
            ;
            LocalPopChoice(l_31);
          }
        else
          {
            t = k_31;
            {
              ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
              h_27 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_27 = ATgetArgument(t, 0);
                  t = i_27;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_27 = ATgetArgument(t, 0);
                      t = i_27;
                      {
                        ATerm m_31 = t;
                        int n_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(n_31);
                          }
                        else
                          {
                            t = m_31;
                            t = debug_1_0(j_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_27 = NULL,o_27 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_27 = ATgetArgument(t, 0);
                          j_27 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_27;
                      t = eval_config_0_0(t);
                      n_27 = t;
                      t = j_27;
                      t = eval_config_0_0(t);
                      o_27 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_27, o_27);
                      t = k_6(n_27, o_27, t);
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
  ATerm v_27 = NULL,w_27 = NULL;
  v_27 = t;
  t = term_y_27;
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_27, v_27);
  t = l_6(w_27, v_27, t);
  {
    ATerm o_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_28 = NULL,c_28 = NULL;
        t = eval_config_0_0(t);
        a_28 = t;
        t = term_y_27;
        c_28 = t;
        t = SSL_table_put(c_28, v_27, a_28);
        t = a_28;
        ;
        LocalPopChoice(p_31);
      }
    else
      {
        t = o_31;
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
ATerm p_5 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL;
  t = term_q_31;
  e_28 = t;
  t = term_t_18;
  f_28 = t;
  t = term_r_31;
  t = o_6(e_28, f_28, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm c_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
  t = term_q_31;
  g_28 = t;
  t = term_t_18;
  h_28 = t;
  t = term_r_31;
  t = o_6(g_28, h_28, t);
  t = term_t_31;
  i_28 = t;
  t = term_t_18;
  j_28 = t;
  t = term_u_31;
  t = o_6(i_28, j_28, t);
  t = term_v_31;
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_5, p_5, q_5, t);
      ;
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      t = Option_3_0(c_6, i_6, j_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,v_0 = NULL,w_0 = NULL;
  p_28 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_28 = ATgetFirst((ATermList) t);
      m_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_28);
  k_28 = t;
  t = l_28;
  t = o_63(t);
  n_28 = t;
  t = m_28;
  t = p_63(t);
  o_28 = t;
  w_0 = t;
  t = (ATerm) ATinsert(CheckATermList(o_28), n_28);
  v_0 = t;
  t = SSLsetAnnotations(v_0, k_28);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL;
  u_28 = t;
  t = term_c_29;
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_29, u_28);
  t = o_6(v_28, u_28, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, u_28);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm t_28 = NULL;
  t_28 = t;
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_32;
        t = q_93(t);
        ;
        LocalPopChoice(a_32);
      }
    else
      {
        t = z_31;
      }
    t = t_28;
    {
      ATerm p_6 (ATerm t)
      {
        ATerm c_32 = t;
        int d_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_32 = t;
            int f_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(f_32);
              }
            else
              {
                t = e_32;
                t = q_93(t);
                t = Cons_2_0(_id, p_6, t);
              }
            ;
            LocalPopChoice(d_32);
          }
        else
          {
            t = c_32;
            {
              ATerm x_28 = NULL,y_28 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_28 = ATgetFirst((ATermList) t);
                  y_28 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_28), (ATerm) ATmakeAppl(sym_Undefined_1, x_28));
            }
          }
        return(t);
      }
      t = Cons_2_0(n_6, p_6, t);
    }
  }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm r_29 = NULL;
  r_29 = t;
  if(match_string(t, "--help"))
    {
      t = r_29;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_29;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_29;
        }
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL;
  t = term_r_30;
  s_29 = t;
  t = term_t_18;
  t_29 = t;
  t = term_g_32;
  t = o_6(s_29, t_29, t);
  t = term_h_32;
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_i_32;
  return(t);
}
ATerm c_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  f_29 = t;
  t = term_b_28;
  i_29 = t;
  t = term_d_28;
  o_29 = t;
  t = (ATerm) ATempty;
  p_29 = t;
  t = SSL_table_put(i_29, o_29, p_29);
  t = f_29;
  {
    ATerm v_6 (ATerm t)
    {
      ATerm j_32 = t;
      int k_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_93(t);
          ;
          LocalPopChoice(k_32);
        }
      else
        {
          t = j_32;
          {
            ATerm l_32 = t;
            int m_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_6, a_7, b_7, t);
                ;
                LocalPopChoice(m_32);
              }
            else
              {
                t = l_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_6, t);
    {
      ATerm n_32 = t;
      int o_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_30 = NULL;
          b_30 = t;
          {
            ATerm p_32 = t;
            int q_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_9 = NULL;
                t = b_30;
                {
                  ATerm r_32 = t;
                  int s_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_r_30;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(s_32);
                    }
                  else
                    {
                      t = r_32;
                      t = fetch_1_0(c_7, t);
                    }
                  t = b_30;
                  t = default_system_usage_0_0(t);
                  t = term_a_27;
                  t_9 = t;
                  t = SSL_exit(t_9);
                }
                ;
                LocalPopChoice(q_32);
              }
            else
              {
                t = p_32;
                {
                  ATerm a_10 = NULL;
                  t = term_q_31;
                  t = get_config_0_0(t);
                  t = b_30;
                  t = default_system_about_0_0(t);
                  t = term_a_27;
                  a_10 = t;
                  t = SSL_exit(a_10);
                }
              }
          }
          ;
          LocalPopChoice(o_32);
        }
      else
        {
          t = n_32;
          {
            ATerm t_32 = t;
            int u_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
                ATerm e_7 (ATerm t)
                {
                  ATerm i_7 (ATerm t)
                  {
                    if(((g_29 != NULL) && (g_29 != t)))
                      _fail(t);
                    else
                      g_29 = t;
                    return(t);
                  }
                  t = Undefined_1_0(i_7, t);
                  return(t);
                }
                t = fetch_1_0(e_7, t);
                t = term_e_17;
                e_30 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_29)), term_v_32);
                f_30 = t;
                t = SSL_printnl(e_30, f_30);
                t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_29)), term_v_32));
                t = default_system_usage_0_0(t);
                t = term_c_9;
                g_30 = t;
                t = SSL_exit(g_30);
                ;
                LocalPopChoice(u_32);
              }
            else
              {
                t = t_32;
              }
          }
        }
      h_29 = t;
      t = term_b_28;
      q_29 = t;
      t = SSL_table_destroy(q_29);
      t = h_29;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL;
  t = parse_options_1_0(u_91, t);
  j_30 = t;
  t = term_w_32;
  k_30 = t;
  t = SSL_table_create(k_30);
  t = term_w_32;
  l_30 = t;
  t = term_x_32;
  m_30 = t;
  t = SSL_table_put(l_30, m_30, j_30);
  t = j_30;
  t = w_91(t);
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_91, t);
        ;
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        {
          ATerm a_33 = t;
          int b_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_33);
            }
          else
            {
              t = a_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      {
        ATerm e_33 = t;
        int f_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(f_33);
          }
        else
          {
            t = e_33;
            {
              ATerm g_33 = t;
              int h_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(x_7, y_7, z_7, t);
                  ;
                  LocalPopChoice(h_33);
                }
              else
                {
                  t = g_33;
                  {
                    ATerm i_33 = t;
                    int j_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(j_33);
                      }
                    else
                      {
                        t = i_33;
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
ATerm s_7 (ATerm t)
{
  t = xtc_io_1_0(a_8, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  t = term_k_33;
  n_30 = t;
  t = term_t_18;
  o_30 = t;
  t = term_l_33;
  t = o_6(n_30, o_30, t);
  t = term_m_33;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_33 = t;
      int r_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(r_33);
        }
      else
        {
          t = q_33;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(p_33);
      t = xtc_transform_file_2_0(b_8, c_8, t);
    }
  else
    {
      t = o_33;
      t = xtc_transform_term_2_0(d_8, e_8, t);
    }
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_33 = t;
        int v_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(v_33);
          }
        else
          {
            t = u_33;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(t_33);
        t = xtc_transform_file_2_0(f_8, g_8, t);
      }
    else
      {
        t = s_33;
        t = xtc_transform_term_2_0(h_8, k_8, t);
      }
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_w_33;
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm p_30 = NULL;
  t = term_x_33;
  t = xtc_find_0_0(t);
  p_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_30), term_y_33);
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_w_33;
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm q_30 = NULL;
  t = term_x_33;
  t = xtc_find_0_0(t);
  q_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_30), term_y_33);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm astratego2text_0_0 (ATerm t)
{
  t = option_wrap_4_0(j_7, default_usage_0_0, _id, s_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = astratego2text_0_0(t);
  return(t);
}
