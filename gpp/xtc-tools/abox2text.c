#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
static void init_module_constructors (void)
{
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
}
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_j_29;
ATerm term_y_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_l_28;
ATerm term_h_28;
ATerm term_w_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_r_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_v_25;
ATerm term_r_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_k_23;
ATerm term_g_23;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_p_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_g_21;
ATerm term_z_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_n_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_w_18;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_f_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_d_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_u_7;
ATerm term_q_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_8, term_u_7, term_u_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_8, term_x_8, term_y_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_9, term_b_9, term_c_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_9, term_g_9, term_k_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_p_9, term_s_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_v_9, term_w_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_9, term_a_10, term_b_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_10, term_g_10, term_h_10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_10, term_l_10, term_m_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_10, term_s_10, term_t_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_x_10, term_z_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_11, term_c_11, term_d_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_g_11, term_h_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_l_11, term_m_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_t_11, term_u_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_c_12, term_d_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_j_12, term_k_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_t_12, term_w_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_b_13, term_c_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_i_13, term_k_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_o_13, term_p_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_x_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_h_14, term_i_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_q_14, term_r_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_v_14, term_w_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_f_15, term_g_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_p_15, term_q_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_y_15);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym__2, term_k_19, term_a_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym__2, term_k_19, term_l_19);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__2, term_w_21, term_p_21);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_t_23);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_23);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_a_24, term_y_21);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_p_23, term_q_23);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym__2, term_l_28, term_y_21);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_y_21);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_m_26, term_y_21);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm at_end_1_0 (ATerm v_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm x_2 (ATerm z_1, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm y_5 (ATerm o_33, ATerm p_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm pass_width_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm z_5 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm a_6 (ATerm o_66 (ATerm), ATerm m_169, ATerm x_17, ATerm t);
static ATerm m_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm t);
static ATerm b_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm q_71 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm d_65 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm v_82 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm u_82 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm w_82 (ATerm), ATerm t);
static ATerm e_6 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm u_24, ATerm t_24, ATerm t);
static ATerm f_6 (ATerm j_75 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm g_6 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t);
static ATerm h_6 (ATerm y_82 (ATerm), ATerm q_37, ATerm p_37, ATerm t);
static ATerm l_6 (ATerm r_39, ATerm s_39, ATerm t);
static ATerm x_11 (ATerm i_11, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_6 (ATerm t_17, ATerm t);
static ATerm j_6 (ATerm a_40, ATerm b_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_13 (ATerm h_12, ATerm t);
static ATerm z_13 (ATerm m_12, ATerm n_12, ATerm o_12, ATerm t);
static ATerm a_14 (ATerm z_12, ATerm d_13, ATerm e_13, ATerm t);
static ATerm k_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm e_79 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm z_19 (ATerm n_18, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm t_85 (ATerm), ATerm t);
static ATerm m_6 (ATerm i_81 (ATerm), ATerm w_34, ATerm u_34, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm abox2text_0_0 (ATerm t);
static ATerm n_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm o_6 (ATerm o_36, ATerm p_36, ATerm t);
ATerm end_scope_1_0 (ATerm f_81 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm e_81 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm f_85 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm g_85 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_6 (ATerm i_33, ATerm j_33, ATerm t);
ATerm foldr_2_0 (ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_82 (ATerm), ATerm t);
static ATerm j_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm need_help_1_0 (ATerm v_86 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_71 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm s_6 (ATerm d_32, ATerm e_32, ATerm t);
ATerm debug_1_0 (ATerm m_66 (ATerm), ATerm t);
ATerm map_1_0 (ATerm e_71 (ATerm), ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm w_6 (ATerm j_38, ATerm k_38, ATerm t);
static ATerm t_6 (ATerm a_38, ATerm b_38, ATerm t);
static ATerm u_6 (ATerm j_36, ATerm k_36, ATerm i_36, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm e_58 (ATerm), ATerm f_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_88 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm parse_options_1_0 (ATerm s_88 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm t);
static ATerm e_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm v_71 (ATerm), ATerm t)
{
  static ATerm u_1 (ATerm t)
  {
    ATerm p_1 = NULL,s_1 = NULL,t_1 = NULL;
    t_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_1 = ATgetFirst((ATermList) t);
        s_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_0 = NULL,x_0 = NULL,z_0 = NULL;
          t = SSLgetAnnotations(t_1);
          u_0 = t;
          t = s_1;
          t = u_1(t);
          x_0 = t;
          t = (ATerm) ATinsert(CheckATermList(x_0), p_1);
          z_0 = t;
          t = SSLsetAnnotations(z_0, u_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_1;
        t = v_71(t);
      }
    return(t);
  }
  t = u_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,j_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
    }
  else
    {
      static ATerm a_0 (ATerm t)
      {
        t = not_null(j_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_0 = ATgetFirst((ATermList) t);
          if(((j_0 != NULL) && (j_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_0;
      t = at_end_1_0(a_0, t);
    }
  return(t);
}
static ATerm x_2 (ATerm z_1, ATerm t)
{
  ATerm e_2 = NULL;
  t = SSL_explode_term(z_1);
  if(match_cons(t, sym__2))
    {
      ATerm t_0 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_0) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_2 = NULL,t_2 = NULL,u_2 = NULL;
  u_2 = t;
  if(match_cons(t, sym__2))
    {
      p_2 = ATgetArgument(t, 0);
      t_2 = ATgetArgument(t, 1);
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_0 (ATerm t)
            {
              t = t_2;
              return(t);
            }
            t = p_2;
            t = at_end_1_0(h_0, t);
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            t = x_2(u_2, t);
          }
      }
    }
  else
    {
      t = x_2(u_2, t);
    }
  return(t);
}
static ATerm y_5 (ATerm o_33, ATerm p_33, ATerm t)
{
  ATerm k_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_33, p_33);
      LocalPopChoice(m_7);
    }
  else
    {
      t = k_7;
      t = SSL_subtr(o_33, p_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL;
  t = term_q_7;
  {
    ATerm r_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(t_7);
      }
    else
      {
        t = r_7;
        t = term_u_7;
      }
  }
  a_3 = t;
  t = term_u_7;
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_3, term_u_7);
  t = y_5(a_3, c_3, t);
  b_3 = t;
  t = SSL_int_to_string(b_3);
  z_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_2), term_q_7);
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm v_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_7;
      t = get_config_0_0(t);
      LocalPopChoice(x_7);
      {
        ATerm d_3 = NULL;
        d_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, d_3), term_y_7);
      }
    }
  else
    {
      t = v_7;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm k_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_z_7;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm m_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_8);
      m_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_3, (ATerm) ATinsert(ATempty, term_a_8));
      t = l_6(k_3, m_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm z_5 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm n_3 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_3);
  return(t);
}
static ATerm a_6 (ATerm o_66 (ATerm), ATerm m_169, ATerm x_17, ATerm t)
{
  ATerm p_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_169, term_d_8);
  t = k_6(t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, x_17);
  t = o_66(t);
  t = fclose_0_0(t);
  t = x_17;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_8 = ATgetArgument(t, 0);
      if(match_cons(e_8, sym_Stream_1))
        {
          t_3 = ATgetArgument(e_8, 0);
        }
      else
        _fail(t);
      u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(t_3, u_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,s_3 = NULL;
  s_3 = t;
  t = xtc_new_file_0_0(t);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_3, s_3);
  t = a_6(m_0, q_3, s_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_3);
  t = xtc_transform_file_2_0(s_84, t_84, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm b_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,a_5 = NULL,b_5 = NULL;
  x_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      y_4 = ATgetArgument(t, 0);
      {
        ATerm n_1 = NULL,o_1 = NULL;
        t = SSL_int_to_string(y_4);
        n_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_8), n_1), term_g_8);
        o_1 = t;
        t = SSL_concat_strings(o_1);
      }
    }
  else
    {
      ATerm f_2 = NULL,g_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          y_4 = ATgetArgument(t, 0);
          a_5 = ATgetArgument(t, 1);
          b_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(a_5);
      f_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_5), term_j_8), f_2), term_i_8), y_4);
      g_2 = t;
      t = SSL_concat_strings(g_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm q_71 (ATerm), ATerm t)
{
  ATerm f_5 = NULL;
  static ATerm q_0 (ATerm t)
  {
    t = q_71(t);
    if(((f_5 != NULL) && (f_5 != t)))
      _fail(t);
    else
      f_5 = t;
    return(t);
  }
  t = fetch_1_0(q_0, t);
  t = not_null(f_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm g_5 = NULL;
  g_5 = t;
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm n_8 = ATgetArgument(t, 0);
              if((g_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm p_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_16), term_u_15), term_h_15), term_x_14), term_s_14), term_j_14), term_b_14), term_r_13), term_l_13), term_g_13), term_y_12), term_l_12), term_e_12), term_v_11), term_p_11), term_j_11), term_e_11), term_a_11), term_u_10), term_q_10), term_i_10), term_e_10), term_x_9), term_t_9), term_l_9), term_d_9), term_z_8), term_v_8);
        t = fetch_elem_1_0(s_0, t);
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, g_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm m_5 = NULL,v_6 = NULL;
  m_5 = t;
  {
    ATerm g_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_16 = ATgetArgument(t, 0);
            v_6 = ATgetArgument(t, 1);
            {
              ATerm m_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_16);
        {
          ATerm n_16 = t;
          int p_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL,q_2 = NULL,r_2 = NULL;
              t = v_6;
              {
                ATerm q_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_16;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              m_2 = t;
              t = term_r_16;
              q_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, m_2), term_s_16);
              r_2 = t;
              t = SSL_printnl(q_2, r_2);
              t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, m_2), term_s_16));
              LocalPopChoice(p_16);
            }
          else
            {
              t = n_16;
              t = m_5;
            }
        }
      }
    else
      {
        t = g_16;
        t = m_5;
      }
  }
  t = m_5;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm d_65 (ATerm), ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL;
  h_7 = t;
  t = fork_0_0(t);
  g_7 = t;
  {
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = h_7;
        t = d_65(t);
        LocalPopChoice(w_16);
      }
    else
      {
        t = v_16;
        t = SSL_waitpid(g_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm x_16 = ATgetArgument(t, 0);
            if(((ATgetType(x_16) != AT_INT) || (ATgetInt((ATermInt) x_16) != 0)))
              _fail(t);
            {
              ATerm y_16 = ATgetArgument(t, 1);
            }
            {
              ATerm z_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = h_7;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm l_7 = NULL;
  static ATerm v_0 (ATerm t)
  {
    ATerm n_7 = NULL,o_7 = NULL;
    n_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_7), n_7);
    t = t_6(not_null(l_7), n_7, t);
    o_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_7, o_7);
    return(t);
  }
  if(((l_7 != NULL) && (l_7 != t)))
    _fail(t);
  else
    l_7 = t;
  t = SSL_table_keys(l_7);
  t = map_1_0(v_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm s_7 = NULL;
  s_7 = t;
  {
    ATerm a_17 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_7 = NULL;
        t = term_q_7;
        t = get_config_0_0(t);
        w_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_7, term_v_14);
        t = geq_0_0(t);
        t = s_7;
        t = v_82(t);
        LocalPopChoice(b_17);
      }
    else
      {
        t = a_17;
        t = s_7;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_82 (ATerm), ATerm t)
{
  ATerm b_8 = NULL;
  b_8 = t;
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_8 = NULL;
        t = term_q_7;
        t = get_config_0_0(t);
        f_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_8, term_c_11);
        t = geq_0_0(t);
        t = b_8;
        t = u_82(t);
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        t = b_8;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm k_8 = NULL;
  k_8 = t;
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_8 = NULL;
        t = term_q_7;
        t = get_config_0_0(t);
        o_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_8, term_g_9);
        t = geq_0_0(t);
        t = k_8;
        t = w_82(t);
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
        t = k_8;
      }
  }
  return(t);
}
static ATerm e_6 (ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm u_24, ATerm t_24, ATerm t)
{
  t = n_75(t);
  {
    static ATerm w_0 (ATerm t)
    {
      ATerm q_8 = NULL;
      q_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_24, q_8);
      t = m_75(t);
      return(t);
    }
    t = fetch_1_0(w_0, t);
  }
  t = t_24;
  return(t);
}
static ATerm f_6 (ATerm j_75 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  static ATerm q_9 (ATerm t)
  {
    ATerm h_9 = NULL,i_9 = NULL,n_9 = NULL;
    h_9 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_9 = ATgetFirst((ATermList) t);
            n_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_17 = t;
          int h_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_9;
              {
                static ATerm y_0 (ATerm t)
                {
                  t = p_24;
                  return(t);
                }
                t = e_6(j_75, y_0, i_9, n_9, t);
              }
              t = q_9(t);
              LocalPopChoice(h_17);
            }
          else
            {
              t = g_17;
              {
                ATerm g_3 = NULL,o_3 = NULL,b_1 = NULL;
                t = SSLgetAnnotations(h_9);
                g_3 = t;
                t = n_9;
                t = q_9(t);
                o_3 = t;
                t = (ATerm) ATinsert(CheckATermList(o_3), i_9);
                b_1 = t;
                t = SSLsetAnnotations(b_1, g_3);
              }
            }
        }
      }
    return(t);
  }
  t = q_24;
  t = q_9(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm n_10 = NULL;
  if(match_cons(t, sym__2))
    {
      n_10 = ATgetArgument(t, 0);
      if((n_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_6 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm z_9 = NULL,c_10 = NULL,d_10 = NULL;
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_17 = ATgetArgument(t, 0);
            ATerm l_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
        t = t_6(g_37, h_37, t);
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        t = (ATerm) ATempty;
      }
  }
  d_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_10, i_37);
  t = f_6(a_1, d_10, i_37, t);
  c_10 = t;
  t = SSL_table_put(g_37, h_37, c_10);
  t = z_9;
  return(t);
}
static ATerm h_6 (ATerm y_82 (ATerm), ATerm q_37, ATerm p_37, ATerm t)
{
  static ATerm c_1 (ATerm t)
  {
    ATerm o_10 = NULL,p_10 = NULL;
    if(match_cons(t, sym__2))
      {
        o_10 = ATgetArgument(t, 0);
        p_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, q_37, o_10, p_10);
    t = y_82(t);
    return(t);
  }
  t = p_37;
  t = map_1_0(c_1, t);
  return(t);
}
static ATerm l_6 (ATerm r_39, ATerm s_39, ATerm t)
{
  t = SSL_access(r_39, s_39);
  return(t);
}
static ATerm x_11 (ATerm i_11, ATerm t)
{
  t = SSL_fclose(i_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_11 = NULL,q_11 = NULL;
  q_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_11 = ATgetArgument(t, 0);
      {
        ATerm m_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_11);
            LocalPopChoice(q_17);
          }
        else
          {
            t = m_17;
            t = x_11(q_11, t);
          }
      }
    }
  else
    {
      t = x_11(q_11, t);
    }
  return(t);
}
static ATerm i_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm j_6 (ATerm a_40, ATerm b_40, ATerm t)
{
  ATerm y_11 = NULL;
  t = SSL_fopen(a_40, b_40);
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_11);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_11 = NULL;
  t = SSL_stdin_stream();
  z_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_12 = NULL;
  t = SSL_stdout_stream();
  a_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_12 = NULL;
  t = SSL_stderr_stream();
  b_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_12);
  return(t);
}
static ATerm y_13 (ATerm h_12, ATerm t)
{
  ATerm i_12 = NULL;
  t = SSL_explode_term(h_12);
  if(match_cons(t, sym__2))
    {
      ATerm r_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_17 = ATgetArgument(t, 1);
        if(((ATgetType(v_17) == AT_LIST) && !(ATisEmpty(v_17))))
          {
            i_12 = ATgetFirst((ATermList) v_17);
            {
              ATerm w_17 = (ATerm) ATgetNext((ATermList) v_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_12;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_12;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_12;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_12;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_13 (ATerm m_12, ATerm n_12, ATerm o_12, ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,x_12 = NULL,g_1 = NULL;
  t = SSLgetAnnotations(o_12);
  r_12 = t;
  t = m_12;
  if(match_cons(t, sym_Path_1))
    {
      x_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_12, n_12);
  g_1 = t;
  t = SSLsetAnnotations(g_1, r_12);
  if(match_cons(t, sym__2))
    {
      p_12 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(p_12, q_12, t);
  return(t);
}
static ATerm a_14 (ATerm z_12, ATerm d_13, ATerm e_13, ATerm t)
{
  ATerm f_13 = NULL,j_13 = NULL,m_13 = NULL,q_13 = NULL,j_1 = NULL;
  t = SSLgetAnnotations(e_13);
  m_13 = t;
  t = SSL_is_string(z_12);
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_13, d_13);
  j_1 = t;
  t = SSLsetAnnotations(j_1, m_13);
  if(match_cons(t, sym__2))
    {
      f_13 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(f_13, j_13, t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  u_13 = t;
  if(match_cons(t, sym__2))
    {
      v_13 = ATgetArgument(t, 0);
      w_13 = ATgetArgument(t, 1);
      {
        ATerm y_17 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_13(u_13, t);
            LocalPopChoice(b_18);
          }
        else
          {
            t = y_17;
            {
              ATerm i_18 = t;
              int j_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_13(v_13, w_13, u_13, t);
                  LocalPopChoice(j_18);
                }
              else
                {
                  t = i_18;
                  t = a_14(v_13, w_13, u_13, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_13(u_13, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_14 = NULL,k_14 = NULL,m_14 = NULL,t_14 = NULL;
  t_14 = t;
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_14, term_m_18);
        t = k_6(t);
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        {
          ATerm u_4 = NULL,v_4 = NULL;
          t = term_o_18;
          v_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_18, t_14);
          t = s_6(v_4, t_14, t);
          u_4 = t;
          t = SSL_perror(u_4);
          _fail(t);
        }
      }
  }
  k_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(m_14, t);
  e_14 = t;
  t = k_14;
  t = fclose_0_0(t);
  t = e_14;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_p_18;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_r_18;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm s_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_14 = NULL,z_14 = NULL;
      y_14 = t;
      t = (ATerm) ATinsert(ATempty, term_w_18);
      z_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_14, (ATerm) ATinsert(ATempty, term_w_18));
      t = l_6(y_14, z_14, t);
      LocalPopChoice(v_18);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = s_18;
      {
        ATerm z_18 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_19 = t;
            if((PushChoice() == 0))
              {
                ATerm a_15 = NULL,b_15 = NULL;
                a_15 = t;
                t = (ATerm) ATinsert(ATempty, term_a_8);
                b_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_15, (ATerm) ATinsert(ATempty, term_a_8));
                t = l_6(a_15, b_15, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = c_19;
              }
            t = debug_1_0(d_1, t);
            LocalPopChoice(b_19);
          }
        else
          {
            t = z_18;
            t = debug_1_0(e_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = debug_1_0(h_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_d_19;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_e_19;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  z_15 = t;
  t = term_r_16;
  a_16 = t;
  t = (ATerm) ATinsert(ATempty, term_h_19);
  b_16 = t;
  t = SSL_printnl(a_16, b_16);
  t = z_15;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  if(match_cons(t, sym__3))
    {
      c_16 = ATgetArgument(t, 0);
      d_16 = ATgetArgument(t, 1);
      e_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_6(c_16, d_16, e_16, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL;
  h_16 = t;
  t = term_r_16;
  i_16 = t;
  t = (ATerm) ATinsert(ATempty, term_i_19);
  j_16 = t;
  t = SSL_printnl(i_16, j_16);
  t = h_16;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm o_16 = NULL,t_16 = NULL,u_16 = NULL;
  o_16 = t;
  t = term_r_16;
  t_16 = t;
  t = (ATerm) ATinsert(ATempty, term_h_19);
  u_16 = t;
  t = SSL_printnl(t_16, u_16);
  t = o_16;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,r_15 = NULL,s_15 = NULL;
  d_15 = t;
  t = if_verbose5_1_0(f_1, t);
  {
    ATerm j_19 = t;
    if((PushChoice() == 0))
      {
        ATerm t_15 = NULL,x_15 = NULL;
        t = term_k_19;
        t_15 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, d_15);
        x_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATmakeAppl(sym_Imported_1, d_15));
        t = t_6(t_15, x_15, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_19;
      }
  }
  j_15 = t;
  t = term_k_19;
  o_15 = t;
  t = term_l_19;
  r_15 = t;
  t = (ATerm) ATinsert(ATempty, d_15);
  s_15 = t;
  t = SSL_table_put(o_15, r_15, s_15);
  t = j_15;
  t = if_verbose4_1_0(i_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(l_1, t);
  e_15 = t;
  t = term_k_19;
  n_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_19, e_15);
  t = h_6(m_1, n_15, e_15, t);
  t = if_verbose6_1_0(q_1, t);
  t = term_k_19;
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, d_15);
  l_15 = t;
  t = (ATerm) ATempty;
  m_15 = t;
  t = SSL_table_put(k_15, l_15, m_15);
  t = (ATerm) ATmakeAppl(sym__3, term_k_19, (ATerm)ATmakeAppl(sym_Imported_1, d_15), (ATerm) ATempty);
  t = if_verbose4_1_0(r_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm e_79 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,s_17 = NULL,u_17 = NULL;
  p_17 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_17;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_17 = ATgetFirst((ATermList) t);
          u_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm n_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_5 = NULL,l_5 = NULL,p_5 = NULL,v_1 = NULL;
            t = SSLgetAnnotations(p_17);
            i_5 = t;
            t = s_17;
            t = e_79(t);
            l_5 = t;
            t = u_17;
            t = filter_1_0(e_79, t);
            p_5 = t;
            t = (ATerm) ATinsert(CheckATermList(p_5), l_5);
            v_1 = t;
            t = SSLsetAnnotations(v_1, i_5);
            LocalPopChoice(o_19);
          }
        else
          {
            t = n_19;
            t = u_17;
            t = filter_1_0(e_79, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm t)
{
  static ATerm z_17 (ATerm t)
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_69(t);
        t = z_17(t);
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = k_69(t);
      }
    return(t);
  }
  t = z_17(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm r_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_19;
      t = get_config_0_0(t);
      LocalPopChoice(s_19);
    }
  else
    {
      t = r_19;
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_18 = NULL;
            t = term_w_19;
            a_18 = t;
            t = SSL_getenv(a_18);
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_x_19;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL;
  t = term_k_19;
  g_18 = t;
  t = term_a_20;
  h_18 = t;
  t = term_c_20;
  t = t_6(g_18, h_18, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm d_20 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_20;
      }
  }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_n_20;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm c_18 = NULL;
  t = if_verbose5_1_0(w_1, t);
  c_18 = t;
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_18 = NULL,e_18 = NULL;
        t = term_k_19;
        d_18 = t;
        t = term_l_19;
        e_18 = t;
        t = term_r_20;
        t = t_6(d_18, e_18, t);
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        {
          ATerm f_18 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          f_18 = t;
          t = repeat_2_0(y_1, _id, t);
          t = f_18;
        }
      }
  }
  t = c_18;
  t = if_verbose5_1_0(a_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_s_20;
  return(t);
}
static ATerm z_19 (ATerm n_18, ATerm t)
{
  ATerm q_18 = NULL,t_18 = NULL,u_18 = NULL;
  t = term_k_19;
  t_18 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, n_18);
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATmakeAppl(sym_Tool_1, n_18));
  t = t_6(t_18, u_18, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_20 = ATgetFirst((ATermList) t);
      if(match_cons(t_20, sym__2))
        {
          ATerm x_20 = ATgetArgument(t_20, 0);
          q_18 = ATgetArgument(t_20, 1);
        }
      else
        _fail(t);
      {
        ATerm w_20 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_18;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_s_20;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_k_19;
  t = table_getlist_0_0(t);
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm a_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_18 = NULL,y_18 = NULL,a_19 = NULL;
      t = if_verbose5_1_0(c_2, t);
      t = xtc_load_0_0(t);
      a_19 = t;
      if(match_cons(t, sym__2))
        {
          x_18 = ATgetArgument(t, 0);
          y_18 = ATgetArgument(t, 1);
          {
            ATerm d_21 = t;
            int f_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_19 = NULL,g_19 = NULL,m_19 = NULL;
                t = term_k_19;
                g_19 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, x_18);
                m_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATmakeAppl(sym_Tool_1, x_18));
                t = t_6(g_19, m_19, t);
                {
                  static ATerm h_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((y_18 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((f_19 != NULL) && (f_19 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          f_19 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(h_2, t);
                }
                t = not_null(f_19);
                LocalPopChoice(f_21);
              }
            else
              {
                t = d_21;
                t = z_19(a_19, t);
              }
          }
        }
      else
        {
          t = z_19(a_19, t);
        }
      t = if_verbose5_1_0(i_2, t);
      LocalPopChoice(c_21);
    }
  else
    {
      t = a_21;
      {
        ATerm y_19 = NULL,q_6 = NULL,r_6 = NULL;
        y_19 = t;
        t = term_r_16;
        q_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_21), y_19), term_g_21);
        r_6 = t;
        t = SSL_printnl(q_6, r_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_21), y_19), term_g_21);
        t = if_verbose5_1_0(k_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm t_85 (ATerm), ATerm t)
{
  ATerm b_20 = NULL,e_20 = NULL;
  e_20 = t;
  t = t_85(t);
  t = xtc_find_0_0(t);
  b_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_20, e_20);
  {
    static ATerm n_2 (ATerm t)
    {
      ATerm f_20 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, b_20, e_20);
      t = b_6(b_20, e_20, t);
      t = term_k_21;
      f_20 = t;
      t = SSL_exit(f_20);
      return(t);
    }
    t = fork_and_wait_1_0(n_2, t);
  }
  t = e_20;
  return(t);
}
static ATerm m_6 (ATerm i_81 (ATerm), ATerm w_34, ATerm u_34, ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
  j_20 = t;
  t = i_81(t);
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_20, w_34, u_34);
  t = u_6(g_20, w_34, u_34, t);
  {
    ATerm l_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_20 = NULL;
        t = term_p_21;
        m_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_20, term_p_21);
        t = t_6(g_20, m_20, t);
        LocalPopChoice(n_21);
      }
    else
      {
        t = l_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_20 = ATgetFirst((ATermList) t);
      i_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_p_21;
  k_20 = t;
  t = (ATerm) ATinsert(CheckATermList(i_20), (ATerm) ATinsert(CheckATermList(h_20), w_34));
  l_20 = t;
  t = SSL_table_put(g_20, k_20, l_20);
  t = j_20;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm o_20 = NULL;
  ATerm q_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_20 = NULL,f_7 = NULL;
      u_20 = t;
      t = term_u_21;
      f_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_20, term_u_21);
      t = s_6(u_20, f_7, t);
      o_20 = t;
      t = SSL_mkstemp(o_20);
      LocalPopChoice(s_21);
    }
  else
    {
      t = q_21;
      {
        ATerm v_20 = NULL;
        t = term_v_21;
        v_20 = t;
        t = SSL_perror(v_20);
        _fail(t);
      }
    }
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm y_20 = NULL,b_21 = NULL,e_21 = NULL,h_21 = NULL,i_21 = NULL;
  t = P__tmpdir_0_0(t);
  h_21 = t;
  t = term_x_21;
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_21, term_x_21);
  t = s_6(h_21, i_21, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      b_21 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_y_21;
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_21, term_y_21);
  t = m_6(o_2, b_21, e_21, t);
  t = SSL_close(y_20);
  t = b_21;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm m_21 = NULL,o_21 = NULL;
  m_21 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm r_21 = NULL,t_21 = NULL;
      t = m_21;
      t = xtc_new_file_0_0(t);
      r_21 = t;
      t = r_0(t);
      t_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_21, (ATerm) ATinsert(ATinsert(ATempty, r_21), term_a_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_21);
    }
  else
    {
      ATerm z_21 = NULL,b_22 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_21;
      t = xtc_new_file_0_0(t);
      z_21 = t;
      t = r_0(t);
      b_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_21), term_a_22), o_21), term_c_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_21);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_d_22;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm q_22 = NULL,v_22 = NULL;
  t = term_y_21;
  t = pass_width_0_0(t);
  q_22 = t;
  t = term_y_21;
  t = pass_verbose_0_0(t);
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_22, v_22);
  t = conc_0_0(t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_d_22;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL;
  t = term_y_21;
  t = pass_width_0_0(t);
  x_22 = t;
  t = term_y_21;
  t = pass_verbose_0_0(t);
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_22, y_22);
  t = conc_0_0(t);
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_22 = NULL,p_22 = NULL;
      p_22 = t;
      if(match_cons(t, sym_FILE_1))
        {
          o_22 = ATgetArgument(t, 0);
          {
            ATerm p_7 = NULL,c_4 = NULL;
            t = SSLgetAnnotations(p_22);
            p_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, o_22);
            c_4 = t;
            t = SSLsetAnnotations(c_4, p_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_22;
        }
      LocalPopChoice(f_22);
      t = xtc_transform_file_2_0(s_2, v_2, t);
    }
  else
    {
      t = e_22;
      t = xtc_transform_term_2_0(w_2, y_2, t);
    }
  return(t);
}
static ATerm n_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL;
  x_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL;
        t = x_23;
        t = o_0(t);
        c_8 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = c_8;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = c_8;
          }
        t = (ATerm) ATmakeAppl(sym__2, y_23, c_8);
        t = n_6(y_23, c_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_23);
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        {
          ATerm i_22 = t;
          int j_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_8 = NULL;
              t = x_23;
              t = o_0(t);
              r_8 = t;
              {
                ATerm k_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm s_8 = NULL;
                    s_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = s_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = s_8;
                          }
                        else
                          {
                            t = s_8;
                            if((y_23 != t))
                              {
                                _fail(t);
                              }
                            t = s_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_22;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, y_23, r_8);
              t = n_6(y_23, r_8, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_23);
              LocalPopChoice(j_22);
            }
          else
            {
              t = i_22;
              t = x_23;
              t = o_0(t);
              if((y_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_23);
            }
        }
      }
  }
  return(t);
}
static ATerm o_6 (ATerm o_36, ATerm p_36, ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  d_24 = t;
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
        t = t_6(o_36, p_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_22 = ATgetFirst((ATermList) t);
            c_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_22);
        t = SSL_table_put(o_36, p_36, c_24);
        t = (ATerm) ATmakeAppl(sym__3, o_36, p_36, c_24);
      }
    else
      {
        t = l_22;
        t = SSL_table_remove(o_36, p_36);
        t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
      }
  }
  t = d_24;
  return(t);
}
ATerm end_scope_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  j_24 = t;
  t = f_81(t);
  i_24 = t;
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_24 = NULL;
        t = term_p_21;
        l_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_24, term_p_21);
        t = t_6(i_24, l_24, t);
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_24 = ATgetFirst((ATermList) t);
      g_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_p_21;
  k_24 = t;
  t = SSL_table_put(i_24, k_24, g_24);
  t = h_24;
  {
    static ATerm e_3 (ATerm t)
    {
      ATerm m_24 = NULL;
      m_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_24, m_24);
      t = o_6(i_24, m_24, t);
      return(t);
    }
    t = map_1_0(e_3, t);
  }
  t = j_24;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm t)
{
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_82(t);
      t = g_82(t);
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      t = g_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm o_24 = NULL,r_24 = NULL,s_24 = NULL,w_24 = NULL,y_24 = NULL;
  r_24 = t;
  t = e_81(t);
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_24, term_p_21);
  {
    ATerm w_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_23 = ATgetArgument(t, 0);
            ATerm b_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_p_21;
        d_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_24, term_p_21);
        t = t_6(o_24, d_25, t);
        LocalPopChoice(z_22);
      }
    else
      {
        t = w_22;
        t = (ATerm) ATempty;
      }
  }
  s_24 = t;
  t = term_p_21;
  w_24 = t;
  t = (ATerm) ATinsert(CheckATermList(s_24), (ATerm) ATempty);
  y_24 = t;
  t = SSL_table_put(o_24, w_24, y_24);
  t = r_24;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_w_21;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(o_25);
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        t = o_25;
      }
  }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm g_25 = NULL;
  static ATerm h_3 (ATerm t)
  {
    ATerm h_25 = NULL;
    h_25 = t;
    {
      ATerm e_23 = t;
      int f_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_25 = NULL,j_25 = NULL;
          t = term_w_21;
          i_25 = t;
          t = term_p_21;
          j_25 = t;
          t = term_g_23;
          t = t_6(i_25, j_25, t);
          LocalPopChoice(f_23);
        }
      else
        {
          t = e_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((g_25 != NULL) && (g_25 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          g_25 = ATgetFirst((ATermList) t);
        {
          ATerm h_23 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = g_25;
    t = map_1_0(i_3, t);
    t = h_25;
    t = end_scope_1_0(j_3, t);
    return(t);
  }
  t = begin_scope_1_0(f_3, t);
  t = restore_always_2_0(f_85, h_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_22;
      t = get_config_0_0(t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      t = term_k_23;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm g_85 (ATerm), ATerm t)
{
  static ATerm l_3 (ATerm t)
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_25 = NULL;
        t = term_c_22;
        t = get_config_0_0(t);
        s_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, s_25);
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = term_z_7;
      }
    t = g_85(t);
    t = copy_to_1_0(r_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(l_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,w_25 = NULL,x_25 = NULL,b_26 = NULL;
  t_25 = t;
  t = term_y_21;
  t = whoami_0_0(t);
  u_25 = t;
  t = term_r_16;
  x_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_23), u_25), term_n_23);
  b_26 = t;
  t = SSL_printnl(x_25, b_26);
  t = term_u_7;
  w_25 = t;
  t = SSL_exit(w_25);
  t = t_25;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_26 = NULL,s_26 = NULL,t_26 = NULL;
      t = term_y_21;
      t = n_0(t);
      q_26 = t;
      t = term_p_23;
      s_26 = t;
      t = term_q_23;
      t_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_23, term_q_23, q_26);
      t = u_6(s_26, t_26, q_26, t);
      _fail(t);
    }
  else
    {
      ATerm y_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_26 = ATgetFirst((ATermList) t);
          n_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_26 = ATgetFirst((ATermList) t);
          p_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_26;
      t = k_0(t);
      t = o_26;
      t = l_0(t);
      y_26 = t;
      t = (ATerm) ATinsert(CheckATermList(p_26), y_26);
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm c_27 = NULL;
  c_27 = t;
  if(match_string(t, "-k"))
    {
      t = c_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_27;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
  d_27 = t;
  t = SSL_string_to_int(d_27);
  e_27 = t;
  t = term_r_23;
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_23, e_27);
  t = w_6(f_27, e_27, t);
  t = d_27;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_3, w_3, x_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm h_27 = NULL;
  h_27 = t;
  if(match_string(t, "-S"))
    {
      t = h_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_27;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  t = term_q_7;
  j_27 = t;
  t = term_t_23;
  k_27 = t;
  t = term_u_23;
  t = w_6(j_27, k_27, t);
  t = term_v_23;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_w_23;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  l_27 = t;
  t = SSL_string_to_int(l_27);
  m_27 = t;
  t = term_q_7;
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_7, m_27);
  t = w_6(n_27, m_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_27);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_z_23;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL;
  t = term_a_24;
  o_27 = t;
  t = term_y_21;
  p_27 = t;
  t = term_b_24;
  t = w_6(o_27, p_27, t);
  t = term_e_24;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_3, z_3, a_4, t);
      LocalPopChoice(v_24);
    }
  else
    {
      t = n_24;
      {
        ATerm x_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_4, d_4, e_4, t);
            LocalPopChoice(z_24);
          }
        else
          {
            t = x_24;
            t = Option_3_0(g_4, i_4, j_4, t);
          }
      }
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm r_27 = NULL;
  r_27 = t;
  if(match_string(t, "-o"))
    {
      t = r_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_27;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL;
  s_27 = t;
  t = term_a_22;
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_22, s_27);
  t = w_6(t_27, s_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_27);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, o_4, t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm z_27 = NULL;
  z_27 = t;
  if(match_string(t, "-i"))
    {
      t = z_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_27;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL;
  a_28 = t;
  t = term_c_22;
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_22, a_28);
  t = w_6(b_28, a_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_28);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_b_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_4, q_4, s_4, t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  if(match_string(t, "-w"))
    {
      t = g_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = g_28;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm j_28 = NULL,m_28 = NULL;
  j_28 = t;
  t = term_y_7;
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, j_28);
  t = w_6(m_28, j_28, t);
  t = j_28;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      {
        ATerm k_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(l_25);
          }
        else
          {
            t = k_25;
            {
              ATerm m_25 = t;
              int n_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(n_25);
                }
              else
                {
                  t = m_25;
                  {
                    ATerm p_25 = t;
                    int q_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(q_25);
                      }
                    else
                      {
                        t = p_25;
                        t = ArgOption_3_0(w_4, z_4, c_5, t);
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
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_21;
  t = whoami_0_0(t);
  p_28 = t;
  t = term_r_16;
  r_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_25), p_28);
  s_28 = t;
  t = SSL_printnl(r_28, s_28);
  t = term_u_7;
  q_28 = t;
  t = SSL_exit(q_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_25;
  t = get_config_0_0(t);
  return(t);
}
static ATerm p_6 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_33, j_33);
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      t = SSL_addr(i_33, j_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,b_29 = NULL;
  w_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_28;
      t = a_78(t);
    }
  else
    {
      ATerm h_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_28 = ATgetFirst((ATermList) t);
          b_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_29;
      t = foldr_2_0(a_78, b_78, t);
      h_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_28, h_29);
      t = b_78(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_t_23;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm m_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(m_9, r_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_29 = NULL,f_9 = NULL,j_9 = NULL;
  t = times_0_0(t);
  j_9 = t;
  t = SSL_explode_term(j_9);
  if(match_cons(t, sym__2))
    {
      ATerm a_26 = ATgetArgument(t, 0);
      f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9;
  t = foldr_2_0(d_5, h_5, t);
  k_29 = t;
  t = SSL_TicksToSeconds(k_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  v_29 = t;
  if(match_cons(t, sym__2))
    {
      w_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_29;
        if((w_29 != t))
          {
            _fail(t);
          }
        t = v_29;
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        t = (ATerm) ATmakeAppl(sym__2, w_29, x_29);
        {
          ATerm e_26 = t;
          int f_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_29, x_29);
              LocalPopChoice(f_26);
            }
          else
            {
              t = e_26;
              t = SSL_gtr(w_29, x_29);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_29, x_29);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_82 (ATerm), ATerm t)
{
  ATerm b_30 = NULL;
  b_30 = t;
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_30 = NULL;
        t = term_q_7;
        t = get_config_0_0(t);
        d_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_30, term_u_7);
        t = geq_0_0(t);
        t = b_30;
        t = r_82(t);
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = b_30;
      }
  }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,i_30 = NULL,j_30 = NULL;
  t = run_time_0_0(t);
  f_30 = t;
  t = term_y_21;
  t = whoami_0_0(t);
  g_30 = t;
  t = term_r_16;
  i_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_26), f_30), term_i_8), g_30);
  j_30 = t;
  t = SSL_printnl(i_30, j_30);
  t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_26), f_30), term_i_8), g_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_23;
  k_30 = t;
  t = SSL_exit(k_30);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  t_30 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_30;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_30 = ATgetArgument(t, 0);
          {
            ATerm k_10 = NULL,f_4 = NULL;
            t = SSLgetAnnotations(t_30);
            k_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_30);
            f_4 = t;
            t = SSLsetAnnotations(f_4, k_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_30;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_26;
      t = get_config_0_0(t);
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      t = fetch_1_0(k_5, t);
    }
  t = v_86(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_30 = ATgetFirst((ATermList) t);
      x_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_31 = NULL,c_31 = NULL;
        static ATerm n_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_31)), not_null(c_31));
          return(t);
        }
        t = x_30;
        t = i_0(t);
        if(((b_31 != NULL) && (b_31 != t)))
          _fail(t);
        else
          b_31 = t;
        t = w_30;
        t = g_0(t);
        if(((c_31 != NULL) && (c_31 != t)))
          _fail(t);
        else
          c_31 = t;
        t = x_30;
        t = reverse_acc_2_0(g_0, n_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_21;
      t = i_0(t);
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,h_4 = NULL;
  i_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_31);
  g_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_31);
  h_4 = t;
  t = SSLsetAnnotations(h_4, g_31);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm k_31 = NULL;
  k_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_31), term_r_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL;
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_25;
      t = get_config_0_0(t);
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      t = fetch_1_0(q_5, t);
    }
  t = term_w_26;
  t = echo_0_0(t);
  t = term_p_23;
  e_31 = t;
  t = term_q_23;
  f_31 = t;
  t = term_x_26;
  t = t_6(e_31, f_31, t);
  t = reverse_acc_2_0(_id, r_5, t);
  t = map_1_0(s_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm o_71 (ATerm), ATerm t)
{
  static ATerm j_32 (ATerm t)
  {
    ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
    g_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_32 = ATgetFirst((ATermList) t);
        i_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_26 = t;
      int a_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_10 = NULL,y_10 = NULL,k_4 = NULL;
          t = SSLgetAnnotations(g_32);
          v_10 = t;
          t = h_32;
          t = o_71(t);
          y_10 = t;
          t = (ATerm) ATinsert(CheckATermList(i_32), y_10);
          k_4 = t;
          t = SSLsetAnnotations(k_4, v_10);
          LocalPopChoice(a_27);
        }
      else
        {
          t = z_26;
          {
            ATerm o_11 = NULL,s_11 = NULL,n_4 = NULL;
            t = SSLgetAnnotations(g_32);
            o_11 = t;
            t = i_32;
            t = j_32(t);
            s_11 = t;
            t = (ATerm) ATinsert(CheckATermList(s_11), h_32);
            n_4 = t;
            t = SSLsetAnnotations(n_4, o_11);
          }
        }
    }
    return(t);
  }
  t = j_32(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  {
    ATerm b_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_27 = ATgetFirst((ATermList) t);
                ATerm q_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_32;
          }
        LocalPopChoice(g_27);
      }
    else
      {
        t = b_27;
        t = (ATerm) ATinsert(ATempty, n_32);
      }
  }
  o_32 = t;
  t = term_k_23;
  p_32 = t;
  t = SSL_printnl(p_32, o_32);
  t = n_32;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_25;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm s_6 (ATerm d_32, ATerm e_32, ATerm t)
{
  t = SSL_strcat(d_32, e_32);
  return(t);
}
ATerm debug_1_0 (ATerm m_66 (ATerm), ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
  t_32 = t;
  t = m_66(t);
  u_32 = t;
  t = term_r_16;
  v_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_32), u_32);
  w_32 = t;
  t = SSL_printnl(v_32, w_32);
  t = t_32;
  return(t);
}
ATerm map_1_0 (ATerm e_71 (ATerm), ATerm t)
{
  static ATerm n_33 (ATerm t)
  {
    ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
    k_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_33;
      }
    else
      {
        ATerm g_12 = NULL,u_12 = NULL,v_12 = NULL,r_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_33 = ATgetFirst((ATermList) t);
            m_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_33);
        g_12 = t;
        t = l_33;
        t = e_71(t);
        u_12 = t;
        t = m_33;
        t = n_33(t);
        v_12 = t;
        t = (ATerm) ATinsert(CheckATermList(v_12), u_12);
        r_4 = t;
        t = SSLsetAnnotations(r_4, g_12);
      }
    return(t);
  }
  t = n_33(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_w_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_33 = NULL;
      x_33 = t;
      t = SSL_is_string(x_33);
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
        ATerm c_28 = t;
        int d_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(t_5, t);
            LocalPopChoice(d_28);
          }
        else
          {
            t = c_28;
            {
              ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL;
              d_34 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_34 = ATgetArgument(t, 0);
                  t = e_34;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_34 = ATgetArgument(t, 0);
                      t = e_34;
                      {
                        ATerm e_28 = t;
                        int f_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(f_28);
                          }
                        else
                          {
                            t = e_28;
                            t = debug_1_0(u_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_34 = NULL,k_34 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_34 = ATgetArgument(t, 0);
                          f_34 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_34;
                      t = eval_config_0_0(t);
                      j_34 = t;
                      t = f_34;
                      t = eval_config_0_0(t);
                      k_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_34, k_34);
                      t = s_6(j_34, k_34, t);
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
  ATerm z_34 = NULL,a_35 = NULL;
  z_34 = t;
  t = term_h_28;
  a_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_28, z_34);
  t = t_6(a_35, z_34, t);
  {
    ATerm i_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_35 = NULL,c_35 = NULL;
        t = eval_config_0_0(t);
        b_35 = t;
        t = term_h_28;
        c_35 = t;
        t = SSL_table_put(c_35, z_34, b_35);
        t = b_35;
        LocalPopChoice(k_28);
      }
    else
      {
        t = i_28;
      }
  }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL;
  t = term_l_28;
  f_35 = t;
  t = term_y_21;
  g_35 = t;
  t = term_n_28;
  t = w_6(f_35, g_35, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_o_28;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL;
  t = term_l_28;
  j_35 = t;
  t = term_y_21;
  k_35 = t;
  t = term_n_28;
  t = w_6(j_35, k_35, t);
  t = term_t_28;
  h_35 = t;
  t = term_y_21;
  i_35 = t;
  t = term_u_28;
  t = w_6(h_35, i_35, t);
  t = term_v_28;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_y_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_5, w_5, x_5, t);
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
      t = Option_3_0(c_6, d_6, x_6, t);
    }
  return(t);
}
static ATerm w_6 (ATerm j_38, ATerm k_38, ATerm t)
{
  ATerm l_35 = NULL;
  t = term_h_28;
  l_35 = t;
  t = SSL_table_put(l_35, j_38, k_38);
  t = (ATerm) ATmakeAppl(sym__3, term_h_28, j_38, k_38);
  return(t);
}
static ATerm t_6 (ATerm a_38, ATerm b_38, ATerm t)
{
  t = SSL_table_get(a_38, b_38);
  return(t);
}
static ATerm u_6 (ATerm j_36, ATerm k_36, ATerm i_36, ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_29 = ATgetArgument(t, 0);
            ATerm f_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
        t = t_6(j_36, k_36, t);
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        t = (ATerm) ATempty;
      }
  }
  o_35 = t;
  t = (ATerm) ATinsert(CheckATermList(o_35), i_36);
  p_35 = t;
  t = SSL_table_put(j_36, k_36, p_35);
  t = n_35;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
      t = term_y_21;
      t = e_0(t);
      x_35 = t;
      t = term_p_23;
      y_35 = t;
      t = term_q_23;
      z_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_23, term_q_23, x_35);
      t = u_6(y_35, z_35, x_35, t);
      _fail(t);
    }
  else
    {
      ATerm d_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_35 = ATgetFirst((ATermList) t);
          w_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_35;
      t = c_0(t);
      t = term_y_21;
      t = d_0(t);
      d_36 = t;
      t = (ATerm) ATinsert(CheckATermList(w_35), d_36);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_58 (ATerm), ATerm f_58 (ATerm), ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,t_4 = NULL;
  t_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_36 = ATgetFirst((ATermList) t);
      q_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_36);
  l_36 = t;
  t = m_36;
  t = e_58(t);
  r_36 = t;
  t = q_36;
  t = f_58(t);
  s_36 = t;
  t = (ATerm) ATinsert(CheckATermList(s_36), r_36);
  t_4 = t;
  t = SSLsetAnnotations(t_4, l_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_88 (ATerm), ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,d_37 = NULL,e_37 = NULL,e_5 = NULL;
  y_36 = t;
  {
    ATerm g_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_29;
        t = t_88(t);
        LocalPopChoice(i_29);
      }
    else
      {
        t = g_29;
      }
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
  t = term_v_25;
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_25, a_37);
  t = w_6(e_37, a_37, t);
  t = b_37;
  {
    static ATerm x_37 (ATerm t)
    {
      ATerm l_29 = t;
      int m_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_29 = t;
          int o_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_37 = NULL;
              m_37 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_37;
              LocalPopChoice(o_29);
            }
          else
            {
              t = n_29;
              t = t_88(t);
              t = Cons_2_0(_id, x_37, t);
            }
          LocalPopChoice(m_29);
        }
      else
        {
          t = l_29;
          {
            ATerm t_37 = NULL,u_37 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_37 = ATgetFirst((ATermList) t);
                u_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_37), (ATerm) ATmakeAppl(sym_Undefined_1, t_37));
          }
        }
      return(t);
    }
    t = x_37(t);
  }
  d_37 = t;
  t = (ATerm) ATinsert(CheckATermList(d_37), (ATerm) ATmakeAppl(sym_Program_1, a_37));
  e_5 = t;
  t = SSLsetAnnotations(e_5, z_36);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm n_38 = NULL;
  n_38 = t;
  if(match_string(t, "--help"))
    {
      t = n_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_38;
        }
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL;
  t = term_m_26;
  o_38 = t;
  t = term_y_21;
  p_38 = t;
  t = term_p_29;
  t = w_6(o_38, p_38, t);
  t = term_q_29;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_r_29;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_88 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,l_38 = NULL,m_38 = NULL;
  g_38 = t;
  t = term_p_23;
  i_38 = t;
  t = term_q_23;
  l_38 = t;
  t = (ATerm) ATempty;
  m_38 = t;
  t = SSL_table_put(i_38, l_38, m_38);
  t = g_38;
  {
    static ATerm y_6 (ATerm t)
    {
      ATerm s_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_88(t);
          LocalPopChoice(t_29);
        }
      else
        {
          t = s_29;
          {
            ATerm u_29 = t;
            int y_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_6, a_7, b_7, t);
                LocalPopChoice(y_29);
              }
            else
              {
                t = u_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_6, t);
  }
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_39 = NULL;
        b_39 = t;
        {
          ATerm c_30 = t;
          int e_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_14 = NULL;
              t = b_39;
              {
                ATerm h_30 = t;
                int l_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_26;
                    t = get_config_0_0(t);
                    LocalPopChoice(l_30);
                  }
                else
                  {
                    t = h_30;
                    t = fetch_1_0(c_7, t);
                  }
              }
              t = b_39;
              t = default_system_usage_0_0(t);
              t = term_t_23;
              d_14 = t;
              t = SSL_exit(d_14);
              LocalPopChoice(e_30);
            }
          else
            {
              t = c_30;
              {
                ATerm l_14 = NULL;
                t = term_l_28;
                t = get_config_0_0(t);
                t = b_39;
                t = default_system_about_0_0(t);
                t = term_t_23;
                l_14 = t;
                t = SSL_exit(l_14);
              }
            }
        }
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        {
          ATerm m_30 = t;
          int n_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
              static ATerm d_7 (ATerm t)
              {
                ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,o_5 = NULL;
                h_39 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_39 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_39);
                f_39 = t;
                t = g_39;
                if(((e_38 != NULL) && (e_38 != t)))
                  _fail(t);
                else
                  e_38 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_39);
                o_5 = t;
                t = SSLsetAnnotations(o_5, f_39);
                return(t);
              }
              t = fetch_1_0(d_7, t);
              t = term_r_16;
              d_39 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_38)), term_o_30);
              e_39 = t;
              t = SSL_printnl(d_39, e_39);
              t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_38)), term_o_30));
              t = default_system_usage_0_0(t);
              t = term_u_7;
              c_39 = t;
              t = SSL_exit(c_39);
              LocalPopChoice(n_30);
            }
          else
            {
              t = m_30;
            }
        }
      }
  }
  f_38 = t;
  t = term_p_23;
  h_38 = t;
  t = SSL_table_destroy(h_38);
  t = f_38;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
  t = parse_options_1_0(x_86, t);
  n_39 = t;
  t = term_p_30;
  q_39 = t;
  t = SSL_table_create(q_39);
  t = term_p_30;
  o_39 = t;
  t = term_q_30;
  p_39 = t;
  t = SSL_table_put(o_39, p_39, n_39);
  t = n_39;
  t = z_86(t);
  {
    ATerm r_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_86, t);
        LocalPopChoice(u_30);
      }
    else
      {
        t = r_30;
        {
          ATerm v_30 = t;
          int y_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_87(t);
              t = report_success_0_0(t);
              LocalPopChoice(y_30);
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
static ATerm e_7 (ATerm t)
{
  t = xtc_io_1_0(abox2text_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, e_7, t);
  return(t);
}
