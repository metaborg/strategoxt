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
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_y_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_p_33;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_z_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_w_28;
ATerm term_e_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_t_26;
ATerm term_q_26;
ATerm term_o_26;
ATerm term_l_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_q_25;
ATerm term_m_25;
ATerm term_i_24;
ATerm term_z_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_p_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_d_23;
ATerm term_b_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_h_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_r_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_g_21;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_m_18;
ATerm term_g_18;
ATerm term_v_17;
ATerm term_q_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_l_9;
void init_constant_terms (void)
{
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_10, term_s_9, term_k_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_o_10, term_p_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_10, term_v_10, term_x_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_b_11, term_c_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_h_11, term_i_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_m_11, term_n_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_t_11, term_u_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_z_11, term_a_12);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_d_12, term_e_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_k_12, term_l_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_s_12, term_v_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_z_12, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_e_13, term_f_13);
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
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_q_13, term_s_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_y_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_d_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_14, term_h_14, term_i_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_14, term_t_14, term_u_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_e_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_o_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_x_16, term_y_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__2, term_e_22, term_y_22);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, term_e_22, term_h_22);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym__2, term_x_19, term_m_18);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_c_26);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym__2, term_l_26, term_g_19);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym__2, term_p_27, term_g_19);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_x_27, term_g_19);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_b_27, term_c_27);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__2, term_d_30, term_g_19);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_g_19);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_d_29, term_g_19);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym__2, term_p_33, term_g_19);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm a_6 (ATerm g_31, ATerm h_31, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm b_6 (ATerm k_15, ATerm l_15, ATerm);
ATerm c_6 (ATerm c_60 (ATerm), ATerm v_161, ATerm s_15, ATerm);
ATerm f_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm);
ATerm d_6 (ATerm g_12, ATerm h_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm h_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm r_58 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm j_78 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm l_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm h_7 (ATerm t_6, ATerm);
ATerm conc_0_0 (ATerm);
ATerm f_6 (ATerm u_74 (ATerm), ATerm o_32, ATerm m_32, ATerm);
ATerm v_8 (ATerm d_8, ATerm);
ATerm w_8 (ATerm f_8, ATerm i_8, ATerm j_8, ATerm);
ATerm f_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm b_76 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm h_6 (ATerm c_68 (ATerm), ATerm d_68 (ATerm), ATerm n_22, ATerm m_22, ATerm);
ATerm i_6 (ATerm z_67 (ATerm), ATerm j_22, ATerm i_22, ATerm);
ATerm l_1 (ATerm);
ATerm j_6 (ATerm c_34, ATerm d_34, ATerm e_34, ATerm);
ATerm k_6 (ATerm f_76 (ATerm), ATerm m_34, ATerm l_34, ATerm);
ATerm o_6 (ATerm j_36, ATerm k_36, ATerm);
ATerm m_14 (ATerm f_14, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_6 (ATerm q_15, ATerm);
ATerm m_6 (ATerm r_36, ATerm s_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm p_17 (ATerm i_15, ATerm);
ATerm r_17 (ATerm z_15, ATerm b_16, ATerm c_16, ATerm);
ATerm s_17 (ATerm m_16, ATerm n_16, ATerm p_16, ATerm);
ATerm n_6 (ATerm);
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
ATerm filter_1_0 (ATerm r_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm q_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm a_23 (ATerm i_21, ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm p_6 (ATerm v_29, ATerm w_29, ATerm);
ATerm debug_1_0 (ATerm a_60 (ATerm), ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm q_6 (ATerm m_12, ATerm n_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm r_6 (ATerm k_33, ATerm l_33, ATerm);
ATerm end_scope_1_0 (ATerm r_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_74 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm v_77 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm xtc_io_1_0 (ATerm w_77 (ATerm), ATerm);
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
ATerm y_6 (ATerm f_35, ATerm g_35, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm w_6 (ATerm f_33, ATerm g_33, ATerm e_33, ATerm);
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
ATerm s_6 (ATerm a_31, ATerm b_31, ATerm);
ATerm foldr_2_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_75 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm t_5 (ATerm);
ATerm need_help_1_0 (ATerm x_79 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_63 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm v_6 (ATerm w_34, ATerm x_34, ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm y_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm f_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm x_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm m_51 (ATerm), ATerm n_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm v_81 (ATerm), ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm n_7 (ATerm);
ATerm s_7 (ATerm);
ATerm parse_options_1_0 (ATerm u_81 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm e_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm j_9 (ATerm);
ATerm pp_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm a_6 (ATerm g_31, ATerm h_31, ATerm t)
{
  ATerm v_4 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(g_31, h_31);
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = v_4;
      t = SSL_subtr(g_31, h_31);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL;
  t = term_l_9;
  {
    ATerm o_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_9);
      }
    else
      {
        t = o_9;
        t = term_s_9;
      }
    b_0 = t;
    t = term_s_9;
    e_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_s_9);
    t = a_6(b_0, e_0, t);
    c_0 = t;
    t = SSL_int_to_string(c_0);
    a_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_l_9);
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
      t = o_6(t_0, v_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm b_6 (ATerm k_15, ATerm l_15, ATerm t)
{
  ATerm w_0 = NULL;
  t = SSL_write_term_to_stream_baf(k_15, l_15);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_0);
  return(t);
}
ATerm c_6 (ATerm c_60 (ATerm), ATerm v_161, ATerm s_15, ATerm t)
{
  ATerm a_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_161, term_v_9);
  t = n_6(t);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, s_15);
  t = c_60(t);
  t = fclose_0_0(t);
  t = s_15;
  return(t);
}
ATerm f_0 (ATerm t)
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
  t = c_6(f_0, c_1, b_1, t);
  t = SSL_close_file(c_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(s_78, t_78, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm d_6 (ATerm g_12, ATerm h_12, ATerm t)
{
  t = SSL_execvp(g_12, h_12);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_9), x_0), term_x_9);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_2), term_c_10), w_1), term_a_10), h_2);
      x_1 = t;
      t = SSL_concat_strings(x_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm h_64 (ATerm), ATerm t)
{
  ATerm z_2 = NULL;
  ATerm o_0 (ATerm t)
  {
    t = h_64(t);
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
    ATerm d_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm h_10 = ATgetArgument(t, 0);
              if((a_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm i_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_17), term_a_17), term_s_16), term_k_16), term_y_15), term_u_15), term_n_15), term_f_15), term_a_15), term_v_14), term_l_14), term_e_14), term_a_14), term_v_13), term_n_13), term_i_13), term_b_13), term_w_12), term_o_12), term_f_12), term_b_12), term_w_11), term_p_11), term_j_11), term_e_11), term_z_10), term_s_10), term_l_10);
        t = fetch_elem_1_0(q_0, t);
        ;
        LocalPopChoice(f_10);
      }
    else
      {
        t = d_10;
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
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_17 = ATgetArgument(t, 0);
            s_3 = ATgetArgument(t, 1);
            {
              ATerm l_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_17);
        {
          ATerm m_17 = t;
          int n_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 = NULL,n_2 = NULL,p_2 = NULL;
              t = s_3;
              {
                ATerm o_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_17;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                l_2 = t;
                t = term_q_17;
                n_2 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, l_2), term_v_17);
                p_2 = t;
                t = SSL_printnl(n_2, p_2);
                t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, l_2), term_v_17));
              }
              ;
              LocalPopChoice(n_17);
            }
          else
            {
              t = m_17;
              t = g_3;
            }
        }
      }
    else
      {
        t = f_17;
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
ATerm fork_and_wait_1_0 (ATerm r_58 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  c_4 = t;
  t = fork_0_0(t);
  b_4 = t;
  {
    ATerm w_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = c_4;
        t = r_58(t);
        ;
        LocalPopChoice(z_17);
      }
    else
      {
        t = w_17;
        t = SSL_waitpid(b_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_18 = ATgetArgument(t, 0);
            if(((ATgetType(a_18) != AT_INT) || (ATgetInt((ATermInt) a_18) != 0)))
              _fail(t);
            {
              ATerm b_18 = ATgetArgument(t, 1);
            }
            {
              ATerm f_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm j_78 (ATerm), ATerm t)
{
  ATerm f_4 = NULL,i_4 = NULL;
  i_4 = t;
  t = j_78(t);
  t = xtc_find_0_0(t);
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_4, i_4);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm k_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, f_4, i_4);
      t = d_6(f_4, i_4, t);
      t = term_g_18;
      k_4 = t;
      t = SSL_exit(k_4);
      return(t);
    }
    t = fork_and_wait_1_0(s_0, t);
    t = i_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm l_64 (ATerm), ATerm t)
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
        t = l_64(t);
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
ATerm h_7 (ATerm t_6, ATerm t)
{
  ATerm u_6 = NULL;
  t = SSL_explode_term(t_6);
  if(match_cons(t, sym__2))
    {
      ATerm h_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_6 = NULL,c_7 = NULL,d_7 = NULL;
  d_7 = t;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = c_7;
              return(t);
            }
            t = z_6;
            t = at_end_1_0(z_0, t);
            ;
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
            t = h_7(d_7, t);
          }
      }
    }
  else
    {
      t = h_7(d_7, t);
    }
  return(t);
}
ATerm f_6 (ATerm u_74 (ATerm), ATerm o_32, ATerm m_32, ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,q_7 = NULL,r_7 = NULL,t_7 = NULL;
  q_7 = t;
  t = u_74(t);
  k_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_7, o_32, m_32);
  t = w_6(k_7, o_32, m_32, t);
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_7 = NULL;
        t = term_m_18;
        v_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_7, term_m_18);
        t = v_6(k_7, v_7, t);
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_7 = ATgetFirst((ATermList) t);
        m_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_m_18;
    r_7 = t;
    t = (ATerm) ATinsert(CheckATermList(m_7), (ATerm) ATinsert(CheckATermList(l_7), o_32));
    t_7 = t;
    t = SSL_table_put(k_7, r_7, t_7);
    t = q_7;
  }
  return(t);
}
ATerm v_8 (ATerm d_8, ATerm t)
{
  t = d_8;
  {
    ATerm p_18 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_18 = ATgetArgument(t, 0);
            ATerm u_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_18;
      }
    t = term_v_18;
    t = debug_1_0(f_1, t);
    t = (ATerm) ATmakeAppl(sym__2, d_8, term_v_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm w_8 (ATerm f_8, ATerm i_8, ATerm j_8, ATerm t)
{
  t = SSL_open_file(f_8, i_8);
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
        ATerm z_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_8(s_8, t);
            ;
            LocalPopChoice(a_19);
          }
        else
          {
            t = z_18;
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
  ATerm a_9 = NULL,c_9 = NULL,d_9 = NULL;
  t = term_g_19;
  t = new_0_0(t);
  a_9 = t;
  t = term_h_19;
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_9, term_h_19);
  t = p_6(a_9, c_9, t);
  d_9 = t;
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_u_9);
        i_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_9, (ATerm) ATinsert(ATempty, term_u_9));
        t = o_6(d_9, i_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        t = d_9;
      }
  }
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL;
  t = new_file_0_0(t);
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_9, term_v_9);
  t = open_file_0_0(t);
  t = term_g_19;
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_9, term_g_19);
  t = f_6(g_1, m_9, n_9, t);
  t = m_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm e_10 = NULL,g_10 = NULL;
  e_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_3 = NULL,n_3 = NULL;
      t = e_10;
      t = xtc_new_file_0_0(t);
      l_3 = t;
      t = r_0(t);
      n_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_3, (ATerm) ATinsert(ATinsert(ATempty, l_3), term_y_19));
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
          g_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_10;
      t = xtc_new_file_0_0(t);
      a_4 = t;
      t = r_0(t);
      e_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_4), term_y_19), g_10), term_z_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(a_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_4);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm n_10 = NULL;
  ATerm h_1 (ATerm t)
  {
    ATerm q_10 = NULL,r_10 = NULL;
    q_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_10), q_10);
    t = v_6(not_null(n_10), q_10, t);
    r_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_10, r_10);
    return(t);
  }
  if(((n_10 != NULL) && (n_10 != t)))
    _fail(t);
  else
    n_10 = t;
  t = SSL_table_keys(n_10);
  t = map_1_0(h_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm t_10 = NULL;
  t_10 = t;
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_10 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        w_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_10, term_h_16);
        t = geq_0_0(t);
        t = t_10;
        t = c_76(t);
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = t_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_76 (ATerm), ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_11 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        f_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_11, term_z_12);
        t = geq_0_0(t);
        t = d_11;
        t = b_76(t);
        ;
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = d_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_11 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        v_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_11, term_b_11);
        t = geq_0_0(t);
        t = o_11;
        t = d_76(t);
        ;
        LocalPopChoice(f_20);
      }
    else
      {
        t = e_20;
        t = o_11;
      }
  }
  return(t);
}
ATerm h_6 (ATerm c_68 (ATerm), ATerm d_68 (ATerm), ATerm n_22, ATerm m_22, ATerm t)
{
  t = d_68(t);
  {
    ATerm i_1 (ATerm t)
    {
      ATerm x_11 = NULL;
      x_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_22, x_11);
      t = c_68(t);
      return(t);
    }
    t = fetch_1_0(i_1, t);
    t = m_22;
  }
  return(t);
}
ATerm i_6 (ATerm z_67 (ATerm), ATerm j_22, ATerm i_22, ATerm t)
{
  ATerm x_12 (ATerm t)
  {
    ATerm p_12 = NULL,q_12 = NULL,t_12 = NULL;
    p_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_12 = ATgetFirst((ATermList) t);
            t_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_12;
              {
                ATerm j_1 (ATerm t)
                {
                  t = i_22;
                  return(t);
                }
                t = h_6(z_67, j_1, q_12, t_12, t);
                t = x_12(t);
              }
              ;
              LocalPopChoice(h_20);
            }
          else
            {
              t = g_20;
              {
                ATerm r_4 = NULL,w_4 = NULL,m_1 = NULL;
                t = SSLgetAnnotations(p_12);
                r_4 = t;
                t = t_12;
                t = x_12(t);
                w_4 = t;
                t = (ATerm) ATinsert(CheckATermList(w_4), q_12);
                m_1 = t;
                t = SSLsetAnnotations(m_1, r_4);
              }
            }
        }
      }
    return(t);
  }
  t = j_22;
  t = x_12(t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm r_13 = NULL;
  if(match_cons(t, sym__2))
    {
      r_13 = ATgetArgument(t, 0);
      if((r_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm j_6 (ATerm c_34, ATerm d_34, ATerm e_34, ATerm t)
{
  ATerm d_13 = NULL,g_13 = NULL,h_13 = NULL;
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_20 = ATgetArgument(t, 0);
            ATerm l_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
        t = v_6(c_34, d_34, t);
        ;
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        t = (ATerm) ATempty;
      }
    h_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_13, e_34);
    t = i_6(l_1, h_13, e_34, t);
    g_13 = t;
    t = SSL_table_put(c_34, d_34, g_13);
    t = d_13;
  }
  return(t);
}
ATerm k_6 (ATerm f_76 (ATerm), ATerm m_34, ATerm l_34, ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm t_13 = NULL,u_13 = NULL;
    if(match_cons(t, sym__2))
      {
        t_13 = ATgetArgument(t, 0);
        u_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_34, t_13, u_13);
    t = f_76(t);
    return(t);
  }
  t = l_34;
  t = map_1_0(n_1, t);
  return(t);
}
ATerm o_6 (ATerm j_36, ATerm k_36, ATerm t)
{
  t = SSL_access(j_36, k_36);
  return(t);
}
ATerm m_14 (ATerm f_14, ATerm t)
{
  t = SSL_fclose(f_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL;
  k_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_14 = ATgetArgument(t, 0);
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_14);
            ;
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
            t = m_14(k_14, t);
          }
      }
    }
  else
    {
      t = m_14(k_14, t);
    }
  return(t);
}
ATerm l_6 (ATerm q_15, ATerm t)
{
  t = SSL_read_term_from_stream(q_15);
  return(t);
}
ATerm m_6 (ATerm r_36, ATerm s_36, ATerm t)
{
  ATerm n_14 = NULL;
  t = SSL_fopen(r_36, s_36);
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_14 = NULL;
  t = SSL_stdin_stream();
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_14 = NULL;
  t = SSL_stdout_stream();
  r_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_14 = NULL;
  t = SSL_stderr_stream();
  s_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_14);
  return(t);
}
ATerm p_17 (ATerm i_15, ATerm t)
{
  ATerm j_15 = NULL;
  t = SSL_explode_term(i_15);
  if(match_cons(t, sym__2))
    {
      ATerm r_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_20 = ATgetArgument(t, 1);
        if(((ATgetType(s_20) == AT_LIST) && !(ATisEmpty(s_20))))
          {
            j_15 = ATgetFirst((ATermList) s_20);
            {
              ATerm t_20 = (ATerm) ATgetNext((ATermList) s_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm r_17 (ATerm z_15, ATerm b_16, ATerm c_16, ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,i_16 = NULL,o_1 = NULL;
  t = SSLgetAnnotations(c_16);
  f_16 = t;
  t = z_15;
  if(match_cons(t, sym_Path_1))
    {
      i_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_16, b_16);
  o_1 = t;
  t = SSLsetAnnotations(o_1, f_16);
  if(match_cons(t, sym__2))
    {
      d_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(d_16, e_16, t);
  return(t);
}
ATerm s_17 (ATerm m_16, ATerm n_16, ATerm p_16, ATerm t)
{
  ATerm q_16 = NULL,v_16 = NULL,w_16 = NULL,z_16 = NULL,q_1 = NULL;
  t = SSLgetAnnotations(p_16);
  w_16 = t;
  t = SSL_is_string(m_16);
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_16, n_16);
  q_1 = t;
  t = SSLsetAnnotations(q_1, w_16);
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      v_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(q_16, v_16, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
  i_17 = t;
  if(match_cons(t, sym__2))
    {
      j_17 = ATgetArgument(t, 0);
      k_17 = ATgetArgument(t, 1);
      {
        ATerm z_20 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_17(i_17, t);
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = z_20;
            {
              ATerm e_21 = t;
              int f_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_17(j_17, k_17, i_17, t);
                  ;
                  LocalPopChoice(f_21);
                }
              else
                {
                  t = e_21;
                  t = s_17(j_17, k_17, i_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_17(i_17, t);
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_g_21;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,x_17 = NULL;
  ATerm h_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_17 = NULL;
      y_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_17, term_k_21);
      t = n_6(t);
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = h_21;
      t = debug_1_0(p_1, t);
      _fail(t);
    }
  u_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(x_17, t);
  t_17 = t;
  t = u_17;
  t = fclose_0_0(t);
  t = t_17;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_18 = NULL,d_18 = NULL;
      c_18 = t;
      t = (ATerm) ATinsert(ATempty, term_r_21);
      d_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_18, (ATerm) ATinsert(ATempty, term_r_21));
      t = o_6(c_18, d_18, t);
      LocalPopChoice(p_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_21;
      {
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_21 = t;
            if((PushChoice() == 0))
              {
                ATerm e_18 = NULL,n_18 = NULL;
                e_18 = t;
                t = (ATerm) ATinsert(ATempty, term_u_9);
                n_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, e_18, (ATerm) ATinsert(ATempty, term_u_9));
                t = o_6(e_18, n_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_21;
              }
            t = debug_1_0(r_1, t);
            ;
            LocalPopChoice(u_21);
          }
        else
          {
            t = t_21;
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
  t = term_y_21;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
  j_19 = t;
  t = term_q_17;
  k_19 = t;
  t = (ATerm) ATinsert(ATempty, term_a_22);
  l_19 = t;
  t = SSL_printnl(k_19, l_19);
  t = j_19;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
  if(match_cons(t, sym__3))
    {
      m_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
      o_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_6(m_19, n_19, o_19, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  p_19 = t;
  t = term_q_17;
  q_19 = t;
  t = (ATerm) ATinsert(ATempty, term_c_22);
  r_19 = t;
  t = SSL_printnl(q_19, r_19);
  t = p_19;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
  u_19 = t;
  t = term_q_17;
  v_19 = t;
  t = (ATerm) ATinsert(ATempty, term_a_22);
  w_19 = t;
  t = SSL_printnl(v_19, w_19);
  t = u_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm o_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,w_18 = NULL,y_18 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  o_18 = t;
  t = if_verbose5_1_0(t_1, t);
  {
    ATerm d_22 = t;
    if((PushChoice() == 0))
      {
        ATerm f_19 = NULL,i_19 = NULL;
        t = term_e_22;
        f_19 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, o_18);
        i_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATmakeAppl(sym_Imported_1, o_18));
        t = v_6(f_19, i_19, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_22;
      }
    r_18 = t;
    t = term_e_22;
    c_19 = t;
    t = term_h_22;
    d_19 = t;
    t = (ATerm) ATinsert(ATempty, o_18);
    e_19 = t;
    t = SSL_table_put(c_19, d_19, e_19);
    t = r_18;
    t = if_verbose4_1_0(y_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(a_2, t);
    q_18 = t;
    t = term_e_22;
    b_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_22, q_18);
    t = k_6(b_2, b_19, q_18, t);
    t = if_verbose6_1_0(d_2, t);
    t = term_e_22;
    s_18 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, o_18);
    w_18 = t;
    t = (ATerm) ATempty;
    y_18 = t;
    t = SSL_table_put(s_18, w_18, y_18);
    t = (ATerm) ATmakeAppl(sym__3, term_e_22, (ATerm)ATmakeAppl(sym_Imported_1, o_18), (ATerm) ATempty);
    t = if_verbose4_1_0(f_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_71 (ATerm), ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
  m_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_20;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_20 = ATgetFirst((ATermList) t);
          o_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_5 = NULL,e_6 = NULL,g_6 = NULL,v_1 = NULL;
            t = SSLgetAnnotations(m_20);
            x_5 = t;
            t = n_20;
            t = r_71(t);
            e_6 = t;
            t = o_20;
            t = filter_1_0(r_71, t);
            g_6 = t;
            t = (ATerm) ATinsert(CheckATermList(g_6), e_6);
            v_1 = t;
            t = SSLsetAnnotations(v_1, x_5);
            ;
            LocalPopChoice(o_22);
          }
        else
          {
            t = k_22;
            t = o_20;
            t = filter_1_0(r_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm q_73 (ATerm), ATerm t)
{
  ATerm u_20 (ATerm t)
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_73(t);
        t = u_20(t);
        ;
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
      }
    return(t);
  }
  t = u_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
        ATerm u_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_20 = NULL;
            t = term_w_22;
            v_20 = t;
            t = SSL_getenv(v_20);
            ;
            LocalPopChoice(v_22);
          }
        else
          {
            t = u_22;
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
  t = term_x_22;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL;
  t = term_e_22;
  c_21 = t;
  t = term_y_22;
  d_21 = t;
  t = term_b_23;
  t = v_6(c_21, d_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm c_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_23;
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
  t = term_d_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm w_20 = NULL;
  t = if_verbose5_1_0(i_2, t);
  w_20 = t;
  {
    ATerm g_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_20 = NULL,y_20 = NULL;
        t = term_e_22;
        x_20 = t;
        t = term_h_22;
        y_20 = t;
        t = term_k_23;
        t = v_6(x_20, y_20, t);
        ;
        LocalPopChoice(j_23);
      }
    else
      {
        t = g_23;
        {
          ATerm a_21 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          a_21 = t;
          t = repeat_1_0(m_2, t);
          t = a_21;
        }
      }
    t = w_20;
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
  t = term_l_23;
  return(t);
}
ATerm a_23 (ATerm i_21, ATerm t)
{
  ATerm o_21 = NULL,q_21 = NULL,s_21 = NULL;
  t = term_e_22;
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, i_21);
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATmakeAppl(sym_Tool_1, i_21));
  t = v_6(q_21, s_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_23 = ATgetFirst((ATermList) t);
      if(match_cons(m_23, sym__2))
        {
          ATerm o_23 = ATgetArgument(m_23, 0);
          o_21 = ATgetArgument(m_23, 1);
        }
      else
        _fail(t);
      {
        ATerm n_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_21;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_e_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(d_3, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_p_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_21 = NULL,x_21 = NULL,b_22 = NULL;
      t = if_verbose5_1_0(s_2, t);
      t = xtc_load_0_0(t);
      b_22 = t;
      if(match_cons(t, sym__2))
        {
          v_21 = ATgetArgument(t, 0);
          x_21 = ATgetArgument(t, 1);
          {
            ATerm s_23 = t;
            int t_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_22 = NULL,g_22 = NULL,l_22 = NULL;
                t = term_e_22;
                g_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, v_21);
                l_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATmakeAppl(sym_Tool_1, v_21));
                t = v_6(g_22, l_22, t);
                {
                  ATerm v_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((x_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((f_22 != NULL) && (f_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          f_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(v_2, t);
                  t = not_null(f_22);
                }
                ;
                LocalPopChoice(t_23);
              }
            else
              {
                t = s_23;
                t = a_23(b_22, t);
              }
          }
        }
      else
        {
          t = a_23(b_22, t);
        }
      t = if_verbose5_1_0(x_2, t);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm z_22 = NULL,o_7 = NULL,p_7 = NULL;
        z_22 = t;
        t = term_q_17;
        o_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_23), z_22), term_u_23);
        p_7 = t;
        t = SSL_printnl(o_7, p_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_23), z_22), term_u_23);
        t = if_verbose5_1_0(c_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm p_6 (ATerm v_29, ATerm w_29, ATerm t)
{
  t = SSL_strcat(v_29, w_29);
  return(t);
}
ATerm debug_1_0 (ATerm a_60 (ATerm), ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,h_23 = NULL,i_23 = NULL;
  e_23 = t;
  t = a_60(t);
  f_23 = t;
  t = term_q_17;
  h_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_23), f_23);
  i_23 = t;
  t = SSL_printnl(h_23, i_23);
  t = e_23;
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm w_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_23);
    }
  else
    {
      t = w_23;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_23 = NULL;
      x_23 = t;
      t = SSL_is_string(x_23);
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(e_3, t);
            ;
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
            {
              ATerm f_24 = NULL,g_24 = NULL,j_24 = NULL;
              f_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_24 = ATgetArgument(t, 0);
                  t = g_24;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_24 = ATgetArgument(t, 0);
                      t = g_24;
                      {
                        ATerm e_24 = t;
                        int h_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(h_24);
                          }
                        else
                          {
                            t = e_24;
                            t = debug_1_0(f_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_24 = NULL,q_24 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_24 = ATgetArgument(t, 0);
                          j_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_24;
                      t = eval_config_0_0(t);
                      p_24 = t;
                      t = j_24;
                      t = eval_config_0_0(t);
                      q_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_24, q_24);
                      t = p_6(p_24, q_24, t);
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
  ATerm v_24 = NULL,w_24 = NULL;
  v_24 = t;
  t = term_i_24;
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_24, v_24);
  t = v_6(w_24, v_24, t);
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_24 = NULL,y_24 = NULL;
        t = eval_config_0_0(t);
        x_24 = t;
        t = term_i_24;
        y_24 = t;
        t = SSL_table_put(y_24, v_24, x_24);
        t = x_24;
        ;
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
      }
  }
  return(t);
}
ATerm q_6 (ATerm m_12, ATerm n_12, ATerm t)
{
  t = SSL_copy(m_12, n_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL;
  s_25 = t;
  if(match_cons(t, sym_FILE_1))
    {
      t_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_8 = NULL;
        t = s_25;
        t = n_0(t);
        n_8 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = n_8;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = n_8;
          }
        t = (ATerm) ATmakeAppl(sym__2, t_25, n_8);
        t = q_6(t_25, n_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, t_25);
        ;
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        {
          ATerm o_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_8 = NULL;
              t = s_25;
              t = n_0(t);
              z_8 = t;
              {
                ATerm s_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_9 = NULL;
                    b_9 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = b_9;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = b_9;
                          }
                        else
                          {
                            t = b_9;
                            if((t_25 != t))
                              {
                                _fail(t);
                              }
                            t = b_9;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_24;
                  }
                t = (ATerm) ATmakeAppl(sym__2, t_25, z_8);
                t = q_6(t_25, z_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, t_25);
              }
              ;
              LocalPopChoice(r_24);
            }
          else
            {
              t = o_24;
              t = s_25;
              t = n_0(t);
              if((t_25 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_25);
            }
        }
      }
  }
  return(t);
}
ATerm r_6 (ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  z_25 = t;
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
        t = v_6(k_33, l_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_24 = ATgetFirst((ATermList) t);
            y_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_24);
        t = SSL_table_put(k_33, l_33, y_25);
        t = (ATerm) ATmakeAppl(sym__3, k_33, l_33, y_25);
      }
    else
      {
        t = t_24;
        t = SSL_table_remove(k_33, l_33);
        t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
      }
    t = z_25;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_74 (ATerm), ATerm t)
{
  ATerm a_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  j_26 = t;
  t = r_74(t);
  i_26 = t;
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_26 = NULL;
        t = term_m_18;
        m_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_26, term_m_18);
        t = v_6(i_26, m_26, t);
        ;
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_26 = ATgetFirst((ATermList) t);
        a_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_m_18;
    k_26 = t;
    t = SSL_table_put(i_26, k_26, a_26);
    t = h_26;
    {
      ATerm j_3 (ATerm t)
      {
        ATerm n_26 = NULL;
        n_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_26, n_26);
        t = r_6(i_26, n_26, t);
        return(t);
      }
      t = map_1_0(j_3, t);
      t = j_26;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm t)
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_75(t);
      t = n_75(t);
      ;
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      t = n_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_74 (ATerm), ATerm t)
{
  ATerm p_26 = NULL,r_26 = NULL,s_26 = NULL,v_26 = NULL,w_26 = NULL;
  r_26 = t;
  t = q_74(t);
  p_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_26, term_m_18);
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_25 = ATgetArgument(t, 0);
            ATerm h_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_m_18;
        a_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_26, term_m_18);
        t = v_6(p_26, a_27, t);
        ;
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        t = (ATerm) ATempty;
      }
    s_26 = t;
    t = term_m_18;
    v_26 = t;
    t = (ATerm) ATinsert(CheckATermList(s_26), (ATerm) ATempty);
    w_26 = t;
    t = SSL_table_put(p_26, v_26, w_26);
    t = r_26;
  }
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm k_27 = NULL;
  k_27 = t;
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(k_27);
        ;
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = k_27;
      }
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  ATerm e_27 = NULL;
  ATerm m_3 (ATerm t)
  {
    ATerm f_27 = NULL;
    f_27 = t;
    {
      ATerm k_25 = t;
      int l_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_27 = NULL,h_27 = NULL;
          t = term_x_19;
          g_27 = t;
          t = term_m_18;
          h_27 = t;
          t = term_m_25;
          t = v_6(g_27, h_27, t);
          ;
          LocalPopChoice(l_25);
        }
      else
        {
          t = k_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((e_27 != NULL) && (e_27 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            e_27 = ATgetFirst((ATermList) t);
          {
            ATerm n_25 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = e_27;
      t = map_1_0(o_3, t);
      t = f_27;
      t = end_scope_1_0(q_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(k_3, t);
  t = restore_always_2_0(v_77, m_3, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      t = term_q_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_77 (ATerm), ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm r_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_27 = NULL;
        t = term_z_19;
        t = get_config_0_0(t);
        n_27 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_27);
        ;
        LocalPopChoice(u_25);
      }
    else
      {
        t = r_25;
        t = term_t_9;
      }
    t = w_77(t);
    t = copy_to_1_0(t_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(r_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
  q_27 = t;
  t = term_g_19;
  t = whoami_0_0(t);
  t_27 = t;
  t = term_q_17;
  v_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_25), t_27), term_v_25);
  w_27 = t;
  t = SSL_printnl(v_27, w_27);
  t = term_s_9;
  u_27 = t;
  t = SSL_exit(u_27);
  t = q_27;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm d_28 = NULL;
  d_28 = t;
  if(match_string(t, "-k"))
    {
      t = d_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_28;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm g_28 = NULL,j_28 = NULL,k_28 = NULL;
  g_28 = t;
  t = SSL_string_to_int(g_28);
  j_28 = t;
  t = term_x_25;
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_25, j_28);
  t = y_6(k_28, j_28, t);
  t = g_28;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_3, v_3, w_3, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  if(match_string(t, "-S"))
    {
      t = m_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_28;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL;
  t = term_l_9;
  p_28 = t;
  t = term_c_26;
  q_28 = t;
  t = term_d_26;
  t = y_6(p_28, q_28, t);
  t = term_e_26;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_f_26;
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
  ATerm r_28 = NULL,v_28 = NULL,z_28 = NULL;
  r_28 = t;
  t = SSL_string_to_int(r_28);
  v_28 = t;
  t = term_l_9;
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_9, v_28);
  t = y_6(z_28, v_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_28);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_g_26;
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
  ATerm a_29 = NULL,b_29 = NULL;
  t = term_l_26;
  a_29 = t;
  t = term_g_19;
  b_29 = t;
  t = term_o_26;
  t = y_6(a_29, b_29, t);
  t = term_q_26;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_t_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_3, y_3, z_3, t);
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = u_26;
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_4, g_4, h_4, t);
            ;
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
            t = Option_3_0(j_4, l_4, p_4, t);
          }
      }
    }
  return(t);
}
ATerm y_6 (ATerm f_35, ATerm g_35, ATerm t)
{
  ATerm c_29 = NULL;
  t = term_i_24;
  c_29 = t;
  t = SSL_table_put(c_29, f_35, g_35);
  t = (ATerm) ATmakeAppl(sym__3, term_i_24, f_35, g_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
      t = term_g_19;
      t = h_0(t);
      j_29 = t;
      t = term_b_27;
      k_29 = t;
      t = term_c_27;
      l_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_27, term_c_27, j_29);
      t = w_6(k_29, l_29, j_29, t);
      _fail(t);
    }
  else
    {
      ATerm q_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_29 = ATgetFirst((ATermList) t);
          i_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_29;
      t = d_0(t);
      t = term_g_19;
      t = g_0(t);
      q_29 = t;
      t = (ATerm) ATinsert(CheckATermList(i_29), q_29);
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm s_29 = NULL;
  s_29 = t;
  if(match_string(t, "-o"))
    {
      t = s_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_29;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL;
  t_29 = t;
  t = term_y_19;
  u_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_19, t_29);
  t = y_6(u_29, t_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_29);
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_4, s_4, t_4, t);
  return(t);
}
ATerm w_6 (ATerm f_33, ATerm g_33, ATerm e_33, ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_33, g_33);
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_27 = ATgetArgument(t, 0);
            ATerm m_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_33, g_33);
        t = v_6(f_33, g_33, t);
        ;
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = (ATerm) ATempty;
      }
    z_29 = t;
    t = (ATerm) ATinsert(CheckATermList(z_29), e_33);
    a_30 = t;
    t = SSL_table_put(f_33, g_33, a_30);
    t = y_29;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm m_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
      t = term_g_19;
      t = m_0(t);
      r_30 = t;
      t = term_b_27;
      s_30 = t;
      t = term_c_27;
      t_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_27, term_c_27, r_30);
      t = w_6(s_30, t_30, r_30, t);
      _fail(t);
    }
  else
    {
      ATerm x_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_30 = ATgetFirst((ATermList) t);
          o_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_30 = ATgetFirst((ATermList) t);
          q_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_30;
      t = k_0(t);
      t = p_30;
      t = l_0(t);
      x_30 = t;
      t = (ATerm) ATinsert(CheckATermList(q_30), x_30);
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm z_30 = NULL;
  z_30 = t;
  if(match_string(t, "-i"))
    {
      t = z_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_30;
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL;
  c_31 = t;
  t = term_z_19;
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_19, c_31);
  t = y_6(d_31, c_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_31);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, x_4, z_4, t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm f_31 = NULL;
  f_31 = t;
  if(match_string(t, "-a"))
    {
      t = f_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = f_31;
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL;
  i_31 = t;
  t = term_p_27;
  j_31 = t;
  t = term_g_19;
  k_31 = t;
  t = term_r_27;
  t = y_6(j_31, k_31, t);
  t = i_31;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_s_27;
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
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  l_31 = t;
  t = term_x_27;
  m_31 = t;
  t = term_g_19;
  n_31 = t;
  t = term_y_27;
  t = y_6(m_31, n_31, t);
  t = l_31;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_z_27;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_5, b_5, c_5, t);
      ;
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
      t = Option_3_0(e_5, f_5, i_5, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_19;
  t = whoami_0_0(t);
  o_31 = t;
  t = term_q_17;
  q_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_28), o_31);
  r_31 = t;
  t = SSL_printnl(q_31, r_31);
  t = term_s_9;
  p_31 = t;
  t = SSL_exit(p_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_28;
  t = get_config_0_0(t);
  return(t);
}
ATerm s_6 (ATerm a_31, ATerm b_31, ATerm t)
{
  ATerm f_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_31, b_31);
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = f_28;
      t = SSL_addr(a_31, b_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
  t_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_31;
      t = n_70(t);
    }
  else
    {
      ATerm y_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_31 = ATgetFirst((ATermList) t);
          v_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_31;
      t = foldr_2_0(n_70, o_70, t);
      y_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_31, y_31);
      t = o_70(t);
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
  t = term_c_26;
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm z_9 = NULL,b_10 = NULL;
  if(match_cons(t, sym__2))
    {
      z_9 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(z_9, b_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_32 = NULL,p_9 = NULL,q_9 = NULL;
  t = times_0_0(t);
  q_9 = t;
  t = SSL_explode_term(q_9);
  if(match_cons(t, sym__2))
    {
      ATerm i_28 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9;
  t = foldr_2_0(m_5, n_5, t);
  b_32 = t;
  t = SSL_TicksToSeconds(b_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,h_33 = NULL;
  y_32 = t;
  if(match_cons(t, sym__2))
    {
      z_32 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_33;
        if((z_32 != t))
          {
            _fail(t);
          }
        t = y_32;
        ;
        LocalPopChoice(n_28);
      }
    else
      {
        t = l_28;
        t = (ATerm) ATmakeAppl(sym__2, z_32, h_33);
        {
          ATerm o_28 = t;
          int s_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_32, h_33);
              ;
              LocalPopChoice(s_28);
            }
          else
            {
              t = o_28;
              t = SSL_gtr(z_32, h_33);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_32, h_33);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_75 (ATerm), ATerm t)
{
  ATerm o_33 = NULL;
  o_33 = t;
  {
    ATerm t_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_33 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        q_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_33, term_s_9);
        t = geq_0_0(t);
        t = o_33;
        t = y_75(t);
        ;
        LocalPopChoice(u_28);
      }
    else
      {
        t = t_28;
        t = o_33;
      }
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,v_33 = NULL,w_33 = NULL;
  t = run_time_0_0(t);
  s_33 = t;
  t = term_g_19;
  t = whoami_0_0(t);
  t_33 = t;
  t = term_q_17;
  v_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_28), s_33), term_a_10), t_33);
  w_33 = t;
  t = SSL_printnl(v_33, w_33);
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_28), s_33), term_a_10), t_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_26;
  x_33 = t;
  t = SSL_exit(x_33);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm k_34 = NULL,p_34 = NULL;
  p_34 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_34;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_34 = ATgetArgument(t, 0);
          {
            ATerm y_10 = NULL,c_2 = NULL;
            t = SSLgetAnnotations(p_34);
            y_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_34);
            c_2 = t;
            t = SSLsetAnnotations(c_2, y_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_34;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      t = fetch_1_0(t_5, t);
    }
  t = x_79(t);
  return(t);
}
ATerm map_1_0 (ATerm v_63 (ATerm), ATerm t)
{
  ATerm j_35 (ATerm t)
  {
    ATerm e_35 = NULL,h_35 = NULL,i_35 = NULL;
    e_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_35;
      }
    else
      {
        ATerm l_11 = NULL,q_11 = NULL,r_11 = NULL,e_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_35 = ATgetFirst((ATermList) t);
            i_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_35);
        l_11 = t;
        t = h_35;
        t = v_63(t);
        q_11 = t;
        t = i_35;
        t = j_35(t);
        r_11 = t;
        t = (ATerm) ATinsert(CheckATermList(r_11), q_11);
        e_2 = t;
        t = SSLsetAnnotations(e_2, l_11);
      }
    return(t);
  }
  t = j_35(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_35 = ATgetFirst((ATermList) t);
      n_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_35 = NULL,a_36 = NULL;
        ATerm u_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_35)), not_null(a_36));
          return(t);
        }
        t = n_35;
        t = j_0(t);
        if(((z_35 != NULL) && (z_35 != t)))
          _fail(t);
        else
          z_35 = t;
        t = m_35;
        t = i_0(t);
        if(((a_36 != NULL) && (a_36 != t)))
          _fail(t);
        else
          a_36 = t;
        t = n_35;
        t = reverse_acc_2_0(i_0, u_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_19;
      t = j_0(t);
    }
  return(t);
}
ATerm v_6 (ATerm w_34, ATerm x_34, ATerm t)
{
  t = SSL_table_get(w_34, x_34);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,w_2 = NULL;
  g_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_36);
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_36);
  w_2 = t;
  t = SSLsetAnnotations(w_2, e_36);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm i_36 = NULL;
  i_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_36), term_e_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL;
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
      t = fetch_1_0(v_5, t);
    }
  t = term_m_29;
  t = echo_0_0(t);
  t = term_b_27;
  c_36 = t;
  t = term_c_27;
  d_36 = t;
  t = term_n_29;
  t = v_6(c_36, d_36, t);
  t = reverse_acc_2_0(_id, w_5, t);
  t = map_1_0(y_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_64 (ATerm), ATerm t)
{
  ATerm t_37 (ATerm t)
  {
    ATerm o_37 = NULL,r_37 = NULL,s_37 = NULL;
    o_37 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_37 = ATgetFirst((ATermList) t);
        s_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_29 = t;
      int p_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_12 = NULL,u_12 = NULL,h_3 = NULL;
          t = SSLgetAnnotations(o_37);
          i_12 = t;
          t = r_37;
          t = f_64(t);
          u_12 = t;
          t = (ATerm) ATinsert(CheckATermList(s_37), u_12);
          h_3 = t;
          t = SSLsetAnnotations(h_3, i_12);
          ;
          LocalPopChoice(p_29);
        }
      else
        {
          t = o_29;
          {
            ATerm j_13 = NULL,p_13 = NULL,i_3 = NULL;
            t = SSLgetAnnotations(o_37);
            j_13 = t;
            t = s_37;
            t = t_37(t);
            p_13 = t;
            t = (ATerm) ATinsert(CheckATermList(p_13), r_37);
            i_3 = t;
            t = SSLsetAnnotations(i_3, j_13);
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
    ATerm r_29 = t;
    int x_29 = stack_ptr;
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
                ATerm b_30 = ATgetFirst((ATermList) t);
                ATerm c_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_37;
          }
        ;
        LocalPopChoice(x_29);
      }
    else
      {
        t = r_29;
        t = (ATerm) ATinsert(ATempty, z_37);
      }
    a_38 = t;
    t = term_q_25;
    b_38 = t;
    t = SSL_printnl(b_38, a_38);
    t = z_37;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_28;
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
ATerm x_6 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL;
  t = term_d_30;
  j_38 = t;
  t = term_g_19;
  k_38 = t;
  t = term_e_30;
  t = y_6(j_38, k_38, t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_f_30;
  return(t);
}
ATerm b_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL;
  t = term_d_30;
  n_38 = t;
  t = term_g_19;
  o_38 = t;
  t = term_e_30;
  t = y_6(n_38, o_38, t);
  t = term_g_30;
  l_38 = t;
  t = term_g_19;
  m_38 = t;
  t = term_h_30;
  t = y_6(l_38, m_38, t);
  t = term_i_30;
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_5, x_6, a_7, t);
      ;
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      t = Option_3_0(b_7, e_7, f_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_51 (ATerm), ATerm n_51 (ATerm), ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,p_3 = NULL;
  u_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_38 = ATgetFirst((ATermList) t);
      r_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_38);
  p_38 = t;
  t = q_38;
  t = m_51(t);
  s_38 = t;
  t = r_38;
  t = n_51(t);
  t_38 = t;
  t = (ATerm) ATinsert(CheckATermList(t_38), s_38);
  p_3 = t;
  t = SSLsetAnnotations(p_3, p_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,j_39 = NULL,k_39 = NULL,y_4 = NULL;
  z_38 = t;
  {
    ATerm n_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_30;
        t = v_81(t);
        ;
        LocalPopChoice(u_30);
      }
    else
      {
        t = n_30;
      }
    t = z_38;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_39 = ATgetFirst((ATermList) t);
        c_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_38);
    a_39 = t;
    t = term_e_28;
    k_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_28, b_39);
    t = y_6(k_39, b_39, t);
    t = c_39;
    {
      ATerm v_39 (ATerm t)
      {
        ATerm w_30 = t;
        int y_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_31 = t;
            int s_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_39 = NULL;
                n_39 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_39;
                ;
                LocalPopChoice(s_31);
              }
            else
              {
                t = e_31;
                t = v_81(t);
                t = Cons_2_0(_id, v_39, t);
              }
            ;
            LocalPopChoice(y_30);
          }
        else
          {
            t = w_30;
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
      t = v_39(t);
      j_39 = t;
      t = (ATerm) ATinsert(CheckATermList(j_39), (ATerm) ATmakeAppl(sym_Program_1, b_39));
      y_4 = t;
      t = SSLsetAnnotations(y_4, a_39);
    }
  }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm h_40 = NULL;
  h_40 = t;
  if(match_string(t, "--help"))
    {
      t = h_40;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_40;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_40;
        }
    }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL;
  t = term_d_29;
  i_40 = t;
  t = term_g_19;
  j_40 = t;
  t = term_w_31;
  t = y_6(i_40, j_40, t);
  t = term_x_31;
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_z_31;
  return(t);
}
ATerm s_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL;
  c_40 = t;
  t = term_b_27;
  e_40 = t;
  t = term_c_27;
  f_40 = t;
  t = (ATerm) ATempty;
  g_40 = t;
  t = SSL_table_put(e_40, f_40, g_40);
  t = c_40;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm a_32 = t;
      int c_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_81(t);
          ;
          LocalPopChoice(c_32);
        }
      else
        {
          t = a_32;
          {
            ATerm d_32 = t;
            int e_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_7, j_7, n_7, t);
                ;
                LocalPopChoice(e_32);
              }
            else
              {
                t = d_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_7, t);
    {
      ATerm f_32 = t;
      int g_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_40 = NULL;
          q_40 = t;
          {
            ATerm h_32 = t;
            int i_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_13 = NULL;
                t = q_40;
                {
                  ATerm j_32 = t;
                  int k_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_d_29;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(k_32);
                    }
                  else
                    {
                      t = j_32;
                      t = fetch_1_0(s_7, t);
                    }
                  t = q_40;
                  t = default_system_usage_0_0(t);
                  t = term_c_26;
                  z_13 = t;
                  t = SSL_exit(z_13);
                }
                ;
                LocalPopChoice(i_32);
              }
            else
              {
                t = h_32;
                {
                  ATerm p_14 = NULL;
                  t = term_d_30;
                  t = get_config_0_0(t);
                  t = q_40;
                  t = default_system_about_0_0(t);
                  t = term_c_26;
                  p_14 = t;
                  t = SSL_exit(p_14);
                }
              }
          }
          ;
          LocalPopChoice(g_32);
        }
      else
        {
          t = f_32;
          {
            ATerm l_32 = t;
            int n_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
                ATerm u_7 (ATerm t)
                {
                  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,d_5 = NULL;
                  w_40 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      v_40 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_40);
                  u_40 = t;
                  t = v_40;
                  if(((a_40 != NULL) && (a_40 != t)))
                    _fail(t);
                  else
                    a_40 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, v_40);
                  d_5 = t;
                  t = SSLsetAnnotations(d_5, u_40);
                  return(t);
                }
                t = fetch_1_0(u_7, t);
                t = term_q_17;
                s_40 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_40)), term_p_32);
                t_40 = t;
                t = SSL_printnl(s_40, t_40);
                t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_40)), term_p_32));
                t = default_system_usage_0_0(t);
                t = term_s_9;
                r_40 = t;
                t = SSL_exit(r_40);
                ;
                LocalPopChoice(n_32);
              }
            else
              {
                t = l_32;
              }
          }
        }
      b_40 = t;
      t = term_b_27;
      d_40 = t;
      t = SSL_table_destroy(d_40);
      t = b_40;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL;
  t = parse_options_1_0(z_79, t);
  b_41 = t;
  t = term_q_32;
  e_41 = t;
  t = SSL_table_create(e_41);
  t = term_q_32;
  c_41 = t;
  t = term_r_32;
  d_41 = t;
  t = SSL_table_put(c_41, d_41, b_41);
  t = b_41;
  t = b_80(t);
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_80, t);
        ;
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
        {
          ATerm u_32 = t;
          int v_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_80(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(v_32);
            }
          else
            {
              t = u_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      ;
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
      {
        ATerm a_33 = t;
        int b_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(b_33);
          }
        else
          {
            t = a_33;
            {
              ATerm c_33 = t;
              int d_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(d_33);
                }
              else
                {
                  t = c_33;
                  {
                    ATerm i_33 = t;
                    int j_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(y_7, z_7, a_8, t);
                        ;
                        LocalPopChoice(j_33);
                      }
                    else
                      {
                        t = i_33;
                        {
                          ATerm m_33 = t;
                          int n_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(n_33);
                            }
                          else
                            {
                              t = m_33;
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
ATerm x_7 (ATerm t)
{
  t = xtc_io_1_0(b_8, t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL;
  t = term_p_33;
  q_41 = t;
  t = term_g_19;
  r_41 = t;
  t = term_r_33;
  t = y_6(q_41, r_41, t);
  t = term_u_33;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_y_33;
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_41 = NULL;
      t_41 = t;
      t = term_p_27;
      t = get_config_0_0(t);
      t = t_41;
      ;
      LocalPopChoice(a_34);
    }
  else
    {
      t = z_33;
      {
        ATerm b_34 = t;
        int f_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_42 = NULL,b_42 = NULL;
            b_42 = t;
            if(match_cons(t, sym_FILE_1))
              {
                a_42 = ATgetArgument(t, 0);
                {
                  ATerm w_14 = NULL,g_5 = NULL;
                  t = SSLgetAnnotations(b_42);
                  w_14 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, a_42);
                  g_5 = t;
                  t = SSLsetAnnotations(g_5, w_14);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = b_42;
              }
            LocalPopChoice(f_34);
            t = xtc_transform_file_2_0(c_8, e_8, t);
          }
        else
          {
            t = b_34;
            t = xtc_transform_term_2_0(g_8, h_8, t);
          }
      }
    }
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_42 = NULL,i_42 = NULL;
        i_42 = t;
        if(match_cons(t, sym_FILE_1))
          {
            h_42 = ATgetArgument(t, 0);
            {
              ATerm d_15 = NULL,h_5 = NULL;
              t = SSLgetAnnotations(i_42);
              d_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_42);
              h_5 = t;
              t = SSLsetAnnotations(h_5, d_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_42;
          }
        LocalPopChoice(h_34);
        t = xtc_transform_file_2_0(k_8, l_8, t);
      }
    else
      {
        t = g_34;
        t = xtc_transform_term_2_0(m_8, o_8, t);
      }
    {
      ATerm i_34 = t;
      int j_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_42 = NULL;
          j_42 = t;
          t = term_x_27;
          t = get_config_0_0(t);
          t = j_42;
          ;
          LocalPopChoice(j_34);
        }
      else
        {
          t = i_34;
          {
            ATerm n_34 = t;
            int o_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_42 = NULL,r_42 = NULL;
                r_42 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    q_42 = ATgetArgument(t, 0);
                    {
                      ATerm r_15 = NULL,j_5 = NULL;
                      t = SSLgetAnnotations(r_42);
                      r_15 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, q_42);
                      j_5 = t;
                      t = SSLsetAnnotations(j_5, r_15);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = r_42;
                  }
                LocalPopChoice(o_34);
                t = xtc_transform_file_2_0(p_8, q_8, t);
              }
            else
              {
                t = n_34;
                t = xtc_transform_term_2_0(r_8, x_8, t);
              }
          }
        }
      {
        ATerm q_34 = t;
        int r_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_42 = NULL,y_42 = NULL;
            y_42 = t;
            if(match_cons(t, sym_FILE_1))
              {
                x_42 = ATgetArgument(t, 0);
                {
                  ATerm a_16 = NULL,k_5 = NULL;
                  t = SSLgetAnnotations(y_42);
                  a_16 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, x_42);
                  k_5 = t;
                  t = SSLsetAnnotations(k_5, a_16);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = y_42;
              }
            LocalPopChoice(r_34);
            t = xtc_transform_file_2_0(y_8, e_9, t);
          }
        else
          {
            t = q_34;
            t = xtc_transform_term_2_0(f_9, g_9, t);
          }
        {
          ATerm s_34 = t;
          int t_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_43 = NULL,l_43 = NULL;
              l_43 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  k_43 = ATgetArgument(t, 0);
                  {
                    ATerm u_16 = NULL,s_5 = NULL;
                    t = SSLgetAnnotations(l_43);
                    u_16 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, k_43);
                    s_5 = t;
                    t = SSLsetAnnotations(s_5, u_16);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = l_43;
                }
              LocalPopChoice(t_34);
              t = xtc_transform_file_2_0(h_9, pass_verbose_0_0, t);
            }
          else
            {
              t = s_34;
              t = xtc_transform_term_2_0(j_9, pass_verbose_0_0, t);
            }
        }
      }
    }
  }
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_v_34;
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_v_34;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_z_34;
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  t = pass_verbose_0_0(t);
  z_42 = t;
  t = term_a_35;
  t = xtc_find_0_0(t);
  a_43 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(z_42), a_43), term_b_35);
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = term_z_34;
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL;
  t = pass_verbose_0_0(t);
  c_43 = t;
  t = term_a_35;
  t = xtc_find_0_0(t);
  d_43 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(c_43), d_43), term_b_35);
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_c_35;
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = term_c_35;
  return(t);
}
ATerm pp_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(w_7, default_usage_0_0, _id, x_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pp_stratego_0_0(t);
  return(t);
}
