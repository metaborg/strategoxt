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
ATerm term_e_35;
ATerm term_d_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_q_33;
ATerm term_w_32;
ATerm term_t_32;
ATerm term_r_32;
ATerm term_h_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_j_31;
ATerm term_y_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_q_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_x_29;
ATerm term_r_29;
ATerm term_o_29;
ATerm term_x_28;
ATerm term_t_28;
ATerm term_k_28;
ATerm term_h_28;
ATerm term_f_28;
ATerm term_t_27;
ATerm term_q_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_o_26;
ATerm term_h_26;
ATerm term_y_25;
ATerm term_y_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_o_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_a_23;
ATerm term_y_22;
ATerm term_w_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_t_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_a_21;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_b_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_o_19;
ATerm term_j_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_q_15;
ATerm term_m_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_k_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_h_8;
ATerm term_f_8;
ATerm term_d_8;
void init_constant_terms (void)
{
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_9, term_b_9, term_d_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_9, term_j_9, term_k_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_q_9, term_s_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_9, term_c_10, term_d_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_10, term_g_10, term_h_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_10, term_p_10, term_u_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_c_11, term_d_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_g_11, term_h_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_11, term_m_11, term_o_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_u_11, term_v_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_j_12, term_k_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_z_12, term_a_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_k_13, term_m_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_p_13, term_q_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_u_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_p_14, term_q_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_z_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_e_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_m_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_d_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_g_16, term_h_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_q_16, term_r_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_z_16, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_k_17, term_l_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_n_20, term_g_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym__2, term_n_20, term_o_20);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_w_22, term_d_22);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_y_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym__2, term_d_27, term_r_22);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_m_27, term_n_27);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_r_22);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_r_22);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym__2, term_r_29, term_r_22);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_r_22);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm read_from_0_0 (ATerm);
ATerm g_6 (ATerm j_15, ATerm k_15, ATerm);
ATerm h_6 (ATerm d_60 (ATerm), ATerm p_162, ATerm r_15, ATerm);
ATerm a_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm);
ATerm i_6 (ATerm f_12, ATerm g_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm i_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm s_58 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm e_76 (ATerm), ATerm);
ATerm l_6 (ATerm d_68 (ATerm), ATerm e_68 (ATerm), ATerm m_22, ATerm l_22, ATerm);
ATerm m_6 (ATerm a_68 (ATerm), ATerm i_22, ATerm h_22, ATerm);
ATerm z_0 (ATerm);
ATerm n_6 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm);
ATerm o_6 (ATerm g_76 (ATerm), ATerm i_34, ATerm h_34, ATerm);
ATerm g_8 (ATerm x_7, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm p_6 (ATerm p_15, ATerm);
ATerm q_6 (ATerm n_36, ATerm o_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm t_10 (ATerm v_8, ATerm);
ATerm x_10 (ATerm c_9, ATerm f_9, ATerm g_9, ATerm);
ATerm y_10 (ATerm t_9, ATerm u_9, ATerm v_9, ATerm);
ATerm open_stream_0_0 (ATerm);
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
ATerm filter_1_0 (ATerm s_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm r_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm b_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm l_16 (ATerm a_15, ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm l_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm k_78 (ATerm), ATerm);
ATerm r_6 (ATerm v_74 (ATerm), ATerm k_32, ATerm i_32, ATerm);
ATerm n_18 (ATerm o_17, ATerm);
ATerm q_18 (ATerm q_17, ATerm w_17, ATerm c_18, ATerm);
ATerm o_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm s_6 (ATerm f_36, ATerm g_36, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm s_0 (ATerm), ATerm t_0 (ATerm), ATerm);
ATerm get_parse_table_0_0 (ATerm);
ATerm w_2 (ATerm);
ATerm a_3 (ATerm);
ATerm sglr_2_0 (ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm k_3 (ATerm);
ATerm parse_and_implode_0_0 (ATerm);
ATerm u_6 (ATerm l_12, ATerm m_12, ATerm);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm);
ATerm v_6 (ATerm g_33, ATerm h_33, ATerm);
ATerm end_scope_1_0 (ATerm s_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm r_74 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm w_77 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm xtc_io_1_0 (ATerm x_77 (ATerm), ATerm);
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
ATerm d_7 (ATerm b_35, ATerm c_35, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm at_end_1_0 (ATerm m_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm n_28 (ATerm d_28, ATerm);
ATerm conc_0_0 (ATerm);
ATerm t_6 (ATerm h_35, ATerm g_35, ATerm);
ATerm b_7 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm);
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
ATerm w_6 (ATerm w_30, ATerm x_30, ATerm);
ATerm foldr_2_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_75 (ATerm), ATerm);
ATerm y_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm a_6 (ATerm);
ATerm need_help_1_0 (ATerm y_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm f_6 (ATerm);
ATerm j_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm g_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_6 (ATerm s_29, ATerm t_29, ATerm);
ATerm debug_1_0 (ATerm b_60 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_63 (ATerm), ATerm);
ATerm c_7 (ATerm);
ATerm e_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm a_7 (ATerm s_34, ATerm t_34, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm f_7 (ATerm);
ATerm h_7 (ATerm);
ATerm j_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm w_81 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm parse_options_1_0 (ATerm v_81 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
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
      t = term_d_8;
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
      t = (ATerm) ATinsert(ATempty, term_f_8);
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_0, (ATerm) ATinsert(ATempty, term_f_8));
      t = s_6(f_0, u_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm g_6 (ATerm j_15, ATerm k_15, ATerm t)
{
  ATerm v_0 = NULL;
  t = SSL_write_term_to_stream_baf(j_15, k_15);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_0);
  return(t);
}
ATerm h_6 (ATerm d_60 (ATerm), ATerm p_162, ATerm r_15, ATerm t)
{
  ATerm w_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_162, term_h_8);
  t = open_stream_0_0(t);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_0, r_15);
  t = d_60(t);
  t = fclose_0_0(t);
  t = r_15;
  return(t);
}
ATerm a_0 (ATerm t)
{
  ATerm a_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_8 = ATgetArgument(t, 0);
      if(match_cons(i_8, sym_Stream_1))
        {
          a_1 = ATgetArgument(i_8, 0);
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
ATerm xtc_transform_term_2_0 (ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(t_78, u_78, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm i_6 (ATerm f_12, ATerm g_12, ATerm t)
{
  t = SSL_execvp(f_12, g_12);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), i_0), term_o_8);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_2), term_r_8), j_1), term_q_8), s_2);
      l_1 = t;
      t = SSL_concat_strings(l_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_64 (ATerm), ATerm t)
{
  ATerm x_2 = NULL;
  ATerm b_0 (ATerm t)
  {
    t = i_64(t);
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
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm y_8 = ATgetArgument(t, 0);
              if((y_2 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm z_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_17), term_i_17), term_c_17), term_w_16), term_j_16), term_e_16), term_x_15), term_q_15), term_f_15), term_b_15), term_r_14), term_k_14), term_c_14), term_x_13), term_r_13), term_n_13), term_g_13), term_v_12), term_w_11), term_p_11), term_j_11), term_e_11), term_v_10), term_k_10), term_e_10), term_w_9), term_l_9), term_e_9);
        t = fetch_elem_1_0(c_0, t);
        ;
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
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
    ATerm n_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_17 = ATgetArgument(t, 0);
            n_3 = ATgetArgument(t, 1);
            {
              ATerm s_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_17);
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_1 = NULL,z_1 = NULL,a_2 = NULL;
              t = n_3;
              {
                ATerm v_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_17;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                x_1 = t;
                t = term_x_17;
                z_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, x_1), term_y_17);
                a_2 = t;
                t = SSL_printnl(z_1, a_2);
                t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, x_1), term_y_17));
              }
              ;
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
              t = c_3;
            }
        }
      }
    else
      {
        t = n_17;
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
ATerm fork_and_wait_1_0 (ATerm s_58 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL;
  a_4 = t;
  t = fork_0_0(t);
  z_3 = t;
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = a_4;
        t = s_58(t);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = SSL_waitpid(z_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_18 = ATgetArgument(t, 0);
            if(((ATgetType(b_18) != AT_INT) || (ATgetInt((ATermInt) b_18) != 0)))
              _fail(t);
            {
              ATerm d_18 = ATgetArgument(t, 1);
            }
            {
              ATerm e_18 = ATgetArgument(t, 2);
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
    t = a_7(not_null(d_4), e_4, t);
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
ATerm if_verbose5_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm i_4 = NULL;
  i_4 = t;
  {
    ATerm f_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_4 = NULL;
        t = term_j_18;
        t = get_config_0_0(t);
        l_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_4, term_q_16);
        t = geq_0_0(t);
        t = i_4;
        t = d_76(t);
        ;
        LocalPopChoice(i_18);
      }
    else
      {
        t = f_18;
        t = i_4;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm o_4 = NULL;
  o_4 = t;
  {
    ATerm k_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_4 = NULL;
        t = term_j_18;
        t = get_config_0_0(t);
        q_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_4, term_z_12);
        t = geq_0_0(t);
        t = o_4;
        t = c_76(t);
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = k_18;
        t = o_4;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_76 (ATerm), ATerm t)
{
  ATerm x_4 = NULL;
  x_4 = t;
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_4 = NULL;
        t = term_j_18;
        t = get_config_0_0(t);
        z_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_4, term_c_10);
        t = geq_0_0(t);
        t = x_4;
        t = e_76(t);
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = x_4;
      }
  }
  return(t);
}
ATerm l_6 (ATerm d_68 (ATerm), ATerm e_68 (ATerm), ATerm m_22, ATerm l_22, ATerm t)
{
  t = e_68(t);
  {
    ATerm o_0 (ATerm t)
    {
      ATerm f_5 = NULL;
      f_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, f_5);
      t = d_68(t);
      return(t);
    }
    t = fetch_1_0(o_0, t);
    t = l_22;
  }
  return(t);
}
ATerm m_6 (ATerm a_68 (ATerm), ATerm i_22, ATerm h_22, ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm s_5 = NULL,u_5 = NULL,v_5 = NULL;
    s_5 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_22;
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
          ATerm r_18 = t;
          int v_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_5;
              {
                ATerm q_0 (ATerm t)
                {
                  t = h_22;
                  return(t);
                }
                t = l_6(a_68, q_0, u_5, v_5, t);
                t = z_5(t);
              }
              ;
              LocalPopChoice(v_18);
            }
          else
            {
              t = r_18;
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
  t = i_22;
  t = z_5(t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm i_7 = NULL;
  if(match_cons(t, sym__2))
    {
      i_7 = ATgetArgument(t, 0);
      if((i_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm n_6 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm k_6 = NULL,x_6 = NULL,y_6 = NULL;
  k_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_18 = ATgetArgument(t, 0);
            ATerm a_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
        t = a_7(y_33, z_33, t);
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = (ATerm) ATempty;
      }
    y_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_6, a_34);
    t = m_6(z_0, y_6, a_34, t);
    x_6 = t;
    t = SSL_table_put(y_33, z_33, x_6);
    t = k_6;
  }
  return(t);
}
ATerm o_6 (ATerm g_76 (ATerm), ATerm i_34, ATerm h_34, ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm k_7 = NULL,l_7 = NULL;
    if(match_cons(t, sym__2))
      {
        k_7 = ATgetArgument(t, 0);
        l_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_34, k_7, l_7);
    t = g_76(t);
    return(t);
  }
  t = h_34;
  t = map_1_0(b_1, t);
  return(t);
}
ATerm g_8 (ATerm x_7, ATerm t)
{
  t = SSL_fclose(x_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_8 = NULL,e_8 = NULL;
  e_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_8 = ATgetArgument(t, 0);
      {
        ATerm d_19 = t;
        int e_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_8);
            ;
            LocalPopChoice(e_19);
          }
        else
          {
            t = d_19;
            t = g_8(e_8, t);
          }
      }
    }
  else
    {
      t = g_8(e_8, t);
    }
  return(t);
}
ATerm p_6 (ATerm p_15, ATerm t)
{
  t = SSL_read_term_from_stream(p_15);
  return(t);
}
ATerm q_6 (ATerm n_36, ATerm o_36, ATerm t)
{
  ATerm j_8 = NULL;
  t = SSL_fopen(n_36, o_36);
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_8);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_8 = NULL;
  t = SSL_stdin_stream();
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_8 = NULL;
  t = SSL_stdout_stream();
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_8 = NULL;
  t = SSL_stderr_stream();
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_8);
  return(t);
}
ATerm t_10 (ATerm v_8, ATerm t)
{
  ATerm x_8 = NULL;
  t = SSL_explode_term(v_8);
  if(match_cons(t, sym__2))
    {
      ATerm f_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_19 = ATgetArgument(t, 1);
        if(((ATgetType(g_19) == AT_LIST) && !(ATisEmpty(g_19))))
          {
            x_8 = ATgetFirst((ATermList) g_19);
            {
              ATerm h_19 = (ATerm) ATgetNext((ATermList) g_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_8;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm x_10 (ATerm c_9, ATerm f_9, ATerm g_9, ATerm t)
{
  ATerm h_9 = NULL,m_9 = NULL,n_9 = NULL,r_9 = NULL,p_1 = NULL;
  t = SSLgetAnnotations(g_9);
  n_9 = t;
  t = c_9;
  if(match_cons(t, sym_Path_1))
    {
      r_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_9, f_9);
  p_1 = t;
  t = SSLsetAnnotations(p_1, n_9);
  if(match_cons(t, sym__2))
    {
      h_9 = ATgetArgument(t, 0);
      m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(h_9, m_9, t);
  return(t);
}
ATerm y_10 (ATerm t_9, ATerm u_9, ATerm v_9, ATerm t)
{
  ATerm y_9 = NULL,a_10 = NULL,b_10 = NULL,j_10 = NULL,q_1 = NULL;
  t = SSLgetAnnotations(v_9);
  b_10 = t;
  t = SSL_is_string(t_9);
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_10, u_9);
  q_1 = t;
  t = SSLsetAnnotations(q_1, b_10);
  if(match_cons(t, sym__2))
    {
      y_9 = ATgetArgument(t, 0);
      a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(y_9, a_10, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,q_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_19 = ATgetArgument(t, 0);
      ATerm j_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  l_10 = t;
  if(match_cons(t, sym__2))
    {
      m_10 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_10(l_10, t);
            ;
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            {
              ATerm m_19 = t;
              int n_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_10(m_10, q_10, l_10, t);
                  ;
                  LocalPopChoice(n_19);
                }
              else
                {
                  t = m_19;
                  t = y_10(m_10, q_10, l_10, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_10(l_10, t);
    }
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
  ATerm p_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_11 = NULL;
      i_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_11, term_s_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_19);
    }
  else
    {
      t = p_19;
      t = debug_1_0(c_1, t);
      _fail(t);
    }
  a_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(b_11, t);
  z_10 = t;
  t = a_11;
  t = fclose_0_0(t);
  t = z_10;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_v_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_11 = NULL,r_11 = NULL;
      k_11 = t;
      t = (ATerm) ATinsert(ATempty, term_b_20);
      r_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_11, (ATerm) ATinsert(ATempty, term_b_20));
      t = s_6(k_11, r_11, t);
      LocalPopChoice(a_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = z_19;
      {
        ATerm c_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_20 = t;
            if((PushChoice() == 0))
              {
                ATerm s_11 = NULL,t_11 = NULL;
                s_11 = t;
                t = (ATerm) ATinsert(ATempty, term_f_8);
                t_11 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_11, (ATerm) ATinsert(ATempty, term_f_8));
                t = s_6(s_11, t_11, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_20;
              }
            t = debug_1_0(e_1, t);
            ;
            LocalPopChoice(d_20);
          }
        else
          {
            t = c_20;
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
  t = term_f_20;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = debug_1_0(m_1, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  t = term_x_17;
  t_12 = t;
  t = (ATerm) ATinsert(ATempty, term_h_20);
  u_12 = t;
  t = SSL_printnl(t_12, u_12);
  t = s_12;
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,b_13 = NULL;
  if(match_cons(t, sym__3))
    {
      x_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
      b_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_6(x_12, y_12, b_13, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
  c_13 = t;
  t = term_x_17;
  d_13 = t;
  t = (ATerm) ATinsert(ATempty, term_i_20);
  e_13 = t;
  t = SSL_printnl(d_13, e_13);
  t = c_13;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm f_13 = NULL,i_13 = NULL,j_13 = NULL;
  f_13 = t;
  t = term_x_17;
  i_13 = t;
  t = (ATerm) ATinsert(ATempty, term_h_20);
  j_13 = t;
  t = SSL_printnl(i_13, j_13);
  t = f_13;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,h_12 = NULL,i_12 = NULL,n_12 = NULL,p_12 = NULL;
  z_11 = t;
  t = if_verbose5_1_0(g_1, t);
  {
    ATerm j_20 = t;
    if((PushChoice() == 0))
      {
        ATerm q_12 = NULL,r_12 = NULL;
        t = term_n_20;
        q_12 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, z_11);
        r_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_20, (ATerm) ATmakeAppl(sym_Imported_1, z_11));
        t = a_7(q_12, r_12, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_20;
      }
    b_12 = t;
    t = term_n_20;
    i_12 = t;
    t = term_o_20;
    n_12 = t;
    t = (ATerm) ATinsert(ATempty, z_11);
    p_12 = t;
    t = SSL_table_put(i_12, n_12, p_12);
    t = b_12;
    t = if_verbose4_1_0(i_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(n_1, t);
    a_12 = t;
    t = term_n_20;
    h_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_n_20, a_12);
    t = o_6(o_1, h_12, a_12, t);
    t = if_verbose6_1_0(r_1, t);
    t = term_n_20;
    c_12 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, z_11);
    d_12 = t;
    t = (ATerm) ATempty;
    e_12 = t;
    t = SSL_table_put(c_12, d_12, e_12);
    t = (ATerm) ATmakeAppl(sym__3, term_n_20, (ATerm)ATmakeAppl(sym_Imported_1, z_11), (ATerm) ATempty);
    t = if_verbose4_1_0(s_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm s_71 (ATerm), ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,y_13 = NULL;
  v_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_13;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_13 = ATgetFirst((ATermList) t);
          y_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 = NULL,h_4 = NULL,k_4 = NULL,t_1 = NULL;
            t = SSLgetAnnotations(v_13);
            y_3 = t;
            t = w_13;
            t = s_71(t);
            h_4 = t;
            t = y_13;
            t = filter_1_0(s_71, t);
            k_4 = t;
            t = (ATerm) ATinsert(CheckATermList(k_4), h_4);
            t_1 = t;
            t = SSLsetAnnotations(t_1, y_3);
            ;
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            t = y_13;
            t = filter_1_0(s_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm r_73 (ATerm), ATerm t)
{
  ATerm g_14 (ATerm t)
  {
    ATerm s_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_73(t);
        t = g_14(t);
        ;
        LocalPopChoice(u_20);
      }
    else
      {
        t = s_20;
      }
    return(t);
  }
  t = g_14(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_14 = NULL;
            t = term_e_21;
            h_14 = t;
            t = SSL_getenv(h_14);
            ;
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
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
  t = term_f_21;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL;
  t = term_n_20;
  s_14 = t;
  t = term_g_21;
  t_14 = t;
  t = term_h_21;
  t = a_7(s_14, t_14, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm i_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_21;
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
  t = term_j_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm i_14 = NULL;
  t = if_verbose5_1_0(u_1, t);
  i_14 = t;
  {
    ATerm k_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_14 = NULL,n_14 = NULL;
        t = term_n_20;
        m_14 = t;
        t = term_o_20;
        n_14 = t;
        t = term_o_21;
        t = a_7(m_14, n_14, t);
        ;
        LocalPopChoice(n_21);
      }
    else
      {
        t = k_21;
        {
          ATerm o_14 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          o_14 = t;
          t = repeat_1_0(w_1, t);
          t = o_14;
        }
      }
    t = i_14;
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
  t = term_p_21;
  return(t);
}
ATerm l_16 (ATerm a_15, ATerm t)
{
  ATerm i_15 = NULL,l_15 = NULL,n_15 = NULL;
  t = term_n_20;
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, a_15);
  n_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_20, (ATerm) ATmakeAppl(sym_Tool_1, a_15));
  t = a_7(l_15, n_15, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_21 = ATgetFirst((ATermList) t);
      if(match_cons(q_21, sym__2))
        {
          ATerm s_21 = ATgetArgument(q_21, 0);
          i_15 = ATgetArgument(q_21, 1);
        }
      else
        _fail(t);
      {
        ATerm r_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_15;
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_n_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(l_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_t_21;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_15 = NULL,s_15 = NULL,t_15 = NULL;
      t = if_verbose5_1_0(c_2, t);
      t = xtc_load_0_0(t);
      t_15 = t;
      if(match_cons(t, sym__2))
        {
          o_15 = ATgetArgument(t, 0);
          s_15 = ATgetArgument(t, 1);
          {
            ATerm w_21 = t;
            int x_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
                t = term_n_20;
                z_15 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, o_15);
                a_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_n_20, (ATerm) ATmakeAppl(sym_Tool_1, o_15));
                t = a_7(z_15, a_16, t);
                {
                  ATerm e_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((s_15 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((y_15 != NULL) && (y_15 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          y_15 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_2, t);
                  t = not_null(y_15);
                }
                ;
                LocalPopChoice(x_21);
              }
            else
              {
                t = w_21;
                t = l_16(t_15, t);
              }
          }
        }
      else
        {
          t = l_16(t_15, t);
        }
      t = if_verbose5_1_0(g_2, t);
      ;
      LocalPopChoice(v_21);
    }
  else
    {
      t = u_21;
      {
        ATerm k_16 = NULL,b_5 = NULL,c_5 = NULL;
        k_16 = t;
        t = term_x_17;
        b_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_21), k_16), term_y_21);
        c_5 = t;
        t = SSL_printnl(b_5, c_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_21), k_16), term_y_21);
        t = if_verbose5_1_0(i_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm k_78 (ATerm), ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL;
  o_16 = t;
  t = k_78(t);
  t = xtc_find_0_0(t);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_16, o_16);
  {
    ATerm m_2 (ATerm t)
    {
      ATerm p_16 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_16, o_16);
      t = i_6(n_16, o_16, t);
      t = term_a_22;
      p_16 = t;
      t = SSL_exit(p_16);
      return(t);
    }
    t = fork_and_wait_1_0(m_2, t);
    t = o_16;
  }
  return(t);
}
ATerm r_6 (ATerm v_74 (ATerm), ATerm k_32, ATerm i_32, ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,y_16 = NULL,a_17 = NULL,g_17 = NULL;
  y_16 = t;
  t = v_74(t);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_16, k_32, i_32);
  t = b_7(s_16, k_32, i_32, t);
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_17 = NULL;
        t = term_d_22;
        h_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_16, term_d_22);
        t = a_7(s_16, h_17, t);
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_16 = ATgetFirst((ATermList) t);
        u_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_d_22;
    a_17 = t;
    t = (ATerm) ATinsert(CheckATermList(u_16), (ATerm) ATinsert(CheckATermList(t_16), k_32));
    g_17 = t;
    t = SSL_table_put(s_16, a_17, g_17);
    t = y_16;
  }
  return(t);
}
ATerm n_18 (ATerm o_17, ATerm t)
{
  t = o_17;
  {
    ATerm e_22 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_22 = ATgetArgument(t, 0);
            ATerm k_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_22;
      }
    t = term_n_22;
    t = debug_1_0(o_2, t);
    t = (ATerm) ATmakeAppl(sym__2, o_17, term_h_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm q_18 (ATerm q_17, ATerm w_17, ATerm c_18, ATerm t)
{
  t = SSL_open_file(q_17, w_17);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_o_22;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,l_18 = NULL;
  g_18 = t;
  if(match_cons(t, sym__2))
    {
      h_18 = ATgetArgument(t, 0);
      l_18 = ATgetArgument(t, 1);
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_18(g_18, t);
            ;
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            t = q_18(h_18, l_18, g_18, t);
          }
      }
    }
  else
    {
      t = n_18(g_18, t);
    }
  return(t);
}
ATerm s_6 (ATerm f_36, ATerm g_36, ATerm t)
{
  t = SSL_access(f_36, g_36);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  t = term_r_22;
  t = new_0_0(t);
  s_18 = t;
  t = term_s_22;
  t_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_18, term_s_22);
  t = z_6(s_18, t_18, t);
  u_18 = t;
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_18 = NULL;
        t = (ATerm) ATinsert(ATempty, term_f_8);
        y_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_18, (ATerm) ATinsert(ATempty, term_f_8));
        t = s_6(u_18, y_18, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        t = u_18;
      }
  }
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_w_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  t = new_file_0_0(t);
  b_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_19, term_h_8);
  t = open_file_0_0(t);
  t = term_r_22;
  c_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_19, term_r_22);
  t = r_6(q_2, b_19, c_19, t);
  t = b_19;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm s_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,t_19 = NULL;
  q_19 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm g_5 = NULL,h_5 = NULL;
      t = q_19;
      t = xtc_new_file_0_0(t);
      g_5 = t;
      t = t_0(t);
      h_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_5, (ATerm) ATinsert(ATinsert(ATempty, g_5), term_y_22));
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
          t_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_19;
      t = xtc_new_file_0_0(t);
      b_6 = t;
      t = t_0(t);
      c_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_6), term_y_22), t_19), term_a_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(s_0, t);
      t = SSL_close_file(b_6);
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_6);
    }
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm b_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = b_23;
      {
        ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
        t = term_x_17;
        x_19 = t;
        t = (ATerm) ATinsert(ATempty, term_g_23);
        y_19 = t;
        t = SSL_printnl(x_19, y_19);
        t = term_b_9;
        w_19 = t;
        t = SSL_exit(w_19);
        t = (ATerm) ATinsert(ATempty, term_g_23);
      }
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm sglr_2_0 (ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm t)
{
  ATerm l_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_20 = NULL,l_20 = NULL;
      l_20 = t;
      if(match_cons(t, sym_FILE_1))
        {
          k_20 = ATgetArgument(t, 0);
          {
            ATerm g_7 = NULL,j_2 = NULL;
            t = SSLgetAnnotations(l_20);
            g_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, k_20);
            j_2 = t;
            t = SSLsetAnnotations(j_2, g_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_20;
        }
      LocalPopChoice(n_23);
      {
        ATerm z_2 (ATerm t)
        {
          ATerm m_20 = NULL,p_20 = NULL,t_20 = NULL;
          t_20 = t;
          t = l_57(t);
          m_20 = t;
          t = t_20;
          t = m_57(t);
          p_20 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(p_20), m_20), term_f_23);
          return(t);
        }
        t = xtc_transform_file_2_0(w_2, z_2, t);
      }
    }
  else
    {
      t = l_23;
      {
        ATerm b_3 (ATerm t)
        {
          ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
          x_20 = t;
          t = l_57(t);
          v_20 = t;
          t = x_20;
          t = m_57(t);
          w_20 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_20), v_20), term_f_23);
          return(t);
        }
        t = xtc_transform_term_2_0(a_3, b_3, t);
      }
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm b_21 = NULL;
  t = term_o_23;
  {
    ATerm p_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_23);
      }
    else
      {
        t = p_23;
        t = (ATerm) ATempty;
      }
    b_21 = t;
    t = (ATerm) ATinsert(CheckATermList(b_21), term_s_23);
  }
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_y_23;
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(a_24);
      }
    else
      {
        t = z_23;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_y_23;
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  t = sglr_2_0(get_parse_table_0_0, d_3, t);
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_21 = NULL,m_21 = NULL;
        m_21 = t;
        if(match_cons(t, sym_FILE_1))
          {
            l_21 = ATgetArgument(t, 0);
            {
              ATerm q_7 = NULL,n_2 = NULL;
              t = SSLgetAnnotations(m_21);
              q_7 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_21);
              n_2 = t;
              t = SSLsetAnnotations(n_2, q_7);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_21;
          }
        LocalPopChoice(f_24);
        t = xtc_transform_file_2_0(f_3, g_3, t);
      }
    else
      {
        t = e_24;
        t = xtc_transform_term_2_0(h_3, k_3, t);
      }
  }
  return(t);
}
ATerm u_6 (ATerm l_12, ATerm m_12, ATerm t)
{
  t = SSL_copy(l_12, m_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL;
  f_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_8 = NULL;
        t = f_22;
        t = r_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, g_22, n_8);
        t = u_6(g_22, n_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, g_22);
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = g_24;
        {
          ATerm j_24 = t;
          int n_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_8 = NULL;
              t = f_22;
              t = r_0(t);
              u_8 = t;
              {
                ATerm o_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm w_8 = NULL;
                    w_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = w_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = w_8;
                          }
                        else
                          {
                            t = w_8;
                            if((g_22 != t))
                              {
                                _fail(t);
                              }
                            t = w_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_24;
                  }
                t = (ATerm) ATmakeAppl(sym__2, g_22, u_8);
                t = u_6(g_22, u_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, g_22);
              }
              ;
              LocalPopChoice(n_24);
            }
          else
            {
              t = j_24;
              t = f_22;
              t = r_0(t);
              if((g_22 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_22);
            }
        }
      }
  }
  return(t);
}
ATerm v_6 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm v_22 = NULL,x_22 = NULL;
  x_22 = t;
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
        t = a_7(g_33, h_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_24 = ATgetFirst((ATermList) t);
            v_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_24);
        t = SSL_table_put(g_33, h_33, v_22);
        t = (ATerm) ATmakeAppl(sym__3, g_33, h_33, v_22);
      }
    else
      {
        t = p_24;
        t = SSL_table_remove(g_33, h_33);
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
      }
    t = x_22;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm s_74 (ATerm), ATerm t)
{
  ATerm z_22 = NULL,c_23 = NULL,e_23 = NULL,i_23 = NULL,j_23 = NULL;
  i_23 = t;
  t = s_74(t);
  e_23 = t;
  {
    ATerm s_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_23 = NULL;
        t = term_d_22;
        k_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_23, term_d_22);
        t = a_7(e_23, k_23, t);
        ;
        LocalPopChoice(u_24);
      }
    else
      {
        t = s_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_23 = ATgetFirst((ATermList) t);
        z_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_d_22;
    j_23 = t;
    t = SSL_table_put(e_23, j_23, z_22);
    t = c_23;
    {
      ATerm l_3 (ATerm t)
      {
        ATerm m_23 = NULL;
        m_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_23, m_23);
        t = v_6(e_23, m_23, t);
        return(t);
      }
      t = map_1_0(l_3, t);
      t = i_23;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm t)
{
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_75(t);
      t = o_75(t);
      ;
      LocalPopChoice(w_24);
    }
  else
    {
      t = v_24;
      t = o_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_74 (ATerm), ATerm t)
{
  ATerm q_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
  u_23 = t;
  t = r_74(t);
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_23, term_d_22);
  {
    ATerm x_24 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_25 = ATgetArgument(t, 0);
            ATerm g_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_d_22;
        d_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_23, term_d_22);
        t = a_7(q_23, d_24, t);
        ;
        LocalPopChoice(e_25);
      }
    else
      {
        t = x_24;
        t = (ATerm) ATempty;
      }
    v_23 = t;
    t = term_d_22;
    w_23 = t;
    t = (ATerm) ATinsert(CheckATermList(v_23), (ATerm) ATempty);
    x_23 = t;
    t = SSL_table_put(q_23, w_23, x_23);
    t = u_23;
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_w_22;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm t_24 = NULL;
  t_24 = t;
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(t_24);
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = t_24;
      }
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_w_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm w_77 (ATerm), ATerm t)
{
  ATerm h_24 = NULL;
  ATerm o_3 (ATerm t)
  {
    ATerm k_24 = NULL;
    k_24 = t;
    {
      ATerm n_25 = t;
      int o_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_24 = NULL,m_24 = NULL;
          t = term_w_22;
          l_24 = t;
          t = term_d_22;
          m_24 = t;
          t = term_y_25;
          t = a_7(l_24, m_24, t);
          ;
          LocalPopChoice(o_25);
        }
      else
        {
          t = n_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((h_24 != NULL) && (h_24 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            h_24 = ATgetFirst((ATermList) t);
          {
            ATerm z_25 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = h_24;
      t = map_1_0(p_3, t);
      t = k_24;
      t = end_scope_1_0(q_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(m_3, t);
  t = restore_always_2_0(w_77, o_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      t = term_h_26;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm x_77 (ATerm), ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm i_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_24 = NULL;
        t = term_a_23;
        t = get_config_0_0(t);
        y_24 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_24);
        ;
        LocalPopChoice(k_26);
      }
    else
      {
        t = i_26;
        t = term_d_8;
      }
    t = x_77(t);
    t = copy_to_1_0(s_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(r_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
  z_24 = t;
  t = term_r_22;
  t = whoami_0_0(t);
  a_25 = t;
  t = term_x_17;
  c_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_26), a_25), term_o_26);
  d_25 = t;
  t = SSL_printnl(c_25, d_25);
  t = term_b_9;
  b_25 = t;
  t = SSL_exit(b_25);
  t = z_24;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm h_25 = NULL;
  h_25 = t;
  if(match_string(t, "-k"))
    {
      t = h_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_25;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm i_25 = NULL,l_25 = NULL,m_25 = NULL;
  i_25 = t;
  t = SSL_string_to_int(i_25);
  l_25 = t;
  t = term_t_26;
  m_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_26, l_25);
  t = d_7(m_25, l_25, t);
  t = i_25;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_x_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_3, u_3, v_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm p_25 = NULL;
  p_25 = t;
  if(match_string(t, "-S"))
    {
      t = p_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_25;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL;
  t = term_j_18;
  q_25 = t;
  t = term_y_26;
  r_25 = t;
  t = term_z_26;
  t = d_7(q_25, r_25, t);
  t = term_a_27;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_b_27;
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
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
  s_25 = t;
  t = SSL_string_to_int(s_25);
  t_25 = t;
  t = term_j_18;
  u_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_18, t_25);
  t = d_7(u_25, t_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_25);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_c_27;
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
  ATerm v_25 = NULL,w_25 = NULL;
  t = term_d_27;
  v_25 = t;
  t = term_r_22;
  w_25 = t;
  t = term_e_27;
  t = d_7(v_25, w_25, t);
  t = term_f_27;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_3, x_3, b_4, t);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      {
        ATerm j_27 = t;
        int k_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_4, g_4, j_4, t);
            ;
            LocalPopChoice(k_27);
          }
        else
          {
            t = j_27;
            t = Option_3_0(m_4, n_4, p_4, t);
          }
      }
    }
  return(t);
}
ATerm d_7 (ATerm b_35, ATerm c_35, ATerm t)
{
  ATerm x_25 = NULL;
  t = term_l_27;
  x_25 = t;
  t = SSL_table_put(x_25, b_35, c_35);
  t = (ATerm) ATmakeAppl(sym__3, term_l_27, b_35, c_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
      t = term_r_22;
      t = h_0(t);
      e_26 = t;
      t = term_m_27;
      f_26 = t;
      t = term_n_27;
      g_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_27, term_n_27, e_26);
      t = b_7(f_26, g_26, e_26, t);
      _fail(t);
    }
  else
    {
      ATerm j_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_26 = ATgetFirst((ATermList) t);
          b_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_26;
      t = d_0(t);
      t = term_r_22;
      t = g_0(t);
      j_26 = t;
      t = (ATerm) ATinsert(CheckATermList(b_26), j_26);
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm l_26 = NULL;
  l_26 = t;
  if(match_string(t, "-o"))
    {
      t = l_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_26;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  m_26 = t;
  t = term_y_22;
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_22, m_26);
  t = d_7(n_26, m_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_26);
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_q_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm p_26 = NULL;
  p_26 = t;
  if(match_string(t, "-i"))
    {
      t = p_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_26;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL;
  q_26 = t;
  t = term_a_23;
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_23, q_26);
  t = d_7(r_26, q_26, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_26);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_t_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, v_4, w_4, t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_64 (ATerm), ATerm t)
{
  ATerm s_27 (ATerm t)
  {
    ATerm o_27 = NULL,p_27 = NULL,r_27 = NULL;
    r_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_27 = ATgetFirst((ATermList) t);
        p_27 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_9 = NULL,z_9 = NULL,p_2 = NULL;
          t = SSLgetAnnotations(r_27);
          p_9 = t;
          t = p_27;
          t = s_27(t);
          z_9 = t;
          t = (ATerm) ATinsert(CheckATermList(z_9), o_27);
          p_2 = t;
          t = SSLsetAnnotations(p_2, p_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_27;
        t = m_64(t);
      }
    return(t);
  }
  t = s_27(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
  u_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_26;
    }
  else
    {
      ATerm y_4 (ATerm t)
      {
        t = not_null(w_26);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((v_26 != NULL) && (v_26 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            v_26 = ATgetFirst((ATermList) t);
          if(((w_26 != NULL) && (w_26 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_26;
      t = at_end_1_0(y_4, t);
    }
  return(t);
}
ATerm n_28 (ATerm d_28, ATerm t)
{
  ATerm e_28 = NULL;
  t = SSL_explode_term(d_28);
  if(match_cons(t, sym__2))
    {
      ATerm u_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_28;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_28 = NULL,i_28 = NULL,j_28 = NULL;
  j_28 = t;
  if(match_cons(t, sym__2))
    {
      g_28 = ATgetArgument(t, 0);
      i_28 = ATgetArgument(t, 1);
      {
        ATerm v_27 = t;
        int w_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_5 (ATerm t)
            {
              t = i_28;
              return(t);
            }
            t = g_28;
            t = at_end_1_0(a_5, t);
            ;
            LocalPopChoice(w_27);
          }
        else
          {
            t = v_27;
            t = n_28(j_28, t);
          }
      }
    }
  else
    {
      t = n_28(j_28, t);
    }
  return(t);
}
ATerm t_6 (ATerm h_35, ATerm g_35, ATerm t)
{
  ATerm o_28 = NULL,r_28 = NULL,s_28 = NULL;
  t = h_35;
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        t = (ATerm) ATempty;
      }
    r_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_35, r_28);
    t = conc_0_0(t);
    o_28 = t;
    t = term_l_27;
    s_28 = t;
    t = SSL_table_put(s_28, h_35, o_28);
    t = (ATerm) ATmakeAppl(sym__3, term_l_27, h_35, o_28);
  }
  return(t);
}
ATerm b_7 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_28 = ATgetArgument(t, 0);
            ATerm c_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
        t = a_7(b_33, c_33, t);
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = (ATerm) ATempty;
      }
    v_28 = t;
    t = (ATerm) ATinsert(CheckATermList(v_28), a_33);
    w_28 = t;
    t = SSL_table_put(b_33, c_33, w_28);
    t = u_28;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_29 = NULL,j_29 = NULL,m_29 = NULL;
      t = term_r_22;
      t = p_0(t);
      i_29 = t;
      t = term_m_27;
      j_29 = t;
      t = term_n_27;
      m_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_27, term_n_27, i_29);
      t = b_7(j_29, m_29, i_29, t);
      _fail(t);
    }
  else
    {
      ATerm u_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_29 = ATgetFirst((ATermList) t);
          f_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_29 = ATgetFirst((ATermList) t);
          h_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_29;
      t = m_0(t);
      t = g_29;
      t = n_0(t);
      u_29 = t;
      t = (ATerm) ATinsert(CheckATermList(h_29), u_29);
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
  ATerm v_29 = NULL,w_29 = NULL;
  v_29 = t;
  t = term_f_23;
  w_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_23, v_29);
  t = d_7(w_29, v_29, t);
  t = v_29;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_f_28;
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
  ATerm a_30 = NULL,d_30 = NULL;
  a_30 = t;
  t = term_o_23;
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_23, a_30);
  t = t_6(d_30, a_30, t);
  t = a_30;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_h_28;
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
  ATerm g_30 = NULL,j_30 = NULL;
  g_30 = t;
  t = term_y_23;
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_23, g_30);
  t = t_6(j_30, g_30, t);
  t = g_30;
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_k_28;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(d_5, e_5, i_5, t);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      {
        ATerm p_28 = t;
        int q_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_5, l_5, n_5, t);
            ;
            LocalPopChoice(q_28);
          }
        else
          {
            t = p_28;
            t = ArgOption_3_0(p_5, r_5, t_5, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,p_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_22;
  t = whoami_0_0(t);
  k_30 = t;
  t = term_x_17;
  m_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_28), k_30);
  p_30 = t;
  t = SSL_printnl(m_30, p_30);
  t = term_b_9;
  l_30 = t;
  t = SSL_exit(l_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_28;
  t = get_config_0_0(t);
  return(t);
}
ATerm w_6 (ATerm w_30, ATerm x_30, ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_30, x_30);
      ;
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      t = SSL_addr(w_30, x_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_30;
      t = o_70(t);
    }
  else
    {
      ATerm e_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_30 = ATgetFirst((ATermList) t);
          t_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_30;
      t = foldr_2_0(o_70, p_70, t);
      e_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_30, e_31);
      t = p_70(t);
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
  t = term_y_26;
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL;
  if(match_cons(t, sym__2))
    {
      r_10 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(r_10, s_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_31 = NULL,i_10 = NULL,n_10 = NULL;
  t = times_0_0(t);
  n_10 = t;
  t = SSL_explode_term(n_10);
  if(match_cons(t, sym__2))
    {
      ATerm a_29 = ATgetArgument(t, 0);
      i_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10;
  t = foldr_2_0(w_5, x_5, t);
  h_31 = t;
  t = SSL_TicksToSeconds(h_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
  s_31 = t;
  if(match_cons(t, sym__2))
    {
      t_31 = ATgetArgument(t, 0);
      u_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_31;
        if((t_31 != t))
          {
            _fail(t);
          }
        t = s_31;
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        t = (ATerm) ATmakeAppl(sym__2, t_31, u_31);
        {
          ATerm d_29 = t;
          int k_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_31, u_31);
              ;
              LocalPopChoice(k_29);
            }
          else
            {
              t = d_29;
              t = SSL_gtr(t_31, u_31);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_31, u_31);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_75 (ATerm), ATerm t)
{
  ATerm a_32 = NULL;
  a_32 = t;
  {
    ATerm l_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_32 = NULL;
        t = term_j_18;
        t = get_config_0_0(t);
        n_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_32, term_b_9);
        t = geq_0_0(t);
        t = a_32;
        t = z_75(t);
        ;
        LocalPopChoice(n_29);
      }
    else
      {
        t = l_29;
        t = a_32;
      }
  }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,s_32 = NULL,u_32 = NULL;
  t = run_time_0_0(t);
  p_32 = t;
  t = term_r_22;
  t = whoami_0_0(t);
  q_32 = t;
  t = term_x_17;
  s_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_29), p_32), term_q_8), q_32);
  u_32 = t;
  t = SSL_printnl(s_32, u_32);
  t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_29), p_32), term_q_8), q_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_26;
  v_32 = t;
  t = SSL_exit(v_32);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  o_33 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_33;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_33 = ATgetArgument(t, 0);
          {
            ATerm n_11 = NULL,v_2 = NULL;
            t = SSLgetAnnotations(o_33);
            n_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_33);
            v_2 = t;
            t = SSLsetAnnotations(v_2, n_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_33;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_79 (ATerm), ATerm t)
{
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_29);
    }
  else
    {
      t = p_29;
      t = fetch_1_0(a_6, t);
    }
  t = y_79(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_33 = ATgetFirst((ATermList) t);
      s_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_33 = NULL,x_33 = NULL;
        ATerm d_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_33)), not_null(x_33));
          return(t);
        }
        t = s_33;
        t = k_0(t);
        if(((w_33 != NULL) && (w_33 != t)))
          _fail(t);
        else
          w_33 = t;
        t = r_33;
        t = j_0(t);
        if(((x_33 != NULL) && (x_33 != t)))
          _fail(t);
        else
          x_33 = t;
        t = s_33;
        t = reverse_acc_2_0(j_0, d_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_22;
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
  ATerm v_34 = NULL;
  v_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_34), term_x_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_34 = NULL,l_34 = NULL,m_34 = NULL;
  ATerm y_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_28;
      t = get_config_0_0(t);
      g_34 = t;
      ;
      LocalPopChoice(z_29);
    }
  else
    {
      t = y_29;
      {
        ATerm e_6 (ATerm t)
        {
          ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,e_3 = NULL;
          p_34 = t;
          if(match_cons(t, sym_Program_1))
            {
              o_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_34);
          n_34 = t;
          t = o_34;
          if(((g_34 != NULL) && (g_34 != t)))
            _fail(t);
          else
            g_34 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, o_34);
          e_3 = t;
          t = SSLsetAnnotations(e_3, n_34);
          return(t);
        }
        t = fetch_1_0(e_6, t);
      }
    }
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_30), not_null(g_34)), term_e_30);
        t = echo_0_0(t);
        ;
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
      }
    t = term_h_30;
    t = echo_0_0(t);
    t = term_m_27;
    if(((l_34 != NULL) && (l_34 != t)))
      _fail(t);
    else
      l_34 = t;
    t = term_n_27;
    if(((m_34 != NULL) && (m_34 != t)))
      _fail(t);
    else
      m_34 = t;
    t = term_i_30;
    t = a_7(l_34, m_34, t);
    t = reverse_acc_2_0(_id, f_6, t);
    t = map_1_0(j_6, t);
    {
      ATerm n_30 = t;
      int o_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_30), term_v_30), term_u_30), term_q_30);
          t = echo_0_0(t);
          ;
          LocalPopChoice(o_30);
        }
      else
        {
          t = n_30;
        }
    }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm i_36 (ATerm t)
  {
    ATerm d_36 = NULL,e_36 = NULL,h_36 = NULL;
    d_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_36 = ATgetFirst((ATermList) t);
        h_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_30 = t;
      int a_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_11 = NULL,o_12 = NULL,i_3 = NULL;
          t = SSLgetAnnotations(d_36);
          y_11 = t;
          t = e_36;
          t = g_64(t);
          o_12 = t;
          t = (ATerm) ATinsert(CheckATermList(h_36), o_12);
          i_3 = t;
          t = SSLsetAnnotations(i_3, y_11);
          ;
          LocalPopChoice(a_31);
        }
      else
        {
          t = z_30;
          {
            ATerm l_13 = NULL,d_14 = NULL,j_3 = NULL;
            t = SSLgetAnnotations(d_36);
            l_13 = t;
            t = h_36;
            t = i_36(t);
            d_14 = t;
            t = (ATerm) ATinsert(CheckATermList(d_14), e_36);
            j_3 = t;
            t = SSLsetAnnotations(j_3, l_13);
          }
        }
    }
    return(t);
  }
  t = i_36(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_36 = NULL,r_36 = NULL,s_36 = NULL;
  m_36 = t;
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_36;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_31 = ATgetFirst((ATermList) t);
                ATerm f_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_36;
          }
        ;
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        t = (ATerm) ATinsert(ATempty, m_36);
      }
    r_36 = t;
    t = term_h_26;
    s_36 = t;
    t = SSL_printnl(s_36, r_36);
    t = m_36;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_28;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm z_6 (ATerm s_29, ATerm t_29, ATerm t)
{
  t = SSL_strcat(s_29, t_29);
  return(t);
}
ATerm debug_1_0 (ATerm b_60 (ATerm), ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL;
  w_36 = t;
  t = b_60(t);
  x_36 = t;
  t = term_x_17;
  y_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_36), x_36);
  z_36 = t;
  t = SSL_printnl(y_36, z_36);
  t = w_36;
  return(t);
}
ATerm map_1_0 (ATerm w_63 (ATerm), ATerm t)
{
  ATerm z_37 (ATerm t)
  {
    ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
    v_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_37;
      }
    else
      {
        ATerm u_14 = NULL,x_14 = NULL,y_14 = NULL,j_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_37 = ATgetFirst((ATermList) t);
            x_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_37);
        u_14 = t;
        t = w_37;
        t = w_63(t);
        x_14 = t;
        t = x_37;
        t = z_37(t);
        y_14 = t;
        t = (ATerm) ATinsert(CheckATermList(y_14), x_14);
        j_5 = t;
        t = SSLsetAnnotations(j_5, u_14);
      }
    return(t);
  }
  t = z_37(t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm g_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_31);
    }
  else
    {
      t = g_31;
    }
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_j_31;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_38 = NULL;
      k_38 = t;
      t = SSL_is_string(k_38);
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
            t = map_1_0(c_7, t);
            ;
            LocalPopChoice(n_31);
          }
        else
          {
            t = m_31;
            {
              ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
              v_38 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_38 = ATgetArgument(t, 0);
                  t = w_38;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_38 = ATgetArgument(t, 0);
                      t = w_38;
                      {
                        ATerm o_31 = t;
                        int p_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_31);
                          }
                        else
                          {
                            t = o_31;
                            t = debug_1_0(e_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm b_39 = NULL,c_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_38 = ATgetArgument(t, 0);
                          x_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_38;
                      t = eval_config_0_0(t);
                      b_39 = t;
                      t = x_38;
                      t = eval_config_0_0(t);
                      c_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_39, c_39);
                      t = z_6(b_39, c_39, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm a_7 (ATerm s_34, ATerm t_34, ATerm t)
{
  t = SSL_table_get(s_34, t_34);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL;
  i_39 = t;
  t = term_l_27;
  j_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_27, i_39);
  t = a_7(j_39, i_39, t);
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_39 = NULL,l_39 = NULL;
        t = eval_config_0_0(t);
        k_39 = t;
        t = term_l_27;
        l_39 = t;
        t = SSL_table_put(l_39, i_39, k_39);
        t = k_39;
        ;
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
      }
  }
  return(t);
}
ATerm f_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL;
  t = term_v_31;
  o_39 = t;
  t = term_r_22;
  p_39 = t;
  t = term_w_31;
  t = d_7(o_39, p_39, t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_x_31;
  return(t);
}
ATerm m_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
  t = term_v_31;
  s_39 = t;
  t = term_r_22;
  t_39 = t;
  t = term_w_31;
  t = d_7(s_39, t_39, t);
  t = term_y_31;
  q_39 = t;
  t = term_r_22;
  r_39 = t;
  t = term_z_31;
  t = d_7(q_39, r_39, t);
  t = term_b_32;
  return(t);
}
ATerm o_7 (ATerm t)
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
      t = Option_3_0(f_7, h_7, j_7, t);
      ;
      LocalPopChoice(e_32);
    }
  else
    {
      t = d_32;
      t = Option_3_0(m_7, n_7, o_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,m_5 = NULL;
  z_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_39 = ATgetFirst((ATermList) t);
      w_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_39);
  u_39 = t;
  t = v_39;
  t = i_51(t);
  x_39 = t;
  t = w_39;
  t = j_51(t);
  y_39 = t;
  t = (ATerm) ATinsert(CheckATermList(y_39), x_39);
  m_5 = t;
  t = SSLsetAnnotations(m_5, u_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_81 (ATerm), ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,j_40 = NULL,k_40 = NULL,o_5 = NULL;
  e_40 = t;
  {
    ATerm f_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_32;
        t = w_81(t);
        ;
        LocalPopChoice(g_32);
      }
    else
      {
        t = f_32;
      }
    t = e_40;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_40 = ATgetFirst((ATermList) t);
        h_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_40);
    f_40 = t;
    t = term_x_28;
    k_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_28, g_40);
    t = d_7(k_40, g_40, t);
    t = h_40;
    {
      ATerm u_40 (ATerm t)
      {
        ATerm j_32 = t;
        int l_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_32 = t;
            int o_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_40 = NULL;
                n_40 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_40;
                ;
                LocalPopChoice(o_32);
              }
            else
              {
                t = m_32;
                t = w_81(t);
                t = Cons_2_0(_id, u_40, t);
              }
            ;
            LocalPopChoice(l_32);
          }
        else
          {
            t = j_32;
            {
              ATerm q_40 = NULL,r_40 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_40 = ATgetFirst((ATermList) t);
                  r_40 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_40), (ATerm) ATmakeAppl(sym_Undefined_1, q_40));
            }
          }
        return(t);
      }
      t = u_40(t);
      if(((j_40 != NULL) && (j_40 != t)))
        _fail(t);
      else
        j_40 = t;
      t = (ATerm) ATinsert(CheckATermList(j_40), (ATerm) ATmakeAppl(sym_Program_1, g_40));
      if(((o_5 != NULL) && (o_5 != t)))
        _fail(t);
      else
        o_5 = t;
      t = SSLsetAnnotations(o_5, f_40);
    }
  }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm g_41 = NULL;
  g_41 = t;
  if(match_string(t, "--help"))
    {
      t = g_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_41;
        }
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL;
  t = term_r_29;
  h_41 = t;
  t = term_r_22;
  i_41 = t;
  t = term_r_32;
  t = d_7(h_41, i_41, t);
  t = term_t_32;
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_w_32;
  return(t);
}
ATerm u_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
  b_41 = t;
  t = term_m_27;
  d_41 = t;
  t = term_n_27;
  e_41 = t;
  t = (ATerm) ATempty;
  f_41 = t;
  t = SSL_table_put(d_41, e_41, f_41);
  t = b_41;
  {
    ATerm p_7 (ATerm t)
    {
      ATerm x_32 = t;
      int y_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_81(t);
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
                t = Option_3_0(r_7, s_7, t_7, t);
                ;
                LocalPopChoice(d_33);
              }
            else
              {
                t = z_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_7, t);
    {
      ATerm e_33 = t;
      int f_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_41 = NULL;
          p_41 = t;
          {
            ATerm i_33 = t;
            int j_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_16 = NULL;
                t = p_41;
                {
                  ATerm k_33 = t;
                  int l_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_r_29;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(l_33);
                    }
                  else
                    {
                      t = k_33;
                      t = fetch_1_0(u_7, t);
                    }
                  t = p_41;
                  t = default_system_usage_0_0(t);
                  t = term_y_26;
                  i_16 = t;
                  t = SSL_exit(i_16);
                }
                ;
                LocalPopChoice(j_33);
              }
            else
              {
                t = i_33;
                {
                  ATerm v_16 = NULL;
                  t = term_v_31;
                  t = get_config_0_0(t);
                  t = p_41;
                  t = default_system_about_0_0(t);
                  t = term_y_26;
                  v_16 = t;
                  t = SSL_exit(v_16);
                }
              }
          }
          ;
          LocalPopChoice(f_33);
        }
      else
        {
          t = e_33;
          {
            ATerm m_33 = t;
            int p_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
                ATerm v_7 (ATerm t)
                {
                  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL,q_5 = NULL;
                  v_41 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      u_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_41);
                  t_41 = t;
                  t = u_41;
                  if(((z_40 != NULL) && (z_40 != t)))
                    _fail(t);
                  else
                    z_40 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_41);
                  q_5 = t;
                  t = SSLsetAnnotations(q_5, t_41);
                  return(t);
                }
                t = fetch_1_0(v_7, t);
                t = term_x_17;
                if(((r_41 != NULL) && (r_41 != t)))
                  _fail(t);
                else
                  r_41 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_40)), term_q_33);
                if(((s_41 != NULL) && (s_41 != t)))
                  _fail(t);
                else
                  s_41 = t;
                t = SSL_printnl(r_41, s_41);
                t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_40)), term_q_33));
                t = default_system_usage_0_0(t);
                t = term_b_9;
                if(((q_41 != NULL) && (q_41 != t)))
                  _fail(t);
                else
                  q_41 = t;
                t = SSL_exit(q_41);
                ;
                LocalPopChoice(p_33);
              }
            else
              {
                t = m_33;
              }
          }
        }
      if(((a_41 != NULL) && (a_41 != t)))
        _fail(t);
      else
        a_41 = t;
      t = term_m_27;
      if(((c_41 != NULL) && (c_41 != t)))
        _fail(t);
      else
        c_41 = t;
      t = SSL_table_destroy(c_41);
      t = a_41;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL;
  t = parse_options_1_0(a_80, t);
  a_42 = t;
  t = term_t_33;
  d_42 = t;
  t = SSL_table_create(d_42);
  t = term_t_33;
  b_42 = t;
  t = term_u_33;
  c_42 = t;
  t = SSL_table_put(b_42, c_42, a_42);
  t = a_42;
  t = c_80(t);
  {
    ATerm v_33 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_80, t);
        ;
        LocalPopChoice(b_34);
      }
    else
      {
        t = v_33;
        {
          ATerm c_34 = t;
          int d_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_80(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_34);
            }
          else
            {
              t = c_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sglri_options_0_0(t);
      ;
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      {
        ATerm j_34 = t;
        int k_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(k_34);
          }
        else
          {
            t = j_34;
            {
              ATerm q_34 = t;
              int r_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(r_34);
                }
              else
                {
                  t = q_34;
                  {
                    ATerm u_34 = t;
                    int w_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(z_7, a_8, b_8, t);
                        ;
                        LocalPopChoice(w_34);
                      }
                    else
                      {
                        t = u_34;
                        {
                          ATerm x_34 = t;
                          int y_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(y_34);
                            }
                          else
                            {
                              t = x_34;
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
ATerm y_7 (ATerm t)
{
  t = xtc_io_1_0(parse_and_implode_0_0, t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL;
  t = term_z_34;
  f_42 = t;
  t = term_r_22;
  g_42 = t;
  t = term_a_35;
  t = d_7(f_42, g_42, t);
  t = term_d_35;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_e_35;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(w_7, default_usage_0_0, _id, y_7, t);
  return(t);
}
