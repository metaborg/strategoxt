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
ATerm term_x_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_a_33;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_h_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_a_31;
ATerm term_c_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_z_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_a_28;
ATerm term_w_27;
ATerm term_o_27;
ATerm term_f_27;
ATerm term_n_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_t_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_b_24;
ATerm term_x_23;
ATerm term_b_23;
ATerm term_x_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_i_22;
ATerm term_e_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_u_21;
ATerm term_v_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_g_19;
ATerm term_d_19;
ATerm term_q_18;
ATerm term_e_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
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
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
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
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_h_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_m_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_u_8;
ATerm term_p_8;
void init_constant_terms (void)
{
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_u_8, term_x_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_d_10, term_h_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_m_10, term_n_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_10, term_q_10, term_r_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_u_10, term_v_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_b_11, term_c_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_f_11, term_g_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_11, term_k_11, term_l_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_o_11, term_p_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_v_11, term_a_12);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_d_12, term_h_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_v_12, term_w_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_z_12, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_e_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_s_13, term_v_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_e_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_14, term_h_14, term_i_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_w_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_f_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_x_15, term_g_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_k_16, term_r_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_x_16, term_y_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_b_17, term_e_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_h_17, term_l_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym__2, term_x_22, term_e_24);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym__2, term_x_22, term_b_23);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_q_18);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_h_28);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_28);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym__2, term_n_25, term_l_19);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_l_29, term_m_29);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym__2, term_q_32, term_l_19);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_v_19, term_l_19);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym__2, term_r_31, term_l_19);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym__2, term_j_34, term_l_19);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table.tbl", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("PP-Table-GrammarId", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
ATerm y_5 (ATerm k_43, ATerm l_43, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm f_6 (ATerm t_27, ATerm u_27, ATerm);
ATerm h_6 (ATerm h_72 (ATerm), ATerm z_179, ATerm b_28, ATerm);
ATerm b_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm);
ATerm i_6 (ATerm p_24, ATerm q_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm w_70 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm i_90 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm u_6 (ATerm n_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm k_6 (ATerm t_86 (ATerm), ATerm s_44, ATerm q_44, ATerm);
ATerm w_7 (ATerm m_7, ATerm);
ATerm x_7 (ATerm o_7, ATerm p_7, ATerm q_7, ATerm);
ATerm l_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm r_68 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm pass_v_verbose_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm a_88 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm a_6 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm w_34, ATerm v_34, ATerm);
ATerm b_6 (ATerm e_80 (ATerm), ATerm s_34, ATerm r_34, ATerm);
ATerm w_1 (ATerm);
ATerm c_6 (ATerm g_46, ATerm h_46, ATerm i_46, ATerm);
ATerm d_6 (ATerm e_88 (ATerm), ATerm q_46, ATerm p_46, ATerm);
ATerm l_6 (ATerm n_48, ATerm o_48, ATerm);
ATerm t_11 (ATerm j_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm e_6 (ATerm z_27, ATerm);
ATerm g_6 (ATerm v_48, ATerm w_48, ATerm);
ATerm _2_0 (ATerm d_59 (ATerm), ATerm e_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm g_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm p_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm d_17 (ATerm j_16, ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm n_3 (ATerm);
ATerm xtc_sglr_2_0 (ATerm g_100 (ATerm), ATerm h_100 (ATerm), ATerm);
ATerm m_6 (ATerm v_24, ATerm w_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm n_6 (ATerm o_45, ATerm p_45, ATerm);
ATerm end_scope_1_0 (ATerm q_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm p_86 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm u_89 (ATerm), ATerm);
ATerm a_4 (ATerm);
ATerm xtc_io_1_0 (ATerm v_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm q_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm v_6 (ATerm j_47, ATerm k_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm t_6 (ATerm j_45, ATerm k_45, ATerm i_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm d_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm o_6 (ATerm e_43, ATerm f_43, ATerm);
ATerm foldr_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm h_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm need_help_1_0 (ATerm w_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm y_68 (ATerm), ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_6 (ATerm a_42, ATerm b_42, ATerm);
ATerm debug_1_0 (ATerm f_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm s_6 (ATerm a_47, ATerm b_47, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm x_5 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm c_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm);
ATerm e_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm u_93 (ATerm), ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm n_7 (ATerm);
ATerm parse_options_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm);
ATerm b_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm y_5 (ATerm k_43, ATerm l_43, ATerm t)
{
  ATerm f_5 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(k_43, l_43);
      ;
      LocalPopChoice(d_8);
    }
  else
    {
      t = f_5;
      t = SSL_subtr(k_43, l_43);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,p_0 = NULL,u_0 = NULL;
  t = term_p_8;
  {
    ATerm q_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(t_8);
      }
    else
      {
        t = q_8;
        t = term_u_8;
      }
    b_0 = t;
    t = term_u_8;
    p_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_u_8);
    t = y_5(b_0, p_0, t);
    u_0 = t;
    t = SSL_int_to_string(u_0);
    f_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_p_8);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm g_1 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_z_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm j_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          g_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_9);
      j_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_1, (ATerm) ATinsert(ATempty, term_a_9));
      t = l_6(g_1, j_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm f_6 (ATerm t_27, ATerm u_27, ATerm t)
{
  ATerm r_1 = NULL;
  t = SSL_write_term_to_stream_baf(t_27, u_27);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_1);
  return(t);
}
ATerm h_6 (ATerm h_72 (ATerm), ATerm z_179, ATerm b_28, ATerm t)
{
  ATerm s_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_179, term_b_9);
  t = open_stream_0_0(t);
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_1, b_28);
  t = h_72(t);
  t = fclose_0_0(t);
  t = b_28;
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      if(match_cons(c_9, sym_Stream_1))
        {
          c_2 = ATgetArgument(c_9, 0);
        }
      else
        _fail(t);
      d_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(c_2, d_2, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm z_1 = NULL,b_2 = NULL;
  z_1 = t;
  t = xtc_new_file_0_0(t);
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_2, z_1);
  t = h_6(b_1, b_2, z_1, t);
  t = SSL_close_file(b_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, b_2);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(r_90, s_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm i_6 (ATerm p_24, ATerm q_24, ATerm t)
{
  t = SSL_execvp(p_24, q_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm d_3 = NULL,h_3 = NULL,j_3 = NULL,l_3 = NULL;
  d_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      h_3 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,t_0 = NULL;
        t = SSL_int_to_string(h_3);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_9), s_0), term_e_9);
        t_0 = t;
        t = SSL_concat_strings(t_0);
      }
    }
  else
    {
      ATerm f_1 = NULL,h_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          h_3 = ATgetArgument(t, 0);
          j_3 = ATgetArgument(t, 1);
          l_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(j_3);
      f_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_3), term_m_9), f_1), term_g_9), h_3);
      h_1 = t;
      t = SSL_concat_strings(h_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm q_3 = NULL;
  ATerm c_1 (ATerm t)
  {
    t = m_76(t);
    if(((q_3 != NULL) && (q_3 != t)))
      _fail(t);
    else
      q_3 = t;
    return(t);
  }
  t = fetch_1_0(c_1, t);
  t = not_null(q_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm r_3 = NULL;
  r_3 = t;
  {
    ATerm o_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_17), term_f_17), term_z_16), term_s_16), term_h_16), term_u_15), term_g_15), term_y_14), term_j_14), term_f_14), term_y_13), term_q_13), term_f_13), term_b_13), term_x_12), term_t_12), term_p_12), term_i_12), term_b_12), term_s_11), term_m_11), term_h_11), term_d_11), term_z_10), term_s_10), term_o_10), term_k_10), term_a_10);
        {
          ATerm d_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm n_17 = ATgetArgument(t, 0);
                if((r_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm q_17 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(d_1, t);
        }
        ;
        LocalPopChoice(r_9);
      }
    else
      {
        t = o_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, r_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm v_3 = NULL;
  v_3 = t;
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_4 = NULL,q_1 = NULL,t_1 = NULL,u_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_17 = ATgetArgument(t, 0);
            g_4 = ATgetArgument(t, 1);
            {
              ATerm v_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = g_4;
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
          q_1 = t;
          t = term_x_17;
          t_1 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, q_1), term_y_17);
          u_1 = t;
          t = SSL_printnl(t_1, u_1);
          t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, q_1), term_y_17));
        }
        ;
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
      }
    t = v_3;
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
  ATerm o_4 = NULL,p_4 = NULL;
  o_4 = t;
  t = fork_0_0(t);
  p_4 = t;
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = o_4;
        t = w_70(t);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = SSL_waitpid(p_4);
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
        t = o_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm i_90 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL;
  r_4 = t;
  t = i_90(t);
  t = xtc_find_0_0(t);
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_4, r_4);
  {
    ATerm e_1 (ATerm t)
    {
      ATerm t_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, s_4, r_4);
      t = i_6(s_4, r_4, t);
      t = term_e_18;
      t_4 = t;
      t = SSL_exit(t_4);
      return(t);
    }
    t = fork_and_wait_1_0(e_1, t);
    t = r_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_5, t);
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_76(t);
      }
    return(t);
  }
  t = g_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      {
        ATerm b_5 = NULL,c_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_5 = ATgetFirst((ATermList) t);
            c_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_5;
        {
          ATerm i_1 (ATerm t)
          {
            t = c_5;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(i_1, t);
        }
      }
    }
  return(t);
}
ATerm u_6 (ATerm n_5, ATerm t)
{
  ATerm r_5 = NULL;
  t = SSL_explode_term(n_5);
  if(match_cons(t, sym__2))
    {
      ATerm j_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_5 = NULL,z_5 = NULL,j_6 = NULL;
  j_6 = t;
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              t = z_5;
              return(t);
            }
            t = s_5;
            t = at_end_1_0(k_1, t);
            ;
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            t = u_6(j_6, t);
          }
      }
    }
  else
    {
      t = u_6(j_6, t);
    }
  return(t);
}
ATerm k_6 (ATerm t_86 (ATerm), ATerm s_44, ATerm q_44, ATerm t)
{
  ATerm w_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,d_7 = NULL,f_7 = NULL;
  w_6 = t;
  t = t_86(t);
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_6, s_44, q_44);
  t = t_6(z_6, s_44, q_44, t);
  {
    ATerm m_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_7 = NULL;
        t = term_q_18;
        g_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_6, term_q_18);
        t = s_6(z_6, g_7, t);
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = m_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_7 = ATgetFirst((ATermList) t);
        b_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_q_18;
    d_7 = t;
    t = (ATerm) ATinsert(CheckATermList(b_7), (ATerm) ATinsert(CheckATermList(a_7), s_44));
    f_7 = t;
    t = SSL_table_put(z_6, d_7, f_7);
    t = w_6;
  }
  return(t);
}
ATerm w_7 (ATerm m_7, ATerm t)
{
  t = m_7;
  {
    ATerm r_18 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_18 = ATgetArgument(t, 0);
            ATerm b_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_18;
      }
    t = term_d_19;
    t = debug_1_0(l_1, t);
    t = (ATerm) ATmakeAppl(sym__2, m_7, term_b_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm x_7 (ATerm o_7, ATerm p_7, ATerm q_7, ATerm t)
{
  t = SSL_open_file(o_7, p_7);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
  t_7 = t;
  if(match_cons(t, sym__2))
    {
      u_7 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_7(t_7, t);
            ;
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            t = x_7(u_7, v_7, t_7, t);
          }
      }
    }
  else
    {
      t = w_7(t_7, t);
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
  ATerm y_7 = NULL,z_7 = NULL;
  t = term_l_19;
  t = new_0_0(t);
  y_7 = t;
  t = term_m_19;
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_7, term_m_19);
  t = r_6(y_7, z_7, t);
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_8 = NULL,c_8 = NULL;
        a_8 = t;
        t = (ATerm) ATinsert(ATempty, term_a_9);
        c_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_8, (ATerm) ATinsert(ATempty, term_a_9));
        t = l_6(a_8, c_8, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
      }
  }
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_q_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL;
  t = new_file_0_0(t);
  e_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_8, term_b_9);
  t = open_file_0_0(t);
  t = term_l_19;
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_8, term_l_19);
  t = k_6(m_1, e_8, f_8, t);
  t = e_8;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL;
  r_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_1 = NULL,y_1 = NULL;
      t = r_8;
      t = xtc_new_file_0_0(t);
      x_1 = t;
      t = m_0(t);
      y_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_1, (ATerm) ATinsert(ATinsert(ATempty, x_1), term_r_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(x_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_1);
    }
  else
    {
      ATerm h_2 = NULL,i_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_8;
      t = xtc_new_file_0_0(t);
      h_2 = t;
      t = m_0(t);
      i_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_2), term_r_19), s_8), term_s_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(h_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_2);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm r_68 (ATerm), ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,n_0 = NULL,o_0 = NULL;
  y_8 = t;
  if(match_cons(t, sym_FILE_1))
    {
      w_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_8);
  v_8 = t;
  t = w_8;
  t = r_68(t);
  x_8 = t;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, x_8);
  n_0 = t;
  t = SSLsetAnnotations(n_0, v_8);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_9 = NULL,h_9 = NULL;
      d_9 = t;
      t = term_p_8;
      t = get_config_0_0(t);
      h_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_9, term_m_10);
      t = geq_0_0(t);
      t = d_9;
      t = z_87(t);
      ;
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_v_19);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(n_1, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm i_9 = NULL;
  i_9 = t;
  t = SSL_table_keys(i_9);
  {
    ATerm o_1 (ATerm t)
    {
      ATerm j_9 = NULL,k_9 = NULL;
      j_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_9, j_9);
      t = s_6(i_9, j_9, t);
      k_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_9, k_9);
      return(t);
    }
    t = map_1_0(o_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_9 = NULL,p_9 = NULL;
      n_9 = t;
      t = term_p_8;
      t = get_config_0_0(t);
      p_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_9, term_k_16);
      t = geq_0_0(t);
      t = n_9;
      t = b_88(t);
      ;
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_9 = NULL,s_9 = NULL;
      q_9 = t;
      t = term_p_8;
      t = get_config_0_0(t);
      s_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_9, term_l_12);
      t = geq_0_0(t);
      t = q_9;
      t = a_88(t);
      ;
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm e_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_9 = NULL,v_9 = NULL;
      t_9 = t;
      t = term_p_8;
      t = get_config_0_0(t);
      v_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_9, term_q_10);
      t = geq_0_0(t);
      t = t_9;
      t = c_88(t);
      ;
      LocalPopChoice(g_20);
    }
  else
    {
      t = e_20;
    }
  return(t);
}
ATerm a_6 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm w_34, ATerm v_34, ATerm t)
{
  t = i_80(t);
  {
    ATerm p_1 (ATerm t)
    {
      ATerm w_9 = NULL;
      w_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_34, w_9);
      t = h_80(t);
      return(t);
    }
    t = fetch_1_0(p_1, t);
    t = v_34;
  }
  return(t);
}
ATerm b_6 (ATerm e_80 (ATerm), ATerm s_34, ATerm r_34, ATerm t)
{
  t = s_34;
  {
    ATerm e_10 (ATerm t)
    {
      ATerm h_20 = t;
      int i_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = r_34;
          ;
          LocalPopChoice(i_20);
        }
      else
        {
          t = h_20;
          {
            ATerm j_20 = t;
            int k_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_9 = NULL,z_9 = NULL,b_10 = NULL;
                y_9 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    z_9 = ATgetFirst((ATermList) t);
                    b_10 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = y_9;
                {
                  ATerm v_1 (ATerm t)
                  {
                    t = r_34;
                    return(t);
                  }
                  t = a_6(e_80, v_1, z_9, b_10, t);
                  t = e_10(t);
                }
                ;
                LocalPopChoice(k_20);
              }
            else
              {
                t = j_20;
                t = Cons_2_0(_id, e_10, t);
              }
          }
        }
      return(t);
    }
    t = e_10(t);
  }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm w_10 = NULL;
  if(match_cons(t, sym__2))
    {
      w_10 = ATgetArgument(t, 0);
      if((w_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm c_6 (ATerm g_46, ATerm h_46, ATerm i_46, ATerm t)
{
  ATerm g_10 = NULL,i_10 = NULL,j_10 = NULL;
  g_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_46, h_46);
  {
    ATerm m_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_20 = ATgetArgument(t, 0);
            ATerm v_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_46, h_46);
        t = s_6(g_46, h_46, t);
        ;
        LocalPopChoice(q_20);
      }
    else
      {
        t = m_20;
        t = (ATerm) ATempty;
      }
    i_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_10, i_46);
    t = b_6(w_1, i_10, i_46, t);
    j_10 = t;
    t = SSL_table_put(g_46, h_46, j_10);
    t = g_10;
  }
  return(t);
}
ATerm d_6 (ATerm e_88 (ATerm), ATerm q_46, ATerm p_46, ATerm t)
{
  t = p_46;
  {
    ATerm a_2 (ATerm t)
    {
      ATerm x_10 = NULL,y_10 = NULL;
      if(match_cons(t, sym__2))
        {
          x_10 = ATgetArgument(t, 0);
          y_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, q_46, x_10, y_10);
      t = e_88(t);
      return(t);
    }
    t = map_1_0(a_2, t);
  }
  return(t);
}
ATerm l_6 (ATerm n_48, ATerm o_48, ATerm t)
{
  t = SSL_access(n_48, o_48);
  return(t);
}
ATerm t_11 (ATerm j_11, ATerm t)
{
  t = SSL_fclose(j_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL;
  r_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_11 = ATgetArgument(t, 0);
      {
        ATerm w_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_11);
            ;
            LocalPopChoice(y_20);
          }
        else
          {
            t = w_20;
            t = t_11(r_11, t);
          }
      }
    }
  else
    {
      t = t_11(r_11, t);
    }
  return(t);
}
ATerm e_6 (ATerm z_27, ATerm t)
{
  t = SSL_read_term_from_stream(z_27);
  return(t);
}
ATerm g_6 (ATerm v_48, ATerm w_48, ATerm t)
{
  ATerm w_11 = NULL;
  t = SSL_fopen(v_48, w_48);
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_11);
  return(t);
}
ATerm _2_0 (ATerm d_59 (ATerm), ATerm e_59 (ATerm), ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,q_0 = NULL,r_0 = NULL;
  g_12 = t;
  if(match_cons(t, sym__2))
    {
      y_11 = ATgetArgument(t, 0);
      z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_12);
  x_11 = t;
  t = y_11;
  t = d_59(t);
  e_12 = t;
  t = z_11;
  t = e_59(t);
  f_12 = t;
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_12, f_12);
  q_0 = t;
  t = SSLsetAnnotations(q_0, x_11);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_12 = NULL;
  t = SSL_stdin_stream();
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_12 = NULL;
  t = SSL_stdout_stream();
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_12 = NULL;
  t = SSL_stderr_stream();
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_12);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm m_13 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      m_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_13;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm p_13 = NULL;
  p_13 = t;
  t = SSL_is_string(p_13);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      ATerm d_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_13 = NULL,k_3 = NULL;
        g_13 = t;
        t = SSL_explode_term(g_13);
        if(match_cons(t, sym__2))
          {
            ATerm g_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_21 = ATgetArgument(t, 1);
              if(((ATgetType(h_21) == AT_LIST) && !(ATisEmpty(h_21))))
                {
                  k_3 = ATgetFirst((ATermList) h_21);
                  {
                    ATerm m_21 = (ATerm) ATgetNext((ATermList) h_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = k_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = k_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = k_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        {
          ATerm n_21 = t;
          int t_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_13 = NULL,l_13 = NULL;
              t = _2_0(e_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  h_13 = ATgetArgument(t, 0);
                  l_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_6(h_13, l_13, t);
              ;
              LocalPopChoice(t_21);
            }
          else
            {
              t = n_21;
              {
                ATerm n_13 = NULL,o_13 = NULL;
                t = _2_0(f_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    n_13 = ATgetArgument(t, 0);
                    o_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_6(n_13, o_13, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_u_21;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,w_13 = NULL;
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_13 = NULL;
      x_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_13, term_z_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      t = debug_1_0(g_2, t);
      _fail(t);
    }
  t_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(w_13, t);
  u_13 = t;
  t = t_13;
  t = fclose_0_0(t);
  t = u_13;
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_14 = NULL,c_14 = NULL;
      b_14 = t;
      t = (ATerm) ATinsert(ATempty, term_i_22);
      c_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_14, (ATerm) ATinsert(ATempty, term_i_22));
      t = l_6(b_14, c_14, t);
      LocalPopChoice(g_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = f_22;
      {
        ATerm m_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_22 = t;
            if((PushChoice() == 0))
              {
                ATerm d_14 = NULL,k_14 = NULL;
                d_14 = t;
                t = (ATerm) ATinsert(ATempty, term_a_9);
                k_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_14, (ATerm) ATinsert(ATempty, term_a_9));
                t = l_6(d_14, k_14, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_22;
              }
            t = debug_1_0(j_2, t);
            ;
            LocalPopChoice(o_22);
          }
        else
          {
            t = m_22;
            t = debug_1_0(k_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_s_22;
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,h_15 = NULL;
  d_15 = t;
  t = term_x_17;
  e_15 = t;
  t = (ATerm) ATinsert(ATempty, term_u_22);
  h_15 = t;
  t = SSL_printnl(e_15, h_15);
  t = d_15;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,m_15 = NULL;
  if(match_cons(t, sym__3))
    {
      i_15 = ATgetArgument(t, 0);
      j_15 = ATgetArgument(t, 1);
      m_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_6(i_15, j_15, m_15, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
  n_15 = t;
  t = term_x_17;
  o_15 = t;
  t = (ATerm) ATinsert(ATempty, term_v_22);
  p_15 = t;
  t = SSL_printnl(o_15, p_15);
  t = n_15;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  q_15 = t;
  t = term_x_17;
  r_15 = t;
  t = (ATerm) ATinsert(ATempty, term_u_22);
  s_15 = t;
  t = SSL_printnl(r_15, s_15);
  t = q_15;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,u_14 = NULL,v_14 = NULL,x_14 = NULL;
  l_14 = t;
  t = if_verbose5_1_0(l_2, t);
  {
    ATerm w_22 = t;
    if((PushChoice() == 0))
      {
        ATerm z_14 = NULL,c_15 = NULL;
        t = term_x_22;
        z_14 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, l_14);
        c_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_22, (ATerm) ATmakeAppl(sym_Imported_1, l_14));
        t = s_6(z_14, c_15, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_22;
      }
    m_14 = t;
    t = term_x_22;
    o_14 = t;
    t = term_b_23;
    p_14 = t;
    t = (ATerm) ATinsert(ATempty, l_14);
    q_14 = t;
    t = SSL_table_put(o_14, p_14, q_14);
    t = m_14;
    t = if_verbose4_1_0(n_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(p_2, t);
    n_14 = t;
    t = term_x_22;
    r_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_22, n_14);
    t = d_6(q_2, r_14, n_14, t);
    t = if_verbose6_1_0(r_2, t);
    t = term_x_22;
    u_14 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, l_14);
    v_14 = t;
    t = (ATerm) ATempty;
    x_14 = t;
    t = SSL_table_put(u_14, v_14, x_14);
    t = (ATerm) ATmakeAppl(sym__3, term_x_22, (ATerm)ATmakeAppl(sym_Imported_1, l_14), (ATerm) ATempty);
    t = if_verbose4_1_0(s_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm e_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = e_23;
      {
        ATerm i_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              t = filter_1_0(v_83, t);
              return(t);
            }
            t = Cons_2_0(v_83, t_2, t);
            ;
            LocalPopChoice(j_23);
          }
        else
          {
            t = i_23;
            {
              ATerm w_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm l_23 = ATgetFirst((ATermList) t);
                  w_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = w_15;
              t = filter_1_0(v_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm p_85 (ATerm), ATerm t)
{
  ATerm y_15 (ATerm t)
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_85(t);
        t = y_15(t);
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
      }
    return(t);
  }
  t = y_15(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm q_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = q_23;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_15 = NULL;
            t = term_b_24;
            z_15 = t;
            t = SSL_getenv(z_15);
            ;
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = debug_1_0(v_2, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_d_24;
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL;
  t = term_x_22;
  e_16 = t;
  t = term_e_24;
  f_16 = t;
  t = term_g_24;
  t = s_6(e_16, f_16, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm h_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_24;
      }
  }
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_i_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm a_16 = NULL;
  t = if_verbose5_1_0(u_2, t);
  a_16 = t;
  {
    ATerm j_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_16 = NULL,c_16 = NULL;
        t = term_x_22;
        b_16 = t;
        t = term_b_23;
        c_16 = t;
        t = term_m_24;
        t = s_6(b_16, c_16, t);
        ;
        LocalPopChoice(l_24);
      }
    else
      {
        t = j_24;
        {
          ATerm d_16 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          d_16 = t;
          t = repeat_1_0(w_2, t);
          t = d_16;
        }
      }
    t = a_16;
    t = if_verbose5_1_0(x_2, t);
  }
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = debug_1_0(a_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_n_24;
  return(t);
}
ATerm d_17 (ATerm j_16, ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
  t = term_x_22;
  m_16 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, j_16);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_22, (ATerm) ATmakeAppl(sym_Tool_1, j_16));
  t = s_6(m_16, n_16, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_24 = ATgetFirst((ATermList) t);
      if(match_cons(o_24, sym__2))
        {
          ATerm s_24 = ATgetArgument(o_24, 0);
          l_16 = ATgetArgument(o_24, 1);
        }
      else
        _fail(t);
      {
        ATerm r_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_16;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = debug_1_0(e_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_n_24;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_x_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(g_3, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_t_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm u_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(z_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
        q_16 = t;
        if(match_cons(t, sym__2))
          {
            o_16 = ATgetArgument(t, 0);
            p_16 = ATgetArgument(t, 1);
            {
              ATerm y_24 = t;
              int z_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
                  t = term_x_22;
                  u_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, o_16);
                  v_16 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_x_22, (ATerm) ATmakeAppl(sym_Tool_1, o_16));
                  t = s_6(u_16, v_16, t);
                  {
                    ATerm b_3 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((p_16 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((t_16 != NULL) && (t_16 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            t_16 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(b_3, t);
                    t = not_null(t_16);
                  }
                  ;
                  LocalPopChoice(z_24);
                }
              else
                {
                  t = y_24;
                  t = d_17(q_16, t);
                }
            }
          }
        else
          {
            t = d_17(q_16, t);
          }
        t = if_verbose5_1_0(c_3, t);
      }
      ;
      LocalPopChoice(x_24);
    }
  else
    {
      t = u_24;
      {
        ATerm c_17 = NULL,u_3 = NULL,w_3 = NULL;
        c_17 = t;
        t = term_x_17;
        u_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_25), c_17), term_a_25);
        w_3 = t;
        t = SSL_printnl(u_3, w_3);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_25), c_17), term_a_25);
        t = if_verbose5_1_0(f_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm xtc_sglr_2_0 (ATerm g_100 (ATerm), ATerm h_100 (ATerm), ATerm t)
{
  ATerm d_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_25 = t;
      int j_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(j_25);
        }
      else
        {
          t = i_25;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(h_25);
      {
        ATerm m_3 (ATerm t)
        {
          ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
          t = term_l_19;
          t = g_100(t);
          t = xtc_find_0_0(t);
          i_17 = t;
          t = term_l_19;
          t = h_100(t);
          j_17 = t;
          t = term_l_19;
          t = pass_v_verbose_0_0(t);
          k_17 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(k_17), j_17), term_n_25), i_17), term_l_25), term_k_25);
          return(t);
        }
        t = xtc_transform_file_2_0(i_3, m_3, t);
      }
    }
  else
    {
      t = d_25;
      {
        ATerm o_3 (ATerm t)
        {
          ATerm o_17 = NULL,p_17 = NULL,r_17 = NULL;
          t = term_l_19;
          t = g_100(t);
          t = xtc_find_0_0(t);
          o_17 = t;
          t = term_l_19;
          t = h_100(t);
          p_17 = t;
          t = term_l_19;
          t = pass_v_verbose_0_0(t);
          r_17 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(r_17), p_17), term_n_25), o_17), term_l_25), term_k_25);
          return(t);
        }
        t = xtc_transform_term_2_0(n_3, o_3, t);
      }
    }
  return(t);
}
ATerm m_6 (ATerm v_24, ATerm w_24, ATerm t)
{
  t = SSL_copy(v_24, w_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL;
  n_18 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_4 = NULL;
        t = n_18;
        t = k_0(t);
        l_4 = t;
        {
          ATerm w_25 = t;
          int x_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(x_25);
            }
          else
            {
              t = w_25;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_18, l_4);
          t = m_6(o_18, l_4, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, o_18);
        }
        ;
        LocalPopChoice(t_25);
      }
    else
      {
        t = p_25;
        {
          ATerm z_25 = t;
          int a_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_4 = NULL;
              t = n_18;
              t = k_0(t);
              x_4 = t;
              {
                ATerm c_26 = t;
                if((PushChoice() == 0))
                  {
                    ATerm d_26 = t;
                    int e_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(e_26);
                      }
                    else
                      {
                        t = d_26;
                        {
                          ATerm g_26 = t;
                          int h_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(h_26);
                            }
                          else
                            {
                              t = g_26;
                              {
                                ATerm y_4 = NULL;
                                y_4 = t;
                                if((o_18 != t))
                                  {
                                    _fail(t);
                                  }
                                t = y_4;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_26;
                  }
                t = (ATerm) ATmakeAppl(sym__2, o_18, x_4);
                t = m_6(o_18, x_4, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, o_18);
              }
              ;
              LocalPopChoice(a_26);
            }
          else
            {
              t = z_25;
              t = n_18;
              t = k_0(t);
              if((o_18 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_18);
            }
        }
      }
  }
  return(t);
}
ATerm n_6 (ATerm o_45, ATerm p_45, ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL;
  s_18 = t;
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_45, p_45);
        t = s_6(o_45, p_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_26 = ATgetFirst((ATermList) t);
            t_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_26);
        t = SSL_table_put(o_45, p_45, t_18);
        t = (ATerm) ATmakeAppl(sym__3, o_45, p_45, t_18);
      }
    else
      {
        t = i_26;
        t = SSL_table_remove(o_45, p_45);
        t = (ATerm) ATmakeAppl(sym__2, o_45, p_45);
      }
    t = s_18;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,z_18 = NULL;
  u_18 = t;
  t = q_86(t);
  v_18 = t;
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_19 = NULL;
        t = term_q_18;
        a_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_18, term_q_18);
        t = s_6(v_18, a_19, t);
        ;
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_18 = ATgetFirst((ATermList) t);
        w_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_q_18;
    z_18 = t;
    t = SSL_table_put(v_18, z_18, w_18);
    t = x_18;
    {
      ATerm p_3 (ATerm t)
      {
        ATerm c_19 = NULL;
        c_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_18, c_19);
        t = n_6(v_18, c_19, t);
        return(t);
      }
      t = map_1_0(p_3, t);
      t = u_18;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_87(t);
      t = m_87(t);
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      t = m_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_86 (ATerm), ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,h_19 = NULL,i_19 = NULL,n_19 = NULL;
  e_19 = t;
  t = p_86(t);
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_19, term_q_18);
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_19 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_26 = ATgetArgument(t, 0);
            ATerm x_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_18;
        w_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_19, term_q_18);
        t = s_6(f_19, w_19, t);
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = (ATerm) ATempty;
      }
    h_19 = t;
    t = term_q_18;
    i_19 = t;
    t = (ATerm) ATinsert(CheckATermList(h_19), (ATerm) ATempty);
    n_19 = t;
    t = SSL_table_put(f_19, i_19, n_19);
    t = e_19;
  }
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_q_19;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_20 = NULL;
      l_20 = t;
      t = SSL_remove(l_20);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_q_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm b_20 = NULL;
  t = begin_scope_1_0(s_3, t);
  {
    ATerm t_3 (ATerm t)
    {
      ATerm c_20 = NULL;
      c_20 = t;
      {
        ATerm b_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_20 = NULL,f_20 = NULL;
            t = term_q_19;
            d_20 = t;
            t = term_q_18;
            f_20 = t;
            t = term_f_27;
            t = s_6(d_20, f_20, t);
            ;
            LocalPopChoice(d_27);
          }
        else
          {
            t = b_27;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((b_20 != NULL) && (b_20 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              b_20 = ATgetFirst((ATermList) t);
            {
              ATerm g_27 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(b_20);
        t = map_1_0(x_3, t);
        t = c_20;
        t = end_scope_1_0(y_3, t);
      }
      return(t);
    }
    t = restore_always_2_0(u_89, t_3, t);
  }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      t = term_o_27;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm v_89 (ATerm), ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm s_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_20 = NULL;
        t = term_s_19;
        t = get_config_0_0(t);
        n_20 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_20);
        ;
        LocalPopChoice(v_27);
      }
    else
      {
        t = s_27;
        t = term_z_8;
      }
    t = v_89(t);
    t = copy_to_1_0(a_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(z_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
  o_20 = t;
  t = term_l_19;
  t = whoami_0_0(t);
  p_20 = t;
  t = term_x_17;
  s_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_28), p_20), term_w_27);
  t_20 = t;
  t = SSL_printnl(s_20, t_20);
  t = term_u_8;
  u_20 = t;
  t = SSL_exit(u_20);
  t = o_20;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm x_20 = NULL;
  x_20 = t;
  if(match_string(t, "-k"))
    {
      t = x_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_20;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
  a_21 = t;
  t = SSL_string_to_int(a_21);
  b_21 = t;
  t = term_f_28;
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_28, b_21);
  t = v_6(c_21, b_21, t);
  t = a_21;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_g_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_4, c_4, d_4, t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm i_21 = NULL;
  i_21 = t;
  if(match_string(t, "-S"))
    {
      t = i_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_21;
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL;
  t = term_p_8;
  j_21 = t;
  t = term_h_28;
  k_21 = t;
  t = term_i_28;
  t = v_6(j_21, k_21, t);
  t = term_j_28;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_l_28;
  return(t);
}
ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm l_21 = NULL,o_21 = NULL,p_21 = NULL;
  l_21 = t;
  t = SSL_string_to_int(l_21);
  o_21 = t;
  t = term_p_8;
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_8, o_21);
  t = v_6(p_21, o_21, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_21);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_m_28;
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
  ATerm q_21 = NULL,r_21 = NULL;
  t = term_n_25;
  q_21 = t;
  t = term_l_19;
  r_21 = t;
  t = term_n_28;
  t = v_6(q_21, r_21, t);
  t = term_r_28;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_s_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_4, f_4, h_4, t);
      ;
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      {
        ATerm v_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_4, j_4, k_4, t);
            ;
            LocalPopChoice(y_28);
          }
        else
          {
            t = v_28;
            t = Option_3_0(m_4, n_4, q_4, t);
          }
      }
    }
  return(t);
}
ATerm v_6 (ATerm j_47, ATerm k_47, ATerm t)
{
  ATerm s_21 = NULL;
  t = term_z_28;
  s_21 = t;
  t = SSL_table_put(s_21, j_47, k_47);
  t = (ATerm) ATmakeAppl(sym__3, term_z_28, j_47, k_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
      t = term_l_19;
      t = d_0(t);
      b_22 = t;
      t = term_l_29;
      c_22 = t;
      t = term_m_29;
      d_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_29, term_m_29, b_22);
      t = t_6(c_22, d_22, b_22, t);
      _fail(t);
    }
  else
    {
      ATerm h_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_21 = ATgetFirst((ATermList) t);
          y_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_21;
      t = a_0(t);
      t = term_l_19;
      t = c_0(t);
      h_22 = t;
      t = (ATerm) ATinsert(CheckATermList(y_21), h_22);
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm j_22 = NULL;
  j_22 = t;
  if(match_string(t, "-o"))
    {
      t = j_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_22;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL;
  k_22 = t;
  t = term_r_19;
  l_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_19, k_22);
  t = v_6(l_22, k_22, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_22);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_n_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, v_4, w_4, t);
  return(t);
}
ATerm t_6 (ATerm j_45, ATerm k_45, ATerm i_45, ATerm t)
{
  ATerm n_22 = NULL,q_22 = NULL,r_22 = NULL;
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_45, k_45);
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_29 = ATgetArgument(t, 0);
            ATerm w_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_45, k_45);
        t = s_6(j_45, k_45, t);
        ;
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
        t = (ATerm) ATempty;
      }
    q_22 = t;
    t = (ATerm) ATinsert(CheckATermList(q_22), i_45);
    r_22 = t;
    t = SSL_table_put(j_45, k_45, r_22);
    t = n_22;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,c_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_23 = NULL,f_23 = NULL,g_23 = NULL;
      t = term_l_19;
      t = j_0(t);
      d_23 = t;
      t = term_l_29;
      f_23 = t;
      t = term_m_29;
      g_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_29, term_m_29, d_23);
      t = t_6(f_23, g_23, d_23, t);
      _fail(t);
    }
  else
    {
      ATerm k_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_22 = ATgetFirst((ATermList) t);
          z_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_23 = ATgetFirst((ATermList) t);
          c_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_22;
      t = h_0(t);
      t = a_23;
      t = i_0(t);
      k_23 = t;
      t = (ATerm) ATinsert(CheckATermList(c_23), k_23);
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm o_23 = NULL;
  o_23 = t;
  if(match_string(t, "-i"))
    {
      t = o_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_23;
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm p_23 = NULL,r_23 = NULL;
  p_23 = t;
  t = term_s_19;
  r_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_19, p_23);
  t = v_6(r_23, p_23, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_23);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_4, a_5, d_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,v_23 = NULL,w_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_19;
  t = whoami_0_0(t);
  s_23 = t;
  t = term_x_17;
  t_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_29), s_23);
  v_23 = t;
  t = SSL_printnl(t_23, v_23);
  t = term_u_8;
  w_23 = t;
  t = SSL_exit(w_23);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_c_30;
  t = get_config_0_0(t);
  return(t);
}
ATerm o_6 (ATerm e_43, ATerm f_43, ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_43, f_43);
      ;
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
      t = SSL_addr(e_43, f_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm t)
{
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_82(t);
      ;
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      {
        ATerm a_24 = NULL,c_24 = NULL,f_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_24 = ATgetFirst((ATermList) t);
            c_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_24;
        t = foldr_2_0(s_82, t_82, t);
        f_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_24, f_24);
        t = t_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_h_28;
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL;
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(t_5, u_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_24 = NULL,l_5 = NULL,m_5 = NULL;
  t = times_0_0(t);
  l_5 = t;
  t = SSL_explode_term(l_5);
  if(match_cons(t, sym__2))
    {
      ATerm j_30 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5;
  t = foldr_2_0(e_5, h_5, t);
  k_24 = t;
  t = SSL_TicksToSeconds(k_24);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  e_25 = t;
  if(match_cons(t, sym__2))
    {
      f_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_25;
        if((f_25 != t))
          {
            _fail(t);
          }
        t = e_25;
        ;
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        t = (ATerm) ATmakeAppl(sym__2, f_25, g_25);
        {
          ATerm m_30 = t;
          int x_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_25, g_25);
              ;
              LocalPopChoice(x_30);
            }
          else
            {
              t = m_30;
              t = SSL_gtr(f_25, g_25);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_25, g_25);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_25 = NULL,o_25 = NULL;
      m_25 = t;
      t = term_p_8;
      t = get_config_0_0(t);
      o_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_25, term_u_8);
      t = geq_0_0(t);
      t = m_25;
      t = x_87(t);
      ;
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,u_25 = NULL;
  t = run_time_0_0(t);
  q_25 = t;
  t = term_l_19;
  t = whoami_0_0(t);
  r_25 = t;
  t = term_x_17;
  s_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_31), q_25), term_g_9), r_25);
  u_25 = t;
  t = SSL_printnl(s_25, u_25);
  t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_31), q_25), term_g_9), r_25));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_28;
  v_25 = t;
  t = SSL_exit(v_25);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      {
        ATerm h_31 = t;
        int i_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(i_31);
          }
        else
          {
            t = h_31;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      t = fetch_1_0(j_5, t);
    }
  t = w_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,b_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_25 = ATgetFirst((ATermList) t);
      b_26 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_26 = NULL,l_26 = NULL;
        t = b_26;
        t = g_0(t);
        f_26 = t;
        t = y_25;
        t = e_0(t);
        l_26 = t;
        t = b_26;
        {
          ATerm k_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(f_26), l_26);
            return(t);
          }
          t = reverse_acc_2_0(e_0, k_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_19;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm o_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,v_0 = NULL,w_0 = NULL;
  t_26 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_26);
  o_26 = t;
  t = r_26;
  t = y_68(t);
  s_26 = t;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_26);
  v_0 = t;
  t = SSLsetAnnotations(v_0, o_26);
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm e_27 = NULL;
  e_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_27), term_s_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_26 = NULL,c_27 = NULL;
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      t = fetch_1_0(o_5, t);
    }
  t = term_v_31;
  t = echo_0_0(t);
  t = term_l_29;
  y_26 = t;
  t = term_m_29;
  c_27 = t;
  t = term_w_31;
  t = s_6(y_26, c_27, t);
  t = reverse_acc_2_0(_id, p_5, t);
  t = map_1_0(q_5, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_68 (ATerm), ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,x_0 = NULL,y_0 = NULL;
  k_27 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      i_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_27);
  h_27 = t;
  t = i_27;
  t = z_68(t);
  j_27 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, j_27);
  x_0 = t;
  t = SSLsetAnnotations(x_0, h_27);
  return(t);
}
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm n_27 (ATerm t)
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_76, _id, t);
        ;
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        t = Cons_2_0(_id, n_27, t);
      }
    return(t);
  }
  t = n_27(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
  p_27 = t;
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_27;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_32 = ATgetFirst((ATermList) t);
                ATerm c_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_27;
          }
        ;
        LocalPopChoice(a_32);
      }
    else
      {
        t = z_31;
        t = (ATerm) ATinsert(ATempty, p_27);
      }
    q_27 = t;
    t = term_o_27;
    r_27 = t;
    t = SSL_printnl(r_27, q_27);
    t = p_27;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_c_30;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm r_6 (ATerm a_42, ATerm b_42, ATerm t)
{
  t = SSL_strcat(a_42, b_42);
  return(t);
}
ATerm debug_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,c_28 = NULL,d_28 = NULL;
  x_27 = t;
  t = f_72(t);
  y_27 = t;
  t = term_x_17;
  c_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_27), y_27);
  d_28 = t;
  t = SSL_printnl(c_28, d_28);
  t = x_27;
  return(t);
}
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm t)
{
  ATerm e_28 (ATerm t)
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
        t = Cons_2_0(a_76, e_28, t);
      }
    return(t);
  }
  t = e_28(t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_h_32;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_28 = NULL;
      k_28 = t;
      t = SSL_is_string(k_28);
      ;
      LocalPopChoice(j_32);
    }
  else
    {
      t = i_32;
      {
        ATerm k_32 = t;
        int l_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_5, t);
            ;
            LocalPopChoice(l_32);
          }
        else
          {
            t = k_32;
            {
              ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
              o_28 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_28 = ATgetArgument(t, 0);
                  t = p_28;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_28 = ATgetArgument(t, 0);
                      t = p_28;
                      {
                        ATerm m_32 = t;
                        int n_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(n_32);
                          }
                        else
                          {
                            t = m_32;
                            t = debug_1_0(w_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_28 = NULL,x_28 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_28 = ATgetArgument(t, 0);
                          q_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_28;
                      t = eval_config_0_0(t);
                      w_28 = t;
                      t = q_28;
                      t = eval_config_0_0(t);
                      x_28 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_28, x_28);
                      t = r_6(w_28, x_28, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm s_6 (ATerm a_47, ATerm b_47, ATerm t)
{
  t = SSL_table_get(a_47, b_47);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL;
  a_29 = t;
  t = term_z_28;
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_28, a_29);
  t = s_6(b_29, a_29, t);
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_29 = NULL,d_29 = NULL;
        t = eval_config_0_0(t);
        c_29 = t;
        t = term_z_28;
        d_29 = t;
        t = SSL_table_put(d_29, a_29, c_29);
        t = c_29;
        ;
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
      }
  }
  return(t);
}
ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL;
  t = term_q_32;
  e_29 = t;
  t = term_l_19;
  f_29 = t;
  t = term_r_32;
  t = v_6(e_29, f_29, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_s_32;
  return(t);
}
ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
  t = term_q_32;
  g_29 = t;
  t = term_l_19;
  h_29 = t;
  t = term_r_32;
  t = v_6(g_29, h_29, t);
  t = term_v_19;
  i_29 = t;
  t = term_l_19;
  j_29 = t;
  t = term_t_32;
  t = v_6(i_29, j_29, t);
  t = term_u_32;
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_v_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_5, p_6, q_6, t);
      ;
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
      t = Option_3_0(x_6, y_6, c_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm t)
{
  ATerm k_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,z_0 = NULL,a_1 = NULL;
  u_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_29 = ATgetFirst((ATermList) t);
      r_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_29);
  k_29 = t;
  t = q_29;
  t = s_63(t);
  s_29 = t;
  t = r_29;
  t = t_63(t);
  t_29 = t;
  a_1 = t;
  t = (ATerm) ATinsert(CheckATermList(t_29), s_29);
  z_0 = t;
  t = SSLsetAnnotations(z_0, k_29);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  a_30 = t;
  t = term_c_30;
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_30, a_30);
  t = v_6(b_30, a_30, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, a_30);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_33;
        t = u_93(t);
        ;
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
      }
    t = z_29;
    {
      ATerm h_7 (ATerm t)
      {
        ATerm b_33 = t;
        int c_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_33 = t;
            int e_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_33);
              }
            else
              {
                t = d_33;
                t = u_93(t);
                t = Cons_2_0(_id, h_7, t);
              }
            ;
            LocalPopChoice(c_33);
          }
        else
          {
            t = b_33;
            {
              ATerm d_30 = NULL,g_30 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_30 = ATgetFirst((ATermList) t);
                  g_30 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_30), (ATerm) ATmakeAppl(sym_Undefined_1, d_30));
            }
          }
        return(t);
      }
      t = Cons_2_0(e_7, h_7, t);
    }
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm u_30 = NULL;
  u_30 = t;
  if(match_string(t, "--help"))
    {
      t = u_30;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_30;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_30;
        }
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  t = term_r_31;
  v_30 = t;
  t = term_l_19;
  w_30 = t;
  t = term_f_33;
  t = v_6(v_30, w_30, t);
  t = term_g_33;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_h_33;
  return(t);
}
ATerm n_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL;
  n_30 = t;
  t = term_l_29;
  q_30 = t;
  t = term_m_29;
  r_30 = t;
  t = (ATerm) ATempty;
  s_30 = t;
  t = SSL_table_put(q_30, r_30, s_30);
  t = n_30;
  {
    ATerm i_7 (ATerm t)
    {
      ATerm i_33 = t;
      int j_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_93(t);
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
                t = Option_3_0(j_7, k_7, l_7, t);
                ;
                LocalPopChoice(l_33);
              }
            else
              {
                t = k_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_7, t);
    {
      ATerm m_33 = t;
      int n_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_31 = NULL;
          d_31 = t;
          {
            ATerm o_33 = t;
            int p_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_9 = NULL;
                t = d_31;
                {
                  ATerm q_33 = t;
                  int r_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_r_31;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(r_33);
                    }
                  else
                    {
                      t = q_33;
                      t = fetch_1_0(n_7, t);
                    }
                  t = d_31;
                  t = default_system_usage_0_0(t);
                  t = term_h_28;
                  l_9 = t;
                  t = SSL_exit(l_9);
                }
                ;
                LocalPopChoice(p_33);
              }
            else
              {
                t = o_33;
                {
                  ATerm f_10 = NULL;
                  t = term_q_32;
                  t = get_config_0_0(t);
                  t = d_31;
                  t = default_system_about_0_0(t);
                  t = term_h_28;
                  f_10 = t;
                  t = SSL_exit(f_10);
                }
              }
          }
          ;
          LocalPopChoice(n_33);
        }
      else
        {
          t = m_33;
          {
            ATerm s_33 = t;
            int t_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
                ATerm r_7 (ATerm t)
                {
                  ATerm s_7 (ATerm t)
                  {
                    if(((o_30 != NULL) && (o_30 != t)))
                      _fail(t);
                    else
                      o_30 = t;
                    return(t);
                  }
                  t = Undefined_1_0(s_7, t);
                  return(t);
                }
                t = fetch_1_0(r_7, t);
                t = term_x_17;
                e_31 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_30)), term_u_33);
                f_31 = t;
                t = SSL_printnl(e_31, f_31);
                t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_30)), term_u_33));
                t = default_system_usage_0_0(t);
                t = term_u_8;
                g_31 = t;
                t = SSL_exit(g_31);
                ;
                LocalPopChoice(t_33);
              }
            else
              {
                t = s_33;
              }
          }
        }
      p_30 = t;
      t = term_l_29;
      t_30 = t;
      t = SSL_table_destroy(t_30);
      t = p_30;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
  t = parse_options_1_0(y_91, t);
  j_31 = t;
  t = term_v_33;
  k_31 = t;
  t = SSL_table_create(k_31);
  t = term_v_33;
  l_31 = t;
  t = term_w_33;
  m_31 = t;
  t = SSL_table_put(l_31, m_31, j_31);
  t = j_31;
  t = a_92(t);
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_91, t);
        ;
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
        {
          ATerm z_33 = t;
          int a_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_34);
            }
          else
            {
              t = z_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm b_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(c_34);
    }
  else
    {
      t = b_34;
      {
        ATerm d_34 = t;
        int e_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(e_34);
          }
        else
          {
            t = d_34;
            {
              ATerm f_34 = t;
              int g_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(h_8, i_8, j_8, t);
                  ;
                  LocalPopChoice(g_34);
                }
              else
                {
                  t = f_34;
                  {
                    ATerm h_34 = t;
                    int i_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(i_34);
                      }
                    else
                      {
                        t = h_34;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = xtc_io_1_0(k_8, t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL;
  t = term_j_34;
  n_31 = t;
  t = term_l_19;
  o_31 = t;
  t = term_k_34;
  t = v_6(n_31, o_31, t);
  t = term_l_34;
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_m_34;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = xtc_sglr_2_0(l_8, m_8, t);
  {
    ATerm n_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_34 = t;
        int q_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(q_34);
          }
        else
          {
            t = p_34;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(o_34);
        t = xtc_transform_file_2_0(n_8, pass_verbose_0_0, t);
      }
    else
      {
        t = n_34;
        t = xtc_transform_term_2_0(o_8, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = term_t_34;
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(b_8, default_usage_0_0, _id, g_8, t);
  return(t);
}
