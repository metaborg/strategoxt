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
ATerm term_y_37;
ATerm term_p_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_r_36;
ATerm term_m_36;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_b_35;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_l_33;
ATerm term_i_33;
ATerm term_l_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_y_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_a_31;
ATerm term_x_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_g_30;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_g_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_h_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_f_27;
ATerm term_w_26;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_x_23;
ATerm term_p_23;
ATerm term_e_23;
ATerm term_c_23;
ATerm term_q_21;
ATerm term_z_20;
ATerm term_g_20;
ATerm term_t_19;
ATerm term_m_19;
ATerm term_f_19;
ATerm term_w_18;
ATerm term_q_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_e_13;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_q_10;
ATerm term_p_9;
ATerm term_r_8;
ATerm term_s_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
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
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_6, term_w_6, term_x_6);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_6, term_a_7, term_b_7);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_7, term_e_7, term_f_7);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_7, term_i_7, term_j_7);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_8, term_p_9, term_q_10);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_h_12, term_l_12);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_o_14, term_p_14);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_m_15, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_d_18, term_e_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_18, term_f_19, term_m_19);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_20, term_z_20, term_q_21);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_23, term_p_23, term_x_23);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_24, term_i_24, term_j_24);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_24, term_o_24, term_p_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_24, term_w_24, term_b_25);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_25, term_o_25, term_w_26);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_27, term_s_27, term_t_27);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_27, term_a_28, term_b_28);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym__2, term_g_29, term_n_29);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym__2, term_g_29, term_x_30);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym__2, term_e_32, term_t_31);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym__2, term_s_4, term_q_33);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_33);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym__2, term_v_33, term_c_32);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_q_35);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym__2, term_u_36, term_c_32);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym__2, term_x_36, term_c_32);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym__2, term_i_35, term_c_32);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym__3, term_p_35, term_q_35, (ATerm) ATempty);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm subt_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm pass_width_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm c_72 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm);
ATerm close_file_0_0 (ATerm);
ATerm execvp_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm n_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm waitpid_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm r_70 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm v_87 (ATerm), ATerm);
ATerm error_0_0 (ATerm);
ATerm xtc_find_loc_0_0 (ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm p_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm j_85 (ATerm), ATerm);
ATerm v_0 (ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm o_71 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm u_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm set_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm);
ATerm union_1_0 (ATerm a_80 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm get_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm r_12 (ATerm i_12, ATerm j_12, ATerm);
ATerm s_12 (ATerm m_12, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm fopen_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm b_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm c_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm can_read_file_0_0 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm getenv_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm c_90 (ATerm), ATerm);
ATerm assert_1_0 (ATerm n_86 (ATerm), ATerm);
ATerm z_1 (ATerm);
ATerm obsolete_1_0 (ATerm r_71 (ATerm), ATerm);
ATerm b_15 (ATerm r_14, ATerm);
ATerm c_15 (ATerm t_14, ATerm u_14, ATerm v_14, ATerm);
ATerm a_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm access_0_0 (ATerm);
ATerm file_exists_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm b_2 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm stdin_0_0 (ATerm);
ATerm FILE_1_0 (ATerm m_68 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm abox2text_0_0 (ATerm);
ATerm copy_file_0_0 (ATerm);
ATerm stderr_0_0 (ATerm);
ATerm stdout_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm k_86 (ATerm), ATerm);
ATerm remove_file_0_0 (ATerm);
ATerm restore_always_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm j_86 (ATerm), ATerm);
ATerm g_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm o_89 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm xtc_io_1_0 (ATerm p_89 (ATerm), ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm abox2text_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm);
ATerm crush_2_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm need_help_1_0 (ATerm q_91 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm m_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm l_93 (ATerm), ATerm);
ATerm Program_1_0 (ATerm t_68 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm l_92 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm _2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm a_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_75 (ATerm), ATerm);
ATerm is_string_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm g_26 (ATerm p_25, ATerm q_25, ATerm);
ATerm x_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm q_86 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm q_93 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm o_93 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm w_28 (ATerm p_28, ATerm);
ATerm parse_options_1_0 (ATerm n_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm io_abox2text_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_7 != NULL) && (k_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_7 = ATgetArgument(t, 0);
      if(((l_7 != NULL) && (l_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_4 = t;
    int r_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(k_7), not_null(l_7));
        ;
        LocalPopChoice(r_4);
      }
    else
      {
        t = q_4;
        t = SSL_subtr(not_null(k_7), not_null(l_7));
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  if(((m_7 != NULL) && (m_7 != t)))
    _fail(t);
  else
    m_7 = t;
  if(((n_7 != NULL) && (n_7 != t)))
    _fail(t);
  else
    n_7 = t;
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
    if(((o_7 != NULL) && (o_7 != t)))
      _fail(t);
    else
      o_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_7), term_v_4);
    t = subt_0_0(t);
    t = int_to_string_0_0(t);
    if(((p_7 != NULL) && (p_7 != t)))
      _fail(t);
    else
      p_7 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_7)), term_s_4);
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
        ATerm q_7 = NULL,r_7 = NULL;
        if(((q_7 != NULL) && (q_7 != t)))
          _fail(t);
        else
          q_7 = t;
        if(((r_7 != NULL) && (r_7 != t)))
          _fail(t);
        else
          r_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_7)), term_y_4);
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
  ATerm t_7 = NULL,u_7 = NULL;
  if(((t_7 != NULL) && (t_7 != t)))
    _fail(t);
  else
    t_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_7 = NULL,w_7 = NULL;
      t = not_null(t_7);
      if(((v_7 != NULL) && (v_7 != t)))
        _fail(t);
      else
        v_7 = t;
      t = term_z_4;
      t = ReadFromFile_0_0(t);
      if(((w_7 != NULL) && (w_7 != t)))
        _fail(t);
      else
        w_7 = t;
    }
  else
    {
      ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((u_7 != NULL) && (u_7 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            u_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(u_7);
      if(((x_7 != NULL) && (x_7 != t)))
        _fail(t);
      else
        x_7 = t;
      t = not_null(t_7);
      if(((y_7 != NULL) && (y_7 != t)))
        _fail(t);
      else
        y_7 = t;
      t = not_null(x_7);
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
      if(((z_7 != NULL) && (z_7 != t)))
        _fail(t);
      else
        z_7 = t;
    }
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_5 = ATgetArgument(t, 0);
      if(match_cons(a_5, sym_Stream_1))
        {
          if(((a_8 != NULL) && (a_8 != ATgetArgument(a_5, 0))))
            _fail(ATgetArgument(a_5, 0));
          else
            a_8 = ATgetArgument(a_5, 0);
        }
      else
        _fail(t);
      if(((b_8 != NULL) && (b_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(a_8), not_null(b_8));
  if(((c_8 != NULL) && (c_8 != t)))
    _fail(t);
  else
    c_8 = t;
  if(((d_8 != NULL) && (d_8 != t)))
    _fail(t);
  else
    d_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_8));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm c_72 (ATerm), ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_8 != NULL) && (e_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_8 = ATgetArgument(t, 0);
      if(((f_8 != NULL) && (f_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(e_8);
  if(((g_8 != NULL) && (g_8 != t)))
    _fail(t);
  else
    g_8 = t;
  if(((h_8 != NULL) && (h_8 != t)))
    _fail(t);
  else
    h_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), term_b_5);
  t = open_stream_0_0(t);
  if(((i_8 != NULL) && (i_8 != t)))
    _fail(t);
  else
    i_8 = t;
  if(((j_8 != NULL) && (j_8 != t)))
    _fail(t);
  else
    j_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_8), not_null(f_8));
  t = c_72(t);
  t = fclose_0_0(t);
  t = not_null(f_8);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
  if(((k_8 != NULL) && (k_8 != t)))
    _fail(t);
  else
    k_8 = t;
  if(((l_8 != NULL) && (l_8 != t)))
    _fail(t);
  else
    l_8 = t;
  t = xtc_new_file_0_0(t);
  if(((m_8 != NULL) && (m_8 != t)))
    _fail(t);
  else
    m_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), not_null(k_8));
  t = WriteToBinaryFile_0_0(t);
  t = not_null(m_8);
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_8));
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(l_90, m_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm close_file_0_0 (ATerm t)
{
  ATerm n_8 = NULL;
  if(((n_8 != NULL) && (n_8 != t)))
    _fail(t);
  else
    n_8 = t;
  t = SSL_close_file(not_null(n_8));
  return(t);
}
ATerm execvp_0_0 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_8 != NULL) && (o_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_8 = ATgetArgument(t, 0);
      if(((p_8 != NULL) && (p_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(o_8), not_null(p_8));
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
  ATerm q_8 = NULL;
  if(((q_8 != NULL) && (q_8 != t)))
    _fail(t);
  else
    q_8 = t;
  t = SSL_int_to_string(not_null(q_8));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL;
  if(((s_8 != NULL) && (s_8 != t)))
    _fail(t);
  else
    s_8 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      t_8 = ATgetArgument(t, 0);
      {
        ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
        t = not_null(t_8);
        if(((w_8 != NULL) && (w_8 != t)))
          _fail(t);
        else
          w_8 = t;
        t = not_null(s_8);
        if(((x_8 != NULL) && (x_8 != t)))
          _fail(t);
        else
          x_8 = t;
        if(((y_8 != NULL) && (y_8 != t)))
          _fail(t);
        else
          y_8 = t;
        t = not_null(w_8);
        t = int_to_string_0_0(t);
        if(((z_8 != NULL) && (z_8 != t)))
          _fail(t);
        else
          z_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_5), not_null(z_8)), term_c_5);
        t = concat_strings_0_0(t);
        if(((a_9 != NULL) && (a_9 != t)))
          _fail(t);
        else
          a_9 = t;
      }
    }
  else
    {
      ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((t_8 != NULL) && (t_8 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_8 = ATgetArgument(t, 0);
          if(((u_8 != NULL) && (u_8 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_8 = ATgetArgument(t, 1);
          if(((v_8 != NULL) && (v_8 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            v_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(t_8);
      if(((b_9 != NULL) && (b_9 != t)))
        _fail(t);
      else
        b_9 = t;
      t = not_null(u_8);
      if(((c_9 != NULL) && (c_9 != t)))
        _fail(t);
      else
        c_9 = t;
      t = not_null(v_8);
      if(((d_9 != NULL) && (d_9 != t)))
        _fail(t);
      else
        d_9 = t;
      t = not_null(s_8);
      if(((e_9 != NULL) && (e_9 != t)))
        _fail(t);
      else
        e_9 = t;
      if(((f_9 != NULL) && (f_9 != t)))
        _fail(t);
      else
        f_9 = t;
      t = not_null(c_9);
      t = int_to_string_0_0(t);
      if(((g_9 != NULL) && (g_9 != t)))
        _fail(t);
      else
        g_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_9)), term_f_5), not_null(g_9)), term_e_5), not_null(b_9));
      t = concat_strings_0_0(t);
      if(((h_9 != NULL) && (h_9 != t)))
        _fail(t);
      else
        h_9 = t;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm i_9 = NULL;
  ATerm c_0 (ATerm t)
  {
    t = i_76(t);
    if(((i_9 != NULL) && (i_9 != t)))
      _fail(t);
    else
      i_9 = t;
    return(t);
  }
  t = fetch_1_0(c_0, t);
  t = not_null(i_9);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_9 = NULL;
  if(((j_9 != NULL) && (j_9 != t)))
    _fail(t);
  else
    j_9 = t;
  {
    ATerm g_5 = t;
    int h_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_28), term_u_27), term_f_27), term_c_25), term_q_24), term_k_24), term_c_24), term_c_23), term_t_19), term_q_18), term_m_16), term_q_14), term_n_12), term_f_12), term_s_7), term_g_7), term_c_7), term_y_6), term_u_6), term_q_6), term_m_6), term_i_6), term_e_6), term_a_6), term_w_5), term_s_5), term_o_5), term_k_5);
        {
          ATerm e_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm m_28 = ATgetArgument(t, 0);
                if(((j_9 != NULL) && (j_9 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  j_9 = ATgetArgument(t, 1);
                {
                  ATerm q_28 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(e_0, t);
        }
        ;
        LocalPopChoice(h_5);
      }
    else
      {
        t = g_5;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(j_9));
      }
  }
  return(t);
}
ATerm n_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
  if(match_cons(t, sym_WaitStatus_3))
    {
      ATerm r_28 = ATgetArgument(t, 0);
      if(((l_9 != NULL) && (l_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_9 = ATgetArgument(t, 1);
      {
        ATerm x_28 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(l_9);
  {
    ATerm y_28 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_28;
      }
    t = signal_from_number_0_0(t);
    t = signal_to_descr_0_0(t);
    if(((m_9 != NULL) && (m_9 != t)))
      _fail(t);
    else
      m_9 = t;
    if(((n_9 != NULL) && (n_9 != t)))
      _fail(t);
    else
      n_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_9)), term_a_29));
    t = printnl_0_0(t);
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm k_9 = NULL;
  if(((k_9 != NULL) && (k_9 != t)))
    _fail(t);
  else
    k_9 = t;
  t = try_1_0(n_0, t);
  t = not_null(k_9);
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm o_9 = NULL;
  if(((o_9 != NULL) && (o_9 != t)))
    _fail(t);
  else
    o_9 = t;
  t = SSL_waitpid(not_null(o_9));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  if(((q_9 != NULL) && (q_9 != t)))
    _fail(t);
  else
    q_9 = t;
  t = fork_0_0(t);
  if(((r_9 != NULL) && (r_9 != t)))
    _fail(t);
  else
    r_9 = t;
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_9 = NULL;
        if(((s_9 != NULL) && (s_9 != t)))
          _fail(t);
        else
          s_9 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(q_9);
        t = p_70(t);
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_9), not_null(q_9));
        t = q_70(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm r_70 (ATerm), ATerm t)
{
  ATerm t_9 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm u_9 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((u_9 != NULL) && (u_9 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_9 = ATgetArgument(t, 0);
        if(((t_9 != NULL) && (t_9 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          t_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(u_9);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm d_29 = ATgetArgument(t, 0);
        if(((ATgetType(d_29) != AT_INT) || (ATgetInt((ATermInt) d_29) != 0)))
          _fail(t);
        {
          ATerm e_29 = ATgetArgument(t, 1);
        }
        {
          ATerm f_29 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(t_9);
    return(t);
  }
  t = fork_2_0(r_70, o_0, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_9 != NULL) && (v_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_9 = ATgetArgument(t, 0);
      if(((w_9 != NULL) && (w_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(w_9));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(p_0, t);
  }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm x_9 = NULL;
  if(((x_9 != NULL) && (x_9 != t)))
    _fail(t);
  else
    x_9 = t;
  t = SSL_table_keys(not_null(x_9));
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_9 = NULL;
  if(((y_9 != NULL) && (y_9 != t)))
    _fail(t);
  else
    y_9 = t;
  t = table_keys_0_0(t);
  {
    ATerm q_0 (ATerm t)
    {
      ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
      if(((z_9 != NULL) && (z_9 != t)))
        _fail(t);
      else
        z_9 = t;
      if(((a_10 != NULL) && (a_10 != t)))
        _fail(t);
      else
        a_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_9), not_null(z_9));
      t = table_get_0_0(t);
      if(((b_10 != NULL) && (b_10 != t)))
        _fail(t);
      else
        b_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_9), not_null(b_10));
      return(t);
    }
    t = map_1_0(q_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
    if(((c_10 != NULL) && (c_10 != t)))
      _fail(t);
    else
      c_10 = t;
    if(((d_10 != NULL) && (d_10 != t)))
      _fail(t);
    else
      d_10 = t;
    t = term_s_4;
    t = get_config_0_0(t);
    if(((e_10 != NULL) && (e_10 != t)))
      _fail(t);
    else
      e_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_10), term_w_24);
    t = geq_0_0(t);
    t = not_null(c_10);
    t = v_87(t);
    return(t);
  }
  t = try_1_0(r_0, t);
  return(t);
}
ATerm error_0_0 (ATerm t)
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
  t = (ATerm) ATmakeAppl(sym__2, term_z_28, not_null(h_10));
  t = printnl_0_0(t);
  t = not_null(f_10);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  if(((i_10 != NULL) && (i_10 != t)))
    _fail(t);
  else
    i_10 = t;
  if(((j_10 != NULL) && (j_10 != t)))
    _fail(t);
  else
    j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_29, (ATerm) ATmakeAppl(sym_Tool_1, not_null(i_10)));
  t = table_get_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_29 = ATgetFirst((ATermList) t);
      if(match_cons(h_29, sym__2))
        {
          if(((k_10 != NULL) && (k_10 != ATgetArgument(h_29, 0))))
            _fail(ATgetArgument(h_29, 0));
          else
            k_10 = ATgetArgument(h_29, 0);
          if(((l_10 != NULL) && (l_10 != ATgetArgument(h_29, 1))))
            _fail(ATgetArgument(h_29, 1));
          else
            l_10 = ATgetArgument(h_29, 1);
        }
      else
        _fail(t);
      {
        ATerm i_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(l_10);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_10 != NULL) && (m_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_10 = ATgetArgument(t, 0);
      if(((n_10 != NULL) && (n_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((o_10 != NULL) && (o_10 != t)))
    _fail(t);
  else
    o_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_29, (ATerm) ATmakeAppl(sym_Tool_1, not_null(m_10)));
  t = table_get_0_0(t);
  {
    ATerm s_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if(((n_10 != NULL) && (n_10 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            n_10 = ATgetArgument(t, 0);
          if(((p_10 != NULL) && (p_10 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            p_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(s_0, t);
    t = not_null(p_10);
  }
  return(t);
}
ATerm filter_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = filter_1_0(p_83, t);
              return(t);
            }
            t = Cons_2_0(p_83, t_0, t);
            ;
            LocalPopChoice(m_29);
          }
        else
          {
            t = l_29;
            {
              ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
              if(((r_10 != NULL) && (r_10 != t)))
                _fail(t);
              else
                r_10 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((s_10 != NULL) && (s_10 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    s_10 = ATgetFirst((ATermList) t);
                  if(((t_10 != NULL) && (t_10 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    t_10 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(t_10);
              if(((u_10 != NULL) && (u_10 != t)))
                _fail(t);
              else
                u_10 = t;
              t = filter_1_0(p_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm j_85 (ATerm), ATerm t)
{
  ATerm v_10 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = j_85(t);
      t = v_10(t);
      return(t);
    }
    t = try_1_0(u_0, t);
    return(t);
  }
  t = v_10(t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_o_29;
  t = table_get_0_0(t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm p_29 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_29;
      }
  }
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm w_10 = NULL;
  if(((w_10 != NULL) && (w_10 != t)))
    _fail(t);
  else
    w_10 = t;
  t = repeat_1_0(v_0, t);
  t = not_null(w_10);
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
  if(((x_10 != NULL) && (x_10 != t)))
    _fail(t);
  else
    x_10 = t;
  if(((y_10 != NULL) && (y_10 != t)))
    _fail(t);
  else
    y_10 = t;
  if(((z_10 != NULL) && (z_10 != t)))
    _fail(t);
  else
    z_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATinsert(ATempty, not_null(z_10)));
  t = printnl_0_0(t);
  t = not_null(x_10);
  return(t);
}
ATerm say_1_0 (ATerm o_71 (ATerm), ATerm t)
{
  ATerm a_11 = NULL;
  if(((a_11 != NULL) && (a_11 != t)))
    _fail(t);
  else
    a_11 = t;
  t = o_71(t);
  t = debug_0_0(t);
  t = not_null(a_11);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
    if(((b_11 != NULL) && (b_11 != t)))
      _fail(t);
    else
      b_11 = t;
    if(((c_11 != NULL) && (c_11 != t)))
      _fail(t);
    else
      c_11 = t;
    t = term_s_4;
    t = get_config_0_0(t);
    if(((d_11 != NULL) && (d_11 != t)))
      _fail(t);
    else
      d_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), term_a_7);
    t = geq_0_0(t);
    t = not_null(b_11);
    t = u_87(t);
    return(t);
  }
  t = try_1_0(w_0, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
    if(((e_11 != NULL) && (e_11 != t)))
      _fail(t);
    else
      e_11 = t;
    if(((f_11 != NULL) && (f_11 != t)))
      _fail(t);
    else
      f_11 = t;
    t = term_s_4;
    t = get_config_0_0(t);
    if(((g_11 != NULL) && (g_11 != t)))
      _fail(t);
    else
      g_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_11), term_u_5);
    t = geq_0_0(t);
    t = not_null(e_11);
    t = w_87(t);
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
  ATerm h_11 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_11 != NULL) && (h_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_11 = ATgetArgument(t, 0);
      if(((h_11 != NULL) && (h_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((i_11 != NULL) && (i_11 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        i_11 = ATgetFirst((ATermList) t);
      if(((j_11 != NULL) && (j_11 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        j_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((k_11 != NULL) && (k_11 != t)))
    _fail(t);
  else
    k_11 = t;
  t = e_80(t);
  {
    ATerm y_0 (ATerm t)
    {
      ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
      if(((l_11 != NULL) && (l_11 != t)))
        _fail(t);
      else
        l_11 = t;
      if(((m_11 != NULL) && (m_11 != t)))
        _fail(t);
      else
        m_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_11), not_null(l_11));
      t = d_80(t);
      if(((n_11 != NULL) && (n_11 != t)))
        _fail(t);
      else
        n_11 = t;
      return(t);
    }
    t = fetch_1_0(y_0, t);
    t = not_null(j_11);
  }
  return(t);
}
ATerm union_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_11 != NULL) && (o_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_11 = ATgetArgument(t, 0);
      if(((p_11 != NULL) && (p_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((q_11 != NULL) && (q_11 != t)))
    _fail(t);
  else
    q_11 = t;
  t = not_null(o_11);
  {
    ATerm s_11 (ATerm t)
    {
      ATerm q_29 = t;
      int r_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(p_11);
          ;
          LocalPopChoice(r_29);
        }
      else
        {
          t = q_29;
          {
            ATerm s_29 = t;
            int t_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_0 (ATerm t)
                {
                  t = not_null(p_11);
                  return(t);
                }
                t = HdMember_p__2_0(a_80, z_0, t);
                t = s_11(t);
                ;
                LocalPopChoice(t_29);
              }
            else
              {
                t = s_29;
                t = Cons_2_0(_id, s_11, t);
              }
          }
        }
      return(t);
    }
    t = s_11(t);
    if(((r_11 != NULL) && (r_11 != t)))
      _fail(t);
    else
      r_11 = t;
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
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((t_11 != NULL) && (t_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_11 = ATgetArgument(t, 0);
      if(((u_11 != NULL) && (u_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_11 = ATgetArgument(t, 1);
      if(((v_11 != NULL) && (v_11 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        v_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((w_11 != NULL) && (w_11 != t)))
    _fail(t);
  else
    w_11 = t;
  if(((x_11 != NULL) && (x_11 != t)))
    _fail(t);
  else
    x_11 = t;
  if(((y_11 != NULL) && (y_11 != t)))
    _fail(t);
  else
    y_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_11), not_null(u_11));
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        ;
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = (ATerm) ATempty;
      }
    if(((z_11 != NULL) && (z_11 != t)))
      _fail(t);
    else
      z_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_11), not_null(v_11));
    t = union_0_0(t);
    if(((a_12 != NULL) && (a_12 != t)))
      _fail(t);
    else
      a_12 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(t_11), not_null(u_11), not_null(a_12));
    t = set_0_0(t);
    t = not_null(w_11);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_12 != NULL) && (c_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_12 = ATgetArgument(t, 0);
      if(((b_12 != NULL) && (b_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(b_12);
  {
    ATerm a_1 (ATerm t)
    {
      ATerm d_12 = NULL,e_12 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((d_12 != NULL) && (d_12 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            d_12 = ATgetArgument(t, 0);
          if(((e_12 != NULL) && (e_12 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(c_12), not_null(d_12), not_null(e_12));
      t = y_87(t);
      return(t);
    }
    t = map_1_0(a_1, t);
  }
  return(t);
}
ATerm r_12 (ATerm i_12, ATerm j_12, ATerm t)
{
  ATerm k_12 = NULL;
  t = not_null(i_12);
  if(((k_12 != NULL) && (k_12 != t)))
    _fail(t);
  else
    k_12 = t;
  t = SSL_fclose(not_null(k_12));
  return(t);
}
ATerm s_12 (ATerm m_12, ATerm t)
{
  ATerm o_12 = NULL;
  t = not_null(m_12);
  if(((o_12 != NULL) && (o_12 != t)))
    _fail(t);
  else
    o_12 = t;
  t = SSL_fclose(not_null(o_12));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL;
  if(((q_12 != NULL) && (q_12 != t)))
    _fail(t);
  else
    q_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_12 = ATgetArgument(t, 0);
      {
        ATerm w_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_12(not_null(p_12), not_null(q_12), t);
            ;
            LocalPopChoice(x_29);
          }
        else
          {
            t = w_29;
            t = s_12(not_null(q_12), t);
          }
      }
    }
  else
    {
      t = s_12(not_null(q_12), t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm t_12 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((t_12 != NULL) && (t_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(t_12));
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_12 != NULL) && (u_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_12 = ATgetArgument(t, 0);
      if(((v_12 != NULL) && (v_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(u_12), not_null(v_12));
  if(((w_12 != NULL) && (w_12 != t)))
    _fail(t);
  else
    w_12 = t;
  if(((x_12 != NULL) && (x_12 != t)))
    _fail(t);
  else
    x_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_12));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL;
  t = SSL_stdin_stream();
  if(((y_12 != NULL) && (y_12 != t)))
    _fail(t);
  else
    y_12 = t;
  if(((z_12 != NULL) && (z_12 != t)))
    _fail(t);
  else
    z_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_12));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  t = SSL_stdout_stream();
  if(((a_13 != NULL) && (a_13 != t)))
    _fail(t);
  else
    a_13 = t;
  if(((b_13 != NULL) && (b_13 != t)))
    _fail(t);
  else
    b_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_13));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  t = SSL_stderr_stream();
  if(((c_13 != NULL) && (c_13 != t)))
    _fail(t);
  else
    c_13 = t;
  if(((d_13 != NULL) && (d_13 != t)))
    _fail(t);
  else
    d_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_13));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm f_13 = NULL;
  if(((f_13 != NULL) && (f_13 != t)))
    _fail(t);
  else
    f_13 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(f_13);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(f_13);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(f_13);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL;
  if(((g_13 != NULL) && (g_13 != t)))
    _fail(t);
  else
    g_13 = t;
  if(((h_13 != NULL) && (h_13 != t)))
    _fail(t);
  else
    h_13 = t;
  t = not_null(g_13);
  if(((i_13 != NULL) && (i_13 != t)))
    _fail(t);
  else
    i_13 = t;
  t = SSL_explode_term(not_null(i_13));
  if(match_cons(t, sym__2))
    {
      ATerm y_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_29 = ATgetArgument(t, 1);
        if(((ATgetType(z_29) == AT_LIST) && !(ATisEmpty(z_29))))
          {
            if(((k_13 != NULL) && (k_13 != ATgetFirst((ATermList) z_29))))
              _fail(ATgetFirst((ATermList) z_29));
            else
              k_13 = ATgetFirst((ATermList) z_29);
            if(((j_13 != NULL) && (j_13 != (ATerm) ATgetNext((ATermList) z_29))))
              _fail((ATerm) ATgetNext((ATermList) z_29));
            else
              j_13 = (ATerm) ATgetNext((ATermList) z_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(k_13);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm l_13 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      if(((l_13 != NULL) && (l_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(l_13);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_30 = ATgetArgument(t, 0);
      ATerm b_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        {
          ATerm e_30 = t;
          int f_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(b_1, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(f_30);
            }
          else
            {
              t = e_30;
              t = _2_0(is_string_0_0, _id, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL;
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
      if(((m_13 != NULL) && (m_13 != t)))
        _fail(t);
      else
        m_13 = t;
      if(((n_13 != NULL) && (n_13 != t)))
        _fail(t);
      else
        n_13 = t;
      t = not_null(m_13);
      if(((o_13 != NULL) && (o_13 != t)))
        _fail(t);
      else
        o_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_13), term_j_30);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      t = debug_1_0(c_1, t);
      _fail(t);
    }
  if(((p_13 != NULL) && (p_13 != t)))
    _fail(t);
  else
    p_13 = t;
  t = read_from_stream_0_0(t);
  if(((q_13 != NULL) && (q_13 != t)))
    _fail(t);
  else
    q_13 = t;
  t = not_null(p_13);
  t = fclose_0_0(t);
  t = not_null(q_13);
  return(t);
}
ATerm can_read_file_0_0 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL;
  if(((r_13 != NULL) && (r_13 != t)))
    _fail(t);
  else
    r_13 = t;
  if(((s_13 != NULL) && (s_13 != t)))
    _fail(t);
  else
    s_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_13), (ATerm) ATinsert(ATempty, term_k_30));
  t = access_0_0(t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_l_30;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_m_30;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(o_30);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_30;
      {
        ATerm p_30 = t;
        int q_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_30 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_30;
              }
            t = debug_1_0(d_1, t);
            ;
            LocalPopChoice(q_30);
          }
        else
          {
            t = p_30;
            t = debug_1_0(e_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = debug_1_0(g_1, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_s_30;
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = debug_1_0(i_1, t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_t_30;
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = say_1_0(k_1, t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = say_1_0(m_1, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_v_30;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = say_1_0(o_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
  if(((t_13 != NULL) && (t_13 != t)))
    _fail(t);
  else
    t_13 = t;
  t = if_verbose5_1_0(f_1, t);
  {
    ATerm w_30 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_29, (ATerm) ATmakeAppl(sym_Imported_1, not_null(t_13)));
        t = table_get_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_30;
      }
    if(((u_13 != NULL) && (u_13 != t)))
      _fail(t);
    else
      u_13 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_g_29, term_x_30, (ATerm) ATinsert(ATempty, not_null(t_13)));
    t = table_put_0_0(t);
    t = not_null(u_13);
    t = if_verbose4_1_0(h_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(j_1, t);
    if(((v_13 != NULL) && (v_13 != t)))
      _fail(t);
    else
      v_13 = t;
    if(((w_13 != NULL) && (w_13 != t)))
      _fail(t);
    else
      w_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_29, not_null(w_13));
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(l_1, t);
    t = (ATerm) ATmakeAppl(sym__3, term_g_29, (ATerm)ATmakeAppl(sym_Imported_1, not_null(t_13)), (ATerm) ATempty);
    t = table_put_0_0(t);
    t = if_verbose4_1_0(n_1, t);
  }
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm x_13 = NULL;
  if(((x_13 != NULL) && (x_13 != t)))
    _fail(t);
  else
    x_13 = t;
  t = SSL_getenv(not_null(x_13));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
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
      {
        ATerm b_31 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_31;
            t = getenv_0_0(t);
            ;
            LocalPopChoice(c_31);
          }
        else
          {
            t = b_31;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_e_31;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_f_31;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm y_13 = NULL;
  t = if_verbose5_1_0(p_1, t);
  if(((y_13 != NULL) && (y_13 != t)))
    _fail(t);
  else
    y_13 = t;
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_31;
        t = table_get_0_0(t);
        ;
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = not_null(y_13);
    t = if_verbose5_1_0(r_1, t);
  }
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_j_31;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = debug_1_0(w_1, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_j_31;
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_g_29;
  t = table_getlist_0_0(t);
  t = debug_1_0(y_1, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(t_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm n_31 = t;
        int o_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(o_31);
          }
        else
          {
            t = n_31;
            t = xtc_find_loc_0_0(t);
          }
        t = if_verbose5_1_0(v_1, t);
      }
      ;
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      {
        ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
        if(((z_13 != NULL) && (z_13 != t)))
          _fail(t);
        else
          z_13 = t;
        if(((a_14 != NULL) && (a_14 != t)))
          _fail(t);
        else
          a_14 = t;
        t = not_null(z_13);
        if(((b_14 != NULL) && (b_14 != t)))
          _fail(t);
        else
          b_14 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_31), not_null(b_14)), term_p_31);
        t = error_0_0(t);
        t = if_verbose5_1_0(x_1, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm c_90 (ATerm), ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  if(((c_14 != NULL) && (c_14 != t)))
    _fail(t);
  else
    c_14 = t;
  t = c_90(t);
  t = xtc_find_warning_0_0(t);
  if(((d_14 != NULL) && (d_14 != t)))
    _fail(t);
  else
    d_14 = t;
  t = not_null(c_14);
  if(((e_14 != NULL) && (e_14 != t)))
    _fail(t);
  else
    e_14 = t;
  if(((f_14 != NULL) && (f_14 != t)))
    _fail(t);
  else
    f_14 = t;
  if(((g_14 != NULL) && (g_14 != t)))
    _fail(t);
  else
    g_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_14), not_null(g_14));
  t = call_0_0(t);
  t = not_null(e_14);
  return(t);
}
ATerm assert_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL;
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
  if(((j_14 != NULL) && (j_14 != t)))
    _fail(t);
  else
    j_14 = t;
  t = n_86(t);
  if(((k_14 != NULL) && (k_14 != t)))
    _fail(t);
  else
    k_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(k_14), not_null(h_14), not_null(i_14));
  t = table_push_0_0(t);
  {
    ATerm r_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_14), term_t_31);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(s_31);
      }
    else
      {
        t = r_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_14 != NULL) && (l_14 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_14 = ATgetFirst((ATermList) t);
        if(((m_14 != NULL) && (m_14 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          m_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(k_14), term_t_31, (ATerm) ATinsert(CheckATermList(not_null(m_14)), (ATerm) ATinsert(CheckATermList(not_null(l_14)), not_null(h_14))));
    t = table_put_0_0(t);
    t = not_null(j_14);
  }
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_u_31;
  return(t);
}
ATerm obsolete_1_0 (ATerm r_71 (ATerm), ATerm t)
{
  ATerm n_14 = NULL;
  if(((n_14 != NULL) && (n_14 != t)))
    _fail(t);
  else
    n_14 = t;
  t = r_71(t);
  t = debug_1_0(z_1, t);
  t = not_null(n_14);
  return(t);
}
ATerm b_15 (ATerm r_14, ATerm t)
{
  ATerm s_14 = NULL;
  t = not_null(r_14);
  if(((s_14 != NULL) && (s_14 != t)))
    _fail(t);
  else
    s_14 = t;
  t = not_null(r_14);
  {
    ATerm v_31 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_31 = ATgetArgument(t, 0);
            ATerm x_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_31;
      }
    t = obsolete_1_0(a_2, t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_14), term_b_5);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm c_15 (ATerm t_14, ATerm u_14, ATerm v_14, ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL;
  t = not_null(t_14);
  if(((w_14 != NULL) && (w_14 != t)))
    _fail(t);
  else
    w_14 = t;
  t = not_null(u_14);
  if(((x_14 != NULL) && (x_14 != t)))
    _fail(t);
  else
    x_14 = t;
  t = SSL_open_file(not_null(w_14), not_null(x_14));
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  if(((y_14 != NULL) && (y_14 != t)))
    _fail(t);
  else
    y_14 = t;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
      {
        ATerm z_31 = t;
        int a_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_15(not_null(y_14), t);
            ;
            LocalPopChoice(a_32);
          }
        else
          {
            t = z_31;
            t = c_15(not_null(z_14), not_null(a_15), not_null(y_14), t);
          }
      }
    }
  else
    {
      t = b_15(not_null(y_14), t);
    }
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_15 != NULL) && (d_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_15 = ATgetArgument(t, 0);
      if(((e_15 != NULL) && (e_15 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(d_15), not_null(e_15));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL;
  if(((f_15 != NULL) && (f_15 != t)))
    _fail(t);
  else
    f_15 = t;
  if(((g_15 != NULL) && (g_15 != t)))
    _fail(t);
  else
    g_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_15), (ATerm) ATinsert(ATempty, term_b_32));
  t = access_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = file_exists_0_0(t);
  t = new_file_0_0(t);
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  if(((h_15 != NULL) && (h_15 != t)))
    _fail(t);
  else
    h_15 = t;
  t = term_c_32;
  t = new_0_0(t);
  if(((i_15 != NULL) && (i_15 != t)))
    _fail(t);
  else
    i_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_15), term_d_32);
  t = conc_strings_0_0(t);
  t = try_1_0(b_2, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  t = new_file_0_0(t);
  if(((k_15 != NULL) && (k_15 != t)))
    _fail(t);
  else
    k_15 = t;
  if(((l_15 != NULL) && (l_15 != t)))
    _fail(t);
  else
    l_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), term_b_5);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), term_c_32);
  t = assert_1_0(c_2, t);
  t = not_null(l_15);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL;
  if(((n_15 != NULL) && (n_15 != t)))
    _fail(t);
  else
    n_15 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
      t = not_null(n_15);
      if(((p_15 != NULL) && (p_15 != t)))
        _fail(t);
      else
        p_15 = t;
      t = xtc_new_file_0_0(t);
      if(((q_15 != NULL) && (q_15 != t)))
        _fail(t);
      else
        q_15 = t;
      if(((r_15 != NULL) && (r_15 != t)))
        _fail(t);
      else
        r_15 = t;
      t = m_0(t);
      if(((s_15 != NULL) && (s_15 != t)))
        _fail(t);
      else
        s_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_15), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_15)), term_f_32));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(q_15);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_15));
    }
  else
    {
      ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((o_15 != NULL) && (o_15 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(o_15);
      if(((t_15 != NULL) && (t_15 != t)))
        _fail(t);
      else
        t_15 = t;
      t = not_null(n_15);
      if(((u_15 != NULL) && (u_15 != t)))
        _fail(t);
      else
        u_15 = t;
      t = not_null(t_15);
      t = xtc_new_file_0_0(t);
      if(((v_15 != NULL) && (v_15 != t)))
        _fail(t);
      else
        v_15 = t;
      if(((w_15 != NULL) && (w_15 != t)))
        _fail(t);
      else
        w_15 = t;
      t = m_0(t);
      if(((x_15 != NULL) && (x_15 != t)))
        _fail(t);
      else
        x_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_15), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_15)), term_f_32), not_null(t_15)), term_g_32));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(v_15);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_15));
    }
  return(t);
}
ATerm stdin_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdin_0)))
    _fail(t);
  return(t);
}
ATerm FILE_1_0 (ATerm m_68 (ATerm), ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
  if(((b_16 != NULL) && (b_16 != t)))
    _fail(t);
  else
    b_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((z_15 != NULL) && (z_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((c_16 != NULL) && (c_16 != t)))
    _fail(t);
  else
    c_16 = t;
  t = SSLgetAnnotations(not_null(b_16));
  if(((y_15 != NULL) && (y_15 != t)))
    _fail(t);
  else
    y_15 = t;
  t = not_null(z_15);
  t = m_68(t);
  if(((a_16 != NULL) && (a_16 != t)))
    _fail(t);
  else
    a_16 = t;
  if(((e_16 != NULL) && (e_16 != t)))
    _fail(t);
  else
    e_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(a_16)), not_null(y_15));
  if(((d_16 != NULL) && (d_16 != t)))
    _fail(t);
  else
    d_16 = t;
  return(t);
}
ATerm xtc_transform_2_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm t)
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_32 = t;
      int k_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(k_32);
        }
      else
        {
          t = j_32;
          t = stdin_0_0(t);
        }
      LocalPopChoice(i_32);
      t = xtc_transform_file_2_0(e_90, f_90, t);
    }
  else
    {
      t = h_32;
      t = xtc_transform_term_2_0(e_90, f_90, t);
    }
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_l_32;
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
  if(((f_16 != NULL) && (f_16 != t)))
    _fail(t);
  else
    f_16 = t;
  t = term_c_32;
  t = pass_width_0_0(t);
  if(((g_16 != NULL) && (g_16 != t)))
    _fail(t);
  else
    g_16 = t;
  t = not_null(f_16);
  if(((h_16 != NULL) && (h_16 != t)))
    _fail(t);
  else
    h_16 = t;
  t = term_c_32;
  t = pass_verbose_0_0(t);
  if(((i_16 != NULL) && (i_16 != t)))
    _fail(t);
  else
    i_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_16), not_null(i_16));
  t = conc_0_0(t);
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  t = xtc_transform_2_0(d_2, e_2, t);
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_16 != NULL) && (j_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_16 = ATgetArgument(t, 0);
      if(((k_16 != NULL) && (k_16 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_copy(not_null(j_16), not_null(k_16));
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
  ATerm d_17 (ATerm o_16, ATerm p_16, ATerm t)
  {
    ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
    t = not_null(o_16);
    if(((q_16 != NULL) && (q_16 != t)))
      _fail(t);
    else
      q_16 = t;
    t = not_null(p_16);
    if(((r_16 != NULL) && (r_16 != t)))
      _fail(t);
    else
      r_16 = t;
    t = k_0(t);
    if(((s_16 != NULL) && (s_16 != t)))
      _fail(t);
    else
      s_16 = t;
    {
      ATerm m_32 = t;
      int n_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          ;
          LocalPopChoice(n_32);
        }
      else
        {
          t = m_32;
          t = stderr_0_0(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_16), not_null(s_16));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_16));
    }
    return(t);
  }
  ATerm e_17 (ATerm t_16, ATerm u_16, ATerm t)
  {
    ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
    t = not_null(t_16);
    if(((v_16 != NULL) && (v_16 != t)))
      _fail(t);
    else
      v_16 = t;
    t = not_null(u_16);
    if(((w_16 != NULL) && (w_16 != t)))
      _fail(t);
    else
      w_16 = t;
    t = k_0(t);
    if(((x_16 != NULL) && (x_16 != t)))
      _fail(t);
    else
      x_16 = t;
    {
      ATerm o_32 = t;
      if((PushChoice() == 0))
        {
          ATerm p_32 = t;
          int q_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              ;
              LocalPopChoice(q_32);
            }
          else
            {
              t = p_32;
              {
                ATerm r_32 = t;
                int s_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = stderr_0_0(t);
                    ;
                    LocalPopChoice(s_32);
                  }
                else
                  {
                    t = r_32;
                    {
                      ATerm y_16 = NULL;
                      if(((y_16 != NULL) && (y_16 != t)))
                        _fail(t);
                      else
                        y_16 = t;
                      if(((v_16 != NULL) && (v_16 != t)))
                        _fail(t);
                      else
                        v_16 = t;
                      t = not_null(y_16);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = o_32;
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_16), not_null(x_16));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_16));
    }
    return(t);
  }
  ATerm z_16 = NULL,a_17 = NULL;
  if(((z_16 != NULL) && (z_16 != t)))
    _fail(t);
  else
    z_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((a_17 != NULL) && (a_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_17(not_null(a_17), not_null(z_16), t);
        ;
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        {
          ATerm v_32 = t;
          int w_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_17(not_null(a_17), not_null(z_16), t);
              ;
              LocalPopChoice(w_32);
            }
          else
            {
              t = v_32;
              {
                ATerm b_17 = NULL,c_17 = NULL;
                t = not_null(a_17);
                if(((b_17 != NULL) && (b_17 != t)))
                  _fail(t);
                else
                  b_17 = t;
                t = not_null(z_16);
                if(((c_17 != NULL) && (c_17 != t)))
                  _fail(t);
                else
                  c_17 = t;
                t = k_0(t);
                if(((b_17 != NULL) && (b_17 != t)))
                  _fail(t);
                else
                  b_17 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_17));
              }
            }
        }
      }
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm f_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_32 = ATgetFirst((ATermList) t);
      if(((f_17 != NULL) && (f_17 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        f_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(f_17);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_17 != NULL) && (g_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_17 = ATgetArgument(t, 0);
      if(((h_17 != NULL) && (h_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((i_17 != NULL) && (i_17 != t)))
    _fail(t);
  else
    i_17 = t;
  if(((j_17 != NULL) && (j_17 != t)))
    _fail(t);
  else
    j_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_17), not_null(h_17));
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        t = Tl_0_0(t);
        ;
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        t = (ATerm) ATempty;
      }
    if(((k_17 != NULL) && (k_17 != t)))
      _fail(t);
    else
      k_17 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(g_17), not_null(h_17), not_null(k_17));
    t = table_put_0_0(t);
    t = not_null(i_17);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm k_86 (ATerm), ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  if(((l_17 != NULL) && (l_17 != t)))
    _fail(t);
  else
    l_17 = t;
  t = k_86(t);
  if(((m_17 != NULL) && (m_17 != t)))
    _fail(t);
  else
    m_17 = t;
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_17), term_t_31);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((o_17 != NULL) && (o_17 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          o_17 = ATgetFirst((ATermList) t);
        if(((n_17 != NULL) && (n_17 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          n_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(m_17), term_t_31, not_null(n_17));
    t = table_put_0_0(t);
    t = not_null(o_17);
    {
      ATerm f_2 (ATerm t)
      {
        ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
        if(((p_17 != NULL) && (p_17 != t)))
          _fail(t);
        else
          p_17 = t;
        if(((q_17 != NULL) && (q_17 != t)))
          _fail(t);
        else
          q_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_17), not_null(p_17));
        t = table_pop_0_0(t);
        if(((r_17 != NULL) && (r_17 != t)))
          _fail(t);
        else
          r_17 = t;
        return(t);
      }
      t = map_1_0(f_2, t);
      t = not_null(l_17);
    }
  }
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm s_17 = NULL;
  if(((s_17 != NULL) && (s_17 != t)))
    _fail(t);
  else
    s_17 = t;
  t = SSL_remove(not_null(s_17));
  return(t);
}
ATerm restore_always_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm t)
{
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_87(t);
      t = g_87(t);
      ;
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      t = g_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_86 (ATerm), ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
  if(((t_17 != NULL) && (t_17 != t)))
    _fail(t);
  else
    t_17 = t;
  t = j_86(t);
  if(((u_17 != NULL) && (u_17 != t)))
    _fail(t);
  else
    u_17 = t;
  if(((v_17 != NULL) && (v_17 != t)))
    _fail(t);
  else
    v_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), term_t_31);
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(f_33);
      }
    else
      {
        t = e_33;
        t = (ATerm) ATempty;
      }
    if(((w_17 != NULL) && (w_17 != t)))
      _fail(t);
    else
      w_17 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(u_17), term_t_31, (ATerm) ATinsert(CheckATermList(not_null(w_17)), (ATerm) ATempty));
    t = table_put_0_0(t);
    t = not_null(t_17);
  }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm o_89 (ATerm), ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL;
  t = begin_scope_1_0(g_2, t);
  {
    ATerm h_2 (ATerm t)
    {
      ATerm z_17 = NULL;
      if(((z_17 != NULL) && (z_17 != t)))
        _fail(t);
      else
        z_17 = t;
      {
        ATerm g_33 = t;
        int h_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_i_33;
            t = table_get_0_0(t);
            ;
            LocalPopChoice(h_33);
          }
        else
          {
            t = g_33;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((y_17 != NULL) && (y_17 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              y_17 = ATgetFirst((ATermList) t);
            if(((x_17 != NULL) && (x_17 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              x_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(y_17);
        t = map_1_0(i_2, t);
        t = not_null(z_17);
        t = end_scope_1_0(j_2, t);
      }
      return(t);
    }
    t = restore_always_2_0(o_89, h_2, t);
  }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      t = term_l_33;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm p_89 (ATerm), ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm m_33 = t;
    int n_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
        if(((a_18 != NULL) && (a_18 != t)))
          _fail(t);
        else
          a_18 = t;
        if(((b_18 != NULL) && (b_18 != t)))
          _fail(t);
        else
          b_18 = t;
        t = term_g_32;
        t = get_config_0_0(t);
        if(((c_18 != NULL) && (c_18 != t)))
          _fail(t);
        else
          c_18 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_18));
        ;
        LocalPopChoice(n_33);
      }
    else
      {
        t = m_33;
        t = term_z_4;
      }
    t = p_89(t);
    t = copy_to_1_0(l_2, t);
    return(t);
  }
  t = xtc_temp_files_1_0(k_2, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  if(((f_18 != NULL) && (f_18 != t)))
    _fail(t);
  else
    f_18 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(f_18);
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((g_18 != NULL) && (g_18 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            g_18 = ATgetFirst((ATermList) t);
          if(((h_18 != NULL) && (h_18 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(h_18);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((i_18 != NULL) && (i_18 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            i_18 = ATgetFirst((ATermList) t);
          if(((j_18 != NULL) && (j_18 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(g_18);
      if(((k_18 != NULL) && (k_18 != t)))
        _fail(t);
      else
        k_18 = t;
      t = not_null(i_18);
      if(((l_18 != NULL) && (l_18 != t)))
        _fail(t);
      else
        l_18 = t;
      t = not_null(j_18);
      if(((m_18 != NULL) && (m_18 != t)))
        _fail(t);
      else
        m_18 = t;
      t = not_null(f_18);
      if(((n_18 != NULL) && (n_18 != t)))
        _fail(t);
      else
        n_18 = t;
      t = not_null(k_18);
      t = h_0(t);
      t = not_null(n_18);
      if(((o_18 != NULL) && (o_18 != t)))
        _fail(t);
      else
        o_18 = t;
      t = not_null(l_18);
      t = i_0(t);
      if(((p_18 != NULL) && (p_18 != t)))
        _fail(t);
      else
        p_18 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(m_18)), not_null(p_18));
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm r_18 = NULL;
  if(((r_18 != NULL) && (r_18 != t)))
    _fail(t);
  else
    r_18 = t;
  if(match_string(t, "-k"))
    {
      t = not_null(r_18);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = not_null(r_18);
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  if(((s_18 != NULL) && (s_18 != t)))
    _fail(t);
  else
    s_18 = t;
  if(((t_18 != NULL) && (t_18 != t)))
    _fail(t);
  else
    t_18 = t;
  t = string_to_int_0_0(t);
  if(((u_18 != NULL) && (u_18 != t)))
    _fail(t);
  else
    u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_33, not_null(u_18));
  t = set_config_0_0(t);
  t = not_null(s_18);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_p_33;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_2, n_2, o_2, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm v_18 = NULL;
  if(((v_18 != NULL) && (v_18 != t)))
    _fail(t);
  else
    v_18 = t;
  t = SSL_string_to_int(not_null(v_18));
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm x_18 = NULL;
  if(((x_18 != NULL) && (x_18 != t)))
    _fail(t);
  else
    x_18 = t;
  if(match_string(t, "-S"))
    {
      t = not_null(x_18);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = not_null(x_18);
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm y_18 = NULL;
  if(((y_18 != NULL) && (y_18 != t)))
    _fail(t);
  else
    y_18 = t;
  t = term_r_33;
  t = set_config_0_0(t);
  t = term_s_33;
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_t_33;
  return(t);
}
ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
  if(((z_18 != NULL) && (z_18 != t)))
    _fail(t);
  else
    z_18 = t;
  if(((a_19 != NULL) && (a_19 != t)))
    _fail(t);
  else
    a_19 = t;
  t = string_to_int_0_0(t);
  if(((b_19 != NULL) && (b_19 != t)))
    _fail(t);
  else
    b_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_4, not_null(b_19));
  t = set_config_0_0(t);
  t = not_null(z_18);
  if(((c_19 != NULL) && (c_19 != t)))
    _fail(t);
  else
    c_19 = t;
  if(((d_19 != NULL) && (d_19 != t)))
    _fail(t);
  else
    d_19 = t;
  t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_19));
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_u_33;
  return(t);
}
ATerm v_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm e_19 = NULL;
  if(((e_19 != NULL) && (e_19 != t)))
    _fail(t);
  else
    e_19 = t;
  t = term_w_33;
  t = set_config_0_0(t);
  t = term_x_33;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_y_33;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_2, q_2, r_2, t);
      ;
      LocalPopChoice(a_34);
    }
  else
    {
      t = z_33;
      {
        ATerm b_34 = t;
        int c_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_2, t_2, u_2, t);
            ;
            LocalPopChoice(c_34);
          }
        else
          {
            t = b_34;
            t = Option_3_0(v_2, w_2, x_2, t);
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm g_19 = NULL;
  if(((g_19 != NULL) && (g_19 != t)))
    _fail(t);
  else
    g_19 = t;
  if(match_string(t, "-o"))
    {
      t = not_null(g_19);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = not_null(g_19);
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  if(((h_19 != NULL) && (h_19 != t)))
    _fail(t);
  else
    h_19 = t;
  if(((i_19 != NULL) && (i_19 != t)))
    _fail(t);
  else
    i_19 = t;
  if(((j_19 != NULL) && (j_19 != t)))
    _fail(t);
  else
    j_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_32, not_null(j_19));
  t = set_config_0_0(t);
  t = not_null(h_19);
  if(((k_19 != NULL) && (k_19 != t)))
    _fail(t);
  else
    k_19 = t;
  if(((l_19 != NULL) && (l_19 != t)))
    _fail(t);
  else
    l_19 = t;
  t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_19));
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, z_2, a_3, t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm n_19 = NULL;
  if(((n_19 != NULL) && (n_19 != t)))
    _fail(t);
  else
    n_19 = t;
  if(match_string(t, "-i"))
    {
      t = not_null(n_19);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = not_null(n_19);
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL;
  if(((o_19 != NULL) && (o_19 != t)))
    _fail(t);
  else
    o_19 = t;
  if(((p_19 != NULL) && (p_19 != t)))
    _fail(t);
  else
    p_19 = t;
  if(((q_19 != NULL) && (q_19 != t)))
    _fail(t);
  else
    q_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_32, not_null(q_19));
  t = set_config_0_0(t);
  t = not_null(o_19);
  if(((r_19 != NULL) && (r_19 != t)))
    _fail(t);
  else
    r_19 = t;
  if(((s_19 != NULL) && (s_19 != t)))
    _fail(t);
  else
    s_19 = t;
  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_19));
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_3, c_3, d_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm u_19 = NULL;
  if(((u_19 != NULL) && (u_19 != t)))
    _fail(t);
  else
    u_19 = t;
  if(match_string(t, "-w"))
    {
      t = not_null(u_19);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = not_null(u_19);
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
  if(((v_19 != NULL) && (v_19 != t)))
    _fail(t);
  else
    v_19 = t;
  if(((w_19 != NULL) && (w_19 != t)))
    _fail(t);
  else
    w_19 = t;
  if(((x_19 != NULL) && (x_19 != t)))
    _fail(t);
  else
    x_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_4, not_null(x_19));
  t = set_config_0_0(t);
  t = not_null(v_19);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
      {
        ATerm k_34 = t;
        int l_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(l_34);
          }
        else
          {
            t = k_34;
            {
              ATerm m_34 = t;
              int n_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0_0(t);
                  ;
                  LocalPopChoice(n_34);
                }
              else
                {
                  t = m_34;
                  t = ArgOption_3_0(e_3, f_3, g_3, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  if(((y_19 != NULL) && (y_19 != t)))
    _fail(t);
  else
    y_19 = t;
  if(((z_19 != NULL) && (z_19 != t)))
    _fail(t);
  else
    z_19 = t;
  t = term_c_32;
  t = whoami_0_0(t);
  if(((a_20 != NULL) && (a_20 != t)))
    _fail(t);
  else
    a_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_34), not_null(a_20)), term_o_34));
  t = printnl_0_0(t);
  t = term_v_4;
  t = exit_0_0(t);
  t = not_null(y_19);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  t = report_run_time_0_0(t);
  if(((b_20 != NULL) && (b_20 != t)))
    _fail(t);
  else
    b_20 = t;
  t = term_c_32;
  t = whoami_0_0(t);
  if(((c_20 != NULL) && (c_20 != t)))
    _fail(t);
  else
    c_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATinsert(ATinsert(ATempty, term_q_34), not_null(c_20)));
  t = printnl_0_0(t);
  t = term_v_4;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_34;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm d_20 = NULL;
  if(((d_20 != NULL) && (d_20 != t)))
    _fail(t);
  else
    d_20 = t;
  t = SSL_TicksToSeconds(not_null(d_20));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_20 != NULL) && (e_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_20 = ATgetArgument(t, 0);
      if(((f_20 != NULL) && (f_20 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(e_20), not_null(f_20));
        ;
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
        t = SSL_addr(not_null(e_20), not_null(f_20));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm t)
{
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = m_82(t);
      ;
      LocalPopChoice(v_34);
    }
  else
    {
      t = u_34;
      {
        ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
        if(((h_20 != NULL) && (h_20 != t)))
          _fail(t);
        else
          h_20 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((i_20 != NULL) && (i_20 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              i_20 = ATgetFirst((ATermList) t);
            if(((j_20 != NULL) && (j_20 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              j_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(i_20);
        if(((k_20 != NULL) && (k_20 != t)))
          _fail(t);
        else
          k_20 = t;
        t = not_null(j_20);
        if(((l_20 != NULL) && (l_20 != t)))
          _fail(t);
        else
          l_20 = t;
        t = not_null(h_20);
        if(((m_20 != NULL) && (m_20 != t)))
          _fail(t);
        else
          m_20 = t;
        if(((n_20 != NULL) && (n_20 != t)))
          _fail(t);
        else
          n_20 = t;
        t = not_null(l_20);
        t = foldr_2_0(m_82, n_82, t);
        if(((o_20 != NULL) && (o_20 != t)))
          _fail(t);
        else
          o_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_20), not_null(o_20));
        t = n_82(t);
        if(((p_20 != NULL) && (p_20 != t)))
          _fail(t);
        else
          p_20 = t;
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  if(((q_20 != NULL) && (q_20 != t)))
    _fail(t);
  else
    q_20 = t;
  if(((r_20 != NULL) && (r_20 != t)))
    _fail(t);
  else
    r_20 = t;
  t = not_null(q_20);
  if(((s_20 != NULL) && (s_20 != t)))
    _fail(t);
  else
    s_20 = t;
  t = SSL_explode_term(not_null(s_20));
  if(match_cons(t, sym__2))
    {
      ATerm w_34 = ATgetArgument(t, 0);
      if(((t_20 != NULL) && (t_20 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(r_20);
  if(((u_20 != NULL) && (u_20 != t)))
    _fail(t);
  else
    u_20 = t;
  t = not_null(t_20);
  t = foldr_2_0(k_80, l_80, t);
  if(((v_20 != NULL) && (v_20 != t)))
    _fail(t);
  else
    v_20 = t;
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_q_33;
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  t = crush_2_0(h_3, add_0_0, t);
  t = ticks_to_seconds_0_0(t);
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_20 != NULL) && (w_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_20 = ATgetArgument(t, 0);
      if(((x_20 != NULL) && (x_20 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((y_20 != NULL) && (y_20 != t)))
    _fail(t);
  else
    y_20 = t;
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(w_20), not_null(x_20));
        ;
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
        t = SSL_gtr(not_null(w_20), not_null(x_20));
      }
    t = not_null(y_20);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_21 = NULL;
  ATerm z_34 = t;
  int a_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
      if(((b_21 != NULL) && (b_21 != t)))
        _fail(t);
      else
        b_21 = t;
      if(match_cons(t, sym__2))
        {
          if(((c_21 != NULL) && (c_21 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_21 = ATgetArgument(t, 0);
          if(((d_21 != NULL) && (d_21 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(c_21);
      if(((a_21 != NULL) && (a_21 != t)))
        _fail(t);
      else
        a_21 = t;
      t = not_null(d_21);
      if(((a_21 != NULL) && (a_21 != t)))
        _fail(t);
      else
        a_21 = t;
      t = not_null(b_21);
      ;
      LocalPopChoice(a_35);
    }
  else
    {
      t = z_34;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
    if(((e_21 != NULL) && (e_21 != t)))
      _fail(t);
    else
      e_21 = t;
    if(((f_21 != NULL) && (f_21 != t)))
      _fail(t);
    else
      f_21 = t;
    t = term_s_4;
    t = get_config_0_0(t);
    if(((g_21 != NULL) && (g_21 != t)))
      _fail(t);
    else
      g_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_21), term_v_4);
    t = geq_0_0(t);
    t = not_null(e_21);
    t = r_87(t);
    return(t);
  }
  t = try_1_0(i_3, t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL;
  if(((h_21 != NULL) && (h_21 != t)))
    _fail(t);
  else
    h_21 = t;
  t = run_time_0_0(t);
  if(((i_21 != NULL) && (i_21 != t)))
    _fail(t);
  else
    i_21 = t;
  t = not_null(h_21);
  if(((j_21 != NULL) && (j_21 != t)))
    _fail(t);
  else
    j_21 = t;
  t = term_c_32;
  t = whoami_0_0(t);
  if(((k_21 != NULL) && (k_21 != t)))
    _fail(t);
  else
    k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_35), not_null(i_21)), term_e_5), not_null(k_21)));
  t = printnl_0_0(t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_q_33;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Help_0_0(t);
      ;
      LocalPopChoice(d_35);
    }
  else
    {
      t = c_35;
      {
        ATerm e_35 = t;
        int f_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(f_35);
          }
        else
          {
            t = e_35;
            t = Version_0_0(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_91 (ATerm), ATerm t)
{
  ATerm g_35 = t;
  int h_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_35;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_35);
    }
  else
    {
      t = g_35;
      t = option_defined_1_0(k_3, t);
    }
  t = q_91(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm l_21 = NULL;
  if(((l_21 != NULL) && (l_21 != t)))
    _fail(t);
  else
    l_21 = t;
  t = SSL_table_create(not_null(l_21));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL;
  if(((m_21 != NULL) && (m_21 != t)))
    _fail(t);
  else
    m_21 = t;
  if(((n_21 != NULL) && (n_21 != t)))
    _fail(t);
  else
    n_21 = t;
  t = term_j_35;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_35, term_k_35, not_null(m_21));
  t = table_put_0_0(t);
  t = not_null(n_21);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm o_21 = NULL;
  if(((o_21 != NULL) && (o_21 != t)))
    _fail(t);
  else
    o_21 = t;
  t = SSL_table_destroy(not_null(o_21));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm p_21 = NULL;
  if(((p_21 != NULL) && (p_21 != t)))
    _fail(t);
  else
    p_21 = t;
  t = SSL_exit(not_null(p_21));
  return(t);
}
ATerm long_description_1_0 (ATerm m_93 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  if(((t_21 != NULL) && (t_21 != t)))
    _fail(t);
  else
    t_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_21 = ATgetFirst((ATermList) t);
      s_21 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
        t = not_null(r_21);
        if(((u_21 != NULL) && (u_21 != t)))
          _fail(t);
        else
          u_21 = t;
        t = not_null(s_21);
        if(((v_21 != NULL) && (v_21 != t)))
          _fail(t);
        else
          v_21 = t;
        t = not_null(t_21);
        if(((w_21 != NULL) && (w_21 != t)))
          _fail(t);
        else
          w_21 = t;
        t = not_null(v_21);
        if(((x_21 != NULL) && (x_21 != t)))
          _fail(t);
        else
          x_21 = t;
        if(((y_21 != NULL) && (y_21 != t)))
          _fail(t);
        else
          y_21 = t;
        t = g_0(t);
        if(((z_21 != NULL) && (z_21 != t)))
          _fail(t);
        else
          z_21 = t;
        t = not_null(y_21);
        if(((a_22 != NULL) && (a_22 != t)))
          _fail(t);
        else
          a_22 = t;
        t = not_null(u_21);
        t = f_0(t);
        if(((b_22 != NULL) && (b_22 != t)))
          _fail(t);
        else
          b_22 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(z_21)), not_null(b_22));
        if(((c_22 != NULL) && (c_22 != t)))
          _fail(t);
        else
          c_22 = t;
        t = not_null(x_21);
        {
          ATerm l_3 (ATerm t)
          {
            t = not_null(c_22);
            return(t);
          }
          t = reverse_acc_2_0(f_0, l_3, t);
          if(((d_22 != NULL) && (d_22 != t)))
            _fail(t);
          else
            d_22 = t;
        }
      }
    }
  else
    {
      ATerm e_22 = NULL,f_22 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = not_null(t_21);
      if(((e_22 != NULL) && (e_22 != t)))
        _fail(t);
      else
        e_22 = t;
      t = term_c_32;
      t = g_0(t);
      if(((f_22 != NULL) && (f_22 != t)))
        _fail(t);
      else
        f_22 = t;
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  t = reverse_acc_2_0(_id, m_3, t);
  return(t);
}
ATerm short_description_1_0 (ATerm l_93 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm t_68 (ATerm), ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
  if(((j_22 != NULL) && (j_22 != t)))
    _fail(t);
  else
    j_22 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((h_22 != NULL) && (h_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((k_22 != NULL) && (k_22 != t)))
    _fail(t);
  else
    k_22 = t;
  t = SSLgetAnnotations(not_null(j_22));
  if(((g_22 != NULL) && (g_22 != t)))
    _fail(t);
  else
    g_22 = t;
  t = not_null(h_22);
  t = t_68(t);
  if(((i_22 != NULL) && (i_22 != t)))
    _fail(t);
  else
    i_22 = t;
  if(((m_22 != NULL) && (m_22 != t)))
    _fail(t);
  else
    m_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_22)), not_null(g_22));
  if(((l_22 != NULL) && (l_22 != t)))
    _fail(t);
  else
    l_22 = t;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL;
  if(((o_22 != NULL) && (o_22 != t)))
    _fail(t);
  else
    o_22 = t;
  if(((p_22 != NULL) && (p_22 != t)))
    _fail(t);
  else
    p_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_22)), term_l_35);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_22 = NULL;
  ATerm m_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_34;
      t = get_config_0_0(t);
      if(((n_22 != NULL) && (n_22 != t)))
        _fail(t);
      else
        n_22 = t;
      ;
      LocalPopChoice(n_35);
    }
  else
    {
      t = m_35;
      {
        ATerm n_3 (ATerm t)
        {
          ATerm o_3 (ATerm t)
          {
            if(((n_22 != NULL) && (n_22 != t)))
              _fail(t);
            else
              n_22 = t;
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
        t = not_null(n_22);
        return(t);
      }
      t = short_description_1_0(q_3, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(p_3, t);
    t = term_o_35;
    t = echo_0_0(t);
    t = term_r_35;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    t = map_1_0(r_3, t);
    {
      ATerm s_3 (ATerm t)
      {
        ATerm q_22 = NULL,r_22 = NULL;
        if(((q_22 != NULL) && (q_22 != t)))
          _fail(t);
        else
          q_22 = t;
        {
          ATerm t_3 (ATerm t)
          {
            t = not_null(n_22);
            return(t);
          }
          t = long_description_1_0(t_3, t);
          if(((r_22 != NULL) && (r_22 != t)))
            _fail(t);
          else
            r_22 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(r_22)), term_s_35);
          t = echo_0_0(t);
        }
        return(t);
      }
      t = try_1_0(s_3, t);
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
  ATerm t_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(u_35);
    }
  else
    {
      t = t_35;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_22 != NULL) && (s_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_22 = ATgetArgument(t, 0);
      if(((t_22 != NULL) && (t_22 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((u_22 != NULL) && (u_22 != t)))
    _fail(t);
  else
    u_22 = t;
  t = SSL_printnl(not_null(s_22), not_null(t_22));
  t = not_null(u_22);
  return(t);
}
ATerm Undefined_1_0 (ATerm u_68 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  if(((y_22 != NULL) && (y_22 != t)))
    _fail(t);
  else
    y_22 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((w_22 != NULL) && (w_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((z_22 != NULL) && (z_22 != t)))
    _fail(t);
  else
    z_22 = t;
  t = SSLgetAnnotations(not_null(y_22));
  if(((v_22 != NULL) && (v_22 != t)))
    _fail(t);
  else
    v_22 = t;
  t = not_null(w_22);
  t = u_68(t);
  if(((x_22 != NULL) && (x_22 != t)))
    _fail(t);
  else
    x_22 = t;
  if(((b_23 != NULL) && (b_23 != t)))
    _fail(t);
  else
    b_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(x_22)), not_null(v_22));
  if(((a_23 != NULL) && (a_23 != t)))
    _fail(t);
  else
    a_23 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm d_23 (ATerm t)
  {
    ATerm v_35 = t;
    int w_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_76, _id, t);
        ;
        LocalPopChoice(w_35);
      }
    else
      {
        t = v_35;
        t = Cons_2_0(_id, d_23, t);
      }
    return(t);
  }
  t = d_23(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm l_92 (ATerm), ATerm t)
{
  t = fetch_1_0(l_92, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
  if(((f_23 != NULL) && (f_23 != t)))
    _fail(t);
  else
    f_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(f_23);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((g_23 != NULL) && (g_23 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            g_23 = ATgetFirst((ATermList) t);
          if(((h_23 != NULL) && (h_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(f_23);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,n_23 = NULL;
  if(((i_23 != NULL) && (i_23 != t)))
    _fail(t);
  else
    i_23 = t;
  if(((j_23 != NULL) && (j_23 != t)))
    _fail(t);
  else
    j_23 = t;
  {
    ATerm x_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(y_35);
      }
    else
      {
        t = x_35;
        {
          ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
          if(((k_23 != NULL) && (k_23 != t)))
            _fail(t);
          else
            k_23 = t;
          if(((l_23 != NULL) && (l_23 != t)))
            _fail(t);
          else
            l_23 = t;
          t = not_null(k_23);
          if(((m_23 != NULL) && (m_23 != t)))
            _fail(t);
          else
            m_23 = t;
          t = (ATerm) ATinsert(ATempty, not_null(m_23));
        }
      }
    if(((n_23 != NULL) && (n_23 != t)))
      _fail(t);
    else
      n_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_33, not_null(n_23));
    t = printnl_0_0(t);
    t = not_null(i_23);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_34;
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
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(a_36);
    }
  else
    {
      t = z_35;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm o_23 = NULL;
  if(((o_23 != NULL) && (o_23 != t)))
    _fail(t);
  else
    o_23 = t;
  t = SSL_implode_string(not_null(o_23));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(c_36);
    }
  else
    {
      t = b_36;
      {
        ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
        if(((q_23 != NULL) && (q_23 != t)))
          _fail(t);
        else
          q_23 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((r_23 != NULL) && (r_23 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              r_23 = ATgetFirst((ATermList) t);
            if(((s_23 != NULL) && (s_23 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              s_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(r_23);
        if(((t_23 != NULL) && (t_23 != t)))
          _fail(t);
        else
          t_23 = t;
        t = not_null(s_23);
        if(((u_23 != NULL) && (u_23 != t)))
          _fail(t);
        else
          u_23 = t;
        t = not_null(q_23);
        if(((v_23 != NULL) && (v_23 != t)))
          _fail(t);
        else
          v_23 = t;
        t = not_null(t_23);
        {
          ATerm u_3 (ATerm t)
          {
            t = not_null(u_23);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(u_3, t);
          if(((w_23 != NULL) && (w_23 != t)))
            _fail(t);
          else
            w_23 = t;
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,e_24 = NULL,f_24 = NULL;
  if(((y_23 != NULL) && (y_23 != t)))
    _fail(t);
  else
    y_23 = t;
  if(((z_23 != NULL) && (z_23 != t)))
    _fail(t);
  else
    z_23 = t;
  t = not_null(y_23);
  if(((a_24 != NULL) && (a_24 != t)))
    _fail(t);
  else
    a_24 = t;
  t = SSL_explode_term(not_null(a_24));
  if(match_cons(t, sym__2))
    {
      ATerm d_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((b_24 != NULL) && (b_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(z_23);
  if(((e_24 != NULL) && (e_24 != t)))
    _fail(t);
  else
    e_24 = t;
  t = not_null(b_24);
  t = concat_0_0(t);
  if(((f_24 != NULL) && (f_24 != t)))
    _fail(t);
  else
    f_24 = t;
  return(t);
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm g_24 (ATerm t)
  {
    ATerm e_36 = t;
    int f_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_24, t);
        ;
        LocalPopChoice(f_36);
      }
    else
      {
        t = e_36;
        t = Nil_0_0(t);
        t = m_76(t);
      }
    return(t);
  }
  t = g_24(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm h_24 = NULL,l_24 = NULL,m_24 = NULL,r_24 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_24 != NULL) && (h_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_24 = ATgetArgument(t, 0);
      if(((l_24 != NULL) && (l_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((m_24 != NULL) && (m_24 != t)))
    _fail(t);
  else
    m_24 = t;
  t = not_null(h_24);
  {
    ATerm v_3 (ATerm t)
    {
      t = not_null(l_24);
      return(t);
    }
    t = at_end_1_0(v_3, t);
    if(((r_24 != NULL) && (r_24 != t)))
      _fail(t);
    else
      r_24 = t;
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_36 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(h_36);
    }
  else
    {
      t = g_36;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm s_24 = NULL;
  if(((s_24 != NULL) && (s_24 != t)))
    _fail(t);
  else
    s_24 = t;
  t = SSL_explode_string(not_null(s_24));
  return(t);
}
ATerm _2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  if(((a_25 != NULL) && (a_25 != t)))
    _fail(t);
  else
    a_25 = t;
  if(match_cons(t, sym__2))
    {
      if(((u_24 != NULL) && (u_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_24 = ATgetArgument(t, 0);
      if(((x_24 != NULL) && (x_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((d_25 != NULL) && (d_25 != t)))
    _fail(t);
  else
    d_25 = t;
  t = SSLgetAnnotations(not_null(a_25));
  if(((t_24 != NULL) && (t_24 != t)))
    _fail(t);
  else
    t_24 = t;
  t = not_null(u_24);
  t = y_58(t);
  if(((y_24 != NULL) && (y_24 != t)))
    _fail(t);
  else
    y_24 = t;
  t = not_null(x_24);
  t = z_58(t);
  if(((z_24 != NULL) && (z_24 != t)))
    _fail(t);
  else
    z_24 = t;
  if(((f_25 != NULL) && (f_25 != t)))
    _fail(t);
  else
    f_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_24), not_null(z_24)), not_null(t_24));
  if(((e_25 != NULL) && (e_25 != t)))
    _fail(t);
  else
    e_25 = t;
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm a_72 (ATerm), ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
  if(((g_25 != NULL) && (g_25 != t)))
    _fail(t);
  else
    g_25 = t;
  if(((h_25 != NULL) && (h_25 != t)))
    _fail(t);
  else
    h_25 = t;
  t = a_72(t);
  if(((i_25 != NULL) && (i_25 != t)))
    _fail(t);
  else
    i_25 = t;
  t = not_null(h_25);
  if(((j_25 != NULL) && (j_25 != t)))
    _fail(t);
  else
    j_25 = t;
  if(((k_25 != NULL) && (k_25 != t)))
    _fail(t);
  else
    k_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_25)), not_null(i_25)));
  t = printnl_0_0(t);
  t = not_null(g_25);
  return(t);
}
ATerm map_1_0 (ATerm v_75 (ATerm), ATerm t)
{
  ATerm l_25 (ATerm t)
  {
    ATerm i_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(j_36);
      }
    else
      {
        t = i_36;
        t = Cons_2_0(v_75, l_25, t);
      }
    return(t);
  }
  t = l_25(t);
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm m_25 = NULL;
  if(((m_25 != NULL) && (m_25 != t)))
    _fail(t);
  else
    m_25 = t;
  t = SSL_is_string(not_null(m_25));
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = try_1_0(eval_config_0_0, t);
  return(t);
}
ATerm g_26 (ATerm p_25, ATerm q_25, ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  t = not_null(p_25);
  if(((r_25 != NULL) && (r_25 != t)))
    _fail(t);
  else
    r_25 = t;
  t = not_null(q_25);
  if(((s_25 != NULL) && (s_25 != t)))
    _fail(t);
  else
    s_25 = t;
  t = not_null(r_25);
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        t = debug_1_0(x_3, t);
        _fail(t);
      }
    if(((t_25 != NULL) && (t_25 != t)))
      _fail(t);
    else
      t_25 = t;
  }
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_m_36;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(o_36);
    }
  else
    {
      t = n_36;
      {
        ATerm p_36 = t;
        int q_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(w_3, t);
            ;
            LocalPopChoice(q_36);
          }
        else
          {
            t = p_36;
            {
              ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
              if(((u_25 != NULL) && (u_25 != t)))
                _fail(t);
              else
                u_25 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_25 = ATgetArgument(t, 0);
                  {
                    ATerm x_25 = NULL;
                    t = not_null(v_25);
                    if(((x_25 != NULL) && (x_25 != t)))
                      _fail(t);
                    else
                      x_25 = t;
                  }
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_25 = ATgetArgument(t, 0);
                      t = g_26(not_null(v_25), not_null(u_25), t);
                    }
                  else
                    {
                      ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          if(((v_25 != NULL) && (v_25 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            v_25 = ATgetArgument(t, 0);
                          if(((w_25 != NULL) && (w_25 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            w_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = not_null(v_25);
                      if(((y_25 != NULL) && (y_25 != t)))
                        _fail(t);
                      else
                        y_25 = t;
                      t = not_null(w_25);
                      if(((z_25 != NULL) && (z_25 != t)))
                        _fail(t);
                      else
                        z_25 = t;
                      t = not_null(u_25);
                      if(((a_26 != NULL) && (a_26 != t)))
                        _fail(t);
                      else
                        a_26 = t;
                      if(((b_26 != NULL) && (b_26 != t)))
                        _fail(t);
                      else
                        b_26 = t;
                      t = not_null(y_25);
                      t = eval_config_0_0(t);
                      if(((c_26 != NULL) && (c_26 != t)))
                        _fail(t);
                      else
                        c_26 = t;
                      t = not_null(b_26);
                      if(((d_26 != NULL) && (d_26 != t)))
                        _fail(t);
                      else
                        d_26 = t;
                      t = not_null(z_25);
                      t = eval_config_0_0(t);
                      if(((e_26 != NULL) && (e_26 != t)))
                        _fail(t);
                      else
                        e_26 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_26), not_null(e_26));
                      t = conc_strings_0_0(t);
                      if(((f_26 != NULL) && (f_26 != t)))
                        _fail(t);
                      else
                        f_26 = t;
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
  ATerm h_26 = NULL;
  if(((h_26 != NULL) && (h_26 != t)))
    _fail(t);
  else
    h_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_36, not_null(h_26));
  t = table_get_0_0(t);
  {
    ATerm y_3 (ATerm t)
    {
      ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
      t = eval_config_0_0(t);
      if(((i_26 != NULL) && (i_26 != t)))
        _fail(t);
      else
        i_26 = t;
      if(((j_26 != NULL) && (j_26 != t)))
        _fail(t);
      else
        j_26 = t;
      if(((k_26 != NULL) && (k_26 != t)))
        _fail(t);
      else
        k_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_36, not_null(h_26), not_null(k_26));
      t = table_put_0_0(t);
      t = not_null(i_26);
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
ATerm try_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  ATerm s_36 = t;
  int t_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_86(t);
      ;
      LocalPopChoice(t_36);
    }
  else
    {
      t = s_36;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_v_36;
  t = set_config_0_0(t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm l_26 = NULL;
  if(((l_26 != NULL) && (l_26 != t)))
    _fail(t);
  else
    l_26 = t;
  t = term_v_36;
  t = set_config_0_0(t);
  t = term_y_36;
  t = set_config_0_0(t);
  t = term_z_36;
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_a_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_37 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_3, a_4, b_4, t);
      ;
      LocalPopChoice(c_37);
    }
  else
    {
      t = b_37;
      t = Option_3_0(c_4, d_4, e_4, t);
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_26 != NULL) && (m_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_26 = ATgetArgument(t, 0);
      if(((n_26 != NULL) && (n_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(m_26), not_null(n_26));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((o_26 != NULL) && (o_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_26 = ATgetArgument(t, 0);
      if(((p_26 != NULL) && (p_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_26 = ATgetArgument(t, 1);
      if(((q_26 != NULL) && (q_26 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        q_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((r_26 != NULL) && (r_26 != t)))
    _fail(t);
  else
    r_26 = t;
  if(((s_26 != NULL) && (s_26 != t)))
    _fail(t);
  else
    s_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_26), not_null(p_26));
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
        t = (ATerm) ATempty;
      }
    if(((t_26 != NULL) && (t_26 != t)))
      _fail(t);
    else
      t_26 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(o_26), not_null(p_26), (ATerm) ATinsert(CheckATermList(not_null(t_26)), not_null(q_26)));
    t = table_put_0_0(t);
    t = not_null(r_26);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL;
  if(((u_26 != NULL) && (u_26 != t)))
    _fail(t);
  else
    u_26 = t;
  t = term_c_32;
  t = q_93(t);
  if(((v_26 != NULL) && (v_26 != t)))
    _fail(t);
  else
    v_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_35, term_q_35, not_null(v_26));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  if(((x_26 != NULL) && (x_26 != t)))
    _fail(t);
  else
    x_26 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(x_26);
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((y_26 != NULL) && (y_26 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            y_26 = ATgetFirst((ATermList) t);
          if(((z_26 != NULL) && (z_26 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(y_26);
      if(((a_27 != NULL) && (a_27 != t)))
        _fail(t);
      else
        a_27 = t;
      t = not_null(z_26);
      if(((b_27 != NULL) && (b_27 != t)))
        _fail(t);
      else
        b_27 = t;
      t = not_null(x_26);
      if(((c_27 != NULL) && (c_27 != t)))
        _fail(t);
      else
        c_27 = t;
      t = not_null(a_27);
      t = a_0(t);
      t = not_null(c_27);
      if(((d_27 != NULL) && (d_27 != t)))
        _fail(t);
      else
        d_27 = t;
      t = term_c_32;
      t = b_0(t);
      if(((e_27 != NULL) && (e_27 != t)))
        _fail(t);
      else
        e_27 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(b_27)), not_null(e_27));
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm g_27 = NULL;
  if(((g_27 != NULL) && (g_27 != t)))
    _fail(t);
  else
    g_27 = t;
  if(match_string(t, "--help"))
    {
      t = not_null(g_27);
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = not_null(g_27);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = not_null(g_27);
        }
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_f_37;
  t = set_config_0_0(t);
  t = term_g_37;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_h_37;
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  t = Option_3_0(f_4, g_4, h_4, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((h_27 != NULL) && (h_27 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        h_27 = ATgetFirst((ATermList) t);
      if(((i_27 != NULL) && (i_27 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        i_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(i_27)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_27)));
  return(t);
}
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,v_27 = NULL;
  if(((o_27 != NULL) && (o_27 != t)))
    _fail(t);
  else
    o_27 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((k_27 != NULL) && (k_27 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        k_27 = ATgetFirst((ATermList) t);
      if(((l_27 != NULL) && (l_27 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        l_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((p_27 != NULL) && (p_27 != t)))
    _fail(t);
  else
    p_27 = t;
  t = SSLgetAnnotations(not_null(o_27));
  if(((j_27 != NULL) && (j_27 != t)))
    _fail(t);
  else
    j_27 = t;
  t = not_null(k_27);
  t = n_63(t);
  if(((m_27 != NULL) && (m_27 != t)))
    _fail(t);
  else
    m_27 = t;
  t = not_null(l_27);
  t = o_63(t);
  if(((n_27 != NULL) && (n_27 != t)))
    _fail(t);
  else
    n_27 = t;
  if(((v_27 != NULL) && (v_27 != t)))
    _fail(t);
  else
    v_27 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(n_27)), not_null(m_27)), not_null(j_27));
  if(((q_27 != NULL) && (q_27 != t)))
    _fail(t);
  else
    q_27 = t;
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
  ATerm w_27 = NULL,x_27 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_27 != NULL) && (w_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_27 = ATgetArgument(t, 0);
      if(((x_27 != NULL) && (x_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_36, not_null(w_27), not_null(x_27));
  t = table_put_0_0(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  if(((c_28 != NULL) && (c_28 != t)))
    _fail(t);
  else
    c_28 = t;
  if(((d_28 != NULL) && (d_28 != t)))
    _fail(t);
  else
    d_28 = t;
  if(((e_28 != NULL) && (e_28 != t)))
    _fail(t);
  else
    e_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_34, not_null(e_28));
  t = set_config_0_0(t);
  t = not_null(c_28);
  if(((f_28 != NULL) && (f_28 != t)))
    _fail(t);
  else
    f_28 = t;
  if(((g_28 != NULL) && (g_28 != t)))
    _fail(t);
  else
    g_28 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_28));
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_93 (ATerm), ATerm t)
{
  ATerm y_27 = NULL;
  if(((y_27 != NULL) && (y_27 != t)))
    _fail(t);
  else
    y_27 = t;
  {
    ATerm i_4 (ATerm t)
    {
      t = term_i_37;
      t = o_93(t);
      return(t);
    }
    t = try_1_0(i_4, t);
    t = not_null(y_27);
    {
      ATerm k_4 (ATerm t)
      {
        ATerm j_37 = t;
        int k_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_37 = t;
            int m_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(m_37);
              }
            else
              {
                t = l_37;
                t = o_93(t);
                t = Cons_2_0(_id, k_4, t);
              }
            ;
            LocalPopChoice(k_37);
          }
        else
          {
            t = j_37;
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
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL;
  if(((i_28 != NULL) && (i_28 != t)))
    _fail(t);
  else
    i_28 = t;
  if(match_cons(t, sym__3))
    {
      if(((j_28 != NULL) && (j_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_28 = ATgetArgument(t, 0);
      if(((k_28 != NULL) && (k_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_28 = ATgetArgument(t, 1);
      if(((l_28 != NULL) && (l_28 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        l_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(j_28), not_null(k_28), not_null(l_28));
  t = not_null(i_28);
  return(t);
}
ATerm w_28 (ATerm p_28, ATerm t)
{
  ATerm s_28 = NULL;
  t = not_null(p_28);
  if(((s_28 != NULL) && (s_28 != t)))
    _fail(t);
  else
    s_28 = t;
  t = not_null(p_28);
  {
    ATerm n_37 = t;
    int o_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_35;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(o_37);
      }
    else
      {
        t = n_37;
        t = option_defined_1_0(Help_0_0, t);
      }
    t = not_null(s_28);
    t = system_usage_0_0(t);
    t = term_q_33;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm n_93 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,v_28 = NULL;
  if(((n_28 != NULL) && (n_28 != t)))
    _fail(t);
  else
    n_28 = t;
  t = term_p_37;
  t = table_put_0_0(t);
  t = not_null(n_28);
  {
    ATerm l_4 (ATerm t)
    {
      ATerm q_37 = t;
      int r_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_93(t);
          ;
          LocalPopChoice(r_37);
        }
      else
        {
          t = q_37;
          {
            ATerm s_37 = t;
            int t_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(t_37);
              }
            else
              {
                t = s_37;
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
        ATerm u_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_28 = NULL;
            if(((t_28 != NULL) && (t_28 != t)))
              _fail(t);
            else
              t_28 = t;
            {
              ATerm w_37 = t;
              int x_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_28(not_null(t_28), t);
                  ;
                  LocalPopChoice(x_37);
                }
              else
                {
                  t = w_37;
                  {
                    ATerm u_28 = NULL;
                    t = not_null(t_28);
                    if(((u_28 != NULL) && (u_28 != t)))
                      _fail(t);
                    else
                      u_28 = t;
                    t = term_u_36;
                    t = get_config_0_0(t);
                    t = not_null(u_28);
                    t = system_about_0_0(t);
                    t = term_q_33;
                    t = exit_0_0(t);
                  }
                }
            }
            ;
            LocalPopChoice(v_37);
          }
        else
          {
            t = u_37;
            {
              ATerm n_4 (ATerm t)
              {
                ATerm o_4 (ATerm t)
                {
                  if(((o_28 != NULL) && (o_28 != t)))
                    _fail(t);
                  else
                    o_28 = t;
                  return(t);
                }
                t = Undefined_1_0(o_4, t);
                return(t);
              }
              t = option_defined_1_0(n_4, t);
              t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_28)), term_y_37));
              t = printnl_0_0(t);
              t = system_usage_0_0(t);
              t = term_v_4;
              t = exit_0_0(t);
            }
          }
        return(t);
      }
      t = try_1_0(m_4, t);
      if(((v_28 != NULL) && (v_28 != t)))
        _fail(t);
      else
        v_28 = t;
      t = term_p_35;
      t = table_destroy_0_0(t);
      t = not_null(v_28);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm t)
{
  t = parse_options_1_0(s_91, t);
  t = store_options_0_0(t);
  t = u_91(t);
  {
    ATerm z_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_91, t);
        ;
        LocalPopChoice(a_38);
      }
    else
      {
        t = z_37;
        {
          ATerm b_38 = t;
          int c_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_38);
            }
          else
            {
              t = b_38;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm t)
{
  t = option_wrap_4_0(w_91, default_usage_0_0, _id, x_91, t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = xtc_io_1_0(abox2text_0_0, t);
  return(t);
}
ATerm io_abox2text_0_0 (ATerm t)
{
  t = option_wrap_2_0(abox2text_options_0_0, p_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_abox2text_0_0(t);
  return(t);
}
