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
Symbol sym_Module_0;
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
  sym_Module_0 = ATmakeSymbol("Module", 0, ATfalse);
  ATprotectSymbol(sym_Module_0);
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
ATerm term_u_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_x_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_a_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_b_30;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_b_29;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_x_27;
ATerm term_j_27;
ATerm term_m_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_u_25;
ATerm term_g_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_t_22;
ATerm term_c_22;
ATerm term_m_19;
ATerm term_i_19;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_v_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_h_15;
ATerm term_d_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_i_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
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
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_g_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_l_10;
ATerm term_c_10;
ATerm term_t_9;
ATerm term_o_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_v_8;
void init_constant_terms (void)
{
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_10, term_c_10, term_y_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_c_11, term_d_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_g_11, term_h_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_k_11, term_l_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_11, term_q_11, term_v_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_12, term_b_12, term_g_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_o_12, term_p_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_t_12, term_u_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_x_12, term_y_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_b_13, term_c_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_f_13, term_g_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_p_13, term_q_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_u_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_o_14, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_v_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_z_14, term_d_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_q_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_f_16, term_g_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_j_16, term_o_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_r_16, term_s_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_b_17, term_c_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_p_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_t_17, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_y_17, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_d_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_j_18, term_k_18);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sc", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_Module_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_28);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast          Input is Stratego AST.", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--mod          Input is Stratego module (.str, .cr, .r or .rtree) (default).", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__3, term_b_29, term_t_31, term_t_24);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("astratego2tg", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("tg2fc", 0, ATtrue));
}
ATerm pp_astratego_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm w_65 (ATerm), ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm c_70 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm l_64 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm i_81 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm h_81 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm j_81 (ATerm), ATerm);
ATerm union_1_0 (ATerm t_73 (ATerm), ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm s_81 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm j_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm d_79 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm assert_1_0 (ATerm h_80 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm f_62 (ATerm), ATerm);
ATerm pass_includes_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm str2astratego_0_0 (ATerm);
ATerm get_input_type_0_0 (ATerm);
ATerm pre_process_input_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm e_80 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm z_80 (ATerm), ATerm a_81 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm d_80 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm i_83 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm j_83 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm include_option_0_0 (ATerm);
ATerm input_type_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_81 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm k_85 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm m_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm n_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm a_70 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm g_70 (ATerm), ATerm);
ATerm _2_0 (ATerm x_55 (ATerm), ATerm y_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm p_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm g_57 (ATerm), ATerm h_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm i_87 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm h_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pp_astratego_0_0 (ATerm t)
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(u_8);
        }
      else
        {
          t = m_8;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(l_8);
      {
        ATerm b_0 (ATerm t)
        {
          t = term_v_8;
          return(t);
        }
        t = xtc_transform_file_2_0(b_0, pass_verbose_0_0, t);
      }
    }
  else
    {
      t = k_8;
      {
        ATerm q_0 (ATerm t)
        {
          t = term_v_8;
          return(t);
        }
        t = xtc_transform_term_2_0(q_0, pass_verbose_0_0, t);
      }
    }
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_8 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(b_9);
          }
        else
          {
            t = z_8;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(y_8);
        {
          ATerm s_0 (ATerm t)
          {
            t = term_f_9;
            return(t);
          }
          ATerm u_0 (ATerm t)
          {
            ATerm f_0 = NULL;
            t = term_g_9;
            t = xtc_find_0_0(t);
            f_0 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_h_9);
            return(t);
          }
          t = xtc_transform_file_2_0(s_0, u_0, t);
        }
      }
    else
      {
        t = x_8;
        {
          ATerm v_0 (ATerm t)
          {
            t = term_f_9;
            return(t);
          }
          ATerm w_0 (ATerm t)
          {
            ATerm n_0 = NULL;
            t = term_g_9;
            t = xtc_find_0_0(t);
            n_0 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, n_0), term_h_9);
            return(t);
          }
          t = xtc_transform_term_2_0(v_0, w_0, t);
        }
      }
    {
      ATerm j_9 = t;
      int k_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_9 = t;
          int m_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(m_9);
            }
          else
            {
              t = l_9;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(k_9);
          {
            ATerm x_0 (ATerm t)
            {
              t = term_o_9;
              return(t);
            }
            ATerm y_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = xtc_transform_file_2_0(x_0, y_0, t);
          }
        }
      else
        {
          t = j_9;
          {
            ATerm z_0 (ATerm t)
            {
              t = term_o_9;
              return(t);
            }
            ATerm a_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = xtc_transform_term_2_0(z_0, a_1, t);
          }
        }
    }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,r_0 = NULL;
  t = term_t_9;
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
        {
          ATerm x_9 = t;
          int b_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_0 = NULL;
              t = eval_config_0_0(t);
              t_0 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_0);
              t = t_0;
              ;
              LocalPopChoice(b_10);
            }
          else
            {
              t = x_9;
            }
        }
        ;
        LocalPopChoice(v_9);
      }
    else
      {
        t = u_9;
        t = term_c_10;
      }
    o_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_0, term_c_10);
    {
      ATerm i_10 = t;
      int k_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(o_0, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(k_10);
        }
      else
        {
          t = i_10;
          t = SSL_subtr(o_0, (ATerm) ATmakeInt(1));
        }
      r_0 = t;
      t = SSL_int_to_string(r_0);
      p_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, p_0), term_t_9);
    }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  d_1 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = d_1;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          e_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(e_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm w_65 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL;
  if(match_cons(t, sym__2))
    {
      n_1 = ATgetArgument(t, 0);
      o_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_1, term_l_10);
  t = open_stream_0_0(t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_1, o_1);
  t = w_65(t);
  t = fclose_0_0(t);
  t = o_1;
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm q_1 = NULL,v_1 = NULL;
  q_1 = t;
  t = xtc_new_file_0_0(t);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_1, q_1);
  {
    ATerm b_1 (ATerm t)
    {
      ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm n_10 = ATgetArgument(t, 0);
          if(match_cons(n_10, sym_Stream_1))
            {
              e_2 = ATgetArgument(n_10, 0);
            }
          else
            _fail(t);
          f_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_write_term_to_stream_baf(e_2, f_2);
      g_2 = t;
      t = (ATerm) ATmakeAppl(sym_Stream_1, g_2);
      return(t);
    }
    t = WriteToFile_1_0(b_1, t);
    t = SSL_close_file(v_1);
    t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(f_84, g_84, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm j_2 = NULL;
  ATerm c_1 (ATerm t)
  {
    ATerm k_2 = NULL;
    k_2 = t;
    t = SSL_explode_string(k_2);
    return(t);
  }
  t = map_1_0(c_1, t);
  t = concat_0_0(t);
  j_2 = t;
  t = SSL_implode_string(j_2);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm h_3 = NULL,k_3 = NULL,m_3 = NULL,o_3 = NULL;
  h_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      k_3 = ATgetArgument(t, 0);
      {
        ATerm f_1 = NULL;
        t = SSL_int_to_string(k_3);
        f_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_10), f_1), term_o_10);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm s_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          k_3 = ATgetArgument(t, 0);
          m_3 = ATgetArgument(t, 1);
          o_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(m_3);
      s_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_3), term_s_10), s_1), term_r_10), k_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm c_70 (ATerm), ATerm t)
{
  ATerm s_3 = NULL;
  ATerm g_1 (ATerm t)
  {
    t = c_70(t);
    if(((s_3 != NULL) && (s_3 != t)))
      _fail(t);
    else
      s_3 = t;
    return(t);
  }
  t = fetch_1_0(g_1, t);
  t = not_null(s_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm t_3 = NULL;
  t_3 = t;
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_18), term_e_18), term_a_18), term_w_17), term_q_17), term_d_17), term_t_16), term_p_16), term_h_16), term_r_15), term_h_15), term_w_14), term_q_14), term_c_14), term_y_13), term_r_13), term_l_13), term_h_13), term_d_13), term_z_12), term_v_12), term_q_12), term_l_12), term_w_11), term_m_11), term_i_11), term_e_11), term_z_10);
        {
          ATerm h_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm o_18 = ATgetArgument(t, 0);
                if((t_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm r_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(h_1, t);
        }
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, t_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm y_3 = NULL;
  y_3 = t;
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_4 = NULL,w_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_18 = ATgetArgument(t, 0);
            g_4 = ATgetArgument(t, 1);
            {
              ATerm d_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = g_4;
        {
          ATerm e_19 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = e_19;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          w_1 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, w_1), term_m_19));
        }
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
      }
    t = y_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm l_64 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL;
  p_4 = t;
  t = fork_0_0(t);
  q_4 = t;
  {
    ATerm o_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = p_4;
        t = l_64(t);
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = o_19;
        t = SSL_waitpid(q_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_19 = ATgetArgument(t, 0);
            if(((ATgetType(s_19) != AT_INT) || (ATgetInt((ATermInt) s_19) != 0)))
              _fail(t);
            {
              ATerm t_19 = ATgetArgument(t, 1);
            }
            {
              ATerm u_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = p_4;
      }
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm i_81 (ATerm), ATerm t)
{
  ATerm x_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_4 = NULL,b_5 = NULL;
      z_4 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm a_20 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_2 = NULL;
            t = eval_config_0_0(t);
            a_2 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_2);
            t = a_2;
            ;
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
          }
        b_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_5, term_t_17);
        t = geq_0_0(t);
        t = z_4;
        t = i_81(t);
      }
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = x_19;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  ATerm c_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_5 = NULL,o_5 = NULL;
      k_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm f_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_2 = NULL;
            t = eval_config_0_0(t);
            h_2 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_2);
            t = h_2;
            ;
            LocalPopChoice(g_20);
          }
        else
          {
            t = f_20;
          }
        o_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_5, term_j_13);
        t = geq_0_0(t);
        t = k_5;
        t = h_81(t);
      }
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = c_20;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_5 = NULL,y_5 = NULL;
      w_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 = NULL;
            t = eval_config_0_0(t);
            n_2 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_2);
            t = n_2;
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
          }
        y_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_5, term_k_11);
        t = geq_0_0(t);
        t = w_5;
        t = j_81(t);
      }
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
    }
  return(t);
}
ATerm union_1_0 (ATerm t_73 (ATerm), ATerm t)
{
  ATerm c_6 = NULL,d_6 = NULL;
  if(match_cons(t, sym__2))
    {
      d_6 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6;
  {
    ATerm e_6 (ATerm t)
    {
      ATerm n_20 = t;
      int v_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = c_6;
          ;
          LocalPopChoice(v_20);
        }
      else
        {
          t = n_20;
          {
            ATerm w_20 = t;
            int x_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_2 = NULL,t_2 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    r_2 = ATgetFirst((ATermList) t);
                    t_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = c_6;
                {
                  ATerm i_1 (ATerm t)
                  {
                    ATerm u_2 = NULL;
                    u_2 = t;
                    t = (ATerm) ATmakeAppl(sym__2, r_2, u_2);
                    t = t_73(t);
                    return(t);
                  }
                  t = fetch_1_0(i_1, t);
                  t = t_2;
                  t = e_6(t);
                }
                ;
                LocalPopChoice(x_20);
              }
            else
              {
                t = w_20;
                t = Cons_2_0(_id, e_6, t);
              }
          }
        }
      return(t);
    }
    t = e_6(t);
  }
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL;
  if(match_cons(t, sym__3))
    {
      h_6 = ATgetArgument(t, 0);
      i_6 = ATgetArgument(t, 1);
      j_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_6, i_6);
  {
    ATerm b_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_21 = ATgetArgument(t, 0);
            ATerm g_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_6, i_6);
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = b_21;
        t = (ATerm) ATempty;
      }
    k_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_6, j_6);
    {
      ATerm j_1 (ATerm t)
      {
        ATerm p_6 = NULL;
        if(match_cons(t, sym__2))
          {
            p_6 = ATgetArgument(t, 0);
            if((p_6 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = union_1_0(j_1, t);
      l_6 = t;
      t = SSL_table_put(h_6, i_6, l_6);
      t = (ATerm) ATmakeAppl(sym__3, h_6, i_6, j_6);
    }
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm s_81 (ATerm), ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL;
  if(match_cons(t, sym__2))
    {
      u_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm v_6 = NULL,w_6 = NULL;
      if(match_cons(t, sym__2))
        {
          v_6 = ATgetArgument(t, 0);
          w_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, u_6, v_6, w_6);
      t = s_81(t);
      return(t);
    }
    t = map_1_0(k_1, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_7 (ATerm f_7, ATerm t)
  {
    t = SSL_fclose(f_7);
    return(t);
  }
  ATerm i_7 = NULL,j_7 = NULL;
  j_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_7 = ATgetArgument(t, 0);
      {
        ATerm h_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_7);
            ;
            LocalPopChoice(j_21);
          }
        else
          {
            t = h_21;
            t = l_7(j_7, t);
          }
      }
    }
  else
    {
      t = l_7(j_7, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_7 = NULL;
  t = SSL_stdin_stream();
  m_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_7);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_7 = NULL;
  t = SSL_stdout_stream();
  n_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_7);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_7 = NULL;
  t = SSL_stderr_stream();
  o_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_7);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_21 = ATgetArgument(t, 0);
      ATerm m_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_3 = NULL,u_3 = NULL;
        q_3 = t;
        t = SSL_explode_term(q_3);
        if(match_cons(t, sym__2))
          {
            ATerm q_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_21 = ATgetArgument(t, 1);
              if(((ATgetType(r_21) == AT_LIST) && !(ATisEmpty(r_21))))
                {
                  u_3 = ATgetFirst((ATermList) r_21);
                  {
                    ATerm v_21 = (ATerm) ATgetNext((ATermList) r_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = u_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = u_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = u_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(p_21);
      }
    else
      {
        t = n_21;
        {
          ATerm w_21 = t;
          int x_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
              ATerm l_1 (ATerm t)
              {
                ATerm z_7 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    z_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = z_7;
                return(t);
              }
              t = _2_0(l_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  t_7 = ATgetArgument(t, 0);
                  u_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(t_7, u_7);
              v_7 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, v_7);
              ;
              LocalPopChoice(x_21);
            }
          else
            {
              t = w_21;
              {
                ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
                ATerm m_1 (ATerm t)
                {
                  ATerm e_8 = NULL;
                  e_8 = t;
                  t = SSL_is_string(e_8);
                  return(t);
                }
                t = _2_0(m_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    a_8 = ATgetArgument(t, 0);
                    b_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(a_8, b_8);
                c_8 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, c_8);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_8 = NULL;
      j_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_8, term_c_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm v_3 = NULL;
        v_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = v_3;
        _fail(t);
      }
    }
  g_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_8);
  h_8 = t;
  t = g_8;
  t = fclose_0_0(t);
  t = h_8;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_8 = NULL;
      n_8 = t;
      t = SSL_access(n_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(k_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_22;
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 = NULL;
            ATerm p_22 = t;
            if((PushChoice() == 0))
              {
                ATerm o_8 = NULL;
                o_8 = t;
                t = SSL_access(o_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_22;
              }
            a_4 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_4), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = a_4;
            ;
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            {
              ATerm j_4 = NULL;
              j_4 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_4), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = j_4;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
  p_8 = t;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm n_4 = NULL;
      n_4 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_4), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
      t = n_4;
      return(t);
    }
    t = if_verbose5_1_0(r_1, t);
    {
      ATerm s_22 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, p_8));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_22;
        }
      q_8 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, p_8));
      t = q_8;
      {
        ATerm t_1 (ATerm t)
        {
          ATerm s_4 = NULL;
          s_4 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_4), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
          t = s_4;
          return(t);
        }
        t = if_verbose4_1_0(t_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm s_8 = NULL;
            s_8 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
            t = s_8;
            return(t);
          }
          t = if_verbose6_1_0(u_1, t);
          r_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_22, r_8);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm x_1 (ATerm t)
            {
              ATerm t_8 = NULL;
              t_8 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
              t = t_8;
              return(t);
            }
            t = if_verbose6_1_0(x_1, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, p_8), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_t_22, (ATerm)ATmakeAppl(sym_Imported_1, p_8), (ATerm) ATempty);
            {
              ATerm y_1 (ATerm t)
              {
                ATerm w_8 = NULL;
                w_8 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
                t = w_8;
                return(t);
              }
              t = if_verbose4_1_0(y_1, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm filter_1_0 (ATerm j_77 (ATerm), ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_1 (ATerm t)
            {
              t = filter_1_0(j_77, t);
              return(t);
            }
            t = Cons_2_0(j_77, z_1, t);
            ;
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            {
              ATerm a_9 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm d_23 = ATgetFirst((ATermList) t);
                  a_9 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = a_9;
              t = filter_1_0(j_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  ATerm c_9 (ATerm t)
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_79(t);
        t = c_9(t);
        ;
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
      }
    return(t);
  }
  t = c_9(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm g_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm j_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_5 = NULL;
            t = eval_config_0_0(t);
            l_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), l_5);
            t = l_5;
            ;
            LocalPopChoice(l_23);
          }
        else
          {
            t = j_23;
          }
      }
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = g_23;
      {
        ATerm o_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(q_23);
          }
        else
          {
            t = o_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm d_9 = NULL;
  ATerm b_2 (ATerm t)
  {
    ATerm m_5 = NULL;
    m_5 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_5), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
    t = m_5;
    return(t);
  }
  t = if_verbose5_1_0(b_2, t);
  d_9 = t;
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        {
          ATerm e_9 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          e_9 = t;
          {
            ATerm c_2 (ATerm t)
            {
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
              t = filter_1_0(xtc_read_0_0, t);
              {
                ATerm t_23 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_23;
                  }
              }
              return(t);
            }
            t = repeat_1_0(c_2, t);
            t = e_9;
          }
        }
      }
    t = d_9;
    {
      ATerm d_2 (ATerm t)
      {
        ATerm r_5 = NULL;
        r_5 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_5), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
        t = r_5;
        return(t);
      }
      t = if_verbose5_1_0(d_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm u_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm u_5 = NULL;
        u_5 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_5), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
        t = u_5;
        return(t);
      }
      t = if_verbose5_1_0(i_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm x_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
            if(match_cons(t, sym__2))
              {
                x_6 = ATgetArgument(t, 0);
                y_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, x_6));
            {
              ATerm l_2 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((y_6 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((z_6 != NULL) && (z_6 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      z_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(l_2, t);
              t = not_null(z_6);
            }
            ;
            LocalPopChoice(y_23);
          }
        else
          {
            t = x_23;
            {
              ATerm w_7 = NULL,x_7 = NULL;
              w_7 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, w_7));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm a_24 = ATgetFirst((ATermList) t);
                  if(match_cons(a_24, sym__2))
                    {
                      ATerm c_24 = ATgetArgument(a_24, 0);
                      x_7 = ATgetArgument(a_24, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm b_24 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = x_7;
            }
          }
        {
          ATerm m_2 (ATerm t)
          {
            ATerm y_7 = NULL;
            y_7 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_7), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
            t = y_7;
            return(t);
          }
          t = if_verbose5_1_0(m_2, t);
        }
      }
      ;
      LocalPopChoice(w_23);
    }
  else
    {
      t = u_23;
      {
        ATerm i_9 = NULL;
        i_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), i_9), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_24), i_9), term_e_24);
        {
          ATerm o_2 (ATerm t)
          {
            ATerm b_11 = NULL;
            t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
            {
              ATerm p_2 (ATerm t)
              {
                ATerm t_10 = NULL,u_10 = NULL;
                t_10 = t;
                t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), t_10);
                u_10 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_10, u_10);
                return(t);
              }
              t = map_1_0(p_2, t);
              b_11 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_11), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
              t = b_11;
            }
            return(t);
          }
          t = if_verbose5_1_0(o_2, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm assert_1_0 (ATerm h_80 (ATerm), ATerm t)
{
  ATerm n_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      n_9 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_80(t);
  q_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_9, n_9, p_9);
  t = table_push_0_0(t);
  {
    ATerm g_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(q_9, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = g_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_9 = ATgetFirst((ATermList) t);
        s_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(q_9, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(s_9), (ATerm) ATinsert(CheckATermList(r_9), n_9)));
    t = (ATerm) ATmakeAppl(sym__2, n_9, p_9);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm g_10 (ATerm w_9, ATerm t)
  {
    t = w_9;
    {
      ATerm j_24 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm k_24 = ATgetArgument(t, 0);
              ATerm o_24 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = j_24;
        }
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
      t = (ATerm) ATmakeAppl(sym__2, w_9, term_l_10);
      t = open_file_0_0(t);
    }
    return(t);
  }
  ATerm h_10 (ATerm y_9, ATerm z_9, ATerm a_10, ATerm t)
  {
    t = SSL_open_file(y_9, z_9);
    return(t);
  }
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
  d_10 = t;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
      {
        ATerm p_24 = t;
        int s_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_10(d_10, t);
            ;
            LocalPopChoice(s_24);
          }
        else
          {
            t = p_24;
            t = h_10(e_10, f_10, d_10, t);
          }
      }
    }
  else
    {
      t = g_10(d_10, t);
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
  ATerm j_10 = NULL;
  t = term_t_24;
  t = new_0_0(t);
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_10, term_u_24);
  t = conc_strings_0_0(t);
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_10 = NULL;
        m_10 = t;
        t = SSL_access(m_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
      }
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm p_10 = NULL;
  t = new_file_0_0(t);
  p_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_10, term_l_10);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, p_10, term_t_24);
  {
    ATerm q_2 (ATerm t)
    {
      t = term_x_24;
      return(t);
    }
    t = assert_1_0(q_2, t);
    t = p_10;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL;
  n_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm j_14 = NULL,k_14 = NULL,x_15 = NULL,a_16 = NULL;
      t = n_11;
      t = xtc_new_file_0_0(t);
      j_14 = t;
      t = m_0(t);
      k_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_14, (ATerm) ATinsert(ATinsert(ATempty, j_14), term_y_24));
      {
        ATerm z_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm c_25 = ATgetArgument(t, 0);
                ATerm d_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_14;
            {
              ATerm s_2 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, j_14), term_y_24);
                return(t);
              }
              t = at_end_1_0(s_2, t);
            }
            ;
            LocalPopChoice(a_25);
          }
        else
          {
            t = z_24;
            {
              ATerm u_15 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, k_14, (ATerm) ATinsert(ATinsert(ATempty, j_14), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm e_25 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_25) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  u_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_15;
              t = concat_0_0(t);
            }
          }
        x_15 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        a_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_16, x_15);
        {
          ATerm v_2 (ATerm t)
          {
            t = SSL_execvp(a_16, x_15);
            return(t);
          }
          t = fork_and_wait_1_0(v_2, t);
          t = SSL_close_file(j_14);
          t = (ATerm) ATmakeAppl(sym_FILE_1, j_14);
        }
      }
    }
  else
    {
      ATerm u_16 = NULL,f_17 = NULL,n_19 = NULL,p_19 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_11;
      t = xtc_new_file_0_0(t);
      u_16 = t;
      t = m_0(t);
      f_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_16), term_y_24), o_11), term_g_25));
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm k_25 = ATgetArgument(t, 0);
                ATerm l_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_17;
            {
              ATerm w_2 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_16), term_y_24), o_11), term_g_25);
                return(t);
              }
              t = at_end_1_0(w_2, t);
            }
            ;
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            {
              ATerm l_19 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, f_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_16), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), o_11), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm m_25 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) m_25) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  l_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_19;
              t = concat_0_0(t);
            }
          }
        n_19 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        p_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_19, n_19);
        {
          ATerm x_2 (ATerm t)
          {
            t = SSL_execvp(p_19, n_19);
            return(t);
          }
          t = fork_and_wait_1_0(x_2, t);
          t = SSL_close_file(u_16);
          t = (ATerm) ATmakeAppl(sym_FILE_1, u_16);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm f_62 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL;
  u_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_11);
  r_11 = t;
  t = s_11;
  t = f_62(t);
  t_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, t_11), r_11);
  return(t);
}
ATerm pass_includes_0_0 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
      {
        ATerm s_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_19 = NULL;
            t = eval_config_0_0(t);
            v_19 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), v_19);
            t = v_19;
            ;
            LocalPopChoice(t_25);
          }
        else
          {
            t = s_25;
          }
      }
      ;
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
  t = term_u_25;
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
        {
          ATerm x_25 = t;
          int y_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_20 = NULL;
              t = eval_config_0_0(t);
              d_20 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), d_20);
              t = d_20;
              ;
              LocalPopChoice(y_25);
            }
          else
            {
              t = x_25;
            }
        }
        ;
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        t = term_c_10;
      }
    x_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_11, term_c_10);
    {
      ATerm z_25 = t;
      int a_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(x_11, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(a_26);
        }
      else
        {
          t = z_25;
          t = SSL_subtr(x_11, (ATerm) ATmakeInt(1));
        }
      z_11 = t;
      t = SSL_int_to_string(z_11);
      y_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, y_11), term_u_25);
    }
  }
  return(t);
}
ATerm str2astratego_0_0 (ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_26 = t;
      int e_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(e_26);
        }
      else
        {
          t = d_26;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(c_26);
      {
        ATerm y_2 (ATerm t)
        {
          t = term_f_26;
          return(t);
        }
        ATerm z_2 (ATerm t)
        {
          ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
          t = term_t_24;
          t = pass_keep_0_0(t);
          c_12 = t;
          t = term_t_24;
          t = pass_verbose_0_0(t);
          d_12 = t;
          t = term_t_24;
          t = pass_includes_0_0(t);
          e_12 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_12), d_12), c_12);
          t = concat_0_0(t);
          f_12 = t;
          t = (ATerm) ATinsert(CheckATermList(f_12), term_g_26);
          return(t);
        }
        t = xtc_transform_file_2_0(y_2, z_2, t);
      }
    }
  else
    {
      t = b_26;
      {
        ATerm a_3 (ATerm t)
        {
          t = term_f_26;
          return(t);
        }
        ATerm b_3 (ATerm t)
        {
          ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
          t = term_t_24;
          t = pass_keep_0_0(t);
          h_12 = t;
          t = term_t_24;
          t = pass_verbose_0_0(t);
          i_12 = t;
          t = term_t_24;
          t = pass_includes_0_0(t);
          j_12 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_12), i_12), h_12);
          t = concat_0_0(t);
          k_12 = t;
          t = (ATerm) ATinsert(CheckATermList(k_12), term_g_26);
          return(t);
        }
        t = xtc_transform_term_2_0(a_3, b_3, t);
      }
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue)));
      {
        ATerm k_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_21 = NULL;
            t = eval_config_0_0(t);
            k_21 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue)), k_21);
            t = k_21;
            ;
            LocalPopChoice(l_26);
          }
        else
          {
            t = k_26;
          }
      }
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      t = term_m_26;
    }
  return(t);
}
ATerm pre_process_input_0_0 (ATerm t)
{
  ATerm n_12 = NULL,r_12 = NULL;
  n_12 = t;
  t = term_t_24;
  t = get_input_type_0_0(t);
  r_12 = t;
  if(match_cons(t, sym_AST_0))
    {
      t = n_12;
    }
  else
    {
      if(!(match_cons(t, sym_Module_0)))
        _fail(t);
      t = n_12;
      t = str2astratego_0_0(t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL;
  n_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_22 = NULL;
        t = n_13;
        t = k_0(t);
        w_22 = t;
        {
          ATerm p_26 = t;
          int q_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(q_26);
            }
          else
            {
              t = p_26;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(o_13, w_22);
          t = (ATerm) ATmakeAppl(sym_FILE_1, o_13);
        }
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        {
          ATerm r_26 = t;
          int s_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_23 = NULL;
              t = n_13;
              t = k_0(t);
              m_23 = t;
              {
                ATerm t_26 = t;
                if((PushChoice() == 0))
                  {
                    ATerm u_26 = t;
                    int v_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(v_26);
                      }
                    else
                      {
                        t = u_26;
                        {
                          ATerm w_26 = t;
                          int x_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(x_26);
                            }
                          else
                            {
                              t = w_26;
                              {
                                ATerm n_23 = NULL;
                                n_23 = t;
                                if((o_13 != t))
                                  {
                                    _fail(t);
                                  }
                                t = n_23;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_26;
                  }
                t = SSL_copy(o_13, m_23);
                t = (ATerm) ATmakeAppl(sym_FILE_1, o_13);
              }
              ;
              LocalPopChoice(s_26);
            }
          else
            {
              t = r_26;
              t = n_13;
              t = k_0(t);
              if((o_13 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_13);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
  if(match_cons(t, sym__2))
    {
      v_13 = ATgetArgument(t, 0);
      w_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_27 = ATgetArgument(t, 0);
            ATerm c_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_13, w_13);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_27 = ATgetFirst((ATermList) t);
            p_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_23;
        ;
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        t = (ATerm) ATempty;
      }
    x_13 = t;
    t = SSL_table_put(v_13, w_13, x_13);
    t = (ATerm) ATmakeAppl(sym__2, v_13, w_13);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  d_14 = t;
  t = e_80(t);
  e_14 = t;
  {
    ATerm f_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(e_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(g_27);
      }
    else
      {
        t = f_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_14 = ATgetFirst((ATermList) t);
        f_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(e_14, (ATerm)ATmakeAppl(sym_Scopes_0), f_14);
    t = g_14;
    {
      ATerm c_3 (ATerm t)
      {
        ATerm h_14 = NULL;
        h_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_14, h_14);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(c_3, t);
      t = d_14;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm z_80 (ATerm), ATerm a_81 (ATerm), ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_80(t);
      t = a_81(t);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      t = a_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_80 (ATerm), ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
  l_14 = t;
  t = d_80(t);
  m_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_14, term_j_27);
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_27 = ATgetArgument(t, 0);
            ATerm n_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        t = (ATerm) ATempty;
      }
    n_14 = t;
    t = SSL_table_put(m_14, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(n_14), (ATerm) ATempty));
    t = l_14;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm i_83 (ATerm), ATerm t)
{
  ATerm t_14 = NULL;
  ATerm d_3 (ATerm t)
  {
    t = term_x_24;
    return(t);
  }
  t = begin_scope_1_0(d_3, t);
  {
    ATerm e_3 (ATerm t)
    {
      ATerm u_14 = NULL;
      u_14 = t;
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
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
            if(((t_14 != NULL) && (t_14 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              t_14 = ATgetFirst((ATermList) t);
            {
              ATerm q_27 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(t_14);
        {
          ATerm f_3 (ATerm t)
          {
            ATerm r_27 = t;
            int s_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_14 = NULL;
                x_14 = t;
                t = SSL_remove(x_14);
                ;
                LocalPopChoice(s_27);
              }
            else
              {
                t = r_27;
              }
            return(t);
          }
          t = map_1_0(f_3, t);
          t = u_14;
          {
            ATerm g_3 (ATerm t)
            {
              t = term_x_24;
              return(t);
            }
            t = end_scope_1_0(g_3, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(i_83, e_3, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm j_83 (ATerm), ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_15 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm v_27 = t;
          int w_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_23 = NULL;
              t = eval_config_0_0(t);
              v_23 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_23);
              t = v_23;
              ;
              LocalPopChoice(w_27);
            }
          else
            {
              t = v_27;
            }
          a_15 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, a_15);
        }
        ;
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        t = term_x_27;
      }
    t = j_83(t);
    {
      ATerm j_3 (ATerm t)
      {
        ATerm y_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
            {
              ATerm a_28 = t;
              int b_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_23 = NULL;
                  t = eval_config_0_0(t);
                  z_23 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), z_23);
                  t = z_23;
                  ;
                  LocalPopChoice(b_28);
                }
              else
                {
                  t = a_28;
                }
            }
            ;
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
            t = term_c_28;
          }
        return(t);
      }
      t = copy_to_1_0(j_3, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(i_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL;
  b_15 = t;
  t = term_t_24;
  t = whoami_0_0(t);
  c_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), c_15), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_15;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm e_15 = NULL;
    e_15 = t;
    if(match_string(t, "-k"))
      {
        t = e_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = e_15;
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm f_15 = NULL,g_15 = NULL;
    f_15 = t;
    t = SSL_string_to_int(f_15);
    g_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_15);
    t = f_15;
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_d_28;
    return(t);
  }
  t = ArgOption_3_0(l_3, n_3, p_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_3 (ATerm t)
      {
        ATerm i_15 = NULL;
        i_15 = t;
        if(match_string(t, "-S"))
          {
            t = i_15;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = i_15;
          }
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_h_28;
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = term_i_28;
        return(t);
      }
      t = Option_3_0(r_3, w_3, x_3, t);
      ;
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm b_4 (ATerm t)
            {
              ATerm j_15 = NULL,k_15 = NULL;
              j_15 = t;
              t = SSL_string_to_int(j_15);
              k_15 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_15);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, j_15);
              return(t);
            }
            ATerm c_4 (ATerm t)
            {
              t = term_l_28;
              return(t);
            }
            t = ArgOption_3_0(z_3, b_4, c_4, t);
            ;
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            {
              ATerm d_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm e_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_m_28;
                return(t);
              }
              ATerm f_4 (ATerm t)
              {
                t = term_n_28;
                return(t);
              }
              t = Option_3_0(d_4, e_4, f_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_15 = NULL;
      t = term_t_24;
      t = d_0(t);
      p_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_28, term_p_28, p_15);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_15 = ATgetFirst((ATermList) t);
          o_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_15;
      t = a_0(t);
      t = term_t_24;
      t = c_0(t);
      s_15 = t;
      t = (ATerm) ATinsert(CheckATermList(o_15), s_15);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm v_15 = NULL;
    v_15 = t;
    if(match_string(t, "-o"))
      {
        t = v_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = v_15;
      }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    ATerm w_15 = NULL;
    w_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), w_15);
    t = (ATerm) ATmakeAppl(sym_Output_1, w_15);
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    t = term_q_28;
    return(t);
  }
  t = ArgOption_3_0(h_4, i_4, k_4, t);
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    ATerm y_15 = NULL;
    y_15 = t;
    if(match_string(t, "-i"))
      {
        t = y_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = y_15;
      }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    ATerm z_15 = NULL;
    z_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), z_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, z_15);
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_r_28;
    return(t);
  }
  t = ArgOption_3_0(l_4, m_4, o_4, t);
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_16;
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_16);
        {
          ATerm u_28 = t;
          int v_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_24 = NULL;
              t = eval_config_0_0(t);
              d_24 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_16, d_24);
              t = d_24;
              ;
              LocalPopChoice(v_28);
            }
          else
            {
              t = u_28;
            }
        }
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = (ATerm) ATempty;
      }
    d_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_16, d_16);
    {
      ATerm w_28 = t;
      int x_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm y_28 = ATgetArgument(t, 0);
              ATerm z_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_16;
          {
            ATerm r_4 (ATerm t)
            {
              t = d_16;
              return(t);
            }
            t = at_end_1_0(r_4, t);
          }
          ;
          LocalPopChoice(x_28);
        }
      else
        {
          t = w_28;
          {
            ATerm h_24 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, c_16, d_16));
            if(match_cons(t, sym__2))
              {
                ATerm a_29 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) a_29) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                h_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = h_24;
            t = concat_0_0(t);
          }
        }
      e_16 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_16, e_16);
      t = (ATerm) ATmakeAppl(sym__3, term_b_29, b_16, e_16);
    }
  }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym__3))
    {
      k_16 = ATgetArgument(t, 0);
      l_16 = ATgetArgument(t, 1);
      m_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_16, l_16);
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_29 = ATgetArgument(t, 0);
            ATerm f_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_16, l_16);
        ;
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        t = (ATerm) ATempty;
      }
    n_16 = t;
    t = SSL_table_put(k_16, l_16, (ATerm) ATinsert(CheckATermList(n_16), m_16));
    t = (ATerm) ATmakeAppl(sym__3, k_16, l_16, m_16);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_17 = NULL;
      t = term_t_24;
      t = j_0(t);
      a_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_28, term_p_28, a_17);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm e_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_16 = ATgetFirst((ATermList) t);
          x_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_16 = ATgetFirst((ATermList) t);
          z_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_16;
      t = h_0(t);
      t = y_16;
      t = i_0(t);
      e_17 = t;
      t = (ATerm) ATinsert(CheckATermList(z_16), e_17);
    }
  return(t);
}
ATerm include_option_0_0 (ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    ATerm g_17 = NULL;
    g_17 = t;
    if(match_string(t, "-I"))
      {
        t = g_17;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
          _fail(t);
        t = g_17;
      }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    ATerm h_17 = NULL;
    h_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_29, (ATerm) ATinsert(ATinsert(ATempty, h_17), term_g_29));
    t = extend_config_0_0(t);
    t = term_t_24;
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_h_29;
    return(t);
  }
  t = ArgOption_3_0(t_4, u_4, v_4, t);
  return(t);
}
ATerm input_type_option_0_0 (ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm x_4 (ATerm t)
      {
        ATerm i_17 = NULL;
        i_17 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue)), (ATerm) ATmakeAppl(sym_AST_0));
        t = i_17;
        return(t);
      }
      ATerm y_4 (ATerm t)
      {
        t = term_k_29;
        return(t);
      }
      t = Option_3_0(w_4, x_4, y_4, t);
      ;
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      {
        ATerm a_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--mod", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm c_5 (ATerm t)
        {
          ATerm j_17 = NULL;
          j_17 = t;
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--mod", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Module_0));
          t = j_17;
          return(t);
        }
        ATerm d_5 (ATerm t)
        {
          t = term_l_29;
          return(t);
        }
        t = Option_3_0(a_5, c_5, d_5, t);
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_17 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_24;
  t = whoami_0_0(t);
  k_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), k_17));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_24 = NULL;
        t = eval_config_0_0(t);
        l_24 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_24);
        t = l_24;
        ;
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t)
{
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_76(t);
      ;
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
      {
        ATerm n_17 = NULL,o_17 = NULL,r_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_17 = ATgetFirst((ATermList) t);
            o_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_17;
        t = foldr_2_0(g_76, h_76, t);
        r_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_17, r_17);
        t = h_76(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_17 = NULL,m_24 = NULL,n_24 = NULL;
  t = times_0_0(t);
  m_24 = t;
  t = SSL_explode_term(m_24);
  if(match_cons(t, sym__2))
    {
      ATerm q_29 = ATgetArgument(t, 0);
      n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_24;
  {
    ATerm e_5 (ATerm t)
    {
      t = term_g_28;
      return(t);
    }
    ATerm f_5 (ATerm t)
    {
      ATerm q_24 = NULL,r_24 = NULL;
      if(match_cons(t, sym__2))
        {
          q_24 = ATgetArgument(t, 0);
          r_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm r_29 = t;
        int s_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(q_24, r_24);
            ;
            LocalPopChoice(s_29);
          }
        else
          {
            t = r_29;
            t = SSL_addr(q_24, r_24);
          }
      }
      return(t);
    }
    t = foldr_2_0(e_5, f_5, t);
    u_17 = t;
    t = SSL_TicksToSeconds(u_17);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
  f_18 = t;
  if(match_cons(t, sym__2))
    {
      g_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_18;
        if((g_18 != t))
          {
            _fail(t);
          }
        t = f_18;
        ;
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
        t = f_18;
        {
          ATerm v_29 = t;
          int w_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_18, h_18);
              ;
              LocalPopChoice(w_29);
            }
          else
            {
              t = v_29;
              t = SSL_gtr(g_18, h_18);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_18, h_18);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_18 = NULL,n_18 = NULL;
      l_18 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_25 = NULL;
            t = eval_config_0_0(t);
            b_25 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_25);
            t = b_25;
            ;
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
          }
        n_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_18, term_c_10);
        t = geq_0_0(t);
        t = l_18;
        t = e_81(t);
      }
      ;
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm p_18 = NULL,q_18 = NULL;
    t = run_time_0_0(t);
    p_18 = t;
    t = term_t_24;
    t = whoami_0_0(t);
    q_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), p_18), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), q_18));
    t = (ATerm) ATmakeAppl(sym__2, term_i_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_30), p_18), term_r_10), q_18));
    return(t);
  }
  t = if_verbose1_1_0(g_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm k_85 (ATerm), ATerm t)
{
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm e_30 = t;
        int f_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_25 = NULL;
            t = eval_config_0_0(t);
            f_25 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), f_25);
            t = f_25;
            ;
            LocalPopChoice(f_30);
          }
        else
          {
            t = e_30;
          }
      }
      ;
      LocalPopChoice(d_30);
    }
  else
    {
      t = c_30;
      {
        ATerm h_5 (ATerm t)
        {
          ATerm g_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(h_30);
            }
          else
            {
              t = g_30;
              {
                ATerm i_30 = t;
                int j_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(j_30);
                  }
                else
                  {
                    t = i_30;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(h_5, t);
      }
    }
  t = k_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_18 = ATgetFirst((ATermList) t);
      t_18 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_18 = NULL,y_18 = NULL;
        t = t_18;
        t = g_0(t);
        x_18 = t;
        t = s_18;
        t = e_0(t);
        y_18 = t;
        t = t_18;
        {
          ATerm i_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(x_18), y_18);
            return(t);
          }
          t = reverse_acc_2_0(e_0, i_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_24;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm m_62 (ATerm), ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  c_19 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_19);
  z_18 = t;
  t = a_19;
  t = m_62(t);
  b_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, b_19), z_18);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_25 = NULL;
            t = eval_config_0_0(t);
            j_25 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_25);
            t = j_25;
            ;
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
          }
      }
      ;
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      {
        ATerm j_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(j_5, t);
      }
    }
  t = term_o_30;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm n_5 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, n_5, t);
    {
      ATerm p_5 (ATerm t)
      {
        ATerm f_19 = NULL;
        f_19 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, f_19), term_p_30);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(p_5, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm n_62 (ATerm), ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,j_19 = NULL,k_19 = NULL;
  k_19 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      h_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_19);
  g_19 = t;
  t = h_19;
  t = n_62(t);
  j_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, j_19), g_19);
  return(t);
}
ATerm fetch_1_0 (ATerm a_70 (ATerm), ATerm t)
{
  ATerm q_19 (ATerm t)
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(a_70, _id, t);
        ;
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        t = Cons_2_0(_id, q_19, t);
      }
    return(t);
  }
  t = q_19(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_19 = NULL,y_19 = NULL;
  w_19 = t;
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_19;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_30 = ATgetFirst((ATermList) t);
                ATerm v_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_19;
          }
        ;
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        t = (ATerm) ATinsert(ATempty, w_19);
      }
    y_19 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), y_19);
    t = w_19;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_25 = NULL;
        t = eval_config_0_0(t);
        n_25 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_25);
        t = n_25;
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      {
        ATerm h_20 = NULL,i_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_20 = ATgetFirst((ATermList) t);
            i_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_20;
        {
          ATerm q_5 (ATerm t)
          {
            t = i_20;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(q_5, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm g_70 (ATerm), ATerm t)
{
  ATerm o_20 (ATerm t)
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, o_20, t);
        ;
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_70(t);
      }
    return(t);
  }
  t = o_20(t);
  return(t);
}
ATerm _2_0 (ATerm x_55 (ATerm), ATerm y_55 (ATerm), ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
  u_20 = t;
  if(match_cons(t, sym__2))
    {
      q_20 = ATgetArgument(t, 0);
      r_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_20);
  p_20 = t;
  t = q_20;
  t = x_55(t);
  s_20 = t;
  t = r_20;
  t = y_55(t);
  t_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, s_20, t_20), p_20);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm y_20 = NULL;
  ATerm s_5 (ATerm t)
  {
    ATerm z_20 = NULL;
    z_20 = t;
    t = SSL_explode_string(z_20);
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    ATerm a_21 = NULL;
    a_21 = t;
    t = SSL_explode_string(a_21);
    return(t);
  }
  t = _2_0(s_5, t_5, t);
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_21 = NULL,d_21 = NULL;
        if(match_cons(t, sym__2))
          {
            c_21 = ATgetArgument(t, 0);
            d_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_21;
        {
          ATerm v_5 (ATerm t)
          {
            t = d_21;
            return(t);
          }
          t = at_end_1_0(v_5, t);
        }
        ;
        LocalPopChoice(d_31);
      }
    else
      {
        t = c_31;
        {
          ATerm q_25 = NULL,r_25 = NULL;
          q_25 = t;
          t = SSL_explode_term(q_25);
          if(match_cons(t, sym__2))
            {
              ATerm e_31 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_31) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_25;
          t = concat_0_0(t);
        }
      }
    y_20 = t;
    t = SSL_implode_string(y_20);
  }
  return(t);
}
ATerm map_1_0 (ATerm p_69 (ATerm), ATerm t)
{
  ATerm i_21 (ATerm t)
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(g_31);
      }
    else
      {
        t = f_31;
        t = Cons_2_0(p_69, i_21, t);
      }
    return(t);
  }
  t = i_21(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_21 = NULL;
      o_21 = t;
      t = SSL_is_string(o_21);
      ;
      LocalPopChoice(i_31);
    }
  else
    {
      t = h_31;
      {
        ATerm j_31 = t;
        int k_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_5 (ATerm t)
            {
              ATerm l_31 = t;
              int m_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(m_31);
                }
              else
                {
                  t = l_31;
                }
              return(t);
            }
            t = map_1_0(x_5, t);
            ;
            LocalPopChoice(k_31);
          }
        else
          {
            t = j_31;
            {
              ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
              s_21 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_21 = ATgetArgument(t, 0);
                  t = t_21;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_21 = ATgetArgument(t, 0);
                      t = t_21;
                      {
                        ATerm n_31 = t;
                        int o_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), t_21);
                            {
                              ATerm p_31 = t;
                              int q_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_26 = NULL;
                                  t = eval_config_0_0(t);
                                  h_26 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), t_21, h_26);
                                  t = h_26;
                                  ;
                                  LocalPopChoice(q_31);
                                }
                              else
                                {
                                  t = p_31;
                                }
                            }
                            ;
                            LocalPopChoice(o_31);
                          }
                        else
                          {
                            t = n_31;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_21), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = t_21;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_21 = NULL,z_21 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_21 = ATgetArgument(t, 0);
                          u_21 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_21;
                      t = eval_config_0_0(t);
                      y_21 = t;
                      t = u_21;
                      t = eval_config_0_0(t);
                      z_21 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_21, z_21);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm a_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_u_31;
        return(t);
      }
      ATerm b_6 (ATerm t)
      {
        t = term_v_31;
        return(t);
      }
      t = Option_3_0(z_5, a_6, b_6, t);
      ;
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
      {
        ATerm f_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm g_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_w_31;
          return(t);
        }
        ATerm m_6 (ATerm t)
        {
          t = term_x_31;
          return(t);
        }
        t = Option_3_0(f_6, g_6, m_6, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_57 (ATerm), ATerm h_57 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL;
  j_22 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_22 = ATgetFirst((ATermList) t);
      g_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_22);
  e_22 = t;
  t = f_22;
  t = g_57(t);
  h_22 = t;
  t = g_22;
  t = h_57(t);
  i_22 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(i_22), h_22), e_22);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_87 (ATerm), ATerm t)
{
  ATerm n_22 = NULL;
  n_22 = t;
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_32;
        t = i_87(t);
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
      }
    t = n_22;
    {
      ATerm n_6 (ATerm t)
      {
        ATerm o_22 = NULL;
        o_22 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_22);
        t = (ATerm) ATmakeAppl(sym_Program_1, o_22);
        return(t);
      }
      ATerm o_6 (ATerm t)
      {
        ATerm b_32 = t;
        int c_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_32 = t;
            int e_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_32);
              }
            else
              {
                t = d_32;
                t = i_87(t);
                t = Cons_2_0(_id, o_6, t);
              }
            ;
            LocalPopChoice(c_32);
          }
        else
          {
            t = b_32;
            {
              ATerm q_22 = NULL,r_22 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_22 = ATgetFirst((ATermList) t);
                  r_22 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_22), (ATerm) ATmakeAppl(sym_Undefined_1, q_22));
            }
          }
        return(t);
      }
      t = Cons_2_0(n_6, o_6, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
  z_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = z_22;
  {
    ATerm q_6 (ATerm t)
    {
      ATerm f_32 = t;
      int g_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_87(t);
          ;
          LocalPopChoice(g_32);
        }
      else
        {
          t = f_32;
          {
            ATerm h_32 = t;
            int i_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_6 (ATerm t)
                {
                  ATerm c_23 = NULL;
                  c_23 = t;
                  if(match_string(t, "--help"))
                    {
                      t = c_23;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = c_23;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = c_23;
                        }
                    }
                  return(t);
                }
                ATerm s_6 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_j_32;
                  return(t);
                }
                ATerm a_7 (ATerm t)
                {
                  t = term_k_32;
                  return(t);
                }
                t = Option_3_0(r_6, s_6, a_7, t);
                ;
                LocalPopChoice(i_32);
              }
            else
              {
                t = h_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_6, t);
    {
      ATerm l_32 = t;
      int m_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_23 = NULL;
          h_23 = t;
          {
            ATerm n_32 = t;
            int o_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = h_23;
                {
                  ATerm p_32 = t;
                  int q_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm r_32 = t;
                        int s_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm y_26 = NULL;
                            t = eval_config_0_0(t);
                            y_26 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), y_26);
                            t = y_26;
                            ;
                            LocalPopChoice(s_32);
                          }
                        else
                          {
                            t = r_32;
                          }
                      }
                      ;
                      LocalPopChoice(q_32);
                    }
                  else
                    {
                      t = p_32;
                      {
                        ATerm b_7 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(b_7, t);
                      }
                    }
                  t = h_23;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(o_32);
              }
            else
              {
                t = n_32;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm t_32 = t;
                  int u_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_27 = NULL;
                      t = eval_config_0_0(t);
                      e_27 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), e_27);
                      t = e_27;
                      ;
                      LocalPopChoice(u_32);
                    }
                  else
                    {
                      t = t_32;
                    }
                  t = h_23;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(m_32);
        }
      else
        {
          t = l_32;
          {
            ATerm v_32 = t;
            int w_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_7 (ATerm t)
                {
                  ATerm d_7 (ATerm t)
                  {
                    if(((a_23 != NULL) && (a_23 != t)))
                      _fail(t);
                    else
                      a_23 = t;
                    return(t);
                  }
                  t = Undefined_1_0(d_7, t);
                  return(t);
                }
                t = fetch_1_0(c_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_23)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_23)), term_x_32));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(w_32);
              }
            else
              {
                t = v_32;
              }
          }
        }
      b_23 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = b_23;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm t)
{
  ATerm k_23 = NULL;
  t = parse_options_1_0(m_85, t);
  k_23 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), k_23);
  t = k_23;
  t = o_85(t);
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_85, t);
        ;
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        {
          ATerm a_33 = t;
          int b_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_33);
            }
          else
            {
              t = a_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm e_7 (ATerm t)
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = input_type_option_0_0(t);
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        {
          ATerm e_33 = t;
          int f_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = include_option_0_0(t);
              ;
              LocalPopChoice(f_33);
            }
          else
            {
              t = e_33;
              {
                ATerm g_33 = t;
                int h_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = input_option_0_0(t);
                    ;
                    LocalPopChoice(h_33);
                  }
                else
                  {
                    t = g_33;
                    {
                      ATerm i_33 = t;
                      int j_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = output_option_0_0(t);
                          ;
                          LocalPopChoice(j_33);
                        }
                      else
                        {
                          t = i_33;
                          {
                            ATerm k_33 = t;
                            int l_33 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_7 (ATerm t)
                                {
                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                                    _fail(t);
                                  return(t);
                                }
                                ATerm k_7 (ATerm t)
                                {
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                  t = term_m_33;
                                  return(t);
                                }
                                ATerm p_7 (ATerm t)
                                {
                                  t = term_n_33;
                                  return(t);
                                }
                                t = Option_3_0(h_7, k_7, p_7, t);
                                ;
                                LocalPopChoice(l_33);
                              }
                            else
                              {
                                t = k_33;
                                {
                                  ATerm o_33 = t;
                                  int p_33 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = verbose_option_0_0(t);
                                      ;
                                      LocalPopChoice(p_33);
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
        }
      }
    return(t);
  }
  ATerm g_7 (ATerm t)
  {
    ATerm q_7 (ATerm t)
    {
      t = pre_process_input_0_0(t);
      {
        ATerm q_33 = t;
        int r_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_33 = t;
            int t_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(t_33);
              }
            else
              {
                t = s_33;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(r_33);
            {
              ATerm r_7 (ATerm t)
              {
                t = term_u_33;
                return(t);
              }
              t = xtc_transform_file_2_0(r_7, pass_verbose_0_0, t);
            }
          }
        else
          {
            t = q_33;
            {
              ATerm s_7 (ATerm t)
              {
                t = term_u_33;
                return(t);
              }
              t = xtc_transform_term_2_0(s_7, pass_verbose_0_0, t);
            }
          }
        {
          ATerm v_33 = t;
          int w_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_33 = t;
              int y_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(y_33);
                }
              else
                {
                  t = x_33;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(w_33);
              {
                ATerm d_8 (ATerm t)
                {
                  t = term_z_33;
                  return(t);
                }
                t = xtc_transform_file_2_0(d_8, pass_verbose_0_0, t);
              }
            }
          else
            {
              t = v_33;
              {
                ATerm f_8 (ATerm t)
                {
                  t = term_z_33;
                  return(t);
                }
                t = xtc_transform_term_2_0(f_8, pass_verbose_0_0, t);
              }
            }
          t = pp_astratego_0_0(t);
        }
      }
      return(t);
    }
    t = xtc_io_1_0(q_7, t);
    return(t);
  }
  t = option_wrap_4_0(e_7, default_usage_0_0, _id, g_7, t);
  return(t);
}
