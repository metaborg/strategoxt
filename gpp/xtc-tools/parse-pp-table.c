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
Symbol sym_Binary_0;
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
}
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_w_31;
ATerm term_u_31;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_q_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_r_28;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_m_27;
ATerm term_w_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_j_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_x_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_h_24;
ATerm term_b_24;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_j_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_n_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_p_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_h_20;
ATerm term_b_20;
ATerm term_v_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_u_17;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
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
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_h_9;
ATerm term_f_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_k_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_9, term_r_8, term_n_9);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_9, term_t_9, term_u_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_9, term_y_9, term_z_9);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_10, term_e_10, term_f_10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_10, term_k_10, term_n_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_10, term_s_10, term_t_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_x_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_c_11, term_d_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_g_11, term_i_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_l_11, term_m_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_11, term_p_11, term_q_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_u_11, term_y_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_12, term_b_12, term_d_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_i_12, term_j_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_p_12, term_q_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_v_12, term_w_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_a_13, term_b_13);
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
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_p_13, term_q_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_x_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_h_14, term_i_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_l_14, term_m_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_t_14, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_y_14);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_u_15);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym__2, term_d_21, term_v_21);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_d_21, term_e_21);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_k_18);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_w_24);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_24);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym__2, term_v_22, term_o_18);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_f_26, term_g_26);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym__2, term_e_29, term_o_18);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_v_18, term_o_18);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym__2, term_p_27, term_o_18);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_u_31, term_o_18);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table.tbl", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("PP-Table-GrammarId", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm y_5 (ATerm i_33, ATerm j_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm g_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm j_6 (ATerm x_64 (ATerm), ATerm i_164, ATerm v_17, ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm t);
static ATerm k_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm z_69 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm m_63 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm t_83 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm d_70 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_7 (ATerm q_6, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_6 (ATerm n_79 (ATerm), ATerm q_34, ATerm o_34, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm t_80 (ATerm), ATerm t);
static ATerm z_0 (ATerm t);
ATerm pass_v_verbose_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm v_80 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm u_80 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm w_80 (ATerm), ATerm t);
static ATerm a_6 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm b_6 (ATerm r_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm j_1 (ATerm t);
static ATerm c_6 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm t);
static ATerm d_6 (ATerm y_80 (ATerm), ATerm o_36, ATerm n_36, ATerm t);
static ATerm f_6 (ATerm p_38, ATerm q_38, ATerm t);
static ATerm y_13 (ATerm s_13, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_6 (ATerm t_17, ATerm t);
static ATerm h_6 (ATerm y_38, ATerm z_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_16 (ATerm r_14, ATerm t);
static ATerm p_16 (ATerm z_14, ATerm a_15, ATerm b_15, ATerm t);
static ATerm s_16 (ATerm r_15, ATerm s_15, ATerm t_15, ATerm t);
static ATerm i_6 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm j_77 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm a_21 (ATerm a_20, ATerm t);
static ATerm t_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm xtc_sglr_2_0 (ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm t);
static ATerm n_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm o_6 (ATerm m_35, ATerm n_35, ATerm t);
ATerm end_scope_1_0 (ATerm k_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm j_79 (ATerm), ATerm t);
static ATerm k_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm f_83 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm g_83 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm w_6 (ATerm h_37, ATerm i_37, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_6 (ATerm h_35, ATerm i_35, ATerm g_35, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_6 (ATerm c_33, ATerm d_33, ATerm t);
ATerm foldr_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_80 (ATerm), ATerm t);
static ATerm b_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm need_help_1_0 (ATerm v_84 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_69 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm s_6 (ATerm x_31, ATerm y_31, ATerm t);
ATerm debug_1_0 (ATerm v_64 (ATerm), ATerm t);
ATerm map_1_0 (ATerm n_69 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm t_6 (ATerm y_36, ATerm z_36, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_56 (ATerm), ATerm o_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_86 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm parse_options_1_0 (ATerm s_86 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm y_5 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm w_4 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(i_33, j_33);
      LocalPopChoice(h_8);
    }
  else
    {
      t = w_4;
      t = SSL_subtr(i_33, j_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,j_0 = NULL,q_0 = NULL;
  t = term_k_8;
  {
    ATerm n_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(p_8);
      }
    else
      {
        t = n_8;
        t = term_r_8;
      }
  }
  b_0 = t;
  t = term_r_8;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_r_8);
  t = y_5(b_0, q_0, t);
  j_0 = t;
  t = SSL_int_to_string(j_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_k_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_s_8;
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
      t = (ATerm) ATinsert(ATempty, term_t_8);
      d_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_0, (ATerm) ATinsert(ATempty, term_t_8));
      t = f_6(w_0, d_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm g_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm e_1 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_1);
  return(t);
}
static ATerm j_6 (ATerm x_64 (ATerm), ATerm i_164, ATerm v_17, ATerm t)
{
  ATerm f_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_164, term_u_8);
  t = i_6(t);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_1, v_17);
  t = x_64(t);
  t = fclose_0_0(t);
  t = v_17;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm i_1 = NULL,k_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_8 = ATgetArgument(t, 0);
      if(match_cons(z_8, sym_Stream_1))
        {
          i_1 = ATgetArgument(z_8, 0);
        }
      else
        _fail(t);
      k_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(i_1, k_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL;
  h_1 = t;
  t = xtc_new_file_0_0(t);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_1, h_1);
  t = j_6(f_0, g_1, h_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_1);
  t = xtc_transform_file_2_0(s_82, t_82, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm k_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_9), s_0), term_b_9);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_2), term_h_9), n_1), term_f_9), v_2);
      o_1 = t;
      t = SSL_concat_strings(o_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm z_69 (ATerm), ATerm t)
{
  ATerm c_3 = NULL;
  static ATerm h_0 (ATerm t)
  {
    t = z_69(t);
    if(((c_3 != NULL) && (c_3 != t)))
      _fail(t);
    else
      c_3 = t;
    return(t);
  }
  t = fetch_1_0(h_0, t);
  t = not_null(c_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm d_3 = NULL;
  d_3 = t;
  {
    ATerm i_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm k_9 = ATgetArgument(t, 0);
              if((d_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm l_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_15), term_o_15), term_j_15), term_d_15), term_v_14), term_p_14), term_j_14), term_c_14), term_r_13), term_m_13), term_i_13), term_c_13), term_x_12), term_r_12), term_n_12), term_g_12), term_z_11), term_r_11), term_n_11), term_j_11), term_e_11), term_y_10), term_u_10), term_o_10), term_h_10), term_b_10), term_w_9), term_p_9);
        t = fetch_elem_1_0(m_0, t);
        LocalPopChoice(j_9);
      }
    else
      {
        t = i_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, d_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm m_3 = NULL,x_3 = NULL;
  m_3 = t;
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_16 = ATgetArgument(t, 0);
            x_3 = ATgetArgument(t, 1);
            {
              ATerm c_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(a_16);
        {
          ATerm d_16 = t;
          int e_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_1 = NULL,w_1 = NULL,x_1 = NULL;
              t = x_3;
              {
                ATerm g_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_16;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              u_1 = t;
              t = term_h_16;
              w_1 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, u_1), term_i_16);
              x_1 = t;
              t = SSL_printnl(w_1, x_1);
              t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATempty, u_1), term_i_16));
              LocalPopChoice(e_16);
            }
          else
            {
              t = d_16;
              t = m_3;
            }
        }
      }
    else
      {
        t = z_15;
        t = m_3;
      }
  }
  t = m_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm m_63 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL;
  h_4 = t;
  t = fork_0_0(t);
  g_4 = t;
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = h_4;
        t = m_63(t);
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        t = SSL_waitpid(g_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_16 = ATgetArgument(t, 0);
            if(((ATgetType(q_16) != AT_INT) || (ATgetInt((ATermInt) q_16) != 0)))
              _fail(t);
            {
              ATerm r_16 = ATgetArgument(t, 1);
            }
            {
              ATerm x_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = h_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm k_4 = NULL,n_4 = NULL;
  n_4 = t;
  t = t_83(t);
  t = xtc_find_0_0(t);
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_4, n_4);
  {
    static ATerm u_0 (ATerm t)
    {
      ATerm o_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, k_4, n_4);
      t = k_6(k_4, n_4, t);
      t = term_u_17;
      o_4 = t;
      t = SSL_exit(o_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
  }
  t = n_4;
  return(t);
}
ATerm at_end_1_0 (ATerm d_70 (ATerm), ATerm t)
{
  static ATerm o_5 (ATerm t)
  {
    ATerm j_5 = NULL,k_5 = NULL,n_5 = NULL;
    n_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_5 = ATgetFirst((ATermList) t);
        k_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_2 = NULL,q_2 = NULL,a_2 = NULL;
          t = SSLgetAnnotations(n_5);
          h_2 = t;
          t = k_5;
          t = o_5(t);
          q_2 = t;
          t = (ATerm) ATinsert(CheckATermList(q_2), j_5);
          a_2 = t;
          t = SSLsetAnnotations(a_2, h_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_5;
        t = d_70(t);
      }
    return(t);
  }
  t = o_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
  q_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_4;
    }
  else
    {
      static ATerm v_0 (ATerm t)
      {
        t = not_null(s_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_4 = ATgetFirst((ATermList) t);
          if(((s_4 != NULL) && (s_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_4;
      t = at_end_1_0(v_0, t);
    }
  return(t);
}
static ATerm j_7 (ATerm q_6, ATerm t)
{
  ATerm r_6 = NULL;
  t = SSL_explode_term(q_6);
  if(match_cons(t, sym__2))
    {
      ATerm f_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_6 = NULL,c_7 = NULL,g_7 = NULL;
  g_7 = t;
  if(match_cons(t, sym__2))
    {
      x_6 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_0 (ATerm t)
            {
              t = c_7;
              return(t);
            }
            t = x_6;
            t = at_end_1_0(x_0, t);
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            t = j_7(g_7, t);
          }
      }
    }
  else
    {
      t = j_7(g_7, t);
    }
  return(t);
}
static ATerm m_6 (ATerm n_79 (ATerm), ATerm q_34, ATerm o_34, ATerm t)
{
  ATerm k_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
  p_7 = t;
  t = n_79(t);
  k_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_7, q_34, o_34);
  t = u_6(k_7, q_34, o_34, t);
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL;
        t = term_k_18;
        s_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_7, term_k_18);
        t = t_6(k_7, s_7, t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_7 = ATgetFirst((ATermList) t);
      o_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_k_18;
  q_7 = t;
  t = (ATerm) ATinsert(CheckATermList(o_7), (ATerm) ATinsert(CheckATermList(n_7), q_34));
  r_7 = t;
  t = SSL_table_put(k_7, q_7, r_7);
  t = p_7;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm v_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,f_8 = NULL;
  t = P__tmpdir_0_0(t);
  z_7 = t;
  t = term_m_18;
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_7, term_m_18);
  t = s_6(z_7, f_8, t);
  b_8 = t;
  t = term_n_18;
  c_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_8, term_n_18);
  t = s_6(b_8, c_8, t);
  a_8 = t;
  t = SSL_mkstemp(a_8);
  if(match_cons(t, sym__2))
    {
      x_7 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_o_18;
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_7, term_o_18);
  t = m_6(y_0, x_7, y_7, t);
  t = SSL_close(v_7);
  t = x_7;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL;
  i_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_8 = NULL,q_8 = NULL;
      t = i_8;
      t = xtc_new_file_0_0(t);
      o_8 = t;
      t = r_0(t);
      q_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_8, (ATerm) ATinsert(ATinsert(ATempty, o_8), term_p_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_8);
    }
  else
    {
      ATerm x_8 = NULL,y_8 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_8;
      t = xtc_new_file_0_0(t);
      x_8 = t;
      t = r_0(t);
      y_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_8), term_p_18), j_8), term_q_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_8);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm t_80 (ATerm), ATerm t)
{
  ATerm a_9 = NULL;
  a_9 = t;
  {
    ATerm s_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_9 = NULL;
        t = term_k_8;
        t = get_config_0_0(t);
        g_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_9, term_y_9);
        t = geq_0_0(t);
        t = a_9;
        t = t_80(t);
        LocalPopChoice(u_18);
      }
    else
      {
        t = s_18;
        t = a_9;
      }
  }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_v_18);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(z_0, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm o_9 = NULL;
  static ATerm a_1 (ATerm t)
  {
    ATerm r_9 = NULL,s_9 = NULL;
    r_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_9), r_9);
    t = t_6(not_null(o_9), r_9, t);
    s_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_9, s_9);
    return(t);
  }
  if(((o_9 != NULL) && (o_9 != t)))
    _fail(t);
  else
    o_9 = t;
  t = SSL_table_keys(o_9);
  t = map_1_0(a_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm a_10 = NULL;
  a_10 = t;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_10 = NULL;
        t = term_k_8;
        t = get_config_0_0(t);
        c_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_10, term_x_14);
        t = geq_0_0(t);
        t = a_10;
        t = v_80(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = a_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_80 (ATerm), ATerm t)
{
  ATerm g_10 = NULL;
  g_10 = t;
  {
    ATerm b_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_10 = NULL;
        t = term_k_8;
        t = get_config_0_0(t);
        i_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_10, term_u_11);
        t = geq_0_0(t);
        t = g_10;
        t = u_80(t);
        LocalPopChoice(f_19);
      }
    else
      {
        t = b_19;
        t = g_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm m_10 = NULL;
  m_10 = t;
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_10 = NULL;
        t = term_k_8;
        t = get_config_0_0(t);
        q_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_10, term_e_10);
        t = geq_0_0(t);
        t = m_10;
        t = w_80(t);
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        t = m_10;
      }
  }
  return(t);
}
static ATerm a_6 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  t = v_73(t);
  {
    static ATerm b_1 (ATerm t)
    {
      ATerm z_10 = NULL;
      z_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, z_10);
      t = u_73(t);
      return(t);
    }
    t = fetch_1_0(b_1, t);
  }
  t = p_24;
  return(t);
}
static ATerm b_6 (ATerm r_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  static ATerm c_12 (ATerm t)
  {
    ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
    v_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_11 = ATgetFirst((ATermList) t);
            x_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_19 = t;
          int j_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_11;
              {
                static ATerm c_1 (ATerm t)
                {
                  t = l_24;
                  return(t);
                }
                t = a_6(r_73, c_1, w_11, x_11, t);
              }
              t = c_12(t);
              LocalPopChoice(j_19);
            }
          else
            {
              t = i_19;
              {
                ATerm j_3 = NULL,n_3 = NULL,e_2 = NULL;
                t = SSLgetAnnotations(v_11);
                j_3 = t;
                t = x_11;
                t = c_12(t);
                n_3 = t;
                t = (ATerm) ATinsert(CheckATermList(n_3), w_11);
                e_2 = t;
                t = SSLsetAnnotations(e_2, j_3);
              }
            }
        }
      }
    return(t);
  }
  t = m_24;
  t = c_12(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm s_12 = NULL;
  if(match_cons(t, sym__2))
    {
      s_12 = ATgetArgument(t, 0);
      if((s_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
  {
    ATerm l_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_19 = ATgetArgument(t, 0);
            ATerm q_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
        t = t_6(e_36, f_36, t);
        LocalPopChoice(o_19);
      }
    else
      {
        t = l_19;
        t = (ATerm) ATempty;
      }
  }
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_12, g_36);
  t = b_6(j_1, m_12, g_36, t);
  l_12 = t;
  t = SSL_table_put(e_36, f_36, l_12);
  t = k_12;
  return(t);
}
static ATerm d_6 (ATerm y_80 (ATerm), ATerm o_36, ATerm n_36, ATerm t)
{
  static ATerm l_1 (ATerm t)
  {
    ATerm t_12 = NULL,z_12 = NULL;
    if(match_cons(t, sym__2))
      {
        t_12 = ATgetArgument(t, 0);
        z_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, o_36, t_12, z_12);
    t = y_80(t);
    return(t);
  }
  t = n_36;
  t = map_1_0(l_1, t);
  return(t);
}
static ATerm f_6 (ATerm p_38, ATerm q_38, ATerm t)
{
  t = SSL_access(p_38, q_38);
  return(t);
}
static ATerm y_13 (ATerm s_13, ATerm t)
{
  t = SSL_fclose(s_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL;
  w_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_13 = ATgetArgument(t, 0);
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_13);
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            t = y_13(w_13, t);
          }
      }
    }
  else
    {
      t = y_13(w_13, t);
    }
  return(t);
}
static ATerm e_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm h_6 (ATerm y_38, ATerm z_38, ATerm t)
{
  ATerm z_13 = NULL;
  t = SSL_fopen(y_38, z_38);
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_14 = NULL;
  t = SSL_stdin_stream();
  a_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_14 = NULL;
  t = SSL_stdout_stream();
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_14 = NULL;
  t = SSL_stderr_stream();
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_14);
  return(t);
}
static ATerm o_16 (ATerm r_14, ATerm t)
{
  ATerm s_14 = NULL;
  t = SSL_explode_term(r_14);
  if(match_cons(t, sym__2))
    {
      ATerm t_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_19 = ATgetArgument(t, 1);
        if(((ATgetType(u_19) == AT_LIST) && !(ATisEmpty(u_19))))
          {
            s_14 = ATgetFirst((ATermList) u_19);
            {
              ATerm v_19 = (ATerm) ATgetNext((ATermList) u_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_14;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_16 (ATerm z_14, ATerm a_15, ATerm b_15, ATerm t)
{
  ATerm c_15 = NULL,g_15 = NULL,h_15 = NULL,m_15 = NULL,g_2 = NULL;
  t = SSLgetAnnotations(b_15);
  h_15 = t;
  t = z_14;
  if(match_cons(t, sym_Path_1))
    {
      m_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_15, a_15);
  g_2 = t;
  t = SSLsetAnnotations(g_2, h_15);
  if(match_cons(t, sym__2))
    {
      c_15 = ATgetArgument(t, 0);
      g_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(c_15, g_15, t);
  return(t);
}
static ATerm s_16 (ATerm r_15, ATerm s_15, ATerm t_15, ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,f_16 = NULL,k_2 = NULL;
  t = SSLgetAnnotations(t_15);
  y_15 = t;
  t = SSL_is_string(r_15);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_16, s_15);
  k_2 = t;
  t = SSLsetAnnotations(k_2, y_15);
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(w_15, x_15, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,n_16 = NULL;
  j_16 = t;
  if(match_cons(t, sym__2))
    {
      k_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_16(j_16, t);
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            {
              ATerm y_19 = t;
              int z_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_16(k_16, n_16, j_16, t);
                  LocalPopChoice(z_19);
                }
              else
                {
                  t = y_19;
                  t = s_16(k_16, n_16, j_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_16(j_16, t);
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_16 = NULL;
      w_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_16, term_h_20);
      t = i_6(t);
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
      t = debug_1_0(m_1, t);
      _fail(t);
    }
  u_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(v_16, t);
  t_16 = t;
  t = u_16;
  t = fclose_0_0(t);
  t = t_16;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_k_20;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_16 = NULL,z_16 = NULL;
      y_16 = t;
      t = (ATerm) ATinsert(ATempty, term_p_20);
      z_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_16, (ATerm) ATinsert(ATempty, term_p_20));
      t = f_6(y_16, z_16, t);
      LocalPopChoice(n_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = m_20;
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_20 = t;
            if((PushChoice() == 0))
              {
                ATerm a_17 = NULL,b_17 = NULL;
                a_17 = t;
                t = (ATerm) ATinsert(ATempty, term_t_8);
                b_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_17, (ATerm) ATinsert(ATempty, term_t_8));
                t = f_6(a_17, b_17, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_20;
              }
            t = debug_1_0(p_1, t);
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            t = debug_1_0(q_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_w_20;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL;
  q_17 = t;
  t = term_h_16;
  r_17 = t;
  t = (ATerm) ATinsert(ATempty, term_y_20);
  s_17 = t;
  t = SSL_printnl(r_17, s_17);
  t = q_17;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
  if(match_cons(t, sym__3))
    {
      w_17 = ATgetArgument(t, 0);
      x_17 = ATgetArgument(t, 1);
      y_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_6(w_17, x_17, y_17, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  t = term_h_16;
  a_18 = t;
  t = (ATerm) ATinsert(ATempty, term_b_21);
  b_18 = t;
  t = SSL_printnl(a_18, b_18);
  t = z_17;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
  c_18 = t;
  t = term_h_16;
  d_18 = t;
  t = (ATerm) ATinsert(ATempty, term_y_20);
  e_18 = t;
  t = SSL_printnl(d_18, e_18);
  t = c_18;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  c_17 = t;
  t = if_verbose5_1_0(r_1, t);
  {
    ATerm c_21 = t;
    if((PushChoice() == 0))
      {
        ATerm m_17 = NULL,p_17 = NULL;
        t = term_d_21;
        m_17 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_17);
        p_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATmakeAppl(sym_Imported_1, c_17));
        t = t_6(m_17, p_17, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_21;
      }
  }
  e_17 = t;
  t = term_d_21;
  j_17 = t;
  t = term_e_21;
  k_17 = t;
  t = (ATerm) ATinsert(ATempty, c_17);
  l_17 = t;
  t = SSL_table_put(j_17, k_17, l_17);
  t = e_17;
  t = if_verbose4_1_0(t_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(y_1, t);
  d_17 = t;
  t = term_d_21;
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_21, d_17);
  t = d_6(z_1, i_17, d_17, t);
  t = if_verbose6_1_0(b_2, t);
  t = term_d_21;
  f_17 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, c_17);
  g_17 = t;
  t = (ATerm) ATempty;
  h_17 = t;
  t = SSL_table_put(f_17, g_17, h_17);
  t = (ATerm) ATmakeAppl(sym__3, term_d_21, (ATerm)ATmakeAppl(sym_Imported_1, c_17), (ATerm) ATempty);
  t = if_verbose4_1_0(c_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm j_77 (ATerm), ATerm t)
{
  ATerm r_18 = NULL,t_18 = NULL,w_18 = NULL;
  r_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_18;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_18 = ATgetFirst((ATermList) t);
          w_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_4 = NULL,m_5 = NULL,p_5 = NULL,n_2 = NULL;
            t = SSLgetAnnotations(r_18);
            z_4 = t;
            t = t_18;
            t = j_77(t);
            m_5 = t;
            t = w_18;
            t = filter_1_0(j_77, t);
            p_5 = t;
            t = (ATerm) ATinsert(CheckATermList(p_5), m_5);
            n_2 = t;
            t = SSLsetAnnotations(n_2, z_4);
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
            t = w_18;
            t = filter_1_0(j_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm t)
{
  static ATerm z_18 (ATerm t)
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_67(t);
        t = z_18(t);
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        t = t_67(t);
      }
    return(t);
  }
  t = z_18(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_21;
      t = get_config_0_0(t);
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      {
        ATerm p_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_19 = NULL;
            t = term_s_21;
            a_19 = t;
            t = SSL_getenv(a_19);
            LocalPopChoice(q_21);
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
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_t_21;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL;
  t = term_d_21;
  m_19 = t;
  t = term_v_21;
  n_19 = t;
  t = term_w_21;
  t = t_6(m_19, n_19, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm x_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_21;
      }
  }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm c_19 = NULL;
  t = if_verbose5_1_0(d_2, t);
  c_19 = t;
  {
    ATerm a_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_19 = NULL,e_19 = NULL;
        t = term_d_21;
        d_19 = t;
        t = term_e_21;
        e_19 = t;
        t = term_e_22;
        t = t_6(d_19, e_19, t);
        LocalPopChoice(c_22);
      }
    else
      {
        t = a_22;
        {
          ATerm k_19 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          k_19 = t;
          t = repeat_2_0(i_2, _id, t);
          t = k_19;
        }
      }
  }
  t = c_19;
  t = if_verbose5_1_0(j_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_f_22;
  return(t);
}
static ATerm a_21 (ATerm a_20, ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
  t = term_d_21;
  d_20 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, a_20);
  e_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATmakeAppl(sym_Tool_1, a_20));
  t = t_6(d_20, e_20, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_22 = ATgetFirst((ATermList) t);
      if(match_cons(g_22, sym__2))
        {
          ATerm i_22 = ATgetArgument(g_22, 0);
          c_20 = ATgetArgument(g_22, 1);
        }
      else
        _fail(t);
      {
        ATerm h_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_20;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_f_22;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_d_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(b_3, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_20 = NULL,j_20 = NULL,o_20 = NULL;
      t = if_verbose5_1_0(m_2, t);
      t = xtc_load_0_0(t);
      o_20 = t;
      if(match_cons(t, sym__2))
        {
          i_20 = ATgetArgument(t, 0);
          j_20 = ATgetArgument(t, 1);
          {
            ATerm m_22 = t;
            int n_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
                t = term_d_21;
                t_20 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, i_20);
                u_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATmakeAppl(sym_Tool_1, i_20));
                t = t_6(t_20, u_20, t);
                {
                  static ATerm r_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((j_20 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((s_20 != NULL) && (s_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(r_2, t);
                }
                t = not_null(s_20);
                LocalPopChoice(n_22);
              }
            else
              {
                t = m_22;
                t = a_21(o_20, t);
              }
          }
        }
      else
        {
          t = a_21(o_20, t);
        }
      t = if_verbose5_1_0(t_2, t);
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm z_20 = NULL,x_5 = NULL,z_5 = NULL;
        z_20 = t;
        t = term_h_16;
        x_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_22), z_20), term_o_22);
        z_5 = t;
        t = SSL_printnl(x_5, z_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_22), z_20), term_o_22);
        t = if_verbose5_1_0(a_3, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_q_22;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm xtc_sglr_2_0 (ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_21 = NULL,m_21 = NULL;
      m_21 = t;
      if(match_cons(t, sym_FILE_1))
        {
          l_21 = ATgetArgument(t, 0);
          {
            ATerm a_7 = NULL,p_2 = NULL;
            t = SSLgetAnnotations(m_21);
            a_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, l_21);
            p_2 = t;
            t = SSLsetAnnotations(p_2, a_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_21;
        }
      LocalPopChoice(s_22);
      {
        static ATerm f_3 (ATerm t)
        {
          ATerm o_21 = NULL,r_21 = NULL,u_21 = NULL;
          t = term_o_18;
          t = f_95(t);
          t = xtc_find_0_0(t);
          o_21 = t;
          t = term_o_18;
          t = g_95(t);
          r_21 = t;
          t = term_o_18;
          t = pass_v_verbose_0_0(t);
          u_21 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(u_21), r_21), term_v_22), o_21), term_u_22), term_t_22);
          return(t);
        }
        t = xtc_transform_file_2_0(e_3, f_3, t);
      }
    }
  else
    {
      t = r_22;
      {
        static ATerm h_3 (ATerm t)
        {
          ATerm y_21 = NULL,b_22 = NULL,d_22 = NULL;
          t = term_o_18;
          t = f_95(t);
          t = xtc_find_0_0(t);
          y_21 = t;
          t = term_o_18;
          t = g_95(t);
          b_22 = t;
          t = term_o_18;
          t = pass_v_verbose_0_0(t);
          d_22 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(d_22), b_22), term_v_22), y_21), term_u_22), term_t_22);
          return(t);
        }
        t = xtc_transform_term_2_0(g_3, h_3, t);
      }
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
  ATerm h_23 = NULL,i_23 = NULL;
  h_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      i_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_7 = NULL;
        t = h_23;
        t = o_0(t);
        u_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = u_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = u_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, i_23, u_7);
        t = n_6(i_23, u_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_23);
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        {
          ATerm y_22 = t;
          int z_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_8 = NULL;
              t = h_23;
              t = o_0(t);
              l_8 = t;
              {
                ATerm a_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm m_8 = NULL;
                    m_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = m_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = m_8;
                          }
                        else
                          {
                            t = m_8;
                            if((i_23 != t))
                              {
                                _fail(t);
                              }
                            t = m_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_23;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, i_23, l_8);
              t = n_6(i_23, l_8, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_23);
              LocalPopChoice(z_22);
            }
          else
            {
              t = y_22;
              t = h_23;
              t = o_0(t);
              if((i_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_23);
            }
        }
      }
  }
  return(t);
}
static ATerm o_6 (ATerm m_35, ATerm n_35, ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL;
  r_23 = t;
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
        t = t_6(m_35, n_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_23 = ATgetFirst((ATermList) t);
            q_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_23);
        t = SSL_table_put(m_35, n_35, q_23);
        t = (ATerm) ATmakeAppl(sym__3, m_35, n_35, q_23);
      }
    else
      {
        t = b_23;
        t = SSL_table_remove(m_35, n_35);
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
      }
  }
  t = r_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm s_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  x_23 = t;
  t = k_79(t);
  w_23 = t;
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_23 = NULL;
        t = term_k_18;
        z_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_23, term_k_18);
        t = t_6(w_23, z_23, t);
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
      v_23 = ATgetFirst((ATermList) t);
      s_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_k_18;
  y_23 = t;
  t = SSL_table_put(w_23, y_23, s_23);
  t = v_23;
  {
    static ATerm i_3 (ATerm t)
    {
      ATerm a_24 = NULL;
      a_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_23, a_24);
      t = o_6(w_23, a_24, t);
      return(t);
    }
    t = map_1_0(i_3, t);
  }
  t = x_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm t)
{
  ATerm g_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_80(t);
      t = g_80(t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = g_23;
      t = g_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_79 (ATerm), ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  f_24 = t;
  t = j_79(t);
  e_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_24, term_k_18);
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_23 = ATgetArgument(t, 0);
            ATerm n_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_18;
        v_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_24, term_k_18);
        t = t_6(e_24, v_24, t);
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = (ATerm) ATempty;
      }
  }
  i_24 = t;
  t = term_k_18;
  j_24 = t;
  t = (ATerm) ATinsert(CheckATermList(i_24), (ATerm) ATempty);
  k_24 = t;
  t = SSL_table_put(e_24, j_24, k_24);
  t = f_24;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_l_18;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm g_25 = NULL;
  g_25 = t;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(g_25);
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = g_25;
      }
  }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm f_83 (ATerm), ATerm t)
{
  ATerm y_24 = NULL;
  static ATerm l_3 (ATerm t)
  {
    ATerm z_24 = NULL;
    z_24 = t;
    {
      ATerm t_23 = t;
      int u_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_25 = NULL,b_25 = NULL;
          t = term_l_18;
          a_25 = t;
          t = term_k_18;
          b_25 = t;
          t = term_b_24;
          t = t_6(a_25, b_25, t);
          LocalPopChoice(u_23);
        }
      else
        {
          t = t_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_24 != NULL) && (y_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_24 = ATgetFirst((ATermList) t);
        {
          ATerm c_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = y_24;
    t = map_1_0(q_3, t);
    t = z_24;
    t = end_scope_1_0(r_3, t);
    return(t);
  }
  t = begin_scope_1_0(k_3, t);
  t = restore_always_2_0(f_83, l_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm d_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_18;
      t = get_config_0_0(t);
      LocalPopChoice(g_24);
    }
  else
    {
      t = d_24;
      t = term_h_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm g_83 (ATerm), ATerm t)
{
  static ATerm s_3 (ATerm t)
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_25 = NULL;
        t = term_q_18;
        t = get_config_0_0(t);
        j_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_25);
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        t = term_s_8;
      }
    t = g_83(t);
    t = copy_to_1_0(u_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(s_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
  k_25 = t;
  t = term_o_18;
  t = whoami_0_0(t);
  l_25 = t;
  t = term_h_16;
  n_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_24), l_25), term_r_24);
  o_25 = t;
  t = SSL_printnl(n_25, o_25);
  t = term_r_8;
  m_25 = t;
  t = SSL_exit(m_25);
  t = k_25;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm q_25 = NULL;
  q_25 = t;
  if(match_string(t, "-k"))
    {
      t = q_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_25;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  r_25 = t;
  t = SSL_string_to_int(r_25);
  s_25 = t;
  t = term_t_24;
  t_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_24, s_25);
  t = w_6(t_25, s_25, t);
  t = r_25;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_3, w_3, y_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm y_25 = NULL;
  y_25 = t;
  if(match_string(t, "-S"))
    {
      t = y_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_25;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL;
  t = term_k_8;
  z_25 = t;
  t = term_w_24;
  a_26 = t;
  t = term_x_24;
  t = w_6(z_25, a_26, t);
  t = term_c_25;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_d_25;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
  b_26 = t;
  t = SSL_string_to_int(b_26);
  c_26 = t;
  t = term_k_8;
  d_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_8, c_26);
  t = w_6(d_26, c_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_26);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_e_25;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm e_26 = NULL,h_26 = NULL;
  t = term_v_22;
  e_26 = t;
  t = term_o_18;
  h_26 = t;
  t = term_f_25;
  t = w_6(e_26, h_26, t);
  t = term_h_25;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_3, a_4, b_4, t);
      LocalPopChoice(u_25);
    }
  else
    {
      t = p_25;
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_4, d_4, e_4, t);
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            t = Option_3_0(f_4, i_4, j_4, t);
          }
      }
    }
  return(t);
}
static ATerm w_6 (ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm i_26 = NULL;
  t = term_x_25;
  i_26 = t;
  t = SSL_table_put(i_26, h_37, i_37);
  t = (ATerm) ATmakeAppl(sym__3, term_x_25, h_37, i_37);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm l_26 = NULL,n_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_26 = NULL,p_26 = NULL,r_26 = NULL;
      t = term_o_18;
      t = e_0(t);
      o_26 = t;
      t = term_f_26;
      p_26 = t;
      t = term_g_26;
      r_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_26, term_g_26, o_26);
      t = u_6(p_26, r_26, o_26, t);
      _fail(t);
    }
  else
    {
      ATerm v_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_26 = ATgetFirst((ATermList) t);
          n_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_26;
      t = c_0(t);
      t = term_o_18;
      t = d_0(t);
      v_26 = t;
      t = (ATerm) ATinsert(CheckATermList(n_26), v_26);
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm y_26 = NULL;
  y_26 = t;
  if(match_string(t, "-o"))
    {
      t = y_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_26;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm z_26 = NULL,g_27 = NULL;
  z_26 = t;
  t = term_p_18;
  g_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_18, z_26);
  t = w_6(g_27, z_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_26);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, p_4, t);
  return(t);
}
static ATerm u_6 (ATerm h_35, ATerm i_35, ATerm g_35, ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,l_27 = NULL;
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
  {
    ATerm k_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_26 = ATgetArgument(t, 0);
            ATerm s_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
        t = t_6(h_35, i_35, t);
        LocalPopChoice(m_26);
      }
    else
      {
        t = k_26;
        t = (ATerm) ATempty;
      }
  }
  j_27 = t;
  t = (ATerm) ATinsert(CheckATermList(j_27), g_35);
  l_27 = t;
  t = SSL_table_put(h_35, i_35, l_27);
  t = i_27;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_27 = NULL,a_28 = NULL,c_28 = NULL;
      t = term_o_18;
      t = n_0(t);
      z_27 = t;
      t = term_f_26;
      a_28 = t;
      t = term_g_26;
      c_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_26, term_g_26, z_27);
      t = u_6(a_28, c_28, z_27, t);
      _fail(t);
    }
  else
    {
      ATerm g_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_27 = ATgetFirst((ATermList) t);
          w_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_27 = ATgetFirst((ATermList) t);
          y_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_27;
      t = k_0(t);
      t = x_27;
      t = l_0(t);
      g_28 = t;
      t = (ATerm) ATinsert(CheckATermList(y_27), g_28);
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  if(match_string(t, "-i"))
    {
      t = i_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_28;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL;
  j_28 = t;
  t = term_q_18;
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_18, j_28);
  t = w_6(k_28, j_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_28);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_t_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_4, u_4, v_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,p_28 = NULL,s_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_18;
  t = whoami_0_0(t);
  l_28 = t;
  t = term_h_16;
  p_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_26), l_28);
  s_28 = t;
  t = SSL_printnl(p_28, s_28);
  t = term_r_8;
  m_28 = t;
  t = SSL_exit(m_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_w_26;
  t = get_config_0_0(t);
  return(t);
}
static ATerm p_6 (ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm x_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_33, d_33);
      LocalPopChoice(a_27);
    }
  else
    {
      t = x_26;
      t = SSL_addr(c_33, d_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,z_28 = NULL;
  u_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_28;
      t = f_76(t);
    }
  else
    {
      ATerm i_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_28 = ATgetFirst((ATermList) t);
          z_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_28;
      t = foldr_2_0(f_76, g_76, t);
      i_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_28, i_29);
      t = g_76(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_w_24;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL;
  if(match_cons(t, sym__2))
    {
      d_9 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(d_9, e_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_29 = NULL,v_8 = NULL,w_8 = NULL;
  t = times_0_0(t);
  w_8 = t;
  t = SSL_explode_term(w_8);
  if(match_cons(t, sym__2))
    {
      ATerm b_27 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_8;
  t = foldr_2_0(x_4, y_4, t);
  l_29 = t;
  t = SSL_TicksToSeconds(l_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
  e_30 = t;
  if(match_cons(t, sym__2))
    {
      f_30 = ATgetArgument(t, 0);
      g_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_30;
        if((f_30 != t))
          {
            _fail(t);
          }
        t = e_30;
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        t = (ATerm) ATmakeAppl(sym__2, f_30, g_30);
        {
          ATerm e_27 = t;
          int f_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_30, g_30);
              LocalPopChoice(f_27);
            }
          else
            {
              t = e_27;
              t = SSL_gtr(f_30, g_30);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_30, g_30);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm k_30 = NULL;
  k_30 = t;
  {
    ATerm h_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_30 = NULL;
        t = term_k_8;
        t = get_config_0_0(t);
        m_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_30, term_r_8);
        t = geq_0_0(t);
        t = k_30;
        t = r_80(t);
        LocalPopChoice(k_27);
      }
    else
      {
        t = h_27;
        t = k_30;
      }
  }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,r_30 = NULL,s_30 = NULL;
  t = run_time_0_0(t);
  o_30 = t;
  t = term_o_18;
  t = whoami_0_0(t);
  p_30 = t;
  t = term_h_16;
  r_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_27), o_30), term_f_9), p_30);
  s_30 = t;
  t = SSL_printnl(r_30, s_30);
  t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_27), o_30), term_f_9), p_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_24;
  t_30 = t;
  t = SSL_exit(t_30);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL;
  e_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_31 = ATgetArgument(t, 0);
          {
            ATerm v_9 = NULL,s_2 = NULL;
            t = SSLgetAnnotations(e_31);
            v_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_31);
            s_2 = t;
            t = SSLsetAnnotations(s_2, v_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_27;
      t = get_config_0_0(t);
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      t = fetch_1_0(c_5, t);
    }
  t = v_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_31 = ATgetFirst((ATermList) t);
      i_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_31 = NULL,n_31 = NULL;
        static ATerm e_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_31)), not_null(n_31));
          return(t);
        }
        t = i_31;
        t = i_0(t);
        if(((m_31 != NULL) && (m_31 != t)))
          _fail(t);
        else
          m_31 = t;
        t = h_31;
        t = g_0(t);
        if(((n_31 != NULL) && (n_31 != t)))
          _fail(t);
        else
          n_31 = t;
        t = i_31;
        t = reverse_acc_2_0(g_0, e_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_18;
      t = i_0(t);
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,z_2 = NULL;
  t_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_31);
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_31);
  z_2 = t;
  t = SSLsetAnnotations(z_2, r_31);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm v_31 = NULL;
  v_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_31), term_q_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL;
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_26;
      t = get_config_0_0(t);
      LocalPopChoice(s_27);
    }
  else
    {
      t = r_27;
      t = fetch_1_0(g_5, t);
    }
  t = term_t_27;
  t = echo_0_0(t);
  t = term_f_26;
  p_31 = t;
  t = term_g_26;
  q_31 = t;
  t = term_u_27;
  t = t_6(p_31, q_31, t);
  t = reverse_acc_2_0(_id, i_5, t);
  t = map_1_0(l_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  static ATerm u_32 (ATerm t)
  {
    ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
    r_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_32 = ATgetFirst((ATermList) t);
        t_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_28 = t;
      int d_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_10 = NULL,r_10 = NULL,o_3 = NULL;
          t = SSLgetAnnotations(r_32);
          l_10 = t;
          t = s_32;
          t = x_69(t);
          r_10 = t;
          t = (ATerm) ATinsert(CheckATermList(t_32), r_10);
          o_3 = t;
          t = SSLsetAnnotations(o_3, l_10);
          LocalPopChoice(d_28);
        }
      else
        {
          t = b_28;
          {
            ATerm b_11 = NULL,h_11 = NULL,p_3 = NULL;
            t = SSLgetAnnotations(r_32);
            b_11 = t;
            t = t_32;
            t = u_32(t);
            h_11 = t;
            t = (ATerm) ATinsert(CheckATermList(h_11), s_32);
            p_3 = t;
            t = SSLsetAnnotations(p_3, b_11);
          }
        }
    }
    return(t);
  }
  t = u_32(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
  y_32 = t;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_28 = ATgetFirst((ATermList) t);
                ATerm n_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_32;
          }
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        t = (ATerm) ATinsert(ATempty, y_32);
      }
  }
  z_32 = t;
  t = term_h_24;
  a_33 = t;
  t = SSL_printnl(a_33, z_32);
  t = y_32;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_w_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm s_6 (ATerm x_31, ATerm y_31, ATerm t)
{
  t = SSL_strcat(x_31, y_31);
  return(t);
}
ATerm debug_1_0 (ATerm v_64 (ATerm), ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,k_33 = NULL,l_33 = NULL;
  g_33 = t;
  t = v_64(t);
  h_33 = t;
  t = term_h_16;
  k_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_33), h_33);
  l_33 = t;
  t = SSL_printnl(k_33, l_33);
  t = g_33;
  return(t);
}
ATerm map_1_0 (ATerm n_69 (ATerm), ATerm t)
{
  static ATerm a_34 (ATerm t)
  {
    ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
    x_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_33;
      }
    else
      {
        ATerm t_11 = NULL,e_12 = NULL,f_12 = NULL,t_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_33 = ATgetFirst((ATermList) t);
            z_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_33);
        t_11 = t;
        t = y_33;
        t = n_69(t);
        e_12 = t;
        t = z_33;
        t = a_34(t);
        f_12 = t;
        t = (ATerm) ATinsert(CheckATermList(f_12), e_12);
        t_3 = t;
        t = SSLsetAnnotations(t_3, t_11);
      }
    return(t);
  }
  t = a_34(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm o_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(q_28);
    }
  else
    {
      t = o_28;
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_34 = NULL;
      t_34 = t;
      t = SSL_is_string(t_34);
      LocalPopChoice(w_28);
    }
  else
    {
      t = t_28;
      {
        ATerm x_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_5, t);
            LocalPopChoice(y_28);
          }
        else
          {
            t = x_28;
            {
              ATerm a_35 = NULL,b_35 = NULL,j_35 = NULL;
              a_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_35 = ATgetArgument(t, 0);
                  t = b_35;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_35 = ATgetArgument(t, 0);
                      t = b_35;
                      {
                        ATerm a_29 = t;
                        int b_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(b_29);
                          }
                        else
                          {
                            t = a_29;
                            t = debug_1_0(r_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm q_35 = NULL,r_35 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_35 = ATgetArgument(t, 0);
                          j_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_35;
                      t = eval_config_0_0(t);
                      q_35 = t;
                      t = j_35;
                      t = eval_config_0_0(t);
                      r_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_35, r_35);
                      t = s_6(q_35, r_35, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_6 (ATerm y_36, ATerm z_36, ATerm t)
{
  t = SSL_table_get(y_36, z_36);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL;
  v_35 = t;
  t = term_x_25;
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_25, v_35);
  t = t_6(w_35, v_35, t);
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_35 = NULL,y_35 = NULL;
        t = eval_config_0_0(t);
        x_35 = t;
        t = term_x_25;
        y_35 = t;
        t = SSL_table_put(y_35, v_35, x_35);
        t = x_35;
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
      }
  }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL;
  t = term_e_29;
  b_36 = t;
  t = term_o_18;
  c_36 = t;
  t = term_f_29;
  t = w_6(b_36, c_36, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_g_29;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm d_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL;
  t = term_e_29;
  k_36 = t;
  t = term_o_18;
  l_36 = t;
  t = term_f_29;
  t = w_6(k_36, l_36, t);
  t = term_v_18;
  d_36 = t;
  t = term_o_18;
  j_36 = t;
  t = term_h_29;
  t = w_6(d_36, j_36, t);
  t = term_j_29;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_5, t_5, u_5, t);
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      t = Option_3_0(v_5, w_5, l_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_56 (ATerm), ATerm o_56 (ATerm), ATerm t)
{
  ATerm m_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,a_5 = NULL;
  v_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_36 = ATgetFirst((ATermList) t);
      s_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_36);
  m_36 = t;
  t = r_36;
  t = n_56(t);
  t_36 = t;
  t = s_36;
  t = o_56(t);
  u_36 = t;
  t = (ATerm) ATinsert(CheckATermList(u_36), t_36);
  a_5 = t;
  t = SSLsetAnnotations(a_5, m_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,j_37 = NULL,k_37 = NULL,d_5 = NULL;
  c_37 = t;
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_29;
        t = t_86(t);
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
      }
  }
  t = c_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_37 = ATgetFirst((ATermList) t);
      f_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_37);
  d_37 = t;
  t = term_w_26;
  k_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_26, e_37);
  t = w_6(k_37, e_37, t);
  t = f_37;
  {
    static ATerm z_37 (ATerm t)
    {
      ATerm r_29 = t;
      int s_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_29 = t;
          int u_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_37 = NULL;
              n_37 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_37;
              LocalPopChoice(u_29);
            }
          else
            {
              t = t_29;
              t = t_86(t);
              t = Cons_2_0(_id, z_37, t);
            }
          LocalPopChoice(s_29);
        }
      else
        {
          t = r_29;
          {
            ATerm v_37 = NULL,w_37 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_37 = ATgetFirst((ATermList) t);
                w_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_37), (ATerm) ATmakeAppl(sym_Undefined_1, v_37));
          }
        }
      return(t);
    }
    t = z_37(t);
  }
  j_37 = t;
  t = (ATerm) ATinsert(CheckATermList(j_37), (ATerm) ATmakeAppl(sym_Program_1, e_37));
  d_5 = t;
  t = SSLsetAnnotations(d_5, d_37);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm l_38 = NULL;
  l_38 = t;
  if(match_string(t, "--help"))
    {
      t = l_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_38;
        }
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL;
  t = term_p_27;
  m_38 = t;
  t = term_o_18;
  n_38 = t;
  t = term_v_29;
  t = w_6(m_38, n_38, t);
  t = term_w_29;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_x_29;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
  g_38 = t;
  t = term_f_26;
  i_38 = t;
  t = term_g_26;
  j_38 = t;
  t = (ATerm) ATempty;
  k_38 = t;
  t = SSL_table_put(i_38, j_38, k_38);
  t = g_38;
  {
    static ATerm v_6 (ATerm t)
    {
      ATerm y_29 = t;
      int z_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_86(t);
          LocalPopChoice(z_29);
        }
      else
        {
          t = y_29;
          {
            ATerm a_30 = t;
            int b_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_6, z_6, b_7, t);
                LocalPopChoice(b_30);
              }
            else
              {
                t = a_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_6, t);
  }
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_38 = NULL;
        w_38 = t;
        {
          ATerm h_30 = t;
          int i_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_13 = NULL;
              t = w_38;
              {
                ATerm j_30 = t;
                int l_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_p_27;
                    t = get_config_0_0(t);
                    LocalPopChoice(l_30);
                  }
                else
                  {
                    t = j_30;
                    t = fetch_1_0(d_7, t);
                  }
              }
              t = w_38;
              t = default_system_usage_0_0(t);
              t = term_w_24;
              d_13 = t;
              t = SSL_exit(d_13);
              LocalPopChoice(i_30);
            }
          else
            {
              t = h_30;
              {
                ATerm h_13 = NULL;
                t = term_e_29;
                t = get_config_0_0(t);
                t = w_38;
                t = default_system_about_0_0(t);
                t = term_w_24;
                h_13 = t;
                t = SSL_exit(h_13);
              }
            }
        }
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        {
          ATerm n_30 = t;
          int q_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_38 = NULL,c_39 = NULL,d_39 = NULL;
              static ATerm e_7 (ATerm t)
              {
                ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,f_5 = NULL;
                g_39 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_39 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_39);
                e_39 = t;
                t = f_39;
                if(((e_38 != NULL) && (e_38 != t)))
                  _fail(t);
                else
                  e_38 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_39);
                f_5 = t;
                t = SSLsetAnnotations(f_5, e_39);
                return(t);
              }
              t = fetch_1_0(e_7, t);
              t = term_h_16;
              c_39 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_38)), term_u_30);
              d_39 = t;
              t = SSL_printnl(c_39, d_39);
              t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_38)), term_u_30));
              t = default_system_usage_0_0(t);
              t = term_r_8;
              x_38 = t;
              t = SSL_exit(x_38);
              LocalPopChoice(q_30);
            }
          else
            {
              t = n_30;
            }
        }
      }
  }
  f_38 = t;
  t = term_f_26;
  h_38 = t;
  t = SSL_table_destroy(h_38);
  t = f_38;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,q_39 = NULL,r_39 = NULL;
  t = parse_options_1_0(x_84, t);
  l_39 = t;
  t = term_v_30;
  r_39 = t;
  t = SSL_table_create(r_39);
  t = term_v_30;
  m_39 = t;
  t = term_w_30;
  q_39 = t;
  t = SSL_table_put(m_39, q_39, l_39);
  t = l_39;
  t = z_84(t);
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_84, t);
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        {
          ATerm z_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_85(t);
              t = report_success_0_0(t);
              LocalPopChoice(a_31);
            }
          else
            {
              t = z_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      {
        ATerm f_31 = t;
        int g_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(g_31);
          }
        else
          {
            t = f_31;
            {
              ATerm j_31 = t;
              int k_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(i_7, l_7, m_7, t);
                  LocalPopChoice(k_31);
                }
              else
                {
                  t = j_31;
                  {
                    ATerm l_31 = t;
                    int o_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(o_31);
                      }
                    else
                      {
                        t = l_31;
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
static ATerm h_7 (ATerm t)
{
  t = xtc_io_1_0(t_7, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL;
  t = term_u_31;
  b_40 = t;
  t = term_o_18;
  c_40 = t;
  t = term_w_31;
  t = w_6(b_40, c_40, t);
  t = term_z_31;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_a_32;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = xtc_sglr_2_0(w_7, d_8, t);
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_40 = NULL,m_40 = NULL;
        m_40 = t;
        if(match_cons(t, sym_FILE_1))
          {
            l_40 = ATgetArgument(t, 0);
            {
              ATerm o_13 = NULL,h_5 = NULL;
              t = SSLgetAnnotations(m_40);
              o_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_40);
              h_5 = t;
              t = SSLsetAnnotations(h_5, o_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_40;
          }
        LocalPopChoice(c_32);
        t = xtc_transform_file_2_0(e_8, pass_verbose_0_0, t);
      }
    else
      {
        t = b_32;
        t = xtc_transform_term_2_0(g_8, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_d_32;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_e_32;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_f_32;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_f_32;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(f_7, default_usage_0_0, _id, h_7, t);
  return(t);
}
