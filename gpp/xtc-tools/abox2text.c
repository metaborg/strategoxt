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
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_z_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_h_32;
ATerm term_a_32;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_v_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_d_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_y_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_a_27;
ATerm term_u_26;
ATerm term_p_26;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_s_23;
ATerm term_p_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_g_23;
ATerm term_a_23;
ATerm term_x_22;
ATerm term_n_22;
ATerm term_h_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_w_21;
ATerm term_o_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_l_20;
ATerm term_g_20;
ATerm term_c_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_t_19;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_z_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_g_10;
ATerm term_b_10;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_y_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_p_8;
ATerm term_m_8;
void init_constant_terms (void)
{
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_9, term_p_8, term_t_9);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_z_10, term_b_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_k_11, term_l_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_11, term_t_11);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_e_12, term_f_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_j_12, term_k_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_n_12, term_o_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_u_12, term_v_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_c_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_f_13, term_g_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_w_13, term_x_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_k_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_n_14, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_t_14, term_u_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_f_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_k_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_y_15, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_f_16, term_g_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_j_16, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_o_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_t_16, term_u_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_c_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_f_17, term_g_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_l_17, term_o_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_b_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_x_20);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_e_24, term_s_23);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym__2, term_m_8, term_m_27);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_27);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_w_27, term_a_24);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_h_27, term_i_27);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym__2, term_k_32, term_a_24);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym__2, term_n_32, term_a_24);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym__2, term_k_31, term_a_24);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm v_1 (ATerm y_0, ATerm);
ATerm conc_0_0 (ATerm);
ATerm x_5 (ATerm i_43, ATerm j_43, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm pass_width_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm y_5 (ATerm r_27, ATerm s_27, ATerm);
ATerm z_5 (ATerm d_72 (ATerm), ATerm f_182, ATerm z_27, ATerm);
ATerm h_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm);
ATerm a_6 (ATerm n_24, ATerm o_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm s_70 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm d_6 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm);
ATerm e_6 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm);
ATerm q_1 (ATerm);
ATerm f_6 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm);
ATerm g_6 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm);
ATerm z_8 (ATerm t_8, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm h_6 (ATerm x_27, ATerm);
ATerm i_6 (ATerm t_48, ATerm u_48, ATerm);
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm c_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm x_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm t_13 (ATerm h_12, ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm e_90 (ATerm), ATerm);
ATerm j_6 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm);
ATerm q_15 (ATerm s_14, ATerm);
ATerm r_15 (ATerm w_14, ATerm x_14, ATerm y_14, ATerm);
ATerm q_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm k_6 (ATerm l_48, ATerm m_48, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm n_68 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm abox2text_0_0 (ATerm);
ATerm l_6 (ATerm t_24, ATerm u_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm m_6 (ATerm m_45, ATerm n_45, ATerm);
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm xtc_io_1_0 (ATerm r_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm j_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm k_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm z_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm j_5 (ATerm);
ATerm abox2text_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_6 (ATerm c_43, ATerm d_43, ATerm);
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm n_5 (ATerm);
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm u_68 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm w_5 (ATerm);
ATerm b_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm v_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm q_6 (ATerm y_41, ATerm z_41, ATerm);
ATerm debug_1_0 (ATerm b_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm o_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm p_6 (ATerm);
ATerm t_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm u_6 (ATerm h_47, ATerm i_47, ATerm);
ATerm r_6 (ATerm y_46, ATerm z_46, ATerm);
ATerm s_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm f_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm);
ATerm l_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm);
ATerm v_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm s_0 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, t_0, t);
        ;
        LocalPopChoice(w_7);
      }
    else
      {
        t = s_0;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_76(t);
      }
    return(t);
  }
  t = t_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      {
        ATerm n_0 = NULL,o_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_0 = ATgetFirst((ATermList) t);
            o_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_0;
        {
          ATerm f_1 (ATerm t)
          {
            t = o_0;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(f_1, t);
        }
      }
    }
  return(t);
}
ATerm v_1 (ATerm y_0, ATerm t)
{
  ATerm a_1 = NULL;
  t = SSL_explode_term(y_0);
  if(match_cons(t, sym__2))
    {
      ATerm a_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_1 = NULL,e_1 = NULL,m_1 = NULL;
  m_1 = t;
  if(match_cons(t, sym__2))
    {
      b_1 = ATgetArgument(t, 0);
      e_1 = ATgetArgument(t, 1);
      {
        ATerm c_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_1 (ATerm t)
            {
              t = e_1;
              return(t);
            }
            t = b_1;
            t = at_end_1_0(g_1, t);
            ;
            LocalPopChoice(g_8);
          }
        else
          {
            t = c_8;
            t = v_1(m_1, t);
          }
      }
    }
  else
    {
      t = v_1(m_1, t);
    }
  return(t);
}
ATerm x_5 (ATerm i_43, ATerm j_43, ATerm t)
{
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(i_43, j_43);
      ;
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      t = SSL_subtr(i_43, j_43);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,d_2 = NULL,m_2 = NULL;
  t = term_m_8;
  {
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(o_8);
      }
    else
      {
        t = n_8;
        t = term_p_8;
      }
    x_1 = t;
    t = term_p_8;
    d_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_1, term_p_8);
    t = x_5(x_1, d_2, t);
    m_2 = t;
    t = SSL_int_to_string(m_2);
    y_1 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, y_1), term_m_8);
  }
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_8;
      t = get_config_0_0(t);
      LocalPopChoice(r_8);
      {
        ATerm n_2 = NULL;
        n_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, n_2), term_s_8);
      }
    }
  else
    {
      t = q_8;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm t_2 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_u_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm v_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_v_8);
      v_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_2, (ATerm) ATinsert(ATempty, term_v_8));
      t = k_6(t_2, v_2, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm y_5 (ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm w_2 = NULL;
  t = SSL_write_term_to_stream_baf(r_27, s_27);
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_2);
  return(t);
}
ATerm z_5 (ATerm d_72 (ATerm), ATerm f_182, ATerm z_27, ATerm t)
{
  ATerm z_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_182, term_y_8);
  t = open_stream_0_0(t);
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_2, z_27);
  t = d_72(t);
  t = fclose_0_0(t);
  t = z_27;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm f_3 = NULL,h_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_9 = ATgetArgument(t, 0);
      if(match_cons(h_9, sym_Stream_1))
        {
          f_3 = ATgetArgument(h_9, 0);
        }
      else
        _fail(t);
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(f_3, h_3, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL;
  a_3 = t;
  t = xtc_new_file_0_0(t);
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_3, a_3);
  t = z_5(h_1, b_3, a_3, t);
  t = SSL_close_file(b_3);
  t = (ATerm) ATmakeAppl(sym_FILE_1, b_3);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_90, o_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm a_6 (ATerm n_24, ATerm o_24, ATerm t)
{
  t = SSL_execvp(n_24, o_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,m_4 = NULL;
  g_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      h_4 = ATgetArgument(t, 0);
      {
        ATerm v_0 = NULL,w_0 = NULL;
        t = SSL_int_to_string(h_4);
        v_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_9), v_0), term_j_9);
        w_0 = t;
        t = SSL_concat_strings(w_0);
      }
    }
  else
    {
      ATerm l_1 = NULL,n_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          h_4 = ATgetArgument(t, 0);
          i_4 = ATgetArgument(t, 1);
          m_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(i_4);
      l_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_4), term_p_9), l_1), term_o_9), h_4);
      n_1 = t;
      t = SSL_concat_strings(n_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm q_4 = NULL;
  ATerm i_1 (ATerm t)
  {
    t = i_76(t);
    if(((q_4 != NULL) && (q_4 != t)))
      _fail(t);
    else
      q_4 = t;
    return(t);
  }
  t = fetch_1_0(i_1, t);
  t = not_null(q_4);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm r_4 = NULL;
  r_4 = t;
  {
    ATerm q_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_17), term_j_17), term_d_17), term_v_16), term_p_16), term_l_16), term_h_16), term_b_16), term_t_15), term_n_15), term_g_15), term_c_15), term_v_14), term_q_14), term_l_14), term_y_13), term_u_13), term_o_13), term_h_13), term_d_13), term_y_12), term_p_12), term_l_12), term_g_12), term_z_11), term_p_11), term_d_11), term_b_10);
        {
          ATerm j_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm q_17 = ATgetArgument(t, 0);
                if((r_4 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm r_17 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(j_1, t);
        }
        ;
        LocalPopChoice(r_9);
      }
    else
      {
        t = q_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, r_4);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_5 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_17 = ATgetArgument(t, 0);
            i_5 = ATgetArgument(t, 1);
            {
              ATerm v_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_5;
        {
          ATerm w_17 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_17;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          z_1 = t;
          t = term_x_17;
          a_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, z_1), term_y_17);
          b_2 = t;
          t = SSL_printnl(a_2, b_2);
          t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, z_1), term_y_17));
        }
        ;
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
      }
    t = y_4;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm s_70 (ATerm), ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL;
  q_5 = t;
  t = fork_0_0(t);
  r_5 = t;
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = q_5;
        t = s_70(t);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = SSL_waitpid(r_5);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_18 = ATgetArgument(t, 0);
            if(((ATgetType(b_18) != AT_INT) || (ATgetInt((ATermInt) b_18) != 0)))
              _fail(t);
            {
              ATerm c_18 = ATgetArgument(t, 1);
            }
            {
              ATerm d_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = q_5;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm v_6 = NULL;
  v_6 = t;
  t = SSL_table_keys(v_6);
  {
    ATerm k_1 (ATerm t)
    {
      ATerm y_6 = NULL,z_6 = NULL;
      y_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_6, y_6);
      t = r_6(v_6, y_6, t);
      z_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_6, z_6);
      return(t);
    }
    t = map_1_0(k_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_7 = NULL,d_7 = NULL;
      a_7 = t;
      t = term_m_8;
      t = get_config_0_0(t);
      d_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_7, term_t_16);
      t = geq_0_0(t);
      t = a_7;
      t = x_87(t);
      ;
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_7 = NULL,g_7 = NULL;
      e_7 = t;
      t = term_m_8;
      t = get_config_0_0(t);
      g_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_7, term_q_13);
      t = geq_0_0(t);
      t = e_7;
      t = w_87(t);
      ;
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm k_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_7 = NULL,j_7 = NULL;
      h_7 = t;
      t = term_m_8;
      t = get_config_0_0(t);
      j_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_7, term_r_11);
      t = geq_0_0(t);
      t = h_7;
      t = y_87(t);
      ;
      LocalPopChoice(n_18);
    }
  else
    {
      t = k_18;
    }
  return(t);
}
ATerm d_6 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm t)
{
  t = e_80(t);
  {
    ATerm o_1 (ATerm t)
    {
      ATerm m_7 = NULL;
      m_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_34, m_7);
      t = d_80(t);
      return(t);
    }
    t = fetch_1_0(o_1, t);
    t = t_34;
  }
  return(t);
}
ATerm e_6 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm t)
{
  t = q_34;
  {
    ATerm z_7 (ATerm t)
    {
      ATerm q_18 = t;
      int v_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_34;
          ;
          LocalPopChoice(v_18);
        }
      else
        {
          t = q_18;
          {
            ATerm x_18 = t;
            int y_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_7 = NULL,r_7 = NULL,u_7 = NULL;
                p_7 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    r_7 = ATgetFirst((ATermList) t);
                    u_7 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = p_7;
                {
                  ATerm p_1 (ATerm t)
                  {
                    t = p_34;
                    return(t);
                  }
                  t = d_6(a_80, p_1, r_7, u_7, t);
                  t = z_7(t);
                }
                ;
                LocalPopChoice(y_18);
              }
            else
              {
                t = x_18;
                t = Cons_2_0(_id, z_7, t);
              }
          }
        }
      return(t);
    }
    t = z_7(t);
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm j_8 = NULL;
  if(match_cons(t, sym__2))
    {
      j_8 = ATgetArgument(t, 0);
      if((j_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm f_6 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm t)
{
  ATerm b_8 = NULL,e_8 = NULL,f_8 = NULL;
  b_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_19 = ATgetArgument(t, 0);
            ATerm d_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
        t = r_6(e_46, f_46, t);
        ;
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        t = (ATerm) ATempty;
      }
    e_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_8, g_46);
    t = e_6(q_1, e_8, g_46, t);
    f_8 = t;
    t = SSL_table_put(e_46, f_46, f_8);
    t = b_8;
  }
  return(t);
}
ATerm g_6 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm t)
{
  t = n_46;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm k_8 = NULL,l_8 = NULL;
      if(match_cons(t, sym__2))
        {
          k_8 = ATgetArgument(t, 0);
          l_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, o_46, k_8, l_8);
      t = a_88(t);
      return(t);
    }
    t = map_1_0(r_1, t);
  }
  return(t);
}
ATerm z_8 (ATerm t_8, ATerm t)
{
  t = SSL_fclose(t_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL;
  x_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_8 = ATgetArgument(t, 0);
      {
        ATerm f_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_8);
            ;
            LocalPopChoice(h_19);
          }
        else
          {
            t = f_19;
            t = z_8(x_8, t);
          }
      }
    }
  else
    {
      t = z_8(x_8, t);
    }
  return(t);
}
ATerm h_6 (ATerm x_27, ATerm t)
{
  t = SSL_read_term_from_stream(x_27);
  return(t);
}
ATerm i_6 (ATerm t_48, ATerm u_48, ATerm t)
{
  ATerm a_9 = NULL;
  t = SSL_fopen(t_48, u_48);
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_9);
  return(t);
}
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,b_0 = NULL,f_0 = NULL;
  g_9 = t;
  if(match_cons(t, sym__2))
    {
      c_9 = ATgetArgument(t, 0);
      d_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_9);
  b_9 = t;
  t = c_9;
  t = z_58(t);
  e_9 = t;
  t = d_9;
  t = a_59(t);
  f_9 = t;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_9, f_9);
  b_0 = t;
  t = SSLsetAnnotations(b_0, b_9);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_9 = NULL;
  t = SSL_stdin_stream();
  l_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_9 = NULL;
  t = SSL_stdout_stream();
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_9 = NULL;
  t = SSL_stderr_stream();
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_9);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm x_9 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      x_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_9;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm a_10 = NULL;
  a_10 = t;
  t = SSL_is_string(a_10);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_19 = ATgetArgument(t, 0);
      ATerm l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_9 = NULL,o_2 = NULL;
        u_9 = t;
        t = SSL_explode_term(u_9);
        if(match_cons(t, sym__2))
          {
            ATerm o_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_19) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_19 = ATgetArgument(t, 1);
              if(((ATgetType(p_19) == AT_LIST) && !(ATisEmpty(p_19))))
                {
                  o_2 = ATgetFirst((ATermList) p_19);
                  {
                    ATerm q_19 = (ATerm) ATgetNext((ATermList) p_19);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = o_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = o_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = o_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        {
          ATerm r_19 = t;
          int s_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_9 = NULL,w_9 = NULL;
              t = _2_0(s_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  v_9 = ATgetArgument(t, 0);
                  w_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_6(v_9, w_9, t);
              ;
              LocalPopChoice(s_19);
            }
          else
            {
              t = r_19;
              {
                ATerm y_9 = NULL,z_9 = NULL;
                t = _2_0(t_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    y_9 = ATgetArgument(t, 0);
                    z_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_6(y_9, z_9, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
  ATerm u_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_10 = NULL;
      f_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_10, term_x_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_19);
    }
  else
    {
      t = u_19;
      t = debug_1_0(u_1, t);
      _fail(t);
    }
  c_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_6(e_10, t);
  d_10 = t;
  t = c_10;
  t = fclose_0_0(t);
  t = d_10;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_10 = NULL,i_10 = NULL;
      h_10 = t;
      t = (ATerm) ATinsert(ATempty, term_g_20);
      i_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_10, (ATerm) ATinsert(ATempty, term_g_20));
      t = k_6(h_10, i_10, t);
      LocalPopChoice(f_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_20;
      {
        ATerm h_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_20 = t;
            if((PushChoice() == 0))
              {
                ATerm j_10 = NULL,k_10 = NULL;
                j_10 = t;
                t = (ATerm) ATinsert(ATempty, term_v_8);
                k_10 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_10, (ATerm) ATinsert(ATempty, term_v_8));
                t = k_6(j_10, k_10, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_20;
              }
            t = debug_1_0(w_1, t);
            ;
            LocalPopChoice(j_20);
          }
        else
          {
            t = h_20;
            t = debug_1_0(c_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_p_20;
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,a_11 = NULL;
  x_10 = t;
  t = term_x_17;
  y_10 = t;
  t = (ATerm) ATinsert(ATempty, term_q_20);
  a_11 = t;
  t = SSL_printnl(y_10, a_11);
  t = x_10;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm c_11 = NULL,e_11 = NULL,g_11 = NULL;
  if(match_cons(t, sym__3))
    {
      c_11 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
      g_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_6(c_11, e_11, g_11, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  h_11 = t;
  t = term_x_17;
  i_11 = t;
  t = (ATerm) ATinsert(ATempty, term_r_20);
  j_11 = t;
  t = SSL_printnl(i_11, j_11);
  t = h_11;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  m_11 = t;
  t = term_x_17;
  n_11 = t;
  t = (ATerm) ATinsert(ATempty, term_q_20);
  o_11 = t;
  t = SSL_printnl(n_11, o_11);
  t = m_11;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  l_10 = t;
  t = if_verbose5_1_0(e_2, t);
  {
    ATerm s_20 = t;
    if((PushChoice() == 0))
      {
        ATerm v_10 = NULL,w_10 = NULL;
        t = term_w_20;
        v_10 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, l_10);
        w_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_20, (ATerm) ATmakeAppl(sym_Imported_1, l_10));
        t = r_6(v_10, w_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_20;
      }
    m_10 = t;
    t = term_w_20;
    o_10 = t;
    t = term_x_20;
    p_10 = t;
    t = (ATerm) ATinsert(ATempty, l_10);
    q_10 = t;
    t = SSL_table_put(o_10, p_10, q_10);
    t = m_10;
    t = if_verbose4_1_0(g_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(i_2, t);
    n_10 = t;
    t = term_w_20;
    r_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_20, n_10);
    t = g_6(j_2, r_10, n_10, t);
    t = if_verbose6_1_0(k_2, t);
    t = term_w_20;
    s_10 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, l_10);
    t_10 = t;
    t = (ATerm) ATempty;
    u_10 = t;
    t = SSL_table_put(s_10, t_10, u_10);
    t = (ATerm) ATmakeAppl(sym__3, term_w_20, (ATerm)ATmakeAppl(sym_Imported_1, l_10), (ATerm) ATempty);
    t = if_verbose4_1_0(l_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm a_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_2 (ATerm t)
            {
              t = filter_1_0(r_83, t);
              return(t);
            }
            t = Cons_2_0(r_83, p_2, t);
            ;
            LocalPopChoice(g_21);
          }
        else
          {
            t = a_21;
            {
              ATerm s_11 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm i_21 = ATgetFirst((ATermList) t);
                  s_11 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = s_11;
              t = filter_1_0(r_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm u_11 (ATerm t)
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_85(t);
        t = u_11(t);
        ;
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
      }
    return(t);
  }
  t = u_11(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_11 = NULL;
            t = term_w_21;
            v_11 = t;
            t = SSL_getenv(v_11);
            ;
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            t = XTC_REPOSITORY();
          }
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
  t = term_a_22;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL;
  t = term_w_20;
  b_12 = t;
  t = term_b_22;
  c_12 = t;
  t = term_h_22;
  t = r_6(b_12, c_12, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm l_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_22;
      }
  }
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm w_11 = NULL;
  t = if_verbose5_1_0(q_2, t);
  w_11 = t;
  {
    ATerm q_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_11 = NULL,y_11 = NULL;
        t = term_w_20;
        x_11 = t;
        t = term_x_20;
        y_11 = t;
        t = term_x_22;
        t = r_6(x_11, y_11, t);
        ;
        LocalPopChoice(w_22);
      }
    else
      {
        t = q_22;
        {
          ATerm a_12 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          a_12 = t;
          t = repeat_1_0(s_2, t);
          t = a_12;
        }
      }
    t = w_11;
    t = if_verbose5_1_0(u_2, t);
  }
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = debug_1_0(e_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm t_13 (ATerm h_12, ATerm t)
{
  ATerm q_12 = NULL,s_12 = NULL,t_12 = NULL;
  t = term_w_20;
  s_12 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, h_12);
  t_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_20, (ATerm) ATmakeAppl(sym_Tool_1, h_12));
  t = r_6(s_12, t_12, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_23 = ATgetFirst((ATermList) t);
      if(match_cons(b_23, sym__2))
        {
          ATerm d_23 = ATgetArgument(b_23, 0);
          q_12 = ATgetArgument(b_23, 1);
        }
      else
        _fail(t);
      {
        ATerm c_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_12;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = debug_1_0(l_3, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_w_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(n_3, t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_g_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(d_3, t);
      t = xtc_load_0_0(t);
      {
        ATerm w_12 = NULL,x_12 = NULL,b_13 = NULL;
        b_13 = t;
        if(match_cons(t, sym__2))
          {
            w_12 = ATgetArgument(t, 0);
            x_12 = ATgetArgument(t, 1);
            {
              ATerm j_23 = t;
              int l_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
                  t = term_w_20;
                  j_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, w_12);
                  k_13 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_w_20, (ATerm) ATmakeAppl(sym_Tool_1, w_12));
                  t = r_6(j_13, k_13, t);
                  {
                    ATerm j_3 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((x_12 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((i_13 != NULL) && (i_13 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            i_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(j_3, t);
                    t = not_null(i_13);
                  }
                  ;
                  LocalPopChoice(l_23);
                }
              else
                {
                  t = j_23;
                  t = t_13(b_13, t);
                }
            }
          }
        else
          {
            t = t_13(b_13, t);
          }
        t = if_verbose5_1_0(k_3, t);
      }
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      {
        ATerm s_13 = NULL,y_2 = NULL,c_3 = NULL;
        s_13 = t;
        t = term_x_17;
        y_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_23), s_13), term_m_23);
        c_3 = t;
        t = SSL_printnl(y_2, c_3);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_23), s_13), term_m_23);
        t = if_verbose5_1_0(m_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL;
  z_13 = t;
  t = e_90(t);
  t = xtc_find_0_0(t);
  a_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_14, z_13);
  {
    ATerm o_3 (ATerm t)
    {
      ATerm b_14 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, a_14, z_13);
      t = a_6(a_14, z_13, t);
      t = term_p_23;
      b_14 = t;
      t = SSL_exit(b_14);
      return(t);
    }
    t = fork_and_wait_1_0(o_3, t);
    t = z_13;
  }
  return(t);
}
ATerm j_6 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL;
  c_14 = t;
  t = p_86(t);
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_14, q_44, o_44);
  t = s_6(d_14, q_44, o_44, t);
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_14 = NULL;
        t = term_s_23;
        o_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_14, term_s_23);
        t = r_6(d_14, o_14, t);
        ;
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_14 = ATgetFirst((ATermList) t);
        h_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_s_23;
    i_14 = t;
    t = (ATerm) ATinsert(CheckATermList(h_14), (ATerm) ATinsert(CheckATermList(g_14), q_44));
    j_14 = t;
    t = SSL_table_put(d_14, i_14, j_14);
    t = c_14;
  }
  return(t);
}
ATerm q_15 (ATerm s_14, ATerm t)
{
  t = s_14;
  {
    ATerm t_23 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_23 = ATgetArgument(t, 0);
            ATerm v_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_23;
      }
    t = term_w_23;
    t = debug_1_0(q_3, t);
    t = (ATerm) ATmakeAppl(sym__2, s_14, term_y_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm r_15 (ATerm w_14, ATerm x_14, ATerm y_14, ATerm t)
{
  t = SSL_open_file(w_14, x_14);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_x_23;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm j_15 = NULL,l_15 = NULL,m_15 = NULL;
  j_15 = t;
  if(match_cons(t, sym__2))
    {
      l_15 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_15(j_15, t);
            ;
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            t = r_15(l_15, m_15, j_15, t);
          }
      }
    }
  else
    {
      t = q_15(j_15, t);
    }
  return(t);
}
ATerm k_6 (ATerm l_48, ATerm m_48, ATerm t)
{
  t = SSL_access(l_48, m_48);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL;
  t = term_a_24;
  t = new_0_0(t);
  v_15 = t;
  t = term_b_24;
  w_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_15, term_b_24);
  t = q_6(v_15, w_15, t);
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_15 = NULL,z_15 = NULL;
        x_15 = t;
        t = (ATerm) ATinsert(ATempty, term_v_8);
        z_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_15, (ATerm) ATinsert(ATempty, term_v_8));
        t = k_6(x_15, z_15, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
      }
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL;
  t = new_file_0_0(t);
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_16, term_y_8);
  t = open_file_0_0(t);
  t = term_a_24;
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_16, term_a_24);
  t = j_6(r_3, d_16, e_16, t);
  t = d_16;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL;
  r_16 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm g_3 = NULL,i_3 = NULL;
      t = r_16;
      t = xtc_new_file_0_0(t);
      g_3 = t;
      t = m_0(t);
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATinsert(ATinsert(ATempty, g_3), term_f_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(g_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_3);
    }
  else
    {
      ATerm p_3 = NULL,t_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_16;
      t = xtc_new_file_0_0(t);
      p_3 = t;
      t = m_0(t);
      t_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_3), term_f_24), s_16), term_j_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(p_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_3);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm n_68 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,p_0 = NULL,q_0 = NULL;
  b_17 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_17);
  w_16 = t;
  t = z_16;
  t = n_68(t);
  a_17 = t;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, a_17);
  p_0 = t;
  t = SSLsetAnnotations(p_0, w_16);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_k_24;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL;
  t = term_a_24;
  t = pass_width_0_0(t);
  h_17 = t;
  t = term_a_24;
  t = pass_verbose_0_0(t);
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_17, i_17);
  t = conc_0_0(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_k_24;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL;
  t = term_a_24;
  t = pass_width_0_0(t);
  m_17 = t;
  t = term_a_24;
  t = pass_verbose_0_0(t);
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_17, n_17);
  t = conc_0_0(t);
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm m_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_24 = t;
      int s_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(s_24);
        }
      else
        {
          t = r_24;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(p_24);
      t = xtc_transform_file_2_0(s_3, u_3, t);
    }
  else
    {
      t = m_24;
      t = xtc_transform_term_2_0(v_3, w_3, t);
    }
  return(t);
}
ATerm l_6 (ATerm t_24, ATerm u_24, ATerm t)
{
  t = SSL_copy(t_24, u_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL;
  g_18 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_24 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_4 = NULL;
        t = g_18;
        t = k_0(t);
        l_4 = t;
        {
          ATerm e_25 = t;
          int f_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(f_25);
            }
          else
            {
              t = e_25;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_18, l_4);
          t = l_6(h_18, l_4, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, h_18);
        }
        ;
        LocalPopChoice(b_25);
      }
    else
      {
        t = v_24;
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_4 = NULL;
              t = g_18;
              t = k_0(t);
              w_4 = t;
              {
                ATerm j_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm l_25 = t;
                    int m_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(m_25);
                      }
                    else
                      {
                        t = l_25;
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
                                ATerm x_4 = NULL;
                                x_4 = t;
                                if((h_18 != t))
                                  {
                                    _fail(t);
                                  }
                                t = x_4;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_25;
                  }
                t = (ATerm) ATmakeAppl(sym__2, h_18, w_4);
                t = l_6(h_18, w_4, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, h_18);
              }
              ;
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              t = g_18;
              t = k_0(t);
              if((h_18 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_18);
            }
        }
      }
  }
  return(t);
}
ATerm m_6 (ATerm m_45, ATerm n_45, ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL;
  l_18 = t;
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
        t = r_6(m_45, n_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_25 = ATgetFirst((ATermList) t);
            m_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_25);
        t = SSL_table_put(m_45, n_45, m_18);
        t = (ATerm) ATmakeAppl(sym__3, m_45, n_45, m_18);
      }
    else
      {
        t = t_25;
        t = SSL_table_remove(m_45, n_45);
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
      }
    t = l_18;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
  o_18 = t;
  t = m_86(t);
  p_18 = t;
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_18 = NULL;
        t = term_s_23;
        u_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_18, term_s_23);
        t = r_6(p_18, u_18, t);
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_18 = ATgetFirst((ATermList) t);
        r_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_s_23;
    t_18 = t;
    t = SSL_table_put(p_18, t_18, r_18);
    t = s_18;
    {
      ATerm x_3 (ATerm t)
      {
        ATerm w_18 = NULL;
        w_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_18, w_18);
        t = m_6(p_18, w_18, t);
        return(t);
      }
      t = map_1_0(x_3, t);
      t = o_18;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_87(t);
      t = i_87(t);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      t = i_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm c_19 = NULL,e_19 = NULL,g_19 = NULL,j_19 = NULL,k_19 = NULL;
  c_19 = t;
  t = l_86(t);
  e_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_19, term_s_23);
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_19 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_26 = ATgetArgument(t, 0);
            ATerm h_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_23;
        v_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_19, term_s_23);
        t = r_6(e_19, v_19, t);
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = (ATerm) ATempty;
      }
    g_19 = t;
    t = term_s_23;
    j_19 = t;
    t = (ATerm) ATinsert(CheckATermList(g_19), (ATerm) ATempty);
    k_19 = t;
    t = SSL_table_put(e_19, j_19, k_19);
    t = c_19;
  }
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_20 = NULL;
      i_20 = t;
      t = SSL_remove(i_20);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm z_19 = NULL;
  t = begin_scope_1_0(y_3, t);
  {
    ATerm z_3 (ATerm t)
    {
      ATerm a_20 = NULL;
      a_20 = t;
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_20 = NULL,e_20 = NULL;
            t = term_e_24;
            b_20 = t;
            t = term_s_23;
            e_20 = t;
            t = term_p_26;
            t = r_6(b_20, e_20, t);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((z_19 != NULL) && (z_19 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              z_19 = ATgetFirst((ATermList) t);
            {
              ATerm q_26 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(z_19);
        t = map_1_0(a_4, t);
        t = a_20;
        t = end_scope_1_0(b_4, t);
      }
      return(t);
    }
    t = restore_always_2_0(q_89, z_3, t);
  }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
      t = term_u_26;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_89 (ATerm), ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_20 = NULL;
        t = term_j_24;
        t = get_config_0_0(t);
        m_20 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_20);
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = term_u_8;
      }
    t = r_89(t);
    t = copy_to_1_0(d_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(c_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  n_20 = t;
  t = term_a_24;
  t = whoami_0_0(t);
  o_20 = t;
  t = term_x_17;
  t_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_27), o_20), term_a_27);
  u_20 = t;
  t = SSL_printnl(t_20, u_20);
  t = term_p_8;
  v_20 = t;
  t = SSL_exit(v_20);
  t = n_20;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_21 = NULL,h_21 = NULL,j_21 = NULL;
      t = term_a_24;
      t = j_0(t);
      f_21 = t;
      t = term_h_27;
      h_21 = t;
      t = term_i_27;
      j_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_27, term_i_27, f_21);
      t = s_6(h_21, j_21, f_21, t);
      _fail(t);
    }
  else
    {
      ATerm p_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_21 = ATgetFirst((ATermList) t);
          c_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_21 = ATgetFirst((ATermList) t);
          e_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_21;
      t = h_0(t);
      t = d_21;
      t = i_0(t);
      p_21 = t;
      t = (ATerm) ATinsert(CheckATermList(e_21), p_21);
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm s_21 = NULL;
  s_21 = t;
  if(match_string(t, "-k"))
    {
      t = s_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_21;
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t_21 = t;
  t = SSL_string_to_int(t_21);
  u_21 = t;
  t = term_j_27;
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_27, u_21);
  t = u_6(v_21, u_21, t);
  t = t_21;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_k_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_4, f_4, j_4, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm x_21 = NULL;
  x_21 = t;
  if(match_string(t, "-S"))
    {
      t = x_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_21;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL;
  t = term_m_8;
  y_21 = t;
  t = term_m_27;
  z_21 = t;
  t = term_n_27;
  t = u_6(y_21, z_21, t);
  t = term_o_27;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_u_27;
  return(t);
}
ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
  c_22 = t;
  t = SSL_string_to_int(c_22);
  d_22 = t;
  t = term_m_8;
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, d_22);
  t = u_6(e_22, d_22, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_22);
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_v_27;
  return(t);
}
ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL;
  t = term_w_27;
  f_22 = t;
  t = term_a_24;
  g_22 = t;
  t = term_y_27;
  t = u_6(f_22, g_22, t);
  t = term_c_28;
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, n_4, o_4, t);
      ;
      LocalPopChoice(t_28);
    }
  else
    {
      t = p_28;
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_4, s_4, t_4, t);
            ;
            LocalPopChoice(v_28);
          }
        else
          {
            t = u_28;
            t = Option_3_0(u_4, v_4, z_4, t);
          }
      }
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm i_22 = NULL;
  i_22 = t;
  if(match_string(t, "-o"))
    {
      t = i_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_22;
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL;
  j_22 = t;
  t = term_f_24;
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_24, j_22);
  t = u_6(k_22, j_22, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_22);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_w_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, b_5, c_5, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm m_22 = NULL;
  m_22 = t;
  if(match_string(t, "-i"))
    {
      t = m_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_22;
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL;
  o_22 = t;
  t = term_j_24;
  p_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_24, o_22);
  t = u_6(p_22, o_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_22);
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_x_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_5, e_5, f_5, t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm r_22 = NULL;
  r_22 = t;
  if(match_string(t, "-w"))
    {
      t = r_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = r_22;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL;
  s_22 = t;
  t = term_s_8;
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_8, s_22);
  t = u_6(t_22, s_22, t);
  t = s_22;
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_d_29;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm e_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(j_29);
    }
  else
    {
      t = e_29;
      {
        ATerm k_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(l_29);
          }
        else
          {
            t = k_29;
            {
              ATerm m_29 = t;
              int n_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  ;
                  LocalPopChoice(n_29);
                }
              else
                {
                  t = m_29;
                  {
                    ATerm r_29 = t;
                    int s_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        ;
                        LocalPopChoice(s_29);
                      }
                    else
                      {
                        t = r_29;
                        t = ArgOption_3_0(g_5, h_5, j_5, t);
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
  ATerm u_22 = NULL,v_22 = NULL,y_22 = NULL,z_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_24;
  t = whoami_0_0(t);
  u_22 = t;
  t = term_x_17;
  v_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_29), u_22);
  y_22 = t;
  t = SSL_printnl(v_22, y_22);
  t = term_p_8;
  z_22 = t;
  t = SSL_exit(z_22);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_29;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_6 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm y_29 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_43, d_43);
      ;
      LocalPopChoice(b_30);
    }
  else
    {
      t = y_29;
      t = SSL_addr(c_43, d_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm t)
{
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_82(t);
      ;
      LocalPopChoice(d_30);
    }
  else
    {
      t = c_30;
      {
        ATerm e_23 = NULL,f_23 = NULL,k_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_23 = ATgetFirst((ATermList) t);
            f_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_23;
        t = foldr_2_0(o_82, p_82, t);
        k_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_23, k_23);
        t = p_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_m_27;
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL;
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(u_5, v_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_23 = NULL,o_5 = NULL,p_5 = NULL;
  t = times_0_0(t);
  o_5 = t;
  t = SSL_explode_term(o_5);
  if(match_cons(t, sym__2))
    {
      ATerm e_30 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5;
  t = foldr_2_0(k_5, l_5, t);
  o_23 = t;
  t = SSL_TicksToSeconds(o_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
  g_24 = t;
  if(match_cons(t, sym__2))
    {
      h_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_24;
        if((h_24 != t))
          {
            _fail(t);
          }
        t = g_24;
        ;
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        t = (ATerm) ATmakeAppl(sym__2, h_24, i_24);
        {
          ATerm h_30 = t;
          int i_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_24, i_24);
              ;
              LocalPopChoice(i_30);
            }
          else
            {
              t = h_30;
              t = SSL_gtr(h_24, i_24);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_24, i_24);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_24 = NULL,q_24 = NULL;
      l_24 = t;
      t = term_m_8;
      t = get_config_0_0(t);
      q_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, term_p_8);
      t = geq_0_0(t);
      t = l_24;
      t = t_87(t);
      ;
      LocalPopChoice(u_30);
    }
  else
    {
      t = t_30;
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  t = run_time_0_0(t);
  w_24 = t;
  t = term_a_24;
  t = whoami_0_0(t);
  x_24 = t;
  t = term_x_17;
  y_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_30), w_24), term_o_9), x_24);
  z_24 = t;
  t = SSL_printnl(y_24, z_24);
  t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_30), w_24), term_o_9), x_24));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_27;
  a_25 = t;
  t = SSL_exit(a_25);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      {
        ATerm y_30 = t;
        int d_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(d_31);
          }
        else
          {
            t = y_30;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm t)
{
  ATerm e_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_31);
    }
  else
    {
      t = e_31;
      t = fetch_1_0(n_5, t);
    }
  t = s_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_25 = ATgetFirst((ATermList) t);
      d_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_25 = NULL,k_25 = NULL;
        t = d_25;
        t = g_0(t);
        i_25 = t;
        t = c_25;
        t = e_0(t);
        k_25 = t;
        t = d_25;
        {
          ATerm s_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(i_25), k_25);
            return(t);
          }
          t = reverse_acc_2_0(e_0, s_5, t);
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
ATerm Program_1_0 (ATerm u_68 (ATerm), ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_0 = NULL,u_0 = NULL;
  q_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_25);
  n_25 = t;
  t = o_25;
  t = u_68(t);
  p_25 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_25);
  r_0 = t;
  t = SSLsetAnnotations(r_0, n_25);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm e_26 = NULL;
  e_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_26), term_l_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_26 = NULL,d_26 = NULL;
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      t = fetch_1_0(t_5, t);
    }
  t = term_o_31;
  t = echo_0_0(t);
  t = term_h_27;
  a_26 = t;
  t = term_i_27;
  d_26 = t;
  t = term_p_31;
  t = r_6(a_26, d_26, t);
  t = reverse_acc_2_0(_id, w_5, t);
  t = map_1_0(b_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm v_68 (ATerm), ATerm t)
{
  ATerm f_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,x_0 = NULL,z_0 = NULL;
  k_26 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      i_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_26);
  f_26 = t;
  t = i_26;
  t = v_68(t);
  j_26 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, j_26);
  x_0 = t;
  t = SSLsetAnnotations(x_0, f_26);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm t_26 (ATerm t)
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_76, _id, t);
        ;
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
        t = Cons_2_0(_id, t_26, t);
      }
    return(t);
  }
  t = t_26(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
  v_26 = t;
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_26;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_31 = ATgetFirst((ATermList) t);
                ATerm v_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_26;
          }
        ;
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        t = (ATerm) ATinsert(ATempty, v_26);
      }
    w_26 = t;
    t = term_u_26;
    x_26 = t;
    t = SSL_printnl(x_26, w_26);
    t = v_26;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_29;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm q_6 (ATerm y_41, ATerm z_41, ATerm t)
{
  t = SSL_strcat(y_41, z_41);
  return(t);
}
ATerm debug_1_0 (ATerm b_72 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
  b_27 = t;
  t = b_72(t);
  c_27 = t;
  t = term_x_17;
  d_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_27), c_27);
  e_27 = t;
  t = SSL_printnl(d_27, e_27);
  t = b_27;
  return(t);
}
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm f_27 (ATerm t)
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        t = Cons_2_0(w_75, f_27, t);
      }
    return(t);
  }
  t = f_27(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(z_31);
    }
  else
    {
      t = y_31;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_27 = NULL;
      l_27 = t;
      t = SSL_is_string(l_27);
      ;
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
      {
        ATerm d_32 = t;
        int e_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_6, t);
            ;
            LocalPopChoice(e_32);
          }
        else
          {
            t = d_32;
            {
              ATerm p_27 = NULL,q_27 = NULL,t_27 = NULL;
              p_27 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_27 = ATgetArgument(t, 0);
                  t = q_27;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_27 = ATgetArgument(t, 0);
                      t = q_27;
                      {
                        ATerm f_32 = t;
                        int g_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(g_32);
                          }
                        else
                          {
                            t = f_32;
                            t = debug_1_0(o_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_28 = NULL,b_28 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_27 = ATgetArgument(t, 0);
                          t_27 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_27;
                      t = eval_config_0_0(t);
                      a_28 = t;
                      t = t_27;
                      t = eval_config_0_0(t);
                      b_28 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_28, b_28);
                      t = q_6(a_28, b_28, t);
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
  ATerm e_28 = NULL,f_28 = NULL;
  e_28 = t;
  t = term_h_32;
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_32, e_28);
  t = r_6(f_28, e_28, t);
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_28 = NULL,h_28 = NULL;
        t = eval_config_0_0(t);
        g_28 = t;
        t = term_h_32;
        h_28 = t;
        t = SSL_table_put(h_28, e_28, g_28);
        t = g_28;
        ;
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
      }
  }
  return(t);
}
ATerm p_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL;
  t = term_k_32;
  i_28 = t;
  t = term_a_24;
  j_28 = t;
  t = term_l_32;
  t = u_6(i_28, j_28, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
  t = term_k_32;
  k_28 = t;
  t = term_a_24;
  l_28 = t;
  t = term_l_32;
  t = u_6(k_28, l_28, t);
  t = term_n_32;
  m_28 = t;
  t = term_a_24;
  n_28 = t;
  t = term_o_32;
  t = u_6(m_28, n_28, t);
  t = term_p_32;
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_6, t_6, w_6, t);
      ;
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      t = Option_3_0(x_6, b_7, c_7, t);
    }
  return(t);
}
ATerm u_6 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm o_28 = NULL;
  t = term_h_32;
  o_28 = t;
  t = SSL_table_put(o_28, h_47, i_47);
  t = (ATerm) ATmakeAppl(sym__3, term_h_32, h_47, i_47);
  return(t);
}
ATerm r_6 (ATerm y_46, ATerm z_46, ATerm t)
{
  t = SSL_table_get(y_46, z_46);
  return(t);
}
ATerm s_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_32 = ATgetArgument(t, 0);
            ATerm w_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
        t = r_6(h_45, i_45, t);
        ;
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        t = (ATerm) ATempty;
      }
    r_28 = t;
    t = (ATerm) ATinsert(CheckATermList(r_28), g_45);
    s_28 = t;
    t = SSL_table_put(h_45, i_45, s_28);
    t = q_28;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
      t = term_a_24;
      t = d_0(t);
      a_29 = t;
      t = term_h_27;
      b_29 = t;
      t = term_i_27;
      c_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_27, term_i_27, a_29);
      t = s_6(b_29, c_29, a_29, t);
      _fail(t);
    }
  else
    {
      ATerm f_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_28 = ATgetFirst((ATermList) t);
          z_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_28;
      t = a_0(t);
      t = term_a_24;
      t = c_0(t);
      f_29 = t;
      t = (ATerm) ATinsert(CheckATermList(z_28), f_29);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,c_1 = NULL,d_1 = NULL;
  q_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_29 = ATgetFirst((ATermList) t);
      i_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_29);
  g_29 = t;
  t = h_29;
  t = o_63(t);
  o_29 = t;
  t = i_29;
  t = p_63(t);
  p_29 = t;
  d_1 = t;
  t = (ATerm) ATinsert(CheckATermList(p_29), o_29);
  c_1 = t;
  t = SSLsetAnnotations(c_1, g_29);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL;
  w_29 = t;
  t = term_u_29;
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_29, w_29);
  t = u_6(x_29, w_29, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, w_29);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm v_29 = NULL;
  v_29 = t;
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_32;
        t = q_93(t);
        ;
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
      }
    t = v_29;
    {
      ATerm i_7 (ATerm t)
      {
        ATerm a_33 = t;
        int b_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_33 = t;
            int d_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_33);
              }
            else
              {
                t = c_33;
                t = q_93(t);
                t = Cons_2_0(_id, i_7, t);
              }
            ;
            LocalPopChoice(b_33);
          }
        else
          {
            t = a_33;
            {
              ATerm z_29 = NULL,a_30 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_29 = ATgetFirst((ATermList) t);
                  a_30 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_30), (ATerm) ATmakeAppl(sym_Undefined_1, z_29));
            }
          }
        return(t);
      }
      t = Cons_2_0(f_7, i_7, t);
    }
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  if(match_string(t, "--help"))
    {
      t = q_30;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_30;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_30;
        }
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  t = term_k_31;
  r_30 = t;
  t = term_a_24;
  s_30 = t;
  t = term_e_33;
  t = u_6(r_30, s_30, t);
  t = term_f_33;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_g_33;
  return(t);
}
ATerm q_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
  j_30 = t;
  t = term_h_27;
  m_30 = t;
  t = term_i_27;
  n_30 = t;
  t = (ATerm) ATempty;
  o_30 = t;
  t = SSL_table_put(m_30, n_30, o_30);
  t = j_30;
  {
    ATerm k_7 (ATerm t)
    {
      ATerm h_33 = t;
      int i_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_93(t);
          ;
          LocalPopChoice(i_33);
        }
      else
        {
          t = h_33;
          {
            ATerm j_33 = t;
            int k_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_7, n_7, o_7, t);
                ;
                LocalPopChoice(k_33);
              }
            else
              {
                t = j_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_7, t);
    {
      ATerm l_33 = t;
      int m_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_30 = NULL;
          z_30 = t;
          {
            ATerm n_33 = t;
            int o_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_8 = NULL;
                t = z_30;
                {
                  ATerm p_33 = t;
                  int q_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_k_31;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(q_33);
                    }
                  else
                    {
                      t = p_33;
                      t = fetch_1_0(q_7, t);
                    }
                  t = z_30;
                  t = default_system_usage_0_0(t);
                  t = term_m_27;
                  d_8 = t;
                  t = SSL_exit(d_8);
                }
                ;
                LocalPopChoice(o_33);
              }
            else
              {
                t = n_33;
                {
                  ATerm i_9 = NULL;
                  t = term_k_32;
                  t = get_config_0_0(t);
                  t = z_30;
                  t = default_system_about_0_0(t);
                  t = term_m_27;
                  i_9 = t;
                  t = SSL_exit(i_9);
                }
              }
          }
          ;
          LocalPopChoice(m_33);
        }
      else
        {
          t = l_33;
          {
            ATerm r_33 = t;
            int s_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
                ATerm s_7 (ATerm t)
                {
                  ATerm t_7 (ATerm t)
                  {
                    if(((k_30 != NULL) && (k_30 != t)))
                      _fail(t);
                    else
                      k_30 = t;
                    return(t);
                  }
                  t = Undefined_1_0(t_7, t);
                  return(t);
                }
                t = fetch_1_0(s_7, t);
                t = term_x_17;
                a_31 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_30)), term_t_33);
                b_31 = t;
                t = SSL_printnl(a_31, b_31);
                t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_30)), term_t_33));
                t = default_system_usage_0_0(t);
                t = term_p_8;
                c_31 = t;
                t = SSL_exit(c_31);
                ;
                LocalPopChoice(s_33);
              }
            else
              {
                t = r_33;
              }
          }
        }
      l_30 = t;
      t = term_h_27;
      p_30 = t;
      t = SSL_table_destroy(p_30);
      t = l_30;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
  t = parse_options_1_0(u_91, t);
  f_31 = t;
  t = term_u_33;
  g_31 = t;
  t = SSL_table_create(g_31);
  t = term_u_33;
  h_31 = t;
  t = term_v_33;
  i_31 = t;
  t = SSL_table_put(h_31, i_31, f_31);
  t = f_31;
  t = w_91(t);
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_91, t);
        ;
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        {
          ATerm y_33 = t;
          int z_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_33);
            }
          else
            {
              t = y_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = xtc_io_1_0(abox2text_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, v_7, t);
  return(t);
}
