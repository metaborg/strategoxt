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
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_l_32;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_v_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_c_30;
ATerm term_r_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_u_28;
ATerm term_e_28;
ATerm term_c_28;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_g_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_w_25;
ATerm term_u_25;
ATerm term_r_25;
ATerm term_l_25;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_q_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_a_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_q_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_f_22;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_h_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_w_20;
ATerm term_r_20;
ATerm term_q_19;
ATerm term_a_19;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_u_17;
ATerm term_h_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
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
ATerm term_m_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
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
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
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
ATerm term_c_9;
void init_constant_terms (void)
{
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
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
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_9, term_i_9, term_y_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_d_10, term_e_10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_10, term_k_10, term_n_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_10, term_r_10, term_t_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_10, term_y_10, term_a_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_e_11, term_f_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_11, term_k_11, term_m_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_11, term_p_11, term_q_11);
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
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_x_11, term_y_11);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_e_12, term_g_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_k_12, term_l_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_o_12, term_s_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_h_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_a_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_g_14, term_h_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_l_14, term_m_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_14, term_t_14, term_u_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_z_14, term_a_15);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_f_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_j_15, term_k_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_p_15, term_q_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_z_15, term_a_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_g_16, term_h_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_r_21, term_n_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym__2, term_r_21, term_s_21);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_s_18, term_u_17);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_c_9, term_a_26);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_26);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_g_26, term_n_18);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_ParseTree_0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym__2, term_a_24, term_t_26);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_a_24, term_w_26);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_z_26, term_n_18);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__2, term_q_26, term_r_26);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym__2, term_l_30, term_n_18);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_n_18);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym__2, term_y_28, term_n_18);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
ATerm d_6 (ATerm q_43, ATerm r_43, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm e_6 (ATerm z_27, ATerm a_28, ATerm);
ATerm f_6 (ATerm n_72 (ATerm), ATerm e_184, ATerm h_28, ATerm);
ATerm p_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm);
ATerm g_6 (ATerm v_24, ATerm w_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm s_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm c_71 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm w_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm i_7 (ATerm w_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm i_6 (ATerm z_86 (ATerm), ATerm y_44, ATerm w_44, ATerm);
ATerm q_8 (ATerm c_8, ATerm);
ATerm r_8 (ATerm g_8, ATerm h_8, ATerm k_8, ATerm);
ATerm f_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm f_88 (ATerm), ATerm);
ATerm h_1 (ATerm);
ATerm pass_v_verbose_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm g_88 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm i_88 (ATerm), ATerm);
ATerm k_6 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm c_35, ATerm b_35, ATerm);
ATerm l_6 (ATerm k_80 (ATerm), ATerm y_34, ATerm x_34, ATerm);
ATerm m_1 (ATerm);
ATerm m_6 (ATerm m_46, ATerm n_46, ATerm o_46, ATerm);
ATerm n_6 (ATerm k_88 (ATerm), ATerm w_46, ATerm v_46, ATerm);
ATerm q_6 (ATerm t_48, ATerm u_48, ATerm);
ATerm j_14 (ATerm z_13, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm o_6 (ATerm f_28, ATerm);
ATerm p_6 (ATerm b_49, ATerm c_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_17 (ATerm n_15, ATerm);
ATerm q_17 (ATerm r_15, ATerm u_15, ATerm v_15, ATerm);
ATerm r_17 (ATerm m_16, ATerm n_16, ATerm o_16, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm u_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm v_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm e_2 (ATerm);
ATerm g_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm v_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm w_22 (ATerm n_21, ATerm);
ATerm x_2 (ATerm);
ATerm a_3 (ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm k_3 (ATerm);
ATerm xtc_sglr_1_0 (ATerm h_91 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm xtc_parse_sdf_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm u_3 (ATerm);
ATerm pre_process_sdf_0_0 (ATerm);
ATerm get_input_type_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm ppgen_0_0 (ATerm);
ATerm r_6 (ATerm b_25, ATerm c_25, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm s_6 (ATerm u_45, ATerm v_45, ATerm);
ATerm end_scope_1_0 (ATerm w_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm a_90 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm xtc_io_1_0 (ATerm b_90 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm t_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm h_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm q_5 (ATerm);
ATerm t_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm x_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm h_6 (ATerm);
ATerm j_6 (ATerm);
ATerm v_6 (ATerm);
ATerm c_7 (ATerm);
ATerm ppgen_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm t_6 (ATerm k_43, ATerm l_43, ATerm);
ATerm foldr_2_0 (ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_88 (ATerm), ATerm);
ATerm g_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_7 (ATerm);
ATerm need_help_1_0 (ATerm i_92 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm q_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_6 (ATerm g_42, ATerm h_42, ATerm);
ATerm debug_1_0 (ATerm l_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm d_8 (ATerm);
ATerm f_8 (ATerm);
ATerm i_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm a_7 (ATerm p_47, ATerm q_47, ATerm);
ATerm x_6 (ATerm g_47, ATerm h_47, ATerm);
ATerm y_6 (ATerm p_45, ATerm q_45, ATerm o_45, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm g_94 (ATerm), ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm parse_options_1_0 (ATerm f_94 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm);
ATerm z_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm d_6 (ATerm q_43, ATerm r_43, ATerm t)
{
  ATerm y_4 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(q_43, r_43);
      ;
      LocalPopChoice(b_9);
    }
  else
    {
      t = y_4;
      t = SSL_subtr(q_43, r_43);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,n_0 = NULL,o_0 = NULL;
  t = term_c_9;
  {
    ATerm e_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(h_9);
      }
    else
      {
        t = e_9;
        t = term_i_9;
      }
    f_0 = t;
    t = term_i_9;
    o_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_0, term_i_9);
    t = d_6(f_0, o_0, t);
    n_0 = t;
    t = SSL_int_to_string(n_0);
    b_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, b_0), term_c_9);
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
ATerm e_6 (ATerm z_27, ATerm a_28, ATerm t)
{
  ATerm w_0 = NULL;
  t = SSL_write_term_to_stream_baf(z_27, a_28);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_0);
  return(t);
}
ATerm f_6 (ATerm n_72 (ATerm), ATerm e_184, ATerm h_28, ATerm t)
{
  ATerm a_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_184, term_l_9);
  t = open_stream_0_0(t);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, h_28);
  t = n_72(t);
  t = fclose_0_0(t);
  t = h_28;
  return(t);
}
ATerm p_0 (ATerm t)
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
  t = f_6(p_0, c_1, b_1, t);
  t = SSL_close_file(c_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(x_90, y_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm g_6 (ATerm v_24, ATerm w_24, ATerm t)
{
  t = SSL_execvp(v_24, w_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,y_2 = NULL;
  h_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      i_2 = ATgetArgument(t, 0);
      {
        ATerm x_0 = NULL,y_0 = NULL;
        t = SSL_int_to_string(i_2);
        x_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_9), x_0), term_n_9);
        y_0 = t;
        t = SSL_concat_strings(y_0);
      }
    }
  else
    {
      ATerm s_1 = NULL,w_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          i_2 = ATgetArgument(t, 0);
          j_2 = ATgetArgument(t, 1);
          y_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(j_2);
      s_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_2), term_q_9), s_1), term_p_9), i_2);
      w_1 = t;
      t = SSL_concat_strings(w_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm s_76 (ATerm), ATerm t)
{
  ATerm b_3 = NULL;
  ATerm q_0 (ATerm t)
  {
    t = s_76(t);
    if(((b_3 != NULL) && (b_3 != t)))
      _fail(t);
    else
      b_3 = t;
    return(t);
  }
  t = fetch_1_0(q_0, t);
  t = not_null(b_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm d_3 = NULL;
  if(((d_3 != NULL) && (d_3 != t)))
    _fail(t);
  else
    d_3 = t;
  {
    ATerm r_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm v_9 = ATgetArgument(t, 0);
              if(((d_3 != NULL) && (d_3 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                d_3 = ATgetArgument(t, 1);
              {
                ATerm w_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_16), term_d_16), term_s_15), term_l_15), term_g_15), term_b_15), term_x_14), term_n_14), term_i_14), term_b_14), term_w_13), term_s_13), term_o_13), term_i_13), term_z_12), term_u_12), term_m_12), term_i_12), term_c_12), term_v_11), term_r_11), term_n_11), term_g_11), term_b_11), term_u_10), term_o_10), term_g_10), term_b_10);
        t = fetch_elem_1_0(r_0, t);
        ;
        LocalPopChoice(u_9);
      }
    else
      {
        t = r_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(d_3));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm j_3 = NULL,v_3 = NULL;
  j_3 = t;
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm p_16 = ATgetArgument(t, 0);
            v_3 = ATgetArgument(t, 1);
            {
              ATerm q_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_16);
        {
          ATerm r_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 = NULL,n_2 = NULL,o_2 = NULL;
              t = v_3;
              {
                ATerm u_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_16;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                l_2 = t;
                t = term_x_16;
                n_2 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, l_2), term_y_16);
                o_2 = t;
                t = SSL_printnl(n_2, o_2);
                t = (ATerm) ATmakeAppl(sym__2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, l_2), term_y_16));
              }
              ;
              LocalPopChoice(t_16);
            }
          else
            {
              t = r_16;
              t = j_3;
            }
        }
      }
    else
      {
        t = k_16;
        t = j_3;
      }
    t = j_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm c_71 (ATerm), ATerm t)
{
  ATerm e_4 = NULL,h_4 = NULL;
  h_4 = t;
  t = fork_0_0(t);
  e_4 = t;
  {
    ATerm a_17 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = h_4;
        t = c_71(t);
        ;
        LocalPopChoice(b_17);
      }
    else
      {
        t = a_17;
        t = SSL_waitpid(e_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm c_17 = ATgetArgument(t, 0);
            if(((ATgetType(c_17) != AT_INT) || (ATgetInt((ATermInt) c_17) != 0)))
              _fail(t);
            {
              ATerm f_17 = ATgetArgument(t, 1);
            }
            {
              ATerm g_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = h_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL;
  if(((l_4 != NULL) && (l_4 != t)))
    _fail(t);
  else
    l_4 = t;
  t = o_90(t);
  t = xtc_find_0_0(t);
  if(((k_4 != NULL) && (k_4 != t)))
    _fail(t);
  else
    k_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_4), not_null(l_4));
  {
    ATerm s_0 (ATerm t)
    {
      ATerm m_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_4), not_null(l_4));
      t = g_6(not_null(k_4), not_null(l_4), t);
      t = term_h_17;
      m_4 = t;
      t = SSL_exit(m_4);
      return(t);
    }
    t = fork_and_wait_1_0(s_0, t);
    t = not_null(l_4);
  }
  return(t);
}
ATerm at_end_1_0 (ATerm w_76 (ATerm), ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL;
    p_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_5 = ATgetFirst((ATermList) t);
        o_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_2 = NULL,w_2 = NULL,l_1 = NULL;
          t = SSLgetAnnotations(p_5);
          t_2 = t;
          t = o_5;
          t = r_5(t);
          w_2 = t;
          t = (ATerm) ATinsert(CheckATermList(w_2), n_5);
          l_1 = t;
          t = SSLsetAnnotations(l_1, t_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_5;
        t = w_76(t);
      }
    return(t);
  }
  t = r_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_4 = NULL,u_4 = NULL,v_4 = NULL;
  s_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_4;
    }
  else
    {
      ATerm u_0 (ATerm t)
      {
        t = not_null(v_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((u_4 != NULL) && (u_4 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            u_4 = ATgetFirst((ATermList) t);
          if(((v_4 != NULL) && (v_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(u_4);
      t = at_end_1_0(u_0, t);
    }
  return(t);
}
ATerm i_7 (ATerm w_5, ATerm t)
{
  ATerm u_6 = NULL;
  t = SSL_explode_term(w_5);
  if(match_cons(t, sym__2))
    {
      ATerm j_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_17) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm z_6 = NULL,b_7 = NULL,e_7 = NULL;
  if(((e_7 != NULL) && (e_7 != t)))
    _fail(t);
  else
    e_7 = t;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      b_7 = ATgetArgument(t, 1);
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = not_null(b_7);
              return(t);
            }
            t = not_null(z_6);
            t = at_end_1_0(z_0, t);
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            t = i_7(not_null(e_7), t);
          }
      }
    }
  else
    {
      t = i_7(not_null(e_7), t);
    }
  return(t);
}
ATerm i_6 (ATerm z_86 (ATerm), ATerm y_44, ATerm w_44, ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,s_7 = NULL;
  o_7 = t;
  t = z_86(t);
  j_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_7, y_44, w_44);
  t = y_6(j_7, y_44, w_44, t);
  {
    ATerm p_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_7 = NULL;
        t = term_u_17;
        t_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_7, term_u_17);
        t = x_6(j_7, t_7, t);
        ;
        LocalPopChoice(t_17);
      }
    else
      {
        t = p_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_7 = ATgetFirst((ATermList) t);
        n_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_u_17;
    p_7 = t;
    t = (ATerm) ATinsert(CheckATermList(n_7), (ATerm) ATinsert(CheckATermList(k_7), y_44));
    s_7 = t;
    t = SSL_table_put(j_7, p_7, s_7);
    t = o_7;
  }
  return(t);
}
ATerm q_8 (ATerm c_8, ATerm t)
{
  t = c_8;
  {
    ATerm v_17 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_17 = ATgetArgument(t, 0);
            ATerm z_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_17;
      }
    t = term_a_18;
    t = debug_1_0(f_1, t);
    t = (ATerm) ATmakeAppl(sym__2, c_8, term_l_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm r_8 (ATerm g_8, ATerm h_8, ATerm k_8, ATerm t)
{
  t = SSL_open_file(g_8, h_8);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_c_18;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
  n_8 = t;
  if(match_cons(t, sym__2))
    {
      o_8 = ATgetArgument(t, 0);
      p_8 = ATgetArgument(t, 1);
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_8(n_8, t);
            ;
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            t = r_8(o_8, p_8, n_8, t);
          }
      }
    }
  else
    {
      t = q_8(n_8, t);
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
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
  t = term_n_18;
  t = new_0_0(t);
  w_8 = t;
  t = term_o_18;
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_8, term_o_18);
  t = w_6(w_8, x_8, t);
  y_8 = t;
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_k_9);
        a_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_8, (ATerm) ATinsert(ATempty, term_k_9));
        t = q_6(y_8, a_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        t = y_8;
      }
  }
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_s_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  t = new_file_0_0(t);
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_9, term_l_9);
  t = open_file_0_0(t);
  t = term_n_18;
  g_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_9, term_n_18);
  t = i_6(g_1, f_9, g_9, t);
  t = f_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  s_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_3 = NULL,i_3 = NULL;
      t = s_9;
      t = xtc_new_file_0_0(t);
      h_3 = t;
      t = m_0(t);
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATinsert(ATinsert(ATempty, h_3), term_u_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(h_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_3);
    }
  else
    {
      ATerm t_3 = NULL,x_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_9;
      t = xtc_new_file_0_0(t);
      t_3 = t;
      t = m_0(t);
      x_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_3), term_u_18), t_9), term_a_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(t_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_3);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm a_10 = NULL;
  a_10 = t;
  {
    ATerm b_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_10 = NULL;
        t = term_c_9;
        t = get_config_0_0(t);
        f_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_10, term_k_10);
        t = geq_0_0(t);
        t = a_10;
        t = f_88(t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = b_19;
        t = a_10;
      }
  }
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_19);
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
  ATerm h_10 = NULL;
  ATerm i_1 (ATerm t)
  {
    ATerm i_10 = NULL,l_10 = NULL;
    i_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_10), i_10);
    t = x_6(not_null(h_10), i_10, t);
    l_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_10, l_10);
    return(t);
  }
  if(((h_10 != NULL) && (h_10 != t)))
    _fail(t);
  else
    h_10 = t;
  t = SSL_table_keys(not_null(h_10));
  t = map_1_0(i_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm p_10 = NULL;
  p_10 = t;
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_10 = NULL;
        t = term_c_9;
        t = get_config_0_0(t);
        s_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_10, term_j_15);
        t = geq_0_0(t);
        t = p_10;
        t = h_88(t);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = p_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm v_10 = NULL;
  v_10 = t;
  {
    ATerm t_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_10 = NULL;
        t = term_c_9;
        t = get_config_0_0(t);
        z_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_10, term_k_12);
        t = geq_0_0(t);
        t = v_10;
        t = g_88(t);
        ;
        LocalPopChoice(u_19);
      }
    else
      {
        t = t_19;
        t = v_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm c_11 = NULL;
  c_11 = t;
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_11 = NULL;
        t = term_c_9;
        t = get_config_0_0(t);
        i_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_11, term_r_10);
        t = geq_0_0(t);
        t = c_11;
        t = i_88(t);
        ;
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        t = c_11;
      }
  }
  return(t);
}
ATerm k_6 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm c_35, ATerm b_35, ATerm t)
{
  t = o_80(t);
  {
    ATerm j_1 (ATerm t)
    {
      ATerm l_11 = NULL;
      l_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_35), l_11);
      t = n_80(t);
      return(t);
    }
    t = fetch_1_0(j_1, t);
    t = not_null(b_35);
  }
  return(t);
}
ATerm l_6 (ATerm k_80 (ATerm), ATerm y_34, ATerm x_34, ATerm t)
{
  ATerm h_12 (ATerm t)
  {
    ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
    z_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(x_34);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_12 = ATgetFirst((ATermList) t);
            b_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_19 = t;
          int y_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_11;
              {
                ATerm k_1 (ATerm t)
                {
                  t = not_null(x_34);
                  return(t);
                }
                t = k_6(k_80, k_1, not_null(a_12), not_null(b_12), t);
                t = h_12(t);
              }
              ;
              LocalPopChoice(y_19);
            }
          else
            {
              t = x_19;
              {
                ATerm n_4 = NULL,q_4 = NULL,n_1 = NULL;
                t = SSLgetAnnotations(z_11);
                n_4 = t;
                t = b_12;
                t = h_12(t);
                q_4 = t;
                t = (ATerm) ATinsert(CheckATermList(q_4), a_12);
                n_1 = t;
                t = SSLsetAnnotations(n_1, n_4);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(y_34);
  t = h_12(t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      e_13 = ATgetArgument(t, 0);
      if((e_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm m_46, ATerm n_46, ATerm o_46, ATerm t)
{
  ATerm p_12 = NULL,t_12 = NULL,y_12 = NULL;
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_46, n_46);
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_20 = ATgetArgument(t, 0);
            ATerm c_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_46, n_46);
        t = x_6(m_46, n_46, t);
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        t = (ATerm) ATempty;
      }
    y_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_12, o_46);
    t = l_6(m_1, y_12, o_46, t);
    t_12 = t;
    t = SSL_table_put(m_46, n_46, t_12);
    t = p_12;
  }
  return(t);
}
ATerm n_6 (ATerm k_88 (ATerm), ATerm w_46, ATerm v_46, ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm f_13 = NULL,g_13 = NULL;
    if(match_cons(t, sym__2))
      {
        f_13 = ATgetArgument(t, 0);
        g_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(w_46), f_13, g_13);
    t = k_88(t);
    return(t);
  }
  t = not_null(v_46);
  t = map_1_0(o_1, t);
  return(t);
}
ATerm q_6 (ATerm t_48, ATerm u_48, ATerm t)
{
  t = SSL_access(t_48, u_48);
  return(t);
}
ATerm j_14 (ATerm z_13, ATerm t)
{
  t = SSL_fclose(z_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_14 = NULL,f_14 = NULL;
  f_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_14 = ATgetArgument(t, 0);
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_14);
            ;
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            t = j_14(f_14, t);
          }
      }
    }
  else
    {
      t = j_14(f_14, t);
    }
  return(t);
}
ATerm o_6 (ATerm f_28, ATerm t)
{
  t = SSL_read_term_from_stream(f_28);
  return(t);
}
ATerm p_6 (ATerm b_49, ATerm c_49, ATerm t)
{
  ATerm p_14 = NULL;
  t = SSL_fopen(b_49, c_49);
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_14);
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
  ATerm v_14 = NULL;
  t = SSL_stderr_stream();
  v_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_14);
  return(t);
}
ATerm o_17 (ATerm n_15, ATerm t)
{
  ATerm o_15 = NULL;
  t = SSL_explode_term(n_15);
  if(match_cons(t, sym__2))
    {
      ATerm i_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_20 = ATgetArgument(t, 1);
        if(((ATgetType(j_20) == AT_LIST) && !(ATisEmpty(j_20))))
          {
            o_15 = ATgetFirst((ATermList) j_20);
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
  t = o_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm q_17 (ATerm r_15, ATerm u_15, ATerm v_15, ATerm t)
{
  ATerm w_15 = NULL,y_15 = NULL,f_16 = NULL,i_16 = NULL,q_1 = NULL;
  t = SSLgetAnnotations(v_15);
  f_16 = t;
  t = r_15;
  if(match_cons(t, sym_Path_1))
    {
      i_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_16, u_15);
  q_1 = t;
  t = SSLsetAnnotations(q_1, f_16);
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(w_15, y_15, t);
  return(t);
}
ATerm r_17 (ATerm m_16, ATerm n_16, ATerm o_16, ATerm t)
{
  ATerm s_16 = NULL,v_16 = NULL,w_16 = NULL,z_16 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(o_16);
  w_16 = t;
  t = SSL_is_string(m_16);
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_16, n_16);
  t_1 = t;
  t = SSLsetAnnotations(t_1, w_16);
  if(match_cons(t, sym__2))
    {
      s_16 = ATgetArgument(t, 0);
      v_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(s_16, v_16, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,n_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_20 = ATgetArgument(t, 0);
      ATerm m_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  d_17 = t;
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      n_17 = ATgetArgument(t, 1);
      {
        ATerm n_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_17(d_17, t);
            ;
            LocalPopChoice(o_20);
          }
        else
          {
            t = n_20;
            {
              ATerm p_20 = t;
              int q_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_17(e_17, n_17, d_17, t);
                  ;
                  LocalPopChoice(q_20);
                }
              else
                {
                  t = p_20;
                  t = r_17(e_17, n_17, d_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_17(d_17, t);
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_r_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_17 = NULL,w_17 = NULL,y_17 = NULL;
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_18 = NULL;
      b_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_18, term_w_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      t = debug_1_0(p_1, t);
      _fail(t);
    }
  w_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(y_17, t);
  s_17 = t;
  t = w_17;
  t = fclose_0_0(t);
  t = s_17;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_y_20;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm a_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_18 = NULL,e_18 = NULL;
      d_18 = t;
      t = (ATerm) ATinsert(ATempty, term_h_21);
      e_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_18, (ATerm) ATinsert(ATempty, term_h_21));
      t = q_6(d_18, e_18, t);
      LocalPopChoice(e_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = a_21;
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_21 = t;
            if((PushChoice() == 0))
              {
                ATerm f_18 = NULL,i_18 = NULL;
                f_18 = t;
                t = (ATerm) ATinsert(ATempty, term_k_9);
                i_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_18, (ATerm) ATinsert(ATempty, term_k_9));
                t = q_6(f_18, i_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_21;
              }
            t = debug_1_0(r_1, t);
            ;
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            t = debug_1_0(u_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = debug_1_0(a_2, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
  e_19 = t;
  t = term_x_16;
  f_19 = t;
  t = (ATerm) ATinsert(ATempty, term_o_21);
  g_19 = t;
  t = SSL_printnl(f_19, g_19);
  t = e_19;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym__3))
    {
      h_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
      j_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_6(h_19, i_19, j_19, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  k_19 = t;
  t = term_x_16;
  l_19 = t;
  t = (ATerm) ATinsert(ATempty, term_p_21);
  m_19 = t;
  t = SSL_printnl(l_19, m_19);
  t = k_19;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
  n_19 = t;
  t = term_x_16;
  o_19 = t;
  t = (ATerm) ATinsert(ATempty, term_o_21);
  p_19 = t;
  t = SSL_printnl(o_19, p_19);
  t = n_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,p_18 = NULL,t_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
  j_18 = t;
  t = if_verbose5_1_0(v_1, t);
  {
    ATerm q_21 = t;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL,c_19 = NULL;
        t = term_r_21;
        z_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, j_18);
        c_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_21, (ATerm) ATmakeAppl(sym_Imported_1, j_18));
        t = x_6(z_18, c_19, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_21;
      }
    l_18 = t;
    t = term_r_21;
    w_18 = t;
    t = term_s_21;
    x_18 = t;
    t = (ATerm) ATinsert(ATempty, j_18);
    y_18 = t;
    t = SSL_table_put(w_18, x_18, y_18);
    t = l_18;
    t = if_verbose4_1_0(y_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(b_2, t);
    k_18 = t;
    t = term_r_21;
    v_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_21, k_18);
    t = n_6(c_2, v_18, k_18, t);
    t = if_verbose6_1_0(e_2, t);
    t = term_r_21;
    m_18 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, j_18);
    p_18 = t;
    t = (ATerm) ATempty;
    t_18 = t;
    t = SSL_table_put(m_18, p_18, t_18);
    t = (ATerm) ATmakeAppl(sym__3, term_r_21, (ATerm)ATmakeAppl(sym_Imported_1, j_18), (ATerm) ATempty);
    t = if_verbose4_1_0(g_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
  d_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_20;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_20 = ATgetFirst((ATermList) t);
          f_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_5 = NULL,b_6 = NULL,c_6 = NULL,z_1 = NULL;
            t = SSLgetAnnotations(d_20);
            y_5 = t;
            t = e_20;
            t = b_84(t);
            b_6 = t;
            t = f_20;
            t = filter_1_0(b_84, t);
            c_6 = t;
            t = (ATerm) ATinsert(CheckATermList(c_6), b_6);
            z_1 = t;
            t = SSLsetAnnotations(z_1, y_5);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            t = f_20;
            t = filter_1_0(b_84, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm s_20 (ATerm t)
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_85(t);
        t = s_20(t);
        ;
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
      }
    return(t);
  }
  t = s_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_20 = NULL;
            t = term_l_22;
            v_20 = t;
            t = SSL_getenv(v_20);
            ;
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_m_22;
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL;
  t = term_r_21;
  f_21 = t;
  t = term_n_22;
  g_21 = t;
  t = term_o_22;
  t = x_6(f_21, g_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm p_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_22;
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
  t = term_q_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm x_20 = NULL;
  t = if_verbose5_1_0(k_2, t);
  x_20 = t;
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_21 = NULL,c_21 = NULL;
        t = term_r_21;
        b_21 = t;
        t = term_s_21;
        c_21 = t;
        t = term_u_22;
        t = x_6(b_21, c_21, t);
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        {
          ATerm d_21 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          d_21 = t;
          t = repeat_1_0(p_2, t);
          t = d_21;
        }
      }
    t = x_20;
    t = if_verbose5_1_0(q_2, t);
  }
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = debug_1_0(u_2, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm w_22 (ATerm n_21, ATerm t)
{
  ATerm t_21 = NULL,w_21 = NULL,x_21 = NULL;
  t = term_r_21;
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, n_21);
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_21, (ATerm) ATmakeAppl(sym_Tool_1, n_21));
  t = x_6(w_21, x_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_22 = ATgetFirst((ATermList) t);
      if(match_cons(x_22, sym__2))
        {
          ATerm z_22 = ATgetArgument(x_22, 0);
          t_21 = ATgetArgument(x_22, 1);
        }
      else
        _fail(t);
      {
        ATerm y_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_21;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = debug_1_0(a_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_r_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(e_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
      t = if_verbose5_1_0(s_2, t);
      t = xtc_load_0_0(t);
      if(((c_22 != NULL) && (c_22 != t)))
        _fail(t);
      else
        c_22 = t;
      if(match_cons(t, sym__2))
        {
          a_22 = ATgetArgument(t, 0);
          b_22 = ATgetArgument(t, 1);
          {
            ATerm d_23 = t;
            int e_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL;
                t = term_r_21;
                if(((j_22 != NULL) && (j_22 != t)))
                  _fail(t);
                else
                  j_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_22));
                if(((k_22 != NULL) && (k_22 != t)))
                  _fail(t);
                else
                  k_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_21, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_22)));
                t = x_6(not_null(j_22), not_null(k_22), t);
                {
                  ATerm v_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((b_22 != NULL) && (b_22 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          b_22 = ATgetArgument(t, 0);
                        if(((i_22 != NULL) && (i_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          i_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(v_2, t);
                  t = not_null(i_22);
                }
                ;
                LocalPopChoice(e_23);
              }
            else
              {
                t = d_23;
                t = w_22(not_null(c_22), t);
              }
          }
        }
      else
        {
          t = w_22(not_null(c_22), t);
        }
      t = if_verbose5_1_0(x_2, t);
      ;
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      {
        ATerm t_22 = NULL,m_7 = NULL,q_7 = NULL;
        t_22 = t;
        t = term_x_16;
        m_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_23), t_22), term_f_23);
        q_7 = t;
        t = SSL_printnl(m_7, q_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_23), t_22), term_f_23);
        t = if_verbose5_1_0(c_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm h_91 (ATerm), ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_23 = NULL,o_23 = NULL;
      o_23 = t;
      if(match_cons(t, sym_FILE_1))
        {
          n_23 = ATgetArgument(t, 0);
          {
            ATerm w_7 = NULL,d_2 = NULL;
            t = SSLgetAnnotations(o_23);
            w_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, n_23);
            d_2 = t;
            t = SSLsetAnnotations(d_2, w_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_23;
        }
      LocalPopChoice(j_23);
      {
        ATerm g_3 (ATerm t)
        {
          ATerm p_23 = NULL,r_23 = NULL;
          t = term_n_18;
          t = h_91(t);
          t = xtc_find_0_0(t);
          p_23 = t;
          t = term_n_18;
          t = pass_v_verbose_0_0(t);
          r_23 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(r_23), p_23), term_l_23), term_k_23);
          return(t);
        }
        t = xtc_transform_file_2_0(f_3, g_3, t);
      }
    }
  else
    {
      t = i_23;
      {
        ATerm m_3 (ATerm t)
        {
          ATerm t_23 = NULL,u_23 = NULL;
          t = term_n_18;
          t = h_91(t);
          t = xtc_find_0_0(t);
          t_23 = t;
          t = term_n_18;
          t = pass_v_verbose_0_0(t);
          u_23 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_23), t_23), term_l_23), term_k_23);
          return(t);
        }
        t = xtc_transform_term_2_0(k_3, m_3, t);
      }
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm xtc_parse_sdf_0_0 (ATerm t)
{
  t = xtc_sglr_1_0(n_3, t);
  {
    ATerm s_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_24 = NULL,h_24 = NULL;
        h_24 = t;
        if(match_cons(t, sym_FILE_1))
          {
            g_24 = ATgetArgument(t, 0);
            {
              ATerm e_8 = NULL,f_2 = NULL;
              t = SSLgetAnnotations(h_24);
              e_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_24);
              f_2 = t;
              t = SSLsetAnnotations(f_2, e_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_24;
          }
        LocalPopChoice(v_23);
        t = xtc_transform_file_2_0(p_3, pass_verbose_0_0, t);
      }
    else
      {
        t = s_23;
        t = xtc_transform_term_2_0(q_3, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm pre_process_sdf_0_0 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
  y_24 = t;
  if(match_cons(t, sym__2))
    {
      z_24 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_24;
  if(match_cons(t, sym_AST_0))
    {
      t = a_25;
    }
  else
    {
      if(match_cons(t, sym_ParseTree_0))
        {
          t = a_25;
          {
            ATerm w_23 = t;
            int x_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_9 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    z_9 = ATgetArgument(t, 0);
                    {
                      ATerm m_10 = NULL,z_2 = NULL;
                      t = SSLgetAnnotations(a_25);
                      m_10 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, z_9);
                      z_2 = t;
                      t = SSLsetAnnotations(z_2, m_10);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = a_25;
                  }
                LocalPopChoice(x_23);
                t = xtc_transform_file_2_0(r_3, pass_verbose_0_0, t);
              }
            else
              {
                t = w_23;
                t = xtc_transform_term_2_0(u_3, pass_verbose_0_0, t);
              }
          }
        }
      else
        {
          if(!(match_cons(t, sym_PlainText_0)))
            _fail(t);
          t = a_25;
          t = xtc_parse_sdf_0_0(t);
        }
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      t = term_b_24;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_d_24;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_d_24;
  return(t);
}
ATerm ppgen_0_0 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL;
  n_25 = t;
  t = get_input_type_0_0(t);
  m_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_25, n_25);
  t = pre_process_sdf_0_0(t);
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_25 = NULL,x_25 = NULL;
        x_25 = t;
        if(match_cons(t, sym_FILE_1))
          {
            v_25 = ATgetArgument(t, 0);
            {
              ATerm w_10 = NULL,l_3 = NULL;
              t = SSLgetAnnotations(x_25);
              w_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_25);
              l_3 = t;
              t = SSLsetAnnotations(l_3, w_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_25;
          }
        LocalPopChoice(f_24);
        t = xtc_transform_file_2_0(w_3, pass_verbose_0_0, t);
      }
    else
      {
        t = e_24;
        t = xtc_transform_term_2_0(y_3, pass_verbose_0_0, t);
      }
    {
      ATerm i_24 = t;
      int j_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_26 = NULL,h_26 = NULL;
          h_26 = t;
          if(match_cons(t, sym_FILE_1))
            {
              f_26 = ATgetArgument(t, 0);
              {
                ATerm j_11 = NULL,o_3 = NULL;
                t = SSLgetAnnotations(h_26);
                j_11 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, f_26);
                o_3 = t;
                t = SSLsetAnnotations(o_3, j_11);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = h_26;
            }
          LocalPopChoice(j_24);
          t = xtc_transform_file_2_0(z_3, pass_verbose_0_0, t);
        }
      else
        {
          t = i_24;
          t = xtc_transform_term_2_0(a_4, pass_verbose_0_0, t);
        }
    }
  }
  return(t);
}
ATerm r_6 (ATerm b_25, ATerm c_25, ATerm t)
{
  t = SSL_copy(b_25, c_25);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  j_27 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_12 = NULL;
        t = j_27;
        t = k_0(t);
        f_12 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = f_12;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = f_12;
          }
        t = (ATerm) ATmakeAppl(sym__2, k_27, f_12);
        t = r_6(k_27, f_12, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_27);
        ;
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        {
          ATerm m_24 = t;
          int n_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_12 = NULL;
              t = j_27;
              t = k_0(t);
              q_12 = t;
              {
                ATerm o_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm r_12 = NULL;
                    r_12 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = r_12;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = r_12;
                          }
                        else
                          {
                            t = r_12;
                            if((k_27 != t))
                              {
                                _fail(t);
                              }
                            t = r_12;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_24;
                  }
                t = (ATerm) ATmakeAppl(sym__2, k_27, q_12);
                t = r_6(k_27, q_12, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, k_27);
              }
              ;
              LocalPopChoice(n_24);
            }
          else
            {
              t = m_24;
              t = j_27;
              t = k_0(t);
              if((k_27 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_27);
            }
        }
      }
  }
  return(t);
}
ATerm s_6 (ATerm u_45, ATerm v_45, ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL;
  q_27 = t;
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_45, v_45);
        t = x_6(u_45, v_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_24 = ATgetFirst((ATermList) t);
            p_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_24);
        t = SSL_table_put(u_45, v_45, p_27);
        t = (ATerm) ATmakeAppl(sym__3, u_45, v_45, p_27);
      }
    else
      {
        t = p_24;
        t = SSL_table_remove(u_45, v_45);
        t = (ATerm) ATmakeAppl(sym__2, u_45, v_45);
      }
    t = q_27;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_86 (ATerm), ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
  if(((u_27 != NULL) && (u_27 != t)))
    _fail(t);
  else
    u_27 = t;
  t = w_86(t);
  if(((t_27 != NULL) && (t_27 != t)))
    _fail(t);
  else
    t_27 = t;
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_27 = NULL;
        t = term_u_17;
        w_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), term_u_17);
        t = x_6(not_null(t_27), w_27, t);
        ;
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_27 != NULL) && (s_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_27 = ATgetFirst((ATermList) t);
        if(((r_27 != NULL) && (r_27 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          r_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_u_17;
    if(((v_27 != NULL) && (v_27 != t)))
      _fail(t);
    else
      v_27 = t;
    t = SSL_table_put(not_null(t_27), not_null(v_27), not_null(r_27));
    t = not_null(s_27);
    {
      ATerm b_4 (ATerm t)
      {
        ATerm x_27 = NULL;
        x_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), x_27);
        t = s_6(not_null(t_27), x_27, t);
        return(t);
      }
      t = map_1_0(b_4, t);
      t = not_null(u_27);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm t)
{
  ATerm u_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_87(t);
      t = s_87(t);
      ;
      LocalPopChoice(x_24);
    }
  else
    {
      t = u_24;
      t = s_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm d_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL;
  j_28 = t;
  t = v_86(t);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_28, term_u_17);
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_28 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_25 = ATgetArgument(t, 0);
            ATerm g_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_u_17;
        x_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_28, term_u_17);
        t = x_6(d_28, x_28, t);
        ;
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
        t = (ATerm) ATempty;
      }
    k_28 = t;
    t = term_u_17;
    l_28 = t;
    t = (ATerm) ATinsert(CheckATermList(k_28), (ATerm) ATempty);
    m_28 = t;
    t = SSL_table_put(d_28, l_28, m_28);
    t = j_28;
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_s_18;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm n_29 = NULL;
  n_29 = t;
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(n_29);
        ;
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        t = n_29;
      }
  }
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_s_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm a_90 (ATerm), ATerm t)
{
  ATerm c_29 = NULL;
  ATerm d_4 (ATerm t)
  {
    ATerm d_29 = NULL;
    d_29 = t;
    {
      ATerm j_25 = t;
      int k_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_29 = NULL,h_29 = NULL;
          t = term_s_18;
          e_29 = t;
          t = term_u_17;
          h_29 = t;
          t = term_l_25;
          t = x_6(e_29, h_29, t);
          ;
          LocalPopChoice(k_25);
        }
      else
        {
          t = j_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((c_29 != NULL) && (c_29 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            c_29 = ATgetFirst((ATermList) t);
          {
            ATerm o_25 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(c_29);
      t = map_1_0(f_4, t);
      t = d_29;
      t = end_scope_1_0(g_4, t);
    }
    return(t);
  }
  t = begin_scope_1_0(c_4, t);
  t = restore_always_2_0(a_90, d_4, t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      t = term_r_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm b_90 (ATerm), ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_29 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        y_29 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_29);
        ;
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        t = term_j_9;
      }
    t = b_90(t);
    t = copy_to_1_0(j_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(i_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,d_30 = NULL,e_30 = NULL;
  z_29 = t;
  t = term_n_18;
  t = whoami_0_0(t);
  a_30 = t;
  t = term_x_16;
  d_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_25), a_30), term_u_25);
  e_30 = t;
  t = SSL_printnl(d_30, e_30);
  t = term_i_9;
  b_30 = t;
  t = SSL_exit(b_30);
  t = z_29;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm g_30 = NULL;
  g_30 = t;
  if(match_string(t, "-k"))
    {
      t = g_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_30;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
  h_30 = t;
  t = SSL_string_to_int(h_30);
  i_30 = t;
  t = term_y_25;
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_25, i_30);
  t = a_7(j_30, i_30, t);
  t = h_30;
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, r_4, t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm n_30 = NULL;
  n_30 = t;
  if(match_string(t, "-S"))
    {
      t = n_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_30;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL;
  t = term_c_9;
  o_30 = t;
  t = term_a_26;
  p_30 = t;
  t = term_b_26;
  t = a_7(o_30, p_30, t);
  t = term_c_26;
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_d_26;
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
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
  q_30 = t;
  t = SSL_string_to_int(q_30);
  r_30 = t;
  t = term_c_9;
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_9, r_30);
  t = a_7(s_30, r_30, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_30);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL;
  t = term_g_26;
  t_30 = t;
  t = term_n_18;
  u_30 = t;
  t = term_i_26;
  t = a_7(t_30, u_30, t);
  t = term_j_26;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_4, w_4, x_4, t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_4, a_5, b_5, t);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            t = Option_3_0(c_5, e_5, f_5, t);
          }
      }
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm w_30 = NULL;
  w_30 = t;
  if(match_string(t, "-o"))
    {
      t = w_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_30;
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  x_30 = t;
  t = term_u_18;
  y_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_18, x_30);
  t = a_7(y_30, x_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_30);
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_5, j_5, k_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
      t = term_n_18;
      t = j_0(t);
      g_31 = t;
      t = term_q_26;
      h_31 = t;
      t = term_r_26;
      i_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_26, term_r_26, g_31);
      t = y_6(h_31, i_31, g_31, t);
      _fail(t);
    }
  else
    {
      ATerm m_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_31 = ATgetFirst((ATermList) t);
          d_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_31 = ATgetFirst((ATermList) t);
          f_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_31;
      t = h_0(t);
      t = e_31;
      t = i_0(t);
      m_31 = t;
      t = (ATerm) ATinsert(CheckATermList(f_31), m_31);
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm o_31 = NULL;
  o_31 = t;
  if(match_string(t, "-i"))
    {
      t = o_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_31;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL;
  p_31 = t;
  t = term_a_19;
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, p_31);
  t = a_7(q_31, p_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_31);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_s_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, q_5, t_5, t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-A", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  t = term_a_24;
  s_31 = t;
  t = term_t_26;
  t_31 = t;
  t = term_u_26;
  t = a_7(s_31, t_31, t);
  t = r_31;
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_v_26;
  return(t);
}
ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-a", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  u_31 = t;
  t = term_a_24;
  v_31 = t;
  t = term_w_26;
  w_31 = t;
  t = term_x_26;
  t = a_7(v_31, w_31, t);
  t = u_31;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_y_26;
  return(t);
}
ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL;
  t = term_z_26;
  x_31 = t;
  t = term_n_18;
  y_31 = t;
  t = term_a_27;
  t = a_7(x_31, y_31, t);
  t = term_b_27;
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_c_27;
  return(t);
}
ATerm ppgen_options_0_0 (ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, v_5, x_5, t);
      ;
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      {
        ATerm f_27 = t;
        int g_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(z_5, a_6, h_6, t);
            ;
            LocalPopChoice(g_27);
          }
        else
          {
            t = f_27;
            {
              ATerm h_27 = t;
              int i_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_option_0_0(t);
                  ;
                  LocalPopChoice(i_27);
                }
              else
                {
                  t = h_27;
                  {
                    ATerm l_27 = t;
                    int m_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = output_option_0_0(t);
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
                              t = Option_3_0(j_6, v_6, c_7, t);
                              ;
                              LocalPopChoice(o_27);
                            }
                          else
                            {
                              t = n_27;
                              {
                                ATerm y_27 = t;
                                int b_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = verbose_option_0_0(t);
                                    ;
                                    LocalPopChoice(b_28);
                                  }
                                else
                                  {
                                    t = y_27;
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
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_18;
  t = whoami_0_0(t);
  z_31 = t;
  t = term_x_16;
  b_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_28), z_31);
  c_32 = t;
  t = SSL_printnl(b_32, c_32);
  t = term_i_9;
  a_32 = t;
  t = SSL_exit(a_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_28;
  t = get_config_0_0(t);
  return(t);
}
ATerm t_6 (ATerm k_43, ATerm l_43, ATerm t)
{
  ATerm g_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_43, l_43);
      ;
      LocalPopChoice(i_28);
    }
  else
    {
      t = g_28;
      t = SSL_addr(k_43, l_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
  e_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_32;
      t = y_82(t);
    }
  else
    {
      ATerm j_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_32 = ATgetFirst((ATermList) t);
          g_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_32;
      t = foldr_2_0(y_82, z_82, t);
      j_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_32, j_32);
      t = z_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  if(match_cons(t, sym__2))
    {
      j_13 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(j_13, k_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_32 = NULL,a_13 = NULL,b_13 = NULL;
  t = times_0_0(t);
  b_13 = t;
  t = SSL_explode_term(b_13);
  if(match_cons(t, sym__2))
    {
      ATerm n_28 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_13;
  t = foldr_2_0(d_7, f_7, t);
  m_32 = t;
  t = SSL_TicksToSeconds(m_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  if(match_cons(t, sym__2))
    {
      y_32 = ATgetArgument(t, 0);
      z_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_32;
        if((y_32 != t))
          {
            _fail(t);
          }
        t = x_32;
        ;
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        t = (ATerm) ATmakeAppl(sym__2, y_32, z_32);
        {
          ATerm q_28 = t;
          int r_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_32, z_32);
              ;
              LocalPopChoice(r_28);
            }
          else
            {
              t = q_28;
              t = SSL_gtr(y_32, z_32);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_32, z_32);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm d_33 = NULL;
  d_33 = t;
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_33 = NULL;
        t = term_c_9;
        t = get_config_0_0(t);
        f_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_33, term_i_9);
        t = geq_0_0(t);
        t = d_33;
        t = d_88(t);
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = d_33;
      }
  }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,k_33 = NULL,l_33 = NULL;
  t = run_time_0_0(t);
  h_33 = t;
  t = term_n_18;
  t = whoami_0_0(t);
  i_33 = t;
  t = term_x_16;
  k_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_28), h_33), term_p_9), i_33);
  l_33 = t;
  t = SSL_printnl(k_33, l_33);
  t = (ATerm) ATmakeAppl(sym__2, term_x_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_28), h_33), term_p_9), i_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_26;
  m_33 = t;
  t = SSL_exit(m_33);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL;
  v_33 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_33;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          u_33 = ATgetArgument(t, 0);
          {
            ATerm e_14 = NULL,s_3 = NULL;
            t = SSLgetAnnotations(v_33);
            e_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, u_33);
            s_3 = t;
            t = SSLsetAnnotations(s_3, e_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_33;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
      t = fetch_1_0(h_7, t);
    }
  t = i_92(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_33 = ATgetFirst((ATermList) t);
      z_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_34 = NULL,e_34 = NULL;
        ATerm l_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_34)), not_null(e_34));
          return(t);
        }
        t = not_null(z_33);
        t = g_0(t);
        if(((d_34 != NULL) && (d_34 != t)))
          _fail(t);
        else
          d_34 = t;
        t = not_null(y_33);
        t = e_0(t);
        if(((e_34 != NULL) && (e_34 != t)))
          _fail(t);
        else
          e_34 = t;
        t = not_null(z_33);
        t = reverse_acc_2_0(e_0, l_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_18;
      t = g_0(t);
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL,d_5 = NULL;
  k_34 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_34);
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_34);
  d_5 = t;
  t = SSLsetAnnotations(d_5, i_34);
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm m_34 = NULL;
  m_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_34), term_z_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL;
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
      t = fetch_1_0(r_7, t);
    }
  t = term_f_29;
  t = echo_0_0(t);
  t = term_q_26;
  g_34 = t;
  t = term_r_26;
  h_34 = t;
  t = term_g_29;
  t = x_6(g_34, h_34, t);
  t = reverse_acc_2_0(_id, u_7, t);
  t = map_1_0(v_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm p_35 (ATerm t)
  {
    ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
    m_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_35 = ATgetFirst((ATermList) t);
        o_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_29 = t;
      int j_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_14 = NULL,w_14 = NULL,g_5 = NULL;
          t = SSLgetAnnotations(m_35);
          s_14 = t;
          t = n_35;
          t = q_76(t);
          w_14 = t;
          t = (ATerm) ATinsert(CheckATermList(o_35), w_14);
          g_5 = t;
          t = SSLsetAnnotations(g_5, s_14);
          ;
          LocalPopChoice(j_29);
        }
      else
        {
          t = i_29;
          {
            ATerm e_15 = NULL,h_15 = NULL,i_5 = NULL;
            t = SSLgetAnnotations(m_35);
            e_15 = t;
            t = o_35;
            t = p_35(t);
            h_15 = t;
            t = (ATerm) ATinsert(CheckATermList(h_15), n_35);
            i_5 = t;
            t = SSLsetAnnotations(i_5, e_15);
          }
        }
    }
    return(t);
  }
  t = p_35(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
  t_35 = t;
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_29 = ATgetFirst((ATermList) t);
                ATerm o_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_35;
          }
        ;
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        t = (ATerm) ATinsert(ATempty, t_35);
      }
    u_35 = t;
    t = term_r_25;
    v_35 = t;
    t = SSL_printnl(v_35, u_35);
    t = t_35;
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
ATerm w_6 (ATerm g_42, ATerm h_42, ATerm t)
{
  t = SSL_strcat(g_42, h_42);
  return(t);
}
ATerm debug_1_0 (ATerm l_72 (ATerm), ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
  z_35 = t;
  t = l_72(t);
  a_36 = t;
  t = term_x_16;
  b_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_35), a_36);
  c_36 = t;
  t = SSL_printnl(b_36, c_36);
  t = z_35;
  return(t);
}
ATerm map_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm t_36 (ATerm t)
  {
    ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL;
    q_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_36;
      }
    else
      {
        ATerm x_15 = NULL,b_16 = NULL,c_16 = NULL,l_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_36 = ATgetFirst((ATermList) t);
            s_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_36);
        x_15 = t;
        t = r_36;
        t = g_76(t);
        b_16 = t;
        t = s_36;
        t = t_36(t);
        c_16 = t;
        t = (ATerm) ATinsert(CheckATermList(c_16), b_16);
        l_5 = t;
        t = SSLsetAnnotations(l_5, x_15);
      }
    return(t);
  }
  t = t_36(t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_29);
    }
  else
    {
      t = p_29;
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
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_37 = NULL;
      b_37 = t;
      t = SSL_is_string(b_37);
      ;
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      {
        ATerm u_29 = t;
        int v_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_7, t);
            ;
            LocalPopChoice(v_29);
          }
        else
          {
            t = u_29;
            {
              ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
              h_37 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_37 = ATgetArgument(t, 0);
                  t = i_37;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_37 = ATgetArgument(t, 0);
                      t = i_37;
                      {
                        ATerm w_29 = t;
                        int x_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(x_29);
                          }
                        else
                          {
                            t = w_29;
                            t = debug_1_0(y_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_37 = NULL,o_37 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_37 = ATgetArgument(t, 0);
                          j_37 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_37;
                      t = eval_config_0_0(t);
                      n_37 = t;
                      t = j_37;
                      t = eval_config_0_0(t);
                      o_37 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_37, o_37);
                      t = w_6(n_37, o_37, t);
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
  ATerm s_37 = NULL,t_37 = NULL;
  s_37 = t;
  t = term_c_30;
  t_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_30, s_37);
  t = x_6(t_37, s_37, t);
  {
    ATerm f_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_37 = NULL,v_37 = NULL;
        t = eval_config_0_0(t);
        u_37 = t;
        t = term_c_30;
        v_37 = t;
        t = SSL_table_put(v_37, s_37, u_37);
        t = u_37;
        ;
        LocalPopChoice(k_30);
      }
    else
      {
        t = f_30;
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
  ATerm y_37 = NULL,z_37 = NULL;
  t = term_l_30;
  y_37 = t;
  t = term_n_18;
  z_37 = t;
  t = term_m_30;
  t = a_7(y_37, z_37, t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_v_30;
  return(t);
}
ATerm d_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL;
  t = term_l_30;
  c_38 = t;
  t = term_n_18;
  d_38 = t;
  t = term_m_30;
  t = a_7(c_38, d_38, t);
  t = term_q_19;
  a_38 = t;
  t = term_n_18;
  b_38 = t;
  t = term_z_30;
  t = a_7(a_38, b_38, t);
  t = term_a_31;
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_b_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_7, a_8, b_8, t);
      ;
      LocalPopChoice(k_31);
    }
  else
    {
      t = j_31;
      t = Option_3_0(d_8, f_8, i_8, t);
    }
  return(t);
}
ATerm a_7 (ATerm p_47, ATerm q_47, ATerm t)
{
  ATerm e_38 = NULL;
  t = term_c_30;
  e_38 = t;
  t = SSL_table_put(e_38, p_47, q_47);
  t = (ATerm) ATmakeAppl(sym__3, term_c_30, p_47, q_47);
  return(t);
}
ATerm x_6 (ATerm g_47, ATerm h_47, ATerm t)
{
  t = SSL_table_get(g_47, h_47);
  return(t);
}
ATerm y_6 (ATerm p_45, ATerm q_45, ATerm o_45, ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
  {
    ATerm l_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_32 = ATgetArgument(t, 0);
            ATerm h_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
        t = x_6(p_45, q_45, t);
        ;
        LocalPopChoice(n_31);
      }
    else
      {
        t = l_31;
        t = (ATerm) ATempty;
      }
    h_38 = t;
    t = (ATerm) ATinsert(CheckATermList(h_38), o_45);
    i_38 = t;
    t = SSL_table_put(p_45, q_45, i_38);
    t = g_38;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
      t = term_n_18;
      t = d_0(t);
      q_38 = t;
      t = term_q_26;
      r_38 = t;
      t = term_r_26;
      s_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_26, term_r_26, q_38);
      t = y_6(r_38, s_38, q_38, t);
      _fail(t);
    }
  else
    {
      ATerm v_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_38 = ATgetFirst((ATermList) t);
          p_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_38;
      t = a_0(t);
      t = term_n_18;
      t = c_0(t);
      v_38 = t;
      t = (ATerm) ATinsert(CheckATermList(p_38), v_38);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,s_5 = NULL;
  b_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_38 = ATgetFirst((ATermList) t);
      y_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_39);
  w_38 = t;
  t = x_38;
  t = y_63(t);
  z_38 = t;
  t = y_38;
  t = z_63(t);
  a_39 = t;
  t = (ATerm) ATinsert(CheckATermList(a_39), z_38);
  s_5 = t;
  t = SSLsetAnnotations(s_5, w_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_94 (ATerm), ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,l_39 = NULL,m_39 = NULL,v_8 = NULL;
  if(((g_39 != NULL) && (g_39 != t)))
    _fail(t);
  else
    g_39 = t;
  {
    ATerm i_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_32;
        t = g_94(t);
        ;
        LocalPopChoice(k_32);
      }
    else
      {
        t = i_32;
      }
    t = not_null(g_39);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_39 != NULL) && (i_39 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_39 = ATgetFirst((ATermList) t);
        if(((j_39 != NULL) && (j_39 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          j_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(g_39));
    if(((h_39 != NULL) && (h_39 != t)))
      _fail(t);
    else
      h_39 = t;
    t = term_e_28;
    if(((m_39 != NULL) && (m_39 != t)))
      _fail(t);
    else
      m_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_28, not_null(i_39));
    t = a_7(not_null(m_39), not_null(i_39), t);
    t = not_null(j_39);
    {
      ATerm w_39 (ATerm t)
      {
        ATerm n_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_32 = t;
            int q_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_39 = NULL;
                p_39 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_39;
                ;
                LocalPopChoice(q_32);
              }
            else
              {
                t = p_32;
                t = g_94(t);
                t = Cons_2_0(_id, w_39, t);
              }
            ;
            LocalPopChoice(o_32);
          }
        else
          {
            t = n_32;
            {
              ATerm s_39 = NULL,t_39 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_39 = ATgetFirst((ATermList) t);
                  t_39 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_39), (ATerm) ATmakeAppl(sym_Undefined_1, s_39));
            }
          }
        return(t);
      }
      t = w_39(t);
      if(((l_39 != NULL) && (l_39 != t)))
        _fail(t);
      else
        l_39 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(l_39)), (ATerm) ATmakeAppl(sym_Program_1, not_null(i_39)));
      if(((v_8 != NULL) && (v_8 != t)))
        _fail(t);
      else
        v_8 = t;
      t = SSLsetAnnotations(not_null(v_8), not_null(h_39));
    }
  }
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm i_40 = NULL;
  i_40 = t;
  if(match_string(t, "--help"))
    {
      t = i_40;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_40;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_40;
        }
    }
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL;
  t = term_y_28;
  j_40 = t;
  t = term_n_18;
  k_40 = t;
  t = term_r_32;
  t = a_7(j_40, k_40, t);
  t = term_s_32;
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_t_32;
  return(t);
}
ATerm t_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_94 (ATerm), ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  if(((d_40 != NULL) && (d_40 != t)))
    _fail(t);
  else
    d_40 = t;
  t = term_q_26;
  if(((f_40 != NULL) && (f_40 != t)))
    _fail(t);
  else
    f_40 = t;
  t = term_r_26;
  if(((g_40 != NULL) && (g_40 != t)))
    _fail(t);
  else
    g_40 = t;
  t = (ATerm) ATempty;
  if(((h_40 != NULL) && (h_40 != t)))
    _fail(t);
  else
    h_40 = t;
  t = SSL_table_put(not_null(f_40), not_null(g_40), not_null(h_40));
  t = not_null(d_40);
  {
    ATerm j_8 (ATerm t)
    {
      ATerm u_32 = t;
      int v_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_94(t);
          ;
          LocalPopChoice(v_32);
        }
      else
        {
          t = u_32;
          {
            ATerm w_32 = t;
            int a_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_8, m_8, s_8, t);
                ;
                LocalPopChoice(a_33);
              }
            else
              {
                t = w_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_8, t);
    {
      ATerm b_33 = t;
      int c_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_40 = NULL;
          r_40 = t;
          {
            ATerm e_33 = t;
            int g_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_17 = NULL;
                t = r_40;
                {
                  ATerm j_33 = t;
                  int n_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_y_28;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(n_33);
                    }
                  else
                    {
                      t = j_33;
                      t = fetch_1_0(t_8, t);
                    }
                  t = r_40;
                  t = default_system_usage_0_0(t);
                  t = term_a_26;
                  i_17 = t;
                  t = SSL_exit(i_17);
                }
                ;
                LocalPopChoice(g_33);
              }
            else
              {
                t = e_33;
                {
                  ATerm m_17 = NULL;
                  t = term_l_30;
                  t = get_config_0_0(t);
                  t = r_40;
                  t = default_system_about_0_0(t);
                  t = term_a_26;
                  m_17 = t;
                  t = SSL_exit(m_17);
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
            ATerm o_33 = t;
            int p_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
                ATerm u_8 (ATerm t)
                {
                  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,d_9 = NULL;
                  x_40 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      w_40 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_40);
                  v_40 = t;
                  t = w_40;
                  if(((b_40 != NULL) && (b_40 != t)))
                    _fail(t);
                  else
                    b_40 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, w_40);
                  d_9 = t;
                  t = SSLsetAnnotations(d_9, v_40);
                  return(t);
                }
                t = fetch_1_0(u_8, t);
                t = term_x_16;
                if(((t_40 != NULL) && (t_40 != t)))
                  _fail(t);
                else
                  t_40 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_40)), term_q_33);
                if(((u_40 != NULL) && (u_40 != t)))
                  _fail(t);
                else
                  u_40 = t;
                t = SSL_printnl(not_null(t_40), not_null(u_40));
                t = (ATerm) ATmakeAppl(sym__2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_40)), term_q_33));
                t = default_system_usage_0_0(t);
                t = term_i_9;
                if(((s_40 != NULL) && (s_40 != t)))
                  _fail(t);
                else
                  s_40 = t;
                t = SSL_exit(not_null(s_40));
                ;
                LocalPopChoice(p_33);
              }
            else
              {
                t = o_33;
              }
          }
        }
      if(((c_40 != NULL) && (c_40 != t)))
        _fail(t);
      else
        c_40 = t;
      t = term_q_26;
      if(((e_40 != NULL) && (e_40 != t)))
        _fail(t);
      else
        e_40 = t;
      t = SSL_table_destroy(not_null(e_40));
      t = not_null(c_40);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
  t = parse_options_1_0(k_92, t);
  c_41 = t;
  t = term_r_33;
  f_41 = t;
  t = SSL_table_create(f_41);
  t = term_r_33;
  d_41 = t;
  t = term_s_33;
  e_41 = t;
  t = SSL_table_put(d_41, e_41, c_41);
  t = c_41;
  t = m_92(t);
  {
    ATerm t_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_92, t);
        ;
        LocalPopChoice(w_33);
      }
    else
      {
        t = t_33;
        {
          ATerm x_33 = t;
          int a_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_34);
            }
          else
            {
              t = x_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = xtc_io_1_0(ppgen_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(ppgen_options_0_0, default_usage_0_0, _id, z_8, t);
  return(t);
}
