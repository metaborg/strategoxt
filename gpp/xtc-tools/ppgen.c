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
ATerm term_k_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_c_28;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_y_26;
ATerm term_v_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_v_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_e_25;
ATerm term_u_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_g_23;
ATerm term_d_23;
ATerm term_a_23;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_k_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_q_19;
ATerm term_i_19;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_v_8;
ATerm term_p_6;
void init_constant_terms (void)
{
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_9, term_v_8, term_o_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_9, term_s_9, term_t_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_9, term_z_9, term_c_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_j_10, term_k_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_n_10, term_o_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_10, term_u_10, term_z_10);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_11, term_p_11, term_q_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_b_12);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_g_12, term_h_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_m_12, term_n_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_q_12, term_r_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_v_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_b_13);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_g_13, term_i_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_m_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_x_13, term_y_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_d_14, term_e_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_l_14, term_o_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_g_15, term_o_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_d_16, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_i_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_l_16, term_p_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_w_16, term_x_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_n_17, term_o_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_v_17, term_x_17);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_25);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym__3, term_h_28, term_i_28, term_v_19);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm u_65 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm z_69 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm h_64 (ATerm), ATerm i_64 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm j_64 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm t_83 (ATerm), ATerm);
ATerm assert_1_0 (ATerm e_80 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm n_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm e_62 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm pass_v_verbose_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm f_81 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm g_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm a_79 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm k_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm e_81 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm g_81 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm q_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm p_81 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_sglr_1_0 (ATerm m_84 (ATerm), ATerm);
ATerm xtc_parse_sdf_0_0 (ATerm);
ATerm xtc_implode_asfix_0_0 (ATerm);
ATerm pre_process_sdf_0_0 (ATerm);
ATerm get_input_type_0_0 (ATerm);
ATerm ppgen_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm b_80 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm a_80 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm f_83 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm g_83 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm ppgen_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm);
ATerm crush_2_0 (ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_81 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm n_85 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm l_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm m_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm x_69 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm i_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm d_70 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm w_55 (ATerm), ATerm x_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm g_65 (ATerm), ATerm);
ATerm map_1_0 (ATerm n_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm h_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm n_87 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_57 (ATerm), ATerm g_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm l_87 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm k_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm);
ATerm io_ppgen_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_1 = NULL,c_1 = NULL,d_1 = NULL;
  t = term_p_6;
  {
    ATerm n_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(q_8);
      }
    else
      {
        t = n_8;
        t = term_v_8;
      }
    a_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_1, term_v_8);
    {
      ATerm w_8 = t;
      int x_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(a_1, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(x_8);
        }
      else
        {
          t = w_8;
          t = SSL_subtr(a_1, (ATerm) ATmakeInt(1));
        }
      d_1 = t;
      t = SSL_int_to_string(d_1);
      c_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, c_1), term_p_6);
    }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL;
  g_1 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = g_1;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          h_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(h_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm u_65 (ATerm), ATerm t)
{
  ATerm k_1 = NULL,m_1 = NULL,o_1 = NULL;
  if(match_cons(t, sym__2))
    {
      k_1 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_1, term_y_8);
  t = open_stream_0_0(t);
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, m_1);
  t = u_65(t);
  t = fclose_0_0(t);
  t = m_1;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm p_1 = NULL,q_1 = NULL,t_1 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm a_9 = ATgetArgument(t, 0);
        if(match_cons(a_9, sym_Stream_1))
          {
            p_1 = ATgetArgument(a_9, 0);
          }
        else
          _fail(t);
        q_1 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(p_1, q_1);
    t_1 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, t_1);
    return(t);
  }
  t = WriteToFile_1_0(c_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm w_1 = NULL,y_1 = NULL;
  w_1 = t;
  t = xtc_new_file_0_0(t);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_1, w_1);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(y_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(c_84, d_84, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm z_1 = NULL;
  ATerm e_0 (ATerm t)
  {
    ATerm a_2 = NULL;
    a_2 = t;
    t = SSL_explode_string(a_2);
    return(t);
  }
  t = map_1_0(e_0, t);
  t = concat_0_0(t);
  z_1 = t;
  t = SSL_implode_string(z_1);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,m_3 = NULL,n_3 = NULL;
  j_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      k_3 = ATgetArgument(t, 0);
      {
        ATerm r_0 = NULL;
        t = SSL_int_to_string(k_3);
        r_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_9), r_0), term_b_9);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm z_0 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          k_3 = ATgetArgument(t, 0);
          m_3 = ATgetArgument(t, 1);
          n_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(m_3);
      z_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_3), term_e_9), z_0), term_d_9), k_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm z_69 (ATerm), ATerm t)
{
  ATerm q_3 = NULL;
  ATerm n_0 (ATerm t)
  {
    t = z_69(t);
    q_3 = t;
    return(t);
  }
  t = fetch_1_0(n_0, t);
  t = not_null(q_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm s_3 = NULL;
  s_3 = t;
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_18), term_t_17), term_k_17), term_a_17), term_q_16), term_j_16), term_f_16), term_v_15), term_p_15), term_d_15), term_s_14), term_g_14), term_z_13), term_s_13), term_j_13), term_c_13), term_w_12), term_s_12), term_o_12), term_i_12), term_c_12), term_u_11), term_b_11), term_q_10), term_l_10), term_h_10), term_x_9), term_p_9);
        {
          ATerm o_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm b_18 = ATgetArgument(t, 0);
                if((s_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm c_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(o_0, t);
        }
        ;
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, s_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm t_3 = NULL;
  t_3 = t;
  {
    ATerm p_0 (ATerm t)
    {
      ATerm x_3 = NULL,y_3 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm d_18 = ATgetArgument(t, 0);
          x_3 = ATgetArgument(t, 1);
          {
            ATerm e_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = x_3;
      {
        ATerm h_18 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_18;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        y_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_i_18, (ATerm) ATinsert(ATinsert(ATempty, y_3), term_j_18));
      }
      return(t);
    }
    t = try_1_0(p_0, t);
    t = t_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm h_64 (ATerm), ATerm i_64 (ATerm), ATerm t)
{
  ATerm a_4 = NULL,d_4 = NULL;
  a_4 = t;
  t = fork_0_0(t);
  d_4 = t;
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = a_4;
        t = h_64(t);
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = (ATerm) ATmakeAppl(sym__2, d_4, a_4);
        t = i_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm j_64 (ATerm), ATerm t)
{
  ATerm g_4 = NULL;
  ATerm q_0 (ATerm t)
  {
    ATerm h_4 = NULL;
    if(match_cons(t, sym__2))
      {
        h_4 = ATgetArgument(t, 0);
        g_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(h_4);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm x_18 = ATgetArgument(t, 0);
        if(((ATgetType(x_18) != AT_INT) || (ATgetInt((ATermInt) x_18) != 0)))
          _fail(t);
        {
          ATerm e_19 = ATgetArgument(t, 1);
        }
        {
          ATerm f_19 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = g_4;
    return(t);
  }
  t = fork_2_0(j_64, q_0, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL;
  if(match_cons(t, sym__2))
    {
      i_4 = ATgetArgument(t, 0);
      j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_0 (ATerm t)
    {
      t = SSL_execvp(i_4, j_4);
      return(t);
    }
    t = fork_and_wait_1_0(s_0, t);
  }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm l_4 = NULL,o_4 = NULL;
  l_4 = t;
  t = t_83(t);
  t = xtc_find_warning_0_0(t);
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_4, l_4);
  t = call_0_0(t);
  t = l_4;
  return(t);
}
ATerm assert_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      q_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_80(t);
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_4, p_4, q_4);
  t = table_push_0_0(t);
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(s_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_4 = ATgetFirst((ATermList) t);
        u_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(s_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(u_4), (ATerm) ATinsert(CheckATermList(t_4), p_4)));
    t = (ATerm) ATmakeAppl(sym__2, p_4, q_4);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm n_65 (ATerm), ATerm t)
{
  ATerm v_4 = NULL;
  v_4 = t;
  t = n_65(t);
  {
    ATerm t_0 (ATerm t)
    {
      t = term_i_19;
      return(t);
    }
    t = debug_1_0(t_0, t);
    t = v_4;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm i_6 (ATerm a_5, ATerm t)
  {
    t = a_5;
    {
      ATerm k_19 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm l_19 = ATgetArgument(t, 0);
              ATerm m_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_19;
        }
      {
        ATerm u_0 (ATerm t)
        {
          t = term_q_19;
          return(t);
        }
        t = obsolete_1_0(u_0, t);
        t = (ATerm) ATmakeAppl(sym__2, a_5, term_y_8);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm k_6 (ATerm c_5, ATerm d_5, ATerm g_5, ATerm t)
  {
    t = SSL_open_file(c_5, d_5);
    return(t);
  }
  ATerm q_5 = NULL,a_6 = NULL,c_6 = NULL;
  q_5 = t;
  if(match_cons(t, sym__2))
    {
      a_6 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_6(q_5, t);
            ;
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            t = k_6(a_6, c_6, q_5, t);
          }
      }
    }
  else
    {
      t = i_6(q_5, t);
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
  ATerm o_6 = NULL;
  t = term_v_19;
  t = new_0_0(t);
  o_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_6, term_w_19);
  t = conc_strings_0_0(t);
  {
    ATerm v_0 (ATerm t)
    {
      ATerm e_1 = NULL;
      e_1 = t;
      t = SSL_access(e_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(v_0, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm q_6 = NULL;
  t = new_file_0_0(t);
  q_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_6, term_y_8);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, q_6, term_v_19);
  {
    ATerm w_0 (ATerm t)
    {
      t = term_z_19;
      return(t);
    }
    t = assert_1_0(w_0, t);
    t = q_6;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL;
  l_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_1 = NULL,l_1 = NULL;
      t = l_7;
      t = xtc_new_file_0_0(t);
      i_1 = t;
      t = m_0(t);
      l_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_1, (ATerm) ATinsert(ATinsert(ATempty, i_1), term_a_20));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(i_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_1);
    }
  else
    {
      ATerm u_1 = NULL,v_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_7;
      t = xtc_new_file_0_0(t);
      u_1 = t;
      t = m_0(t);
      v_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_1), term_a_20), m_7), term_b_20));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(u_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_1);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm e_62 (ATerm), ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
  s_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_7);
  p_7 = t;
  t = q_7;
  t = e_62(t);
  r_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, r_7), p_7);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm t)
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(j_20);
        }
      else
        {
          t = e_20;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(d_20);
      t = xtc_transform_file_2_0(v_83, w_83, t);
    }
  else
    {
      t = c_20;
      t = xtc_transform_term_2_0(v_83, w_83, t);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm w_7 = NULL,x_7 = NULL;
    w_7 = t;
    t = term_p_6;
    t = get_config_0_0(t);
    x_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_7, term_z_9);
    t = geq_0_0(t);
    t = w_7;
    t = d_81(t);
    return(t);
  }
  t = try_1_0(x_0, t);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  {
    ATerm y_0 (ATerm t)
    {
      t = (ATerm) ATinsert(ATempty, term_k_20);
      return(t);
    }
    t = if_verbose3_1_0(y_0, t);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_7 = NULL;
  y_7 = t;
  t = SSL_table_keys(y_7);
  {
    ATerm b_1 (ATerm t)
    {
      ATerm z_7 = NULL,a_8 = NULL;
      z_7 = t;
      t = SSL_table_get(y_7, z_7);
      a_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_7, a_8);
      return(t);
    }
    t = map_1_0(b_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm b_8 = NULL,c_8 = NULL;
    b_8 = t;
    t = term_p_6;
    t = get_config_0_0(t);
    c_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_8, term_w_16);
    t = geq_0_0(t);
    t = b_8;
    t = f_81(t);
    return(t);
  }
  t = try_1_0(f_1, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
  if(match_cons(t, sym__2))
    {
      g_8 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, g_8));
  {
    ATerm j_1 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((h_8 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          i_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(j_1, t);
    t = not_null(i_8);
  }
  return(t);
}
ATerm filter_1_0 (ATerm g_77 (ATerm), ATerm t)
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
      {
        ATerm o_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              t = filter_1_0(g_77, t);
              return(t);
            }
            t = Cons_2_0(g_77, n_1, t);
            ;
            LocalPopChoice(s_20);
          }
        else
          {
            t = o_20;
            {
              ATerm m_8 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_20 = ATgetFirst((ATermList) t);
                  m_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = m_8;
              t = filter_1_0(g_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm a_79 (ATerm), ATerm t)
{
  ATerm o_8 (ATerm t)
  {
    ATerm r_1 (ATerm t)
    {
      t = a_79(t);
      t = o_8(t);
      return(t);
    }
    t = try_1_0(r_1, t);
    return(t);
  }
  t = o_8(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm p_8 = NULL;
  p_8 = t;
  {
    ATerm s_1 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm v_20 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_20;
          }
      }
      return(t);
    }
    t = repeat_1_0(s_1, t);
    t = p_8;
  }
  return(t);
}
ATerm say_1_0 (ATerm k_65 (ATerm), ATerm t)
{
  ATerm r_8 = NULL,b_2 = NULL;
  r_8 = t;
  t = k_65(t);
  b_2 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, b_2));
  t = r_8;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm s_8 = NULL,t_8 = NULL;
    s_8 = t;
    t = term_p_6;
    t = get_config_0_0(t);
    t_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_8, term_u_12);
    t = geq_0_0(t);
    t = s_8;
    t = e_81(t);
    return(t);
  }
  t = try_1_0(x_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm g_81 (ATerm), ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm u_8 = NULL,z_8 = NULL;
    u_8 = t;
    t = term_p_6;
    t = get_config_0_0(t);
    z_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_8, term_j_10);
    t = geq_0_0(t);
    t = u_8;
    t = g_81(t);
    return(t);
  }
  t = try_1_0(c_2, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_9 = ATgetFirst((ATermList) t);
      i_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_73(t);
  {
    ATerm d_2 (ATerm t)
    {
      ATerm j_9 = NULL;
      j_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_9, j_9);
      t = u_73(t);
      return(t);
    }
    t = fetch_1_0(d_2, t);
    t = i_9;
  }
  return(t);
}
ATerm union_1_0 (ATerm q_73 (ATerm), ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL;
  if(match_cons(t, sym__2))
    {
      l_9 = ATgetArgument(t, 0);
      k_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9;
  {
    ATerm m_9 (ATerm t)
    {
      ATerm d_21 = t;
      int e_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = k_9;
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
                ATerm e_2 (ATerm t)
                {
                  t = k_9;
                  return(t);
                }
                t = HdMember_p__2_0(q_73, e_2, t);
                t = m_9(t);
                ;
                LocalPopChoice(g_21);
              }
            else
              {
                t = f_21;
                t = Cons_2_0(_id, m_9, t);
              }
          }
        }
      return(t);
    }
    t = m_9(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm q_9 = NULL;
    if(match_cons(t, sym__2))
      {
        q_9 = ATgetArgument(t, 0);
        if((q_9 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(f_2, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,a_10 = NULL,b_10 = NULL;
  if(match_cons(t, sym__3))
    {
      u_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
      w_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_9, v_9);
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_21 = ATgetArgument(t, 0);
            ATerm k_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_9, v_9);
        ;
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        t = (ATerm) ATempty;
      }
    a_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_10, w_9);
    t = union_0_0(t);
    b_10 = t;
    t = SSL_table_put(u_9, v_9, b_10);
    t = (ATerm) ATmakeAppl(sym__3, u_9, v_9, w_9);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm p_81 (ATerm), ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm f_10 = NULL,g_10 = NULL;
      if(match_cons(t, sym__2))
        {
          f_10 = ATgetArgument(t, 0);
          g_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, e_10, f_10, g_10);
      t = p_81(t);
      return(t);
    }
    t = map_1_0(g_2, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_10 (ATerm p_10, ATerm t)
  {
    t = SSL_fclose(p_10);
    return(t);
  }
  ATerm s_10 = NULL,t_10 = NULL;
  t_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_10 = ATgetArgument(t, 0);
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_10);
            ;
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            t = v_10(t_10, t);
          }
      }
    }
  else
    {
      t = v_10(t_10, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_10 = NULL;
  t = SSL_stdin_stream();
  w_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_10 = NULL;
  t = SSL_stdout_stream();
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_10 = NULL;
  t = SSL_stderr_stream();
  y_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_10);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm a_11 = NULL;
  a_11 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_11;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_11;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_11;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_21 = ATgetArgument(t, 0);
      ATerm q_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL,e_3 = NULL;
        c_3 = t;
        t = SSL_explode_term(c_3);
        if(match_cons(t, sym__2))
          {
            ATerm v_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_21 = ATgetArgument(t, 1);
              if(((ATgetType(w_21) == AT_LIST) && !(ATisEmpty(w_21))))
                {
                  e_3 = ATgetFirst((ATermList) w_21);
                  {
                    ATerm x_21 = (ATerm) ATgetNext((ATermList) w_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_3;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        {
          ATerm b_22 = t;
          int c_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
              ATerm h_2 (ATerm t)
              {
                ATerm g_11 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    g_11 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = g_11;
                return(t);
              }
              t = _2_0(h_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  d_11 = ATgetArgument(t, 0);
                  e_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(d_11, e_11);
              f_11 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, f_11);
              ;
              LocalPopChoice(c_22);
            }
          else
            {
              t = b_22;
              {
                ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
                ATerm i_2 (ATerm t)
                {
                  ATerm k_11 = NULL;
                  k_11 = t;
                  t = SSL_is_string(k_11);
                  return(t);
                }
                t = _2_0(i_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    h_11 = ATgetArgument(t, 0);
                    i_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(h_11, i_11);
                j_11 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, j_11);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_11 = NULL;
      o_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_11, term_g_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm j_2 (ATerm t)
        {
          t = term_h_22;
          return(t);
        }
        t = debug_1_0(j_2, t);
        _fail(t);
      }
    }
  l_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(n_11);
  m_11 = t;
  t = l_11;
  t = fclose_0_0(t);
  t = m_11;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_3 = NULL;
      l_3 = t;
      t = SSL_access(l_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(j_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = i_22;
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_22 = t;
            if((PushChoice() == 0))
              {
                ATerm u_3 = NULL;
                u_3 = t;
                t = SSL_access(u_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_22;
              }
            {
              ATerm k_2 (ATerm t)
              {
                t = term_n_22;
                return(t);
              }
              t = debug_1_0(k_2, t);
            }
            ;
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            {
              ATerm l_2 (ATerm t)
              {
                t = term_o_22;
                return(t);
              }
              t = debug_1_0(l_2, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
  r_11 = t;
  {
    ATerm m_2 (ATerm t)
    {
      ATerm n_2 (ATerm t)
      {
        t = term_p_22;
        return(t);
      }
      t = debug_1_0(n_2, t);
      return(t);
    }
    t = if_verbose5_1_0(m_2, t);
    {
      ATerm q_22 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, r_11));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_22;
        }
      s_11 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, r_11));
      t = s_11;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm p_2 (ATerm t)
          {
            t = term_r_22;
            return(t);
          }
          t = debug_1_0(p_2, t);
          return(t);
        }
        t = if_verbose4_1_0(o_2, t);
        t = read_repository_file_0_0(t);
        {
          ATerm q_2 (ATerm t)
          {
            ATerm r_2 (ATerm t)
            {
              t = term_s_22;
              return(t);
            }
            t = say_1_0(r_2, t);
            return(t);
          }
          t = if_verbose6_1_0(q_2, t);
          t_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_22, t_11);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm s_2 (ATerm t)
            {
              ATerm t_2 (ATerm t)
              {
                t = term_u_22;
                return(t);
              }
              t = say_1_0(t_2, t);
              return(t);
            }
            t = if_verbose6_1_0(s_2, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, r_11), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_t_22, (ATerm)ATmakeAppl(sym_Imported_1, r_11), (ATerm) ATempty);
            {
              ATerm u_2 (ATerm t)
              {
                ATerm v_2 (ATerm t)
                {
                  t = term_s_22;
                  return(t);
                }
                t = say_1_0(v_2, t);
                return(t);
              }
              t = if_verbose4_1_0(u_2, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_11 = NULL;
  ATerm w_2 (ATerm t)
  {
    ATerm x_2 (ATerm t)
    {
      t = term_a_23;
      return(t);
    }
    t = debug_1_0(x_2, t);
    return(t);
  }
  t = if_verbose5_1_0(w_2, t);
  v_11 = t;
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = v_11;
    {
      ATerm y_2 (ATerm t)
      {
        ATerm z_2 (ATerm t)
        {
          t = term_d_23;
          return(t);
        }
        t = debug_1_0(z_2, t);
        return(t);
      }
      t = if_verbose5_1_0(y_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_3 (ATerm t)
      {
        ATerm b_3 (ATerm t)
        {
          t = term_g_23;
          return(t);
        }
        t = debug_1_0(b_3, t);
        return(t);
      }
      t = if_verbose5_1_0(a_3, t);
      t = xtc_load_0_0(t);
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            {
              ATerm z_3 = NULL,b_4 = NULL;
              z_3 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, z_3));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm j_23 = ATgetFirst((ATermList) t);
                  if(match_cons(j_23, sym__2))
                    {
                      ATerm l_23 = ATgetArgument(j_23, 0);
                      b_4 = ATgetArgument(j_23, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm k_23 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = b_4;
            }
          }
        {
          ATerm d_3 (ATerm t)
          {
            ATerm f_3 (ATerm t)
            {
              t = term_g_23;
              return(t);
            }
            t = debug_1_0(f_3, t);
            return(t);
          }
          t = if_verbose5_1_0(d_3, t);
        }
      }
      ;
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      {
        ATerm w_11 = NULL;
        w_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), w_11), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_23), w_11), term_m_23);
        {
          ATerm g_3 (ATerm t)
          {
            t = term_t_22;
            t = table_getlist_0_0(t);
            {
              ATerm h_3 (ATerm t)
              {
                t = term_o_23;
                return(t);
              }
              t = debug_1_0(h_3, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(g_3, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    t = term_p_23;
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    ATerm z_11 = NULL,a_12 = NULL;
    t = term_v_19;
    t = m_84(t);
    t = xtc_find_0_0(t);
    z_11 = t;
    t = term_v_19;
    t = pass_v_verbose_0_0(t);
    a_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(a_12), z_11), term_r_23), term_q_23);
    return(t);
  }
  t = xtc_transform_2_0(i_3, o_3, t);
  return(t);
}
ATerm xtc_parse_sdf_0_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    t = term_s_23;
    return(t);
  }
  t = xtc_sglr_1_0(p_3, t);
  t = xtc_implode_asfix_0_0(t);
  return(t);
}
ATerm xtc_implode_asfix_0_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    t = term_t_23;
    return(t);
  }
  t = xtc_transform_2_0(r_3, pass_verbose_0_0, t);
  return(t);
}
ATerm pre_process_sdf_0_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  if(match_cons(t, sym__2))
    {
      e_12 = ATgetArgument(t, 0);
      f_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_12;
  if(match_cons(t, sym_AST_0))
    {
      t = f_12;
    }
  else
    {
      if(match_cons(t, sym_ParseTree_0))
        {
          t = f_12;
          t = xtc_implode_asfix_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_PlainText_0)))
            _fail(t);
          t = f_12;
          t = xtc_parse_sdf_0_0(t);
        }
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      t = term_x_23;
    }
  return(t);
}
ATerm ppgen_0_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL;
  j_12 = t;
  t = get_input_type_0_0(t);
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_12, j_12);
  t = pre_process_sdf_0_0(t);
  {
    ATerm v_3 (ATerm t)
    {
      t = term_y_23;
      return(t);
    }
    t = xtc_transform_2_0(v_3, pass_verbose_0_0, t);
    {
      ATerm w_3 (ATerm t)
      {
        t = term_z_23;
        return(t);
      }
      t = xtc_transform_2_0(w_3, pass_verbose_0_0, t);
    }
  }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL;
  x_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_4 = NULL;
        t = x_12;
        t = k_0(t);
        r_4 = t;
        {
          ATerm c_24 = t;
          int d_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(d_24);
            }
          else
            {
              t = c_24;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(y_12, r_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, y_12);
        }
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        {
          ATerm e_24 = t;
          int f_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_4 = NULL;
              t = x_12;
              t = k_0(t);
              z_4 = t;
              {
                ATerm g_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm h_24 = t;
                    int i_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
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
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(k_24);
                            }
                          else
                            {
                              t = j_24;
                              {
                                ATerm e_5 = NULL;
                                e_5 = t;
                                if((y_12 != t))
                                  {
                                    _fail(t);
                                  }
                                t = e_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_24;
                  }
                t = SSL_copy(y_12, z_4);
                t = (ATerm) ATmakeAppl(sym_FILE_1, y_12);
              }
              ;
              LocalPopChoice(f_24);
            }
          else
            {
              t = e_24;
              t = x_12;
              t = k_0(t);
              if((y_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_12);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,h_13 = NULL;
  if(match_cons(t, sym__2))
    {
      e_13 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_24 = ATgetArgument(t, 0);
            ATerm o_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_13, f_13);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_24 = ATgetFirst((ATermList) t);
            i_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_5;
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        t = (ATerm) ATempty;
      }
    h_13 = t;
    t = SSL_table_put(e_13, f_13, h_13);
    t = (ATerm) ATmakeAppl(sym__2, e_13, f_13);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
  n_13 = t;
  t = b_80(t);
  o_13 = t;
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(o_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_13 = ATgetFirst((ATermList) t);
        p_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(o_13, (ATerm)ATmakeAppl(sym_Scopes_0), p_13);
    t = q_13;
    {
      ATerm c_4 (ATerm t)
      {
        ATerm r_13 = NULL;
        r_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_13, r_13);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(c_4, t);
      t = n_13;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm t)
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_80(t);
      t = x_80(t);
      ;
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      t = x_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  u_13 = t;
  t = a_80(t);
  v_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_13, term_u_24);
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_24 = ATgetArgument(t, 0);
            ATerm y_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = (ATerm) ATempty;
      }
    w_13 = t;
    t = SSL_table_put(v_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(w_13), (ATerm) ATempty));
    t = u_13;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm f_83 (ATerm), ATerm t)
{
  ATerm b_14 = NULL;
  ATerm e_4 (ATerm t)
  {
    t = term_z_19;
    return(t);
  }
  t = begin_scope_1_0(e_4, t);
  {
    ATerm f_4 (ATerm t)
    {
      ATerm c_14 = NULL;
      c_14 = t;
      {
        ATerm z_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(a_25);
          }
        else
          {
            t = z_24;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_14 = ATgetFirst((ATermList) t);
            {
              ATerm b_25 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = b_14;
        {
          ATerm k_4 (ATerm t)
          {
            ATerm m_4 (ATerm t)
            {
              ATerm f_14 = NULL;
              f_14 = t;
              t = SSL_remove(f_14);
              return(t);
            }
            t = try_1_0(m_4, t);
            return(t);
          }
          t = map_1_0(k_4, t);
          t = c_14;
          {
            ATerm n_4 (ATerm t)
            {
              t = term_z_19;
              return(t);
            }
            t = end_scope_1_0(n_4, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(f_83, f_4, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm g_83 (ATerm), ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_14 = NULL;
        t = term_b_20;
        t = get_config_0_0(t);
        h_14 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_14);
        ;
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        t = term_e_25;
      }
    t = g_83(t);
    {
      ATerm x_4 (ATerm t)
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_a_20;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(g_25);
          }
        else
          {
            t = f_25;
            t = term_h_25;
          }
        return(t);
      }
      t = copy_to_1_0(x_4, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(w_4, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm j_14 = NULL;
    j_14 = t;
    if(match_string(t, "-k"))
      {
        t = j_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = j_14;
      }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    ATerm m_14 = NULL,n_14 = NULL;
    m_14 = t;
    t = SSL_string_to_int(m_14);
    n_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), n_14);
    t = m_14;
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    t = term_i_25;
    return(t);
  }
  t = ArgOption_3_0(y_4, b_5, f_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_5 (ATerm t)
      {
        ATerm p_14 = NULL;
        p_14 = t;
        if(match_string(t, "-S"))
          {
            t = p_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = p_14;
          }
        return(t);
      }
      ATerm j_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_m_25;
        return(t);
      }
      ATerm k_5 (ATerm t)
      {
        t = term_n_25;
        return(t);
      }
      t = Option_3_0(h_5, j_5, k_5, t);
      ;
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm m_5 (ATerm t)
            {
              ATerm q_14 = NULL,r_14 = NULL;
              q_14 = t;
              t = SSL_string_to_int(q_14);
              r_14 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_14);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, q_14);
              return(t);
            }
            ATerm n_5 (ATerm t)
            {
              t = term_q_25;
              return(t);
            }
            t = ArgOption_3_0(l_5, m_5, n_5, t);
            ;
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            {
              ATerm o_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm p_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_r_25;
                return(t);
              }
              ATerm r_5 (ATerm t)
              {
                t = term_s_25;
                return(t);
              }
              t = Option_3_0(o_5, p_5, r_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm t_14 = NULL;
    t_14 = t;
    if(match_string(t, "-o"))
      {
        t = t_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = t_14;
      }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    ATerm u_14 = NULL;
    u_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), u_14);
    t = (ATerm) ATmakeAppl(sym_Output_1, u_14);
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_v_25;
    return(t);
  }
  t = ArgOption_3_0(s_5, t_5, u_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      {
        ATerm v_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm w_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_y_25;
          return(t);
        }
        ATerm x_5 (ATerm t)
        {
          t = term_z_25;
          return(t);
        }
        t = Option_3_0(v_5, w_5, x_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
  x_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = x_14;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm f_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_14 = ATgetFirst((ATermList) t);
          z_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_15 = ATgetFirst((ATermList) t);
          b_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_14;
      t = h_0(t);
      t = a_15;
      t = i_0(t);
      f_15 = t;
      t = (ATerm) ATinsert(CheckATermList(b_15), f_15);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm h_15 = NULL;
    h_15 = t;
    if(match_string(t, "-i"))
      {
        t = h_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = h_15;
      }
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    ATerm i_15 = NULL;
    i_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), i_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, i_15);
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = term_a_26;
    return(t);
  }
  t = ArgOption_3_0(y_5, z_5, b_6, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm d_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(e_26);
          }
        else
          {
            t = d_26;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm ppgen_options_0_0 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-A", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm e_6 (ATerm t)
      {
        ATerm j_15 = NULL;
        j_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue)), (ATerm) ATmakeAppl(sym_ParseTree_0));
        t = j_15;
        return(t);
      }
      ATerm f_6 (ATerm t)
      {
        t = term_h_26;
        return(t);
      }
      t = Option_3_0(d_6, e_6, f_6, t);
      ;
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_6 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-a", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm h_6 (ATerm t)
            {
              ATerm k_15 = NULL;
              k_15 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue)), (ATerm) ATmakeAppl(sym_AST_0));
              t = k_15;
              return(t);
            }
            ATerm j_6 (ATerm t)
            {
              t = term_k_26;
              return(t);
            }
            t = Option_3_0(g_6, h_6, j_6, t);
            ;
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            t = io_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL;
  l_15 = t;
  t = term_v_19;
  t = whoami_0_0(t);
  m_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), m_15), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = l_15;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_19;
  t = whoami_0_0(t);
  n_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), n_15));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_76(t);
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      {
        ATerm q_15 = NULL,r_15 = NULL,x_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_15 = ATgetFirst((ATermList) t);
            r_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_15;
        t = foldr_2_0(d_76, e_76, t);
        x_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_15, x_15);
        t = e_76(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL;
  y_15 = t;
  t = SSL_explode_term(y_15);
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_15;
  t = foldr_2_0(b_74, c_74, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_16 = NULL;
  t = times_0_0(t);
  {
    ATerm l_6 (ATerm t)
    {
      t = term_l_25;
      return(t);
    }
    ATerm m_6 (ATerm t)
    {
      ATerm b_16 = NULL,c_16 = NULL;
      if(match_cons(t, sym__2))
        {
          b_16 = ATgetArgument(t, 0);
          c_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm p_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(b_16, c_16);
            ;
            LocalPopChoice(q_26);
          }
        else
          {
            t = p_26;
            t = SSL_addr(b_16, c_16);
          }
      }
      return(t);
    }
    t = crush_2_0(l_6, m_6, t);
    a_16 = t;
    t = SSL_TicksToSeconds(a_16);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
  m_16 = t;
  if(match_cons(t, sym__2))
    {
      n_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_16;
        if((n_16 != t))
          {
            _fail(t);
          }
        t = m_16;
        ;
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        t = m_16;
        {
          ATerm t_26 = t;
          int u_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_16, o_16);
              ;
              LocalPopChoice(u_26);
            }
          else
            {
              t = t_26;
              t = SSL_gtr(n_16, o_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_16, o_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_81 (ATerm), ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    ATerm r_16 = NULL,s_16 = NULL;
    r_16 = t;
    t = term_p_6;
    t = get_config_0_0(t);
    s_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_16, term_v_8);
    t = geq_0_0(t);
    t = r_16;
    t = b_81(t);
    return(t);
  }
  t = try_1_0(n_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm u_16 = NULL,v_16 = NULL;
    t = run_time_0_0(t);
    u_16 = t;
    t = term_v_19;
    t = whoami_0_0(t);
    v_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), u_16), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), v_16));
    t = (ATerm) ATmakeAppl(sym__2, term_i_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_26), u_16), term_d_9), v_16));
    return(t);
  }
  t = if_verbose1_1_0(r_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm n_85 (ATerm), ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      {
        ATerm s_6 (ATerm t)
        {
          ATerm z_26 = t;
          int a_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(a_27);
            }
          else
            {
              t = z_26;
              {
                ATerm b_27 = t;
                int c_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(c_27);
                  }
                else
                  {
                    t = b_27;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(s_6, t);
      }
    }
  t = n_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_16 = ATgetFirst((ATermList) t);
      z_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_17 = NULL,e_17 = NULL;
        t = z_16;
        t = g_0(t);
        d_17 = t;
        t = y_16;
        t = f_0(t);
        e_17 = t;
        t = z_16;
        {
          ATerm t_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(d_17), e_17);
            return(t);
          }
          t = reverse_acc_2_0(f_0, t_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_19;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, u_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm l_62 (ATerm), ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  i_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_17);
  f_17 = t;
  t = g_17;
  t = l_62(t);
  h_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, h_17), f_17);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      {
        ATerm v_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(v_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_f_27;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm w_6 (ATerm t)
    {
      ATerm m_17 = NULL;
      m_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, m_17), term_g_27);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(w_6, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm m_62 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  s_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      q_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_17);
  p_17 = t;
  t = q_17;
  t = m_62(t);
  r_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, r_17), p_17);
  return(t);
}
ATerm fetch_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm w_17 (ATerm t)
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(x_69, _id, t);
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = Cons_2_0(_id, w_17, t);
      }
    return(t);
  }
  t = w_17(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm i_86 (ATerm), ATerm t)
{
  t = fetch_1_0(i_86, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL;
  y_17 = t;
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_27 = ATgetFirst((ATermList) t);
                ATerm m_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_17;
          }
        ;
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
        t = (ATerm) ATinsert(ATempty, y_17);
      }
    z_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), z_17);
    t = y_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      {
        ATerm f_18 = NULL,g_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_18 = ATgetFirst((ATermList) t);
            g_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_18;
        {
          ATerm x_6 (ATerm t)
          {
            t = g_18;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(x_6, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL;
  k_18 = t;
  t = SSL_explode_term(k_18);
  if(match_cons(t, sym__2))
    {
      ATerm p_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_18;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm d_70 (ATerm), ATerm t)
{
  ATerm m_18 (ATerm t)
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, m_18, t);
        ;
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_70(t);
      }
    return(t);
  }
  t = m_18(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL;
  if(match_cons(t, sym__2))
    {
      o_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_18;
  {
    ATerm y_6 (ATerm t)
    {
      t = n_18;
      return(t);
    }
    t = at_end_1_0(y_6, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm w_55 (ATerm), ATerm x_55 (ATerm), ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
  u_18 = t;
  if(match_cons(t, sym__2))
    {
      q_18 = ATgetArgument(t, 0);
      r_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_18);
  p_18 = t;
  t = q_18;
  t = w_55(t);
  s_18 = t;
  t = r_18;
  t = x_55(t);
  t_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, s_18, t_18), p_18);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm y_18 = NULL;
  ATerm z_6 (ATerm t)
  {
    ATerm z_18 = NULL;
    z_18 = t;
    t = SSL_explode_string(z_18);
    return(t);
  }
  ATerm a_7 (ATerm t)
  {
    ATerm a_19 = NULL;
    a_19 = t;
    t = SSL_explode_string(a_19);
    return(t);
  }
  t = _2_0(z_6, a_7, t);
  t = conc_0_0(t);
  y_18 = t;
  t = SSL_implode_string(y_18);
  return(t);
}
ATerm debug_1_0 (ATerm g_65 (ATerm), ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  b_19 = t;
  t = g_65(t);
  c_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_19), c_19));
  t = b_19;
  return(t);
}
ATerm map_1_0 (ATerm n_69 (ATerm), ATerm t)
{
  ATerm d_19 (ATerm t)
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        t = Cons_2_0(n_69, d_19, t);
      }
    return(t);
  }
  t = d_19(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_19 = NULL;
      j_19 = t;
      t = SSL_is_string(j_19);
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
            ATerm b_7 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(b_7, t);
            ;
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
            {
              ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
              n_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_19 = ATgetArgument(t, 0);
                  t = o_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_19 = ATgetArgument(t, 0);
                      t = o_19;
                      {
                        ATerm a_28 = t;
                        int b_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(b_28);
                          }
                        else
                          {
                            t = a_28;
                            {
                              ATerm c_7 (ATerm t)
                              {
                                t = term_c_28;
                                return(t);
                              }
                              t = debug_1_0(c_7, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm t_19 = NULL,u_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_19 = ATgetArgument(t, 0);
                          p_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_19;
                      t = eval_config_0_0(t);
                      t_19 = t;
                      t = p_19;
                      t = eval_config_0_0(t);
                      u_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_19, u_19);
                      t = conc_strings_0_0(t);
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
  ATerm x_19 = NULL;
  x_19 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_19);
  {
    ATerm d_7 (ATerm t)
    {
      ATerm y_19 = NULL;
      t = eval_config_0_0(t);
      y_19 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_19, y_19);
      t = y_19;
      return(t);
    }
    t = try_1_0(d_7, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm h_80 (ATerm), ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_80(t);
      ;
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_7 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm f_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_j_28;
        return(t);
      }
      ATerm g_7 (ATerm t)
      {
        t = term_k_28;
        return(t);
      }
      t = Option_3_0(e_7, f_7, g_7, t);
      ;
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      {
        ATerm h_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm i_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_l_28;
          return(t);
        }
        ATerm j_7 (ATerm t)
        {
          t = term_m_28;
          return(t);
        }
        t = Option_3_0(h_7, i_7, j_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
  if(match_cons(t, sym__3))
    {
      f_20 = ATgetArgument(t, 0);
      g_20 = ATgetArgument(t, 1);
      h_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_20, g_20);
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_28 = ATgetArgument(t, 0);
            ATerm q_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(f_20, g_20);
        ;
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        t = (ATerm) ATempty;
      }
    i_20 = t;
    t = SSL_table_put(f_20, g_20, (ATerm) ATinsert(CheckATermList(i_20), h_20));
    t = (ATerm) ATmakeAppl(sym__3, f_20, g_20, h_20);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm n_87 (ATerm), ATerm t)
{
  ATerm n_20 = NULL;
  t = term_v_19;
  t = n_87(t);
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_28, term_s_28, n_20);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = p_20;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm u_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_20 = ATgetFirst((ATermList) t);
          r_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_20;
      t = a_0(t);
      t = term_v_19;
      t = b_0(t);
      u_20 = t;
      t = (ATerm) ATinsert(CheckATermList(r_20), u_20);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    ATerm w_20 = NULL;
    w_20 = t;
    if(match_string(t, "--help"))
      {
        t = w_20;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = w_20;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = w_20;
          }
      }
    return(t);
  }
  ATerm n_7 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_t_28;
    return(t);
  }
  ATerm o_7 (ATerm t)
  {
    t = term_u_28;
    return(t);
  }
  t = Option_3_0(k_7, n_7, o_7, t);
  return(t);
}
ATerm Cons_2_0 (ATerm f_57 (ATerm), ATerm g_57 (ATerm), ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
  c_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_20 = ATgetFirst((ATermList) t);
      z_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_21);
  x_20 = t;
  t = y_20;
  t = f_57(t);
  a_21 = t;
  t = z_20;
  t = g_57(t);
  b_21 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(b_21), a_21), x_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_87 (ATerm), ATerm t)
{
  ATerm o_21 = NULL;
  o_21 = t;
  {
    ATerm t_7 (ATerm t)
    {
      t = term_v_28;
      t = l_87(t);
      return(t);
    }
    t = try_1_0(t_7, t);
    t = o_21;
    {
      ATerm u_7 (ATerm t)
      {
        ATerm p_21 = NULL;
        p_21 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_21);
        t = (ATerm) ATmakeAppl(sym_Program_1, p_21);
        return(t);
      }
      ATerm v_7 (ATerm t)
      {
        ATerm w_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_28 = t;
            int z_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(z_28);
              }
            else
              {
                t = y_28;
                t = l_87(t);
                t = Cons_2_0(_id, v_7, t);
              }
            ;
            LocalPopChoice(x_28);
          }
        else
          {
            t = w_28;
            {
              ATerm r_21 = NULL,s_21 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_21 = ATgetFirst((ATermList) t);
                  s_21 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(s_21), (ATerm) ATmakeAppl(sym_Undefined_1, r_21));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_7, v_7, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
  y_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = y_21;
  {
    ATerm d_8 (ATerm t)
    {
      ATerm a_29 = t;
      int b_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_87(t);
          ;
          LocalPopChoice(b_29);
        }
      else
        {
          t = a_29;
          {
            ATerm c_29 = t;
            int d_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(d_29);
              }
            else
              {
                t = c_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_8, t);
    {
      ATerm e_8 (ATerm t)
      {
        ATerm e_29 = t;
        int f_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_22 = NULL;
            f_22 = t;
            {
              ATerm g_29 = t;
              int h_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_22;
                  {
                    ATerm i_29 = t;
                    int j_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_y_26;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(j_29);
                      }
                    else
                      {
                        t = i_29;
                        {
                          ATerm f_8 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(f_8, t);
                        }
                      }
                    t = f_22;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(h_29);
                }
              else
                {
                  t = g_29;
                  t = term_i_28;
                  t = get_config_0_0(t);
                  t = f_22;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(f_29);
          }
        else
          {
            t = e_29;
            {
              ATerm j_8 (ATerm t)
              {
                ATerm k_8 (ATerm t)
                {
                  z_21 = t;
                  return(t);
                }
                t = Undefined_1_0(k_8, t);
                return(t);
              }
              t = option_defined_1_0(j_8, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_21)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_i_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_21)), term_k_29));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(e_8, t);
      a_22 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = a_22;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm t)
{
  ATerm k_14 = NULL;
  t = parse_options_1_0(p_85, t);
  k_14 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), k_14);
  t = k_14;
  t = r_85(t);
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_85, t);
        ;
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
        {
          ATerm n_29 = t;
          int o_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_29);
            }
          else
            {
              t = n_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm t)
{
  t = option_wrap_4_0(t_85, default_usage_0_0, _id, u_85, t);
  return(t);
}
ATerm io_ppgen_0_0 (ATerm t)
{
  ATerm l_8 (ATerm t)
  {
    t = xtc_io_1_0(ppgen_0_0, t);
    return(t);
  }
  t = option_wrap_2_0(ppgen_options_0_0, l_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_ppgen_0_0(t);
  return(t);
}
