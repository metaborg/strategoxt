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
ATerm term_s_30;
ATerm term_l_30;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_e_29;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_a_28;
ATerm term_x_27;
ATerm term_n_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_c_26;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_j_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_x_23;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_o_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
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
ATerm term_d_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_r_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
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
ATerm term_s_12;
ATerm term_p_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_z_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
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
ATerm term_v_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_k_10;
ATerm term_h_10;
ATerm term_r_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_f_9;
ATerm term_c_9;
ATerm term_b_9;
void init_constant_terms (void)
{
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_r_9, term_b_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_e_11, term_f_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_11, term_i_11, term_j_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_s_11, term_t_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_11, term_z_11, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_j_12, term_k_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_x_12, term_y_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_b_13, term_c_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_f_13, term_g_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_l_13, term_m_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_p_13, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_w_13, term_x_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_r_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_b_15, term_c_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_i_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_s_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_c_16, term_d_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_n_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_y_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_d_17, term_g_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_l_17, term_m_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_v_17, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_f_18, term_i_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_18, term_l_18, term_m_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_18, term_r_18, term_s_18);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_19, term_g_19, term_h_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("astratego2tg", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sc", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Module_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast          Input is Stratego AST.", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--mod          Input is Stratego module (.str, .cr, .r or .rtree) (default).", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_26);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym__3, term_a_25, term_j_29, term_a_24);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("tg2typematch", 0, ATtrue));
}
ATerm xtc_transform_1_0 (ATerm p_83 (ATerm), ATerm);
ATerm abox2text_0_0 (ATerm);
ATerm ast2abox_0_0 (ATerm);
ATerm stratego_ensugar_0_0 (ATerm);
ATerm pp_astratego_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm p_65 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm u_69 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm c_64 (ATerm), ATerm d_64 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm e_64 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm a_81 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm b_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm v_78 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm f_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm z_80 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm b_81 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm l_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm k_81 (ATerm), ATerm);
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
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm o_83 (ATerm), ATerm);
ATerm assert_1_0 (ATerm z_79 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm i_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm y_61 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm);
ATerm astratego2tg_0_0 (ATerm);
ATerm pass_includes_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm str2astratego_0_0 (ATerm);
ATerm pre_process_helper_0_0 (ATerm);
ATerm get_input_type_0_0 (ATerm);
ATerm pre_process_input_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm include_option_0_0 (ATerm);
ATerm input_type_option_0_0 (ATerm);
ATerm sig2_options_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm w_79 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_79 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm a_83 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm b_83 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm);
ATerm crush_2_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_80 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm c_85 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm f_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm g_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm s_69 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm x_85 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_69 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm q_55 (ATerm), ATerm r_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm b_65 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm c_87 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm a_87 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm z_86 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm);
ATerm xtc_io_wrap_2_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm);
ATerm str_tg_str_wrap_1_0 (ATerm z_62 (ATerm), ATerm);
ATerm io_sig2typematch_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm xtc_transform_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2_0(p_83, c_0, t);
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    t = term_b_9;
    return(t);
  }
  t = xtc_transform_1_0(e_0, t);
  return(t);
}
ATerm ast2abox_0_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    t = term_c_9;
    return(t);
  }
  ATerm o_0 (ATerm t)
  {
    ATerm a_1 = NULL;
    t = term_f_9;
    t = xtc_find_0_0(t);
    a_1 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, a_1), term_k_9);
    return(t);
  }
  t = xtc_transform_2_0(n_0, o_0, t);
  return(t);
}
ATerm stratego_ensugar_0_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    t = term_l_9;
    return(t);
  }
  t = xtc_transform_2_0(p_0, pass_verbose_0_0, t);
  return(t);
}
ATerm pp_astratego_0_0 (ATerm t)
{
  t = stratego_ensugar_0_0(t);
  t = ast2abox_0_0(t);
  t = abox2text_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL;
  t = term_m_9;
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        t = term_r_9;
      }
    c_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_1, term_r_9);
    {
      ATerm x_9 = t;
      int g_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(c_1, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(g_10);
        }
      else
        {
          t = x_9;
          t = SSL_subtr(c_1, (ATerm) ATmakeInt(1));
        }
      e_1 = t;
      t = SSL_int_to_string(e_1);
      d_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, d_1), term_m_9);
    }
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm k_1 = NULL,m_1 = NULL;
  k_1 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = k_1;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          m_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(m_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm p_65 (ATerm), ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL;
  if(match_cons(t, sym__2))
    {
      o_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_1, term_h_10);
  t = open_stream_0_0(t);
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_1, p_1);
  t = p_65(t);
  t = fclose_0_0(t);
  t = p_1;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm v_1 = NULL,e_2 = NULL,f_2 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm i_10 = ATgetArgument(t, 0);
        if(match_cons(i_10, sym_Stream_1))
          {
            v_1 = ATgetArgument(i_10, 0);
          }
        else
          _fail(t);
        e_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(v_1, e_2);
    f_2 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, f_2);
    return(t);
  }
  t = WriteToFile_1_0(q_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm g_2 = NULL,j_2 = NULL;
  g_2 = t;
  t = xtc_new_file_0_0(t);
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_2, g_2);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(j_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, j_2);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(x_83, y_83, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm k_2 = NULL;
  ATerm s_0 (ATerm t)
  {
    ATerm l_2 = NULL;
    l_2 = t;
    t = SSL_explode_string(l_2);
    return(t);
  }
  t = map_1_0(s_0, t);
  t = concat_0_0(t);
  k_2 = t;
  t = SSL_implode_string(k_2);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,k_3 = NULL,m_3 = NULL;
  g_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      h_3 = ATgetArgument(t, 0);
      {
        ATerm r_0 = NULL;
        t = SSL_int_to_string(h_3);
        r_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_10), r_0), term_k_10);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm z_0 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          h_3 = ATgetArgument(t, 0);
          k_3 = ATgetArgument(t, 1);
          m_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(k_3);
      z_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_3), term_v_10), z_0), term_p_10), h_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_69 (ATerm), ATerm t)
{
  ATerm r_3 = NULL;
  ATerm t_0 (ATerm t)
  {
    t = u_69(t);
    r_3 = t;
    return(t);
  }
  t = fetch_1_0(t_0, t);
  t = not_null(r_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm s_3 = NULL;
  s_3 = t;
  {
    ATerm x_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_19), term_t_18), term_n_18), term_j_18), term_c_18), term_t_17), term_h_17), term_z_16), term_s_16), term_o_16), term_k_16), term_y_15), term_o_15), term_f_15), term_v_14), term_k_14), term_b_14), term_u_13), term_n_13), term_h_13), term_d_13), term_z_12), term_p_12), term_f_12), term_u_11), term_m_11), term_g_11), term_c_11);
        {
          ATerm u_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm p_19 = ATgetArgument(t, 0);
                if((s_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm q_19 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(u_0, t);
        }
        ;
        LocalPopChoice(z_10);
      }
    else
      {
        t = x_10;
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
    ATerm v_0 (ATerm t)
    {
      ATerm v_3 = NULL,w_3 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm r_19 = ATgetArgument(t, 0);
          v_3 = ATgetArgument(t, 1);
          {
            ATerm s_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = v_3;
      {
        ATerm u_19 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_19;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        w_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_v_19, (ATerm) ATinsert(ATinsert(ATempty, w_3), term_w_19));
      }
      return(t);
    }
    t = try_1_0(v_0, t);
    t = t_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm c_64 (ATerm), ATerm d_64 (ATerm), ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL;
  y_3 = t;
  t = fork_0_0(t);
  z_3 = t;
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = y_3;
        t = c_64(t);
        ;
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = (ATerm) ATmakeAppl(sym__2, z_3, y_3);
        t = d_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm e_64 (ATerm), ATerm t)
{
  ATerm c_4 = NULL;
  ATerm w_0 (ATerm t)
  {
    ATerm e_4 = NULL;
    if(match_cons(t, sym__2))
      {
        e_4 = ATgetArgument(t, 0);
        c_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(e_4);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm z_19 = ATgetArgument(t, 0);
        if(((ATgetType(z_19) != AT_INT) || (ATgetInt((ATermInt) z_19) != 0)))
          _fail(t);
        {
          ATerm d_20 = ATgetArgument(t, 1);
        }
        {
          ATerm e_20 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = c_4;
    return(t);
  }
  t = fork_2_0(e_64, w_0, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL;
  if(match_cons(t, sym__2))
    {
      f_4 = ATgetArgument(t, 0);
      g_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_0 (ATerm t)
    {
      t = SSL_execvp(f_4, g_4);
      return(t);
    }
    t = fork_and_wait_1_0(x_0, t);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm h_4 = NULL;
  h_4 = t;
  t = SSL_table_keys(h_4);
  {
    ATerm y_0 (ATerm t)
    {
      ATerm k_4 = NULL,m_4 = NULL;
      k_4 = t;
      t = SSL_table_get(h_4, k_4);
      m_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_4, m_4);
      return(t);
    }
    t = map_1_0(y_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm a_81 (ATerm), ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm n_4 = NULL,o_4 = NULL;
    n_4 = t;
    t = term_m_9;
    t = get_config_0_0(t);
    o_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_4, term_f_18);
    t = geq_0_0(t);
    t = n_4;
    t = a_81(t);
    return(t);
  }
  t = try_1_0(b_1, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, v_4));
  {
    ATerm g_1 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((w_4 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          x_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(g_1, t);
    t = not_null(x_4);
  }
  return(t);
}
ATerm filter_1_0 (ATerm b_77 (ATerm), ATerm t)
{
  ATerm f_20 = t;
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
      t = f_20;
      {
        ATerm j_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              t = filter_1_0(b_77, t);
              return(t);
            }
            t = Cons_2_0(b_77, h_1, t);
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = j_20;
            {
              ATerm c_5 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm n_20 = ATgetFirst((ATermList) t);
                  c_5 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = c_5;
              t = filter_1_0(b_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm v_78 (ATerm), ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm i_1 (ATerm t)
    {
      t = v_78(t);
      t = f_5(t);
      return(t);
    }
    t = try_1_0(i_1, t);
    return(t);
  }
  t = f_5(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm g_5 = NULL;
  g_5 = t;
  {
    ATerm j_1 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm s_20 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_20;
          }
      }
      return(t);
    }
    t = repeat_1_0(j_1, t);
    t = g_5;
  }
  return(t);
}
ATerm say_1_0 (ATerm f_65 (ATerm), ATerm t)
{
  ATerm i_5 = NULL,f_1 = NULL;
  i_5 = t;
  t = f_65(t);
  f_1 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, f_1));
  t = i_5;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm j_5 = NULL,k_5 = NULL;
    j_5 = t;
    t = term_m_9;
    t = get_config_0_0(t);
    k_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_5, term_w_13);
    t = geq_0_0(t);
    t = j_5;
    t = z_80(t);
    return(t);
  }
  t = try_1_0(l_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm b_81 (ATerm), ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm n_5 = NULL,o_5 = NULL;
    n_5 = t;
    t = term_m_9;
    t = get_config_0_0(t);
    o_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_5, term_s_11);
    t = geq_0_0(t);
    t = n_5;
    t = b_81(t);
    return(t);
  }
  t = try_1_0(n_1, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,r_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_6 = ATgetFirst((ATermList) t);
      r_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_73(t);
  {
    ATerm r_1 (ATerm t)
    {
      ATerm v_6 = NULL;
      v_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_6, v_6);
      t = p_73(t);
      return(t);
    }
    t = fetch_1_0(r_1, t);
    t = r_6;
  }
  return(t);
}
ATerm union_1_0 (ATerm l_73 (ATerm), ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL;
  if(match_cons(t, sym__2))
    {
      x_6 = ATgetArgument(t, 0);
      w_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6;
  {
    ATerm z_6 (ATerm t)
    {
      ATerm t_20 = t;
      int u_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = w_6;
          ;
          LocalPopChoice(u_20);
        }
      else
        {
          t = t_20;
          {
            ATerm v_20 = t;
            int x_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_1 (ATerm t)
                {
                  t = w_6;
                  return(t);
                }
                t = HdMember_p__2_0(l_73, s_1, t);
                t = z_6(t);
                ;
                LocalPopChoice(x_20);
              }
            else
              {
                t = v_20;
                t = Cons_2_0(_id, z_6, t);
              }
          }
        }
      return(t);
    }
    t = z_6(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm c_7 = NULL;
    if(match_cons(t, sym__2))
      {
        c_7 = ATgetArgument(t, 0);
        if((c_7 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(t_1, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  if(match_cons(t, sym__3))
    {
      i_7 = ATgetArgument(t, 0);
      j_7 = ATgetArgument(t, 1);
      n_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_7, j_7);
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_21 = ATgetArgument(t, 0);
            ATerm e_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(i_7, j_7);
        ;
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        t = (ATerm) ATempty;
      }
    o_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_7, n_7);
    t = union_0_0(t);
    p_7 = t;
    t = SSL_table_put(i_7, j_7, p_7);
    t = (ATerm) ATmakeAppl(sym__3, i_7, j_7, n_7);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm k_81 (ATerm), ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL;
  if(match_cons(t, sym__2))
    {
      r_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm s_7 = NULL,t_7 = NULL;
      if(match_cons(t, sym__2))
        {
          s_7 = ATgetArgument(t, 0);
          t_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, r_7, s_7, t_7);
      t = k_81(t);
      return(t);
    }
    t = map_1_0(u_1, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_8 (ATerm b_8, ATerm t)
  {
    t = SSL_fclose(b_8);
    return(t);
  }
  ATerm e_8 = NULL,f_8 = NULL;
  f_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_8 = ATgetArgument(t, 0);
      {
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_8);
            ;
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
            t = h_8(f_8, t);
          }
      }
    }
  else
    {
      t = h_8(f_8, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_8 = NULL;
  t = SSL_stdin_stream();
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_8 = NULL;
  t = SSL_stdout_stream();
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_8 = NULL;
  t = SSL_stderr_stream();
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_8);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm q_8 = NULL;
  q_8 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_21 = ATgetArgument(t, 0);
      ATerm j_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL,m_2 = NULL;
        i_2 = t;
        t = SSL_explode_term(i_2);
        if(match_cons(t, sym__2))
          {
            ATerm t_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_21 = ATgetArgument(t, 1);
              if(((ATgetType(u_21) == AT_LIST) && !(ATisEmpty(u_21))))
                {
                  m_2 = ATgetFirst((ATermList) u_21);
                  {
                    ATerm v_21 = (ATerm) ATgetNext((ATermList) u_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
        {
          ATerm w_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
              ATerm w_1 (ATerm t)
              {
                ATerm z_8 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    z_8 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = z_8;
                return(t);
              }
              t = _2_0(w_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_8 = ATgetArgument(t, 0);
                  x_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(w_8, x_8);
              y_8 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, y_8);
              ;
              LocalPopChoice(z_21);
            }
          else
            {
              t = w_21;
              {
                ATerm d_9 = NULL,e_9 = NULL,g_9 = NULL;
                ATerm x_1 (ATerm t)
                {
                  ATerm h_9 = NULL;
                  h_9 = t;
                  t = SSL_is_string(h_9);
                  return(t);
                }
                t = _2_0(x_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    d_9 = ATgetArgument(t, 0);
                    e_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(d_9, e_9);
                g_9 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, g_9);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,n_9 = NULL;
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_9 = NULL;
      o_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_9, term_e_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      {
        ATerm y_1 (ATerm t)
        {
          t = term_f_22;
          return(t);
        }
        t = debug_1_0(y_1, t);
        _fail(t);
      }
    }
  i_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(n_9);
  j_9 = t;
  t = i_9;
  t = fclose_0_0(t);
  t = j_9;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm g_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 = NULL;
      o_2 = t;
      t = SSL_access(o_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(k_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_22;
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_22 = t;
            if((PushChoice() == 0))
              {
                ATerm v_2 = NULL;
                v_2 = t;
                t = SSL_access(v_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_22;
              }
            {
              ATerm z_1 (ATerm t)
              {
                t = term_p_22;
                return(t);
              }
              t = debug_1_0(z_1, t);
            }
            ;
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            {
              ATerm a_2 (ATerm t)
              {
                t = term_q_22;
                return(t);
              }
              t = debug_1_0(a_2, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
  s_9 = t;
  {
    ATerm b_2 (ATerm t)
    {
      ATerm c_2 (ATerm t)
      {
        t = term_r_22;
        return(t);
      }
      t = debug_1_0(c_2, t);
      return(t);
    }
    t = if_verbose5_1_0(b_2, t);
    {
      ATerm s_22 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, s_9));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_22;
        }
      t_9 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, s_9));
      t = t_9;
      {
        ATerm d_2 (ATerm t)
        {
          ATerm h_2 (ATerm t)
          {
            t = term_t_22;
            return(t);
          }
          t = debug_1_0(h_2, t);
          return(t);
        }
        t = if_verbose4_1_0(d_2, t);
        t = read_repository_file_0_0(t);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm p_2 (ATerm t)
            {
              t = term_u_22;
              return(t);
            }
            t = say_1_0(p_2, t);
            return(t);
          }
          t = if_verbose6_1_0(n_2, t);
          u_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_22, u_9);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm q_2 (ATerm t)
            {
              ATerm r_2 (ATerm t)
              {
                t = term_w_22;
                return(t);
              }
              t = say_1_0(r_2, t);
              return(t);
            }
            t = if_verbose6_1_0(q_2, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, s_9), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_v_22, (ATerm)ATmakeAppl(sym_Imported_1, s_9), (ATerm) ATempty);
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
              t = if_verbose4_1_0(s_2, t);
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
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      {
        ATerm a_23 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(b_23);
          }
        else
          {
            t = a_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_9 = NULL;
  ATerm u_2 (ATerm t)
  {
    ATerm w_2 (ATerm t)
    {
      t = term_c_23;
      return(t);
    }
    t = debug_1_0(w_2, t);
    return(t);
  }
  t = if_verbose5_1_0(u_2, t);
  v_9 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = v_9;
    {
      ATerm x_2 (ATerm t)
      {
        ATerm y_2 (ATerm t)
        {
          t = term_f_23;
          return(t);
        }
        t = debug_1_0(y_2, t);
        return(t);
      }
      t = if_verbose5_1_0(x_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_2 (ATerm t)
      {
        ATerm a_3 (ATerm t)
        {
          t = term_i_23;
          return(t);
        }
        t = debug_1_0(a_3, t);
        return(t);
      }
      t = if_verbose5_1_0(z_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            {
              ATerm c_3 = NULL,i_3 = NULL;
              c_3 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, c_3));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm l_23 = ATgetFirst((ATermList) t);
                  if(match_cons(l_23, sym__2))
                    {
                      ATerm n_23 = ATgetArgument(l_23, 0);
                      i_3 = ATgetArgument(l_23, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm m_23 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = i_3;
            }
          }
        {
          ATerm b_3 (ATerm t)
          {
            ATerm d_3 (ATerm t)
            {
              t = term_i_23;
              return(t);
            }
            t = debug_1_0(d_3, t);
            return(t);
          }
          t = if_verbose5_1_0(b_3, t);
        }
      }
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      {
        ATerm w_9 = NULL;
        w_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), w_9), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_23), w_9), term_o_23);
        {
          ATerm e_3 (ATerm t)
          {
            t = term_v_22;
            t = table_getlist_0_0(t);
            {
              ATerm f_3 (ATerm t)
              {
                t = term_q_23;
                return(t);
              }
              t = debug_1_0(f_3, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(e_3, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm o_83 (ATerm), ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL;
  y_9 = t;
  t = o_83(t);
  t = xtc_find_warning_0_0(t);
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_9, y_9);
  t = call_0_0(t);
  t = y_9;
  return(t);
}
ATerm assert_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
  if(match_cons(t, sym__2))
    {
      a_10 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_79(t);
  c_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_10, a_10, b_10);
  t = table_push_0_0(t);
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(c_10, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_10 = ATgetFirst((ATermList) t);
        e_10 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(c_10, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(e_10), (ATerm) ATinsert(CheckATermList(d_10), a_10)));
    t = (ATerm) ATmakeAppl(sym__2, a_10, b_10);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm i_65 (ATerm), ATerm t)
{
  ATerm f_10 = NULL;
  f_10 = t;
  t = i_65(t);
  {
    ATerm j_3 (ATerm t)
    {
      t = term_t_23;
      return(t);
    }
    t = debug_1_0(j_3, t);
    t = f_10;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm t_10 (ATerm j_10, ATerm t)
  {
    t = j_10;
    {
      ATerm u_23 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm v_23 = ATgetArgument(t, 0);
              ATerm w_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = u_23;
        }
      {
        ATerm l_3 (ATerm t)
        {
          t = term_x_23;
          return(t);
        }
        t = obsolete_1_0(l_3, t);
        t = (ATerm) ATmakeAppl(sym__2, j_10, term_h_10);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm u_10 (ATerm l_10, ATerm m_10, ATerm n_10, ATerm t)
  {
    t = SSL_open_file(l_10, m_10);
    return(t);
  }
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
  q_10 = t;
  if(match_cons(t, sym__2))
    {
      r_10 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_10(q_10, t);
            ;
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            t = u_10(r_10, s_10, q_10, t);
          }
      }
    }
  else
    {
      t = t_10(q_10, t);
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
  ATerm w_10 = NULL;
  t = term_a_24;
  t = new_0_0(t);
  w_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_10, term_b_24);
  t = conc_strings_0_0(t);
  {
    ATerm n_3 (ATerm t)
    {
      ATerm q_3 = NULL;
      q_3 = t;
      t = SSL_access(q_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(n_3, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm y_10 = NULL;
  t = new_file_0_0(t);
  y_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_10, term_h_10);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, y_10, term_a_24);
  {
    ATerm o_3 (ATerm t)
    {
      t = term_c_24;
      return(t);
    }
    t = assert_1_0(o_3, t);
    t = y_10;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  k_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_3 = NULL,a_4 = NULL;
      t = k_11;
      t = xtc_new_file_0_0(t);
      x_3 = t;
      t = m_0(t);
      a_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_4, (ATerm) ATinsert(ATinsert(ATempty, x_3), term_d_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(x_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_3);
    }
  else
    {
      ATerm l_4 = NULL,r_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          l_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_11;
      t = xtc_new_file_0_0(t);
      l_4 = t;
      t = m_0(t);
      r_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_4), term_d_24), l_11), term_e_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(l_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_4);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm y_61 (ATerm), ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
  r_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_11);
  o_11 = t;
  t = p_11;
  t = y_61(t);
  q_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, q_11), o_11);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm t)
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_24 = t;
      int i_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(i_24);
        }
      else
        {
          t = h_24;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(g_24);
      t = xtc_transform_file_2_0(q_83, r_83, t);
    }
  else
    {
      t = f_24;
      t = xtc_transform_term_2_0(q_83, r_83, t);
    }
  return(t);
}
ATerm astratego2tg_0_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    t = term_j_24;
    return(t);
  }
  t = xtc_transform_2_0(p_3, pass_verbose_0_0, t);
  return(t);
}
ATerm pass_includes_0_0 (ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
  t = term_n_24;
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        t = term_r_9;
      }
    w_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_11, term_r_9);
    {
      ATerm q_24 = t;
      int r_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(w_11, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(r_24);
        }
      else
        {
          t = q_24;
          t = SSL_subtr(w_11, (ATerm) ATmakeInt(1));
        }
      y_11 = t;
      t = SSL_int_to_string(y_11);
      x_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, x_11), term_n_24);
    }
  }
  return(t);
}
ATerm str2astratego_0_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    t = term_s_24;
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
    t = term_a_24;
    t = pass_keep_0_0(t);
    a_12 = t;
    t = term_a_24;
    t = pass_verbose_0_0(t);
    b_12 = t;
    t = term_a_24;
    t = pass_includes_0_0(t);
    c_12 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_12), b_12), a_12);
    t = concat_0_0(t);
    d_12 = t;
    t = (ATerm) ATinsert(CheckATermList(d_12), term_t_24);
    return(t);
  }
  t = xtc_transform_2_0(u_3, b_4, t);
  return(t);
}
ATerm pre_process_helper_0_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL;
  if(match_cons(t, sym__2))
    {
      h_12 = ATgetArgument(t, 0);
      i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12;
  if(match_cons(t, sym_AST_0))
    {
      t = i_12;
    }
  else
    {
      if(!(match_cons(t, sym_Module_0)))
        _fail(t);
      t = i_12;
      t = str2astratego_0_0(t);
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_24);
    }
  else
    {
      t = u_24;
      t = term_x_24;
    }
  return(t);
}
ATerm pre_process_input_0_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL;
  l_12 = t;
  t = term_a_24;
  t = get_input_type_0_0(t);
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_12, l_12);
  t = pre_process_helper_0_0(t);
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,q_12 = NULL,r_12 = NULL;
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_12;
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
        t = (ATerm) ATempty;
      }
    q_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_12, q_12);
    t = conc_0_0(t);
    r_12 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_12, r_12);
    t = (ATerm) ATmakeAppl(sym__3, term_a_25, n_12, r_12);
  }
  return(t);
}
ATerm include_option_0_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm t_12 = NULL;
    t_12 = t;
    if(match_string(t, "-I"))
      {
        t = t_12;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
          _fail(t);
        t = t_12;
      }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    ATerm u_12 = NULL;
    u_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_24, (ATerm) ATinsert(ATinsert(ATempty, u_12), term_m_24));
    t = extend_config_0_0(t);
    t = term_a_24;
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = term_b_25;
    return(t);
  }
  t = ArgOption_3_0(d_4, i_4, j_4, t);
  return(t);
}
ATerm input_type_option_0_0 (ATerm t)
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm q_4 (ATerm t)
      {
        ATerm v_12 = NULL;
        v_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue)), (ATerm) ATmakeAppl(sym_AST_0));
        t = v_12;
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = term_e_25;
        return(t);
      }
      t = Option_3_0(p_4, q_4, s_4, t);
      ;
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      {
        ATerm t_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--mod", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm u_4 (ATerm t)
        {
          ATerm w_12 = NULL;
          w_12 = t;
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--mod", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Module_0));
          t = w_12;
          return(t);
        }
        ATerm y_4 (ATerm t)
        {
          t = term_f_25;
          return(t);
        }
        t = Option_3_0(t_4, u_4, y_4, t);
      }
    }
  return(t);
}
ATerm sig2_options_0_0 (ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_type_option_0_0(t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      t = include_option_0_0(t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  j_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_5 = NULL;
        t = j_13;
        t = k_0(t);
        t_5 = t;
        {
          ATerm k_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(l_25);
            }
          else
            {
              t = k_25;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(k_13, t_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, k_13);
        }
        ;
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        {
          ATerm m_25 = t;
          int n_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_5 = NULL;
              t = j_13;
              t = k_0(t);
              z_5 = t;
              {
                ATerm o_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm p_25 = t;
                    int q_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(q_25);
                      }
                    else
                      {
                        t = p_25;
                        {
                          ATerm r_25 = t;
                          int s_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(s_25);
                            }
                          else
                            {
                              t = r_25;
                              {
                                ATerm a_6 = NULL;
                                a_6 = t;
                                if((k_13 != t))
                                  {
                                    _fail(t);
                                  }
                                t = a_6;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_25;
                  }
                t = SSL_copy(k_13, z_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, k_13);
              }
              ;
              LocalPopChoice(n_25);
            }
          else
            {
              t = m_25;
              t = j_13;
              t = k_0(t);
              if((k_13 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_13);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL;
  if(match_cons(t, sym__2))
    {
      q_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_6 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm v_25 = ATgetArgument(t, 0);
            ATerm w_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(q_13, r_13);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_25 = ATgetFirst((ATermList) t);
            c_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_6;
        ;
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        t = (ATerm) ATempty;
      }
    s_13 = t;
    t = SSL_table_put(q_13, r_13, s_13);
    t = (ATerm) ATmakeAppl(sym__2, q_13, r_13);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_79 (ATerm), ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL,c_14 = NULL;
  y_13 = t;
  t = w_79(t);
  z_13 = t;
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(z_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_14 = ATgetFirst((ATermList) t);
        a_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(z_13, (ATerm)ATmakeAppl(sym_Scopes_0), a_14);
    t = c_14;
    {
      ATerm z_4 (ATerm t)
      {
        ATerm d_14 = NULL;
        d_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_13, d_14);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(z_4, t);
      t = y_13;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_80(t);
      t = s_80(t);
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
      t = s_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_79 (ATerm), ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  g_14 = t;
  t = v_79(t);
  h_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_14, term_c_26);
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_26 = ATgetArgument(t, 0);
            ATerm g_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = (ATerm) ATempty;
      }
    i_14 = t;
    t = SSL_table_put(h_14, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(i_14), (ATerm) ATempty));
    t = g_14;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm a_83 (ATerm), ATerm t)
{
  ATerm n_14 = NULL;
  ATerm a_5 (ATerm t)
  {
    t = term_c_24;
    return(t);
  }
  t = begin_scope_1_0(a_5, t);
  {
    ATerm b_5 (ATerm t)
    {
      ATerm o_14 = NULL;
      o_14 = t;
      {
        ATerm h_26 = t;
        int i_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(i_26);
          }
        else
          {
            t = h_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_14 = ATgetFirst((ATermList) t);
            {
              ATerm j_26 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = n_14;
        {
          ATerm d_5 (ATerm t)
          {
            ATerm e_5 (ATerm t)
            {
              ATerm p_14 = NULL;
              p_14 = t;
              t = SSL_remove(p_14);
              return(t);
            }
            t = try_1_0(e_5, t);
            return(t);
          }
          t = map_1_0(d_5, t);
          t = o_14;
          {
            ATerm h_5 (ATerm t)
            {
              t = term_c_24;
              return(t);
            }
            t = end_scope_1_0(h_5, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(a_83, b_5, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm b_83 (ATerm), ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_14 = NULL;
        t = term_e_24;
        t = get_config_0_0(t);
        q_14 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_14);
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = term_m_26;
      }
    t = b_83(t);
    {
      ATerm m_5 (ATerm t)
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_24;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            t = term_p_26;
          }
        return(t);
      }
      t = copy_to_1_0(m_5, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(l_5, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm s_14 = NULL;
    s_14 = t;
    if(match_string(t, "-k"))
      {
        t = s_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = s_14;
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm t_14 = NULL,u_14 = NULL;
    t_14 = t;
    t = SSL_string_to_int(t_14);
    u_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), u_14);
    t = t_14;
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_q_26;
    return(t);
  }
  t = ArgOption_3_0(p_5, q_5, r_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5 (ATerm t)
      {
        ATerm w_14 = NULL;
        w_14 = t;
        if(match_string(t, "-S"))
          {
            t = w_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = w_14;
          }
        return(t);
      }
      ATerm u_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_u_26;
        return(t);
      }
      ATerm v_5 (ATerm t)
      {
        t = term_v_26;
        return(t);
      }
      t = Option_3_0(s_5, u_5, v_5, t);
      ;
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
      {
        ATerm w_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm x_5 (ATerm t)
            {
              ATerm x_14 = NULL,a_15 = NULL;
              x_14 = t;
              t = SSL_string_to_int(x_14);
              a_15 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_15);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, x_14);
              return(t);
            }
            ATerm y_5 (ATerm t)
            {
              t = term_y_26;
              return(t);
            }
            t = ArgOption_3_0(w_5, x_5, y_5, t);
            ;
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            {
              ATerm b_6 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm d_6 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_z_26;
                return(t);
              }
              ATerm e_6 (ATerm t)
              {
                t = term_a_27;
                return(t);
              }
              t = Option_3_0(b_6, d_6, e_6, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(c_27);
    }
  else
    {
      t = b_27;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm d_15 = NULL;
    d_15 = t;
    if(match_string(t, "-o"))
      {
        t = d_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = d_15;
      }
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    ATerm e_15 = NULL;
    e_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), e_15);
    t = (ATerm) ATmakeAppl(sym_Output_1, e_15);
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = term_d_27;
    return(t);
  }
  t = ArgOption_3_0(f_6, g_6, h_6, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      {
        ATerm i_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm j_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_g_27;
          return(t);
        }
        ATerm k_6 (ATerm t)
        {
          t = term_h_27;
          return(t);
        }
        t = Option_3_0(i_6, j_6, k_6, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
  j_15 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = j_15;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm r_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_15 = ATgetFirst((ATermList) t);
          l_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_15 = ATgetFirst((ATermList) t);
          n_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_15;
      t = h_0(t);
      t = m_15;
      t = i_0(t);
      r_15 = t;
      t = (ATerm) ATinsert(CheckATermList(n_15), r_15);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm t_15 = NULL;
    t_15 = t;
    if(match_string(t, "-i"))
      {
        t = t_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = t_15;
      }
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    ATerm u_15 = NULL;
    u_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), u_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, u_15);
    return(t);
  }
  ATerm n_6 (ATerm t)
  {
    t = term_i_27;
    return(t);
  }
  t = ArgOption_3_0(l_6, m_6, n_6, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      {
        ATerm l_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(m_27);
          }
        else
          {
            t = l_27;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL;
  v_15 = t;
  t = term_a_24;
  t = whoami_0_0(t);
  w_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), w_15), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = v_15;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_24;
  t = whoami_0_0(t);
  x_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), x_15));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_27;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_75(t);
      ;
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm a_16 = NULL,b_16 = NULL,e_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_16 = ATgetFirst((ATermList) t);
            b_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_16;
        t = foldr_2_0(y_75, z_75, t);
        e_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_16, e_16);
        t = z_75(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL;
  f_16 = t;
  t = SSL_explode_term(f_16);
  if(match_cons(t, sym__2))
    {
      ATerm q_27 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_16;
  t = foldr_2_0(w_73, x_73, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_16 = NULL;
  t = times_0_0(t);
  {
    ATerm o_6 (ATerm t)
    {
      t = term_t_26;
      return(t);
    }
    ATerm q_6 (ATerm t)
    {
      ATerm i_16 = NULL,j_16 = NULL;
      if(match_cons(t, sym__2))
        {
          i_16 = ATgetArgument(t, 0);
          j_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm r_27 = t;
        int s_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(i_16, j_16);
            ;
            LocalPopChoice(s_27);
          }
        else
          {
            t = r_27;
            t = SSL_addr(i_16, j_16);
          }
      }
      return(t);
    }
    t = crush_2_0(o_6, q_6, t);
    h_16 = t;
    t = SSL_TicksToSeconds(h_16);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  v_16 = t;
  if(match_cons(t, sym__2))
    {
      w_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_16;
        if((w_16 != t))
          {
            _fail(t);
          }
        t = v_16;
        ;
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        t = v_16;
        {
          ATerm v_27 = t;
          int w_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_16, x_16);
              ;
              LocalPopChoice(w_27);
            }
          else
            {
              t = v_27;
              t = SSL_gtr(w_16, x_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, w_16, x_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    ATerm b_17 = NULL,c_17 = NULL;
    b_17 = t;
    t = term_m_9;
    t = get_config_0_0(t);
    c_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_17, term_r_9);
    t = geq_0_0(t);
    t = b_17;
    t = w_80(t);
    return(t);
  }
  t = try_1_0(s_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    ATerm e_17 = NULL,f_17 = NULL;
    t = run_time_0_0(t);
    e_17 = t;
    t = term_a_24;
    t = whoami_0_0(t);
    f_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), e_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), f_17));
    t = (ATerm) ATmakeAppl(sym__2, term_v_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_27), e_17), term_p_10), f_17));
    return(t);
  }
  t = if_verbose1_1_0(t_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm c_85 (ATerm), ATerm t)
{
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_27);
    }
  else
    {
      t = y_27;
      {
        ATerm u_6 (ATerm t)
        {
          ATerm b_28 = t;
          int c_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(c_28);
            }
          else
            {
              t = b_28;
              {
                ATerm d_28 = t;
                int e_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(e_28);
                  }
                else
                  {
                    t = d_28;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(u_6, t);
      }
    }
  t = c_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_17 = ATgetFirst((ATermList) t);
      j_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_17 = NULL,o_17 = NULL;
        t = j_17;
        t = g_0(t);
        n_17 = t;
        t = i_17;
        t = f_0(t);
        o_17 = t;
        t = j_17;
        {
          ATerm y_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(n_17), o_17);
            return(t);
          }
          t = reverse_acc_2_0(f_0, y_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_24;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, a_7, t);
  return(t);
}
ATerm Program_1_0 (ATerm f_62 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  s_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_17);
  p_17 = t;
  t = q_17;
  t = f_62(t);
  r_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, r_17), p_17);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      {
        ATerm b_7 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(b_7, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_h_28;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm d_7 (ATerm t)
    {
      ATerm w_17 = NULL;
      w_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, w_17), term_i_28);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(d_7, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm g_62 (ATerm), ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  a_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      y_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_18);
  x_17 = t;
  t = y_17;
  t = g_62(t);
  z_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, z_17), x_17);
  return(t);
}
ATerm fetch_1_0 (ATerm s_69 (ATerm), ATerm t)
{
  ATerm e_18 (ATerm t)
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_69, _id, t);
        ;
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        t = Cons_2_0(_id, e_18, t);
      }
    return(t);
  }
  t = e_18(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  t = fetch_1_0(x_85, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL;
  g_18 = t;
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_28 = ATgetFirst((ATermList) t);
                ATerm o_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_18;
          }
        ;
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = (ATerm) ATinsert(ATempty, g_18);
      }
    h_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), h_18);
    t = g_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_27;
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
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      {
        ATerm p_18 = NULL,q_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_18 = ATgetFirst((ATermList) t);
            q_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_18;
        {
          ATerm e_7 (ATerm t)
          {
            t = q_18;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(e_7, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL;
  u_18 = t;
  t = SSL_explode_term(u_18);
  if(match_cons(t, sym__2))
    {
      ATerm r_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_18;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm y_69 (ATerm), ATerm t)
{
  ATerm w_18 (ATerm t)
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_18, t);
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_69(t);
      }
    return(t);
  }
  t = w_18(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL;
  if(match_cons(t, sym__2))
    {
      y_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_18;
  {
    ATerm f_7 (ATerm t)
    {
      t = x_18;
      return(t);
    }
    t = at_end_1_0(f_7, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm q_55 (ATerm), ATerm r_55 (ATerm), ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  e_19 = t;
  if(match_cons(t, sym__2))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_19);
  z_18 = t;
  t = a_19;
  t = q_55(t);
  c_19 = t;
  t = b_19;
  t = r_55(t);
  d_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, c_19, d_19), z_18);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm i_19 = NULL;
  ATerm g_7 (ATerm t)
  {
    ATerm j_19 = NULL;
    j_19 = t;
    t = SSL_explode_string(j_19);
    return(t);
  }
  ATerm h_7 (ATerm t)
  {
    ATerm k_19 = NULL;
    k_19 = t;
    t = SSL_explode_string(k_19);
    return(t);
  }
  t = _2_0(g_7, h_7, t);
  t = conc_0_0(t);
  i_19 = t;
  t = SSL_implode_string(i_19);
  return(t);
}
ATerm debug_1_0 (ATerm b_65 (ATerm), ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL;
  l_19 = t;
  t = b_65(t);
  m_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_19), m_19));
  t = l_19;
  return(t);
}
ATerm map_1_0 (ATerm i_69 (ATerm), ATerm t)
{
  ATerm n_19 (ATerm t)
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        t = Cons_2_0(i_69, n_19, t);
      }
    return(t);
  }
  t = n_19(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_19 = NULL;
      t_19 = t;
      t = SSL_is_string(t_19);
      ;
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      {
        ATerm a_29 = t;
        int b_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_7 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(k_7, t);
            ;
            LocalPopChoice(b_29);
          }
        else
          {
            t = a_29;
            {
              ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
              a_20 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_20 = ATgetArgument(t, 0);
                  t = b_20;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_20 = ATgetArgument(t, 0);
                      t = b_20;
                      {
                        ATerm c_29 = t;
                        int d_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(d_29);
                          }
                        else
                          {
                            t = c_29;
                            {
                              ATerm l_7 (ATerm t)
                              {
                                t = term_e_29;
                                return(t);
                              }
                              t = debug_1_0(l_7, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm g_20 = NULL,h_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_20 = ATgetArgument(t, 0);
                          c_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_20;
                      t = eval_config_0_0(t);
                      g_20 = t;
                      t = c_20;
                      t = eval_config_0_0(t);
                      h_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_20, h_20);
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
  ATerm k_20 = NULL;
  k_20 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_20);
  {
    ATerm m_7 (ATerm t)
    {
      ATerm l_20 = NULL;
      t = eval_config_0_0(t);
      l_20 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_20, l_20);
      t = l_20;
      return(t);
    }
    t = try_1_0(m_7, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_80(t);
      ;
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_7 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm v_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_k_29;
        return(t);
      }
      ATerm w_7 (ATerm t)
      {
        t = term_l_29;
        return(t);
      }
      t = Option_3_0(u_7, v_7, w_7, t);
      ;
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      {
        ATerm x_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm y_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_m_29;
          return(t);
        }
        ATerm z_7 (ATerm t)
        {
          t = term_n_29;
          return(t);
        }
        t = Option_3_0(x_7, y_7, z_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  if(match_cons(t, sym__3))
    {
      o_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
      q_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_20, p_20);
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_29 = ATgetArgument(t, 0);
            ATerm r_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(o_20, p_20);
        ;
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
        t = (ATerm) ATempty;
      }
    r_20 = t;
    t = SSL_table_put(o_20, p_20, (ATerm) ATinsert(CheckATermList(r_20), q_20));
    t = (ATerm) ATmakeAppl(sym__3, o_20, p_20, q_20);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm w_20 = NULL;
  t = term_a_24;
  t = c_87(t);
  w_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_29, term_t_29, w_20);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm y_20 = NULL,b_21 = NULL,c_21 = NULL;
  y_20 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = y_20;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm i_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_21 = ATgetFirst((ATermList) t);
          c_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_21;
      t = a_0(t);
      t = term_a_24;
      t = b_0(t);
      i_21 = t;
      t = (ATerm) ATinsert(CheckATermList(c_21), i_21);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    ATerm k_21 = NULL;
    k_21 = t;
    if(match_string(t, "--help"))
      {
        t = k_21;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = k_21;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = k_21;
          }
      }
    return(t);
  }
  ATerm c_8 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_u_29;
    return(t);
  }
  ATerm d_8 (ATerm t)
  {
    t = term_v_29;
    return(t);
  }
  t = Option_3_0(a_8, c_8, d_8, t);
  return(t);
}
ATerm Cons_2_0 (ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
  q_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_21 = ATgetFirst((ATermList) t);
      n_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_21);
  l_21 = t;
  t = m_21;
  t = z_56(t);
  o_21 = t;
  t = n_21;
  t = a_57(t);
  p_21 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(p_21), o_21), l_21);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_87 (ATerm), ATerm t)
{
  ATerm x_21 = NULL;
  x_21 = t;
  {
    ATerm g_8 (ATerm t)
    {
      t = term_w_29;
      t = a_87(t);
      return(t);
    }
    t = try_1_0(g_8, t);
    t = x_21;
    {
      ATerm l_8 (ATerm t)
      {
        ATerm y_21 = NULL;
        y_21 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), y_21);
        t = (ATerm) ATmakeAppl(sym_Program_1, y_21);
        return(t);
      }
      ATerm m_8 (ATerm t)
      {
        ATerm x_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_29 = t;
            int a_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(a_30);
              }
            else
              {
                t = z_29;
                t = a_87(t);
                t = Cons_2_0(_id, m_8, t);
              }
            ;
            LocalPopChoice(y_29);
          }
        else
          {
            t = x_29;
            {
              ATerm a_22 = NULL,b_22 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_22 = ATgetFirst((ATermList) t);
                  b_22 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_22), (ATerm) ATmakeAppl(sym_Undefined_1, a_22));
            }
          }
        return(t);
      }
      t = Cons_2_0(l_8, m_8, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm z_86 (ATerm), ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
  h_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = h_22;
  {
    ATerm n_8 (ATerm t)
    {
      ATerm b_30 = t;
      int c_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_86(t);
          ;
          LocalPopChoice(c_30);
        }
      else
        {
          t = b_30;
          {
            ATerm d_30 = t;
            int e_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(e_30);
              }
            else
              {
                t = d_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_8, t);
    {
      ATerm o_8 (ATerm t)
      {
        ATerm f_30 = t;
        int g_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_22 = NULL;
            o_22 = t;
            {
              ATerm h_30 = t;
              int i_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_22;
                  {
                    ATerm j_30 = t;
                    int k_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_a_28;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(k_30);
                      }
                    else
                      {
                        t = j_30;
                        {
                          ATerm p_8 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(p_8, t);
                        }
                      }
                    t = o_22;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(i_30);
                }
              else
                {
                  t = h_30;
                  t = term_j_29;
                  t = get_config_0_0(t);
                  t = o_22;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(g_30);
          }
        else
          {
            t = f_30;
            {
              ATerm r_8 (ATerm t)
              {
                ATerm s_8 (ATerm t)
                {
                  i_22 = t;
                  return(t);
                }
                t = Undefined_1_0(s_8, t);
                return(t);
              }
              t = option_defined_1_0(r_8, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(i_22)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_v_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_22)), term_l_30));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(o_8, t);
      j_22 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = j_22;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm t)
{
  ATerm z_14 = NULL;
  t = parse_options_1_0(e_85, t);
  z_14 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), z_14);
  t = z_14;
  t = g_85(t);
  {
    ATerm m_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_85, t);
        ;
        LocalPopChoice(n_30);
      }
    else
      {
        t = m_30;
        {
          ATerm o_30 = t;
          int p_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(p_30);
            }
          else
            {
              t = o_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm t)
{
  t = option_wrap_4_0(i_85, default_usage_0_0, _id, j_85, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_83(t);
        ;
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm u_8 (ATerm t)
  {
    t = xtc_io_1_0(g_83, t);
    return(t);
  }
  t = option_wrap_2_0(t_8, u_8, t);
  return(t);
}
ATerm str_tg_str_wrap_1_0 (ATerm z_62 (ATerm), ATerm t)
{
  ATerm v_8 (ATerm t)
  {
    t = pre_process_input_0_0(t);
    t = astratego2tg_0_0(t);
    t = xtc_transform_2_0(z_62, pass_verbose_0_0, t);
    t = pp_astratego_0_0(t);
    return(t);
  }
  t = xtc_io_wrap_2_0(sig2_options_0_0, v_8, t);
  return(t);
}
ATerm io_sig2typematch_0_0 (ATerm t)
{
  ATerm a_9 (ATerm t)
  {
    t = term_s_30;
    return(t);
  }
  t = str_tg_str_wrap_1_0(a_9, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_sig2typematch_0_0(t);
  return(t);
}
