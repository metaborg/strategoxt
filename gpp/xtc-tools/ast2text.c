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
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_t_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_i_31;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_o_30;
ATerm term_g_30;
ATerm term_c_30;
ATerm term_y_29;
ATerm term_q_29;
ATerm term_a_29;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_b_28;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_v_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_q_24;
ATerm term_l_24;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_n_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_z_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_o_20;
ATerm term_k_20;
ATerm term_g_20;
ATerm term_a_20;
ATerm term_t_19;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
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
ATerm term_m_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_l_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_k_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_k_8;
ATerm term_c_8;
void init_constant_terms (void)
{
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_9, term_n_8, term_o_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_9, term_s_9, term_t_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_z_9, term_b_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_10, term_k_10, term_l_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_10, term_q_10, term_r_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_u_10, term_v_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_10, term_y_10, term_c_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_f_11, term_g_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_11, term_j_11, term_n_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_s_11, term_w_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_z_11, term_a_12);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_d_12, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_u_12, term_v_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_z_12);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_n_13, term_q_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_e_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_m_14, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_c_15, term_d_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_q_15, term_s_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_f_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_j_16, term_k_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_p_16, term_q_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_t_16, term_u_16);
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
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__2, term_z_20, term_o_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_z_20, term_a_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym__2, term_y_22, term_n_22);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_c_26);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_h_26, term_s_8);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym__2, term_v_25, term_y_25);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_s_8);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_s_8);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_j_28, term_s_8);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
ATerm pass_width_0_0 (ATerm);
ATerm c_6 (ATerm c_31, ATerm d_31, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm a_0 (ATerm);
ATerm t_0 (ATerm);
ATerm xtc_abox2text_1_0 (ATerm l_78 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm d_6 (ATerm j_15, ATerm k_15, ATerm);
ATerm e_6 (ATerm b_60 (ATerm), ATerm w_157, ATerm r_15, ATerm);
ATerm w_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm);
ATerm f_6 (ATerm f_12, ATerm g_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm g_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm q_58 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm f_88 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm e_88 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm g_88 (ATerm), ATerm);
ATerm i_6 (ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm m_22, ATerm l_22, ATerm);
ATerm j_6 (ATerm y_67 (ATerm), ATerm i_22, ATerm h_22, ATerm);
ATerm i_1 (ATerm);
ATerm k_6 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm);
ATerm l_6 (ATerm q_75 (ATerm), ATerm i_34, ATerm h_34, ATerm);
ATerm a_10 (ATerm u_9, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm m_6 (ATerm p_15, ATerm);
ATerm n_6 (ATerm n_36, ATerm o_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm f_13 (ATerm a_11, ATerm);
ATerm g_13 (ATerm k_11, ATerm l_11, ATerm m_11, ATerm);
ATerm h_13 (ATerm n_12, ATerm o_12, ATerm p_12, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm c_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm q_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm p_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm y_18 (ATerm d_18, ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm u_77 (ATerm), ATerm);
ATerm o_6 (ATerm t_74 (ATerm), ATerm k_32, ATerm i_32, ATerm);
ATerm e_20 (ATerm u_19, ATerm);
ATerm f_20 (ATerm w_19, ATerm x_19, ATerm y_19, ATerm);
ATerm e_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm p_6 (ATerm f_36, ATerm g_36, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm q_6 (ATerm l_12, ATerm m_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm r_6 (ATerm g_33, ATerm h_33, ATerm);
ATerm end_scope_1_0 (ATerm q_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm p_74 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm g_77 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm xtc_io_1_0 (ATerm h_77 (ATerm), ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm ast2text_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm at_end_1_0 (ATerm k_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm r_27 (ATerm g_27, ATerm);
ATerm conc_0_0 (ATerm);
ATerm s_6 (ATerm h_35, ATerm g_35, ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm pp_options_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm x_5 (ATerm);
ATerm abox2text_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm t_6 (ATerm w_30, ATerm x_30, ATerm);
ATerm foldr_2_0 (ATerm m_70 (ATerm), ATerm n_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm y_5 (ATerm);
ATerm b_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm g_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm v_6 (ATerm);
ATerm need_help_1_0 (ATerm o_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm e_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_6 (ATerm s_29, ATerm t_29, ATerm);
ATerm debug_1_0 (ATerm z_59 (ATerm), ATerm);
ATerm map_1_0 (ATerm u_63 (ATerm), ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm a_7 (ATerm b_35, ATerm c_35, ATerm);
ATerm x_6 (ATerm s_34, ATerm t_34, ATerm);
ATerm y_6 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm m_51 (ATerm), ATerm n_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm m_81 (ATerm), ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm parse_options_1_0 (ATerm l_81 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm q_79 (ATerm), ATerm r_79 (ATerm), ATerm s_79 (ATerm), ATerm t_79 (ATerm), ATerm);
ATerm z_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_8;
      t = get_config_0_0(t);
      LocalPopChoice(b_8);
      {
        ATerm b_0 = NULL;
        b_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, b_0), term_c_8);
      }
    }
  else
    {
      t = a_8;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm c_6 (ATerm c_31, ATerm d_31, ATerm t)
{
  ATerm d_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(c_31, d_31);
      ;
      LocalPopChoice(j_8);
    }
  else
    {
      t = d_8;
      t = SSL_subtr(c_31, d_31);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,f_0 = NULL,o_0 = NULL;
  t = term_k_8;
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        t = term_n_8;
      }
    e_0 = t;
    t = term_n_8;
    o_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_0, term_n_8);
    t = c_6(e_0, o_0, t);
    f_0 = t;
    t = SSL_int_to_string(f_0);
    c_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, c_0), term_k_8);
  }
  return(t);
}
ATerm a_0 (ATerm t)
{
  t = term_o_8;
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_o_8;
  return(t);
}
ATerm xtc_abox2text_1_0 (ATerm l_78 (ATerm), ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 = NULL,c_1 = NULL;
      c_1 = t;
      if(match_cons(t, sym_FILE_1))
        {
          a_1 = ATgetArgument(t, 0);
          {
            ATerm s_0 = NULL,v_0 = NULL;
            t = SSLgetAnnotations(c_1);
            s_0 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, a_1);
            v_0 = t;
            t = SSLsetAnnotations(v_0, s_0);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_1;
        }
      LocalPopChoice(r_8);
      {
        ATerm q_0 (ATerm t)
        {
          ATerm f_1 = NULL,h_1 = NULL,j_1 = NULL;
          t = term_s_8;
          t = l_78(t);
          j_1 = t;
          t = SSL_int_to_string(j_1);
          f_1 = t;
          t = term_s_8;
          t = pass_verbose_0_0(t);
          h_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, f_1), term_c_8), h_1);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(a_0, q_0, t);
      }
    }
  else
    {
      t = q_8;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm n_1 = NULL,q_1 = NULL,s_1 = NULL;
          t = term_s_8;
          t = l_78(t);
          s_1 = t;
          t = SSL_int_to_string(s_1);
          n_1 = t;
          t = term_s_8;
          t = pass_verbose_0_0(t);
          q_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, n_1), term_c_8), q_1);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(t_0, u_0, t);
      }
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm b_2 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_t_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm k_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_w_8);
      k_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_2, (ATerm) ATinsert(ATempty, term_w_8));
      t = p_6(b_2, k_2, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm d_6 (ATerm j_15, ATerm k_15, ATerm t)
{
  ATerm l_2 = NULL;
  t = SSL_write_term_to_stream_baf(j_15, k_15);
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_2);
  return(t);
}
ATerm e_6 (ATerm b_60 (ATerm), ATerm w_157, ATerm r_15, ATerm t)
{
  ATerm p_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_157, term_z_8);
  t = open_stream_0_0(t);
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_2, r_15);
  t = b_60(t);
  t = fclose_0_0(t);
  t = r_15;
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_9 = ATgetArgument(t, 0);
      if(match_cons(a_9, sym_Stream_1))
        {
          s_2 = ATgetArgument(a_9, 0);
        }
      else
        _fail(t);
      t_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(s_2, t_2, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL;
  q_2 = t;
  t = xtc_new_file_0_0(t);
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_2, q_2);
  t = e_6(w_0, r_2, q_2, t);
  t = SSL_close_file(r_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_2);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(d_78, e_78, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm f_6 (ATerm f_12, ATerm g_12, ATerm t)
{
  t = SSL_execvp(f_12, g_12);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm r_3 = NULL,t_3 = NULL,u_3 = NULL,w_3 = NULL;
  r_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      t_3 = ATgetArgument(t, 0);
      {
        ATerm l_1 = NULL,m_1 = NULL;
        t = SSL_int_to_string(t_3);
        l_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_9), l_1), term_b_9);
        m_1 = t;
        t = SSL_concat_strings(m_1);
      }
    }
  else
    {
      ATerm d_2 = NULL,f_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          t_3 = ATgetArgument(t, 0);
          u_3 = ATgetArgument(t, 1);
          w_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(u_3);
      d_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_3), term_e_9), d_2), term_d_9), t_3);
      f_2 = t;
      t = SSL_concat_strings(f_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm a_4 = NULL;
  ATerm y_0 (ATerm t)
  {
    t = g_64(t);
    if(((a_4 != NULL) && (a_4 != t)))
      _fail(t);
    else
      a_4 = t;
    return(t);
  }
  t = fetch_1_0(y_0, t);
  t = not_null(a_4);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_4 = NULL;
  b_4 = t;
  {
    ATerm g_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm k_9 = ATgetArgument(t, 0);
              if((b_4 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm m_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_17), term_c_17), term_y_16), term_r_16), term_m_16), term_g_16), term_c_16), term_y_15), term_u_15), term_l_15), term_t_14), term_p_14), term_i_14), term_r_13), term_b_13), term_w_12), term_j_12), term_b_12), term_x_11), term_p_11), term_h_11), term_d_11), term_w_10), term_s_10), term_o_10), term_c_10), term_v_9), term_q_9);
        t = fetch_elem_1_0(b_1, t);
        ;
        LocalPopChoice(h_9);
      }
    else
      {
        t = g_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_4);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm i_4 = NULL,r_4 = NULL;
  i_4 = t;
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_17 = ATgetArgument(t, 0);
            r_4 = ATgetArgument(t, 1);
            {
              ATerm k_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(i_17);
        {
          ATerm m_17 = t;
          int o_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_2 = NULL,u_2 = NULL,v_2 = NULL;
              t = r_4;
              {
                ATerm s_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_17;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                n_2 = t;
                t = term_t_17;
                u_2 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, n_2), term_u_17);
                v_2 = t;
                t = SSL_printnl(u_2, v_2);
                t = (ATerm) ATmakeAppl(sym__2, term_t_17, (ATerm) ATinsert(ATinsert(ATempty, n_2), term_u_17));
              }
              ;
              LocalPopChoice(o_17);
            }
          else
            {
              t = m_17;
              t = i_4;
            }
        }
      }
    else
      {
        t = h_17;
        t = i_4;
      }
    t = i_4;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm q_58 (ATerm), ATerm t)
{
  ATerm c_5 = NULL,e_5 = NULL;
  e_5 = t;
  t = fork_0_0(t);
  c_5 = t;
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_5;
        t = q_58(t);
        ;
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        t = SSL_waitpid(c_5);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm x_17 = ATgetArgument(t, 0);
            if(((ATgetType(x_17) != AT_INT) || (ATgetInt((ATermInt) x_17) != 0)))
              _fail(t);
            {
              ATerm y_17 = ATgetArgument(t, 1);
            }
            {
              ATerm z_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_5;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm h_5 = NULL;
  ATerm d_1 (ATerm t)
  {
    ATerm i_5 = NULL,j_5 = NULL;
    i_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_5), i_5);
    t = x_6(not_null(h_5), i_5, t);
    j_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_5, j_5);
    return(t);
  }
  if(((h_5 != NULL) && (h_5 != t)))
    _fail(t);
  else
    h_5 = t;
  t = SSL_table_keys(h_5);
  t = map_1_0(d_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm m_5 = NULL;
  m_5 = t;
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_5 = NULL;
        t = term_k_8;
        t = get_config_0_0(t);
        o_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_5, term_p_16);
        t = geq_0_0(t);
        t = m_5;
        t = f_88(t);
        ;
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        t = m_5;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm u_5 = NULL;
  u_5 = t;
  {
    ATerm c_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_5 = NULL;
        t = term_k_8;
        t = get_config_0_0(t);
        w_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_5, term_d_12);
        t = geq_0_0(t);
        t = u_5;
        t = e_88(t);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = c_18;
        t = u_5;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm b_7 = NULL;
  b_7 = t;
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_7 = NULL;
        t = term_k_8;
        t = get_config_0_0(t);
        f_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_7, term_k_10);
        t = geq_0_0(t);
        t = b_7;
        t = g_88(t);
        ;
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        t = b_7;
      }
  }
  return(t);
}
ATerm i_6 (ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm m_22, ATerm l_22, ATerm t)
{
  t = c_68(t);
  {
    ATerm e_1 (ATerm t)
    {
      ATerm m_7 = NULL;
      m_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, m_7);
      t = b_68(t);
      return(t);
    }
    t = fetch_1_0(e_1, t);
    t = l_22;
  }
  return(t);
}
ATerm j_6 (ATerm y_67 (ATerm), ATerm i_22, ATerm h_22, ATerm t)
{
  ATerm p_8 (ATerm t)
  {
    ATerm f_8 = NULL,g_8 = NULL,i_8 = NULL;
    f_8 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_8 = ATgetFirst((ATermList) t);
            i_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_8;
              {
                ATerm g_1 (ATerm t)
                {
                  t = h_22;
                  return(t);
                }
                t = i_6(y_67, g_1, g_8, i_8, t);
                t = p_8(t);
              }
              ;
              LocalPopChoice(o_18);
            }
          else
            {
              t = n_18;
              {
                ATerm d_3 = NULL,s_3 = NULL,x_0 = NULL;
                t = SSLgetAnnotations(f_8);
                d_3 = t;
                t = i_8;
                t = p_8(t);
                s_3 = t;
                t = (ATerm) ATinsert(CheckATermList(s_3), g_8);
                x_0 = t;
                t = SSLsetAnnotations(x_0, d_3);
              }
            }
        }
      }
    return(t);
  }
  t = i_22;
  t = p_8(t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm f_9 = NULL;
  if(match_cons(t, sym__2))
    {
      f_9 = ATgetArgument(t, 0);
      if((f_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm k_6 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm u_8 = NULL,x_8 = NULL,y_8 = NULL;
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_18 = ATgetArgument(t, 0);
            ATerm v_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
        t = x_6(y_33, z_33, t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = (ATerm) ATempty;
      }
    y_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_8, a_34);
    t = j_6(i_1, y_8, a_34, t);
    x_8 = t;
    t = SSL_table_put(y_33, z_33, x_8);
    t = u_8;
  }
  return(t);
}
ATerm l_6 (ATerm q_75 (ATerm), ATerm i_34, ATerm h_34, ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm i_9 = NULL,j_9 = NULL;
    if(match_cons(t, sym__2))
      {
        i_9 = ATgetArgument(t, 0);
        j_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_34, i_9, j_9);
    t = q_75(t);
    return(t);
  }
  t = h_34;
  t = map_1_0(k_1, t);
  return(t);
}
ATerm a_10 (ATerm u_9, ATerm t)
{
  t = SSL_fclose(u_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL;
  y_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_9 = ATgetArgument(t, 0);
      {
        ATerm x_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_9);
            ;
            LocalPopChoice(z_18);
          }
        else
          {
            t = x_18;
            t = a_10(y_9, t);
          }
      }
    }
  else
    {
      t = a_10(y_9, t);
    }
  return(t);
}
ATerm m_6 (ATerm p_15, ATerm t)
{
  t = SSL_read_term_from_stream(p_15);
  return(t);
}
ATerm n_6 (ATerm n_36, ATerm o_36, ATerm t)
{
  ATerm d_10 = NULL;
  t = SSL_fopen(n_36, o_36);
  d_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_10);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_10 = NULL;
  t = SSL_stdin_stream();
  g_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_10 = NULL;
  t = SSL_stdout_stream();
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_10 = NULL;
  t = SSL_stderr_stream();
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_10);
  return(t);
}
ATerm f_13 (ATerm a_11, ATerm t)
{
  ATerm b_11 = NULL;
  t = SSL_explode_term(a_11);
  if(match_cons(t, sym__2))
    {
      ATerm c_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_19 = ATgetArgument(t, 1);
        if(((ATgetType(e_19) == AT_LIST) && !(ATisEmpty(e_19))))
          {
            b_11 = ATgetFirst((ATermList) e_19);
            {
              ATerm f_19 = (ATerm) ATgetNext((ATermList) e_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_11;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_11;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_11;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_11;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm g_13 (ATerm k_11, ATerm l_11, ATerm m_11, ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,h_12 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(m_11);
  v_11 = t;
  t = k_11;
  if(match_cons(t, sym_Path_1))
    {
      h_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_12, l_11);
  z_0 = t;
  t = SSLsetAnnotations(z_0, v_11);
  if(match_cons(t, sym__2))
    {
      t_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(t_11, u_11, t);
  return(t);
}
ATerm h_13 (ATerm n_12, ATerm o_12, ATerm p_12, ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,a_13 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(p_12);
  s_12 = t;
  t = SSL_is_string(n_12);
  a_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_13, o_12);
  t_1 = t;
  t = SSLsetAnnotations(t_1, s_12);
  if(match_cons(t, sym__2))
    {
      q_12 = ATgetArgument(t, 0);
      r_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(q_12, r_12, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_19 = ATgetArgument(t, 0);
      ATerm o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  c_13 = t;
  if(match_cons(t, sym__2))
    {
      d_13 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
      {
        ATerm p_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_13(c_13, t);
            ;
            LocalPopChoice(q_19);
          }
        else
          {
            t = p_19;
            {
              ATerm r_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_13(d_13, e_13, c_13, t);
                  ;
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = r_19;
                  t = h_13(d_13, e_13, c_13, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_13(c_13, t);
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,l_13 = NULL;
  ATerm v_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_13 = NULL;
      m_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_13, term_a_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = v_19;
      t = debug_1_0(o_1, t);
      _fail(t);
    }
  j_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(l_13, t);
  i_13 = t;
  t = j_13;
  t = fclose_0_0(t);
  t = i_13;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_k_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_13 = NULL,p_13 = NULL;
      o_13 = t;
      t = (ATerm) ATinsert(ATempty, term_o_20);
      p_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_13, (ATerm) ATinsert(ATempty, term_o_20));
      t = p_6(o_13, p_13, t);
      LocalPopChoice(n_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = m_20;
      {
        ATerm p_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_20 = t;
            if((PushChoice() == 0))
              {
                ATerm s_13 = NULL,t_13 = NULL;
                s_13 = t;
                t = (ATerm) ATinsert(ATempty, term_w_8);
                t_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_13, (ATerm) ATinsert(ATempty, term_w_8));
                t = p_6(s_13, t_13, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_20;
              }
            t = debug_1_0(p_1, t);
            ;
            LocalPopChoice(s_20);
          }
        else
          {
            t = p_20;
            t = debug_1_0(r_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_v_20;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  t = term_t_17;
  x_14 = t;
  t = (ATerm) ATinsert(ATempty, term_w_20);
  y_14 = t;
  t = SSL_printnl(x_14, y_14);
  t = w_14;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
  if(match_cons(t, sym__3))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
      b_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_6(z_14, a_15, b_15, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
  e_15 = t;
  t = term_t_17;
  f_15 = t;
  t = (ATerm) ATinsert(ATempty, term_x_20);
  g_15 = t;
  t = SSL_printnl(f_15, g_15);
  t = e_15;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,m_15 = NULL;
  h_15 = t;
  t = term_t_17;
  i_15 = t;
  t = (ATerm) ATinsert(ATempty, term_w_20);
  m_15 = t;
  t = SSL_printnl(i_15, m_15);
  t = h_15;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,j_14 = NULL,l_14 = NULL;
  u_13 = t;
  t = if_verbose5_1_0(u_1, t);
  {
    ATerm y_20 = t;
    if((PushChoice() == 0))
      {
        ATerm n_14 = NULL,u_14 = NULL;
        t = term_z_20;
        n_14 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, u_13);
        u_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_20, (ATerm) ATmakeAppl(sym_Imported_1, u_13));
        t = x_6(n_14, u_14, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_20;
      }
    z_13 = t;
    t = term_z_20;
    h_14 = t;
    t = term_a_21;
    j_14 = t;
    t = (ATerm) ATinsert(ATempty, u_13);
    l_14 = t;
    t = SSL_table_put(h_14, j_14, l_14);
    t = z_13;
    t = if_verbose4_1_0(w_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(y_1, t);
    v_13 = t;
    t = term_z_20;
    g_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_20, v_13);
    t = l_6(z_1, g_14, v_13, t);
    t = if_verbose6_1_0(a_2, t);
    t = term_z_20;
    a_14 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, u_13);
    b_14 = t;
    t = (ATerm) ATempty;
    f_14 = t;
    t = SSL_table_put(a_14, b_14, f_14);
    t = (ATerm) ATmakeAppl(sym__3, term_z_20, (ATerm)ATmakeAppl(sym_Imported_1, u_13), (ATerm) ATempty);
    t = if_verbose4_1_0(c_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm q_71 (ATerm), ATerm t)
{
  ATerm h_16 = NULL,l_16 = NULL,n_16 = NULL;
  h_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_16;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_16 = ATgetFirst((ATermList) t);
          n_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_5 = NULL,g_5 = NULL,k_5 = NULL,c_3 = NULL;
            t = SSLgetAnnotations(h_16);
            a_5 = t;
            t = l_16;
            t = q_71(t);
            g_5 = t;
            t = n_16;
            t = filter_1_0(q_71, t);
            k_5 = t;
            t = (ATerm) ATinsert(CheckATermList(k_5), g_5);
            c_3 = t;
            t = SSLsetAnnotations(c_3, a_5);
            ;
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            t = n_16;
            t = filter_1_0(q_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm p_73 (ATerm), ATerm t)
{
  ATerm v_16 (ATerm t)
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_73(t);
        t = v_16(t);
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
      }
    return(t);
  }
  t = v_16(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_16 = NULL;
            t = term_k_21;
            w_16 = t;
            t = SSL_getenv(w_16);
            ;
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL;
  t = term_z_20;
  q_17 = t;
  t = term_o_21;
  r_17 = t;
  t = term_p_21;
  t = x_6(q_17, r_17, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm q_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_21;
      }
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_r_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm x_16 = NULL;
  t = if_verbose5_1_0(e_2, t);
  x_16 = t;
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_17 = NULL,n_17 = NULL;
        t = term_z_20;
        l_17 = t;
        t = term_a_21;
        n_17 = t;
        t = term_u_21;
        t = x_6(l_17, n_17, t);
        ;
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        {
          ATerm p_17 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          p_17 = t;
          t = repeat_1_0(h_2, t);
          t = p_17;
        }
      }
    t = x_16;
    t = if_verbose5_1_0(i_2, t);
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
  t = term_v_21;
  return(t);
}
ATerm y_18 (ATerm d_18, ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
  t = term_z_20;
  g_18 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, d_18);
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_20, (ATerm) ATmakeAppl(sym_Tool_1, d_18));
  t = x_6(g_18, h_18, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_21 = ATgetFirst((ATermList) t);
      if(match_cons(w_21, sym__2))
        {
          ATerm y_21 = ATgetArgument(w_21, 0);
          f_18 = ATgetArgument(w_21, 1);
        }
      else
        _fail(t);
      {
        ATerm x_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_18;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_z_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(a_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
      t = if_verbose5_1_0(m_2, t);
      t = xtc_load_0_0(t);
      m_18 = t;
      if(match_cons(t, sym__2))
        {
          k_18 = ATgetArgument(t, 0);
          l_18 = ATgetArgument(t, 1);
          {
            ATerm c_22 = t;
            int d_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
                t = term_z_20;
                q_18 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, k_18);
                r_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_z_20, (ATerm) ATmakeAppl(sym_Tool_1, k_18));
                t = x_6(q_18, r_18, t);
                {
                  ATerm w_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((l_18 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((p_18 != NULL) && (p_18 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(w_2, t);
                  t = not_null(p_18);
                }
                ;
                LocalPopChoice(d_22);
              }
            else
              {
                t = c_22;
                t = y_18(m_18, t);
              }
          }
        }
      else
        {
          t = y_18(m_18, t);
        }
      t = if_verbose5_1_0(x_2, t);
      ;
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm w_18 = NULL,z_5 = NULL,a_6 = NULL;
        w_18 = t;
        t = term_t_17;
        z_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_22), w_18), term_e_22);
        a_6 = t;
        t = SSL_printnl(z_5, a_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_22), w_18), term_e_22);
        t = if_verbose5_1_0(z_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm u_77 (ATerm), ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL;
  b_19 = t;
  t = u_77(t);
  t = xtc_find_0_0(t);
  a_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_19, b_19);
  {
    ATerm b_3 (ATerm t)
    {
      ATerm d_19 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, a_19, b_19);
      t = f_6(a_19, b_19, t);
      t = term_g_22;
      d_19 = t;
      t = SSL_exit(d_19);
      return(t);
    }
    t = fork_and_wait_1_0(b_3, t);
    t = b_19;
  }
  return(t);
}
ATerm o_6 (ATerm t_74 (ATerm), ATerm k_32, ATerm i_32, ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  j_19 = t;
  t = t_74(t);
  g_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_19, k_32, i_32);
  t = y_6(g_19, k_32, i_32, t);
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_19 = NULL;
        t = term_n_22;
        n_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_19, term_n_22);
        t = x_6(g_19, n_19, t);
        ;
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_19 = ATgetFirst((ATermList) t);
        i_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_n_22;
    k_19 = t;
    t = (ATerm) ATinsert(CheckATermList(i_19), (ATerm) ATinsert(CheckATermList(h_19), k_32));
    l_19 = t;
    t = SSL_table_put(g_19, k_19, l_19);
    t = j_19;
  }
  return(t);
}
ATerm e_20 (ATerm u_19, ATerm t)
{
  t = u_19;
  {
    ATerm o_22 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_22 = ATgetArgument(t, 0);
            ATerm q_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_22;
      }
    t = term_r_22;
    t = debug_1_0(e_3, t);
    t = (ATerm) ATmakeAppl(sym__2, u_19, term_z_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm f_20 (ATerm w_19, ATerm x_19, ATerm y_19, ATerm t)
{
  t = SSL_open_file(w_19, x_19);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_s_22;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
  b_20 = t;
  if(match_cons(t, sym__2))
    {
      c_20 = ATgetArgument(t, 0);
      d_20 = ATgetArgument(t, 1);
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_20(b_20, t);
            ;
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            t = f_20(c_20, d_20, b_20, t);
          }
      }
    }
  else
    {
      t = e_20(b_20, t);
    }
  return(t);
}
ATerm p_6 (ATerm f_36, ATerm g_36, ATerm t)
{
  t = SSL_access(f_36, g_36);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
  t = term_s_8;
  t = new_0_0(t);
  h_20 = t;
  t = term_v_22;
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_20, term_v_22);
  t = w_6(h_20, i_20, t);
  j_20 = t;
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_20 = NULL;
        t = (ATerm) ATinsert(ATempty, term_w_8);
        l_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_20, (ATerm) ATinsert(ATempty, term_w_8));
        t = p_6(j_20, l_20, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        t = j_20;
      }
  }
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_y_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL;
  t = new_file_0_0(t);
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_20, term_z_8);
  t = open_file_0_0(t);
  t = term_s_8;
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_20, term_s_8);
  t = o_6(f_3, q_20, r_20, t);
  t = q_20;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,n_21 = NULL;
  l_21 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_6 = NULL,u_6 = NULL;
      t = l_21;
      t = xtc_new_file_0_0(t);
      h_6 = t;
      t = r_0(t);
      u_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_6, (ATerm) ATinsert(ATinsert(ATempty, h_6), term_z_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(h_6);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_6);
    }
  else
    {
      ATerm g_7 = NULL,h_7 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_21;
      t = xtc_new_file_0_0(t);
      g_7 = t;
      t = r_0(t);
      h_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_7), term_z_22), n_21), term_a_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(g_7);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_7);
    }
  return(t);
}
ATerm q_6 (ATerm l_12, ATerm m_12, ATerm t)
{
  t = SSL_copy(l_12, m_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL;
  c_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      d_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_7 = NULL;
        t = c_23;
        t = n_0(t);
        p_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = p_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = p_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, d_23, p_7);
        t = q_6(d_23, p_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_23);
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = b_23;
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_8 = NULL;
              t = c_23;
              t = n_0(t);
              e_8 = t;
              {
                ATerm h_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm h_8 = NULL;
                    h_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = h_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = h_8;
                          }
                        else
                          {
                            t = h_8;
                            if((d_23 != t))
                              {
                                _fail(t);
                              }
                            t = h_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_23;
                  }
                t = (ATerm) ATmakeAppl(sym__2, d_23, e_8);
                t = q_6(d_23, e_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, d_23);
              }
              ;
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              t = c_23;
              t = n_0(t);
              if((d_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_23);
            }
        }
      }
  }
  return(t);
}
ATerm r_6 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL;
  o_23 = t;
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
        t = x_6(g_33, h_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_23 = ATgetFirst((ATermList) t);
            n_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_23);
        t = SSL_table_put(g_33, h_33, n_23);
        t = (ATerm) ATmakeAppl(sym__3, g_33, h_33, n_23);
      }
    else
      {
        t = i_23;
        t = SSL_table_remove(g_33, h_33);
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
      }
    t = o_23;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm q_74 (ATerm), ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,t_23 = NULL,w_23 = NULL,x_23 = NULL;
  w_23 = t;
  t = q_74(t);
  t_23 = t;
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_23 = NULL;
        t = term_n_22;
        y_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_23, term_n_22);
        t = x_6(t_23, y_23, t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_23 = ATgetFirst((ATermList) t);
        p_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_n_22;
    x_23 = t;
    t = SSL_table_put(t_23, x_23, p_23);
    t = q_23;
    {
      ATerm h_3 (ATerm t)
      {
        ATerm z_23 = NULL;
        z_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_23, z_23);
        t = r_6(t_23, z_23, t);
        return(t);
      }
      t = map_1_0(h_3, t);
      t = w_23;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_75(t);
      t = m_75(t);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      t = m_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_74 (ATerm), ATerm t)
{
  ATerm b_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,j_24 = NULL;
  e_24 = t;
  t = p_74(t);
  b_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_24, term_n_22);
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_24 = ATgetArgument(t, 0);
            ATerm c_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_22;
        o_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_24, term_n_22);
        t = x_6(b_24, o_24, t);
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = (ATerm) ATempty;
      }
    f_24 = t;
    t = term_n_22;
    g_24 = t;
    t = (ATerm) ATinsert(CheckATermList(f_24), (ATerm) ATempty);
    j_24 = t;
    t = SSL_table_put(b_24, g_24, j_24);
    t = e_24;
  }
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_y_22;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm x_24 = NULL;
  x_24 = t;
  {
    ATerm d_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(x_24);
        ;
        LocalPopChoice(h_24);
      }
    else
      {
        t = d_24;
        t = x_24;
      }
  }
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_y_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm g_77 (ATerm), ATerm t)
{
  ATerm r_24 = NULL;
  ATerm l_3 (ATerm t)
  {
    ATerm s_24 = NULL;
    s_24 = t;
    {
      ATerm i_24 = t;
      int k_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_24 = NULL,u_24 = NULL;
          t = term_y_22;
          t_24 = t;
          t = term_n_22;
          u_24 = t;
          t = term_l_24;
          t = x_6(t_24, u_24, t);
          ;
          LocalPopChoice(k_24);
        }
      else
        {
          t = i_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((r_24 != NULL) && (r_24 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            r_24 = ATgetFirst((ATermList) t);
          {
            ATerm m_24 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = r_24;
      t = map_1_0(n_3, t);
      t = s_24;
      t = end_scope_1_0(o_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(j_3, t);
  t = restore_always_2_0(g_77, l_3, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm n_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_24);
    }
  else
    {
      t = n_24;
      t = term_q_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm h_77 (ATerm), ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_25 = NULL;
        t = term_a_23;
        t = get_config_0_0(t);
        c_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, c_25);
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = term_t_8;
      }
    t = h_77(t);
    t = copy_to_1_0(x_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(v_3, t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_25 = NULL,l_25 = NULL;
      l_25 = t;
      if(match_cons(t, sym_FILE_1))
        {
          k_25 = ATgetArgument(t, 0);
          {
            ATerm v_8 = NULL,g_3 = NULL;
            t = SSLgetAnnotations(l_25);
            v_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, k_25);
            g_3 = t;
            t = SSLsetAnnotations(g_3, v_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_25;
        }
      LocalPopChoice(z_24);
      t = xtc_transform_file_2_0(z_3, c_4, t);
    }
  else
    {
      t = y_24;
      t = xtc_transform_term_2_0(e_4, f_4, t);
    }
  t = xtc_abox2text_1_0(pass_width_0_0, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_b_25;
  t = get_config_0_0(t);
  t = map_1_0(d_4, t);
  t = concat_0_0(t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm m_25 = NULL;
  m_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_25), term_b_25);
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_b_25;
  t = get_config_0_0(t);
  t = map_1_0(g_4, t);
  t = concat_0_0(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm n_25 = NULL;
  n_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_25), term_b_25);
  return(t);
}
ATerm ast2text_0_0 (ATerm t)
{
  t = xtc_io_1_0(y_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  q_25 = t;
  t = term_s_8;
  t = whoami_0_0(t);
  r_25 = t;
  t = term_t_17;
  t_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_25), r_25), term_d_25);
  u_25 = t;
  t = SSL_printnl(t_25, u_25);
  t = term_n_8;
  s_25 = t;
  t = SSL_exit(s_25);
  t = q_25;
  return(t);
}
ATerm at_end_1_0 (ATerm k_64 (ATerm), ATerm t)
{
  ATerm b_27 (ATerm t)
  {
    ATerm s_26 = NULL,z_26 = NULL,a_27 = NULL;
    a_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_26 = ATgetFirst((ATermList) t);
        z_26 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_9 = NULL,p_9 = NULL,i_3 = NULL;
          t = SSLgetAnnotations(a_27);
          l_9 = t;
          t = z_26;
          t = b_27(t);
          p_9 = t;
          t = (ATerm) ATinsert(CheckATermList(p_9), s_26);
          i_3 = t;
          t = SSLsetAnnotations(i_3, l_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_27;
        t = k_64(t);
      }
    return(t);
  }
  t = b_27(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,a_26 = NULL;
  w_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_25;
    }
  else
    {
      ATerm h_4 (ATerm t)
      {
        t = not_null(a_26);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_25 = ATgetFirst((ATermList) t);
          if(((a_26 != NULL) && (a_26 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_25;
      t = at_end_1_0(h_4, t);
    }
  return(t);
}
ATerm r_27 (ATerm g_27, ATerm t)
{
  ATerm h_27 = NULL;
  t = SSL_explode_term(g_27);
  if(match_cons(t, sym__2))
    {
      ATerm f_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_27;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_27 = NULL,n_27 = NULL,o_27 = NULL;
  o_27 = t;
  if(match_cons(t, sym__2))
    {
      k_27 = ATgetArgument(t, 0);
      n_27 = ATgetArgument(t, 1);
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_4 (ATerm t)
            {
              t = n_27;
              return(t);
            }
            t = k_27;
            t = at_end_1_0(k_4, t);
            ;
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            t = r_27(o_27, t);
          }
      }
    }
  else
    {
      t = r_27(o_27, t);
    }
  return(t);
}
ATerm s_6 (ATerm h_35, ATerm g_35, ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,v_27 = NULL;
  t = h_35;
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = (ATerm) ATempty;
      }
    t_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_35, t_27);
    t = conc_0_0(t);
    s_27 = t;
    t = term_o_25;
    v_27 = t;
    t = SSL_table_put(v_27, h_35, s_27);
    t = (ATerm) ATmakeAppl(sym__3, term_o_25, h_35, s_27);
  }
  return(t);
}
ATerm m_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
  w_27 = t;
  t = term_b_25;
  x_27 = t;
  t = (ATerm) ATinsert(ATempty, w_27);
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_25, (ATerm) ATinsert(ATempty, w_27));
  t = s_6(x_27, y_27, t);
  t = w_27;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_p_25;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_4, o_4, p_4, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_28 = NULL,l_28 = NULL,m_28 = NULL;
      t = term_s_8;
      t = m_0(t);
      i_28 = t;
      t = term_v_25;
      l_28 = t;
      t = term_y_25;
      m_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_25, term_y_25, i_28);
      t = y_6(l_28, m_28, i_28, t);
      _fail(t);
    }
  else
    {
      ATerm v_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_28 = ATgetFirst((ATermList) t);
          d_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_28 = ATgetFirst((ATermList) t);
          f_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_28;
      t = k_0(t);
      t = e_28;
      t = l_0(t);
      v_28 = t;
      t = (ATerm) ATinsert(CheckATermList(f_28), v_28);
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm b_29 = NULL;
  b_29 = t;
  if(match_string(t, "-k"))
    {
      t = b_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_29;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  t = SSL_string_to_int(c_29);
  d_29 = t;
  t = term_z_25;
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_25, d_29);
  t = a_7(e_29, d_29, t);
  t = c_29;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_4, s_4, t_4, t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm i_29 = NULL;
  i_29 = t;
  if(match_string(t, "-S"))
    {
      t = i_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_29;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm j_29 = NULL,n_29 = NULL;
  t = term_k_8;
  j_29 = t;
  t = term_c_26;
  n_29 = t;
  t = term_d_26;
  t = a_7(j_29, n_29, t);
  t = term_e_26;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm r_29 = NULL,u_29 = NULL,v_29 = NULL;
  r_29 = t;
  t = SSL_string_to_int(r_29);
  u_29 = t;
  t = term_k_8;
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_8, u_29);
  t = a_7(v_29, u_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_29);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_g_26;
  return(t);
}
ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL;
  t = term_h_26;
  w_29 = t;
  t = term_s_8;
  x_29 = t;
  t = term_i_26;
  t = a_7(w_29, x_29, t);
  t = term_j_26;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_4, v_4, w_4, t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_4, y_4, z_4, t);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            t = Option_3_0(b_5, d_5, f_5, t);
          }
      }
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  if(match_string(t, "-o"))
    {
      t = z_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_29;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  a_30 = t;
  t = term_z_22;
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_22, a_30);
  t = a_7(b_30, a_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_30);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_5, n_5, p_5, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm d_30 = NULL;
  d_30 = t;
  if(match_string(t, "-i"))
    {
      t = d_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_30;
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL;
  e_30 = t;
  t = term_a_23;
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_23, e_30);
  t = a_7(f_30, e_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_30);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_q_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_5, r_5, s_5, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm h_30 = NULL;
  h_30 = t;
  if(match_string(t, "-w"))
    {
      t = h_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = h_30;
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  i_30 = t;
  t = term_c_8;
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_8, i_30);
  t = a_7(j_30, i_30, t);
  t = i_30;
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_r_26;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      {
        ATerm v_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(w_26);
          }
        else
          {
            t = v_26;
            {
              ATerm x_26 = t;
              int y_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  ;
                  LocalPopChoice(y_26);
                }
              else
                {
                  t = x_26;
                  {
                    ATerm c_27 = t;
                    int d_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        ;
                        LocalPopChoice(d_27);
                      }
                    else
                      {
                        t = c_27;
                        t = ArgOption_3_0(t_5, v_5, x_5, t);
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
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_8;
  t = whoami_0_0(t);
  k_30 = t;
  t = term_t_17;
  m_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_27), k_30);
  n_30 = t;
  t = SSL_printnl(m_30, n_30);
  t = term_n_8;
  l_30 = t;
  t = SSL_exit(l_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_f_27;
  t = get_config_0_0(t);
  return(t);
}
ATerm t_6 (ATerm w_30, ATerm x_30, ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_30, x_30);
      ;
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      t = SSL_addr(w_30, x_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_70 (ATerm), ATerm n_70 (ATerm), ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
  p_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_30;
      t = m_70(t);
    }
  else
    {
      ATerm u_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_30 = ATgetFirst((ATermList) t);
          r_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_30;
      t = foldr_2_0(m_70, n_70, t);
      u_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_30, u_30);
      t = n_70(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL;
  if(match_cons(t, sym__2))
    {
      m_10 = ATgetArgument(t, 0);
      n_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(m_10, n_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_30 = NULL,f_10 = NULL,h_10 = NULL;
  t = times_0_0(t);
  h_10 = t;
  t = SSL_explode_term(h_10);
  if(match_cons(t, sym__2))
    {
      ATerm l_27 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10;
  t = foldr_2_0(y_5, b_6, t);
  z_30 = t;
  t = SSL_TicksToSeconds(z_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL;
  m_31 = t;
  if(match_cons(t, sym__2))
    {
      n_31 = ATgetArgument(t, 0);
      o_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_31;
        if((n_31 != t))
          {
            _fail(t);
          }
        t = m_31;
        ;
        LocalPopChoice(p_27);
      }
    else
      {
        t = m_27;
        t = (ATerm) ATmakeAppl(sym__2, n_31, o_31);
        {
          ATerm q_27 = t;
          int u_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_31, o_31);
              ;
              LocalPopChoice(u_27);
            }
          else
            {
              t = q_27;
              t = SSL_gtr(n_31, o_31);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_31, o_31);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm s_31 = NULL;
  s_31 = t;
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_31 = NULL;
        t = term_k_8;
        t = get_config_0_0(t);
        u_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_31, term_n_8);
        t = geq_0_0(t);
        t = s_31;
        t = b_88(t);
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = s_31;
      }
  }
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,z_31 = NULL,a_32 = NULL;
  t = run_time_0_0(t);
  w_31 = t;
  t = term_s_8;
  t = whoami_0_0(t);
  x_31 = t;
  t = term_t_17;
  z_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_28), w_31), term_d_9), x_31);
  a_32 = t;
  t = SSL_printnl(z_31, a_32);
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_28), w_31), term_d_9), x_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_26;
  b_32 = t;
  t = SSL_exit(b_32);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm v_32 = NULL,d_33 = NULL;
  d_33 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_33;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_32 = ATgetArgument(t, 0);
          {
            ATerm z_10 = NULL,k_3 = NULL;
            t = SSLgetAnnotations(d_33);
            z_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_32);
            k_3 = t;
            t = SSLsetAnnotations(k_3, z_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_33;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_79 (ATerm), ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      t = fetch_1_0(v_6, t);
    }
  t = o_79(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_33 = ATgetFirst((ATermList) t);
      k_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_33 = NULL,p_33 = NULL;
        ATerm z_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_33)), not_null(p_33));
          return(t);
        }
        t = k_33;
        t = j_0(t);
        if(((o_33 != NULL) && (o_33 != t)))
          _fail(t);
        else
          o_33 = t;
        t = j_33;
        t = i_0(t);
        if(((p_33 != NULL) && (p_33 != t)))
          _fail(t);
        else
          p_33 = t;
        t = k_33;
        t = reverse_acc_2_0(i_0, z_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_8;
      t = j_0(t);
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,m_3 = NULL;
  v_33 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_33);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_33);
  m_3 = t;
  t = SSLsetAnnotations(m_3, t_33);
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm x_33 = NULL;
  x_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_33), term_k_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL;
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
      t = fetch_1_0(c_7, t);
    }
  t = term_p_28;
  t = echo_0_0(t);
  t = term_v_25;
  r_33 = t;
  t = term_y_25;
  s_33 = t;
  t = term_q_28;
  t = x_6(r_33, s_33, t);
  t = reverse_acc_2_0(_id, d_7, t);
  t = map_1_0(e_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm e_64 (ATerm), ATerm t)
{
  ATerm j_35 (ATerm t)
  {
    ATerm e_35 = NULL,f_35 = NULL,i_35 = NULL;
    e_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_35 = ATgetFirst((ATermList) t);
        i_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_28 = t;
      int s_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_11 = NULL,r_11 = NULL,p_3 = NULL;
          t = SSLgetAnnotations(e_35);
          o_11 = t;
          t = f_35;
          t = e_64(t);
          r_11 = t;
          t = (ATerm) ATinsert(CheckATermList(i_35), r_11);
          p_3 = t;
          t = SSLsetAnnotations(p_3, o_11);
          ;
          LocalPopChoice(s_28);
        }
      else
        {
          t = r_28;
          {
            ATerm e_12 = NULL,t_12 = NULL,q_3 = NULL;
            t = SSLgetAnnotations(e_35);
            e_12 = t;
            t = i_35;
            t = j_35(t);
            t_12 = t;
            t = (ATerm) ATinsert(CheckATermList(t_12), f_35);
            q_3 = t;
            t = SSLsetAnnotations(q_3, e_12);
          }
        }
    }
    return(t);
  }
  t = j_35(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
  v_35 = t;
  {
    ATerm t_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_28 = ATgetFirst((ATermList) t);
                ATerm x_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_35;
          }
        ;
        LocalPopChoice(u_28);
      }
    else
      {
        t = t_28;
        t = (ATerm) ATinsert(ATempty, v_35);
      }
    w_35 = t;
    t = term_q_24;
    x_35 = t;
    t = SSL_printnl(x_35, w_35);
    t = v_35;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_f_27;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm w_6 (ATerm s_29, ATerm t_29, ATerm t)
{
  t = SSL_strcat(s_29, t_29);
  return(t);
}
ATerm debug_1_0 (ATerm z_59 (ATerm), ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
  b_36 = t;
  t = z_59(t);
  c_36 = t;
  t = term_t_17;
  d_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_36), c_36);
  e_36 = t;
  t = SSL_printnl(d_36, e_36);
  t = b_36;
  return(t);
}
ATerm map_1_0 (ATerm u_63 (ATerm), ATerm t)
{
  ATerm z_36 (ATerm t)
  {
    ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
    w_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_36;
      }
    else
      {
        ATerm w_13 = NULL,c_14 = NULL,d_14 = NULL,j_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_36 = ATgetFirst((ATermList) t);
            y_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_36);
        w_13 = t;
        t = x_36;
        t = u_63(t);
        c_14 = t;
        t = y_36;
        t = z_36(t);
        d_14 = t;
        t = (ATerm) ATinsert(CheckATermList(d_14), c_14);
        j_4 = t;
        t = SSLsetAnnotations(j_4, w_13);
      }
    return(t);
  }
  t = z_36(t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
    }
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_a_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_37 = NULL;
      p_37 = t;
      t = SSL_is_string(p_37);
      ;
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
      {
        ATerm h_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_7, t);
            ;
            LocalPopChoice(k_29);
          }
        else
          {
            t = h_29;
            {
              ATerm x_37 = NULL,z_37 = NULL,a_38 = NULL;
              x_37 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_37 = ATgetArgument(t, 0);
                  t = z_37;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_37 = ATgetArgument(t, 0);
                      t = z_37;
                      {
                        ATerm l_29 = t;
                        int m_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(m_29);
                          }
                        else
                          {
                            t = l_29;
                            t = debug_1_0(j_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_38 = NULL,i_38 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_37 = ATgetArgument(t, 0);
                          a_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_37;
                      t = eval_config_0_0(t);
                      h_38 = t;
                      t = a_38;
                      t = eval_config_0_0(t);
                      i_38 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_38, i_38);
                      t = w_6(h_38, i_38, t);
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
  ATerm m_38 = NULL,n_38 = NULL;
  m_38 = t;
  t = term_o_25;
  n_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_25, m_38);
  t = x_6(n_38, m_38, t);
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_38 = NULL,p_38 = NULL;
        t = eval_config_0_0(t);
        o_38 = t;
        t = term_o_25;
        p_38 = t;
        t = SSL_table_put(p_38, m_38, o_38);
        t = o_38;
        ;
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
      }
  }
  return(t);
}
ATerm k_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL;
  t = term_q_29;
  s_38 = t;
  t = term_s_8;
  t_38 = t;
  t = term_y_29;
  t = a_7(s_38, t_38, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm o_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  t = term_q_29;
  w_38 = t;
  t = term_s_8;
  x_38 = t;
  t = term_y_29;
  t = a_7(w_38, x_38, t);
  t = term_g_30;
  u_38 = t;
  t = term_s_8;
  v_38 = t;
  t = term_o_30;
  t = a_7(u_38, v_38, t);
  t = term_s_30;
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_t_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_7, l_7, n_7, t);
      ;
      LocalPopChoice(y_30);
    }
  else
    {
      t = v_30;
      t = Option_3_0(o_7, q_7, r_7, t);
    }
  return(t);
}
ATerm a_7 (ATerm b_35, ATerm c_35, ATerm t)
{
  ATerm y_38 = NULL;
  t = term_o_25;
  y_38 = t;
  t = SSL_table_put(y_38, b_35, c_35);
  t = (ATerm) ATmakeAppl(sym__3, term_o_25, b_35, c_35);
  return(t);
}
ATerm x_6 (ATerm s_34, ATerm t_34, ATerm t)
{
  t = SSL_table_get(s_34, t_34);
  return(t);
}
ATerm y_6 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm t)
{
  ATerm a_39 = NULL,g_39 = NULL,h_39 = NULL;
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_31 = ATgetArgument(t, 0);
            ATerm f_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
        t = x_6(b_33, c_33, t);
        ;
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        t = (ATerm) ATempty;
      }
    g_39 = t;
    t = (ATerm) ATinsert(CheckATermList(g_39), a_33);
    h_39 = t;
    t = SSL_table_put(b_33, c_33, h_39);
    t = a_39;
  }
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_39 = NULL,r_39 = NULL,s_39 = NULL;
      t = term_s_8;
      t = h_0(t);
      p_39 = t;
      t = term_v_25;
      r_39 = t;
      t = term_y_25;
      s_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_25, term_y_25, p_39);
      t = y_6(r_39, s_39, p_39, t);
      _fail(t);
    }
  else
    {
      ATerm v_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_39 = ATgetFirst((ATermList) t);
          o_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_39;
      t = d_0(t);
      t = term_s_8;
      t = g_0(t);
      v_39 = t;
      t = (ATerm) ATinsert(CheckATermList(o_39), v_39);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_51 (ATerm), ATerm n_51 (ATerm), ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,l_4 = NULL;
  b_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_39 = ATgetFirst((ATermList) t);
      y_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_40);
  w_39 = t;
  t = x_39;
  t = m_51(t);
  z_39 = t;
  t = y_39;
  t = n_51(t);
  a_40 = t;
  t = (ATerm) ATinsert(CheckATermList(a_40), z_39);
  l_4 = t;
  t = SSLsetAnnotations(l_4, w_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_81 (ATerm), ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,l_40 = NULL,m_40 = NULL,n_4 = NULL;
  g_40 = t;
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_31;
        t = m_81(t);
        ;
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
      }
    t = g_40;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_40 = ATgetFirst((ATermList) t);
        j_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_40);
    h_40 = t;
    t = term_f_27;
    m_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_f_27, i_40);
    t = a_7(m_40, i_40, t);
    t = j_40;
    {
      ATerm w_40 (ATerm t)
      {
        ATerm j_31 = t;
        int k_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_31 = t;
            int p_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_40 = NULL;
                p_40 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_40;
                ;
                LocalPopChoice(p_31);
              }
            else
              {
                t = l_31;
                t = m_81(t);
                t = Cons_2_0(_id, w_40, t);
              }
            ;
            LocalPopChoice(k_31);
          }
        else
          {
            t = j_31;
            {
              ATerm s_40 = NULL,t_40 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_40 = ATgetFirst((ATermList) t);
                  t_40 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_40), (ATerm) ATmakeAppl(sym_Undefined_1, s_40));
            }
          }
        return(t);
      }
      t = w_40(t);
      l_40 = t;
      t = (ATerm) ATinsert(CheckATermList(l_40), (ATerm) ATmakeAppl(sym_Program_1, i_40));
      n_4 = t;
      t = SSLsetAnnotations(n_4, h_40);
    }
  }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm i_41 = NULL;
  i_41 = t;
  if(match_string(t, "--help"))
    {
      t = i_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_41;
        }
    }
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL;
  t = term_j_28;
  j_41 = t;
  t = term_s_8;
  k_41 = t;
  t = term_q_31;
  t = a_7(j_41, k_41, t);
  t = term_r_31;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm x_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL;
  d_41 = t;
  t = term_v_25;
  f_41 = t;
  t = term_y_25;
  g_41 = t;
  t = (ATerm) ATempty;
  h_41 = t;
  t = SSL_table_put(f_41, g_41, h_41);
  t = d_41;
  {
    ATerm t_7 (ATerm t)
    {
      ATerm v_31 = t;
      int y_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_81(t);
          ;
          LocalPopChoice(y_31);
        }
      else
        {
          t = v_31;
          {
            ATerm c_32 = t;
            int d_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_7, v_7, w_7, t);
                ;
                LocalPopChoice(d_32);
              }
            else
              {
                t = c_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_7, t);
    {
      ATerm e_32 = t;
      int f_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_41 = NULL;
          r_41 = t;
          {
            ATerm g_32 = t;
            int h_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_15 = NULL;
                t = r_41;
                {
                  ATerm j_32 = t;
                  int l_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_j_28;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(l_32);
                    }
                  else
                    {
                      t = j_32;
                      t = fetch_1_0(x_7, t);
                    }
                  t = r_41;
                  t = default_system_usage_0_0(t);
                  t = term_c_26;
                  n_15 = t;
                  t = SSL_exit(n_15);
                }
                ;
                LocalPopChoice(h_32);
              }
            else
              {
                t = g_32;
                {
                  ATerm t_15 = NULL;
                  t = term_q_29;
                  t = get_config_0_0(t);
                  t = r_41;
                  t = default_system_about_0_0(t);
                  t = term_c_26;
                  t_15 = t;
                  t = SSL_exit(t_15);
                }
              }
          }
          ;
          LocalPopChoice(f_32);
        }
      else
        {
          t = e_32;
          {
            ATerm m_32 = t;
            int n_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
                ATerm y_7 (ATerm t)
                {
                  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,s_7 = NULL;
                  x_41 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      w_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_41);
                  v_41 = t;
                  t = w_41;
                  if(((b_41 != NULL) && (b_41 != t)))
                    _fail(t);
                  else
                    b_41 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, w_41);
                  s_7 = t;
                  t = SSLsetAnnotations(s_7, v_41);
                  return(t);
                }
                t = fetch_1_0(y_7, t);
                t = term_t_17;
                t_41 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_41)), term_o_32);
                u_41 = t;
                t = SSL_printnl(t_41, u_41);
                t = (ATerm) ATmakeAppl(sym__2, term_t_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_41)), term_o_32));
                t = default_system_usage_0_0(t);
                t = term_n_8;
                s_41 = t;
                t = SSL_exit(s_41);
                ;
                LocalPopChoice(n_32);
              }
            else
              {
                t = m_32;
              }
          }
        }
      c_41 = t;
      t = term_v_25;
      e_41 = t;
      t = SSL_table_destroy(e_41);
      t = c_41;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_79 (ATerm), ATerm r_79 (ATerm), ATerm s_79 (ATerm), ATerm t_79 (ATerm), ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL;
  t = parse_options_1_0(q_79, t);
  c_42 = t;
  t = term_p_32;
  f_42 = t;
  t = SSL_table_create(f_42);
  t = term_p_32;
  d_42 = t;
  t = term_q_32;
  e_42 = t;
  t = SSL_table_put(d_42, e_42, c_42);
  t = c_42;
  t = s_79(t);
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_79, t);
        ;
        LocalPopChoice(s_32);
      }
    else
      {
        t = r_32;
        {
          ATerm t_32 = t;
          int u_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_79(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_32);
            }
          else
            {
              t = t_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_options_0_0(t);
      ;
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
      t = pp_options_0_0(t);
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(z_7, default_usage_0_0, _id, ast2text_0_0, t);
  return(t);
}
