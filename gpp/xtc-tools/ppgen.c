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
ATerm term_s_34;
ATerm term_r_34;
ATerm term_p_34;
ATerm term_z_32;
ATerm term_w_32;
ATerm term_u_32;
ATerm term_o_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_r_31;
ATerm term_i_31;
ATerm term_b_31;
ATerm term_s_30;
ATerm term_o_30;
ATerm term_f_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_e_29;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_h_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_w_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_w_25;
ATerm term_x_24;
ATerm term_s_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_n_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_o_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_u_22;
ATerm term_h_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_s_21;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_c_21;
ATerm term_i_19;
ATerm term_e_19;
ATerm term_a_19;
ATerm term_x_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_q_18;
ATerm term_m_18;
ATerm term_c_18;
ATerm term_r_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
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
ATerm term_p_13;
ATerm term_o_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_i_9;
void init_constant_terms (void)
{
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_l_9, term_d_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_h_10, term_l_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_10, term_q_10, term_r_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_b_11, term_c_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_g_11, term_i_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_n_11, term_o_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_t_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_11, term_w_11, term_x_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_a_12, term_b_12);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_h_12, term_k_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_b_13);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_f_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_i_13, term_o_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_u_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_y_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_c_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_g_14, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_m_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_a_15, term_c_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_p_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_w_15, term_x_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_c_16, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_i_16, term_k_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_r_16, term_t_16);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_c_23);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_h_22);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-type", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym__2, term_x_18, term_c_18);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_k_26);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__2, term_r_26, term_t_18);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_ParseTree_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__2, term_n_24, term_h_27);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_n_24, term_l_27);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym__2, term_x_24, term_l_27);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-t          Output is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym__2, term_q_27, term_t_18);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym__2, term_d_27, term_e_27);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym__2, term_s_30, term_t_18);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, term_i_19, term_t_18);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_l_29, term_t_18);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
ATerm f_6 (ATerm f_31, ATerm g_31, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm g_6 (ATerm m_15, ATerm n_15, ATerm);
ATerm h_6 (ATerm c_60 (ATerm), ATerm h_162, ATerm u_15, ATerm);
ATerm f_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm);
ATerm i_6 (ATerm i_12, ATerm j_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm h_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm r_58 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm j_78 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm l_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm i_7 (ATerm x_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm k_6 (ATerm u_74 (ATerm), ATerm n_32, ATerm l_32, ATerm);
ATerm r_8 (ATerm d_8, ATerm);
ATerm s_8 (ATerm h_8, ATerm i_8, ATerm j_8, ATerm);
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
ATerm m_6 (ATerm c_68 (ATerm), ATerm d_68 (ATerm), ATerm p_22, ATerm o_22, ATerm);
ATerm n_6 (ATerm z_67 (ATerm), ATerm l_22, ATerm k_22, ATerm);
ATerm n_1 (ATerm);
ATerm o_6 (ATerm b_34, ATerm c_34, ATerm d_34, ATerm);
ATerm p_6 (ATerm f_76 (ATerm), ATerm l_34, ATerm k_34, ATerm);
ATerm s_6 (ATerm i_36, ATerm j_36, ATerm);
ATerm t_14 (ATerm l_14, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_6 (ATerm s_15, ATerm);
ATerm r_6 (ATerm q_36, ATerm r_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_17 (ATerm o_15, ATerm);
ATerm d_18 (ATerm z_15, ATerm b_16, ATerm d_16, ATerm);
ATerm f_18 (ATerm w_16, ATerm x_16, ATerm y_16, ATerm);
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
ATerm p_23 (ATerm t_21, ATerm);
ATerm z_2 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm l_3 (ATerm);
ATerm xtc_sglr_1_0 (ATerm c_79 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm xtc_parse_sdf_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm pre_process_sdf_0_0 (ATerm);
ATerm get_input_type_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm ppgen_0_0 (ATerm);
ATerm t_6 (ATerm o_12, ATerm p_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm u_6 (ATerm j_33, ATerm k_33, ATerm);
ATerm end_scope_1_0 (ATerm r_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_74 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm v_77 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm xtc_io_1_0 (ATerm w_77 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm s_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm e_6 (ATerm);
ATerm j_6 (ATerm);
ATerm l_6 (ATerm);
ATerm w_6 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm ppgen_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm v_6 (ATerm z_30, ATerm a_31, ATerm);
ATerm foldr_2_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_7 (ATerm);
ATerm j_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_75 (ATerm), ATerm);
ATerm s_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm t_7 (ATerm);
ATerm need_help_1_0 (ATerm d_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm f_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm y_6 (ATerm v_29, ATerm w_29, ATerm);
ATerm debug_1_0 (ATerm a_60 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_63 (ATerm), ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm c_8 (ATerm);
ATerm e_8 (ATerm);
ATerm g_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm c_7 (ATerm e_35, ATerm f_35, ATerm);
ATerm z_6 (ATerm v_34, ATerm w_34, ATerm);
ATerm a_7 (ATerm e_33, ATerm f_33, ATerm d_33, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm n_51 (ATerm), ATerm o_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm b_82 (ATerm), ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm x_8 (ATerm);
ATerm a_9 (ATerm);
ATerm parse_options_1_0 (ATerm a_82 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm);
ATerm f_9 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm f_6 (ATerm f_31, ATerm g_31, ATerm t)
{
  ATerm z_4 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(f_31, g_31);
      ;
      LocalPopChoice(d_9);
    }
  else
    {
      t = z_4;
      t = SSL_subtr(f_31, g_31);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL;
  t = term_i_9;
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        t = term_l_9;
      }
    b_0 = t;
    t = term_l_9;
    e_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_l_9);
    t = f_6(b_0, e_0, t);
    c_0 = t;
    t = SSL_int_to_string(c_0);
    a_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_i_9);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm t_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_m_9;
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
      t = (ATerm) ATinsert(ATempty, term_n_9);
      v_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_0, (ATerm) ATinsert(ATempty, term_n_9));
      t = s_6(t_0, v_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm g_6 (ATerm m_15, ATerm n_15, ATerm t)
{
  ATerm w_0 = NULL;
  t = SSL_write_term_to_stream_baf(m_15, n_15);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_0);
  return(t);
}
ATerm h_6 (ATerm c_60 (ATerm), ATerm h_162, ATerm u_15, ATerm t)
{
  ATerm a_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_162, term_o_9);
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
      ATerm p_9 = ATgetArgument(t, 0);
      if(match_cons(p_9, sym_Stream_1))
        {
          d_1 = ATgetArgument(p_9, 0);
        }
      else
        _fail(t);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(d_1, e_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  b_1 = t;
  t = xtc_new_file_0_0(t);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_1, b_1);
  t = h_6(f_0, c_1, b_1, t);
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
ATerm i_6 (ATerm i_12, ATerm j_12, ATerm t)
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_9), x_0), term_q_9);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_2), term_v_9), w_1), term_s_9), h_2);
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
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm z_9 = ATgetArgument(t, 0);
              if((b_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm a_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_16), term_o_16), term_f_16), term_y_15), term_q_15), term_i_15), term_e_15), term_w_14), term_n_14), term_i_14), term_d_14), term_z_13), term_v_13), term_p_13), term_g_13), term_c_13), term_u_12), term_m_12), term_c_12), term_y_11), term_u_11), term_p_11), term_j_11), term_d_11), term_y_10), term_s_10), term_n_10), term_f_10);
        t = fetch_elem_1_0(q_0, t);
        ;
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm h_3 = NULL,v_3 = NULL;
  h_3 = t;
  {
    ATerm v_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm c_17 = ATgetArgument(t, 0);
            v_3 = ATgetArgument(t, 1);
            {
              ATerm d_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_16);
        {
          ATerm e_17 = t;
          int f_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL,o_2 = NULL,p_2 = NULL;
              t = v_3;
              {
                ATerm g_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_17;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                m_2 = t;
                t = term_h_17;
                o_2 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, m_2), term_i_17);
                p_2 = t;
                t = SSL_printnl(o_2, p_2);
                t = (ATerm) ATmakeAppl(sym__2, term_h_17, (ATerm) ATinsert(ATinsert(ATempty, m_2), term_i_17));
              }
              ;
              LocalPopChoice(f_17);
            }
          else
            {
              t = e_17;
              t = h_3;
            }
        }
      }
    else
      {
        t = v_16;
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
ATerm fork_and_wait_1_0 (ATerm r_58 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,f_4 = NULL;
  f_4 = t;
  t = fork_0_0(t);
  d_4 = t;
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = f_4;
        t = r_58(t);
        ;
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        t = SSL_waitpid(d_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_17 = ATgetArgument(t, 0);
            if(((ATgetType(l_17) != AT_INT) || (ATgetInt((ATermInt) l_17) != 0)))
              _fail(t);
            {
              ATerm n_17 = ATgetArgument(t, 1);
            }
            {
              ATerm o_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm j_78 (ATerm), ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL;
  m_4 = t;
  t = j_78(t);
  t = xtc_find_0_0(t);
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_4, m_4);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm n_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, l_4, m_4);
      t = i_6(l_4, m_4, t);
      t = term_r_17;
      n_4 = t;
      t = SSL_exit(n_4);
      return(t);
    }
    t = fork_and_wait_1_0(s_0, t);
    t = m_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm l_64 (ATerm), ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
    q_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_5 = ATgetFirst((ATermList) t);
        p_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_2 = NULL,x_2 = NULL,k_1 = NULL;
          t = SSLgetAnnotations(q_5);
          u_2 = t;
          t = p_5;
          t = r_5(t);
          x_2 = t;
          t = (ATerm) ATinsert(CheckATermList(x_2), o_5);
          k_1 = t;
          t = SSLsetAnnotations(k_1, u_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_5;
        t = l_64(t);
      }
    return(t);
  }
  t = r_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_4 = NULL,u_4 = NULL,w_4 = NULL;
  p_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_4;
    }
  else
    {
      ATerm u_0 (ATerm t)
      {
        t = not_null(w_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_4 = ATgetFirst((ATermList) t);
          if(((w_4 != NULL) && (w_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_4;
      t = at_end_1_0(u_0, t);
    }
  return(t);
}
ATerm i_7 (ATerm x_5, ATerm t)
{
  ATerm y_5 = NULL;
  t = SSL_explode_term(x_5);
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_6 = NULL,b_7 = NULL,d_7 = NULL;
  d_7 = t;
  if(match_cons(t, sym__2))
    {
      x_6 = ATgetArgument(t, 0);
      b_7 = ATgetArgument(t, 1);
      {
        ATerm t_17 = t;
        int x_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = b_7;
              return(t);
            }
            t = x_6;
            t = at_end_1_0(z_0, t);
            ;
            LocalPopChoice(x_17);
          }
        else
          {
            t = t_17;
            t = i_7(d_7, t);
          }
      }
    }
  else
    {
      t = i_7(d_7, t);
    }
  return(t);
}
ATerm k_6 (ATerm u_74 (ATerm), ATerm n_32, ATerm l_32, ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
  p_7 = t;
  t = u_74(t);
  k_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_7, n_32, l_32);
  t = a_7(k_7, n_32, l_32, t);
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_7 = NULL;
        t = term_c_18;
        u_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_7, term_c_18);
        t = z_6(k_7, u_7, t);
        ;
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_7 = ATgetFirst((ATermList) t);
        m_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_18;
    q_7 = t;
    t = (ATerm) ATinsert(CheckATermList(m_7), (ATerm) ATinsert(CheckATermList(l_7), n_32));
    r_7 = t;
    t = SSL_table_put(k_7, q_7, r_7);
    t = p_7;
  }
  return(t);
}
ATerm r_8 (ATerm d_8, ATerm t)
{
  t = d_8;
  {
    ATerm e_18 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_18 = ATgetArgument(t, 0);
            ATerm l_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_18;
      }
    t = term_m_18;
    t = debug_1_0(f_1, t);
    t = (ATerm) ATmakeAppl(sym__2, d_8, term_o_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm s_8 (ATerm h_8, ATerm i_8, ATerm j_8, ATerm t)
{
  t = SSL_open_file(h_8, i_8);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_q_18;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
  o_8 = t;
  if(match_cons(t, sym__2))
    {
      p_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_8(o_8, t);
            ;
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            t = s_8(p_8, q_8, o_8, t);
          }
      }
    }
  else
    {
      t = r_8(o_8, t);
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
  ATerm w_8 = NULL,y_8 = NULL,z_8 = NULL;
  t = term_t_18;
  t = new_0_0(t);
  w_8 = t;
  t = term_u_18;
  y_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_8, term_u_18);
  t = y_6(w_8, y_8, t);
  z_8 = t;
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_n_9);
        b_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_8, (ATerm) ATinsert(ATempty, term_n_9));
        t = s_6(z_8, b_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = z_8;
      }
  }
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_x_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL;
  t = new_file_0_0(t);
  g_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_9, term_o_9);
  t = open_file_0_0(t);
  t = term_t_18;
  h_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_9, term_t_18);
  t = k_6(g_1, g_9, h_9, t);
  t = g_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  t_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_3 = NULL,j_3 = NULL;
      t = t_9;
      t = xtc_new_file_0_0(t);
      i_3 = t;
      t = r_0(t);
      j_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_3, (ATerm) ATinsert(ATinsert(ATempty, i_3), term_a_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(i_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_3);
    }
  else
    {
      ATerm u_3 = NULL,y_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_9;
      t = xtc_new_file_0_0(t);
      u_3 = t;
      t = r_0(t);
      y_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_3), term_a_19), u_9), term_e_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(u_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_3);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm a_76 (ATerm), ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_10 = NULL;
        t = term_i_9;
        t = get_config_0_0(t);
        e_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_10, term_q_10);
        t = geq_0_0(t);
        t = b_10;
        t = a_76(t);
        ;
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = b_10;
      }
  }
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_i_19);
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
  ATerm i_10 = NULL;
  ATerm i_1 (ATerm t)
  {
    ATerm j_10 = NULL,k_10 = NULL;
    j_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_10), j_10);
    t = z_6(not_null(i_10), j_10, t);
    k_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_10, k_10);
    return(t);
  }
  if(((i_10 != NULL) && (i_10 != t)))
    _fail(t);
  else
    i_10 = t;
  t = SSL_table_keys(i_10);
  t = map_1_0(i_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm p_10 = NULL;
  p_10 = t;
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_10 = NULL;
        t = term_i_9;
        t = get_config_0_0(t);
        t_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_10, term_w_15);
        t = geq_0_0(t);
        t = p_10;
        t = c_76(t);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = p_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_76 (ATerm), ATerm t)
{
  ATerm a_11 = NULL;
  a_11 = t;
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_11 = NULL;
        t = term_i_9;
        t = get_config_0_0(t);
        e_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_11, term_r_12);
        t = geq_0_0(t);
        t = a_11;
        t = b_76(t);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = a_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm h_11 = NULL;
  h_11 = t;
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_11 = NULL;
        t = term_i_9;
        t = get_config_0_0(t);
        l_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_11, term_w_10);
        t = geq_0_0(t);
        t = h_11;
        t = d_76(t);
        ;
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        t = h_11;
      }
  }
  return(t);
}
ATerm m_6 (ATerm c_68 (ATerm), ATerm d_68 (ATerm), ATerm p_22, ATerm o_22, ATerm t)
{
  t = d_68(t);
  {
    ATerm j_1 (ATerm t)
    {
      ATerm q_11 = NULL;
      q_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_22, q_11);
      t = c_68(t);
      return(t);
    }
    t = fetch_1_0(j_1, t);
    t = o_22;
  }
  return(t);
}
ATerm n_6 (ATerm z_67 (ATerm), ATerm l_22, ATerm k_22, ATerm t)
{
  ATerm n_12 (ATerm t)
  {
    ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
    e_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_12 = ATgetFirst((ATermList) t);
            g_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_20 = t;
          int c_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_12;
              {
                ATerm l_1 (ATerm t)
                {
                  t = k_22;
                  return(t);
                }
                t = m_6(z_67, l_1, f_12, g_12, t);
                t = n_12(t);
              }
              ;
              LocalPopChoice(c_20);
            }
          else
            {
              t = b_20;
              {
                ATerm k_4 = NULL,r_4 = NULL,m_1 = NULL;
                t = SSLgetAnnotations(e_12);
                k_4 = t;
                t = g_12;
                t = n_12(t);
                r_4 = t;
                t = (ATerm) ATinsert(CheckATermList(r_4), f_12);
                m_1 = t;
                t = SSLsetAnnotations(m_1, k_4);
              }
            }
        }
      }
    return(t);
  }
  t = l_22;
  t = n_12(t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm j_13 = NULL;
  if(match_cons(t, sym__2))
    {
      j_13 = ATgetArgument(t, 0);
      if((j_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm o_6 (ATerm b_34, ATerm c_34, ATerm d_34, ATerm t)
{
  ATerm t_12 = NULL,y_12 = NULL,a_13 = NULL;
  t_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_34, c_34);
  {
    ATerm d_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_20 = ATgetArgument(t, 0);
            ATerm n_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_34, c_34);
        t = z_6(b_34, c_34, t);
        ;
        LocalPopChoice(f_20);
      }
    else
      {
        t = d_20;
        t = (ATerm) ATempty;
      }
    a_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_13, d_34);
    t = n_6(n_1, a_13, d_34, t);
    y_12 = t;
    t = SSL_table_put(b_34, c_34, y_12);
    t = t_12;
  }
  return(t);
}
ATerm p_6 (ATerm f_76 (ATerm), ATerm l_34, ATerm k_34, ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm k_13 = NULL,l_13 = NULL;
    if(match_cons(t, sym__2))
      {
        k_13 = ATgetArgument(t, 0);
        l_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, l_34, k_13, l_13);
    t = f_76(t);
    return(t);
  }
  t = k_34;
  t = map_1_0(o_1, t);
  return(t);
}
ATerm s_6 (ATerm i_36, ATerm j_36, ATerm t)
{
  t = SSL_access(i_36, j_36);
  return(t);
}
ATerm t_14 (ATerm l_14, ATerm t)
{
  t = SSL_fclose(l_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL;
  p_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_14 = ATgetArgument(t, 0);
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_14);
            ;
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            t = t_14(p_14, t);
          }
      }
    }
  else
    {
      t = t_14(p_14, t);
    }
  return(t);
}
ATerm q_6 (ATerm s_15, ATerm t)
{
  t = SSL_read_term_from_stream(s_15);
  return(t);
}
ATerm r_6 (ATerm q_36, ATerm r_36, ATerm t)
{
  ATerm u_14 = NULL;
  t = SSL_fopen(q_36, r_36);
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_14 = NULL;
  t = SSL_stdin_stream();
  v_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_14 = NULL;
  t = SSL_stdout_stream();
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_15 = NULL;
  t = SSL_stderr_stream();
  b_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_15);
  return(t);
}
ATerm z_17 (ATerm o_15, ATerm t)
{
  ATerm v_15 = NULL;
  t = SSL_explode_term(o_15);
  if(match_cons(t, sym__2))
    {
      ATerm q_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_20 = ATgetArgument(t, 1);
        if(((ATgetType(r_20) == AT_LIST) && !(ATisEmpty(r_20))))
          {
            v_15 = ATgetFirst((ATermList) r_20);
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
  t = v_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm d_18 (ATerm z_15, ATerm b_16, ATerm d_16, ATerm t)
{
  ATerm j_16 = NULL,m_16 = NULL,p_16 = NULL,s_16 = NULL,p_1 = NULL;
  t = SSLgetAnnotations(d_16);
  p_16 = t;
  t = z_15;
  if(match_cons(t, sym_Path_1))
    {
      s_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_16, b_16);
  p_1 = t;
  t = SSLsetAnnotations(p_1, p_16);
  if(match_cons(t, sym__2))
    {
      j_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(j_16, m_16, t);
  return(t);
}
ATerm f_18 (ATerm w_16, ATerm x_16, ATerm y_16, ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,m_17 = NULL,q_17 = NULL,q_1 = NULL;
  t = SSLgetAnnotations(y_16);
  m_17 = t;
  t = SSL_is_string(w_16);
  q_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_17, x_16);
  q_1 = t;
  t = SSLsetAnnotations(q_1, m_17);
  if(match_cons(t, sym__2))
    {
      a_17 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(a_17, b_17, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      ATerm u_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  u_17 = t;
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_17(u_17, t);
            ;
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
            {
              ATerm a_21 = t;
              int b_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_18(v_17, w_17, u_17, t);
                  ;
                  LocalPopChoice(b_21);
                }
              else
                {
                  t = a_21;
                  t = f_18(v_17, w_17, u_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_17(u_17, t);
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL;
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_18 = NULL;
      j_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_18, term_k_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      t = debug_1_0(r_1, t);
      _fail(t);
    }
  h_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_6(i_18, t);
  g_18 = t;
  t = h_18;
  t = fclose_0_0(t);
  t = g_18;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_18 = NULL,o_18 = NULL;
      n_18 = t;
      t = (ATerm) ATinsert(ATempty, term_s_21);
      o_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_18, (ATerm) ATinsert(ATempty, term_s_21));
      t = s_6(n_18, o_18, t);
      LocalPopChoice(r_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = q_21;
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_21 = t;
            if((PushChoice() == 0))
              {
                ATerm p_18 = NULL,y_18 = NULL;
                p_18 = t;
                t = (ATerm) ATinsert(ATempty, term_n_9);
                y_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_18, (ATerm) ATinsert(ATempty, term_n_9));
                t = s_6(p_18, y_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_21;
              }
            t = debug_1_0(s_1, t);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
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
  t = term_x_21;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = debug_1_0(a_2, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
  u_19 = t;
  t = term_h_17;
  v_19 = t;
  t = (ATerm) ATinsert(ATempty, term_a_22);
  w_19 = t;
  t = SSL_printnl(v_19, w_19);
  t = u_19;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm x_19 = NULL,a_20 = NULL,e_20 = NULL;
  if(match_cons(t, sym__3))
    {
      x_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
      e_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_6(x_19, a_20, e_20, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
  g_20 = t;
  t = term_h_17;
  h_20 = t;
  t = (ATerm) ATinsert(ATempty, term_c_22);
  i_20 = t;
  t = SSL_printnl(h_20, i_20);
  t = g_20;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  j_20 = t;
  t = term_h_17;
  k_20 = t;
  t = (ATerm) ATinsert(ATempty, term_a_22);
  l_20 = t;
  t = SSL_printnl(k_20, l_20);
  t = j_20;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm z_18 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,h_19 = NULL,j_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  z_18 = t;
  t = if_verbose5_1_0(u_1, t);
  {
    ATerm e_22 = t;
    if((PushChoice() == 0))
      {
        ATerm q_19 = NULL,t_19 = NULL;
        t = term_f_22;
        q_19 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, z_18);
        t_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_22, (ATerm) ATmakeAppl(sym_Imported_1, z_18));
        t = z_6(q_19, t_19, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_22;
      }
    c_19 = t;
    t = term_f_22;
    n_19 = t;
    t = term_h_22;
    o_19 = t;
    t = (ATerm) ATinsert(ATempty, z_18);
    p_19 = t;
    t = SSL_table_put(n_19, o_19, p_19);
    t = c_19;
    t = if_verbose4_1_0(z_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(b_2, t);
    b_19 = t;
    t = term_f_22;
    m_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_f_22, b_19);
    t = p_6(d_2, m_19, b_19, t);
    t = if_verbose6_1_0(f_2, t);
    t = term_f_22;
    d_19 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, z_18);
    h_19 = t;
    t = (ATerm) ATempty;
    j_19 = t;
    t = SSL_table_put(d_19, h_19, j_19);
    t = (ATerm) ATmakeAppl(sym__3, term_f_22, (ATerm)ATmakeAppl(sym_Imported_1, z_18), (ATerm) ATempty);
    t = if_verbose4_1_0(k_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_71 (ATerm), ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL;
  x_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_20;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_20 = ATgetFirst((ATermList) t);
          z_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm j_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_5 = NULL,c_6 = NULL,d_6 = NULL,v_1 = NULL;
            t = SSLgetAnnotations(x_20);
            z_5 = t;
            t = y_20;
            t = r_71(t);
            c_6 = t;
            t = z_20;
            t = filter_1_0(r_71, t);
            d_6 = t;
            t = (ATerm) ATinsert(CheckATermList(d_6), c_6);
            v_1 = t;
            t = SSLsetAnnotations(v_1, z_5);
            ;
            LocalPopChoice(m_22);
          }
        else
          {
            t = j_22;
            t = z_20;
            t = filter_1_0(r_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm q_73 (ATerm), ATerm t)
{
  ATerm f_21 (ATerm t)
  {
    ATerm n_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_73(t);
        t = f_21(t);
        ;
        LocalPopChoice(q_22);
      }
    else
      {
        t = n_22;
      }
    return(t);
  }
  t = f_21(t);
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
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_21 = NULL;
            t = term_z_22;
            g_21 = t;
            t = SSL_getenv(g_21);
            ;
            LocalPopChoice(y_22);
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
ATerm l_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_b_23;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL;
  t = term_f_22;
  n_21 = t;
  t = term_c_23;
  o_21 = t;
  t = term_d_23;
  t = z_6(n_21, o_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm e_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_23;
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
  t = term_f_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm h_21 = NULL;
  t = if_verbose5_1_0(l_2, t);
  h_21 = t;
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_21 = NULL,j_21 = NULL;
        t = term_f_22;
        i_21 = t;
        t = term_h_22;
        j_21 = t;
        t = term_i_23;
        t = z_6(i_21, j_21, t);
        ;
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        {
          ATerm l_21 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          l_21 = t;
          t = repeat_1_0(q_2, t);
          t = l_21;
        }
      }
    t = h_21;
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
  t = term_j_23;
  return(t);
}
ATerm p_23 (ATerm t_21, ATerm t)
{
  ATerm z_21 = NULL,b_22 = NULL,d_22 = NULL;
  t = term_f_22;
  b_22 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, t_21);
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_22, (ATerm) ATmakeAppl(sym_Tool_1, t_21));
  t = z_6(b_22, d_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_23 = ATgetFirst((ATermList) t);
      if(match_cons(k_23, sym__2))
        {
          ATerm n_23 = ATgetArgument(k_23, 0);
          z_21 = ATgetArgument(k_23, 1);
        }
      else
        _fail(t);
      {
        ATerm l_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_21;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = debug_1_0(c_3, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_j_23;
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_f_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(e_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_o_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_22 = NULL,i_22 = NULL,r_22 = NULL;
      t = if_verbose5_1_0(t_2, t);
      t = xtc_load_0_0(t);
      r_22 = t;
      if(match_cons(t, sym__2))
        {
          g_22 = ATgetArgument(t, 0);
          i_22 = ATgetArgument(t, 1);
          {
            ATerm s_23 = t;
            int t_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_22 = NULL,x_22 = NULL,a_23 = NULL;
                t = term_f_22;
                x_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, g_22);
                a_23 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_22, (ATerm) ATmakeAppl(sym_Tool_1, g_22));
                t = z_6(x_22, a_23, t);
                {
                  ATerm w_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((i_22 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((w_22 != NULL) && (w_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          w_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(w_2, t);
                  t = not_null(w_22);
                }
                ;
                LocalPopChoice(t_23);
              }
            else
              {
                t = s_23;
                t = p_23(r_22, t);
              }
          }
        }
      else
        {
          t = p_23(r_22, t);
        }
      t = if_verbose5_1_0(z_2, t);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm m_23 = NULL,n_7 = NULL,o_7 = NULL;
        m_23 = t;
        t = term_h_17;
        n_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_23), m_23), term_u_23);
        o_7 = t;
        t = SSL_printnl(n_7, o_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_23), m_23), term_u_23);
        t = if_verbose5_1_0(d_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_w_23;
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_w_23;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_24 = NULL,k_24 = NULL;
      k_24 = t;
      if(match_cons(t, sym_FILE_1))
        {
          f_24 = ATgetArgument(t, 0);
          {
            ATerm w_7 = NULL,c_2 = NULL;
            t = SSLgetAnnotations(k_24);
            w_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, f_24);
            c_2 = t;
            t = SSLsetAnnotations(c_2, w_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_24;
        }
      LocalPopChoice(y_23);
      {
        ATerm g_3 (ATerm t)
        {
          ATerm l_24 = NULL,m_24 = NULL;
          t = term_t_18;
          t = c_79(t);
          t = xtc_find_0_0(t);
          l_24 = t;
          t = term_t_18;
          t = pass_v_verbose_0_0(t);
          m_24 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_24), l_24), term_a_24), term_z_23);
          return(t);
        }
        t = xtc_transform_file_2_0(f_3, g_3, t);
      }
    }
  else
    {
      t = x_23;
      {
        ATerm n_3 (ATerm t)
        {
          ATerm o_24 = NULL,r_24 = NULL;
          t = term_t_18;
          t = c_79(t);
          t = xtc_find_0_0(t);
          o_24 = t;
          t = term_t_18;
          t = pass_v_verbose_0_0(t);
          r_24 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(r_24), o_24), term_a_24), term_z_23);
          return(t);
        }
        t = xtc_transform_term_2_0(l_3, n_3, t);
      }
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm xtc_parse_sdf_0_0 (ATerm t)
{
  t = xtc_sglr_1_0(o_3, t);
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_25 = NULL,g_25 = NULL;
        g_25 = t;
        if(match_cons(t, sym_FILE_1))
          {
            f_25 = ATgetArgument(t, 0);
            {
              ATerm f_8 = NULL,e_2 = NULL;
              t = SSLgetAnnotations(g_25);
              f_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_25);
              e_2 = t;
              t = SSLsetAnnotations(e_2, f_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_25;
          }
        LocalPopChoice(e_24);
        t = xtc_transform_file_2_0(p_3, pass_verbose_0_0, t);
      }
    else
      {
        t = d_24;
        t = xtc_transform_term_2_0(q_3, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm pre_process_sdf_0_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
  y_25 = t;
  if(match_cons(t, sym__2))
    {
      z_25 = ATgetArgument(t, 0);
      a_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_25;
  if(match_cons(t, sym_AST_0))
    {
      t = a_26;
    }
  else
    {
      if(match_cons(t, sym_ParseTree_0))
        {
          t = a_26;
          {
            ATerm g_24 = t;
            int h_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_9 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    y_9 = ATgetArgument(t, 0);
                    {
                      ATerm m_10 = NULL,y_2 = NULL;
                      t = SSLgetAnnotations(a_26);
                      m_10 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, y_9);
                      y_2 = t;
                      t = SSLsetAnnotations(y_2, m_10);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = a_26;
                  }
                LocalPopChoice(h_24);
                t = xtc_transform_file_2_0(r_3, pass_verbose_0_0, t);
              }
            else
              {
                t = g_24;
                t = xtc_transform_term_2_0(t_3, pass_verbose_0_0, t);
              }
          }
        }
      else
        {
          if(!(match_cons(t, sym_PlainText_0)))
            _fail(t);
          t = a_26;
          t = xtc_parse_sdf_0_0(t);
        }
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      t = term_p_24;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_q_24;
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_q_24;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_s_24;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_s_24;
  return(t);
}
ATerm ppgen_0_0 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL;
  m_26 = t;
  t = get_input_type_0_0(t);
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_26, m_26);
  t = pre_process_sdf_0_0(t);
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_26 = NULL,v_26 = NULL;
        v_26 = t;
        if(match_cons(t, sym_FILE_1))
          {
            s_26 = ATgetArgument(t, 0);
            {
              ATerm u_10 = NULL,k_3 = NULL;
              t = SSLgetAnnotations(v_26);
              u_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_26);
              k_3 = t;
              t = SSLsetAnnotations(k_3, u_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_26;
          }
        LocalPopChoice(u_24);
        t = xtc_transform_file_2_0(w_3, pass_verbose_0_0, t);
      }
    else
      {
        t = t_24;
        t = xtc_transform_term_2_0(x_3, pass_verbose_0_0, t);
      }
    {
      ATerm v_24 = t;
      int w_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_26 = NULL;
          y_26 = t;
          t = term_x_24;
          t = get_config_0_0(t);
          if(!(match_cons(t, sym_AST_0)))
            _fail(t);
          t = y_26;
          ;
          LocalPopChoice(w_24);
        }
      else
        {
          t = v_24;
          {
            ATerm y_24 = t;
            int z_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_27 = NULL,i_27 = NULL;
                i_27 = t;
                if(match_cons(t, sym_FILE_1))
                  {
                    g_27 = ATgetArgument(t, 0);
                    {
                      ATerm m_11 = NULL,m_3 = NULL;
                      t = SSLgetAnnotations(i_27);
                      m_11 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, g_27);
                      m_3 = t;
                      t = SSLsetAnnotations(m_3, m_11);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = i_27;
                  }
                LocalPopChoice(z_24);
                t = xtc_transform_file_2_0(z_3, pass_verbose_0_0, t);
              }
            else
              {
                t = y_24;
                t = xtc_transform_term_2_0(a_4, pass_verbose_0_0, t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm t_6 (ATerm o_12, ATerm p_12, ATerm t)
{
  t = SSL_copy(o_12, p_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  m_28 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_12 = NULL;
        t = m_28;
        t = n_0(t);
        l_12 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = l_12;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = l_12;
          }
        t = (ATerm) ATmakeAppl(sym__2, n_28, l_12);
        t = t_6(n_28, l_12, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_28);
        ;
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        {
          ATerm c_25 = t;
          int d_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_12 = NULL;
              t = m_28;
              t = n_0(t);
              x_12 = t;
              {
                ATerm e_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm z_12 = NULL;
                    z_12 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = z_12;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = z_12;
                          }
                        else
                          {
                            t = z_12;
                            if((n_28 != t))
                              {
                                _fail(t);
                              }
                            t = z_12;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_25;
                  }
                t = (ATerm) ATmakeAppl(sym__2, n_28, x_12);
                t = t_6(n_28, x_12, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, n_28);
              }
              ;
              LocalPopChoice(d_25);
            }
          else
            {
              t = c_25;
              t = m_28;
              t = n_0(t);
              if((n_28 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_28);
            }
        }
      }
  }
  return(t);
}
ATerm u_6 (ATerm j_33, ATerm k_33, ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL;
  t_28 = t;
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_33, k_33);
        t = z_6(j_33, k_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_25 = ATgetFirst((ATermList) t);
            s_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_25);
        t = SSL_table_put(j_33, k_33, s_28);
        t = (ATerm) ATmakeAppl(sym__3, j_33, k_33, s_28);
      }
    else
      {
        t = h_25;
        t = SSL_table_remove(j_33, k_33);
        t = (ATerm) ATmakeAppl(sym__2, j_33, k_33);
      }
    t = t_28;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_74 (ATerm), ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
  x_28 = t;
  t = r_74(t);
  w_28 = t;
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_28 = NULL;
        t = term_c_18;
        z_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_28, term_c_18);
        t = z_6(w_28, z_28, t);
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
        v_28 = ATgetFirst((ATermList) t);
        u_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_18;
    y_28 = t;
    t = SSL_table_put(w_28, y_28, u_28);
    t = v_28;
    {
      ATerm b_4 (ATerm t)
      {
        ATerm a_29 = NULL;
        a_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_28, a_29);
        t = u_6(w_28, a_29, t);
        return(t);
      }
      t = map_1_0(b_4, t);
      t = x_28;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm t)
{
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_75(t);
      t = n_75(t);
      ;
      LocalPopChoice(n_25);
    }
  else
    {
      t = m_25;
      t = n_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_74 (ATerm), ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,n_29 = NULL;
  h_29 = t;
  t = q_74(t);
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_29, term_c_18);
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_29 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_25 = ATgetArgument(t, 0);
            ATerm r_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_18;
        y_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_29, term_c_18);
        t = z_6(g_29, y_29, t);
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        t = (ATerm) ATempty;
      }
    i_29 = t;
    t = term_c_18;
    j_29 = t;
    t = (ATerm) ATinsert(CheckATermList(i_29), (ATerm) ATempty);
    n_29 = t;
    t = SSL_table_put(g_29, j_29, n_29);
    t = h_29;
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_x_18;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(q_30);
        ;
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        t = q_30;
      }
  }
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_x_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  ATerm c_30 = NULL;
  ATerm e_4 (ATerm t)
  {
    ATerm d_30 = NULL;
    d_30 = t;
    {
      ATerm u_25 = t;
      int v_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_30 = NULL,h_30 = NULL;
          t = term_x_18;
          g_30 = t;
          t = term_c_18;
          h_30 = t;
          t = term_w_25;
          t = z_6(g_30, h_30, t);
          ;
          LocalPopChoice(v_25);
        }
      else
        {
          t = u_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((c_30 != NULL) && (c_30 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            c_30 = ATgetFirst((ATermList) t);
          {
            ATerm x_25 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = c_30;
      t = map_1_0(g_4, t);
      t = d_30;
      t = end_scope_1_0(h_4, t);
    }
    return(t);
  }
  t = begin_scope_1_0(c_4, t);
  t = restore_always_2_0(v_77, e_4, t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      t = term_d_26;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_77 (ATerm), ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_30 = NULL;
        t = term_e_19;
        t = get_config_0_0(t);
        t_30 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, t_30);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = term_m_9;
      }
    t = w_77(t);
    t = copy_to_1_0(j_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(i_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
  u_30 = t;
  t = term_t_18;
  t = whoami_0_0(t);
  v_30 = t;
  t = term_h_17;
  x_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_26), v_30), term_g_26);
  y_30 = t;
  t = SSL_printnl(x_30, y_30);
  t = term_l_9;
  w_30 = t;
  t = SSL_exit(w_30);
  t = u_30;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm c_31 = NULL;
  c_31 = t;
  if(match_string(t, "-k"))
    {
      t = c_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_31;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,h_31 = NULL;
  d_31 = t;
  t = SSL_string_to_int(d_31);
  e_31 = t;
  t = term_i_26;
  h_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_26, e_31);
  t = c_7(h_31, e_31, t);
  t = d_31;
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, q_4, s_4, t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm j_31 = NULL;
  j_31 = t;
  if(match_string(t, "-S"))
    {
      t = j_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_31;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL;
  t = term_i_9;
  k_31 = t;
  t = term_k_26;
  l_31 = t;
  t = term_n_26;
  t = c_7(k_31, l_31, t);
  t = term_o_26;
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm y_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL;
  m_31 = t;
  t = SSL_string_to_int(m_31);
  n_31 = t;
  t = term_i_9;
  o_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_9, n_31);
  t = c_7(o_31, n_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_31);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_q_26;
  return(t);
}
ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL;
  t = term_r_26;
  p_31 = t;
  t = term_t_18;
  q_31 = t;
  t = term_t_26;
  t = c_7(p_31, q_31, t);
  t = term_u_26;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_w_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_4, v_4, x_4, t);
      ;
      LocalPopChoice(z_26);
    }
  else
    {
      t = x_26;
      {
        ATerm a_27 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_4, a_5, b_5, t);
            ;
            LocalPopChoice(b_27);
          }
        else
          {
            t = a_27;
            t = Option_3_0(c_5, d_5, f_5, t);
          }
      }
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm s_31 = NULL;
  s_31 = t;
  if(match_string(t, "-o"))
    {
      t = s_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_31;
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL;
  t_31 = t;
  t = term_a_19;
  u_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, t_31);
  t = c_7(u_31, t_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_31);
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_c_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_5, j_5, k_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
      t = term_t_18;
      t = m_0(t);
      c_32 = t;
      t = term_d_27;
      d_32 = t;
      t = term_e_27;
      e_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_27, term_e_27, c_32);
      t = a_7(d_32, e_32, c_32, t);
      _fail(t);
    }
  else
    {
      ATerm t_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_31 = ATgetFirst((ATermList) t);
          z_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_32 = ATgetFirst((ATermList) t);
          b_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_31;
      t = k_0(t);
      t = a_32;
      t = l_0(t);
      t_32 = t;
      t = (ATerm) ATinsert(CheckATermList(b_32), t_32);
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm v_32 = NULL;
  v_32 = t;
  if(match_string(t, "-i"))
    {
      t = v_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_32;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL;
  x_32 = t;
  t = term_e_19;
  y_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_19, x_32);
  t = c_7(y_32, x_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_32);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_5, n_5, s_5, t);
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
  ATerm g_33 = NULL,h_33 = NULL,l_33 = NULL;
  g_33 = t;
  t = term_n_24;
  h_33 = t;
  t = term_h_27;
  l_33 = t;
  t = term_j_27;
  t = c_7(h_33, l_33, t);
  t = g_33;
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_k_27;
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
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
  m_33 = t;
  t = term_n_24;
  n_33 = t;
  t = term_l_27;
  o_33 = t;
  t = term_m_27;
  t = c_7(n_33, o_33, t);
  t = m_33;
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
  p_33 = t;
  t = term_x_24;
  q_33 = t;
  t = term_l_27;
  r_33 = t;
  t = term_o_27;
  t = c_7(q_33, r_33, t);
  t = p_33;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_p_27;
  return(t);
}
ATerm e_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL;
  t = term_q_27;
  s_33 = t;
  t = term_t_18;
  t_33 = t;
  t = term_r_27;
  t = c_7(s_33, t_33, t);
  t = term_s_27;
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_t_27;
  return(t);
}
ATerm ppgen_options_0_0 (ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, v_5, w_5, t);
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
      {
        ATerm w_27 = t;
        int x_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(a_6, b_6, e_6, t);
            ;
            LocalPopChoice(x_27);
          }
        else
          {
            t = w_27;
            {
              ATerm y_27 = t;
              int z_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(j_6, l_6, w_6, t);
                  ;
                  LocalPopChoice(z_27);
                }
              else
                {
                  t = y_27;
                  {
                    ATerm a_28 = t;
                    int b_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = input_option_0_0(t);
                        ;
                        LocalPopChoice(b_28);
                      }
                    else
                      {
                        t = a_28;
                        {
                          ATerm c_28 = t;
                          int d_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = output_option_0_0(t);
                              ;
                              LocalPopChoice(d_28);
                            }
                          else
                            {
                              t = c_28;
                              {
                                ATerm e_28 = t;
                                int f_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(e_7, f_7, g_7, t);
                                    ;
                                    LocalPopChoice(f_28);
                                  }
                                else
                                  {
                                    t = e_28;
                                    {
                                      ATerm g_28 = t;
                                      int h_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = verbose_option_0_0(t);
                                          ;
                                          LocalPopChoice(h_28);
                                        }
                                      else
                                        {
                                          t = g_28;
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
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_18;
  t = whoami_0_0(t);
  u_33 = t;
  t = term_h_17;
  w_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_28), u_33);
  x_33 = t;
  t = SSL_printnl(w_33, x_33);
  t = term_l_9;
  v_33 = t;
  t = SSL_exit(v_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_28;
  t = get_config_0_0(t);
  return(t);
}
ATerm v_6 (ATerm z_30, ATerm a_31, ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_30, a_31);
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      t = SSL_addr(z_30, a_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,g_34 = NULL;
  z_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_33;
      t = n_70(t);
    }
  else
    {
      ATerm j_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_34 = ATgetFirst((ATermList) t);
          g_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_34;
      t = foldr_2_0(n_70, o_70, t);
      j_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_34, j_34);
      t = o_70(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL;
  if(match_cons(t, sym__2))
    {
      q_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(q_13, r_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_34 = NULL,m_13 = NULL,n_13 = NULL;
  t = times_0_0(t);
  n_13 = t;
  t = SSL_explode_term(n_13);
  if(match_cons(t, sym__2))
    {
      ATerm o_28 = ATgetArgument(t, 0);
      m_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_13;
  t = foldr_2_0(h_7, j_7, t);
  q_34 = t;
  t = SSL_TicksToSeconds(q_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_35 = NULL,g_35 = NULL,h_35 = NULL;
  d_35 = t;
  if(match_cons(t, sym__2))
    {
      g_35 = ATgetArgument(t, 0);
      h_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_35;
        if((g_35 != t))
          {
            _fail(t);
          }
        t = d_35;
        ;
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = (ATerm) ATmakeAppl(sym__2, g_35, h_35);
        {
          ATerm r_28 = t;
          int b_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_35, h_35);
              ;
              LocalPopChoice(b_29);
            }
          else
            {
              t = r_28;
              t = SSL_gtr(g_35, h_35);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_35, h_35);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_75 (ATerm), ATerm t)
{
  ATerm l_35 = NULL;
  l_35 = t;
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_35 = NULL;
        t = term_i_9;
        t = get_config_0_0(t);
        s_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_35, term_l_9);
        t = geq_0_0(t);
        t = l_35;
        t = y_75(t);
        ;
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        t = l_35;
      }
  }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm u_35 = NULL,y_35 = NULL,a_36 = NULL,b_36 = NULL;
  t = run_time_0_0(t);
  u_35 = t;
  t = term_t_18;
  t = whoami_0_0(t);
  y_35 = t;
  t = term_h_17;
  a_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_29), u_35), term_s_9), y_35);
  b_36 = t;
  t = SSL_printnl(a_36, b_36);
  t = (ATerm) ATmakeAppl(sym__2, term_h_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_29), u_35), term_s_9), y_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_26;
  c_36 = t;
  t = SSL_exit(c_36);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL;
  n_36 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_36;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_36 = ATgetArgument(t, 0);
          {
            ATerm f_14 = NULL,s_3 = NULL;
            t = SSLgetAnnotations(n_36);
            f_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_36);
            s_3 = t;
            t = SSLsetAnnotations(s_3, f_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_36;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_80 (ATerm), ATerm t)
{
  ATerm f_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_29);
    }
  else
    {
      t = f_29;
      t = fetch_1_0(t_7, t);
    }
  t = d_80(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_36 = ATgetFirst((ATermList) t);
      v_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_36 = NULL,a_37 = NULL;
        ATerm v_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_36)), not_null(a_37));
          return(t);
        }
        t = v_36;
        t = j_0(t);
        if(((z_36 != NULL) && (z_36 != t)))
          _fail(t);
        else
          z_36 = t;
        t = u_36;
        t = i_0(t);
        if(((a_37 != NULL) && (a_37 != t)))
          _fail(t);
        else
          a_37 = t;
        t = v_36;
        t = reverse_acc_2_0(i_0, v_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_18;
      t = j_0(t);
    }
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,m_37 = NULL,e_5 = NULL;
  m_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_37);
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_37);
  e_5 = t;
  t = SSLsetAnnotations(e_5, e_37);
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm q_37 = NULL;
  q_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_37), term_m_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL;
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
      t = fetch_1_0(x_7, t);
    }
  t = term_q_29;
  t = echo_0_0(t);
  t = term_d_27;
  c_37 = t;
  t = term_e_27;
  d_37 = t;
  t = term_r_29;
  t = z_6(c_37, d_37, t);
  t = reverse_acc_2_0(_id, y_7, t);
  t = map_1_0(z_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_64 (ATerm), ATerm t)
{
  ATerm t_38 (ATerm t)
  {
    ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
    q_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_38 = ATgetFirst((ATermList) t);
        s_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_14 = NULL,d_15 = NULL,h_5 = NULL;
          t = SSLgetAnnotations(q_38);
          z_14 = t;
          t = r_38;
          t = f_64(t);
          d_15 = t;
          t = (ATerm) ATinsert(CheckATermList(s_38), d_15);
          h_5 = t;
          t = SSLsetAnnotations(h_5, z_14);
          ;
          LocalPopChoice(t_29);
        }
      else
        {
          t = s_29;
          {
            ATerm l_15 = NULL,r_15 = NULL,i_5 = NULL;
            t = SSLgetAnnotations(q_38);
            l_15 = t;
            t = s_38;
            t = t_38(t);
            r_15 = t;
            t = (ATerm) ATinsert(CheckATermList(r_15), r_38);
            i_5 = t;
            t = SSLsetAnnotations(i_5, l_15);
          }
        }
    }
    return(t);
  }
  t = t_38(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
  x_38 = t;
  {
    ATerm u_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_38;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_29 = ATgetFirst((ATermList) t);
                ATerm a_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_38;
          }
        ;
        LocalPopChoice(x_29);
      }
    else
      {
        t = u_29;
        t = (ATerm) ATinsert(ATempty, x_38);
      }
    y_38 = t;
    t = term_d_26;
    z_38 = t;
    t = SSL_printnl(z_38, y_38);
    t = x_38;
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
ATerm y_6 (ATerm v_29, ATerm w_29, ATerm t)
{
  t = SSL_strcat(v_29, w_29);
  return(t);
}
ATerm debug_1_0 (ATerm a_60 (ATerm), ATerm t)
{
  ATerm d_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
  d_39 = t;
  t = a_60(t);
  j_39 = t;
  t = term_h_17;
  k_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_39), j_39);
  l_39 = t;
  t = SSL_printnl(k_39, l_39);
  t = d_39;
  return(t);
}
ATerm map_1_0 (ATerm v_63 (ATerm), ATerm t)
{
  ATerm b_40 (ATerm t)
  {
    ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL;
    y_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_39;
      }
    else
      {
        ATerm h_16 = NULL,l_16 = NULL,n_16 = NULL,m_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_39 = ATgetFirst((ATermList) t);
            a_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_39);
        h_16 = t;
        t = z_39;
        t = v_63(t);
        l_16 = t;
        t = a_40;
        t = b_40(t);
        n_16 = t;
        t = (ATerm) ATinsert(CheckATermList(n_16), l_16);
        m_5 = t;
        t = SSLsetAnnotations(m_5, h_16);
      }
    return(t);
  }
  t = b_40(t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm b_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_30);
    }
  else
    {
      t = b_30;
    }
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_f_30;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_40 = NULL;
      j_40 = t;
      t = SSL_is_string(j_40);
      ;
      LocalPopChoice(j_30);
    }
  else
    {
      t = i_30;
      {
        ATerm k_30 = t;
        int l_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_8, t);
            ;
            LocalPopChoice(l_30);
          }
        else
          {
            t = k_30;
            {
              ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
              p_40 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_40 = ATgetArgument(t, 0);
                  t = q_40;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_40 = ATgetArgument(t, 0);
                      t = q_40;
                      {
                        ATerm m_30 = t;
                        int n_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(n_30);
                          }
                        else
                          {
                            t = m_30;
                            t = debug_1_0(b_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_40 = NULL,w_40 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_40 = ATgetArgument(t, 0);
                          r_40 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_40;
                      t = eval_config_0_0(t);
                      v_40 = t;
                      t = r_40;
                      t = eval_config_0_0(t);
                      w_40 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
                      t = y_6(v_40, w_40, t);
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
  ATerm a_41 = NULL,b_41 = NULL;
  a_41 = t;
  t = term_o_30;
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_30, a_41);
  t = z_6(b_41, a_41, t);
  {
    ATerm p_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_41 = NULL,d_41 = NULL;
        t = eval_config_0_0(t);
        c_41 = t;
        t = term_o_30;
        d_41 = t;
        t = SSL_table_put(d_41, a_41, c_41);
        t = c_41;
        ;
        LocalPopChoice(r_30);
      }
    else
      {
        t = p_30;
      }
  }
  return(t);
}
ATerm c_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL;
  t = term_s_30;
  g_41 = t;
  t = term_t_18;
  h_41 = t;
  t = term_b_31;
  t = c_7(g_41, h_41, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_i_31;
  return(t);
}
ATerm k_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL;
  t = term_s_30;
  k_41 = t;
  t = term_t_18;
  l_41 = t;
  t = term_b_31;
  t = c_7(k_41, l_41, t);
  t = term_i_19;
  i_41 = t;
  t = term_t_18;
  j_41 = t;
  t = term_r_31;
  t = c_7(i_41, j_41, t);
  t = term_v_31;
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_31 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_8, e_8, g_8, t);
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = x_31;
      t = Option_3_0(k_8, l_8, m_8, t);
    }
  return(t);
}
ATerm c_7 (ATerm e_35, ATerm f_35, ATerm t)
{
  ATerm m_41 = NULL;
  t = term_o_30;
  m_41 = t;
  t = SSL_table_put(m_41, e_35, f_35);
  t = (ATerm) ATmakeAppl(sym__3, term_o_30, e_35, f_35);
  return(t);
}
ATerm z_6 (ATerm v_34, ATerm w_34, ATerm t)
{
  t = SSL_table_get(v_34, w_34);
  return(t);
}
ATerm a_7 (ATerm e_33, ATerm f_33, ATerm d_33, ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL;
  o_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_33, f_33);
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_32 = ATgetArgument(t, 0);
            ATerm j_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_33, f_33);
        t = z_6(e_33, f_33, t);
        ;
        LocalPopChoice(h_32);
      }
    else
      {
        t = g_32;
        t = (ATerm) ATempty;
      }
    p_41 = t;
    t = (ATerm) ATinsert(CheckATermList(p_41), d_33);
    q_41 = t;
    t = SSL_table_put(e_33, f_33, q_41);
    t = o_41;
  }
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
      t = term_t_18;
      t = h_0(t);
      y_41 = t;
      t = term_d_27;
      z_41 = t;
      t = term_e_27;
      a_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_27, term_e_27, y_41);
      t = a_7(z_41, a_42, y_41, t);
      _fail(t);
    }
  else
    {
      ATerm d_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_41 = ATgetFirst((ATermList) t);
          x_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_41;
      t = d_0(t);
      t = term_t_18;
      t = g_0(t);
      d_42 = t;
      t = (ATerm) ATinsert(CheckATermList(x_41), d_42);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_51 (ATerm), ATerm o_51 (ATerm), ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,t_5 = NULL;
  j_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_42 = ATgetFirst((ATermList) t);
      g_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_42);
  e_42 = t;
  t = f_42;
  t = n_51(t);
  h_42 = t;
  t = g_42;
  t = o_51(t);
  i_42 = t;
  t = (ATerm) ATinsert(CheckATermList(i_42), h_42);
  t_5 = t;
  t = SSLsetAnnotations(t_5, e_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_82 (ATerm), ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,t_42 = NULL,u_42 = NULL,v_8 = NULL;
  o_42 = t;
  {
    ATerm k_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_32;
        t = b_82(t);
        ;
        LocalPopChoice(m_32);
      }
    else
      {
        t = k_32;
      }
    t = o_42;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_42 = ATgetFirst((ATermList) t);
        r_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_42);
    p_42 = t;
    t = term_j_28;
    u_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_28, q_42);
    t = c_7(u_42, q_42, t);
    t = r_42;
    {
      ATerm e_43 (ATerm t)
      {
        ATerm p_32 = t;
        int q_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_32 = t;
            int s_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_42 = NULL;
                x_42 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_42;
                ;
                LocalPopChoice(s_32);
              }
            else
              {
                t = r_32;
                t = b_82(t);
                t = Cons_2_0(_id, e_43, t);
              }
            ;
            LocalPopChoice(q_32);
          }
        else
          {
            t = p_32;
            {
              ATerm a_43 = NULL,b_43 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_43 = ATgetFirst((ATermList) t);
                  b_43 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_43), (ATerm) ATmakeAppl(sym_Undefined_1, a_43));
            }
          }
        return(t);
      }
      t = e_43(t);
      t_42 = t;
      t = (ATerm) ATinsert(CheckATermList(t_42), (ATerm) ATmakeAppl(sym_Program_1, q_42));
      v_8 = t;
      t = SSLsetAnnotations(v_8, p_42);
    }
  }
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm q_43 = NULL;
  q_43 = t;
  if(match_string(t, "--help"))
    {
      t = q_43;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_43;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_43;
        }
    }
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL;
  t = term_l_29;
  r_43 = t;
  t = term_t_18;
  s_43 = t;
  t = term_u_32;
  t = c_7(r_43, s_43, t);
  t = term_w_32;
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_z_32;
  return(t);
}
ATerm a_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_82 (ATerm), ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL;
  l_43 = t;
  t = term_d_27;
  n_43 = t;
  t = term_e_27;
  o_43 = t;
  t = (ATerm) ATempty;
  p_43 = t;
  t = SSL_table_put(n_43, o_43, p_43);
  t = l_43;
  {
    ATerm n_8 (ATerm t)
    {
      ATerm a_33 = t;
      int b_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_82(t);
          ;
          LocalPopChoice(b_33);
        }
      else
        {
          t = a_33;
          {
            ATerm c_33 = t;
            int i_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_8, u_8, x_8, t);
                ;
                LocalPopChoice(i_33);
              }
            else
              {
                t = c_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_8, t);
    {
      ATerm y_33 = t;
      int e_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_43 = NULL;
          z_43 = t;
          {
            ATerm f_34 = t;
            int h_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_17 = NULL;
                t = z_43;
                {
                  ATerm i_34 = t;
                  int m_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_29;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(m_34);
                    }
                  else
                    {
                      t = i_34;
                      t = fetch_1_0(a_9, t);
                    }
                  t = z_43;
                  t = default_system_usage_0_0(t);
                  t = term_k_26;
                  p_17 = t;
                  t = SSL_exit(p_17);
                }
                ;
                LocalPopChoice(h_34);
              }
            else
              {
                t = f_34;
                {
                  ATerm y_17 = NULL;
                  t = term_s_30;
                  t = get_config_0_0(t);
                  t = z_43;
                  t = default_system_about_0_0(t);
                  t = term_k_26;
                  y_17 = t;
                  t = SSL_exit(y_17);
                }
              }
          }
          ;
          LocalPopChoice(e_34);
        }
      else
        {
          t = y_33;
          {
            ATerm n_34 = t;
            int o_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
                ATerm c_9 (ATerm t)
                {
                  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,e_9 = NULL;
                  f_44 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      e_44 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_44);
                  d_44 = t;
                  t = e_44;
                  if(((j_43 != NULL) && (j_43 != t)))
                    _fail(t);
                  else
                    j_43 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, e_44);
                  e_9 = t;
                  t = SSLsetAnnotations(e_9, d_44);
                  return(t);
                }
                t = fetch_1_0(c_9, t);
                t = term_h_17;
                b_44 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_43)), term_p_34);
                c_44 = t;
                t = SSL_printnl(b_44, c_44);
                t = (ATerm) ATmakeAppl(sym__2, term_h_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_43)), term_p_34));
                t = default_system_usage_0_0(t);
                t = term_l_9;
                a_44 = t;
                t = SSL_exit(a_44);
                ;
                LocalPopChoice(o_34);
              }
            else
              {
                t = n_34;
              }
          }
        }
      k_43 = t;
      t = term_d_27;
      m_43 = t;
      t = SSL_table_destroy(m_43);
      t = k_43;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL;
  t = parse_options_1_0(f_80, t);
  k_44 = t;
  t = term_r_34;
  n_44 = t;
  t = SSL_table_create(n_44);
  t = term_r_34;
  l_44 = t;
  t = term_s_34;
  m_44 = t;
  t = SSL_table_put(l_44, m_44, k_44);
  t = k_44;
  t = h_80(t);
  {
    ATerm t_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_80, t);
        ;
        LocalPopChoice(u_34);
      }
    else
      {
        t = t_34;
        {
          ATerm x_34 = t;
          int y_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_80(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_34);
            }
          else
            {
              t = x_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = xtc_io_1_0(ppgen_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(ppgen_options_0_0, default_usage_0_0, _id, f_9, t);
  return(t);
}
