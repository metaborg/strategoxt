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
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_k_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_q_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_h_30;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_c_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_s_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_x_26;
ATerm term_p_26;
ATerm term_x_24;
ATerm term_r_24;
ATerm term_f_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_x_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_r_23;
ATerm term_o_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_v_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_o_22;
ATerm term_h_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_u_21;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_j_19;
ATerm term_f_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_v_18;
ATerm term_g_18;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
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
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_l_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_q_8;
void init_constant_terms (void)
{
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_w_8, term_x_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_10, term_f_10, term_g_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_j_10, term_k_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_n_10, term_o_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_u_10, term_v_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_10, term_y_10, term_z_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_11, term_c_11, term_e_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_h_11, term_i_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_o_11, term_p_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_11, term_w_11, term_x_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_e_12, term_f_12);
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
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_o_12, term_p_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_s_12, term_t_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_c_13, term_d_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_m_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_u_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_m_14, term_n_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_u_14, term_v_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_e_15, term_f_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_r_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_e_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_a_23, term_u_23);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym__2, term_a_23, term_b_23);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_m_19, term_v_18);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_k_27);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_27);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__2, term_s_27, term_f_19);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_x_28, term_y_28);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym__2, term_z_31, term_f_19);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym__2, term_c_32, term_f_19);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_a_31, term_f_19);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, term_t_33, term_f_19);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.pp.af", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm u_5 (ATerm r_38, ATerm s_38, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm b_6 (ATerm t_27, ATerm u_27, ATerm);
ATerm d_6 (ATerm h_72 (ATerm), ATerm l_180, ATerm b_28, ATerm);
ATerm b_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm);
ATerm e_6 (ATerm p_24, ATerm q_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm w_70 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm e_88 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm u_6 (ATerm h_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm g_6 (ATerm p_84 (ATerm), ATerm z_39, ATerm x_39, ATerm);
ATerm t_7 (ATerm j_7, ATerm);
ATerm u_7 (ATerm l_7, ATerm m_7, ATerm n_7, ATerm);
ATerm l_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm r_68 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_85 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_85 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_85 (ATerm), ATerm);
ATerm w_5 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm w_34, ATerm v_34, ATerm);
ATerm x_5 (ATerm e_80 (ATerm), ATerm s_34, ATerm r_34, ATerm);
ATerm v_1 (ATerm);
ATerm y_5 (ATerm n_41, ATerm o_41, ATerm p_41, ATerm);
ATerm z_5 (ATerm a_86 (ATerm), ATerm x_41, ATerm w_41, ATerm);
ATerm h_6 (ATerm u_43, ATerm v_43, ATerm);
ATerm n_11 (ATerm d_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm a_6 (ATerm z_27, ATerm);
ATerm c_6 (ATerm c_44, ATerm d_44, ATerm);
ATerm _2_0 (ATerm d_59 (ATerm), ATerm e_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm w_91 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm x_16 (ATerm d_16, ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm i_6 (ATerm v_24, ATerm w_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm j_6 (ATerm v_40, ATerm w_40, ATerm);
ATerm end_scope_1_0 (ATerm m_84 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_84 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_87 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm xtc_io_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm r_6 (ATerm q_42, ATerm r_42, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm p_6 (ATerm q_40, ATerm r_40, ATerm p_40, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm k_6 (ATerm l_38, ATerm m_38, ATerm);
ATerm foldr_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm v_4 (ATerm);
ATerm y_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_85 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm c_5 (ATerm);
ATerm need_help_1_0 (ATerm s_89 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm y_68 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_6 (ATerm u_58, ATerm v_58, ATerm);
ATerm debug_1_0 (ATerm f_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm o_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm o_6 (ATerm h_42, ATerm i_42, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm f_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm s_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm);
ATerm t_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm q_91 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm parse_options_1_0 (ATerm p_91 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm y_7 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm io_pp_box_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm u_5 (ATerm r_38, ATerm s_38, ATerm t)
{
  ATerm a_5 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(r_38, s_38);
      ;
      LocalPopChoice(a_8);
    }
  else
    {
      t = a_5;
      t = SSL_subtr(r_38, s_38);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,n_0 = NULL,u_0 = NULL;
  t = term_q_8;
  {
    ATerm r_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(u_8);
      }
    else
      {
        t = r_8;
        t = term_w_8;
      }
    b_0 = t;
    t = term_w_8;
    n_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_w_8);
    t = u_5(b_0, n_0, t);
    u_0 = t;
    t = SSL_int_to_string(u_0);
    f_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_q_8);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm e_1 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_y_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm h_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          e_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_z_8);
      h_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_1, (ATerm) ATinsert(ATempty, term_z_8));
      t = h_6(e_1, h_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm b_6 (ATerm t_27, ATerm u_27, ATerm t)
{
  ATerm p_1 = NULL;
  t = SSL_write_term_to_stream_baf(t_27, u_27);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_1);
  return(t);
}
ATerm d_6 (ATerm h_72 (ATerm), ATerm l_180, ATerm b_28, ATerm t)
{
  ATerm q_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_180, term_a_9);
  t = open_stream_0_0(t);
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_1, b_28);
  t = h_72(t);
  t = fclose_0_0(t);
  t = b_28;
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_9 = ATgetArgument(t, 0);
      if(match_cons(b_9, sym_Stream_1))
        {
          z_1 = ATgetArgument(b_9, 0);
        }
      else
        _fail(t);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(z_1, a_2, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL;
  w_1 = t;
  t = xtc_new_file_0_0(t);
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_1, w_1);
  t = d_6(b_1, x_1, w_1, t);
  t = SSL_close_file(x_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, x_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_88, o_88, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm e_6 (ATerm p_24, ATerm q_24, ATerm t)
{
  t = SSL_execvp(p_24, q_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm y_2 = NULL,c_3 = NULL,e_3 = NULL,g_3 = NULL;
  y_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      c_3 = ATgetArgument(t, 0);
      {
        ATerm r_0 = NULL,s_0 = NULL;
        t = SSL_int_to_string(c_3);
        r_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_9), r_0), term_f_9);
        s_0 = t;
        t = SSL_concat_strings(s_0);
      }
    }
  else
    {
      ATerm f_1 = NULL,i_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          c_3 = ATgetArgument(t, 0);
          e_3 = ATgetArgument(t, 1);
          g_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(e_3);
      f_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_3), term_l_9), f_1), term_i_9), c_3);
      i_1 = t;
      t = SSL_concat_strings(i_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm l_3 = NULL;
  ATerm c_1 (ATerm t)
  {
    t = m_76(t);
    if(((l_3 != NULL) && (l_3 != t)))
      _fail(t);
    else
      l_3 = t;
    return(t);
  }
  t = fetch_1_0(c_1, t);
  t = not_null(l_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm m_3 = NULL;
  m_3 = t;
  {
    ATerm o_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_17), term_c_17), term_y_16), term_s_16), term_l_16), term_a_16), term_n_15), term_z_14), term_q_14), term_c_14), term_y_13), term_p_13), term_e_13), term_y_12), term_u_12), term_q_12), term_m_12), term_i_12), term_b_12), term_u_11), term_j_11), term_f_11), term_a_11), term_w_10), term_p_10), term_l_10), term_h_10), term_z_9);
        {
          ATerm d_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm h_17 = ATgetArgument(t, 0);
                if((m_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm i_17 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(d_1, t);
        }
        ;
        LocalPopChoice(u_9);
      }
    else
      {
        t = o_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, m_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm q_3 = NULL;
  q_3 = t;
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_4 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_17 = ATgetArgument(t, 0);
            b_4 = ATgetArgument(t, 1);
            {
              ATerm m_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = b_4;
        {
          ATerm n_17 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_17;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          r_1 = t;
          t = term_o_17;
          s_1 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, r_1), term_p_17);
          t_1 = t;
          t = SSL_printnl(s_1, t_1);
          t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, r_1), term_p_17));
        }
        ;
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
      }
    t = q_3;
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
  ATerm i_4 = NULL,k_4 = NULL;
  i_4 = t;
  t = fork_0_0(t);
  k_4 = t;
  {
    ATerm q_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_4;
        t = w_70(t);
        ;
        LocalPopChoice(t_17);
      }
    else
      {
        t = q_17;
        t = SSL_waitpid(k_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_17 = ATgetArgument(t, 0);
            if(((ATgetType(u_17) != AT_INT) || (ATgetInt((ATermInt) u_17) != 0)))
              _fail(t);
            {
              ATerm v_17 = ATgetArgument(t, 1);
            }
            {
              ATerm e_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL;
  m_4 = t;
  t = e_88(t);
  t = xtc_find_0_0(t);
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_4, m_4);
  {
    ATerm g_1 (ATerm t)
    {
      ATerm o_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_4, m_4);
      t = e_6(n_4, m_4, t);
      t = term_g_18;
      o_4 = t;
      t = SSL_exit(o_4);
      return(t);
    }
    t = fork_and_wait_1_0(g_1, t);
    t = m_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm h_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, b_5, t);
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = h_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_76(t);
      }
    return(t);
  }
  t = b_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      {
        ATerm w_4 = NULL,x_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_4 = ATgetFirst((ATermList) t);
            x_4 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_4;
        {
          ATerm j_1 (ATerm t)
          {
            t = x_4;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(j_1, t);
        }
      }
    }
  return(t);
}
ATerm u_6 (ATerm h_5, ATerm t)
{
  ATerm j_5 = NULL;
  t = SSL_explode_term(h_5);
  if(match_cons(t, sym__2))
    {
      ATerm q_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL,q_6 = NULL;
  q_6 = t;
  if(match_cons(t, sym__2))
    {
      m_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              t = n_5;
              return(t);
            }
            t = m_5;
            t = at_end_1_0(k_1, t);
            ;
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            t = u_6(q_6, t);
          }
      }
    }
  else
    {
      t = u_6(q_6, t);
    }
  return(t);
}
ATerm g_6 (ATerm p_84 (ATerm), ATerm z_39, ATerm x_39, ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL;
  x_6 = t;
  t = p_84(t);
  y_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_6, z_39, x_39);
  t = p_6(y_6, z_39, x_39, t);
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_7 = NULL;
        t = term_v_18;
        e_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_6, term_v_18);
        t = o_6(y_6, e_7, t);
        ;
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_6 = ATgetFirst((ATermList) t);
        a_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_v_18;
    b_7 = t;
    t = (ATerm) ATinsert(CheckATermList(a_7), (ATerm) ATinsert(CheckATermList(z_6), z_39));
    c_7 = t;
    t = SSL_table_put(y_6, b_7, c_7);
    t = x_6;
  }
  return(t);
}
ATerm t_7 (ATerm j_7, ATerm t)
{
  t = j_7;
  {
    ATerm w_18 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_18 = ATgetArgument(t, 0);
            ATerm z_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_18;
      }
    t = term_a_19;
    t = debug_1_0(l_1, t);
    t = (ATerm) ATmakeAppl(sym__2, j_7, term_a_9);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm u_7 (ATerm l_7, ATerm m_7, ATerm n_7, ATerm t)
{
  t = SSL_open_file(l_7, m_7);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
  q_7 = t;
  if(match_cons(t, sym__2))
    {
      r_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
      {
        ATerm d_19 = t;
        int e_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_7(q_7, t);
            ;
            LocalPopChoice(e_19);
          }
        else
          {
            t = d_19;
            t = u_7(r_7, s_7, q_7, t);
          }
      }
    }
  else
    {
      t = t_7(q_7, t);
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
  ATerm v_7 = NULL,w_7 = NULL;
  t = term_f_19;
  t = new_0_0(t);
  v_7 = t;
  t = term_j_19;
  w_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_7, term_j_19);
  t = n_6(v_7, w_7, t);
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_7 = NULL,z_7 = NULL;
        x_7 = t;
        t = (ATerm) ATinsert(ATempty, term_z_8);
        z_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_7, (ATerm) ATinsert(ATempty, term_z_8));
        t = h_6(x_7, z_7, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
      }
  }
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL;
  t = new_file_0_0(t);
  b_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_8, term_a_9);
  t = open_file_0_0(t);
  t = term_f_19;
  c_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_8, term_f_19);
  t = g_6(m_1, b_8, c_8, t);
  t = b_8;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL;
  o_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm y_1 = NULL,b_2 = NULL;
      t = o_8;
      t = xtc_new_file_0_0(t);
      y_1 = t;
      t = m_0(t);
      b_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_2, (ATerm) ATinsert(ATinsert(ATempty, y_1), term_n_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(y_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_1);
    }
  else
    {
      ATerm g_2 = NULL,n_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_8;
      t = xtc_new_file_0_0(t);
      g_2 = t;
      t = m_0(t);
      n_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_2), term_n_19), p_8), term_p_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(g_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_2);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm r_68 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,v_8 = NULL,x_8 = NULL,o_0 = NULL,p_0 = NULL;
  x_8 = t;
  if(match_cons(t, sym_FILE_1))
    {
      t_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_8);
  s_8 = t;
  t = t_8;
  t = r_68(t);
  v_8 = t;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_8);
  o_0 = t;
  t = SSLsetAnnotations(o_0, s_8);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm c_9 = NULL;
  c_9 = t;
  t = SSL_table_keys(c_9);
  {
    ATerm n_1 (ATerm t)
    {
      ATerm d_9 = NULL,e_9 = NULL;
      d_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_9, d_9);
      t = o_6(c_9, d_9, t);
      e_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_9, e_9);
      return(t);
    }
    t = map_1_0(n_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm q_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_9 = NULL,j_9 = NULL;
      h_9 = t;
      t = term_q_8;
      t = get_config_0_0(t);
      j_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_9, term_q_16);
      t = geq_0_0(t);
      t = h_9;
      t = x_85(t);
      ;
      LocalPopChoice(w_19);
    }
  else
    {
      t = q_19;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  ATerm x_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_9 = NULL,m_9 = NULL;
      k_9 = t;
      t = term_q_8;
      t = get_config_0_0(t);
      m_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_9, term_k_12);
      t = geq_0_0(t);
      t = k_9;
      t = w_85(t);
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = x_19;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm b_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_9 = NULL,p_9 = NULL;
      n_9 = t;
      t = term_q_8;
      t = get_config_0_0(t);
      p_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_9, term_n_10);
      t = geq_0_0(t);
      t = n_9;
      t = y_85(t);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = b_20;
    }
  return(t);
}
ATerm w_5 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm w_34, ATerm v_34, ATerm t)
{
  t = i_80(t);
  {
    ATerm o_1 (ATerm t)
    {
      ATerm q_9 = NULL;
      q_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_34, q_9);
      t = h_80(t);
      return(t);
    }
    t = fetch_1_0(o_1, t);
    t = v_34;
  }
  return(t);
}
ATerm x_5 (ATerm e_80 (ATerm), ATerm s_34, ATerm r_34, ATerm t)
{
  t = s_34;
  {
    ATerm y_9 (ATerm t)
    {
      ATerm f_20 = t;
      int h_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = r_34;
          ;
          LocalPopChoice(h_20);
        }
      else
        {
          t = f_20;
          {
            ATerm j_20 = t;
            int k_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_9 = NULL,t_9 = NULL,v_9 = NULL;
                s_9 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    t_9 = ATgetFirst((ATermList) t);
                    v_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = s_9;
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = r_34;
                    return(t);
                  }
                  t = w_5(e_80, u_1, t_9, v_9, t);
                  t = y_9(t);
                }
                ;
                LocalPopChoice(k_20);
              }
            else
              {
                t = j_20;
                t = Cons_2_0(_id, y_9, t);
              }
          }
        }
      return(t);
    }
    t = y_9(t);
  }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm q_10 = NULL;
  if(match_cons(t, sym__2))
    {
      q_10 = ATgetArgument(t, 0);
      if((q_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm y_5 (ATerm n_41, ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm a_10 = NULL,c_10 = NULL,d_10 = NULL;
  a_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_20 = ATgetArgument(t, 0);
            ATerm t_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
        t = o_6(n_41, o_41, t);
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = (ATerm) ATempty;
      }
    c_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_10, p_41);
    t = x_5(v_1, c_10, p_41, t);
    d_10 = t;
    t = SSL_table_put(n_41, o_41, d_10);
    t = a_10;
  }
  return(t);
}
ATerm z_5 (ATerm a_86 (ATerm), ATerm x_41, ATerm w_41, ATerm t)
{
  t = w_41;
  {
    ATerm c_2 (ATerm t)
    {
      ATerm r_10 = NULL,s_10 = NULL;
      if(match_cons(t, sym__2))
        {
          r_10 = ATgetArgument(t, 0);
          s_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, x_41, r_10, s_10);
      t = a_86(t);
      return(t);
    }
    t = map_1_0(c_2, t);
  }
  return(t);
}
ATerm h_6 (ATerm u_43, ATerm v_43, ATerm t)
{
  t = SSL_access(u_43, v_43);
  return(t);
}
ATerm n_11 (ATerm d_11, ATerm t)
{
  t = SSL_fclose(d_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  l_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_11 = ATgetArgument(t, 0);
      {
        ATerm x_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_11);
            ;
            LocalPopChoice(y_20);
          }
        else
          {
            t = x_20;
            t = n_11(l_11, t);
          }
      }
    }
  else
    {
      t = n_11(l_11, t);
    }
  return(t);
}
ATerm a_6 (ATerm z_27, ATerm t)
{
  t = SSL_read_term_from_stream(z_27);
  return(t);
}
ATerm c_6 (ATerm c_44, ATerm d_44, ATerm t)
{
  ATerm q_11 = NULL;
  t = SSL_fopen(c_44, d_44);
  q_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_11);
  return(t);
}
ATerm _2_0 (ATerm d_59 (ATerm), ATerm e_59 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,q_0 = NULL,t_0 = NULL;
  a_12 = t;
  if(match_cons(t, sym__2))
    {
      s_11 = ATgetArgument(t, 0);
      t_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_12);
  r_11 = t;
  t = s_11;
  t = d_59(t);
  y_11 = t;
  t = t_11;
  t = e_59(t);
  z_11 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_11, z_11);
  q_0 = t;
  t = SSLsetAnnotations(q_0, r_11);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_12 = NULL;
  t = SSL_stdin_stream();
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_12 = NULL;
  t = SSL_stdout_stream();
  g_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_12 = NULL;
  t = SSL_stderr_stream();
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_12);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm g_13 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      g_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_13;
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm j_13 = NULL;
  j_13 = t;
  t = SSL_is_string(j_13);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_21 = ATgetArgument(t, 0);
      ATerm c_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_13 = NULL,o_3 = NULL;
        a_13 = t;
        t = SSL_explode_term(a_13);
        if(match_cons(t, sym__2))
          {
            ATerm i_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_21 = ATgetArgument(t, 1);
              if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
                {
                  o_3 = ATgetFirst((ATermList) j_21);
                  {
                    ATerm k_21 = (ATerm) ATgetNext((ATermList) j_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = o_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = o_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = o_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        {
          ATerm m_21 = t;
          int q_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_13 = NULL,f_13 = NULL;
              t = _2_0(d_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_13 = ATgetArgument(t, 0);
                  f_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_6(b_13, f_13, t);
              ;
              LocalPopChoice(q_21);
            }
          else
            {
              t = m_21;
              {
                ATerm h_13 = NULL,i_13 = NULL;
                t = _2_0(e_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    h_13 = ATgetArgument(t, 0);
                    i_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_6(h_13, i_13, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_u_21;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,q_13 = NULL;
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_13 = NULL;
      r_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_13, term_x_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      t = debug_1_0(f_2, t);
      _fail(t);
    }
  n_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(q_13, t);
  o_13 = t;
  t = n_13;
  t = fclose_0_0(t);
  t = o_13;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_13 = NULL,w_13 = NULL;
      v_13 = t;
      t = (ATerm) ATinsert(ATempty, term_h_22);
      w_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_13, (ATerm) ATinsert(ATempty, term_h_22));
      t = h_6(v_13, w_13, t);
      LocalPopChoice(b_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = a_22;
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_22 = t;
            if((PushChoice() == 0))
              {
                ATerm x_13 = NULL,e_14 = NULL;
                x_13 = t;
                t = (ATerm) ATinsert(ATempty, term_z_8);
                e_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_13, (ATerm) ATinsert(ATempty, term_z_8));
                t = h_6(x_13, e_14, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_22;
              }
            t = debug_1_0(h_2, t);
            ;
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            t = debug_1_0(i_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_o_22;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,b_15 = NULL;
  x_14 = t;
  t = term_o_17;
  y_14 = t;
  t = (ATerm) ATinsert(ATempty, term_r_22);
  b_15 = t;
  t = SSL_printnl(y_14, b_15);
  t = x_14;
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,g_15 = NULL;
  if(match_cons(t, sym__3))
    {
      c_15 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
      g_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_5(c_15, d_15, g_15, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
  h_15 = t;
  t = term_o_17;
  i_15 = t;
  t = (ATerm) ATinsert(ATempty, term_v_22);
  j_15 = t;
  t = SSL_printnl(i_15, j_15);
  t = h_15;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
  k_15 = t;
  t = term_o_17;
  l_15 = t;
  t = (ATerm) ATinsert(ATempty, term_r_22);
  m_15 = t;
  t = SSL_printnl(l_15, m_15);
  t = k_15;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,o_14 = NULL,p_14 = NULL,r_14 = NULL;
  f_14 = t;
  t = if_verbose5_1_0(j_2, t);
  {
    ATerm z_22 = t;
    if((PushChoice() == 0))
      {
        ATerm t_14 = NULL,w_14 = NULL;
        t = term_a_23;
        t_14 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, f_14);
        w_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_23, (ATerm) ATmakeAppl(sym_Imported_1, f_14));
        t = o_6(t_14, w_14, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_22;
      }
    g_14 = t;
    t = term_a_23;
    i_14 = t;
    t = term_b_23;
    j_14 = t;
    t = (ATerm) ATinsert(ATempty, f_14);
    k_14 = t;
    t = SSL_table_put(i_14, j_14, k_14);
    t = g_14;
    t = if_verbose4_1_0(l_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(o_2, t);
    h_14 = t;
    t = term_a_23;
    l_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_23, h_14);
    t = z_5(p_2, l_14, h_14, t);
    t = if_verbose6_1_0(q_2, t);
    t = term_a_23;
    o_14 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, f_14);
    p_14 = t;
    t = (ATerm) ATempty;
    r_14 = t;
    t = SSL_table_put(o_14, p_14, r_14);
    t = (ATerm) ATmakeAppl(sym__3, term_a_23, (ATerm)ATmakeAppl(sym_Imported_1, f_14), (ATerm) ATempty);
    t = if_verbose4_1_0(r_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm c_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(e_23);
    }
  else
    {
      t = c_23;
      {
        ATerm g_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 (ATerm t)
            {
              t = filter_1_0(v_83, t);
              return(t);
            }
            t = Cons_2_0(v_83, s_2, t);
            ;
            LocalPopChoice(h_23);
          }
        else
          {
            t = g_23;
            {
              ATerm q_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm i_23 = ATgetFirst((ATermList) t);
                  q_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = q_15;
              t = filter_1_0(v_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm s_15 (ATerm t)
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_91(t);
        t = s_15(t);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
      }
    return(t);
  }
  t = s_15(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      {
        ATerm p_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_15 = NULL;
            t = term_r_23;
            t_15 = t;
            t = SSL_getenv(t_15);
            ;
            LocalPopChoice(q_23);
          }
        else
          {
            t = p_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = debug_1_0(u_2, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL;
  t = term_a_23;
  y_15 = t;
  t = term_u_23;
  z_15 = t;
  t = term_v_23;
  t = o_6(y_15, z_15, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm w_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_23;
      }
  }
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_x_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm u_15 = NULL;
  t = if_verbose5_1_0(t_2, t);
  u_15 = t;
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_15 = NULL,w_15 = NULL;
        t = term_a_23;
        v_15 = t;
        t = term_b_23;
        w_15 = t;
        t = term_a_24;
        t = o_6(v_15, w_15, t);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        {
          ATerm x_15 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          x_15 = t;
          t = repeat_1_0(v_2, t);
          t = x_15;
        }
      }
    t = u_15;
    t = if_verbose5_1_0(w_2, t);
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
  t = term_b_24;
  return(t);
}
ATerm x_16 (ATerm d_16, ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
  t = term_a_23;
  g_16 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, d_16);
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_23, (ATerm) ATmakeAppl(sym_Tool_1, d_16));
  t = o_6(g_16, h_16, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_24 = ATgetFirst((ATermList) t);
      if(match_cons(c_24, sym__2))
        {
          ATerm e_24 = ATgetArgument(c_24, 0);
          f_16 = ATgetArgument(c_24, 1);
        }
      else
        _fail(t);
      {
        ATerm d_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_16;
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = debug_1_0(f_3, t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_a_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(i_3, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm g_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(z_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
        k_16 = t;
        if(match_cons(t, sym__2))
          {
            i_16 = ATgetArgument(t, 0);
            j_16 = ATgetArgument(t, 1);
            {
              ATerm l_24 = t;
              int n_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
                  t = term_a_23;
                  o_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, i_16);
                  p_16 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_a_23, (ATerm) ATmakeAppl(sym_Tool_1, i_16));
                  t = o_6(o_16, p_16, t);
                  {
                    ATerm b_3 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((j_16 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((n_16 != NULL) && (n_16 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            n_16 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(b_3, t);
                    t = not_null(n_16);
                  }
                  ;
                  LocalPopChoice(n_24);
                }
              else
                {
                  t = l_24;
                  t = x_16(k_16, t);
                }
            }
          }
        else
          {
            t = x_16(k_16, t);
          }
        t = if_verbose5_1_0(d_3, t);
      }
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = g_24;
      {
        ATerm w_16 = NULL,e_4 = NULL,f_4 = NULL;
        w_16 = t;
        t = term_o_17;
        e_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_24), w_16), term_r_24);
        f_4 = t;
        t = SSL_printnl(e_4, f_4);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_24), w_16), term_r_24);
        t = if_verbose5_1_0(h_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm i_6 (ATerm v_24, ATerm w_24, ATerm t)
{
  t = SSL_copy(v_24, w_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL;
  r_17 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_4 = NULL;
        t = r_17;
        t = k_0(t);
        q_4 = t;
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
          t = (ATerm) ATmakeAppl(sym__2, s_17, q_4);
          t = i_6(s_17, q_4, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, s_17);
        }
        ;
        LocalPopChoice(d_25);
      }
    else
      {
        t = a_25;
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_5 = NULL;
              t = r_17;
              t = k_0(t);
              d_5 = t;
              {
                ATerm i_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm m_25 = t;
                    int n_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(n_25);
                      }
                    else
                      {
                        t = m_25;
                        {
                          ATerm o_25 = t;
                          int p_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(p_25);
                            }
                          else
                            {
                              t = o_25;
                              {
                                ATerm e_5 = NULL;
                                e_5 = t;
                                if((s_17 != t))
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
                    t = i_25;
                  }
                t = (ATerm) ATmakeAppl(sym__2, s_17, d_5);
                t = i_6(s_17, d_5, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, s_17);
              }
              ;
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              t = r_17;
              t = k_0(t);
              if((s_17 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_17);
            }
        }
      }
  }
  return(t);
}
ATerm j_6 (ATerm v_40, ATerm w_40, ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL;
  w_17 = t;
  {
    ATerm q_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
        t = o_6(v_40, w_40, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_25 = ATgetFirst((ATermList) t);
            x_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(s_25);
        t = SSL_table_put(v_40, w_40, x_17);
        t = (ATerm) ATmakeAppl(sym__3, v_40, w_40, x_17);
      }
    else
      {
        t = q_25;
        t = SSL_table_remove(v_40, w_40);
        t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
      }
    t = w_17;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  y_17 = t;
  t = m_84(t);
  z_17 = t;
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_18 = NULL;
        t = term_v_18;
        d_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_17, term_v_18);
        t = o_6(z_17, d_18, t);
        ;
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_18 = ATgetFirst((ATermList) t);
        a_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_v_18;
    c_18 = t;
    t = SSL_table_put(z_17, c_18, a_18);
    t = b_18;
    {
      ATerm j_3 (ATerm t)
      {
        ATerm f_18 = NULL;
        f_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_17, f_18);
        t = j_6(z_17, f_18, t);
        return(t);
      }
      t = map_1_0(j_3, t);
      t = y_17;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_85(t);
      t = i_85(t);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      t = i_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,n_18 = NULL;
  i_18 = t;
  t = l_84(t);
  j_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_18, term_v_18);
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_18 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_26 = ATgetArgument(t, 0);
            ATerm g_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_18;
        x_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_18, term_v_18);
        t = o_6(j_18, x_18, t);
        ;
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = (ATerm) ATempty;
      }
    k_18 = t;
    t = term_v_18;
    l_18 = t;
    t = (ATerm) ATinsert(CheckATermList(k_18), (ATerm) ATempty);
    n_18 = t;
    t = SSL_table_put(j_18, l_18, n_18);
    t = i_18;
  }
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm h_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_19 = NULL;
      o_19 = t;
      t = SSL_remove(o_19);
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = h_26;
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm c_19 = NULL;
  t = begin_scope_1_0(k_3, t);
  {
    ATerm n_3 (ATerm t)
    {
      ATerm g_19 = NULL;
      g_19 = t;
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_19 = NULL,i_19 = NULL;
            t = term_m_19;
            h_19 = t;
            t = term_v_18;
            i_19 = t;
            t = term_p_26;
            t = o_6(h_19, i_19, t);
            ;
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((c_19 != NULL) && (c_19 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              c_19 = ATgetFirst((ATermList) t);
            {
              ATerm q_26 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(c_19);
        t = map_1_0(p_3, t);
        t = g_19;
        t = end_scope_1_0(r_3, t);
      }
      return(t);
    }
    t = restore_always_2_0(q_87, n_3, t);
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm s_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_26);
    }
  else
    {
      t = s_26;
      t = term_x_26;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm y_26 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_19 = NULL;
        t = term_p_19;
        t = get_config_0_0(t);
        r_19 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_19);
        ;
        LocalPopChoice(e_27);
      }
    else
      {
        t = y_26;
        t = term_y_8;
      }
    t = r_87(t);
    t = copy_to_1_0(t_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(s_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,y_19 = NULL;
  s_19 = t;
  t = term_f_19;
  t = whoami_0_0(t);
  t_19 = t;
  t = term_o_17;
  u_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_27), t_19), term_f_27);
  v_19 = t;
  t = SSL_printnl(u_19, v_19);
  t = term_w_8;
  y_19 = t;
  t = SSL_exit(y_19);
  t = s_19;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  if(match_string(t, "-k"))
    {
      t = a_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_20;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,g_20 = NULL;
  c_20 = t;
  t = SSL_string_to_int(c_20);
  d_20 = t;
  t = term_h_27;
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_27, d_20);
  t = r_6(g_20, d_20, t);
  t = c_20;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_3, v_3, w_3, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm i_20 = NULL;
  i_20 = t;
  if(match_string(t, "-S"))
    {
      t = i_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_20;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL;
  t = term_q_8;
  n_20 = t;
  t = term_k_27;
  o_20 = t;
  t = term_l_27;
  t = r_6(n_20, o_20, t);
  t = term_m_27;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  t = SSL_string_to_int(p_20);
  q_20 = t;
  t = term_q_8;
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_8, q_20);
  t = r_6(r_20, q_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_20);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  t = term_s_27;
  u_20 = t;
  t = term_f_19;
  v_20 = t;
  t = term_v_27;
  t = r_6(u_20, v_20, t);
  t = term_w_27;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_3, y_3, z_3, t);
      ;
      LocalPopChoice(a_28);
    }
  else
    {
      t = y_27;
      {
        ATerm e_28 = t;
        int f_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_4, c_4, d_4, t);
            ;
            LocalPopChoice(f_28);
          }
        else
          {
            t = e_28;
            t = Option_3_0(g_4, h_4, j_4, t);
          }
      }
    }
  return(t);
}
ATerm r_6 (ATerm q_42, ATerm r_42, ATerm t)
{
  ATerm w_20 = NULL;
  t = term_w_28;
  w_20 = t;
  t = SSL_table_put(w_20, q_42, r_42);
  t = (ATerm) ATmakeAppl(sym__3, term_w_28, q_42, r_42);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_20 = NULL,b_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_21 = NULL,e_21 = NULL,h_21 = NULL;
      t = term_f_19;
      t = d_0(t);
      d_21 = t;
      t = term_x_28;
      e_21 = t;
      t = term_y_28;
      h_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_28, term_y_28, d_21);
      t = p_6(e_21, h_21, d_21, t);
      _fail(t);
    }
  else
    {
      ATerm l_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_20 = ATgetFirst((ATermList) t);
          b_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_20;
      t = a_0(t);
      t = term_f_19;
      t = c_0(t);
      l_21 = t;
      t = (ATerm) ATinsert(CheckATermList(b_21), l_21);
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm n_21 = NULL;
  n_21 = t;
  if(match_string(t, "-o"))
    {
      t = n_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_21;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL;
  o_21 = t;
  t = term_n_19;
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_19, o_21);
  t = r_6(p_21, o_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_21);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, p_4, r_4, t);
  return(t);
}
ATerm p_6 (ATerm q_40, ATerm r_40, ATerm p_40, ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_29 = ATgetArgument(t, 0);
            ATerm i_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
        t = o_6(q_40, r_40, t);
        ;
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
        t = (ATerm) ATempty;
      }
    s_21 = t;
    t = (ATerm) ATinsert(CheckATermList(s_21), p_40);
    t_21 = t;
    t = SSL_table_put(q_40, r_40, t_21);
    t = r_21;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_22 = NULL,i_22 = NULL,j_22 = NULL;
      t = term_f_19;
      t = j_0(t);
      g_22 = t;
      t = term_x_28;
      i_22 = t;
      t = term_y_28;
      j_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_28, term_y_28, g_22);
      t = p_6(i_22, j_22, g_22, t);
      _fail(t);
    }
  else
    {
      ATerm n_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_22 = ATgetFirst((ATermList) t);
          d_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_22 = ATgetFirst((ATermList) t);
          f_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_22;
      t = h_0(t);
      t = e_22;
      t = i_0(t);
      n_22 = t;
      t = (ATerm) ATinsert(CheckATermList(f_22), n_22);
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm p_22 = NULL;
  p_22 = t;
  if(match_string(t, "-i"))
    {
      t = p_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_22;
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL;
  s_22 = t;
  t = term_p_19;
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_19, s_22);
  t = r_6(t_22, s_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_22);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_4, t_4, u_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_19;
  t = whoami_0_0(t);
  u_22 = t;
  t = term_o_17;
  w_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_29), u_22);
  x_22 = t;
  t = SSL_printnl(w_22, x_22);
  t = term_w_8;
  y_22 = t;
  t = SSL_exit(y_22);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_29;
  t = get_config_0_0(t);
  return(t);
}
ATerm k_6 (ATerm l_38, ATerm m_38, ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_38, m_38);
      ;
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      t = SSL_addr(l_38, m_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm t)
{
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_82(t);
      ;
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
      {
        ATerm d_23 = NULL,f_23 = NULL,j_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_23 = ATgetFirst((ATermList) t);
            f_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_23;
        t = foldr_2_0(s_82, t_82, t);
        j_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_23, j_23);
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
ATerm v_4 (ATerm t)
{
  t = term_k_27;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm t_5 = NULL,v_5 = NULL;
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(t_5, v_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_23 = NULL,p_5 = NULL,q_5 = NULL;
  t = times_0_0(t);
  p_5 = t;
  t = SSL_explode_term(p_5);
  if(match_cons(t, sym__2))
    {
      ATerm w_29 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5;
  t = foldr_2_0(v_4, y_4, t);
  s_23 = t;
  t = SSL_TicksToSeconds(s_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  h_24 = t;
  if(match_cons(t, sym__2))
    {
      i_24 = ATgetArgument(t, 0);
      j_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_24;
        if((i_24 != t))
          {
            _fail(t);
          }
        t = h_24;
        ;
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        t = (ATerm) ATmakeAppl(sym__2, i_24, j_24);
        {
          ATerm d_30 = t;
          int e_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_24, j_24);
              ;
              LocalPopChoice(e_30);
            }
          else
            {
              t = d_30;
              t = SSL_gtr(i_24, j_24);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_24, j_24);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_85 (ATerm), ATerm t)
{
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_24 = NULL,o_24 = NULL;
      m_24 = t;
      t = term_q_8;
      t = get_config_0_0(t);
      o_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_24, term_w_8);
      t = geq_0_0(t);
      t = m_24;
      t = t_85(t);
      ;
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,y_24 = NULL;
  t = run_time_0_0(t);
  s_24 = t;
  t = term_f_19;
  t = whoami_0_0(t);
  t_24 = t;
  t = term_o_17;
  u_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_30), s_24), term_i_9), t_24);
  y_24 = t;
  t = SSL_printnl(u_24, y_24);
  t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_30), s_24), term_i_9), t_24));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_27;
  z_24 = t;
  t = SSL_exit(z_24);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm i_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(n_30);
    }
  else
    {
      t = i_30;
      {
        ATerm o_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(x_30);
          }
        else
          {
            t = o_30;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      t = fetch_1_0(c_5, t);
    }
  t = s_89(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_25 = ATgetFirst((ATermList) t);
      c_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_25 = NULL,k_25 = NULL;
        t = c_25;
        t = g_0(t);
        j_25 = t;
        t = b_25;
        t = e_0(t);
        k_25 = t;
        t = c_25;
        {
          ATerm f_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_25), k_25);
            return(t);
          }
          t = reverse_acc_2_0(e_0, f_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_19;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm l_25 = NULL,r_25 = NULL,u_25 = NULL,x_25 = NULL,v_0 = NULL,w_0 = NULL;
  x_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_25);
  l_25 = t;
  t = r_25;
  t = y_68(t);
  u_25 = t;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_25);
  v_0 = t;
  t = SSLsetAnnotations(v_0, l_25);
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
  ATerm e_26 = NULL;
  e_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_26), term_b_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL;
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
      t = fetch_1_0(g_5, t);
    }
  t = term_e_31;
  t = echo_0_0(t);
  t = term_x_28;
  c_26 = t;
  t = term_y_28;
  d_26 = t;
  t = term_f_31;
  t = o_6(c_26, d_26, t);
  t = reverse_acc_2_0(_id, i_5, t);
  t = map_1_0(k_5, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_68 (ATerm), ATerm t)
{
  ATerm i_26 = NULL,k_26 = NULL,n_26 = NULL,o_26 = NULL,x_0 = NULL,y_0 = NULL;
  o_26 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      k_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_26);
  i_26 = t;
  t = k_26;
  t = z_68(t);
  n_26 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, n_26);
  x_0 = t;
  t = SSLsetAnnotations(x_0, i_26);
  return(t);
}
ATerm fetch_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm r_26 (ATerm t)
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_76, _id, t);
        ;
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        t = Cons_2_0(_id, r_26, t);
      }
    return(t);
  }
  t = r_26(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
  t_26 = t;
  {
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_26;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_31 = ATgetFirst((ATermList) t);
                ATerm l_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_26;
          }
        ;
        LocalPopChoice(j_31);
      }
    else
      {
        t = i_31;
        t = (ATerm) ATinsert(ATempty, t_26);
      }
    u_26 = t;
    t = term_x_26;
    v_26 = t;
    t = SSL_printnl(v_26, u_26);
    t = t_26;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_29;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm n_6 (ATerm u_58, ATerm v_58, ATerm t)
{
  t = SSL_strcat(u_58, v_58);
  return(t);
}
ATerm debug_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL;
  z_26 = t;
  t = f_72(t);
  a_27 = t;
  t = term_o_17;
  b_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_26), a_27);
  c_27 = t;
  t = SSL_printnl(b_27, c_27);
  t = z_26;
  return(t);
}
ATerm map_1_0 (ATerm a_76 (ATerm), ATerm t)
{
  ATerm d_27 (ATerm t)
  {
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
        t = Cons_2_0(a_76, d_27, t);
      }
    return(t);
  }
  t = d_27(t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_27 = NULL;
      j_27 = t;
      t = SSL_is_string(j_27);
      ;
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
      {
        ATerm t_31 = t;
        int u_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_5, t);
            ;
            LocalPopChoice(u_31);
          }
        else
          {
            t = t_31;
            {
              ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
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
                        ATerm v_31 = t;
                        int w_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(w_31);
                          }
                        else
                          {
                            t = v_31;
                            t = debug_1_0(o_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_28 = NULL,d_28 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_27 = ATgetArgument(t, 0);
                          r_27 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_27;
                      t = eval_config_0_0(t);
                      c_28 = t;
                      t = r_27;
                      t = eval_config_0_0(t);
                      d_28 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
                      t = n_6(c_28, d_28, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm o_6 (ATerm h_42, ATerm i_42, ATerm t)
{
  t = SSL_table_get(h_42, i_42);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL;
  g_28 = t;
  t = term_w_28;
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_28, g_28);
  t = o_6(h_28, g_28, t);
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_28 = NULL,j_28 = NULL;
        t = eval_config_0_0(t);
        i_28 = t;
        t = term_w_28;
        j_28 = t;
        t = SSL_table_put(j_28, g_28, i_28);
        t = i_28;
        ;
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
      }
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL;
  t = term_z_31;
  k_28 = t;
  t = term_f_19;
  l_28 = t;
  t = term_a_32;
  t = r_6(k_28, l_28, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm l_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
  t = term_z_31;
  m_28 = t;
  t = term_f_19;
  n_28 = t;
  t = term_a_32;
  t = r_6(m_28, n_28, t);
  t = term_c_32;
  o_28 = t;
  t = term_f_19;
  p_28 = t;
  t = term_d_32;
  t = r_6(o_28, p_28, t);
  t = term_e_32;
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = term_f_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_32 = t;
  int h_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_5, s_5, f_6, t);
      ;
      LocalPopChoice(h_32);
    }
  else
    {
      t = g_32;
      t = Option_3_0(l_6, m_6, s_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,z_0 = NULL,a_1 = NULL;
  v_28 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_28 = ATgetFirst((ATermList) t);
      s_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_28);
  q_28 = t;
  t = r_28;
  t = s_63(t);
  t_28 = t;
  t = s_28;
  t = t_63(t);
  u_28 = t;
  a_1 = t;
  t = (ATerm) ATinsert(CheckATermList(u_28), t_28);
  z_0 = t;
  t = SSLsetAnnotations(z_0, q_28);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL;
  a_29 = t;
  t = term_l_29;
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_29, a_29);
  t = r_6(b_29, a_29, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, a_29);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_91 (ATerm), ATerm t)
{
  ATerm z_28 = NULL;
  z_28 = t;
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_32;
        t = q_91(t);
        ;
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
      }
    t = z_28;
    {
      ATerm v_6 (ATerm t)
      {
        ATerm l_32 = t;
        int m_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_32 = t;
            int o_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(o_32);
              }
            else
              {
                t = n_32;
                t = q_91(t);
                t = Cons_2_0(_id, v_6, t);
              }
            ;
            LocalPopChoice(m_32);
          }
        else
          {
            t = l_32;
            {
              ATerm d_29 = NULL,e_29 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_29 = ATgetFirst((ATermList) t);
                  e_29 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_29), (ATerm) ATmakeAppl(sym_Undefined_1, d_29));
            }
          }
        return(t);
      }
      t = Cons_2_0(t_6, v_6, t);
    }
  }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  if(match_string(t, "--help"))
    {
      t = y_29;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_29;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_29;
        }
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  t = term_a_31;
  z_29 = t;
  t = term_f_19;
  a_30 = t;
  t = term_p_32;
  t = r_6(z_29, a_30, t);
  t = term_q_32;
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm h_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_91 (ATerm), ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,x_29 = NULL;
  q_29 = t;
  t = term_x_28;
  t_29 = t;
  t = term_y_28;
  u_29 = t;
  t = (ATerm) ATempty;
  v_29 = t;
  t = SSL_table_put(t_29, u_29, v_29);
  t = q_29;
  {
    ATerm w_6 (ATerm t)
    {
      ATerm s_32 = t;
      int t_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_91(t);
          ;
          LocalPopChoice(t_32);
        }
      else
        {
          t = s_32;
          {
            ATerm u_32 = t;
            int v_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_7, f_7, g_7, t);
                ;
                LocalPopChoice(v_32);
              }
            else
              {
                t = u_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_6, t);
    {
      ATerm w_32 = t;
      int x_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_30 = NULL;
          j_30 = t;
          {
            ATerm y_32 = t;
            int z_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_9 = NULL;
                t = j_30;
                {
                  ATerm a_33 = t;
                  int b_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_a_31;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(b_33);
                    }
                  else
                    {
                      t = a_33;
                      t = fetch_1_0(h_7, t);
                    }
                  t = j_30;
                  t = default_system_usage_0_0(t);
                  t = term_k_27;
                  r_9 = t;
                  t = SSL_exit(r_9);
                }
                ;
                LocalPopChoice(z_32);
              }
            else
              {
                t = y_32;
                {
                  ATerm e_10 = NULL;
                  t = term_z_31;
                  t = get_config_0_0(t);
                  t = j_30;
                  t = default_system_about_0_0(t);
                  t = term_k_27;
                  e_10 = t;
                  t = SSL_exit(e_10);
                }
              }
          }
          ;
          LocalPopChoice(x_32);
        }
      else
        {
          t = w_32;
          {
            ATerm c_33 = t;
            int d_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
                ATerm i_7 (ATerm t)
                {
                  ATerm k_7 (ATerm t)
                  {
                    if(((r_29 != NULL) && (r_29 != t)))
                      _fail(t);
                    else
                      r_29 = t;
                    return(t);
                  }
                  t = Undefined_1_0(k_7, t);
                  return(t);
                }
                t = fetch_1_0(i_7, t);
                t = term_o_17;
                k_30 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_29)), term_e_33);
                l_30 = t;
                t = SSL_printnl(k_30, l_30);
                t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_29)), term_e_33));
                t = default_system_usage_0_0(t);
                t = term_w_8;
                m_30 = t;
                t = SSL_exit(m_30);
                ;
                LocalPopChoice(d_33);
              }
            else
              {
                t = c_33;
              }
          }
        }
      s_29 = t;
      t = term_x_28;
      x_29 = t;
      t = SSL_table_destroy(x_29);
      t = s_29;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
  t = parse_options_1_0(u_89, t);
  p_30 = t;
  t = term_f_33;
  q_30 = t;
  t = SSL_table_create(q_30);
  t = term_f_33;
  r_30 = t;
  t = term_g_33;
  s_30 = t;
  t = SSL_table_put(r_30, s_30, p_30);
  t = p_30;
  t = w_89(t);
  {
    ATerm h_33 = t;
    int i_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_89, t);
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
              t = x_89(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_33);
            }
          else
            {
              t = j_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm l_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(m_33);
    }
  else
    {
      t = l_33;
      {
        ATerm n_33 = t;
        int o_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(o_33);
          }
        else
          {
            t = n_33;
            {
              ATerm p_33 = t;
              int q_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(y_7, d_8, e_8, t);
                  ;
                  LocalPopChoice(q_33);
                }
              else
                {
                  t = p_33;
                  {
                    ATerm r_33 = t;
                    int s_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(s_33);
                      }
                    else
                      {
                        t = r_33;
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
ATerm p_7 (ATerm t)
{
  t = xtc_io_1_0(f_8, t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL;
  t = term_t_33;
  t_30 = t;
  t = term_f_19;
  u_30 = t;
  t = term_u_33;
  t = r_6(t_30, u_30, t);
  t = term_v_33;
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_w_33;
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_33 = t;
      int a_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(a_34);
        }
      else
        {
          t = z_33;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(y_33);
      t = xtc_transform_file_2_0(g_8, h_8, t);
    }
  else
    {
      t = x_33;
      t = xtc_transform_term_2_0(i_8, j_8, t);
    }
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_34 = t;
        int e_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(e_34);
          }
        else
          {
            t = d_34;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(c_34);
        t = xtc_transform_file_2_0(k_8, pass_verbose_0_0, t);
      }
    else
      {
        t = b_34;
        t = xtc_transform_term_2_0(l_8, pass_verbose_0_0, t);
      }
    {
      ATerm f_34 = t;
      int g_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_34 = t;
          int i_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(i_34);
            }
          else
            {
              t = h_34;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(g_34);
          t = xtc_transform_file_2_0(m_8, pass_verbose_0_0, t);
        }
      else
        {
          t = f_34;
          t = xtc_transform_term_2_0(n_8, pass_verbose_0_0, t);
        }
    }
  }
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_j_34;
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm v_30 = NULL;
  t = term_k_34;
  t = xtc_find_0_0(t);
  v_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_30), term_l_34);
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_j_34;
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm w_30 = NULL;
  t = term_k_34;
  t = xtc_find_0_0(t);
  w_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_30), term_l_34);
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_m_34;
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = term_m_34;
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_n_34;
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_n_34;
  return(t);
}
ATerm io_pp_box_0_0 (ATerm t)
{
  t = option_wrap_4_0(o_7, default_usage_0_0, _id, p_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_box_0_0(t);
  return(t);
}
