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
ATerm term_j_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_x_33;
ATerm term_t_33;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_b_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_z_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_x_28;
ATerm term_g_28;
ATerm term_e_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_c_27;
ATerm term_w_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_p_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_w_25;
ATerm term_t_25;
ATerm term_n_25;
ATerm term_k_24;
ATerm term_a_24;
ATerm term_x_23;
ATerm term_v_23;
ATerm term_q_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_i_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_n_22;
ATerm term_j_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_z_21;
ATerm term_t_21;
ATerm term_o_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_i_21;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_l_18;
ATerm term_f_18;
ATerm term_u_17;
ATerm term_p_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_k_12;
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
ATerm term_v_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_k_9;
void init_constant_terms (void)
{
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_r_9, term_j_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_n_10, term_o_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_u_10, term_w_10);
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
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_l_11, term_m_11);
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
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_d_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_j_12, term_k_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_u_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_z_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_d_13, term_e_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_k_13, term_l_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_p_13, term_r_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_w_13, term_x_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_c_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_h_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_s_14, term_t_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_y_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_l_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_g_16, term_i_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_n_16, term_q_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_w_16, term_x_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_b_17, term_c_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_b_23);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_n_22);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym__2, term_w_19, term_l_18);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_d_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_26);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_f_19);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym__2, term_r_27, term_f_19);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__2, term_y_27, term_f_19);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_h_27);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__2, term_e_30, term_f_19);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_h_30, term_f_19);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym__2, term_e_29, term_f_19);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym__2, term_t_33, term_f_19);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm a_6 (ATerm c_31, ATerm d_31, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm b_6 (ATerm j_15, ATerm k_15, ATerm);
ATerm c_6 (ATerm x_59 (ATerm), ATerm i_160, ATerm r_15, ATerm);
ATerm f_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm);
ATerm d_6 (ATerm f_12, ATerm g_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm c_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm m_58 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm e_78 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm g_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm g_7 (ATerm s_6, ATerm);
ATerm conc_0_0 (ATerm);
ATerm f_6 (ATerm p_74 (ATerm), ATerm k_32, ATerm i_32, ATerm);
ATerm u_8 (ATerm c_8, ATerm);
ATerm v_8 (ATerm e_8, ATerm h_8, ATerm i_8, ATerm);
ATerm f_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_75 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_75 (ATerm), ATerm);
ATerm h_6 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm m_22, ATerm l_22, ATerm);
ATerm i_6 (ATerm u_67 (ATerm), ATerm i_22, ATerm h_22, ATerm);
ATerm l_1 (ATerm);
ATerm j_6 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm);
ATerm k_6 (ATerm a_76 (ATerm), ATerm i_34, ATerm h_34, ATerm);
ATerm n_6 (ATerm f_36, ATerm g_36, ATerm);
ATerm l_14 (ATerm e_14, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_6 (ATerm p_15, ATerm);
ATerm m_6 (ATerm n_36, ATerm o_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_17 (ATerm h_15, ATerm);
ATerm q_17 (ATerm y_15, ATerm a_16, ATerm b_16, ATerm);
ATerm r_17 (ATerm l_16, ATerm m_16, ATerm o_16, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm m_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm l_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm z_22 (ATerm h_21, ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm o_6 (ATerm s_29, ATerm t_29, ATerm);
ATerm debug_1_0 (ATerm v_59 (ATerm), ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm p_6 (ATerm l_12, ATerm m_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm q_6 (ATerm g_33, ATerm h_33, ATerm);
ATerm end_scope_1_0 (ATerm m_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_74 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_77 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm xtc_io_1_0 (ATerm r_77 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm d_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm p_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm x_6 (ATerm b_35, ATerm c_35, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_6 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm i_5 (ATerm);
ATerm pp_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm r_6 (ATerm w_30, ATerm x_30, ATerm);
ATerm foldr_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_75 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm t_5 (ATerm);
ATerm need_help_1_0 (ATerm s_79 (ATerm), ATerm);
ATerm map_1_0 (ATerm q_63 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm u_6 (ATerm s_34, ATerm t_34, ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm y_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm a_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm w_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_81 (ATerm), ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm m_7 (ATerm);
ATerm r_7 (ATerm);
ATerm parse_options_1_0 (ATerm p_81 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm d_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm i_9 (ATerm);
ATerm pp_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm a_6 (ATerm c_31, ATerm d_31, ATerm t)
{
  ATerm v_4 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(c_31, d_31);
      ;
      LocalPopChoice(j_9);
    }
  else
    {
      t = v_4;
      t = SSL_subtr(c_31, d_31);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL;
  t = term_k_9;
  {
    ATerm n_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(q_9);
      }
    else
      {
        t = n_9;
        t = term_r_9;
      }
    b_0 = t;
    t = term_r_9;
    e_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_r_9);
    t = a_6(b_0, e_0, t);
    c_0 = t;
    t = SSL_int_to_string(c_0);
    a_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_k_9);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm t_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_s_9;
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
      t = (ATerm) ATinsert(ATempty, term_t_9);
      v_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_0, (ATerm) ATinsert(ATempty, term_t_9));
      t = n_6(t_0, v_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm b_6 (ATerm j_15, ATerm k_15, ATerm t)
{
  ATerm w_0 = NULL;
  t = SSL_write_term_to_stream_baf(j_15, k_15);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_0);
  return(t);
}
ATerm c_6 (ATerm x_59 (ATerm), ATerm i_160, ATerm r_15, ATerm t)
{
  ATerm a_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_160, term_u_9);
  t = open_stream_0_0(t);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, r_15);
  t = x_59(t);
  t = fclose_0_0(t);
  t = r_15;
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_9 = ATgetArgument(t, 0);
      if(match_cons(v_9, sym_Stream_1))
        {
          d_1 = ATgetArgument(v_9, 0);
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
  t = c_6(f_0, c_1, b_1, t);
  t = SSL_close_file(c_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_78, o_78, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm d_6 (ATerm f_12, ATerm g_12, ATerm t)
{
  t = SSL_execvp(f_12, g_12);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL,j_2 = NULL,o_2 = NULL;
  g_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      h_2 = ATgetArgument(t, 0);
      {
        ATerm x_0 = NULL,y_0 = NULL;
        t = SSL_int_to_string(h_2);
        x_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), x_0), term_w_9);
        y_0 = t;
        t = SSL_concat_strings(y_0);
      }
    }
  else
    {
      ATerm w_1 = NULL,x_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          h_2 = ATgetArgument(t, 0);
          j_2 = ATgetArgument(t, 1);
          o_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(j_2);
      w_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_2), term_b_10), w_1), term_z_9), h_2);
      x_1 = t;
      t = SSL_concat_strings(x_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm c_64 (ATerm), ATerm t)
{
  ATerm z_2 = NULL;
  ATerm o_0 (ATerm t)
  {
    t = c_64(t);
    if(((z_2 != NULL) && (z_2 != t)))
      _fail(t);
    else
      z_2 = t;
    return(t);
  }
  t = fetch_1_0(o_0, t);
  t = not_null(z_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm a_3 = NULL;
  a_3 = t;
  {
    ATerm c_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm g_10 = ATgetArgument(t, 0);
              if((a_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm h_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_17), term_z_16), term_r_16), term_j_16), term_x_15), term_t_15), term_m_15), term_e_15), term_z_14), term_u_14), term_k_14), term_d_14), term_z_13), term_u_13), term_m_13), term_h_13), term_a_13), term_v_12), term_n_12), term_e_12), term_a_12), term_v_11), term_o_11), term_i_11), term_d_11), term_y_10), term_r_10), term_k_10);
        t = fetch_elem_1_0(q_0, t);
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = c_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, a_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm g_3 = NULL,s_3 = NULL;
  g_3 = t;
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_17 = ATgetArgument(t, 0);
            s_3 = ATgetArgument(t, 1);
            {
              ATerm k_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_17);
        {
          ATerm l_17 = t;
          int m_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 = NULL,n_2 = NULL,p_2 = NULL;
              t = s_3;
              {
                ATerm n_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_17;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                l_2 = t;
                t = term_p_17;
                n_2 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, l_2), term_u_17);
                p_2 = t;
                t = SSL_printnl(n_2, p_2);
                t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATinsert(ATinsert(ATempty, l_2), term_u_17));
              }
              ;
              LocalPopChoice(m_17);
            }
          else
            {
              t = l_17;
              t = g_3;
            }
        }
      }
    else
      {
        t = e_17;
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
ATerm fork_and_wait_1_0 (ATerm m_58 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  c_4 = t;
  t = fork_0_0(t);
  b_4 = t;
  {
    ATerm v_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = c_4;
        t = m_58(t);
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = v_17;
        t = SSL_waitpid(b_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_17 = ATgetArgument(t, 0);
            if(((ATgetType(z_17) != AT_INT) || (ATgetInt((ATermInt) z_17) != 0)))
              _fail(t);
            {
              ATerm a_18 = ATgetArgument(t, 1);
            }
            {
              ATerm e_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_78 (ATerm), ATerm t)
{
  ATerm f_4 = NULL,i_4 = NULL;
  i_4 = t;
  t = e_78(t);
  t = xtc_find_0_0(t);
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_4, i_4);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm k_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, f_4, i_4);
      t = d_6(f_4, i_4, t);
      t = term_f_18;
      k_4 = t;
      t = SSL_exit(k_4);
      return(t);
    }
    t = fork_and_wait_1_0(s_0, t);
    t = i_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm l_5 = NULL,o_5 = NULL,p_5 = NULL;
    p_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_5 = ATgetFirst((ATermList) t);
        o_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_2 = NULL,b_3 = NULL,k_1 = NULL;
          t = SSLgetAnnotations(p_5);
          u_2 = t;
          t = o_5;
          t = q_5(t);
          b_3 = t;
          t = (ATerm) ATinsert(CheckATermList(b_3), l_5);
          k_1 = t;
          t = SSLsetAnnotations(k_1, u_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_5;
        t = g_64(t);
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
      ATerm u_0 (ATerm t)
      {
        t = not_null(o_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_4 = ATgetFirst((ATermList) t);
          if(((o_4 != NULL) && (o_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_4;
      t = at_end_1_0(u_0, t);
    }
  return(t);
}
ATerm g_7 (ATerm s_6, ATerm t)
{
  ATerm t_6 = NULL;
  t = SSL_explode_term(s_6);
  if(match_cons(t, sym__2))
    {
      ATerm g_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_6 = NULL,b_7 = NULL,c_7 = NULL;
  c_7 = t;
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      b_7 = ATgetArgument(t, 1);
      {
        ATerm h_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = b_7;
              return(t);
            }
            t = y_6;
            t = at_end_1_0(z_0, t);
            ;
            LocalPopChoice(i_18);
          }
        else
          {
            t = h_18;
            t = g_7(c_7, t);
          }
      }
    }
  else
    {
      t = g_7(c_7, t);
    }
  return(t);
}
ATerm f_6 (ATerm p_74 (ATerm), ATerm k_32, ATerm i_32, ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,p_7 = NULL,q_7 = NULL,s_7 = NULL;
  p_7 = t;
  t = p_74(t);
  j_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_7, k_32, i_32);
  t = v_6(j_7, k_32, i_32, t);
  {
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_7 = NULL;
        t = term_l_18;
        u_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_7, term_l_18);
        t = u_6(j_7, u_7, t);
        ;
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_7 = ATgetFirst((ATermList) t);
        l_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_l_18;
    q_7 = t;
    t = (ATerm) ATinsert(CheckATermList(l_7), (ATerm) ATinsert(CheckATermList(k_7), k_32));
    s_7 = t;
    t = SSL_table_put(j_7, q_7, s_7);
    t = p_7;
  }
  return(t);
}
ATerm u_8 (ATerm c_8, ATerm t)
{
  t = c_8;
  {
    ATerm o_18 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_18 = ATgetArgument(t, 0);
            ATerm t_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_18;
      }
    t = term_u_18;
    t = debug_1_0(f_1, t);
    t = (ATerm) ATmakeAppl(sym__2, c_8, term_u_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm v_8 (ATerm e_8, ATerm h_8, ATerm i_8, ATerm t)
{
  t = SSL_open_file(e_8, h_8);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_w_18;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
  r_8 = t;
  if(match_cons(t, sym__2))
    {
      s_8 = ATgetArgument(t, 0);
      t_8 = ATgetArgument(t, 1);
      {
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_8(r_8, t);
            ;
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
            t = v_8(s_8, t_8, r_8, t);
          }
      }
    }
  else
    {
      t = u_8(r_8, t);
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
  ATerm z_8 = NULL,b_9 = NULL,c_9 = NULL;
  t = term_f_19;
  t = new_0_0(t);
  z_8 = t;
  t = term_g_19;
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_8, term_g_19);
  t = o_6(z_8, b_9, t);
  c_9 = t;
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_t_9);
        h_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_9, (ATerm) ATinsert(ATempty, term_t_9));
        t = n_6(c_9, h_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = c_9;
      }
  }
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL;
  t = new_file_0_0(t);
  l_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_9, term_u_9);
  t = open_file_0_0(t);
  t = term_f_19;
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_9, term_f_19);
  t = f_6(g_1, l_9, m_9, t);
  t = l_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm d_10 = NULL,f_10 = NULL;
  d_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_3 = NULL,n_3 = NULL;
      t = d_10;
      t = xtc_new_file_0_0(t);
      l_3 = t;
      t = r_0(t);
      n_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_3, (ATerm) ATinsert(ATinsert(ATempty, l_3), term_x_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(l_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_3);
    }
  else
    {
      ATerm a_4 = NULL,e_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_10;
      t = xtc_new_file_0_0(t);
      a_4 = t;
      t = r_0(t);
      e_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_4), term_x_19), f_10), term_y_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(a_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_4);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm m_10 = NULL;
  ATerm h_1 (ATerm t)
  {
    ATerm p_10 = NULL,q_10 = NULL;
    p_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_10), p_10);
    t = u_6(not_null(m_10), p_10, t);
    q_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_10, q_10);
    return(t);
  }
  if(((m_10 != NULL) && (m_10 != t)))
    _fail(t);
  else
    m_10 = t;
  t = SSL_table_keys(m_10);
  t = map_1_0(h_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_75 (ATerm), ATerm t)
{
  ATerm s_10 = NULL;
  s_10 = t;
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_10 = NULL;
        t = term_k_9;
        t = get_config_0_0(t);
        v_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_10, term_g_16);
        t = geq_0_0(t);
        t = s_10;
        t = x_75(t);
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        t = s_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm c_11 = NULL;
  c_11 = t;
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_11 = NULL;
        t = term_k_9;
        t = get_config_0_0(t);
        e_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_11, term_y_12);
        t = geq_0_0(t);
        t = c_11;
        t = w_75(t);
        ;
        LocalPopChoice(c_20);
      }
    else
      {
        t = b_20;
        t = c_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_75 (ATerm), ATerm t)
{
  ATerm n_11 = NULL;
  n_11 = t;
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_11 = NULL;
        t = term_k_9;
        t = get_config_0_0(t);
        u_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_11, term_a_11);
        t = geq_0_0(t);
        t = n_11;
        t = y_75(t);
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = n_11;
      }
  }
  return(t);
}
ATerm h_6 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm m_22, ATerm l_22, ATerm t)
{
  t = y_67(t);
  {
    ATerm i_1 (ATerm t)
    {
      ATerm w_11 = NULL;
      w_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, w_11);
      t = x_67(t);
      return(t);
    }
    t = fetch_1_0(i_1, t);
    t = l_22;
  }
  return(t);
}
ATerm i_6 (ATerm u_67 (ATerm), ATerm i_22, ATerm h_22, ATerm t)
{
  ATerm w_12 (ATerm t)
  {
    ATerm o_12 = NULL,p_12 = NULL,s_12 = NULL;
    o_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_12 = ATgetFirst((ATermList) t);
            s_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_20 = t;
          int g_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_12;
              {
                ATerm j_1 (ATerm t)
                {
                  t = h_22;
                  return(t);
                }
                t = h_6(u_67, j_1, p_12, s_12, t);
                t = w_12(t);
              }
              ;
              LocalPopChoice(g_20);
            }
          else
            {
              t = f_20;
              {
                ATerm r_4 = NULL,w_4 = NULL,m_1 = NULL;
                t = SSLgetAnnotations(o_12);
                r_4 = t;
                t = s_12;
                t = w_12(t);
                w_4 = t;
                t = (ATerm) ATinsert(CheckATermList(w_4), p_12);
                m_1 = t;
                t = SSLsetAnnotations(m_1, r_4);
              }
            }
        }
      }
    return(t);
  }
  t = i_22;
  t = w_12(t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm q_13 = NULL;
  if(match_cons(t, sym__2))
    {
      q_13 = ATgetArgument(t, 0);
      if((q_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm j_6 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm c_13 = NULL,f_13 = NULL,g_13 = NULL;
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_20 = ATgetArgument(t, 0);
            ATerm k_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
        t = u_6(y_33, z_33, t);
        ;
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        t = (ATerm) ATempty;
      }
    g_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_13, a_34);
    t = i_6(l_1, g_13, a_34, t);
    f_13 = t;
    t = SSL_table_put(y_33, z_33, f_13);
    t = c_13;
  }
  return(t);
}
ATerm k_6 (ATerm a_76 (ATerm), ATerm i_34, ATerm h_34, ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm s_13 = NULL,t_13 = NULL;
    if(match_cons(t, sym__2))
      {
        s_13 = ATgetArgument(t, 0);
        t_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_34, s_13, t_13);
    t = a_76(t);
    return(t);
  }
  t = h_34;
  t = map_1_0(n_1, t);
  return(t);
}
ATerm n_6 (ATerm f_36, ATerm g_36, ATerm t)
{
  t = SSL_access(f_36, g_36);
  return(t);
}
ATerm l_14 (ATerm e_14, ATerm t)
{
  t = SSL_fclose(e_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL;
  j_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_14 = ATgetArgument(t, 0);
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_14);
            ;
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            t = l_14(j_14, t);
          }
      }
    }
  else
    {
      t = l_14(j_14, t);
    }
  return(t);
}
ATerm l_6 (ATerm p_15, ATerm t)
{
  t = SSL_read_term_from_stream(p_15);
  return(t);
}
ATerm m_6 (ATerm n_36, ATerm o_36, ATerm t)
{
  ATerm m_14 = NULL;
  t = SSL_fopen(n_36, o_36);
  m_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_14 = NULL;
  t = SSL_stdin_stream();
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_14 = NULL;
  t = SSL_stdout_stream();
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_14 = NULL;
  t = SSL_stderr_stream();
  r_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_14);
  return(t);
}
ATerm o_17 (ATerm h_15, ATerm t)
{
  ATerm i_15 = NULL;
  t = SSL_explode_term(h_15);
  if(match_cons(t, sym__2))
    {
      ATerm q_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_20 = ATgetArgument(t, 1);
        if(((ATgetType(r_20) == AT_LIST) && !(ATisEmpty(r_20))))
          {
            i_15 = ATgetFirst((ATermList) r_20);
            {
              ATerm s_20 = (ATerm) ATgetNext((ATermList) r_20);
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
ATerm q_17 (ATerm y_15, ATerm a_16, ATerm b_16, ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,h_16 = NULL,o_1 = NULL;
  t = SSLgetAnnotations(b_16);
  e_16 = t;
  t = y_15;
  if(match_cons(t, sym_Path_1))
    {
      h_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_16, a_16);
  o_1 = t;
  t = SSLsetAnnotations(o_1, e_16);
  if(match_cons(t, sym__2))
    {
      c_16 = ATgetArgument(t, 0);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(c_16, d_16, t);
  return(t);
}
ATerm r_17 (ATerm l_16, ATerm m_16, ATerm o_16, ATerm t)
{
  ATerm p_16 = NULL,u_16 = NULL,v_16 = NULL,y_16 = NULL,q_1 = NULL;
  t = SSLgetAnnotations(o_16);
  v_16 = t;
  t = SSL_is_string(l_16);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_16, m_16);
  q_1 = t;
  t = SSLsetAnnotations(q_1, v_16);
  if(match_cons(t, sym__2))
    {
      p_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(p_16, u_16, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_20 = ATgetArgument(t, 0);
      ATerm a_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  h_17 = t;
  if(match_cons(t, sym__2))
    {
      i_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_17(h_17, t);
            ;
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            {
              ATerm f_21 = t;
              int g_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_17(i_17, j_17, h_17, t);
                  ;
                  LocalPopChoice(g_21);
                }
              else
                {
                  t = f_21;
                  t = r_17(i_17, j_17, h_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_17(h_17, t);
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_i_21;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,w_17 = NULL;
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_17 = NULL;
      x_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_17, term_l_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      t = debug_1_0(p_1, t);
      _fail(t);
    }
  t_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(w_17, t);
  s_17 = t;
  t = t_17;
  t = fclose_0_0(t);
  t = s_17;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm q_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_18 = NULL,c_18 = NULL;
      b_18 = t;
      t = (ATerm) ATinsert(ATempty, term_t_21);
      c_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_18, (ATerm) ATinsert(ATempty, term_t_21));
      t = n_6(b_18, c_18, t);
      LocalPopChoice(s_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = q_21;
      {
        ATerm v_21 = t;
        int x_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_21 = t;
            if((PushChoice() == 0))
              {
                ATerm d_18 = NULL,m_18 = NULL;
                d_18 = t;
                t = (ATerm) ATinsert(ATempty, term_t_9);
                m_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_18, (ATerm) ATinsert(ATempty, term_t_9));
                t = n_6(d_18, m_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_21;
              }
            t = debug_1_0(r_1, t);
            ;
            LocalPopChoice(x_21);
          }
        else
          {
            t = v_21;
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
  t = term_z_21;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_b_22;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
  i_19 = t;
  t = term_p_17;
  j_19 = t;
  t = (ATerm) ATinsert(ATempty, term_c_22);
  k_19 = t;
  t = SSL_printnl(j_19, k_19);
  t = i_19;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  if(match_cons(t, sym__3))
    {
      l_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
      n_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_6(l_19, m_19, n_19, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
  o_19 = t;
  t = term_p_17;
  p_19 = t;
  t = (ATerm) ATinsert(ATempty, term_d_22);
  q_19 = t;
  t = SSL_printnl(p_19, q_19);
  t = o_19;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
  t_19 = t;
  t = term_p_17;
  u_19 = t;
  t = (ATerm) ATinsert(ATempty, term_c_22);
  v_19 = t;
  t = SSL_printnl(u_19, v_19);
  t = t_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm n_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,v_18 = NULL,x_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
  n_18 = t;
  t = if_verbose5_1_0(t_1, t);
  {
    ATerm g_22 = t;
    if((PushChoice() == 0))
      {
        ATerm e_19 = NULL,h_19 = NULL;
        t = term_j_22;
        e_19 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, n_18);
        h_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_22, (ATerm) ATmakeAppl(sym_Imported_1, n_18));
        t = u_6(e_19, h_19, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_22;
      }
    q_18 = t;
    t = term_j_22;
    b_19 = t;
    t = term_n_22;
    c_19 = t;
    t = (ATerm) ATinsert(ATempty, n_18);
    d_19 = t;
    t = SSL_table_put(b_19, c_19, d_19);
    t = q_18;
    t = if_verbose4_1_0(y_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(a_2, t);
    p_18 = t;
    t = term_j_22;
    a_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_22, p_18);
    t = k_6(b_2, a_19, p_18, t);
    t = if_verbose6_1_0(d_2, t);
    t = term_j_22;
    r_18 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, n_18);
    v_18 = t;
    t = (ATerm) ATempty;
    x_18 = t;
    t = SSL_table_put(r_18, v_18, x_18);
    t = (ATerm) ATmakeAppl(sym__3, term_j_22, (ATerm)ATmakeAppl(sym_Imported_1, n_18), (ATerm) ATempty);
    t = if_verbose4_1_0(f_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm m_71 (ATerm), ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_20;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_20 = ATgetFirst((ATermList) t);
          n_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_5 = NULL,e_6 = NULL,g_6 = NULL,v_1 = NULL;
            t = SSLgetAnnotations(l_20);
            x_5 = t;
            t = m_20;
            t = m_71(t);
            e_6 = t;
            t = n_20;
            t = filter_1_0(m_71, t);
            g_6 = t;
            t = (ATerm) ATinsert(CheckATermList(g_6), e_6);
            v_1 = t;
            t = SSLsetAnnotations(v_1, x_5);
            ;
            LocalPopChoice(p_22);
          }
        else
          {
            t = o_22;
            t = n_20;
            t = filter_1_0(m_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_73 (ATerm), ATerm t)
{
  ATerm t_20 (ATerm t)
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_73(t);
        t = t_20(t);
        ;
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
      }
    return(t);
  }
  t = t_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_22);
    }
  else
    {
      t = s_22;
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_20 = NULL;
            t = term_x_22;
            u_20 = t;
            t = SSL_getenv(u_20);
            ;
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL;
  t = term_j_22;
  b_21 = t;
  t = term_b_23;
  c_21 = t;
  t = term_c_23;
  t = u_6(b_21, c_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm f_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_23;
      }
  }
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = debug_1_0(r_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_i_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_20 = NULL;
  t = if_verbose5_1_0(i_2, t);
  v_20 = t;
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_20 = NULL,x_20 = NULL;
        t = term_j_22;
        w_20 = t;
        t = term_n_22;
        x_20 = t;
        t = term_l_23;
        t = u_6(w_20, x_20, t);
        ;
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        {
          ATerm z_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          z_20 = t;
          t = repeat_1_0(m_2, t);
          t = z_20;
        }
      }
    t = v_20;
    t = if_verbose5_1_0(q_2, t);
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
  t = term_m_23;
  return(t);
}
ATerm z_22 (ATerm h_21, ATerm t)
{
  ATerm n_21 = NULL,p_21 = NULL,r_21 = NULL;
  t = term_j_22;
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, h_21);
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_22, (ATerm) ATmakeAppl(sym_Tool_1, h_21));
  t = u_6(p_21, r_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_23 = ATgetFirst((ATermList) t);
      if(match_cons(n_23, sym__2))
        {
          ATerm p_23 = ATgetArgument(n_23, 0);
          n_21 = ATgetArgument(n_23, 1);
        }
      else
        _fail(t);
      {
        ATerm o_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_21;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_j_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(d_3, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_21 = NULL,w_21 = NULL,a_22 = NULL;
      t = if_verbose5_1_0(s_2, t);
      t = xtc_load_0_0(t);
      a_22 = t;
      if(match_cons(t, sym__2))
        {
          u_21 = ATgetArgument(t, 0);
          w_21 = ATgetArgument(t, 1);
          {
            ATerm t_23 = t;
            int u_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_22 = NULL,f_22 = NULL,k_22 = NULL;
                t = term_j_22;
                f_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, u_21);
                k_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_j_22, (ATerm) ATmakeAppl(sym_Tool_1, u_21));
                t = u_6(f_22, k_22, t);
                {
                  ATerm v_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((w_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((e_22 != NULL) && (e_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(v_2, t);
                  t = not_null(e_22);
                }
                ;
                LocalPopChoice(u_23);
              }
            else
              {
                t = t_23;
                t = z_22(a_22, t);
              }
          }
        }
      else
        {
          t = z_22(a_22, t);
        }
      t = if_verbose5_1_0(x_2, t);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      {
        ATerm y_22 = NULL,n_7 = NULL,o_7 = NULL;
        y_22 = t;
        t = term_p_17;
        n_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_23), y_22), term_v_23);
        o_7 = t;
        t = SSL_printnl(n_7, o_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_23), y_22), term_v_23);
        t = if_verbose5_1_0(c_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm o_6 (ATerm s_29, ATerm t_29, ATerm t)
{
  t = SSL_strcat(s_29, t_29);
  return(t);
}
ATerm debug_1_0 (ATerm v_59 (ATerm), ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,g_23 = NULL,h_23 = NULL;
  d_23 = t;
  t = v_59(t);
  e_23 = t;
  t = term_p_17;
  g_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_23), e_23);
  h_23 = t;
  t = SSL_printnl(g_23, h_23);
  t = d_23;
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_a_24;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_23 = NULL;
      w_23 = t;
      t = SSL_is_string(w_23);
      ;
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
      {
        ATerm d_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(e_3, t);
            ;
            LocalPopChoice(g_24);
          }
        else
          {
            t = d_24;
            {
              ATerm e_24 = NULL,f_24 = NULL,i_24 = NULL;
              e_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_24 = ATgetArgument(t, 0);
                  t = f_24;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_24 = ATgetArgument(t, 0);
                      t = f_24;
                      {
                        ATerm h_24 = t;
                        int j_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_24);
                          }
                        else
                          {
                            t = h_24;
                            t = debug_1_0(f_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_24 = NULL,p_24 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_24 = ATgetArgument(t, 0);
                          i_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_24;
                      t = eval_config_0_0(t);
                      o_24 = t;
                      t = i_24;
                      t = eval_config_0_0(t);
                      p_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_24, p_24);
                      t = o_6(o_24, p_24, t);
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
  ATerm u_24 = NULL,v_24 = NULL;
  u_24 = t;
  t = term_k_24;
  v_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_24, u_24);
  t = u_6(v_24, u_24, t);
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_24 = NULL,x_24 = NULL;
        t = eval_config_0_0(t);
        w_24 = t;
        t = term_k_24;
        x_24 = t;
        t = SSL_table_put(x_24, u_24, w_24);
        t = w_24;
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
      }
  }
  return(t);
}
ATerm p_6 (ATerm l_12, ATerm m_12, ATerm t)
{
  t = SSL_copy(l_12, m_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL;
  r_25 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_8 = NULL;
        t = r_25;
        t = n_0(t);
        m_8 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = m_8;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = m_8;
          }
        t = (ATerm) ATmakeAppl(sym__2, s_25, m_8);
        t = p_6(s_25, m_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, s_25);
        ;
        LocalPopChoice(q_24);
      }
    else
      {
        t = n_24;
        {
          ATerm r_24 = t;
          int s_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_8 = NULL;
              t = r_25;
              t = n_0(t);
              y_8 = t;
              {
                ATerm t_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm a_9 = NULL;
                    a_9 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = a_9;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = a_9;
                          }
                        else
                          {
                            t = a_9;
                            if((s_25 != t))
                              {
                                _fail(t);
                              }
                            t = a_9;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_24;
                  }
                t = (ATerm) ATmakeAppl(sym__2, s_25, y_8);
                t = p_6(s_25, y_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, s_25);
              }
              ;
              LocalPopChoice(s_24);
            }
          else
            {
              t = r_24;
              t = r_25;
              t = n_0(t);
              if((s_25 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_25);
            }
        }
      }
  }
  return(t);
}
ATerm q_6 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  y_25 = t;
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
        t = u_6(g_33, h_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_25 = ATgetFirst((ATermList) t);
            x_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_24);
        t = SSL_table_put(g_33, h_33, x_25);
        t = (ATerm) ATmakeAppl(sym__3, g_33, h_33, x_25);
      }
    else
      {
        t = y_24;
        t = SSL_table_remove(g_33, h_33);
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
      }
    t = y_25;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_74 (ATerm), ATerm t)
{
  ATerm z_25 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
  i_26 = t;
  t = m_74(t);
  h_26 = t;
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_26 = NULL;
        t = term_l_18;
        l_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_26, term_l_18);
        t = u_6(h_26, l_26, t);
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_26 = ATgetFirst((ATermList) t);
        z_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_l_18;
    j_26 = t;
    t = SSL_table_put(h_26, j_26, z_25);
    t = g_26;
    {
      ATerm j_3 (ATerm t)
      {
        ATerm m_26 = NULL;
        m_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_26, m_26);
        t = q_6(h_26, m_26, t);
        return(t);
      }
      t = map_1_0(j_3, t);
      t = i_26;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_75(t);
      t = i_75(t);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      t = i_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_74 (ATerm), ATerm t)
{
  ATerm o_26 = NULL,q_26 = NULL,r_26 = NULL,u_26 = NULL,v_26 = NULL;
  q_26 = t;
  t = l_74(t);
  o_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_26, term_l_18);
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_26 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_25 = ATgetArgument(t, 0);
            ATerm i_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_18;
        z_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_26, term_l_18);
        t = u_6(o_26, z_26, t);
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        t = (ATerm) ATempty;
      }
    r_26 = t;
    t = term_l_18;
    u_26 = t;
    t = (ATerm) ATinsert(CheckATermList(r_26), (ATerm) ATempty);
    v_26 = t;
    t = SSL_table_put(o_26, u_26, v_26);
    t = q_26;
  }
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm j_27 = NULL;
  j_27 = t;
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(j_27);
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = j_27;
      }
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm d_27 = NULL;
  ATerm m_3 (ATerm t)
  {
    ATerm e_27 = NULL;
    e_27 = t;
    {
      ATerm l_25 = t;
      int m_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_27 = NULL,g_27 = NULL;
          t = term_w_19;
          f_27 = t;
          t = term_l_18;
          g_27 = t;
          t = term_n_25;
          t = u_6(f_27, g_27, t);
          ;
          LocalPopChoice(m_25);
        }
      else
        {
          t = l_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((d_27 != NULL) && (d_27 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            d_27 = ATgetFirst((ATermList) t);
          {
            ATerm o_25 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = d_27;
      t = map_1_0(o_3, t);
      t = e_27;
      t = end_scope_1_0(q_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(k_3, t);
  t = restore_always_2_0(q_77, m_3, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      t = term_t_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_77 (ATerm), ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_27 = NULL;
        t = term_y_19;
        t = get_config_0_0(t);
        m_27 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_27);
        ;
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        t = term_s_9;
      }
    t = r_77(t);
    t = copy_to_1_0(t_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(r_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
  p_27 = t;
  t = term_f_19;
  t = whoami_0_0(t);
  s_27 = t;
  t = term_p_17;
  u_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_26), s_27), term_w_25);
  v_27 = t;
  t = SSL_printnl(u_27, v_27);
  t = term_r_9;
  t_27 = t;
  t = SSL_exit(t_27);
  t = p_27;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm c_28 = NULL;
  c_28 = t;
  if(match_string(t, "-k"))
    {
      t = c_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_28;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm f_28 = NULL,i_28 = NULL,j_28 = NULL;
  f_28 = t;
  t = SSL_string_to_int(f_28);
  i_28 = t;
  t = term_b_26;
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_26, i_28);
  t = x_6(j_28, i_28, t);
  t = f_28;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_3, v_3, w_3, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm l_28 = NULL;
  l_28 = t;
  if(match_string(t, "-S"))
    {
      t = l_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_28;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  t = term_k_9;
  o_28 = t;
  t = term_d_26;
  p_28 = t;
  t = term_e_26;
  t = x_6(o_28, p_28, t);
  t = term_f_26;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm d_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm q_28 = NULL,u_28 = NULL,y_28 = NULL;
  q_28 = t;
  t = SSL_string_to_int(q_28);
  u_28 = t;
  t = term_k_9;
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_9, u_28);
  t = x_6(y_28, u_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_28);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_n_26;
  return(t);
}
ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL;
  t = term_p_26;
  z_28 = t;
  t = term_f_19;
  a_29 = t;
  t = term_s_26;
  t = x_6(z_28, a_29, t);
  t = term_t_26;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_w_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_3, y_3, z_3, t);
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      {
        ATerm a_27 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_4, g_4, h_4, t);
            ;
            LocalPopChoice(b_27);
          }
        else
          {
            t = a_27;
            t = Option_3_0(j_4, l_4, p_4, t);
          }
      }
    }
  return(t);
}
ATerm x_6 (ATerm b_35, ATerm c_35, ATerm t)
{
  ATerm b_29 = NULL;
  t = term_k_24;
  b_29 = t;
  t = SSL_table_put(b_29, b_35, c_35);
  t = (ATerm) ATmakeAppl(sym__3, term_k_24, b_35, c_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
      t = term_f_19;
      t = h_0(t);
      i_29 = t;
      t = term_c_27;
      j_29 = t;
      t = term_h_27;
      k_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_27, term_h_27, i_29);
      t = v_6(j_29, k_29, i_29, t);
      _fail(t);
    }
  else
    {
      ATerm p_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_29 = ATgetFirst((ATermList) t);
          h_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_29;
      t = d_0(t);
      t = term_f_19;
      t = g_0(t);
      p_29 = t;
      t = (ATerm) ATinsert(CheckATermList(h_29), p_29);
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm r_29 = NULL;
  r_29 = t;
  if(match_string(t, "-o"))
    {
      t = r_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_29;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL;
  u_29 = t;
  t = term_x_19;
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_19, u_29);
  t = x_6(v_29, u_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_29);
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_4, s_4, t_4, t);
  return(t);
}
ATerm v_6 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_27 = ATgetArgument(t, 0);
            ATerm o_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
        t = u_6(b_33, c_33, t);
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        t = (ATerm) ATempty;
      }
    y_29 = t;
    t = (ATerm) ATinsert(CheckATermList(y_29), a_33);
    z_29 = t;
    t = SSL_table_put(b_33, c_33, z_29);
    t = x_29;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm l_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
      t = term_f_19;
      t = m_0(t);
      q_30 = t;
      t = term_c_27;
      r_30 = t;
      t = term_h_27;
      s_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_27, term_h_27, q_30);
      t = v_6(r_30, s_30, q_30, t);
      _fail(t);
    }
  else
    {
      ATerm y_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_30 = ATgetFirst((ATermList) t);
          n_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_30 = ATgetFirst((ATermList) t);
          p_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_30;
      t = k_0(t);
      t = o_30;
      t = l_0(t);
      y_30 = t;
      t = (ATerm) ATinsert(CheckATermList(p_30), y_30);
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm a_31 = NULL;
  a_31 = t;
  if(match_string(t, "-i"))
    {
      t = a_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_31;
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm b_31 = NULL,e_31 = NULL;
  b_31 = t;
  t = term_y_19;
  e_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_19, b_31);
  t = x_6(e_31, b_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_31);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_q_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, x_4, z_4, t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm g_31 = NULL;
  g_31 = t;
  if(match_string(t, "-a"))
    {
      t = g_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = g_31;
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
  h_31 = t;
  t = term_r_27;
  i_31 = t;
  t = term_f_19;
  j_31 = t;
  t = term_w_27;
  t = x_6(i_31, j_31, t);
  t = h_31;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--annotations", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
  k_31 = t;
  t = term_y_27;
  l_31 = t;
  t = term_f_19;
  m_31 = t;
  t = term_z_27;
  t = x_6(l_31, m_31, t);
  t = k_31;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_a_28;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm b_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_5, b_5, c_5, t);
      ;
      LocalPopChoice(d_28);
    }
  else
    {
      t = b_28;
      t = Option_3_0(e_5, f_5, i_5, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_19;
  t = whoami_0_0(t);
  n_31 = t;
  t = term_p_17;
  p_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_28), n_31);
  q_31 = t;
  t = SSL_printnl(p_31, q_31);
  t = term_r_9;
  o_31 = t;
  t = SSL_exit(o_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_28;
  t = get_config_0_0(t);
  return(t);
}
ATerm r_6 (ATerm w_30, ATerm x_30, ATerm t)
{
  ATerm h_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_30, x_30);
      ;
      LocalPopChoice(k_28);
    }
  else
    {
      t = h_28;
      t = SSL_addr(w_30, x_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
  s_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_31;
      t = i_70(t);
    }
  else
    {
      ATerm x_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_31 = ATgetFirst((ATermList) t);
          u_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_31;
      t = foldr_2_0(i_70, j_70, t);
      x_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_31, x_31);
      t = j_70(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm y_9 = NULL,a_10 = NULL;
  if(match_cons(t, sym__2))
    {
      y_9 = ATgetArgument(t, 0);
      a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(y_9, a_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_32 = NULL,o_9 = NULL,p_9 = NULL;
  t = times_0_0(t);
  p_9 = t;
  t = SSL_explode_term(p_9);
  if(match_cons(t, sym__2))
    {
      ATerm m_28 = ATgetArgument(t, 0);
      o_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_9;
  t = foldr_2_0(m_5, n_5, t);
  a_32 = t;
  t = SSL_TicksToSeconds(a_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_33 = NULL,i_33 = NULL,j_33 = NULL;
  e_33 = t;
  if(match_cons(t, sym__2))
    {
      i_33 = ATgetArgument(t, 0);
      j_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_33;
        if((i_33 != t))
          {
            _fail(t);
          }
        t = e_33;
        ;
        LocalPopChoice(r_28);
      }
    else
      {
        t = n_28;
        t = (ATerm) ATmakeAppl(sym__2, i_33, j_33);
        {
          ATerm s_28 = t;
          int t_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_33, j_33);
              ;
              LocalPopChoice(t_28);
            }
          else
            {
              t = s_28;
              t = SSL_gtr(i_33, j_33);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_33, j_33);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_75 (ATerm), ATerm t)
{
  ATerm n_33 = NULL;
  n_33 = t;
  {
    ATerm v_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_33 = NULL;
        t = term_k_9;
        t = get_config_0_0(t);
        p_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_33, term_r_9);
        t = geq_0_0(t);
        t = n_33;
        t = t_75(t);
        ;
        LocalPopChoice(w_28);
      }
    else
      {
        t = v_28;
        t = n_33;
      }
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL,u_33 = NULL,v_33 = NULL;
  t = run_time_0_0(t);
  r_33 = t;
  t = term_f_19;
  t = whoami_0_0(t);
  s_33 = t;
  t = term_p_17;
  u_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_28), r_33), term_z_9), s_33);
  v_33 = t;
  t = SSL_printnl(u_33, v_33);
  t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_28), r_33), term_z_9), s_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_26;
  w_33 = t;
  t = SSL_exit(w_33);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL;
  o_34 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_34;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_34 = ATgetArgument(t, 0);
          {
            ATerm x_10 = NULL,c_2 = NULL;
            t = SSLgetAnnotations(o_34);
            x_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_34);
            c_2 = t;
            t = SSLsetAnnotations(c_2, x_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_34;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_79 (ATerm), ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      t = fetch_1_0(t_5, t);
    }
  t = s_79(t);
  return(t);
}
ATerm map_1_0 (ATerm q_63 (ATerm), ATerm t)
{
  ATerm i_35 (ATerm t)
  {
    ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
    f_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_35;
      }
    else
      {
        ATerm k_11 = NULL,p_11 = NULL,q_11 = NULL,e_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_35 = ATgetFirst((ATermList) t);
            h_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_35);
        k_11 = t;
        t = g_35;
        t = q_63(t);
        p_11 = t;
        t = h_35;
        t = i_35(t);
        q_11 = t;
        t = (ATerm) ATinsert(CheckATermList(q_11), p_11);
        e_2 = t;
        t = SSLsetAnnotations(e_2, k_11);
      }
    return(t);
  }
  t = i_35(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_35 = ATgetFirst((ATermList) t);
      r_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_35 = NULL,z_35 = NULL;
        ATerm u_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_35)), not_null(z_35));
          return(t);
        }
        t = r_35;
        t = j_0(t);
        if(((y_35 != NULL) && (y_35 != t)))
          _fail(t);
        else
          y_35 = t;
        t = q_35;
        t = i_0(t);
        if(((z_35 != NULL) && (z_35 != t)))
          _fail(t);
        else
          z_35 = t;
        t = r_35;
        t = reverse_acc_2_0(i_0, u_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_19;
      t = j_0(t);
    }
  return(t);
}
ATerm u_6 (ATerm s_34, ATerm t_34, ATerm t)
{
  t = SSL_table_get(s_34, t_34);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,h_36 = NULL,w_2 = NULL;
  h_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_36);
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_36);
  w_2 = t;
  t = SSLsetAnnotations(w_2, d_36);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm j_36 = NULL;
  j_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_36), term_f_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL;
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_29);
    }
  else
    {
      t = l_29;
      t = fetch_1_0(v_5, t);
    }
  t = term_n_29;
  t = echo_0_0(t);
  t = term_c_27;
  b_36 = t;
  t = term_h_27;
  c_36 = t;
  t = term_o_29;
  t = u_6(b_36, c_36, t);
  t = reverse_acc_2_0(_id, w_5, t);
  t = map_1_0(y_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_64 (ATerm), ATerm t)
{
  ATerm t_37 (ATerm t)
  {
    ATerm p_37 = NULL,q_37 = NULL,s_37 = NULL;
    p_37 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_37 = ATgetFirst((ATermList) t);
        s_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_29 = t;
      int w_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_12 = NULL,t_12 = NULL,h_3 = NULL;
          t = SSLgetAnnotations(p_37);
          h_12 = t;
          t = q_37;
          t = a_64(t);
          t_12 = t;
          t = (ATerm) ATinsert(CheckATermList(s_37), t_12);
          h_3 = t;
          t = SSLsetAnnotations(h_3, h_12);
          ;
          LocalPopChoice(w_29);
        }
      else
        {
          t = q_29;
          {
            ATerm i_13 = NULL,o_13 = NULL,i_3 = NULL;
            t = SSLgetAnnotations(p_37);
            i_13 = t;
            t = s_37;
            t = t_37(t);
            o_13 = t;
            t = (ATerm) ATinsert(CheckATermList(o_13), q_37);
            i_3 = t;
            t = SSLsetAnnotations(i_3, i_13);
          }
        }
    }
    return(t);
  }
  t = t_37(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_30 = ATgetFirst((ATermList) t);
                ATerm d_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_37;
          }
        ;
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        t = (ATerm) ATinsert(ATempty, z_37);
      }
    a_38 = t;
    t = term_t_25;
    b_38 = t;
    t = SSL_printnl(b_38, a_38);
    t = z_37;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_28;
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
ATerm w_6 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL;
  t = term_e_30;
  i_38 = t;
  t = term_f_19;
  j_38 = t;
  t = term_f_30;
  t = x_6(i_38, j_38, t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm a_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
  t = term_e_30;
  m_38 = t;
  t = term_f_19;
  n_38 = t;
  t = term_f_30;
  t = x_6(m_38, n_38, t);
  t = term_h_30;
  k_38 = t;
  t = term_f_19;
  l_38 = t;
  t = term_i_30;
  t = x_6(k_38, l_38, t);
  t = term_j_30;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_5, w_6, z_6, t);
      ;
      LocalPopChoice(t_30);
    }
  else
    {
      t = m_30;
      t = Option_3_0(a_7, d_7, e_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,p_3 = NULL;
  t_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_38 = ATgetFirst((ATermList) t);
      q_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_38);
  o_38 = t;
  t = p_38;
  t = i_51(t);
  r_38 = t;
  t = q_38;
  t = j_51(t);
  s_38 = t;
  t = (ATerm) ATinsert(CheckATermList(s_38), r_38);
  p_3 = t;
  t = SSLsetAnnotations(p_3, o_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_81 (ATerm), ATerm t)
{
  ATerm y_38 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,i_39 = NULL,j_39 = NULL,y_4 = NULL;
  y_38 = t;
  {
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_30;
        t = q_81(t);
        ;
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
      }
    t = y_38;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_39 = ATgetFirst((ATermList) t);
        g_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_38);
    e_39 = t;
    t = term_g_28;
    j_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_28, f_39);
    t = x_6(j_39, f_39, t);
    t = g_39;
    {
      ATerm u_39 (ATerm t)
      {
        ATerm f_31 = t;
        int r_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_31 = t;
            int w_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_39 = NULL;
                m_39 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_39;
                ;
                LocalPopChoice(w_31);
              }
            else
              {
                t = v_31;
                t = q_81(t);
                t = Cons_2_0(_id, u_39, t);
              }
            ;
            LocalPopChoice(r_31);
          }
        else
          {
            t = f_31;
            {
              ATerm q_39 = NULL,r_39 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_39 = ATgetFirst((ATermList) t);
                  r_39 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_39), (ATerm) ATmakeAppl(sym_Undefined_1, q_39));
            }
          }
        return(t);
      }
      t = u_39(t);
      i_39 = t;
      t = (ATerm) ATinsert(CheckATermList(i_39), (ATerm) ATmakeAppl(sym_Program_1, f_39));
      y_4 = t;
      t = SSLsetAnnotations(y_4, e_39);
    }
  }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm g_40 = NULL;
  g_40 = t;
  if(match_string(t, "--help"))
    {
      t = g_40;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_40;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_40;
        }
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL;
  t = term_e_29;
  h_40 = t;
  t = term_f_19;
  i_40 = t;
  t = term_y_31;
  t = x_6(h_40, i_40, t);
  t = term_z_31;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm r_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_81 (ATerm), ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL;
  b_40 = t;
  t = term_c_27;
  d_40 = t;
  t = term_h_27;
  e_40 = t;
  t = (ATerm) ATempty;
  f_40 = t;
  t = SSL_table_put(d_40, e_40, f_40);
  t = b_40;
  {
    ATerm f_7 (ATerm t)
    {
      ATerm c_32 = t;
      int d_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_81(t);
          ;
          LocalPopChoice(d_32);
        }
      else
        {
          t = c_32;
          {
            ATerm e_32 = t;
            int f_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_7, i_7, m_7, t);
                ;
                LocalPopChoice(f_32);
              }
            else
              {
                t = e_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_7, t);
    {
      ATerm g_32 = t;
      int h_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_40 = NULL;
          p_40 = t;
          {
            ATerm j_32 = t;
            int l_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_13 = NULL;
                t = p_40;
                {
                  ATerm m_32 = t;
                  int n_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_e_29;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(n_32);
                    }
                  else
                    {
                      t = m_32;
                      t = fetch_1_0(r_7, t);
                    }
                  t = p_40;
                  t = default_system_usage_0_0(t);
                  t = term_d_26;
                  y_13 = t;
                  t = SSL_exit(y_13);
                }
                ;
                LocalPopChoice(l_32);
              }
            else
              {
                t = j_32;
                {
                  ATerm o_14 = NULL;
                  t = term_e_30;
                  t = get_config_0_0(t);
                  t = p_40;
                  t = default_system_about_0_0(t);
                  t = term_d_26;
                  o_14 = t;
                  t = SSL_exit(o_14);
                }
              }
          }
          ;
          LocalPopChoice(h_32);
        }
      else
        {
          t = g_32;
          {
            ATerm o_32 = t;
            int p_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
                ATerm t_7 (ATerm t)
                {
                  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,d_5 = NULL;
                  v_40 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      u_40 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_40);
                  t_40 = t;
                  t = u_40;
                  if(((z_39 != NULL) && (z_39 != t)))
                    _fail(t);
                  else
                    z_39 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_40);
                  d_5 = t;
                  t = SSLsetAnnotations(d_5, t_40);
                  return(t);
                }
                t = fetch_1_0(t_7, t);
                t = term_p_17;
                r_40 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_39)), term_q_32);
                s_40 = t;
                t = SSL_printnl(r_40, s_40);
                t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_39)), term_q_32));
                t = default_system_usage_0_0(t);
                t = term_r_9;
                q_40 = t;
                t = SSL_exit(q_40);
                ;
                LocalPopChoice(p_32);
              }
            else
              {
                t = o_32;
              }
          }
        }
      a_40 = t;
      t = term_c_27;
      c_40 = t;
      t = SSL_table_destroy(c_40);
      t = a_40;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL;
  t = parse_options_1_0(u_79, t);
  a_41 = t;
  t = term_r_32;
  d_41 = t;
  t = SSL_table_create(d_41);
  t = term_r_32;
  b_41 = t;
  t = term_s_32;
  c_41 = t;
  t = SSL_table_put(b_41, c_41, a_41);
  t = a_41;
  t = w_79(t);
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_79, t);
        ;
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        {
          ATerm v_32 = t;
          int w_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_79(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_32);
            }
          else
            {
              t = v_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_7 (ATerm t)
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
        int d_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(d_33);
          }
        else
          {
            t = z_32;
            {
              ATerm f_33 = t;
              int k_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(k_33);
                }
              else
                {
                  t = f_33;
                  {
                    ATerm l_33 = t;
                    int m_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(x_7, y_7, z_7, t);
                        ;
                        LocalPopChoice(m_33);
                      }
                    else
                      {
                        t = l_33;
                        {
                          ATerm o_33 = t;
                          int q_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(q_33);
                            }
                          else
                            {
                              t = o_33;
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
  ATerm p_41 = NULL,q_41 = NULL;
  t = term_t_33;
  p_41 = t;
  t = term_f_19;
  q_41 = t;
  t = term_x_33;
  t = x_6(p_41, q_41, t);
  t = term_b_34;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_c_34;
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_41 = NULL;
      s_41 = t;
      t = term_r_27;
      t = get_config_0_0(t);
      t = s_41;
      ;
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
      {
        ATerm f_34 = t;
        int g_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_41 = NULL,a_42 = NULL;
            a_42 = t;
            if(match_cons(t, sym_FILE_1))
              {
                z_41 = ATgetArgument(t, 0);
                {
                  ATerm v_14 = NULL,g_5 = NULL;
                  t = SSLgetAnnotations(a_42);
                  v_14 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, z_41);
                  g_5 = t;
                  t = SSLsetAnnotations(g_5, v_14);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = a_42;
              }
            LocalPopChoice(g_34);
            t = xtc_transform_file_2_0(b_8, d_8, t);
          }
        else
          {
            t = f_34;
            t = xtc_transform_term_2_0(f_8, g_8, t);
          }
      }
    }
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_42 = NULL,h_42 = NULL;
        h_42 = t;
        if(match_cons(t, sym_FILE_1))
          {
            g_42 = ATgetArgument(t, 0);
            {
              ATerm c_15 = NULL,h_5 = NULL;
              t = SSLgetAnnotations(h_42);
              c_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_42);
              h_5 = t;
              t = SSLsetAnnotations(h_5, c_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_42;
          }
        LocalPopChoice(k_34);
        t = xtc_transform_file_2_0(j_8, k_8, t);
      }
    else
      {
        t = j_34;
        t = xtc_transform_term_2_0(l_8, n_8, t);
      }
    {
      ATerm l_34 = t;
      int m_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_42 = NULL;
          i_42 = t;
          t = term_y_27;
          t = get_config_0_0(t);
          t = i_42;
          ;
          LocalPopChoice(m_34);
        }
      else
        {
          t = l_34;
          {
            ATerm p_34 = t;
            int q_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_42 = NULL,q_42 = NULL;
                q_42 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    p_42 = ATgetArgument(t, 0);
                    {
                      ATerm q_15 = NULL,j_5 = NULL;
                      t = SSLgetAnnotations(q_42);
                      q_15 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, p_42);
                      j_5 = t;
                      t = SSLsetAnnotations(j_5, q_15);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = q_42;
                  }
                LocalPopChoice(q_34);
                t = xtc_transform_file_2_0(o_8, p_8, t);
              }
            else
              {
                t = p_34;
                t = xtc_transform_term_2_0(q_8, w_8, t);
              }
          }
        }
      {
        ATerm r_34 = t;
        int u_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_42 = NULL,x_42 = NULL;
            x_42 = t;
            if(match_cons(t, sym_FILE_1))
              {
                w_42 = ATgetArgument(t, 0);
                {
                  ATerm z_15 = NULL,k_5 = NULL;
                  t = SSLgetAnnotations(x_42);
                  z_15 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, w_42);
                  k_5 = t;
                  t = SSLsetAnnotations(k_5, z_15);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = x_42;
              }
            LocalPopChoice(u_34);
            t = xtc_transform_file_2_0(x_8, d_9, t);
          }
        else
          {
            t = r_34;
            t = xtc_transform_term_2_0(e_9, f_9, t);
          }
        {
          ATerm v_34 = t;
          int w_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_43 = NULL,k_43 = NULL;
              k_43 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  j_43 = ATgetArgument(t, 0);
                  {
                    ATerm t_16 = NULL,s_5 = NULL;
                    t = SSLgetAnnotations(k_43);
                    t_16 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, j_43);
                    s_5 = t;
                    t = SSLsetAnnotations(s_5, t_16);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = k_43;
                }
              LocalPopChoice(w_34);
              t = xtc_transform_file_2_0(g_9, pass_verbose_0_0, t);
            }
          else
            {
              t = v_34;
              t = xtc_transform_term_2_0(i_9, pass_verbose_0_0, t);
            }
        }
      }
    }
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_z_34;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_z_34;
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_a_35;
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL;
  t = pass_verbose_0_0(t);
  y_42 = t;
  t = term_d_35;
  t = xtc_find_0_0(t);
  z_42 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(y_42), z_42), term_e_35);
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = term_a_35;
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL;
  t = pass_verbose_0_0(t);
  b_43 = t;
  t = term_d_35;
  t = xtc_find_0_0(t);
  c_43 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(b_43), c_43), term_e_35);
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_j_35;
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = term_j_35;
  return(t);
}
ATerm pp_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(v_7, default_usage_0_0, _id, w_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pp_stratego_0_0(t);
  return(t);
}
