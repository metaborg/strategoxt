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
Symbol sym_Path_1;
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
ATerm term_d_32;
ATerm term_o_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_i_30;
ATerm term_u_29;
ATerm term_q_29;
ATerm term_o_29;
ATerm term_a_29;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_b_27;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_z_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_q_24;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_x_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_h_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_l_17;
ATerm term_e_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_g_8;
ATerm term_c_8;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_s_7;
ATerm term_n_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_s_7);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_g_8);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_9, term_k_8, term_e_9);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_9, term_j_9, term_k_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_9, term_t_9, term_u_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_9, term_y_9, term_z_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_10, term_c_10, term_g_10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_10, term_k_10, term_n_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_10, term_t_10, term_u_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_z_10, term_a_11);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_11, term_f_11, term_k_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_11, term_s_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_v_11, term_a_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_h_12, term_j_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_n_12, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_s_12, term_x_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_g_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_k_13, term_n_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_v_13, term_w_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_i_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_n_14, term_q_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_x_14, term_y_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_g_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_j_15, term_k_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_o_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_t_15, term_u_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_y_15, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_d_16, term_e_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_j_16, term_k_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_e_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, term_h_21, term_k_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym__2, term_h_21, term_i_21);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_l_17);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_d_25);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_25);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym__2, term_i_25, term_x_17);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_d_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_j_27);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_s_25, term_t_25);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym__2, term_h_28, term_x_17);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym__2, term_h_18, term_x_17);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym__2, term_j_27, term_x_17);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_h_28);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym__2, term_h_31, term_x_17);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_c_18);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.tbl", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm k_6 (ATerm o_14, ATerm p_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm u_5 (ATerm w_33, ATerm x_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm c_6 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm f_6 (ATerm i_67 (ATerm), ATerm b_168, ATerm y_17, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm t);
static ATerm g_6 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm k_72 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm x_65 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm x_86 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm p_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_10 (ATerm h_9, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm i_6 (ATerm m_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm x_83 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
ATerm pass_v_verbose_0_0 (ATerm t);
ATerm debug_1_0 (ATerm g_67 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm z_83 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm y_83 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm a_84 (ATerm), ATerm t);
static ATerm w_5 (ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm x_5 (ATerm j_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm c_1 (ATerm t);
static ATerm y_5 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm z_5 (ATerm c_84 (ATerm), ATerm y_37, ATerm x_37, ATerm t);
static ATerm b_6 (ATerm h_40, ATerm i_40, ATerm t);
static ATerm z_17 (ATerm k_17, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm a_6 (ATerm u_17, ATerm t);
static ATerm j_6 (ATerm l_32, ATerm m_32, ATerm t);
static ATerm d_6 (ATerm q_40, ATerm r_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_19 (ATerm l_18, ATerm t);
static ATerm s_19 (ATerm p_18, ATerm q_18, ATerm r_18, ATerm t);
static ATerm u_19 (ATerm z_18, ATerm a_19, ATerm b_19, ATerm t);
static ATerm e_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm n_25 (ATerm c_24, ATerm t);
static ATerm j_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm xtc_sglr_1_0 (ATerm n_98 (ATerm), ATerm t);
static ATerm p_6 (ATerm i_38, ATerm j_38, ATerm t);
static ATerm l_6 (ATerm w_36, ATerm x_36, ATerm t);
ATerm end_scope_1_0 (ATerm j_82 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_82 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm j_86 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_6 (ATerm e_39, ATerm f_39, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_6 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_6 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_83 (ATerm), ATerm t);
static ATerm b_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm need_help_1_0 (ATerm z_87 (ATerm), ATerm t);
ATerm map_1_0 (ATerm y_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_72 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm x_58 (ATerm), ATerm y_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm x_89 (ATerm), ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm parse_options_1_0 (ATerm w_89 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm t);
static ATerm r_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,n_1 = NULL;
  l_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_7 = t;
    int d_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = l_1;
        t = o_0(t);
        h_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = h_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = h_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, n_1, h_0);
        t = k_6(n_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
        LocalPopChoice(d_7);
      }
    else
      {
        t = c_7;
        {
          ATerm g_7 = t;
          int h_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_0 = NULL;
              t = l_1;
              t = o_0(t);
              w_0 = t;
              {
                ATerm j_7 = t;
                if((PushChoice() == 0))
                  {
                    ATerm a_1 = NULL;
                    a_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = a_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = a_1;
                          }
                        else
                          {
                            t = a_1;
                            if((n_1 != t))
                              {
                                _fail(t);
                              }
                            t = a_1;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_7;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, n_1, w_0);
              t = k_6(n_1, w_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
              LocalPopChoice(h_7);
            }
          else
            {
              t = g_7;
              t = l_1;
              t = o_0(t);
              if((n_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
            }
        }
      }
  }
  return(t);
}
static ATerm k_6 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_copy(o_14, p_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm k_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 = NULL,t_2 = NULL;
      t = term_n_7;
      s_2 = t;
      t = term_s_7;
      t_2 = t;
      t = term_w_7;
      t = p_6(s_2, t_2, t);
      LocalPopChoice(m_7);
    }
  else
    {
      t = k_7;
      t = term_y_7;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm q_2 = NULL;
  q_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_1 = NULL,m_1 = NULL;
      t = term_s_7;
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 = NULL,p_1 = NULL;
            t = term_n_7;
            o_1 = t;
            t = term_s_7;
            p_1 = t;
            t = term_w_7;
            t = p_6(o_1, p_1, t);
            LocalPopChoice(a_8);
          }
        else
          {
            t = z_7;
            t = term_y_7;
          }
      }
      f_1 = t;
      t = term_c_8;
      m_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_c_8, f_1);
      t = k_6(m_1, f_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm d_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm u_5 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_33, x_33);
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      t = SSL_subtr(w_33, x_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL;
  t = term_g_8;
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_3 = NULL,c_3 = NULL;
        t = term_n_7;
        b_3 = t;
        t = term_g_8;
        c_3 = t;
        t = term_j_8;
        t = p_6(b_3, c_3, t);
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        t = term_k_8;
      }
  }
  y_2 = t;
  t = term_k_8;
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, term_k_8);
  t = u_5(y_2, a_3, t);
  z_2 = t;
  t = SSL_int_to_string(z_2);
  x_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_2), term_g_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm g_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_c_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm i_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          g_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_l_8);
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_3, (ATerm) ATinsert(ATempty, term_l_8));
      t = b_6(g_3, i_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm c_6 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm k_3 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_3);
  return(t);
}
static ATerm f_6 (ATerm i_67 (ATerm), ATerm b_168, ATerm y_17, ATerm t)
{
  ATerm m_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_168, term_m_8);
  t = e_6(t);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_3, y_17);
  t = i_67(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm t_3 = NULL,v_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_8 = ATgetArgument(t, 0);
      if(match_cons(o_8, sym_Stream_1))
        {
          t_3 = ATgetArgument(o_8, 0);
        }
      else
        _fail(t);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(t_3, v_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,s_3 = NULL;
  s_3 = t;
  t = xtc_new_file_0_0(t);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_3, s_3);
  t = f_6(b_0, q_3, s_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_3);
  t = xtc_transform_file_2_0(w_85, x_85, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm g_6 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,z_4 = NULL;
  v_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      w_4 = ATgetArgument(t, 0);
      {
        ATerm u_1 = NULL,y_1 = NULL;
        t = SSL_int_to_string(w_4);
        u_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_8), u_1), term_p_8);
        y_1 = t;
        t = SSL_concat_strings(y_1);
      }
    }
  else
    {
      ATerm l_2 = NULL,m_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          w_4 = ATgetArgument(t, 0);
          x_4 = ATgetArgument(t, 1);
          z_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(x_4);
      l_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_4), term_t_8), l_2), term_s_8), w_4);
      m_2 = t;
      t = SSL_concat_strings(m_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm k_72 (ATerm), ATerm t)
{
  ATerm c_5 = NULL;
  static ATerm f_0 (ATerm t)
  {
    t = k_72(t);
    if(((c_5 != NULL) && (c_5 != t)))
      _fail(t);
    else
      c_5 = t;
    return(t);
  }
  t = fetch_1_0(f_0, t);
  t = not_null(c_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm e_5 = NULL;
  e_5 = t;
  {
    ATerm u_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm b_9 = ATgetArgument(t, 0);
              if((e_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm c_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_16), term_g_16), term_b_16), term_v_15), term_p_15), term_l_15), term_h_15), term_d_15), term_z_14), term_s_14), term_k_14), term_x_13), term_q_13), term_h_13), term_y_12), term_p_12), term_l_12), term_d_12), term_t_11), term_o_11), term_b_11), term_v_10), term_r_10), term_h_10), term_a_10), term_w_9), term_n_9), term_f_9);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(w_8);
      }
    else
      {
        t = u_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, e_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm j_5 = NULL,t_6 = NULL;
  j_5 = t;
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm p_16 = ATgetArgument(t, 0);
            t_6 = ATgetArgument(t, 1);
            {
              ATerm q_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_16);
        {
          ATerm t_16 = t;
          int u_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_3 = NULL,n_3 = NULL,o_3 = NULL;
              t = t_6;
              {
                ATerm w_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_16;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              j_3 = t;
              t = term_x_16;
              n_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, j_3), term_y_16);
              o_3 = t;
              t = SSL_printnl(n_3, o_3);
              t = (ATerm) ATmakeAppl(sym__2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, j_3), term_y_16));
              LocalPopChoice(u_16);
            }
          else
            {
              t = t_16;
              t = j_5;
            }
        }
      }
    else
      {
        t = n_16;
        t = j_5;
      }
  }
  t = j_5;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm x_65 (ATerm), ATerm t)
{
  ATerm i_7 = NULL,l_7 = NULL;
  l_7 = t;
  t = fork_0_0(t);
  i_7 = t;
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = l_7;
        t = x_65(t);
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        t = SSL_waitpid(i_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_17 = ATgetArgument(t, 0);
            if(((ATgetType(b_17) != AT_INT) || (ATgetInt((ATermInt) b_17) != 0)))
              _fail(t);
            {
              ATerm c_17 = ATgetArgument(t, 1);
            }
            {
              ATerm d_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = l_7;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL;
  q_7 = t;
  t = x_86(t);
  t = xtc_find_0_0(t);
  p_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_7, q_7);
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm r_7 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, p_7, q_7);
      t = g_6(p_7, q_7, t);
      t = term_e_17;
      r_7 = t;
      t = SSL_exit(r_7);
      return(t);
    }
    t = fork_and_wait_1_0(m_0, t);
  }
  t = q_7;
  return(t);
}
ATerm at_end_1_0 (ATerm p_72 (ATerm), ATerm t)
{
  static ATerm a_9 (ATerm t)
  {
    ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
    z_8 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_8 = ATgetFirst((ATermList) t);
        y_8 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_3 = NULL,a_4 = NULL,u_0 = NULL;
          t = SSLgetAnnotations(z_8);
          x_3 = t;
          t = y_8;
          t = a_9(t);
          a_4 = t;
          t = (ATerm) ATinsert(CheckATermList(a_4), x_8);
          u_0 = t;
          t = SSLsetAnnotations(u_0, x_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_8;
        t = p_72(t);
      }
    return(t);
  }
  t = a_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
  t_7 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_7;
    }
  else
    {
      static ATerm q_0 (ATerm t)
      {
        t = not_null(v_7);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_7 = ATgetFirst((ATermList) t);
          if(((v_7 != NULL) && (v_7 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_7;
      t = at_end_1_0(q_0, t);
    }
  return(t);
}
static ATerm d_10 (ATerm h_9, ATerm t)
{
  ATerm i_9 = NULL;
  t = SSL_explode_term(h_9);
  if(match_cons(t, sym__2))
    {
      ATerm f_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_9;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_9 = NULL,q_9 = NULL,v_9 = NULL;
  v_9 = t;
  if(match_cons(t, sym__2))
    {
      o_9 = ATgetArgument(t, 0);
      q_9 = ATgetArgument(t, 1);
      {
        ATerm g_17 = t;
        int h_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_0 (ATerm t)
            {
              t = q_9;
              return(t);
            }
            t = o_9;
            t = at_end_1_0(s_0, t);
            LocalPopChoice(h_17);
          }
        else
          {
            t = g_17;
            t = d_10(v_9, t);
          }
      }
    }
  else
    {
      t = d_10(v_9, t);
    }
  return(t);
}
static ATerm i_6 (ATerm m_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,i_10 = NULL,l_10 = NULL,o_10 = NULL,p_10 = NULL;
  l_10 = t;
  t = m_82(t);
  e_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_10, e_35, c_35);
  t = q_6(e_10, e_35, c_35, t);
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_10 = NULL;
        t = term_l_17;
        q_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_10, term_l_17);
        t = p_6(e_10, q_10, t);
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_10 = ATgetFirst((ATermList) t);
      i_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_l_17;
  o_10 = t;
  t = (ATerm) ATinsert(CheckATermList(i_10), (ATerm) ATinsert(CheckATermList(f_10), e_35));
  p_10 = t;
  t = SSL_table_put(e_10, o_10, p_10);
  t = l_10;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm y_10 = NULL;
  ATerm m_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_11 = NULL,y_4 = NULL;
      d_11 = t;
      t = term_r_17;
      y_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_11, term_r_17);
      t = j_6(d_11, y_4, t);
      y_10 = t;
      t = SSL_mkstemp(y_10);
      LocalPopChoice(q_17);
    }
  else
    {
      t = m_17;
      {
        ATerm e_11 = NULL;
        t = term_t_17;
        e_11 = t;
        t = SSL_perror(e_11);
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
static ATerm t_0 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,l_11 = NULL;
  t = P__tmpdir_0_0(t);
  j_11 = t;
  t = term_w_17;
  l_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_11, term_w_17);
  t = j_6(j_11, l_11, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      h_11 = ATgetArgument(t, 0);
      g_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_x_17;
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_11, term_x_17);
  t = i_6(t_0, h_11, i_11, t);
  t = SSL_close(g_11);
  t = h_11;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm p_11 = NULL,w_11 = NULL;
  p_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm y_11 = NULL,z_11 = NULL;
      t = p_11;
      t = xtc_new_file_0_0(t);
      y_11 = t;
      t = r_0(t);
      z_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_11, (ATerm) ATinsert(ATinsert(ATempty, y_11), term_s_7));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_11);
    }
  else
    {
      ATerm b_12 = NULL,c_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_11;
      t = xtc_new_file_0_0(t);
      b_12 = t;
      t = r_0(t);
      c_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_12), term_s_7), w_11), term_c_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_12);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  ATerm g_12 = NULL;
  g_12 = t;
  {
    ATerm d_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_12 = NULL,k_12 = NULL,r_12 = NULL;
        t = term_n_7;
        k_12 = t;
        t = term_g_8;
        r_12 = t;
        t = term_j_8;
        t = p_6(k_12, r_12, t);
        i_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_12, term_t_9);
        t = geq_0_0(t);
        t = g_12;
        t = x_83(t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = d_18;
        t = g_12;
      }
  }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_18);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(v_0, t);
  return(t);
}
ATerm debug_1_0 (ATerm g_67 (ATerm), ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,w_12 = NULL,z_12 = NULL;
  t_12 = t;
  t = g_67(t);
  u_12 = t;
  t = term_x_16;
  w_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_12), u_12);
  z_12 = t;
  t = SSL_printnl(w_12, z_12);
  t = t_12;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm a_13 = NULL;
  static ATerm x_0 (ATerm t)
  {
    ATerm b_13 = NULL,f_13 = NULL;
    b_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_13), b_13);
    t = p_6(not_null(a_13), b_13, t);
    f_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_13, f_13);
    return(t);
  }
  if(((a_13 != NULL) && (a_13 != t)))
    _fail(t);
  else
    a_13 = t;
  t = SSL_table_keys(a_13);
  t = map_1_0(x_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  ATerm j_13 = NULL;
  j_13 = t;
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_13 = NULL,m_13 = NULL,p_13 = NULL;
        t = term_n_7;
        m_13 = t;
        t = term_g_8;
        p_13 = t;
        t = term_j_8;
        t = p_6(m_13, p_13, t);
        l_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_13, term_t_15);
        t = geq_0_0(t);
        t = j_13;
        t = z_83(t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        t = j_13;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm s_13 = NULL;
  s_13 = t;
  {
    ATerm k_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
        t = term_n_7;
        a_14 = t;
        t = term_g_8;
        b_14 = t;
        t = term_j_8;
        t = p_6(a_14, b_14, t);
        z_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_13, term_h_12);
        t = geq_0_0(t);
        t = s_13;
        t = y_83(t);
        LocalPopChoice(n_18);
      }
    else
      {
        t = k_18;
        t = s_13;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm j_14 = NULL;
  j_14 = t;
  {
    ATerm o_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_14 = NULL,t_14 = NULL,u_14 = NULL;
        t = term_n_7;
        t_14 = t;
        t = term_g_8;
        u_14 = t;
        t = term_j_8;
        t = p_6(t_14, u_14, t);
        r_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_14, term_y_9);
        t = geq_0_0(t);
        t = j_14;
        t = a_84(t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = o_18;
        t = j_14;
      }
  }
  return(t);
}
static ATerm w_5 (ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = n_76(t);
  {
    static ATerm z_0 (ATerm t)
    {
      ATerm w_14 = NULL;
      w_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, w_14);
      t = m_76(t);
      return(t);
    }
    t = fetch_1_0(z_0, t);
  }
  t = b_25;
  return(t);
}
static ATerm x_5 (ATerm j_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm z_15 (ATerm t)
  {
    ATerm q_15 = NULL,s_15 = NULL,w_15 = NULL;
    q_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_15 = ATgetFirst((ATermList) t);
            w_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_18 = t;
          int y_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_15;
              {
                static ATerm b_1 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = w_5(j_76, b_1, s_15, w_15, t);
              }
              t = z_15(t);
              LocalPopChoice(y_18);
            }
          else
            {
              t = w_18;
              {
                ATerm i_5 = NULL,o_5 = NULL,y_0 = NULL;
                t = SSLgetAnnotations(q_15);
                i_5 = t;
                t = w_15;
                t = z_15(t);
                o_5 = t;
                t = (ATerm) ATinsert(CheckATermList(o_5), s_15);
                y_0 = t;
                t = SSLsetAnnotations(y_0, i_5);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = z_15(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm r_16 = NULL;
  if(match_cons(t, sym__2))
    {
      r_16 = ATgetArgument(t, 0);
      if((r_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm f_16 = NULL,h_16 = NULL,l_16 = NULL;
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_19 = ATgetArgument(t, 0);
            ATerm j_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = p_6(o_37, p_37, t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = (ATerm) ATempty;
      }
  }
  l_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_16, q_37);
  t = x_5(c_1, l_16, q_37, t);
  h_16 = t;
  t = SSL_table_put(o_37, p_37, h_16);
  t = f_16;
  return(t);
}
static ATerm z_5 (ATerm c_84 (ATerm), ATerm y_37, ATerm x_37, ATerm t)
{
  static ATerm e_1 (ATerm t)
  {
    ATerm s_16 = NULL,v_16 = NULL;
    if(match_cons(t, sym__2))
      {
        s_16 = ATgetArgument(t, 0);
        v_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_37, s_16, v_16);
    t = c_84(t);
    return(t);
  }
  t = x_37;
  t = map_1_0(e_1, t);
  return(t);
}
static ATerm b_6 (ATerm h_40, ATerm i_40, ATerm t)
{
  t = SSL_access(h_40, i_40);
  return(t);
}
static ATerm z_17 (ATerm k_17, ATerm t)
{
  t = SSL_fclose(k_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_17 = NULL,s_17 = NULL;
  s_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_17 = ATgetArgument(t, 0);
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_17);
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            t = z_17(s_17, t);
          }
      }
    }
  else
    {
      t = z_17(s_17, t);
    }
  return(t);
}
static ATerm a_6 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm j_6 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = SSL_strcat(l_32, m_32);
  return(t);
}
static ATerm d_6 (ATerm q_40, ATerm r_40, ATerm t)
{
  ATerm a_18 = NULL;
  t = SSL_fopen(q_40, r_40);
  a_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_18);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_18 = NULL;
  t = SSL_stdin_stream();
  b_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_18 = NULL;
  t = SSL_stdout_stream();
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_18 = NULL;
  t = SSL_stderr_stream();
  f_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_18);
  return(t);
}
static ATerm r_19 (ATerm l_18, ATerm t)
{
  ATerm m_18 = NULL;
  t = SSL_explode_term(l_18);
  if(match_cons(t, sym__2))
    {
      ATerm m_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_19 = ATgetArgument(t, 1);
        if(((ATgetType(n_19) == AT_LIST) && !(ATisEmpty(n_19))))
          {
            m_18 = ATgetFirst((ATermList) n_19);
            {
              ATerm t_19 = (ATerm) ATgetNext((ATermList) n_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_19 (ATerm p_18, ATerm q_18, ATerm r_18, ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,x_18 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(r_18);
  u_18 = t;
  t = p_18;
  if(match_cons(t, sym_Path_1))
    {
      x_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_18, q_18);
  d_1 = t;
  t = SSLsetAnnotations(d_1, u_18);
  if(match_cons(t, sym__2))
    {
      s_18 = ATgetArgument(t, 0);
      t_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(s_18, t_18, t);
  return(t);
}
static ATerm u_19 (ATerm z_18, ATerm a_19, ATerm b_19, ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,h_19 = NULL,g_1 = NULL;
  t = SSLgetAnnotations(b_19);
  e_19 = t;
  t = SSL_is_string(z_18);
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_19, a_19);
  g_1 = t;
  t = SSLsetAnnotations(g_1, e_19);
  if(match_cons(t, sym__2))
    {
      c_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(c_19, d_19, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
  o_19 = t;
  if(match_cons(t, sym__2))
    {
      p_19 = ATgetArgument(t, 0);
      q_19 = ATgetArgument(t, 1);
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_19(o_19, t);
            LocalPopChoice(w_19);
          }
        else
          {
            t = v_19;
            {
              ATerm a_20 = t;
              int b_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_19(p_19, q_19, o_19, t);
                  LocalPopChoice(b_20);
                }
              else
                {
                  t = a_20;
                  t = u_19(p_19, q_19, o_19, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_19(o_19, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,h_20 = NULL;
  h_20 = t;
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_20, term_e_20);
        t = e_6(t);
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        {
          ATerm e_7 = NULL,f_7 = NULL;
          t = term_f_20;
          f_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_20, h_20);
          t = j_6(f_7, h_20, t);
          e_7 = t;
          t = SSL_perror(e_7);
          _fail(t);
        }
      }
  }
  y_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(z_19, t);
  x_19 = t;
  t = y_19;
  t = fclose_0_0(t);
  t = x_19;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_g_20;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_20 = NULL,p_20 = NULL;
      o_20 = t;
      t = (ATerm) ATinsert(ATempty, term_l_20);
      p_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_20, (ATerm) ATinsert(ATempty, term_l_20));
      t = b_6(o_20, p_20, t);
      LocalPopChoice(k_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = j_20;
      {
        ATerm m_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_20 = t;
            if((PushChoice() == 0))
              {
                ATerm q_20 = NULL,r_20 = NULL;
                q_20 = t;
                t = (ATerm) ATinsert(ATempty, term_l_8);
                r_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, q_20, (ATerm) ATinsert(ATempty, term_l_8));
                t = b_6(q_20, r_20, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_20;
              }
            t = debug_1_0(h_1, t);
            LocalPopChoice(n_20);
          }
        else
          {
            t = m_20;
            t = debug_1_0(i_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_v_20;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
  n_21 = t;
  t = term_x_16;
  o_21 = t;
  t = (ATerm) ATinsert(ATempty, term_d_21);
  p_21 = t;
  t = SSL_printnl(o_21, p_21);
  t = n_21;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm q_21 = NULL,u_21 = NULL,v_21 = NULL;
  if(match_cons(t, sym__3))
    {
      q_21 = ATgetArgument(t, 0);
      u_21 = ATgetArgument(t, 1);
      v_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_5(q_21, u_21, v_21, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm w_21 = NULL,z_21 = NULL,a_22 = NULL;
  w_21 = t;
  t = term_x_16;
  z_21 = t;
  t = (ATerm) ATinsert(ATempty, term_e_21);
  a_22 = t;
  t = SSL_printnl(z_21, a_22);
  t = w_21;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
  b_22 = t;
  t = term_x_16;
  c_22 = t;
  t = (ATerm) ATinsert(ATempty, term_d_21);
  d_22 = t;
  t = SSL_printnl(c_22, d_22);
  t = b_22;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,w_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,f_21 = NULL,j_21 = NULL;
  t_20 = t;
  t = if_verbose5_1_0(k_1, t);
  {
    ATerm g_21 = t;
    if((PushChoice() == 0))
      {
        ATerm l_21 = NULL,m_21 = NULL;
        t = term_h_21;
        l_21 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, t_20);
        m_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATmakeAppl(sym_Imported_1, t_20));
        t = p_6(l_21, m_21, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_21;
      }
  }
  w_20 = t;
  t = term_h_21;
  c_21 = t;
  t = term_i_21;
  f_21 = t;
  t = (ATerm) ATinsert(ATempty, t_20);
  j_21 = t;
  t = SSL_table_put(c_21, f_21, j_21);
  t = w_20;
  t = if_verbose4_1_0(r_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(t_1, t);
  u_20 = t;
  t = term_h_21;
  b_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_21, u_20);
  t = z_5(v_1, b_21, u_20, t);
  t = if_verbose6_1_0(x_1, t);
  t = term_h_21;
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, t_20);
  z_20 = t;
  t = (ATerm) ATempty;
  a_21 = t;
  t = SSL_table_put(y_20, z_20, a_21);
  t = (ATerm) ATmakeAppl(sym__3, term_h_21, (ATerm)ATmakeAppl(sym_Imported_1, t_20), (ATerm) ATempty);
  t = if_verbose4_1_0(z_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm i_80 (ATerm), ATerm t)
{
  ATerm s_22 = NULL,v_22 = NULL,y_22 = NULL;
  s_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_22;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_22 = ATgetFirst((ATermList) t);
          y_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_7 = NULL,x_7 = NULL,b_8 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(s_22);
            o_7 = t;
            t = v_22;
            t = i_80(t);
            x_7 = t;
            t = y_22;
            t = filter_1_0(i_80, t);
            b_8 = t;
            t = (ATerm) ATinsert(CheckATermList(b_8), x_7);
            j_1 = t;
            t = SSLsetAnnotations(j_1, o_7);
            LocalPopChoice(r_21);
          }
        else
          {
            t = k_21;
            t = y_22;
            t = filter_1_0(i_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm t)
{
  static ATerm c_23 (ATerm t)
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_70(t);
        t = c_23(t);
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        t = e_70(t);
      }
    return(t);
  }
  t = c_23(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_23 = NULL,e_23 = NULL;
      t = term_n_7;
      d_23 = t;
      t = term_e_22;
      e_23 = t;
      t = term_f_22;
      t = p_6(d_23, e_23, t);
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_23 = NULL;
            t = term_i_22;
            g_23 = t;
            t = SSL_getenv(g_23);
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            t = XTC_REPOSITORY();
          }
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
  t = term_j_22;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL;
  t = term_h_21;
  t_23 = t;
  t = term_k_22;
  u_23 = t;
  t = term_l_22;
  t = p_6(t_23, u_23, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm m_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_22;
      }
  }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm l_23 = NULL;
  t = if_verbose5_1_0(a_2, t);
  l_23 = t;
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_23 = NULL,q_23 = NULL;
        t = term_h_21;
        p_23 = t;
        t = term_i_21;
        q_23 = t;
        t = term_q_22;
        t = p_6(p_23, q_23, t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        {
          ATerm r_23 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          r_23 = t;
          t = repeat_2_0(c_2, _id, t);
          t = r_23;
        }
      }
  }
  t = l_23;
  t = if_verbose5_1_0(d_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_r_22;
  return(t);
}
static ATerm n_25 (ATerm c_24, ATerm t)
{
  ATerm e_24 = NULL,h_24 = NULL,i_24 = NULL;
  t = term_h_21;
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, c_24);
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATmakeAppl(sym_Tool_1, c_24));
  t = p_6(h_24, i_24, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_22 = ATgetFirst((ATermList) t);
      if(match_cons(t_22, sym__2))
        {
          ATerm w_22 = ATgetArgument(t_22, 0);
          e_24 = ATgetArgument(t_22, 1);
        }
      else
        _fail(t);
      {
        ATerm u_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_24;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_r_22;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_h_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_x_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_24 = NULL,l_24 = NULL,m_24 = NULL;
      t = if_verbose5_1_0(f_2, t);
      t = xtc_load_0_0(t);
      m_24 = t;
      if(match_cons(t, sym__2))
        {
          j_24 = ATgetArgument(t, 0);
          l_24 = ATgetArgument(t, 1);
          {
            ATerm b_23 = t;
            int f_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_24 = NULL,t_24 = NULL,u_24 = NULL;
                t = term_h_21;
                t_24 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, j_24);
                u_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATmakeAppl(sym_Tool_1, j_24));
                t = p_6(t_24, u_24, t);
                {
                  static ATerm h_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((l_24 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((r_24 != NULL) && (r_24 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(h_2, t);
                }
                t = not_null(r_24);
                LocalPopChoice(f_23);
              }
            else
              {
                t = b_23;
                t = n_25(m_24, t);
              }
          }
        }
      else
        {
          t = n_25(m_24, t);
        }
      t = if_verbose5_1_0(j_2, t);
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      {
        ATerm k_25 = NULL,n_8 = NULL,r_8 = NULL;
        k_25 = t;
        t = term_x_16;
        n_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_23), k_25), term_h_23);
        r_8 = t;
        t = SSL_printnl(n_8, r_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_23), k_25), term_h_23);
        t = if_verbose5_1_0(o_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_j_23;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_j_23;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm k_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_26 = NULL,b_26 = NULL;
      b_26 = t;
      if(match_cons(t, sym_FILE_1))
        {
          a_26 = ATgetArgument(t, 0);
          {
            ATerm v_8 = NULL,w_1 = NULL;
            t = SSLgetAnnotations(b_26);
            v_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, a_26);
            w_1 = t;
            t = SSLsetAnnotations(w_1, v_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_26;
        }
      LocalPopChoice(m_23);
      {
        static ATerm v_2 (ATerm t)
        {
          ATerm e_26 = NULL,f_26 = NULL;
          t = term_x_17;
          t = n_98(t);
          t = xtc_find_0_0(t);
          e_26 = t;
          t = term_x_17;
          t = pass_v_verbose_0_0(t);
          f_26 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(f_26), e_26), term_o_23), term_n_23);
          return(t);
        }
        t = xtc_transform_file_2_0(u_2, v_2, t);
      }
    }
  else
    {
      t = k_23;
      {
        static ATerm d_3 (ATerm t)
        {
          ATerm k_26 = NULL,l_26 = NULL;
          t = term_x_17;
          t = n_98(t);
          t = xtc_find_0_0(t);
          k_26 = t;
          t = term_x_17;
          t = pass_v_verbose_0_0(t);
          l_26 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(l_26), k_26), term_o_23), term_n_23);
          return(t);
        }
        t = xtc_transform_term_2_0(w_2, d_3, t);
      }
    }
  return(t);
}
static ATerm p_6 (ATerm i_38, ATerm j_38, ATerm t)
{
  t = SSL_table_get(i_38, j_38);
  return(t);
}
static ATerm l_6 (ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL;
  r_26 = t;
  {
    ATerm s_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = p_6(w_36, x_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_23 = ATgetFirst((ATermList) t);
            q_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_23);
        t = SSL_table_put(w_36, x_36, q_26);
        t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, q_26);
      }
    else
      {
        t = s_23;
        t = SSL_table_remove(w_36, x_36);
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
      }
  }
  t = r_26;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_82 (ATerm), ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  v_26 = t;
  t = j_82(t);
  u_26 = t;
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_26 = NULL;
        t = term_l_17;
        x_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_26, term_l_17);
        t = p_6(u_26, x_26, t);
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_26 = ATgetFirst((ATermList) t);
      s_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_l_17;
  w_26 = t;
  t = SSL_table_put(u_26, w_26, s_26);
  t = t_26;
  {
    static ATerm e_3 (ATerm t)
    {
      ATerm y_26 = NULL;
      y_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_26, y_26);
      t = l_6(u_26, y_26, t);
      return(t);
    }
    t = map_1_0(e_3, t);
  }
  t = v_26;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_83(t);
      t = k_83(t);
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      t = k_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,h_27 = NULL,i_27 = NULL;
  d_27 = t;
  t = i_82(t);
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_27, term_l_17);
  {
    ATerm b_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_24 = ATgetArgument(t, 0);
            ATerm g_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_17;
        m_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_27, term_l_17);
        t = p_6(c_27, m_27, t);
        LocalPopChoice(d_24);
      }
    else
      {
        t = b_24;
        t = (ATerm) ATempty;
      }
  }
  e_27 = t;
  t = term_l_17;
  h_27 = t;
  t = (ATerm) ATinsert(CheckATermList(e_27), (ATerm) ATempty);
  i_27 = t;
  t = SSL_table_put(c_27, h_27, i_27);
  t = d_27;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_v_17;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm v_27 = NULL;
  v_27 = t;
  {
    ATerm k_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(v_27);
        LocalPopChoice(n_24);
      }
    else
      {
        t = k_24;
        t = v_27;
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_86 (ATerm), ATerm t)
{
  ATerm p_27 = NULL;
  static ATerm h_3 (ATerm t)
  {
    ATerm q_27 = NULL;
    q_27 = t;
    {
      ATerm o_24 = t;
      int p_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_27 = NULL,s_27 = NULL;
          t = term_v_17;
          r_27 = t;
          t = term_l_17;
          s_27 = t;
          t = term_q_24;
          t = p_6(r_27, s_27, t);
          LocalPopChoice(p_24);
        }
      else
        {
          t = o_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((p_27 != NULL) && (p_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          p_27 = ATgetFirst((ATermList) t);
        {
          ATerm s_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = p_27;
    t = map_1_0(l_3, t);
    t = q_27;
    t = end_scope_1_0(p_3, t);
    return(t);
  }
  t = begin_scope_1_0(f_3, t);
  t = restore_always_2_0(j_86, h_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,f_28 = NULL;
  z_27 = t;
  t = term_x_17;
  t = whoami_0_0(t);
  a_28 = t;
  t = term_x_16;
  c_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_24), a_28), term_v_24);
  f_28 = t;
  t = SSL_printnl(c_28, f_28);
  t = term_k_8;
  b_28 = t;
  t = SSL_exit(b_28);
  t = z_27;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm n_28 = NULL;
  n_28 = t;
  if(match_string(t, "-k"))
    {
      t = n_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_28;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
  o_28 = t;
  t = SSL_string_to_int(o_28);
  p_28 = t;
  t = term_z_24;
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_24, p_28);
  t = s_6(q_28, p_28, t);
  t = o_28;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, u_3, w_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm t_28 = NULL;
  t_28 = t;
  if(match_string(t, "-S"))
    {
      t = t_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_28;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL;
  t = term_g_8;
  u_28 = t;
  t = term_d_25;
  v_28 = t;
  t = term_e_25;
  t = s_6(u_28, v_28, t);
  t = term_f_25;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_g_25;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,b_29 = NULL;
  x_28 = t;
  t = SSL_string_to_int(x_28);
  y_28 = t;
  t = term_g_8;
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_8, y_28);
  t = s_6(b_29, y_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_28);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_h_25;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL;
  t = term_i_25;
  c_29 = t;
  t = term_x_17;
  d_29 = t;
  t = term_j_25;
  t = s_6(c_29, d_29, t);
  t = term_l_25;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_m_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_3, z_3, d_4, t);
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      {
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_4, f_4, h_4, t);
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
            t = Option_3_0(i_4, k_4, m_4, t);
          }
      }
    }
  return(t);
}
static ATerm s_6 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm e_29 = NULL;
  t = term_n_7;
  e_29 = t;
  t = SSL_table_put(e_29, e_39, f_39);
  t = (ATerm) ATmakeAppl(sym__3, term_n_7, e_39, f_39);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm h_29 = NULL,j_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL;
      t = term_x_17;
      t = e_0(t);
      k_29 = t;
      t = term_s_25;
      l_29 = t;
      t = term_t_25;
      m_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_25, term_t_25, k_29);
      t = q_6(l_29, m_29, k_29, t);
      _fail(t);
    }
  else
    {
      ATerm p_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_29 = ATgetFirst((ATermList) t);
          j_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_29;
      t = c_0(t);
      t = term_x_17;
      t = d_0(t);
      p_29 = t;
      t = (ATerm) ATinsert(CheckATermList(j_29), p_29);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm r_29 = NULL;
  r_29 = t;
  if(match_string(t, "-o"))
    {
      t = r_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_29;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL;
  s_29 = t;
  t = term_s_7;
  t_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_7, s_29);
  t = s_6(t_29, s_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_29);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, o_4, q_4, t);
  return(t);
}
static ATerm q_6 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
  z_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_25 = ATgetArgument(t, 0);
            ATerm y_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = p_6(r_36, s_36, t);
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        t = (ATerm) ATempty;
      }
  }
  a_30 = t;
  t = (ATerm) ATinsert(CheckATermList(a_30), q_36);
  b_30 = t;
  t = SSL_table_put(r_36, s_36, b_30);
  t = z_29;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,x_30 = NULL,y_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_30 = NULL,a_31 = NULL,d_31 = NULL;
      t = term_x_17;
      t = n_0(t);
      z_30 = t;
      t = term_s_25;
      a_31 = t;
      t = term_t_25;
      d_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_25, term_t_25, z_30);
      t = q_6(a_31, d_31, z_30, t);
      _fail(t);
    }
  else
    {
      ATerm n_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_30 = ATgetFirst((ATermList) t);
          t_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_30 = ATgetFirst((ATermList) t);
          y_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_30;
      t = k_0(t);
      t = x_30;
      t = l_0(t);
      n_31 = t;
      t = (ATerm) ATinsert(CheckATermList(y_30), n_31);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm p_31 = NULL;
  p_31 = t;
  if(match_string(t, "-i"))
    {
      t = p_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_31;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL;
  q_31 = t;
  t = term_c_18;
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_18, q_31);
  t = s_6(r_31, q_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_31);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_17;
  t = whoami_0_0(t);
  s_31 = t;
  t = term_x_16;
  u_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_26), s_31);
  v_31 = t;
  t = SSL_printnl(u_31, v_31);
  t = term_k_8;
  t_31 = t;
  t = SSL_exit(t_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL;
  t = term_n_7;
  w_31 = t;
  t = term_d_26;
  x_31 = t;
  t = term_g_26;
  t = p_6(w_31, x_31, t);
  return(t);
}
static ATerm m_6 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL;
  z_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_31;
      t = e_79(t);
    }
  else
    {
      ATerm e_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_32 = ATgetFirst((ATermList) t);
          b_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_32;
      t = foldr_2_0(e_79, f_79, t);
      e_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_32, e_32);
      t = f_79(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_d_25;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      r_9 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(r_9, s_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_32 = NULL,l_9 = NULL,m_9 = NULL;
  t = times_0_0(t);
  m_9 = t;
  t = SSL_explode_term(m_9);
  if(match_cons(t, sym__2))
    {
      ATerm j_26 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9;
  t = foldr_2_0(u_4, a_5, t);
  h_32 = t;
  t = SSL_TicksToSeconds(h_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  u_32 = t;
  if(match_cons(t, sym__2))
    {
      v_32 = ATgetArgument(t, 0);
      w_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_32;
        if((v_32 != t))
          {
            _fail(t);
          }
        t = u_32;
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        t = (ATerm) ATmakeAppl(sym__2, v_32, w_32);
        {
          ATerm o_26 = t;
          int p_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_32, w_32);
              LocalPopChoice(p_26);
            }
          else
            {
              t = o_26;
              t = SSL_gtr(v_32, w_32);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_32, w_32);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm a_33 = NULL;
  a_33 = t;
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
        t = term_n_7;
        d_33 = t;
        t = term_g_8;
        e_33 = t;
        t = term_j_8;
        t = p_6(d_33, e_33, t);
        c_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_33, term_k_8);
        t = geq_0_0(t);
        t = a_33;
        t = v_83(t);
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        t = a_33;
      }
  }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,j_33 = NULL,k_33 = NULL;
  t = run_time_0_0(t);
  g_33 = t;
  t = term_x_17;
  t = whoami_0_0(t);
  h_33 = t;
  t = term_x_16;
  j_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_27), g_33), term_s_8), h_33);
  k_33 = t;
  t = SSL_printnl(j_33, k_33);
  t = (ATerm) ATmakeAppl(sym__2, term_x_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_27), g_33), term_s_8), h_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_25;
  l_33 = t;
  t = SSL_exit(l_33);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL;
  f_34 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_34;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_34 = ATgetArgument(t, 0);
          {
            ATerm m_10 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(f_34);
            m_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_34);
            i_2 = t;
            t = SSLsetAnnotations(i_2, m_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_34;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_33 = NULL,p_33 = NULL;
      t = term_n_7;
      o_33 = t;
      t = term_j_27;
      p_33 = t;
      t = term_k_27;
      t = p_6(o_33, p_33, t);
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      t = fetch_1_0(d_5, t);
    }
  t = z_87(t);
  return(t);
}
ATerm map_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  static ATerm v_34 (ATerm t)
  {
    ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
    s_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_34;
      }
    else
      {
        ATerm x_10 = NULL,m_11 = NULL,n_11 = NULL,k_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_34 = ATgetFirst((ATermList) t);
            u_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_34);
        x_10 = t;
        t = t_34;
        t = y_71(t);
        m_11 = t;
        t = u_34;
        t = v_34(t);
        n_11 = t;
        t = (ATerm) ATinsert(CheckATermList(n_11), m_11);
        k_2 = t;
        t = SSLsetAnnotations(k_2, x_10);
      }
    return(t);
  }
  t = v_34(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_35 = ATgetFirst((ATermList) t);
      k_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_35 = NULL,p_35 = NULL;
        static ATerm f_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_35)), not_null(p_35));
          return(t);
        }
        t = k_35;
        t = i_0(t);
        if(((o_35 != NULL) && (o_35 != t)))
          _fail(t);
        else
          o_35 = t;
        t = j_35;
        t = g_0(t);
        if(((p_35 != NULL) && (p_35 != t)))
          _fail(t);
        else
          p_35 = t;
        t = k_35;
        t = reverse_acc_2_0(g_0, f_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_17;
      t = i_0(t);
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,p_2 = NULL;
  x_35 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_35);
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_35);
  p_2 = t;
  t = SSLsetAnnotations(p_2, v_35);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm z_35 = NULL;
  z_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_35), term_l_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL;
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_35 = NULL,u_35 = NULL;
      t = term_n_7;
      t_35 = t;
      t = term_d_26;
      u_35 = t;
      t = term_g_26;
      t = p_6(t_35, u_35, t);
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      t = fetch_1_0(g_5, t);
    }
  t = term_t_27;
  t = echo_0_0(t);
  t = term_s_25;
  r_35 = t;
  t = term_t_25;
  s_35 = t;
  t = term_u_27;
  t = p_6(r_35, s_35, t);
  t = reverse_acc_2_0(_id, h_5, t);
  t = map_1_0(k_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_72 (ATerm), ATerm t)
{
  static ATerm h_37 (ATerm t)
  {
    ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
    e_37 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_37 = ATgetFirst((ATermList) t);
        g_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_27 = t;
      int x_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_11 = NULL,f_12 = NULL,b_4 = NULL;
          t = SSLgetAnnotations(e_37);
          x_11 = t;
          t = f_37;
          t = i_72(t);
          f_12 = t;
          t = (ATerm) ATinsert(CheckATermList(g_37), f_12);
          b_4 = t;
          t = SSLsetAnnotations(b_4, x_11);
          LocalPopChoice(x_27);
        }
      else
        {
          t = w_27;
          {
            ATerm v_12 = NULL,c_13 = NULL,c_4 = NULL;
            t = SSLgetAnnotations(e_37);
            v_12 = t;
            t = g_37;
            t = h_37(t);
            c_13 = t;
            t = (ATerm) ATinsert(CheckATermList(c_13), f_37);
            c_4 = t;
            t = SSLsetAnnotations(c_4, v_12);
          }
        }
    }
    return(t);
  }
  t = h_37(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
  l_37 = t;
  {
    ATerm y_27 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_28 = ATgetFirst((ATermList) t);
                ATerm g_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_37;
          }
        LocalPopChoice(d_28);
      }
    else
      {
        t = y_27;
        t = (ATerm) ATinsert(ATempty, l_37);
      }
  }
  m_37 = t;
  t = term_y_7;
  n_37 = t;
  t = SSL_printnl(n_37, m_37);
  t = l_37;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm w_37 = NULL,b_38 = NULL;
  t = term_n_7;
  w_37 = t;
  t = term_d_26;
  b_38 = t;
  t = term_g_26;
  t = p_6(w_37, b_38, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL;
  t = term_h_28;
  c_38 = t;
  t = term_x_17;
  d_38 = t;
  t = term_i_28;
  t = s_6(c_38, d_38, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_j_28;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
  t = term_h_28;
  g_38 = t;
  t = term_x_17;
  h_38 = t;
  t = term_i_28;
  t = s_6(g_38, h_38, t);
  t = term_h_18;
  e_38 = t;
  t = term_x_17;
  f_38 = t;
  t = term_k_28;
  t = s_6(e_38, f_38, t);
  t = term_l_28;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_m_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_5, m_5, n_5, t);
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      t = Option_3_0(p_5, q_5, r_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_58 (ATerm), ATerm y_58 (ATerm), ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,g_4 = NULL;
  p_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_38 = ATgetFirst((ATermList) t);
      m_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_38);
  k_38 = t;
  t = l_38;
  t = x_58(t);
  n_38 = t;
  t = m_38;
  t = y_58(t);
  o_38 = t;
  t = (ATerm) ATinsert(CheckATermList(o_38), n_38);
  g_4 = t;
  t = SSLsetAnnotations(g_4, k_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,z_38 = NULL,a_39 = NULL,j_4 = NULL;
  u_38 = t;
  {
    ATerm w_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_29;
        t = x_89(t);
        LocalPopChoice(z_28);
      }
    else
      {
        t = w_28;
      }
  }
  t = u_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_38 = ATgetFirst((ATermList) t);
      x_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_38);
  v_38 = t;
  t = term_d_26;
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_26, w_38);
  t = s_6(a_39, w_38, t);
  t = x_38;
  {
    static ATerm m_39 (ATerm t)
    {
      ATerm f_29 = t;
      int g_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_29 = t;
          int n_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_39 = NULL;
              d_39 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_39;
              LocalPopChoice(n_29);
            }
          else
            {
              t = i_29;
              t = x_89(t);
              t = Cons_2_0(_id, m_39, t);
            }
          LocalPopChoice(g_29);
        }
      else
        {
          t = f_29;
          {
            ATerm i_39 = NULL,j_39 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_39 = ATgetFirst((ATermList) t);
                j_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(j_39), (ATerm) ATmakeAppl(sym_Undefined_1, i_39));
          }
        }
      return(t);
    }
    t = m_39(t);
  }
  z_38 = t;
  t = (ATerm) ATinsert(CheckATermList(z_38), (ATerm) ATmakeAppl(sym_Program_1, w_38));
  j_4 = t;
  t = SSLsetAnnotations(j_4, v_38);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm y_39 = NULL;
  y_39 = t;
  if(match_string(t, "--help"))
    {
      t = y_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_39;
        }
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL;
  t = term_j_27;
  z_39 = t;
  t = term_x_17;
  a_40 = t;
  t = term_o_29;
  t = s_6(z_39, a_40, t);
  t = term_q_29;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_u_29;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_89 (ATerm), ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL;
  t_39 = t;
  t = term_s_25;
  v_39 = t;
  t = term_t_25;
  w_39 = t;
  t = (ATerm) ATempty;
  x_39 = t;
  t = SSL_table_put(v_39, w_39, x_39);
  t = t_39;
  {
    static ATerm s_5 (ATerm t)
    {
      ATerm v_29 = t;
      int w_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_89(t);
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
                t = Option_3_0(t_5, v_5, h_6, t);
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
    t = parse_options_p__1_0(s_5, t);
  }
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_40 = NULL;
        o_40 = t;
        {
          ATerm e_30 = t;
          int f_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_13 = NULL;
              t = o_40;
              {
                ATerm g_30 = t;
                int h_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_13 = NULL,u_13 = NULL;
                    t = term_n_7;
                    r_13 = t;
                    t = term_j_27;
                    u_13 = t;
                    t = term_k_27;
                    t = p_6(r_13, u_13, t);
                    LocalPopChoice(h_30);
                  }
                else
                  {
                    t = g_30;
                    t = fetch_1_0(n_6, t);
                  }
              }
              t = o_40;
              t = default_system_usage_0_0(t);
              t = term_d_25;
              o_13 = t;
              t = SSL_exit(o_13);
              LocalPopChoice(f_30);
            }
          else
            {
              t = e_30;
              {
                ATerm y_13 = NULL,c_14 = NULL,d_14 = NULL;
                t = term_n_7;
                c_14 = t;
                t = term_h_28;
                d_14 = t;
                t = term_i_30;
                t = p_6(c_14, d_14, t);
                t = o_40;
                t = default_system_about_0_0(t);
                t = term_d_25;
                y_13 = t;
                t = SSL_exit(y_13);
              }
            }
        }
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        {
          ATerm j_30 = t;
          int k_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_40 = NULL,u_40 = NULL,v_40 = NULL;
              static ATerm o_6 (ATerm t)
              {
                ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,l_4 = NULL;
                y_40 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_40);
                w_40 = t;
                t = x_40;
                if(((r_39 != NULL) && (r_39 != t)))
                  _fail(t);
                else
                  r_39 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_40);
                l_4 = t;
                t = SSLsetAnnotations(l_4, w_40);
                return(t);
              }
              t = fetch_1_0(o_6, t);
              t = term_x_16;
              u_40 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_39)), term_l_30);
              v_40 = t;
              t = SSL_printnl(u_40, v_40);
              t = (ATerm) ATmakeAppl(sym__2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_39)), term_l_30));
              t = default_system_usage_0_0(t);
              t = term_k_8;
              p_40 = t;
              t = SSL_exit(p_40);
              LocalPopChoice(k_30);
            }
          else
            {
              t = j_30;
            }
        }
      }
  }
  s_39 = t;
  t = term_s_25;
  u_39 = t;
  t = SSL_table_destroy(u_39);
  t = s_39;
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL,j_41 = NULL;
  t = parse_options_1_0(b_88, t);
  d_41 = t;
  t = term_m_30;
  j_41 = t;
  t = SSL_table_create(j_41);
  t = term_m_30;
  e_41 = t;
  t = term_n_30;
  f_41 = t;
  t = SSL_table_put(e_41, f_41, d_41);
  t = d_41;
  t = d_88(t);
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_88, t);
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        {
          ATerm q_30 = t;
          int r_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_88(t);
              t = report_success_0_0(t);
              LocalPopChoice(r_30);
            }
          else
            {
              t = q_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      {
        ATerm w_30 = t;
        int b_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(b_31);
          }
        else
          {
            t = w_30;
            {
              ATerm c_31 = t;
              int e_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(v_6, w_6, x_6, t);
                  LocalPopChoice(e_31);
                }
              else
                {
                  t = c_31;
                  {
                    ATerm f_31 = t;
                    int g_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(g_31);
                      }
                    else
                      {
                        t = f_31;
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
static ATerm u_6 (ATerm t)
{
  t = xtc_temp_files_1_0(y_6, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm n_41 = NULL,u_41 = NULL;
  t = term_h_31;
  n_41 = t;
  t = term_x_17;
  u_41 = t;
  t = term_i_31;
  t = s_6(n_41, u_41, t);
  t = term_j_31;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_k_31;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
      t = term_n_7;
      x_41 = t;
      t = term_c_18;
      y_41 = t;
      t = term_o_31;
      t = p_6(x_41, y_41, t);
      w_41 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_41);
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      t = term_c_8;
    }
  t = xtc_sglr_1_0(z_6, t);
  {
    ATerm y_31 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_42 = NULL,i_42 = NULL;
        i_42 = t;
        if(match_cons(t, sym_FILE_1))
          {
            h_42 = ATgetArgument(t, 0);
            {
              ATerm l_14 = NULL,p_4 = NULL;
              t = SSLgetAnnotations(i_42);
              l_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_42);
              p_4 = t;
              t = SSLsetAnnotations(p_4, l_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_42;
          }
        LocalPopChoice(c_32);
        t = xtc_transform_file_2_0(a_7, pass_verbose_0_0, t);
      }
    else
      {
        t = y_31;
        t = xtc_transform_term_2_0(b_7, pass_verbose_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_d_32;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_f_32;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_f_32;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(r_6, default_usage_0_0, _id, u_6, t);
  return(t);
}
