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
Symbol sym_PlainText_0;
Symbol sym_ParseTree_0;
Symbol sym_AST_0;
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
  sym_PlainText_0 = ATmakeSymbol("PlainText", 0, ATfalse);
  ATprotectSymbol(sym_PlainText_0);
  sym_ParseTree_0 = ATmakeSymbol("ParseTree", 0, ATfalse);
  ATprotectSymbol(sym_ParseTree_0);
  sym_AST_0 = ATmakeSymbol("AST", 0, ATfalse);
  ATprotectSymbol(sym_AST_0);
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
ATerm term_p_32;
ATerm term_o_32;
ATerm term_m_32;
ATerm term_g_32;
ATerm term_i_31;
ATerm term_v_30;
ATerm term_q_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_f_30;
ATerm term_r_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_x_28;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_g_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_x_25;
ATerm term_q_25;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_m_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_r_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_p_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_e_19;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_y_17;
ATerm term_o_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
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
ATerm term_m_13;
ATerm term_l_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_b_9;
void init_constant_terms (void)
{
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_9, term_i_9, term_y_9);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_10, term_e_10, term_f_10);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_10, term_l_10, term_o_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_10, term_s_10, term_t_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_x_10, term_z_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_11, term_d_11, term_e_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_11, term_k_11, term_l_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_p_11, term_q_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_t_11, term_u_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_x_11, term_y_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_f_12, term_g_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_m_12, term_n_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_t_12, term_x_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_b_13, term_c_13);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_13, term_g_13, term_l_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_z_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_d_14, term_e_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_14, term_h_14, term_i_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_o_14, term_p_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_x_14, term_y_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_e_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_j_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_r_15, term_t_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_y_15, term_a_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_f_16, term_g_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_o_16, term_p_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym__2, term_c_22, term_z_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__2, term_c_22, term_d_22);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__2, term_u_18, term_y_17);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym__2, term_b_9, term_e_26);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_26);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym__2, term_l_26, term_q_18);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_ParseTree_0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__2, term_l_24, term_b_27);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__2, term_l_24, term_e_27);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym__2, term_h_27, term_q_18);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_w_26, term_z_26);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_j_30, term_q_18);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym__2, term_e_19, term_q_18);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym__2, term_b_29, term_q_18);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
ATerm d_6 (ATerm f_31, ATerm g_31, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm e_6 (ATerm m_15, ATerm n_15, ATerm);
ATerm f_6 (ATerm c_60 (ATerm), ATerm l_161, ATerm u_15, ATerm);
ATerm f_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm);
ATerm g_6 (ATerm i_12, ATerm j_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm h_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm r_58 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm j_78 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm l_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm g_7 (ATerm v_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm i_6 (ATerm u_74 (ATerm), ATerm n_32, ATerm l_32, ATerm);
ATerm p_8 (ATerm b_8, ATerm);
ATerm q_8 (ATerm f_8, ATerm g_8, ATerm h_8, ATerm);
ATerm f_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm a_76 (ATerm), ATerm);
ATerm h_1 (ATerm);
ATerm pass_v_verbose_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm b_76 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm k_6 (ATerm c_68 (ATerm), ATerm d_68 (ATerm), ATerm p_22, ATerm o_22, ATerm);
ATerm l_6 (ATerm z_67 (ATerm), ATerm l_22, ATerm k_22, ATerm);
ATerm n_1 (ATerm);
ATerm m_6 (ATerm b_34, ATerm c_34, ATerm d_34, ATerm);
ATerm n_6 (ATerm f_76 (ATerm), ATerm l_34, ATerm k_34, ATerm);
ATerm q_6 (ATerm i_36, ATerm j_36, ATerm);
ATerm r_14 (ATerm j_14, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm o_6 (ATerm s_15, ATerm);
ATerm p_6 (ATerm q_36, ATerm r_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_17 (ATerm l_15, ATerm);
ATerm b_18 (ATerm x_15, ATerm z_15, ATerm b_16, ATerm);
ATerm d_18 (ATerm u_16, ATerm v_16, ATerm w_16, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm k_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm q_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm l_23 (ATerm r_21, ATerm);
ATerm z_2 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm m_3 (ATerm);
ATerm xtc_sglr_1_0 (ATerm c_79 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm xtc_parse_sdf_0_0 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm pre_process_sdf_0_0 (ATerm);
ATerm get_input_type_0_0 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm ppgen_0_0 (ATerm);
ATerm r_6 (ATerm o_12, ATerm p_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm s_6 (ATerm j_33, ATerm k_33, ATerm);
ATerm end_scope_1_0 (ATerm r_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_74 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm v_77 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm xtc_io_1_0 (ATerm w_77 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm t_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm h_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm l_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm j_6 (ATerm);
ATerm u_6 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm ppgen_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm t_6 (ATerm z_30, ATerm a_31, ATerm);
ATerm foldr_2_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_75 (ATerm), ATerm);
ATerm h_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm l_7 (ATerm);
ATerm need_help_1_0 (ATerm d_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm f_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_6 (ATerm v_29, ATerm w_29, ATerm);
ATerm debug_1_0 (ATerm a_60 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_63 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm j_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm a_7 (ATerm e_35, ATerm f_35, ATerm);
ATerm x_6 (ATerm v_34, ATerm w_34, ATerm);
ATerm y_6 (ATerm e_33, ATerm f_33, ATerm d_33, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm n_51 (ATerm), ATerm o_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm b_82 (ATerm), ATerm);
ATerm l_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm parse_options_1_0 (ATerm a_82 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm);
ATerm y_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm d_6 (ATerm f_31, ATerm g_31, ATerm t)
{
  ATerm x_4 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(f_31, g_31);
      ;
      LocalPopChoice(a_9);
    }
  else
    {
      t = x_4;
      t = SSL_subtr(f_31, g_31);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL;
  t = term_b_9;
  {
    ATerm d_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(h_9);
      }
    else
      {
        t = d_9;
        t = term_i_9;
      }
    b_0 = t;
    t = term_i_9;
    e_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_i_9);
    t = d_6(b_0, e_0, t);
    c_0 = t;
    t = SSL_int_to_string(c_0);
    a_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_b_9);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm t_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_j_9;
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
      t = (ATerm) ATinsert(ATempty, term_k_9);
      v_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_0, (ATerm) ATinsert(ATempty, term_k_9));
      t = q_6(t_0, v_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm e_6 (ATerm m_15, ATerm n_15, ATerm t)
{
  ATerm w_0 = NULL;
  t = SSL_write_term_to_stream_baf(m_15, n_15);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_0);
  return(t);
}
ATerm f_6 (ATerm c_60 (ATerm), ATerm l_161, ATerm u_15, ATerm t)
{
  ATerm a_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_161, term_l_9);
  t = open_stream_0_0(t);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, u_15);
  t = c_60(t);
  t = fclose_0_0(t);
  t = u_15;
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_9 = ATgetArgument(t, 0);
      if(match_cons(m_9, sym_Stream_1))
        {
          d_1 = ATgetArgument(m_9, 0);
        }
      else
        _fail(t);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(d_1, e_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  b_1 = t;
  t = xtc_new_file_0_0(t);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_1, b_1);
  t = f_6(f_0, c_1, b_1, t);
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
ATerm g_6 (ATerm i_12, ATerm j_12, ATerm t)
{
  t = SSL_execvp(i_12, j_12);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
  g_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      h_2 = ATgetArgument(t, 0);
      {
        ATerm x_0 = NULL,y_0 = NULL;
        t = SSL_int_to_string(h_2);
        x_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_9), x_0), term_n_9);
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
          i_2 = ATgetArgument(t, 1);
          j_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(i_2);
      w_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_2), term_q_9), w_1), term_p_9), h_2);
      x_1 = t;
      t = SSL_concat_strings(x_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm h_64 (ATerm), ATerm t)
{
  ATerm a_3 = NULL;
  ATerm o_0 (ATerm t)
  {
    t = h_64(t);
    if(((a_3 != NULL) && (a_3 != t)))
      _fail(t);
    else
      a_3 = t;
    return(t);
  }
  t = fetch_1_0(o_0, t);
  t = not_null(a_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_3 = NULL;
  b_3 = t;
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm v_9 = ATgetArgument(t, 0);
              if((b_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm w_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_16), term_l_16), term_c_16), term_v_15), term_k_15), term_f_15), term_b_15), term_q_14), term_k_14), term_f_14), term_a_14), term_w_13), term_s_13), term_m_13), term_d_13), term_z_12), term_q_12), term_h_12), term_a_12), term_v_11), term_r_11), term_m_11), term_g_11), term_a_11), term_u_10), term_p_10), term_j_10), term_a_10);
        t = fetch_elem_1_0(q_0, t);
        ;
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm g_3 = NULL,u_3 = NULL;
  g_3 = t;
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm x_16 = ATgetArgument(t, 0);
            u_3 = ATgetArgument(t, 1);
            {
              ATerm a_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_16);
        {
          ATerm b_17 = t;
          int c_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL,o_2 = NULL,p_2 = NULL;
              t = u_3;
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
                t = term_e_17;
                o_2 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, m_2), term_f_17);
                p_2 = t;
                t = SSL_printnl(o_2, p_2);
                t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, m_2), term_f_17));
              }
              ;
              LocalPopChoice(c_17);
            }
          else
            {
              t = b_17;
              t = g_3;
            }
        }
      }
    else
      {
        t = s_16;
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
  ATerm c_4 = NULL,e_4 = NULL;
  e_4 = t;
  t = fork_0_0(t);
  c_4 = t;
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_4;
        t = r_58(t);
        ;
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        t = SSL_waitpid(c_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_17 = ATgetArgument(t, 0);
            if(((ATgetType(i_17) != AT_INT) || (ATgetInt((ATermInt) i_17) != 0)))
              _fail(t);
            {
              ATerm l_17 = ATgetArgument(t, 1);
            }
            {
              ATerm m_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm j_78 (ATerm), ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL;
  k_4 = t;
  t = j_78(t);
  t = xtc_find_0_0(t);
  j_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_4, k_4);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm l_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, j_4, k_4);
      t = g_6(j_4, k_4, t);
      t = term_o_17;
      l_4 = t;
      t = SSL_exit(l_4);
      return(t);
    }
    t = fork_and_wait_1_0(s_0, t);
    t = k_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm l_64 (ATerm), ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
    o_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_5 = ATgetFirst((ATermList) t);
        n_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_2 = NULL,x_2 = NULL,k_1 = NULL;
          t = SSLgetAnnotations(o_5);
          u_2 = t;
          t = n_5;
          t = p_5(t);
          x_2 = t;
          t = (ATerm) ATinsert(CheckATermList(x_2), m_5);
          k_1 = t;
          t = SSLsetAnnotations(k_1, u_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_5;
        t = l_64(t);
      }
    return(t);
  }
  t = p_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_4 = NULL,s_4 = NULL,u_4 = NULL;
  n_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_4;
    }
  else
    {
      ATerm u_0 (ATerm t)
      {
        t = not_null(u_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((s_4 != NULL) && (s_4 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            s_4 = ATgetFirst((ATermList) t);
          if(((u_4 != NULL) && (u_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_4;
      t = at_end_1_0(u_0, t);
    }
  return(t);
}
ATerm g_7 (ATerm v_5, ATerm t)
{
  ATerm w_5 = NULL;
  t = SSL_explode_term(v_5);
  if(match_cons(t, sym__2))
    {
      ATerm p_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_6 = NULL,z_6 = NULL,b_7 = NULL;
  b_7 = t;
  if(match_cons(t, sym__2))
    {
      v_6 = ATgetArgument(t, 0);
      z_6 = ATgetArgument(t, 1);
      {
        ATerm q_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = z_6;
              return(t);
            }
            t = v_6;
            t = at_end_1_0(z_0, t);
            ;
            LocalPopChoice(r_17);
          }
        else
          {
            t = q_17;
            t = g_7(b_7, t);
          }
      }
    }
  else
    {
      t = g_7(b_7, t);
    }
  return(t);
}
ATerm i_6 (ATerm u_74 (ATerm), ATerm n_32, ATerm l_32, ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  n_7 = t;
  t = u_74(t);
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_7, n_32, l_32);
  t = y_6(i_7, n_32, l_32, t);
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL;
        t = term_y_17;
        s_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_7, term_y_17);
        t = x_6(i_7, s_7, t);
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_7 = ATgetFirst((ATermList) t);
        k_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_y_17;
    o_7 = t;
    t = (ATerm) ATinsert(CheckATermList(k_7), (ATerm) ATinsert(CheckATermList(j_7), n_32));
    p_7 = t;
    t = SSL_table_put(i_7, o_7, p_7);
    t = n_7;
  }
  return(t);
}
ATerm p_8 (ATerm b_8, ATerm t)
{
  t = b_8;
  {
    ATerm a_18 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_18 = ATgetArgument(t, 0);
            ATerm i_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_18;
      }
    t = term_j_18;
    t = debug_1_0(f_1, t);
    t = (ATerm) ATmakeAppl(sym__2, b_8, term_l_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm q_8 (ATerm f_8, ATerm g_8, ATerm h_8, ATerm t)
{
  t = SSL_open_file(f_8, g_8);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
  m_8 = t;
  if(match_cons(t, sym__2))
    {
      n_8 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
      {
        ATerm o_18 = t;
        int p_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_8(m_8, t);
            ;
            LocalPopChoice(p_18);
          }
        else
          {
            t = o_18;
            t = q_8(n_8, o_8, m_8, t);
          }
      }
    }
  else
    {
      t = p_8(m_8, t);
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
  ATerm u_8 = NULL,w_8 = NULL,x_8 = NULL;
  t = term_q_18;
  t = new_0_0(t);
  u_8 = t;
  t = term_r_18;
  w_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_8, term_r_18);
  t = w_6(u_8, w_8, t);
  x_8 = t;
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_8 = NULL;
        t = (ATerm) ATinsert(ATempty, term_k_9);
        z_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_8, (ATerm) ATinsert(ATempty, term_k_9));
        t = q_6(x_8, z_8, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = x_8;
      }
  }
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_u_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL;
  t = new_file_0_0(t);
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_9, term_l_9);
  t = open_file_0_0(t);
  t = term_q_18;
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_9, term_q_18);
  t = i_6(g_1, e_9, f_9, t);
  t = e_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL;
  r_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_3 = NULL,k_3 = NULL;
      t = r_9;
      t = xtc_new_file_0_0(t);
      i_3 = t;
      t = r_0(t);
      k_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_3, (ATerm) ATinsert(ATinsert(ATempty, i_3), term_v_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(i_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_3);
    }
  else
    {
      ATerm x_3 = NULL,b_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_9;
      t = xtc_new_file_0_0(t);
      x_3 = t;
      t = r_0(t);
      b_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_3), term_v_18), s_9), term_y_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(x_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_3);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm a_76 (ATerm), ATerm t)
{
  ATerm z_9 = NULL;
  z_9 = t;
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_10 = NULL;
        t = term_b_9;
        t = get_config_0_0(t);
        c_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_10, term_l_10);
        t = geq_0_0(t);
        t = z_9;
        t = a_76(t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        t = z_9;
      }
  }
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_e_19);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(h_1, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm g_10 = NULL;
  ATerm i_1 (ATerm t)
  {
    ATerm h_10 = NULL,i_10 = NULL;
    h_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_10), h_10);
    t = x_6(not_null(g_10), h_10, t);
    i_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_10, i_10);
    return(t);
  }
  if(((g_10 != NULL) && (g_10 != t)))
    _fail(t);
  else
    g_10 = t;
  t = SSL_table_keys(g_10);
  t = map_1_0(i_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  {
    ATerm g_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_10 = NULL;
        t = term_b_9;
        t = get_config_0_0(t);
        r_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_10, term_r_15);
        t = geq_0_0(t);
        t = n_10;
        t = c_76(t);
        ;
        LocalPopChoice(i_19);
      }
    else
      {
        t = g_19;
        t = n_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_76 (ATerm), ATerm t)
{
  ATerm y_10 = NULL;
  y_10 = t;
  {
    ATerm j_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_11 = NULL;
        t = term_b_9;
        t = get_config_0_0(t);
        c_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_11, term_m_12);
        t = geq_0_0(t);
        t = y_10;
        t = b_76(t);
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = j_19;
        t = y_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm f_11 = NULL;
  f_11 = t;
  {
    ATerm q_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_11 = NULL;
        t = term_b_9;
        t = get_config_0_0(t);
        j_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_11, term_s_10);
        t = geq_0_0(t);
        t = f_11;
        t = d_76(t);
        ;
        LocalPopChoice(w_19);
      }
    else
      {
        t = q_19;
        t = f_11;
      }
  }
  return(t);
}
ATerm k_6 (ATerm c_68 (ATerm), ATerm d_68 (ATerm), ATerm p_22, ATerm o_22, ATerm t)
{
  t = d_68(t);
  {
    ATerm j_1 (ATerm t)
    {
      ATerm o_11 = NULL;
      o_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_22, o_11);
      t = c_68(t);
      return(t);
    }
    t = fetch_1_0(j_1, t);
    t = o_22;
  }
  return(t);
}
ATerm l_6 (ATerm z_67 (ATerm), ATerm l_22, ATerm k_22, ATerm t)
{
  ATerm l_12 (ATerm t)
  {
    ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
    c_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_12 = ATgetFirst((ATermList) t);
            e_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_19 = t;
          int z_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_12;
              {
                ATerm l_1 (ATerm t)
                {
                  t = k_22;
                  return(t);
                }
                t = k_6(z_67, l_1, d_12, e_12, t);
                t = l_12(t);
              }
              ;
              LocalPopChoice(z_19);
            }
          else
            {
              t = x_19;
              {
                ATerm o_4 = NULL,r_4 = NULL,m_1 = NULL;
                t = SSLgetAnnotations(c_12);
                o_4 = t;
                t = e_12;
                t = l_12(t);
                r_4 = t;
                t = (ATerm) ATinsert(CheckATermList(r_4), d_12);
                m_1 = t;
                t = SSLsetAnnotations(m_1, o_4);
              }
            }
        }
      }
    return(t);
  }
  t = l_22;
  t = l_12(t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm h_13 = NULL;
  if(match_cons(t, sym__2))
    {
      h_13 = ATgetArgument(t, 0);
      if((h_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm b_34, ATerm c_34, ATerm d_34, ATerm t)
{
  ATerm r_12 = NULL,w_12 = NULL,y_12 = NULL;
  r_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_34, c_34);
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_20 = ATgetArgument(t, 0);
            ATerm k_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_34, c_34);
        t = x_6(b_34, c_34, t);
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = (ATerm) ATempty;
      }
    y_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_12, d_34);
    t = l_6(n_1, y_12, d_34, t);
    w_12 = t;
    t = SSL_table_put(b_34, c_34, w_12);
    t = r_12;
  }
  return(t);
}
ATerm n_6 (ATerm f_76 (ATerm), ATerm l_34, ATerm k_34, ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm i_13 = NULL,j_13 = NULL;
    if(match_cons(t, sym__2))
      {
        i_13 = ATgetArgument(t, 0);
        j_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, l_34, i_13, j_13);
    t = f_76(t);
    return(t);
  }
  t = k_34;
  t = map_1_0(o_1, t);
  return(t);
}
ATerm q_6 (ATerm i_36, ATerm j_36, ATerm t)
{
  t = SSL_access(i_36, j_36);
  return(t);
}
ATerm r_14 (ATerm j_14, ATerm t)
{
  t = SSL_fclose(j_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  n_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_14 = ATgetArgument(t, 0);
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_14);
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            t = r_14(n_14, t);
          }
      }
    }
  else
    {
      t = r_14(n_14, t);
    }
  return(t);
}
ATerm o_6 (ATerm s_15, ATerm t)
{
  t = SSL_read_term_from_stream(s_15);
  return(t);
}
ATerm p_6 (ATerm q_36, ATerm r_36, ATerm t)
{
  ATerm s_14 = NULL;
  t = SSL_fopen(q_36, r_36);
  s_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_14 = NULL;
  t = SSL_stdin_stream();
  t_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_14 = NULL;
  t = SSL_stdout_stream();
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_14);
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
ATerm z_17 (ATerm l_15, ATerm t)
{
  ATerm q_15 = NULL;
  t = SSL_explode_term(l_15);
  if(match_cons(t, sym__2))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_20 = ATgetArgument(t, 1);
        if(((ATgetType(o_20) == AT_LIST) && !(ATisEmpty(o_20))))
          {
            q_15 = ATgetFirst((ATermList) o_20);
            {
              ATerm p_20 = (ATerm) ATgetNext((ATermList) o_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_18 (ATerm x_15, ATerm z_15, ATerm b_16, ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,n_16 = NULL,q_16 = NULL,p_1 = NULL;
  t = SSLgetAnnotations(b_16);
  n_16 = t;
  t = x_15;
  if(match_cons(t, sym_Path_1))
    {
      q_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_16, z_15);
  p_1 = t;
  t = SSLsetAnnotations(p_1, n_16);
  if(match_cons(t, sym__2))
    {
      i_16 = ATgetArgument(t, 0);
      j_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(i_16, j_16, t);
  return(t);
}
ATerm d_18 (ATerm u_16, ATerm v_16, ATerm w_16, ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,k_17 = NULL,n_17 = NULL,q_1 = NULL;
  t = SSLgetAnnotations(w_16);
  k_17 = t;
  t = SSL_is_string(u_16);
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_17, v_16);
  q_1 = t;
  t = SSLsetAnnotations(q_1, k_17);
  if(match_cons(t, sym__2))
    {
      y_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(y_16, z_16, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_20 = ATgetArgument(t, 0);
      ATerm r_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  s_17 = t;
  if(match_cons(t, sym__2))
    {
      t_17 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_17(s_17, t);
            ;
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            {
              ATerm u_20 = t;
              int y_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_18(t_17, u_17, s_17, t);
                  ;
                  LocalPopChoice(y_20);
                }
              else
                {
                  t = u_20;
                  t = d_18(t_17, u_17, s_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_17(s_17, t);
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_18 = NULL;
      h_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_18, term_c_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      t = debug_1_0(r_1, t);
      _fail(t);
    }
  f_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(g_18, t);
  e_18 = t;
  t = f_18;
  t = fclose_0_0(t);
  t = e_18;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_i_21;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_k_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_18 = NULL,m_18 = NULL;
      l_18 = t;
      t = (ATerm) ATinsert(ATempty, term_p_21);
      m_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_18, (ATerm) ATinsert(ATempty, term_p_21));
      t = q_6(l_18, m_18, t);
      LocalPopChoice(o_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_21;
      {
        ATerm q_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_21 = t;
            if((PushChoice() == 0))
              {
                ATerm n_18 = NULL,w_18 = NULL;
                n_18 = t;
                t = (ATerm) ATinsert(ATempty, term_k_9);
                w_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, n_18, (ATerm) ATinsert(ATempty, term_k_9));
                t = q_6(n_18, w_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_21;
              }
            t = debug_1_0(s_1, t);
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = q_21;
            t = debug_1_0(t_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_u_21;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = debug_1_0(a_2, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  t = term_e_17;
  t_19 = t;
  t = (ATerm) ATinsert(ATempty, term_w_21);
  u_19 = t;
  t = SSL_printnl(t_19, u_19);
  t = s_19;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm v_19 = NULL,y_19 = NULL,c_20 = NULL;
  if(match_cons(t, sym__3))
    {
      v_19 = ATgetArgument(t, 0);
      y_19 = ATgetArgument(t, 1);
      c_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_6(v_19, y_19, c_20, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
  e_20 = t;
  t = term_e_17;
  f_20 = t;
  t = (ATerm) ATinsert(ATempty, term_y_21);
  g_20 = t;
  t = SSL_printnl(f_20, g_20);
  t = e_20;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
  h_20 = t;
  t = term_e_17;
  i_20 = t;
  t = (ATerm) ATinsert(ATempty, term_w_21);
  j_20 = t;
  t = SSL_printnl(i_20, j_20);
  t = h_20;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm x_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,f_19 = NULL,h_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
  x_18 = t;
  t = if_verbose5_1_0(u_1, t);
  {
    ATerm a_22 = t;
    if((PushChoice() == 0))
      {
        ATerm o_19 = NULL,r_19 = NULL;
        t = term_c_22;
        o_19 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, x_18);
        r_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_22, (ATerm) ATmakeAppl(sym_Imported_1, x_18));
        t = x_6(o_19, r_19, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_22;
      }
    a_19 = t;
    t = term_c_22;
    l_19 = t;
    t = term_d_22;
    m_19 = t;
    t = (ATerm) ATinsert(ATempty, x_18);
    n_19 = t;
    t = SSL_table_put(l_19, m_19, n_19);
    t = a_19;
    t = if_verbose4_1_0(z_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(b_2, t);
    z_18 = t;
    t = term_c_22;
    k_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_c_22, z_18);
    t = n_6(d_2, k_19, z_18, t);
    t = if_verbose6_1_0(f_2, t);
    t = term_c_22;
    b_19 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, x_18);
    f_19 = t;
    t = (ATerm) ATempty;
    h_19 = t;
    t = SSL_table_put(b_19, f_19, h_19);
    t = (ATerm) ATmakeAppl(sym__3, term_c_22, (ATerm)ATmakeAppl(sym_Imported_1, x_18), (ATerm) ATempty);
    t = if_verbose4_1_0(k_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_71 (ATerm), ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  v_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_20;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_20 = ATgetFirst((ATermList) t);
          x_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm f_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_5 = NULL,c_6 = NULL,h_6 = NULL,v_1 = NULL;
            t = SSLgetAnnotations(v_20);
            z_5 = t;
            t = w_20;
            t = r_71(t);
            c_6 = t;
            t = x_20;
            t = filter_1_0(r_71, t);
            h_6 = t;
            t = (ATerm) ATinsert(CheckATermList(h_6), c_6);
            v_1 = t;
            t = SSLsetAnnotations(v_1, z_5);
            ;
            LocalPopChoice(h_22);
          }
        else
          {
            t = f_22;
            t = x_20;
            t = filter_1_0(r_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm q_73 (ATerm), ATerm t)
{
  ATerm d_21 (ATerm t)
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_73(t);
        t = d_21(t);
        ;
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
      }
    return(t);
  }
  t = d_21(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm n_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_22);
    }
  else
    {
      t = n_22;
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_21 = NULL;
            t = term_w_22;
            e_21 = t;
            t = SSL_getenv(e_21);
            ;
            LocalPopChoice(t_22);
          }
        else
          {
            t = s_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_x_22;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL;
  t = term_c_22;
  l_21 = t;
  t = term_z_22;
  m_21 = t;
  t = term_a_23;
  t = x_6(l_21, m_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm b_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_23;
      }
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
  t = term_c_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm f_21 = NULL;
  t = if_verbose5_1_0(l_2, t);
  f_21 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_21 = NULL,h_21 = NULL;
        t = term_c_22;
        g_21 = t;
        t = term_d_22;
        h_21 = t;
        t = term_f_23;
        t = x_6(g_21, h_21, t);
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        {
          ATerm j_21 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          j_21 = t;
          t = repeat_1_0(q_2, t);
          t = j_21;
        }
      }
    t = f_21;
    t = if_verbose5_1_0(r_2, t);
  }
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = debug_1_0(v_2, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_g_23;
  return(t);
}
ATerm l_23 (ATerm r_21, ATerm t)
{
  ATerm x_21 = NULL,z_21 = NULL,b_22 = NULL;
  t = term_c_22;
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, r_21);
  b_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_22, (ATerm) ATmakeAppl(sym_Tool_1, r_21));
  t = x_6(z_21, b_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_23 = ATgetFirst((ATermList) t);
      if(match_cons(h_23, sym__2))
        {
          ATerm k_23 = ATgetArgument(h_23, 0);
          x_21 = ATgetArgument(h_23, 1);
        }
      else
        _fail(t);
      {
        ATerm j_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_21;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = debug_1_0(c_3, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_g_23;
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_c_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(e_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_22 = NULL,g_22 = NULL,m_22 = NULL;
      t = if_verbose5_1_0(t_2, t);
      t = xtc_load_0_0(t);
      m_22 = t;
      if(match_cons(t, sym__2))
        {
          e_22 = ATgetArgument(t, 0);
          g_22 = ATgetArgument(t, 1);
          {
            ATerm p_23 = t;
            int q_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_22 = NULL,v_22 = NULL,y_22 = NULL;
                t = term_c_22;
                v_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, e_22);
                y_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_c_22, (ATerm) ATmakeAppl(sym_Tool_1, e_22));
                t = x_6(v_22, y_22, t);
                {
                  ATerm w_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((g_22 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((u_22 != NULL) && (u_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(w_2, t);
                  t = not_null(u_22);
                }
                ;
                LocalPopChoice(q_23);
              }
            else
              {
                t = p_23;
                t = l_23(m_22, t);
              }
          }
        }
      else
        {
          t = l_23(m_22, t);
        }
      t = if_verbose5_1_0(z_2, t);
      ;
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      {
        ATerm i_23 = NULL,q_7 = NULL,r_7 = NULL;
        i_23 = t;
        t = term_e_17;
        q_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_23), i_23), term_r_23);
        r_7 = t;
        t = SSL_printnl(q_7, r_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_23), i_23), term_r_23);
        t = if_verbose5_1_0(d_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_24 = NULL,g_24 = NULL;
      g_24 = t;
      if(match_cons(t, sym_FILE_1))
        {
          b_24 = ATgetArgument(t, 0);
          {
            ATerm w_7 = NULL,c_2 = NULL;
            t = SSLgetAnnotations(g_24);
            w_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, b_24);
            c_2 = t;
            t = SSLsetAnnotations(c_2, w_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_24;
        }
      LocalPopChoice(v_23);
      {
        ATerm h_3 (ATerm t)
        {
          ATerm h_24 = NULL,i_24 = NULL;
          t = term_q_18;
          t = c_79(t);
          t = xtc_find_0_0(t);
          h_24 = t;
          t = term_q_18;
          t = pass_v_verbose_0_0(t);
          i_24 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(i_24), h_24), term_x_23), term_w_23);
          return(t);
        }
        t = xtc_transform_file_2_0(f_3, h_3, t);
      }
    }
  else
    {
      t = u_23;
      {
        ATerm n_3 (ATerm t)
        {
          ATerm k_24 = NULL,n_24 = NULL;
          t = term_q_18;
          t = c_79(t);
          t = xtc_find_0_0(t);
          k_24 = t;
          t = term_q_18;
          t = pass_v_verbose_0_0(t);
          n_24 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_24), k_24), term_x_23), term_w_23);
          return(t);
        }
        t = xtc_transform_term_2_0(m_3, n_3, t);
      }
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_y_23;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm xtc_parse_sdf_0_0 (ATerm t)
{
  t = xtc_sglr_1_0(o_3, t);
  {
    ATerm a_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_25 = NULL,c_25 = NULL;
        c_25 = t;
        if(match_cons(t, sym_FILE_1))
          {
            b_25 = ATgetArgument(t, 0);
            {
              ATerm i_8 = NULL,e_2 = NULL;
              t = SSLgetAnnotations(c_25);
              i_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_25);
              e_2 = t;
              t = SSLsetAnnotations(e_2, i_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_25;
          }
        LocalPopChoice(c_24);
        t = xtc_transform_file_2_0(p_3, pass_verbose_0_0, t);
      }
    else
      {
        t = a_24;
        t = xtc_transform_term_2_0(q_3, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm pre_process_sdf_0_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  if(match_cons(t, sym__2))
    {
      v_25 = ATgetArgument(t, 0);
      w_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_25;
  if(match_cons(t, sym_AST_0))
    {
      t = w_25;
    }
  else
    {
      if(match_cons(t, sym_ParseTree_0))
        {
          t = w_25;
          {
            ATerm d_24 = t;
            int e_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_10 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    b_10 = ATgetArgument(t, 0);
                    {
                      ATerm m_10 = NULL,y_2 = NULL;
                      t = SSLgetAnnotations(w_25);
                      m_10 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, b_10);
                      y_2 = t;
                      t = SSLsetAnnotations(y_2, m_10);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = w_25;
                  }
                LocalPopChoice(e_24);
                t = xtc_transform_file_2_0(s_3, pass_verbose_0_0, t);
              }
            else
              {
                t = d_24;
                t = xtc_transform_term_2_0(t_3, pass_verbose_0_0, t);
              }
          }
        }
      else
        {
          if(!(match_cons(t, sym_PlainText_0)))
            _fail(t);
          t = w_25;
          t = xtc_parse_sdf_0_0(t);
        }
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm f_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_24);
    }
  else
    {
      t = f_24;
      t = term_m_24;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm ppgen_0_0 (ATerm t)
{
  ATerm f_26 = NULL,h_26 = NULL;
  h_26 = t;
  t = get_input_type_0_0(t);
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_26, h_26);
  t = pre_process_sdf_0_0(t);
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_26 = NULL,o_26 = NULL;
        o_26 = t;
        if(match_cons(t, sym_FILE_1))
          {
            n_26 = ATgetArgument(t, 0);
            {
              ATerm v_10 = NULL,j_3 = NULL;
              t = SSLgetAnnotations(o_26);
              v_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_26);
              j_3 = t;
              t = SSLsetAnnotations(j_3, v_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_26;
          }
        LocalPopChoice(r_24);
        t = xtc_transform_file_2_0(v_3, pass_verbose_0_0, t);
      }
    else
      {
        t = q_24;
        t = xtc_transform_term_2_0(w_3, pass_verbose_0_0, t);
      }
    {
      ATerm s_24 = t;
      int t_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_26 = NULL,y_26 = NULL;
          y_26 = t;
          if(match_cons(t, sym_FILE_1))
            {
              x_26 = ATgetArgument(t, 0);
              {
                ATerm i_11 = NULL,l_3 = NULL;
                t = SSLgetAnnotations(y_26);
                i_11 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, x_26);
                l_3 = t;
                t = SSLsetAnnotations(l_3, i_11);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = y_26;
            }
          LocalPopChoice(t_24);
          t = xtc_transform_file_2_0(y_3, pass_verbose_0_0, t);
        }
      else
        {
          t = s_24;
          t = xtc_transform_term_2_0(z_3, pass_verbose_0_0, t);
        }
    }
  }
  return(t);
}
ATerm r_6 (ATerm o_12, ATerm p_12, ATerm t)
{
  t = SSL_copy(o_12, p_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm b_28 = NULL,e_28 = NULL;
  b_28 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_11 = NULL;
        t = b_28;
        t = n_0(t);
        z_11 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = z_11;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = z_11;
          }
        t = (ATerm) ATmakeAppl(sym__2, e_28, z_11);
        t = r_6(e_28, z_11, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_28);
        ;
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        {
          ATerm w_24 = t;
          int x_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_12 = NULL;
              t = b_28;
              t = n_0(t);
              u_12 = t;
              {
                ATerm y_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm v_12 = NULL;
                    v_12 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = v_12;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = v_12;
                          }
                        else
                          {
                            t = v_12;
                            if((e_28 != t))
                              {
                                _fail(t);
                              }
                            t = v_12;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_24;
                  }
                t = (ATerm) ATmakeAppl(sym__2, e_28, u_12);
                t = r_6(e_28, u_12, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, e_28);
              }
              ;
              LocalPopChoice(x_24);
            }
          else
            {
              t = w_24;
              t = b_28;
              t = n_0(t);
              if((e_28 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_28);
            }
        }
      }
  }
  return(t);
}
ATerm s_6 (ATerm j_33, ATerm k_33, ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL;
  j_28 = t;
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_33, k_33);
        t = x_6(j_33, k_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_25 = ATgetFirst((ATermList) t);
            i_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_25);
        t = SSL_table_put(j_33, k_33, i_28);
        t = (ATerm) ATmakeAppl(sym__3, j_33, k_33, i_28);
      }
    else
      {
        t = z_24;
        t = SSL_table_remove(j_33, k_33);
        t = (ATerm) ATmakeAppl(sym__2, j_33, k_33);
      }
    t = j_28;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_74 (ATerm), ATerm t)
{
  ATerm k_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
  o_28 = t;
  t = r_74(t);
  n_28 = t;
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_28 = NULL;
        t = term_y_17;
        q_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_28, term_y_17);
        t = x_6(n_28, q_28, t);
        ;
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_28 = ATgetFirst((ATermList) t);
        k_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_y_17;
    p_28 = t;
    t = SSL_table_put(n_28, p_28, k_28);
    t = m_28;
    {
      ATerm a_4 (ATerm t)
      {
        ATerm r_28 = NULL;
        r_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_28, r_28);
        t = s_6(n_28, r_28, t);
        return(t);
      }
      t = map_1_0(a_4, t);
      t = o_28;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_75(t);
      t = n_75(t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      t = n_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_74 (ATerm), ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,z_28 = NULL;
  u_28 = t;
  t = q_74(t);
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_28, term_y_17);
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_29 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_25 = ATgetArgument(t, 0);
            ATerm l_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_17;
        f_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_28, term_y_17);
        t = x_6(t_28, f_29, t);
        ;
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = (ATerm) ATempty;
      }
    v_28 = t;
    t = term_y_17;
    w_28 = t;
    t = (ATerm) ATinsert(CheckATermList(v_28), (ATerm) ATempty);
    z_28 = t;
    t = SSL_table_put(t_28, w_28, z_28);
    t = u_28;
  }
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_u_18;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(z_29);
        ;
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        t = z_29;
      }
  }
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_u_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  ATerm p_29 = NULL;
  ATerm f_4 (ATerm t)
  {
    ATerm s_29 = NULL;
    s_29 = t;
    {
      ATerm o_25 = t;
      int p_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_29 = NULL,u_29 = NULL;
          t = term_u_18;
          t_29 = t;
          t = term_y_17;
          u_29 = t;
          t = term_q_25;
          t = x_6(t_29, u_29, t);
          ;
          LocalPopChoice(p_25);
        }
      else
        {
          t = o_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((p_29 != NULL) && (p_29 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            p_29 = ATgetFirst((ATermList) t);
          {
            ATerm r_25 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = p_29;
      t = map_1_0(g_4, t);
      t = s_29;
      t = end_scope_1_0(h_4, t);
    }
    return(t);
  }
  t = begin_scope_1_0(d_4, t);
  t = restore_always_2_0(v_77, f_4, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      t = term_x_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_77 (ATerm), ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_30 = NULL;
        t = term_y_18;
        t = get_config_0_0(t);
        e_30 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_30);
        ;
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        t = term_j_9;
      }
    t = w_77(t);
    t = copy_to_1_0(m_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(i_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
  i_30 = t;
  t = term_q_18;
  t = whoami_0_0(t);
  m_30 = t;
  t = term_e_17;
  o_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_26), m_30), term_a_26);
  p_30 = t;
  t = SSL_printnl(o_30, p_30);
  t = term_i_9;
  n_30 = t;
  t = SSL_exit(n_30);
  t = i_30;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm r_30 = NULL;
  r_30 = t;
  if(match_string(t, "-k"))
    {
      t = r_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_30;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
  s_30 = t;
  t = SSL_string_to_int(s_30);
  t_30 = t;
  t = term_c_26;
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_26, t_30);
  t = a_7(u_30, t_30, t);
  t = s_30;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_4, q_4, t_4, t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm w_30 = NULL;
  w_30 = t;
  if(match_string(t, "-S"))
    {
      t = w_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_30;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  t = term_b_9;
  x_30 = t;
  t = term_e_26;
  y_30 = t;
  t = term_g_26;
  t = a_7(x_30, y_30, t);
  t = term_i_26;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  b_31 = t;
  t = SSL_string_to_int(b_31);
  c_31 = t;
  t = term_b_9;
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_9, c_31);
  t = a_7(d_31, c_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_31);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm e_31 = NULL,h_31 = NULL;
  t = term_l_26;
  e_31 = t;
  t = term_q_18;
  h_31 = t;
  t = term_m_26;
  t = a_7(e_31, h_31, t);
  t = term_p_26;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_q_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_4, w_4, y_4, t);
      ;
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
      {
        ATerm t_26 = t;
        int u_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_4, a_5, b_5, t);
            ;
            LocalPopChoice(u_26);
          }
        else
          {
            t = t_26;
            t = Option_3_0(d_5, e_5, h_5, t);
          }
      }
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm j_31 = NULL;
  j_31 = t;
  if(match_string(t, "-o"))
    {
      t = j_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_31;
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL;
  k_31 = t;
  t = term_v_18;
  l_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_18, k_31);
  t = a_7(l_31, k_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_31);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_v_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_5, j_5, l_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
      t = term_q_18;
      t = m_0(t);
      t_31 = t;
      t = term_w_26;
      u_31 = t;
      t = term_z_26;
      v_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_26, term_z_26, t_31);
      t = y_6(u_31, v_31, t_31, t);
      _fail(t);
    }
  else
    {
      ATerm z_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_31 = ATgetFirst((ATermList) t);
          q_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_31 = ATgetFirst((ATermList) t);
          s_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_31;
      t = k_0(t);
      t = r_31;
      t = l_0(t);
      z_31 = t;
      t = (ATerm) ATinsert(CheckATermList(s_31), z_31);
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm b_32 = NULL;
  b_32 = t;
  if(match_string(t, "-i"))
    {
      t = b_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_32;
    }
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL;
  c_32 = t;
  t = term_y_18;
  d_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_18, c_32);
  t = a_7(d_32, c_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_32);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_5, s_5, t_5, t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-A", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm e_32 = NULL,q_32 = NULL,r_32 = NULL;
  e_32 = t;
  t = term_l_24;
  q_32 = t;
  t = term_b_27;
  r_32 = t;
  t = term_c_27;
  t = a_7(q_32, r_32, t);
  t = e_32;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-a", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
  s_32 = t;
  t = term_l_24;
  t_32 = t;
  t = term_e_27;
  u_32 = t;
  t = term_f_27;
  t = a_7(t_32, u_32, t);
  t = s_32;
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm v_32 = NULL,x_32 = NULL;
  t = term_h_27;
  v_32 = t;
  t = term_q_18;
  x_32 = t;
  t = term_i_27;
  t = a_7(v_32, x_32, t);
  t = term_j_27;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_k_27;
  return(t);
}
ATerm ppgen_options_0_0 (ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, x_5, y_5, t);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      {
        ATerm n_27 = t;
        int o_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(a_6, b_6, j_6, t);
            ;
            LocalPopChoice(o_27);
          }
        else
          {
            t = n_27;
            {
              ATerm p_27 = t;
              int q_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_option_0_0(t);
                  ;
                  LocalPopChoice(q_27);
                }
              else
                {
                  t = p_27;
                  {
                    ATerm r_27 = t;
                    int s_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = output_option_0_0(t);
                        ;
                        LocalPopChoice(s_27);
                      }
                    else
                      {
                        t = r_27;
                        {
                          ATerm t_27 = t;
                          int u_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(u_6, c_7, d_7, t);
                              ;
                              LocalPopChoice(u_27);
                            }
                          else
                            {
                              t = t_27;
                              {
                                ATerm v_27 = t;
                                int w_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = verbose_option_0_0(t);
                                    ;
                                    LocalPopChoice(w_27);
                                  }
                                else
                                  {
                                    t = v_27;
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
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_32 = NULL,g_33 = NULL,h_33 = NULL,l_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_18;
  t = whoami_0_0(t);
  y_32 = t;
  t = term_e_17;
  h_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_27), y_32);
  l_33 = t;
  t = SSL_printnl(h_33, l_33);
  t = term_i_9;
  g_33 = t;
  t = SSL_exit(g_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_y_27;
  t = get_config_0_0(t);
  return(t);
}
ATerm t_6 (ATerm z_30, ATerm a_31, ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_30, a_31);
      ;
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      t = SSL_addr(z_30, a_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
  n_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_33;
      t = n_70(t);
    }
  else
    {
      ATerm s_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_33 = ATgetFirst((ATermList) t);
          p_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_33;
      t = foldr_2_0(n_70, o_70, t);
      s_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_33, s_33);
      t = o_70(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      n_13 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(n_13, o_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_33 = NULL,e_13 = NULL,k_13 = NULL;
  t = times_0_0(t);
  k_13 = t;
  t = SSL_explode_term(k_13);
  if(match_cons(t, sym__2))
    {
      ATerm c_28 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_13;
  t = foldr_2_0(e_7, f_7, t);
  v_33 = t;
  t = SSL_TicksToSeconds(v_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  p_34 = t;
  if(match_cons(t, sym__2))
    {
      q_34 = ATgetArgument(t, 0);
      r_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_34;
        if((q_34 != t))
          {
            _fail(t);
          }
        t = p_34;
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = d_28;
        t = (ATerm) ATmakeAppl(sym__2, q_34, r_34);
        {
          ATerm g_28 = t;
          int h_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_34, r_34);
              ;
              LocalPopChoice(h_28);
            }
          else
            {
              t = g_28;
              t = SSL_gtr(q_34, r_34);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_34, r_34);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_75 (ATerm), ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  {
    ATerm l_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_34 = NULL;
        t = term_b_9;
        t = get_config_0_0(t);
        z_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_34, term_i_9);
        t = geq_0_0(t);
        t = x_34;
        t = y_75(t);
        ;
        LocalPopChoice(s_28);
      }
    else
      {
        t = l_28;
        t = x_34;
      }
  }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,g_35 = NULL,h_35 = NULL;
  t = run_time_0_0(t);
  b_35 = t;
  t = term_q_18;
  t = whoami_0_0(t);
  c_35 = t;
  t = term_e_17;
  g_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_28), b_35), term_p_9), c_35);
  h_35 = t;
  t = SSL_printnl(g_35, h_35);
  t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_28), b_35), term_p_9), c_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_26;
  i_35 = t;
  t = SSL_exit(i_35);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL;
  z_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_35 = ATgetArgument(t, 0);
          {
            ATerm c_14 = NULL,r_3 = NULL;
            t = SSLgetAnnotations(z_35);
            c_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_35);
            r_3 = t;
            t = SSLsetAnnotations(r_3, c_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_80 (ATerm), ATerm t)
{
  ATerm y_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_29);
    }
  else
    {
      t = y_28;
      t = fetch_1_0(l_7, t);
    }
  t = d_80(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_36 = ATgetFirst((ATermList) t);
      d_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_36 = NULL,k_36 = NULL;
        ATerm m_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_36)), not_null(k_36));
          return(t);
        }
        t = d_36;
        t = j_0(t);
        if(((h_36 != NULL) && (h_36 != t)))
          _fail(t);
        else
          h_36 = t;
        t = c_36;
        t = i_0(t);
        if(((k_36 != NULL) && (k_36 != t)))
          _fail(t);
        else
          k_36 = t;
        t = d_36;
        t = reverse_acc_2_0(i_0, m_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_18;
      t = j_0(t);
    }
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,u_36 = NULL,c_5 = NULL;
  u_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_36);
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_36);
  c_5 = t;
  t = SSLsetAnnotations(c_5, o_36);
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_36), term_c_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL;
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      t = fetch_1_0(t_7, t);
    }
  t = term_g_29;
  t = echo_0_0(t);
  t = term_w_26;
  m_36 = t;
  t = term_z_26;
  n_36 = t;
  t = term_h_29;
  t = x_6(m_36, n_36, t);
  t = reverse_acc_2_0(_id, u_7, t);
  t = map_1_0(v_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_64 (ATerm), ATerm t)
{
  ATerm e_38 (ATerm t)
  {
    ATerm a_38 = NULL,c_38 = NULL,d_38 = NULL;
    a_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_38 = ATgetFirst((ATermList) t);
        d_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_29 = t;
      int j_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_14 = NULL,a_15 = NULL,f_5 = NULL;
          t = SSLgetAnnotations(a_38);
          v_14 = t;
          t = c_38;
          t = f_64(t);
          a_15 = t;
          t = (ATerm) ATinsert(CheckATermList(d_38), a_15);
          f_5 = t;
          t = SSLsetAnnotations(f_5, v_14);
          ;
          LocalPopChoice(j_29);
        }
      else
        {
          t = i_29;
          {
            ATerm i_15 = NULL,o_15 = NULL,g_5 = NULL;
            t = SSLgetAnnotations(a_38);
            i_15 = t;
            t = d_38;
            t = e_38(t);
            o_15 = t;
            t = (ATerm) ATinsert(CheckATermList(o_15), c_38);
            g_5 = t;
            t = SSLsetAnnotations(g_5, i_15);
          }
        }
    }
    return(t);
  }
  t = e_38(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
  l_38 = t;
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_38;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_29 = ATgetFirst((ATermList) t);
                ATerm n_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_38;
          }
        ;
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        t = (ATerm) ATinsert(ATempty, l_38);
      }
    m_38 = t;
    t = term_x_25;
    n_38 = t;
    t = SSL_printnl(n_38, m_38);
    t = l_38;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_27;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm w_6 (ATerm v_29, ATerm w_29, ATerm t)
{
  t = SSL_strcat(v_29, w_29);
  return(t);
}
ATerm debug_1_0 (ATerm a_60 (ATerm), ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
  r_38 = t;
  t = a_60(t);
  s_38 = t;
  t = term_e_17;
  t_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_38), s_38);
  u_38 = t;
  t = SSL_printnl(t_38, u_38);
  t = r_38;
  return(t);
}
ATerm map_1_0 (ATerm v_63 (ATerm), ATerm t)
{
  ATerm o_39 (ATerm t)
  {
    ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
    l_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_39;
      }
    else
      {
        ATerm e_16 = NULL,h_16 = NULL,k_16 = NULL,k_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_39 = ATgetFirst((ATermList) t);
            n_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_39);
        e_16 = t;
        t = m_39;
        t = v_63(t);
        h_16 = t;
        t = n_39;
        t = o_39(t);
        k_16 = t;
        t = (ATerm) ATinsert(CheckATermList(k_16), h_16);
        k_5 = t;
        t = SSLsetAnnotations(k_5, e_16);
      }
    return(t);
  }
  t = o_39(t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm o_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_29);
    }
  else
    {
      t = o_29;
    }
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_r_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_39 = NULL;
      x_39 = t;
      t = SSL_is_string(x_39);
      ;
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
      {
        ATerm a_30 = t;
        int b_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_7, t);
            ;
            LocalPopChoice(b_30);
          }
        else
          {
            t = a_30;
            {
              ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
              d_40 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_40 = ATgetArgument(t, 0);
                  t = e_40;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_40 = ATgetArgument(t, 0);
                      t = e_40;
                      {
                        ATerm c_30 = t;
                        int d_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(d_30);
                          }
                        else
                          {
                            t = c_30;
                            t = debug_1_0(y_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_40 = NULL,k_40 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_40 = ATgetArgument(t, 0);
                          f_40 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_40;
                      t = eval_config_0_0(t);
                      j_40 = t;
                      t = f_40;
                      t = eval_config_0_0(t);
                      k_40 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_40, k_40);
                      t = w_6(j_40, k_40, t);
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
  ATerm o_40 = NULL,p_40 = NULL;
  o_40 = t;
  t = term_f_30;
  p_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_30, o_40);
  t = x_6(p_40, o_40, t);
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_40 = NULL,r_40 = NULL;
        t = eval_config_0_0(t);
        q_40 = t;
        t = term_f_30;
        r_40 = t;
        t = SSL_table_put(r_40, o_40, q_40);
        t = q_40;
        ;
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
      }
  }
  return(t);
}
ATerm z_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL;
  t = term_j_30;
  u_40 = t;
  t = term_q_18;
  v_40 = t;
  t = term_k_30;
  t = a_7(u_40, v_40, t);
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_l_30;
  return(t);
}
ATerm d_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL;
  t = term_j_30;
  y_40 = t;
  t = term_q_18;
  z_40 = t;
  t = term_k_30;
  t = a_7(y_40, z_40, t);
  t = term_e_19;
  w_40 = t;
  t = term_q_18;
  x_40 = t;
  t = term_q_30;
  t = a_7(w_40, x_40, t);
  t = term_v_30;
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_i_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_7, a_8, c_8, t);
      ;
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      t = Option_3_0(d_8, e_8, j_8, t);
    }
  return(t);
}
ATerm a_7 (ATerm e_35, ATerm f_35, ATerm t)
{
  ATerm a_41 = NULL;
  t = term_f_30;
  a_41 = t;
  t = SSL_table_put(a_41, e_35, f_35);
  t = (ATerm) ATmakeAppl(sym__3, term_f_30, e_35, f_35);
  return(t);
}
ATerm x_6 (ATerm v_34, ATerm w_34, ATerm t)
{
  t = SSL_table_get(v_34, w_34);
  return(t);
}
ATerm y_6 (ATerm e_33, ATerm f_33, ATerm d_33, ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL;
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_33, f_33);
  {
    ATerm o_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_31 = ATgetArgument(t, 0);
            ATerm y_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_33, f_33);
        t = x_6(e_33, f_33, t);
        ;
        LocalPopChoice(w_31);
      }
    else
      {
        t = o_31;
        t = (ATerm) ATempty;
      }
    d_41 = t;
    t = (ATerm) ATinsert(CheckATermList(d_41), d_33);
    e_41 = t;
    t = SSL_table_put(e_33, f_33, e_41);
    t = c_41;
  }
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
      t = term_q_18;
      t = h_0(t);
      m_41 = t;
      t = term_w_26;
      n_41 = t;
      t = term_z_26;
      o_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_26, term_z_26, m_41);
      t = y_6(n_41, o_41, m_41, t);
      _fail(t);
    }
  else
    {
      ATerm r_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_41 = ATgetFirst((ATermList) t);
          l_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_41;
      t = d_0(t);
      t = term_q_18;
      t = g_0(t);
      r_41 = t;
      t = (ATerm) ATinsert(CheckATermList(l_41), r_41);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_51 (ATerm), ATerm o_51 (ATerm), ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,r_5 = NULL;
  x_41 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_41 = ATgetFirst((ATermList) t);
      u_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_41);
  s_41 = t;
  t = t_41;
  t = n_51(t);
  v_41 = t;
  t = u_41;
  t = o_51(t);
  w_41 = t;
  t = (ATerm) ATinsert(CheckATermList(w_41), v_41);
  r_5 = t;
  t = SSLsetAnnotations(r_5, s_41);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_82 (ATerm), ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,h_42 = NULL,i_42 = NULL,c_9 = NULL;
  c_42 = t;
  {
    ATerm a_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_32;
        t = b_82(t);
        ;
        LocalPopChoice(f_32);
      }
    else
      {
        t = a_32;
      }
    t = c_42;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_42 = ATgetFirst((ATermList) t);
        f_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_42);
    d_42 = t;
    t = term_y_27;
    i_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_27, e_42);
    t = a_7(i_42, e_42, t);
    t = f_42;
    {
      ATerm s_42 (ATerm t)
      {
        ATerm h_32 = t;
        int i_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_32 = t;
            int k_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_42 = NULL;
                l_42 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_42;
                ;
                LocalPopChoice(k_32);
              }
            else
              {
                t = j_32;
                t = b_82(t);
                t = Cons_2_0(_id, s_42, t);
              }
            ;
            LocalPopChoice(i_32);
          }
        else
          {
            t = h_32;
            {
              ATerm o_42 = NULL,p_42 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_42 = ATgetFirst((ATermList) t);
                  p_42 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_42), (ATerm) ATmakeAppl(sym_Undefined_1, o_42));
            }
          }
        return(t);
      }
      t = s_42(t);
      if(((h_42 != NULL) && (h_42 != t)))
        _fail(t);
      else
        h_42 = t;
      t = (ATerm) ATinsert(CheckATermList(h_42), (ATerm) ATmakeAppl(sym_Program_1, e_42));
      if(((c_9 != NULL) && (c_9 != t)))
        _fail(t);
      else
        c_9 = t;
      t = SSLsetAnnotations(c_9, d_42);
    }
  }
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm e_43 = NULL;
  e_43 = t;
  if(match_string(t, "--help"))
    {
      t = e_43;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_43;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_43;
        }
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL;
  t = term_b_29;
  f_43 = t;
  t = term_q_18;
  g_43 = t;
  t = term_m_32;
  t = a_7(f_43, g_43, t);
  t = term_o_32;
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm t_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_82 (ATerm), ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL;
  z_42 = t;
  t = term_w_26;
  b_43 = t;
  t = term_z_26;
  c_43 = t;
  t = (ATerm) ATempty;
  d_43 = t;
  t = SSL_table_put(b_43, c_43, d_43);
  t = z_42;
  {
    ATerm k_8 (ATerm t)
    {
      ATerm w_32 = t;
      int z_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_82(t);
          ;
          LocalPopChoice(z_32);
        }
      else
        {
          t = w_32;
          {
            ATerm a_33 = t;
            int b_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_8, r_8, s_8, t);
                ;
                LocalPopChoice(b_33);
              }
            else
              {
                t = a_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_8, t);
    {
      ATerm c_33 = t;
      int i_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_43 = NULL;
          n_43 = t;
          {
            ATerm m_33 = t;
            int q_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_17 = NULL;
                t = n_43;
                {
                  ATerm r_33 = t;
                  int t_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_b_29;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(t_33);
                    }
                  else
                    {
                      t = r_33;
                      t = fetch_1_0(t_8, t);
                    }
                  t = n_43;
                  t = default_system_usage_0_0(t);
                  t = term_e_26;
                  j_17 = t;
                  t = SSL_exit(j_17);
                }
                ;
                LocalPopChoice(q_33);
              }
            else
              {
                t = m_33;
                {
                  ATerm v_17 = NULL;
                  t = term_j_30;
                  t = get_config_0_0(t);
                  t = n_43;
                  t = default_system_about_0_0(t);
                  t = term_e_26;
                  v_17 = t;
                  t = SSL_exit(v_17);
                }
              }
          }
          ;
          LocalPopChoice(i_33);
        }
      else
        {
          t = c_33;
          {
            ATerm u_33 = t;
            int w_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL;
                ATerm v_8 (ATerm t)
                {
                  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,g_9 = NULL;
                  t_43 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      s_43 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_43);
                  r_43 = t;
                  t = s_43;
                  if(((x_42 != NULL) && (x_42 != t)))
                    _fail(t);
                  else
                    x_42 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, s_43);
                  g_9 = t;
                  t = SSLsetAnnotations(g_9, r_43);
                  return(t);
                }
                t = fetch_1_0(v_8, t);
                t = term_e_17;
                if(((p_43 != NULL) && (p_43 != t)))
                  _fail(t);
                else
                  p_43 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_42)), term_x_33);
                if(((q_43 != NULL) && (q_43 != t)))
                  _fail(t);
                else
                  q_43 = t;
                t = SSL_printnl(p_43, q_43);
                t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_42)), term_x_33));
                t = default_system_usage_0_0(t);
                t = term_i_9;
                if(((o_43 != NULL) && (o_43 != t)))
                  _fail(t);
                else
                  o_43 = t;
                t = SSL_exit(o_43);
                ;
                LocalPopChoice(w_33);
              }
            else
              {
                t = u_33;
              }
          }
        }
      if(((y_42 != NULL) && (y_42 != t)))
        _fail(t);
      else
        y_42 = t;
      t = term_w_26;
      if(((a_43 != NULL) && (a_43 != t)))
        _fail(t);
      else
        a_43 = t;
      t = SSL_table_destroy(a_43);
      t = y_42;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
  t = parse_options_1_0(f_80, t);
  y_43 = t;
  t = term_y_33;
  b_44 = t;
  t = SSL_table_create(b_44);
  t = term_y_33;
  z_43 = t;
  t = term_z_33;
  a_44 = t;
  t = SSL_table_put(z_43, a_44, y_43);
  t = y_43;
  t = h_80(t);
  {
    ATerm a_34 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_80, t);
        ;
        LocalPopChoice(e_34);
      }
    else
      {
        t = a_34;
        {
          ATerm f_34 = t;
          int g_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_80(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_34);
            }
          else
            {
              t = f_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = xtc_io_1_0(ppgen_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(ppgen_options_0_0, default_usage_0_0, _id, y_8, t);
  return(t);
}
