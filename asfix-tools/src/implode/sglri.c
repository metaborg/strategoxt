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
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_z_34;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_i_32;
ATerm term_c_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_i_31;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_g_29;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_w_26;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_n_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_e_26;
ATerm term_b_26;
ATerm term_k_25;
ATerm term_s_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_h_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_s_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_z_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_a_20;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_q_19;
ATerm term_n_19;
ATerm term_k_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_i_8;
ATerm term_g_8;
ATerm term_e_8;
void init_constant_terms (void)
{
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
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
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_9, term_c_9, term_e_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_9, term_k_9, term_l_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_9, term_r_9, term_t_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_9, term_d_10, term_e_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_h_10, term_i_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_10, term_q_10, term_v_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_10, term_d_11, term_e_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_h_11, term_i_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_v_11, term_w_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_k_12, term_l_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_a_13, term_b_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_l_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_v_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_c_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_k_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_q_14, term_r_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_a_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_f_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_n_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_d_16, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_i_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_r_16, term_s_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_a_17, term_c_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_f_17, term_g_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_l_17, term_m_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym__2, term_j_20, term_f_21);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_j_20, term_k_20);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym__2, term_u_22, term_c_22);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym__2, term_k_18, term_r_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_q_22);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_m_27);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_q_22);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__2, term_w_31, term_q_22);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_o_29, term_q_22);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_q_22);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm read_from_0_0 (ATerm);
ATerm g_6 (ATerm k_15, ATerm l_15, ATerm);
ATerm h_6 (ATerm i_60 (ATerm), ATerm c_164, ATerm s_15, ATerm);
ATerm a_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm);
ATerm i_6 (ATerm g_12, ATerm h_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm n_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm x_58 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm h_76 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm j_76 (ATerm), ATerm);
ATerm l_6 (ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm n_22, ATerm m_22, ATerm);
ATerm m_6 (ATerm f_68 (ATerm), ATerm j_22, ATerm i_22, ATerm);
ATerm z_0 (ATerm);
ATerm n_6 (ATerm c_34, ATerm d_34, ATerm e_34, ATerm);
ATerm o_6 (ATerm l_76 (ATerm), ATerm m_34, ATerm l_34, ATerm);
ATerm h_8 (ATerm y_7, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm p_6 (ATerm q_15, ATerm);
ATerm q_6 (ATerm r_36, ATerm s_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm u_10 (ATerm w_8, ATerm);
ATerm y_10 (ATerm d_9, ATerm g_9, ATerm h_9, ATerm);
ATerm z_10 (ATerm u_9, ATerm v_9, ATerm w_9, ATerm);
ATerm r_6 (ATerm);
ATerm c_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm x_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm w_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm b_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm m_16 (ATerm b_15, ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm l_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm p_78 (ATerm), ATerm);
ATerm s_6 (ATerm a_75 (ATerm), ATerm o_32, ATerm m_32, ATerm);
ATerm o_18 (ATerm p_17, ATerm);
ATerm r_18 (ATerm r_17, ATerm x_17, ATerm d_18, ATerm);
ATerm o_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm t_6 (ATerm j_36, ATerm k_36, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm s_0 (ATerm), ATerm t_0 (ATerm), ATerm);
ATerm get_parse_table_0_0 (ATerm);
ATerm w_2 (ATerm);
ATerm a_3 (ATerm);
ATerm sglr_2_0 (ATerm q_57 (ATerm), ATerm r_57 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm k_3 (ATerm);
ATerm parse_and_implode_0_0 (ATerm);
ATerm v_6 (ATerm m_12, ATerm n_12, ATerm);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm);
ATerm w_6 (ATerm k_33, ATerm l_33, ATerm);
ATerm end_scope_1_0 (ATerm x_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm w_74 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm b_78 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm xtc_io_1_0 (ATerm c_78 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm g_4 (ATerm);
ATerm j_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm e_7 (ATerm f_35, ATerm g_35, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm at_end_1_0 (ATerm r_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm s_28 (ATerm g_28, ATerm);
ATerm conc_0_0 (ATerm);
ATerm u_6 (ATerm l_35, ATerm k_35, ATerm);
ATerm c_7 (ATerm f_33, ATerm g_33, ATerm e_33, ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm sglri_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm x_6 (ATerm a_31, ATerm b_31, ATerm);
ATerm foldr_2_0 (ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_76 (ATerm), ATerm);
ATerm y_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm a_6 (ATerm);
ATerm need_help_1_0 (ATerm d_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm f_6 (ATerm);
ATerm j_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm a_7 (ATerm v_29, ATerm w_29, ATerm);
ATerm debug_1_0 (ATerm g_60 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_64 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm b_7 (ATerm w_34, ATerm x_34, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm g_7 (ATerm);
ATerm i_7 (ATerm);
ATerm k_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm m_51 (ATerm), ATerm n_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm b_82 (ATerm), ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm parse_options_1_0 (ATerm a_82 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
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
  ATerm f_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_e_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_g_8);
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_0, (ATerm) ATinsert(ATempty, term_g_8));
      t = t_6(f_0, u_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm g_6 (ATerm k_15, ATerm l_15, ATerm t)
{
  ATerm v_0 = NULL;
  t = SSL_write_term_to_stream_baf(k_15, l_15);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_0);
  return(t);
}
ATerm h_6 (ATerm i_60 (ATerm), ATerm c_164, ATerm s_15, ATerm t)
{
  ATerm w_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_164, term_i_8);
  t = r_6(t);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_0, s_15);
  t = i_60(t);
  t = fclose_0_0(t);
  t = s_15;
  return(t);
}
ATerm a_0 (ATerm t)
{
  ATerm a_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_8 = ATgetArgument(t, 0);
      if(match_cons(j_8, sym_Stream_1))
        {
          a_1 = ATgetArgument(j_8, 0);
        }
      else
        _fail(t);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(a_1, d_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL;
  x_0 = t;
  t = xtc_new_file_0_0(t);
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_0, x_0);
  t = h_6(a_0, y_0, x_0, t);
  t = SSL_close_file(y_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_0);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(y_78, z_78, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm i_6 (ATerm g_12, ATerm h_12, ATerm t)
{
  t = SSL_execvp(g_12, h_12);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL;
  r_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      s_2 = ATgetArgument(t, 0);
      {
        ATerm i_0 = NULL,l_0 = NULL;
        t = SSL_int_to_string(s_2);
        i_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_8), i_0), term_p_8);
        l_0 = t;
        t = SSL_concat_strings(l_0);
      }
    }
  else
    {
      ATerm j_1 = NULL,l_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          s_2 = ATgetArgument(t, 0);
          t_2 = ATgetArgument(t, 1);
          u_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(t_2);
      j_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_2), term_s_8), j_1), term_r_8), s_2);
      l_1 = t;
      t = SSL_concat_strings(l_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm n_64 (ATerm), ATerm t)
{
  ATerm x_2 = NULL;
  ATerm b_0 (ATerm t)
  {
    t = n_64(t);
    if(((x_2 != NULL) && (x_2 != t)))
      _fail(t);
    else
      x_2 = t;
    return(t);
  }
  t = fetch_1_0(b_0, t);
  t = not_null(x_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm y_2 = NULL;
  y_2 = t;
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm z_8 = ATgetArgument(t, 0);
              if((y_2 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_17), term_j_17), term_d_17), term_x_16), term_k_16), term_f_16), term_y_15), term_r_15), term_g_15), term_c_15), term_s_14), term_l_14), term_d_14), term_y_13), term_s_13), term_o_13), term_h_13), term_w_12), term_x_11), term_q_11), term_k_11), term_f_11), term_w_10), term_l_10), term_f_10), term_x_9), term_m_9), term_f_9);
        t = fetch_elem_1_0(c_0, t);
        ;
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, y_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm c_3 = NULL,n_3 = NULL;
  c_3 = t;
  {
    ATerm o_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_17 = ATgetArgument(t, 0);
            n_3 = ATgetArgument(t, 1);
            {
              ATerm t_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_17);
        {
          ATerm u_17 = t;
          int v_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_1 = NULL,z_1 = NULL,a_2 = NULL;
              t = n_3;
              {
                ATerm w_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_17;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                x_1 = t;
                t = term_y_17;
                z_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, x_1), term_z_17);
                a_2 = t;
                t = SSL_printnl(z_1, a_2);
                t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, x_1), term_z_17));
              }
              ;
              LocalPopChoice(v_17);
            }
          else
            {
              t = u_17;
              t = c_3;
            }
        }
      }
    else
      {
        t = o_17;
        t = c_3;
      }
    t = c_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm x_58 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL;
  a_4 = t;
  t = fork_0_0(t);
  z_3 = t;
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = a_4;
        t = x_58(t);
        ;
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        t = SSL_waitpid(z_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm c_18 = ATgetArgument(t, 0);
            if(((ATgetType(c_18) != AT_INT) || (ATgetInt((ATermInt) c_18) != 0)))
              _fail(t);
            {
              ATerm e_18 = ATgetArgument(t, 1);
            }
            {
              ATerm f_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = a_4;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm d_4 = NULL;
  ATerm e_0 (ATerm t)
  {
    ATerm e_4 = NULL,f_4 = NULL;
    e_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_4), e_4);
    t = b_7(not_null(d_4), e_4, t);
    f_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_4, f_4);
    return(t);
  }
  if(((d_4 != NULL) && (d_4 != t)))
    _fail(t);
  else
    d_4 = t;
  t = SSL_table_keys(d_4);
  t = map_1_0(e_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm i_4 = NULL;
  i_4 = t;
  {
    ATerm g_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_4 = NULL;
        t = term_k_18;
        t = get_config_0_0(t);
        l_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_4, term_r_16);
        t = geq_0_0(t);
        t = i_4;
        t = i_76(t);
        ;
        LocalPopChoice(j_18);
      }
    else
      {
        t = g_18;
        t = i_4;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm h_76 (ATerm), ATerm t)
{
  ATerm o_4 = NULL;
  o_4 = t;
  {
    ATerm l_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_4 = NULL;
        t = term_k_18;
        t = get_config_0_0(t);
        q_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_4, term_a_13);
        t = geq_0_0(t);
        t = o_4;
        t = h_76(t);
        ;
        LocalPopChoice(n_18);
      }
    else
      {
        t = l_18;
        t = o_4;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm j_76 (ATerm), ATerm t)
{
  ATerm x_4 = NULL;
  x_4 = t;
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_4 = NULL;
        t = term_k_18;
        t = get_config_0_0(t);
        z_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_4, term_d_10);
        t = geq_0_0(t);
        t = x_4;
        t = j_76(t);
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        t = x_4;
      }
  }
  return(t);
}
ATerm l_6 (ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm n_22, ATerm m_22, ATerm t)
{
  t = j_68(t);
  {
    ATerm o_0 (ATerm t)
    {
      ATerm f_5 = NULL;
      f_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_22, f_5);
      t = i_68(t);
      return(t);
    }
    t = fetch_1_0(o_0, t);
    t = m_22;
  }
  return(t);
}
ATerm m_6 (ATerm f_68 (ATerm), ATerm j_22, ATerm i_22, ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm s_5 = NULL,u_5 = NULL,v_5 = NULL;
    s_5 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_5 = ATgetFirst((ATermList) t);
            v_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_18 = t;
          int w_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_5;
              {
                ATerm q_0 (ATerm t)
                {
                  t = i_22;
                  return(t);
                }
                t = l_6(f_68, q_0, u_5, v_5, t);
                t = z_5(t);
              }
              ;
              LocalPopChoice(w_18);
            }
          else
            {
              t = s_18;
              {
                ATerm f_2 = NULL,k_2 = NULL,k_1 = NULL;
                t = SSLgetAnnotations(s_5);
                f_2 = t;
                t = v_5;
                t = z_5(t);
                k_2 = t;
                t = (ATerm) ATinsert(CheckATermList(k_2), u_5);
                k_1 = t;
                t = SSLsetAnnotations(k_1, f_2);
              }
            }
        }
      }
    return(t);
  }
  t = j_22;
  t = z_5(t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm j_7 = NULL;
  if(match_cons(t, sym__2))
    {
      j_7 = ATgetArgument(t, 0);
      if((j_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm n_6 (ATerm c_34, ATerm d_34, ATerm e_34, ATerm t)
{
  ATerm k_6 = NULL,y_6 = NULL,z_6 = NULL;
  k_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_19 = ATgetArgument(t, 0);
            ATerm b_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
        t = b_7(c_34, d_34, t);
        ;
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = (ATerm) ATempty;
      }
    z_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_6, e_34);
    t = m_6(z_0, z_6, e_34, t);
    y_6 = t;
    t = SSL_table_put(c_34, d_34, y_6);
    t = k_6;
  }
  return(t);
}
ATerm o_6 (ATerm l_76 (ATerm), ATerm m_34, ATerm l_34, ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm l_7 = NULL,m_7 = NULL;
    if(match_cons(t, sym__2))
      {
        l_7 = ATgetArgument(t, 0);
        m_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_34, l_7, m_7);
    t = l_76(t);
    return(t);
  }
  t = l_34;
  t = map_1_0(b_1, t);
  return(t);
}
ATerm h_8 (ATerm y_7, ATerm t)
{
  t = SSL_fclose(y_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_8 = NULL,f_8 = NULL;
  f_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_8 = ATgetArgument(t, 0);
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_8);
            ;
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            t = h_8(f_8, t);
          }
      }
    }
  else
    {
      t = h_8(f_8, t);
    }
  return(t);
}
ATerm p_6 (ATerm q_15, ATerm t)
{
  t = SSL_read_term_from_stream(q_15);
  return(t);
}
ATerm q_6 (ATerm r_36, ATerm s_36, ATerm t)
{
  ATerm k_8 = NULL;
  t = SSL_fopen(r_36, s_36);
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_8);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_8 = NULL;
  t = SSL_stdin_stream();
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_8 = NULL;
  t = SSL_stdout_stream();
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_8 = NULL;
  t = SSL_stderr_stream();
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_8);
  return(t);
}
ATerm u_10 (ATerm w_8, ATerm t)
{
  ATerm y_8 = NULL;
  t = SSL_explode_term(w_8);
  if(match_cons(t, sym__2))
    {
      ATerm g_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_19 = ATgetArgument(t, 1);
        if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
          {
            y_8 = ATgetFirst((ATermList) h_19);
            {
              ATerm i_19 = (ATerm) ATgetNext((ATermList) h_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_8;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm y_10 (ATerm d_9, ATerm g_9, ATerm h_9, ATerm t)
{
  ATerm i_9 = NULL,n_9 = NULL,o_9 = NULL,s_9 = NULL,p_1 = NULL;
  t = SSLgetAnnotations(h_9);
  o_9 = t;
  t = d_9;
  if(match_cons(t, sym_Path_1))
    {
      s_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_9, g_9);
  p_1 = t;
  t = SSLsetAnnotations(p_1, o_9);
  if(match_cons(t, sym__2))
    {
      i_9 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(i_9, n_9, t);
  return(t);
}
ATerm z_10 (ATerm u_9, ATerm v_9, ATerm w_9, ATerm t)
{
  ATerm z_9 = NULL,b_10 = NULL,c_10 = NULL,k_10 = NULL,q_1 = NULL;
  t = SSLgetAnnotations(w_9);
  c_10 = t;
  t = SSL_is_string(u_9);
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_10, v_9);
  q_1 = t;
  t = SSLsetAnnotations(q_1, c_10);
  if(match_cons(t, sym__2))
    {
      z_9 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(z_9, b_10, t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL,r_10 = NULL;
  m_10 = t;
  if(match_cons(t, sym__2))
    {
      n_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_10(m_10, t);
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
                  t = y_10(n_10, r_10, m_10, t);
                  ;
                  LocalPopChoice(m_19);
                }
              else
                {
                  t = l_19;
                  t = z_10(n_10, r_10, m_10, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_10(m_10, t);
    }
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_n_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL;
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_11 = NULL;
      j_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_11, term_q_19);
      t = r_6(t);
      ;
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      t = debug_1_0(c_1, t);
      _fail(t);
    }
  b_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(c_11, t);
  a_11 = t;
  t = b_11;
  t = fclose_0_0(t);
  t = a_11;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_s_19;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_11 = NULL,s_11 = NULL;
      l_11 = t;
      t = (ATerm) ATinsert(ATempty, term_a_20);
      s_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_11, (ATerm) ATinsert(ATempty, term_a_20));
      t = t_6(l_11, s_11, t);
      LocalPopChoice(w_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = v_19;
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_20 = t;
            if((PushChoice() == 0))
              {
                ATerm t_11 = NULL,u_11 = NULL;
                t_11 = t;
                t = (ATerm) ATinsert(ATempty, term_g_8);
                u_11 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_11, (ATerm) ATinsert(ATempty, term_g_8));
                t = t_6(t_11, u_11, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_20;
              }
            t = debug_1_0(e_1, t);
            ;
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            t = debug_1_0(f_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = debug_1_0(h_1, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_e_20;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = debug_1_0(m_1, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_f_20;
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  t = term_y_17;
  u_12 = t;
  t = (ATerm) ATinsert(ATempty, term_g_20);
  v_12 = t;
  t = SSL_printnl(u_12, v_12);
  t = t_12;
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,c_13 = NULL;
  if(match_cons(t, sym__3))
    {
      y_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
      c_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_6(y_12, z_12, c_13, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  d_13 = t;
  t = term_y_17;
  e_13 = t;
  t = (ATerm) ATinsert(ATempty, term_h_20);
  f_13 = t;
  t = SSL_printnl(e_13, f_13);
  t = d_13;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm g_13 = NULL,j_13 = NULL,k_13 = NULL;
  g_13 = t;
  t = term_y_17;
  j_13 = t;
  t = (ATerm) ATinsert(ATempty, term_g_20);
  k_13 = t;
  t = SSL_printnl(j_13, k_13);
  t = g_13;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,i_12 = NULL,j_12 = NULL,o_12 = NULL,q_12 = NULL;
  a_12 = t;
  t = if_verbose5_1_0(g_1, t);
  {
    ATerm i_20 = t;
    if((PushChoice() == 0))
      {
        ATerm r_12 = NULL,s_12 = NULL;
        t = term_j_20;
        r_12 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, a_12);
        s_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATmakeAppl(sym_Imported_1, a_12));
        t = b_7(r_12, s_12, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_20;
      }
    c_12 = t;
    t = term_j_20;
    j_12 = t;
    t = term_k_20;
    o_12 = t;
    t = (ATerm) ATinsert(ATempty, a_12);
    q_12 = t;
    t = SSL_table_put(j_12, o_12, q_12);
    t = c_12;
    t = if_verbose4_1_0(i_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(n_1, t);
    b_12 = t;
    t = term_j_20;
    i_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_20, b_12);
    t = o_6(o_1, i_12, b_12, t);
    t = if_verbose6_1_0(r_1, t);
    t = term_j_20;
    d_12 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, a_12);
    e_12 = t;
    t = (ATerm) ATempty;
    f_12 = t;
    t = SSL_table_put(d_12, e_12, f_12);
    t = (ATerm) ATmakeAppl(sym__3, term_j_20, (ATerm)ATmakeAppl(sym_Imported_1, a_12), (ATerm) ATempty);
    t = if_verbose4_1_0(s_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm x_71 (ATerm), ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,z_13 = NULL;
  w_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_13;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_13 = ATgetFirst((ATermList) t);
          z_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 = NULL,h_4 = NULL,k_4 = NULL,t_1 = NULL;
            t = SSLgetAnnotations(w_13);
            y_3 = t;
            t = x_13;
            t = x_71(t);
            h_4 = t;
            t = z_13;
            t = filter_1_0(x_71, t);
            k_4 = t;
            t = (ATerm) ATinsert(CheckATermList(k_4), h_4);
            t_1 = t;
            t = SSLsetAnnotations(t_1, y_3);
            ;
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            t = z_13;
            t = filter_1_0(x_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm w_73 (ATerm), ATerm t)
{
  ATerm h_14 (ATerm t)
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_73(t);
        t = h_14(t);
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
      }
    return(t);
  }
  t = h_14(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = t_20;
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_14 = NULL;
            t = term_d_21;
            i_14 = t;
            t = SSL_getenv(i_14);
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
ATerm u_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL;
  t = term_j_20;
  t_14 = t;
  t = term_f_21;
  u_14 = t;
  t = term_g_21;
  t = b_7(t_14, u_14, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm h_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_21;
      }
  }
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_i_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm j_14 = NULL;
  t = if_verbose5_1_0(u_1, t);
  j_14 = t;
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_14 = NULL,o_14 = NULL;
        t = term_j_20;
        n_14 = t;
        t = term_k_20;
        o_14 = t;
        t = term_l_21;
        t = b_7(n_14, o_14, t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        {
          ATerm p_14 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          p_14 = t;
          t = repeat_1_0(w_1, t);
          t = p_14;
        }
      }
    t = j_14;
    t = if_verbose5_1_0(y_1, t);
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
  t = term_m_21;
  return(t);
}
ATerm m_16 (ATerm b_15, ATerm t)
{
  ATerm j_15 = NULL,m_15 = NULL,o_15 = NULL;
  t = term_j_20;
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, b_15);
  o_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATmakeAppl(sym_Tool_1, b_15));
  t = b_7(m_15, o_15, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_21 = ATgetFirst((ATermList) t);
      if(match_cons(n_21, sym__2))
        {
          ATerm r_21 = ATgetArgument(n_21, 0);
          j_15 = ATgetArgument(n_21, 1);
        }
      else
        _fail(t);
      {
        ATerm q_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_15;
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_j_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(l_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_15 = NULL,t_15 = NULL,u_15 = NULL;
      t = if_verbose5_1_0(c_2, t);
      t = xtc_load_0_0(t);
      u_15 = t;
      if(match_cons(t, sym__2))
        {
          p_15 = ATgetArgument(t, 0);
          t_15 = ATgetArgument(t, 1);
          {
            ATerm v_21 = t;
            int w_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
                t = term_j_20;
                a_16 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, p_15);
                b_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATmakeAppl(sym_Tool_1, p_15));
                t = b_7(a_16, b_16, t);
                {
                  ATerm e_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((t_15 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((z_15 != NULL) && (z_15 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          z_15 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_2, t);
                  t = not_null(z_15);
                }
                ;
                LocalPopChoice(w_21);
              }
            else
              {
                t = v_21;
                t = m_16(u_15, t);
              }
          }
        }
      else
        {
          t = m_16(u_15, t);
        }
      t = if_verbose5_1_0(g_2, t);
      ;
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm l_16 = NULL,b_5 = NULL,c_5 = NULL;
        l_16 = t;
        t = term_y_17;
        b_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_21), l_16), term_x_21);
        c_5 = t;
        t = SSL_printnl(b_5, c_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_21), l_16), term_x_21);
        t = if_verbose5_1_0(i_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm p_78 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL;
  p_16 = t;
  t = p_78(t);
  t = xtc_find_0_0(t);
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_16, p_16);
  {
    ATerm m_2 (ATerm t)
    {
      ATerm q_16 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, o_16, p_16);
      t = i_6(o_16, p_16, t);
      t = term_z_21;
      q_16 = t;
      t = SSL_exit(q_16);
      return(t);
    }
    t = fork_and_wait_1_0(m_2, t);
    t = p_16;
  }
  return(t);
}
ATerm s_6 (ATerm a_75 (ATerm), ATerm o_32, ATerm m_32, ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,z_16 = NULL,b_17 = NULL,h_17 = NULL;
  z_16 = t;
  t = a_75(t);
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_16, o_32, m_32);
  t = c_7(t_16, o_32, m_32, t);
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_17 = NULL;
        t = term_c_22;
        i_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_16, term_c_22);
        t = b_7(t_16, i_17, t);
        ;
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_16 = ATgetFirst((ATermList) t);
        v_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_22;
    b_17 = t;
    t = (ATerm) ATinsert(CheckATermList(v_16), (ATerm) ATinsert(CheckATermList(u_16), o_32));
    h_17 = t;
    t = SSL_table_put(t_16, b_17, h_17);
    t = z_16;
  }
  return(t);
}
ATerm o_18 (ATerm p_17, ATerm t)
{
  t = p_17;
  {
    ATerm d_22 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_22 = ATgetArgument(t, 0);
            ATerm f_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_22;
      }
    t = term_g_22;
    t = debug_1_0(o_2, t);
    t = (ATerm) ATmakeAppl(sym__2, p_17, term_i_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm r_18 (ATerm r_17, ATerm x_17, ATerm d_18, ATerm t)
{
  t = SSL_open_file(r_17, x_17);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_h_22;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,m_18 = NULL;
  h_18 = t;
  if(match_cons(t, sym__2))
    {
      i_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
      {
        ATerm l_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_18(h_18, t);
            ;
            LocalPopChoice(o_22);
          }
        else
          {
            t = l_22;
            t = r_18(i_18, m_18, h_18, t);
          }
      }
    }
  else
    {
      t = o_18(h_18, t);
    }
  return(t);
}
ATerm t_6 (ATerm j_36, ATerm k_36, ATerm t)
{
  t = SSL_access(j_36, k_36);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t = term_q_22;
  t = new_0_0(t);
  t_18 = t;
  t = term_r_22;
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_18, term_r_22);
  t = a_7(t_18, u_18, t);
  v_18 = t;
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL;
        t = (ATerm) ATinsert(ATempty, term_g_8);
        z_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_18, (ATerm) ATinsert(ATempty, term_g_8));
        t = t_6(v_18, z_18, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        t = v_18;
      }
  }
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_u_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL;
  t = new_file_0_0(t);
  c_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_19, term_i_8);
  t = open_file_0_0(t);
  t = term_q_22;
  d_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_19, term_q_22);
  t = s_6(q_2, c_19, d_19, t);
  t = c_19;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm s_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm r_19 = NULL,u_19 = NULL;
  r_19 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm g_5 = NULL,h_5 = NULL;
      t = r_19;
      t = xtc_new_file_0_0(t);
      g_5 = t;
      t = t_0(t);
      h_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_5, (ATerm) ATinsert(ATinsert(ATempty, g_5), term_v_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(s_0, t);
      t = SSL_close_file(g_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_5);
    }
  else
    {
      ATerm b_6 = NULL,c_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_19;
      t = xtc_new_file_0_0(t);
      b_6 = t;
      t = t_0(t);
      c_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_6), term_v_22), u_19), term_w_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(s_0, t);
      t = SSL_close_file(b_6);
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_6);
    }
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      {
        ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
        t = term_y_17;
        y_19 = t;
        t = (ATerm) ATinsert(ATempty, term_b_23);
        z_19 = t;
        t = SSL_printnl(y_19, z_19);
        t = term_c_9;
        x_19 = t;
        t = SSL_exit(x_19);
        t = (ATerm) ATinsert(ATempty, term_b_23);
      }
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_c_23;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_c_23;
  return(t);
}
ATerm sglr_2_0 (ATerm q_57 (ATerm), ATerm r_57 (ATerm), ATerm t)
{
  ATerm e_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_20 = NULL,m_20 = NULL;
      m_20 = t;
      if(match_cons(t, sym_FILE_1))
        {
          l_20 = ATgetArgument(t, 0);
          {
            ATerm h_7 = NULL,j_2 = NULL;
            t = SSLgetAnnotations(m_20);
            h_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, l_20);
            j_2 = t;
            t = SSLsetAnnotations(j_2, h_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_20;
        }
      LocalPopChoice(g_23);
      {
        ATerm z_2 (ATerm t)
        {
          ATerm n_20 = NULL,q_20 = NULL,u_20 = NULL;
          u_20 = t;
          t = q_57(t);
          n_20 = t;
          t = u_20;
          t = r_57(t);
          q_20 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(q_20), n_20), term_z_22);
          return(t);
        }
        t = xtc_transform_file_2_0(w_2, z_2, t);
      }
    }
  else
    {
      t = e_23;
      {
        ATerm b_3 (ATerm t)
        {
          ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
          y_20 = t;
          t = q_57(t);
          w_20 = t;
          t = y_20;
          t = r_57(t);
          x_20 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(x_20), w_20), term_z_22);
          return(t);
        }
        t = xtc_transform_term_2_0(a_3, b_3, t);
      }
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm c_21 = NULL;
  t = term_h_23;
  {
    ATerm i_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = i_23;
        t = (ATerm) ATempty;
      }
    c_21 = t;
    t = (ATerm) ATinsert(CheckATermList(c_21), term_p_23);
  }
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_s_23;
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_s_23;
  {
    ATerm v_23 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = v_23;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  t = sglr_2_0(get_parse_table_0_0, d_3, t);
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_21 = NULL,p_21 = NULL;
        p_21 = t;
        if(match_cons(t, sym_FILE_1))
          {
            o_21 = ATgetArgument(t, 0);
            {
              ATerm r_7 = NULL,n_2 = NULL;
              t = SSLgetAnnotations(p_21);
              r_7 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_21);
              n_2 = t;
              t = SSLsetAnnotations(n_2, r_7);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_21;
          }
        LocalPopChoice(d_24);
        t = xtc_transform_file_2_0(f_3, g_3, t);
      }
    else
      {
        t = c_24;
        t = xtc_transform_term_2_0(h_3, k_3, t);
      }
  }
  return(t);
}
ATerm v_6 (ATerm m_12, ATerm n_12, ATerm t)
{
  t = SSL_copy(m_12, n_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm k_22 = NULL,p_22 = NULL;
  k_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_8 = NULL;
        t = k_22;
        t = r_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, p_22, o_8);
        t = v_6(p_22, o_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_22);
        ;
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
        {
          ATerm g_24 = t;
          int i_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_8 = NULL;
              t = k_22;
              t = r_0(t);
              v_8 = t;
              {
                ATerm j_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_8 = NULL;
                    x_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = x_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = x_8;
                          }
                        else
                          {
                            t = x_8;
                            if((p_22 != t))
                              {
                                _fail(t);
                              }
                            t = x_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_24;
                  }
                t = (ATerm) ATmakeAppl(sym__2, p_22, v_8);
                t = v_6(p_22, v_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, p_22);
              }
              ;
              LocalPopChoice(i_24);
            }
          else
            {
              t = g_24;
              t = k_22;
              t = r_0(t);
              if((p_22 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_22);
            }
        }
      }
  }
  return(t);
}
ATerm w_6 (ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm a_23 = NULL,d_23 = NULL;
  d_23 = t;
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
        t = b_7(k_33, l_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_24 = ATgetFirst((ATermList) t);
            a_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(l_24);
        t = SSL_table_put(k_33, l_33, a_23);
        t = (ATerm) ATmakeAppl(sym__3, k_33, l_33, a_23);
      }
    else
      {
        t = k_24;
        t = SSL_table_remove(k_33, l_33);
        t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
      }
    t = d_23;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm x_74 (ATerm), ATerm t)
{
  ATerm f_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,n_23 = NULL;
  l_23 = t;
  t = x_74(t);
  k_23 = t;
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_23 = NULL;
        t = term_c_22;
        o_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_23, term_c_22);
        t = b_7(k_23, o_23, t);
        ;
        LocalPopChoice(q_24);
      }
    else
      {
        t = p_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_23 = ATgetFirst((ATermList) t);
        f_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_22;
    n_23 = t;
    t = SSL_table_put(k_23, n_23, f_23);
    t = j_23;
    {
      ATerm l_3 (ATerm t)
      {
        ATerm r_23 = NULL;
        r_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_23, r_23);
        t = w_6(k_23, r_23, t);
        return(t);
      }
      t = map_1_0(l_3, t);
      t = l_23;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm t)
{
  ATerm r_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_75(t);
      t = t_75(t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = r_24;
      t = t_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_74 (ATerm), ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
  x_23 = t;
  t = w_74(t);
  w_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_23, term_c_22);
  {
    ATerm v_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_24 = ATgetArgument(t, 0);
            ATerm z_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_22;
        h_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_23, term_c_22);
        t = b_7(w_23, h_24, t);
        ;
        LocalPopChoice(x_24);
      }
    else
      {
        t = v_24;
        t = (ATerm) ATempty;
      }
    y_23 = t;
    t = term_c_22;
    z_23 = t;
    t = (ATerm) ATinsert(CheckATermList(y_23), (ATerm) ATempty);
    a_24 = t;
    t = SSL_table_put(w_23, z_23, a_24);
    t = x_23;
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_u_22;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  {
    ATerm a_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(w_24);
        ;
        LocalPopChoice(f_25);
      }
    else
      {
        t = a_25;
        t = w_24;
      }
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_u_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm b_78 (ATerm), ATerm t)
{
  ATerm m_24 = NULL;
  ATerm o_3 (ATerm t)
  {
    ATerm n_24 = NULL;
    n_24 = t;
    {
      ATerm g_25 = t;
      int j_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_24 = NULL,t_24 = NULL;
          t = term_u_22;
          s_24 = t;
          t = term_c_22;
          t_24 = t;
          t = term_k_25;
          t = b_7(s_24, t_24, t);
          ;
          LocalPopChoice(j_25);
        }
      else
        {
          t = g_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((m_24 != NULL) && (m_24 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            m_24 = ATgetFirst((ATermList) t);
          {
            ATerm l_25 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = m_24;
      t = map_1_0(p_3, t);
      t = n_24;
      t = end_scope_1_0(q_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(m_3, t);
  t = restore_always_2_0(b_78, o_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm p_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_25);
    }
  else
    {
      t = p_25;
      t = term_b_26;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm c_78 (ATerm), ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_25 = NULL;
        t = term_w_22;
        t = get_config_0_0(t);
        b_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, b_25);
        ;
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        t = term_e_8;
      }
    t = c_78(t);
    t = copy_to_1_0(s_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(r_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,h_25 = NULL,i_25 = NULL;
  c_25 = t;
  t = term_q_22;
  t = whoami_0_0(t);
  d_25 = t;
  t = term_y_17;
  h_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_26), d_25), term_e_26);
  i_25 = t;
  t = SSL_printnl(h_25, i_25);
  t = term_c_9;
  e_25 = t;
  t = SSL_exit(e_25);
  t = c_25;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm m_25 = NULL;
  m_25 = t;
  if(match_string(t, "-k"))
    {
      t = m_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_25;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,q_25 = NULL;
  n_25 = t;
  t = SSL_string_to_int(n_25);
  o_25 = t;
  t = term_l_26;
  q_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_26, o_25);
  t = e_7(q_25, o_25, t);
  t = n_25;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_n_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_3, u_3, v_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm s_25 = NULL;
  s_25 = t;
  if(match_string(t, "-S"))
    {
      t = s_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_25;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  t = term_k_18;
  t_25 = t;
  t = term_r_26;
  u_25 = t;
  t = term_u_26;
  t = e_7(t_25, u_25, t);
  t = term_w_26;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  t = SSL_string_to_int(v_25);
  w_25 = t;
  t = term_k_18;
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_18, w_25);
  t = e_7(x_25, w_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_25);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_b_27;
  return(t);
}
ATerm m_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  t = term_c_27;
  y_25 = t;
  t = term_q_22;
  z_25 = t;
  t = term_d_27;
  t = e_7(y_25, z_25, t);
  t = term_e_27;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_3, x_3, b_4, t);
      ;
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_4, g_4, j_4, t);
            ;
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            t = Option_3_0(m_4, n_4, p_4, t);
          }
      }
    }
  return(t);
}
ATerm e_7 (ATerm f_35, ATerm g_35, ATerm t)
{
  ATerm a_26 = NULL;
  t = term_k_27;
  a_26 = t;
  t = SSL_table_put(a_26, f_35, g_35);
  t = (ATerm) ATmakeAppl(sym__3, term_k_27, f_35, g_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
      t = term_q_22;
      t = h_0(t);
      h_26 = t;
      t = term_l_27;
      i_26 = t;
      t = term_m_27;
      j_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_27, term_m_27, h_26);
      t = c_7(i_26, j_26, h_26, t);
      _fail(t);
    }
  else
    {
      ATerm m_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_26 = ATgetFirst((ATermList) t);
          g_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_26;
      t = d_0(t);
      t = term_q_22;
      t = g_0(t);
      m_26 = t;
      t = (ATerm) ATinsert(CheckATermList(g_26), m_26);
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm o_26 = NULL;
  o_26 = t;
  if(match_string(t, "-o"))
    {
      t = o_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_26;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  p_26 = t;
  t = term_v_22;
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_22, p_26);
  t = e_7(q_26, p_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_26);
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm s_26 = NULL;
  s_26 = t;
  if(match_string(t, "-i"))
    {
      t = s_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_26;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm t_26 = NULL,v_26 = NULL;
  t_26 = t;
  t = term_w_22;
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_22, t_26);
  t = e_7(v_26, t_26, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_26);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, v_4, w_4, t);
  return(t);
}
ATerm at_end_1_0 (ATerm r_64 (ATerm), ATerm t)
{
  ATerm w_27 (ATerm t)
  {
    ATerm s_27 = NULL,t_27 = NULL,v_27 = NULL;
    v_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_27 = ATgetFirst((ATermList) t);
        t_27 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_9 = NULL,a_10 = NULL,p_2 = NULL;
          t = SSLgetAnnotations(v_27);
          q_9 = t;
          t = t_27;
          t = w_27(t);
          a_10 = t;
          t = (ATerm) ATinsert(CheckATermList(a_10), s_27);
          p_2 = t;
          t = SSLsetAnnotations(p_2, q_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_27;
        t = r_64(t);
      }
    return(t);
  }
  t = w_27(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  x_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_26;
    }
  else
    {
      ATerm y_4 (ATerm t)
      {
        t = not_null(z_26);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_26 = ATgetFirst((ATermList) t);
          if(((z_26 != NULL) && (z_26 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_26;
      t = at_end_1_0(y_4, t);
    }
  return(t);
}
ATerm s_28 (ATerm g_28, ATerm t)
{
  ATerm h_28 = NULL;
  t = SSL_explode_term(g_28);
  if(match_cons(t, sym__2))
    {
      ATerm p_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_28;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  m_28 = t;
  if(match_cons(t, sym__2))
    {
      k_28 = ATgetArgument(t, 0);
      l_28 = ATgetArgument(t, 1);
      {
        ATerm q_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_5 (ATerm t)
            {
              t = l_28;
              return(t);
            }
            t = k_28;
            t = at_end_1_0(a_5, t);
            ;
            LocalPopChoice(r_27);
          }
        else
          {
            t = q_27;
            t = s_28(m_28, t);
          }
      }
    }
  else
    {
      t = s_28(m_28, t);
    }
  return(t);
}
ATerm u_6 (ATerm l_35, ATerm k_35, ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t = l_35;
  {
    ATerm u_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(x_27);
      }
    else
      {
        t = u_27;
        t = (ATerm) ATempty;
      }
    u_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_35, u_28);
    t = conc_0_0(t);
    t_28 = t;
    t = term_k_27;
    v_28 = t;
    t = SSL_table_put(v_28, l_35, t_28);
    t = (ATerm) ATmakeAppl(sym__3, term_k_27, l_35, t_28);
  }
  return(t);
}
ATerm c_7 (ATerm f_33, ATerm g_33, ATerm e_33, ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,a_29 = NULL;
  x_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_33, g_33);
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_28 = ATgetArgument(t, 0);
            ATerm b_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_33, g_33);
        t = b_7(f_33, g_33, t);
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = (ATerm) ATempty;
      }
    y_28 = t;
    t = (ATerm) ATinsert(CheckATermList(y_28), e_33);
    a_29 = t;
    t = SSL_table_put(f_33, g_33, a_29);
    t = x_28;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_29 = NULL,q_29 = NULL,r_29 = NULL;
      t = term_q_22;
      t = p_0(t);
      n_29 = t;
      t = term_l_27;
      q_29 = t;
      t = term_m_27;
      r_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_27, term_m_27, n_29);
      t = c_7(q_29, r_29, n_29, t);
      _fail(t);
    }
  else
    {
      ATerm y_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_29 = ATgetFirst((ATermList) t);
          i_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_29 = ATgetFirst((ATermList) t);
          k_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_29;
      t = m_0(t);
      t = j_29;
      t = n_0(t);
      y_29 = t;
      t = (ATerm) ATinsert(CheckATermList(k_29), y_29);
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm b_30 = NULL,e_30 = NULL;
  b_30 = t;
  t = term_z_22;
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_22, b_30);
  t = e_7(e_30, b_30, t);
  t = b_30;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_c_28;
  return(t);
}
ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm h_30 = NULL,k_30 = NULL,l_30 = NULL;
  h_30 = t;
  t = term_h_23;
  k_30 = t;
  t = (ATerm) ATinsert(ATempty, h_30);
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_23, (ATerm) ATinsert(ATempty, h_30));
  t = u_6(k_30, l_30, t);
  t = h_30;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,q_30 = NULL;
  m_30 = t;
  t = term_s_23;
  n_30 = t;
  t = (ATerm) ATinsert(ATempty, m_30);
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_23, (ATerm) ATinsert(ATempty, m_30));
  t = u_6(n_30, q_30, t);
  t = m_30;
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm f_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(d_5, e_5, i_5, t);
      ;
      LocalPopChoice(i_28);
    }
  else
    {
      t = f_28;
      {
        ATerm j_28 = t;
        int n_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_5, l_5, n_5, t);
            ;
            LocalPopChoice(n_28);
          }
        else
          {
            t = j_28;
            t = ArgOption_3_0(p_5, r_5, t_5, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,u_30 = NULL,v_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_22;
  t = whoami_0_0(t);
  r_30 = t;
  t = term_y_17;
  u_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_28), r_30);
  v_30 = t;
  t = SSL_printnl(u_30, v_30);
  t = term_c_9;
  s_30 = t;
  t = SSL_exit(s_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_28;
  t = get_config_0_0(t);
  return(t);
}
ATerm x_6 (ATerm a_31, ATerm b_31, ATerm t)
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_31, b_31);
      ;
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      t = SSL_addr(a_31, b_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  e_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_31;
      t = t_70(t);
    }
  else
    {
      ATerm j_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_31 = ATgetFirst((ATermList) t);
          g_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_31;
      t = foldr_2_0(t_70, u_70, t);
      j_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_31, j_31);
      t = u_70(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_r_26;
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL;
  if(match_cons(t, sym__2))
    {
      s_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(s_10, t_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_31 = NULL,j_10 = NULL,o_10 = NULL;
  t = times_0_0(t);
  o_10 = t;
  t = SSL_explode_term(o_10);
  if(match_cons(t, sym__2))
    {
      ATerm w_28 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_10;
  t = foldr_2_0(w_5, x_5, t);
  m_31 = t;
  t = SSL_TicksToSeconds(m_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL;
  z_31 = t;
  if(match_cons(t, sym__2))
    {
      a_32 = ATgetArgument(t, 0);
      b_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_28 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_32;
        if((a_32 != t))
          {
            _fail(t);
          }
        t = z_31;
        ;
        LocalPopChoice(b_29);
      }
    else
      {
        t = z_28;
        t = (ATerm) ATmakeAppl(sym__2, a_32, b_32);
        {
          ATerm c_29 = t;
          int d_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_32, b_32);
              ;
              LocalPopChoice(d_29);
            }
          else
            {
              t = c_29;
              t = SSL_gtr(a_32, b_32);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_32, b_32);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_76 (ATerm), ATerm t)
{
  ATerm f_32 = NULL;
  f_32 = t;
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_32 = NULL;
        t = term_k_18;
        t = get_config_0_0(t);
        s_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_32, term_c_9);
        t = geq_0_0(t);
        t = f_32;
        t = e_76(t);
        ;
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        t = f_32;
      }
  }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,y_32 = NULL,z_32 = NULL;
  t = run_time_0_0(t);
  u_32 = t;
  t = term_q_22;
  t = whoami_0_0(t);
  v_32 = t;
  t = term_y_17;
  y_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_29), u_32), term_r_8), v_32);
  z_32 = t;
  t = SSL_printnl(y_32, z_32);
  t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_29), u_32), term_r_8), v_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_26;
  h_33 = t;
  t = SSL_exit(h_33);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL;
  t_33 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_33;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_33 = ATgetArgument(t, 0);
          {
            ATerm o_11 = NULL,v_2 = NULL;
            t = SSLgetAnnotations(t_33);
            o_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_33);
            v_2 = t;
            t = SSLsetAnnotations(v_2, o_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_33;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_80 (ATerm), ATerm t)
{
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_29);
    }
  else
    {
      t = l_29;
      t = fetch_1_0(a_6, t);
    }
  t = d_80(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_33 = ATgetFirst((ATermList) t);
      x_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_34 = NULL,h_34 = NULL;
        ATerm d_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_34)), not_null(h_34));
          return(t);
        }
        t = x_33;
        t = k_0(t);
        if(((b_34 != NULL) && (b_34 != t)))
          _fail(t);
        else
          b_34 = t;
        t = w_33;
        t = j_0(t);
        if(((h_34 != NULL) && (h_34 != t)))
          _fail(t);
        else
          h_34 = t;
        t = x_33;
        t = reverse_acc_2_0(j_0, d_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_22;
      t = k_0(t);
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm a_35 = NULL;
  a_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_35), term_p_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_28;
      t = get_config_0_0(t);
      p_34 = t;
      ;
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      {
        ATerm e_6 (ATerm t)
        {
          ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,e_3 = NULL;
          u_34 = t;
          if(match_cons(t, sym_Program_1))
            {
              t_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_34);
          s_34 = t;
          t = t_34;
          if(((p_34 != NULL) && (p_34 != t)))
            _fail(t);
          else
            p_34 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, t_34);
          e_3 = t;
          t = SSLsetAnnotations(e_3, s_34);
          return(t);
        }
        t = fetch_1_0(e_6, t);
      }
    }
  {
    ATerm u_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_30), not_null(p_34)), term_z_29);
        t = echo_0_0(t);
        ;
        LocalPopChoice(x_29);
      }
    else
      {
        t = u_29;
      }
    t = term_c_30;
    t = echo_0_0(t);
    t = term_l_27;
    q_34 = t;
    t = term_m_27;
    r_34 = t;
    t = term_d_30;
    t = b_7(q_34, r_34, t);
    t = reverse_acc_2_0(_id, f_6, t);
    t = map_1_0(j_6, t);
    {
      ATerm f_30 = t;
      int g_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_30), term_o_30), term_j_30), term_i_30);
          t = echo_0_0(t);
          ;
          LocalPopChoice(g_30);
        }
      else
        {
          t = f_30;
        }
    }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm l_64 (ATerm), ATerm t)
{
  ATerm n_36 (ATerm t)
  {
    ATerm i_36 = NULL,l_36 = NULL,m_36 = NULL;
    i_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_36 = ATgetFirst((ATermList) t);
        m_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_30 = t;
      int w_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_11 = NULL,p_12 = NULL,i_3 = NULL;
          t = SSLgetAnnotations(i_36);
          z_11 = t;
          t = l_36;
          t = l_64(t);
          p_12 = t;
          t = (ATerm) ATinsert(CheckATermList(m_36), p_12);
          i_3 = t;
          t = SSLsetAnnotations(i_3, z_11);
          ;
          LocalPopChoice(w_30);
        }
      else
        {
          t = t_30;
          {
            ATerm m_13 = NULL,e_14 = NULL,j_3 = NULL;
            t = SSLgetAnnotations(i_36);
            m_13 = t;
            t = m_36;
            t = n_36(t);
            e_14 = t;
            t = (ATerm) ATinsert(CheckATermList(e_14), l_36);
            j_3 = t;
            t = SSLsetAnnotations(j_3, m_13);
          }
        }
    }
    return(t);
  }
  t = n_36(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  v_36 = t;
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_36;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_30 = ATgetFirst((ATermList) t);
                ATerm c_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_36;
          }
        ;
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        t = (ATerm) ATinsert(ATempty, v_36);
      }
    w_36 = t;
    t = term_b_26;
    x_36 = t;
    t = SSL_printnl(x_36, w_36);
    t = v_36;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_28;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm a_7 (ATerm v_29, ATerm w_29, ATerm t)
{
  t = SSL_strcat(v_29, w_29);
  return(t);
}
ATerm debug_1_0 (ATerm g_60 (ATerm), ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL;
  b_37 = t;
  t = g_60(t);
  c_37 = t;
  t = term_y_17;
  d_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_37), c_37);
  e_37 = t;
  t = SSL_printnl(d_37, e_37);
  t = b_37;
  return(t);
}
ATerm map_1_0 (ATerm b_64 (ATerm), ATerm t)
{
  ATerm e_38 (ATerm t)
  {
    ATerm a_38 = NULL,b_38 = NULL,d_38 = NULL;
    a_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_38;
      }
    else
      {
        ATerm v_14 = NULL,y_14 = NULL,z_14 = NULL,j_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_38 = ATgetFirst((ATermList) t);
            d_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_38);
        v_14 = t;
        t = b_38;
        t = b_64(t);
        y_14 = t;
        t = d_38;
        t = e_38(t);
        z_14 = t;
        t = (ATerm) ATinsert(CheckATermList(z_14), y_14);
        j_5 = t;
        t = SSLsetAnnotations(j_5, v_14);
      }
    return(t);
  }
  t = e_38(t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm d_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(h_31);
    }
  else
    {
      t = d_31;
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_i_31;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_38 = NULL;
      p_38 = t;
      t = SSL_is_string(p_38);
      ;
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
      {
        ATerm n_31 = t;
        int o_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(d_7, t);
            ;
            LocalPopChoice(o_31);
          }
        else
          {
            t = n_31;
            {
              ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
              a_39 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_39 = ATgetArgument(t, 0);
                  t = b_39;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_39 = ATgetArgument(t, 0);
                      t = b_39;
                      {
                        ATerm p_31 = t;
                        int q_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_31);
                          }
                        else
                          {
                            t = p_31;
                            t = debug_1_0(f_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_39 = NULL,j_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_39 = ATgetArgument(t, 0);
                          c_39 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_39;
                      t = eval_config_0_0(t);
                      g_39 = t;
                      t = c_39;
                      t = eval_config_0_0(t);
                      j_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_39, j_39);
                      t = a_7(g_39, j_39, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm b_7 (ATerm w_34, ATerm x_34, ATerm t)
{
  t = SSL_table_get(w_34, x_34);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL;
  n_39 = t;
  t = term_k_27;
  o_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_27, n_39);
  t = b_7(o_39, n_39, t);
  {
    ATerm r_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_39 = NULL,q_39 = NULL;
        t = eval_config_0_0(t);
        p_39 = t;
        t = term_k_27;
        q_39 = t;
        t = SSL_table_put(q_39, n_39, p_39);
        t = p_39;
        ;
        LocalPopChoice(s_31);
      }
    else
      {
        t = r_31;
      }
  }
  return(t);
}
ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL;
  t = term_t_31;
  t_39 = t;
  t = term_q_22;
  u_39 = t;
  t = term_u_31;
  t = e_7(t_39, u_39, t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_v_31;
  return(t);
}
ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL;
  t = term_t_31;
  x_39 = t;
  t = term_q_22;
  y_39 = t;
  t = term_u_31;
  t = e_7(x_39, y_39, t);
  t = term_w_31;
  v_39 = t;
  t = term_q_22;
  w_39 = t;
  t = term_x_31;
  t = e_7(v_39, w_39, t);
  t = term_y_31;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_32 = t;
  int e_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_7, i_7, k_7, t);
      ;
      LocalPopChoice(e_32);
    }
  else
    {
      t = d_32;
      t = Option_3_0(n_7, o_7, p_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_51 (ATerm), ATerm n_51 (ATerm), ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,m_5 = NULL;
  e_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_40 = ATgetFirst((ATermList) t);
      b_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_40);
  z_39 = t;
  t = a_40;
  t = m_51(t);
  c_40 = t;
  t = b_40;
  t = n_51(t);
  d_40 = t;
  t = (ATerm) ATinsert(CheckATermList(d_40), c_40);
  m_5 = t;
  t = SSLsetAnnotations(m_5, z_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_82 (ATerm), ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,o_40 = NULL,p_40 = NULL,o_5 = NULL;
  j_40 = t;
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_32;
        t = b_82(t);
        ;
        LocalPopChoice(h_32);
      }
    else
      {
        t = g_32;
      }
    t = j_40;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_40 = ATgetFirst((ATermList) t);
        m_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_40);
    k_40 = t;
    t = term_p_28;
    p_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_28, l_40);
    t = e_7(p_40, l_40, t);
    t = m_40;
    {
      ATerm z_40 (ATerm t)
      {
        ATerm j_32 = t;
        int k_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_32 = t;
            int n_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_40 = NULL;
                s_40 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = s_40;
                ;
                LocalPopChoice(n_32);
              }
            else
              {
                t = l_32;
                t = b_82(t);
                t = Cons_2_0(_id, z_40, t);
              }
            ;
            LocalPopChoice(k_32);
          }
        else
          {
            t = j_32;
            {
              ATerm v_40 = NULL,w_40 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_40 = ATgetFirst((ATermList) t);
                  w_40 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_40), (ATerm) ATmakeAppl(sym_Undefined_1, v_40));
            }
          }
        return(t);
      }
      t = z_40(t);
      o_40 = t;
      t = (ATerm) ATinsert(CheckATermList(o_40), (ATerm) ATmakeAppl(sym_Program_1, l_40));
      o_5 = t;
      t = SSLsetAnnotations(o_5, k_40);
    }
  }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm l_41 = NULL;
  l_41 = t;
  if(match_string(t, "--help"))
    {
      t = l_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_41;
        }
    }
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL;
  t = term_o_29;
  m_41 = t;
  t = term_q_22;
  n_41 = t;
  t = term_p_32;
  t = e_7(m_41, n_41, t);
  t = term_q_32;
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm v_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_82 (ATerm), ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
  g_41 = t;
  t = term_l_27;
  i_41 = t;
  t = term_m_27;
  j_41 = t;
  t = (ATerm) ATempty;
  k_41 = t;
  t = SSL_table_put(i_41, j_41, k_41);
  t = g_41;
  {
    ATerm q_7 (ATerm t)
    {
      ATerm t_32 = t;
      int w_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_82(t);
          ;
          LocalPopChoice(w_32);
        }
      else
        {
          t = t_32;
          {
            ATerm x_32 = t;
            int a_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_7, t_7, u_7, t);
                ;
                LocalPopChoice(a_33);
              }
            else
              {
                t = x_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_7, t);
    {
      ATerm b_33 = t;
      int c_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_41 = NULL;
          u_41 = t;
          {
            ATerm d_33 = t;
            int i_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_16 = NULL;
                t = u_41;
                {
                  ATerm j_33 = t;
                  int m_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_o_29;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(m_33);
                    }
                  else
                    {
                      t = j_33;
                      t = fetch_1_0(v_7, t);
                    }
                  t = u_41;
                  t = default_system_usage_0_0(t);
                  t = term_r_26;
                  j_16 = t;
                  t = SSL_exit(j_16);
                }
                ;
                LocalPopChoice(i_33);
              }
            else
              {
                t = d_33;
                {
                  ATerm w_16 = NULL;
                  t = term_t_31;
                  t = get_config_0_0(t);
                  t = u_41;
                  t = default_system_about_0_0(t);
                  t = term_r_26;
                  w_16 = t;
                  t = SSL_exit(w_16);
                }
              }
          }
          ;
          LocalPopChoice(c_33);
        }
      else
        {
          t = b_33;
          {
            ATerm n_33 = t;
            int o_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
                ATerm w_7 (ATerm t)
                {
                  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,q_5 = NULL;
                  a_42 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      z_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_42);
                  y_41 = t;
                  t = z_41;
                  if(((e_41 != NULL) && (e_41 != t)))
                    _fail(t);
                  else
                    e_41 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, z_41);
                  q_5 = t;
                  t = SSLsetAnnotations(q_5, y_41);
                  return(t);
                }
                t = fetch_1_0(w_7, t);
                t = term_y_17;
                w_41 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_41)), term_p_33);
                x_41 = t;
                t = SSL_printnl(w_41, x_41);
                t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_41)), term_p_33));
                t = default_system_usage_0_0(t);
                t = term_c_9;
                v_41 = t;
                t = SSL_exit(v_41);
                ;
                LocalPopChoice(o_33);
              }
            else
              {
                t = n_33;
              }
          }
        }
      f_41 = t;
      t = term_l_27;
      h_41 = t;
      t = SSL_table_destroy(h_41);
      t = f_41;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL;
  t = parse_options_1_0(f_80, t);
  f_42 = t;
  t = term_q_33;
  i_42 = t;
  t = SSL_table_create(i_42);
  t = term_q_33;
  g_42 = t;
  t = term_r_33;
  h_42 = t;
  t = SSL_table_put(g_42, h_42, f_42);
  t = f_42;
  t = h_80(t);
  {
    ATerm u_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_80, t);
        ;
        LocalPopChoice(v_33);
      }
    else
      {
        t = u_33;
        {
          ATerm y_33 = t;
          int z_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_80(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_33);
            }
          else
            {
              t = y_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm a_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sglri_options_0_0(t);
      ;
      LocalPopChoice(f_34);
    }
  else
    {
      t = a_34;
      {
        ATerm g_34 = t;
        int i_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(i_34);
          }
        else
          {
            t = g_34;
            {
              ATerm j_34 = t;
              int k_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(k_34);
                }
              else
                {
                  t = j_34;
                  {
                    ATerm n_34 = t;
                    int o_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(a_8, b_8, c_8, t);
                        ;
                        LocalPopChoice(o_34);
                      }
                    else
                      {
                        t = n_34;
                        {
                          ATerm v_34 = t;
                          int y_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(y_34);
                            }
                          else
                            {
                              t = v_34;
                              t = keep_option_0_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = xtc_io_1_0(parse_and_implode_0_0, t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL;
  t = term_z_34;
  k_42 = t;
  t = term_q_22;
  l_42 = t;
  t = term_b_35;
  t = e_7(k_42, l_42, t);
  t = term_c_35;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_d_35;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(x_7, default_usage_0_0, _id, z_7, t);
  return(t);
}
