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
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_i_31;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_j_29;
ATerm term_j_28;
ATerm term_e_28;
ATerm term_a_28;
ATerm term_y_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_d_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_u_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_b_26;
ATerm term_s_25;
ATerm term_h_25;
ATerm term_e_24;
ATerm term_r_23;
ATerm term_o_23;
ATerm term_k_23;
ATerm term_e_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_i_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_x_20;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_x_18;
ATerm term_u_18;
ATerm term_g_18;
ATerm term_s_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_k_9;
void init_constant_terms (void)
{
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_10, term_r_9, term_j_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_m_10, term_n_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_10, term_u_10, term_v_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_a_11, term_b_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_g_11, term_h_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_l_11, term_m_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_t_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_z_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_h_12, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_p_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_t_12, term_u_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_z_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_h_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_m_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_s_13, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_w_13, term_x_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_e_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_k_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_o_14, term_r_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_x_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_i_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_o_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_d_16, term_e_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_k_16, term_m_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_t_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, term_x_21, term_s_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym__2, term_x_21, term_y_21);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_g_18);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_h_26);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_26);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_q_26, term_k_19);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_n_27, term_k_19);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_w_27, term_k_19);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym__2, term_a_27, term_b_27);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__2, term_y_29, term_k_19);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__2, term_c_30, term_k_19);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_m_29, term_k_19);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym__2, term_h_33, term_k_19);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm a_6 (ATerm i_43, ATerm j_43, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm b_6 (ATerm r_27, ATerm s_27, ATerm);
ATerm c_6 (ATerm d_72 (ATerm), ATerm w_182, ATerm z_27, ATerm);
ATerm p_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm);
ATerm d_6 (ATerm n_24, ATerm o_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm s_70 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm e_90 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm j_7 (ATerm t_6, ATerm);
ATerm conc_0_0 (ATerm);
ATerm f_6 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm);
ATerm v_8 (ATerm d_8, ATerm);
ATerm w_8 (ATerm h_8, ATerm i_8, ATerm j_8, ATerm);
ATerm f_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm h_6 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm);
ATerm i_6 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm);
ATerm k_1 (ATerm);
ATerm j_6 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm);
ATerm k_6 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm);
ATerm n_6 (ATerm l_48, ATerm m_48, ATerm);
ATerm p_14 (ATerm y_13, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_6 (ATerm x_27, ATerm);
ATerm m_6 (ATerm t_48, ATerm u_48, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm j_17 (ATerm j_15, ATerm);
ATerm k_17 (ATerm p_15, ATerm r_15, ATerm s_15, ATerm);
ATerm l_17 (ATerm g_16, ATerm h_16, ATerm l_16, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm e_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm g_2 (ATerm);
ATerm i_2 (ATerm);
ATerm l_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm n_22 (ATerm g_21, ATerm);
ATerm v_2 (ATerm);
ATerm z_2 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm o_6 (ATerm y_41, ATerm z_41, ATerm);
ATerm debug_1_0 (ATerm b_72 (ATerm), ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm p_6 (ATerm t_24, ATerm u_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm q_6 (ATerm m_45, ATerm n_45, ATerm);
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm xtc_io_1_0 (ATerm r_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm m_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm x_6 (ATerm h_47, ATerm i_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm pp_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm r_6 (ATerm c_43, ATerm d_43, ATerm);
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm i_5 (ATerm);
ATerm m_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm r_5 (ATerm);
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm u_6 (ATerm y_46, ATerm z_46, ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm y_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm s_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm e_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm o_7 (ATerm);
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm);
ATerm t_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm k_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm x_8 (ATerm);
ATerm a_9 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm pp_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm a_6 (ATerm i_43, ATerm j_43, ATerm t)
{
  ATerm w_4 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(i_43, j_43);
      ;
      LocalPopChoice(j_9);
    }
  else
    {
      t = w_4;
      t = SSL_subtr(i_43, j_43);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,n_0 = NULL,o_0 = NULL;
  t = term_k_9;
  {
    ATerm l_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(q_9);
      }
    else
      {
        t = l_9;
        t = term_r_9;
      }
    f_0 = t;
    t = term_r_9;
    o_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_0, term_r_9);
    t = a_6(f_0, o_0, t);
    n_0 = t;
    t = SSL_int_to_string(n_0);
    b_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, b_0), term_k_9);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm t_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_t_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm v_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_u_9);
      v_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_0, (ATerm) ATinsert(ATempty, term_u_9));
      t = n_6(t_0, v_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm b_6 (ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm w_0 = NULL;
  t = SSL_write_term_to_stream_baf(r_27, s_27);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_0);
  return(t);
}
ATerm c_6 (ATerm d_72 (ATerm), ATerm w_182, ATerm z_27, ATerm t)
{
  ATerm a_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_182, term_v_9);
  t = open_stream_0_0(t);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, z_27);
  t = d_72(t);
  t = fclose_0_0(t);
  t = z_27;
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_9 = ATgetArgument(t, 0);
      if(match_cons(w_9, sym_Stream_1))
        {
          d_1 = ATgetArgument(w_9, 0);
        }
      else
        _fail(t);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(d_1, e_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  b_1 = t;
  t = xtc_new_file_0_0(t);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_1, b_1);
  t = c_6(p_0, c_1, b_1, t);
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
ATerm d_6 (ATerm n_24, ATerm o_24, ATerm t)
{
  t = SSL_execvp(n_24, o_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm h_2 = NULL,j_2 = NULL,o_2 = NULL,w_2 = NULL;
  h_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      j_2 = ATgetArgument(t, 0);
      {
        ATerm x_0 = NULL,y_0 = NULL;
        t = SSL_int_to_string(j_2);
        x_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_9), x_0), term_x_9);
        y_0 = t;
        t = SSL_concat_strings(y_0);
      }
    }
  else
    {
      ATerm s_1 = NULL,w_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          j_2 = ATgetArgument(t, 0);
          o_2 = ATgetArgument(t, 1);
          w_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(o_2);
      s_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_2), term_b_10), s_1), term_a_10), j_2);
      w_1 = t;
      t = SSL_concat_strings(w_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm a_3 = NULL;
  ATerm q_0 (ATerm t)
  {
    t = i_76(t);
    if(((a_3 != NULL) && (a_3 != t)))
      _fail(t);
    else
      a_3 = t;
    return(t);
  }
  t = fetch_1_0(q_0, t);
  t = not_null(a_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_3 = NULL;
  if(((b_3 != NULL) && (b_3 != t)))
    _fail(t);
  else
    b_3 = t;
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm e_10 = ATgetArgument(t, 0);
              if(((b_3 != NULL) && (b_3 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                b_3 = ATgetArgument(t, 1);
              {
                ATerm g_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_16), term_n_16), term_f_16), term_a_16), term_q_15), term_l_15), term_e_15), term_a_15), term_t_14), term_l_14), term_f_14), term_a_14), term_u_13), term_q_13), term_j_13), term_a_13), term_v_12), term_q_12), term_j_12), term_f_12), term_a_12), term_v_11), term_q_11), term_i_11), term_d_11), term_x_10), term_o_10), term_k_10);
        t = fetch_elem_1_0(r_0, t);
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(b_3));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm h_3 = NULL,t_3 = NULL;
  h_3 = t;
  {
    ATerm w_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_16 = ATgetArgument(t, 0);
            t_3 = ATgetArgument(t, 1);
            {
              ATerm a_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_16);
        {
          ATerm b_17 = t;
          int c_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_2 = NULL,m_2 = NULL,n_2 = NULL;
              t = t_3;
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
                k_2 = t;
                t = term_e_17;
                m_2 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, k_2), term_f_17);
                n_2 = t;
                t = SSL_printnl(m_2, n_2);
                t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, k_2), term_f_17));
              }
              ;
              LocalPopChoice(c_17);
            }
          else
            {
              t = b_17;
              t = h_3;
            }
        }
      }
    else
      {
        t = w_16;
        t = h_3;
      }
    t = h_3;
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
  ATerm c_4 = NULL,d_4 = NULL;
  d_4 = t;
  t = fork_0_0(t);
  c_4 = t;
  {
    ATerm i_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = d_4;
        t = s_70(t);
        ;
        LocalPopChoice(m_17);
      }
    else
      {
        t = i_17;
        t = SSL_waitpid(c_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm n_17 = ATgetArgument(t, 0);
            if(((ATgetType(n_17) != AT_INT) || (ATgetInt((ATermInt) n_17) != 0)))
              _fail(t);
            {
              ATerm o_17 = ATgetArgument(t, 1);
            }
            {
              ATerm q_17 = ATgetArgument(t, 2);
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
  ATerm i_4 = NULL,k_4 = NULL;
  if(((k_4 != NULL) && (k_4 != t)))
    _fail(t);
  else
    k_4 = t;
  t = e_90(t);
  t = xtc_find_0_0(t);
  if(((i_4 != NULL) && (i_4 != t)))
    _fail(t);
  else
    i_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_4), not_null(k_4));
  {
    ATerm s_0 (ATerm t)
    {
      ATerm l_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_4), not_null(k_4));
      t = d_6(not_null(i_4), not_null(k_4), t);
      t = term_s_17;
      l_4 = t;
      t = SSL_exit(l_4);
      return(t);
    }
    t = fork_and_wait_1_0(s_0, t);
    t = not_null(k_4);
  }
  return(t);
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
    q_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_5 = ATgetFirst((ATermList) t);
        p_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_2 = NULL,y_2 = NULL,l_1 = NULL;
          t = SSLgetAnnotations(q_5);
          t_2 = t;
          t = p_5;
          t = s_5(t);
          y_2 = t;
          t = (ATerm) ATinsert(CheckATermList(y_2), o_5);
          l_1 = t;
          t = SSLsetAnnotations(l_1, t_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_5;
        t = m_76(t);
      }
    return(t);
  }
  t = s_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,q_4 = NULL;
  n_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_4;
    }
  else
    {
      ATerm u_0 (ATerm t)
      {
        t = not_null(q_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((o_4 != NULL) && (o_4 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            o_4 = ATgetFirst((ATermList) t);
          if(((q_4 != NULL) && (q_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(o_4);
      t = at_end_1_0(u_0, t);
    }
  return(t);
}
ATerm j_7 (ATerm t_6, ATerm t)
{
  ATerm w_6 = NULL;
  t = SSL_explode_term(t_6);
  if(match_cons(t, sym__2))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
  if(((d_7 != NULL) && (d_7 != t)))
    _fail(t);
  else
    d_7 = t;
  if(match_cons(t, sym__2))
    {
      b_7 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
      {
        ATerm w_17 = t;
        int z_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = not_null(c_7);
              return(t);
            }
            t = not_null(b_7);
            t = at_end_1_0(z_0, t);
            ;
            LocalPopChoice(z_17);
          }
        else
          {
            t = w_17;
            t = j_7(not_null(d_7), t);
          }
      }
    }
  else
    {
      t = j_7(not_null(d_7), t);
    }
  return(t);
}
ATerm f_6 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,p_7 = NULL,q_7 = NULL,s_7 = NULL,u_7 = NULL;
  q_7 = t;
  t = p_86(t);
  k_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_7, q_44, o_44);
  t = v_6(k_7, q_44, o_44, t);
  {
    ATerm a_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_7 = NULL;
        t = term_g_18;
        v_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_7, term_g_18);
        t = u_6(k_7, v_7, t);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = a_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_7 = ATgetFirst((ATermList) t);
        p_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_18;
    s_7 = t;
    t = (ATerm) ATinsert(CheckATermList(p_7), (ATerm) ATinsert(CheckATermList(l_7), q_44));
    u_7 = t;
    t = SSL_table_put(k_7, s_7, u_7);
    t = q_7;
  }
  return(t);
}
ATerm v_8 (ATerm d_8, ATerm t)
{
  t = d_8;
  {
    ATerm l_18 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_18 = ATgetArgument(t, 0);
            ATerm q_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_18;
      }
    t = term_u_18;
    t = debug_1_0(f_1, t);
    t = (ATerm) ATmakeAppl(sym__2, d_8, term_v_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm w_8 (ATerm h_8, ATerm i_8, ATerm j_8, ATerm t)
{
  t = SSL_open_file(h_8, i_8);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_x_18;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
  s_8 = t;
  if(match_cons(t, sym__2))
    {
      t_8 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
      {
        ATerm a_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_8(s_8, t);
            ;
            LocalPopChoice(j_19);
          }
        else
          {
            t = a_19;
            t = w_8(t_8, u_8, s_8, t);
          }
      }
    }
  else
    {
      t = v_8(s_8, t);
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
  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
  t = term_k_19;
  t = new_0_0(t);
  b_9 = t;
  t = term_l_19;
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_9, term_l_19);
  t = o_6(b_9, c_9, t);
  d_9 = t;
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_u_9);
        i_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_9, (ATerm) ATinsert(ATempty, term_u_9));
        t = n_6(d_9, i_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        t = d_9;
      }
  }
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL;
  t = new_file_0_0(t);
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_9, term_v_9);
  t = open_file_0_0(t);
  t = term_k_19;
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_9, term_k_19);
  t = f_6(g_1, m_9, n_9, t);
  t = m_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm f_10 = NULL,i_10 = NULL;
  f_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm j_3 = NULL,l_3 = NULL;
      t = f_10;
      t = xtc_new_file_0_0(t);
      j_3 = t;
      t = m_0(t);
      l_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_3, (ATerm) ATinsert(ATinsert(ATempty, j_3), term_p_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(j_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_3);
    }
  else
    {
      ATerm y_3 = NULL,b_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_10;
      t = xtc_new_file_0_0(t);
      y_3 = t;
      t = m_0(t);
      b_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_3), term_p_19), i_10), term_q_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(y_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_3);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm p_10 = NULL;
  ATerm h_1 (ATerm t)
  {
    ATerm q_10 = NULL,r_10 = NULL;
    q_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_10), q_10);
    t = u_6(not_null(p_10), q_10, t);
    r_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_10, r_10);
    return(t);
  }
  if(((p_10 != NULL) && (p_10 != t)))
    _fail(t);
  else
    p_10 = t;
  t = SSL_table_keys(not_null(p_10));
  t = map_1_0(h_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm t_10 = NULL;
  t_10 = t;
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_10 = NULL;
        t = term_k_9;
        t = get_config_0_0(t);
        y_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_10, term_v_15);
        t = geq_0_0(t);
        t = t_10;
        t = x_87(t);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = t_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm c_11 = NULL;
  c_11 = t;
  {
    ATerm t_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_11 = NULL;
        t = term_k_9;
        t = get_config_0_0(t);
        e_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_11, term_t_12);
        t = geq_0_0(t);
        t = c_11;
        t = w_87(t);
        ;
        LocalPopChoice(u_19);
      }
    else
      {
        t = t_19;
        t = c_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm n_11 = NULL;
  n_11 = t;
  {
    ATerm v_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_11 = NULL;
        t = term_k_9;
        t = get_config_0_0(t);
        u_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_11, term_a_11);
        t = geq_0_0(t);
        t = n_11;
        t = y_87(t);
        ;
        LocalPopChoice(z_19);
      }
    else
      {
        t = v_19;
        t = n_11;
      }
  }
  return(t);
}
ATerm h_6 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm t)
{
  t = e_80(t);
  {
    ATerm i_1 (ATerm t)
    {
      ATerm w_11 = NULL;
      w_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_34), w_11);
      t = d_80(t);
      return(t);
    }
    t = fetch_1_0(i_1, t);
    t = not_null(t_34);
  }
  return(t);
}
ATerm i_6 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm t)
{
  ATerm w_12 (ATerm t)
  {
    ATerm m_12 = NULL,o_12 = NULL,r_12 = NULL;
    m_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(p_34);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_12 = ATgetFirst((ATermList) t);
            r_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_20 = t;
          int b_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_12;
              {
                ATerm j_1 (ATerm t)
                {
                  t = not_null(p_34);
                  return(t);
                }
                t = h_6(a_80, j_1, not_null(o_12), not_null(r_12), t);
                t = w_12(t);
              }
              ;
              LocalPopChoice(b_20);
            }
          else
            {
              t = a_20;
              {
                ATerm p_4 = NULL,u_4 = NULL,n_1 = NULL;
                t = SSLgetAnnotations(m_12);
                p_4 = t;
                t = r_12;
                t = w_12(t);
                u_4 = t;
                t = (ATerm) ATinsert(CheckATermList(u_4), o_12);
                n_1 = t;
                t = SSLsetAnnotations(n_1, p_4);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(q_34);
  t = w_12(t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm n_13 = NULL;
  if(match_cons(t, sym__2))
    {
      n_13 = ATgetArgument(t, 0);
      if((n_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm j_6 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_20 = ATgetArgument(t, 0);
            ATerm f_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
        t = u_6(e_46, f_46, t);
        ;
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = (ATerm) ATempty;
      }
    g_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_13, g_46);
    t = i_6(k_1, g_13, g_46, t);
    f_13 = t;
    t = SSL_table_put(e_46, f_46, f_13);
    t = e_13;
  }
  return(t);
}
ATerm k_6 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm o_13 = NULL,p_13 = NULL;
    if(match_cons(t, sym__2))
      {
        o_13 = ATgetArgument(t, 0);
        p_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(o_46), o_13, p_13);
    t = a_88(t);
    return(t);
  }
  t = not_null(n_46);
  t = map_1_0(m_1, t);
  return(t);
}
ATerm n_6 (ATerm l_48, ATerm m_48, ATerm t)
{
  t = SSL_access(l_48, m_48);
  return(t);
}
ATerm p_14 (ATerm y_13, ATerm t)
{
  t = SSL_fclose(y_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_14 = NULL,j_14 = NULL;
  j_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_14 = ATgetArgument(t, 0);
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_14);
            ;
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            t = p_14(j_14, t);
          }
      }
    }
  else
    {
      t = p_14(j_14, t);
    }
  return(t);
}
ATerm l_6 (ATerm x_27, ATerm t)
{
  t = SSL_read_term_from_stream(x_27);
  return(t);
}
ATerm m_6 (ATerm t_48, ATerm u_48, ATerm t)
{
  ATerm q_14 = NULL;
  t = SSL_fopen(t_48, u_48);
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_14 = NULL;
  t = SSL_stdin_stream();
  s_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_14);
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
  ATerm w_14 = NULL;
  t = SSL_stderr_stream();
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_14);
  return(t);
}
ATerm j_17 (ATerm j_15, ATerm t)
{
  ATerm k_15 = NULL;
  t = SSL_explode_term(j_15);
  if(match_cons(t, sym__2))
    {
      ATerm i_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_20 = ATgetArgument(t, 1);
        if(((ATgetType(j_20) == AT_LIST) && !(ATisEmpty(j_20))))
          {
            k_15 = ATgetFirst((ATermList) j_20);
            {
              ATerm k_20 = (ATerm) ATgetNext((ATermList) j_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm k_17 (ATerm p_15, ATerm r_15, ATerm s_15, ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,c_16 = NULL,q_1 = NULL;
  t = SSLgetAnnotations(s_15);
  z_15 = t;
  t = p_15;
  if(match_cons(t, sym_Path_1))
    {
      c_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_16, r_15);
  q_1 = t;
  t = SSLsetAnnotations(q_1, z_15);
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(x_15, y_15, t);
  return(t);
}
ATerm l_17 (ATerm g_16, ATerm h_16, ATerm l_16, ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,v_16 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(l_16);
  q_16 = t;
  t = SSL_is_string(g_16);
  v_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_16, h_16);
  t_1 = t;
  t = SSLsetAnnotations(t_1, q_16);
  if(match_cons(t, sym__2))
    {
      o_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(o_16, p_16, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm x_16 = NULL,g_17 = NULL,h_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_20 = ATgetArgument(t, 0);
      ATerm n_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  x_16 = t;
  if(match_cons(t, sym__2))
    {
      g_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
      {
        ATerm p_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_17(x_16, t);
            ;
            LocalPopChoice(r_20);
          }
        else
          {
            t = p_20;
            {
              ATerm s_20 = t;
              int t_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_17(g_17, h_17, x_16, t);
                  ;
                  LocalPopChoice(t_20);
                }
              else
                {
                  t = s_20;
                  t = l_17(g_17, h_17, x_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_17(x_16, t);
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_x_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_17 = NULL,r_17 = NULL,u_17 = NULL;
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_17 = NULL;
      v_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_17, term_c_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      t = debug_1_0(o_1, t);
      _fail(t);
    }
  r_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(u_17, t);
  p_17 = t;
  t = r_17;
  t = fclose_0_0(t);
  t = p_17;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_d_21;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm f_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_17 = NULL,y_17 = NULL;
      x_17 = t;
      t = (ATerm) ATinsert(ATempty, term_i_21);
      y_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_17, (ATerm) ATinsert(ATempty, term_i_21));
      t = n_6(x_17, y_17, t);
      LocalPopChoice(h_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = f_21;
      {
        ATerm j_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_21 = t;
            if((PushChoice() == 0))
              {
                ATerm b_18 = NULL,c_18 = NULL;
                b_18 = t;
                t = (ATerm) ATinsert(ATempty, term_u_9);
                c_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_18, (ATerm) ATinsert(ATempty, term_u_9));
                t = n_6(b_18, c_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_21;
              }
            t = debug_1_0(p_1, t);
            ;
            LocalPopChoice(k_21);
          }
        else
          {
            t = j_21;
            t = debug_1_0(r_1, t);
          }
        t = (ATerm) ATempty;
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
  t = term_o_21;
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,y_18 = NULL;
  v_18 = t;
  t = term_e_17;
  w_18 = t;
  t = (ATerm) ATinsert(ATempty, term_t_21);
  y_18 = t;
  t = SSL_printnl(w_18, y_18);
  t = v_18;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm z_18 = NULL,b_19 = NULL,c_19 = NULL;
  if(match_cons(t, sym__3))
    {
      z_18 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
      c_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_6(z_18, b_19, c_19, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
  d_19 = t;
  t = term_e_17;
  e_19 = t;
  t = (ATerm) ATinsert(ATempty, term_v_21);
  f_19 = t;
  t = SSL_printnl(e_19, f_19);
  t = d_19;
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
  g_19 = t;
  t = term_e_17;
  h_19 = t;
  t = (ATerm) ATinsert(ATempty, term_t_21);
  i_19 = t;
  t = SSL_printnl(h_19, i_19);
  t = g_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_18 = NULL,f_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,r_18 = NULL;
  d_18 = t;
  t = if_verbose5_1_0(u_1, t);
  {
    ATerm w_21 = t;
    if((PushChoice() == 0))
      {
        ATerm s_18 = NULL,t_18 = NULL;
        t = term_x_21;
        s_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, d_18);
        t_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_21, (ATerm) ATmakeAppl(sym_Imported_1, d_18));
        t = u_6(s_18, t_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_21;
      }
    h_18 = t;
    t = term_x_21;
    o_18 = t;
    t = term_y_21;
    p_18 = t;
    t = (ATerm) ATinsert(ATempty, d_18);
    r_18 = t;
    t = SSL_table_put(o_18, p_18, r_18);
    t = h_18;
    t = if_verbose4_1_0(x_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(a_2, t);
    f_18 = t;
    t = term_x_21;
    n_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_21, f_18);
    t = k_6(b_2, n_18, f_18, t);
    t = if_verbose6_1_0(c_2, t);
    t = term_x_21;
    i_18 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, d_18);
    j_18 = t;
    t = (ATerm) ATempty;
    k_18 = t;
    t = SSL_table_put(i_18, j_18, k_18);
    t = (ATerm) ATmakeAppl(sym__3, term_x_21, (ATerm)ATmakeAppl(sym_Imported_1, d_18), (ATerm) ATempty);
    t = if_verbose4_1_0(e_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  w_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_19 = ATgetFirst((ATermList) t);
          y_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_22 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_5 = NULL,e_6 = NULL,g_6 = NULL,z_1 = NULL;
            t = SSLgetAnnotations(w_19);
            x_5 = t;
            t = x_19;
            t = r_83(t);
            e_6 = t;
            t = y_19;
            t = filter_1_0(r_83, t);
            g_6 = t;
            t = (ATerm) ATinsert(CheckATermList(g_6), e_6);
            z_1 = t;
            t = SSLsetAnnotations(z_1, x_5);
            ;
            LocalPopChoice(c_22);
          }
        else
          {
            t = b_22;
            t = y_19;
            t = filter_1_0(r_83, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm l_20 (ATerm t)
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_85(t);
        t = l_20(t);
        ;
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
      }
    return(t);
  }
  t = l_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      {
        ATerm j_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_20 = NULL;
            t = term_l_22;
            o_20 = t;
            t = SSL_getenv(o_20);
            ;
            LocalPopChoice(k_22);
          }
        else
          {
            t = j_22;
            t = XTC_REPOSITORY();
          }
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
  t = term_o_22;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL;
  t = term_x_21;
  y_20 = t;
  t = term_s_22;
  z_20 = t;
  t = term_t_22;
  t = u_6(y_20, z_20, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm v_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_22;
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
  t = term_w_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm q_20 = NULL;
  t = if_verbose5_1_0(g_2, t);
  q_20 = t;
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_20 = NULL,v_20 = NULL;
        t = term_x_21;
        u_20 = t;
        t = term_y_21;
        v_20 = t;
        t = term_z_22;
        t = u_6(u_20, v_20, t);
        ;
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        {
          ATerm w_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          w_20 = t;
          t = repeat_1_0(l_2, t);
          t = w_20;
        }
      }
    t = q_20;
    t = if_verbose5_1_0(p_2, t);
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = debug_1_0(s_2, t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm n_22 (ATerm g_21, ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,q_21 = NULL;
  t = term_x_21;
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, g_21);
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_21, (ATerm) ATmakeAppl(sym_Tool_1, g_21));
  t = u_6(n_21, q_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_23 = ATgetFirst((ATermList) t);
      if(match_cons(b_23, sym__2))
        {
          ATerm d_23 = ATgetArgument(b_23, 0);
          m_21 = ATgetArgument(b_23, 1);
        }
      else
        _fail(t);
      {
        ATerm c_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_21;
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = debug_1_0(z_2, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_x_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(d_3, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_e_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_21 = NULL,s_21 = NULL,u_21 = NULL;
      t = if_verbose5_1_0(r_2, t);
      t = xtc_load_0_0(t);
      if(((u_21 != NULL) && (u_21 != t)))
        _fail(t);
      else
        u_21 = t;
      if(match_cons(t, sym__2))
        {
          r_21 = ATgetArgument(t, 0);
          s_21 = ATgetArgument(t, 1);
          {
            ATerm i_23 = t;
            int j_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_21 = NULL,a_22 = NULL,f_22 = NULL;
                t = term_x_21;
                if(((a_22 != NULL) && (a_22 != t)))
                  _fail(t);
                else
                  a_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(r_21));
                if(((f_22 != NULL) && (f_22 != t)))
                  _fail(t);
                else
                  f_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_21, (ATerm) ATmakeAppl(sym_Tool_1, not_null(r_21)));
                t = u_6(not_null(a_22), not_null(f_22), t);
                {
                  ATerm u_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((s_21 != NULL) && (s_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          s_21 = ATgetArgument(t, 0);
                        if(((z_21 != NULL) && (z_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          z_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(u_2, t);
                  t = not_null(z_21);
                }
                ;
                LocalPopChoice(j_23);
              }
            else
              {
                t = i_23;
                t = n_22(not_null(u_21), t);
              }
          }
        }
      else
        {
          t = n_22(not_null(u_21), t);
        }
      t = if_verbose5_1_0(v_2, t);
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      {
        ATerm m_22 = NULL,m_7 = NULL,n_7 = NULL;
        m_22 = t;
        t = term_e_17;
        m_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_23), m_22), term_k_23);
        n_7 = t;
        t = SSL_printnl(m_7, n_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_23), m_22), term_k_23);
        t = if_verbose5_1_0(c_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm o_6 (ATerm y_41, ATerm z_41, ATerm t)
{
  t = SSL_strcat(y_41, z_41);
  return(t);
}
ATerm debug_1_0 (ATerm b_72 (ATerm), ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,u_22 = NULL;
  p_22 = t;
  t = b_72(t);
  q_22 = t;
  t = term_e_17;
  r_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_22), q_22);
  u_22 = t;
  t = SSL_printnl(r_22, u_22);
  t = p_22;
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_r_23;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_23 = NULL;
      f_23 = t;
      t = SSL_is_string(f_23);
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = s_23;
      {
        ATerm w_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(e_3, t);
            ;
            LocalPopChoice(x_23);
          }
        else
          {
            t = w_23;
            {
              ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
              l_23 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_23 = ATgetArgument(t, 0);
                  t = m_23;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_23 = ATgetArgument(t, 0);
                      t = m_23;
                      {
                        ATerm c_24 = t;
                        int d_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(d_24);
                          }
                        else
                          {
                            t = c_24;
                            t = debug_1_0(f_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_23 = NULL,u_23 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_23 = ATgetArgument(t, 0);
                          n_23 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_23;
                      t = eval_config_0_0(t);
                      t_23 = t;
                      t = n_23;
                      t = eval_config_0_0(t);
                      u_23 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_23, u_23);
                      t = o_6(t_23, u_23, t);
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
  ATerm y_23 = NULL,z_23 = NULL;
  y_23 = t;
  t = term_e_24;
  z_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_24, y_23);
  t = u_6(z_23, y_23, t);
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_24 = NULL,b_24 = NULL;
        t = eval_config_0_0(t);
        a_24 = t;
        t = term_e_24;
        b_24 = t;
        t = SSL_table_put(b_24, y_23, a_24);
        t = a_24;
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
      }
  }
  return(t);
}
ATerm p_6 (ATerm t_24, ATerm u_24, ATerm t)
{
  t = SSL_copy(t_24, u_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL;
  z_24 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_8 = NULL;
        t = z_24;
        t = k_0(t);
        l_8 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = l_8;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = l_8;
          }
        t = (ATerm) ATmakeAppl(sym__2, a_25, l_8);
        t = p_6(a_25, l_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_25);
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        {
          ATerm j_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_8 = NULL;
              t = z_24;
              t = k_0(t);
              y_8 = t;
              {
                ATerm l_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm z_8 = NULL;
                    z_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = z_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = z_8;
                          }
                        else
                          {
                            t = z_8;
                            if((a_25 != t))
                              {
                                _fail(t);
                              }
                            t = z_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_24;
                  }
                t = (ATerm) ATmakeAppl(sym__2, a_25, y_8);
                t = p_6(a_25, y_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, a_25);
              }
              ;
              LocalPopChoice(k_24);
            }
          else
            {
              t = j_24;
              t = z_24;
              t = k_0(t);
              if((a_25 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_25);
            }
        }
      }
  }
  return(t);
}
ATerm q_6 (ATerm m_45, ATerm n_45, ATerm t)
{
  ATerm j_25 = NULL,l_25 = NULL;
  l_25 = t;
  {
    ATerm m_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
        t = u_6(m_45, n_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_24 = ATgetFirst((ATermList) t);
            j_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_24);
        t = SSL_table_put(m_45, n_45, j_25);
        t = (ATerm) ATmakeAppl(sym__3, m_45, n_45, j_25);
      }
    else
      {
        t = m_24;
        t = SSL_table_remove(m_45, n_45);
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
      }
    t = l_25;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,q_25 = NULL,r_25 = NULL;
  if(((q_25 != NULL) && (q_25 != t)))
    _fail(t);
  else
    q_25 = t;
  t = m_86(t);
  if(((o_25 != NULL) && (o_25 != t)))
    _fail(t);
  else
    o_25 = t;
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_25 = NULL;
        t = term_g_18;
        u_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_25), term_g_18);
        t = u_6(not_null(o_25), u_25, t);
        ;
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((n_25 != NULL) && (n_25 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          n_25 = ATgetFirst((ATermList) t);
        if(((m_25 != NULL) && (m_25 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          m_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_18;
    if(((r_25 != NULL) && (r_25 != t)))
      _fail(t);
    else
      r_25 = t;
    t = SSL_table_put(not_null(o_25), not_null(r_25), not_null(m_25));
    t = not_null(n_25);
    {
      ATerm g_3 (ATerm t)
      {
        ATerm v_25 = NULL;
        v_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_25), v_25);
        t = q_6(not_null(o_25), v_25, t);
        return(t);
      }
      t = map_1_0(g_3, t);
      t = not_null(q_25);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t)
{
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_87(t);
      t = i_87(t);
      ;
      LocalPopChoice(w_24);
    }
  else
    {
      t = v_24;
      t = i_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,c_26 = NULL;
  y_25 = t;
  t = l_86(t);
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_25, term_g_18);
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_26 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_25 = ATgetArgument(t, 0);
            ATerm c_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_18;
        g_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_25, term_g_18);
        t = u_6(x_25, g_26, t);
        ;
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
        t = (ATerm) ATempty;
      }
    z_25 = t;
    t = term_g_18;
    a_26 = t;
    t = (ATerm) ATinsert(CheckATermList(z_25), (ATerm) ATempty);
    c_26 = t;
    t = SSL_table_put(x_25, a_26, c_26);
    t = y_25;
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm t_26 = NULL;
  t_26 = t;
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(t_26);
        ;
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
        t = t_26;
      }
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm j_26 = NULL;
  ATerm n_3 (ATerm t)
  {
    ATerm k_26 = NULL;
    k_26 = t;
    {
      ATerm f_25 = t;
      int g_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_26 = NULL,m_26 = NULL;
          t = term_o_19;
          l_26 = t;
          t = term_g_18;
          m_26 = t;
          t = term_h_25;
          t = u_6(l_26, m_26, t);
          ;
          LocalPopChoice(g_25);
        }
      else
        {
          t = f_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((j_26 != NULL) && (j_26 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            j_26 = ATgetFirst((ATermList) t);
          {
            ATerm i_25 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(j_26);
      t = map_1_0(o_3, t);
      t = k_26;
      t = end_scope_1_0(p_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(m_3, t);
  t = restore_always_2_0(q_89, n_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm k_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_25);
    }
  else
    {
      t = k_25;
      t = term_s_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_89 (ATerm), ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm t_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_26 = NULL;
        t = term_q_19;
        t = get_config_0_0(t);
        z_26 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, z_26);
        ;
        LocalPopChoice(w_25);
      }
    else
      {
        t = t_25;
        t = term_t_9;
      }
    t = r_89(t);
    t = copy_to_1_0(s_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(r_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_27 = NULL,f_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL;
  c_27 = t;
  t = term_k_19;
  t = whoami_0_0(t);
  f_27 = t;
  t = term_e_17;
  j_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_26), f_27), term_b_26);
  k_27 = t;
  t = SSL_printnl(j_27, k_27);
  t = term_r_9;
  i_27 = t;
  t = SSL_exit(i_27);
  t = c_27;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm o_27 = NULL;
  o_27 = t;
  if(match_string(t, "-k"))
    {
      t = o_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_27;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,t_27 = NULL;
  p_27 = t;
  t = SSL_string_to_int(p_27);
  q_27 = t;
  t = term_e_26;
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_26, q_27);
  t = x_6(t_27, q_27, t);
  t = p_27;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_3, v_3, w_3, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm b_28 = NULL;
  b_28 = t;
  if(match_string(t, "-S"))
    {
      t = b_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_28;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL;
  t = term_k_9;
  f_28 = t;
  t = term_h_26;
  g_28 = t;
  t = term_i_26;
  t = x_6(f_28, g_28, t);
  t = term_n_26;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_o_26;
  return(t);
}
ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,l_28 = NULL;
  h_28 = t;
  t = SSL_string_to_int(h_28);
  i_28 = t;
  t = term_k_9;
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_9, i_28);
  t = x_6(l_28, i_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_28);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  t = term_q_26;
  m_28 = t;
  t = term_k_19;
  n_28 = t;
  t = term_r_26;
  t = x_6(m_28, n_28, t);
  t = term_s_26;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_u_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_3, z_3, a_4, t);
      ;
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      {
        ATerm x_26 = t;
        int y_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_4, f_4, g_4, t);
            ;
            LocalPopChoice(y_26);
          }
        else
          {
            t = x_26;
            t = Option_3_0(h_4, j_4, m_4, t);
          }
      }
    }
  return(t);
}
ATerm x_6 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm o_28 = NULL;
  t = term_e_24;
  o_28 = t;
  t = SSL_table_put(o_28, h_47, i_47);
  t = (ATerm) ATmakeAppl(sym__3, term_e_24, h_47, i_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_28 = NULL,w_28 = NULL,x_28 = NULL;
      t = term_k_19;
      t = d_0(t);
      t_28 = t;
      t = term_a_27;
      w_28 = t;
      t = term_b_27;
      x_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_27, term_b_27, t_28);
      t = v_6(w_28, x_28, t_28, t);
      _fail(t);
    }
  else
    {
      ATerm a_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_28 = ATgetFirst((ATermList) t);
          s_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_28;
      t = a_0(t);
      t = term_k_19;
      t = c_0(t);
      a_29 = t;
      t = (ATerm) ATinsert(CheckATermList(s_28), a_29);
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm c_29 = NULL;
  c_29 = t;
  if(match_string(t, "-o"))
    {
      t = c_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_29;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL;
  d_29 = t;
  t = term_p_19;
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_19, d_29);
  t = x_6(e_29, d_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_29);
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
ATerm v_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
  {
    ATerm e_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_27 = ATgetArgument(t, 0);
            ATerm l_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
        t = u_6(h_45, i_45, t);
        ;
        LocalPopChoice(g_27);
      }
    else
      {
        t = e_27;
        t = (ATerm) ATempty;
      }
    h_29 = t;
    t = (ATerm) ATinsert(CheckATermList(h_29), g_45);
    i_29 = t;
    t = SSL_table_put(h_45, i_45, i_29);
    t = g_29;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm b_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
      t = term_k_19;
      t = j_0(t);
      h_30 = t;
      t = term_a_27;
      i_30 = t;
      t = term_b_27;
      j_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_27, term_b_27, h_30);
      t = v_6(i_30, j_30, h_30, t);
      _fail(t);
    }
  else
    {
      ATerm n_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_30 = ATgetFirst((ATermList) t);
          e_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_30 = ATgetFirst((ATermList) t);
          g_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_30;
      t = h_0(t);
      t = f_30;
      t = i_0(t);
      n_30 = t;
      t = (ATerm) ATinsert(CheckATermList(g_30), n_30);
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  if(match_string(t, "-i"))
    {
      t = p_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_30;
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  q_30 = t;
  t = term_q_19;
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_19, q_30);
  t = x_6(r_30, q_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_30);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_m_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_4, x_4, y_4, t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm t_30 = NULL;
  t_30 = t;
  if(match_string(t, "-a"))
    {
      t = t_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = t_30;
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
  u_30 = t;
  t = term_n_27;
  v_30 = t;
  t = term_k_19;
  w_30 = t;
  t = term_u_27;
  t = x_6(v_30, w_30, t);
  t = u_30;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_v_27;
  return(t);
}
ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--annotations", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL;
  x_30 = t;
  t = term_w_27;
  y_30 = t;
  t = term_k_19;
  z_30 = t;
  t = term_y_27;
  t = x_6(y_30, z_30, t);
  t = x_30;
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_a_28;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_5, b_5, c_5, t);
      ;
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
      t = Option_3_0(d_5, f_5, g_5, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_19;
  t = whoami_0_0(t);
  a_31 = t;
  t = term_e_17;
  c_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_28), a_31);
  d_31 = t;
  t = SSL_printnl(c_31, d_31);
  t = term_r_9;
  b_31 = t;
  t = SSL_exit(b_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_28;
  t = get_config_0_0(t);
  return(t);
}
ATerm r_6 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm k_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_43, d_43);
      ;
      LocalPopChoice(p_28);
    }
  else
    {
      t = k_28;
      t = SSL_addr(c_43, d_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  f_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_31;
      t = o_82(t);
    }
  else
    {
      ATerm k_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_31 = ATgetFirst((ATermList) t);
          h_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_31;
      t = foldr_2_0(o_82, p_82, t);
      k_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_31, k_31);
      t = p_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm s_9 = NULL,y_9 = NULL;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(s_9, y_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_31 = NULL,o_9 = NULL,p_9 = NULL;
  t = times_0_0(t);
  p_9 = t;
  t = SSL_explode_term(p_9);
  if(match_cons(t, sym__2))
    {
      ATerm q_28 = ATgetArgument(t, 0);
      o_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_9;
  t = foldr_2_0(i_5, m_5, t);
  n_31 = t;
  t = SSL_TicksToSeconds(n_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
  y_31 = t;
  if(match_cons(t, sym__2))
    {
      z_31 = ATgetArgument(t, 0);
      a_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_32;
        if((z_31 != t))
          {
            _fail(t);
          }
        t = y_31;
        ;
        LocalPopChoice(v_28);
      }
    else
      {
        t = u_28;
        t = (ATerm) ATmakeAppl(sym__2, z_31, a_32);
        {
          ATerm y_28 = t;
          int z_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_31, a_32);
              ;
              LocalPopChoice(z_28);
            }
          else
            {
              t = y_28;
              t = SSL_gtr(z_31, a_32);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_31, a_32);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  {
    ATerm b_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_32 = NULL;
        t = term_k_9;
        t = get_config_0_0(t);
        g_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_32, term_r_9);
        t = geq_0_0(t);
        t = e_32;
        t = t_87(t);
        ;
        LocalPopChoice(f_29);
      }
    else
      {
        t = b_29;
        t = e_32;
      }
  }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,l_32 = NULL,m_32 = NULL;
  t = run_time_0_0(t);
  i_32 = t;
  t = term_k_19;
  t = whoami_0_0(t);
  j_32 = t;
  t = term_e_17;
  l_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_29), i_32), term_a_10), j_32);
  m_32 = t;
  t = SSL_printnl(l_32, m_32);
  t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_29), i_32), term_a_10), j_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_26;
  n_32 = t;
  t = SSL_exit(n_32);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL;
  w_32 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_32;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_32 = ATgetArgument(t, 0);
          {
            ATerm w_10 = NULL,d_2 = NULL;
            t = SSLgetAnnotations(w_32);
            w_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_32);
            d_2 = t;
            t = SSLsetAnnotations(d_2, w_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_32;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm t)
{
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_29);
    }
  else
    {
      t = k_29;
      t = fetch_1_0(r_5, t);
    }
  t = s_91(t);
  return(t);
}
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm m_33 (ATerm t)
  {
    ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
    j_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_33;
      }
    else
      {
        ATerm j_11 = NULL,o_11 = NULL,p_11 = NULL,f_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_33 = ATgetFirst((ATermList) t);
            l_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_33);
        j_11 = t;
        t = k_33;
        t = w_75(t);
        o_11 = t;
        t = l_33;
        t = m_33(t);
        p_11 = t;
        t = (ATerm) ATinsert(CheckATermList(p_11), o_11);
        f_2 = t;
        t = SSLsetAnnotations(f_2, j_11);
      }
    return(t);
  }
  t = m_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_33 = ATgetFirst((ATermList) t);
      q_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_33 = NULL,v_33 = NULL;
        ATerm u_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_33)), not_null(v_33));
          return(t);
        }
        t = not_null(q_33);
        t = g_0(t);
        if(((u_33 != NULL) && (u_33 != t)))
          _fail(t);
        else
          u_33 = t;
        t = not_null(p_33);
        t = e_0(t);
        if(((v_33 != NULL) && (v_33 != t)))
          _fail(t);
        else
          v_33 = t;
        t = not_null(q_33);
        t = reverse_acc_2_0(e_0, u_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_19;
      t = g_0(t);
    }
  return(t);
}
ATerm u_6 (ATerm y_46, ATerm z_46, ATerm t)
{
  t = SSL_table_get(y_46, z_46);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,x_2 = NULL;
  b_34 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_34);
  z_33 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_34);
  x_2 = t;
  t = SSLsetAnnotations(x_2, z_33);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm d_34 = NULL;
  d_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_34), term_n_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
      t = fetch_1_0(v_5, t);
    }
  t = term_q_29;
  t = echo_0_0(t);
  t = term_a_27;
  x_33 = t;
  t = term_b_27;
  y_33 = t;
  t = term_r_29;
  t = u_6(x_33, y_33, t);
  t = reverse_acc_2_0(_id, w_5, t);
  t = map_1_0(y_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm g_35 (ATerm t)
  {
    ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
    d_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_35 = ATgetFirst((ATermList) t);
        f_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_12 = NULL,n_12 = NULL,i_3 = NULL;
          t = SSLgetAnnotations(d_35);
          d_12 = t;
          t = e_35;
          t = g_76(t);
          n_12 = t;
          t = (ATerm) ATinsert(CheckATermList(f_35), n_12);
          i_3 = t;
          t = SSLsetAnnotations(i_3, d_12);
          ;
          LocalPopChoice(t_29);
        }
      else
        {
          t = s_29;
          {
            ATerm b_13 = NULL,i_13 = NULL,k_3 = NULL;
            t = SSLgetAnnotations(d_35);
            b_13 = t;
            t = f_35;
            t = g_35(t);
            i_13 = t;
            t = (ATerm) ATinsert(CheckATermList(i_13), e_35);
            k_3 = t;
            t = SSLsetAnnotations(k_3, b_13);
          }
        }
    }
    return(t);
  }
  t = g_35(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
  k_35 = t;
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_29 = ATgetFirst((ATermList) t);
                ATerm x_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_35;
          }
        ;
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = (ATerm) ATinsert(ATempty, k_35);
      }
    l_35 = t;
    t = term_s_25;
    m_35 = t;
    t = SSL_printnl(m_35, l_35);
    t = k_35;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_28;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL;
  t = term_y_29;
  q_35 = t;
  t = term_k_19;
  r_35 = t;
  t = term_z_29;
  t = x_6(q_35, r_35, t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_a_30;
  return(t);
}
ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL;
  t = term_y_29;
  u_35 = t;
  t = term_k_19;
  v_35 = t;
  t = term_z_29;
  t = x_6(u_35, v_35, t);
  t = term_c_30;
  s_35 = t;
  t = term_k_19;
  t_35 = t;
  t = term_d_30;
  t = x_6(s_35, t_35, t);
  t = term_k_30;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_l_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_5, s_6, y_6, t);
      ;
      LocalPopChoice(o_30);
    }
  else
    {
      t = m_30;
      t = Option_3_0(z_6, a_7, e_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,q_3 = NULL;
  d_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_35 = ATgetFirst((ATermList) t);
      y_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_36);
  w_35 = t;
  t = x_35;
  t = o_63(t);
  b_36 = t;
  t = y_35;
  t = p_63(t);
  c_36 = t;
  t = (ATerm) ATinsert(CheckATermList(c_36), b_36);
  q_3 = t;
  t = SSLsetAnnotations(q_3, w_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,n_36 = NULL,o_36 = NULL,z_4 = NULL;
  if(((i_36 != NULL) && (i_36 != t)))
    _fail(t);
  else
    i_36 = t;
  {
    ATerm s_30 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_31;
        t = q_93(t);
        ;
        LocalPopChoice(e_31);
      }
    else
      {
        t = s_30;
      }
    t = not_null(i_36);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_36 != NULL) && (k_36 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_36 = ATgetFirst((ATermList) t);
        if(((l_36 != NULL) && (l_36 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          l_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(i_36));
    if(((j_36 != NULL) && (j_36 != t)))
      _fail(t);
    else
      j_36 = t;
    t = term_j_28;
    if(((o_36 != NULL) && (o_36 != t)))
      _fail(t);
    else
      o_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_28, not_null(k_36));
    t = x_6(not_null(o_36), not_null(k_36), t);
    t = not_null(l_36);
    {
      ATerm y_36 (ATerm t)
      {
        ATerm j_31 = t;
        int l_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_31 = t;
            int o_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_36 = NULL;
                r_36 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_36;
                ;
                LocalPopChoice(o_31);
              }
            else
              {
                t = m_31;
                t = q_93(t);
                t = Cons_2_0(_id, y_36, t);
              }
            ;
            LocalPopChoice(l_31);
          }
        else
          {
            t = j_31;
            {
              ATerm u_36 = NULL,v_36 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_36 = ATgetFirst((ATermList) t);
                  v_36 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_36), (ATerm) ATmakeAppl(sym_Undefined_1, u_36));
            }
          }
        return(t);
      }
      t = y_36(t);
      if(((n_36 != NULL) && (n_36 != t)))
        _fail(t);
      else
        n_36 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(n_36)), (ATerm) ATmakeAppl(sym_Program_1, not_null(k_36)));
      if(((z_4 != NULL) && (z_4 != t)))
        _fail(t);
      else
        z_4 = t;
      t = SSLsetAnnotations(not_null(z_4), not_null(j_36));
    }
  }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm k_37 = NULL;
  k_37 = t;
  if(match_string(t, "--help"))
    {
      t = k_37;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_37;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_37;
        }
    }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL;
  t = term_m_29;
  l_37 = t;
  t = term_k_19;
  m_37 = t;
  t = term_p_31;
  t = x_6(l_37, m_37, t);
  t = term_q_31;
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm o_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL;
  if(((f_37 != NULL) && (f_37 != t)))
    _fail(t);
  else
    f_37 = t;
  t = term_a_27;
  if(((h_37 != NULL) && (h_37 != t)))
    _fail(t);
  else
    h_37 = t;
  t = term_b_27;
  if(((i_37 != NULL) && (i_37 != t)))
    _fail(t);
  else
    i_37 = t;
  t = (ATerm) ATempty;
  if(((j_37 != NULL) && (j_37 != t)))
    _fail(t);
  else
    j_37 = t;
  t = SSL_table_put(not_null(h_37), not_null(i_37), not_null(j_37));
  t = not_null(f_37);
  {
    ATerm f_7 (ATerm t)
    {
      ATerm s_31 = t;
      int t_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_93(t);
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
                t = Option_3_0(g_7, h_7, i_7, t);
                ;
                LocalPopChoice(v_31);
              }
            else
              {
                t = u_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_7, t);
    {
      ATerm w_31 = t;
      int x_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_37 = NULL;
          t_37 = t;
          {
            ATerm b_32 = t;
            int c_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_13 = NULL;
                t = t_37;
                {
                  ATerm d_32 = t;
                  int f_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_m_29;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(f_32);
                    }
                  else
                    {
                      t = d_32;
                      t = fetch_1_0(o_7, t);
                    }
                  t = t_37;
                  t = default_system_usage_0_0(t);
                  t = term_h_26;
                  z_13 = t;
                  t = SSL_exit(z_13);
                }
                ;
                LocalPopChoice(c_32);
              }
            else
              {
                t = b_32;
                {
                  ATerm g_14 = NULL;
                  t = term_y_29;
                  t = get_config_0_0(t);
                  t = t_37;
                  t = default_system_about_0_0(t);
                  t = term_h_26;
                  g_14 = t;
                  t = SSL_exit(g_14);
                }
              }
          }
          ;
          LocalPopChoice(x_31);
        }
      else
        {
          t = w_31;
          {
            ATerm h_32 = t;
            int k_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
                ATerm r_7 (ATerm t)
                {
                  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,e_5 = NULL;
                  z_37 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      y_37 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_37);
                  x_37 = t;
                  t = y_37;
                  if(((d_37 != NULL) && (d_37 != t)))
                    _fail(t);
                  else
                    d_37 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, y_37);
                  e_5 = t;
                  t = SSLsetAnnotations(e_5, x_37);
                  return(t);
                }
                t = fetch_1_0(r_7, t);
                t = term_e_17;
                if(((v_37 != NULL) && (v_37 != t)))
                  _fail(t);
                else
                  v_37 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_37)), term_o_32);
                if(((w_37 != NULL) && (w_37 != t)))
                  _fail(t);
                else
                  w_37 = t;
                t = SSL_printnl(not_null(v_37), not_null(w_37));
                t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_37)), term_o_32));
                t = default_system_usage_0_0(t);
                t = term_r_9;
                if(((u_37 != NULL) && (u_37 != t)))
                  _fail(t);
                else
                  u_37 = t;
                t = SSL_exit(not_null(u_37));
                ;
                LocalPopChoice(k_32);
              }
            else
              {
                t = h_32;
              }
          }
        }
      if(((e_37 != NULL) && (e_37 != t)))
        _fail(t);
      else
        e_37 = t;
      t = term_a_27;
      if(((g_37 != NULL) && (g_37 != t)))
        _fail(t);
      else
        g_37 = t;
      t = SSL_table_destroy(not_null(g_37));
      t = not_null(e_37);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
  t = parse_options_1_0(u_91, t);
  e_38 = t;
  t = term_p_32;
  h_38 = t;
  t = SSL_table_create(h_38);
  t = term_p_32;
  f_38 = t;
  t = term_q_32;
  g_38 = t;
  t = SSL_table_put(f_38, g_38, e_38);
  t = e_38;
  t = w_91(t);
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_91, t);
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
              t = x_91(t);
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
ATerm t_7 (ATerm t)
{
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      ;
      LocalPopChoice(y_32);
    }
  else
    {
      t = x_32;
      {
        ATerm z_32 = t;
        int a_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(a_33);
          }
        else
          {
            t = z_32;
            {
              ATerm b_33 = t;
              int c_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(c_33);
                }
              else
                {
                  t = b_33;
                  {
                    ATerm d_33 = t;
                    int e_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(x_7, y_7, z_7, t);
                        ;
                        LocalPopChoice(e_33);
                      }
                    else
                      {
                        t = d_33;
                        {
                          ATerm f_33 = t;
                          int g_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(g_33);
                            }
                          else
                            {
                              t = f_33;
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
ATerm w_7 (ATerm t)
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
  ATerm t_38 = NULL,u_38 = NULL;
  t = term_h_33;
  t_38 = t;
  t = term_k_19;
  u_38 = t;
  t = term_i_33;
  t = x_6(t_38, u_38, t);
  t = term_n_33;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_o_33;
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_38 = NULL;
      w_38 = t;
      t = term_n_27;
      t = get_config_0_0(t);
      t = w_38;
      ;
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      {
        ATerm t_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_39 = NULL,e_39 = NULL;
            e_39 = t;
            if(match_cons(t, sym_FILE_1))
              {
                d_39 = ATgetArgument(t, 0);
                {
                  ATerm m_14 = NULL,h_5 = NULL;
                  t = SSLgetAnnotations(e_39);
                  m_14 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, d_39);
                  h_5 = t;
                  t = SSLsetAnnotations(h_5, m_14);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = e_39;
              }
            LocalPopChoice(w_33);
            t = xtc_transform_file_2_0(b_8, c_8, t);
          }
        else
          {
            t = t_33;
            t = xtc_transform_term_2_0(e_8, f_8, t);
          }
      }
    }
  {
    ATerm c_34 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_39 = NULL,l_39 = NULL;
        l_39 = t;
        if(match_cons(t, sym_FILE_1))
          {
            k_39 = ATgetArgument(t, 0);
            {
              ATerm y_14 = NULL,j_5 = NULL;
              t = SSLgetAnnotations(l_39);
              y_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_39);
              j_5 = t;
              t = SSLsetAnnotations(j_5, y_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_39;
          }
        LocalPopChoice(e_34);
        t = xtc_transform_file_2_0(g_8, k_8, t);
      }
    else
      {
        t = c_34;
        t = xtc_transform_term_2_0(m_8, n_8, t);
      }
    {
      ATerm f_34 = t;
      int g_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_39 = NULL;
          m_39 = t;
          t = term_w_27;
          t = get_config_0_0(t);
          t = m_39;
          ;
          LocalPopChoice(g_34);
        }
      else
        {
          t = f_34;
          {
            ATerm h_34 = t;
            int i_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_39 = NULL,u_39 = NULL;
                u_39 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    t_39 = ATgetArgument(t, 0);
                    {
                      ATerm f_15 = NULL,k_5 = NULL;
                      t = SSLgetAnnotations(u_39);
                      f_15 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, t_39);
                      k_5 = t;
                      t = SSLsetAnnotations(k_5, f_15);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = u_39;
                  }
                LocalPopChoice(i_34);
                t = xtc_transform_file_2_0(o_8, p_8, t);
              }
            else
              {
                t = h_34;
                t = xtc_transform_term_2_0(q_8, r_8, t);
              }
          }
        }
      {
        ATerm j_34 = t;
        int k_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_40 = NULL,b_40 = NULL;
            b_40 = t;
            if(match_cons(t, sym_FILE_1))
              {
                a_40 = ATgetArgument(t, 0);
                {
                  ATerm t_15 = NULL,l_5 = NULL;
                  t = SSLgetAnnotations(b_40);
                  t_15 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, a_40);
                  l_5 = t;
                  t = SSLsetAnnotations(l_5, t_15);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = b_40;
              }
            LocalPopChoice(k_34);
            t = xtc_transform_file_2_0(x_8, a_9, t);
          }
        else
          {
            t = j_34;
            t = xtc_transform_term_2_0(e_9, f_9, t);
          }
        {
          ATerm l_34 = t;
          int m_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_40 = NULL,o_40 = NULL;
              o_40 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  n_40 = ATgetArgument(t, 0);
                  {
                    ATerm j_16 = NULL,t_5 = NULL;
                    t = SSLgetAnnotations(o_40);
                    j_16 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, n_40);
                    t_5 = t;
                    t = SSLsetAnnotations(t_5, j_16);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = o_40;
                }
              LocalPopChoice(m_34);
              t = xtc_transform_file_2_0(g_9, pass_verbose_0_0, t);
            }
          else
            {
              t = l_34;
              t = xtc_transform_term_2_0(h_9, pass_verbose_0_0, t);
            }
        }
      }
    }
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_n_34;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_n_34;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_s_34;
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL;
  t = pass_verbose_0_0(t);
  c_40 = t;
  t = term_v_34;
  t = xtc_find_0_0(t);
  d_40 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(c_40), d_40), term_w_34);
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = term_s_34;
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL;
  t = pass_verbose_0_0(t);
  f_40 = t;
  t = term_v_34;
  t = xtc_find_0_0(t);
  g_40 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(f_40), g_40), term_w_34);
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm pp_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(t_7, default_usage_0_0, _id, w_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pp_stratego_0_0(t);
  return(t);
}
