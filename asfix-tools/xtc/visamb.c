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
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_g_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_m_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_j_30;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_y_28;
ATerm term_u_28;
ATerm term_y_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_v_26;
ATerm term_n_26;
ATerm term_q_24;
ATerm term_m_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_a_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_s_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_g_23;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_x_21;
ATerm term_u_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_i_21;
ATerm term_l_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_l_18;
ATerm term_r_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_a_17;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_l_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_o_9;
ATerm term_l_9;
ATerm term_i_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_m_8;
ATerm term_e_8;
ATerm term_y_4;
void init_constant_terms (void)
{
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_9, term_b_9, term_c_9);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_9, term_o_9, term_r_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_y_9, term_c_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_10, term_i_10, term_j_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_m_10, term_n_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_10, term_r_10, term_t_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_x_10, term_z_10);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_j_11, term_k_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_11, term_q_11, term_r_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_11, term_u_11, term_y_11);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_e_12, term_f_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_i_12, term_k_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_p_12, term_s_12);
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
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_z_12, term_g_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_o_13, term_p_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_y_13, term_z_13);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_h_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_r_14, term_s_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_v_14, term_w_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_z_14, term_a_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_m_15, term_n_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_z_15, term_g_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_m_16, term_n_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_w_16, term_y_16);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym__2, term_o_22, term_o_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_o_22, term_p_22);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("visamb.pp.af", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.pp.af", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_c_19, term_l_18);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__2, term_l_19, term_i_27);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_27);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym__2, term_q_27, term_x_18);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym__2, term_y_28, term_b_29);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_x_18);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_x_18);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym__2, term_w_30, term_x_18);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym__2, term_p_33, term_x_18);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Vis-amb", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm read_from_0_0 (ATerm);
ATerm t_5 (ATerm r_27, ATerm s_27, ATerm);
ATerm u_5 (ATerm d_72 (ATerm), ATerm v_180, ATerm z_27, ATerm);
ATerm e_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm);
ATerm v_5 (ATerm n_24, ATerm o_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm s_70 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm e_90 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm r_6 (ATerm e_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm e_6 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm);
ATerm v_7 (ATerm d_7, ATerm);
ATerm y_7 (ATerm h_7, ATerm j_7, ATerm l_7, ATerm);
ATerm m_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm n_68 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm y_5 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm);
ATerm z_5 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm);
ATerm v_1 (ATerm);
ATerm a_6 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm);
ATerm b_6 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm);
ATerm f_6 (ATerm l_48, ATerm m_48, ATerm);
ATerm y_10 (ATerm p_10, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_6 (ATerm x_27, ATerm);
ATerm d_6 (ATerm t_48, ATerm u_48, ATerm);
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm b_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm u_16 (ATerm y_15, ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm build_pp_tables_0_0 (ATerm);
ATerm g_6 (ATerm t_24, ATerm u_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm h_6 (ATerm m_45, ATerm n_45, ATerm);
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm g_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm xtc_io_1_0 (ATerm r_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm p_6 (ATerm h_47, ATerm i_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm n_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm n_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm i_6 (ATerm c_43, ATerm d_43, ATerm);
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm x_4 (ATerm);
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm u_68 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm v_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm l_6 (ATerm y_41, ATerm z_41, ATerm);
ATerm debug_1_0 (ATerm b_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm k_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm m_6 (ATerm y_46, ATerm z_46, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm j_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm);
ATerm v_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm);
ATerm g_7 (ATerm);
ATerm i_7 (ATerm);
ATerm k_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm c_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm o_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_y_4;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm s_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_e_8);
      s_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_0, (ATerm) ATinsert(ATempty, term_e_8));
      t = f_6(o_0, s_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm t_5 (ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm t_0 = NULL;
  t = SSL_write_term_to_stream_baf(r_27, s_27);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_0);
  return(t);
}
ATerm u_5 (ATerm d_72 (ATerm), ATerm v_180, ATerm z_27, ATerm t)
{
  ATerm u_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_180, term_m_8);
  t = open_stream_0_0(t);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_0, z_27);
  t = d_72(t);
  t = fclose_0_0(t);
  t = z_27;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm z_0 = NULL,o_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      if(match_cons(n_8, sym_Stream_1))
        {
          z_0 = ATgetArgument(n_8, 0);
        }
      else
        _fail(t);
      o_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(z_0, o_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL;
  v_0 = t;
  t = xtc_new_file_0_0(t);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_0, v_0);
  t = u_5(e_1, w_0, v_0, t);
  t = SSL_close_file(w_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_0);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_90, o_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm v_5 (ATerm n_24, ATerm o_24, ATerm t)
{
  t = SSL_execvp(n_24, o_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,c_3 = NULL;
  w_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_2 = ATgetArgument(t, 0);
      {
        ATerm r_0 = NULL,x_0 = NULL;
        t = SSL_int_to_string(x_2);
        r_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_8), r_0), term_o_8);
        x_0 = t;
        t = SSL_concat_strings(x_0);
      }
    }
  else
    {
      ATerm i_1 = NULL,j_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_2 = ATgetArgument(t, 0);
          y_2 = ATgetArgument(t, 1);
          c_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_2);
      i_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_3), term_r_8), i_1), term_q_8), x_2);
      j_1 = t;
      t = SSL_concat_strings(j_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm i_3 = NULL;
  ATerm f_1 (ATerm t)
  {
    t = i_76(t);
    if(((i_3 != NULL) && (i_3 != t)))
      _fail(t);
    else
      i_3 = t;
    return(t);
  }
  t = fetch_1_0(f_1, t);
  t = not_null(i_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_3 = NULL;
  j_3 = t;
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_17), term_s_16), term_o_16), term_h_16), term_w_15), term_o_15), term_i_15), term_b_15), term_x_14), term_t_14), term_o_14), term_e_14), term_q_13), term_h_13), term_x_12), term_t_12), term_l_12), term_g_12), term_c_12), term_s_11), term_o_11), term_e_11), term_v_10), term_o_10), term_k_10), term_d_10), term_v_9), term_i_9);
        {
          ATerm g_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm b_17 = ATgetArgument(t, 0);
                if((j_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm c_17 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(g_1, t);
        }
        ;
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_3 = NULL;
  n_3 = t;
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_3 = NULL,r_1 = NULL,s_1 = NULL,u_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm f_17 = ATgetArgument(t, 0);
            z_3 = ATgetArgument(t, 1);
            {
              ATerm g_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_3;
        {
          ATerm h_17 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_17;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          r_1 = t;
          t = term_i_17;
          s_1 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, r_1), term_j_17);
          u_1 = t;
          t = SSL_printnl(s_1, u_1);
          t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATinsert(ATinsert(ATempty, r_1), term_j_17));
        }
        ;
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
      }
    t = n_3;
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
  ATerm d_4 = NULL,f_4 = NULL;
  d_4 = t;
  t = fork_0_0(t);
  f_4 = t;
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = d_4;
        t = s_70(t);
        ;
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        t = SSL_waitpid(f_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_17 = ATgetArgument(t, 0);
            if(((ATgetType(m_17) != AT_INT) || (ATgetInt((ATermInt) m_17) != 0)))
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
        t = d_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL;
  k_4 = t;
  t = e_90(t);
  t = xtc_find_0_0(t);
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_4, k_4);
  {
    ATerm h_1 (ATerm t)
    {
      ATerm m_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, l_4, k_4);
      t = v_5(l_4, k_4, t);
      t = term_r_17;
      m_4 = t;
      t = SSL_exit(m_4);
      return(t);
    }
    t = fork_and_wait_1_0(h_1, t);
    t = k_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_4, t);
        ;
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_76(t);
      }
    return(t);
  }
  t = z_4(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(a_18);
    }
  else
    {
      t = x_17;
      {
        ATerm t_4 = NULL,u_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_4 = ATgetFirst((ATermList) t);
            u_4 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_4;
        {
          ATerm k_1 (ATerm t)
          {
            t = u_4;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_1, t);
        }
      }
    }
  return(t);
}
ATerm r_6 (ATerm e_5, ATerm t)
{
  ATerm h_5 = NULL;
  t = SSL_explode_term(e_5);
  if(match_cons(t, sym__2))
    {
      ATerm f_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,m_5 = NULL;
  m_5 = t;
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
      {
        ATerm g_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              t = j_5;
              return(t);
            }
            t = i_5;
            t = at_end_1_0(l_1, t);
            ;
            LocalPopChoice(i_18);
          }
        else
          {
            t = g_18;
            t = r_6(m_5, t);
          }
      }
    }
  else
    {
      t = r_6(m_5, t);
    }
  return(t);
}
ATerm e_6 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL;
  s_6 = t;
  t = p_86(t);
  t_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_6, q_44, o_44);
  t = n_6(t_6, q_44, o_44, t);
  {
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_6 = NULL;
        t = term_l_18;
        z_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_6, term_l_18);
        t = m_6(t_6, z_6, t);
        ;
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_6 = ATgetFirst((ATermList) t);
        w_6 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_l_18;
    x_6 = t;
    t = (ATerm) ATinsert(CheckATermList(w_6), (ATerm) ATinsert(CheckATermList(u_6), q_44));
    y_6 = t;
    t = SSL_table_put(t_6, x_6, y_6);
    t = s_6;
  }
  return(t);
}
ATerm v_7 (ATerm d_7, ATerm t)
{
  t = d_7;
  {
    ATerm n_18 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_18 = ATgetArgument(t, 0);
            ATerm r_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_18;
      }
    t = term_s_18;
    t = debug_1_0(m_1, t);
    t = (ATerm) ATmakeAppl(sym__2, d_7, term_m_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm y_7 (ATerm h_7, ATerm j_7, ATerm l_7, ATerm t)
{
  t = SSL_open_file(h_7, j_7);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_u_18;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm q_7 = NULL,t_7 = NULL,u_7 = NULL;
  q_7 = t;
  if(match_cons(t, sym__2))
    {
      t_7 = ATgetArgument(t, 0);
      u_7 = ATgetArgument(t, 1);
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_7(q_7, t);
            ;
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            t = y_7(t_7, u_7, q_7, t);
          }
      }
    }
  else
    {
      t = v_7(q_7, t);
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
  ATerm z_7 = NULL,a_8 = NULL;
  t = term_x_18;
  t = new_0_0(t);
  z_7 = t;
  t = term_y_18;
  a_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_7, term_y_18);
  t = l_6(z_7, a_8, t);
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_8 = NULL,d_8 = NULL;
        b_8 = t;
        t = (ATerm) ATinsert(ATempty, term_e_8);
        d_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_8, (ATerm) ATinsert(ATempty, term_e_8));
        t = f_6(b_8, d_8, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
      }
  }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_c_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL;
  t = new_file_0_0(t);
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_8, term_m_8);
  t = open_file_0_0(t);
  t = term_x_18;
  g_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_8, term_x_18);
  t = e_6(n_1, f_8, g_8, t);
  t = f_8;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL;
  s_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_1 = NULL,z_1 = NULL;
      t = s_8;
      t = xtc_new_file_0_0(t);
      x_1 = t;
      t = m_0(t);
      z_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_1, (ATerm) ATinsert(ATinsert(ATempty, x_1), term_d_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(x_1);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_1);
    }
  else
    {
      ATerm e_2 = NULL,f_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_8;
      t = xtc_new_file_0_0(t);
      e_2 = t;
      t = m_0(t);
      f_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_2), term_d_19), t_8), term_f_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(e_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_2);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm n_68 (ATerm), ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,b_0 = NULL,f_0 = NULL;
  z_8 = t;
  if(match_cons(t, sym_FILE_1))
    {
      x_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_8);
  w_8 = t;
  t = x_8;
  t = n_68(t);
  y_8 = t;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_8);
  b_0 = t;
  t = SSLsetAnnotations(b_0, w_8);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm d_9 = NULL;
  d_9 = t;
  t = SSL_table_keys(d_9);
  {
    ATerm p_1 (ATerm t)
    {
      ATerm f_9 = NULL,g_9 = NULL;
      f_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_9, f_9);
      t = m_6(d_9, f_9, t);
      g_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_9, g_9);
      return(t);
    }
    t = map_1_0(p_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm g_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_9 = NULL,j_9 = NULL;
      h_9 = t;
      t = term_l_19;
      t = get_config_0_0(t);
      j_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_9, term_z_15);
      t = geq_0_0(t);
      t = h_9;
      t = x_87(t);
      ;
      LocalPopChoice(i_19);
    }
  else
    {
      t = g_19;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm m_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_9 = NULL,m_9 = NULL;
      k_9 = t;
      t = term_l_19;
      t = get_config_0_0(t);
      m_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_9, term_i_12);
      t = geq_0_0(t);
      t = k_9;
      t = w_87(t);
      ;
      LocalPopChoice(o_19);
    }
  else
    {
      t = m_19;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_9 = NULL,p_9 = NULL;
      n_9 = t;
      t = term_l_19;
      t = get_config_0_0(t);
      p_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_9, term_i_10);
      t = geq_0_0(t);
      t = n_9;
      t = y_87(t);
      ;
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
    }
  return(t);
}
ATerm y_5 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm t)
{
  t = e_80(t);
  {
    ATerm q_1 (ATerm t)
    {
      ATerm q_9 = NULL;
      q_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_34, q_9);
      t = d_80(t);
      return(t);
    }
    t = fetch_1_0(q_1, t);
    t = t_34;
  }
  return(t);
}
ATerm z_5 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm t)
{
  t = q_34;
  {
    ATerm x_9 (ATerm t)
    {
      ATerm u_19 = t;
      int x_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_34;
          ;
          LocalPopChoice(x_19);
        }
      else
        {
          t = u_19;
          {
            ATerm y_19 = t;
            int a_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
                s_9 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    t_9 = ATgetFirst((ATermList) t);
                    u_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = s_9;
                {
                  ATerm t_1 (ATerm t)
                  {
                    t = p_34;
                    return(t);
                  }
                  t = y_5(a_80, t_1, t_9, u_9, t);
                  t = x_9(t);
                }
                ;
                LocalPopChoice(a_20);
              }
            else
              {
                t = y_19;
                t = Cons_2_0(_id, x_9, t);
              }
          }
        }
      return(t);
    }
    t = x_9(t);
  }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm f_10 = NULL;
  if(match_cons(t, sym__2))
    {
      f_10 = ATgetArgument(t, 0);
      if((f_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm a_6 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_20 = ATgetArgument(t, 0);
            ATerm f_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
        t = m_6(e_46, f_46, t);
        ;
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = (ATerm) ATempty;
      }
    a_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_10, g_46);
    t = z_5(v_1, a_10, g_46, t);
    b_10 = t;
    t = SSL_table_put(e_46, f_46, b_10);
    t = z_9;
  }
  return(t);
}
ATerm b_6 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm t)
{
  t = n_46;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm g_10 = NULL,h_10 = NULL;
      if(match_cons(t, sym__2))
        {
          g_10 = ATgetArgument(t, 0);
          h_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, o_46, g_10, h_10);
      t = a_88(t);
      return(t);
    }
    t = map_1_0(w_1, t);
  }
  return(t);
}
ATerm f_6 (ATerm l_48, ATerm m_48, ATerm t)
{
  t = SSL_access(l_48, m_48);
  return(t);
}
ATerm y_10 (ATerm p_10, ATerm t)
{
  t = SSL_fclose(p_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_10 = NULL,u_10 = NULL;
  u_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_10 = ATgetArgument(t, 0);
      {
        ATerm j_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_10);
            ;
            LocalPopChoice(l_20);
          }
        else
          {
            t = j_20;
            t = y_10(u_10, t);
          }
      }
    }
  else
    {
      t = y_10(u_10, t);
    }
  return(t);
}
ATerm c_6 (ATerm x_27, ATerm t)
{
  t = SSL_read_term_from_stream(x_27);
  return(t);
}
ATerm d_6 (ATerm t_48, ATerm u_48, ATerm t)
{
  ATerm a_11 = NULL;
  t = SSL_fopen(t_48, u_48);
  a_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_11);
  return(t);
}
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,n_0 = NULL,p_0 = NULL;
  i_11 = t;
  if(match_cons(t, sym__2))
    {
      c_11 = ATgetArgument(t, 0);
      d_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_11);
  b_11 = t;
  t = c_11;
  t = z_58(t);
  g_11 = t;
  t = d_11;
  t = a_59(t);
  h_11 = t;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_11, h_11);
  n_0 = t;
  t = SSLsetAnnotations(n_0, b_11);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_11 = NULL;
  t = SSL_stdin_stream();
  l_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_11 = NULL;
  t = SSL_stdout_stream();
  m_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_11 = NULL;
  t = SSL_stderr_stream();
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_11);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm z_11 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      z_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm j_12 = NULL;
  j_12 = t;
  t = SSL_is_string(j_12);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_20 = ATgetArgument(t, 0);
      ATerm t_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_11 = NULL,k_3 = NULL;
        v_11 = t;
        t = SSL_explode_term(v_11);
        if(match_cons(t, sym__2))
          {
            ATerm y_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_20) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_20 = ATgetArgument(t, 1);
              if(((ATgetType(z_20) == AT_LIST) && !(ATisEmpty(z_20))))
                {
                  k_3 = ATgetFirst((ATermList) z_20);
                  {
                    ATerm a_21 = (ATerm) ATgetNext((ATermList) z_20);
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
        LocalPopChoice(x_20);
      }
    else
      {
        t = v_20;
        {
          ATerm d_21 = t;
          int h_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_11 = NULL,x_11 = NULL;
              t = _2_0(y_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_11 = ATgetArgument(t, 0);
                  x_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_6(w_11, x_11, t);
              ;
              LocalPopChoice(h_21);
            }
          else
            {
              t = d_21;
              {
                ATerm a_12 = NULL,b_12 = NULL;
                t = _2_0(a_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    a_12 = ATgetArgument(t, 0);
                    b_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_6(a_12, b_12, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_i_21;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,q_12 = NULL;
  ATerm k_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_12 = NULL;
      r_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_12, term_o_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_21);
    }
  else
    {
      t = k_21;
      t = debug_1_0(b_2, t);
      _fail(t);
    }
  m_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(q_12, t);
  n_12 = t;
  t = m_12;
  t = fclose_0_0(t);
  t = n_12;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_q_21;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_u_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_13 = NULL,b_13 = NULL;
      a_13 = t;
      t = (ATerm) ATinsert(ATempty, term_x_21);
      b_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_13, (ATerm) ATinsert(ATempty, term_x_21));
      t = f_6(a_13, b_13, t);
      LocalPopChoice(w_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = v_21;
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_22 = t;
            if((PushChoice() == 0))
              {
                ATerm c_13 = NULL,d_13 = NULL;
                c_13 = t;
                t = (ATerm) ATinsert(ATempty, term_e_8);
                d_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_13, (ATerm) ATinsert(ATempty, term_e_8));
                t = f_6(c_13, d_13, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_22;
              }
            t = debug_1_0(c_2, t);
            ;
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
            t = debug_1_0(d_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_i_22;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm x_13 = NULL,a_14 = NULL,b_14 = NULL;
  x_13 = t;
  t = term_i_17;
  a_14 = t;
  t = (ATerm) ATinsert(ATempty, term_k_22);
  b_14 = t;
  t = SSL_printnl(a_14, b_14);
  t = x_13;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,i_14 = NULL;
  if(match_cons(t, sym__3))
    {
      c_14 = ATgetArgument(t, 0);
      d_14 = ATgetArgument(t, 1);
      i_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_6(c_14, d_14, i_14, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  j_14 = t;
  t = term_i_17;
  k_14 = t;
  t = (ATerm) ATinsert(ATempty, term_l_22);
  l_14 = t;
  t = SSL_printnl(k_14, l_14);
  t = j_14;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,q_14 = NULL;
  m_14 = t;
  t = term_i_17;
  n_14 = t;
  t = (ATerm) ATinsert(ATempty, term_k_22);
  q_14 = t;
  t = SSL_printnl(n_14, q_14);
  t = m_14;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,m_13 = NULL,n_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
  e_13 = t;
  t = if_verbose5_1_0(g_2, t);
  {
    ATerm m_22 = t;
    if((PushChoice() == 0))
      {
        ATerm v_13 = NULL,w_13 = NULL;
        t = term_o_22;
        v_13 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, e_13);
        w_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATmakeAppl(sym_Imported_1, e_13));
        t = m_6(v_13, w_13, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_22;
      }
    f_13 = t;
    t = term_o_22;
    j_13 = t;
    t = term_p_22;
    k_13 = t;
    t = (ATerm) ATinsert(ATempty, e_13);
    m_13 = t;
    t = SSL_table_put(j_13, k_13, m_13);
    t = f_13;
    t = if_verbose4_1_0(i_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(k_2, t);
    i_13 = t;
    t = term_o_22;
    n_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_22, i_13);
    t = b_6(l_2, n_13, i_13, t);
    t = if_verbose6_1_0(m_2, t);
    t = term_o_22;
    s_13 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, e_13);
    t_13 = t;
    t = (ATerm) ATempty;
    u_13 = t;
    t = SSL_table_put(s_13, t_13, u_13);
    t = (ATerm) ATmakeAppl(sym__3, term_o_22, (ATerm)ATmakeAppl(sym_Imported_1, e_13), (ATerm) ATempty);
    t = if_verbose4_1_0(n_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm s_22 = t;
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
      t = s_22;
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              t = filter_1_0(r_83, t);
              return(t);
            }
            t = Cons_2_0(r_83, o_2, t);
            ;
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            {
              ATerm c_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_23 = ATgetFirst((ATermList) t);
                  c_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = c_15;
              t = filter_1_0(r_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm f_15 (ATerm t)
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_85(t);
        t = f_15(t);
        ;
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
      }
    return(t);
  }
  t = f_15(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_15 = NULL;
            t = term_l_23;
            g_15 = t;
            t = SSL_getenv(g_15);
            ;
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  t = term_o_22;
  r_15 = t;
  t = term_o_23;
  s_15 = t;
  t = term_p_23;
  t = m_6(r_15, s_15, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm q_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_23;
      }
  }
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = debug_1_0(t_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_15 = NULL;
  t = if_verbose5_1_0(p_2, t);
  k_15 = t;
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_15 = NULL,p_15 = NULL;
        t = term_o_22;
        l_15 = t;
        t = term_p_22;
        p_15 = t;
        t = term_v_23;
        t = m_6(l_15, p_15, t);
        ;
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        {
          ATerm q_15 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          q_15 = t;
          t = repeat_1_0(r_2, t);
          t = q_15;
        }
      }
    t = k_15;
    t = if_verbose5_1_0(s_2, t);
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
  t = term_w_23;
  return(t);
}
ATerm u_16 (ATerm y_15, ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
  t = term_o_22;
  b_16 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, y_15);
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATmakeAppl(sym_Tool_1, y_15));
  t = m_6(b_16, c_16, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_23 = ATgetFirst((ATermList) t);
      if(match_cons(x_23, sym__2))
        {
          ATerm z_23 = ATgetArgument(x_23, 0);
          a_16 = ATgetArgument(x_23, 1);
        }
      else
        _fail(t);
      {
        ATerm y_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_16;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = debug_1_0(b_3, t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_w_23;
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_o_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(e_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_a_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(u_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
        f_16 = t;
        if(match_cons(t, sym__2))
          {
            d_16 = ATgetArgument(t, 0);
            e_16 = ATgetArgument(t, 1);
            {
              ATerm d_24 = t;
              int e_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_16 = NULL,k_16 = NULL,l_16 = NULL;
                  t = term_o_22;
                  k_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, d_16);
                  l_16 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATmakeAppl(sym_Tool_1, d_16));
                  t = m_6(k_16, l_16, t);
                  {
                    ATerm z_2 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((e_16 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((i_16 != NULL) && (i_16 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            i_16 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(z_2, t);
                    t = not_null(i_16);
                  }
                  ;
                  LocalPopChoice(e_24);
                }
              else
                {
                  t = d_24;
                  t = u_16(f_16, t);
                }
            }
          }
        else
          {
            t = u_16(f_16, t);
          }
        t = if_verbose5_1_0(a_3, t);
      }
      ;
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
      {
        ATerm t_16 = NULL,u_3 = NULL,x_3 = NULL;
        t_16 = t;
        t = term_i_17;
        u_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_24), t_16), term_i_24);
        x_3 = t;
        t = SSL_printnl(u_3, x_3);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_24), t_16), term_i_24);
        t = if_verbose5_1_0(d_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm build_pp_tables_0_0 (ATerm t)
{
  ATerm x_16 = NULL,z_16 = NULL;
  t = term_k_24;
  t = xtc_find_0_0(t);
  x_16 = t;
  t = term_m_24;
  t = xtc_find_0_0(t);
  z_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_16), term_q_24), x_16), term_q_24);
  return(t);
}
ATerm g_6 (ATerm t_24, ATerm u_24, ATerm t)
{
  t = SSL_copy(t_24, u_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL;
  p_17 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_4 = NULL;
        t = p_17;
        t = k_0(t);
        j_4 = t;
        {
          ATerm x_24 = t;
          int b_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(b_25);
            }
          else
            {
              t = x_24;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_17, j_4);
          t = g_6(q_17, j_4, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, q_17);
        }
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = s_24;
        {
          ATerm e_25 = t;
          int f_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_4 = NULL;
              t = p_17;
              t = k_0(t);
              v_4 = t;
              {
                ATerm g_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm h_25 = t;
                    int i_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(i_25);
                      }
                    else
                      {
                        t = h_25;
                        {
                          ATerm j_25 = t;
                          int k_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(k_25);
                            }
                          else
                            {
                              t = j_25;
                              {
                                ATerm a_5 = NULL;
                                a_5 = t;
                                if((q_17 != t))
                                  {
                                    _fail(t);
                                  }
                                t = a_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_25;
                  }
                t = (ATerm) ATmakeAppl(sym__2, q_17, v_4);
                t = g_6(q_17, v_4, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, q_17);
              }
              ;
              LocalPopChoice(f_25);
            }
          else
            {
              t = e_25;
              t = p_17;
              t = k_0(t);
              if((q_17 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_17);
            }
        }
      }
  }
  return(t);
}
ATerm h_6 (ATerm m_45, ATerm n_45, ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL;
  u_17 = t;
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
        t = m_6(m_45, n_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_25 = ATgetFirst((ATermList) t);
            v_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_25);
        t = SSL_table_put(m_45, n_45, v_17);
        t = (ATerm) ATmakeAppl(sym__3, m_45, n_45, v_17);
      }
    else
      {
        t = l_25;
        t = SSL_table_remove(m_45, n_45);
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
      }
    t = u_17;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm w_17 = NULL,y_17 = NULL,z_17 = NULL,b_18 = NULL,c_18 = NULL;
  w_17 = t;
  t = m_86(t);
  y_17 = t;
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_18 = NULL;
        t = term_l_18;
        d_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_17, term_l_18);
        t = m_6(y_17, d_18, t);
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_18 = ATgetFirst((ATermList) t);
        z_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_l_18;
    c_18 = t;
    t = SSL_table_put(y_17, c_18, z_17);
    t = b_18;
    {
      ATerm f_3 (ATerm t)
      {
        ATerm e_18 = NULL;
        e_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_17, e_18);
        t = h_6(y_17, e_18, t);
        return(t);
      }
      t = map_1_0(f_3, t);
      t = w_17;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_87(t);
      t = i_87(t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      t = i_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm h_18 = NULL,m_18 = NULL,o_18 = NULL,q_18 = NULL,t_18 = NULL;
  h_18 = t;
  t = l_86(t);
  m_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_18, term_l_18);
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_19 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_26 = ATgetArgument(t, 0);
            ATerm b_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_18;
        b_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_18, term_l_18);
        t = m_6(m_18, b_19, t);
        ;
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        t = (ATerm) ATempty;
      }
    o_18 = t;
    t = term_l_18;
    q_18 = t;
    t = (ATerm) ATinsert(CheckATermList(o_18), (ATerm) ATempty);
    t_18 = t;
    t = SSL_table_put(m_18, q_18, t_18);
    t = h_18;
  }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_c_19;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_19 = NULL;
      n_19 = t;
      t = SSL_remove(n_19);
      ;
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_c_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm e_19 = NULL;
  t = begin_scope_1_0(g_3, t);
  {
    ATerm h_3 (ATerm t)
    {
      ATerm h_19 = NULL;
      h_19 = t;
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_19 = NULL,k_19 = NULL;
            t = term_c_19;
            j_19 = t;
            t = term_l_18;
            k_19 = t;
            t = term_n_26;
            t = m_6(j_19, k_19, t);
            ;
            LocalPopChoice(f_26);
          }
        else
          {
            t = e_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((e_19 != NULL) && (e_19 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              e_19 = ATgetFirst((ATermList) t);
            {
              ATerm o_26 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(e_19);
        t = map_1_0(l_3, t);
        t = h_19;
        t = end_scope_1_0(m_3, t);
      }
      return(t);
    }
    t = restore_always_2_0(q_89, h_3, t);
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm q_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_26);
    }
  else
    {
      t = q_26;
      t = term_v_26;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_89 (ATerm), ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm w_26 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_19 = NULL;
        t = term_f_19;
        t = get_config_0_0(t);
        r_19 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_19);
        ;
        LocalPopChoice(c_27);
      }
    else
      {
        t = w_26;
        t = term_y_4;
      }
    t = r_89(t);
    t = copy_to_1_0(p_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(o_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,v_19 = NULL,w_19 = NULL,z_19 = NULL;
  s_19 = t;
  t = term_x_18;
  t = whoami_0_0(t);
  t_19 = t;
  t = term_i_17;
  v_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_27), t_19), term_d_27);
  w_19 = t;
  t = SSL_printnl(v_19, w_19);
  t = term_b_9;
  z_19 = t;
  t = SSL_exit(z_19);
  t = s_19;
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm b_20 = NULL;
  b_20 = t;
  if(match_string(t, "-k"))
    {
      t = b_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_20;
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
  g_20 = t;
  t = SSL_string_to_int(g_20);
  h_20 = t;
  t = term_f_27;
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_27, h_20);
  t = p_6(i_20, h_20, t);
  t = g_20;
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_3, r_3, s_3, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm k_20 = NULL;
  k_20 = t;
  if(match_string(t, "-S"))
    {
      t = k_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_20;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL;
  t = term_l_19;
  n_20 = t;
  t = term_i_27;
  o_20 = t;
  t = term_j_27;
  t = p_6(n_20, o_20, t);
  t = term_k_27;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm y_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  t = SSL_string_to_int(p_20);
  q_20 = t;
  t = term_l_19;
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_19, q_20);
  t = p_6(r_20, q_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_20);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_p_27;
  return(t);
}
ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm s_20 = NULL,u_20 = NULL;
  t = term_q_27;
  s_20 = t;
  t = term_x_18;
  u_20 = t;
  t = term_t_27;
  t = p_6(s_20, u_20, t);
  t = term_u_27;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_y_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_3, v_3, w_3, t);
      ;
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
      {
        ATerm s_28 = t;
        int t_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_3, a_4, b_4, t);
            ;
            LocalPopChoice(t_28);
          }
        else
          {
            t = s_28;
            t = Option_3_0(c_4, e_4, g_4, t);
          }
      }
    }
  return(t);
}
ATerm p_6 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm w_20 = NULL;
  t = term_u_28;
  w_20 = t;
  t = SSL_table_put(w_20, h_47, i_47);
  t = (ATerm) ATmakeAppl(sym__3, term_u_28, h_47, i_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
      t = term_x_18;
      t = d_0(t);
      e_21 = t;
      t = term_y_28;
      f_21 = t;
      t = term_b_29;
      g_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_28, term_b_29, e_21);
      t = n_6(f_21, g_21, e_21, t);
      _fail(t);
    }
  else
    {
      ATerm j_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_21 = ATgetFirst((ATermList) t);
          c_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_21;
      t = a_0(t);
      t = term_x_18;
      t = c_0(t);
      j_21 = t;
      t = (ATerm) ATinsert(CheckATermList(c_21), j_21);
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  if(match_string(t, "-o"))
    {
      t = l_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_21;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm m_21 = NULL,p_21 = NULL;
  m_21 = t;
  t = term_d_19;
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_19, m_21);
  t = p_6(p_21, m_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_21);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, n_4, t);
  return(t);
}
ATerm n_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_29 = ATgetArgument(t, 0);
            ATerm g_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
        t = m_6(h_45, i_45, t);
        ;
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
        t = (ATerm) ATempty;
      }
    s_21 = t;
    t = (ATerm) ATinsert(CheckATermList(s_21), g_45);
    t_21 = t;
    t = SSL_table_put(h_45, i_45, t_21);
    t = r_21;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
      t = term_x_18;
      t = j_0(t);
      f_22 = t;
      t = term_y_28;
      g_22 = t;
      t = term_b_29;
      h_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_28, term_b_29, f_22);
      t = n_6(g_22, h_22, f_22, t);
      _fail(t);
    }
  else
    {
      ATerm n_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_22 = ATgetFirst((ATermList) t);
          c_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_22 = ATgetFirst((ATermList) t);
          e_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_22;
      t = h_0(t);
      t = d_22;
      t = i_0(t);
      n_22 = t;
      t = (ATerm) ATinsert(CheckATermList(e_22), n_22);
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  if(match_string(t, "-i"))
    {
      t = q_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_22;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm r_22 = NULL,t_22 = NULL;
  r_22 = t;
  t = term_f_19;
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_19, r_22);
  t = p_6(t_22, r_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_22);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_18;
  t = whoami_0_0(t);
  u_22 = t;
  t = term_i_17;
  w_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_29), u_22);
  x_22 = t;
  t = SSL_printnl(w_22, x_22);
  t = term_b_9;
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
ATerm i_6 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_43, d_43);
      ;
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      t = SSL_addr(c_43, d_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm t)
{
  ATerm u_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_82(t);
      ;
      LocalPopChoice(x_29);
    }
  else
    {
      t = u_29;
      {
        ATerm j_23 = NULL,k_23 = NULL,n_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_23 = ATgetFirst((ATermList) t);
            k_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_23;
        t = foldr_2_0(o_82, p_82, t);
        n_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_23, n_23);
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
ATerm r_4 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL;
  if(match_cons(t, sym__2))
    {
      r_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(r_5, s_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_23 = NULL,l_5 = NULL,o_5 = NULL;
  t = times_0_0(t);
  l_5 = t;
  t = SSL_explode_term(l_5);
  if(match_cons(t, sym__2))
    {
      ATerm y_29 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5;
  t = foldr_2_0(r_4, s_4, t);
  r_23 = t;
  t = SSL_TicksToSeconds(r_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
  f_24 = t;
  if(match_cons(t, sym__2))
    {
      g_24 = ATgetArgument(t, 0);
      h_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_24;
        if((g_24 != t))
          {
            _fail(t);
          }
        t = f_24;
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        t = (ATerm) ATmakeAppl(sym__2, g_24, h_24);
        {
          ATerm b_30 = t;
          int c_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_24, h_24);
              ;
              LocalPopChoice(c_30);
            }
          else
            {
              t = b_30;
              t = SSL_gtr(g_24, h_24);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_24, h_24);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  ATerm d_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_24 = NULL,p_24 = NULL;
      l_24 = t;
      t = term_l_19;
      t = get_config_0_0(t);
      p_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_24, term_b_9);
      t = geq_0_0(t);
      t = l_24;
      t = t_87(t);
      ;
      LocalPopChoice(e_30);
    }
  else
    {
      t = d_30;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm r_24 = NULL,v_24 = NULL,y_24 = NULL,z_24 = NULL;
  t = run_time_0_0(t);
  r_24 = t;
  t = term_x_18;
  t = whoami_0_0(t);
  v_24 = t;
  t = term_i_17;
  y_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_30), r_24), term_q_8), v_24);
  z_24 = t;
  t = SSL_printnl(y_24, z_24);
  t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_30), r_24), term_q_8), v_24));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_27;
  a_25 = t;
  t = SSL_exit(a_25);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm k_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(r_30);
    }
  else
    {
      t = k_30;
      {
        ATerm s_30 = t;
        int t_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(t_30);
          }
        else
          {
            t = s_30;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      t = fetch_1_0(x_4, t);
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
        ATerm q_25 = NULL,r_25 = NULL;
        t = d_25;
        t = g_0(t);
        q_25 = t;
        t = c_25;
        t = e_0(t);
        r_25 = t;
        t = d_25;
        {
          ATerm b_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(q_25), r_25);
            return(t);
          }
          t = reverse_acc_2_0(e_0, b_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_18;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm u_68 (ATerm), ATerm t)
{
  ATerm s_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,q_0 = NULL,y_0 = NULL;
  x_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_25);
  s_25 = t;
  t = v_25;
  t = u_68(t);
  w_25 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_25);
  q_0 = t;
  t = SSLsetAnnotations(q_0, s_25);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm i_26 = NULL;
  i_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_26), term_x_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL;
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      t = fetch_1_0(c_5, t);
    }
  t = term_a_31;
  t = echo_0_0(t);
  t = term_y_28;
  g_26 = t;
  t = term_b_29;
  h_26 = t;
  t = term_b_31;
  t = m_6(g_26, h_26, t);
  t = reverse_acc_2_0(_id, d_5, t);
  t = map_1_0(f_5, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm v_68 (ATerm), ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,a_1 = NULL,b_1 = NULL;
  m_26 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      k_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_26);
  j_26 = t;
  t = k_26;
  t = v_68(t);
  l_26 = t;
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, l_26);
  a_1 = t;
  t = SSLsetAnnotations(a_1, j_26);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm p_26 (ATerm t)
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_76, _id, t);
        ;
        LocalPopChoice(d_31);
      }
    else
      {
        t = c_31;
        t = Cons_2_0(_id, p_26, t);
      }
    return(t);
  }
  t = p_26(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
  r_26 = t;
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_26;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_31 = ATgetFirst((ATermList) t);
                ATerm h_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_26;
          }
        ;
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        t = (ATerm) ATinsert(ATempty, r_26);
      }
    s_26 = t;
    t = term_v_26;
    t_26 = t;
    t = SSL_printnl(t_26, s_26);
    t = r_26;
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
ATerm l_6 (ATerm y_41, ATerm z_41, ATerm t)
{
  t = SSL_strcat(y_41, z_41);
  return(t);
}
ATerm debug_1_0 (ATerm b_72 (ATerm), ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL;
  x_26 = t;
  t = b_72(t);
  y_26 = t;
  t = term_i_17;
  z_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_26), y_26);
  a_27 = t;
  t = SSL_printnl(z_26, a_27);
  t = x_26;
  return(t);
}
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm b_27 (ATerm t)
  {
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(j_31);
      }
    else
      {
        t = i_31;
        t = Cons_2_0(w_75, b_27, t);
      }
    return(t);
  }
  t = b_27(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_27 = NULL;
      h_27 = t;
      t = SSL_is_string(h_27);
      ;
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      {
        ATerm p_31 = t;
        int q_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_5, t);
            ;
            LocalPopChoice(q_31);
          }
        else
          {
            t = p_31;
            {
              ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
              l_27 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_27 = ATgetArgument(t, 0);
                  t = m_27;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_27 = ATgetArgument(t, 0);
                      t = m_27;
                      {
                        ATerm r_31 = t;
                        int s_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(s_31);
                          }
                        else
                          {
                            t = r_31;
                            t = debug_1_0(k_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_27 = NULL,w_27 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_27 = ATgetArgument(t, 0);
                          n_27 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_27;
                      t = eval_config_0_0(t);
                      v_27 = t;
                      t = n_27;
                      t = eval_config_0_0(t);
                      w_27 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_27, w_27);
                      t = l_6(v_27, w_27, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm m_6 (ATerm y_46, ATerm z_46, ATerm t)
{
  t = SSL_table_get(y_46, z_46);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL;
  c_28 = t;
  t = term_u_28;
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_28, c_28);
  t = m_6(d_28, c_28, t);
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_28 = NULL,f_28 = NULL;
        t = eval_config_0_0(t);
        e_28 = t;
        t = term_u_28;
        f_28 = t;
        t = SSL_table_put(f_28, c_28, e_28);
        t = e_28;
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
      }
  }
  return(t);
}
ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL;
  t = term_v_31;
  g_28 = t;
  t = term_x_18;
  h_28 = t;
  t = term_w_31;
  t = p_6(g_28, h_28, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_x_31;
  return(t);
}
ATerm w_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL;
  t = term_v_31;
  i_28 = t;
  t = term_x_18;
  j_28 = t;
  t = term_w_31;
  t = p_6(i_28, j_28, t);
  t = term_y_31;
  k_28 = t;
  t = term_x_18;
  l_28 = t;
  t = term_z_31;
  t = p_6(k_28, l_28, t);
  t = term_a_32;
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_5, p_5, q_5, t);
      ;
      LocalPopChoice(d_32);
    }
  else
    {
      t = c_32;
      t = Option_3_0(w_5, x_5, j_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,c_1 = NULL,d_1 = NULL;
  r_28 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_28 = ATgetFirst((ATermList) t);
      o_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_28);
  m_28 = t;
  t = n_28;
  t = o_63(t);
  p_28 = t;
  t = o_28;
  t = p_63(t);
  q_28 = t;
  d_1 = t;
  t = (ATerm) ATinsert(CheckATermList(q_28), p_28);
  c_1 = t;
  t = SSLsetAnnotations(c_1, m_28);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL;
  w_28 = t;
  t = term_l_29;
  x_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_29, w_28);
  t = p_6(x_28, w_28, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, w_28);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm v_28 = NULL;
  v_28 = t;
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_32;
        t = q_93(t);
        ;
        LocalPopChoice(f_32);
      }
    else
      {
        t = e_32;
      }
    t = v_28;
    {
      ATerm o_6 (ATerm t)
      {
        ATerm h_32 = t;
        int i_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_32 = t;
            int k_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(k_32);
              }
            else
              {
                t = j_32;
                t = q_93(t);
                t = Cons_2_0(_id, o_6, t);
              }
            ;
            LocalPopChoice(i_32);
          }
        else
          {
            t = h_32;
            {
              ATerm z_28 = NULL,a_29 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_28 = ATgetFirst((ATermList) t);
                  a_29 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_29), (ATerm) ATmakeAppl(sym_Undefined_1, z_28));
            }
          }
        return(t);
      }
      t = Cons_2_0(k_6, o_6, t);
    }
  }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm t_29 = NULL;
  t_29 = t;
  if(match_string(t, "--help"))
    {
      t = t_29;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_29;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_29;
        }
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL;
  t = term_w_30;
  v_29 = t;
  t = term_x_18;
  w_29 = t;
  t = term_l_32;
  t = p_6(v_29, w_29, t);
  t = term_m_32;
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm c_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL;
  h_29 = t;
  t = term_y_28;
  p_29 = t;
  t = term_b_29;
  q_29 = t;
  t = (ATerm) ATempty;
  r_29 = t;
  t = SSL_table_put(p_29, q_29, r_29);
  t = h_29;
  {
    ATerm q_6 (ATerm t)
    {
      ATerm o_32 = t;
      int p_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_93(t);
          ;
          LocalPopChoice(p_32);
        }
      else
        {
          t = o_32;
          {
            ATerm q_32 = t;
            int r_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(v_6, a_7, b_7, t);
                ;
                LocalPopChoice(r_32);
              }
            else
              {
                t = q_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_6, t);
    {
      ATerm s_32 = t;
      int t_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_30 = NULL;
          f_30 = t;
          {
            ATerm u_32 = t;
            int v_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_8 = NULL;
                t = f_30;
                {
                  ATerm w_32 = t;
                  int x_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_w_30;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(x_32);
                    }
                  else
                    {
                      t = w_32;
                      t = fetch_1_0(c_7, t);
                    }
                  t = f_30;
                  t = default_system_usage_0_0(t);
                  t = term_i_27;
                  h_8 = t;
                  t = SSL_exit(h_8);
                }
                ;
                LocalPopChoice(v_32);
              }
            else
              {
                t = u_32;
                {
                  ATerm e_9 = NULL;
                  t = term_v_31;
                  t = get_config_0_0(t);
                  t = f_30;
                  t = default_system_about_0_0(t);
                  t = term_i_27;
                  e_9 = t;
                  t = SSL_exit(e_9);
                }
              }
          }
          ;
          LocalPopChoice(t_32);
        }
      else
        {
          t = s_32;
          {
            ATerm y_32 = t;
            int z_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
                ATerm e_7 (ATerm t)
                {
                  ATerm f_7 (ATerm t)
                  {
                    if(((i_29 != NULL) && (i_29 != t)))
                      _fail(t);
                    else
                      i_29 = t;
                    return(t);
                  }
                  t = Undefined_1_0(f_7, t);
                  return(t);
                }
                t = fetch_1_0(e_7, t);
                t = term_i_17;
                g_30 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_29)), term_a_33);
                h_30 = t;
                t = SSL_printnl(g_30, h_30);
                t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_29)), term_a_33));
                t = default_system_usage_0_0(t);
                t = term_b_9;
                i_30 = t;
                t = SSL_exit(i_30);
                ;
                LocalPopChoice(z_32);
              }
            else
              {
                t = y_32;
              }
          }
        }
      o_29 = t;
      t = term_y_28;
      s_29 = t;
      t = SSL_table_destroy(s_29);
      t = o_29;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  t = parse_options_1_0(u_91, t);
  l_30 = t;
  t = term_b_33;
  m_30 = t;
  t = SSL_table_create(m_30);
  t = term_b_33;
  n_30 = t;
  t = term_c_33;
  o_30 = t;
  t = SSL_table_put(n_30, o_30, l_30);
  t = l_30;
  t = w_91(t);
  {
    ATerm d_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_91, t);
        ;
        LocalPopChoice(e_33);
      }
    else
      {
        t = d_33;
        {
          ATerm f_33 = t;
          int g_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_33);
            }
          else
            {
              t = f_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
            ;
            LocalPopChoice(k_33);
          }
        else
          {
            t = j_33;
            {
              ATerm l_33 = t;
              int m_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(k_7, m_7, n_7, t);
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
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(o_33);
                      }
                    else
                      {
                        t = n_33;
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
ATerm i_7 (ATerm t)
{
  t = xtc_io_1_0(o_7, t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  t = term_p_33;
  p_30 = t;
  t = term_x_18;
  q_30 = t;
  t = term_q_33;
  t = p_6(p_30, q_30, t);
  t = term_r_33;
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_s_33;
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm t_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_33 = t;
      int w_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(w_33);
        }
      else
        {
          t = v_33;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(u_33);
      t = xtc_transform_file_2_0(p_7, r_7, t);
    }
  else
    {
      t = t_33;
      t = xtc_transform_term_2_0(s_7, w_7, t);
    }
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
        t = xtc_transform_file_2_0(x_7, build_pp_tables_0_0, t);
      }
    else
      {
        t = x_33;
        t = xtc_transform_term_2_0(c_8, build_pp_tables_0_0, t);
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
          t = xtc_transform_file_2_0(i_8, j_8, t);
        }
      else
        {
          t = b_34;
          t = xtc_transform_term_2_0(k_8, l_8, t);
        }
    }
  }
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(g_7, default_usage_0_0, _id, i_7, t);
  return(t);
}
