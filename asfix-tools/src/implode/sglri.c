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
ATerm term_x_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_q_28;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_g_27;
ATerm term_d_27;
ATerm term_t_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_s_25;
ATerm term_i_25;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_j_24;
ATerm term_g_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_k_23;
ATerm term_g_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_w_21;
ATerm term_u_21;
ATerm term_z_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_o_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_g_14;
ATerm term_c_14;
ATerm term_y_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_j_11;
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
ATerm term_u_10;
ATerm term_s_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_h_10;
ATerm term_d_10;
ATerm term_u_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_v_8;
void init_constant_terms (void)
{
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_10, term_l_10, term_m_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_10, term_w_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_a_11, term_b_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_e_11, term_f_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_k_11, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_d_12, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_h_12, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_m_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_p_12, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_v_12, term_w_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_c_13, term_d_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_p_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_s_13, term_t_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_g_14, term_j_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_p_14, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_x_14);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_j_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_c_16, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_j_16, term_m_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_r_16, term_s_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_o_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_t_17, term_u_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_17, term_x_17, term_a_18);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_18, term_o_18, term_p_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_18, term_y_18, term_z_18);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__3, term_g_24, term_v_28, term_n_23);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm implode_asfix_1_0 (ATerm a_63 (ATerm), ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm get_parse_table_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm q_65 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm v_69 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm d_64 (ATerm), ATerm e_64 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm f_64 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm b_81 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm c_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm w_78 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm g_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm a_81 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm c_81 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm m_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm l_81 (ATerm), ATerm);
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
ATerm xtc_command_1_0 (ATerm p_83 (ATerm), ATerm);
ATerm assert_1_0 (ATerm a_80 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm j_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm u_61 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm);
ATerm sglr_2_0 (ATerm y_62 (ATerm), ATerm z_62 (ATerm), ATerm);
ATerm parse_and_implode_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm sglri_options_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm x_79 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm w_79 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm b_83 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm c_83 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm);
ATerm crush_2_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_80 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm d_85 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm b_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm c_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm t_69 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm y_85 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm z_69 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm m_55 (ATerm), ATerm n_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm c_65 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm d_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm d_87 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_56 (ATerm), ATerm w_56 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm b_87 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm a_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm);
ATerm xtc_io_wrap_2_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm);
ATerm sglri_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm implode_asfix_1_0 (ATerm a_63 (ATerm), ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_v_8;
    return(t);
  }
  t = xtc_transform_2_0(c_0, a_63, t);
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm e_1 = NULL;
  e_1 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), e_1);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = e_1;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm w_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_9;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_8);
    }
  else
    {
      t = w_8;
      t = (ATerm) ATinsert(ATempty, term_f_9);
      t = fatal_error_0_0(t);
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
ATerm WriteToFile_1_0 (ATerm q_65 (ATerm), ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL;
  if(match_cons(t, sym__2))
    {
      o_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_1, term_g_9);
  t = open_stream_0_0(t);
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_1, p_1);
  t = q_65(t);
  t = fclose_0_0(t);
  t = p_1;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    ATerm v_1 = NULL,e_2 = NULL,f_2 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm j_9 = ATgetArgument(t, 0);
        if(match_cons(j_9, sym_Stream_1))
          {
            v_1 = ATgetArgument(j_9, 0);
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
  t = WriteToFile_1_0(e_0, t);
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
ATerm xtc_transform_term_2_0 (ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(y_83, z_83, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm k_2 = NULL;
  ATerm i_0 (ATerm t)
  {
    ATerm l_2 = NULL;
    l_2 = t;
    t = SSL_explode_string(l_2);
    return(t);
  }
  t = map_1_0(i_0, t);
  t = concat_0_0(t);
  k_2 = t;
  t = SSL_implode_string(k_2);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm h_3 = NULL,j_3 = NULL,l_3 = NULL,m_3 = NULL;
  h_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      j_3 = ATgetArgument(t, 0);
      {
        ATerm t_0 = NULL;
        t = SSL_int_to_string(j_3);
        t_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_9), t_0), term_n_9);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm b_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          j_3 = ATgetArgument(t, 0);
          l_3 = ATgetArgument(t, 1);
          m_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(l_3);
      b_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_3), term_d_10), b_1), term_u_9), j_3);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm v_69 (ATerm), ATerm t)
{
  ATerm q_3 = NULL;
  ATerm p_0 (ATerm t)
  {
    t = v_69(t);
    q_3 = t;
    return(t);
  }
  t = fetch_1_0(p_0, t);
  t = not_null(q_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm s_3 = NULL;
  s_3 = t;
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_19), term_q_18), term_b_18), term_v_17), term_r_17), term_k_17), term_t_16), term_n_16), term_f_16), term_y_15), term_u_15), term_k_15), term_z_14), term_u_14), term_k_14), term_y_13), term_q_13), term_e_13), term_a_13), term_t_12), term_n_12), term_j_12), term_f_12), term_q_11), term_g_11), term_c_11), term_y_10), term_s_10);
        {
          ATerm q_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm b_19 = ATgetArgument(t, 0);
                if((s_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm d_19 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(q_0, t);
        }
        ;
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
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
    ATerm r_0 (ATerm t)
    {
      ATerm u_3 = NULL,v_3 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm e_19 = ATgetArgument(t, 0);
          u_3 = ATgetArgument(t, 1);
          {
            ATerm f_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = u_3;
      {
        ATerm j_19 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_19;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        v_3 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_3), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATinsert(ATinsert(ATempty, v_3), term_l_19));
      }
      return(t);
    }
    t = try_1_0(r_0, t);
    t = t_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm d_64 (ATerm), ATerm e_64 (ATerm), ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL;
  y_3 = t;
  t = fork_0_0(t);
  z_3 = t;
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = y_3;
        t = d_64(t);
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        t = (ATerm) ATmakeAppl(sym__2, z_3, y_3);
        t = e_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm f_64 (ATerm), ATerm t)
{
  ATerm c_4 = NULL;
  ATerm s_0 (ATerm t)
  {
    ATerm d_4 = NULL;
    if(match_cons(t, sym__2))
      {
        d_4 = ATgetArgument(t, 0);
        c_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(d_4);
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
          ATerm v_19 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = c_4;
    return(t);
  }
  t = fork_2_0(f_64, s_0, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm e_4 = NULL,h_4 = NULL;
  if(match_cons(t, sym__2))
    {
      e_4 = ATgetArgument(t, 0);
      h_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_0 (ATerm t)
    {
      t = SSL_execvp(e_4, h_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm j_4 = NULL;
  j_4 = t;
  t = SSL_table_keys(j_4);
  {
    ATerm v_0 (ATerm t)
    {
      ATerm k_4 = NULL,l_4 = NULL;
      k_4 = t;
      t = SSL_table_get(j_4, k_4);
      l_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_4, l_4);
      return(t);
    }
    t = map_1_0(v_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_81 (ATerm), ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm m_4 = NULL,n_4 = NULL;
    m_4 = t;
    t = term_z_19;
    t = get_config_0_0(t);
    n_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_4, term_t_17);
    t = geq_0_0(t);
    t = m_4;
    t = b_81(t);
    return(t);
  }
  t = try_1_0(w_0, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,x_4 = NULL;
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, u_4));
  {
    ATerm x_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((v_4 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          x_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(x_0, t);
    t = not_null(x_4);
  }
  return(t);
}
ATerm filter_1_0 (ATerm c_77 (ATerm), ATerm t)
{
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      {
        ATerm c_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = filter_1_0(c_77, t);
              return(t);
            }
            t = Cons_2_0(c_77, y_0, t);
            ;
            LocalPopChoice(e_20);
          }
        else
          {
            t = c_20;
            {
              ATerm c_5 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm i_20 = ATgetFirst((ATermList) t);
                  c_5 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = c_5;
              t = filter_1_0(c_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm w_78 (ATerm), ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm z_0 (ATerm t)
    {
      t = w_78(t);
      t = e_5(t);
      return(t);
    }
    t = try_1_0(z_0, t);
    return(t);
  }
  t = e_5(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm f_5 = NULL;
  f_5 = t;
  {
    ATerm a_1 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm j_20 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_20;
          }
      }
      return(t);
    }
    t = repeat_1_0(a_1, t);
    t = f_5;
  }
  return(t);
}
ATerm say_1_0 (ATerm g_65 (ATerm), ATerm t)
{
  ATerm h_5 = NULL,d_1 = NULL;
  h_5 = t;
  t = g_65(t);
  d_1 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, d_1));
  t = h_5;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_81 (ATerm), ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm i_5 = NULL,l_5 = NULL;
    i_5 = t;
    t = term_z_19;
    t = get_config_0_0(t);
    l_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_5, term_l_13);
    t = geq_0_0(t);
    t = i_5;
    t = a_81(t);
    return(t);
  }
  t = try_1_0(c_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm m_5 = NULL,t_5 = NULL;
    m_5 = t;
    t = term_z_19;
    t = get_config_0_0(t);
    t_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_5, term_e_11);
    t = geq_0_0(t);
    t = m_5;
    t = c_81(t);
    return(t);
  }
  t = try_1_0(f_1, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_6 = ATgetFirst((ATermList) t);
      q_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_73(t);
  {
    ATerm g_1 (ATerm t)
    {
      ATerm r_6 = NULL;
      r_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_6, r_6);
      t = q_73(t);
      return(t);
    }
    t = fetch_1_0(g_1, t);
    t = q_6;
  }
  return(t);
}
ATerm union_1_0 (ATerm m_73 (ATerm), ATerm t)
{
  ATerm t_6 = NULL,w_6 = NULL;
  if(match_cons(t, sym__2))
    {
      w_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6;
  {
    ATerm x_6 (ATerm t)
    {
      ATerm l_20 = t;
      int t_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_6;
          ;
          LocalPopChoice(t_20);
        }
      else
        {
          t = l_20;
          {
            ATerm u_20 = t;
            int v_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_1 (ATerm t)
                {
                  t = t_6;
                  return(t);
                }
                t = HdMember_p__2_0(m_73, h_1, t);
                t = x_6(t);
                ;
                LocalPopChoice(v_20);
              }
            else
              {
                t = u_20;
                t = Cons_2_0(_id, x_6, t);
              }
          }
        }
      return(t);
    }
    t = x_6(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm z_6 = NULL;
    if(match_cons(t, sym__2))
      {
        z_6 = ATgetArgument(t, 0);
        if((z_6 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(i_1, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL,l_7 = NULL,m_7 = NULL;
  if(match_cons(t, sym__3))
    {
      h_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
      j_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_7, i_7);
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_20 = ATgetArgument(t, 0);
            ATerm z_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_7, i_7);
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        t = (ATerm) ATempty;
      }
    l_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_7, j_7);
    t = union_0_0(t);
    m_7 = t;
    t = SSL_table_put(h_7, i_7, m_7);
    t = (ATerm) ATmakeAppl(sym__3, h_7, i_7, j_7);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL;
  if(match_cons(t, sym__2))
    {
      o_7 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7;
  {
    ATerm j_1 (ATerm t)
    {
      ATerm p_7 = NULL,q_7 = NULL;
      if(match_cons(t, sym__2))
        {
          p_7 = ATgetArgument(t, 0);
          q_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, o_7, p_7, q_7);
      t = l_81(t);
      return(t);
    }
    t = map_1_0(j_1, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_8 (ATerm y_7, ATerm t)
  {
    t = SSL_fclose(y_7);
    return(t);
  }
  ATerm b_8 = NULL,c_8 = NULL;
  c_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_8 = ATgetArgument(t, 0);
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_8);
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            t = e_8(c_8, t);
          }
      }
    }
  else
    {
      t = e_8(c_8, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_8 = NULL;
  t = SSL_stdin_stream();
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_8 = NULL;
  t = SSL_stdout_stream();
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_8);
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
      ATerm c_21 = ATgetArgument(t, 0);
      ATerm d_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_2 = NULL,i_2 = NULL;
        h_2 = t;
        t = SSL_explode_term(h_2);
        if(match_cons(t, sym__2))
          {
            ATerm k_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_21 = ATgetArgument(t, 1);
              if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
                {
                  i_2 = ATgetFirst((ATermList) l_21);
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
        t = i_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(j_21);
      }
    else
      {
        t = g_21;
        {
          ATerm n_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_8 = NULL,x_8 = NULL,y_8 = NULL;
              ATerm l_1 (ATerm t)
              {
                ATerm a_9 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    a_9 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_9;
                return(t);
              }
              t = _2_0(l_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  t_8 = ATgetArgument(t, 0);
                  x_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(t_8, x_8);
              y_8 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, y_8);
              ;
              LocalPopChoice(r_21);
            }
          else
            {
              t = n_21;
              {
                ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
                ATerm n_1 (ATerm t)
                {
                  ATerm h_9 = NULL;
                  h_9 = t;
                  t = SSL_is_string(h_9);
                  return(t);
                }
                t = _2_0(n_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    b_9 = ATgetArgument(t, 0);
                    c_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(b_9, c_9);
                d_9 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, d_9);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_9 = NULL,k_9 = NULL,l_9 = NULL;
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_9 = NULL;
      m_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_9, term_u_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      {
        ATerm r_1 (ATerm t)
        {
          t = term_w_21;
          return(t);
        }
        t = debug_1_0(r_1, t);
        _fail(t);
      }
    }
  i_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(l_9);
  k_9 = t;
  t = i_9;
  t = fclose_0_0(t);
  t = k_9;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 = NULL;
      n_2 = t;
      t = SSL_access(n_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(y_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = x_21;
      {
        ATerm z_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_22 = t;
            if((PushChoice() == 0))
              {
                ATerm p_2 = NULL;
                p_2 = t;
                t = SSL_access(p_2, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_22;
              }
            {
              ATerm s_1 (ATerm t)
              {
                t = term_c_22;
                return(t);
              }
              t = debug_1_0(s_1, t);
            }
            ;
            LocalPopChoice(a_22);
          }
        else
          {
            t = z_21;
            {
              ATerm t_1 (ATerm t)
              {
                t = term_d_22;
                return(t);
              }
              t = debug_1_0(t_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
  p_9 = t;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm w_1 (ATerm t)
      {
        t = term_e_22;
        return(t);
      }
      t = debug_1_0(w_1, t);
      return(t);
    }
    t = if_verbose5_1_0(u_1, t);
    {
      ATerm f_22 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, p_9));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_22;
        }
      q_9 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, p_9));
      t = q_9;
      {
        ATerm x_1 (ATerm t)
        {
          ATerm y_1 (ATerm t)
          {
            t = term_g_22;
            return(t);
          }
          t = debug_1_0(y_1, t);
          return(t);
        }
        t = if_verbose4_1_0(x_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm a_2 (ATerm t)
            {
              t = term_h_22;
              return(t);
            }
            t = say_1_0(a_2, t);
            return(t);
          }
          t = if_verbose6_1_0(z_1, t);
          r_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_22, r_9);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm b_2 (ATerm t)
            {
              ATerm c_2 (ATerm t)
              {
                t = term_j_22;
                return(t);
              }
              t = say_1_0(c_2, t);
              return(t);
            }
            t = if_verbose6_1_0(b_2, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, p_9), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_i_22, (ATerm)ATmakeAppl(sym_Imported_1, p_9), (ATerm) ATempty);
            {
              ATerm d_2 (ATerm t)
              {
                ATerm m_2 (ATerm t)
                {
                  t = term_h_22;
                  return(t);
                }
                t = say_1_0(m_2, t);
                return(t);
              }
              t = if_verbose4_1_0(d_2, t);
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
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm n_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(o_22);
          }
        else
          {
            t = n_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_9 = NULL;
  ATerm o_2 (ATerm t)
  {
    ATerm q_2 (ATerm t)
    {
      t = term_p_22;
      return(t);
    }
    t = debug_1_0(q_2, t);
    return(t);
  }
  t = if_verbose5_1_0(o_2, t);
  s_9 = t;
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = s_9;
    {
      ATerm r_2 (ATerm t)
      {
        ATerm s_2 (ATerm t)
        {
          t = term_s_22;
          return(t);
        }
        t = debug_1_0(s_2, t);
        return(t);
      }
      t = if_verbose5_1_0(r_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_2 (ATerm t)
      {
        ATerm u_2 (ATerm t)
        {
          t = term_v_22;
          return(t);
        }
        t = debug_1_0(u_2, t);
        return(t);
      }
      t = if_verbose5_1_0(t_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm w_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(x_22);
          }
        else
          {
            t = w_22;
            {
              ATerm y_2 = NULL,f_3 = NULL;
              y_2 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, y_2));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_22 = ATgetFirst((ATermList) t);
                  if(match_cons(y_22, sym__2))
                    {
                      ATerm a_23 = ATgetArgument(y_22, 0);
                      f_3 = ATgetArgument(y_22, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm z_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = f_3;
            }
          }
        {
          ATerm v_2 (ATerm t)
          {
            ATerm w_2 (ATerm t)
            {
              t = term_v_22;
              return(t);
            }
            t = debug_1_0(w_2, t);
            return(t);
          }
          t = if_verbose5_1_0(v_2, t);
        }
      }
      ;
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      {
        ATerm t_9 = NULL;
        t_9 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), t_9), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_23), t_9), term_b_23);
        {
          ATerm x_2 (ATerm t)
          {
            t = term_i_22;
            t = table_getlist_0_0(t);
            {
              ATerm z_2 (ATerm t)
              {
                t = term_d_23;
                return(t);
              }
              t = debug_1_0(z_2, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(x_2, t);
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
ATerm xtc_command_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL;
  v_9 = t;
  t = p_83(t);
  t = xtc_find_warning_0_0(t);
  w_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_9, v_9);
  t = call_0_0(t);
  t = v_9;
  return(t);
}
ATerm assert_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL;
  if(match_cons(t, sym__2))
    {
      x_9 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_80(t);
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_9, x_9, y_9);
  t = table_push_0_0(t);
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(z_9, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_10 = ATgetFirst((ATermList) t);
        b_10 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(z_9, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(b_10), (ATerm) ATinsert(CheckATermList(a_10), x_9)));
    t = (ATerm) ATmakeAppl(sym__2, x_9, y_9);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm j_65 (ATerm), ATerm t)
{
  ATerm c_10 = NULL;
  c_10 = t;
  t = j_65(t);
  {
    ATerm a_3 (ATerm t)
    {
      t = term_g_23;
      return(t);
    }
    t = debug_1_0(a_3, t);
    t = c_10;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm q_10 (ATerm g_10, ATerm t)
  {
    t = g_10;
    {
      ATerm h_23 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm i_23 = ATgetArgument(t, 0);
              ATerm j_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = h_23;
        }
      {
        ATerm b_3 (ATerm t)
        {
          t = term_k_23;
          return(t);
        }
        t = obsolete_1_0(b_3, t);
        t = (ATerm) ATmakeAppl(sym__2, g_10, term_g_9);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm r_10 (ATerm i_10, ATerm j_10, ATerm k_10, ATerm t)
  {
    t = SSL_open_file(i_10, j_10);
    return(t);
  }
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
  n_10 = t;
  if(match_cons(t, sym__2))
    {
      o_10 = ATgetArgument(t, 0);
      p_10 = ATgetArgument(t, 1);
      {
        ATerm l_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_10(n_10, t);
            ;
            LocalPopChoice(m_23);
          }
        else
          {
            t = l_23;
            t = r_10(o_10, p_10, n_10, t);
          }
      }
    }
  else
    {
      t = q_10(n_10, t);
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
  ATerm t_10 = NULL;
  t = term_n_23;
  t = new_0_0(t);
  t_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_10, term_o_23);
  t = conc_strings_0_0(t);
  {
    ATerm c_3 (ATerm t)
    {
      ATerm n_3 = NULL;
      n_3 = t;
      t = SSL_access(n_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(c_3, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm v_10 = NULL;
  t = new_file_0_0(t);
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_10, term_g_9);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, v_10, term_n_23);
  {
    ATerm d_3 (ATerm t)
    {
      t = term_p_23;
      return(t);
    }
    t = assert_1_0(d_3, t);
    t = v_10;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL;
  h_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm w_3 = NULL,x_3 = NULL;
      t = h_11;
      t = xtc_new_file_0_0(t);
      w_3 = t;
      t = o_0(t);
      x_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_3, (ATerm) ATinsert(ATinsert(ATempty, w_3), term_q_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(n_0, t);
      t = SSL_close_file(w_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_3);
    }
  else
    {
      ATerm i_4 = NULL,p_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_11;
      t = xtc_new_file_0_0(t);
      i_4 = t;
      t = o_0(t);
      p_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_4), term_q_23), i_11), term_r_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(n_0, t);
      t = SSL_close_file(i_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_4);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm u_61 (ATerm), ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
  o_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_11);
  l_11 = t;
  t = m_11;
  t = u_61(t);
  n_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, n_11), l_11);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_23 = t;
      int v_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(v_23);
        }
      else
        {
          t = u_23;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(t_23);
      t = xtc_transform_file_2_0(r_83, s_83, t);
    }
  else
    {
      t = s_23;
      t = xtc_transform_term_2_0(r_83, s_83, t);
    }
  return(t);
}
ATerm sglr_2_0 (ATerm y_62 (ATerm), ATerm z_62 (ATerm), ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    t = term_w_23;
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
    s_11 = t;
    t = y_62(t);
    t_11 = t;
    t = s_11;
    t = z_62(t);
    u_11 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(u_11), t_11), term_e_9);
    return(t);
  }
  t = xtc_transform_2_0(e_3, g_3, t);
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    ATerm v_11 = NULL;
    t = term_x_23;
    {
      ATerm y_23 = t;
      int z_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = get_config_0_0(t);
          ;
          LocalPopChoice(z_23);
        }
      else
        {
          t = y_23;
          t = (ATerm) ATempty;
        }
      v_11 = t;
      t = (ATerm) ATinsert(CheckATermList(v_11), term_a_24);
    }
    return(t);
  }
  t = sglr_2_0(get_parse_table_0_0, i_3, t);
  {
    ATerm k_3 (ATerm t)
    {
      t = term_b_24;
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            ;
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
            t = (ATerm) ATempty;
          }
      }
      return(t);
    }
    t = implode_asfix_1_0(k_3, t);
  }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  if(match_cons(t, sym__2))
    {
      w_11 = ATgetArgument(t, 0);
      x_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_11;
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
        t = (ATerm) ATempty;
      }
    y_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_11, y_11);
    t = conc_0_0(t);
    z_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_11, z_11);
    t = (ATerm) ATmakeAppl(sym__3, term_g_24, w_11, z_11);
  }
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm p_3 (ATerm t)
      {
        ATerm a_12 = NULL;
        a_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue)), a_12);
        t = a_12;
        return(t);
      }
      ATerm r_3 (ATerm t)
      {
        t = term_j_24;
        return(t);
      }
      t = ArgOption_3_0(o_3, p_3, r_3, t);
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm b_4 (ATerm t)
            {
              ATerm b_12 = NULL;
              b_12 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_23, b_12);
              t = extend_config_0_0(t);
              t = b_12;
              return(t);
            }
            ATerm f_4 (ATerm t)
            {
              t = term_m_24;
              return(t);
            }
            t = ArgOption_3_0(a_4, b_4, f_4, t);
            ;
            LocalPopChoice(l_24);
          }
        else
          {
            t = k_24;
            {
              ATerm g_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm o_4 (ATerm t)
              {
                ATerm c_12 = NULL;
                c_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_b_24, c_12);
                t = extend_config_0_0(t);
                t = c_12;
                return(t);
              }
              ATerm q_4 (ATerm t)
              {
                t = term_n_24;
                return(t);
              }
              t = ArgOption_3_0(g_4, o_4, q_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL;
  q_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_5 = NULL;
        t = q_12;
        t = m_0(t);
        n_5 = t;
        {
          ATerm q_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(r_24);
            }
          else
            {
              t = q_24;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(r_12, n_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, r_12);
        }
        ;
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        {
          ATerm s_24 = t;
          int t_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_5 = NULL;
              t = q_12;
              t = m_0(t);
              r_5 = t;
              {
                ATerm u_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm v_24 = t;
                    int w_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(w_24);
                      }
                    else
                      {
                        t = v_24;
                        {
                          ATerm x_24 = t;
                          int y_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(y_24);
                            }
                          else
                            {
                              t = x_24;
                              {
                                ATerm s_5 = NULL;
                                s_5 = t;
                                if((r_12 != t))
                                  {
                                    _fail(t);
                                  }
                                t = s_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_24;
                  }
                t = SSL_copy(r_12, r_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, r_12);
              }
              ;
              LocalPopChoice(t_24);
            }
          else
            {
              t = s_24;
              t = q_12;
              t = m_0(t);
              if((r_12 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_12);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym__2))
    {
      x_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_25 = ATgetArgument(t, 0);
            ATerm c_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(x_12, y_12);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_25 = ATgetFirst((ATermList) t);
            v_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_5;
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        t = (ATerm) ATempty;
      }
    z_12 = t;
    t = SSL_table_put(x_12, y_12, z_12);
    t = (ATerm) ATmakeAppl(sym__2, x_12, y_12);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
  f_13 = t;
  t = x_79(t);
  g_13 = t;
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(g_13, (ATerm) ATmakeAppl(sym_Scopes_0));
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
        i_13 = ATgetFirst((ATermList) t);
        h_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(g_13, (ATerm)ATmakeAppl(sym_Scopes_0), h_13);
    t = i_13;
    {
      ATerm r_4 (ATerm t)
      {
        ATerm j_13 = NULL;
        j_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_13, j_13);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(r_4, t);
      t = f_13;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_80(t);
      t = t_80(t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      t = t_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_79 (ATerm), ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  m_13 = t;
  t = w_79(t);
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_13, term_i_25);
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_25 = ATgetArgument(t, 0);
            ATerm m_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = (ATerm) ATempty;
      }
    o_13 = t;
    t = SSL_table_put(n_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(o_13), (ATerm) ATempty));
    t = m_13;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm b_83 (ATerm), ATerm t)
{
  ATerm u_13 = NULL;
  ATerm s_4 (ATerm t)
  {
    t = term_p_23;
    return(t);
  }
  t = begin_scope_1_0(s_4, t);
  {
    ATerm t_4 (ATerm t)
    {
      ATerm v_13 = NULL;
      v_13 = t;
      {
        ATerm n_25 = t;
        int o_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
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
            u_13 = ATgetFirst((ATermList) t);
            {
              ATerm p_25 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = u_13;
        {
          ATerm w_4 (ATerm t)
          {
            ATerm y_4 (ATerm t)
            {
              ATerm w_13 = NULL;
              w_13 = t;
              t = SSL_remove(w_13);
              return(t);
            }
            t = try_1_0(y_4, t);
            return(t);
          }
          t = map_1_0(w_4, t);
          t = v_13;
          {
            ATerm z_4 (ATerm t)
            {
              t = term_p_23;
              return(t);
            }
            t = end_scope_1_0(z_4, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(b_83, t_4, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_13 = NULL;
        t = term_r_23;
        t = get_config_0_0(t);
        x_13 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, x_13);
        ;
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        t = term_s_25;
      }
    t = c_83(t);
    {
      ATerm b_5 (ATerm t)
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_q_23;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            t = term_v_25;
          }
        return(t);
      }
      t = copy_to_1_0(b_5, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(a_5, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm z_13 = NULL;
    z_13 = t;
    if(match_string(t, "-k"))
      {
        t = z_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = z_13;
      }
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    ATerm a_14 = NULL,b_14 = NULL;
    a_14 = t;
    t = SSL_string_to_int(a_14);
    b_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), b_14);
    t = a_14;
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = term_w_25;
    return(t);
  }
  t = ArgOption_3_0(d_5, g_5, j_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_5 (ATerm t)
      {
        ATerm d_14 = NULL;
        d_14 = t;
        if(match_string(t, "-S"))
          {
            t = d_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = d_14;
          }
        return(t);
      }
      ATerm o_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_a_26;
        return(t);
      }
      ATerm p_5 (ATerm t)
      {
        t = term_b_26;
        return(t);
      }
      t = Option_3_0(k_5, o_5, p_5, t);
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm c_26 = t;
        int d_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm u_5 (ATerm t)
            {
              ATerm e_14 = NULL,f_14 = NULL;
              e_14 = t;
              t = SSL_string_to_int(e_14);
              f_14 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), f_14);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, e_14);
              return(t);
            }
            ATerm w_5 (ATerm t)
            {
              t = term_e_26;
              return(t);
            }
            t = ArgOption_3_0(q_5, u_5, w_5, t);
            ;
            LocalPopChoice(d_26);
          }
        else
          {
            t = c_26;
            {
              ATerm x_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm y_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_f_26;
                return(t);
              }
              ATerm z_5 (ATerm t)
              {
                t = term_g_26;
                return(t);
              }
              t = Option_3_0(x_5, y_5, z_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm h_14 = NULL;
    h_14 = t;
    if(match_string(t, "-o"))
      {
        t = h_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = h_14;
      }
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    ATerm i_14 = NULL;
    i_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), i_14);
    t = (ATerm) ATmakeAppl(sym_Output_1, i_14);
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    t = term_j_26;
    return(t);
  }
  t = ArgOption_3_0(a_6, b_6, c_6, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      {
        ATerm d_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm e_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_m_26;
          return(t);
        }
        ATerm f_6 (ATerm t)
        {
          t = term_n_26;
          return(t);
        }
        t = Option_3_0(d_6, e_6, f_6, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm l_14 = NULL,o_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
  l_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = l_14;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm y_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_14 = ATgetFirst((ATermList) t);
          q_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_14 = ATgetFirst((ATermList) t);
          s_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_14;
      t = j_0(t);
      t = r_14;
      t = k_0(t);
      y_14 = t;
      t = (ATerm) ATinsert(CheckATermList(s_14), y_14);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm a_15 = NULL;
    a_15 = t;
    if(match_string(t, "-i"))
      {
        t = a_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = a_15;
      }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    ATerm b_15 = NULL;
    b_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), b_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, b_15);
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_o_26;
    return(t);
  }
  t = ArgOption_3_0(g_6, h_6, i_6, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL;
  c_15 = t;
  t = term_n_23;
  t = whoami_0_0(t);
  d_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), d_15), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_15;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_23;
  t = whoami_0_0(t);
  e_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), e_15));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm t)
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_75(t);
      ;
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      {
        ATerm h_15 = NULL,i_15 = NULL,l_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_15 = ATgetFirst((ATermList) t);
            i_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_15;
        t = foldr_2_0(z_75, a_76, t);
        l_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_15, l_15);
        t = a_76(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL;
  m_15 = t;
  t = SSL_explode_term(m_15);
  if(match_cons(t, sym__2))
    {
      ATerm w_26 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15;
  t = foldr_2_0(x_73, y_73, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_15 = NULL;
  t = times_0_0(t);
  {
    ATerm j_6 (ATerm t)
    {
      t = term_z_25;
      return(t);
    }
    ATerm k_6 (ATerm t)
    {
      ATerm p_15 = NULL,q_15 = NULL;
      if(match_cons(t, sym__2))
        {
          p_15 = ATgetArgument(t, 0);
          q_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm x_26 = t;
        int y_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(p_15, q_15);
            ;
            LocalPopChoice(y_26);
          }
        else
          {
            t = x_26;
            t = SSL_addr(p_15, q_15);
          }
      }
      return(t);
    }
    t = crush_2_0(j_6, k_6, t);
    o_15 = t;
    t = SSL_TicksToSeconds(o_15);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_15 = NULL,b_16 = NULL,d_16 = NULL;
  z_15 = t;
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_16;
        if((b_16 != t))
          {
            _fail(t);
          }
        t = z_15;
        ;
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        t = z_15;
        {
          ATerm b_27 = t;
          int c_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_16, d_16);
              ;
              LocalPopChoice(c_27);
            }
          else
            {
              t = b_27;
              t = SSL_gtr(b_16, d_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_16, d_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm h_16 = NULL,i_16 = NULL;
    h_16 = t;
    t = term_z_19;
    t = get_config_0_0(t);
    i_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_16, term_l_10);
    t = geq_0_0(t);
    t = h_16;
    t = x_80(t);
    return(t);
  }
  t = try_1_0(l_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm k_16 = NULL,l_16 = NULL;
    t = run_time_0_0(t);
    k_16 = t;
    t = term_n_23;
    t = whoami_0_0(t);
    l_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), k_16), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), l_16));
    t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_27), k_16), term_u_9), l_16));
    return(t);
  }
  t = if_verbose1_1_0(m_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm d_85 (ATerm), ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      {
        ATerm n_6 (ATerm t)
        {
          ATerm h_27 = t;
          int i_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
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
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(k_27);
                  }
                else
                  {
                    t = j_27;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(n_6, t);
      }
    }
  t = d_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_16 = ATgetFirst((ATermList) t);
      q_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_16 = NULL,v_16 = NULL;
        t = q_16;
        t = h_0(t);
        u_16 = t;
        t = p_16;
        t = g_0(t);
        v_16 = t;
        t = q_16;
        {
          ATerm o_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(u_16), v_16);
            return(t);
          }
          t = reverse_acc_2_0(g_0, o_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_23;
      t = h_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, s_6, t);
  return(t);
}
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm t)
{
  ATerm w_16 = NULL;
  t = term_n_23;
  t = f_0(t);
  w_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_27), w_16), term_l_27);
  return(t);
}
ATerm Program_1_0 (ATerm b_62 (ATerm), ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
  a_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_17);
  x_16 = t;
  t = y_16;
  t = b_62(t);
  z_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, z_16), x_16);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_17 = NULL;
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_26;
      t = get_config_0_0(t);
      e_17 = t;
      ;
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      {
        ATerm u_6 (ATerm t)
        {
          ATerm v_6 (ATerm t)
          {
            e_17 = t;
            return(t);
          }
          t = Program_1_0(v_6, t);
          return(t);
        }
        t = option_defined_1_0(u_6, t);
      }
    }
  {
    ATerm y_6 (ATerm t)
    {
      ATerm a_7 (ATerm t)
      {
        t = e_17;
        return(t);
      }
      t = short_description_1_0(a_7, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(y_6, t);
    t = term_p_27;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    t = reverse_0_0(t);
    {
      ATerm b_7 (ATerm t)
      {
        ATerm f_17 = NULL;
        f_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, f_17), term_q_27);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(b_7, t);
      {
        ATerm c_7 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_27), term_t_27), term_s_27), term_r_27);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(c_7, t);
      }
    }
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm c_62 (ATerm), ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
  j_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      h_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_17);
  g_17 = t;
  t = h_17;
  t = c_62(t);
  i_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, i_17), g_17);
  return(t);
}
ATerm fetch_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm n_17 (ATerm t)
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(t_69, _id, t);
        ;
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        t = Cons_2_0(_id, n_17, t);
      }
    return(t);
  }
  t = n_17(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  t = fetch_1_0(y_85, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL;
  p_17 = t;
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_27 = ATgetFirst((ATermList) t);
                ATerm a_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_17;
          }
        ;
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        t = (ATerm) ATinsert(ATempty, p_17);
      }
    q_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), q_17);
    t = p_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_26;
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
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      {
        ATerm y_17 = NULL,z_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_17 = ATgetFirst((ATermList) t);
            z_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_17;
        {
          ATerm d_7 (ATerm t)
          {
            t = z_17;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_7, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL;
  d_18 = t;
  t = SSL_explode_term(d_18);
  if(match_cons(t, sym__2))
    {
      ATerm d_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_18;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm z_69 (ATerm), ATerm t)
{
  ATerm f_18 (ATerm t)
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_18, t);
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_69(t);
      }
    return(t);
  }
  t = f_18(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL;
  if(match_cons(t, sym__2))
    {
      h_18 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_18;
  {
    ATerm e_7 (ATerm t)
    {
      t = g_18;
      return(t);
    }
    t = at_end_1_0(e_7, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm m_55 (ATerm), ATerm n_55 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
  n_18 = t;
  if(match_cons(t, sym__2))
    {
      j_18 = ATgetArgument(t, 0);
      k_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_18);
  i_18 = t;
  t = j_18;
  t = m_55(t);
  l_18 = t;
  t = k_18;
  t = n_55(t);
  m_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, l_18, m_18), i_18);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm r_18 = NULL;
  ATerm f_7 (ATerm t)
  {
    ATerm s_18 = NULL;
    s_18 = t;
    t = SSL_explode_string(s_18);
    return(t);
  }
  ATerm g_7 (ATerm t)
  {
    ATerm t_18 = NULL;
    t_18 = t;
    t = SSL_explode_string(t_18);
    return(t);
  }
  t = _2_0(f_7, g_7, t);
  t = conc_0_0(t);
  r_18 = t;
  t = SSL_implode_string(r_18);
  return(t);
}
ATerm debug_1_0 (ATerm c_65 (ATerm), ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL;
  u_18 = t;
  t = c_65(t);
  v_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_18), v_18));
  t = u_18;
  return(t);
}
ATerm map_1_0 (ATerm j_69 (ATerm), ATerm t)
{
  ATerm w_18 (ATerm t)
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
        t = Cons_2_0(j_69, w_18, t);
      }
    return(t);
  }
  t = w_18(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_19 = NULL;
      c_19 = t;
      t = SSL_is_string(c_19);
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      {
        ATerm m_28 = t;
        int n_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_7 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(k_7, t);
            ;
            LocalPopChoice(n_28);
          }
        else
          {
            t = m_28;
            {
              ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
              g_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_19 = ATgetArgument(t, 0);
                  t = h_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_19 = ATgetArgument(t, 0);
                      t = h_19;
                      {
                        ATerm o_28 = t;
                        int p_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_28);
                          }
                        else
                          {
                            t = o_28;
                            {
                              ATerm r_7 (ATerm t)
                              {
                                t = term_q_28;
                                return(t);
                              }
                              t = debug_1_0(r_7, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm m_19 = NULL,n_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_19 = ATgetArgument(t, 0);
                          i_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_19;
                      t = eval_config_0_0(t);
                      m_19 = t;
                      t = i_19;
                      t = eval_config_0_0(t);
                      n_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_19, n_19);
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
  ATerm q_19 = NULL;
  q_19 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_19);
  {
    ATerm s_7 (ATerm t)
    {
      ATerm r_19 = NULL;
      t = eval_config_0_0(t);
      r_19 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_19, r_19);
      t = r_19;
      return(t);
    }
    t = try_1_0(s_7, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm d_80 (ATerm), ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_80(t);
      ;
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_7 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm u_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_w_28;
        return(t);
      }
      ATerm v_7 (ATerm t)
      {
        t = term_x_28;
        return(t);
      }
      t = Option_3_0(t_7, u_7, v_7, t);
      ;
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      {
        ATerm w_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm x_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_y_28;
          return(t);
        }
        ATerm z_7 (ATerm t)
        {
          t = term_z_28;
          return(t);
        }
        t = Option_3_0(w_7, x_7, z_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm u_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
  if(match_cons(t, sym__3))
    {
      u_19 = ATgetArgument(t, 0);
      w_19 = ATgetArgument(t, 1);
      x_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_19, w_19);
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_29 = ATgetArgument(t, 0);
            ATerm d_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_19, w_19);
        ;
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
        t = (ATerm) ATempty;
      }
    y_19 = t;
    t = SSL_table_put(u_19, w_19, (ATerm) ATinsert(CheckATermList(y_19), x_19));
    t = (ATerm) ATmakeAppl(sym__3, u_19, w_19, x_19);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm d_20 = NULL;
  t = term_n_23;
  t = d_87(t);
  d_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_29, term_f_29, d_20);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  f_20 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = f_20;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm k_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_20 = ATgetFirst((ATermList) t);
          h_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_20;
      t = a_0(t);
      t = term_n_23;
      t = b_0(t);
      k_20 = t;
      t = (ATerm) ATinsert(CheckATermList(h_20), k_20);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm a_8 (ATerm t)
  {
    ATerm m_20 = NULL;
    m_20 = t;
    if(match_string(t, "--help"))
      {
        t = m_20;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = m_20;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = m_20;
          }
      }
    return(t);
  }
  ATerm d_8 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_g_29;
    return(t);
  }
  ATerm g_8 (ATerm t)
  {
    t = term_h_29;
    return(t);
  }
  t = Option_3_0(a_8, d_8, g_8, t);
  return(t);
}
ATerm Cons_2_0 (ATerm v_56 (ATerm), ATerm w_56 (ATerm), ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
  s_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_20 = ATgetFirst((ATermList) t);
      p_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_20);
  n_20 = t;
  t = o_20;
  t = v_56(t);
  q_20 = t;
  t = p_20;
  t = w_56(t);
  r_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(r_20), q_20), n_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_87 (ATerm), ATerm t)
{
  ATerm e_21 = NULL;
  e_21 = t;
  {
    ATerm h_8 (ATerm t)
    {
      t = term_i_29;
      t = b_87(t);
      return(t);
    }
    t = try_1_0(h_8, t);
    t = e_21;
    {
      ATerm i_8 (ATerm t)
      {
        ATerm f_21 = NULL;
        f_21 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_21);
        t = (ATerm) ATmakeAppl(sym_Program_1, f_21);
        return(t);
      }
      ATerm j_8 (ATerm t)
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_29 = t;
            int m_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(m_29);
              }
            else
              {
                t = l_29;
                t = b_87(t);
                t = Cons_2_0(_id, j_8, t);
              }
            ;
            LocalPopChoice(k_29);
          }
        else
          {
            t = j_29;
            {
              ATerm h_21 = NULL,i_21 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_21 = ATgetFirst((ATermList) t);
                  i_21 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_21), (ATerm) ATmakeAppl(sym_Undefined_1, h_21));
            }
          }
        return(t);
      }
      t = Cons_2_0(i_8, j_8, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm a_87 (ATerm), ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  o_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = o_21;
  {
    ATerm l_8 (ATerm t)
    {
      ATerm n_29 = t;
      int o_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_87(t);
          ;
          LocalPopChoice(o_29);
        }
      else
        {
          t = n_29;
          {
            ATerm p_29 = t;
            int q_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(q_29);
              }
            else
              {
                t = p_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_8, t);
    {
      ATerm n_8 (ATerm t)
      {
        ATerm r_29 = t;
        int s_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_21 = NULL;
            v_21 = t;
            {
              ATerm t_29 = t;
              int u_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_21;
                  {
                    ATerm v_29 = t;
                    int w_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_g_27;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(w_29);
                      }
                    else
                      {
                        t = v_29;
                        {
                          ATerm o_8 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(o_8, t);
                        }
                      }
                    t = v_21;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(u_29);
                }
              else
                {
                  t = t_29;
                  t = term_v_28;
                  t = get_config_0_0(t);
                  t = v_21;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(s_29);
          }
        else
          {
            t = r_29;
            {
              ATerm p_8 (ATerm t)
              {
                ATerm r_8 (ATerm t)
                {
                  p_21 = t;
                  return(t);
                }
                t = Undefined_1_0(r_8, t);
                return(t);
              }
              t = option_defined_1_0(p_8, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_21)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_21)), term_x_29));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(n_8, t);
      q_21 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = q_21;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t)
{
  ATerm m_14 = NULL;
  t = parse_options_1_0(f_85, t);
  m_14 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), m_14);
  t = m_14;
  t = h_85(t);
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_85, t);
        ;
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        {
          ATerm a_30 = t;
          int b_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_30);
            }
          else
            {
              t = a_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t)
{
  t = option_wrap_4_0(j_85, default_usage_0_0, _id, k_85, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm t)
{
  ATerm s_8 (ATerm t)
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_83(t);
        ;
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm u_8 (ATerm t)
  {
    t = xtc_io_1_0(h_83, t);
    return(t);
  }
  t = option_wrap_2_0(s_8, u_8, t);
  return(t);
}
ATerm sglri_0_0 (ATerm t)
{
  t = xtc_io_wrap_2_0(sglri_options_0_0, parse_and_implode_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = sglri_0_0(t);
  return(t);
}
