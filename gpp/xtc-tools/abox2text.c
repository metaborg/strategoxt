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
ATerm term_w_36;
ATerm term_l_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_c_34;
ATerm term_z_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_g_32;
ATerm term_j_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_w_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_j_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_y_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_e_28;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_r_27;
ATerm term_i_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_q_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_y_25;
ATerm term_p_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_c_23;
ATerm term_w_22;
ATerm term_l_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_p_20;
ATerm term_y_19;
ATerm term_w_19;
ATerm term_i_19;
ATerm term_v_18;
ATerm term_o_18;
ATerm term_h_18;
ATerm term_y_17;
ATerm term_s_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_i_12;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_y_9;
ATerm term_x_8;
ATerm term_d_8;
ATerm term_e_7;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_n_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_k_5;
ATerm term_j_5;
ATerm term_i_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_z_4;
ATerm term_y_4;
ATerm term_v_4;
ATerm term_s_4;
void init_constant_terms (void)
{
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_5, term_v_4, term_j_5);
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_5, term_m_5, term_n_5);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_5, term_q_5, term_r_5);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_5, term_u_5, term_v_5);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_5, term_y_5, term_z_5);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_6, term_c_6, term_d_6);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_6, term_g_6, term_h_6);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_6, term_k_6, term_l_6);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_6, term_o_6, term_p_6);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_6, term_s_6, term_t_6);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_6, term_e_7, term_d_8);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_9, term_j_11, term_k_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_11, term_r_11, term_i_12);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_n_14);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_r_15);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_s_17, term_y_17);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_18, term_v_18, term_i_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_p_20, term_w_20);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_21, term_d_21, term_e_21);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_21, term_j_21, term_k_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_21, term_v_21, term_w_21);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_22, term_c_23, term_b_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_24, term_m_24, term_n_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_24, term_u_24, term_v_24);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_25, term_p_25, term_y_25);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_26, term_h_26, term_i_26);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_26, term_y_26, term_z_26);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_27, term_d_27, term_i_27);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym__2, term_e_28, term_l_28);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__2, term_e_28, term_s_29);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_c_31, term_r_30);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym__2, term_s_4, term_q_32);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_32);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym__2, term_x_32, term_a_31);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym__2, term_m_34, term_n_34);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym__2, term_u_35, term_a_31);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym__2, term_x_35, term_a_31);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym__2, term_c_34, term_a_31);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym__3, term_m_34, term_n_34, (ATerm) ATempty);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm subt_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm pass_width_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm r_65 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm);
ATerm close_file_0_0 (ATerm);
ATerm execvp_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm x_69 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm waitpid_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm g_64 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm error_0_0 (ATerm);
ATerm xtc_find_loc_0_0 (ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm e_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm y_78 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm h_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm c_81 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm e_81 (ATerm), ATerm);
ATerm set_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm o_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm get_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm n_81 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm fopen_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm can_read_file_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm getenv_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm assert_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm k_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm access_0_0 (ATerm);
ATerm file_exists_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm stdin_0_0 (ATerm);
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm);
ATerm abox2text_0_0 (ATerm);
ATerm copy_file_0_0 (ATerm);
ATerm stderr_0_0 (ATerm);
ATerm stdout_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm z_79 (ATerm), ATerm);
ATerm remove_file_0_0 (ATerm);
ATerm restore_always_2_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm y_79 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm d_83 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm e_83 (ATerm), ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm abox2text_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm);
ATerm crush_2_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_80 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm f_85 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm b_87 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm a_87 (ATerm), ATerm);
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm v_69 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm a_86 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm b_70 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm d_65 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_69 (ATerm), ATerm);
ATerm is_string_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm f_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm f_87 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm d_87 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm c_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm);
ATerm io_abox2text_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_6 != NULL) && (w_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_6 = ATgetArgument(t, 0);
      if(((x_6 != NULL) && (x_6 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_4 = t;
    int r_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(w_6), not_null(x_6));
        ;
        LocalPopChoice(r_4);
      }
    else
      {
        t = q_4;
        t = SSL_subtr(not_null(w_6), not_null(x_6));
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
  if(((y_6 != NULL) && (y_6 != t)))
    _fail(t);
  else
    y_6 = t;
  if(((z_6 != NULL) && (z_6 != t)))
    _fail(t);
  else
    z_6 = t;
  t = term_s_4;
  {
    ATerm t_4 = t;
    int u_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(u_4);
      }
    else
      {
        t = t_4;
        t = term_v_4;
      }
    if(((a_7 != NULL) && (a_7 != t)))
      _fail(t);
    else
      a_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_7), term_v_4);
    t = subt_0_0(t);
    t = int_to_string_0_0(t);
    if(((b_7 != NULL) && (b_7 != t)))
      _fail(t);
    else
      b_7 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_7)), term_s_4);
  }
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm w_4 = t;
  int x_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_4;
      t = get_config_0_0(t);
      LocalPopChoice(x_4);
      {
        ATerm c_7 = NULL,d_7 = NULL;
        if(((c_7 != NULL) && (c_7 != t)))
          _fail(t);
        else
          c_7 = t;
        if(((d_7 != NULL) && (d_7 != t)))
          _fail(t);
        else
          d_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_7)), term_y_4);
      }
    }
  else
    {
      t = w_4;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL;
  if(((f_7 != NULL) && (f_7 != t)))
    _fail(t);
  else
    f_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_7 = NULL,i_7 = NULL;
      t = not_null(f_7);
      if(((h_7 != NULL) && (h_7 != t)))
        _fail(t);
      else
        h_7 = t;
      t = term_z_4;
      t = ReadFromFile_0_0(t);
      if(((i_7 != NULL) && (i_7 != t)))
        _fail(t);
      else
        i_7 = t;
    }
  else
    {
      ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((g_7 != NULL) && (g_7 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            g_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(g_7);
      if(((j_7 != NULL) && (j_7 != t)))
        _fail(t);
      else
        j_7 = t;
      t = not_null(f_7);
      if(((k_7 != NULL) && (k_7 != t)))
        _fail(t);
      else
        k_7 = t;
      t = not_null(j_7);
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
      if(((l_7 != NULL) && (l_7 != t)))
        _fail(t);
      else
        l_7 = t;
    }
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_5 = ATgetArgument(t, 0);
      if(match_cons(a_5, sym_Stream_1))
        {
          if(((m_7 != NULL) && (m_7 != ATgetArgument(a_5, 0))))
            _fail(ATgetArgument(a_5, 0));
          else
            m_7 = ATgetArgument(a_5, 0);
        }
      else
        _fail(t);
      if(((n_7 != NULL) && (n_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(m_7), not_null(n_7));
  if(((o_7 != NULL) && (o_7 != t)))
    _fail(t);
  else
    o_7 = t;
  if(((p_7 != NULL) && (p_7 != t)))
    _fail(t);
  else
    p_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_7));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm r_65 (ATerm), ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((q_7 != NULL) && (q_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_7 = ATgetArgument(t, 0);
      if(((r_7 != NULL) && (r_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(q_7);
  if(((s_7 != NULL) && (s_7 != t)))
    _fail(t);
  else
    s_7 = t;
  if(((t_7 != NULL) && (t_7 != t)))
    _fail(t);
  else
    t_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_7), term_b_5);
  t = open_stream_0_0(t);
  if(((u_7 != NULL) && (u_7 != t)))
    _fail(t);
  else
    u_7 = t;
  if(((v_7 != NULL) && (v_7 != t)))
    _fail(t);
  else
    v_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_7), not_null(r_7));
  t = r_65(t);
  t = fclose_0_0(t);
  t = not_null(r_7);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
  if(((w_7 != NULL) && (w_7 != t)))
    _fail(t);
  else
    w_7 = t;
  if(((x_7 != NULL) && (x_7 != t)))
    _fail(t);
  else
    x_7 = t;
  t = xtc_new_file_0_0(t);
  if(((y_7 != NULL) && (y_7 != t)))
    _fail(t);
  else
    y_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_7), not_null(w_7));
  t = WriteToBinaryFile_0_0(t);
  t = not_null(y_7);
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_7));
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(a_84, b_84, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm close_file_0_0 (ATerm t)
{
  ATerm z_7 = NULL;
  if(((z_7 != NULL) && (z_7 != t)))
    _fail(t);
  else
    z_7 = t;
  t = SSL_close_file(not_null(z_7));
  return(t);
}
ATerm execvp_0_0 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_8 != NULL) && (a_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_8 = ATgetArgument(t, 0);
      if(((b_8 != NULL) && (b_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(a_8), not_null(b_8));
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  t = map_1_0(explode_string_0_0, t);
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm int_to_string_0_0 (ATerm t)
{
  ATerm c_8 = NULL;
  if(((c_8 != NULL) && (c_8 != t)))
    _fail(t);
  else
    c_8 = t;
  t = SSL_int_to_string(not_null(c_8));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
  if(((e_8 != NULL) && (e_8 != t)))
    _fail(t);
  else
    e_8 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      f_8 = ATgetArgument(t, 0);
      {
        ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
        t = not_null(f_8);
        if(((i_8 != NULL) && (i_8 != t)))
          _fail(t);
        else
          i_8 = t;
        t = not_null(e_8);
        if(((j_8 != NULL) && (j_8 != t)))
          _fail(t);
        else
          j_8 = t;
        t = not_null(i_8);
        t = int_to_string_0_0(t);
        if(((k_8 != NULL) && (k_8 != t)))
          _fail(t);
        else
          k_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_5), not_null(k_8)), term_c_5);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((f_8 != NULL) && (f_8 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            f_8 = ATgetArgument(t, 0);
          if(((g_8 != NULL) && (g_8 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            g_8 = ATgetArgument(t, 1);
          if(((h_8 != NULL) && (h_8 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            h_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(f_8);
      if(((l_8 != NULL) && (l_8 != t)))
        _fail(t);
      else
        l_8 = t;
      t = not_null(g_8);
      if(((m_8 != NULL) && (m_8 != t)))
        _fail(t);
      else
        m_8 = t;
      t = not_null(h_8);
      if(((n_8 != NULL) && (n_8 != t)))
        _fail(t);
      else
        n_8 = t;
      t = not_null(e_8);
      if(((o_8 != NULL) && (o_8 != t)))
        _fail(t);
      else
        o_8 = t;
      t = not_null(m_8);
      t = int_to_string_0_0(t);
      if(((p_8 != NULL) && (p_8 != t)))
        _fail(t);
      else
        p_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(n_8)), term_f_5), not_null(p_8)), term_e_5), not_null(l_8));
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm q_8 = NULL;
  ATerm b_0 (ATerm t)
  {
    t = x_69(t);
    if(((q_8 != NULL) && (q_8 != t)))
      _fail(t);
    else
      q_8 = t;
    return(t);
  }
  t = fetch_1_0(b_0, t);
  t = not_null(q_8);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm r_8 = NULL;
  if(((r_8 != NULL) && (r_8 != t)))
    _fail(t);
  else
    r_8 = t;
  {
    ATerm g_5 = t;
    int h_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_27), term_a_27), term_j_26), term_f_26), term_k_25), term_o_24), term_c_24), term_l_22), term_p_21), term_h_21), term_x_20), term_w_19), term_h_18), term_f_17), term_q_14), term_s_13), term_l_11), term_x_8), term_u_6), term_q_6), term_m_6), term_i_6), term_e_6), term_a_6), term_w_5), term_s_5), term_o_5), term_k_5);
        {
          ATerm f_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm s_27 = ATgetArgument(t, 0);
                if(((r_8 != NULL) && (r_8 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  r_8 = ATgetArgument(t, 1);
                {
                  ATerm t_27 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(f_0, t);
        }
        ;
        LocalPopChoice(h_5);
      }
    else
      {
        t = g_5;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(r_8));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm s_8 = NULL;
  if(((s_8 != NULL) && (s_8 != t)))
    _fail(t);
  else
    s_8 = t;
  {
    ATerm n_0 (ATerm t)
    {
      ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm u_27 = ATgetArgument(t, 0);
          if(((t_8 != NULL) && (t_8 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_8 = ATgetArgument(t, 1);
          {
            ATerm v_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = not_null(t_8);
      {
        ATerm w_27 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_27;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        if(((u_8 != NULL) && (u_8 != t)))
          _fail(t);
        else
          u_8 = t;
        if(((v_8 != NULL) && (v_8 != t)))
          _fail(t);
        else
          v_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_8)), term_y_27));
        t = printnl_0_0(t);
      }
      return(t);
    }
    t = try_1_0(n_0, t);
    t = not_null(s_8);
  }
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm w_8 = NULL;
  if(((w_8 != NULL) && (w_8 != t)))
    _fail(t);
  else
    w_8 = t;
  t = SSL_waitpid(not_null(w_8));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL;
  if(((y_8 != NULL) && (y_8 != t)))
    _fail(t);
  else
    y_8 = t;
  t = fork_0_0(t);
  if(((z_8 != NULL) && (z_8 != t)))
    _fail(t);
  else
    z_8 = t;
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_9 = NULL;
        if(((a_9 != NULL) && (a_9 != t)))
          _fail(t);
        else
          a_9 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(y_8);
        t = e_64(t);
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_8), not_null(y_8));
        t = f_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm b_9 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm c_9 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((c_9 != NULL) && (c_9 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          c_9 = ATgetArgument(t, 0);
        if(((b_9 != NULL) && (b_9 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          b_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(c_9);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm b_28 = ATgetArgument(t, 0);
        if(((ATgetType(b_28) != AT_INT) || (ATgetInt((ATermInt) b_28) != 0)))
          _fail(t);
        {
          ATerm c_28 = ATgetArgument(t, 1);
        }
        {
          ATerm d_28 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(b_9);
    return(t);
  }
  t = fork_2_0(g_64, o_0, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_9 != NULL) && (d_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_9 = ATgetArgument(t, 0);
      if(((e_9 != NULL) && (e_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), not_null(e_9));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(p_0, t);
  }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm f_9 = NULL;
  if(((f_9 != NULL) && (f_9 != t)))
    _fail(t);
  else
    f_9 = t;
  t = SSL_table_keys(not_null(f_9));
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm g_9 = NULL;
  if(((g_9 != NULL) && (g_9 != t)))
    _fail(t);
  else
    g_9 = t;
  t = table_keys_0_0(t);
  {
    ATerm q_0 (ATerm t)
    {
      ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
      if(((h_9 != NULL) && (h_9 != t)))
        _fail(t);
      else
        h_9 = t;
      if(((i_9 != NULL) && (i_9 != t)))
        _fail(t);
      else
        i_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_9), not_null(h_9));
      t = table_get_0_0(t);
      if(((j_9 != NULL) && (j_9 != t)))
        _fail(t);
      else
        j_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_9), not_null(j_9));
      return(t);
    }
    t = map_1_0(q_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
    if(((k_9 != NULL) && (k_9 != t)))
      _fail(t);
    else
      k_9 = t;
    if(((l_9 != NULL) && (l_9 != t)))
      _fail(t);
    else
      l_9 = t;
    t = term_s_4;
    t = get_config_0_0(t);
    if(((m_9 != NULL) && (m_9 != t)))
      _fail(t);
    else
      m_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), term_p_25);
    t = geq_0_0(t);
    t = not_null(k_9);
    t = d_81(t);
    return(t);
  }
  t = try_1_0(r_0, t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
  if(((n_9 != NULL) && (n_9 != t)))
    _fail(t);
  else
    n_9 = t;
  if(((o_9 != NULL) && (o_9 != t)))
    _fail(t);
  else
    o_9 = t;
  if(((p_9 != NULL) && (p_9 != t)))
    _fail(t);
  else
    p_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_27, not_null(p_9));
  t = printnl_0_0(t);
  t = not_null(n_9);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL;
  if(((q_9 != NULL) && (q_9 != t)))
    _fail(t);
  else
    q_9 = t;
  if(((r_9 != NULL) && (r_9 != t)))
    _fail(t);
  else
    r_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_28, (ATerm) ATmakeAppl(sym_Tool_1, not_null(q_9)));
  t = table_get_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_28 = ATgetFirst((ATermList) t);
      if(match_cons(f_28, sym__2))
        {
          if(((s_9 != NULL) && (s_9 != ATgetArgument(f_28, 0))))
            _fail(ATgetArgument(f_28, 0));
          else
            s_9 = ATgetArgument(f_28, 0);
          if(((t_9 != NULL) && (t_9 != ATgetArgument(f_28, 1))))
            _fail(ATgetArgument(f_28, 1));
          else
            t_9 = ATgetArgument(f_28, 1);
        }
      else
        _fail(t);
      {
        ATerm g_28 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(t_9);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_9 != NULL) && (u_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_9 = ATgetArgument(t, 0);
      if(((v_9 != NULL) && (v_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((w_9 != NULL) && (w_9 != t)))
    _fail(t);
  else
    w_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_28, (ATerm) ATmakeAppl(sym_Tool_1, not_null(u_9)));
  t = table_get_0_0(t);
  {
    ATerm s_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if(((v_9 != NULL) && (v_9 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_9 = ATgetArgument(t, 0);
          if(((x_9 != NULL) && (x_9 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            x_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(s_0, t);
    t = not_null(x_9);
  }
  return(t);
}
ATerm filter_1_0 (ATerm e_77 (ATerm), ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = filter_1_0(e_77, t);
              return(t);
            }
            t = Cons_2_0(e_77, t_0, t);
            ;
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            {
              ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL;
              if(((z_9 != NULL) && (z_9 != t)))
                _fail(t);
              else
                z_9 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((a_10 != NULL) && (a_10 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    a_10 = ATgetFirst((ATermList) t);
                  if(((b_10 != NULL) && (b_10 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    b_10 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(b_10);
              if(((c_10 != NULL) && (c_10 != t)))
                _fail(t);
              else
                c_10 = t;
              t = filter_1_0(e_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm y_78 (ATerm), ATerm t)
{
  ATerm d_10 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = y_78(t);
      t = d_10(t);
      return(t);
    }
    t = try_1_0(u_0, t);
    return(t);
  }
  t = d_10(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm e_10 = NULL;
  if(((e_10 != NULL) && (e_10 != t)))
    _fail(t);
  else
    e_10 = t;
  {
    ATerm v_0 (ATerm t)
    {
      t = term_m_28;
      t = table_get_0_0(t);
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm n_28 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_28;
          }
      }
      return(t);
    }
    t = repeat_1_0(v_0, t);
    t = not_null(e_10);
  }
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
  if(((f_10 != NULL) && (f_10 != t)))
    _fail(t);
  else
    f_10 = t;
  if(((g_10 != NULL) && (g_10 != t)))
    _fail(t);
  else
    g_10 = t;
  if(((h_10 != NULL) && (h_10 != t)))
    _fail(t);
  else
    h_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_27, (ATerm) ATinsert(ATempty, not_null(h_10)));
  t = printnl_0_0(t);
  t = not_null(f_10);
  return(t);
}
ATerm say_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm i_10 = NULL;
  if(((i_10 != NULL) && (i_10 != t)))
    _fail(t);
  else
    i_10 = t;
  t = h_65(t);
  t = debug_0_0(t);
  t = not_null(i_10);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
    if(((j_10 != NULL) && (j_10 != t)))
      _fail(t);
    else
      j_10 = t;
    if(((k_10 != NULL) && (k_10 != t)))
      _fail(t);
    else
      k_10 = t;
    t = term_s_4;
    t = get_config_0_0(t);
    if(((l_10 != NULL) && (l_10 != t)))
      _fail(t);
    else
      l_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_10), term_j_11);
    t = geq_0_0(t);
    t = not_null(j_10);
    t = c_81(t);
    return(t);
  }
  t = try_1_0(w_0, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
    if(((m_10 != NULL) && (m_10 != t)))
      _fail(t);
    else
      m_10 = t;
    if(((n_10 != NULL) && (n_10 != t)))
      _fail(t);
    else
      n_10 = t;
    t = term_s_4;
    t = get_config_0_0(t);
    if(((o_10 != NULL) && (o_10 != t)))
      _fail(t);
    else
      o_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_10), term_u_5);
    t = geq_0_0(t);
    t = not_null(m_10);
    t = e_81(t);
    return(t);
  }
  t = try_1_0(x_0, t);
  return(t);
}
ATerm set_0_0 (ATerm t)
{
  t = table_put_0_0(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm p_10 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_10 != NULL) && (p_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_10 = ATgetArgument(t, 0);
      if(((p_10 != NULL) && (p_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((q_10 != NULL) && (q_10 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        q_10 = ATgetFirst((ATermList) t);
      if(((r_10 != NULL) && (r_10 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        r_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((s_10 != NULL) && (s_10 != t)))
    _fail(t);
  else
    s_10 = t;
  t = t_73(t);
  {
    ATerm y_0 (ATerm t)
    {
      ATerm t_10 = NULL;
      if(((t_10 != NULL) && (t_10 != t)))
        _fail(t);
      else
        t_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_10), not_null(t_10));
      t = s_73(t);
      return(t);
    }
    t = fetch_1_0(y_0, t);
    t = not_null(r_10);
  }
  return(t);
}
ATerm union_1_0 (ATerm o_73 (ATerm), ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_10 != NULL) && (v_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_10 = ATgetArgument(t, 0);
      if(((u_10 != NULL) && (u_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(v_10);
  {
    ATerm w_10 (ATerm t)
    {
      ATerm o_28 = t;
      int p_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(u_10);
          ;
          LocalPopChoice(p_28);
        }
      else
        {
          t = o_28;
          {
            ATerm q_28 = t;
            int r_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_0 (ATerm t)
                {
                  t = not_null(u_10);
                  return(t);
                }
                t = HdMember_p__2_0(o_73, z_0, t);
                t = w_10(t);
                ;
                LocalPopChoice(r_28);
              }
            else
              {
                t = q_28;
                t = Cons_2_0(_id, w_10, t);
              }
          }
        }
      return(t);
    }
    t = w_10(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
ATerm get_0_0 (ATerm t)
{
  t = table_get_0_0(t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((x_10 != NULL) && (x_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_10 = ATgetArgument(t, 0);
      if(((y_10 != NULL) && (y_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_10 = ATgetArgument(t, 1);
      if(((z_10 != NULL) && (z_10 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        z_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((a_11 != NULL) && (a_11 != t)))
    _fail(t);
  else
    a_11 = t;
  if(((b_11 != NULL) && (b_11 != t)))
    _fail(t);
  else
    b_11 = t;
  if(((c_11 != NULL) && (c_11 != t)))
    _fail(t);
  else
    c_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), not_null(y_10));
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = (ATerm) ATempty;
      }
    if(((d_11 != NULL) && (d_11 != t)))
      _fail(t);
    else
      d_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), not_null(z_10));
    t = union_0_0(t);
    if(((e_11 != NULL) && (e_11 != t)))
      _fail(t);
    else
      e_11 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(x_10), not_null(y_10), not_null(e_11));
    t = set_0_0(t);
    t = not_null(a_11);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm n_81 (ATerm), ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_11 != NULL) && (g_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_11 = ATgetArgument(t, 0);
      if(((f_11 != NULL) && (f_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(f_11);
  {
    ATerm a_1 (ATerm t)
    {
      ATerm h_11 = NULL,i_11 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((h_11 != NULL) && (h_11 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            h_11 = ATgetArgument(t, 0);
          if(((i_11 != NULL) && (i_11 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(g_11), not_null(h_11), not_null(i_11));
      t = n_81(t);
      return(t);
    }
    t = map_1_0(a_1, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_11 (ATerm m_11, ATerm n_11, ATerm t)
  {
    ATerm o_11 = NULL;
    t = not_null(m_11);
    if(((o_11 != NULL) && (o_11 != t)))
      _fail(t);
    else
      o_11 = t;
    t = SSL_fclose(not_null(o_11));
    return(t);
  }
  ATerm w_11 (ATerm q_11, ATerm t)
  {
    ATerm s_11 = NULL;
    t = not_null(q_11);
    if(((s_11 != NULL) && (s_11 != t)))
      _fail(t);
    else
      s_11 = t;
    t = SSL_fclose(not_null(s_11));
    return(t);
  }
  ATerm t_11 = NULL,u_11 = NULL;
  if(((u_11 != NULL) && (u_11 != t)))
    _fail(t);
  else
    u_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_11 = ATgetArgument(t, 0);
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_11(not_null(t_11), not_null(u_11), t);
            ;
            LocalPopChoice(v_28);
          }
        else
          {
            t = u_28;
            t = w_11(not_null(u_11), t);
          }
      }
    }
  else
    {
      t = w_11(not_null(u_11), t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm x_11 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((x_11 != NULL) && (x_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(x_11));
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_11 != NULL) && (y_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_11 = ATgetArgument(t, 0);
      if(((z_11 != NULL) && (z_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(y_11), not_null(z_11));
  if(((a_12 != NULL) && (a_12 != t)))
    _fail(t);
  else
    a_12 = t;
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_12));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL;
  t = SSL_stdin_stream();
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  if(((d_12 != NULL) && (d_12 != t)))
    _fail(t);
  else
    d_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_12));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  t = SSL_stdout_stream();
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  if(((f_12 != NULL) && (f_12 != t)))
    _fail(t);
  else
    f_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_12));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL;
  t = SSL_stderr_stream();
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  if(((h_12 != NULL) && (h_12 != t)))
    _fail(t);
  else
    h_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_12));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm j_12 = NULL;
  if(((j_12 != NULL) && (j_12 != t)))
    _fail(t);
  else
    j_12 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(j_12);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(j_12);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(j_12);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
  if(((k_12 != NULL) && (k_12 != t)))
    _fail(t);
  else
    k_12 = t;
  if(((l_12 != NULL) && (l_12 != t)))
    _fail(t);
  else
    l_12 = t;
  t = not_null(k_12);
  if(((m_12 != NULL) && (m_12 != t)))
    _fail(t);
  else
    m_12 = t;
  t = SSL_explode_term(not_null(m_12));
  if(match_cons(t, sym__2))
    {
      ATerm w_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_28 = ATgetArgument(t, 1);
        if(((ATgetType(x_28) == AT_LIST) && !(ATisEmpty(x_28))))
          {
            if(((o_12 != NULL) && (o_12 != ATgetFirst((ATermList) x_28))))
              _fail(ATgetFirst((ATermList) x_28));
            else
              o_12 = ATgetFirst((ATermList) x_28);
            if(((n_12 != NULL) && (n_12 != (ATerm) ATgetNext((ATermList) x_28))))
              _fail((ATerm) ATgetNext((ATermList) x_28));
            else
              n_12 = (ATerm) ATgetNext((ATermList) x_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(o_12);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_28 = ATgetArgument(t, 0);
      ATerm z_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
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
              ATerm b_1 (ATerm t)
              {
                ATerm p_12 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    if(((p_12 != NULL) && (p_12 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      p_12 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = not_null(p_12);
                return(t);
              }
              t = _2_0(b_1, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(d_29);
            }
          else
            {
              t = c_29;
              t = _2_0(is_string_0_0, _id, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL;
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
      if(((q_12 != NULL) && (q_12 != t)))
        _fail(t);
      else
        q_12 = t;
      if(((r_12 != NULL) && (r_12 != t)))
        _fail(t);
      else
        r_12 = t;
      t = not_null(q_12);
      if(((s_12 != NULL) && (s_12 != t)))
        _fail(t);
      else
        s_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_12), term_g_29);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      {
        ATerm c_1 (ATerm t)
        {
          t = term_h_29;
          return(t);
        }
        t = debug_1_0(c_1, t);
        _fail(t);
      }
    }
  if(((t_12 != NULL) && (t_12 != t)))
    _fail(t);
  else
    t_12 = t;
  t = read_from_stream_0_0(t);
  if(((u_12 != NULL) && (u_12 != t)))
    _fail(t);
  else
    u_12 = t;
  t = not_null(t_12);
  t = fclose_0_0(t);
  t = not_null(u_12);
  return(t);
}
ATerm can_read_file_0_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL;
  if(((v_12 != NULL) && (v_12 != t)))
    _fail(t);
  else
    v_12 = t;
  if(((w_12 != NULL) && (w_12 != t)))
    _fail(t);
  else
    w_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_12), (ATerm) ATinsert(ATempty, term_i_29));
  t = access_0_0(t);
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(k_29);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = j_29;
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_29 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_29;
              }
            {
              ATerm d_1 (ATerm t)
              {
                t = term_o_29;
                return(t);
              }
              t = debug_1_0(d_1, t);
            }
            ;
            LocalPopChoice(m_29);
          }
        else
          {
            t = l_29;
            {
              ATerm e_1 (ATerm t)
              {
                t = term_p_29;
                return(t);
              }
              t = debug_1_0(e_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
  if(((x_12 != NULL) && (x_12 != t)))
    _fail(t);
  else
    x_12 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        t = term_q_29;
        return(t);
      }
      t = debug_1_0(g_1, t);
      return(t);
    }
    t = if_verbose5_1_0(f_1, t);
    {
      ATerm r_29 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_28, (ATerm) ATmakeAppl(sym_Imported_1, not_null(x_12)));
          t = table_get_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_29;
        }
      if(((y_12 != NULL) && (y_12 != t)))
        _fail(t);
      else
        y_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_28, term_s_29, (ATerm) ATinsert(ATempty, not_null(x_12)));
      t = table_put_0_0(t);
      t = not_null(y_12);
      {
        ATerm h_1 (ATerm t)
        {
          ATerm i_1 (ATerm t)
          {
            t = term_t_29;
            return(t);
          }
          t = debug_1_0(i_1, t);
          return(t);
        }
        t = if_verbose4_1_0(h_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm k_1 (ATerm t)
            {
              t = term_u_29;
              return(t);
            }
            t = say_1_0(k_1, t);
            return(t);
          }
          t = if_verbose6_1_0(j_1, t);
          if(((z_12 != NULL) && (z_12 != t)))
            _fail(t);
          else
            z_12 = t;
          if(((a_13 != NULL) && (a_13 != t)))
            _fail(t);
          else
            a_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_28, not_null(a_13));
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm l_1 (ATerm t)
            {
              ATerm m_1 (ATerm t)
              {
                t = term_v_29;
                return(t);
              }
              t = say_1_0(m_1, t);
              return(t);
            }
            t = if_verbose6_1_0(l_1, t);
            t = (ATerm) ATmakeAppl(sym__3, term_e_28, (ATerm)ATmakeAppl(sym_Imported_1, not_null(x_12)), (ATerm) ATempty);
            t = table_put_0_0(t);
            {
              ATerm n_1 (ATerm t)
              {
                ATerm o_1 (ATerm t)
                {
                  t = term_u_29;
                  return(t);
                }
                t = say_1_0(o_1, t);
                return(t);
              }
              t = if_verbose4_1_0(n_1, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm b_13 = NULL;
  if(((b_13 != NULL) && (b_13 != t)))
    _fail(t);
  else
    b_13 = t;
  t = SSL_getenv(not_null(b_13));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_b_30;
            t = getenv_0_0(t);
            ;
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm c_13 = NULL;
  ATerm p_1 (ATerm t)
  {
    ATerm q_1 (ATerm t)
    {
      t = term_c_30;
      return(t);
    }
    t = debug_1_0(q_1, t);
    return(t);
  }
  t = if_verbose5_1_0(p_1, t);
  if(((c_13 != NULL) && (c_13 != t)))
    _fail(t);
  else
    c_13 = t;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_30;
        t = table_get_0_0(t);
        ;
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = not_null(c_13);
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          t = term_g_30;
          return(t);
        }
        t = debug_1_0(s_1, t);
        return(t);
      }
      t = if_verbose5_1_0(r_1, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          t = term_j_30;
          return(t);
        }
        t = debug_1_0(u_1, t);
        return(t);
      }
      t = if_verbose5_1_0(t_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm k_30 = t;
        int l_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(l_30);
          }
        else
          {
            t = k_30;
            t = xtc_find_loc_0_0(t);
          }
        {
          ATerm v_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              t = term_j_30;
              return(t);
            }
            t = debug_1_0(w_1, t);
            return(t);
          }
          t = if_verbose5_1_0(v_1, t);
        }
      }
      ;
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      {
        ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
        if(((d_13 != NULL) && (d_13 != t)))
          _fail(t);
        else
          d_13 = t;
        if(((e_13 != NULL) && (e_13 != t)))
          _fail(t);
        else
          e_13 = t;
        t = not_null(d_13);
        if(((f_13 != NULL) && (f_13 != t)))
          _fail(t);
        else
          f_13 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_30), not_null(f_13)), term_m_30);
        t = error_0_0(t);
        {
          ATerm x_1 (ATerm t)
          {
            t = term_e_28;
            t = table_getlist_0_0(t);
            {
              ATerm y_1 (ATerm t)
              {
                t = term_o_30;
                return(t);
              }
              t = debug_1_0(y_1, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(x_1, t);
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
ATerm xtc_command_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL;
  if(((g_13 != NULL) && (g_13 != t)))
    _fail(t);
  else
    g_13 = t;
  t = r_83(t);
  t = xtc_find_warning_0_0(t);
  if(((h_13 != NULL) && (h_13 != t)))
    _fail(t);
  else
    h_13 = t;
  t = not_null(g_13);
  if(((i_13 != NULL) && (i_13 != t)))
    _fail(t);
  else
    i_13 = t;
  if(((j_13 != NULL) && (j_13 != t)))
    _fail(t);
  else
    j_13 = t;
  if(((k_13 != NULL) && (k_13 != t)))
    _fail(t);
  else
    k_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), not_null(k_13));
  t = call_0_0(t);
  t = not_null(i_13);
  return(t);
}
ATerm assert_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_13 != NULL) && (l_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_13 = ATgetArgument(t, 0);
      if(((m_13 != NULL) && (m_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((n_13 != NULL) && (n_13 != t)))
    _fail(t);
  else
    n_13 = t;
  t = c_80(t);
  if(((o_13 != NULL) && (o_13 != t)))
    _fail(t);
  else
    o_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(o_13), not_null(l_13), not_null(m_13));
  t = table_push_0_0(t);
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_13), term_r_30);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((p_13 != NULL) && (p_13 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          p_13 = ATgetFirst((ATermList) t);
        if(((q_13 != NULL) && (q_13 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          q_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(o_13), term_r_30, (ATerm) ATinsert(CheckATermList(not_null(q_13)), (ATerm) ATinsert(CheckATermList(not_null(p_13)), not_null(l_13))));
    t = table_put_0_0(t);
    t = not_null(n_13);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm k_65 (ATerm), ATerm t)
{
  ATerm r_13 = NULL;
  if(((r_13 != NULL) && (r_13 != t)))
    _fail(t);
  else
    r_13 = t;
  t = k_65(t);
  {
    ATerm z_1 (ATerm t)
    {
      t = term_s_30;
      return(t);
    }
    t = debug_1_0(z_1, t);
    t = not_null(r_13);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm f_14 (ATerm v_13, ATerm t)
  {
    ATerm w_13 = NULL;
    t = not_null(v_13);
    if(((w_13 != NULL) && (w_13 != t)))
      _fail(t);
    else
      w_13 = t;
    t = not_null(v_13);
    {
      ATerm t_30 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm u_30 = ATgetArgument(t, 0);
              ATerm v_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_30;
        }
      {
        ATerm a_2 (ATerm t)
        {
          t = term_w_30;
          return(t);
        }
        t = obsolete_1_0(a_2, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_13), term_b_5);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm g_14 (ATerm x_13, ATerm y_13, ATerm z_13, ATerm t)
  {
    ATerm a_14 = NULL,b_14 = NULL;
    t = not_null(x_13);
    if(((a_14 != NULL) && (a_14 != t)))
      _fail(t);
    else
      a_14 = t;
    t = not_null(y_13);
    if(((b_14 != NULL) && (b_14 != t)))
      _fail(t);
    else
      b_14 = t;
    t = SSL_open_file(not_null(a_14), not_null(b_14));
    return(t);
  }
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
  if(((c_14 != NULL) && (c_14 != t)))
    _fail(t);
  else
    c_14 = t;
  if(match_cons(t, sym__2))
    {
      d_14 = ATgetArgument(t, 0);
      e_14 = ATgetArgument(t, 1);
      {
        ATerm x_30 = t;
        int y_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_14(not_null(c_14), t);
            ;
            LocalPopChoice(y_30);
          }
        else
          {
            t = x_30;
            t = g_14(not_null(d_14), not_null(e_14), not_null(c_14), t);
          }
      }
    }
  else
    {
      t = f_14(not_null(c_14), t);
    }
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_14 != NULL) && (h_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_14 = ATgetArgument(t, 0);
      if(((i_14 != NULL) && (i_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(h_14), not_null(i_14));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL;
  if(((j_14 != NULL) && (j_14 != t)))
    _fail(t);
  else
    j_14 = t;
  if(((k_14 != NULL) && (k_14 != t)))
    _fail(t);
  else
    k_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_14), (ATerm) ATinsert(ATempty, term_z_30));
  t = access_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL;
  if(((l_14 != NULL) && (l_14 != t)))
    _fail(t);
  else
    l_14 = t;
  t = term_a_31;
  t = new_0_0(t);
  if(((m_14 != NULL) && (m_14 != t)))
    _fail(t);
  else
    m_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), term_b_31);
  t = conc_strings_0_0(t);
  {
    ATerm b_2 (ATerm t)
    {
      t = file_exists_0_0(t);
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(b_2, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL;
  t = new_file_0_0(t);
  if(((o_14 != NULL) && (o_14 != t)))
    _fail(t);
  else
    o_14 = t;
  if(((p_14 != NULL) && (p_14 != t)))
    _fail(t);
  else
    p_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_14), term_b_5);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_14), term_a_31);
  {
    ATerm c_2 (ATerm t)
    {
      t = term_c_31;
      return(t);
    }
    t = assert_1_0(c_2, t);
    t = not_null(p_14);
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL;
  if(((r_14 != NULL) && (r_14 != t)))
    _fail(t);
  else
    r_14 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL;
      t = not_null(r_14);
      if(((t_14 != NULL) && (t_14 != t)))
        _fail(t);
      else
        t_14 = t;
      t = xtc_new_file_0_0(t);
      if(((u_14 != NULL) && (u_14 != t)))
        _fail(t);
      else
        u_14 = t;
      if(((v_14 != NULL) && (v_14 != t)))
        _fail(t);
      else
        v_14 = t;
      t = m_0(t);
      if(((w_14 != NULL) && (w_14 != t)))
        _fail(t);
      else
        w_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_14)), term_d_31));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(u_14);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_14));
    }
  else
    {
      ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((s_14 != NULL) && (s_14 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            s_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(s_14);
      if(((x_14 != NULL) && (x_14 != t)))
        _fail(t);
      else
        x_14 = t;
      t = not_null(r_14);
      if(((y_14 != NULL) && (y_14 != t)))
        _fail(t);
      else
        y_14 = t;
      t = not_null(x_14);
      t = xtc_new_file_0_0(t);
      if(((z_14 != NULL) && (z_14 != t)))
        _fail(t);
      else
        z_14 = t;
      if(((a_15 != NULL) && (a_15 != t)))
        _fail(t);
      else
        a_15 = t;
      t = m_0(t);
      if(((b_15 != NULL) && (b_15 != t)))
        _fail(t);
      else
        b_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_15), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_14)), term_d_31), not_null(x_14)), term_e_31));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(z_14);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_14));
    }
  return(t);
}
ATerm stdin_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdin_0)))
    _fail(t);
  return(t);
}
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  if(((f_15 != NULL) && (f_15 != t)))
    _fail(t);
  else
    f_15 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((d_15 != NULL) && (d_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((g_15 != NULL) && (g_15 != t)))
    _fail(t);
  else
    g_15 = t;
  t = SSLgetAnnotations(not_null(f_15));
  if(((c_15 != NULL) && (c_15 != t)))
    _fail(t);
  else
    c_15 = t;
  t = not_null(d_15);
  t = b_62(t);
  if(((e_15 != NULL) && (e_15 != t)))
    _fail(t);
  else
    e_15 = t;
  if(((i_15 != NULL) && (i_15 != t)))
    _fail(t);
  else
    i_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(e_15)), not_null(c_15));
  if(((h_15 != NULL) && (h_15 != t)))
    _fail(t);
  else
    h_15 = t;
  return(t);
}
ATerm xtc_transform_2_0 (ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_31 = t;
      int i_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(i_31);
        }
      else
        {
          t = h_31;
          t = stdin_0_0(t);
        }
      LocalPopChoice(g_31);
      t = xtc_transform_file_2_0(t_83, u_83, t);
    }
  else
    {
      t = f_31;
      t = xtc_transform_term_2_0(t_83, u_83, t);
    }
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    t = term_j_31;
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL;
    if(((j_15 != NULL) && (j_15 != t)))
      _fail(t);
    else
      j_15 = t;
    t = term_a_31;
    t = pass_width_0_0(t);
    if(((k_15 != NULL) && (k_15 != t)))
      _fail(t);
    else
      k_15 = t;
    t = not_null(j_15);
    if(((l_15 != NULL) && (l_15 != t)))
      _fail(t);
    else
      l_15 = t;
    t = term_a_31;
    t = pass_verbose_0_0(t);
    if(((m_15 != NULL) && (m_15 != t)))
      _fail(t);
    else
      m_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), not_null(m_15));
    t = conc_0_0(t);
    return(t);
  }
  t = xtc_transform_2_0(d_2, e_2, t);
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_15 != NULL) && (n_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_15 = ATgetArgument(t, 0);
      if(((o_15 != NULL) && (o_15 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_copy(not_null(n_15), not_null(o_15));
  return(t);
}
ATerm stderr_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stderr_0)))
    _fail(t);
  return(t);
}
ATerm stdout_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdout_0)))
    _fail(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm h_16 (ATerm s_15, ATerm t_15, ATerm t)
  {
    ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
    t = not_null(s_15);
    if(((u_15 != NULL) && (u_15 != t)))
      _fail(t);
    else
      u_15 = t;
    t = not_null(t_15);
    if(((v_15 != NULL) && (v_15 != t)))
      _fail(t);
    else
      v_15 = t;
    t = k_0(t);
    if(((w_15 != NULL) && (w_15 != t)))
      _fail(t);
    else
      w_15 = t;
    {
      ATerm k_31 = t;
      int l_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          ;
          LocalPopChoice(l_31);
        }
      else
        {
          t = k_31;
          t = stderr_0_0(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_15), not_null(w_15));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_15));
    }
    return(t);
  }
  ATerm i_16 (ATerm x_15, ATerm y_15, ATerm t)
  {
    ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
    t = not_null(x_15);
    if(((z_15 != NULL) && (z_15 != t)))
      _fail(t);
    else
      z_15 = t;
    t = not_null(y_15);
    if(((a_16 != NULL) && (a_16 != t)))
      _fail(t);
    else
      a_16 = t;
    t = k_0(t);
    if(((b_16 != NULL) && (b_16 != t)))
      _fail(t);
    else
      b_16 = t;
    {
      ATerm m_31 = t;
      if((PushChoice() == 0))
        {
          ATerm n_31 = t;
          int o_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
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
                    t = stderr_0_0(t);
                    ;
                    LocalPopChoice(q_31);
                  }
                else
                  {
                    t = p_31;
                    {
                      ATerm c_16 = NULL;
                      if(((c_16 != NULL) && (c_16 != t)))
                        _fail(t);
                      else
                        c_16 = t;
                      if(((z_15 != NULL) && (z_15 != t)))
                        _fail(t);
                      else
                        z_15 = t;
                      t = not_null(c_16);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_31;
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_15), not_null(b_16));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_15));
    }
    return(t);
  }
  ATerm d_16 = NULL,e_16 = NULL;
  if(((d_16 != NULL) && (d_16 != t)))
    _fail(t);
  else
    d_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((e_16 != NULL) && (e_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_16(not_null(e_16), not_null(d_16), t);
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
              t = i_16(not_null(e_16), not_null(d_16), t);
              ;
              LocalPopChoice(u_31);
            }
          else
            {
              t = t_31;
              {
                ATerm f_16 = NULL,g_16 = NULL;
                t = not_null(e_16);
                if(((f_16 != NULL) && (f_16 != t)))
                  _fail(t);
                else
                  f_16 = t;
                t = not_null(d_16);
                if(((g_16 != NULL) && (g_16 != t)))
                  _fail(t);
                else
                  g_16 = t;
                t = k_0(t);
                if(((f_16 != NULL) && (f_16 != t)))
                  _fail(t);
                else
                  f_16 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_16));
              }
            }
        }
      }
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm j_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_31 = ATgetFirst((ATermList) t);
      if(((j_16 != NULL) && (j_16 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        j_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(j_16);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_16 != NULL) && (k_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_16 = ATgetArgument(t, 0);
      if(((l_16 != NULL) && (l_16 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((m_16 != NULL) && (m_16 != t)))
    _fail(t);
  else
    m_16 = t;
  if(((n_16 != NULL) && (n_16 != t)))
    _fail(t);
  else
    n_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_16), not_null(l_16));
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        t = Tl_0_0(t);
        ;
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        t = (ATerm) ATempty;
      }
    if(((o_16 != NULL) && (o_16 != t)))
      _fail(t);
    else
      o_16 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(k_16), not_null(l_16), not_null(o_16));
    t = table_put_0_0(t);
    t = not_null(m_16);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL;
  if(((p_16 != NULL) && (p_16 != t)))
    _fail(t);
  else
    p_16 = t;
  t = z_79(t);
  if(((q_16 != NULL) && (q_16 != t)))
    _fail(t);
  else
    q_16 = t;
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_16), term_r_30);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_16 != NULL) && (s_16 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_16 = ATgetFirst((ATermList) t);
        if(((r_16 != NULL) && (r_16 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          r_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(q_16), term_r_30, not_null(r_16));
    t = table_put_0_0(t);
    t = not_null(s_16);
    {
      ATerm f_2 (ATerm t)
      {
        ATerm t_16 = NULL;
        if(((t_16 != NULL) && (t_16 != t)))
          _fail(t);
        else
          t_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_16), not_null(t_16));
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(f_2, t);
      t = not_null(p_16);
    }
  }
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm u_16 = NULL;
  if(((u_16 != NULL) && (u_16 != t)))
    _fail(t);
  else
    u_16 = t;
  t = SSL_remove(not_null(u_16));
  return(t);
}
ATerm restore_always_2_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm t)
{
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_80(t);
      t = v_80(t);
      ;
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
      t = v_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_79 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
  if(((v_16 != NULL) && (v_16 != t)))
    _fail(t);
  else
    v_16 = t;
  t = y_79(t);
  if(((w_16 != NULL) && (w_16 != t)))
    _fail(t);
  else
    w_16 = t;
  if(((x_16 != NULL) && (x_16 != t)))
    _fail(t);
  else
    x_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_16), term_r_30);
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(d_32);
      }
    else
      {
        t = c_32;
        t = (ATerm) ATempty;
      }
    if(((y_16 != NULL) && (y_16 != t)))
      _fail(t);
    else
      y_16 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(w_16), term_r_30, (ATerm) ATinsert(CheckATermList(not_null(y_16)), (ATerm) ATempty));
    t = table_put_0_0(t);
    t = not_null(v_16);
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL;
  ATerm g_2 (ATerm t)
  {
    t = term_c_31;
    return(t);
  }
  t = begin_scope_1_0(g_2, t);
  {
    ATerm h_2 (ATerm t)
    {
      ATerm b_17 = NULL;
      if(((b_17 != NULL) && (b_17 != t)))
        _fail(t);
      else
        b_17 = t;
      {
        ATerm e_32 = t;
        int f_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_32;
            t = table_get_0_0(t);
            ;
            LocalPopChoice(f_32);
          }
        else
          {
            t = e_32;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((a_17 != NULL) && (a_17 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              a_17 = ATgetFirst((ATermList) t);
            if(((z_16 != NULL) && (z_16 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              z_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(a_17);
        {
          ATerm i_2 (ATerm t)
          {
            t = try_1_0(remove_file_0_0, t);
            return(t);
          }
          t = map_1_0(i_2, t);
          t = not_null(b_17);
          {
            ATerm j_2 (ATerm t)
            {
              t = term_c_31;
              return(t);
            }
            t = end_scope_1_0(j_2, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(d_83, h_2, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
        if(((c_17 != NULL) && (c_17 != t)))
          _fail(t);
        else
          c_17 = t;
        if(((d_17 != NULL) && (d_17 != t)))
          _fail(t);
        else
          d_17 = t;
        t = term_e_31;
        t = get_config_0_0(t);
        if(((e_17 != NULL) && (e_17 != t)))
          _fail(t);
        else
          e_17 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_17));
        ;
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        t = term_z_4;
      }
    t = e_83(t);
    {
      ATerm l_2 (ATerm t)
      {
        ATerm j_32 = t;
        int k_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_31;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(k_32);
          }
        else
          {
            t = j_32;
            t = term_l_32;
          }
        return(t);
      }
      t = copy_to_1_0(l_2, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(k_2, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  if(((h_17 != NULL) && (h_17 != t)))
    _fail(t);
  else
    h_17 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(h_17);
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((i_17 != NULL) && (i_17 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            i_17 = ATgetFirst((ATermList) t);
          if(((j_17 != NULL) && (j_17 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(j_17);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((k_17 != NULL) && (k_17 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            k_17 = ATgetFirst((ATermList) t);
          if(((l_17 != NULL) && (l_17 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(i_17);
      if(((m_17 != NULL) && (m_17 != t)))
        _fail(t);
      else
        m_17 = t;
      t = not_null(k_17);
      if(((n_17 != NULL) && (n_17 != t)))
        _fail(t);
      else
        n_17 = t;
      t = not_null(l_17);
      if(((o_17 != NULL) && (o_17 != t)))
        _fail(t);
      else
        o_17 = t;
      t = not_null(h_17);
      if(((p_17 != NULL) && (p_17 != t)))
        _fail(t);
      else
        p_17 = t;
      t = not_null(m_17);
      t = h_0(t);
      t = not_null(p_17);
      if(((q_17 != NULL) && (q_17 != t)))
        _fail(t);
      else
        q_17 = t;
      t = not_null(n_17);
      t = i_0(t);
      if(((r_17 != NULL) && (r_17 != t)))
        _fail(t);
      else
        r_17 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(o_17)), not_null(r_17));
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm t_17 = NULL;
    if(((t_17 != NULL) && (t_17 != t)))
      _fail(t);
    else
      t_17 = t;
    if(match_string(t, "-k"))
      {
        t = not_null(t_17);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = not_null(t_17);
      }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
    if(((u_17 != NULL) && (u_17 != t)))
      _fail(t);
    else
      u_17 = t;
    if(((v_17 != NULL) && (v_17 != t)))
      _fail(t);
    else
      v_17 = t;
    t = string_to_int_0_0(t);
    if(((w_17 != NULL) && (w_17 != t)))
      _fail(t);
    else
      w_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_32, not_null(w_17));
    t = set_config_0_0(t);
    t = not_null(u_17);
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_n_32;
    return(t);
  }
  t = ArgOption_3_0(m_2, n_2, o_2, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm x_17 = NULL;
  if(((x_17 != NULL) && (x_17 != t)))
    _fail(t);
  else
    x_17 = t;
  t = SSL_string_to_int(not_null(x_17));
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 (ATerm t)
      {
        ATerm z_17 = NULL;
        if(((z_17 != NULL) && (z_17 != t)))
          _fail(t);
        else
          z_17 = t;
        if(match_string(t, "-S"))
          {
            t = not_null(z_17);
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = not_null(z_17);
          }
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        ATerm a_18 = NULL;
        if(((a_18 != NULL) && (a_18 != t)))
          _fail(t);
        else
          a_18 = t;
        t = term_r_32;
        t = set_config_0_0(t);
        t = term_s_32;
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        t = term_t_32;
        return(t);
      }
      t = Option_3_0(p_2, q_2, r_2, t);
      ;
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      {
        ATerm u_32 = t;
        int v_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm t_2 (ATerm t)
            {
              ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
              if(((b_18 != NULL) && (b_18 != t)))
                _fail(t);
              else
                b_18 = t;
              if(((c_18 != NULL) && (c_18 != t)))
                _fail(t);
              else
                c_18 = t;
              t = string_to_int_0_0(t);
              if(((d_18 != NULL) && (d_18 != t)))
                _fail(t);
              else
                d_18 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_s_4, not_null(d_18));
              t = set_config_0_0(t);
              t = not_null(b_18);
              if(((e_18 != NULL) && (e_18 != t)))
                _fail(t);
              else
                e_18 = t;
              if(((f_18 != NULL) && (f_18 != t)))
                _fail(t);
              else
                f_18 = t;
              t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(f_18));
              return(t);
            }
            ATerm u_2 (ATerm t)
            {
              t = term_w_32;
              return(t);
            }
            t = ArgOption_3_0(s_2, t_2, u_2, t);
            ;
            LocalPopChoice(v_32);
          }
        else
          {
            t = u_32;
            {
              ATerm v_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm w_2 (ATerm t)
              {
                ATerm g_18 = NULL;
                if(((g_18 != NULL) && (g_18 != t)))
                  _fail(t);
                else
                  g_18 = t;
                t = term_y_32;
                t = set_config_0_0(t);
                t = term_z_32;
                return(t);
              }
              ATerm x_2 (ATerm t)
              {
                t = term_a_33;
                return(t);
              }
              t = Option_3_0(v_2, w_2, x_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(c_33);
    }
  else
    {
      t = b_33;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm i_18 = NULL;
    if(((i_18 != NULL) && (i_18 != t)))
      _fail(t);
    else
      i_18 = t;
    if(match_string(t, "-o"))
      {
        t = not_null(i_18);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = not_null(i_18);
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
    if(((j_18 != NULL) && (j_18 != t)))
      _fail(t);
    else
      j_18 = t;
    if(((k_18 != NULL) && (k_18 != t)))
      _fail(t);
    else
      k_18 = t;
    if(((l_18 != NULL) && (l_18 != t)))
      _fail(t);
    else
      l_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_d_31, not_null(l_18));
    t = set_config_0_0(t);
    t = not_null(j_18);
    if(((m_18 != NULL) && (m_18 != t)))
      _fail(t);
    else
      m_18 = t;
    if(((n_18 != NULL) && (n_18 != t)))
      _fail(t);
    else
      n_18 = t;
    t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_18));
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_d_33;
    return(t);
  }
  t = ArgOption_3_0(y_2, z_2, a_3, t);
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm p_18 = NULL;
    if(((p_18 != NULL) && (p_18 != t)))
      _fail(t);
    else
      p_18 = t;
    if(match_string(t, "-i"))
      {
        t = not_null(p_18);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = not_null(p_18);
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
    if(((q_18 != NULL) && (q_18 != t)))
      _fail(t);
    else
      q_18 = t;
    if(((r_18 != NULL) && (r_18 != t)))
      _fail(t);
    else
      r_18 = t;
    if(((s_18 != NULL) && (s_18 != t)))
      _fail(t);
    else
      s_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_31, not_null(s_18));
    t = set_config_0_0(t);
    t = not_null(q_18);
    if(((t_18 != NULL) && (t_18 != t)))
      _fail(t);
    else
      t_18 = t;
    if(((u_18 != NULL) && (u_18 != t)))
      _fail(t);
    else
      u_18 = t;
    t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_18));
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_e_33;
    return(t);
  }
  t = ArgOption_3_0(b_3, c_3, d_3, t);
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm f_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(g_33);
    }
  else
    {
      t = f_33;
      {
        ATerm h_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = general_options_0_0(t);
                  ;
                  LocalPopChoice(k_33);
                }
              else
                {
                  t = j_33;
                  {
                    ATerm e_3 (ATerm t)
                    {
                      ATerm w_18 = NULL;
                      if(((w_18 != NULL) && (w_18 != t)))
                        _fail(t);
                      else
                        w_18 = t;
                      if(match_string(t, "-w"))
                        {
                          t = not_null(w_18);
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
                            _fail(t);
                          t = not_null(w_18);
                        }
                      return(t);
                    }
                    ATerm f_3 (ATerm t)
                    {
                      ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
                      if(((x_18 != NULL) && (x_18 != t)))
                        _fail(t);
                      else
                        x_18 = t;
                      if(((y_18 != NULL) && (y_18 != t)))
                        _fail(t);
                      else
                        y_18 = t;
                      if(((z_18 != NULL) && (z_18 != t)))
                        _fail(t);
                      else
                        z_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_y_4, not_null(z_18));
                      t = set_config_0_0(t);
                      t = not_null(x_18);
                      return(t);
                    }
                    ATerm g_3 (ATerm t)
                    {
                      t = term_l_33;
                      return(t);
                    }
                    t = ArgOption_3_0(e_3, f_3, g_3, t);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
  if(((a_19 != NULL) && (a_19 != t)))
    _fail(t);
  else
    a_19 = t;
  if(((b_19 != NULL) && (b_19 != t)))
    _fail(t);
  else
    b_19 = t;
  t = term_a_31;
  t = whoami_0_0(t);
  if(((c_19 != NULL) && (c_19 != t)))
    _fail(t);
  else
    c_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_27, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_33), not_null(c_19)), term_m_33));
  t = printnl_0_0(t);
  t = term_v_4;
  t = exit_0_0(t);
  t = not_null(a_19);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL;
  t = report_run_time_0_0(t);
  if(((d_19 != NULL) && (d_19 != t)))
    _fail(t);
  else
    d_19 = t;
  t = term_a_31;
  t = whoami_0_0(t);
  if(((e_19 != NULL) && (e_19 != t)))
    _fail(t);
  else
    e_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_27, (ATerm) ATinsert(ATinsert(ATempty, term_o_33), not_null(e_19)));
  t = printnl_0_0(t);
  t = term_v_4;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_33;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm f_19 = NULL;
  if(((f_19 != NULL) && (f_19 != t)))
    _fail(t);
  else
    f_19 = t;
  t = SSL_TicksToSeconds(not_null(f_19));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_19 != NULL) && (g_19 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_19 = ATgetArgument(t, 0);
      if(((h_19 != NULL) && (h_19 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(g_19), not_null(h_19));
        ;
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
        t = SSL_addr(not_null(g_19), not_null(h_19));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = b_76(t);
      ;
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      {
        ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
        if(((j_19 != NULL) && (j_19 != t)))
          _fail(t);
        else
          j_19 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((k_19 != NULL) && (k_19 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              k_19 = ATgetFirst((ATermList) t);
            if(((l_19 != NULL) && (l_19 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              l_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(k_19);
        if(((m_19 != NULL) && (m_19 != t)))
          _fail(t);
        else
          m_19 = t;
        t = not_null(l_19);
        if(((n_19 != NULL) && (n_19 != t)))
          _fail(t);
        else
          n_19 = t;
        t = not_null(j_19);
        if(((o_19 != NULL) && (o_19 != t)))
          _fail(t);
        else
          o_19 = t;
        t = not_null(n_19);
        t = foldr_2_0(b_76, c_76, t);
        if(((p_19 != NULL) && (p_19 != t)))
          _fail(t);
        else
          p_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(p_19));
        t = c_76(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  if(((q_19 != NULL) && (q_19 != t)))
    _fail(t);
  else
    q_19 = t;
  if(((r_19 != NULL) && (r_19 != t)))
    _fail(t);
  else
    r_19 = t;
  t = not_null(q_19);
  if(((s_19 != NULL) && (s_19 != t)))
    _fail(t);
  else
    s_19 = t;
  t = SSL_explode_term(not_null(s_19));
  if(match_cons(t, sym__2))
    {
      ATerm u_33 = ATgetArgument(t, 0);
      if(((t_19 != NULL) && (t_19 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(t_19);
  t = foldr_2_0(z_73, a_74, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  {
    ATerm h_3 (ATerm t)
    {
      t = term_q_32;
      return(t);
    }
    t = crush_2_0(h_3, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,x_19 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_19 != NULL) && (u_19 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_19 = ATgetArgument(t, 0);
      if(((v_19 != NULL) && (v_19 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((x_19 != NULL) && (x_19 != t)))
    _fail(t);
  else
    x_19 = t;
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(u_19), not_null(v_19));
        ;
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        t = SSL_gtr(not_null(u_19), not_null(v_19));
      }
    t = not_null(x_19);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_19 = NULL;
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
      if(((a_20 != NULL) && (a_20 != t)))
        _fail(t);
      else
        a_20 = t;
      if(match_cons(t, sym__2))
        {
          if(((b_20 != NULL) && (b_20 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            b_20 = ATgetArgument(t, 0);
          if(((c_20 != NULL) && (c_20 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            c_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(b_20);
      if(((z_19 != NULL) && (z_19 != t)))
        _fail(t);
      else
        z_19 = t;
      t = not_null(c_20);
      if(((z_19 != NULL) && (z_19 != t)))
        _fail(t);
      else
        z_19 = t;
      t = not_null(a_20);
      ;
      LocalPopChoice(y_33);
    }
  else
    {
      t = x_33;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
    if(((d_20 != NULL) && (d_20 != t)))
      _fail(t);
    else
      d_20 = t;
    if(((e_20 != NULL) && (e_20 != t)))
      _fail(t);
    else
      e_20 = t;
    t = term_s_4;
    t = get_config_0_0(t);
    if(((f_20 != NULL) && (f_20 != t)))
      _fail(t);
    else
      f_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_20), term_v_4);
    t = geq_0_0(t);
    t = not_null(d_20);
    t = z_80(t);
    return(t);
  }
  t = try_1_0(i_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
    if(((g_20 != NULL) && (g_20 != t)))
      _fail(t);
    else
      g_20 = t;
    t = run_time_0_0(t);
    if(((h_20 != NULL) && (h_20 != t)))
      _fail(t);
    else
      h_20 = t;
    t = not_null(g_20);
    if(((i_20 != NULL) && (i_20 != t)))
      _fail(t);
    else
      i_20 = t;
    t = term_a_31;
    t = whoami_0_0(t);
    if(((j_20 != NULL) && (j_20 != t)))
      _fail(t);
    else
      j_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_33), not_null(h_20)), term_e_5), not_null(j_20)));
    t = printnl_0_0(t);
    return(t);
  }
  t = if_verbose1_1_0(j_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_q_32;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      {
        ATerm k_3 (ATerm t)
        {
          ATerm d_34 = t;
          int e_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
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
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(g_34);
                  }
                else
                  {
                    t = f_34;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(k_3, t);
      }
    }
  t = f_85(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm k_20 = NULL;
  if(((k_20 != NULL) && (k_20 != t)))
    _fail(t);
  else
    k_20 = t;
  t = SSL_table_create(not_null(k_20));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL;
  if(((l_20 != NULL) && (l_20 != t)))
    _fail(t);
  else
    l_20 = t;
  if(((m_20 != NULL) && (m_20 != t)))
    _fail(t);
  else
    m_20 = t;
  t = term_h_34;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_34, term_i_34, not_null(l_20));
  t = table_put_0_0(t);
  t = not_null(m_20);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_20 = NULL;
  if(((n_20 != NULL) && (n_20 != t)))
    _fail(t);
  else
    n_20 = t;
  t = SSL_table_destroy(not_null(n_20));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm o_20 = NULL;
  if(((o_20 != NULL) && (o_20 != t)))
    _fail(t);
  else
    o_20 = t;
  t = SSL_exit(not_null(o_20));
  return(t);
}
ATerm long_description_1_0 (ATerm b_87 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
  if(((s_20 != NULL) && (s_20 != t)))
    _fail(t);
  else
    s_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_20 = ATgetFirst((ATermList) t);
      r_20 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,f_21 = NULL;
        t = not_null(q_20);
        if(((t_20 != NULL) && (t_20 != t)))
          _fail(t);
        else
          t_20 = t;
        t = not_null(r_20);
        if(((u_20 != NULL) && (u_20 != t)))
          _fail(t);
        else
          u_20 = t;
        if(((v_20 != NULL) && (v_20 != t)))
          _fail(t);
        else
          v_20 = t;
        if(((y_20 != NULL) && (y_20 != t)))
          _fail(t);
        else
          y_20 = t;
        t = g_0(t);
        if(((z_20 != NULL) && (z_20 != t)))
          _fail(t);
        else
          z_20 = t;
        t = not_null(y_20);
        if(((a_21 != NULL) && (a_21 != t)))
          _fail(t);
        else
          a_21 = t;
        t = not_null(t_20);
        t = e_0(t);
        if(((b_21 != NULL) && (b_21 != t)))
          _fail(t);
        else
          b_21 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(z_20)), not_null(b_21));
        if(((f_21 != NULL) && (f_21 != t)))
          _fail(t);
        else
          f_21 = t;
        t = not_null(v_20);
        {
          ATerm l_3 (ATerm t)
          {
            t = not_null(f_21);
            return(t);
          }
          t = reverse_acc_2_0(e_0, l_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_31;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, m_3, t);
  return(t);
}
ATerm short_description_1_0 (ATerm a_87 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm t)
{
  ATerm g_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,r_21 = NULL,s_21 = NULL;
  if(((n_21 != NULL) && (n_21 != t)))
    _fail(t);
  else
    n_21 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((l_21 != NULL) && (l_21 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((o_21 != NULL) && (o_21 != t)))
    _fail(t);
  else
    o_21 = t;
  t = SSLgetAnnotations(not_null(n_21));
  if(((g_21 != NULL) && (g_21 != t)))
    _fail(t);
  else
    g_21 = t;
  t = not_null(l_21);
  t = i_62(t);
  if(((m_21 != NULL) && (m_21 != t)))
    _fail(t);
  else
    m_21 = t;
  if(((s_21 != NULL) && (s_21 != t)))
    _fail(t);
  else
    s_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_21)), not_null(g_21));
  if(((r_21 != NULL) && (r_21 != t)))
    _fail(t);
  else
    r_21 = t;
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_21 = NULL;
  ATerm j_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_33;
      t = get_config_0_0(t);
      if(((t_21 != NULL) && (t_21 != t)))
        _fail(t);
      else
        t_21 = t;
      ;
      LocalPopChoice(k_34);
    }
  else
    {
      t = j_34;
      {
        ATerm n_3 (ATerm t)
        {
          ATerm o_3 (ATerm t)
          {
            if(((t_21 != NULL) && (t_21 != t)))
              _fail(t);
            else
              t_21 = t;
            return(t);
          }
          t = Program_1_0(o_3, t);
          return(t);
        }
        t = option_defined_1_0(n_3, t);
      }
    }
  {
    ATerm p_3 (ATerm t)
    {
      ATerm q_3 (ATerm t)
      {
        t = not_null(t_21);
        return(t);
      }
      t = short_description_1_0(q_3, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(p_3, t);
    t = term_l_34;
    t = echo_0_0(t);
    t = term_o_34;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm r_3 (ATerm t)
      {
        ATerm u_21 = NULL,x_21 = NULL;
        if(((u_21 != NULL) && (u_21 != t)))
          _fail(t);
        else
          u_21 = t;
        if(((x_21 != NULL) && (x_21 != t)))
          _fail(t);
        else
          x_21 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_21)), term_p_34);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(r_3, t);
      {
        ATerm s_3 (ATerm t)
        {
          ATerm y_21 = NULL,z_21 = NULL;
          if(((y_21 != NULL) && (y_21 != t)))
            _fail(t);
          else
            y_21 = t;
          {
            ATerm t_3 (ATerm t)
            {
              t = not_null(t_21);
              return(t);
            }
            t = long_description_1_0(t_3, t);
            if(((z_21 != NULL) && (z_21 != t)))
              _fail(t);
            else
              z_21 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(z_21)), term_q_34);
            t = echo_0_0(t);
          }
          return(t);
        }
        t = try_1_0(s_3, t);
      }
    }
  }
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm r_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(s_34);
    }
  else
    {
      t = r_34;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_22 != NULL) && (a_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_22 = ATgetArgument(t, 0);
      if(((b_22 != NULL) && (b_22 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((c_22 != NULL) && (c_22 != t)))
    _fail(t);
  else
    c_22 = t;
  t = SSL_printnl(not_null(a_22), not_null(b_22));
  t = not_null(c_22);
  return(t);
}
ATerm Undefined_1_0 (ATerm j_62 (ATerm), ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL;
  if(((g_22 != NULL) && (g_22 != t)))
    _fail(t);
  else
    g_22 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((e_22 != NULL) && (e_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((h_22 != NULL) && (h_22 != t)))
    _fail(t);
  else
    h_22 = t;
  t = SSLgetAnnotations(not_null(g_22));
  if(((d_22 != NULL) && (d_22 != t)))
    _fail(t);
  else
    d_22 = t;
  t = not_null(e_22);
  t = j_62(t);
  if(((f_22 != NULL) && (f_22 != t)))
    _fail(t);
  else
    f_22 = t;
  if(((j_22 != NULL) && (j_22 != t)))
    _fail(t);
  else
    j_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_22)), not_null(d_22));
  if(((i_22 != NULL) && (i_22 != t)))
    _fail(t);
  else
    i_22 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm v_69 (ATerm), ATerm t)
{
  ATerm k_22 (ATerm t)
  {
    ATerm t_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(v_69, _id, t);
        ;
        LocalPopChoice(u_34);
      }
    else
      {
        t = t_34;
        t = Cons_2_0(_id, k_22, t);
      }
    return(t);
  }
  t = k_22(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm a_86 (ATerm), ATerm t)
{
  t = fetch_1_0(a_86, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  if(((m_22 != NULL) && (m_22 != t)))
    _fail(t);
  else
    m_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(m_22);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((n_22 != NULL) && (n_22 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            n_22 = ATgetFirst((ATermList) t);
          if(((o_22 != NULL) && (o_22 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(m_22);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,u_22 = NULL;
  if(((p_22 != NULL) && (p_22 != t)))
    _fail(t);
  else
    p_22 = t;
  if(((q_22 != NULL) && (q_22 != t)))
    _fail(t);
  else
    q_22 = t;
  {
    ATerm v_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(w_34);
      }
    else
      {
        t = v_34;
        {
          ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
          if(((r_22 != NULL) && (r_22 != t)))
            _fail(t);
          else
            r_22 = t;
          if(((s_22 != NULL) && (s_22 != t)))
            _fail(t);
          else
            s_22 = t;
          t = not_null(r_22);
          if(((t_22 != NULL) && (t_22 != t)))
            _fail(t);
          else
            t_22 = t;
          t = (ATerm) ATinsert(ATempty, not_null(t_22));
        }
      }
    if(((u_22 != NULL) && (u_22 != t)))
      _fail(t);
    else
      u_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_32, not_null(u_22));
    t = printnl_0_0(t);
    t = not_null(p_22);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_33;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm override_system_about_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  ATerm x_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(y_34);
    }
  else
    {
      t = x_34;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm v_22 = NULL;
  if(((v_22 != NULL) && (v_22 != t)))
    _fail(t);
  else
    v_22 = t;
  t = SSL_implode_string(not_null(v_22));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_34 = t;
  int a_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(a_35);
    }
  else
    {
      t = z_34;
      {
        ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
        if(((x_22 != NULL) && (x_22 != t)))
          _fail(t);
        else
          x_22 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((y_22 != NULL) && (y_22 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              y_22 = ATgetFirst((ATermList) t);
            if(((z_22 != NULL) && (z_22 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              z_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(y_22);
        if(((a_23 != NULL) && (a_23 != t)))
          _fail(t);
        else
          a_23 = t;
        t = not_null(z_22);
        if(((b_23 != NULL) && (b_23 != t)))
          _fail(t);
        else
          b_23 = t;
        t = not_null(a_23);
        {
          ATerm u_3 (ATerm t)
          {
            t = not_null(b_23);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(u_3, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
  if(((d_23 != NULL) && (d_23 != t)))
    _fail(t);
  else
    d_23 = t;
  if(((e_23 != NULL) && (e_23 != t)))
    _fail(t);
  else
    e_23 = t;
  t = not_null(d_23);
  if(((f_23 != NULL) && (f_23 != t)))
    _fail(t);
  else
    f_23 = t;
  t = SSL_explode_term(not_null(f_23));
  if(match_cons(t, sym__2))
    {
      ATerm b_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((g_23 != NULL) && (g_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(g_23);
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm b_70 (ATerm), ATerm t)
{
  ATerm h_23 (ATerm t)
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, h_23, t);
        ;
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
        t = Nil_0_0(t);
        t = b_70(t);
      }
    return(t);
  }
  t = h_23(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_23 != NULL) && (j_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_23 = ATgetArgument(t, 0);
      if(((i_23 != NULL) && (i_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(j_23);
  {
    ATerm v_3 (ATerm t)
    {
      t = not_null(i_23);
      return(t);
    }
    t = at_end_1_0(v_3, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_35 = t;
  int f_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(f_35);
    }
  else
    {
      t = e_35;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm k_23 = NULL;
  if(((k_23 != NULL) && (k_23 != t)))
    _fail(t);
  else
    k_23 = t;
  t = SSL_explode_string(not_null(k_23));
  return(t);
}
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  if(((q_23 != NULL) && (q_23 != t)))
    _fail(t);
  else
    q_23 = t;
  if(match_cons(t, sym__2))
    {
      if(((m_23 != NULL) && (m_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_23 = ATgetArgument(t, 0);
      if(((n_23 != NULL) && (n_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_23 != NULL) && (r_23 != t)))
    _fail(t);
  else
    r_23 = t;
  t = SSLgetAnnotations(not_null(q_23));
  if(((l_23 != NULL) && (l_23 != t)))
    _fail(t);
  else
    l_23 = t;
  t = not_null(m_23);
  t = t_55(t);
  if(((o_23 != NULL) && (o_23 != t)))
    _fail(t);
  else
    o_23 = t;
  t = not_null(n_23);
  t = u_55(t);
  if(((p_23 != NULL) && (p_23 != t)))
    _fail(t);
  else
    p_23 = t;
  if(((t_23 != NULL) && (t_23 != t)))
    _fail(t);
  else
    t_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_23), not_null(p_23)), not_null(l_23));
  if(((s_23 != NULL) && (s_23 != t)))
    _fail(t);
  else
    s_23 = t;
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm d_65 (ATerm), ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  if(((u_23 != NULL) && (u_23 != t)))
    _fail(t);
  else
    u_23 = t;
  if(((v_23 != NULL) && (v_23 != t)))
    _fail(t);
  else
    v_23 = t;
  t = d_65(t);
  if(((w_23 != NULL) && (w_23 != t)))
    _fail(t);
  else
    w_23 = t;
  t = not_null(v_23);
  if(((x_23 != NULL) && (x_23 != t)))
    _fail(t);
  else
    x_23 = t;
  if(((y_23 != NULL) && (y_23 != t)))
    _fail(t);
  else
    y_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_23)), not_null(w_23)));
  t = printnl_0_0(t);
  t = not_null(u_23);
  return(t);
}
ATerm map_1_0 (ATerm k_69 (ATerm), ATerm t)
{
  ATerm z_23 (ATerm t)
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(h_35);
      }
    else
      {
        t = g_35;
        t = Cons_2_0(k_69, z_23, t);
      }
    return(t);
  }
  t = z_23(t);
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm a_24 = NULL;
  if(((a_24 != NULL) && (a_24 != t)))
    _fail(t);
  else
    a_24 = t;
  t = SSL_is_string(not_null(a_24));
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_35 = t;
  int j_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(j_35);
    }
  else
    {
      t = i_35;
      {
        ATerm k_35 = t;
        int l_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_3 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(w_3, t);
            ;
            LocalPopChoice(l_35);
          }
        else
          {
            t = k_35;
            {
              ATerm x_24 (ATerm d_24, ATerm e_24, ATerm t)
              {
                ATerm f_24 = NULL;
                t = not_null(d_24);
                if(((f_24 != NULL) && (f_24 != t)))
                  _fail(t);
                else
                  f_24 = t;
                {
                  ATerm m_35 = t;
                  int n_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(n_35);
                    }
                  else
                    {
                      t = m_35;
                      {
                        ATerm x_3 (ATerm t)
                        {
                          t = term_o_35;
                          return(t);
                        }
                        t = debug_1_0(x_3, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
              if(((g_24 != NULL) && (g_24 != t)))
                _fail(t);
              else
                g_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_24 = ATgetArgument(t, 0);
                  {
                    ATerm j_24 = NULL;
                    t = not_null(h_24);
                    if(((j_24 != NULL) && (j_24 != t)))
                      _fail(t);
                    else
                      j_24 = t;
                  }
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_24 = ATgetArgument(t, 0);
                      t = x_24(not_null(h_24), not_null(g_24), t);
                    }
                  else
                    {
                      ATerm k_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,w_24 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          if(((h_24 != NULL) && (h_24 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            h_24 = ATgetArgument(t, 0);
                          if(((i_24 != NULL) && (i_24 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            i_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = not_null(h_24);
                      if(((k_24 != NULL) && (k_24 != t)))
                        _fail(t);
                      else
                        k_24 = t;
                      t = not_null(i_24);
                      if(((p_24 != NULL) && (p_24 != t)))
                        _fail(t);
                      else
                        p_24 = t;
                      t = not_null(g_24);
                      if(((q_24 != NULL) && (q_24 != t)))
                        _fail(t);
                      else
                        q_24 = t;
                      t = not_null(k_24);
                      t = eval_config_0_0(t);
                      if(((r_24 != NULL) && (r_24 != t)))
                        _fail(t);
                      else
                        r_24 = t;
                      t = not_null(q_24);
                      if(((s_24 != NULL) && (s_24 != t)))
                        _fail(t);
                      else
                        s_24 = t;
                      t = not_null(p_24);
                      t = eval_config_0_0(t);
                      if(((w_24 != NULL) && (w_24 != t)))
                        _fail(t);
                      else
                        w_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_24), not_null(w_24));
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
  ATerm y_24 = NULL;
  if(((y_24 != NULL) && (y_24 != t)))
    _fail(t);
  else
    y_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_35, not_null(y_24));
  t = table_get_0_0(t);
  {
    ATerm y_3 (ATerm t)
    {
      ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
      t = eval_config_0_0(t);
      if(((z_24 != NULL) && (z_24 != t)))
        _fail(t);
      else
        z_24 = t;
      if(((a_25 != NULL) && (a_25 != t)))
        _fail(t);
      else
        a_25 = t;
      if(((b_25 != NULL) && (b_25 != t)))
        _fail(t);
      else
        b_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_35, not_null(y_24), not_null(b_25));
      t = table_put_0_0(t);
      t = not_null(z_24);
      return(t);
    }
    t = try_1_0(y_3, t);
  }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm f_80 (ATerm), ATerm t)
{
  ATerm q_35 = t;
  int r_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_80(t);
      ;
      LocalPopChoice(r_35);
    }
  else
    {
      t = q_35;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        t = term_v_35;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        t = term_w_35;
        return(t);
      }
      t = Option_3_0(z_3, a_4, b_4, t);
      ;
      LocalPopChoice(t_35);
    }
  else
    {
      t = s_35;
      {
        ATerm c_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm d_4 (ATerm t)
        {
          ATerm c_25 = NULL;
          if(((c_25 != NULL) && (c_25 != t)))
            _fail(t);
          else
            c_25 = t;
          t = term_v_35;
          t = set_config_0_0(t);
          t = term_y_35;
          t = set_config_0_0(t);
          t = term_z_35;
          return(t);
        }
        ATerm e_4 (ATerm t)
        {
          t = term_a_36;
          return(t);
        }
        t = Option_3_0(c_4, d_4, e_4, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_25 != NULL) && (d_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_25 = ATgetArgument(t, 0);
      if(((e_25 != NULL) && (e_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(d_25), not_null(e_25));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,m_25 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((f_25 != NULL) && (f_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_25 = ATgetArgument(t, 0);
      if(((g_25 != NULL) && (g_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_25 = ATgetArgument(t, 1);
      if(((h_25 != NULL) && (h_25 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        h_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((i_25 != NULL) && (i_25 != t)))
    _fail(t);
  else
    i_25 = t;
  if(((j_25 != NULL) && (j_25 != t)))
    _fail(t);
  else
    j_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_25), not_null(g_25));
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        t = (ATerm) ATempty;
      }
    if(((m_25 != NULL) && (m_25 != t)))
      _fail(t);
    else
      m_25 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(f_25), not_null(g_25), (ATerm) ATinsert(CheckATermList(not_null(m_25)), not_null(h_25)));
    t = table_put_0_0(t);
    t = not_null(i_25);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL;
  if(((n_25 != NULL) && (n_25 != t)))
    _fail(t);
  else
    n_25 = t;
  t = term_a_31;
  t = f_87(t);
  if(((o_25 != NULL) && (o_25 != t)))
    _fail(t);
  else
    o_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_34, term_n_34, not_null(o_25));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  if(((q_25 != NULL) && (q_25 != t)))
    _fail(t);
  else
    q_25 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(q_25);
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((r_25 != NULL) && (r_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            r_25 = ATgetFirst((ATermList) t);
          if(((s_25 != NULL) && (s_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(r_25);
      if(((t_25 != NULL) && (t_25 != t)))
        _fail(t);
      else
        t_25 = t;
      t = not_null(s_25);
      if(((u_25 != NULL) && (u_25 != t)))
        _fail(t);
      else
        u_25 = t;
      t = not_null(q_25);
      if(((v_25 != NULL) && (v_25 != t)))
        _fail(t);
      else
        v_25 = t;
      t = not_null(t_25);
      t = a_0(t);
      t = not_null(v_25);
      if(((w_25 != NULL) && (w_25 != t)))
        _fail(t);
      else
        w_25 = t;
      t = term_a_31;
      t = c_0(t);
      if(((x_25 != NULL) && (x_25 != t)))
        _fail(t);
      else
        x_25 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(u_25)), not_null(x_25));
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm z_25 = NULL;
    if(((z_25 != NULL) && (z_25 != t)))
      _fail(t);
    else
      z_25 = t;
    if(match_string(t, "--help"))
      {
        t = not_null(z_25);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(z_25);
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = not_null(z_25);
          }
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_d_36;
    t = set_config_0_0(t);
    t = term_e_36;
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_f_36;
    return(t);
  }
  t = Option_3_0(f_4, g_4, h_4, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((a_26 != NULL) && (a_26 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        a_26 = ATgetFirst((ATermList) t);
      if(((b_26 != NULL) && (b_26 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        b_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(b_26)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_26)));
  return(t);
}
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
  if(((m_26 != NULL) && (m_26 != t)))
    _fail(t);
  else
    m_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((d_26 != NULL) && (d_26 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        d_26 = ATgetFirst((ATermList) t);
      if(((e_26 != NULL) && (e_26 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        e_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((n_26 != NULL) && (n_26 != t)))
    _fail(t);
  else
    n_26 = t;
  t = SSLgetAnnotations(not_null(m_26));
  if(((c_26 != NULL) && (c_26 != t)))
    _fail(t);
  else
    c_26 = t;
  t = not_null(d_26);
  t = c_57(t);
  if(((k_26 != NULL) && (k_26 != t)))
    _fail(t);
  else
    k_26 = t;
  t = not_null(e_26);
  t = d_57(t);
  if(((l_26 != NULL) && (l_26 != t)))
    _fail(t);
  else
    l_26 = t;
  if(((p_26 != NULL) && (p_26 != t)))
    _fail(t);
  else
    p_26 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_26)), not_null(k_26)), not_null(c_26));
  if(((o_26 != NULL) && (o_26 != t)))
    _fail(t);
  else
    o_26 = t;
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_26 != NULL) && (r_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_26 = ATgetArgument(t, 0);
      if(((s_26 != NULL) && (s_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_35, not_null(r_26), not_null(s_26));
  t = table_put_0_0(t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm t_26 = NULL;
  if(((t_26 != NULL) && (t_26 != t)))
    _fail(t);
  else
    t_26 = t;
  {
    ATerm i_4 (ATerm t)
    {
      t = term_g_36;
      t = d_87(t);
      return(t);
    }
    t = try_1_0(i_4, t);
    t = not_null(t_26);
    {
      ATerm j_4 (ATerm t)
      {
        ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,b_27 = NULL;
        if(((u_26 != NULL) && (u_26 != t)))
          _fail(t);
        else
          u_26 = t;
        if(((v_26 != NULL) && (v_26 != t)))
          _fail(t);
        else
          v_26 = t;
        if(((w_26 != NULL) && (w_26 != t)))
          _fail(t);
        else
          w_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_33, not_null(w_26));
        t = set_config_0_0(t);
        t = not_null(u_26);
        if(((x_26 != NULL) && (x_26 != t)))
          _fail(t);
        else
          x_26 = t;
        if(((b_27 != NULL) && (b_27 != t)))
          _fail(t);
        else
          b_27 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_27));
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        ATerm h_36 = t;
        int i_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_36 = t;
            int k_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(k_36);
              }
            else
              {
                t = j_36;
                t = d_87(t);
                t = Cons_2_0(_id, k_4, t);
              }
            ;
            LocalPopChoice(i_36);
          }
        else
          {
            t = h_36;
            t = UndefinedOption_0_0(t);
          }
        return(t);
      }
      t = Cons_2_0(j_4, k_4, t);
    }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL;
  if(((e_27 != NULL) && (e_27 != t)))
    _fail(t);
  else
    e_27 = t;
  if(match_cons(t, sym__3))
    {
      if(((f_27 != NULL) && (f_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_27 = ATgetArgument(t, 0);
      if(((g_27 != NULL) && (g_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_27 = ATgetArgument(t, 1);
      if(((h_27 != NULL) && (h_27 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        h_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(f_27), not_null(g_27), not_null(h_27));
  t = not_null(e_27);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,p_27 = NULL;
  if(((j_27 != NULL) && (j_27 != t)))
    _fail(t);
  else
    j_27 = t;
  t = term_l_36;
  t = table_put_0_0(t);
  t = not_null(j_27);
  {
    ATerm l_4 (ATerm t)
    {
      ATerm m_36 = t;
      int n_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_87(t);
          ;
          LocalPopChoice(n_36);
        }
      else
        {
          t = m_36;
          {
            ATerm o_36 = t;
            int p_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(p_36);
              }
            else
              {
                t = o_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_4, t);
    {
      ATerm m_4 (ATerm t)
      {
        ATerm q_36 = t;
        int r_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_27 (ATerm l_27, ATerm t)
            {
              ATerm m_27 = NULL;
              t = not_null(l_27);
              if(((m_27 != NULL) && (m_27 != t)))
                _fail(t);
              else
                m_27 = t;
              t = not_null(l_27);
              {
                ATerm s_36 = t;
                int t_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_c_34;
                    t = get_config_0_0(t);
                    ;
                    LocalPopChoice(t_36);
                  }
                else
                  {
                    t = s_36;
                    t = option_defined_1_0(Help_0_0, t);
                  }
                t = not_null(m_27);
                t = system_usage_0_0(t);
                t = term_q_32;
                t = exit_0_0(t);
              }
              return(t);
            }
            ATerm n_27 = NULL;
            if(((n_27 != NULL) && (n_27 != t)))
              _fail(t);
            else
              n_27 = t;
            {
              ATerm u_36 = t;
              int v_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_27(not_null(n_27), t);
                  ;
                  LocalPopChoice(v_36);
                }
              else
                {
                  t = u_36;
                  {
                    ATerm o_27 = NULL;
                    t = not_null(n_27);
                    if(((o_27 != NULL) && (o_27 != t)))
                      _fail(t);
                    else
                      o_27 = t;
                    t = term_u_35;
                    t = get_config_0_0(t);
                    t = not_null(o_27);
                    t = system_about_0_0(t);
                    t = term_q_32;
                    t = exit_0_0(t);
                  }
                }
            }
            ;
            LocalPopChoice(r_36);
          }
        else
          {
            t = q_36;
            {
              ATerm n_4 (ATerm t)
              {
                ATerm o_4 (ATerm t)
                {
                  if(((k_27 != NULL) && (k_27 != t)))
                    _fail(t);
                  else
                    k_27 = t;
                  return(t);
                }
                t = Undefined_1_0(o_4, t);
                return(t);
              }
              t = option_defined_1_0(n_4, t);
              t = (ATerm) ATmakeAppl(sym__2, term_x_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_27)), term_w_36));
              t = printnl_0_0(t);
              t = system_usage_0_0(t);
              t = term_v_4;
              t = exit_0_0(t);
            }
          }
        return(t);
      }
      t = try_1_0(m_4, t);
      if(((p_27 != NULL) && (p_27 != t)))
        _fail(t);
      else
        p_27 = t;
      t = term_m_34;
      t = table_destroy_0_0(t);
      t = not_null(p_27);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t)
{
  t = parse_options_1_0(h_85, t);
  t = store_options_0_0(t);
  t = j_85(t);
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_85, t);
        ;
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        {
          ATerm z_36 = t;
          int a_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_37);
            }
          else
            {
              t = z_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t)
{
  t = option_wrap_4_0(l_85, default_usage_0_0, _id, m_85, t);
  return(t);
}
ATerm io_abox2text_0_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    t = xtc_io_1_0(abox2text_0_0, t);
    return(t);
  }
  t = option_wrap_2_0(abox2text_options_0_0, p_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_abox2text_0_0(t);
  return(t);
}
