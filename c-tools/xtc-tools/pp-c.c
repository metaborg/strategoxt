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
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_u_34;
ATerm term_n_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_t_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_k_32;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_r_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_u_29;
ATerm term_s_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_b_29;
ATerm term_m_28;
ATerm term_s_26;
ATerm term_p_26;
ATerm term_j_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_r_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_h_24;
ATerm term_c_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_u_23;
ATerm term_n_23;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_m_19;
ATerm term_a_19;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_b_18;
ATerm term_z_17;
ATerm term_r_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
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
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_d_11;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_h_9;
ATerm term_c_9;
void init_constant_terms (void)
{
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_10, term_h_9, term_f_10);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_10, term_j_10, term_k_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_n_10, term_o_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_10, term_r_10, term_d_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_n_11, term_o_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_t_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_x_11, term_y_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_f_12, term_g_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_k_12, term_m_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_p_12, term_q_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_e_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_13, term_h_13, term_i_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_m_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_q_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_z_13);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_g_14, term_h_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_n_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_u_14, term_v_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_g_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_j_15, term_k_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_z_15, term_b_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_g_16, term_i_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_r_17, term_z_17);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_x_24, term_x_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym__2, term_x_24, term_y_24);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym__2, term_a_20, term_m_19);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym__2, term_c_9, term_n_29);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_29);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym__2, term_u_29, term_w_19);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym__2, term_f_30, term_g_30);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym__2, term_c_34, term_w_19);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym__2, term_f_34, term_w_19);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym__2, term_d_33, term_w_19);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym__2, term_a_36, term_w_19);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm f_6 (ATerm r_38, ATerm s_38, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm p_6 (ATerm t_27, ATerm u_27, ATerm);
ATerm r_6 (ATerm h_72 (ATerm), ATerm l_180, ATerm b_28, ATerm);
ATerm c_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm);
ATerm s_6 (ATerm p_24, ATerm q_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm w_70 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm e_88 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm a_7 (ATerm m_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm u_6 (ATerm p_84 (ATerm), ATerm z_39, ATerm x_39, ATerm);
ATerm g_8 (ATerm r_7, ATerm);
ATerm i_8 (ATerm t_7, ATerm u_7, ATerm v_7, ATerm);
ATerm k_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm r_68 (ATerm), ATerm);
ATerm g_6 (ATerm h_29, ATerm i_29, ATerm);
ATerm n_1 (ATerm);
ATerm at_last_1_0 (ATerm b_77 (ATerm), ATerm);
ATerm i_6 (ATerm j_76 (ATerm), ATerm v_29, ATerm y_211, ATerm);
ATerm at_suffix_1_0 (ATerm u_76 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm n_76 (ATerm), ATerm);
ATerm list_tokenize_1_0 (ATerm p_99 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm e_2 (ATerm);
ATerm i_2 (ATerm);
ATerm string_tokenize_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm remove_extension_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_85 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_85 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_85 (ATerm), ATerm);
ATerm k_6 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm w_34, ATerm v_34, ATerm);
ATerm l_6 (ATerm e_80 (ATerm), ATerm s_34, ATerm r_34, ATerm);
ATerm n_2 (ATerm);
ATerm m_6 (ATerm n_41, ATerm o_41, ATerm p_41, ATerm);
ATerm n_6 (ATerm a_86 (ATerm), ATerm x_41, ATerm w_41, ATerm);
ATerm v_6 (ATerm u_43, ATerm v_43, ATerm);
ATerm e_14 (ATerm p_13, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm o_6 (ATerm z_27, ATerm);
ATerm q_6 (ATerm c_44, ATerm d_44, ATerm);
ATerm _2_0 (ATerm d_59 (ATerm), ATerm e_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm w_91 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm d_19 (ATerm f_18, ATerm);
ATerm q_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm w_6 (ATerm v_24, ATerm w_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm x_6 (ATerm v_40, ATerm w_40, ATerm);
ATerm end_scope_1_0 (ATerm m_84 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_84 (ATerm), ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_87 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm xtc_io_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm y_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm f_7 (ATerm q_42, ATerm r_42, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_7 (ATerm q_40, ATerm r_40, ATerm p_40, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm n_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm y_6 (ATerm l_38, ATerm m_38, ATerm);
ATerm foldr_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_85 (ATerm), ATerm);
ATerm w_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm x_5 (ATerm);
ATerm need_help_1_0 (ATerm s_89 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm y_68 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm b_7 (ATerm w_58, ATerm x_58, ATerm);
ATerm debug_1_0 (ATerm f_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm c_7 (ATerm h_42, ATerm i_42, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm e_6 (ATerm);
ATerm h_6 (ATerm);
ATerm j_6 (ATerm);
ATerm t_6 (ATerm);
ATerm z_6 (ATerm);
ATerm j_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm q_91 (ATerm), ATerm);
ATerm q_7 (ATerm);
ATerm s_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm parse_options_1_0 (ATerm p_91 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm);
ATerm b_8 (ATerm);
ATerm f_8 (ATerm);
ATerm h_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm io_pp_c_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm f_6 (ATerm r_38, ATerm s_38, ATerm t)
{
  ATerm i_5 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(r_38, s_38);
      ;
      LocalPopChoice(q_8);
    }
  else
    {
      t = i_5;
      t = SSL_subtr(r_38, s_38);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,n_0 = NULL,q_0 = NULL;
  t = term_c_9;
  {
    ATerm d_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(g_9);
      }
    else
      {
        t = d_9;
        t = term_h_9;
      }
    b_0 = t;
    t = term_h_9;
    n_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_h_9);
    t = f_6(b_0, n_0, t);
    q_0 = t;
    t = SSL_int_to_string(q_0);
    f_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_c_9);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm y_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_m_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm o_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_n_9);
      o_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_0, (ATerm) ATinsert(ATempty, term_n_9));
      t = v_6(y_0, o_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm p_6 (ATerm t_27, ATerm u_27, ATerm t)
{
  ATerm p_1 = NULL;
  t = SSL_write_term_to_stream_baf(t_27, u_27);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_1);
  return(t);
}
ATerm r_6 (ATerm h_72 (ATerm), ATerm l_180, ATerm b_28, ATerm t)
{
  ATerm r_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_180, term_p_9);
  t = open_stream_0_0(t);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_1, b_28);
  t = h_72(t);
  t = fclose_0_0(t);
  t = b_28;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm b_2 = NULL,h_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_9 = ATgetArgument(t, 0);
      if(match_cons(v_9, sym_Stream_1))
        {
          b_2 = ATgetArgument(v_9, 0);
        }
      else
        _fail(t);
      h_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(b_2, h_2, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm s_1 = NULL,a_2 = NULL;
  s_1 = t;
  t = xtc_new_file_0_0(t);
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_2, s_1);
  t = r_6(c_1, a_2, s_1, t);
  t = SSL_close_file(a_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, a_2);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_88, o_88, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm s_6 (ATerm p_24, ATerm q_24, ATerm t)
{
  t = SSL_execvp(p_24, q_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL;
  g_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      h_3 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,t_0 = NULL;
        t = SSL_int_to_string(h_3);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), s_0), term_w_9);
        t_0 = t;
        t = SSL_concat_strings(t_0);
      }
    }
  else
    {
      ATerm f_1 = NULL,g_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          h_3 = ATgetArgument(t, 0);
          i_3 = ATgetArgument(t, 1);
          j_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(i_3);
      f_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_3), term_a_10), f_1), term_y_9), h_3);
      g_1 = t;
      t = SSL_concat_strings(g_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm r_3 = NULL;
  ATerm d_1 (ATerm t)
  {
    t = m_76(t);
    if(((r_3 != NULL) && (r_3 != t)))
      _fail(t);
    else
      r_3 = t;
    return(t);
  }
  t = fetch_1_0(d_1, t);
  t = not_null(r_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm t_3 = NULL;
  t_3 = t;
  {
    ATerm b_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_18), term_o_17), term_j_16), term_d_16), term_w_15), term_l_15), term_h_15), term_d_15), term_y_14), term_s_14), term_i_14), term_c_14), term_w_13), term_s_13), term_n_13), term_j_13), term_f_13), term_y_12), term_u_12), term_n_12), term_i_12), term_z_11), term_v_11), term_p_11), term_j_11), term_p_10), term_l_10), term_g_10);
        {
          ATerm e_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm c_18 = ATgetArgument(t, 0);
                if((t_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm d_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(e_1, t);
        }
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = b_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, t_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm x_3 = NULL;
  x_3 = t;
  {
    ATerm e_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_4 = NULL,q_1 = NULL,t_1 = NULL,u_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_18 = ATgetArgument(t, 0);
            j_4 = ATgetArgument(t, 1);
            {
              ATerm i_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = j_4;
        {
          ATerm o_18 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_18;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          q_1 = t;
          t = term_q_18;
          t_1 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, q_1), term_r_18);
          u_1 = t;
          t = SSL_printnl(t_1, u_1);
          t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATempty, q_1), term_r_18));
        }
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = e_18;
      }
    t = x_3;
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
  ATerm n_4 = NULL,o_4 = NULL;
  n_4 = t;
  t = fork_0_0(t);
  o_4 = t;
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = n_4;
        t = w_70(t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = SSL_waitpid(o_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_18 = ATgetArgument(t, 0);
            if(((ATgetType(v_18) != AT_INT) || (ATgetInt((ATermInt) v_18) != 0)))
              _fail(t);
            {
              ATerm y_18 = ATgetArgument(t, 1);
            }
            {
              ATerm z_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm t_4 = NULL,v_4 = NULL;
  t_4 = t;
  t = e_88(t);
  t = xtc_find_0_0(t);
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_4, t_4);
  {
    ATerm h_1 (ATerm t)
    {
      ATerm w_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, v_4, t_4);
      t = s_6(v_4, t_4, t);
      t = term_a_19;
      w_4 = t;
      t = SSL_exit(w_4);
      return(t);
    }
    t = fork_and_wait_1_0(h_1, t);
    t = t_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm b_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, j_5, t);
        ;
        LocalPopChoice(e_19);
      }
    else
      {
        t = b_19;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_76(t);
      }
    return(t);
  }
  t = j_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      {
        ATerm z_4 = NULL,e_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_4 = ATgetFirst((ATermList) t);
            e_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_4;
        {
          ATerm i_1 (ATerm t)
          {
            t = e_5;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(i_1, t);
        }
      }
    }
  return(t);
}
ATerm a_7 (ATerm m_5, ATerm t)
{
  ATerm r_5 = NULL;
  t = SSL_explode_term(m_5);
  if(match_cons(t, sym__2))
    {
      ATerm h_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_19) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
  u_5 = t;
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 (ATerm t)
            {
              t = t_5;
              return(t);
            }
            t = s_5;
            t = at_end_1_0(j_1, t);
            ;
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            t = a_7(u_5, t);
          }
      }
    }
  else
    {
      t = a_7(u_5, t);
    }
  return(t);
}
ATerm u_6 (ATerm p_84 (ATerm), ATerm z_39, ATerm x_39, ATerm t)
{
  ATerm e_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,l_7 = NULL,m_7 = NULL;
  e_7 = t;
  t = p_84(t);
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_7, z_39, x_39);
  t = d_7(g_7, z_39, x_39, t);
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_7 = NULL;
        t = term_m_19;
        n_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_7, term_m_19);
        t = c_7(g_7, n_7, t);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_7 = ATgetFirst((ATermList) t);
        i_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_m_19;
    l_7 = t;
    t = (ATerm) ATinsert(CheckATermList(i_7), (ATerm) ATinsert(CheckATermList(h_7), z_39));
    m_7 = t;
    t = SSL_table_put(g_7, l_7, m_7);
    t = e_7;
  }
  return(t);
}
ATerm g_8 (ATerm r_7, ATerm t)
{
  t = r_7;
  {
    ATerm n_19 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_19 = ATgetArgument(t, 0);
            ATerm p_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_19;
      }
    t = term_q_19;
    t = debug_1_0(k_1, t);
    t = (ATerm) ATmakeAppl(sym__2, r_7, term_p_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm i_8 (ATerm t_7, ATerm u_7, ATerm v_7, ATerm t)
{
  t = SSL_open_file(t_7, u_7);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_r_19;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm z_7 = NULL,d_8 = NULL,e_8 = NULL;
  z_7 = t;
  if(match_cons(t, sym__2))
    {
      d_8 = ATgetArgument(t, 0);
      e_8 = ATgetArgument(t, 1);
      {
        ATerm s_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_8(z_7, t);
            ;
            LocalPopChoice(v_19);
          }
        else
          {
            t = s_19;
            t = i_8(d_8, e_8, z_7, t);
          }
      }
    }
  else
    {
      t = g_8(z_7, t);
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
  ATerm j_8 = NULL,k_8 = NULL;
  t = term_w_19;
  t = new_0_0(t);
  j_8 = t;
  t = term_x_19;
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_8, term_x_19);
  t = b_7(j_8, k_8, t);
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_8 = NULL,p_8 = NULL;
        l_8 = t;
        t = (ATerm) ATinsert(ATempty, term_n_9);
        p_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_8, (ATerm) ATinsert(ATempty, term_n_9));
        t = v_6(l_8, p_8, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
      }
  }
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL;
  t = new_file_0_0(t);
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_8, term_p_9);
  t = open_file_0_0(t);
  t = term_w_19;
  s_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_8, term_w_19);
  t = u_6(l_1, r_8, s_8, t);
  t = r_8;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL;
  e_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_1 = NULL,y_1 = NULL;
      t = e_9;
      t = xtc_new_file_0_0(t);
      x_1 = t;
      t = m_0(t);
      y_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_1, (ATerm) ATinsert(ATinsert(ATempty, x_1), term_b_20));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(x_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_1);
    }
  else
    {
      ATerm f_2 = NULL,g_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_9;
      t = xtc_new_file_0_0(t);
      f_2 = t;
      t = m_0(t);
      g_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_2), term_b_20), f_9), term_c_20));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(f_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_2);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm r_68 (ATerm), ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,o_0 = NULL,p_0 = NULL;
  l_9 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_9);
  i_9 = t;
  t = j_9;
  t = r_68(t);
  k_9 = t;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_9);
  o_0 = t;
  t = SSLsetAnnotations(o_0, i_9);
  return(t);
}
ATerm g_6 (ATerm h_29, ATerm i_29, ATerm t)
{
  t = i_29;
  {
    ATerm d_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(f_20);
      }
    else
      {
        t = d_20;
        {
          ATerm m_1 (ATerm t)
          {
            ATerm h_20 = t;
            int i_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(i_20);
              }
            else
              {
                t = h_20;
                {
                  ATerm o_9 = NULL;
                  t = Cons_2_0(_id, m_1, t);
                  o_9 = t;
                  t = (ATerm) ATinsert(CheckATermList(o_9), h_29);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, m_1, t);
        }
      }
  }
  return(t);
}
ATerm n_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm b_77 (ATerm), ATerm t)
{
  ATerm q_9 (ATerm t)
  {
    ATerm k_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, n_1, t);
        t = b_77(t);
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = k_20;
        t = Cons_2_0(_id, q_9, t);
      }
    return(t);
  }
  t = q_9(t);
  return(t);
}
ATerm i_6 (ATerm j_76 (ATerm), ATerm v_29, ATerm y_211, ATerm t)
{
  t = y_211;
  {
    ATerm v_1 (ATerm t)
    {
      ATerm r_9 = NULL;
      r_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_29, r_9);
      t = j_76(t);
      t = r_9;
      return(t);
    }
    t = SRTS_one(v_1, t);
  }
  return(t);
}
ATerm at_suffix_1_0 (ATerm u_76 (ATerm), ATerm t)
{
  ATerm s_9 (ATerm t)
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_76(t);
        ;
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        t = Cons_2_0(_id, s_9, t);
      }
    return(t);
  }
  t = s_9(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm n_76 (ATerm), ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  ATerm w_1 (ATerm t)
  {
    t = Cons_2_0(n_76, _id, t);
    {
      ATerm z_1 (ATerm t)
      {
        if(((t_9 != NULL) && (t_9 != t)))
          _fail(t);
        else
          t_9 = t;
        return(t);
      }
      t = Cons_2_0(_id, z_1, t);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1_0(w_1, t);
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_9, not_null(t_9));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm c_10 = NULL,i_10 = NULL;
  ATerm t_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(p_99, t);
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = t_20;
      {
        ATerm z_9 = NULL;
        z_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_9, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      c_10 = ATgetArgument(t, 0);
      i_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_10;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_20 = ATgetFirst((ATermList) t);
              ATerm x_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_10;
          t = list_tokenize_1_0(p_99, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm y_20 = ATgetFirst((ATermList) t);
          ATerm e_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_10;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, c_10);
        }
      else
        {
          ATerm s_10 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm f_21 = ATgetFirst((ATermList) t);
              ATerm g_21 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_10;
          t = list_tokenize_1_0(p_99, t);
          s_10 = t;
          t = (ATerm) ATinsert(CheckATermList(s_10), c_10);
        }
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm v_10 = NULL;
  v_10 = t;
  t = SSL_explode_string(v_10);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm x_10 = NULL;
  if(match_cons(t, sym__2))
    {
      x_10 = ATgetArgument(t, 0);
      if((x_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm y_10 = NULL;
  y_10 = t;
  t = SSL_implode_string(y_10);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL;
  t = _2_0(_id, c_2, t);
  if(match_cons(t, sym__2))
    {
      t_10 = ATgetArgument(t, 0);
      u_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10;
  {
    ATerm d_2 (ATerm t)
    {
      ATerm w_10 = NULL;
      w_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_10, t_10);
      t = i_6(e_2, w_10, t_10, t);
      return(t);
    }
    t = list_tokenize_1_0(d_2, t);
    t = map_1_0(i_2, t);
  }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm e_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_21 = ATgetFirst((ATermList) t);
      e_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_11;
  return(t);
}
ATerm remove_extension_0_0 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
  z_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_i_21), z_10);
  t = string_tokenize_0_0(t);
  t = at_last_1_0(j_2, t);
  a_11 = t;
  t = term_k_21;
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_21, a_11);
  t = g_6(c_11, a_11, t);
  b_11 = t;
  t = SSL_concat_strings(b_11);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_11 = NULL;
  f_11 = t;
  t = SSL_table_keys(f_11);
  {
    ATerm k_2 (ATerm t)
    {
      ATerm g_11 = NULL,h_11 = NULL;
      g_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_11, g_11);
      t = c_7(f_11, g_11, t);
      h_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_11, h_11);
      return(t);
    }
    t = map_1_0(k_2, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm l_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_11 = NULL,l_11 = NULL;
      i_11 = t;
      t = term_c_9;
      t = get_config_0_0(t);
      l_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_11, term_z_15);
      t = geq_0_0(t);
      t = i_11;
      t = x_85(t);
      ;
      LocalPopChoice(n_21);
    }
  else
    {
      t = l_21;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  ATerm o_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_11 = NULL,q_11 = NULL;
      m_11 = t;
      t = term_c_9;
      t = get_config_0_0(t);
      q_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_11, term_d_13);
      t = geq_0_0(t);
      t = m_11;
      t = w_85(t);
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = o_21;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_11 = NULL,a_12 = NULL;
      u_11 = t;
      t = term_c_9;
      t = get_config_0_0(t);
      a_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_12, term_r_10);
      t = geq_0_0(t);
      t = u_11;
      t = y_85(t);
      ;
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
    }
  return(t);
}
ATerm k_6 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm w_34, ATerm v_34, ATerm t)
{
  t = i_80(t);
  {
    ATerm l_2 (ATerm t)
    {
      ATerm b_12 = NULL;
      b_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_34, b_12);
      t = h_80(t);
      return(t);
    }
    t = fetch_1_0(l_2, t);
    t = v_34;
  }
  return(t);
}
ATerm l_6 (ATerm e_80 (ATerm), ATerm s_34, ATerm r_34, ATerm t)
{
  t = s_34;
  {
    ATerm l_12 (ATerm t)
    {
      ATerm v_21 = t;
      int w_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = r_34;
          ;
          LocalPopChoice(w_21);
        }
      else
        {
          t = v_21;
          {
            ATerm x_21 = t;
            int z_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_12 = NULL,e_12 = NULL,h_12 = NULL;
                d_12 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_12 = ATgetFirst((ATermList) t);
                    h_12 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = d_12;
                {
                  ATerm m_2 (ATerm t)
                  {
                    t = r_34;
                    return(t);
                  }
                  t = k_6(e_80, m_2, e_12, h_12, t);
                  t = l_12(t);
                }
                ;
                LocalPopChoice(z_21);
              }
            else
              {
                t = x_21;
                t = Cons_2_0(_id, l_12, t);
              }
          }
        }
      return(t);
    }
    t = l_12(t);
  }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm z_12 = NULL;
  if(match_cons(t, sym__2))
    {
      z_12 = ATgetArgument(t, 0);
      if((z_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm n_41, ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  r_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_22 = ATgetArgument(t, 0);
            ATerm j_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
        t = c_7(n_41, o_41, t);
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        t = (ATerm) ATempty;
      }
    s_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_12, p_41);
    t = l_6(n_2, s_12, p_41, t);
    t_12 = t;
    t = SSL_table_put(n_41, o_41, t_12);
    t = r_12;
  }
  return(t);
}
ATerm n_6 (ATerm a_86 (ATerm), ATerm x_41, ATerm w_41, ATerm t)
{
  t = w_41;
  {
    ATerm o_2 (ATerm t)
    {
      ATerm a_13 = NULL,b_13 = NULL;
      if(match_cons(t, sym__2))
        {
          a_13 = ATgetArgument(t, 0);
          b_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, x_41, a_13, b_13);
      t = a_86(t);
      return(t);
    }
    t = map_1_0(o_2, t);
  }
  return(t);
}
ATerm v_6 (ATerm u_43, ATerm v_43, ATerm t)
{
  t = SSL_access(u_43, v_43);
  return(t);
}
ATerm e_14 (ATerm p_13, ATerm t)
{
  t = SSL_fclose(p_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  b_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_14 = ATgetArgument(t, 0);
      {
        ATerm l_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_14);
            ;
            LocalPopChoice(o_22);
          }
        else
          {
            t = l_22;
            t = e_14(b_14, t);
          }
      }
    }
  else
    {
      t = e_14(b_14, t);
    }
  return(t);
}
ATerm o_6 (ATerm z_27, ATerm t)
{
  t = SSL_read_term_from_stream(z_27);
  return(t);
}
ATerm q_6 (ATerm c_44, ATerm d_44, ATerm t)
{
  ATerm f_14 = NULL;
  t = SSL_fopen(c_44, d_44);
  f_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_14);
  return(t);
}
ATerm _2_0 (ATerm d_59 (ATerm), ATerm e_59 (ATerm), ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,r_0 = NULL,u_0 = NULL;
  r_14 = t;
  if(match_cons(t, sym__2))
    {
      k_14 = ATgetArgument(t, 0);
      o_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_14);
  j_14 = t;
  t = k_14;
  t = d_59(t);
  p_14 = t;
  t = o_14;
  t = e_59(t);
  q_14 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_14, q_14);
  r_0 = t;
  t = SSLsetAnnotations(r_0, j_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_14 = NULL;
  t = SSL_stdin_stream();
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_14 = NULL;
  t = SSL_stdout_stream();
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_14 = NULL;
  t = SSL_stderr_stream();
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_14);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm r_15 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      r_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_15;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm u_15 = NULL;
  u_15 = t;
  t = SSL_is_string(u_15);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_22 = ATgetArgument(t, 0);
      ATerm r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_22 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_15 = NULL,k_3 = NULL;
        o_15 = t;
        t = SSL_explode_term(o_15);
        if(match_cons(t, sym__2))
          {
            ATerm d_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_23 = ATgetArgument(t, 1);
              if(((ATgetType(e_23) == AT_LIST) && !(ATisEmpty(e_23))))
                {
                  k_3 = ATgetFirst((ATermList) e_23);
                  {
                    ATerm f_23 = (ATerm) ATgetNext((ATermList) e_23);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = k_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = k_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = k_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(c_23);
      }
    else
      {
        t = t_22;
        {
          ATerm g_23 = t;
          int m_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_15 = NULL,q_15 = NULL;
              t = _2_0(p_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_15 = ATgetArgument(t, 0);
                  q_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_6(p_15, q_15, t);
              ;
              LocalPopChoice(m_23);
            }
          else
            {
              t = g_23;
              {
                ATerm s_15 = NULL,t_15 = NULL;
                t = _2_0(q_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    s_15 = ATgetArgument(t, 0);
                    t_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_6(s_15, t_15, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_n_23;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_15 = NULL,a_16 = NULL,c_16 = NULL;
  ATerm p_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_16 = NULL;
      f_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_16, term_u_23);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = p_23;
      t = debug_1_0(r_2, t);
      _fail(t);
    }
  y_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(c_16, t);
  a_16 = t;
  t = y_15;
  t = fclose_0_0(t);
  t = a_16;
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_y_23;
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_16 = NULL,k_16 = NULL;
      h_16 = t;
      t = (ATerm) ATinsert(ATempty, term_c_24);
      k_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_16, (ATerm) ATinsert(ATempty, term_c_24));
      t = v_6(h_16, k_16, t);
      LocalPopChoice(b_24);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = a_24;
      {
        ATerm d_24 = t;
        int e_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_24 = t;
            if((PushChoice() == 0))
              {
                ATerm l_16 = NULL,m_16 = NULL;
                l_16 = t;
                t = (ATerm) ATinsert(ATempty, term_n_9);
                m_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, l_16, (ATerm) ATinsert(ATempty, term_n_9));
                t = v_6(l_16, m_16, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_24;
              }
            t = debug_1_0(s_2, t);
            ;
            LocalPopChoice(e_24);
          }
        else
          {
            t = d_24;
            t = debug_1_0(t_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = debug_1_0(v_2, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_h_24;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  b_17 = t;
  t = term_q_18;
  c_17 = t;
  t = (ATerm) ATinsert(ATempty, term_r_24);
  d_17 = t;
  t = SSL_printnl(c_17, d_17);
  t = b_17;
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
  if(match_cons(t, sym__3))
    {
      e_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
      g_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_6(e_17, f_17, g_17, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
  h_17 = t;
  t = term_q_18;
  i_17 = t;
  t = (ATerm) ATinsert(ATempty, term_s_24);
  j_17 = t;
  t = SSL_printnl(i_17, j_17);
  t = h_17;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  t = term_q_18;
  l_17 = t;
  t = (ATerm) ATinsert(ATempty, term_r_24);
  m_17 = t;
  t = SSL_printnl(l_17, m_17);
  t = k_17;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
  p_16 = t;
  t = if_verbose5_1_0(u_2, t);
  {
    ATerm t_24 = t;
    if((PushChoice() == 0))
      {
        ATerm z_16 = NULL,a_17 = NULL;
        t = term_x_24;
        z_16 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, p_16);
        a_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_24, (ATerm) ATmakeAppl(sym_Imported_1, p_16));
        t = c_7(z_16, a_17, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_24;
      }
    q_16 = t;
    t = term_x_24;
    s_16 = t;
    t = term_y_24;
    t_16 = t;
    t = (ATerm) ATinsert(ATempty, p_16);
    u_16 = t;
    t = SSL_table_put(s_16, t_16, u_16);
    t = q_16;
    t = if_verbose4_1_0(w_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(y_2, t);
    r_16 = t;
    t = term_x_24;
    v_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_24, r_16);
    t = n_6(z_2, v_16, r_16, t);
    t = if_verbose6_1_0(a_3, t);
    t = term_x_24;
    w_16 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, p_16);
    x_16 = t;
    t = (ATerm) ATempty;
    y_16 = t;
    t = SSL_table_put(w_16, x_16, y_16);
    t = (ATerm) ATmakeAppl(sym__3, term_x_24, (ATerm)ATmakeAppl(sym_Imported_1, p_16), (ATerm) ATempty);
    t = if_verbose4_1_0(b_3, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm d_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(g_25);
    }
  else
    {
      t = d_25;
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_3 (ATerm t)
            {
              t = filter_1_0(v_83, t);
              return(t);
            }
            t = Cons_2_0(v_83, c_3, t);
            ;
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            {
              ATerm q_17 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm j_25 = ATgetFirst((ATermList) t);
                  q_17 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = q_17;
              t = filter_1_0(v_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm s_17 (ATerm t)
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_91(t);
        t = s_17(t);
        ;
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
      }
    return(t);
  }
  t = s_17(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm s_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_17 = NULL;
            t = term_v_25;
            t_17 = t;
            t = SSL_getenv(t_17);
            ;
            LocalPopChoice(t_25);
          }
        else
          {
            t = s_25;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = debug_1_0(e_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_w_25;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm y_17 = NULL,a_18 = NULL;
  t = term_x_24;
  y_17 = t;
  t = term_x_25;
  a_18 = t;
  t = term_y_25;
  t = c_7(y_17, a_18, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm z_25 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_25;
      }
  }
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = debug_1_0(m_3, t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm u_17 = NULL;
  t = if_verbose5_1_0(d_3, t);
  u_17 = t;
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_17 = NULL,w_17 = NULL;
        t = term_x_24;
        v_17 = t;
        t = term_y_24;
        w_17 = t;
        t = term_e_26;
        t = c_7(v_17, w_17, t);
        ;
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        {
          ATerm x_17 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          x_17 = t;
          t = repeat_1_0(f_3, t);
          t = x_17;
        }
      }
    t = u_17;
    t = if_verbose5_1_0(l_3, t);
  }
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm d_19 (ATerm f_18, ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  t = term_x_24;
  k_18 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, f_18);
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_24, (ATerm) ATmakeAppl(sym_Tool_1, f_18));
  t = c_7(k_18, l_18, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_26 = ATgetFirst((ATermList) t);
      if(match_cons(g_26, sym__2))
        {
          ATerm i_26 = ATgetArgument(g_26, 0);
          j_18 = ATgetArgument(g_26, 1);
        }
      else
        _fail(t);
      {
        ATerm h_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_18;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = debug_1_0(v_3, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_x_24;
  t = table_getlist_0_0(t);
  t = debug_1_0(y_3, t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(n_3, t);
      t = xtc_load_0_0(t);
      {
        ATerm m_18 = NULL,n_18 = NULL,p_18 = NULL;
        p_18 = t;
        if(match_cons(t, sym__2))
          {
            m_18 = ATgetArgument(t, 0);
            n_18 = ATgetArgument(t, 1);
            {
              ATerm m_26 = t;
              int o_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_18 = NULL,w_18 = NULL,x_18 = NULL;
                  t = term_x_24;
                  w_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, m_18);
                  x_18 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_x_24, (ATerm) ATmakeAppl(sym_Tool_1, m_18));
                  t = c_7(w_18, x_18, t);
                  {
                    ATerm p_3 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((n_18 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((u_18 != NULL) && (u_18 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            u_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(p_3, t);
                    t = not_null(u_18);
                  }
                  ;
                  LocalPopChoice(o_26);
                }
              else
                {
                  t = m_26;
                  t = d_19(p_18, t);
                }
            }
          }
        else
          {
            t = d_19(p_18, t);
          }
        t = if_verbose5_1_0(q_3, t);
      }
      ;
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      {
        ATerm c_19 = NULL,s_3 = NULL,u_3 = NULL;
        c_19 = t;
        t = term_q_18;
        s_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_26), c_19), term_p_26);
        u_3 = t;
        t = SSL_printnl(s_3, u_3);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_26), c_19), term_p_26);
        t = if_verbose5_1_0(w_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm w_6 (ATerm v_24, ATerm w_24, ATerm t)
{
  t = SSL_copy(v_24, w_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL;
  t_19 = t;
  if(match_cons(t, sym_FILE_1))
    {
      u_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_4 = NULL;
        t = t_19;
        t = k_0(t);
        f_4 = t;
        {
          ATerm w_26 = t;
          int x_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(x_26);
            }
          else
            {
              t = w_26;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_19, f_4);
          t = w_6(u_19, f_4, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, u_19);
        }
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = t_26;
        {
          ATerm y_26 = t;
          int z_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_4 = NULL;
              t = t_19;
              t = k_0(t);
              u_4 = t;
              {
                ATerm a_27 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_27 = t;
                    int c_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(c_27);
                      }
                    else
                      {
                        t = b_27;
                        {
                          ATerm e_27 = t;
                          int f_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(f_27);
                            }
                          else
                            {
                              t = e_27;
                              {
                                ATerm x_4 = NULL;
                                x_4 = t;
                                if((u_19 != t))
                                  {
                                    _fail(t);
                                  }
                                t = x_4;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_27;
                  }
                t = (ATerm) ATmakeAppl(sym__2, u_19, u_4);
                t = w_6(u_19, u_4, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, u_19);
              }
              ;
              LocalPopChoice(z_26);
            }
          else
            {
              t = y_26;
              t = t_19;
              t = k_0(t);
              if((u_19 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_19);
            }
        }
      }
  }
  return(t);
}
ATerm x_6 (ATerm v_40, ATerm w_40, ATerm t)
{
  ATerm e_20 = NULL,g_20 = NULL;
  e_20 = t;
  {
    ATerm g_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
        t = c_7(v_40, w_40, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_27 = ATgetFirst((ATermList) t);
            g_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_27);
        t = SSL_table_put(v_40, w_40, g_20);
        t = (ATerm) ATmakeAppl(sym__3, v_40, w_40, g_20);
      }
    else
      {
        t = g_27;
        t = SSL_table_remove(v_40, w_40);
        t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
      }
    t = e_20;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  ATerm j_20 = NULL,l_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  j_20 = t;
  t = m_84(t);
  l_20 = t;
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_20 = NULL;
        t = term_m_19;
        s_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_20, term_m_19);
        t = c_7(l_20, s_20, t);
        ;
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_20 = ATgetFirst((ATermList) t);
        p_20 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_m_19;
    r_20 = t;
    t = SSL_table_put(l_20, r_20, p_20);
    t = q_20;
    {
      ATerm z_3 (ATerm t)
      {
        ATerm u_20 = NULL;
        u_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_20, u_20);
        t = x_6(l_20, u_20, t);
        return(t);
      }
      t = map_1_0(z_3, t);
      t = j_20;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_85(t);
      t = i_85(t);
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      t = i_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
  z_20 = t;
  t = l_84(t);
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_21, term_m_19);
  {
    ATerm w_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_21 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_27 = ATgetArgument(t, 0);
            ATerm a_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_m_19;
        j_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_21, term_m_19);
        t = c_7(a_21, j_21, t);
        ;
        LocalPopChoice(x_27);
      }
    else
      {
        t = w_27;
        t = (ATerm) ATempty;
      }
    b_21 = t;
    t = term_m_19;
    c_21 = t;
    t = (ATerm) ATinsert(CheckATermList(b_21), (ATerm) ATempty);
    d_21 = t;
    t = SSL_table_put(a_21, c_21, d_21);
    t = z_20;
  }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_21 = NULL;
      y_21 = t;
      t = SSL_remove(y_21);
      ;
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm m_21 = NULL;
  t = begin_scope_1_0(a_4, t);
  {
    ATerm b_4 (ATerm t)
    {
      ATerm p_21 = NULL;
      p_21 = t;
      {
        ATerm e_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_21 = NULL,r_21 = NULL;
            t = term_a_20;
            q_21 = t;
            t = term_m_19;
            r_21 = t;
            t = term_m_28;
            t = c_7(q_21, r_21, t);
            ;
            LocalPopChoice(l_28);
          }
        else
          {
            t = e_28;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((m_21 != NULL) && (m_21 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              m_21 = ATgetFirst((ATermList) t);
            {
              ATerm u_28 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(m_21);
        t = map_1_0(c_4, t);
        t = p_21;
        t = end_scope_1_0(d_4, t);
      }
      return(t);
    }
    t = restore_always_2_0(q_87, b_4, t);
  }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm v_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_28);
    }
  else
    {
      t = v_28;
      t = term_b_29;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_22 = NULL;
        t = term_c_20;
        t = get_config_0_0(t);
        a_22 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_22);
        ;
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        t = term_m_9;
      }
    t = r_87(t);
    t = copy_to_1_0(g_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(e_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
  d_22 = t;
  t = term_w_19;
  t = whoami_0_0(t);
  e_22 = t;
  t = term_q_18;
  f_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_29), e_22), term_e_29);
  g_22 = t;
  t = SSL_printnl(f_22, g_22);
  t = term_h_9;
  h_22 = t;
  t = SSL_exit(h_22);
  t = d_22;
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm k_22 = NULL;
  k_22 = t;
  if(match_string(t, "-k"))
    {
      t = k_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_22;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,q_22 = NULL;
  m_22 = t;
  t = SSL_string_to_int(m_22);
  n_22 = t;
  t = term_l_29;
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_29, n_22);
  t = f_7(q_22, n_22, t);
  t = m_22;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, k_4, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm s_22 = NULL;
  s_22 = t;
  if(match_string(t, "-S"))
    {
      t = s_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_22;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL;
  t = term_c_9;
  u_22 = t;
  t = term_n_29;
  v_22 = t;
  t = term_o_29;
  t = f_7(u_22, v_22, t);
  t = term_p_29;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_q_29;
  return(t);
}
ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
  w_22 = t;
  t = SSL_string_to_int(w_22);
  x_22 = t;
  t = term_c_9;
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_9, x_22);
  t = f_7(y_22, x_22, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_22);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm y_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL;
  t = term_u_29;
  z_22 = t;
  t = term_w_19;
  a_23 = t;
  t = term_w_29;
  t = f_7(z_22, a_23, t);
  t = term_x_29;
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_y_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_4, m_4, p_4, t);
      ;
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      {
        ATerm b_30 = t;
        int d_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_4, r_4, s_4, t);
            ;
            LocalPopChoice(d_30);
          }
        else
          {
            t = b_30;
            t = Option_3_0(y_4, a_5, b_5, t);
          }
      }
    }
  return(t);
}
ATerm f_7 (ATerm q_42, ATerm r_42, ATerm t)
{
  ATerm b_23 = NULL;
  t = term_e_30;
  b_23 = t;
  t = SSL_table_put(b_23, q_42, r_42);
  t = (ATerm) ATmakeAppl(sym__3, term_e_30, q_42, r_42);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
      t = term_w_19;
      t = d_0(t);
      j_23 = t;
      t = term_f_30;
      k_23 = t;
      t = term_g_30;
      l_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_30, term_g_30, j_23);
      t = d_7(k_23, l_23, j_23, t);
      _fail(t);
    }
  else
    {
      ATerm o_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_23 = ATgetFirst((ATermList) t);
          i_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_23;
      t = a_0(t);
      t = term_w_19;
      t = c_0(t);
      o_23 = t;
      t = (ATerm) ATinsert(CheckATermList(i_23), o_23);
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm q_23 = NULL;
  q_23 = t;
  if(match_string(t, "-o"))
    {
      t = q_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_23;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  s_23 = t;
  t = term_b_20;
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_20, s_23);
  t = f_7(t_23, s_23, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_23);
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_5, d_5, f_5, t);
  return(t);
}
ATerm d_7 (ATerm q_40, ATerm r_40, ATerm p_40, ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
  {
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_30 = ATgetArgument(t, 0);
            ATerm q_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
        t = c_7(q_40, r_40, t);
        ;
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
        t = (ATerm) ATempty;
      }
    w_23 = t;
    t = (ATerm) ATinsert(CheckATermList(w_23), p_40);
    x_23 = t;
    t = SSL_table_put(q_40, r_40, x_23);
    t = v_23;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm g_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
      t = term_w_19;
      t = j_0(t);
      l_24 = t;
      t = term_f_30;
      m_24 = t;
      t = term_g_30;
      n_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_30, term_g_30, l_24);
      t = d_7(m_24, n_24, l_24, t);
      _fail(t);
    }
  else
    {
      ATerm u_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_24 = ATgetFirst((ATermList) t);
          i_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_24 = ATgetFirst((ATermList) t);
          k_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_24;
      t = h_0(t);
      t = j_24;
      t = i_0(t);
      u_24 = t;
      t = (ATerm) ATinsert(CheckATermList(k_24), u_24);
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  if(match_string(t, "-i"))
    {
      t = z_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_24;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL;
  a_25 = t;
  t = term_c_20;
  b_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_20, a_25);
  t = f_7(b_25, a_25, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_25);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_r_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_5, h_5, n_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_25 = NULL,e_25 = NULL,f_25 = NULL,m_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_19;
  t = whoami_0_0(t);
  c_25 = t;
  t = term_q_18;
  e_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_31), c_25);
  f_25 = t;
  t = SSL_printnl(e_25, f_25);
  t = term_h_9;
  m_25 = t;
  t = SSL_exit(m_25);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_31;
  t = get_config_0_0(t);
  return(t);
}
ATerm y_6 (ATerm l_38, ATerm m_38, ATerm t)
{
  ATerm k_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_38, m_38);
      ;
      LocalPopChoice(o_31);
    }
  else
    {
      t = k_31;
      t = SSL_addr(l_38, m_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm t)
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_82(t);
      ;
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
      {
        ATerm p_25 = NULL,q_25 = NULL,u_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_25 = ATgetFirst((ATermList) t);
            q_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_25;
        t = foldr_2_0(s_82, t_82, t);
        u_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_25, u_25);
        t = t_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_n_29;
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm q_5 = NULL,v_5 = NULL;
  if(match_cons(t, sym__2))
    {
      q_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(q_5, v_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_26 = NULL,k_5 = NULL,l_5 = NULL;
  t = times_0_0(t);
  k_5 = t;
  t = SSL_explode_term(k_5);
  if(match_cons(t, sym__2))
    {
      ATerm t_31 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5;
  t = foldr_2_0(o_5, p_5, t);
  a_26 = t;
  t = SSL_TicksToSeconds(a_26);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_26 = NULL,q_26 = NULL,r_26 = NULL;
  n_26 = t;
  if(match_cons(t, sym__2))
    {
      q_26 = ATgetArgument(t, 0);
      r_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_26;
        if((q_26 != t))
          {
            _fail(t);
          }
        t = n_26;
        ;
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
        t = (ATerm) ATmakeAppl(sym__2, q_26, r_26);
        {
          ATerm w_31 = t;
          int h_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_26, r_26);
              ;
              LocalPopChoice(h_32);
            }
          else
            {
              t = w_31;
              t = SSL_gtr(q_26, r_26);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_26, r_26);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_85 (ATerm), ATerm t)
{
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_26 = NULL,d_27 = NULL;
      u_26 = t;
      t = term_c_9;
      t = get_config_0_0(t);
      d_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_27, term_h_9);
      t = geq_0_0(t);
      t = u_26;
      t = t_85(t);
      ;
      LocalPopChoice(j_32);
    }
  else
    {
      t = i_32;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,l_27 = NULL,m_27 = NULL;
  t = run_time_0_0(t);
  h_27 = t;
  t = term_w_19;
  t = whoami_0_0(t);
  i_27 = t;
  t = term_q_18;
  l_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_32), h_27), term_y_9), i_27);
  m_27 = t;
  t = SSL_printnl(l_27, m_27);
  t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_32), h_27), term_y_9), i_27));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_29;
  n_27 = t;
  t = SSL_exit(n_27);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      {
        ATerm r_32 = t;
        int s_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(s_32);
          }
        else
          {
            t = r_32;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_33);
    }
  else
    {
      t = b_33;
      t = fetch_1_0(x_5, t);
    }
  t = s_89(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_27 = NULL,v_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_27 = ATgetFirst((ATermList) t);
      v_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_28 = NULL,g_28 = NULL;
        t = v_27;
        t = g_0(t);
        f_28 = t;
        t = s_27;
        t = e_0(t);
        g_28 = t;
        t = v_27;
        {
          ATerm y_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(f_28), g_28);
            return(t);
          }
          t = reverse_acc_2_0(e_0, y_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_19;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,v_0 = NULL,w_0 = NULL;
  k_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_28);
  h_28 = t;
  t = i_28;
  t = y_68(t);
  j_28 = t;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_28);
  v_0 = t;
  t = SSLsetAnnotations(v_0, h_28);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm p_28 = NULL;
  p_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_28), term_e_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL;
  ATerm f_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_33);
    }
  else
    {
      t = f_33;
      t = fetch_1_0(z_5, t);
    }
  t = term_h_33;
  t = echo_0_0(t);
  t = term_f_30;
  n_28 = t;
  t = term_g_30;
  o_28 = t;
  t = term_i_33;
  t = c_7(n_28, o_28, t);
  t = reverse_acc_2_0(_id, a_6, t);
  t = map_1_0(b_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_68 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,x_0 = NULL,z_0 = NULL;
  t_28 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      r_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_28);
  q_28 = t;
  t = r_28;
  t = z_68(t);
  s_28 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, s_28);
  x_0 = t;
  t = SSLsetAnnotations(x_0, q_28);
  return(t);
}
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm w_28 (ATerm t)
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_76, _id, t);
        ;
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        t = Cons_2_0(_id, w_28, t);
      }
    return(t);
  }
  t = w_28(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
  y_28 = t;
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_33 = ATgetFirst((ATermList) t);
                ATerm o_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_28;
          }
        ;
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = (ATerm) ATinsert(ATempty, y_28);
      }
    z_28 = t;
    t = term_b_29;
    a_29 = t;
    t = SSL_printnl(a_29, z_28);
    t = y_28;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_31;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm b_7 (ATerm w_58, ATerm x_58, ATerm t)
{
  t = SSL_strcat(w_58, x_58);
  return(t);
}
ATerm debug_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  ATerm g_29 = NULL,j_29 = NULL,k_29 = NULL,r_29 = NULL;
  g_29 = t;
  t = f_72(t);
  j_29 = t;
  t = term_q_18;
  k_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_29), j_29);
  r_29 = t;
  t = SSL_printnl(k_29, r_29);
  t = g_29;
  return(t);
}
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm t)
{
  ATerm t_29 (ATerm t)
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(q_33);
      }
    else
      {
        t = p_33;
        t = Cons_2_0(a_76, t_29, t);
      }
    return(t);
  }
  t = t_29(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_t_33;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_30 = NULL;
      c_30 = t;
      t = SSL_is_string(c_30);
      ;
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      {
        ATerm w_33 = t;
        int x_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_6, t);
            ;
            LocalPopChoice(x_33);
          }
        else
          {
            t = w_33;
            {
              ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
              i_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_30 = ATgetArgument(t, 0);
                  t = j_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_30 = ATgetArgument(t, 0);
                      t = j_30;
                      {
                        ATerm y_33 = t;
                        int z_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(z_33);
                          }
                        else
                          {
                            t = y_33;
                            t = debug_1_0(d_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_30 = NULL,p_30 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_30 = ATgetArgument(t, 0);
                          k_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_30;
                      t = eval_config_0_0(t);
                      o_30 = t;
                      t = k_30;
                      t = eval_config_0_0(t);
                      p_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_30, p_30);
                      t = b_7(o_30, p_30, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm c_7 (ATerm h_42, ATerm i_42, ATerm t)
{
  t = SSL_table_get(h_42, i_42);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  s_30 = t;
  t = term_e_30;
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_30, s_30);
  t = c_7(t_30, s_30, t);
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_30 = NULL,v_30 = NULL;
        t = eval_config_0_0(t);
        u_30 = t;
        t = term_e_30;
        v_30 = t;
        t = SSL_table_put(v_30, s_30, u_30);
        t = u_30;
        ;
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
      }
  }
  return(t);
}
ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL;
  t = term_c_34;
  w_30 = t;
  t = term_w_19;
  x_30 = t;
  t = term_d_34;
  t = f_7(w_30, x_30, t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_e_34;
  return(t);
}
ATerm t_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  t = term_c_34;
  y_30 = t;
  t = term_w_19;
  z_30 = t;
  t = term_d_34;
  t = f_7(y_30, z_30, t);
  t = term_f_34;
  a_31 = t;
  t = term_w_19;
  b_31 = t;
  t = term_g_34;
  t = f_7(a_31, b_31, t);
  t = term_h_34;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_i_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_6, h_6, j_6, t);
      ;
      LocalPopChoice(k_34);
    }
  else
    {
      t = j_34;
      t = Option_3_0(t_6, z_6, j_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,a_1 = NULL,b_1 = NULL;
  h_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_31 = ATgetFirst((ATermList) t);
      e_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_31);
  c_31 = t;
  t = d_31;
  t = s_63(t);
  f_31 = t;
  t = e_31;
  t = t_63(t);
  g_31 = t;
  b_1 = t;
  t = (ATerm) ATinsert(CheckATermList(g_31), f_31);
  a_1 = t;
  t = SSLsetAnnotations(a_1, c_31);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL;
  m_31 = t;
  t = term_j_31;
  n_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_31, m_31);
  t = f_7(n_31, m_31, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, m_31);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_91 (ATerm), ATerm t)
{
  ATerm l_31 = NULL;
  l_31 = t;
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_34;
        t = q_91(t);
        ;
        LocalPopChoice(m_34);
      }
    else
      {
        t = l_34;
      }
    t = l_31;
    {
      ATerm o_7 (ATerm t)
      {
        ATerm o_34 = t;
        int p_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_34 = t;
            int t_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(t_34);
              }
            else
              {
                t = q_34;
                t = q_91(t);
                t = Cons_2_0(_id, o_7, t);
              }
            ;
            LocalPopChoice(p_34);
          }
        else
          {
            t = o_34;
            {
              ATerm p_31 = NULL,q_31 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_31 = ATgetFirst((ATermList) t);
                  q_31 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_31), (ATerm) ATmakeAppl(sym_Undefined_1, p_31));
            }
          }
        return(t);
      }
      t = Cons_2_0(k_7, o_7, t);
    }
  }
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  if(match_string(t, "--help"))
    {
      t = e_32;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_32;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_32;
        }
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL;
  t = term_d_33;
  f_32 = t;
  t = term_w_19;
  g_32 = t;
  t = term_u_34;
  t = f_7(f_32, g_32, t);
  t = term_x_34;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm x_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_91 (ATerm), ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
  x_31 = t;
  t = term_f_30;
  a_32 = t;
  t = term_g_30;
  b_32 = t;
  t = (ATerm) ATempty;
  c_32 = t;
  t = SSL_table_put(a_32, b_32, c_32);
  t = x_31;
  {
    ATerm p_7 (ATerm t)
    {
      ATerm z_34 = t;
      int a_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_91(t);
          ;
          LocalPopChoice(a_35);
        }
      else
        {
          t = z_34;
          {
            ATerm b_35 = t;
            int c_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_7, s_7, w_7, t);
                ;
                LocalPopChoice(c_35);
              }
            else
              {
                t = b_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_7, t);
    {
      ATerm d_35 = t;
      int e_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_32 = NULL;
          n_32 = t;
          {
            ATerm f_35 = t;
            int g_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_8 = NULL;
                t = n_32;
                {
                  ATerm h_35 = t;
                  int i_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_d_33;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(i_35);
                    }
                  else
                    {
                      t = h_35;
                      t = fetch_1_0(x_7, t);
                    }
                  t = n_32;
                  t = default_system_usage_0_0(t);
                  t = term_n_29;
                  c_8 = t;
                  t = SSL_exit(c_8);
                }
                ;
                LocalPopChoice(g_35);
              }
            else
              {
                t = f_35;
                {
                  ATerm o_8 = NULL;
                  t = term_c_34;
                  t = get_config_0_0(t);
                  t = n_32;
                  t = default_system_about_0_0(t);
                  t = term_n_29;
                  o_8 = t;
                  t = SSL_exit(o_8);
                }
              }
          }
          ;
          LocalPopChoice(e_35);
        }
      else
        {
          t = d_35;
          {
            ATerm j_35 = t;
            int k_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
                ATerm y_7 (ATerm t)
                {
                  ATerm a_8 (ATerm t)
                  {
                    if(((y_31 != NULL) && (y_31 != t)))
                      _fail(t);
                    else
                      y_31 = t;
                    return(t);
                  }
                  t = Undefined_1_0(a_8, t);
                  return(t);
                }
                t = fetch_1_0(y_7, t);
                t = term_q_18;
                o_32 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_31)), term_l_35);
                p_32 = t;
                t = SSL_printnl(o_32, p_32);
                t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_31)), term_l_35));
                t = default_system_usage_0_0(t);
                t = term_h_9;
                q_32 = t;
                t = SSL_exit(q_32);
                ;
                LocalPopChoice(k_35);
              }
            else
              {
                t = j_35;
              }
          }
        }
      z_31 = t;
      t = term_f_30;
      d_32 = t;
      t = SSL_table_destroy(d_32);
      t = z_31;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
  t = parse_options_1_0(u_89, t);
  t_32 = t;
  t = term_m_35;
  u_32 = t;
  t = SSL_table_create(u_32);
  t = term_m_35;
  v_32 = t;
  t = term_n_35;
  w_32 = t;
  t = SSL_table_put(v_32, w_32, t_32);
  t = t_32;
  t = w_89(t);
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_89, t);
        ;
        LocalPopChoice(p_35);
      }
    else
      {
        t = o_35;
        {
          ATerm q_35 = t;
          int r_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_89(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_35);
            }
          else
            {
              t = q_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(t_35);
    }
  else
    {
      t = s_35;
      {
        ATerm u_35 = t;
        int v_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(v_35);
          }
        else
          {
            t = u_35;
            {
              ATerm w_35 = t;
              int x_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(h_8, m_8, n_8, t);
                  ;
                  LocalPopChoice(x_35);
                }
              else
                {
                  t = w_35;
                  {
                    ATerm y_35 = t;
                    int z_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(z_35);
                      }
                    else
                      {
                        t = y_35;
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
ATerm f_8 (ATerm t)
{
  t = xtc_io_1_0(t_8, t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL;
  t = term_a_36;
  x_32 = t;
  t = term_w_19;
  y_32 = t;
  t = term_b_36;
  t = f_7(x_32, y_32, t);
  t = term_c_36;
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_d_36;
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm e_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_36 = t;
      int h_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(h_36);
        }
      else
        {
          t = g_36;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(f_36);
      t = xtc_transform_file_2_0(u_8, v_8, t);
    }
  else
    {
      t = e_36;
      t = xtc_transform_term_2_0(w_8, x_8, t);
    }
  {
    ATerm i_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_36 = t;
        int l_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(l_36);
          }
        else
          {
            t = k_36;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(j_36);
        t = xtc_transform_file_2_0(y_8, pass_verbose_0_0, t);
      }
    else
      {
        t = i_36;
        t = xtc_transform_term_2_0(z_8, pass_verbose_0_0, t);
      }
    {
      ATerm m_36 = t;
      int n_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_36 = t;
          int p_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(p_36);
            }
          else
            {
              t = o_36;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(n_36);
          t = xtc_transform_file_2_0(a_9, pass_verbose_0_0, t);
        }
      else
        {
          t = m_36;
          t = xtc_transform_term_2_0(b_9, pass_verbose_0_0, t);
        }
    }
  }
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm z_32 = NULL;
  t = term_r_36;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  z_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_32), term_s_36);
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm a_33 = NULL;
  t = term_r_36;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  a_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_33), term_s_36);
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_t_36;
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = term_t_36;
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_u_36;
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = term_u_36;
  return(t);
}
ATerm io_pp_c_0_0 (ATerm t)
{
  t = option_wrap_4_0(b_8, default_usage_0_0, _id, f_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_c_0_0(t);
  return(t);
}
