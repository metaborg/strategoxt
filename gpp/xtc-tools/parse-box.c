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
ATerm term_b_32;
ATerm term_a_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_n_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_p_28;
ATerm term_w_27;
ATerm term_q_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_j_27;
ATerm term_t_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_l_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_c_24;
ATerm term_w_23;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_g_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_w_21;
ATerm term_u_21;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_k_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_o_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_z_19;
ATerm term_t_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_x_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_t_11;
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
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_q_10;
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
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_g_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_p_8;
ATerm term_h_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_9, term_p_8, term_m_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_p_9, term_t_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_x_9, term_y_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_10, term_d_10, term_e_10);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_10, term_j_10, term_k_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_10, term_q_10, term_r_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_10, term_v_10, term_w_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_a_11, term_c_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_f_11, term_g_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_k_11, term_l_11);
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
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_t_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_a_12, term_c_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_h_12, term_i_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_o_12, term_p_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_v_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_z_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_e_13, term_f_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_o_13, term_p_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_t_13, term_u_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_l_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_s_14, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_x_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_e_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_l_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_q_15);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_s_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_d_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_k_18, term_j_18);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__2, term_h_8, term_s_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_24);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym__2, term_b_25, term_n_18);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym__2, term_b_26, term_f_26);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_b_29, term_n_18);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym__2, term_t_18, term_n_18);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__2, term_m_27, term_n_18);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym__2, term_s_31, term_n_18);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.tbl", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm x_5 (ATerm i_33, ATerm j_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm f_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm i_6 (ATerm x_64 (ATerm), ATerm e_164, ATerm v_17, ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm t);
static ATerm j_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm z_69 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm m_63 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm t_83 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm d_70 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_7 (ATerm q_6, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm l_6 (ATerm n_79 (ATerm), ATerm q_34, ATerm o_34, ATerm t);
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
static ATerm z_5 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm a_6 (ATerm r_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm j_1 (ATerm t);
static ATerm b_6 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm t);
static ATerm c_6 (ATerm y_80 (ATerm), ATerm o_36, ATerm n_36, ATerm t);
static ATerm e_6 (ATerm p_38, ATerm q_38, ATerm t);
static ATerm y_13 (ATerm s_13, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_6 (ATerm t_17, ATerm t);
static ATerm g_6 (ATerm y_38, ATerm z_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_16 (ATerm q_14, ATerm t);
static ATerm r_16 (ATerm y_14, ATerm z_14, ATerm b_15, ATerm t);
static ATerm s_16 (ATerm r_15, ATerm s_15, ATerm v_15, ATerm t);
static ATerm h_6 (ATerm t);
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
static ATerm y_20 (ATerm a_20, ATerm t);
static ATerm t_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm xtc_sglr_1_0 (ATerm e_95 (ATerm), ATerm t);
static ATerm m_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm n_6 (ATerm m_35, ATerm n_35, ATerm t);
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
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm v_6 (ATerm h_37, ATerm i_37, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_6 (ATerm h_35, ATerm i_35, ATerm g_35, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm o_6 (ATerm c_33, ATerm d_33, ATerm t);
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
static ATerm k_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_69 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm r_6 (ATerm x_31, ATerm y_31, ATerm t);
ATerm debug_1_0 (ATerm v_64 (ATerm), ATerm t);
ATerm map_1_0 (ATerm n_69 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm s_6 (ATerm y_36, ATerm z_36, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_56 (ATerm), ATerm o_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_86 (ATerm), ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm parse_options_1_0 (ATerm s_86 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm x_5 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm w_4 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(i_33, j_33);
      LocalPopChoice(g_8);
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
  t = term_h_8;
  {
    ATerm k_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(n_8);
      }
    else
      {
        t = k_8;
        t = term_p_8;
      }
  }
  b_0 = t;
  t = term_p_8;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_p_8);
  t = x_5(b_0, q_0, t);
  j_0 = t;
  t = SSL_int_to_string(j_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_h_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_r_8;
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
      t = (ATerm) ATinsert(ATempty, term_s_8);
      d_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_0, (ATerm) ATinsert(ATempty, term_s_8));
      t = e_6(w_0, d_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm f_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm e_1 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_1);
  return(t);
}
static ATerm i_6 (ATerm x_64 (ATerm), ATerm e_164, ATerm v_17, ATerm t)
{
  ATerm f_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_164, term_t_8);
  t = h_6(t);
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
  t = f_6(i_1, k_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL;
  h_1 = t;
  t = xtc_new_file_0_0(t);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_1, h_1);
  t = i_6(f_0, g_1, h_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_1);
  t = xtc_transform_file_2_0(s_82, t_82, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm j_6 (ATerm f_14, ATerm g_14, ATerm t)
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_9), s_0), term_z_8);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_2), term_g_9), n_1), term_c_9), v_2);
      o_1 = t;
      t = SSL_concat_strings(o_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm z_69 (ATerm), ATerm t)
{
  ATerm b_3 = NULL;
  static ATerm h_0 (ATerm t)
  {
    t = z_69(t);
    if(((b_3 != NULL) && (b_3 != t)))
      _fail(t);
    else
      b_3 = t;
    return(t);
  }
  t = fetch_1_0(h_0, t);
  t = not_null(b_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm c_3 = NULL;
  c_3 = t;
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm j_9 = ATgetArgument(t, 0);
              if((c_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm k_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_15), term_n_15), term_i_15), term_a_15), term_u_14), term_m_14), term_i_14), term_x_13), term_q_13), term_l_13), term_g_13), term_a_13), term_w_12), term_q_12), term_m_12), term_d_12), term_x_11), term_q_11), term_m_11), term_i_11), term_d_11), term_x_10), term_t_10), term_n_10), term_f_10), term_z_9), term_u_9), term_n_9);
        t = fetch_elem_1_0(m_0, t);
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, c_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm l_3 = NULL,w_3 = NULL;
  l_3 = t;
  {
    ATerm u_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_15 = ATgetArgument(t, 0);
            w_3 = ATgetArgument(t, 1);
            {
              ATerm b_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_15);
        {
          ATerm c_16 = t;
          int d_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_1 = NULL,w_1 = NULL,x_1 = NULL;
              t = w_3;
              {
                ATerm e_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_16;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              u_1 = t;
              t = term_g_16;
              w_1 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, u_1), term_h_16);
              x_1 = t;
              t = SSL_printnl(w_1, x_1);
              t = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATinsert(ATinsert(ATempty, u_1), term_h_16));
              LocalPopChoice(d_16);
            }
          else
            {
              t = c_16;
              t = l_3;
            }
        }
      }
    else
      {
        t = u_15;
        t = l_3;
      }
  }
  t = l_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm m_63 (ATerm), ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL;
  g_4 = t;
  t = fork_0_0(t);
  f_4 = t;
  {
    ATerm i_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = g_4;
        t = m_63(t);
        LocalPopChoice(k_16);
      }
    else
      {
        t = i_16;
        t = SSL_waitpid(f_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_16 = ATgetArgument(t, 0);
            if(((ATgetType(l_16) != AT_INT) || (ATgetInt((ATermInt) l_16) != 0)))
              _fail(t);
            {
              ATerm p_16 = ATgetArgument(t, 1);
            }
            {
              ATerm q_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = g_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm k_4 = NULL,m_4 = NULL;
  m_4 = t;
  t = t_83(t);
  t = xtc_find_0_0(t);
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_4, m_4);
  {
    static ATerm u_0 (ATerm t)
    {
      ATerm o_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, k_4, m_4);
      t = j_6(k_4, m_4, t);
      t = term_x_16;
      o_4 = t;
      t = SSL_exit(o_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
  }
  t = m_4;
  return(t);
}
ATerm at_end_1_0 (ATerm d_70 (ATerm), ATerm t)
{
  static ATerm n_5 (ATerm t)
  {
    ATerm j_5 = NULL,l_5 = NULL,m_5 = NULL;
    m_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_5 = ATgetFirst((ATermList) t);
        l_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_2 = NULL,q_2 = NULL,a_2 = NULL;
          t = SSLgetAnnotations(m_5);
          h_2 = t;
          t = l_5;
          t = n_5(t);
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
        t = m_5;
        t = d_70(t);
      }
    return(t);
  }
  t = n_5(t);
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
static ATerm i_7 (ATerm q_6, ATerm t)
{
  ATerm u_6 = NULL;
  t = SSL_explode_term(q_6);
  if(match_cons(t, sym__2))
    {
      ATerm u_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_17) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm z_6 = NULL,c_7 = NULL,f_7 = NULL;
  f_7 = t;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_0 (ATerm t)
            {
              t = c_7;
              return(t);
            }
            t = z_6;
            t = at_end_1_0(x_0, t);
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
            t = i_7(f_7, t);
          }
      }
    }
  else
    {
      t = i_7(f_7, t);
    }
  return(t);
}
static ATerm l_6 (ATerm n_79 (ATerm), ATerm q_34, ATerm o_34, ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
  p_7 = t;
  t = n_79(t);
  m_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_7, q_34, o_34);
  t = t_6(m_7, q_34, o_34, t);
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL;
        t = term_j_18;
        s_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_7, term_j_18);
        t = s_6(m_7, s_7, t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
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
  t = term_j_18;
  q_7 = t;
  t = (ATerm) ATinsert(CheckATermList(o_7), (ATerm) ATinsert(CheckATermList(n_7), q_34));
  r_7 = t;
  t = SSL_table_put(m_7, q_7, r_7);
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
  t = term_k_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm v_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,f_8 = NULL;
  t = P__tmpdir_0_0(t);
  z_7 = t;
  t = term_l_18;
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_7, term_l_18);
  t = r_6(z_7, f_8, t);
  b_8 = t;
  t = term_m_18;
  c_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_8, term_m_18);
  t = r_6(b_8, c_8, t);
  a_8 = t;
  t = SSL_mkstemp(a_8);
  if(match_cons(t, sym__2))
    {
      x_7 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_n_18;
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_7, term_n_18);
  t = l_6(y_0, x_7, y_7, t);
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
      t = (ATerm) ATmakeAppl(sym__2, q_8, (ATerm) ATinsert(ATinsert(ATempty, o_8), term_o_18));
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
      t = (ATerm) ATmakeAppl(sym__2, y_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_8), term_o_18), j_8), term_p_18));
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
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_9 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        f_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_9, term_x_9);
        t = geq_0_0(t);
        t = a_9;
        t = t_80(t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        t = a_9;
      }
  }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_18);
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
  ATerm q_9 = NULL;
  static ATerm a_1 (ATerm t)
  {
    ATerm r_9 = NULL,s_9 = NULL;
    r_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_9), r_9);
    t = s_6(not_null(q_9), r_9, t);
    s_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_9, s_9);
    return(t);
  }
  if(((q_9 != NULL) && (q_9 != t)))
    _fail(t);
  else
    q_9 = t;
  t = SSL_table_keys(q_9);
  t = map_1_0(a_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm a_10 = NULL;
  a_10 = t;
  {
    ATerm u_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_10 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        c_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_10, term_w_14);
        t = geq_0_0(t);
        t = a_10;
        t = v_80(t);
        LocalPopChoice(x_18);
      }
    else
      {
        t = u_18;
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
    ATerm y_18 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_10 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        i_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_10, term_s_11);
        t = geq_0_0(t);
        t = g_10;
        t = u_80(t);
        LocalPopChoice(b_19);
      }
    else
      {
        t = y_18;
        t = g_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm l_10 = NULL;
  l_10 = t;
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_10 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        p_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_10, term_d_10);
        t = geq_0_0(t);
        t = l_10;
        t = w_80(t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = l_10;
      }
  }
  return(t);
}
static ATerm z_5 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  t = v_73(t);
  {
    static ATerm b_1 (ATerm t)
    {
      ATerm y_10 = NULL;
      y_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, y_10);
      t = u_73(t);
      return(t);
    }
    t = fetch_1_0(b_1, t);
  }
  t = p_24;
  return(t);
}
static ATerm a_6 (ATerm r_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  static ATerm b_12 (ATerm t)
  {
    ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
    u_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_11 = ATgetFirst((ATermList) t);
            w_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_11;
              {
                static ATerm c_1 (ATerm t)
                {
                  t = l_24;
                  return(t);
                }
                t = z_5(r_73, c_1, v_11, w_11, t);
              }
              t = b_12(t);
              LocalPopChoice(i_19);
            }
          else
            {
              t = h_19;
              {
                ATerm j_3 = NULL,p_3 = NULL,e_2 = NULL;
                t = SSLgetAnnotations(u_11);
                j_3 = t;
                t = w_11;
                t = b_12(t);
                p_3 = t;
                t = (ATerm) ATinsert(CheckATermList(p_3), v_11);
                e_2 = t;
                t = SSLsetAnnotations(e_2, j_3);
              }
            }
        }
      }
    return(t);
  }
  t = m_24;
  t = b_12(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm r_12 = NULL;
  if(match_cons(t, sym__2))
    {
      r_12 = ATgetArgument(t, 0);
      if((r_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_19 = ATgetArgument(t, 0);
            ATerm o_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
        t = s_6(e_36, f_36, t);
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        t = (ATerm) ATempty;
      }
  }
  l_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_12, g_36);
  t = a_6(j_1, l_12, g_36, t);
  k_12 = t;
  t = SSL_table_put(e_36, f_36, k_12);
  t = j_12;
  return(t);
}
static ATerm c_6 (ATerm y_80 (ATerm), ATerm o_36, ATerm n_36, ATerm t)
{
  static ATerm l_1 (ATerm t)
  {
    ATerm s_12 = NULL,d_13 = NULL;
    if(match_cons(t, sym__2))
      {
        s_12 = ATgetArgument(t, 0);
        d_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, o_36, s_12, d_13);
    t = y_80(t);
    return(t);
  }
  t = n_36;
  t = map_1_0(l_1, t);
  return(t);
}
static ATerm e_6 (ATerm p_38, ATerm q_38, ATerm t)
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
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_13);
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
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
static ATerm d_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm g_6 (ATerm y_38, ATerm z_38, ATerm t)
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
  ATerm d_14 = NULL;
  t = SSL_stdout_stream();
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_14 = NULL;
  t = SSL_stderr_stream();
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_14);
  return(t);
}
static ATerm o_16 (ATerm q_14, ATerm t)
{
  ATerm r_14 = NULL;
  t = SSL_explode_term(q_14);
  if(match_cons(t, sym__2))
    {
      ATerm s_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_19 = ATgetArgument(t, 1);
        if(((ATgetType(t_19) == AT_LIST) && !(ATisEmpty(t_19))))
          {
            r_14 = ATgetFirst((ATermList) t_19);
            {
              ATerm u_19 = (ATerm) ATgetNext((ATermList) t_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_14;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_16 (ATerm y_14, ATerm z_14, ATerm b_15, ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,m_15 = NULL,g_2 = NULL;
  t = SSLgetAnnotations(b_15);
  h_15 = t;
  t = y_14;
  if(match_cons(t, sym_Path_1))
    {
      m_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_15, z_14);
  g_2 = t;
  t = SSLsetAnnotations(g_2, h_15);
  if(match_cons(t, sym__2))
    {
      f_15 = ATgetArgument(t, 0);
      g_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(f_15, g_15, t);
  return(t);
}
static ATerm s_16 (ATerm r_15, ATerm s_15, ATerm v_15, ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,a_16 = NULL,f_16 = NULL,k_2 = NULL;
  t = SSLgetAnnotations(v_15);
  a_16 = t;
  t = SSL_is_string(r_15);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_16, s_15);
  k_2 = t;
  t = SSLsetAnnotations(k_2, a_16);
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(w_15, x_15, t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm j_16 = NULL,m_16 = NULL,n_16 = NULL;
  j_16 = t;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_16(j_16, t);
            LocalPopChoice(w_19);
          }
        else
          {
            t = v_19;
            {
              ATerm x_19 = t;
              int y_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_16(m_16, n_16, j_16, t);
                  LocalPopChoice(y_19);
                }
              else
                {
                  t = x_19;
                  t = s_16(m_16, n_16, j_16, t);
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
  t = term_z_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
  ATerm b_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_16 = NULL;
      w_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_16, term_f_20);
      t = h_6(t);
      LocalPopChoice(e_20);
    }
  else
    {
      t = b_20;
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
  t = d_6(v_16, t);
  t_16 = t;
  t = u_16;
  t = fclose_0_0(t);
  t = t_16;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_h_20;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm j_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_16 = NULL,z_16 = NULL;
      y_16 = t;
      t = (ATerm) ATinsert(ATempty, term_o_20);
      z_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_16, (ATerm) ATinsert(ATempty, term_o_20));
      t = e_6(y_16, z_16, t);
      LocalPopChoice(l_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = j_20;
      {
        ATerm p_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_20 = t;
            if((PushChoice() == 0))
              {
                ATerm a_17 = NULL,b_17 = NULL;
                a_17 = t;
                t = (ATerm) ATinsert(ATempty, term_s_8);
                b_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_17, (ATerm) ATinsert(ATempty, term_s_8));
                t = e_6(a_17, b_17, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_20;
              }
            t = debug_1_0(p_1, t);
            LocalPopChoice(t_20);
          }
        else
          {
            t = p_20;
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
  t = term_v_20;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_w_20;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL;
  q_17 = t;
  t = term_g_16;
  r_17 = t;
  t = (ATerm) ATinsert(ATempty, term_z_20);
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
  t = b_6(w_17, x_17, y_17, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  t = term_g_16;
  a_18 = t;
  t = (ATerm) ATinsert(ATempty, term_a_21);
  b_18 = t;
  t = SSL_printnl(a_18, b_18);
  t = z_17;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
  c_18 = t;
  t = term_g_16;
  d_18 = t;
  t = (ATerm) ATinsert(ATempty, term_z_20);
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
    ATerm b_21 = t;
    if((PushChoice() == 0))
      {
        ATerm m_17 = NULL,p_17 = NULL;
        t = term_c_21;
        m_17 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_17);
        p_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_21, (ATerm) ATmakeAppl(sym_Imported_1, c_17));
        t = s_6(m_17, p_17, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_21;
      }
  }
  e_17 = t;
  t = term_c_21;
  j_17 = t;
  t = term_d_21;
  k_17 = t;
  t = (ATerm) ATinsert(ATempty, c_17);
  l_17 = t;
  t = SSL_table_put(j_17, k_17, l_17);
  t = e_17;
  t = if_verbose4_1_0(t_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(y_1, t);
  d_17 = t;
  t = term_c_21;
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_21, d_17);
  t = c_6(z_1, i_17, d_17, t);
  t = if_verbose6_1_0(b_2, t);
  t = term_c_21;
  f_17 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, c_17);
  g_17 = t;
  t = (ATerm) ATempty;
  h_17 = t;
  t = SSL_table_put(f_17, g_17, h_17);
  t = (ATerm) ATmakeAppl(sym__3, term_c_21, (ATerm)ATmakeAppl(sym_Imported_1, c_17), (ATerm) ATempty);
  t = if_verbose4_1_0(c_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm j_77 (ATerm), ATerm t)
{
  ATerm s_18 = NULL,v_18 = NULL,w_18 = NULL;
  s_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_18;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_18 = ATgetFirst((ATermList) t);
          w_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_4 = NULL,o_5 = NULL,p_5 = NULL,n_2 = NULL;
            t = SSLgetAnnotations(s_18);
            z_4 = t;
            t = v_18;
            t = j_77(t);
            o_5 = t;
            t = w_18;
            t = filter_1_0(j_77, t);
            p_5 = t;
            t = (ATerm) ATinsert(CheckATermList(p_5), o_5);
            n_2 = t;
            t = SSLsetAnnotations(n_2, z_4);
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
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
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_67(t);
        t = z_18(t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = t_67(t);
      }
    return(t);
  }
  t = z_18(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_21;
      t = get_config_0_0(t);
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      {
        ATerm l_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_19 = NULL;
            t = term_o_21;
            a_19 = t;
            t = SSL_getenv(a_19);
            LocalPopChoice(n_21);
          }
        else
          {
            t = l_21;
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
  t = term_q_21;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm m_19 = NULL,p_19 = NULL;
  t = term_c_21;
  m_19 = t;
  t = term_s_21;
  p_19 = t;
  t = term_u_21;
  t = s_6(m_19, p_19, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm v_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_21;
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
  t = term_w_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm c_19 = NULL;
  t = if_verbose5_1_0(d_2, t);
  c_19 = t;
  {
    ATerm x_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_19 = NULL,e_19 = NULL;
        t = term_c_21;
        d_19 = t;
        t = term_d_21;
        e_19 = t;
        t = term_a_22;
        t = s_6(d_19, e_19, t);
        LocalPopChoice(z_21);
      }
    else
      {
        t = x_21;
        {
          ATerm l_19 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          l_19 = t;
          t = repeat_2_0(i_2, _id, t);
          t = l_19;
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
  t = term_b_22;
  return(t);
}
static ATerm y_20 (ATerm a_20, ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,g_20 = NULL;
  t = term_c_21;
  d_20 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, a_20);
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_21, (ATerm) ATmakeAppl(sym_Tool_1, a_20));
  t = s_6(d_20, g_20, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_22 = ATgetFirst((ATermList) t);
      if(match_cons(d_22, sym__2))
        {
          ATerm f_22 = ATgetArgument(d_22, 0);
          c_20 = ATgetArgument(d_22, 1);
        }
      else
        _fail(t);
      {
        ATerm e_22 = (ATerm) ATgetNext((ATermList) t);
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
  t = term_b_22;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_c_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(d_3, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_g_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_20 = NULL,m_20 = NULL,n_20 = NULL;
      t = if_verbose5_1_0(m_2, t);
      t = xtc_load_0_0(t);
      n_20 = t;
      if(match_cons(t, sym__2))
        {
          k_20 = ATgetArgument(t, 0);
          m_20 = ATgetArgument(t, 1);
          {
            ATerm j_22 = t;
            int k_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
                t = term_c_21;
                r_20 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, k_20);
                s_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_c_21, (ATerm) ATmakeAppl(sym_Tool_1, k_20));
                t = s_6(r_20, s_20, t);
                {
                  static ATerm r_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((m_20 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((q_20 != NULL) && (q_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          q_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(r_2, t);
                }
                t = not_null(q_20);
                LocalPopChoice(k_22);
              }
            else
              {
                t = j_22;
                t = y_20(n_20, t);
              }
          }
        }
      else
        {
          t = y_20(n_20, t);
        }
      t = if_verbose5_1_0(t_2, t);
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      {
        ATerm x_20 = NULL,w_5 = NULL,k_6 = NULL;
        x_20 = t;
        t = term_g_16;
        w_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_22), x_20), term_l_22);
        k_6 = t;
        t = SSL_printnl(w_5, k_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_22), x_20), term_l_22);
        t = if_verbose5_1_0(a_3, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_n_22;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm e_95 (ATerm), ATerm t)
{
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_21 = NULL,p_21 = NULL;
      p_21 = t;
      if(match_cons(t, sym_FILE_1))
        {
          m_21 = ATgetArgument(t, 0);
          {
            ATerm a_7 = NULL,p_2 = NULL;
            t = SSLgetAnnotations(p_21);
            a_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, m_21);
            p_2 = t;
            t = SSLsetAnnotations(p_2, a_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_21;
        }
      LocalPopChoice(p_22);
      {
        static ATerm f_3 (ATerm t)
        {
          ATerm r_21 = NULL,t_21 = NULL;
          t = term_n_18;
          t = e_95(t);
          t = xtc_find_0_0(t);
          r_21 = t;
          t = term_n_18;
          t = pass_v_verbose_0_0(t);
          t_21 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_21), r_21), term_r_22), term_q_22);
          return(t);
        }
        t = xtc_transform_file_2_0(e_3, f_3, t);
      }
    }
  else
    {
      t = o_22;
      {
        static ATerm h_3 (ATerm t)
        {
          ATerm y_21 = NULL,c_22 = NULL;
          t = term_n_18;
          t = e_95(t);
          t = xtc_find_0_0(t);
          y_21 = t;
          t = term_n_18;
          t = pass_v_verbose_0_0(t);
          c_22 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(c_22), y_21), term_r_22), term_q_22);
          return(t);
        }
        t = xtc_transform_term_2_0(g_3, h_3, t);
      }
    }
  return(t);
}
static ATerm m_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL;
  d_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_7 = NULL;
        t = d_23;
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
        t = (ATerm) ATmakeAppl(sym__2, e_23, u_7);
        t = m_6(e_23, u_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_23);
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        {
          ATerm u_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_8 = NULL;
              t = d_23;
              t = o_0(t);
              l_8 = t;
              {
                ATerm w_22 = t;
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
                            if((e_23 != t))
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
                    t = w_22;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, e_23, l_8);
              t = m_6(e_23, l_8, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_23);
              LocalPopChoice(v_22);
            }
          else
            {
              t = u_22;
              t = d_23;
              t = o_0(t);
              if((e_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_23);
            }
        }
      }
  }
  return(t);
}
static ATerm n_6 (ATerm m_35, ATerm n_35, ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL;
  n_23 = t;
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
        t = s_6(m_35, n_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_22 = ATgetFirst((ATermList) t);
            m_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_22);
        t = SSL_table_put(m_35, n_35, m_23);
        t = (ATerm) ATmakeAppl(sym__3, m_35, n_35, m_23);
      }
    else
      {
        t = x_22;
        t = SSL_table_remove(m_35, n_35);
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
      }
  }
  t = n_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
  t_23 = t;
  t = k_79(t);
  s_23 = t;
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL;
        t = term_j_18;
        v_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_23, term_j_18);
        t = s_6(s_23, v_23, t);
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_23 = ATgetFirst((ATermList) t);
      q_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_j_18;
  u_23 = t;
  t = SSL_table_put(s_23, u_23, q_23);
  t = r_23;
  {
    static ATerm i_3 (ATerm t)
    {
      ATerm y_23 = NULL;
      y_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_23, y_23);
      t = n_6(s_23, y_23, t);
      return(t);
    }
    t = map_1_0(i_3, t);
  }
  t = t_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm t)
{
  ATerm c_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_80(t);
      t = g_80(t);
      LocalPopChoice(f_23);
    }
  else
    {
      t = c_23;
      t = g_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_79 (ATerm), ATerm t)
{
  ATerm a_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,h_24 = NULL;
  d_24 = t;
  t = j_79(t);
  a_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_24, term_j_18);
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_23 = ATgetArgument(t, 0);
            ATerm j_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_18;
        n_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_24, term_j_18);
        t = s_6(a_24, n_24, t);
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        t = (ATerm) ATempty;
      }
  }
  e_24 = t;
  t = term_j_18;
  f_24 = t;
  t = (ATerm) ATinsert(CheckATermList(e_24), (ATerm) ATempty);
  h_24 = t;
  t = SSL_table_put(a_24, f_24, h_24);
  t = d_24;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_k_18;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm c_25 = NULL;
  c_25 = t;
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(c_25);
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = c_25;
      }
  }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm f_83 (ATerm), ATerm t)
{
  ATerm u_24 = NULL;
  static ATerm m_3 (ATerm t)
  {
    ATerm v_24 = NULL;
    v_24 = t;
    {
      ATerm o_23 = t;
      int p_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_24 = NULL,x_24 = NULL;
          t = term_k_18;
          w_24 = t;
          t = term_j_18;
          x_24 = t;
          t = term_w_23;
          t = s_6(w_24, x_24, t);
          LocalPopChoice(p_23);
        }
      else
        {
          t = o_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((u_24 != NULL) && (u_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          u_24 = ATgetFirst((ATermList) t);
        {
          ATerm x_23 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = u_24;
    t = map_1_0(q_3, t);
    t = v_24;
    t = end_scope_1_0(r_3, t);
    return(t);
  }
  t = begin_scope_1_0(k_3, t);
  t = restore_always_2_0(f_83, m_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm z_23 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_18;
      t = get_config_0_0(t);
      LocalPopChoice(b_24);
    }
  else
    {
      t = z_23;
      t = term_c_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm g_83 (ATerm), ATerm t)
{
  static ATerm t_3 (ATerm t)
  {
    ATerm g_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_25 = NULL;
        t = term_p_18;
        t = get_config_0_0(t);
        f_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, f_25);
        LocalPopChoice(i_24);
      }
    else
      {
        t = g_24;
        t = term_r_8;
      }
    t = g_83(t);
    t = copy_to_1_0(u_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(t_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
  g_25 = t;
  t = term_n_18;
  t = whoami_0_0(t);
  h_25 = t;
  t = term_g_16;
  j_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_24), h_25), term_j_24);
  k_25 = t;
  t = SSL_printnl(j_25, k_25);
  t = term_p_8;
  i_25 = t;
  t = SSL_exit(i_25);
  t = g_25;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm m_25 = NULL;
  m_25 = t;
  if(match_string(t, "-k"))
    {
      t = m_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_25;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,q_25 = NULL;
  n_25 = t;
  t = SSL_string_to_int(n_25);
  o_25 = t;
  t = term_o_24;
  q_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_24, o_25);
  t = v_6(q_25, o_25, t);
  t = n_25;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_3, x_3, y_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm s_25 = NULL;
  s_25 = t;
  if(match_string(t, "-S"))
    {
      t = s_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_25;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  t = term_h_8;
  t_25 = t;
  t = term_s_24;
  u_25 = t;
  t = term_t_24;
  t = v_6(t_25, u_25, t);
  t = term_y_24;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_z_24;
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
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
  x_25 = t;
  t = SSL_string_to_int(x_25);
  y_25 = t;
  t = term_h_8;
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_8, y_25);
  t = v_6(z_25, y_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_25);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_a_25;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL;
  t = term_b_25;
  c_26 = t;
  t = term_n_18;
  d_26 = t;
  t = term_d_25;
  t = v_6(c_26, d_26, t);
  t = term_e_25;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_l_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_3, a_4, b_4, t);
      LocalPopChoice(r_25);
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
            t = Option_3_0(h_4, i_4, j_4, t);
          }
      }
    }
  return(t);
}
static ATerm v_6 (ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm e_26 = NULL;
  t = term_a_26;
  e_26 = t;
  t = SSL_table_put(e_26, h_37, i_37);
  t = (ATerm) ATmakeAppl(sym__3, term_a_26, h_37, i_37);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_26 = NULL,m_26 = NULL,n_26 = NULL;
      t = term_n_18;
      t = e_0(t);
      k_26 = t;
      t = term_b_26;
      m_26 = t;
      t = term_f_26;
      n_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_26, term_f_26, k_26);
      t = t_6(m_26, n_26, k_26, t);
      _fail(t);
    }
  else
    {
      ATerm s_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_26 = ATgetFirst((ATermList) t);
          j_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_26;
      t = c_0(t);
      t = term_n_18;
      t = d_0(t);
      s_26 = t;
      t = (ATerm) ATinsert(CheckATermList(j_26), s_26);
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm u_26 = NULL;
  u_26 = t;
  if(match_string(t, "-o"))
    {
      t = u_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_26;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL;
  b_27 = t;
  t = term_o_18;
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_18, b_27);
  t = v_6(c_27, b_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_27);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_g_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, n_4, p_4, t);
  return(t);
}
static ATerm t_6 (ATerm h_35, ATerm i_35, ATerm g_35, ATerm t)
{
  ATerm e_27 = NULL,g_27 = NULL,h_27 = NULL;
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
  {
    ATerm h_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_26 = ATgetArgument(t, 0);
            ATerm p_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
        t = s_6(h_35, i_35, t);
        LocalPopChoice(l_26);
      }
    else
      {
        t = h_26;
        t = (ATerm) ATempty;
      }
  }
  g_27 = t;
  t = (ATerm) ATinsert(CheckATermList(g_27), g_35);
  h_27 = t;
  t = SSL_table_put(h_35, i_35, h_27);
  t = e_27;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_27 = NULL,x_27 = NULL,y_27 = NULL;
      t = term_n_18;
      t = n_0(t);
      v_27 = t;
      t = term_b_26;
      x_27 = t;
      t = term_f_26;
      y_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_26, term_f_26, v_27);
      t = t_6(x_27, y_27, v_27, t);
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
      t = s_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_27 = ATgetFirst((ATermList) t);
          u_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_27;
      t = k_0(t);
      t = t_27;
      t = l_0(t);
      c_28 = t;
      t = (ATerm) ATinsert(CheckATermList(u_27), c_28);
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm e_28 = NULL;
  e_28 = t;
  if(match_string(t, "-i"))
    {
      t = e_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_28;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL;
  f_28 = t;
  t = term_p_18;
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_18, f_28);
  t = v_6(g_28, f_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_28);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_q_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_4, u_4, v_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_28 = NULL,k_28 = NULL,n_28 = NULL,o_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_18;
  t = whoami_0_0(t);
  h_28 = t;
  t = term_g_16;
  n_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_26), h_28);
  o_28 = t;
  t = SSL_printnl(n_28, o_28);
  t = term_p_8;
  k_28 = t;
  t = SSL_exit(k_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_26;
  t = get_config_0_0(t);
  return(t);
}
static ATerm o_6 (ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_33, d_33);
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      t = SSL_addr(c_33, d_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,u_28 = NULL,x_28 = NULL;
  q_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_28;
      t = f_76(t);
    }
  else
    {
      ATerm e_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_28 = ATgetFirst((ATermList) t);
          x_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_28;
      t = foldr_2_0(f_76, g_76, t);
      e_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_28, e_29);
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
  t = term_s_24;
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
  t = o_6(d_9, e_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_29 = NULL,v_8 = NULL,w_8 = NULL;
  t = times_0_0(t);
  w_8 = t;
  t = SSL_explode_term(w_8);
  if(match_cons(t, sym__2))
    {
      ATerm x_26 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_8;
  t = foldr_2_0(x_4, y_4, t);
  j_29 = t;
  t = SSL_TicksToSeconds(j_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  a_30 = t;
  if(match_cons(t, sym__2))
    {
      b_30 = ATgetArgument(t, 0);
      c_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_30;
        if((b_30 != t))
          {
            _fail(t);
          }
        t = a_30;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATmakeAppl(sym__2, b_30, c_30);
        {
          ATerm a_27 = t;
          int d_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_30, c_30);
              LocalPopChoice(d_27);
            }
          else
            {
              t = a_27;
              t = SSL_gtr(b_30, c_30);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_30, c_30);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm g_30 = NULL;
  g_30 = t;
  {
    ATerm f_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_30 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        i_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_30, term_p_8);
        t = geq_0_0(t);
        t = g_30;
        t = r_80(t);
        LocalPopChoice(i_27);
      }
    else
      {
        t = f_27;
        t = g_30;
      }
  }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,n_30 = NULL,o_30 = NULL;
  t = run_time_0_0(t);
  k_30 = t;
  t = term_n_18;
  t = whoami_0_0(t);
  l_30 = t;
  t = term_g_16;
  n_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_27), k_30), term_c_9), l_30);
  o_30 = t;
  t = SSL_printnl(n_30, o_30);
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_27), k_30), term_c_9), l_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_24;
  p_30 = t;
  t = SSL_exit(p_30);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  a_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = a_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          z_30 = ATgetArgument(t, 0);
          {
            ATerm v_9 = NULL,s_2 = NULL;
            t = SSLgetAnnotations(a_31);
            v_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, z_30);
            s_2 = t;
            t = SSLsetAnnotations(s_2, v_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = a_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_27;
      t = get_config_0_0(t);
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
      t = fetch_1_0(c_5, t);
    }
  t = v_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_31 = ATgetFirst((ATermList) t);
      e_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_31 = NULL,j_31 = NULL;
        static ATerm e_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_31)), not_null(j_31));
          return(t);
        }
        t = e_31;
        t = i_0(t);
        if(((i_31 != NULL) && (i_31 != t)))
          _fail(t);
        else
          i_31 = t;
        t = d_31;
        t = g_0(t);
        if(((j_31 != NULL) && (j_31 != t)))
          _fail(t);
        else
          j_31 = t;
        t = e_31;
        t = reverse_acc_2_0(g_0, e_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_18;
      t = i_0(t);
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,z_2 = NULL;
  p_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_31);
  n_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_31);
  z_2 = t;
  t = SSLsetAnnotations(z_2, n_31);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm r_31 = NULL;
  r_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_31), term_n_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL;
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_26;
      t = get_config_0_0(t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      t = fetch_1_0(g_5, t);
    }
  t = term_q_27;
  t = echo_0_0(t);
  t = term_b_26;
  l_31 = t;
  t = term_f_26;
  m_31 = t;
  t = term_w_27;
  t = s_6(l_31, m_31, t);
  t = reverse_acc_2_0(_id, i_5, t);
  t = map_1_0(k_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  static ATerm q_32 (ATerm t)
  {
    ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
    n_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_32 = ATgetFirst((ATermList) t);
        p_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_27 = t;
      int a_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_10 = NULL,s_10 = NULL,n_3 = NULL;
          t = SSLgetAnnotations(n_32);
          m_10 = t;
          t = o_32;
          t = x_69(t);
          s_10 = t;
          t = (ATerm) ATinsert(CheckATermList(p_32), s_10);
          n_3 = t;
          t = SSLsetAnnotations(n_3, m_10);
          LocalPopChoice(a_28);
        }
      else
        {
          t = z_27;
          {
            ATerm b_11 = NULL,h_11 = NULL,o_3 = NULL;
            t = SSLgetAnnotations(n_32);
            b_11 = t;
            t = p_32;
            t = q_32(t);
            h_11 = t;
            t = (ATerm) ATinsert(CheckATermList(h_11), o_32);
            o_3 = t;
            t = SSLsetAnnotations(o_3, b_11);
          }
        }
    }
    return(t);
  }
  t = q_32(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  u_32 = t;
  {
    ATerm b_28 = t;
    int d_28 = stack_ptr;
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
                ATerm i_28 = ATgetFirst((ATermList) t);
                ATerm j_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_32;
          }
        LocalPopChoice(d_28);
      }
    else
      {
        t = b_28;
        t = (ATerm) ATinsert(ATempty, u_32);
      }
  }
  v_32 = t;
  t = term_c_24;
  w_32 = t;
  t = SSL_printnl(w_32, v_32);
  t = u_32;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm r_6 (ATerm x_31, ATerm y_31, ATerm t)
{
  t = SSL_strcat(x_31, y_31);
  return(t);
}
ATerm debug_1_0 (ATerm v_64 (ATerm), ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,e_33 = NULL,f_33 = NULL;
  a_33 = t;
  t = v_64(t);
  b_33 = t;
  t = term_g_16;
  e_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_33), b_33);
  f_33 = t;
  t = SSL_printnl(e_33, f_33);
  t = a_33;
  return(t);
}
ATerm map_1_0 (ATerm n_69 (ATerm), ATerm t)
{
  static ATerm w_33 (ATerm t)
  {
    ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
    t_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_33;
      }
    else
      {
        ATerm y_11 = NULL,e_12 = NULL,f_12 = NULL,s_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_33 = ATgetFirst((ATermList) t);
            v_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_33);
        y_11 = t;
        t = u_33;
        t = n_69(t);
        e_12 = t;
        t = v_33;
        t = w_33(t);
        f_12 = t;
        t = (ATerm) ATinsert(CheckATermList(f_12), e_12);
        s_3 = t;
        t = SSLsetAnnotations(s_3, y_11);
      }
    return(t);
  }
  t = w_33(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_34 = NULL;
      e_34 = t;
      t = SSL_is_string(e_34);
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      {
        ATerm t_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_5, t);
            LocalPopChoice(v_28);
          }
        else
          {
            t = t_28;
            {
              ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
              v_34 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_34 = ATgetArgument(t, 0);
                  t = w_34;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_34 = ATgetArgument(t, 0);
                      t = w_34;
                      {
                        ATerm w_28 = t;
                        int y_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(y_28);
                          }
                        else
                          {
                            t = w_28;
                            t = debug_1_0(r_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_35 = NULL,k_35 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_34 = ATgetArgument(t, 0);
                          x_34 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_34;
                      t = eval_config_0_0(t);
                      j_35 = t;
                      t = x_34;
                      t = eval_config_0_0(t);
                      k_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_35, k_35);
                      t = r_6(j_35, k_35, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_6 (ATerm y_36, ATerm z_36, ATerm t)
{
  t = SSL_table_get(y_36, z_36);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL;
  r_35 = t;
  t = term_a_26;
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_26, r_35);
  t = s_6(s_35, r_35, t);
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_35 = NULL,u_35 = NULL;
        t = eval_config_0_0(t);
        t_35 = t;
        t = term_a_26;
        u_35 = t;
        t = SSL_table_put(u_35, r_35, t_35);
        t = t_35;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
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
  ATerm x_35 = NULL,y_35 = NULL;
  t = term_b_29;
  x_35 = t;
  t = term_n_18;
  y_35 = t;
  t = term_c_29;
  t = v_6(x_35, y_35, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_d_29;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
  t = term_b_29;
  b_36 = t;
  t = term_n_18;
  c_36 = t;
  t = term_c_29;
  t = v_6(b_36, c_36, t);
  t = term_t_18;
  z_35 = t;
  t = term_n_18;
  a_36 = t;
  t = term_f_29;
  t = v_6(z_35, a_36, t);
  t = term_g_29;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_5, t_5, u_5, t);
      LocalPopChoice(k_29);
    }
  else
    {
      t = i_29;
      t = Option_3_0(v_5, y_5, p_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_56 (ATerm), ATerm o_56 (ATerm), ATerm t)
{
  ATerm d_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,r_36 = NULL,a_5 = NULL;
  r_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_36 = ATgetFirst((ATermList) t);
      k_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_36);
  d_36 = t;
  t = j_36;
  t = n_56(t);
  l_36 = t;
  t = k_36;
  t = o_56(t);
  m_36 = t;
  t = (ATerm) ATinsert(CheckATermList(m_36), l_36);
  a_5 = t;
  t = SSLsetAnnotations(a_5, d_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,a_37 = NULL,b_37 = NULL,d_37 = NULL,e_37 = NULL,d_5 = NULL;
  w_36 = t;
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_29;
        t = t_86(t);
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
      }
  }
  t = w_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_37 = ATgetFirst((ATermList) t);
      b_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_36);
  x_36 = t;
  t = term_t_26;
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_26, a_37);
  t = v_6(e_37, a_37, t);
  t = b_37;
  {
    static ATerm v_37 (ATerm t)
    {
      ATerm o_29 = t;
      int p_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_29 = t;
          int r_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_37 = NULL;
              j_37 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_37;
              LocalPopChoice(r_29);
            }
          else
            {
              t = q_29;
              t = t_86(t);
              t = Cons_2_0(_id, v_37, t);
            }
          LocalPopChoice(p_29);
        }
      else
        {
          t = o_29;
          {
            ATerm m_37 = NULL,n_37 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_37 = ATgetFirst((ATermList) t);
                n_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_37), (ATerm) ATmakeAppl(sym_Undefined_1, m_37));
          }
        }
      return(t);
    }
    t = v_37(t);
  }
  d_37 = t;
  t = (ATerm) ATinsert(CheckATermList(d_37), (ATerm) ATmakeAppl(sym_Program_1, a_37));
  d_5 = t;
  t = SSLsetAnnotations(d_5, x_36);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm h_38 = NULL;
  h_38 = t;
  if(match_string(t, "--help"))
    {
      t = h_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_38;
        }
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL;
  t = term_m_27;
  i_38 = t;
  t = term_n_18;
  j_38 = t;
  t = term_s_29;
  t = v_6(i_38, j_38, t);
  t = term_t_29;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_u_29;
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
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL;
  c_38 = t;
  t = term_b_26;
  e_38 = t;
  t = term_f_26;
  f_38 = t;
  t = (ATerm) ATempty;
  g_38 = t;
  t = SSL_table_put(e_38, f_38, g_38);
  t = c_38;
  {
    static ATerm w_6 (ATerm t)
    {
      ATerm v_29 = t;
      int w_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_86(t);
          LocalPopChoice(w_29);
        }
      else
        {
          t = v_29;
          {
            ATerm x_29 = t;
            int y_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_6, y_6, b_7, t);
                LocalPopChoice(y_29);
              }
            else
              {
                t = x_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_6, t);
  }
  {
    ATerm z_29 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_38 = NULL;
        s_38 = t;
        {
          ATerm e_30 = t;
          int f_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_13 = NULL;
              t = s_38;
              {
                ATerm h_30 = t;
                int j_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_27;
                    t = get_config_0_0(t);
                    LocalPopChoice(j_30);
                  }
                else
                  {
                    t = h_30;
                    t = fetch_1_0(d_7, t);
                  }
              }
              t = s_38;
              t = default_system_usage_0_0(t);
              t = term_s_24;
              c_13 = t;
              t = SSL_exit(c_13);
              LocalPopChoice(f_30);
            }
          else
            {
              t = e_30;
              {
                ATerm h_13 = NULL;
                t = term_b_29;
                t = get_config_0_0(t);
                t = s_38;
                t = default_system_about_0_0(t);
                t = term_s_24;
                h_13 = t;
                t = SSL_exit(h_13);
              }
            }
        }
        LocalPopChoice(d_30);
      }
    else
      {
        t = z_29;
        {
          ATerm m_30 = t;
          int q_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
              static ATerm e_7 (ATerm t)
              {
                ATerm w_38 = NULL,x_38 = NULL,c_39 = NULL,f_5 = NULL;
                c_39 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_38 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_39);
                w_38 = t;
                t = x_38;
                if(((a_38 != NULL) && (a_38 != t)))
                  _fail(t);
                else
                  a_38 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_38);
                f_5 = t;
                t = SSLsetAnnotations(f_5, w_38);
                return(t);
              }
              t = fetch_1_0(e_7, t);
              t = term_g_16;
              u_38 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_38)), term_r_30);
              v_38 = t;
              t = SSL_printnl(u_38, v_38);
              t = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_38)), term_r_30));
              t = default_system_usage_0_0(t);
              t = term_p_8;
              t_38 = t;
              t = SSL_exit(t_38);
              LocalPopChoice(q_30);
            }
          else
            {
              t = m_30;
            }
        }
      }
  }
  b_38 = t;
  t = term_b_26;
  d_38 = t;
  t = SSL_table_destroy(d_38);
  t = b_38;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
  t = parse_options_1_0(x_84, t);
  h_39 = t;
  t = term_s_30;
  k_39 = t;
  t = SSL_table_create(k_39);
  t = term_s_30;
  i_39 = t;
  t = term_t_30;
  j_39 = t;
  t = SSL_table_put(i_39, j_39, h_39);
  t = h_39;
  t = z_84(t);
  {
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_84, t);
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
        {
          ATerm w_30 = t;
          int x_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_85(t);
              t = report_success_0_0(t);
              LocalPopChoice(x_30);
            }
          else
            {
              t = w_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm y_30 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(b_31);
    }
  else
    {
      t = y_30;
      {
        ATerm c_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(f_31);
          }
        else
          {
            t = c_31;
            {
              ATerm g_31 = t;
              int h_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(j_7, k_7, l_7, t);
                  LocalPopChoice(h_31);
                }
              else
                {
                  t = g_31;
                  {
                    ATerm k_31 = t;
                    int q_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(q_31);
                      }
                    else
                      {
                        t = k_31;
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
static ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL;
  t = term_s_31;
  r_39 = t;
  t = term_n_18;
  s_39 = t;
  t = term_t_31;
  t = v_6(r_39, s_39, t);
  t = term_u_31;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_v_31;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = xtc_sglr_1_0(w_7, t);
  {
    ATerm w_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_40 = NULL,g_40 = NULL;
        g_40 = t;
        if(match_cons(t, sym_FILE_1))
          {
            f_40 = ATgetArgument(t, 0);
            {
              ATerm n_13 = NULL,h_5 = NULL;
              t = SSLgetAnnotations(g_40);
              n_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_40);
              h_5 = t;
              t = SSLsetAnnotations(h_5, n_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_40;
          }
        LocalPopChoice(z_31);
        t = xtc_transform_file_2_0(d_8, pass_verbose_0_0, t);
      }
    else
      {
        t = w_31;
        t = xtc_transform_term_2_0(e_8, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_a_32;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_b_32;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(g_7, default_usage_0_0, _id, h_7, t);
  return(t);
}
