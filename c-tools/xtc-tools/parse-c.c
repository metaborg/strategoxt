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
ATerm term_p_32;
ATerm term_n_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_i_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_i_30;
ATerm term_q_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_n_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_w_27;
ATerm term_q_27;
ATerm term_e_27;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_c_26;
ATerm term_z_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_i_25;
ATerm term_f_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_g_24;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_s_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_d_22;
ATerm term_z_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_t_21;
ATerm term_o_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_h_20;
ATerm term_e_20;
ATerm term_g_18;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_r_16;
ATerm term_j_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
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
ATerm term_p_9;
ATerm term_o_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_c_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_h_8;
void init_constant_terms (void)
{
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_9, term_n_8, term_k_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_p_9, term_u_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_x_9, term_y_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_10, term_b_10, term_c_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_10, term_f_10, term_g_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_j_10, term_k_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_q_10, term_r_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_u_10, term_v_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_10, term_y_10, term_a_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_f_11, term_j_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_o_11, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_u_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_z_11, term_a_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_f_12, term_j_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_p_12, term_q_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_v_12, term_x_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_b_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_f_13, term_g_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_k_13, term_l_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_o_13, term_p_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_w_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_z_13, term_a_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_h_14, term_i_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_o_14, term_q_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_u_14, term_v_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_i_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_x_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_h_21);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym__2, term_q_17, term_r_16);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_h_8, term_r_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_24);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_f_25, term_f_17);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_w_25, term_z_25);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym__2, term_z_28, term_f_17);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_g_18, term_f_17);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_q_27, term_f_17);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_f_17);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("C.tbl", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
ATerm x_5 (ATerm g_31, ATerm h_31, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm e_6 (ATerm k_15, ATerm l_15, ATerm);
ATerm h_6 (ATerm e_60 (ATerm), ATerm s_158, ATerm s_15, ATerm);
ATerm c_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm);
ATerm i_6 (ATerm g_12, ATerm h_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm j_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm t_58 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm l_78 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm n_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm h_7 (ATerm q_6, ATerm);
ATerm conc_0_0 (ATerm);
ATerm k_6 (ATerm w_74 (ATerm), ATerm o_32, ATerm m_32, ATerm);
ATerm q_8 (ATerm z_7, ATerm);
ATerm s_8 (ATerm b_8, ATerm c_8, ATerm d_8, ATerm);
ATerm y_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm pass_v_verbose_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm e_76 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm f_76 (ATerm), ATerm);
ATerm z_5 (ATerm e_68 (ATerm), ATerm f_68 (ATerm), ATerm n_22, ATerm m_22, ATerm);
ATerm a_6 (ATerm b_68 (ATerm), ATerm j_22, ATerm i_22, ATerm);
ATerm l_1 (ATerm);
ATerm b_6 (ATerm c_34, ATerm d_34, ATerm e_34, ATerm);
ATerm c_6 (ATerm h_76 (ATerm), ATerm m_34, ATerm l_34, ATerm);
ATerm l_6 (ATerm j_36, ATerm k_36, ATerm);
ATerm t_15 (ATerm f_15, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm d_6 (ATerm q_15, ATerm);
ATerm f_6 (ATerm r_36, ATerm s_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_17 (ATerm o_16, ATerm);
ATerm a_18 (ATerm u_16, ATerm v_16, ATerm w_16, ATerm);
ATerm b_18 (ATerm j_17, ATerm k_17, ATerm l_17, ATerm);
ATerm g_6 (ATerm);
ATerm p_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm v_1 (ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm g_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm t_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm s_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm h_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm x_22 (ATerm q_21, ATerm);
ATerm z_2 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm j_3 (ATerm);
ATerm xtc_sglr_1_0 (ATerm i_88 (ATerm), ATerm);
ATerm m_6 (ATerm m_12, ATerm n_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm n_6 (ATerm k_33, ATerm l_33, ATerm);
ATerm end_scope_1_0 (ATerm t_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm s_74 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm x_77 (ATerm), ATerm);
ATerm w_3 (ATerm);
ATerm xtc_io_1_0 (ATerm y_77 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm f_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm o_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm v_6 (ATerm f_35, ATerm g_35, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm t_6 (ATerm f_33, ATerm g_33, ATerm e_33, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm o_6 (ATerm a_31, ATerm b_31, ATerm);
ATerm foldr_2_0 (ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm g_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_76 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm need_help_1_0 (ATerm z_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_6 (ATerm v_29, ATerm w_29, ATerm);
ATerm debug_1_0 (ATerm c_60 (ATerm), ATerm);
ATerm map_1_0 (ATerm x_63 (ATerm), ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm s_6 (ATerm w_34, ATerm x_34, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm j_6 (ATerm);
ATerm p_6 (ATerm);
ATerm w_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_51 (ATerm), ATerm p_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm x_81 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm parse_options_1_0 (ATerm w_81 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm y_7 (ATerm);
ATerm a_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm x_5 (ATerm g_31, ATerm h_31, ATerm t)
{
  ATerm w_4 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(g_31, h_31);
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = w_4;
      t = SSL_subtr(g_31, h_31);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,q_0 = NULL;
  t = term_h_8;
  {
    ATerm i_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_8);
      }
    else
      {
        t = i_8;
        t = term_n_8;
      }
    b_0 = t;
    t = term_n_8;
    q_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_n_8);
    t = x_5(b_0, q_0, t);
    f_0 = t;
    t = SSL_int_to_string(f_0);
    a_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_h_8);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_o_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm d_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_r_8);
      d_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_0, (ATerm) ATinsert(ATempty, term_r_8));
      t = l_6(w_0, d_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm e_6 (ATerm k_15, ATerm l_15, ATerm t)
{
  ATerm e_1 = NULL;
  t = SSL_write_term_to_stream_baf(k_15, l_15);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_1);
  return(t);
}
ATerm h_6 (ATerm e_60 (ATerm), ATerm s_158, ATerm s_15, ATerm t)
{
  ATerm f_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_158, term_t_8);
  t = g_6(t);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_1, s_15);
  t = e_60(t);
  t = fclose_0_0(t);
  t = s_15;
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm i_1 = NULL,k_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_8 = ATgetArgument(t, 0);
      if(match_cons(u_8, sym_Stream_1))
        {
          i_1 = ATgetArgument(u_8, 0);
        }
      else
        _fail(t);
      k_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(i_1, k_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL;
  g_1 = t;
  t = xtc_new_file_0_0(t);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, g_1);
  t = h_6(c_0, h_1, g_1, t);
  t = SSL_close_file(h_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(u_78, v_78, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm i_6 (ATerm g_12, ATerm h_12, ATerm t)
{
  t = SSL_execvp(g_12, h_12);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
  u_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      v_2 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,t_0 = NULL;
        t = SSL_int_to_string(v_2);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_8), s_0), term_v_8);
        t_0 = t;
        t = SSL_concat_strings(t_0);
      }
    }
  else
    {
      ATerm n_1 = NULL,o_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          v_2 = ATgetArgument(t, 0);
          w_2 = ATgetArgument(t, 1);
          x_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(w_2);
      n_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_2), term_c_9), n_1), term_x_8), v_2);
      o_1 = t;
      t = SSL_concat_strings(o_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm j_64 (ATerm), ATerm t)
{
  ATerm a_3 = NULL;
  ATerm e_0 (ATerm t)
  {
    t = j_64(t);
    if(((a_3 != NULL) && (a_3 != t)))
      _fail(t);
    else
      a_3 = t;
    return(t);
  }
  t = fetch_1_0(e_0, t);
  t = not_null(a_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_3 = NULL;
  b_3 = t;
  {
    ATerm e_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm h_9 = ATgetArgument(t, 0);
              if((b_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm i_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_15), term_e_15), term_a_15), term_w_14), term_r_14), term_j_14), term_c_14), term_x_13), term_s_13), term_m_13), term_i_13), term_c_13), term_y_12), term_r_12), term_k_12), term_c_12), term_v_11), term_q_11), term_l_11), term_b_11), term_w_10), term_s_10), term_l_10), term_h_10), term_d_10), term_z_9), term_v_9), term_l_9);
        t = fetch_elem_1_0(o_0, t);
        ;
        LocalPopChoice(g_9);
      }
    else
      {
        t = e_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm k_3 = NULL,u_3 = NULL;
  k_3 = t;
  {
    ATerm m_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_15 = ATgetArgument(t, 0);
            u_3 = ATgetArgument(t, 1);
            {
              ATerm w_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_15);
        {
          ATerm x_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_1 = NULL,w_1 = NULL,x_1 = NULL;
              t = u_3;
              {
                ATerm b_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_16;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                u_1 = t;
                t = term_c_16;
                w_1 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, u_1), term_d_16);
                x_1 = t;
                t = SSL_printnl(w_1, x_1);
                t = (ATerm) ATmakeAppl(sym__2, term_c_16, (ATerm) ATinsert(ATinsert(ATempty, u_1), term_d_16));
              }
              ;
              LocalPopChoice(y_15);
            }
          else
            {
              t = x_15;
              t = k_3;
            }
        }
      }
    else
      {
        t = m_15;
        t = k_3;
      }
    t = k_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm t_58 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  e_4 = t;
  t = fork_0_0(t);
  d_4 = t;
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_4;
        t = t_58(t);
        ;
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        t = SSL_waitpid(d_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_16 = ATgetArgument(t, 0);
            if(((ATgetType(g_16) != AT_INT) || (ATgetInt((ATermInt) g_16) != 0)))
              _fail(t);
            {
              ATerm h_16 = ATgetArgument(t, 1);
            }
            {
              ATerm i_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm l_78 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL;
  h_4 = t;
  t = l_78(t);
  t = xtc_find_0_0(t);
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_4, h_4);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm m_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, g_4, h_4);
      t = i_6(g_4, h_4, t);
      t = term_j_16;
      m_4 = t;
      t = SSL_exit(m_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
    t = h_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm n_64 (ATerm), ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm j_5 = NULL,l_5 = NULL,m_5 = NULL;
    m_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_5 = ATgetFirst((ATermList) t);
        l_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_2 = NULL,r_2 = NULL,z_1 = NULL;
          t = SSLgetAnnotations(m_5);
          i_2 = t;
          t = l_5;
          t = n_5(t);
          r_2 = t;
          t = (ATerm) ATinsert(CheckATermList(r_2), j_5);
          z_1 = t;
          t = SSLsetAnnotations(z_1, i_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_5;
        t = n_64(t);
      }
    return(t);
  }
  t = n_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
  p_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_4;
    }
  else
    {
      ATerm v_0 (ATerm t)
      {
        t = not_null(r_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_4 = ATgetFirst((ATermList) t);
          if(((r_4 != NULL) && (r_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_4;
      t = at_end_1_0(v_0, t);
    }
  return(t);
}
ATerm h_7 (ATerm q_6, ATerm t)
{
  ATerm u_6 = NULL;
  t = SSL_explode_term(q_6);
  if(match_cons(t, sym__2))
    {
      ATerm k_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
  b_7 = t;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
      {
        ATerm l_16 = t;
        int m_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              t = a_7;
              return(t);
            }
            t = z_6;
            t = at_end_1_0(x_0, t);
            ;
            LocalPopChoice(m_16);
          }
        else
          {
            t = l_16;
            t = h_7(b_7, t);
          }
      }
    }
  else
    {
      t = h_7(b_7, t);
    }
  return(t);
}
ATerm k_6 (ATerm w_74 (ATerm), ATerm o_32, ATerm m_32, ATerm t)
{
  ATerm i_7 = NULL,m_7 = NULL,n_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
  p_7 = t;
  t = w_74(t);
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_7, o_32, m_32);
  t = t_6(i_7, o_32, m_32, t);
  {
    ATerm n_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL;
        t = term_r_16;
        s_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_7, term_r_16);
        t = s_6(i_7, s_7, t);
        ;
        LocalPopChoice(q_16);
      }
    else
      {
        t = n_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_7 = ATgetFirst((ATermList) t);
        n_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_r_16;
    q_7 = t;
    t = (ATerm) ATinsert(CheckATermList(n_7), (ATerm) ATinsert(CheckATermList(m_7), o_32));
    r_7 = t;
    t = SSL_table_put(i_7, q_7, r_7);
    t = p_7;
  }
  return(t);
}
ATerm q_8 (ATerm z_7, ATerm t)
{
  t = z_7;
  {
    ATerm s_16 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_16 = ATgetArgument(t, 0);
            ATerm a_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_16;
      }
    t = term_b_17;
    t = debug_1_0(y_0, t);
    t = (ATerm) ATmakeAppl(sym__2, z_7, term_t_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm s_8 (ATerm b_8, ATerm c_8, ATerm d_8, ATerm t)
{
  t = SSL_open_file(b_8, c_8);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_c_17;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
  j_8 = t;
  if(match_cons(t, sym__2))
    {
      k_8 = ATgetArgument(t, 0);
      l_8 = ATgetArgument(t, 1);
      {
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_8(j_8, t);
            ;
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            t = s_8(k_8, l_8, j_8, t);
          }
      }
    }
  else
    {
      t = q_8(j_8, t);
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
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  t = term_f_17;
  t = new_0_0(t);
  z_8 = t;
  t = term_g_17;
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_8, term_g_17);
  t = r_6(z_8, a_9, t);
  b_9 = t;
  {
    ATerm i_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_r_8);
        f_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_9, (ATerm) ATinsert(ATempty, term_r_8));
        t = l_6(b_9, f_9, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(n_17);
      }
    else
      {
        t = i_17;
        t = b_9;
      }
  }
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_q_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  t = new_file_0_0(t);
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_9, term_t_8);
  t = open_file_0_0(t);
  t = term_f_17;
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_9, term_f_17);
  t = k_6(z_0, s_9, t_9, t);
  t = s_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm m_10 = NULL,o_10 = NULL;
  m_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_3 = NULL,i_3 = NULL;
      t = m_10;
      t = xtc_new_file_0_0(t);
      h_3 = t;
      t = r_0(t);
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATinsert(ATinsert(ATempty, h_3), term_r_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(h_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_3);
    }
  else
    {
      ATerm z_3 = NULL,b_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_10;
      t = xtc_new_file_0_0(t);
      z_3 = t;
      t = r_0(t);
      b_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_3), term_r_17), o_10), term_t_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(z_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_3);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm c_11 = NULL;
  c_11 = t;
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_11 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        e_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_11, term_x_9);
        t = geq_0_0(t);
        t = c_11;
        t = c_76(t);
        ;
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        t = c_11;
      }
  }
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_g_18);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(a_1, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm g_11 = NULL;
  ATerm b_1 (ATerm t)
  {
    ATerm h_11 = NULL,k_11 = NULL;
    h_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_11), h_11);
    t = s_6(not_null(g_11), h_11, t);
    k_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_11, k_11);
    return(t);
  }
  if(((g_11 != NULL) && (g_11 != t)))
    _fail(t);
  else
    g_11 = t;
  t = SSL_table_keys(g_11);
  t = map_1_0(b_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_76 (ATerm), ATerm t)
{
  ATerm m_11 = NULL;
  m_11 = t;
  {
    ATerm m_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_11 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        x_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_11, term_u_14);
        t = geq_0_0(t);
        t = m_11;
        t = e_76(t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = m_18;
        t = m_11;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm b_12 = NULL;
  b_12 = t;
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_12 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        d_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_12, term_s_11);
        t = geq_0_0(t);
        t = b_12;
        t = d_76(t);
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = b_12;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm f_76 (ATerm), ATerm t)
{
  ATerm i_12 = NULL;
  i_12 = t;
  {
    ATerm d_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_12 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        o_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_12, term_b_10);
        t = geq_0_0(t);
        t = i_12;
        t = f_76(t);
        ;
        LocalPopChoice(g_19);
      }
    else
      {
        t = d_19;
        t = i_12;
      }
  }
  return(t);
}
ATerm z_5 (ATerm e_68 (ATerm), ATerm f_68 (ATerm), ATerm n_22, ATerm m_22, ATerm t)
{
  t = f_68(t);
  {
    ATerm c_1 (ATerm t)
    {
      ATerm s_12 = NULL;
      s_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_22, s_12);
      t = e_68(t);
      return(t);
    }
    t = fetch_1_0(c_1, t);
    t = m_22;
  }
  return(t);
}
ATerm a_6 (ATerm b_68 (ATerm), ATerm j_22, ATerm i_22, ATerm t)
{
  ATerm v_13 (ATerm t)
  {
    ATerm h_13 = NULL,q_13 = NULL,r_13 = NULL;
    h_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_13 = ATgetFirst((ATermList) t);
            r_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_13;
              {
                ATerm j_1 (ATerm t)
                {
                  t = i_22;
                  return(t);
                }
                t = z_5(b_68, j_1, q_13, r_13, t);
                t = v_13(t);
              }
              ;
              LocalPopChoice(k_19);
            }
          else
            {
              t = i_19;
              {
                ATerm n_4 = NULL,v_4 = NULL,c_2 = NULL;
                t = SSLgetAnnotations(h_13);
                n_4 = t;
                t = r_13;
                t = v_13(t);
                v_4 = t;
                t = (ATerm) ATinsert(CheckATermList(v_4), q_13);
                c_2 = t;
                t = SSLsetAnnotations(c_2, n_4);
              }
            }
        }
      }
    return(t);
  }
  t = j_22;
  t = v_13(t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm m_14 = NULL;
  if(match_cons(t, sym__2))
    {
      m_14 = ATgetArgument(t, 0);
      if((m_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm b_6 (ATerm c_34, ATerm d_34, ATerm e_34, ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_19 = ATgetArgument(t, 0);
            ATerm u_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
        t = s_6(c_34, d_34, t);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = (ATerm) ATempty;
      }
    g_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_14, e_34);
    t = a_6(l_1, g_14, e_34, t);
    f_14 = t;
    t = SSL_table_put(c_34, d_34, f_14);
    t = e_14;
  }
  return(t);
}
ATerm c_6 (ATerm h_76 (ATerm), ATerm m_34, ATerm l_34, ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm n_14 = NULL,p_14 = NULL;
    if(match_cons(t, sym__2))
      {
        n_14 = ATgetArgument(t, 0);
        p_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_34, n_14, p_14);
    t = h_76(t);
    return(t);
  }
  t = l_34;
  t = map_1_0(m_1, t);
  return(t);
}
ATerm l_6 (ATerm j_36, ATerm k_36, ATerm t)
{
  t = SSL_access(j_36, k_36);
  return(t);
}
ATerm t_15 (ATerm f_15, ATerm t)
{
  t = SSL_fclose(f_15);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL;
  o_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_15 = ATgetArgument(t, 0);
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_15);
            ;
            LocalPopChoice(w_19);
          }
        else
          {
            t = v_19;
            t = t_15(o_15, t);
          }
      }
    }
  else
    {
      t = t_15(o_15, t);
    }
  return(t);
}
ATerm d_6 (ATerm q_15, ATerm t)
{
  t = SSL_read_term_from_stream(q_15);
  return(t);
}
ATerm f_6 (ATerm r_36, ATerm s_36, ATerm t)
{
  ATerm u_15 = NULL;
  t = SSL_fopen(r_36, s_36);
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_15);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_15 = NULL;
  t = SSL_stdin_stream();
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_15);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_15 = NULL;
  t = SSL_stdout_stream();
  z_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_16 = NULL;
  t = SSL_stderr_stream();
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_16);
  return(t);
}
ATerm z_17 (ATerm o_16, ATerm t)
{
  ATerm p_16 = NULL;
  t = SSL_explode_term(o_16);
  if(match_cons(t, sym__2))
    {
      ATerm x_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_19 = ATgetArgument(t, 1);
        if(((ATgetType(y_19) == AT_LIST) && !(ATisEmpty(y_19))))
          {
            p_16 = ATgetFirst((ATermList) y_19);
            {
              ATerm z_19 = (ATerm) ATgetNext((ATermList) y_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_16;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_16;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_16;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_16;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm a_18 (ATerm u_16, ATerm v_16, ATerm w_16, ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,h_17 = NULL,e_2 = NULL;
  t = SSLgetAnnotations(w_16);
  z_16 = t;
  t = u_16;
  if(match_cons(t, sym_Path_1))
    {
      h_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_17, v_16);
  e_2 = t;
  t = SSLsetAnnotations(e_2, z_16);
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(x_16, y_16, t);
  return(t);
}
ATerm b_18 (ATerm j_17, ATerm k_17, ATerm l_17, ATerm t)
{
  ATerm m_17 = NULL,o_17 = NULL,p_17 = NULL,s_17 = NULL,f_2 = NULL;
  t = SSLgetAnnotations(l_17);
  p_17 = t;
  t = SSL_is_string(j_17);
  s_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_17, k_17);
  f_2 = t;
  t = SSLsetAnnotations(f_2, p_17);
  if(match_cons(t, sym__2))
    {
      m_17 = ATgetArgument(t, 0);
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(m_17, o_17, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm u_17 = NULL,x_17 = NULL,y_17 = NULL;
  u_17 = t;
  if(match_cons(t, sym__2))
    {
      x_17 = ATgetArgument(t, 0);
      y_17 = ATgetArgument(t, 1);
      {
        ATerm a_20 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_17(u_17, t);
            ;
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            {
              ATerm c_20 = t;
              int d_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_18(x_17, y_17, u_17, t);
                  ;
                  LocalPopChoice(d_20);
                }
              else
                {
                  t = c_20;
                  t = b_18(x_17, y_17, u_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_17(u_17, t);
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_e_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_18 = NULL;
      f_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_18, term_h_20);
      t = g_6(t);
      ;
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
      t = debug_1_0(p_1, t);
      _fail(t);
    }
  d_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(e_18, t);
  c_18 = t;
  t = d_18;
  t = fclose_0_0(t);
  t = c_18;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_18 = NULL,i_18 = NULL;
      h_18 = t;
      t = (ATerm) ATinsert(ATempty, term_p_20);
      i_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_18, (ATerm) ATinsert(ATempty, term_p_20));
      t = l_6(h_18, i_18, t);
      LocalPopChoice(o_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_20;
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_20 = t;
            if((PushChoice() == 0))
              {
                ATerm j_18 = NULL,k_18 = NULL;
                j_18 = t;
                t = (ATerm) ATinsert(ATempty, term_r_8);
                k_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_18, (ATerm) ATinsert(ATempty, term_r_8));
                t = l_6(j_18, k_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_20;
              }
            t = debug_1_0(q_1, t);
            ;
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            t = debug_1_0(r_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = debug_1_0(t_1, t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_y_20;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,e_19 = NULL;
  b_19 = t;
  t = term_c_16;
  c_19 = t;
  t = (ATerm) ATinsert(ATempty, term_b_21);
  e_19 = t;
  t = SSL_printnl(c_19, e_19);
  t = b_19;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm f_19 = NULL,h_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym__3))
    {
      f_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
      j_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_6(f_19, h_19, j_19, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  t = term_c_16;
  m_19 = t;
  t = (ATerm) ATinsert(ATempty, term_c_21);
  n_19 = t;
  t = SSL_printnl(m_19, n_19);
  t = l_19;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
  o_19 = t;
  t = term_c_16;
  p_19 = t;
  t = (ATerm) ATinsert(ATempty, term_b_21);
  q_19 = t;
  t = SSL_printnl(p_19, q_19);
  t = o_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm l_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,u_18 = NULL,x_18 = NULL,y_18 = NULL;
  l_18 = t;
  t = if_verbose5_1_0(s_1, t);
  {
    ATerm e_21 = t;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL,a_19 = NULL;
        t = term_g_21;
        z_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, l_18);
        a_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATmakeAppl(sym_Imported_1, l_18));
        t = s_6(z_18, a_19, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_21;
      }
    o_18 = t;
    t = term_g_21;
    u_18 = t;
    t = term_h_21;
    x_18 = t;
    t = (ATerm) ATinsert(ATempty, l_18);
    y_18 = t;
    t = SSL_table_put(u_18, x_18, y_18);
    t = o_18;
    t = if_verbose4_1_0(v_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(a_2, t);
    n_18 = t;
    t = term_g_21;
    s_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_21, n_18);
    t = c_6(b_2, s_18, n_18, t);
    t = if_verbose6_1_0(d_2, t);
    t = term_g_21;
    p_18 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, l_18);
    q_18 = t;
    t = (ATerm) ATempty;
    r_18 = t;
    t = SSL_table_put(p_18, q_18, r_18);
    t = (ATerm) ATmakeAppl(sym__3, term_g_21, (ATerm)ATmakeAppl(sym_Imported_1, l_18), (ATerm) ATempty);
    t = if_verbose4_1_0(g_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm t_71 (ATerm), ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL;
  i_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_20;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_20 = ATgetFirst((ATermList) t);
          k_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_5 = NULL,x_6 = NULL,y_6 = NULL,l_2 = NULL;
            t = SSLgetAnnotations(i_20);
            y_5 = t;
            t = j_20;
            t = t_71(t);
            x_6 = t;
            t = k_20;
            t = filter_1_0(t_71, t);
            y_6 = t;
            t = (ATerm) ATinsert(CheckATermList(y_6), x_6);
            l_2 = t;
            t = SSLsetAnnotations(l_2, y_5);
            ;
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            t = k_20;
            t = filter_1_0(t_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  ATerm s_20 (ATerm t)
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_73(t);
        t = s_20(t);
        ;
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
      }
    return(t);
  }
  t = s_20(t);
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
        ATerm p_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_20 = NULL;
            t = term_t_21;
            t_20 = t;
            t = SSL_getenv(t_20);
            ;
            LocalPopChoice(r_21);
          }
        else
          {
            t = p_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm d_21 = NULL,f_21 = NULL;
  t = term_g_21;
  d_21 = t;
  t = term_x_21;
  f_21 = t;
  t = term_z_21;
  t = s_6(d_21, f_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm c_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_22;
      }
  }
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm u_20 = NULL;
  t = if_verbose5_1_0(h_2, t);
  u_20 = t;
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_20 = NULL,x_20 = NULL;
        t = term_g_21;
        v_20 = t;
        t = term_h_21;
        x_20 = t;
        t = term_l_22;
        t = s_6(v_20, x_20, t);
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        {
          ATerm a_21 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          a_21 = t;
          t = repeat_1_0(k_2, t);
          t = a_21;
        }
      }
    t = u_20;
    t = if_verbose5_1_0(m_2, t);
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
  t = term_o_22;
  return(t);
}
ATerm x_22 (ATerm q_21, ATerm t)
{
  ATerm s_21 = NULL,u_21 = NULL,v_21 = NULL;
  t = term_g_21;
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, q_21);
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATmakeAppl(sym_Tool_1, q_21));
  t = s_6(u_21, v_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_22 = ATgetFirst((ATermList) t);
      if(match_cons(p_22, sym__2))
        {
          ATerm r_22 = ATgetArgument(p_22, 0);
          s_21 = ATgetArgument(p_22, 1);
        }
      else
        _fail(t);
      {
        ATerm q_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_21;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = debug_1_0(c_3, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_o_22;
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_g_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(e_3, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_s_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_21 = NULL,a_22 = NULL,b_22 = NULL;
      t = if_verbose5_1_0(p_2, t);
      t = xtc_load_0_0(t);
      b_22 = t;
      if(match_cons(t, sym__2))
        {
          y_21 = ATgetArgument(t, 0);
          a_22 = ATgetArgument(t, 1);
          {
            ATerm v_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_22 = NULL,f_22 = NULL,k_22 = NULL;
                t = term_g_21;
                f_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, y_21);
                k_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATmakeAppl(sym_Tool_1, y_21));
                t = s_6(f_22, k_22, t);
                {
                  ATerm t_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((a_22 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((e_22 != NULL) && (e_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(t_2, t);
                  t = not_null(e_22);
                }
                ;
                LocalPopChoice(y_22);
              }
            else
              {
                t = v_22;
                t = x_22(b_22, t);
              }
          }
        }
      else
        {
          t = x_22(b_22, t);
        }
      t = if_verbose5_1_0(z_2, t);
      ;
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      {
        ATerm w_22 = NULL,o_7 = NULL,t_7 = NULL;
        w_22 = t;
        t = term_c_16;
        o_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_23), w_22), term_z_22);
        t_7 = t;
        t = SSL_printnl(o_7, t_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_23), w_22), term_z_22);
        t = if_verbose5_1_0(d_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_b_23;
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_b_23;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_23 = NULL,n_23 = NULL;
      n_23 = t;
      if(match_cons(t, sym_FILE_1))
        {
          m_23 = ATgetArgument(t, 0);
          {
            ATerm x_7 = NULL,n_2 = NULL;
            t = SSLgetAnnotations(n_23);
            x_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, m_23);
            n_2 = t;
            t = SSLsetAnnotations(n_2, x_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_23;
        }
      LocalPopChoice(d_23);
      {
        ATerm g_3 (ATerm t)
        {
          ATerm o_23 = NULL,p_23 = NULL;
          t = term_f_17;
          t = i_88(t);
          t = xtc_find_0_0(t);
          o_23 = t;
          t = term_f_17;
          t = pass_v_verbose_0_0(t);
          p_23 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_23), o_23), term_f_23), term_e_23);
          return(t);
        }
        t = xtc_transform_file_2_0(f_3, g_3, t);
      }
    }
  else
    {
      t = c_23;
      {
        ATerm m_3 (ATerm t)
        {
          ATerm v_23 = NULL,w_23 = NULL;
          t = term_f_17;
          t = i_88(t);
          t = xtc_find_0_0(t);
          v_23 = t;
          t = term_f_17;
          t = pass_v_verbose_0_0(t);
          w_23 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_23), v_23), term_f_23), term_e_23);
          return(t);
        }
        t = xtc_transform_term_2_0(j_3, m_3, t);
      }
    }
  return(t);
}
ATerm m_6 (ATerm m_12, ATerm n_12, ATerm t)
{
  t = SSL_copy(m_12, n_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL;
  t_24 = t;
  if(match_cons(t, sym_FILE_1))
    {
      u_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_8 = NULL;
        t = t_24;
        t = n_0(t);
        p_8 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = p_8;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = p_8;
          }
        t = (ATerm) ATmakeAppl(sym__2, u_24, p_8);
        t = m_6(u_24, p_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, u_24);
        ;
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        {
          ATerm i_23 = t;
          int j_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_8 = NULL;
              t = t_24;
              t = n_0(t);
              y_8 = t;
              {
                ATerm k_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm d_9 = NULL;
                    d_9 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = d_9;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = d_9;
                          }
                        else
                          {
                            t = d_9;
                            if((u_24 != t))
                              {
                                _fail(t);
                              }
                            t = d_9;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_23;
                  }
                t = (ATerm) ATmakeAppl(sym__2, u_24, y_8);
                t = m_6(u_24, y_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, u_24);
              }
              ;
              LocalPopChoice(j_23);
            }
          else
            {
              t = i_23;
              t = t_24;
              t = n_0(t);
              if((u_24 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_24);
            }
        }
      }
  }
  return(t);
}
ATerm n_6 (ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL;
  z_24 = t;
  {
    ATerm l_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
        t = s_6(k_33, l_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_23 = ATgetFirst((ATermList) t);
            y_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_23);
        t = SSL_table_put(k_33, l_33, y_24);
        t = (ATerm) ATmakeAppl(sym__3, k_33, l_33, y_24);
      }
    else
      {
        t = l_23;
        t = SSL_table_remove(k_33, l_33);
        t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
      }
    t = z_24;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm t_74 (ATerm), ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
  d_25 = t;
  t = t_74(t);
  c_25 = t;
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_25 = NULL;
        t = term_r_16;
        g_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_25, term_r_16);
        t = s_6(c_25, g_25, t);
        ;
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_25 = ATgetFirst((ATermList) t);
        a_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_r_16;
    e_25 = t;
    t = SSL_table_put(c_25, e_25, a_25);
    t = b_25;
    {
      ATerm o_3 (ATerm t)
      {
        ATerm h_25 = NULL;
        h_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_25, h_25);
        t = n_6(c_25, h_25, t);
        return(t);
      }
      t = map_1_0(o_3, t);
      t = d_25;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm t)
{
  ATerm u_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_75(t);
      t = p_75(t);
      ;
      LocalPopChoice(x_23);
    }
  else
    {
      t = u_23;
      t = p_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_74 (ATerm), ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  k_25 = t;
  t = s_74(t);
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_25, term_r_16);
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_24 = ATgetArgument(t, 0);
            ATerm b_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_16;
        t_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_25, term_r_16);
        t = s_6(j_25, t_25, t);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = (ATerm) ATempty;
      }
    l_25 = t;
    t = term_r_16;
    m_25 = t;
    t = (ATerm) ATinsert(CheckATermList(l_25), (ATerm) ATempty);
    n_25 = t;
    t = SSL_table_put(j_25, m_25, n_25);
    t = k_25;
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_q_17;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(g_26);
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = g_26;
      }
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_q_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm x_77 (ATerm), ATerm t)
{
  ATerm x_25 = NULL;
  ATerm q_3 (ATerm t)
  {
    ATerm y_25 = NULL;
    y_25 = t;
    {
      ATerm e_24 = t;
      int f_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_26 = NULL,b_26 = NULL;
          t = term_q_17;
          a_26 = t;
          t = term_r_16;
          b_26 = t;
          t = term_g_24;
          t = s_6(a_26, b_26, t);
          ;
          LocalPopChoice(f_24);
        }
      else
        {
          t = e_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((x_25 != NULL) && (x_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            x_25 = ATgetFirst((ATermList) t);
          {
            ATerm h_24 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = x_25;
      t = map_1_0(s_3, t);
      t = y_25;
      t = end_scope_1_0(t_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(p_3, t);
  t = restore_always_2_0(x_77, q_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      t = term_k_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm y_77 (ATerm), ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_26 = NULL;
        t = term_t_17;
        t = get_config_0_0(t);
        p_26 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_26);
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        t = term_o_8;
      }
    t = y_77(t);
    t = copy_to_1_0(w_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(v_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,u_26 = NULL,v_26 = NULL;
  q_26 = t;
  t = term_f_17;
  t = whoami_0_0(t);
  r_26 = t;
  t = term_c_16;
  u_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_24), r_26), term_n_24);
  v_26 = t;
  t = SSL_printnl(u_26, v_26);
  t = term_n_8;
  s_26 = t;
  t = SSL_exit(s_26);
  t = q_26;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm x_26 = NULL;
  x_26 = t;
  if(match_string(t, "-k"))
    {
      t = x_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_26;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,d_27 = NULL;
  z_26 = t;
  t = SSL_string_to_int(z_26);
  a_27 = t;
  t = term_p_24;
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_24, a_27);
  t = v_6(d_27, a_27, t);
  t = z_26;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_q_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_3, y_3, a_4, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm f_27 = NULL;
  f_27 = t;
  if(match_string(t, "-S"))
    {
      t = f_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_27;
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL;
  t = term_h_8;
  g_27 = t;
  t = term_r_24;
  h_27 = t;
  t = term_s_24;
  t = v_6(g_27, h_27, t);
  t = term_v_24;
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_w_24;
  return(t);
}
ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,l_27 = NULL;
  i_27 = t;
  t = SSL_string_to_int(i_27);
  j_27 = t;
  t = term_h_8;
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_8, j_27);
  t = v_6(l_27, j_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_27);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_x_24;
  return(t);
}
ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL;
  t = term_f_25;
  m_27 = t;
  t = term_f_17;
  n_27 = t;
  t = term_i_25;
  t = v_6(m_27, n_27, t);
  t = term_o_25;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_p_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, f_4, i_4, t);
      ;
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      {
        ATerm s_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_4, k_4, l_4, t);
            ;
            LocalPopChoice(u_25);
          }
        else
          {
            t = s_25;
            t = Option_3_0(o_4, s_4, t_4, t);
          }
      }
    }
  return(t);
}
ATerm v_6 (ATerm f_35, ATerm g_35, ATerm t)
{
  ATerm o_27 = NULL;
  t = term_v_25;
  o_27 = t;
  t = SSL_table_put(o_27, f_35, g_35);
  t = (ATerm) ATmakeAppl(sym__3, term_v_25, f_35, g_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
      t = term_f_17;
      t = h_0(t);
      t_27 = t;
      t = term_w_25;
      u_27 = t;
      t = term_z_25;
      v_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_25, term_z_25, t_27);
      t = t_6(u_27, v_27, t_27, t);
      _fail(t);
    }
  else
    {
      ATerm c_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_27 = ATgetFirst((ATermList) t);
          s_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_27;
      t = d_0(t);
      t = term_f_17;
      t = g_0(t);
      c_28 = t;
      t = (ATerm) ATinsert(CheckATermList(s_27), c_28);
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm e_28 = NULL;
  e_28 = t;
  if(match_string(t, "-o"))
    {
      t = e_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_28;
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm i_28 = NULL,l_28 = NULL;
  i_28 = t;
  t = term_r_17;
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_17, i_28);
  t = v_6(l_28, i_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_28);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, x_4, y_4, t);
  return(t);
}
ATerm t_6 (ATerm f_33, ATerm g_33, ATerm e_33, ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_33, g_33);
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_26 = ATgetArgument(t, 0);
            ATerm h_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_33, g_33);
        t = s_6(f_33, g_33, t);
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = (ATerm) ATempty;
      }
    s_28 = t;
    t = (ATerm) ATinsert(CheckATermList(s_28), e_33);
    t_28 = t;
    t = SSL_table_put(f_33, g_33, t_28);
    t = r_28;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
      t = term_f_17;
      t = m_0(t);
      m_29 = t;
      t = term_w_25;
      n_29 = t;
      t = term_z_25;
      o_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_25, term_z_25, m_29);
      t = t_6(n_29, o_29, m_29, t);
      _fail(t);
    }
  else
    {
      ATerm s_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_29 = ATgetFirst((ATermList) t);
          j_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_29 = ATgetFirst((ATermList) t);
          l_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_29;
      t = k_0(t);
      t = k_29;
      t = l_0(t);
      s_29 = t;
      t = (ATerm) ATinsert(CheckATermList(l_29), s_29);
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm u_29 = NULL;
  u_29 = t;
  if(match_string(t, "-i"))
    {
      t = u_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_29;
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL;
  x_29 = t;
  t = term_t_17;
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, x_29);
  t = v_6(y_29, x_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_29);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_i_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_4, b_5, c_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_17;
  t = whoami_0_0(t);
  z_29 = t;
  t = term_c_16;
  b_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_26), z_29);
  c_30 = t;
  t = SSL_printnl(b_30, c_30);
  t = term_n_8;
  a_30 = t;
  t = SSL_exit(a_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm o_6 (ATerm a_31, ATerm b_31, ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_31, b_31);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      t = SSL_addr(a_31, b_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
  e_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_30;
      t = p_70(t);
    }
  else
    {
      ATerm j_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_30 = ATgetFirst((ATermList) t);
          g_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_30;
      t = foldr_2_0(p_70, q_70, t);
      j_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_30, j_30);
      t = q_70(t);
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
  t = term_r_24;
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(q_9, r_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_30 = NULL,m_9 = NULL,n_9 = NULL;
  t = times_0_0(t);
  n_9 = t;
  t = SSL_explode_term(n_9);
  if(match_cons(t, sym__2))
    {
      ATerm n_26 = ATgetArgument(t, 0);
      m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9;
  t = foldr_2_0(e_5, g_5, t);
  m_30 = t;
  t = SSL_TicksToSeconds(m_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_30 = NULL,c_31 = NULL,d_31 = NULL;
  z_30 = t;
  if(match_cons(t, sym__2))
    {
      c_31 = ATgetArgument(t, 0);
      d_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_31;
        if((c_31 != t))
          {
            _fail(t);
          }
        t = z_30;
        ;
        LocalPopChoice(t_26);
      }
    else
      {
        t = o_26;
        t = (ATerm) ATmakeAppl(sym__2, c_31, d_31);
        {
          ATerm w_26 = t;
          int y_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_31, d_31);
              ;
              LocalPopChoice(y_26);
            }
          else
            {
              t = w_26;
              t = SSL_gtr(c_31, d_31);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_31, d_31);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_76 (ATerm), ATerm t)
{
  ATerm j_31 = NULL;
  j_31 = t;
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_31 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        l_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_31, term_n_8);
        t = geq_0_0(t);
        t = j_31;
        t = a_76(t);
        ;
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        t = j_31;
      }
  }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,q_31 = NULL,r_31 = NULL;
  t = run_time_0_0(t);
  n_31 = t;
  t = term_f_17;
  t = whoami_0_0(t);
  o_31 = t;
  t = term_c_16;
  q_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_27), n_31), term_x_8), o_31);
  r_31 = t;
  t = SSL_printnl(q_31, r_31);
  t = (ATerm) ATmakeAppl(sym__2, term_c_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_27), n_31), term_x_8), o_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_24;
  s_31 = t;
  t = SSL_exit(s_31);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  b_32 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_32;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_32 = ATgetArgument(t, 0);
          {
            ATerm p_10 = NULL,s_2 = NULL;
            t = SSLgetAnnotations(b_32);
            p_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_32);
            s_2 = t;
            t = SSLsetAnnotations(s_2, p_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_32;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm k_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_27);
    }
  else
    {
      t = k_27;
      t = fetch_1_0(k_5, t);
    }
  t = z_79(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_32 = ATgetFirst((ATermList) t);
      f_32 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_32 = NULL,v_32 = NULL;
        ATerm o_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_32)), not_null(v_32));
          return(t);
        }
        t = f_32;
        t = j_0(t);
        if(((u_32 != NULL) && (u_32 != t)))
          _fail(t);
        else
          u_32 = t;
        t = e_32;
        t = i_0(t);
        if(((v_32 != NULL) && (v_32 != t)))
          _fail(t);
        else
          v_32 = t;
        t = f_32;
        t = reverse_acc_2_0(i_0, o_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_17;
      t = j_0(t);
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,m_33 = NULL,y_2 = NULL;
  m_33 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_33);
  h_33 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_33);
  y_2 = t;
  t = SSLsetAnnotations(y_2, h_33);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm o_33 = NULL;
  o_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_33), term_w_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL;
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      t = fetch_1_0(p_5, t);
    }
  t = term_z_27;
  t = echo_0_0(t);
  t = term_w_25;
  y_32 = t;
  t = term_z_25;
  z_32 = t;
  t = term_a_28;
  t = s_6(y_32, z_32, t);
  t = reverse_acc_2_0(_id, q_5, t);
  t = map_1_0(r_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm h_64 (ATerm), ATerm t)
{
  ATerm u_34 (ATerm t)
  {
    ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
    r_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_34 = ATgetFirst((ATermList) t);
        t_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_28 = t;
      int d_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_10 = NULL,i_11 = NULL,l_3 = NULL;
          t = SSLgetAnnotations(r_34);
          z_10 = t;
          t = s_34;
          t = h_64(t);
          i_11 = t;
          t = (ATerm) ATinsert(CheckATermList(t_34), i_11);
          l_3 = t;
          t = SSLsetAnnotations(l_3, z_10);
          ;
          LocalPopChoice(d_28);
        }
      else
        {
          t = b_28;
          {
            ATerm t_11 = NULL,w_11 = NULL,n_3 = NULL;
            t = SSLgetAnnotations(r_34);
            t_11 = t;
            t = t_34;
            t = u_34(t);
            w_11 = t;
            t = (ATerm) ATinsert(CheckATermList(w_11), s_34);
            n_3 = t;
            t = SSLsetAnnotations(n_3, t_11);
          }
        }
    }
    return(t);
  }
  t = u_34(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  a_35 = t;
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_28 = ATgetFirst((ATermList) t);
                ATerm j_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_35;
          }
        ;
        LocalPopChoice(g_28);
      }
    else
      {
        t = f_28;
        t = (ATerm) ATinsert(ATempty, a_35);
      }
    b_35 = t;
    t = term_k_24;
    c_35 = t;
    t = SSL_printnl(c_35, b_35);
    t = a_35;
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
ATerm r_6 (ATerm v_29, ATerm w_29, ATerm t)
{
  t = SSL_strcat(v_29, w_29);
  return(t);
}
ATerm debug_1_0 (ATerm c_60 (ATerm), ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL;
  i_35 = t;
  t = c_60(t);
  j_35 = t;
  t = term_c_16;
  k_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_35), j_35);
  l_35 = t;
  t = SSL_printnl(k_35, l_35);
  t = i_35;
  return(t);
}
ATerm map_1_0 (ATerm x_63 (ATerm), ATerm t)
{
  ATerm i_36 (ATerm t)
  {
    ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
    f_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_36;
      }
    else
      {
        ATerm t_12 = NULL,w_12 = NULL,d_13 = NULL,r_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_36 = ATgetFirst((ATermList) t);
            h_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_36);
        t_12 = t;
        t = g_36;
        t = x_63(t);
        w_12 = t;
        t = h_36;
        t = i_36(t);
        d_13 = t;
        t = (ATerm) ATinsert(CheckATermList(d_13), w_12);
        r_3 = t;
        t = SSLsetAnnotations(r_3, t_12);
      }
    return(t);
  }
  t = i_36(t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm k_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = k_28;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_n_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_36 = NULL;
      w_36 = t;
      t = SSL_is_string(w_36);
      ;
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      {
        ATerm q_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_5, t);
            ;
            LocalPopChoice(u_28);
          }
        else
          {
            t = q_28;
            {
              ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
              c_37 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_37 = ATgetArgument(t, 0);
                  t = d_37;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_37 = ATgetArgument(t, 0);
                      t = d_37;
                      {
                        ATerm v_28 = t;
                        int w_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(w_28);
                          }
                        else
                          {
                            t = v_28;
                            t = debug_1_0(t_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_37 = NULL,r_37 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_37 = ATgetArgument(t, 0);
                          e_37 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_37;
                      t = eval_config_0_0(t);
                      o_37 = t;
                      t = e_37;
                      t = eval_config_0_0(t);
                      r_37 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_37, r_37);
                      t = r_6(o_37, r_37, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm s_6 (ATerm w_34, ATerm x_34, ATerm t)
{
  t = SSL_table_get(w_34, x_34);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL;
  w_37 = t;
  t = term_v_25;
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_25, w_37);
  t = s_6(x_37, w_37, t);
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_37 = NULL,a_38 = NULL;
        t = eval_config_0_0(t);
        z_37 = t;
        t = term_v_25;
        a_38 = t;
        t = SSL_table_put(a_38, w_37, z_37);
        t = z_37;
        ;
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
      }
  }
  return(t);
}
ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL;
  t = term_z_28;
  e_38 = t;
  t = term_f_17;
  f_38 = t;
  t = term_a_29;
  t = v_6(e_38, f_38, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL;
  t = term_z_28;
  l_38 = t;
  t = term_f_17;
  m_38 = t;
  t = term_a_29;
  t = v_6(l_38, m_38, t);
  t = term_g_18;
  j_38 = t;
  t = term_f_17;
  k_38 = t;
  t = term_c_29;
  t = v_6(j_38, k_38, t);
  t = term_d_29;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_e_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, v_5, w_5, t);
      ;
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
      t = Option_3_0(j_6, p_6, w_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_51 (ATerm), ATerm p_51 (ATerm), ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,x_38 = NULL,a_5 = NULL;
  x_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_38 = ATgetFirst((ATermList) t);
      p_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_38);
  n_38 = t;
  t = o_38;
  t = o_51(t);
  q_38 = t;
  t = p_38;
  t = p_51(t);
  r_38 = t;
  t = (ATerm) ATinsert(CheckATermList(r_38), q_38);
  a_5 = t;
  t = SSLsetAnnotations(a_5, n_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_81 (ATerm), ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,i_39 = NULL,j_39 = NULL,d_5 = NULL;
  c_39 = t;
  {
    ATerm h_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_29;
        t = x_81(t);
        ;
        LocalPopChoice(p_29);
      }
    else
      {
        t = h_29;
      }
    t = c_39;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_39 = ATgetFirst((ATermList) t);
        f_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_39);
    d_39 = t;
    t = term_k_26;
    j_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_k_26, e_39);
    t = v_6(j_39, e_39, t);
    t = f_39;
    {
      ATerm t_39 (ATerm t)
      {
        ATerm r_29 = t;
        int t_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_30 = t;
            int h_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_39 = NULL;
                m_39 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_39;
                ;
                LocalPopChoice(h_30);
              }
            else
              {
                t = d_30;
                t = x_81(t);
                t = Cons_2_0(_id, t_39, t);
              }
            ;
            LocalPopChoice(t_29);
          }
        else
          {
            t = r_29;
            {
              ATerm p_39 = NULL,q_39 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_39 = ATgetFirst((ATermList) t);
                  q_39 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_39), (ATerm) ATmakeAppl(sym_Undefined_1, p_39));
            }
          }
        return(t);
      }
      t = t_39(t);
      i_39 = t;
      t = (ATerm) ATinsert(CheckATermList(i_39), (ATerm) ATmakeAppl(sym_Program_1, e_39));
      d_5 = t;
      t = SSLsetAnnotations(d_5, d_39);
    }
  }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm f_40 = NULL;
  f_40 = t;
  if(match_string(t, "--help"))
    {
      t = f_40;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_40;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_40;
        }
    }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL;
  t = term_q_27;
  g_40 = t;
  t = term_f_17;
  h_40 = t;
  t = term_i_30;
  t = v_6(g_40, h_40, t);
  t = term_k_30;
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_l_30;
  return(t);
}
ATerm g_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_81 (ATerm), ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL;
  a_40 = t;
  t = term_w_25;
  c_40 = t;
  t = term_z_25;
  d_40 = t;
  t = (ATerm) ATempty;
  e_40 = t;
  t = SSL_table_put(c_40, d_40, e_40);
  t = a_40;
  {
    ATerm c_7 (ATerm t)
    {
      ATerm n_30 = t;
      int o_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_81(t);
          ;
          LocalPopChoice(o_30);
        }
      else
        {
          t = n_30;
          {
            ATerm p_30 = t;
            int q_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_7, e_7, f_7, t);
                ;
                LocalPopChoice(q_30);
              }
            else
              {
                t = p_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_7, t);
    {
      ATerm r_30 = t;
      int s_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_40 = NULL;
          o_40 = t;
          {
            ATerm t_30 = t;
            int u_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_14 = NULL;
                t = o_40;
                {
                  ATerm v_30 = t;
                  int w_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_q_27;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(w_30);
                    }
                  else
                    {
                      t = v_30;
                      t = fetch_1_0(g_7, t);
                    }
                  t = o_40;
                  t = default_system_usage_0_0(t);
                  t = term_r_24;
                  b_14 = t;
                  t = SSL_exit(b_14);
                }
                ;
                LocalPopChoice(u_30);
              }
            else
              {
                t = t_30;
                {
                  ATerm k_14 = NULL;
                  t = term_z_28;
                  t = get_config_0_0(t);
                  t = o_40;
                  t = default_system_about_0_0(t);
                  t = term_r_24;
                  k_14 = t;
                  t = SSL_exit(k_14);
                }
              }
          }
          ;
          LocalPopChoice(s_30);
        }
      else
        {
          t = r_30;
          {
            ATerm x_30 = t;
            int y_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
                ATerm j_7 (ATerm t)
                {
                  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,f_5 = NULL;
                  u_40 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      t_40 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_40);
                  s_40 = t;
                  t = t_40;
                  if(((y_39 != NULL) && (y_39 != t)))
                    _fail(t);
                  else
                    y_39 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_40);
                  f_5 = t;
                  t = SSLsetAnnotations(f_5, s_40);
                  return(t);
                }
                t = fetch_1_0(j_7, t);
                t = term_c_16;
                q_40 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_39)), term_e_31);
                r_40 = t;
                t = SSL_printnl(q_40, r_40);
                t = (ATerm) ATmakeAppl(sym__2, term_c_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_39)), term_e_31));
                t = default_system_usage_0_0(t);
                t = term_n_8;
                p_40 = t;
                t = SSL_exit(p_40);
                ;
                LocalPopChoice(y_30);
              }
            else
              {
                t = x_30;
              }
          }
        }
      z_39 = t;
      t = term_w_25;
      b_40 = t;
      t = SSL_table_destroy(b_40);
      t = z_39;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL;
  t = parse_options_1_0(b_80, t);
  z_40 = t;
  t = term_f_31;
  c_41 = t;
  t = SSL_table_create(c_41);
  t = term_f_31;
  a_41 = t;
  t = term_i_31;
  b_41 = t;
  t = SSL_table_put(a_41, b_41, z_40);
  t = z_40;
  t = d_80(t);
  {
    ATerm k_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_80, t);
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = k_31;
        {
          ATerm p_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_80(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_31);
            }
          else
            {
              t = p_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      {
        ATerm w_31 = t;
        int x_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(x_31);
          }
        else
          {
            t = w_31;
            {
              ATerm y_31 = t;
              int z_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(u_7, v_7, w_7, t);
                  ;
                  LocalPopChoice(z_31);
                }
              else
                {
                  t = y_31;
                  {
                    ATerm c_32 = t;
                    int d_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(d_32);
                      }
                    else
                      {
                        t = c_32;
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
ATerm l_7 (ATerm t)
{
  t = xtc_io_1_0(y_7, t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL;
  t = term_g_32;
  g_41 = t;
  t = term_f_17;
  h_41 = t;
  t = term_h_32;
  t = v_6(g_41, h_41, t);
  t = term_i_32;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = xtc_sglr_1_0(a_8, t);
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_41 = NULL,p_41 = NULL;
        p_41 = t;
        if(match_cons(t, sym_FILE_1))
          {
            o_41 = ATgetArgument(t, 0);
            {
              ATerm s_14 = NULL,h_5 = NULL;
              t = SSLgetAnnotations(p_41);
              s_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_41);
              h_5 = t;
              t = SSLsetAnnotations(h_5, s_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_41;
          }
        LocalPopChoice(l_32);
        t = xtc_transform_file_2_0(e_8, pass_verbose_0_0, t);
      }
    else
      {
        t = k_32;
        t = xtc_transform_term_2_0(f_8, pass_verbose_0_0, t);
      }
  }
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(k_7, default_usage_0_0, _id, l_7, t);
  return(t);
}
