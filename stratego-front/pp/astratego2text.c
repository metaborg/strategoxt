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
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_m_30;
ATerm term_r_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_g_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_q_28;
ATerm term_z_27;
ATerm term_k_27;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_b_27;
ATerm term_k_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_a_25;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_c_24;
ATerm term_o_23;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_d_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_t_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_i_21;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_f_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_u_19;
ATerm term_f_18;
ATerm term_u_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_h_16;
ATerm term_y_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_m_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_m_4;
void init_constant_terms (void)
{
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_8, term_v_8, term_b_9);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_9, term_e_9, term_f_9);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_9, term_j_9, term_k_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_9, term_p_9, term_q_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_9, term_u_9, term_v_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_9, term_y_9, term_z_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_10, term_c_10, term_d_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_10, term_h_10, term_i_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_m_10, term_n_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_10, term_t_10, term_u_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_10, term_z_10, term_b_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_h_11, term_i_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_o_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_t_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_z_11, term_a_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_h_12, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_n_12, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_u_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_x_12, term_y_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_b_13, term_d_13);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_13, term_h_13, term_i_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_o_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_v_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_c_14, term_d_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_m_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_q_14, term_s_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_x_14);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__2, term_t_20, term_q_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym__2, term_t_20, term_u_20);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_h_16);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_o_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_24);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym__2, term_w_24, term_c_17);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym__2, term_n_25, term_o_25);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym__2, term_q_28, term_c_17);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym__2, term_x_28, term_c_17);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym__2, term_e_27, term_c_17);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_p_31, term_c_17);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm read_from_0_0 (ATerm);
ATerm y_5 (ATerm j_15, ATerm k_15, ATerm);
ATerm a_6 (ATerm x_59 (ATerm), ATerm r_157, ATerm r_15, ATerm);
ATerm a_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm);
ATerm b_6 (ATerm f_12, ATerm g_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm c_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm m_58 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm e_78 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm g_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm y_6 (ATerm p_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm d_6 (ATerm p_74 (ATerm), ATerm k_32, ATerm i_32, ATerm);
ATerm j_8 (ATerm p_7, ATerm);
ATerm r_8 (ATerm r_7, ATerm w_7, ATerm y_7, ATerm);
ATerm v_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_75 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_75 (ATerm), ATerm);
ATerm t_5 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm m_22, ATerm l_22, ATerm);
ATerm u_5 (ATerm u_67 (ATerm), ATerm i_22, ATerm h_22, ATerm);
ATerm g_1 (ATerm);
ATerm v_5 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm);
ATerm w_5 (ATerm a_76 (ATerm), ATerm i_34, ATerm h_34, ATerm);
ATerm e_6 (ATerm f_36, ATerm g_36, ATerm);
ATerm z_14 (ATerm l_14, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_5 (ATerm p_15, ATerm);
ATerm z_5 (ATerm n_36, ATerm o_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm h_17 (ATerm u_15, ATerm);
ATerm i_17 (ATerm a_16, ATerm f_16, ATerm g_16, ATerm);
ATerm j_17 (ATerm p_16, ATerm q_16, ATerm r_16, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm u_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm z_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm m_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm l_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm h_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm m_2 (ATerm);
ATerm a_22 (ATerm w_20, ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm f_6 (ATerm l_12, ATerm m_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm g_6 (ATerm g_33, ATerm h_33, ATerm);
ATerm end_scope_1_0 (ATerm m_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_74 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_77 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm xtc_io_1_0 (ATerm r_77 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm a_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm o_6 (ATerm b_35, ATerm c_35, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm m_6 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm h_6 (ATerm w_30, ATerm x_30, ATerm);
ATerm foldr_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_75 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm a_5 (ATerm);
ATerm need_help_1_0 (ATerm s_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm a_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm k_6 (ATerm s_29, ATerm t_29, ATerm);
ATerm debug_1_0 (ATerm v_59 (ATerm), ATerm);
ATerm map_1_0 (ATerm q_63 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm l_6 (ATerm s_34, ATerm t_34, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_81 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm j_6 (ATerm);
ATerm n_6 (ATerm);
ATerm q_6 (ATerm);
ATerm parse_options_1_0 (ATerm p_81 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm);
ATerm v_6 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm e_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm x_7 (ATerm);
ATerm z_7 (ATerm);
ATerm astratego2text_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm s_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_m_4;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_8);
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_0, (ATerm) ATinsert(ATempty, term_a_8));
      t = e_6(s_0, u_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm y_5 (ATerm j_15, ATerm k_15, ATerm t)
{
  ATerm y_0 = NULL;
  t = SSL_write_term_to_stream_baf(j_15, k_15);
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_0);
  return(t);
}
ATerm a_6 (ATerm x_59 (ATerm), ATerm r_157, ATerm r_15, ATerm t)
{
  ATerm a_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_157, term_b_8);
  t = open_stream_0_0(t);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, r_15);
  t = x_59(t);
  t = fclose_0_0(t);
  t = r_15;
  return(t);
}
ATerm a_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if(match_cons(c_8, sym_Stream_1))
        {
          d_1 = ATgetArgument(c_8, 0);
        }
      else
        _fail(t);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(d_1, e_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  b_1 = t;
  t = xtc_new_file_0_0(t);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_1, b_1);
  t = a_6(a_0, c_1, b_1, t);
  t = SSL_close_file(c_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_78, o_78, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm b_6 (ATerm f_12, ATerm g_12, ATerm t)
{
  t = SSL_execvp(f_12, g_12);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
  o_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      p_2 = ATgetArgument(t, 0);
      {
        ATerm e_0 = NULL,o_0 = NULL;
        t = SSL_int_to_string(p_2);
        e_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_8), e_0), term_d_8);
        o_0 = t;
        t = SSL_concat_strings(o_0);
      }
    }
  else
    {
      ATerm j_1 = NULL,k_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          p_2 = ATgetArgument(t, 0);
          q_2 = ATgetArgument(t, 1);
          r_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(q_2);
      j_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_2), term_m_8), j_1), term_f_8), p_2);
      k_1 = t;
      t = SSL_concat_strings(k_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm c_64 (ATerm), ATerm t)
{
  ATerm u_2 = NULL;
  ATerm b_0 (ATerm t)
  {
    t = c_64(t);
    if(((u_2 != NULL) && (u_2 != t)))
      _fail(t);
    else
      u_2 = t;
    return(t);
  }
  t = fetch_1_0(b_0, t);
  t = not_null(u_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm v_2 = NULL;
  v_2 = t;
  {
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm p_8 = ATgetArgument(t, 0);
              if((v_2 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm q_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_14), term_t_14), term_o_14), term_i_14), term_e_14), term_w_13), term_s_13), term_j_13), term_e_13), term_z_12), term_v_12), term_p_12), term_j_12), term_c_12), term_u_11), term_p_11), term_k_11), term_d_11), term_v_10), term_q_10), term_k_10), term_e_10), term_a_10), term_w_9), term_r_9), term_l_9), term_g_9), term_c_9);
        t = fetch_elem_1_0(c_0, t);
        ;
        LocalPopChoice(o_8);
      }
    else
      {
        t = n_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, v_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm e_3 = NULL,o_3 = NULL;
  e_3 = t;
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_15 = ATgetArgument(t, 0);
            o_3 = ATgetArgument(t, 1);
            {
              ATerm h_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_15);
        {
          ATerm i_15 = t;
          int l_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_1 = NULL,s_1 = NULL,t_1 = NULL;
              t = o_3;
              {
                ATerm m_15 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_15;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                q_1 = t;
                t = term_n_15;
                s_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, q_1), term_o_15);
                t_1 = t;
                t = SSL_printnl(s_1, t_1);
                t = (ATerm) ATmakeAppl(sym__2, term_n_15, (ATerm) ATinsert(ATinsert(ATempty, q_1), term_o_15));
              }
              ;
              LocalPopChoice(l_15);
            }
          else
            {
              t = i_15;
              t = e_3;
            }
        }
      }
    else
      {
        t = c_15;
        t = e_3;
      }
    t = e_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm m_58 (ATerm), ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL;
  z_3 = t;
  t = fork_0_0(t);
  y_3 = t;
  {
    ATerm q_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = z_3;
        t = m_58(t);
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = q_15;
        t = SSL_waitpid(y_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm t_15 = ATgetArgument(t, 0);
            if(((ATgetType(t_15) != AT_INT) || (ATgetInt((ATermInt) t_15) != 0)))
              _fail(t);
            {
              ATerm w_15 = ATgetArgument(t, 1);
            }
            {
              ATerm x_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_78 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  c_4 = t;
  t = e_78(t);
  t = xtc_find_0_0(t);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_4, c_4);
  {
    ATerm f_0 (ATerm t)
    {
      ATerm d_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, b_4, c_4);
      t = b_6(b_4, c_4, t);
      t = term_y_15;
      d_4 = t;
      t = SSL_exit(d_4);
      return(t);
    }
    t = fork_and_wait_1_0(f_0, t);
    t = c_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
    h_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_5 = ATgetFirst((ATermList) t);
        g_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_2 = NULL,x_2 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(h_5);
          l_2 = t;
          t = g_5;
          t = k_5(t);
          x_2 = t;
          t = (ATerm) ATinsert(CheckATermList(x_2), f_5);
          v_1 = t;
          t = SSLsetAnnotations(v_1, l_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_5;
        t = g_64(t);
      }
    return(t);
  }
  t = k_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
  h_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_4;
    }
  else
    {
      ATerm q_0 (ATerm t)
      {
        t = not_null(j_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((i_4 != NULL) && (i_4 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            i_4 = ATgetFirst((ATermList) t);
          if(((j_4 != NULL) && (j_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_4;
      t = at_end_1_0(q_0, t);
    }
  return(t);
}
ATerm y_6 (ATerm p_5, ATerm t)
{
  ATerm p_6 = NULL;
  t = SSL_explode_term(p_5);
  if(match_cons(t, sym__2))
    {
      ATerm z_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
  t_6 = t;
  if(match_cons(t, sym__2))
    {
      r_6 = ATgetArgument(t, 0);
      s_6 = ATgetArgument(t, 1);
      {
        ATerm b_16 = t;
        int c_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = s_6;
              return(t);
            }
            t = r_6;
            t = at_end_1_0(t_0, t);
            ;
            LocalPopChoice(c_16);
          }
        else
          {
            t = b_16;
            t = y_6(t_6, t);
          }
      }
    }
  else
    {
      t = y_6(t_6, t);
    }
  return(t);
}
ATerm d_6 (ATerm p_74 (ATerm), ATerm k_32, ATerm i_32, ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,d_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
  f_7 = t;
  t = p_74(t);
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_6, k_32, i_32);
  t = m_6(z_6, k_32, i_32, t);
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_7 = NULL;
        t = term_h_16;
        i_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_6, term_h_16);
        t = l_6(z_6, i_7, t);
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_7 = ATgetFirst((ATermList) t);
        d_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_h_16;
    g_7 = t;
    t = (ATerm) ATinsert(CheckATermList(d_7), (ATerm) ATinsert(CheckATermList(a_7), k_32));
    h_7 = t;
    t = SSL_table_put(z_6, g_7, h_7);
    t = f_7;
  }
  return(t);
}
ATerm j_8 (ATerm p_7, ATerm t)
{
  t = p_7;
  {
    ATerm l_16 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_16 = ATgetArgument(t, 0);
            ATerm o_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_16;
      }
    t = term_v_16;
    t = debug_1_0(v_0, t);
    t = (ATerm) ATmakeAppl(sym__2, p_7, term_b_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm r_8 (ATerm r_7, ATerm w_7, ATerm y_7, ATerm t)
{
  t = SSL_open_file(r_7, w_7);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_w_16;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
  g_8 = t;
  if(match_cons(t, sym__2))
    {
      h_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
      {
        ATerm y_16 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_8(g_8, t);
            ;
            LocalPopChoice(b_17);
          }
        else
          {
            t = y_16;
            t = r_8(h_8, i_8, g_8, t);
          }
      }
    }
  else
    {
      t = j_8(g_8, t);
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
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
  t = term_c_17;
  t = new_0_0(t);
  w_8 = t;
  t = term_d_17;
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_8, term_d_17);
  t = k_6(w_8, x_8, t);
  y_8 = t;
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_a_8);
        i_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_8, (ATerm) ATinsert(ATempty, term_a_8));
        t = e_6(y_8, i_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
        t = y_8;
      }
  }
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = term_m_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL;
  t = new_file_0_0(t);
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_9, term_b_8);
  t = open_file_0_0(t);
  t = term_c_17;
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_9, term_c_17);
  t = d_6(w_0, n_9, o_9, t);
  t = n_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL;
  o_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_3 = NULL,g_3 = NULL;
      t = o_10;
      t = xtc_new_file_0_0(t);
      d_3 = t;
      t = r_0(t);
      g_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_3, (ATerm) ATinsert(ATinsert(ATempty, d_3), term_p_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(d_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_3);
    }
  else
    {
      ATerm w_3 = NULL,x_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_10;
      t = xtc_new_file_0_0(t);
      w_3 = t;
      t = r_0(t);
      x_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_3), term_p_17), p_10), term_u_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(w_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_3);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  ATerm x_0 (ATerm t)
  {
    ATerm w_10 = NULL,x_10 = NULL;
    w_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), w_10);
    t = l_6(not_null(s_10), w_10, t);
    x_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_10, x_10);
    return(t);
  }
  if(((s_10 != NULL) && (s_10 != t)))
    _fail(t);
  else
    s_10 = t;
  t = SSL_table_keys(s_10);
  t = map_1_0(x_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_75 (ATerm), ATerm t)
{
  ATerm a_11 = NULL;
  a_11 = t;
  {
    ATerm v_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_11 = NULL;
        t = term_f_18;
        t = get_config_0_0(t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, term_g_14);
        t = geq_0_0(t);
        t = a_11;
        t = x_75(t);
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = v_17;
        t = a_11;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm j_11 = NULL;
  j_11 = t;
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_11 = NULL;
        t = term_f_18;
        t = get_config_0_0(t);
        l_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_11, term_h_11);
        t = geq_0_0(t);
        t = j_11;
        t = w_75(t);
        ;
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        t = j_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_75 (ATerm), ATerm t)
{
  ATerm q_11 = NULL;
  q_11 = t;
  {
    ATerm p_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_11 = NULL;
        t = term_f_18;
        t = get_config_0_0(t);
        v_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_11, term_p_9);
        t = geq_0_0(t);
        t = q_11;
        t = y_75(t);
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = p_18;
        t = q_11;
      }
  }
  return(t);
}
ATerm t_5 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm m_22, ATerm l_22, ATerm t)
{
  t = y_67(t);
  {
    ATerm z_0 (ATerm t)
    {
      ATerm y_11 = NULL;
      y_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, y_11);
      t = x_67(t);
      return(t);
    }
    t = fetch_1_0(z_0, t);
    t = l_22;
  }
  return(t);
}
ATerm u_5 (ATerm u_67 (ATerm), ATerm i_22, ATerm h_22, ATerm t)
{
  ATerm g_13 (ATerm t)
  {
    ATerm s_12 = NULL,t_12 = NULL,c_13 = NULL;
    s_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_12 = ATgetFirst((ATermList) t);
            c_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_18 = t;
          int w_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_12;
              {
                ATerm f_1 (ATerm t)
                {
                  t = h_22;
                  return(t);
                }
                t = t_5(u_67, f_1, t_12, c_13, t);
                t = g_13(t);
              }
              ;
              LocalPopChoice(w_18);
            }
          else
            {
              t = u_18;
              {
                ATerm p_4 = NULL,s_4 = NULL,y_1 = NULL;
                t = SSLgetAnnotations(s_12);
                p_4 = t;
                t = c_13;
                t = g_13(t);
                s_4 = t;
                t = (ATerm) ATinsert(CheckATermList(s_4), t_12);
                y_1 = t;
                t = SSLsetAnnotations(y_1, p_4);
              }
            }
        }
      }
    return(t);
  }
  t = i_22;
  t = g_13(t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm x_13 = NULL;
  if(match_cons(t, sym__2))
    {
      x_13 = ATgetArgument(t, 0);
      if((x_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm v_5 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm n_13 = NULL,q_13 = NULL,r_13 = NULL;
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_19 = ATgetArgument(t, 0);
            ATerm f_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
        t = l_6(y_33, z_33, t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        t = (ATerm) ATempty;
      }
    r_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_13, a_34);
    t = u_5(g_1, r_13, a_34, t);
    q_13 = t;
    t = SSL_table_put(y_33, z_33, q_13);
    t = n_13;
  }
  return(t);
}
ATerm w_5 (ATerm a_76 (ATerm), ATerm i_34, ATerm h_34, ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm y_13 = NULL,z_13 = NULL;
    if(match_cons(t, sym__2))
      {
        y_13 = ATgetArgument(t, 0);
        z_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_34, y_13, z_13);
    t = a_76(t);
    return(t);
  }
  t = h_34;
  t = map_1_0(h_1, t);
  return(t);
}
ATerm e_6 (ATerm f_36, ATerm g_36, ATerm t)
{
  t = SSL_access(f_36, g_36);
  return(t);
}
ATerm z_14 (ATerm l_14, ATerm t)
{
  t = SSL_fclose(l_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_14 = NULL,u_14 = NULL;
  u_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_14 = ATgetArgument(t, 0);
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_14);
            ;
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            t = z_14(u_14, t);
          }
      }
    }
  else
    {
      t = z_14(u_14, t);
    }
  return(t);
}
ATerm x_5 (ATerm p_15, ATerm t)
{
  t = SSL_read_term_from_stream(p_15);
  return(t);
}
ATerm z_5 (ATerm n_36, ATerm o_36, ATerm t)
{
  ATerm a_15 = NULL;
  t = SSL_fopen(n_36, o_36);
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_15);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_15 = NULL;
  t = SSL_stdin_stream();
  b_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_15);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_15 = NULL;
  t = SSL_stdout_stream();
  e_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_15 = NULL;
  t = SSL_stderr_stream();
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_15);
  return(t);
}
ATerm h_17 (ATerm u_15, ATerm t)
{
  ATerm v_15 = NULL;
  t = SSL_explode_term(u_15);
  if(match_cons(t, sym__2))
    {
      ATerm i_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_19 = ATgetArgument(t, 1);
        if(((ATgetType(j_19) == AT_LIST) && !(ATisEmpty(j_19))))
          {
            v_15 = ATgetFirst((ATermList) j_19);
            {
              ATerm k_19 = (ATerm) ATgetNext((ATermList) j_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm i_17 (ATerm a_16, ATerm f_16, ATerm g_16, ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,n_16 = NULL,a_2 = NULL;
  t = SSLgetAnnotations(g_16);
  k_16 = t;
  t = a_16;
  if(match_cons(t, sym_Path_1))
    {
      n_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_16, f_16);
  a_2 = t;
  t = SSLsetAnnotations(a_2, k_16);
  if(match_cons(t, sym__2))
    {
      i_16 = ATgetArgument(t, 0);
      j_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(i_16, j_16, t);
  return(t);
}
ATerm j_17 (ATerm p_16, ATerm q_16, ATerm r_16, ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,x_16 = NULL,b_2 = NULL;
  t = SSLgetAnnotations(r_16);
  u_16 = t;
  t = SSL_is_string(p_16);
  x_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_16, q_16);
  b_2 = t;
  t = SSLsetAnnotations(b_2, u_16);
  if(match_cons(t, sym__2))
    {
      s_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(s_16, t_16, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,g_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_19 = ATgetArgument(t, 0);
      ATerm m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  z_16 = t;
  if(match_cons(t, sym__2))
    {
      a_17 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
      {
        ATerm p_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_17(z_16, t);
            ;
            LocalPopChoice(r_19);
          }
        else
          {
            t = p_19;
            {
              ATerm s_19 = t;
              int t_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_17(a_17, g_17, z_16, t);
                  ;
                  LocalPopChoice(t_19);
                }
              else
                {
                  t = s_19;
                  t = j_17(a_17, g_17, z_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_17(z_16, t);
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,n_17 = NULL;
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_17 = NULL;
      o_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_17, term_x_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_19);
    }
  else
    {
      t = v_19;
      t = debug_1_0(i_1, t);
      _fail(t);
    }
  l_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(n_17, t);
  k_17 = t;
  t = l_17;
  t = fclose_0_0(t);
  t = k_17;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_z_19;
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_17 = NULL,r_17 = NULL;
      q_17 = t;
      t = (ATerm) ATinsert(ATempty, term_f_20);
      r_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_17, (ATerm) ATinsert(ATempty, term_f_20));
      t = e_6(q_17, r_17, t);
      LocalPopChoice(d_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = c_20;
      {
        ATerm h_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_20 = t;
            if((PushChoice() == 0))
              {
                ATerm s_17 = NULL,t_17 = NULL;
                s_17 = t;
                t = (ATerm) ATinsert(ATempty, term_a_8);
                t_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_17, (ATerm) ATinsert(ATempty, term_a_8));
                t = e_6(s_17, t_17, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_20;
              }
            t = debug_1_0(l_1, t);
            ;
            LocalPopChoice(j_20);
          }
        else
          {
            t = h_20;
            t = debug_1_0(m_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
  m_18 = t;
  t = term_n_15;
  n_18 = t;
  t = (ATerm) ATinsert(ATempty, term_p_20);
  o_18 = t;
  t = SSL_printnl(n_18, o_18);
  t = m_18;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,t_18 = NULL;
  if(match_cons(t, sym__3))
    {
      q_18 = ATgetArgument(t, 0);
      r_18 = ATgetArgument(t, 1);
      t_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_5(q_18, r_18, t_18, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm v_18 = NULL,x_18 = NULL,y_18 = NULL;
  v_18 = t;
  t = term_n_15;
  x_18 = t;
  t = (ATerm) ATinsert(ATempty, term_q_20);
  y_18 = t;
  t = SSL_printnl(x_18, y_18);
  t = v_18;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
  z_18 = t;
  t = term_n_15;
  a_19 = t;
  t = (ATerm) ATinsert(ATempty, term_p_20);
  b_19 = t;
  t = SSL_printnl(a_19, b_19);
  t = z_18;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,g_18 = NULL,j_18 = NULL;
  w_17 = t;
  t = if_verbose5_1_0(n_1, t);
  {
    ATerm s_20 = t;
    if((PushChoice() == 0))
      {
        ATerm k_18 = NULL,l_18 = NULL;
        t = term_t_20;
        k_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, w_17);
        l_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_20, (ATerm) ATmakeAppl(sym_Imported_1, w_17));
        t = l_6(k_18, l_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_20;
      }
    z_17 = t;
    t = term_t_20;
    e_18 = t;
    t = term_u_20;
    g_18 = t;
    t = (ATerm) ATinsert(ATempty, w_17);
    j_18 = t;
    t = SSL_table_put(e_18, g_18, j_18);
    t = z_17;
    t = if_verbose4_1_0(p_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(u_1, t);
    x_17 = t;
    t = term_t_20;
    d_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_20, x_17);
    t = w_5(w_1, d_18, x_17, t);
    t = if_verbose6_1_0(x_1, t);
    t = term_t_20;
    a_18 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, w_17);
    b_18 = t;
    t = (ATerm) ATempty;
    c_18 = t;
    t = SSL_table_put(a_18, b_18, c_18);
    t = (ATerm) ATmakeAppl(sym__3, term_t_20, (ATerm)ATmakeAppl(sym_Imported_1, w_17), (ATerm) ATempty);
    t = if_verbose4_1_0(z_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm m_71 (ATerm), ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,q_19 = NULL;
  n_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_19 = ATgetFirst((ATermList) t);
          q_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm v_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_6 = NULL,w_6 = NULL,x_6 = NULL,g_2 = NULL;
            t = SSLgetAnnotations(n_19);
            i_6 = t;
            t = o_19;
            t = m_71(t);
            w_6 = t;
            t = q_19;
            t = filter_1_0(m_71, t);
            x_6 = t;
            t = (ATerm) ATinsert(CheckATermList(x_6), w_6);
            g_2 = t;
            t = SSLsetAnnotations(g_2, i_6);
            ;
            LocalPopChoice(x_20);
          }
        else
          {
            t = v_20;
            t = q_19;
            t = filter_1_0(m_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_73 (ATerm), ATerm t)
{
  ATerm y_19 (ATerm t)
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_73(t);
        t = y_19(t);
        ;
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
      }
    return(t);
  }
  t = y_19(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm a_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = a_21;
      {
        ATerm j_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_20 = NULL;
            t = term_m_21;
            b_20 = t;
            t = SSL_getenv(b_20);
            ;
            LocalPopChoice(k_21);
          }
        else
          {
            t = j_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm n_20 = NULL,r_20 = NULL;
  t = term_t_20;
  n_20 = t;
  t = term_q_21;
  r_20 = t;
  t = term_r_21;
  t = l_6(n_20, r_20, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm s_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_21;
      }
  }
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_t_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm e_20 = NULL;
  t = if_verbose5_1_0(c_2, t);
  e_20 = t;
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_20 = NULL,i_20 = NULL;
        t = term_t_20;
        g_20 = t;
        t = term_u_20;
        i_20 = t;
        t = term_w_21;
        t = l_6(g_20, i_20, t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        {
          ATerm l_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          l_20 = t;
          t = repeat_1_0(e_2, t);
          t = l_20;
        }
      }
    t = e_20;
    t = if_verbose5_1_0(f_2, t);
  }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_x_21;
  return(t);
}
ATerm a_22 (ATerm w_20, ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  t = term_t_20;
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, w_20);
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_20, (ATerm) ATmakeAppl(sym_Tool_1, w_20));
  t = l_6(c_21, d_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_21 = ATgetFirst((ATermList) t);
      if(match_cons(y_21, sym__2))
        {
          ATerm c_22 = ATgetArgument(y_21, 0);
          b_21 = ATgetArgument(y_21, 1);
        }
      else
        _fail(t);
      {
        ATerm b_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_21;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_x_21;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_t_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(a_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
      t = if_verbose5_1_0(j_2, t);
      t = xtc_load_0_0(t);
      g_21 = t;
      if(match_cons(t, sym__2))
        {
          e_21 = ATgetArgument(t, 0);
          f_21 = ATgetArgument(t, 1);
          {
            ATerm g_22 = t;
            int j_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_21 = NULL,n_21 = NULL,o_21 = NULL;
                t = term_t_20;
                n_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, e_21);
                o_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_t_20, (ATerm) ATmakeAppl(sym_Tool_1, e_21));
                t = l_6(n_21, o_21, t);
                {
                  ATerm n_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((f_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((l_21 != NULL) && (l_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          l_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(n_2, t);
                  t = not_null(l_21);
                }
                ;
                LocalPopChoice(j_22);
              }
            else
              {
                t = g_22;
                t = a_22(g_21, t);
              }
          }
        }
      else
        {
          t = a_22(g_21, t);
        }
      t = if_verbose5_1_0(w_2, t);
      ;
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
        ATerm z_21 = NULL,m_7 = NULL,n_7 = NULL;
        z_21 = t;
        t = term_n_15;
        m_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_22), z_21), term_k_22);
        n_7 = t;
        t = SSL_printnl(m_7, n_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_22), z_21), term_k_22);
        t = if_verbose5_1_0(z_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm f_6 (ATerm l_12, ATerm m_12, ATerm t)
{
  t = SSL_copy(l_12, m_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL;
  e_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      f_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_7 = NULL;
        t = e_23;
        t = n_0(t);
        v_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = v_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = v_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, f_23, v_7);
        t = f_6(f_23, v_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, f_23);
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        {
          ATerm q_22 = t;
          int r_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_8 = NULL;
              t = e_23;
              t = n_0(t);
              k_8 = t;
              {
                ATerm s_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm l_8 = NULL;
                    l_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = l_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = l_8;
                          }
                        else
                          {
                            t = l_8;
                            if((f_23 != t))
                              {
                                _fail(t);
                              }
                            t = l_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_22;
                  }
                t = (ATerm) ATmakeAppl(sym__2, f_23, k_8);
                t = f_6(f_23, k_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, f_23);
              }
              ;
              LocalPopChoice(r_22);
            }
          else
            {
              t = q_22;
              t = e_23;
              t = n_0(t);
              if((f_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_23);
            }
        }
      }
  }
  return(t);
}
ATerm g_6 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL;
  k_23 = t;
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
        t = l_6(g_33, h_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_22 = ATgetFirst((ATermList) t);
            j_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_22);
        t = SSL_table_put(g_33, h_33, j_23);
        t = (ATerm) ATmakeAppl(sym__3, g_33, h_33, j_23);
      }
    else
      {
        t = t_22;
        t = SSL_table_remove(g_33, h_33);
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
      }
    t = k_23;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_74 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,p_23 = NULL,q_23 = NULL,t_23 = NULL;
  q_23 = t;
  t = m_74(t);
  p_23 = t;
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_23 = NULL;
        t = term_h_16;
        u_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_23, term_h_16);
        t = l_6(p_23, u_23, t);
        ;
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_23 = ATgetFirst((ATermList) t);
        l_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_h_16;
    t_23 = t;
    t = SSL_table_put(p_23, t_23, l_23);
    t = m_23;
    {
      ATerm b_3 (ATerm t)
      {
        ATerm v_23 = NULL;
        v_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_23, v_23);
        t = g_6(p_23, v_23, t);
        return(t);
      }
      t = map_1_0(b_3, t);
      t = q_23;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_75 (ATerm), ATerm i_75 (ATerm), ATerm t)
{
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_75(t);
      t = i_75(t);
      ;
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
      t = i_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_74 (ATerm), ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
  y_23 = t;
  t = l_74(t);
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_23, term_h_16);
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_23 = ATgetArgument(t, 0);
            ATerm d_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_16;
        f_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_23, term_h_16);
        t = l_6(x_23, f_24, t);
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        t = (ATerm) ATempty;
      }
    z_23 = t;
    t = term_h_16;
    a_24 = t;
    t = (ATerm) ATinsert(CheckATermList(z_23), (ATerm) ATempty);
    b_24 = t;
    t = SSL_table_put(x_23, a_24, b_24);
    t = y_23;
  }
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_m_17;
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(r_24);
        ;
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        t = r_24;
      }
  }
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_m_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm j_24 = NULL;
  ATerm f_3 (ATerm t)
  {
    ATerm k_24 = NULL;
    k_24 = t;
    {
      ATerm i_23 = t;
      int n_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_24 = NULL,m_24 = NULL;
          t = term_m_17;
          l_24 = t;
          t = term_h_16;
          m_24 = t;
          t = term_o_23;
          t = l_6(l_24, m_24, t);
          ;
          LocalPopChoice(n_23);
        }
      else
        {
          t = i_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((j_24 != NULL) && (j_24 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            j_24 = ATgetFirst((ATermList) t);
          {
            ATerm r_23 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = j_24;
      t = map_1_0(h_3, t);
      t = k_24;
      t = end_scope_1_0(j_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(c_3, t);
  t = restore_always_2_0(q_77, f_3, t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm s_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_23);
    }
  else
    {
      t = s_23;
      t = term_c_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_77 (ATerm), ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_24 = NULL;
        t = term_u_17;
        t = get_config_0_0(t);
        u_24 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, u_24);
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        t = term_m_4;
      }
    t = r_77(t);
    t = copy_to_1_0(m_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(k_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,b_25 = NULL;
  v_24 = t;
  t = term_c_17;
  t = whoami_0_0(t);
  x_24 = t;
  t = term_n_15;
  z_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_24), x_24), term_g_24);
  b_25 = t;
  t = SSL_printnl(z_24, b_25);
  t = term_v_8;
  y_24 = t;
  t = SSL_exit(y_24);
  t = v_24;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  if(match_string(t, "-k"))
    {
      t = e_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_25;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm f_25 = NULL,h_25 = NULL,i_25 = NULL;
  f_25 = t;
  t = SSL_string_to_int(f_25);
  h_25 = t;
  t = term_i_24;
  i_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_24, h_25);
  t = o_6(i_25, h_25, t);
  t = f_25;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_n_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, p_3, q_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm q_25 = NULL;
  q_25 = t;
  if(match_string(t, "-S"))
    {
      t = q_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_25;
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL;
  t = term_f_18;
  r_25 = t;
  t = term_o_24;
  s_25 = t;
  t = term_p_24;
  t = o_6(r_25, s_25, t);
  t = term_q_24;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_s_24;
  return(t);
}
ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm t_25 = NULL,v_25 = NULL,w_25 = NULL;
  t_25 = t;
  t = SSL_string_to_int(t_25);
  v_25 = t;
  t = term_f_18;
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_18, v_25);
  t = o_6(w_25, v_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_25);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_t_24;
  return(t);
}
ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  t = term_w_24;
  x_25 = t;
  t = term_c_17;
  y_25 = t;
  t = term_a_25;
  t = o_6(x_25, y_25, t);
  t = term_c_25;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_3, s_3, t_3, t);
      ;
      LocalPopChoice(j_25);
    }
  else
    {
      t = g_25;
      {
        ATerm k_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_3, v_3, a_4, t);
            ;
            LocalPopChoice(l_25);
          }
        else
          {
            t = k_25;
            t = Option_3_0(e_4, f_4, g_4, t);
          }
      }
    }
  return(t);
}
ATerm o_6 (ATerm b_35, ATerm c_35, ATerm t)
{
  ATerm a_26 = NULL;
  t = term_m_25;
  a_26 = t;
  t = SSL_table_put(a_26, b_35, c_35);
  t = (ATerm) ATmakeAppl(sym__3, term_m_25, b_35, c_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
      t = term_c_17;
      t = h_0(t);
      h_26 = t;
      t = term_n_25;
      i_26 = t;
      t = term_o_25;
      j_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_25, term_o_25, h_26);
      t = m_6(i_26, j_26, h_26, t);
      _fail(t);
    }
  else
    {
      ATerm n_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_26 = ATgetFirst((ATermList) t);
          g_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_26;
      t = d_0(t);
      t = term_c_17;
      t = g_0(t);
      n_26 = t;
      t = (ATerm) ATinsert(CheckATermList(g_26), n_26);
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm p_26 = NULL;
  p_26 = t;
  if(match_string(t, "-o"))
    {
      t = p_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_26;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL;
  q_26 = t;
  t = term_p_17;
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_17, q_26);
  t = o_6(r_26, q_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_26);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_p_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, l_4, n_4, t);
  return(t);
}
ATerm m_6 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
  {
    ATerm u_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_26 = ATgetArgument(t, 0);
            ATerm c_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
        t = l_6(b_33, c_33, t);
        ;
        LocalPopChoice(z_25);
      }
    else
      {
        t = u_25;
        t = (ATerm) ATempty;
      }
    u_26 = t;
    t = (ATerm) ATinsert(CheckATermList(u_26), a_33);
    v_26 = t;
    t = SSL_table_put(b_33, c_33, v_26);
    t = t_26;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm j_27 = NULL,m_27 = NULL,p_27 = NULL,s_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
      t = term_c_17;
      t = m_0(t);
      t_27 = t;
      t = term_n_25;
      u_27 = t;
      t = term_o_25;
      v_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_25, term_o_25, t_27);
      t = m_6(u_27, v_27, t_27, t);
      _fail(t);
    }
  else
    {
      ATerm e_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_27 = ATgetFirst((ATermList) t);
          m_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_27 = ATgetFirst((ATermList) t);
          s_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_27;
      t = k_0(t);
      t = p_27;
      t = l_0(t);
      e_28 = t;
      t = (ATerm) ATinsert(CheckATermList(s_27), e_28);
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm j_28 = NULL;
  j_28 = t;
  if(match_string(t, "-i"))
    {
      t = j_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_28;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL;
  k_28 = t;
  t = term_u_17;
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, k_28);
  t = o_6(l_28, k_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_28);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, q_4, r_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_17;
  t = whoami_0_0(t);
  m_28 = t;
  t = term_n_15;
  o_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_26), m_28);
  p_28 = t;
  t = SSL_printnl(o_28, p_28);
  t = term_v_8;
  n_28 = t;
  t = SSL_exit(n_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm h_6 (ATerm w_30, ATerm x_30, ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_30, x_30);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      t = SSL_addr(w_30, x_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
  r_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_28;
      t = i_70(t);
    }
  else
    {
      ATerm w_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_28 = ATgetFirst((ATermList) t);
          t_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_28;
      t = foldr_2_0(i_70, j_70, t);
      w_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_28, w_28);
      t = j_70(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      z_8 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(z_8, a_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_28 = NULL,s_8 = NULL,t_8 = NULL;
  t = times_0_0(t);
  t_8 = t;
  t = SSL_explode_term(t_8);
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_8;
  t = foldr_2_0(u_4, v_4, t);
  z_28 = t;
  t = SSL_TicksToSeconds(z_28);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL;
  k_29 = t;
  if(match_cons(t, sym__2))
    {
      l_29 = ATgetArgument(t, 0);
      m_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_29;
        if((l_29 != t))
          {
            _fail(t);
          }
        t = k_29;
        ;
        LocalPopChoice(w_26);
      }
    else
      {
        t = s_26;
        t = (ATerm) ATmakeAppl(sym__2, l_29, m_29);
        {
          ATerm x_26 = t;
          int y_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_29, m_29);
              ;
              LocalPopChoice(y_26);
            }
          else
            {
              t = x_26;
              t = SSL_gtr(l_29, m_29);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_29, m_29);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_75 (ATerm), ATerm t)
{
  ATerm q_29 = NULL;
  q_29 = t;
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_29 = NULL;
        t = term_f_18;
        t = get_config_0_0(t);
        u_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_29, term_v_8);
        t = geq_0_0(t);
        t = q_29;
        t = t_75(t);
        ;
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        t = q_29;
      }
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm w_29 = NULL,z_29 = NULL,c_30 = NULL,e_30 = NULL;
  t = run_time_0_0(t);
  w_29 = t;
  t = term_c_17;
  t = whoami_0_0(t);
  z_29 = t;
  t = term_n_15;
  c_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_27), w_29), term_f_8), z_29);
  e_30 = t;
  t = SSL_printnl(c_30, e_30);
  t = (ATerm) ATmakeAppl(sym__2, term_n_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_27), w_29), term_f_8), z_29));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_24;
  f_30 = t;
  t = SSL_exit(f_30);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  o_30 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_30;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_30 = ATgetArgument(t, 0);
          {
            ATerm s_9 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(o_30);
            s_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_30);
            i_2 = t;
            t = SSLsetAnnotations(i_2, s_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_30;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_79 (ATerm), ATerm t)
{
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_27);
    }
  else
    {
      t = c_27;
      t = fetch_1_0(a_5, t);
    }
  t = s_79(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_30 = ATgetFirst((ATermList) t);
      s_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_30 = NULL,z_30 = NULL;
        ATerm b_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_30)), not_null(z_30));
          return(t);
        }
        t = s_30;
        t = j_0(t);
        if(((y_30 != NULL) && (y_30 != t)))
          _fail(t);
        else
          y_30 = t;
        t = r_30;
        t = i_0(t);
        if(((z_30 != NULL) && (z_30 != t)))
          _fail(t);
        else
          z_30 = t;
        t = s_30;
        t = reverse_acc_2_0(i_0, b_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_17;
      t = j_0(t);
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,k_2 = NULL;
  f_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_31);
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_31);
  k_2 = t;
  t = SSLsetAnnotations(k_2, d_31);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm h_31 = NULL;
  h_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_31), term_f_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL;
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      t = fetch_1_0(c_5, t);
    }
  t = term_i_27;
  t = echo_0_0(t);
  t = term_n_25;
  b_31 = t;
  t = term_o_25;
  c_31 = t;
  t = term_k_27;
  t = l_6(b_31, c_31, t);
  t = reverse_acc_2_0(_id, d_5, t);
  t = map_1_0(e_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_64 (ATerm), ATerm t)
{
  ATerm p_32 (ATerm t)
  {
    ATerm b_32 = NULL,n_32 = NULL,o_32 = NULL;
    b_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_32 = ATgetFirst((ATermList) t);
        o_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_27 = t;
      int n_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_10 = NULL,j_10 = NULL,s_2 = NULL;
          t = SSLgetAnnotations(b_32);
          g_10 = t;
          t = n_32;
          t = a_64(t);
          j_10 = t;
          t = (ATerm) ATinsert(CheckATermList(o_32), j_10);
          s_2 = t;
          t = SSLsetAnnotations(s_2, g_10);
          ;
          LocalPopChoice(n_27);
        }
      else
        {
          t = l_27;
          {
            ATerm c_11 = NULL,f_11 = NULL,t_2 = NULL;
            t = SSLgetAnnotations(b_32);
            c_11 = t;
            t = o_32;
            t = p_32(t);
            f_11 = t;
            t = (ATerm) ATinsert(CheckATermList(f_11), n_32);
            t_2 = t;
            t = SSLsetAnnotations(t_2, c_11);
          }
        }
    }
    return(t);
  }
  t = p_32(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,d_33 = NULL;
  u_32 = t;
  {
    ATerm o_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_27 = ATgetFirst((ATermList) t);
                ATerm w_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_32;
          }
        ;
        LocalPopChoice(q_27);
      }
    else
      {
        t = o_27;
        t = (ATerm) ATinsert(ATempty, u_32);
      }
    v_32 = t;
    t = term_c_24;
    d_33 = t;
    t = SSL_printnl(d_33, v_32);
    t = u_32;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm k_6 (ATerm s_29, ATerm t_29, ATerm t)
{
  t = SSL_strcat(s_29, t_29);
  return(t);
}
ATerm debug_1_0 (ATerm v_59 (ATerm), ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL;
  k_33 = t;
  t = v_59(t);
  l_33 = t;
  t = term_n_15;
  m_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_33), l_33);
  n_33 = t;
  t = SSL_printnl(m_33, n_33);
  t = k_33;
  return(t);
}
ATerm map_1_0 (ATerm q_63 (ATerm), ATerm t)
{
  ATerm l_34 (ATerm t)
  {
    ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
    e_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_34;
      }
    else
      {
        ATerm x_11 = NULL,b_12 = NULL,d_12 = NULL,i_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_34 = ATgetFirst((ATermList) t);
            g_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_34);
        x_11 = t;
        t = f_34;
        t = q_63(t);
        b_12 = t;
        t = g_34;
        t = l_34(t);
        d_12 = t;
        t = (ATerm) ATinsert(CheckATermList(d_12), b_12);
        i_3 = t;
        t = SSLsetAnnotations(i_3, x_11);
      }
    return(t);
  }
  t = l_34(t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_z_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_34 = NULL;
      v_34 = t;
      t = SSL_is_string(v_34);
      ;
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
      {
        ATerm c_28 = t;
        int d_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_5, t);
            ;
            LocalPopChoice(d_28);
          }
        else
          {
            t = c_28;
            {
              ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
              d_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_35 = ATgetArgument(t, 0);
                  t = e_35;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_35 = ATgetArgument(t, 0);
                      t = e_35;
                      {
                        ATerm f_28 = t;
                        int g_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(g_28);
                          }
                        else
                          {
                            t = f_28;
                            t = debug_1_0(j_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_35 = NULL,p_35 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_35 = ATgetArgument(t, 0);
                          f_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_35;
                      t = eval_config_0_0(t);
                      j_35 = t;
                      t = f_35;
                      t = eval_config_0_0(t);
                      p_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_35, p_35);
                      t = k_6(j_35, p_35, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm l_6 (ATerm s_34, ATerm t_34, ATerm t)
{
  t = SSL_table_get(s_34, t_34);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL;
  w_35 = t;
  t = term_m_25;
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_25, w_35);
  t = l_6(x_35, w_35, t);
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_35 = NULL,z_35 = NULL;
        t = eval_config_0_0(t);
        y_35 = t;
        t = term_m_25;
        z_35 = t;
        t = SSL_table_put(z_35, w_35, y_35);
        t = y_35;
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
      }
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL;
  t = term_q_28;
  c_36 = t;
  t = term_c_17;
  d_36 = t;
  t = term_u_28;
  t = o_6(c_36, d_36, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_v_28;
  return(t);
}
ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm e_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL;
  t = term_q_28;
  i_36 = t;
  t = term_c_17;
  j_36 = t;
  t = term_u_28;
  t = o_6(i_36, j_36, t);
  t = term_x_28;
  e_36 = t;
  t = term_c_17;
  h_36 = t;
  t = term_y_28;
  t = o_6(e_36, h_36, t);
  t = term_a_29;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_5, m_5, n_5, t);
      ;
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      t = Option_3_0(o_5, q_5, r_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_51 (ATerm), ATerm j_51 (ATerm), ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,l_3 = NULL;
  t_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_36 = ATgetFirst((ATermList) t);
      m_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_36);
  k_36 = t;
  t = l_36;
  t = i_51(t);
  r_36 = t;
  t = m_36;
  t = j_51(t);
  s_36 = t;
  t = (ATerm) ATinsert(CheckATermList(s_36), r_36);
  l_3 = t;
  t = SSLsetAnnotations(l_3, k_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_81 (ATerm), ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,j_37 = NULL,k_37 = NULL,t_4 = NULL;
  y_36 = t;
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_29;
        t = q_81(t);
        ;
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
      }
    t = y_36;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_37 = ATgetFirst((ATermList) t);
        b_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_36);
    z_36 = t;
    t = term_k_26;
    k_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_k_26, a_37);
    t = o_6(k_37, a_37, t);
    t = b_37;
    {
      ATerm z_37 (ATerm t)
      {
        ATerm h_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_29 = t;
            int n_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_37 = NULL;
                p_37 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_37;
                ;
                LocalPopChoice(n_29);
              }
            else
              {
                t = j_29;
                t = q_81(t);
                t = Cons_2_0(_id, z_37, t);
              }
            ;
            LocalPopChoice(i_29);
          }
        else
          {
            t = h_29;
            {
              ATerm t_37 = NULL,v_37 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_37 = ATgetFirst((ATermList) t);
                  v_37 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_37), (ATerm) ATmakeAppl(sym_Undefined_1, t_37));
            }
          }
        return(t);
      }
      t = z_37(t);
      if(((j_37 != NULL) && (j_37 != t)))
        _fail(t);
      else
        j_37 = t;
      t = (ATerm) ATinsert(CheckATermList(j_37), (ATerm) ATmakeAppl(sym_Program_1, a_37));
      if(((t_4 != NULL) && (t_4 != t)))
        _fail(t);
      else
        t_4 = t;
      t = SSLsetAnnotations(t_4, z_36);
    }
  }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm t_38 = NULL;
  t_38 = t;
  if(match_string(t, "--help"))
    {
      t = t_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_38;
        }
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL;
  t = term_e_27;
  u_38 = t;
  t = term_c_17;
  v_38 = t;
  t = term_o_29;
  t = o_6(u_38, v_38, t);
  t = term_p_29;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_r_29;
  return(t);
}
ATerm q_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_81 (ATerm), ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
  j_38 = t;
  t = term_n_25;
  l_38 = t;
  t = term_o_25;
  m_38 = t;
  t = (ATerm) ATempty;
  n_38 = t;
  t = SSL_table_put(l_38, m_38, n_38);
  t = j_38;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm v_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_81(t);
          ;
          LocalPopChoice(x_29);
        }
      else
        {
          t = v_29;
          {
            ATerm y_29 = t;
            int a_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_6, j_6, n_6, t);
                ;
                LocalPopChoice(a_30);
              }
            else
              {
                t = y_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_5, t);
    {
      ATerm b_30 = t;
      int d_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_39 = NULL;
          c_39 = t;
          {
            ATerm g_30 = t;
            int h_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_13 = NULL;
                t = c_39;
                {
                  ATerm i_30 = t;
                  int j_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_e_27;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(j_30);
                    }
                  else
                    {
                      t = i_30;
                      t = fetch_1_0(q_6, t);
                    }
                  t = c_39;
                  t = default_system_usage_0_0(t);
                  t = term_o_24;
                  k_13 = t;
                  t = SSL_exit(k_13);
                }
                ;
                LocalPopChoice(h_30);
              }
            else
              {
                t = g_30;
                {
                  ATerm p_13 = NULL;
                  t = term_q_28;
                  t = get_config_0_0(t);
                  t = c_39;
                  t = default_system_about_0_0(t);
                  t = term_o_24;
                  p_13 = t;
                  t = SSL_exit(p_13);
                }
              }
          }
          ;
          LocalPopChoice(d_30);
        }
      else
        {
          t = b_30;
          {
            ATerm k_30 = t;
            int l_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
                ATerm u_6 (ATerm t)
                {
                  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,w_4 = NULL;
                  j_39 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      i_39 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_39);
                  h_39 = t;
                  t = i_39;
                  if(((h_38 != NULL) && (h_38 != t)))
                    _fail(t);
                  else
                    h_38 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, i_39);
                  w_4 = t;
                  t = SSLsetAnnotations(w_4, h_39);
                  return(t);
                }
                t = fetch_1_0(u_6, t);
                t = term_n_15;
                if(((f_39 != NULL) && (f_39 != t)))
                  _fail(t);
                else
                  f_39 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_38)), term_m_30);
                if(((g_39 != NULL) && (g_39 != t)))
                  _fail(t);
                else
                  g_39 = t;
                t = SSL_printnl(f_39, g_39);
                t = (ATerm) ATmakeAppl(sym__2, term_n_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_38)), term_m_30));
                t = default_system_usage_0_0(t);
                t = term_v_8;
                if(((e_39 != NULL) && (e_39 != t)))
                  _fail(t);
                else
                  e_39 = t;
                t = SSL_exit(e_39);
                ;
                LocalPopChoice(l_30);
              }
            else
              {
                t = k_30;
              }
          }
        }
      if(((i_38 != NULL) && (i_38 != t)))
        _fail(t);
      else
        i_38 = t;
      t = term_n_25;
      if(((k_38 != NULL) && (k_38 != t)))
        _fail(t);
      else
        k_38 = t;
      t = SSL_table_destroy(k_38);
      t = i_38;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL;
  t = parse_options_1_0(u_79, t);
  o_39 = t;
  t = term_p_30;
  r_39 = t;
  t = SSL_table_create(r_39);
  t = term_p_30;
  p_39 = t;
  t = term_q_30;
  q_39 = t;
  t = SSL_table_put(p_39, q_39, o_39);
  t = o_39;
  t = w_79(t);
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_79, t);
        ;
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        {
          ATerm v_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_79(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_31);
            }
          else
            {
              t = v_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm g_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(i_31);
    }
  else
    {
      t = g_31;
      {
        ATerm j_31 = t;
        int k_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(k_31);
          }
        else
          {
            t = j_31;
            {
              ATerm l_31 = t;
              int m_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(c_7, e_7, j_7, t);
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
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(o_31);
                      }
                    else
                      {
                        t = n_31;
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
ATerm b_7 (ATerm t)
{
  t = xtc_io_1_0(k_7, t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL;
  t = term_p_31;
  x_39 = t;
  t = term_c_17;
  y_39 = t;
  t = term_q_31;
  t = o_6(x_39, y_39, t);
  t = term_r_31;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_40 = NULL,g_40 = NULL;
      g_40 = t;
      if(match_cons(t, sym_FILE_1))
        {
          f_40 = ATgetArgument(t, 0);
          {
            ATerm b_14 = NULL,y_4 = NULL;
            t = SSLgetAnnotations(g_40);
            b_14 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, f_40);
            y_4 = t;
            t = SSLsetAnnotations(y_4, b_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_40;
        }
      LocalPopChoice(u_31);
      t = xtc_transform_file_2_0(l_7, o_7, t);
    }
  else
    {
      t = t_31;
      t = xtc_transform_term_2_0(q_7, s_7, t);
    }
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_40 = NULL,p_40 = NULL;
        p_40 = t;
        if(match_cons(t, sym_FILE_1))
          {
            o_40 = ATgetArgument(t, 0);
            {
              ATerm n_14 = NULL,z_4 = NULL;
              t = SSLgetAnnotations(p_40);
              n_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_40);
              z_4 = t;
              t = SSLsetAnnotations(z_4, n_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_40;
          }
        LocalPopChoice(w_31);
        t = xtc_transform_file_2_0(t_7, u_7, t);
      }
    else
      {
        t = v_31;
        t = xtc_transform_term_2_0(x_7, z_7, t);
      }
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_x_31;
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm h_40 = NULL;
  t = term_y_31;
  t = xtc_find_0_0(t);
  h_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_40), term_z_31);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_x_31;
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm i_40 = NULL;
  t = term_y_31;
  t = xtc_find_0_0(t);
  i_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_40), term_z_31);
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm astratego2text_0_0 (ATerm t)
{
  t = option_wrap_4_0(v_6, default_usage_0_0, _id, b_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = astratego2text_0_0(t);
  return(t);
}
