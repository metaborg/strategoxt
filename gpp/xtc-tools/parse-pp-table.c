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
ATerm term_y_31;
ATerm term_x_31;
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
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_v_11;
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
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_i_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_9, term_q_8, term_n_9);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_9, term_r_9, term_u_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_9, term_y_9, term_z_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_e_10, term_f_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_k_10, term_m_10);
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
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_c_11, term_d_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_h_11, term_i_11);
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
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_u_11, term_v_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_12, term_c_12, term_e_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_i_12, term_j_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_p_12, term_q_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_v_12, term_w_12);
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
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_i_8, term_w_24);
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
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table.tbl", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("PP-Table-GrammarId", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm z_5 (ATerm k_33, ATerm l_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm h_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm k_6 (ATerm w_65 (ATerm), ATerm m_165, ATerm v_17, ATerm t);
static ATerm c_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm t);
static ATerm l_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm y_70 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm l_64 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm x_84 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm c_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_7 (ATerm r_6, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm n_6 (ATerm m_80 (ATerm), ATerm s_34, ATerm q_34, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm x_81 (ATerm), ATerm t);
static ATerm z_0 (ATerm t);
ATerm pass_v_verbose_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm z_81 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm y_81 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm a_82 (ATerm), ATerm t);
static ATerm b_6 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm c_6 (ATerm q_74 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm d_1 (ATerm t);
static ATerm d_6 (ATerm c_37, ATerm d_37, ATerm e_37, ATerm t);
static ATerm e_6 (ATerm c_82 (ATerm), ATerm m_37, ATerm l_37, ATerm t);
static ATerm g_6 (ATerm n_39, ATerm o_39, ATerm t);
static ATerm y_13 (ATerm s_13, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_6 (ATerm t_17, ATerm t);
static ATerm i_6 (ATerm w_39, ATerm x_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_16 (ATerm r_14, ATerm t);
static ATerm p_16 (ATerm z_14, ATerm a_15, ATerm b_15, ATerm t);
static ATerm s_16 (ATerm r_15, ATerm s_15, ATerm t_15, ATerm t);
static ATerm j_6 (ATerm t);
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
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_78 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm a_21 (ATerm a_20, ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm xtc_sglr_2_0 (ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm t);
static ATerm o_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm p_6 (ATerm k_36, ATerm l_36, ATerm t);
ATerm end_scope_1_0 (ATerm j_80 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_80 (ATerm), ATerm t);
static ATerm k_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm j_84 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm k_84 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_6 (ATerm f_38, ATerm g_38, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_6 (ATerm f_36, ATerm g_36, ATerm e_36, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm q_6 (ATerm e_33, ATerm f_33, ATerm t);
ATerm foldr_2_0 (ATerm e_77 (ATerm), ATerm f_77 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_81 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm need_help_1_0 (ATerm z_85 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_70 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_6 (ATerm z_31, ATerm a_32, ATerm t);
ATerm debug_1_0 (ATerm u_65 (ATerm), ATerm t);
ATerm map_1_0 (ATerm m_70 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm u_6 (ATerm w_37, ATerm x_37, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm m_57 (ATerm), ATerm n_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm x_87 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm parse_options_1_0 (ATerm w_87 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm z_5 (ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm x_4 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(k_33, l_33);
      LocalPopChoice(h_8);
    }
  else
    {
      t = x_4;
      t = SSL_subtr(k_33, l_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,j_0 = NULL;
  t = term_i_8;
  {
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(o_8);
      }
    else
      {
        t = n_8;
        t = term_q_8;
      }
  }
  b_0 = t;
  t = term_q_8;
  j_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_q_8);
  t = z_5(b_0, j_0, t);
  f_0 = t;
  t = SSL_int_to_string(f_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_i_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm x_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_s_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm e_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          x_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_t_8);
      e_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_0, (ATerm) ATinsert(ATempty, term_t_8));
      t = g_6(x_0, e_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm h_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm f_1 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_1);
  return(t);
}
static ATerm k_6 (ATerm w_65 (ATerm), ATerm m_165, ATerm v_17, ATerm t)
{
  ATerm g_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_165, term_v_8);
  t = j_6(t);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_1, v_17);
  t = w_65(t);
  t = fclose_0_0(t);
  t = v_17;
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm j_1 = NULL,l_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_8 = ATgetArgument(t, 0);
      if(match_cons(x_8, sym_Stream_1))
        {
          j_1 = ATgetArgument(x_8, 0);
        }
      else
        _fail(t);
      l_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(j_1, l_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL;
  i_1 = t;
  t = xtc_new_file_0_0(t);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, i_1);
  t = k_6(c_0, h_1, i_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
  t = xtc_transform_file_2_0(w_83, x_83, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm l_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
  v_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      w_2 = ATgetArgument(t, 0);
      {
        ATerm m_0 = NULL,q_0 = NULL;
        t = SSL_int_to_string(w_2);
        m_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_9), m_0), term_a_9);
        q_0 = t;
        t = SSL_concat_strings(q_0);
      }
    }
  else
    {
      ATerm n_1 = NULL,o_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          w_2 = ATgetArgument(t, 0);
          x_2 = ATgetArgument(t, 1);
          y_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(x_2);
      n_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_2), term_g_9), n_1), term_f_9), w_2);
      o_1 = t;
      t = SSL_concat_strings(o_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm y_70 (ATerm), ATerm t)
{
  ATerm d_3 = NULL;
  static ATerm e_0 (ATerm t)
  {
    t = y_70(t);
    if(((d_3 != NULL) && (d_3 != t)))
      _fail(t);
    else
      d_3 = t;
    return(t);
  }
  t = fetch_1_0(e_0, t);
  t = not_null(d_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm e_3 = NULL;
  e_3 = t;
  {
    ATerm i_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm k_9 = ATgetArgument(t, 0);
              if((e_3 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_15), term_o_15), term_j_15), term_d_15), term_v_14), term_p_14), term_j_14), term_c_14), term_r_13), term_m_13), term_i_13), term_c_13), term_x_12), term_r_12), term_k_12), term_g_12), term_z_11), term_r_11), term_n_11), term_j_11), term_f_11), term_y_10), term_u_10), term_o_10), term_g_10), term_a_10), term_w_9), term_o_9);
        t = fetch_elem_1_0(h_0, t);
        LocalPopChoice(j_9);
      }
    else
      {
        t = i_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, e_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_3 = NULL,y_3 = NULL;
  n_3 = t;
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_16 = ATgetArgument(t, 0);
            y_3 = ATgetArgument(t, 1);
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
              t = y_3;
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
              t = n_3;
            }
        }
      }
    else
      {
        t = z_15;
        t = n_3;
      }
  }
  t = n_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm l_64 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL;
  i_4 = t;
  t = fork_0_0(t);
  h_4 = t;
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_4;
        t = l_64(t);
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        t = SSL_waitpid(h_4);
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
        t = i_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm x_84 (ATerm), ATerm t)
{
  ATerm l_4 = NULL,o_4 = NULL;
  o_4 = t;
  t = x_84(t);
  t = xtc_find_0_0(t);
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_4, o_4);
  {
    static ATerm s_0 (ATerm t)
    {
      ATerm p_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, l_4, o_4);
      t = l_6(l_4, o_4, t);
      t = term_u_17;
      p_4 = t;
      t = SSL_exit(p_4);
      return(t);
    }
    t = fork_and_wait_1_0(s_0, t);
  }
  t = o_4;
  return(t);
}
ATerm at_end_1_0 (ATerm c_71 (ATerm), ATerm t)
{
  static ATerm p_5 (ATerm t)
  {
    ATerm k_5 = NULL,l_5 = NULL,o_5 = NULL;
    o_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_5 = ATgetFirst((ATermList) t);
        l_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_2 = NULL,k_2 = NULL,b_2 = NULL;
          t = SSLgetAnnotations(o_5);
          d_2 = t;
          t = l_5;
          t = p_5(t);
          k_2 = t;
          t = (ATerm) ATinsert(CheckATermList(k_2), k_5);
          b_2 = t;
          t = SSLsetAnnotations(b_2, d_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_5;
        t = c_71(t);
      }
    return(t);
  }
  t = p_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  r_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_4;
    }
  else
    {
      static ATerm u_0 (ATerm t)
      {
        t = not_null(t_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_4 = ATgetFirst((ATermList) t);
          if(((t_4 != NULL) && (t_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_4;
      t = at_end_1_0(u_0, t);
    }
  return(t);
}
static ATerm k_7 (ATerm r_6, ATerm t)
{
  ATerm s_6 = NULL;
  t = SSL_explode_term(r_6);
  if(match_cons(t, sym__2))
    {
      ATerm f_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_6 = NULL,d_7 = NULL,h_7 = NULL;
  h_7 = t;
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_0 (ATerm t)
            {
              t = d_7;
              return(t);
            }
            t = y_6;
            t = at_end_1_0(w_0, t);
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            t = k_7(h_7, t);
          }
      }
    }
  else
    {
      t = k_7(h_7, t);
    }
  return(t);
}
static ATerm n_6 (ATerm m_80 (ATerm), ATerm s_34, ATerm q_34, ATerm t)
{
  ATerm l_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
  q_7 = t;
  t = m_80(t);
  l_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_7, s_34, q_34);
  t = v_6(l_7, s_34, q_34, t);
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_7 = NULL;
        t = term_k_18;
        t_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_7, term_k_18);
        t = u_6(l_7, t_7, t);
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
      o_7 = ATgetFirst((ATermList) t);
      p_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_k_18;
  r_7 = t;
  t = (ATerm) ATinsert(CheckATermList(p_7), (ATerm) ATinsert(CheckATermList(o_7), s_34));
  s_7 = t;
  t = SSL_table_put(l_7, r_7, s_7);
  t = q_7;
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
  ATerm w_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,g_8 = NULL;
  t = P__tmpdir_0_0(t);
  a_8 = t;
  t = term_m_18;
  g_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_8, term_m_18);
  t = t_6(a_8, g_8, t);
  c_8 = t;
  t = term_n_18;
  d_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_8, term_n_18);
  t = t_6(c_8, d_8, t);
  b_8 = t;
  t = SSL_mkstemp(b_8);
  if(match_cons(t, sym__2))
    {
      y_7 = ATgetArgument(t, 0);
      w_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_o_18;
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_7, term_o_18);
  t = n_6(y_0, y_7, z_7, t);
  t = SSL_close(w_7);
  t = y_7;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL;
  j_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm p_8 = NULL,r_8 = NULL;
      t = j_8;
      t = xtc_new_file_0_0(t);
      p_8 = t;
      t = v_0(t);
      r_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_8, (ATerm) ATinsert(ATinsert(ATempty, p_8), term_p_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_8);
    }
  else
    {
      ATerm y_8 = NULL,z_8 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_8;
      t = xtc_new_file_0_0(t);
      y_8 = t;
      t = v_0(t);
      z_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_8), term_p_18), k_8), term_q_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_8);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm x_81 (ATerm), ATerm t)
{
  ATerm b_9 = NULL;
  b_9 = t;
  {
    ATerm s_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_9 = NULL;
        t = term_i_8;
        t = get_config_0_0(t);
        h_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_9, term_y_9);
        t = geq_0_0(t);
        t = b_9;
        t = x_81(t);
        LocalPopChoice(u_18);
      }
    else
      {
        t = s_18;
        t = b_9;
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
  ATerm p_9 = NULL;
  static ATerm a_1 (ATerm t)
  {
    ATerm s_9 = NULL,t_9 = NULL;
    s_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_9), s_9);
    t = u_6(not_null(p_9), s_9, t);
    t_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_9, t_9);
    return(t);
  }
  if(((p_9 != NULL) && (p_9 != t)))
    _fail(t);
  else
    p_9 = t;
  t = SSL_table_keys(p_9);
  t = map_1_0(a_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_10 = NULL;
        t = term_i_8;
        t = get_config_0_0(t);
        d_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_10, term_x_14);
        t = geq_0_0(t);
        t = b_10;
        t = z_81(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = b_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_81 (ATerm), ATerm t)
{
  ATerm h_10 = NULL;
  h_10 = t;
  {
    ATerm b_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_10 = NULL;
        t = term_i_8;
        t = get_config_0_0(t);
        j_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_10, term_u_11);
        t = geq_0_0(t);
        t = h_10;
        t = y_81(t);
        LocalPopChoice(f_19);
      }
    else
      {
        t = b_19;
        t = h_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_82 (ATerm), ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_10 = NULL;
        t = term_i_8;
        t = get_config_0_0(t);
        r_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_10, term_e_10);
        t = geq_0_0(t);
        t = n_10;
        t = a_82(t);
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        t = n_10;
      }
  }
  return(t);
}
static ATerm b_6 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  t = u_74(t);
  {
    static ATerm b_1 (ATerm t)
    {
      ATerm a_11 = NULL;
      a_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, a_11);
      t = t_74(t);
      return(t);
    }
    t = fetch_1_0(b_1, t);
  }
  t = p_24;
  return(t);
}
static ATerm c_6 (ATerm q_74 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  static ATerm d_12 (ATerm t)
  {
    ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
    w_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_11 = ATgetFirst((ATermList) t);
            y_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_19 = t;
          int j_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_11;
              {
                static ATerm c_1 (ATerm t)
                {
                  t = l_24;
                  return(t);
                }
                t = b_6(q_74, c_1, x_11, y_11, t);
              }
              t = d_12(t);
              LocalPopChoice(j_19);
            }
          else
            {
              t = i_19;
              {
                ATerm j_3 = NULL,m_3 = NULL,f_2 = NULL;
                t = SSLgetAnnotations(w_11);
                j_3 = t;
                t = y_11;
                t = d_12(t);
                m_3 = t;
                t = (ATerm) ATinsert(CheckATermList(m_3), x_11);
                f_2 = t;
                t = SSLsetAnnotations(f_2, j_3);
              }
            }
        }
      }
    return(t);
  }
  t = m_24;
  t = d_12(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      t_12 = ATgetArgument(t, 0);
      if((t_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_6 (ATerm c_37, ATerm d_37, ATerm e_37, ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  l_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_37, d_37);
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
        t = (ATerm) ATmakeAppl(sym__2, c_37, d_37);
        t = u_6(c_37, d_37, t);
        LocalPopChoice(o_19);
      }
    else
      {
        t = l_19;
        t = (ATerm) ATempty;
      }
  }
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_12, e_37);
  t = c_6(d_1, n_12, e_37, t);
  m_12 = t;
  t = SSL_table_put(c_37, d_37, m_12);
  t = l_12;
  return(t);
}
static ATerm e_6 (ATerm c_82 (ATerm), ATerm m_37, ATerm l_37, ATerm t)
{
  static ATerm k_1 (ATerm t)
  {
    ATerm u_12 = NULL,z_12 = NULL;
    if(match_cons(t, sym__2))
      {
        u_12 = ATgetArgument(t, 0);
        z_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_37, u_12, z_12);
    t = c_82(t);
    return(t);
  }
  t = l_37;
  t = map_1_0(k_1, t);
  return(t);
}
static ATerm g_6 (ATerm n_39, ATerm o_39, ATerm t)
{
  t = SSL_access(n_39, o_39);
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
static ATerm f_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm i_6 (ATerm w_39, ATerm x_39, ATerm t)
{
  ATerm z_13 = NULL;
  t = SSL_fopen(w_39, x_39);
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
  ATerm c_15 = NULL,g_15 = NULL,h_15 = NULL,m_15 = NULL,h_2 = NULL;
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
  h_2 = t;
  t = SSLsetAnnotations(h_2, h_15);
  if(match_cons(t, sym__2))
    {
      c_15 = ATgetArgument(t, 0);
      g_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(c_15, g_15, t);
  return(t);
}
static ATerm s_16 (ATerm r_15, ATerm s_15, ATerm t_15, ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,f_16 = NULL,l_2 = NULL;
  t = SSLgetAnnotations(t_15);
  y_15 = t;
  t = SSL_is_string(r_15);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_16, s_15);
  l_2 = t;
  t = SSLsetAnnotations(l_2, y_15);
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(w_15, x_15, t);
  return(t);
}
static ATerm j_6 (ATerm t)
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
      t = j_6(t);
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
  t = f_6(v_16, t);
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
      t = g_6(y_16, z_16, t);
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
                t = g_6(a_17, b_17, t);
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
  t = d_6(w_17, x_17, y_17, t);
  return(t);
}
static ATerm a_2 (ATerm t)
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
        t = u_6(m_17, p_17, t);
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
  t = e_6(z_1, i_17, d_17, t);
  t = if_verbose6_1_0(a_2, t);
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
ATerm filter_1_0 (ATerm i_78 (ATerm), ATerm t)
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
            ATerm z_4 = NULL,m_5 = NULL,n_5 = NULL,o_2 = NULL;
            t = SSLgetAnnotations(r_18);
            z_4 = t;
            t = t_18;
            t = i_78(t);
            m_5 = t;
            t = w_18;
            t = filter_1_0(i_78, t);
            n_5 = t;
            t = (ATerm) ATinsert(CheckATermList(n_5), m_5);
            o_2 = t;
            t = SSLsetAnnotations(o_2, z_4);
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
            t = w_18;
            t = filter_1_0(i_78, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm t)
{
  static ATerm z_18 (ATerm t)
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_68(t);
        t = z_18(t);
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        t = s_68(t);
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
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
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
  t = u_6(m_19, n_19, t);
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
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm c_19 = NULL;
  t = if_verbose5_1_0(e_2, t);
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
        t = u_6(d_19, e_19, t);
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
static ATerm n_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
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
  t = u_6(d_20, e_20, t);
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
static ATerm s_2 (ATerm t)
{
  t = debug_1_0(u_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_f_22;
  return(t);
}
static ATerm z_2 (ATerm t)
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
      t = if_verbose5_1_0(n_2, t);
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
                t = u_6(t_20, u_20, t);
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
      t = if_verbose5_1_0(s_2, t);
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm z_20 = NULL,w_5 = NULL,y_5 = NULL;
        z_20 = t;
        t = term_h_16;
        w_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_22), z_20), term_o_22);
        y_5 = t;
        t = SSL_printnl(w_5, y_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_22), z_20), term_o_22);
        t = if_verbose5_1_0(z_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_q_22;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm xtc_sglr_2_0 (ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm t)
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
            ATerm a_7 = NULL,q_2 = NULL;
            t = SSLgetAnnotations(m_21);
            a_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, l_21);
            q_2 = t;
            t = SSLsetAnnotations(q_2, a_7);
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
          t = j_96(t);
          t = xtc_find_0_0(t);
          o_21 = t;
          t = term_o_18;
          t = k_96(t);
          r_21 = t;
          t = term_o_18;
          t = pass_v_verbose_0_0(t);
          u_21 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(u_21), r_21), term_v_22), o_21), term_u_22), term_t_22);
          return(t);
        }
        t = xtc_transform_file_2_0(c_3, f_3, t);
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
          t = j_96(t);
          t = xtc_find_0_0(t);
          y_21 = t;
          t = term_o_18;
          t = k_96(t);
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
static ATerm o_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
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
        t = r_0(t);
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
        t = o_6(i_23, u_7, t);
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
              t = r_0(t);
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
              t = o_6(i_23, l_8, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_23);
              LocalPopChoice(z_22);
            }
          else
            {
              t = y_22;
              t = h_23;
              t = r_0(t);
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
static ATerm p_6 (ATerm k_36, ATerm l_36, ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL;
  r_23 = t;
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
        t = u_6(k_36, l_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_23 = ATgetFirst((ATermList) t);
            q_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_23);
        t = SSL_table_put(k_36, l_36, q_23);
        t = (ATerm) ATmakeAppl(sym__3, k_36, l_36, q_23);
      }
    else
      {
        t = b_23;
        t = SSL_table_remove(k_36, l_36);
        t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
      }
  }
  t = r_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm s_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  x_23 = t;
  t = j_80(t);
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
        t = u_6(w_23, z_23, t);
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
      t = p_6(w_23, a_24, t);
      return(t);
    }
    t = map_1_0(i_3, t);
  }
  t = x_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm t)
{
  ATerm g_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_81(t);
      t = k_81(t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = g_23;
      t = k_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_80 (ATerm), ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  f_24 = t;
  t = i_80(t);
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
        t = u_6(e_24, v_24, t);
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
static ATerm o_3 (ATerm t)
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
ATerm xtc_temp_files_1_0 (ATerm j_84 (ATerm), ATerm t)
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
          t = u_6(a_25, b_25, t);
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
    t = map_1_0(o_3, t);
    t = z_24;
    t = end_scope_1_0(r_3, t);
    return(t);
  }
  t = begin_scope_1_0(k_3, t);
  t = restore_always_2_0(j_84, l_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
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
ATerm xtc_io_1_0 (ATerm k_84 (ATerm), ATerm t)
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
    t = k_84(t);
    t = copy_to_1_0(t_3, t);
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
  t = term_q_8;
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
  t = x_6(t_25, s_25, t);
  t = r_25;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_3, w_3, x_3, t);
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
  t = term_i_8;
  z_25 = t;
  t = term_w_24;
  a_26 = t;
  t = term_x_24;
  t = x_6(z_25, a_26, t);
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
  t = term_i_8;
  d_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_8, c_26);
  t = x_6(d_26, c_26, t);
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
static ATerm g_4 (ATerm t)
{
  ATerm e_26 = NULL,h_26 = NULL;
  t = term_v_22;
  e_26 = t;
  t = term_o_18;
  h_26 = t;
  t = term_f_25;
  t = x_6(e_26, h_26, t);
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
            t = Option_3_0(f_4, g_4, j_4, t);
          }
      }
    }
  return(t);
}
static ATerm x_6 (ATerm f_38, ATerm g_38, ATerm t)
{
  ATerm i_26 = NULL;
  t = term_x_25;
  i_26 = t;
  t = SSL_table_put(i_26, f_38, g_38);
  t = (ATerm) ATmakeAppl(sym__3, term_x_25, f_38, g_38);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm l_26 = NULL,n_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_26 = NULL,p_26 = NULL,r_26 = NULL;
      t = term_o_18;
      t = i_0(t);
      o_26 = t;
      t = term_f_26;
      p_26 = t;
      t = term_g_26;
      r_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_26, term_g_26, o_26);
      t = v_6(p_26, r_26, o_26, t);
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
      t = d_0(t);
      t = term_o_18;
      t = g_0(t);
      v_26 = t;
      t = (ATerm) ATinsert(CheckATermList(n_26), v_26);
    }
  return(t);
}
static ATerm k_4 (ATerm t)
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
  t = x_6(g_27, z_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_26);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, m_4, n_4, t);
  return(t);
}
static ATerm v_6 (ATerm f_36, ATerm g_36, ATerm e_36, ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,l_27 = NULL;
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_36, g_36);
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
        t = (ATerm) ATmakeAppl(sym__2, f_36, g_36);
        t = u_6(f_36, g_36, t);
        LocalPopChoice(m_26);
      }
    else
      {
        t = k_26;
        t = (ATerm) ATempty;
      }
  }
  j_27 = t;
  t = (ATerm) ATinsert(CheckATermList(j_27), e_36);
  l_27 = t;
  t = SSL_table_put(f_36, g_36, l_27);
  t = i_27;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_27 = NULL,a_28 = NULL,c_28 = NULL;
      t = term_o_18;
      t = p_0(t);
      z_27 = t;
      t = term_f_26;
      a_28 = t;
      t = term_g_26;
      c_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_26, term_g_26, z_27);
      t = v_6(a_28, c_28, z_27, t);
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
      t = n_0(t);
      t = x_27;
      t = o_0(t);
      g_28 = t;
      t = (ATerm) ATinsert(CheckATermList(y_27), g_28);
    }
  return(t);
}
static ATerm q_4 (ATerm t)
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
  t = x_6(k_28, j_28, t);
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
  t = ArgOption_3_0(q_4, u_4, v_4, t);
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
  t = term_q_8;
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
static ATerm q_6 (ATerm e_33, ATerm f_33, ATerm t)
{
  ATerm x_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_33, f_33);
      LocalPopChoice(a_27);
    }
  else
    {
      t = x_26;
      t = SSL_addr(e_33, f_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_77 (ATerm), ATerm f_77 (ATerm), ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,z_28 = NULL;
  u_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_28;
      t = e_77(t);
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
      t = foldr_2_0(e_77, f_77, t);
      i_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_28, i_29);
      t = f_77(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_4 (ATerm t)
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
  t = q_6(d_9, e_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_29 = NULL,u_8 = NULL,w_8 = NULL;
  t = times_0_0(t);
  w_8 = t;
  t = SSL_explode_term(w_8);
  if(match_cons(t, sym__2))
    {
      ATerm b_27 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8;
  t = foldr_2_0(w_4, y_4, t);
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
ATerm if_verbose1_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm k_30 = NULL;
  k_30 = t;
  {
    ATerm h_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_30 = NULL;
        t = term_i_8;
        t = get_config_0_0(t);
        m_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_30, term_q_8);
        t = geq_0_0(t);
        t = k_30;
        t = v_81(t);
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
static ATerm a_5 (ATerm t)
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
  t = if_verbose1_1_0(a_5, t);
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
            ATerm v_9 = NULL,t_2 = NULL;
            t = SSLgetAnnotations(e_31);
            v_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_31);
            t_2 = t;
            t = SSLsetAnnotations(t_2, v_9);
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
ATerm need_help_1_0 (ATerm z_85 (ATerm), ATerm t)
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
  t = z_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_31 = ATgetFirst((ATermList) t);
      i_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_31 = NULL,n_31 = NULL;
        static ATerm d_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_31)), not_null(n_31));
          return(t);
        }
        t = i_31;
        t = l_0(t);
        if(((m_31 != NULL) && (m_31 != t)))
          _fail(t);
        else
          m_31 = t;
        t = h_31;
        t = k_0(t);
        if(((n_31 != NULL) && (n_31 != t)))
          _fail(t);
        else
          n_31 = t;
        t = i_31;
        t = reverse_acc_2_0(k_0, d_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_18;
      t = l_0(t);
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,a_3 = NULL;
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
  a_3 = t;
  t = SSLsetAnnotations(a_3, r_31);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_5 (ATerm t)
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
      t = fetch_1_0(f_5, t);
    }
  t = term_t_27;
  t = echo_0_0(t);
  t = term_f_26;
  p_31 = t;
  t = term_g_26;
  q_31 = t;
  t = term_u_27;
  t = u_6(p_31, q_31, t);
  t = reverse_acc_2_0(_id, h_5, t);
  t = map_1_0(j_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm w_70 (ATerm), ATerm t)
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
          ATerm l_10 = NULL,q_10 = NULL,p_3 = NULL;
          t = SSLgetAnnotations(r_32);
          l_10 = t;
          t = s_32;
          t = w_70(t);
          q_10 = t;
          t = (ATerm) ATinsert(CheckATermList(t_32), q_10);
          p_3 = t;
          t = SSLsetAnnotations(p_3, l_10);
          LocalPopChoice(d_28);
        }
      else
        {
          t = b_28;
          {
            ATerm b_11 = NULL,e_11 = NULL,q_3 = NULL;
            t = SSLgetAnnotations(r_32);
            b_11 = t;
            t = t_32;
            t = u_32(t);
            e_11 = t;
            t = (ATerm) ATinsert(CheckATermList(e_11), s_32);
            q_3 = t;
            t = SSLsetAnnotations(q_3, b_11);
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
static ATerm t_6 (ATerm z_31, ATerm a_32, ATerm t)
{
  t = SSL_strcat(z_31, a_32);
  return(t);
}
ATerm debug_1_0 (ATerm u_65 (ATerm), ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL;
  g_33 = t;
  t = u_65(t);
  h_33 = t;
  t = term_h_16;
  i_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_33), h_33);
  j_33 = t;
  t = SSL_printnl(i_33, j_33);
  t = g_33;
  return(t);
}
ATerm map_1_0 (ATerm m_70 (ATerm), ATerm t)
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
        ATerm t_11 = NULL,b_12 = NULL,f_12 = NULL,u_3 = NULL;
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
        t = m_70(t);
        b_12 = t;
        t = z_33;
        t = a_34(t);
        f_12 = t;
        t = (ATerm) ATinsert(CheckATermList(f_12), b_12);
        u_3 = t;
        t = SSLsetAnnotations(u_3, t_11);
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
      ATerm i_34 = NULL;
      i_34 = t;
      t = SSL_is_string(i_34);
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
              ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
              z_34 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_35 = ATgetArgument(t, 0);
                  t = a_35;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_35 = ATgetArgument(t, 0);
                      t = a_35;
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
                      ATerm f_35 = NULL,g_35 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_35 = ATgetArgument(t, 0);
                          b_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_35;
                      t = eval_config_0_0(t);
                      f_35 = t;
                      t = b_35;
                      t = eval_config_0_0(t);
                      g_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_35, g_35);
                      t = t_6(f_35, g_35, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_6 (ATerm w_37, ATerm x_37, ATerm t)
{
  t = SSL_table_get(w_37, x_37);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL;
  k_35 = t;
  t = term_x_25;
  l_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_25, k_35);
  t = u_6(l_35, k_35, t);
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_35 = NULL,n_35 = NULL;
        t = eval_config_0_0(t);
        m_35 = t;
        t = term_x_25;
        n_35 = t;
        t = SSL_table_put(n_35, k_35, m_35);
        t = m_35;
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
  ATerm q_35 = NULL,r_35 = NULL;
  t = term_e_29;
  q_35 = t;
  t = term_o_18;
  r_35 = t;
  t = term_f_29;
  t = x_6(q_35, r_35, t);
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
static ATerm x_5 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL;
  t = term_e_29;
  u_35 = t;
  t = term_o_18;
  v_35 = t;
  t = term_f_29;
  t = x_6(u_35, v_35, t);
  t = term_v_18;
  s_35 = t;
  t = term_o_18;
  t_35 = t;
  t = term_h_29;
  t = x_6(s_35, t_35, t);
  t = term_j_29;
  return(t);
}
static ATerm a_6 (ATerm t)
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
      t = Option_3_0(v_5, x_5, a_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_57 (ATerm), ATerm n_57 (ATerm), ATerm t)
{
  ATerm w_35 = NULL,y_35 = NULL,z_35 = NULL,h_36 = NULL,i_36 = NULL,m_36 = NULL,b_5 = NULL;
  m_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_35 = ATgetFirst((ATermList) t);
      z_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_36);
  w_35 = t;
  t = y_35;
  t = m_57(t);
  h_36 = t;
  t = z_35;
  t = n_57(t);
  i_36 = t;
  t = (ATerm) ATinsert(CheckATermList(i_36), h_36);
  b_5 = t;
  t = SSLsetAnnotations(b_5, w_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,w_36 = NULL,x_36 = NULL,e_5 = NULL;
  r_36 = t;
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_29;
        t = x_87(t);
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
      }
  }
  t = r_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_36 = ATgetFirst((ATermList) t);
      u_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_36);
  s_36 = t;
  t = term_w_26;
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_26, t_36);
  t = x_6(x_36, t_36, t);
  t = u_36;
  {
    static ATerm q_37 (ATerm t)
    {
      ATerm r_29 = t;
      int s_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_29 = t;
          int u_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_37 = NULL;
              a_37 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_37;
              LocalPopChoice(u_29);
            }
          else
            {
              t = t_29;
              t = x_87(t);
              t = Cons_2_0(_id, q_37, t);
            }
          LocalPopChoice(s_29);
        }
      else
        {
          t = r_29;
          {
            ATerm i_37 = NULL,j_37 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_37 = ATgetFirst((ATermList) t);
                j_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(j_37), (ATerm) ATmakeAppl(sym_Undefined_1, i_37));
          }
        }
      return(t);
    }
    t = q_37(t);
  }
  w_36 = t;
  t = (ATerm) ATinsert(CheckATermList(w_36), (ATerm) ATmakeAppl(sym_Program_1, t_36));
  e_5 = t;
  t = SSLsetAnnotations(e_5, s_36);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm e_38 = NULL;
  e_38 = t;
  if(match_string(t, "--help"))
    {
      t = e_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_38;
        }
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL;
  t = term_p_27;
  h_38 = t;
  t = term_o_18;
  i_38 = t;
  t = term_v_29;
  t = x_6(h_38, i_38, t);
  t = term_w_29;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_x_29;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm v_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL;
  z_37 = t;
  t = term_f_26;
  b_38 = t;
  t = term_g_26;
  c_38 = t;
  t = (ATerm) ATempty;
  d_38 = t;
  t = SSL_table_put(b_38, c_38, d_38);
  t = z_37;
  {
    static ATerm m_6 (ATerm t)
    {
      ATerm y_29 = t;
      int z_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_87(t);
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
                t = Option_3_0(w_6, z_6, b_7, t);
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
    t = parse_options_p__1_0(m_6, t);
  }
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_38 = NULL;
        u_38 = t;
        {
          ATerm h_30 = t;
          int i_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_13 = NULL;
              t = u_38;
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
                    t = fetch_1_0(c_7, t);
                  }
              }
              t = u_38;
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
                t = u_38;
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
              ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
              static ATerm e_7 (ATerm t)
              {
                ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,g_5 = NULL;
                a_39 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_38 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_39);
                y_38 = t;
                t = z_38;
                if(((v_37 != NULL) && (v_37 != t)))
                  _fail(t);
                else
                  v_37 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_38);
                g_5 = t;
                t = SSLsetAnnotations(g_5, y_38);
                return(t);
              }
              t = fetch_1_0(e_7, t);
              t = term_h_16;
              w_38 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_37)), term_u_30);
              x_38 = t;
              t = SSL_printnl(w_38, x_38);
              t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_37)), term_u_30));
              t = default_system_usage_0_0(t);
              t = term_q_8;
              v_38 = t;
              t = SSL_exit(v_38);
              LocalPopChoice(q_30);
            }
          else
            {
              t = n_30;
            }
        }
      }
  }
  y_37 = t;
  t = term_f_26;
  a_38 = t;
  t = SSL_table_destroy(a_38);
  t = y_37;
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL;
  t = parse_options_1_0(b_86, t);
  f_39 = t;
  t = term_v_30;
  i_39 = t;
  t = SSL_table_create(i_39);
  t = term_v_30;
  g_39 = t;
  t = term_w_30;
  h_39 = t;
  t = SSL_table_put(g_39, h_39, f_39);
  t = f_39;
  t = d_86(t);
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_86, t);
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
              t = e_86(t);
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
                  t = Option_3_0(i_7, j_7, m_7, t);
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
static ATerm g_7 (ATerm t)
{
  t = xtc_io_1_0(n_7, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm m_39 = NULL,p_39 = NULL;
  t = term_u_31;
  m_39 = t;
  t = term_o_18;
  p_39 = t;
  t = term_w_31;
  t = x_6(m_39, p_39, t);
  t = term_x_31;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_y_31;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = xtc_sglr_2_0(v_7, x_7, t);
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_40 = NULL,b_40 = NULL;
        b_40 = t;
        if(match_cons(t, sym_FILE_1))
          {
            a_40 = ATgetArgument(t, 0);
            {
              ATerm o_13 = NULL,i_5 = NULL;
              t = SSLgetAnnotations(b_40);
              o_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_40);
              i_5 = t;
              t = SSLsetAnnotations(i_5, o_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_40;
          }
        LocalPopChoice(c_32);
        t = xtc_transform_file_2_0(e_8, pass_verbose_0_0, t);
      }
    else
      {
        t = b_32;
        t = xtc_transform_term_2_0(f_8, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_d_32;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_e_32;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_f_32;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_f_32;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(f_7, default_usage_0_0, _id, g_7, t);
  return(t);
}
