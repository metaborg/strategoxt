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
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_y_34;
ATerm term_r_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_a_34;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_t_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_n_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_x_29;
ATerm term_u_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_y_28;
ATerm term_t_28;
ATerm term_p_28;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_a_26;
ATerm term_t_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_f_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_l_24;
ATerm term_h_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_m_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_b_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_z_20;
ATerm term_b_19;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_p_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
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
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
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
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_s_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_j_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_a_9;
void init_constant_terms (void)
{
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_10, term_b_11, term_c_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_m_11, term_n_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_t_11, term_u_11);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_g_12, term_i_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_n_12, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_s_12, term_w_12);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_h_13, term_j_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_o_13, term_p_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_s_13, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_w_13, term_x_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_e_14, term_f_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_n_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_t_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_z_14, term_a_15);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_e_15, term_f_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_p_15, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_w_15, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_n_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_z_16, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_f_17, term_g_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_w_17, term_x_17);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym__2, term_x_21, term_u_22);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__2, term_x_21, term_y_21);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym__2, term_f_25, term_l_24);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__2, term_b_19, term_f_29);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_29);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_m_29, term_x_24);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__2, term_j_30, term_n_30);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym__2, term_j_34, term_x_24);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_m_34, term_x_24);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym__2, term_a_33, term_x_24);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym__2, term_j_36, term_x_24);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm read_from_0_0 (ATerm);
ATerm g_6 (ATerm r_27, ATerm s_27, ATerm);
ATerm h_6 (ATerm j_72 (ATerm), ATerm d_185, ATerm z_27, ATerm);
ATerm d_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm);
ATerm i_6 (ATerm n_24, ATerm o_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm o_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm y_70 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm d_88 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm e_88 (ATerm), ATerm);
ATerm l_6 (ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm u_34, ATerm t_34, ATerm);
ATerm m_6 (ATerm g_80 (ATerm), ATerm q_34, ATerm p_34, ATerm);
ATerm l_1 (ATerm);
ATerm n_6 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm);
ATerm o_6 (ATerm g_88 (ATerm), ATerm o_46, ATerm n_46, ATerm);
ATerm q_7 (ATerm k_7, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm p_6 (ATerm x_27, ATerm);
ATerm q_6 (ATerm t_48, ATerm u_48, ATerm);
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm x_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm r_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm n_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm w_11 (ATerm e_11, ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm k_90 (ATerm), ATerm);
ATerm r_6 (ATerm v_86 (ATerm), ATerm q_44, ATerm o_44, ATerm);
ATerm b_13 (ATerm r_12, ATerm);
ATerm c_13 (ATerm t_12, ATerm u_12, ATerm v_12, ATerm);
ATerm w_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm s_6 (ATerm l_48, ATerm m_48, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm n_68 (ATerm), ATerm);
ATerm get_parse_table_0_0 (ATerm);
ATerm y_2 (ATerm);
ATerm f_3 (ATerm);
ATerm sglr_2_0 (ATerm r_69 (ATerm), ATerm s_69 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm r_3 (ATerm);
ATerm parse_and_implode_0_0 (ATerm);
ATerm u_6 (ATerm t_24, ATerm u_24, ATerm);
ATerm copy_to_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm v_6 (ATerm m_45, ATerm n_45, ATerm);
ATerm end_scope_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm r_86 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm w_89 (ATerm), ATerm);
ATerm y_3 (ATerm);
ATerm xtc_io_1_0 (ATerm x_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm d_7 (ATerm h_47, ATerm i_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm x_4 (ATerm);
ATerm a_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm a_22 (ATerm p_21, ATerm);
ATerm conc_0_0 (ATerm);
ATerm t_6 (ATerm n_47, ATerm m_47, ATerm);
ATerm b_7 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm sglri_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm w_6 (ATerm c_43, ATerm d_43, ATerm);
ATerm foldr_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm f_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm j_6 (ATerm);
ATerm need_help_1_0 (ATerm y_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm u_68 (ATerm), ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm v_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_6 (ATerm y_41, ATerm z_41, ATerm);
ATerm debug_1_0 (ATerm h_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm a_7 (ATerm y_46, ATerm z_46, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm p_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm a_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm b_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm w_93 (ATerm), ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm parse_options_1_0 (ATerm v_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm t_8 (ATerm);
ATerm v_8 (ATerm);
ATerm y_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm r_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_a_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_c_9);
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_0, (ATerm) ATinsert(ATempty, term_c_9));
      t = s_6(r_0, u_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm g_6 (ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm v_0 = NULL;
  t = SSL_write_term_to_stream_baf(r_27, s_27);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_0);
  return(t);
}
ATerm h_6 (ATerm j_72 (ATerm), ATerm d_185, ATerm z_27, ATerm t)
{
  ATerm w_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_185, term_d_9);
  t = open_stream_0_0(t);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_0, z_27);
  t = j_72(t);
  t = fclose_0_0(t);
  t = z_27;
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm m_1 = NULL,p_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_9 = ATgetArgument(t, 0);
      if(match_cons(i_9, sym_Stream_1))
        {
          m_1 = ATgetArgument(i_9, 0);
        }
      else
        _fail(t);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(m_1, p_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm x_0 = NULL,a_1 = NULL;
  x_0 = t;
  t = xtc_new_file_0_0(t);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, x_0);
  t = h_6(d_1, a_1, x_0, t);
  t = SSL_close_file(a_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, a_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(t_90, u_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm i_6 (ATerm n_24, ATerm o_24, ATerm t)
{
  t = SSL_execvp(n_24, o_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,d_3 = NULL;
  z_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      a_3 = ATgetArgument(t, 0);
      {
        ATerm i_0 = NULL,q_0 = NULL;
        t = SSL_int_to_string(a_3);
        i_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_10), i_0), term_j_9);
        q_0 = t;
        t = SSL_concat_strings(q_0);
      }
    }
  else
    {
      ATerm h_1 = NULL,i_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          a_3 = ATgetArgument(t, 0);
          b_3 = ATgetArgument(t, 1);
          d_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(b_3);
      h_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_3), term_o_10), h_1), term_n_10), a_3);
      i_1 = t;
      t = SSL_concat_strings(i_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm o_76 (ATerm), ATerm t)
{
  ATerm i_3 = NULL;
  ATerm e_1 (ATerm t)
  {
    t = o_76(t);
    if(((i_3 != NULL) && (i_3 != t)))
      _fail(t);
    else
      i_3 = t;
    return(t);
  }
  t = fetch_1_0(e_1, t);
  t = not_null(i_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_3 = NULL;
  j_3 = t;
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_17), term_p_17), term_c_17), term_x_16), term_s_16), term_o_16), term_k_16), term_g_16), term_c_16), term_y_15), term_r_15), term_j_15), term_b_15), term_u_14), term_o_14), term_k_14), term_g_14), term_c_14), term_y_13), term_u_13), term_q_13), term_k_13), term_x_12), term_p_12), term_k_12), term_x_11), term_r_11), term_d_11);
        {
          ATerm f_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm z_17 = ATgetArgument(t, 0);
                if((j_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm b_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(f_1, t);
        }
        ;
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm q_3 = NULL;
  q_3 = t;
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_4 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_18 = ATgetArgument(t, 0);
            c_4 = ATgetArgument(t, 1);
            {
              ATerm j_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_4;
        {
          ATerm k_18 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_18;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          r_1 = t;
          t = term_l_18;
          s_1 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, r_1), term_n_18);
          t_1 = t;
          t = SSL_printnl(s_1, t_1);
          t = (ATerm) ATmakeAppl(sym__2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, r_1), term_n_18));
        }
        ;
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
      }
    t = q_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm y_70 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,k_4 = NULL;
  i_4 = t;
  t = fork_0_0(t);
  k_4 = t;
  {
    ATerm o_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_4;
        t = y_70(t);
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = o_18;
        t = SSL_waitpid(k_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_18 = ATgetArgument(t, 0);
            if(((ATgetType(w_18) != AT_INT) || (ATgetInt((ATermInt) w_18) != 0)))
              _fail(t);
            {
              ATerm x_18 = ATgetArgument(t, 1);
            }
            {
              ATerm y_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_4;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm m_4 = NULL;
  m_4 = t;
  t = SSL_table_keys(m_4);
  {
    ATerm g_1 (ATerm t)
    {
      ATerm n_4 = NULL,o_4 = NULL;
      n_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_4, n_4);
      t = a_7(m_4, n_4, t);
      o_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_4, o_4);
      return(t);
    }
    t = map_1_0(g_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_4 = NULL,v_4 = NULL;
      p_4 = t;
      t = term_b_19;
      t = get_config_0_0(t);
      v_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_4, term_u_16);
      t = geq_0_0(t);
      t = p_4;
      t = d_88(t);
      ;
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm d_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_4 = NULL,y_4 = NULL;
      w_4 = t;
      t = term_b_19;
      t = get_config_0_0(t);
      y_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_4, term_e_14);
      t = geq_0_0(t);
      t = w_4;
      t = c_88(t);
      ;
      LocalPopChoice(h_19);
    }
  else
    {
      t = d_19;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm i_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_4 = NULL,g_5 = NULL;
      z_4 = t;
      t = term_b_19;
      t = get_config_0_0(t);
      g_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_5, term_g_12);
      t = geq_0_0(t);
      t = z_4;
      t = e_88(t);
      ;
      LocalPopChoice(l_19);
    }
  else
    {
      t = i_19;
    }
  return(t);
}
ATerm l_6 (ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm u_34, ATerm t_34, ATerm t)
{
  t = k_80(t);
  {
    ATerm j_1 (ATerm t)
    {
      ATerm h_5 = NULL;
      h_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_34, h_5);
      t = j_80(t);
      return(t);
    }
    t = fetch_1_0(j_1, t);
    t = t_34;
  }
  return(t);
}
ATerm m_6 (ATerm g_80 (ATerm), ATerm q_34, ATerm p_34, ATerm t)
{
  t = q_34;
  {
    ATerm r_5 (ATerm t)
    {
      ATerm n_19 = t;
      int p_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_34;
          ;
          LocalPopChoice(p_19);
        }
      else
        {
          t = n_19;
          {
            ATerm v_19 = t;
            int w_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL;
                k_5 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    l_5 = ATgetFirst((ATermList) t);
                    m_5 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = k_5;
                {
                  ATerm k_1 (ATerm t)
                  {
                    t = p_34;
                    return(t);
                  }
                  t = l_6(g_80, k_1, l_5, m_5, t);
                  t = r_5(t);
                }
                ;
                LocalPopChoice(w_19);
              }
            else
              {
                t = v_19;
                t = Cons_2_0(_id, r_5, t);
              }
          }
        }
      return(t);
    }
    t = r_5(t);
  }
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm k_6 = NULL;
  if(match_cons(t, sym__2))
    {
      k_6 = ATgetArgument(t, 0);
      if((k_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm n_6 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,z_5 = NULL;
  v_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_20 = ATgetArgument(t, 0);
            ATerm g_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
        t = a_7(e_46, f_46, t);
        ;
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = (ATerm) ATempty;
      }
    w_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_5, g_46);
    t = m_6(l_1, w_5, g_46, t);
    z_5 = t;
    t = SSL_table_put(e_46, f_46, z_5);
    t = v_5;
  }
  return(t);
}
ATerm o_6 (ATerm g_88 (ATerm), ATerm o_46, ATerm n_46, ATerm t)
{
  t = n_46;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm x_6 = NULL,y_6 = NULL;
      if(match_cons(t, sym__2))
        {
          x_6 = ATgetArgument(t, 0);
          y_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, o_46, x_6, y_6);
      t = g_88(t);
      return(t);
    }
    t = map_1_0(n_1, t);
  }
  return(t);
}
ATerm q_7 (ATerm k_7, ATerm t)
{
  t = SSL_fclose(k_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL;
  o_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_7 = ATgetArgument(t, 0);
      {
        ATerm i_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_7);
            ;
            LocalPopChoice(l_20);
          }
        else
          {
            t = i_20;
            t = q_7(o_7, t);
          }
      }
    }
  else
    {
      t = q_7(o_7, t);
    }
  return(t);
}
ATerm p_6 (ATerm x_27, ATerm t)
{
  t = SSL_read_term_from_stream(x_27);
  return(t);
}
ATerm q_6 (ATerm t_48, ATerm u_48, ATerm t)
{
  ATerm r_7 = NULL;
  t = SSL_fopen(t_48, u_48);
  r_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_7);
  return(t);
}
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,z_7 = NULL,b_0 = NULL,e_0 = NULL;
  z_7 = t;
  if(match_cons(t, sym__2))
    {
      t_7 = ATgetArgument(t, 0);
      u_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_7);
  s_7 = t;
  t = t_7;
  t = z_58(t);
  v_7 = t;
  t = u_7;
  t = a_59(t);
  w_7 = t;
  e_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_7, w_7);
  b_0 = t;
  t = SSLsetAnnotations(b_0, s_7);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_8 = NULL;
  t = SSL_stdin_stream();
  d_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_8 = NULL;
  t = SSL_stdout_stream();
  e_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_8 = NULL;
  t = SSL_stderr_stream();
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_8);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm s_8 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      s_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_8;
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm z_8 = NULL;
  z_8 = t;
  t = SSL_is_string(z_8);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      ATerm q_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_8 = NULL,e_2 = NULL;
        n_8 = t;
        t = SSL_explode_term(n_8);
        if(match_cons(t, sym__2))
          {
            ATerm t_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_20) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_20 = ATgetArgument(t, 1);
              if(((ATgetType(u_20) == AT_LIST) && !(ATisEmpty(u_20))))
                {
                  e_2 = ATgetFirst((ATermList) u_20);
                  {
                    ATerm v_20 = (ATerm) ATgetNext((ATermList) u_20);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = e_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = e_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = e_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        {
          ATerm w_20 = t;
          int x_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_8 = NULL,r_8 = NULL;
              t = _2_0(o_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  o_8 = ATgetArgument(t, 0);
                  r_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_6(o_8, r_8, t);
              ;
              LocalPopChoice(x_20);
            }
          else
            {
              t = w_20;
              {
                ATerm u_8 = NULL,w_8 = NULL;
                t = _2_0(q_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    u_8 = ATgetArgument(t, 0);
                    w_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_6(u_8, w_8, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_9 = NULL,e_9 = NULL,f_9 = NULL;
  ATerm a_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_9 = NULL;
      g_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_9, term_d_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_21);
    }
  else
    {
      t = a_21;
      t = debug_1_0(u_1, t);
      _fail(t);
    }
  b_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(f_9, t);
  e_9 = t;
  t = b_9;
  t = fclose_0_0(t);
  t = e_9;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_9 = NULL,l_9 = NULL;
      k_9 = t;
      t = (ATerm) ATinsert(ATempty, term_i_21);
      l_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_9, (ATerm) ATinsert(ATempty, term_i_21));
      t = s_6(k_9, l_9, t);
      LocalPopChoice(h_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_21;
      {
        ATerm k_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_21 = t;
            if((PushChoice() == 0))
              {
                ATerm m_9 = NULL,n_9 = NULL;
                m_9 = t;
                t = (ATerm) ATinsert(ATempty, term_c_9);
                n_9 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_9, (ATerm) ATinsert(ATempty, term_c_9));
                t = s_6(m_9, n_9, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_21;
              }
            t = debug_1_0(v_1, t);
            ;
            LocalPopChoice(l_21);
          }
        else
          {
            t = k_21;
            t = debug_1_0(w_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_n_21;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = debug_1_0(a_2, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
  a_10 = t;
  t = term_l_18;
  b_10 = t;
  t = (ATerm) ATinsert(ATempty, term_q_21);
  c_10 = t;
  t = SSL_printnl(b_10, c_10);
  t = a_10;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
  if(match_cons(t, sym__3))
    {
      d_10 = ATgetArgument(t, 0);
      e_10 = ATgetArgument(t, 1);
      f_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_6(d_10, e_10, f_10, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  t = term_l_18;
  h_10 = t;
  t = (ATerm) ATinsert(ATempty, term_r_21);
  i_10 = t;
  t = SSL_printnl(h_10, i_10);
  t = g_10;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
  j_10 = t;
  t = term_l_18;
  k_10 = t;
  t = (ATerm) ATinsert(ATempty, term_q_21);
  l_10 = t;
  t = SSL_printnl(k_10, l_10);
  t = j_10;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
  o_9 = t;
  t = if_verbose5_1_0(x_1, t);
  {
    ATerm w_21 = t;
    if((PushChoice() == 0))
      {
        ATerm y_9 = NULL,z_9 = NULL;
        t = term_x_21;
        y_9 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, o_9);
        z_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_21, (ATerm) ATmakeAppl(sym_Imported_1, o_9));
        t = a_7(y_9, z_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_21;
      }
    p_9 = t;
    t = term_x_21;
    r_9 = t;
    t = term_y_21;
    s_9 = t;
    t = (ATerm) ATinsert(ATempty, o_9);
    t_9 = t;
    t = SSL_table_put(r_9, s_9, t_9);
    t = p_9;
    t = if_verbose4_1_0(z_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(b_2, t);
    q_9 = t;
    t = term_x_21;
    u_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_21, q_9);
    t = o_6(c_2, u_9, q_9, t);
    t = if_verbose6_1_0(d_2, t);
    t = term_x_21;
    v_9 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, o_9);
    w_9 = t;
    t = (ATerm) ATempty;
    x_9 = t;
    t = SSL_table_put(v_9, w_9, x_9);
    t = (ATerm) ATmakeAppl(sym__3, term_x_21, (ATerm)ATmakeAppl(sym_Imported_1, o_9), (ATerm) ATempty);
    t = if_verbose4_1_0(f_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  ATerm z_21 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_22);
    }
  else
    {
      t = z_21;
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_2 (ATerm t)
            {
              t = filter_1_0(x_83, t);
              return(t);
            }
            t = Cons_2_0(x_83, g_2, t);
            ;
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
            {
              ATerm r_10 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm h_22 = ATgetFirst((ATermList) t);
                  r_10 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = r_10;
              t = filter_1_0(x_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm r_85 (ATerm), ATerm t)
{
  ATerm t_10 (ATerm t)
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_85(t);
        t = t_10(t);
        ;
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
      }
    return(t);
  }
  t = t_10(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm m_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_22);
    }
  else
    {
      t = m_22;
      {
        ATerm q_22 = t;
        int r_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_10 = NULL;
            t = term_s_22;
            u_10 = t;
            t = SSL_getenv(u_10);
            ;
            LocalPopChoice(r_22);
          }
        else
          {
            t = q_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL;
  t = term_x_21;
  z_10 = t;
  t = term_u_22;
  a_11 = t;
  t = term_v_22;
  t = a_7(z_10, a_11, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm w_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_22;
      }
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
  t = term_b_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_10 = NULL;
  t = if_verbose5_1_0(h_2, t);
  v_10 = t;
  {
    ATerm c_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_10 = NULL,x_10 = NULL;
        t = term_x_21;
        w_10 = t;
        t = term_y_21;
        x_10 = t;
        t = term_h_23;
        t = a_7(w_10, x_10, t);
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = c_23;
        {
          ATerm y_10 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          y_10 = t;
          t = repeat_1_0(j_2, t);
          t = y_10;
        }
      }
    t = v_10;
    t = if_verbose5_1_0(k_2, t);
  }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_i_23;
  return(t);
}
ATerm w_11 (ATerm e_11, ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
  t = term_x_21;
  h_11 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, e_11);
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_21, (ATerm) ATmakeAppl(sym_Tool_1, e_11));
  t = a_7(h_11, i_11, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_23 = ATgetFirst((ATermList) t);
      if(match_cons(j_23, sym__2))
        {
          ATerm l_23 = ATgetArgument(j_23, 0);
          g_11 = ATgetArgument(j_23, 1);
        }
      else
        _fail(t);
      {
        ATerm k_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_11;
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = debug_1_0(s_2, t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_i_23;
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_x_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(u_2, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(o_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
        l_11 = t;
        if(match_cons(t, sym__2))
          {
            j_11 = ATgetArgument(t, 0);
            k_11 = ATgetArgument(t, 1);
            {
              ATerm a_24 = t;
              int b_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
                  t = term_x_21;
                  p_11 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, j_11);
                  q_11 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_x_21, (ATerm) ATmakeAppl(sym_Tool_1, j_11));
                  t = a_7(p_11, q_11, t);
                  {
                    ATerm q_2 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((k_11 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((o_11 != NULL) && (o_11 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            o_11 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(q_2, t);
                    t = not_null(o_11);
                  }
                  ;
                  LocalPopChoice(b_24);
                }
              else
                {
                  t = a_24;
                  t = w_11(l_11, t);
                }
            }
          }
        else
          {
            t = w_11(l_11, t);
          }
        t = if_verbose5_1_0(r_2, t);
      }
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      {
        ATerm v_11 = NULL,l_2 = NULL,m_2 = NULL;
        v_11 = t;
        t = term_l_18;
        l_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_24), v_11), term_e_24);
        m_2 = t;
        t = SSL_printnl(l_2, m_2);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_24), v_11), term_e_24);
        t = if_verbose5_1_0(t_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm k_90 (ATerm), ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL;
  y_11 = t;
  t = k_90(t);
  t = xtc_find_0_0(t);
  z_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_11, y_11);
  {
    ATerm v_2 (ATerm t)
    {
      ATerm a_12 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, z_11, y_11);
      t = i_6(z_11, y_11, t);
      t = term_h_24;
      a_12 = t;
      t = SSL_exit(a_12);
      return(t);
    }
    t = fork_and_wait_1_0(v_2, t);
    t = y_11;
  }
  return(t);
}
ATerm r_6 (ATerm v_86 (ATerm), ATerm q_44, ATerm o_44, ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,f_12 = NULL,h_12 = NULL,j_12 = NULL;
  b_12 = t;
  t = v_86(t);
  c_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_12, q_44, o_44);
  t = b_7(c_12, q_44, o_44, t);
  {
    ATerm i_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_12 = NULL;
        t = term_l_24;
        l_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_12, term_l_24);
        t = a_7(c_12, l_12, t);
        ;
        LocalPopChoice(k_24);
      }
    else
      {
        t = i_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_12 = ATgetFirst((ATermList) t);
        f_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_l_24;
    h_12 = t;
    t = (ATerm) ATinsert(CheckATermList(f_12), (ATerm) ATinsert(CheckATermList(d_12), q_44));
    j_12 = t;
    t = SSL_table_put(c_12, h_12, j_12);
    t = b_12;
  }
  return(t);
}
ATerm b_13 (ATerm r_12, ATerm t)
{
  t = r_12;
  {
    ATerm m_24 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_24 = ATgetArgument(t, 0);
            ATerm q_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_24;
      }
    t = term_r_24;
    t = debug_1_0(w_2, t);
    t = (ATerm) ATmakeAppl(sym__2, r_12, term_d_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm c_13 (ATerm t_12, ATerm u_12, ATerm v_12, ATerm t)
{
  t = SSL_open_file(t_12, u_12);
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_s_24;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
  y_12 = t;
  if(match_cons(t, sym__2))
    {
      z_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
      {
        ATerm v_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_13(y_12, t);
            ;
            LocalPopChoice(w_24);
          }
        else
          {
            t = v_24;
            t = c_13(z_12, a_13, y_12, t);
          }
      }
    }
  else
    {
      t = b_13(y_12, t);
    }
  return(t);
}
ATerm s_6 (ATerm l_48, ATerm m_48, ATerm t)
{
  t = SSL_access(l_48, m_48);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm d_13 = NULL,f_13 = NULL;
  t = term_x_24;
  t = new_0_0(t);
  d_13 = t;
  t = term_y_24;
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_13, term_y_24);
  t = z_6(d_13, f_13, t);
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_13 = NULL,i_13 = NULL;
        g_13 = t;
        t = (ATerm) ATinsert(ATempty, term_c_9);
        i_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_13, (ATerm) ATinsert(ATempty, term_c_9));
        t = s_6(g_13, i_13, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
      }
  }
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_f_25;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL;
  t = new_file_0_0(t);
  l_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_13, term_d_9);
  t = open_file_0_0(t);
  t = term_x_24;
  m_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_13, term_x_24);
  t = r_6(x_2, l_13, m_13, t);
  t = l_13;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL;
  p_14 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm e_3 = NULL,g_3 = NULL;
      t = p_14;
      t = xtc_new_file_0_0(t);
      e_3 = t;
      t = p_0(t);
      g_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_3, (ATerm) ATinsert(ATinsert(ATempty, e_3), term_h_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(n_0, t);
      t = SSL_close_file(e_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_3);
    }
  else
    {
      ATerm o_3 = NULL,p_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          q_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_14;
      t = xtc_new_file_0_0(t);
      o_3 = t;
      t = p_0(t);
      p_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_3), term_h_25), q_14), term_i_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(n_0, t);
      t = SSL_close_file(o_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_3);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm n_68 (ATerm), ATerm t)
{
  ATerm v_14 = NULL,x_14 = NULL,y_14 = NULL,d_15 = NULL,f_0 = NULL,o_0 = NULL;
  d_15 = t;
  if(match_cons(t, sym_FILE_1))
    {
      x_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_15);
  v_14 = t;
  t = x_14;
  t = n_68(t);
  y_14 = t;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_14);
  f_0 = t;
  t = SSLsetAnnotations(f_0, v_14);
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm j_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = j_25;
      {
        ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL;
        t = term_l_18;
        g_15 = t;
        t = (ATerm) ATinsert(ATempty, term_r_25);
        h_15 = t;
        t = SSL_printnl(g_15, h_15);
        t = term_b_11;
        i_15 = t;
        t = SSL_exit(i_15);
        t = (ATerm) ATinsert(ATempty, term_r_25);
      }
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm sglr_2_0 (ATerm r_69 (ATerm), ATerm s_69 (ATerm), ATerm t)
{
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_25 = t;
      int y_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(y_25);
        }
      else
        {
          t = x_25;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(w_25);
      {
        ATerm c_3 (ATerm t)
        {
          ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL;
          l_15 = t;
          t = r_69(t);
          m_15 = t;
          t = l_15;
          t = s_69(t);
          n_15 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(n_15), m_15), term_q_25);
          return(t);
        }
        t = xtc_transform_file_2_0(y_2, c_3, t);
      }
    }
  else
    {
      t = v_25;
      {
        ATerm h_3 (ATerm t)
        {
          ATerm o_15 = NULL,t_15 = NULL,u_15 = NULL;
          o_15 = t;
          t = r_69(t);
          t_15 = t;
          t = o_15;
          t = s_69(t);
          u_15 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(u_15), t_15), term_q_25);
          return(t);
        }
        t = xtc_transform_term_2_0(f_3, h_3, t);
      }
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm v_15 = NULL;
  t = term_a_26;
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = (ATerm) ATempty;
      }
    v_15 = t;
    t = (ATerm) ATinsert(CheckATermList(v_15), term_d_26);
  }
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_f_26;
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_f_26;
  {
    ATerm n_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(q_26);
      }
    else
      {
        t = n_26;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  t = sglr_2_0(get_parse_table_0_0, k_3, t);
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(t_26);
        t = xtc_transform_file_2_0(l_3, m_3, t);
      }
    else
      {
        t = s_26;
        t = xtc_transform_term_2_0(n_3, r_3, t);
      }
  }
  return(t);
}
ATerm u_6 (ATerm t_24, ATerm u_24, ATerm t)
{
  t = SSL_copy(t_24, u_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,a_17 = NULL;
  w_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_4 = NULL;
        t = w_16;
        t = m_0(t);
        g_4 = t;
        {
          ATerm g_27 = t;
          int i_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(i_27);
            }
          else
            {
              t = g_27;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_17, g_4);
          t = u_6(a_17, g_4, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, a_17);
        }
        ;
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        {
          ATerm j_27 = t;
          int k_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_4 = NULL;
              t = w_16;
              t = m_0(t);
              t_4 = t;
              {
                ATerm l_27 = t;
                if((PushChoice() == 0))
                  {
                    ATerm m_27 = t;
                    int t_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(t_27);
                      }
                    else
                      {
                        t = m_27;
                        {
                          ATerm u_27 = t;
                          int v_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(v_27);
                            }
                          else
                            {
                              t = u_27;
                              {
                                ATerm b_5 = NULL;
                                b_5 = t;
                                if((a_17 != t))
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
                    t = l_27;
                  }
                t = (ATerm) ATmakeAppl(sym__2, a_17, t_4);
                t = u_6(a_17, t_4, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, a_17);
              }
              ;
              LocalPopChoice(k_27);
            }
          else
            {
              t = j_27;
              t = w_16;
              t = m_0(t);
              if((a_17 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_17);
            }
        }
      }
  }
  return(t);
}
ATerm v_6 (ATerm m_45, ATerm n_45, ATerm t)
{
  ATerm e_17 = NULL,h_17 = NULL;
  e_17 = t;
  {
    ATerm w_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
        t = a_7(m_45, n_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_28 = ATgetFirst((ATermList) t);
            h_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_27);
        t = SSL_table_put(m_45, n_45, h_17);
        t = (ATerm) ATmakeAppl(sym__3, m_45, n_45, h_17);
      }
    else
      {
        t = w_27;
        t = SSL_table_remove(m_45, n_45);
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
      }
    t = e_17;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  i_17 = t;
  t = s_86(t);
  j_17 = t;
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_17 = NULL;
        t = term_l_24;
        n_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_17, term_l_24);
        t = a_7(j_17, n_17, t);
        ;
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_17 = ATgetFirst((ATermList) t);
        k_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_l_24;
    m_17 = t;
    t = SSL_table_put(j_17, m_17, k_17);
    t = l_17;
    {
      ATerm s_3 (ATerm t)
      {
        ATerm o_17 = NULL;
        o_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_17, o_17);
        t = v_6(j_17, o_17, t);
        return(t);
      }
      t = map_1_0(s_3, t);
      t = i_17;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm t)
{
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_87(t);
      t = o_87(t);
      ;
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
      t = o_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_86 (ATerm), ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,v_17 = NULL;
  q_17 = t;
  t = r_86(t);
  r_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_17, term_l_24);
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_18 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_28 = ATgetArgument(t, 0);
            ATerm j_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_24;
        a_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_17, term_l_24);
        t = a_7(r_17, a_18, t);
        ;
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        t = (ATerm) ATempty;
      }
    s_17 = t;
    t = term_l_24;
    t_17 = t;
    t = (ATerm) ATinsert(CheckATermList(s_17), (ATerm) ATempty);
    v_17 = t;
    t = SSL_table_put(r_17, t_17, v_17);
    t = q_17;
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_f_25;
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_18 = NULL;
      m_18 = t;
      t = SSL_remove(m_18);
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_f_25;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm w_89 (ATerm), ATerm t)
{
  ATerm e_18 = NULL;
  t = begin_scope_1_0(t_3, t);
  {
    ATerm u_3 (ATerm t)
    {
      ATerm f_18 = NULL;
      f_18 = t;
      {
        ATerm m_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_18 = NULL,h_18 = NULL;
            t = term_f_25;
            g_18 = t;
            t = term_l_24;
            h_18 = t;
            t = term_p_28;
            t = a_7(g_18, h_18, t);
            ;
            LocalPopChoice(o_28);
          }
        else
          {
            t = m_28;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((e_18 != NULL) && (e_18 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              e_18 = ATgetFirst((ATermList) t);
            {
              ATerm q_28 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(e_18);
        t = map_1_0(v_3, t);
        t = f_18;
        t = end_scope_1_0(w_3, t);
      }
      return(t);
    }
    t = restore_always_2_0(w_89, u_3, t);
  }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      t = term_t_28;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm v_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_18 = NULL;
        t = term_i_25;
        t = get_config_0_0(t);
        p_18 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_18);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = v_28;
        t = term_a_9;
      }
    t = x_89(t);
    t = copy_to_1_0(y_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(x_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  r_18 = t;
  t = term_x_24;
  t = whoami_0_0(t);
  s_18 = t;
  t = term_l_18;
  t_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_29), s_18), term_y_28);
  u_18 = t;
  t = SSL_printnl(t_18, u_18);
  t = term_b_11;
  v_18 = t;
  t = SSL_exit(v_18);
  t = r_18;
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm c_19 = NULL;
  c_19 = t;
  if(match_string(t, "-k"))
    {
      t = c_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_19;
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
  e_19 = t;
  t = SSL_string_to_int(e_19);
  f_19 = t;
  t = term_b_29;
  g_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_29, f_19);
  t = d_7(g_19, f_19, t);
  t = e_19;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, a_4, b_4, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm j_19 = NULL;
  j_19 = t;
  if(match_string(t, "-S"))
    {
      t = j_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_19;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm k_19 = NULL,m_19 = NULL;
  t = term_b_19;
  k_19 = t;
  t = term_f_29;
  m_19 = t;
  t = term_g_29;
  t = d_7(k_19, m_19, t);
  t = term_j_29;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm o_19 = NULL,q_19 = NULL,r_19 = NULL;
  o_19 = t;
  t = SSL_string_to_int(o_19);
  q_19 = t;
  t = term_b_19;
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_19, q_19);
  t = d_7(r_19, q_19, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_19);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_l_29;
  return(t);
}
ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL;
  t = term_m_29;
  s_19 = t;
  t = term_x_24;
  t_19 = t;
  t = term_n_29;
  t = d_7(s_19, t_19, t);
  t = term_u_29;
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_29 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_4, e_4, f_4, t);
      ;
      LocalPopChoice(c_30);
    }
  else
    {
      t = y_29;
      {
        ATerm d_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_4, j_4, l_4, t);
            ;
            LocalPopChoice(h_30);
          }
        else
          {
            t = d_30;
            t = Option_3_0(q_4, r_4, s_4, t);
          }
      }
    }
  return(t);
}
ATerm d_7 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm u_19 = NULL;
  t = term_i_30;
  u_19 = t;
  t = SSL_table_put(u_19, h_47, i_47);
  t = (ATerm) ATmakeAppl(sym__3, term_i_30, h_47, i_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
      t = term_x_24;
      t = d_0(t);
      z_19 = t;
      t = term_j_30;
      a_20 = t;
      t = term_n_30;
      b_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_30, term_n_30, z_19);
      t = b_7(a_20, b_20, z_19, t);
      _fail(t);
    }
  else
    {
      ATerm e_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_19 = ATgetFirst((ATermList) t);
          y_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_19;
      t = a_0(t);
      t = term_x_24;
      t = c_0(t);
      e_20 = t;
      t = (ATerm) ATinsert(CheckATermList(y_19), e_20);
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm h_20 = NULL;
  h_20 = t;
  if(match_string(t, "-o"))
    {
      t = h_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_20;
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL;
  j_20 = t;
  t = term_h_25;
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_25, j_20);
  t = d_7(k_20, j_20, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_20);
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, x_4, a_5, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm m_20 = NULL;
  m_20 = t;
  if(match_string(t, "-i"))
    {
      t = m_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_20;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  o_20 = t;
  t = term_i_25;
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_25, o_20);
  t = d_7(p_20, o_20, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_20);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_r_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_5, d_5, e_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_76 (ATerm), ATerm t)
{
  ATerm j_21 (ATerm t)
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, j_21, t);
        ;
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_76(t);
      }
    return(t);
  }
  t = j_21(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      {
        ATerm y_20 = NULL,b_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_20 = ATgetFirst((ATermList) t);
            b_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_20;
        {
          ATerm f_5 (ATerm t)
          {
            t = b_21;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(f_5, t);
        }
      }
    }
  return(t);
}
ATerm a_22 (ATerm p_21, ATerm t)
{
  ATerm s_21 = NULL;
  t = SSL_explode_term(p_21);
  if(match_cons(t, sym__2))
    {
      ATerm g_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_21;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  v_21 = t;
  if(match_cons(t, sym__2))
    {
      t_21 = ATgetArgument(t, 0);
      u_21 = ATgetArgument(t, 1);
      {
        ATerm h_31 = t;
        int i_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_5 (ATerm t)
            {
              t = u_21;
              return(t);
            }
            t = t_21;
            t = at_end_1_0(i_5, t);
            ;
            LocalPopChoice(i_31);
          }
        else
          {
            t = h_31;
            t = a_22(v_21, t);
          }
      }
    }
  else
    {
      t = a_22(v_21, t);
    }
  return(t);
}
ATerm t_6 (ATerm n_47, ATerm m_47, ATerm t)
{
  ATerm b_22 = NULL,d_22 = NULL,e_22 = NULL;
  t = n_47;
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        t = (ATerm) ATempty;
      }
    b_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_47, b_22);
    t = conc_0_0(t);
    d_22 = t;
    t = term_i_30;
    e_22 = t;
    t = SSL_table_put(e_22, n_47, d_22);
    t = (ATerm) ATmakeAppl(sym__3, term_i_30, n_47, d_22);
  }
  return(t);
}
ATerm b_7 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,o_22 = NULL;
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
  {
    ATerm l_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_31 = ATgetArgument(t, 0);
            ATerm y_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
        t = a_7(h_45, i_45, t);
        ;
        LocalPopChoice(q_31);
      }
    else
      {
        t = l_31;
        t = (ATerm) ATempty;
      }
    j_22 = t;
    t = (ATerm) ATinsert(CheckATermList(j_22), g_45);
    o_22 = t;
    t = SSL_table_put(h_45, i_45, o_22);
    t = i_22;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_23 = NULL,f_23 = NULL,g_23 = NULL;
      t = term_x_24;
      t = l_0(t);
      d_23 = t;
      t = term_j_30;
      f_23 = t;
      t = term_n_30;
      g_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_30, term_n_30, d_23);
      t = b_7(f_23, g_23, d_23, t);
      _fail(t);
    }
  else
    {
      ATerm n_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_22 = ATgetFirst((ATermList) t);
          y_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_22 = ATgetFirst((ATermList) t);
          a_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_22;
      t = j_0(t);
      t = z_22;
      t = k_0(t);
      n_23 = t;
      t = (ATerm) ATinsert(CheckATermList(a_23), n_23);
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL;
  o_23 = t;
  t = term_q_25;
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_25, o_23);
  t = d_7(p_23, o_23, t);
  t = o_23;
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_z_31;
  return(t);
}
ATerm s_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL;
  q_23 = t;
  t = term_a_26;
  r_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_26, q_23);
  t = t_6(r_23, q_23, t);
  t = q_23;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  s_23 = t;
  t = term_f_26;
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_26, s_23);
  t = t_6(t_23, s_23, t);
  t = s_23;
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(n_5, o_5, q_5, t);
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
            t = ArgOption_3_0(s_5, x_5, y_5, t);
            ;
            LocalPopChoice(f_32);
          }
        else
          {
            t = e_32;
            t = ArgOption_3_0(a_6, b_6, c_6, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_24;
  t = whoami_0_0(t);
  u_23 = t;
  t = term_l_18;
  v_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_32), u_23);
  w_23 = t;
  t = SSL_printnl(v_23, w_23);
  t = term_b_11;
  x_23 = t;
  t = SSL_exit(x_23);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_32;
  t = get_config_0_0(t);
  return(t);
}
ATerm w_6 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_43, d_43);
      ;
      LocalPopChoice(j_32);
    }
  else
    {
      t = i_32;
      t = SSL_addr(c_43, d_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm t)
{
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_82(t);
      ;
      LocalPopChoice(l_32);
    }
  else
    {
      t = k_32;
      {
        ATerm c_24 = NULL,d_24 = NULL,g_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_24 = ATgetFirst((ATermList) t);
            d_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_24;
        t = foldr_2_0(u_82, v_82, t);
        g_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_24, g_24);
        t = v_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL;
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(t_5, u_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_24 = NULL,j_5 = NULL,p_5 = NULL;
  t = times_0_0(t);
  j_5 = t;
  t = SSL_explode_term(j_5);
  if(match_cons(t, sym__2))
    {
      ATerm m_32 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5;
  t = foldr_2_0(d_6, e_6, t);
  j_24 = t;
  t = SSL_TicksToSeconds(j_24);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
  z_24 = t;
  if(match_cons(t, sym__2))
    {
      a_25 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_25;
        if((a_25 != t))
          {
            _fail(t);
          }
        t = z_24;
        ;
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        t = (ATerm) ATmakeAppl(sym__2, a_25, b_25);
        {
          ATerm p_32 = t;
          int q_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_25, b_25);
              ;
              LocalPopChoice(q_32);
            }
          else
            {
              t = p_32;
              t = SSL_gtr(a_25, b_25);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_25, b_25);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_25 = NULL,g_25 = NULL;
      e_25 = t;
      t = term_b_19;
      t = get_config_0_0(t);
      g_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_25, term_b_11);
      t = geq_0_0(t);
      t = e_25;
      t = z_87(t);
      ;
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,n_25 = NULL,o_25 = NULL;
  t = run_time_0_0(t);
  k_25 = t;
  t = term_x_24;
  t = whoami_0_0(t);
  l_25 = t;
  t = term_l_18;
  n_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_32), k_25), term_n_10), l_25);
  o_25 = t;
  t = SSL_printnl(n_25, o_25);
  t = (ATerm) ATmakeAppl(sym__2, term_l_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_32), k_25), term_n_10), l_25));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_29;
  p_25 = t;
  t = SSL_exit(p_25);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
      {
        ATerm w_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(x_32);
          }
        else
          {
            t = w_32;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_91 (ATerm), ATerm t)
{
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      t = fetch_1_0(j_6, t);
    }
  t = y_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm s_25 = NULL,u_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_25 = ATgetFirst((ATermList) t);
      u_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_25 = NULL,g_26 = NULL;
        t = u_25;
        t = h_0(t);
        z_25 = t;
        t = s_25;
        t = g_0(t);
        g_26 = t;
        t = u_25;
        {
          ATerm c_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(z_25), g_26);
            return(t);
          }
          t = reverse_acc_2_0(g_0, c_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_24;
      t = h_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm u_68 (ATerm), ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,s_0 = NULL,t_0 = NULL;
  k_26 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_26);
  h_26 = t;
  t = i_26;
  t = u_68(t);
  j_26 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_26);
  s_0 = t;
  t = SSLsetAnnotations(s_0, h_26);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm u_26 = NULL;
  u_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_26), term_b_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,r_26 = NULL;
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_32;
      t = get_config_0_0(t);
      o_26 = t;
      ;
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      {
        ATerm e_7 (ATerm t)
        {
          ATerm f_7 (ATerm t)
          {
            if(((o_26 != NULL) && (o_26 != t)))
              _fail(t);
            else
              o_26 = t;
            return(t);
          }
          t = Program_1_0(f_7, t);
          return(t);
        }
        t = fetch_1_0(e_7, t);
      }
    }
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_33), not_null(o_26)), term_g_33);
        t = echo_0_0(t);
        ;
        LocalPopChoice(f_33);
      }
    else
      {
        t = e_33;
      }
    t = term_i_33;
    t = echo_0_0(t);
    t = term_j_30;
    p_26 = t;
    t = term_n_30;
    r_26 = t;
    t = term_j_33;
    t = a_7(p_26, r_26, t);
    t = reverse_acc_2_0(_id, g_7, t);
    t = map_1_0(h_7, t);
    {
      ATerm k_33 = t;
      int l_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_33), term_o_33), term_n_33), term_m_33);
          t = echo_0_0(t);
          ;
          LocalPopChoice(l_33);
        }
      else
        {
          t = k_33;
        }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm v_68 (ATerm), ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,y_0 = NULL,z_0 = NULL;
  y_26 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      w_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_26);
  v_26 = t;
  t = w_26;
  t = v_68(t);
  x_26 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, x_26);
  y_0 = t;
  t = SSLsetAnnotations(y_0, v_26);
  return(t);
}
ATerm fetch_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm b_27 (ATerm t)
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_76, _id, t);
        ;
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
        t = Cons_2_0(_id, b_27, t);
      }
    return(t);
  }
  t = b_27(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,h_27 = NULL;
  e_27 = t;
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_27;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_33 = ATgetFirst((ATermList) t);
                ATerm v_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_27;
          }
        ;
        LocalPopChoice(t_33);
      }
    else
      {
        t = s_33;
        t = (ATerm) ATinsert(ATempty, e_27);
      }
    f_27 = t;
    t = term_t_28;
    h_27 = t;
    t = SSL_printnl(h_27, f_27);
    t = e_27;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm z_6 (ATerm y_41, ATerm z_41, ATerm t)
{
  t = SSL_strcat(y_41, z_41);
  return(t);
}
ATerm debug_1_0 (ATerm h_72 (ATerm), ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL;
  n_27 = t;
  t = h_72(t);
  o_27 = t;
  t = term_l_18;
  p_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_27), o_27);
  q_27 = t;
  t = SSL_printnl(p_27, q_27);
  t = n_27;
  return(t);
}
ATerm map_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm b_28 (ATerm t)
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        t = Cons_2_0(c_76, b_28, t);
      }
    return(t);
  }
  t = b_28(t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
    }
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_a_34;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_28 = NULL;
      n_28 = t;
      t = SSL_is_string(n_28);
      ;
      LocalPopChoice(c_34);
    }
  else
    {
      t = b_34;
      {
        ATerm d_34 = t;
        int e_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_7, t);
            ;
            LocalPopChoice(e_34);
          }
        else
          {
            t = d_34;
            {
              ATerm u_28 = NULL,w_28 = NULL,z_28 = NULL;
              u_28 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_28 = ATgetArgument(t, 0);
                  t = w_28;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_28 = ATgetArgument(t, 0);
                      t = w_28;
                      {
                        ATerm f_34 = t;
                        int g_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(g_34);
                          }
                        else
                          {
                            t = f_34;
                            t = debug_1_0(j_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_29 = NULL,e_29 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_28 = ATgetArgument(t, 0);
                          z_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_28;
                      t = eval_config_0_0(t);
                      d_29 = t;
                      t = z_28;
                      t = eval_config_0_0(t);
                      e_29 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_29, e_29);
                      t = z_6(d_29, e_29, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm a_7 (ATerm y_46, ATerm z_46, ATerm t)
{
  t = SSL_table_get(y_46, z_46);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL;
  h_29 = t;
  t = term_i_30;
  i_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_30, h_29);
  t = a_7(i_29, h_29, t);
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_29 = NULL,p_29 = NULL;
        t = eval_config_0_0(t);
        o_29 = t;
        t = term_i_30;
        p_29 = t;
        t = SSL_table_put(p_29, h_29, o_29);
        t = o_29;
        ;
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
      }
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL;
  t = term_j_34;
  q_29 = t;
  t = term_x_24;
  r_29 = t;
  t = term_k_34;
  t = d_7(q_29, r_29, t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_l_34;
  return(t);
}
ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,v_29 = NULL,w_29 = NULL;
  t = term_j_34;
  s_29 = t;
  t = term_x_24;
  t_29 = t;
  t = term_k_34;
  t = d_7(s_29, t_29, t);
  t = term_m_34;
  v_29 = t;
  t = term_x_24;
  w_29 = t;
  t = term_n_34;
  t = d_7(v_29, w_29, t);
  t = term_o_34;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_7, m_7, p_7, t);
      ;
      LocalPopChoice(v_34);
    }
  else
    {
      t = s_34;
      t = Option_3_0(x_7, y_7, a_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,b_1 = NULL,c_1 = NULL;
  g_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_30 = ATgetFirst((ATermList) t);
      b_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_30);
  z_29 = t;
  t = a_30;
  t = o_63(t);
  e_30 = t;
  t = b_30;
  t = p_63(t);
  f_30 = t;
  c_1 = t;
  t = (ATerm) ATinsert(CheckATermList(f_30), e_30);
  b_1 = t;
  t = SSLsetAnnotations(b_1, z_29);
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL;
  l_30 = t;
  t = term_h_32;
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_32, l_30);
  t = d_7(m_30, l_30, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, l_30);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_93 (ATerm), ATerm t)
{
  ATerm k_30 = NULL;
  k_30 = t;
  {
    ATerm w_34 = t;
    int x_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_34;
        t = w_93(t);
        ;
        LocalPopChoice(x_34);
      }
    else
      {
        t = w_34;
      }
    t = k_30;
    {
      ATerm c_8 (ATerm t)
      {
        ATerm z_34 = t;
        int a_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_35 = t;
            int c_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(c_35);
              }
            else
              {
                t = b_35;
                t = w_93(t);
                t = Cons_2_0(_id, c_8, t);
              }
            ;
            LocalPopChoice(a_35);
          }
        else
          {
            t = z_34;
            {
              ATerm o_30 = NULL,p_30 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_30 = ATgetFirst((ATermList) t);
                  p_30 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_30), (ATerm) ATmakeAppl(sym_Undefined_1, o_30));
            }
          }
        return(t);
      }
      t = Cons_2_0(b_8, c_8, t);
    }
  }
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm d_31 = NULL;
  d_31 = t;
  if(match_string(t, "--help"))
    {
      t = d_31;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_31;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_31;
        }
    }
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL;
  t = term_a_33;
  e_31 = t;
  t = term_x_24;
  f_31 = t;
  t = term_d_35;
  t = d_7(e_31, f_31, t);
  t = term_e_35;
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_f_35;
  return(t);
}
ATerm k_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  w_30 = t;
  t = term_j_30;
  z_30 = t;
  t = term_n_30;
  a_31 = t;
  t = (ATerm) ATempty;
  b_31 = t;
  t = SSL_table_put(z_30, a_31, b_31);
  t = w_30;
  {
    ATerm g_8 (ATerm t)
    {
      ATerm g_35 = t;
      int h_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_93(t);
          ;
          LocalPopChoice(h_35);
        }
      else
        {
          t = g_35;
          {
            ATerm i_35 = t;
            int j_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_8, i_8, j_8, t);
                ;
                LocalPopChoice(j_35);
              }
            else
              {
                t = i_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_8, t);
    {
      ATerm k_35 = t;
      int l_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_31 = NULL;
          m_31 = t;
          {
            ATerm m_35 = t;
            int n_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_8 = NULL;
                t = m_31;
                {
                  ATerm o_35 = t;
                  int p_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_a_33;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(p_35);
                    }
                  else
                    {
                      t = o_35;
                      t = fetch_1_0(k_8, t);
                    }
                  t = m_31;
                  t = default_system_usage_0_0(t);
                  t = term_f_29;
                  x_8 = t;
                  t = SSL_exit(x_8);
                }
                ;
                LocalPopChoice(n_35);
              }
            else
              {
                t = m_35;
                {
                  ATerm h_9 = NULL;
                  t = term_j_34;
                  t = get_config_0_0(t);
                  t = m_31;
                  t = default_system_about_0_0(t);
                  t = term_f_29;
                  h_9 = t;
                  t = SSL_exit(h_9);
                }
              }
          }
          ;
          LocalPopChoice(l_35);
        }
      else
        {
          t = k_35;
          {
            ATerm q_35 = t;
            int r_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
                ATerm l_8 (ATerm t)
                {
                  ATerm m_8 (ATerm t)
                  {
                    if(((x_30 != NULL) && (x_30 != t)))
                      _fail(t);
                    else
                      x_30 = t;
                    return(t);
                  }
                  t = Undefined_1_0(m_8, t);
                  return(t);
                }
                t = fetch_1_0(l_8, t);
                t = term_l_18;
                n_31 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_30)), term_s_35);
                o_31 = t;
                t = SSL_printnl(n_31, o_31);
                t = (ATerm) ATmakeAppl(sym__2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_30)), term_s_35));
                t = default_system_usage_0_0(t);
                t = term_b_11;
                p_31 = t;
                t = SSL_exit(p_31);
                ;
                LocalPopChoice(r_35);
              }
            else
              {
                t = q_35;
              }
          }
        }
      y_30 = t;
      t = term_j_30;
      c_31 = t;
      t = SSL_table_destroy(c_31);
      t = y_30;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  t = parse_options_1_0(a_92, t);
  s_31 = t;
  t = term_t_35;
  t_31 = t;
  t = SSL_table_create(t_31);
  t = term_t_35;
  u_31 = t;
  t = term_u_35;
  v_31 = t;
  t = SSL_table_put(u_31, v_31, s_31);
  t = s_31;
  t = c_92(t);
  {
    ATerm v_35 = t;
    int w_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_92, t);
        ;
        LocalPopChoice(w_35);
      }
    else
      {
        t = v_35;
        {
          ATerm x_35 = t;
          int y_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_35);
            }
          else
            {
              t = x_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sglri_options_0_0(t);
      ;
      LocalPopChoice(a_36);
    }
  else
    {
      t = z_35;
      {
        ATerm b_36 = t;
        int c_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(c_36);
          }
        else
          {
            t = b_36;
            {
              ATerm d_36 = t;
              int e_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(e_36);
                }
              else
                {
                  t = d_36;
                  {
                    ATerm f_36 = t;
                    int g_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(t_8, v_8, y_8, t);
                        ;
                        LocalPopChoice(g_36);
                      }
                    else
                      {
                        t = f_36;
                        {
                          ATerm h_36 = t;
                          int i_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(i_36);
                            }
                          else
                            {
                              t = h_36;
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
ATerm q_8 (ATerm t)
{
  t = xtc_io_1_0(parse_and_implode_0_0, t);
  return(t);
}
ATerm t_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL;
  t = term_j_36;
  w_31 = t;
  t = term_x_24;
  x_31 = t;
  t = term_k_36;
  t = d_7(w_31, x_31, t);
  t = term_l_36;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_m_36;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(p_8, default_usage_0_0, _id, q_8, t);
  return(t);
}
