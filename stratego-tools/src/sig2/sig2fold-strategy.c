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
ATerm term_b_34;
ATerm term_a_34;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_z_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_c_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_r_30;
ATerm term_m_30;
ATerm term_d_30;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_d_29;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_b_28;
ATerm term_w_27;
ATerm term_h_27;
ATerm term_i_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_p_25;
ATerm term_y_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_k_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_f_22;
ATerm term_t_21;
ATerm term_w_18;
ATerm term_t_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_i_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_j_15;
ATerm term_f_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
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
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_g_12;
ATerm term_b_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_c_10;
ATerm term_m_9;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_g_8;
ATerm term_t_7;
ATerm term_r_7;
void init_constant_terms (void)
{
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_c_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_a_11, term_b_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_e_11, term_f_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_11, term_i_11, term_j_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_q_11, term_s_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_11, term_w_11, term_x_11);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_l_12, term_m_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_v_12, term_w_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_b_13);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_13, term_g_13, term_h_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_k_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_v_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_c_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_h_14, term_l_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_x_14, term_y_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_f_15, term_j_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_t_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_z_15, term_c_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_j_16, term_k_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_t_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_x_16, term_d_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_i_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_s_17, term_t_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_17, term_y_17, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_d_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sc", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_Module_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_28);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast          Input is Stratego AST.", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--mod          Input is Stratego module (.str, .cr, .r or .rtree) (default).", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__3, term_d_29, term_t_31, term_k_24);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("astratego2tg", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("tg2fold-strategy", 0, ATtrue));
}
ATerm c_0 (ATerm);
ATerm q_0 (ATerm);
ATerm s_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm b_1 (ATerm);
ATerm pp_astratego_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm h_72 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm);
ATerm d_1 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm n_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm w_70 (ATerm), ATerm);
ATerm if_verbose5_1_0 (ATerm a_88 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm union_1_0 (ATerm f_80 (ATerm), ATerm);
ATerm j_1 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm d_88 (ATerm), ATerm);
ATerm l_7 (ATerm d_7, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm u_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm o_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm assert_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm h_10 (ATerm v_9, ATerm);
ATerm i_10 (ATerm x_9, ATerm y_9, ATerm z_9, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm n_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm q_68 (ATerm), ATerm);
ATerm pass_includes_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm str2astratego_0_0 (ATerm);
ATerm pre_process_helper_0_0 (ATerm);
ATerm get_input_type_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm p_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm o_86 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm t_89 (ATerm), ATerm);
ATerm e_3 (ATerm);
ATerm xtc_io_1_0 (ATerm u_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm include_option_0_0 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm u_4 (ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm input_type_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm need_help_1_0 (ATerm v_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm x_68 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm y_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm l_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm r_76 (ATerm), ATerm);
ATerm _2_0 (ATerm c_59 (ATerm), ATerm d_59 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm t_5 (ATerm);
ATerm x_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_63 (ATerm), ATerm s_63 (ATerm), ATerm);
ATerm g_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm t_93 (ATerm), ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm r_6 (ATerm);
ATerm parse_options_1_0 (ATerm s_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm e_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm k_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm c_0 (ATerm t)
{
  t = term_r_7;
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = term_r_7;
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_t_7;
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm e_0 = NULL;
  t = term_g_8;
  t = xtc_find_0_0(t);
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_0), term_l_8);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_t_7;
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm n_0 = NULL;
  t = term_g_8;
  t = xtc_find_0_0(t);
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_0), term_l_8);
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_m_8;
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_m_8;
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm pp_astratego_0_0 (ATerm t)
{
  ATerm n_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_8 = t;
      int v_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(v_8);
        }
      else
        {
          t = t_8;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(s_8);
      t = xtc_transform_file_2_0(c_0, pass_verbose_0_0, t);
    }
  else
    {
      t = n_8;
      t = xtc_transform_term_2_0(q_0, pass_verbose_0_0, t);
    }
  {
    ATerm w_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(y_8);
        t = xtc_transform_file_2_0(s_0, u_0, t);
      }
    else
      {
        t = w_8;
        t = xtc_transform_term_2_0(v_0, w_0, t);
      }
    {
      ATerm g_9 = t;
      int i_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_9 = t;
          int l_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(l_9);
            }
          else
            {
              t = j_9;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(i_9);
          t = xtc_transform_file_2_0(x_0, y_0, t);
        }
      else
        {
          t = g_9;
          t = xtc_transform_term_2_0(z_0, b_1, t);
        }
    }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,r_0 = NULL;
  t = term_m_9;
  {
    ATerm u_9 = t;
    int w_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
        {
          ATerm a_10 = t;
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
              t = a_10;
            }
        }
        ;
        LocalPopChoice(w_9);
      }
    else
      {
        t = u_9;
        t = term_c_10;
      }
    o_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_0, term_c_10);
    {
      ATerm d_10 = t;
      int j_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(o_0, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(j_10);
        }
      else
        {
          t = d_10;
          t = SSL_subtr(o_0, (ATerm) ATmakeInt(1));
        }
      r_0 = t;
      t = SSL_int_to_string(r_0);
      p_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, p_0), term_m_9);
    }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm a_1 = NULL,e_1 = NULL;
  a_1 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_l_10;
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
ATerm WriteToFile_1_0 (ATerm h_72 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,p_1 = NULL,q_1 = NULL;
  if(match_cons(t, sym__2))
    {
      n_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_1, term_m_10);
  t = open_stream_0_0(t);
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_1, p_1);
  t = h_72(t);
  t = fclose_0_0(t);
  t = p_1;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,z_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_10 = ATgetArgument(t, 0);
      if(match_cons(o_10, sym_Stream_1))
        {
          t_1 = ATgetArgument(o_10, 0);
        }
      else
        _fail(t);
      u_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(t_1, u_1);
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_1);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL;
  r_1 = t;
  t = xtc_new_file_0_0(t);
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_1, r_1);
  t = WriteToFile_1_0(c_1, t);
  t = SSL_close_file(s_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, s_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(q_90, r_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm j_2 = NULL;
  j_2 = t;
  t = SSL_explode_string(j_2);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm i_2 = NULL;
  t = map_1_0(d_1, t);
  t = concat_0_0(t);
  i_2 = t;
  t = SSL_implode_string(i_2);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL;
  i_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      j_3 = ATgetArgument(t, 0);
      {
        ATerm i_1 = NULL;
        t = SSL_int_to_string(j_3);
        i_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_10), i_1), term_p_10);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm a_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          j_3 = ATgetArgument(t, 0);
          k_3 = ATgetArgument(t, 1);
          l_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(k_3);
      a_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_3), term_t_10), a_2), term_s_10), j_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm n_76 (ATerm), ATerm t)
{
  ATerm q_3 = NULL;
  ATerm f_1 (ATerm t)
  {
    t = n_76(t);
    if(((q_3 != NULL) && (q_3 != t)))
      _fail(t);
    else
      q_3 = t;
    return(t);
  }
  t = fetch_1_0(f_1, t);
  t = not_null(q_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm s_3 = NULL;
  s_3 = t;
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_18), term_a_18), term_v_17), term_o_17), term_e_17), term_u_16), term_l_16), term_h_16), term_u_15), term_n_15), term_z_14), term_t_14), term_m_14), term_d_14), term_z_13), term_s_13), term_o_13), term_i_13), term_c_13), term_y_12), term_t_12), term_n_12), term_b_12), term_u_11), term_m_11), term_g_11), term_c_11), term_y_10);
        {
          ATerm g_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm f_18 = ATgetArgument(t, 0);
                if((s_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm g_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(g_1, t);
        }
        ;
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, s_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm x_3 = NULL;
  x_3 = t;
  {
    ATerm h_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_4 = NULL,h_2 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_18 = ATgetArgument(t, 0);
            f_4 = ATgetArgument(t, 1);
            {
              ATerm o_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_4;
        {
          ATerm q_18 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_18;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          h_2 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATempty, h_2), term_w_18));
        }
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = h_18;
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
  ATerm l_4 = NULL,m_4 = NULL;
  l_4 = t;
  t = fork_0_0(t);
  m_4 = t;
  {
    ATerm x_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = l_4;
        t = w_70(t);
        ;
        LocalPopChoice(z_18);
      }
    else
      {
        t = x_18;
        t = SSL_waitpid(m_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_19 = ATgetArgument(t, 0);
            if(((ATgetType(g_19) != AT_INT) || (ATgetInt((ATermInt) g_19) != 0)))
              _fail(t);
            {
              ATerm h_19 = ATgetArgument(t, 1);
            }
            {
              ATerm n_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = l_4;
      }
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm o_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_4 = NULL,y_4 = NULL;
      w_4 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 = NULL;
            t = eval_config_0_0(t);
            o_2 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_2);
            t = o_2;
            ;
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
          }
        y_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_4, term_g_17);
        t = geq_0_0(t);
        t = w_4;
        t = a_88(t);
      }
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = o_19;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm x_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_5 = NULL,j_5 = NULL;
      h_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 = NULL;
            t = eval_config_0_0(t);
            a_3 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_3);
            t = a_3;
            ;
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
          }
        j_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_5, term_k_13);
        t = geq_0_0(t);
        t = h_5;
        t = z_87(t);
      }
      ;
      LocalPopChoice(a_20);
    }
  else
    {
      t = x_19;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_5 = NULL,o_5 = NULL;
      m_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm f_20 = t;
        int i_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_3 = NULL;
            t = eval_config_0_0(t);
            n_3 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_3);
            t = n_3;
            ;
            LocalPopChoice(i_20);
          }
        else
          {
            t = f_20;
          }
        o_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_5, term_i_11);
        t = geq_0_0(t);
        t = m_5;
        t = b_88(t);
      }
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
    }
  return(t);
}
ATerm union_1_0 (ATerm f_80 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL;
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm k_20 = t;
      int m_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_5;
          ;
          LocalPopChoice(m_20);
        }
      else
        {
          t = k_20;
          {
            ATerm q_20 = t;
            int s_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_3 = NULL,r_3 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    p_3 = ATgetFirst((ATermList) t);
                    r_3 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = v_5;
                {
                  ATerm h_1 (ATerm t)
                  {
                    ATerm t_3 = NULL;
                    t_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_3, t_3);
                    t = f_80(t);
                    return(t);
                  }
                  t = fetch_1_0(h_1, t);
                  t = r_3;
                  t = w_5(t);
                }
                ;
                LocalPopChoice(s_20);
              }
            else
              {
                t = q_20;
                t = Cons_2_0(_id, w_5, t);
              }
          }
        }
      return(t);
    }
    t = w_5(t);
  }
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm q_6 = NULL;
  if(match_cons(t, sym__2))
    {
      q_6 = ATgetArgument(t, 0);
      if((q_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm c_6 = NULL,d_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
  if(match_cons(t, sym__3))
    {
      c_6 = ATgetArgument(t, 0);
      d_6 = ATgetArgument(t, 1);
      k_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_6, d_6);
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_20 = ATgetArgument(t, 0);
            ATerm x_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(c_6, d_6);
        ;
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        t = (ATerm) ATempty;
      }
    l_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_6, k_6);
    t = union_1_0(j_1, t);
    m_6 = t;
    t = SSL_table_put(c_6, d_6, m_6);
    t = (ATerm) ATmakeAppl(sym__3, c_6, d_6, k_6);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL;
  if(match_cons(t, sym__2))
    {
      t_6 = ATgetArgument(t, 0);
      s_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm u_6 = NULL,v_6 = NULL;
      if(match_cons(t, sym__2))
        {
          u_6 = ATgetArgument(t, 0);
          v_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, t_6, u_6, v_6);
      t = d_88(t);
      return(t);
    }
    t = map_1_0(k_1, t);
  }
  return(t);
}
ATerm l_7 (ATerm d_7, ATerm t)
{
  t = SSL_fclose(d_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL;
  j_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_7 = ATgetArgument(t, 0);
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_7);
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
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
ATerm l_1 (ATerm t)
{
  ATerm x_7 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      x_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7;
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm b_8 = NULL;
  b_8 = t;
  t = SSL_is_string(b_8);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_21 = ATgetArgument(t, 0);
      ATerm g_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_4 = NULL,t_4 = NULL;
        s_4 = t;
        t = SSL_explode_term(s_4);
        if(match_cons(t, sym__2))
          {
            ATerm j_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_21 = ATgetArgument(t, 1);
              if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
                {
                  t_4 = ATgetFirst((ATermList) l_21);
                  {
                    ATerm m_21 = (ATerm) ATgetNext((ATermList) l_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = t_4;
        if(match_cons(t, sym_stderr_0))
          {
            t = t_4;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = t_4;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = t_4;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        {
          ATerm o_21 = t;
          int p_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
              t = _2_0(l_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  u_7 = ATgetArgument(t, 0);
                  v_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(u_7, v_7);
              w_7 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, w_7);
              ;
              LocalPopChoice(p_21);
            }
          else
            {
              t = o_21;
              {
                ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
                t = _2_0(m_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    y_7 = ATgetArgument(t, 0);
                    z_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(y_7, z_7);
                a_8 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, a_8);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_8 = NULL;
      f_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_8, term_t_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm v_4 = NULL;
        v_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_4), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = v_4;
        _fail(t);
      }
    }
  c_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(e_8);
  d_8 = t;
  t = c_8;
  t = fclose_0_0(t);
  t = d_8;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_8 = NULL;
      h_8 = t;
      t = SSL_access(h_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(y_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = x_21;
      {
        ATerm z_21 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_5 = NULL;
            ATerm d_22 = t;
            if((PushChoice() == 0))
              {
                ATerm i_8 = NULL;
                i_8 = t;
                t = SSL_access(i_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_22;
              }
            e_5 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_5), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = e_5;
            ;
            LocalPopChoice(c_22);
          }
        else
          {
            t = z_21;
            {
              ATerm s_5 = NULL;
              s_5 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_5), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = s_5;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm y_5 = NULL;
  y_5 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_5), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
  t = y_5;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm b_6 = NULL;
  b_6 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_6), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
  t = b_6;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm p_8 = NULL;
  p_8 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = p_8;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm q_8 = NULL;
  q_8 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
  t = q_8;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm r_8 = NULL;
  r_8 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = r_8;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,o_8 = NULL;
  j_8 = t;
  t = if_verbose5_1_0(o_1, t);
  {
    ATerm e_22 = t;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, j_8));
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_22;
      }
    k_8 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, j_8));
    t = k_8;
    t = if_verbose4_1_0(v_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(w_1, t);
    o_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_f_22, o_8);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(x_1, t);
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, j_8), (ATerm) ATempty);
    t = (ATerm) ATmakeAppl(sym__3, term_f_22, (ATerm)ATmakeAppl(sym_Imported_1, j_8), (ATerm) ATempty);
    t = if_verbose4_1_0(y_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  ATerm m_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(n_22);
    }
  else
    {
      t = m_22;
      {
        ATerm r_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              t = filter_1_0(u_83, t);
              return(t);
            }
            t = Cons_2_0(u_83, b_2, t);
            ;
            LocalPopChoice(u_22);
          }
        else
          {
            t = r_22;
            {
              ATerm x_8 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm v_22 = ATgetFirst((ATermList) t);
                  x_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = x_8;
              t = filter_1_0(u_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm o_85 (ATerm), ATerm t)
{
  ATerm z_8 (ATerm t)
  {
    ATerm w_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_85(t);
        t = z_8(t);
        ;
        LocalPopChoice(y_22);
      }
    else
      {
        t = w_22;
      }
    return(t);
  }
  t = z_8(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm e_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 = NULL;
            t = eval_config_0_0(t);
            j_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), j_6);
            t = j_6;
            ;
            LocalPopChoice(g_23);
          }
        else
          {
            t = e_23;
          }
      }
      ;
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      {
        ATerm i_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(j_23);
          }
        else
          {
            t = i_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm w_6 = NULL;
  w_6 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_6), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
  t = w_6;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm k_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_23;
      }
  }
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm f_7 = NULL;
  f_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_7), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
  t = f_7;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm c_9 = NULL;
  t = if_verbose5_1_0(c_2, t);
  c_9 = t;
  {
    ATerm l_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = l_23;
        {
          ATerm d_9 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          d_9 = t;
          t = repeat_1_0(d_2, t);
          t = d_9;
        }
      }
    t = c_9;
    t = if_verbose5_1_0(e_2, t);
  }
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm s_7 = NULL;
  s_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_7), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = s_7;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm t_9 = NULL;
  t_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_9), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = t_9;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm e_13 = NULL;
  t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
  t = map_1_0(m_2, t);
  e_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_13), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
  t = e_13;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm x_12 = NULL,d_13 = NULL;
  x_12 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), x_12);
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_12, d_13);
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm o_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(f_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm r_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_8 = NULL,a_9 = NULL,b_9 = NULL;
            if(match_cons(t, sym__2))
              {
                u_8 = ATgetArgument(t, 0);
                a_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, u_8));
            {
              ATerm g_2 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((a_9 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((b_9 != NULL) && (b_9 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      b_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(g_2, t);
              t = not_null(b_9);
            }
            ;
            LocalPopChoice(t_23);
          }
        else
          {
            t = r_23;
            {
              ATerm k_9 = NULL,s_9 = NULL;
              k_9 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, k_9));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm u_23 = ATgetFirst((ATermList) t);
                  if(match_cons(u_23, sym__2))
                    {
                      ATerm x_23 = ATgetArgument(u_23, 0);
                      s_9 = ATgetArgument(u_23, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm v_23 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = s_9;
            }
          }
        t = if_verbose5_1_0(k_2, t);
      }
      ;
      LocalPopChoice(q_23);
    }
  else
    {
      t = o_23;
      {
        ATerm h_9 = NULL;
        h_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), h_9), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_23), h_9), term_y_23);
        t = if_verbose5_1_0(l_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm assert_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      n_9 = ATgetArgument(t, 0);
      o_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_86(t);
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_9, n_9, o_9);
  t = table_push_0_0(t);
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(p_9, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_9 = ATgetFirst((ATermList) t);
        r_9 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(p_9, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(r_9), (ATerm) ATinsert(CheckATermList(q_9), n_9)));
    t = (ATerm) ATmakeAppl(sym__2, n_9, o_9);
  }
  return(t);
}
ATerm h_10 (ATerm v_9, ATerm t)
{
  t = v_9;
  {
    ATerm d_24 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_24 = ATgetArgument(t, 0);
            ATerm f_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_24;
      }
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, v_9, term_m_10);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm i_10 (ATerm x_9, ATerm y_9, ATerm z_9, ATerm t)
{
  t = SSL_open_file(x_9, y_9);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
  e_10 = t;
  if(match_cons(t, sym__2))
    {
      f_10 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_10(e_10, t);
            ;
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            t = i_10(f_10, g_10, e_10, t);
          }
      }
    }
  else
    {
      t = h_10(e_10, t);
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
  ATerm k_10 = NULL;
  t = term_k_24;
  t = new_0_0(t);
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_10, term_m_24);
  t = conc_strings_0_0(t);
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_10 = NULL;
        n_10 = t;
        t = SSL_access(n_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
      }
  }
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm q_10 = NULL;
  t = new_file_0_0(t);
  q_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_10, term_m_10);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, q_10, term_k_24);
  t = assert_1_0(n_2, t);
  t = q_10;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  k_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm m_16 = NULL,v_16 = NULL,q_19 = NULL,w_19 = NULL;
      t = k_11;
      t = xtc_new_file_0_0(t);
      m_16 = t;
      t = m_0(t);
      v_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_16, (ATerm) ATinsert(ATinsert(ATempty, m_16), term_q_24));
      {
        ATerm r_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm u_24 = ATgetArgument(t, 0);
                ATerm v_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_16;
            {
              ATerm p_2 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, m_16), term_q_24);
                return(t);
              }
              t = at_end_1_0(p_2, t);
            }
            ;
            LocalPopChoice(t_24);
          }
        else
          {
            t = r_24;
            {
              ATerm y_18 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, v_16, (ATerm) ATinsert(ATinsert(ATempty, m_16), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm x_24 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) x_24) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  y_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_18;
              t = concat_0_0(t);
            }
          }
        q_19 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        w_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_19, q_19);
        {
          ATerm q_2 (ATerm t)
          {
            t = SSL_execvp(w_19, q_19);
            return(t);
          }
          t = fork_and_wait_1_0(q_2, t);
          t = SSL_close_file(m_16);
          t = (ATerm) ATmakeAppl(sym_FILE_1, m_16);
        }
      }
    }
  else
    {
      ATerm o_20 = NULL,p_20 = NULL,o_22 = NULL,x_22 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          l_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_11;
      t = xtc_new_file_0_0(t);
      o_20 = t;
      t = m_0(t);
      p_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_20), term_q_24), l_11), term_y_24));
      {
        ATerm z_24 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm c_25 = ATgetArgument(t, 0);
                ATerm d_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_20;
            {
              ATerm r_2 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_20), term_q_24), l_11), term_y_24);
                return(t);
              }
              t = at_end_1_0(r_2, t);
            }
            ;
            LocalPopChoice(b_25);
          }
        else
          {
            t = z_24;
            {
              ATerm n_21 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, p_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_20), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), l_11), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm f_25 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) f_25) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  n_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_21;
              t = concat_0_0(t);
            }
          }
        o_22 = t;
        t = l_0(t);
        t = xtc_find_0_0(t);
        x_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_22, o_22);
        {
          ATerm s_2 (ATerm t)
          {
            t = SSL_execvp(x_22, o_22);
            return(t);
          }
          t = fork_and_wait_1_0(s_2, t);
          t = SSL_close_file(o_20);
          t = (ATerm) ATmakeAppl(sym_FILE_1, o_20);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm q_68 (ATerm), ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,r_11 = NULL,t_11 = NULL;
  t_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_11);
  o_11 = t;
  t = p_11;
  t = q_68(t);
  r_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, r_11), o_11);
  return(t);
}
ATerm pass_includes_0_0 (ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_23 = NULL;
            t = eval_config_0_0(t);
            f_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), f_23);
            t = f_23;
            ;
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
          }
      }
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  t = term_p_25;
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
        {
          ATerm s_25 = t;
          int t_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_23 = NULL;
              t = eval_config_0_0(t);
              s_23 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), s_23);
              t = s_23;
              ;
              LocalPopChoice(t_25);
            }
          else
            {
              t = s_25;
            }
        }
        ;
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        t = term_c_10;
      }
    y_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_11, term_c_10);
    {
      ATerm u_25 = t;
      int v_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(y_11, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(v_25);
        }
      else
        {
          t = u_25;
          t = SSL_subtr(y_11, (ATerm) ATmakeInt(1));
        }
      a_12 = t;
      t = SSL_int_to_string(a_12);
      z_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, z_11), term_p_25);
    }
  }
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_w_25;
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
  t = term_k_24;
  t = pass_keep_0_0(t);
  c_12 = t;
  t = term_k_24;
  t = pass_verbose_0_0(t);
  d_12 = t;
  t = term_k_24;
  t = pass_includes_0_0(t);
  e_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_12), d_12), c_12);
  t = concat_0_0(t);
  f_12 = t;
  t = (ATerm) ATinsert(CheckATermList(f_12), term_x_25);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_w_25;
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
  t = term_k_24;
  t = pass_keep_0_0(t);
  h_12 = t;
  t = term_k_24;
  t = pass_verbose_0_0(t);
  i_12 = t;
  t = term_k_24;
  t = pass_includes_0_0(t);
  j_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_12), i_12), h_12);
  t = concat_0_0(t);
  k_12 = t;
  t = (ATerm) ATinsert(CheckATermList(k_12), term_x_25);
  return(t);
}
ATerm str2astratego_0_0 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_26 = t;
      int c_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(c_26);
        }
      else
        {
          t = a_26;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(z_25);
      t = xtc_transform_file_2_0(t_2, u_2, t);
    }
  else
    {
      t = y_25;
      t = xtc_transform_term_2_0(v_2, w_2, t);
    }
  return(t);
}
ATerm pre_process_helper_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL;
  if(match_cons(t, sym__2))
    {
      o_12 = ATgetArgument(t, 0);
      p_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_12;
  if(match_cons(t, sym_AST_0))
    {
      t = p_12;
    }
  else
    {
      if(!(match_cons(t, sym_Module_0)))
        _fail(t);
      t = p_12;
      t = str2astratego_0_0(t);
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue)));
      {
        ATerm g_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_23 = NULL;
            t = eval_config_0_0(t);
            w_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue)), w_23);
            t = w_23;
            ;
            LocalPopChoice(h_26);
          }
        else
          {
            t = g_26;
          }
      }
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      t = term_i_26;
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL;
  l_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_24 = NULL;
        t = l_13;
        t = k_0(t);
        a_24 = t;
        {
          ATerm m_26 = t;
          int o_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(o_26);
            }
          else
            {
              t = m_26;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(m_13, a_24);
          t = (ATerm) ATmakeAppl(sym_FILE_1, m_13);
        }
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        {
          ATerm p_26 = t;
          int s_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_24 = NULL;
              t = l_13;
              t = k_0(t);
              g_24 = t;
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
                                ATerm h_24 = NULL;
                                h_24 = t;
                                if((m_13 != t))
                                  {
                                    _fail(t);
                                  }
                                t = h_24;
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
                t = SSL_copy(m_13, g_24);
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_13);
              }
              ;
              LocalPopChoice(s_26);
            }
          else
            {
              t = p_26;
              t = l_13;
              t = k_0(t);
              if((m_13 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_13);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
  if(match_cons(t, sym__2))
    {
      w_13 = ATgetArgument(t, 0);
      x_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_13, x_13);
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_27 = ATgetArgument(t, 0);
            ATerm b_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_13, x_13);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_27 = ATgetFirst((ATermList) t);
            l_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_24;
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATempty;
      }
    y_13 = t;
    t = SSL_table_put(w_13, x_13, y_13);
    t = (ATerm) ATmakeAppl(sym__2, w_13, x_13);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm p_86 (ATerm), ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,i_14 = NULL,j_14 = NULL;
  f_14 = t;
  t = p_86(t);
  g_14 = t;
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(g_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_14 = ATgetFirst((ATermList) t);
        i_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(g_14, (ATerm)ATmakeAppl(sym_Scopes_0), i_14);
    t = j_14;
    {
      ATerm x_2 (ATerm t)
      {
        ATerm k_14 = NULL;
        k_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_14, k_14);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(x_2, t);
      t = f_14;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_87(t);
      t = l_87(t);
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      t = l_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_86 (ATerm), ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  t = o_86(t);
  o_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_14, term_h_27);
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
        t = SSL_table_get(o_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = (ATerm) ATempty;
      }
    p_14 = t;
    t = SSL_table_put(o_14, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(p_14), (ATerm) ATempty));
    t = n_14;
  }
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_15 = NULL;
      a_15 = t;
      t = SSL_remove(a_15);
      ;
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm v_14 = NULL;
  t = begin_scope_1_0(y_2, t);
  {
    ATerm z_2 (ATerm t)
    {
      ATerm w_14 = NULL;
      w_14 = t;
      {
        ATerm p_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(q_27);
          }
        else
          {
            t = p_27;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((v_14 != NULL) && (v_14 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              v_14 = ATgetFirst((ATermList) t);
            {
              ATerm r_27 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(v_14);
        t = map_1_0(b_3, t);
        t = w_14;
        t = end_scope_1_0(c_3, t);
      }
      return(t);
    }
    t = restore_always_2_0(t_89, z_2, t);
  }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
      {
        ATerm u_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_24 = NULL;
            t = eval_config_0_0(t);
            w_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), w_24);
            t = w_24;
            ;
            LocalPopChoice(v_27);
          }
        else
          {
            t = u_27;
          }
      }
      ;
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
      t = term_w_27;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_15 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm z_27 = t;
          int a_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_24 = NULL;
              t = eval_config_0_0(t);
              s_24 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), s_24);
              t = s_24;
              ;
              LocalPopChoice(a_28);
            }
          else
            {
              t = z_27;
            }
          c_15 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, c_15);
        }
        ;
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        t = term_l_10;
      }
    t = u_89(t);
    t = copy_to_1_0(e_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(d_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL;
  d_15 = t;
  t = term_k_24;
  t = whoami_0_0(t);
  e_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_15), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = d_15;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm g_15 = NULL;
  g_15 = t;
  if(match_string(t, "-k"))
    {
      t = g_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_15;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  h_15 = t;
  t = SSL_string_to_int(h_15);
  i_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), i_15);
  t = h_15;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_b_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_3, g_3, h_3, t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm k_15 = NULL;
  k_15 = t;
  if(match_string(t, "-S"))
    {
      t = k_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_15;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_e_28;
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_f_28;
  return(t);
}
ATerm v_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL;
  l_15 = t;
  t = SSL_string_to_int(l_15);
  m_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), m_15);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_15);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_g_28;
  return(t);
}
ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_h_28;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_i_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_3, o_3, u_3, t);
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      {
        ATerm o_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_3, w_3, y_3, t);
            ;
            LocalPopChoice(p_28);
          }
        else
          {
            t = o_28;
            t = Option_3_0(z_3, a_4, b_4, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_15 = NULL;
      t = term_k_24;
      t = d_0(t);
      s_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_28, term_r_28, s_15);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm v_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_15 = ATgetFirst((ATermList) t);
          r_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_15;
      t = a_0(t);
      t = term_k_24;
      t = b_0(t);
      v_15 = t;
      t = (ATerm) ATinsert(CheckATermList(r_15), v_15);
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm x_15 = NULL;
  x_15 = t;
  if(match_string(t, "-o"))
    {
      t = x_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_15;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm y_15 = NULL;
  y_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), y_15);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_15);
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_s_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_4, d_4, e_4, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm a_16 = NULL;
  a_16 = t;
  if(match_string(t, "-i"))
    {
      t = a_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_16;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm b_16 = NULL;
  b_16 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), b_16);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_16);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_t_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, h_4, i_4, t);
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
  if(match_cons(t, sym__2))
    {
      d_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_16;
  {
    ATerm u_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), d_16);
        {
          ATerm w_28 = t;
          int x_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_25 = NULL;
              t = eval_config_0_0(t);
              a_25 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), d_16, a_25);
              t = a_25;
              ;
              LocalPopChoice(x_28);
            }
          else
            {
              t = w_28;
            }
        }
        ;
        LocalPopChoice(v_28);
      }
    else
      {
        t = u_28;
        t = (ATerm) ATempty;
      }
    f_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_16, f_16);
    {
      ATerm y_28 = t;
      int z_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm a_29 = ATgetArgument(t, 0);
              ATerm b_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_16;
          {
            ATerm j_4 (ATerm t)
            {
              t = f_16;
              return(t);
            }
            t = at_end_1_0(j_4, t);
          }
          ;
          LocalPopChoice(z_28);
        }
      else
        {
          t = y_28;
          {
            ATerm e_25 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, e_16, f_16));
            if(match_cons(t, sym__2))
              {
                ATerm c_29 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) c_29) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                e_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_25;
            t = concat_0_0(t);
          }
        }
      g_16 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), d_16, g_16);
      t = (ATerm) ATmakeAppl(sym__3, term_d_29, d_16, g_16);
    }
  }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
  if(match_cons(t, sym__3))
    {
      n_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
      p_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_16, o_16);
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_29 = ATgetArgument(t, 0);
            ATerm h_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_16, o_16);
        ;
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        t = (ATerm) ATempty;
      }
    q_16 = t;
    t = SSL_table_put(n_16, o_16, (ATerm) ATinsert(CheckATermList(q_16), p_16));
    t = (ATerm) ATmakeAppl(sym__3, n_16, o_16, p_16);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_17 = NULL;
      t = term_k_24;
      t = j_0(t);
      c_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_28, term_r_28, c_17);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm h_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_16 = ATgetFirst((ATermList) t);
          z_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_17 = ATgetFirst((ATermList) t);
          b_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_16;
      t = h_0(t);
      t = a_17;
      t = i_0(t);
      h_17 = t;
      t = (ATerm) ATinsert(CheckATermList(b_17), h_17);
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm j_17 = NULL;
  j_17 = t;
  if(match_string(t, "-I"))
    {
      t = j_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = j_17;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm k_17 = NULL;
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_29, (ATerm) ATinsert(ATinsert(ATempty, k_17), term_i_29));
  t = extend_config_0_0(t);
  t = term_k_24;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm include_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, n_4, o_4, t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm l_17 = NULL;
  l_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue)), (ATerm) ATmakeAppl(sym_AST_0));
  t = l_17;
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--mod", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm m_17 = NULL;
  m_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--mod", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Module_0));
  t = m_17;
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_l_29;
  return(t);
}
ATerm input_type_option_0_0 (ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_4, q_4, r_4, t);
      ;
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      t = Option_3_0(u_4, x_4, z_4, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_17 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_24;
  t = whoami_0_0(t);
  n_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), n_17));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_25 = NULL;
        t = eval_config_0_0(t);
        i_25 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_25);
        t = i_25;
        ;
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm t)
{
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_82(t);
      ;
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
      {
        ATerm q_17 = NULL,r_17 = NULL,u_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_17 = ATgetFirst((ATermList) t);
            r_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_17;
        t = foldr_2_0(r_82, s_82, t);
        u_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_17, u_17);
        t = s_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL;
  if(match_cons(t, sym__2))
    {
      n_25 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(n_25, o_25);
        ;
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        t = SSL_addr(n_25, o_25);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_17 = NULL,j_25 = NULL,k_25 = NULL;
  t = times_0_0(t);
  j_25 = t;
  t = SSL_explode_term(j_25);
  if(match_cons(t, sym__2))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      k_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_25;
  t = foldr_2_0(a_5, b_5, t);
  x_17 = t;
  t = SSL_TicksToSeconds(x_17);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  i_18 = t;
  if(match_cons(t, sym__2))
    {
      j_18 = ATgetArgument(t, 0);
      k_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_18;
        if((j_18 != t))
          {
            _fail(t);
          }
        t = i_18;
        ;
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        t = i_18;
        {
          ATerm x_29 = t;
          int y_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_18, k_18);
              ;
              LocalPopChoice(y_29);
            }
          else
            {
              t = x_29;
              t = SSL_gtr(j_18, k_18);
            }
          t = (ATerm) ATmakeAppl(sym__2, j_18, k_18);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_18 = NULL,p_18 = NULL;
      n_18 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm b_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_26 = NULL;
            t = eval_config_0_0(t);
            b_26 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_26);
            t = b_26;
            ;
            LocalPopChoice(c_30);
          }
        else
          {
            t = b_30;
          }
        p_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_18, term_c_10);
        t = geq_0_0(t);
        t = n_18;
        t = w_87(t);
      }
      ;
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL;
  t = run_time_0_0(t);
  r_18 = t;
  t = term_k_24;
  t = whoami_0_0(t);
  s_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), r_18), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), s_18));
  t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_30), r_18), term_s_10), s_18));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
      {
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(h_30);
          }
        else
          {
            t = g_30;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_91 (ATerm), ATerm t)
{
  ATerm i_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm k_30 = t;
        int l_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_26 = NULL;
            t = eval_config_0_0(t);
            f_26 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), f_26);
            t = f_26;
            ;
            LocalPopChoice(l_30);
          }
        else
          {
            t = k_30;
          }
      }
      ;
      LocalPopChoice(j_30);
    }
  else
    {
      t = i_30;
      t = fetch_1_0(d_5, t);
    }
  t = v_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_18 = ATgetFirst((ATermList) t);
      v_18 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_19 = NULL,b_19 = NULL;
        t = v_18;
        t = g_0(t);
        a_19 = t;
        t = u_18;
        t = f_0(t);
        b_19 = t;
        t = v_18;
        {
          ATerm f_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(a_19), b_19);
            return(t);
          }
          t = reverse_acc_2_0(f_0, f_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_24;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm x_68 (ATerm), ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_19);
  c_19 = t;
  t = d_19;
  t = x_68(t);
  e_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, e_19), c_19);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm i_19 = NULL;
  i_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_19), term_m_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm p_30 = t;
        int q_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_26 = NULL;
            t = eval_config_0_0(t);
            j_26 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_26);
            t = j_26;
            ;
            LocalPopChoice(q_30);
          }
        else
          {
            t = p_30;
          }
      }
      ;
      LocalPopChoice(o_30);
    }
  else
    {
      t = n_30;
      t = fetch_1_0(g_5, t);
    }
  t = term_r_30;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, i_5, t);
  t = map_1_0(k_5, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
  m_19 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      k_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_19);
  j_19 = t;
  t = k_19;
  t = y_68(t);
  l_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, l_19), j_19);
  return(t);
}
ATerm fetch_1_0 (ATerm l_76 (ATerm), ATerm t)
{
  ATerm p_19 (ATerm t)
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(l_76, _id, t);
        ;
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        t = Cons_2_0(_id, p_19, t);
      }
    return(t);
  }
  t = p_19(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL;
  r_19 = t;
  {
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_19;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_30 = ATgetFirst((ATermList) t);
                ATerm x_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_19;
          }
        ;
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
        t = (ATerm) ATinsert(ATempty, r_19);
      }
    s_19 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), s_19);
    t = r_19;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_26 = NULL;
        t = eval_config_0_0(t);
        n_26 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_26);
        t = n_26;
        ;
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_31);
    }
  else
    {
      t = a_31;
      {
        ATerm y_19 = NULL,z_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_19 = ATgetFirst((ATermList) t);
            z_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_19;
        {
          ATerm l_5 (ATerm t)
          {
            t = z_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(l_5, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm r_76 (ATerm), ATerm t)
{
  ATerm g_20 (ATerm t)
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_20, t);
        ;
        LocalPopChoice(d_31);
      }
    else
      {
        t = c_31;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_76(t);
      }
    return(t);
  }
  t = g_20(t);
  return(t);
}
ATerm _2_0 (ATerm c_59 (ATerm), ATerm d_59 (ATerm), ATerm t)
{
  ATerm h_20 = NULL,j_20 = NULL,l_20 = NULL,n_20 = NULL,r_20 = NULL,t_20 = NULL;
  t_20 = t;
  if(match_cons(t, sym__2))
    {
      j_20 = ATgetArgument(t, 0);
      l_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_20);
  h_20 = t;
  t = j_20;
  t = c_59(t);
  n_20 = t;
  t = l_20;
  t = d_59(t);
  r_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, n_20, r_20), h_20);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  t = SSL_explode_string(b_21);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  t = SSL_explode_string(c_21);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm a_21 = NULL;
  t = _2_0(n_5, p_5, t);
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_21 = NULL,f_21 = NULL;
        if(match_cons(t, sym__2))
          {
            e_21 = ATgetArgument(t, 0);
            f_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_21;
        {
          ATerm q_5 (ATerm t)
          {
            t = f_21;
            return(t);
          }
          t = at_end_1_0(q_5, t);
        }
        ;
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        {
          ATerm q_26 = NULL,r_26 = NULL;
          q_26 = t;
          t = SSL_explode_term(q_26);
          if(match_cons(t, sym__2))
            {
              ATerm g_31 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_31) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_26;
          t = concat_0_0(t);
        }
      }
    a_21 = t;
    t = SSL_implode_string(a_21);
  }
  return(t);
}
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm t)
{
  ATerm k_21 (ATerm t)
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        t = Cons_2_0(a_76, k_21, t);
      }
    return(t);
  }
  t = k_21(t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm j_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(k_31);
    }
  else
    {
      t = j_31;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_21 = NULL;
      q_21 = t;
      t = SSL_is_string(q_21);
      ;
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      {
        ATerm n_31 = t;
        int o_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_5, t);
            ;
            LocalPopChoice(o_31);
          }
        else
          {
            t = n_31;
            {
              ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
              u_21 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_21 = ATgetArgument(t, 0);
                  t = v_21;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_21 = ATgetArgument(t, 0);
                      t = v_21;
                      {
                        ATerm p_31 = t;
                        int q_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_21);
                            {
                              ATerm r_31 = t;
                              int s_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm k_27 = NULL;
                                  t = eval_config_0_0(t);
                                  k_27 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_21, k_27);
                                  t = k_27;
                                  ;
                                  LocalPopChoice(s_31);
                                }
                              else
                                {
                                  t = r_31;
                                }
                            }
                            ;
                            LocalPopChoice(q_31);
                          }
                        else
                          {
                            t = p_31;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_21), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = v_21;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_22 = NULL,b_22 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_21 = ATgetArgument(t, 0);
                          w_21 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_21;
                      t = eval_config_0_0(t);
                      a_22 = t;
                      t = w_21;
                      t = eval_config_0_0(t);
                      b_22 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_22, b_22);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_u_31;
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_v_31;
  return(t);
}
ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_w_31;
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_x_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_5, x_5, z_5, t);
      ;
      LocalPopChoice(z_31);
    }
  else
    {
      t = y_31;
      t = Option_3_0(a_6, e_6, f_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_63 (ATerm), ATerm s_63 (ATerm), ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL;
  l_22 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_22 = ATgetFirst((ATermList) t);
      i_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_22);
  g_22 = t;
  t = h_22;
  t = r_63(t);
  j_22 = t;
  t = i_22;
  t = s_63(t);
  k_22 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(k_22), j_22), g_22);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_22);
  t = (ATerm) ATmakeAppl(sym_Program_1, q_22);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm p_22 = NULL;
  p_22 = t;
  {
    ATerm a_32 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_32;
        t = t_93(t);
        ;
        LocalPopChoice(b_32);
      }
    else
      {
        t = a_32;
      }
    t = p_22;
    {
      ATerm h_6 (ATerm t)
      {
        ATerm d_32 = t;
        int e_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_32 = t;
            int g_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(g_32);
              }
            else
              {
                t = f_32;
                t = t_93(t);
                t = Cons_2_0(_id, h_6, t);
              }
            ;
            LocalPopChoice(e_32);
          }
        else
          {
            t = d_32;
            {
              ATerm s_22 = NULL,t_22 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_22 = ATgetFirst((ATermList) t);
                  t_22 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_22), (ATerm) ATmakeAppl(sym_Undefined_1, s_22));
            }
          }
        return(t);
      }
      t = Cons_2_0(g_6, h_6, t);
    }
  }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm h_23 = NULL;
  h_23 = t;
  if(match_string(t, "--help"))
    {
      t = h_23;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_23;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_23;
        }
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_h_32;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_i_32;
  return(t);
}
ATerm r_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_93 (ATerm), ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
  b_23 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = b_23;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm j_32 = t;
      int k_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_93(t);
          ;
          LocalPopChoice(k_32);
        }
      else
        {
          t = j_32;
          {
            ATerm l_32 = t;
            int m_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_6, o_6, p_6, t);
                ;
                LocalPopChoice(m_32);
              }
            else
              {
                t = l_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_6, t);
    {
      ATerm n_32 = t;
      int o_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_23 = NULL;
          m_23 = t;
          {
            ATerm p_32 = t;
            int q_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = m_23;
                {
                  ATerm r_32 = t;
                  int s_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm t_32 = t;
                        int u_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_28 = NULL;
                            t = eval_config_0_0(t);
                            c_28 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), c_28);
                            t = c_28;
                            ;
                            LocalPopChoice(u_32);
                          }
                        else
                          {
                            t = t_32;
                          }
                      }
                      ;
                      LocalPopChoice(s_32);
                    }
                  else
                    {
                      t = r_32;
                      t = fetch_1_0(r_6, t);
                    }
                  t = m_23;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(q_32);
              }
            else
              {
                t = p_32;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm v_32 = t;
                  int w_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_28 = NULL;
                      t = eval_config_0_0(t);
                      j_28 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), j_28);
                      t = j_28;
                      ;
                      LocalPopChoice(w_32);
                    }
                  else
                    {
                      t = v_32;
                    }
                  t = m_23;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(o_32);
        }
      else
        {
          t = n_32;
          {
            ATerm x_32 = t;
            int y_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_6 (ATerm t)
                {
                  ATerm y_6 (ATerm t)
                  {
                    if(((c_23 != NULL) && (c_23 != t)))
                      _fail(t);
                    else
                      c_23 = t;
                    return(t);
                  }
                  t = Undefined_1_0(y_6, t);
                  return(t);
                }
                t = fetch_1_0(x_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(c_23)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_23)), term_z_32));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(y_32);
              }
            else
              {
                t = x_32;
              }
          }
        }
      d_23 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = d_23;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm t)
{
  ATerm p_23 = NULL;
  t = parse_options_1_0(x_91, t);
  p_23 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), p_23);
  t = p_23;
  t = z_91(t);
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_91, t);
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
              t = a_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_33);
            }
          else
            {
              t = c_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_type_option_0_0(t);
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
            t = include_option_0_0(t);
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
                  t = input_option_0_0(t);
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
                        t = output_option_0_0(t);
                        ;
                        LocalPopChoice(l_33);
                      }
                    else
                      {
                        t = k_33;
                        {
                          ATerm m_33 = t;
                          int n_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(b_7, c_7, e_7, t);
                              ;
                              LocalPopChoice(n_33);
                            }
                          else
                            {
                              t = m_33;
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
ATerm a_7 (ATerm t)
{
  t = xtc_io_1_0(g_7, t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_33;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_r_33;
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  m_28 = t;
  t = term_k_24;
  t = get_input_type_0_0(t);
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_28, m_28);
  t = pre_process_helper_0_0(t);
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_33 = t;
        int v_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(v_33);
          }
        else
          {
            t = u_33;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(t_33);
        t = xtc_transform_file_2_0(h_7, pass_verbose_0_0, t);
      }
    else
      {
        t = s_33;
        t = xtc_transform_term_2_0(k_7, pass_verbose_0_0, t);
      }
    {
      ATerm w_33 = t;
      int x_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_33 = t;
          int z_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(z_33);
            }
          else
            {
              t = y_33;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(x_33);
          t = xtc_transform_file_2_0(p_7, pass_verbose_0_0, t);
        }
      else
        {
          t = w_33;
          t = xtc_transform_term_2_0(q_7, pass_verbose_0_0, t);
        }
      t = pp_astratego_0_0(t);
    }
  }
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_a_34;
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_a_34;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_b_34;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_b_34;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(z_6, default_usage_0_0, _id, a_7, t);
  return(t);
}
