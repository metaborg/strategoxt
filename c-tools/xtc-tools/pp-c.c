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
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_r_31;
ATerm term_m_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_k_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_l_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_v_27;
ATerm term_r_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_x_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_o_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_m_24;
ATerm term_k_24;
ATerm term_r_23;
ATerm term_n_23;
ATerm term_h_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_s_21;
ATerm term_k_21;
ATerm term_d_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_s_20;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_c_18;
ATerm term_t_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_z_8;
ATerm term_v_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_m_8;
ATerm term_k_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_m_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_z_8);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_10, term_f_9, term_b_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_h_10, term_i_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_q_10, term_s_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_x_10, term_y_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_11, term_e_11, term_h_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_11, term_p_11, term_q_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_x_11, term_y_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_f_12, term_h_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_m_12, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_v_12, term_w_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_z_12, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_e_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_13, term_h_13, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_s_13, term_t_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_a_14);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_e_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_j_14, term_k_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_n_14, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_v_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_d_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_l_15, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_q_15, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_a_16, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_f_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_n_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym__2, term_b_22, term_t_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym__2, term_b_22, term_c_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_c_18);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_t_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_24);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym__2, term_d_25, term_l_18);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_y_25);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_u_26);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_o_25, term_q_25);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__2, term_r_27, term_l_18);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__2, term_y_27, term_l_18);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym__2, term_u_26, term_l_18);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_r_27);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym__2, term_f_31, term_l_18);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_m_18);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm v_6 (ATerm o_14, ATerm p_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm c_6 (ATerm b_29, ATerm c_29, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm n_6 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm q_6 (ATerm g_67 (ATerm), ATerm p_168, ATerm y_17, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm t);
static ATerm r_6 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm i_72 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm v_65 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm l_85 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm n_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_10 (ATerm l_9, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm t_6 (ATerm a_81 (ATerm), ATerm j_30, ATerm h_30, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm d_6 (ATerm e_19, ATerm f_19, ATerm t);
ATerm at_last_1_0 (ATerm y_72 (ATerm), ATerm t);
static ATerm f_6 (ATerm f_72 (ATerm), ATerm s_19, ATerm c_200, ATerm t);
ATerm at_suffix_1_0 (ATerm r_72 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm j_72 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm t_97 (ATerm), ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm remove_extension_0_0 (ATerm t);
ATerm debug_1_0 (ATerm e_67 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm n_82 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm m_82 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm o_82 (ATerm), ATerm t);
static ATerm h_6 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm i_6 (ATerm h_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm n_1 (ATerm t);
static ATerm j_6 (ATerm t_32, ATerm u_32, ATerm v_32, ATerm t);
static ATerm k_6 (ATerm q_82 (ATerm), ATerm d_33, ATerm c_33, ATerm t);
static ATerm m_6 (ATerm k_35, ATerm l_35, ATerm t);
static ATerm z_24 (ATerm n_24, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_6 (ATerm u_17, ATerm t);
static ATerm u_6 (ATerm u_51, ATerm v_51, ATerm t);
static ATerm o_6 (ATerm t_35, ATerm u_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_27 (ATerm z_25, ATerm t);
static ATerm u_27 (ATerm e_26, ATerm j_26, ATerm k_26, ATerm t);
static ATerm w_27 (ATerm y_26, ATerm b_27, ATerm c_27, ATerm t);
static ATerm p_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm x_33 (ATerm j_32, ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm a_7 (ATerm n_33, ATerm o_33, ATerm t);
static ATerm w_6 (ATerm b_32, ATerm c_32, ATerm t);
ATerm end_scope_1_0 (ATerm x_80 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm w_80 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm x_84 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_7 (ATerm h_34, ATerm i_34, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_7 (ATerm w_31, ATerm x_31, ATerm v_31, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_6 (ATerm v_28, ATerm w_28, ATerm t);
ATerm foldr_2_0 (ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_82 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm need_help_1_0 (ATerm n_86 (ATerm), ATerm t);
ATerm map_1_0 (ATerm w_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_72 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_88 (ATerm), ATerm t);
static ATerm g_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm parse_options_1_0 (ATerm k_88 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm io_pp_c_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL;
  r_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_8 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = r_1;
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
        t = (ATerm) ATmakeAppl(sym__2, s_1, h_0);
        t = v_6(s_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, s_1);
        LocalPopChoice(c_8);
      }
    else
      {
        t = b_8;
        {
          ATerm d_8 = t;
          int g_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = r_1;
              t = o_0(t);
              v_0 = t;
              {
                ATerm h_8 = t;
                if((PushChoice() == 0))
                  {
                    ATerm w_0 = NULL;
                    w_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = w_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = w_0;
                          }
                        else
                          {
                            t = w_0;
                            if((s_1 != t))
                              {
                                _fail(t);
                              }
                            t = w_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, s_1, v_0);
              t = v_6(s_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_1);
              LocalPopChoice(g_8);
            }
          else
            {
              t = d_8;
              t = r_1;
              t = o_0(t);
              if((s_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_1);
            }
        }
      }
  }
  return(t);
}
static ATerm v_6 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_copy(o_14, p_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_2 = NULL,u_2 = NULL;
      t = term_k_8;
      t_2 = t;
      t = term_m_8;
      u_2 = t;
      t = term_o_8;
      t = a_7(t_2, u_2, t);
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      t = term_q_8;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm r_2 = NULL;
  r_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_1 = NULL,f_1 = NULL;
      t = term_m_8;
      {
        ATerm s_8 = t;
        int t_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_1 = NULL,k_1 = NULL;
            t = term_k_8;
            g_1 = t;
            t = term_m_8;
            k_1 = t;
            t = term_o_8;
            t = a_7(g_1, k_1, t);
            LocalPopChoice(t_8);
          }
        else
          {
            t = s_8;
            t = term_q_8;
          }
      }
      d_1 = t;
      t = term_v_8;
      f_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_v_8, d_1);
      t = v_6(f_1, d_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm w_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm c_6 (ATerm b_29, ATerm c_29, ATerm t)
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(b_29, c_29);
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      t = SSL_subtr(b_29, c_29);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL;
  t = term_z_8;
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL,f_3 = NULL;
        t = term_k_8;
        c_3 = t;
        t = term_z_8;
        f_3 = t;
        t = term_e_9;
        t = a_7(c_3, f_3, t);
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        t = term_f_9;
      }
  }
  z_2 = t;
  t = term_f_9;
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_2, term_f_9);
  t = c_6(z_2, b_3, t);
  a_3 = t;
  t = SSL_int_to_string(a_3);
  y_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_2), term_z_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm i_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_v_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm k_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_i_9);
      k_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATinsert(ATempty, term_i_9));
      t = m_6(i_3, k_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm n_6 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm l_3 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_3);
  return(t);
}
static ATerm q_6 (ATerm g_67 (ATerm), ATerm p_168, ATerm y_17, ATerm t)
{
  ATerm m_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_168, term_j_9);
  t = p_6(t);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_3, y_17);
  t = g_67(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm r_3 = NULL,t_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_9 = ATgetArgument(t, 0);
      if(match_cons(m_9, sym_Stream_1))
        {
          r_3 = ATgetArgument(m_9, 0);
        }
      else
        _fail(t);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(r_3, t_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL;
  o_3 = t;
  t = xtc_new_file_0_0(t);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_3, o_3);
  t = q_6(b_0, n_3, o_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_3);
  t = xtc_transform_file_2_0(k_84, l_84, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm r_6 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,y_4 = NULL,z_4 = NULL;
  u_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      v_4 = ATgetArgument(t, 0);
      {
        ATerm x_1 = NULL,y_1 = NULL;
        t = SSL_int_to_string(v_4);
        x_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_9), x_1), term_n_9);
        y_1 = t;
        t = SSL_concat_strings(y_1);
      }
    }
  else
    {
      ATerm j_2 = NULL,k_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          v_4 = ATgetArgument(t, 0);
          y_4 = ATgetArgument(t, 1);
          z_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_4);
      j_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_4), term_t_9), j_2), term_s_9), v_4);
      k_2 = t;
      t = SSL_concat_strings(k_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_72 (ATerm), ATerm t)
{
  ATerm c_5 = NULL;
  static ATerm f_0 (ATerm t)
  {
    t = i_72(t);
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
  ATerm d_5 = NULL;
  d_5 = t;
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm y_9 = ATgetArgument(t, 0);
              if((d_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm z_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_16), term_c_16), term_x_15), term_t_15), term_n_15), term_i_15), term_a_15), term_w_14), term_r_14), term_l_14), term_f_14), term_b_14), term_v_13), term_p_13), term_k_13), term_f_13), term_b_13), term_x_12), term_t_12), term_p_12), term_i_12), term_z_11), term_r_11), term_k_11), term_a_11), term_u_10), term_l_10), term_c_10);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, d_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm m_5 = NULL,y_5 = NULL;
  m_5 = t;
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_16 = ATgetArgument(t, 0);
            y_5 = ATgetArgument(t, 1);
            {
              ATerm q_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_16);
        {
          ATerm r_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_3 = NULL,p_3 = NULL,q_3 = NULL;
              t = y_5;
              {
                ATerm x_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_16;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              e_3 = t;
              t = term_d_17;
              p_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_3), term_e_17);
              q_3 = t;
              t = SSL_printnl(p_3, q_3);
              t = (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATinsert(ATinsert(ATempty, e_3), term_e_17));
              LocalPopChoice(v_16);
            }
          else
            {
              t = r_16;
              t = m_5;
            }
        }
      }
    else
      {
        t = k_16;
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
ATerm fork_and_wait_1_0 (ATerm v_65 (ATerm), ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL;
  i_7 = t;
  t = fork_0_0(t);
  h_7 = t;
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_7;
        t = v_65(t);
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        t = SSL_waitpid(h_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_17 = ATgetArgument(t, 0);
            if(((ATgetType(m_17) != AT_INT) || (ATgetInt((ATermInt) m_17) != 0)))
              _fail(t);
            {
              ATerm q_17 = ATgetArgument(t, 1);
            }
            {
              ATerm r_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_7;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL;
  t_7 = t;
  t = l_85(t);
  t = xtc_find_0_0(t);
  s_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_7, t_7);
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm y_7 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, s_7, t_7);
      t = r_6(s_7, t_7, t);
      t = term_t_17;
      y_7 = t;
      t = SSL_exit(y_7);
      return(t);
    }
    t = fork_and_wait_1_0(m_0, t);
  }
  t = t_7;
  return(t);
}
ATerm at_end_1_0 (ATerm n_72 (ATerm), ATerm t)
{
  static ATerm h_9 (ATerm t)
  {
    ATerm c_9 = NULL,d_9 = NULL,g_9 = NULL;
    g_9 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_9 = ATgetFirst((ATermList) t);
        d_9 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_3 = NULL,a_4 = NULL,y_0 = NULL;
          t = SSLgetAnnotations(g_9);
          x_3 = t;
          t = d_9;
          t = h_9(t);
          a_4 = t;
          t = (ATerm) ATinsert(CheckATermList(a_4), c_9);
          y_0 = t;
          t = SSLsetAnnotations(y_0, x_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_9;
        t = n_72(t);
      }
    return(t);
  }
  t = h_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_8 = NULL,e_8 = NULL,f_8 = NULL;
  a_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_8;
    }
  else
    {
      static ATerm q_0 (ATerm t)
      {
        t = not_null(f_8);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_8 = ATgetFirst((ATermList) t);
          if(((f_8 != NULL) && (f_8 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_8;
      t = at_end_1_0(q_0, t);
    }
  return(t);
}
static ATerm d_10 (ATerm l_9, ATerm t)
{
  ATerm p_9 = NULL;
  t = SSL_explode_term(l_9);
  if(match_cons(t, sym__2))
    {
      ATerm w_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_9 = NULL,u_9 = NULL,v_9 = NULL;
  v_9 = t;
  if(match_cons(t, sym__2))
    {
      r_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
      {
        ATerm x_17 = t;
        int z_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_0 (ATerm t)
            {
              t = u_9;
              return(t);
            }
            t = r_9;
            t = at_end_1_0(s_0, t);
            LocalPopChoice(z_17);
          }
        else
          {
            t = x_17;
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
static ATerm t_6 (ATerm a_81 (ATerm), ATerm j_30, ATerm h_30, ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,j_10 = NULL,k_10 = NULL,m_10 = NULL,r_10 = NULL;
  k_10 = t;
  t = a_81(t);
  e_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_10, j_30, h_30);
  t = b_7(e_10, j_30, h_30, t);
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_10 = NULL;
        t = term_c_18;
        t_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_10, term_c_18);
        t = a_7(e_10, t_10, t);
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_10 = ATgetFirst((ATermList) t);
      j_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_c_18;
  m_10 = t;
  t = (ATerm) ATinsert(CheckATermList(j_10), (ATerm) ATinsert(CheckATermList(f_10), j_30));
  r_10 = t;
  t = SSL_table_put(e_10, m_10, r_10);
  t = k_10;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm v_10 = NULL;
  ATerm f_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_11 = NULL,x_4 = NULL;
      f_11 = t;
      t = term_h_18;
      x_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_11, term_h_18);
      t = u_6(f_11, x_4, t);
      v_10 = t;
      t = SSL_mkstemp(v_10);
      LocalPopChoice(g_18);
    }
  else
    {
      t = f_18;
      {
        ATerm g_11 = NULL;
        t = term_i_18;
        g_11 = t;
        t = SSL_perror(g_11);
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
  t = term_j_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
  t = P__tmpdir_0_0(t);
  n_11 = t;
  t = term_k_18;
  o_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_11, term_k_18);
  t = u_6(n_11, o_11, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      j_11 = ATgetArgument(t, 0);
      i_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_l_18;
  m_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_11, term_l_18);
  t = t_6(t_0, j_11, m_11, t);
  t = SSL_close(i_11);
  t = j_11;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL;
  v_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm a_12 = NULL,c_12 = NULL;
      t = v_11;
      t = xtc_new_file_0_0(t);
      a_12 = t;
      t = r_0(t);
      c_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_12, (ATerm) ATinsert(ATinsert(ATempty, a_12), term_m_8));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_12);
    }
  else
    {
      ATerm g_12 = NULL,n_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_11;
      t = xtc_new_file_0_0(t);
      g_12 = t;
      t = r_0(t);
      n_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_12), term_m_8), w_11), term_m_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_12);
    }
  return(t);
}
static ATerm d_6 (ATerm e_19, ATerm f_19, ATerm t)
{
  ATerm o_13 = NULL,q_13 = NULL;
  t = f_19;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_19;
    }
  else
    {
      ATerm i_5 = NULL,l_5 = NULL,b_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_13 = ATgetFirst((ATermList) t);
          q_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_19);
      i_5 = t;
      t = q_13;
      {
        static ATerm u_5 (ATerm t)
        {
          ATerm o_18 = t;
          int p_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_5 = NULL;
              o_5 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_5;
              LocalPopChoice(p_18);
            }
          else
            {
              t = o_18;
              {
                ATerm s_5 = NULL;
                t = Cons_2_0(_id, u_5, t);
                s_5 = t;
                t = (ATerm) ATinsert(CheckATermList(s_5), e_19);
              }
            }
          return(t);
        }
        t = u_5(t);
      }
      l_5 = t;
      t = (ATerm) ATinsert(CheckATermList(l_5), o_13);
      b_1 = t;
      t = SSLsetAnnotations(b_1, i_5);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm y_72 (ATerm), ATerm t)
{
  static ATerm k_15 (ATerm t)
  {
    ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
    e_15 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_15 = ATgetFirst((ATermList) t);
        g_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_18 = t;
      int s_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_7 = NULL,h_1 = NULL;
          t = SSLgetAnnotations(e_15);
          c_7 = t;
          t = g_15;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(g_15), f_15);
          h_1 = t;
          t = SSLsetAnnotations(h_1, c_7);
          t = y_72(t);
          LocalPopChoice(s_18);
        }
      else
        {
          t = q_18;
          {
            ATerm u_7 = NULL,x_7 = NULL,i_1 = NULL;
            t = SSLgetAnnotations(e_15);
            u_7 = t;
            t = g_15;
            t = k_15(t);
            x_7 = t;
            t = (ATerm) ATinsert(CheckATermList(x_7), f_15);
            i_1 = t;
            t = SSLsetAnnotations(i_1, u_7);
          }
        }
    }
    return(t);
  }
  t = k_15(t);
  return(t);
}
static ATerm f_6 (ATerm f_72 (ATerm), ATerm s_19, ATerm c_200, ATerm t)
{
  static ATerm u_0 (ATerm t)
  {
    ATerm p_15 = NULL;
    p_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_19, p_15);
    t = f_72(t);
    t = p_15;
    return(t);
  }
  t = c_200;
  t = SRTS_one(u_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm r_72 (ATerm), ATerm t)
{
  static ATerm t_16 (ATerm t)
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_72(t);
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        {
          ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,n_8 = NULL,u_8 = NULL,p_1 = NULL;
          n_16 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_16 = ATgetFirst((ATermList) t);
              p_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_16);
          n_8 = t;
          t = p_16;
          t = t_16(t);
          u_8 = t;
          t = (ATerm) ATinsert(CheckATermList(u_8), o_16);
          p_1 = t;
          t = SSLsetAnnotations(p_1, n_8);
        }
      }
    return(t);
  }
  t = t_16(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm j_72 (ATerm), ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  static ATerm x_0 (ATerm t)
  {
    ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,j_17 = NULL,n_17 = NULL,s_17 = NULL,w_1 = NULL,u_1 = NULL;
    s_17 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_17 = ATgetFirst((ATermList) t);
        h_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_17);
    f_17 = t;
    t = g_17;
    t = j_72(t);
    j_17 = t;
    t = (ATerm) ATinsert(CheckATermList(h_17), j_17);
    u_1 = t;
    t = SSLsetAnnotations(u_1, f_17);
    n_17 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_17 = ATgetFirst((ATermList) t);
        c_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_17);
    a_17 = t;
    t = c_17;
    if(((y_16 != NULL) && (y_16 != t)))
      _fail(t);
    else
      y_16 = t;
    t = (ATerm) ATinsert(CheckATermList(c_17), b_17);
    w_1 = t;
    t = SSLsetAnnotations(w_1, a_17);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(x_0, t);
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_16, not_null(y_16));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm t_97 (ATerm), ATerm t)
{
  ATerm n_18 = NULL,r_18 = NULL;
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(t_97, t);
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      {
        ATerm d_18 = NULL;
        d_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_18, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      n_18 = ATgetArgument(t, 0);
      r_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_18;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_18;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm x_18 = ATgetFirst((ATermList) t);
              ATerm y_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_18;
          t = list_tokenize_1_0(t_97, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm z_18 = ATgetFirst((ATermList) t);
          ATerm a_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_18;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, n_18);
        }
      else
        {
          ATerm r_19 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_19 = ATgetFirst((ATermList) t);
              ATerm c_19 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_18;
          t = list_tokenize_1_0(t_97, t);
          r_19 = t;
          t = (ATerm) ATinsert(CheckATermList(r_19), n_18);
        }
    }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm l_20 = NULL;
  if(match_cons(t, sym__2))
    {
      l_20 = ATgetArgument(t, 0);
      if((l_20 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  t = SSL_implode_string(n_20);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm v_19 = NULL,y_19 = NULL,z_19 = NULL,c_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,n_2 = NULL;
  h_20 = t;
  if(match_cons(t, sym__2))
    {
      c_20 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_20);
  z_19 = t;
  t = SSL_explode_string(f_20);
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_20, g_20);
  n_2 = t;
  t = SSLsetAnnotations(n_2, z_19);
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      y_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_19;
  {
    static ATerm z_0 (ATerm t)
    {
      ATerm i_20 = NULL;
      i_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_20, v_19);
      t = f_6(a_1, i_20, v_19, t);
      return(t);
    }
    t = list_tokenize_1_0(z_0, t);
  }
  t = map_1_0(c_1, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm w_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_19 = ATgetFirst((ATermList) t);
      w_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_20;
  return(t);
}
ATerm remove_extension_0_0 (ATerm t)
{
  ATerm o_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_g_19), t_20);
  t = string_tokenize_0_0(t);
  t = at_last_1_0(e_1, t);
  o_20 = t;
  t = term_h_19;
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_19, o_20);
  t = d_6(v_20, o_20, t);
  u_20 = t;
  t = SSL_concat_strings(u_20);
  return(t);
}
ATerm debug_1_0 (ATerm e_67 (ATerm), ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,c_21 = NULL;
  x_20 = t;
  t = e_67(t);
  y_20 = t;
  t = term_d_17;
  z_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_20), y_20);
  c_21 = t;
  t = SSL_printnl(z_20, c_21);
  t = x_20;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_21 = NULL;
  static ATerm j_1 (ATerm t)
  {
    ATerm f_21 = NULL,g_21 = NULL;
    f_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_21), f_21);
    t = a_7(not_null(e_21), f_21, t);
    g_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_21, g_21);
    return(t);
  }
  if(((e_21 != NULL) && (e_21 != t)))
    _fail(t);
  else
    e_21 = t;
  t = SSL_table_keys(e_21);
  t = map_1_0(j_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  ATerm i_21 = NULL;
  i_21 = t;
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_21 = NULL,m_21 = NULL,o_21 = NULL;
        t = term_k_8;
        m_21 = t;
        t = term_z_8;
        o_21 = t;
        t = term_e_9;
        t = a_7(m_21, o_21, t);
        l_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_21, term_q_15);
        t = geq_0_0(t);
        t = i_21;
        t = n_82(t);
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        t = i_21;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm m_82 (ATerm), ATerm t)
{
  ATerm r_21 = NULL;
  r_21 = t;
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_21 = NULL,u_21 = NULL,x_21 = NULL;
        t = term_k_8;
        u_21 = t;
        t = term_z_8;
        x_21 = t;
        t = term_e_9;
        t = a_7(u_21, x_21, t);
        t_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_21, term_z_12);
        t = geq_0_0(t);
        t = r_21;
        t = m_82(t);
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = r_21;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm o_82 (ATerm), ATerm t)
{
  ATerm a_22 = NULL;
  a_22 = t;
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_22 = NULL,g_22 = NULL,h_22 = NULL;
        t = term_k_8;
        g_22 = t;
        t = term_z_8;
        h_22 = t;
        t = term_e_9;
        t = a_7(g_22, h_22, t);
        d_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_22, term_x_10);
        t = geq_0_0(t);
        t = a_22;
        t = o_82(t);
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        t = a_22;
      }
  }
  return(t);
}
static ATerm h_6 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = l_76(t);
  {
    static ATerm l_1 (ATerm t)
    {
      ATerm l_22 = NULL;
      l_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, l_22);
      t = k_76(t);
      return(t);
    }
    t = fetch_1_0(l_1, t);
  }
  t = b_25;
  return(t);
}
static ATerm i_6 (ATerm h_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm l_23 (ATerm t)
  {
    ATerm b_23 = NULL,c_23 = NULL,g_23 = NULL;
    b_23 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_23 = ATgetFirst((ATermList) t);
            g_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_19 = t;
          int p_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_23;
              {
                static ATerm m_1 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = h_6(h_76, m_1, c_23, g_23, t);
              }
              t = l_23(t);
              LocalPopChoice(p_19);
            }
          else
            {
              t = o_19;
              {
                ATerm k_9 = NULL,o_9 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(b_23);
                k_9 = t;
                t = g_23;
                t = l_23(t);
                o_9 = t;
                t = (ATerm) ATinsert(CheckATermList(o_9), c_23);
                q_2 = t;
                t = SSLsetAnnotations(q_2, k_9);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = l_23(t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm u_23 = NULL;
  if(match_cons(t, sym__2))
    {
      u_23 = ATgetArgument(t, 0);
      if((u_23 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t_32, ATerm u_32, ATerm v_32, ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
  o_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_32, u_32);
  {
    ATerm q_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_19 = ATgetArgument(t, 0);
            ATerm w_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_32, u_32);
        t = a_7(t_32, u_32, t);
        LocalPopChoice(t_19);
      }
    else
      {
        t = q_19;
        t = (ATerm) ATempty;
      }
  }
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_23, v_32);
  t = i_6(n_1, q_23, v_32, t);
  p_23 = t;
  t = SSL_table_put(t_32, u_32, p_23);
  t = o_23;
  return(t);
}
static ATerm k_6 (ATerm q_82 (ATerm), ATerm d_33, ATerm c_33, ATerm t)
{
  static ATerm o_1 (ATerm t)
  {
    ATerm w_23 = NULL,y_23 = NULL;
    if(match_cons(t, sym__2))
      {
        w_23 = ATgetArgument(t, 0);
        y_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, d_33, w_23, y_23);
    t = q_82(t);
    return(t);
  }
  t = c_33;
  t = map_1_0(o_1, t);
  return(t);
}
static ATerm m_6 (ATerm k_35, ATerm l_35, ATerm t)
{
  t = SSL_access(k_35, l_35);
  return(t);
}
static ATerm z_24 (ATerm n_24, ATerm t)
{
  t = SSL_fclose(n_24);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_24 = NULL,s_24 = NULL;
  s_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_24 = ATgetArgument(t, 0);
      {
        ATerm x_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_24);
            LocalPopChoice(a_20);
          }
        else
          {
            t = x_19;
            t = z_24(s_24, t);
          }
      }
    }
  else
    {
      t = z_24(s_24, t);
    }
  return(t);
}
static ATerm l_6 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm u_6 (ATerm u_51, ATerm v_51, ATerm t)
{
  t = SSL_strcat(u_51, v_51);
  return(t);
}
static ATerm o_6 (ATerm t_35, ATerm u_35, ATerm t)
{
  ATerm h_25 = NULL;
  t = SSL_fopen(t_35, u_35);
  h_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_25);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_25 = NULL;
  t = SSL_stdin_stream();
  l_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_25);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_25 = NULL;
  t = SSL_stdout_stream();
  m_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_25);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_25 = NULL;
  t = SSL_stderr_stream();
  p_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_25);
  return(t);
}
static ATerm t_27 (ATerm z_25, ATerm t)
{
  ATerm a_26 = NULL;
  t = SSL_explode_term(z_25);
  if(match_cons(t, sym__2))
    {
      ATerm b_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_20 = ATgetArgument(t, 1);
        if(((ATgetType(d_20) == AT_LIST) && !(ATisEmpty(d_20))))
          {
            a_26 = ATgetFirst((ATermList) d_20);
            {
              ATerm e_20 = (ATerm) ATgetNext((ATermList) d_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_26;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_26;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_26;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_26;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_27 (ATerm e_26, ATerm j_26, ATerm k_26, ATerm t)
{
  ATerm l_26 = NULL,n_26 = NULL,o_26 = NULL,w_26 = NULL,c_4 = NULL;
  t = SSLgetAnnotations(k_26);
  o_26 = t;
  t = e_26;
  if(match_cons(t, sym_Path_1))
    {
      w_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_26, j_26);
  c_4 = t;
  t = SSLsetAnnotations(c_4, o_26);
  if(match_cons(t, sym__2))
    {
      l_26 = ATgetArgument(t, 0);
      n_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(l_26, n_26, t);
  return(t);
}
static ATerm w_27 (ATerm y_26, ATerm b_27, ATerm c_27, ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,k_27 = NULL,d_4 = NULL;
  t = SSLgetAnnotations(c_27);
  f_27 = t;
  t = SSL_is_string(y_26);
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_27, b_27);
  d_4 = t;
  t = SSLsetAnnotations(d_4, f_27);
  if(match_cons(t, sym__2))
    {
      d_27 = ATgetArgument(t, 0);
      e_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(d_27, e_27, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,s_27 = NULL;
  o_27 = t;
  if(match_cons(t, sym__2))
    {
      p_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_27(o_27, t);
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            {
              ATerm m_20 = t;
              int p_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_27(p_27, s_27, o_27, t);
                  LocalPopChoice(p_20);
                }
              else
                {
                  t = m_20;
                  t = w_27(p_27, s_27, o_27, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_27(o_27, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,h_28 = NULL;
  h_28 = t;
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_28, term_s_20);
        t = p_6(t);
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        {
          ATerm o_10 = NULL,p_10 = NULL;
          t = term_a_21;
          p_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_21, h_28);
          t = u_6(p_10, h_28, t);
          o_10 = t;
          t = SSL_perror(o_10);
          _fail(t);
        }
      }
  }
  b_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(c_28, t);
  a_28 = t;
  t = b_28;
  t = fclose_0_0(t);
  t = a_28;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_d_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm h_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_28 = NULL,n_28 = NULL;
      k_28 = t;
      t = (ATerm) ATinsert(ATempty, term_k_21);
      n_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_28, (ATerm) ATinsert(ATempty, term_k_21));
      t = m_6(k_28, n_28, t);
      LocalPopChoice(j_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = h_21;
      {
        ATerm n_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_21 = t;
            if((PushChoice() == 0))
              {
                ATerm o_28 = NULL,p_28 = NULL;
                o_28 = t;
                t = (ATerm) ATinsert(ATempty, term_i_9);
                p_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, o_28, (ATerm) ATinsert(ATempty, term_i_9));
                t = m_6(o_28, p_28, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_21;
              }
            t = debug_1_0(q_1, t);
            LocalPopChoice(p_21);
          }
        else
          {
            t = n_21;
            t = debug_1_0(t_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_s_21;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_v_21;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
  i_29 = t;
  t = term_d_17;
  j_29 = t;
  t = (ATerm) ATinsert(ATempty, term_w_21);
  k_29 = t;
  t = SSL_printnl(j_29, k_29);
  t = i_29;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
  if(match_cons(t, sym__3))
    {
      l_29 = ATgetArgument(t, 0);
      m_29 = ATgetArgument(t, 1);
      n_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_6(l_29, m_29, n_29, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  p_29 = t;
  t = term_d_17;
  q_29 = t;
  t = (ATerm) ATinsert(ATempty, term_y_21);
  r_29 = t;
  t = SSL_printnl(q_29, r_29);
  t = p_29;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
  s_29 = t;
  t = term_d_17;
  t_29 = t;
  t = (ATerm) ATinsert(ATempty, term_w_21);
  u_29 = t;
  t = SSL_printnl(t_29, u_29);
  t = s_29;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  q_28 = t;
  t = if_verbose5_1_0(v_1, t);
  {
    ATerm z_21 = t;
    if((PushChoice() == 0))
      {
        ATerm g_29 = NULL,h_29 = NULL;
        t = term_b_22;
        g_29 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, q_28);
        h_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATmakeAppl(sym_Imported_1, q_28));
        t = a_7(g_29, h_29, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_21;
      }
  }
  s_28 = t;
  t = term_b_22;
  d_29 = t;
  t = term_c_22;
  e_29 = t;
  t = (ATerm) ATinsert(ATempty, q_28);
  f_29 = t;
  t = SSL_table_put(d_29, e_29, f_29);
  t = s_28;
  t = if_verbose4_1_0(a_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(c_2, t);
  r_28 = t;
  t = term_b_22;
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_22, r_28);
  t = k_6(d_2, a_29, r_28, t);
  t = if_verbose6_1_0(e_2, t);
  t = term_b_22;
  x_28 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, q_28);
  y_28 = t;
  t = (ATerm) ATempty;
  z_28 = t;
  t = SSL_table_put(x_28, y_28, z_28);
  t = (ATerm) ATmakeAppl(sym__3, term_b_22, (ATerm)ATmakeAppl(sym_Imported_1, q_28), (ATerm) ATempty);
  t = if_verbose4_1_0(f_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  ATerm a_31 = NULL,c_31 = NULL,d_31 = NULL;
  a_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_31;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_31 = ATgetFirst((ATermList) t);
          d_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_10 = NULL,c_11 = NULL,d_11 = NULL,i_4 = NULL;
            t = SSLgetAnnotations(a_31);
            z_10 = t;
            t = c_31;
            t = g_80(t);
            c_11 = t;
            t = d_31;
            t = filter_1_0(g_80, t);
            d_11 = t;
            t = (ATerm) ATinsert(CheckATermList(d_11), c_11);
            i_4 = t;
            t = SSLsetAnnotations(i_4, z_10);
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
            t = d_31;
            t = filter_1_0(g_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm t)
{
  static ATerm i_31 (ATerm t)
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_70(t);
        t = i_31(t);
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        t = c_70(t);
      }
    return(t);
  }
  t = i_31(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm k_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_31 = NULL,k_31 = NULL;
      t = term_k_8;
      j_31 = t;
      t = term_n_22;
      k_31 = t;
      t = term_o_22;
      t = a_7(j_31, k_31, t);
      LocalPopChoice(m_22);
    }
  else
    {
      t = k_22;
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_31 = NULL;
            t = term_r_22;
            l_31 = t;
            t = SSL_getenv(l_31);
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_s_22;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL;
  t = term_b_22;
  d_32 = t;
  t = term_t_22;
  e_32 = t;
  t = term_u_22;
  t = a_7(d_32, e_32, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm v_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_22;
      }
  }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_w_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm n_31 = NULL;
  t = if_verbose5_1_0(g_2, t);
  n_31 = t;
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_31 = NULL,y_31 = NULL;
        t = term_b_22;
        q_31 = t;
        t = term_c_22;
        y_31 = t;
        t = term_z_22;
        t = a_7(q_31, y_31, t);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        {
          ATerm z_31 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          z_31 = t;
          t = repeat_2_0(i_2, _id, t);
          t = z_31;
        }
      }
  }
  t = n_31;
  t = if_verbose5_1_0(l_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_a_23;
  return(t);
}
static ATerm x_33 (ATerm j_32, ATerm t)
{
  ATerm n_32 = NULL,q_32 = NULL,r_32 = NULL;
  t = term_b_22;
  q_32 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, j_32);
  r_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATmakeAppl(sym_Tool_1, j_32));
  t = a_7(q_32, r_32, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_23 = ATgetFirst((ATermList) t);
      if(match_cons(d_23, sym__2))
        {
          ATerm f_23 = ATgetArgument(d_23, 0);
          n_32 = ATgetArgument(d_23, 1);
        }
      else
        _fail(t);
      {
        ATerm e_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_32;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = debug_1_0(w_2, t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_a_23;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_b_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(d_3, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_32 = NULL,y_32 = NULL,g_33 = NULL;
      t = if_verbose5_1_0(o_2, t);
      t = xtc_load_0_0(t);
      g_33 = t;
      if(match_cons(t, sym__2))
        {
          s_32 = ATgetArgument(t, 0);
          y_32 = ATgetArgument(t, 1);
          {
            ATerm k_23 = t;
            int m_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
                t = term_b_22;
                l_33 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, s_32);
                m_33 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATmakeAppl(sym_Tool_1, s_32));
                t = a_7(l_33, m_33, t);
                {
                  static ATerm s_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((y_32 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((k_33 != NULL) && (k_33 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          k_33 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(s_2, t);
                }
                t = not_null(k_33);
                LocalPopChoice(m_23);
              }
            else
              {
                t = k_23;
                t = x_33(g_33, t);
              }
          }
        }
      else
        {
          t = x_33(g_33, t);
        }
      t = if_verbose5_1_0(v_2, t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      {
        ATerm w_33 = NULL,t_11 = NULL,u_11 = NULL;
        w_33 = t;
        t = term_d_17;
        t_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_23), w_33), term_n_23);
        u_11 = t;
        t = SSL_printnl(t_11, u_11);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_23), w_33), term_n_23);
        t = if_verbose5_1_0(x_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm a_7 (ATerm n_33, ATerm o_33, ATerm t)
{
  t = SSL_table_get(n_33, o_33);
  return(t);
}
static ATerm w_6 (ATerm b_32, ATerm c_32, ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL;
  d_34 = t;
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_32, c_32);
        t = a_7(b_32, c_32, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_23 = ATgetFirst((ATermList) t);
            c_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_23);
        t = SSL_table_put(b_32, c_32, c_34);
        t = (ATerm) ATmakeAppl(sym__3, b_32, c_32, c_34);
      }
    else
      {
        t = s_23;
        t = SSL_table_remove(b_32, c_32);
        t = (ATerm) ATmakeAppl(sym__2, b_32, c_32);
      }
  }
  t = d_34;
  return(t);
}
ATerm end_scope_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,p_34 = NULL;
  m_34 = t;
  t = x_80(t);
  l_34 = t;
  {
    ATerm x_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_34 = NULL;
        t = term_c_18;
        q_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_34, term_c_18);
        t = a_7(l_34, q_34, t);
        LocalPopChoice(z_23);
      }
    else
      {
        t = x_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_34 = ATgetFirst((ATermList) t);
      j_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_c_18;
  p_34 = t;
  t = SSL_table_put(l_34, p_34, j_34);
  t = k_34;
  {
    static ATerm g_3 (ATerm t)
    {
      ATerm r_34 = NULL;
      r_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_34, r_34);
      t = w_6(l_34, r_34, t);
      return(t);
    }
    t = map_1_0(g_3, t);
  }
  t = m_34;
  return(t);
}
ATerm restore_always_2_0 (ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_81(t);
      t = y_81(t);
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      t = y_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL;
  a_35 = t;
  t = w_80(t);
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_34, term_c_18);
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_35 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_24 = ATgetArgument(t, 0);
            ATerm f_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_18;
        i_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_34, term_c_18);
        t = a_7(z_34, i_35, t);
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = (ATerm) ATempty;
      }
  }
  b_35 = t;
  t = term_c_18;
  c_35 = t;
  t = (ATerm) ATinsert(CheckATermList(b_35), (ATerm) ATempty);
  d_35 = t;
  t = SSL_table_put(z_34, c_35, d_35);
  t = a_35;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_j_18;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm x_35 = NULL;
  x_35 = t;
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(x_35);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = x_35;
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_j_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm x_84 (ATerm), ATerm t)
{
  ATerm n_35 = NULL;
  static ATerm j_3 (ATerm t)
  {
    ATerm o_35 = NULL;
    o_35 = t;
    {
      ATerm i_24 = t;
      int j_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_35 = NULL,q_35 = NULL;
          t = term_j_18;
          p_35 = t;
          t = term_c_18;
          q_35 = t;
          t = term_k_24;
          t = a_7(p_35, q_35, t);
          LocalPopChoice(j_24);
        }
      else
        {
          t = i_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((n_35 != NULL) && (n_35 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          n_35 = ATgetFirst((ATermList) t);
        {
          ATerm l_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = n_35;
    t = map_1_0(s_3, t);
    t = o_35;
    t = end_scope_1_0(u_3, t);
    return(t);
  }
  t = begin_scope_1_0(h_3, t);
  t = restore_always_2_0(x_84, j_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
  a_36 = t;
  t = term_l_18;
  t = whoami_0_0(t);
  b_36 = t;
  t = term_d_17;
  d_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_24), b_36), term_m_24);
  e_36 = t;
  t = SSL_printnl(d_36, e_36);
  t = term_f_9;
  c_36 = t;
  t = SSL_exit(c_36);
  t = a_36;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm g_36 = NULL;
  g_36 = t;
  if(match_string(t, "-k"))
    {
      t = g_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_36;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,m_36 = NULL;
  h_36 = t;
  t = SSL_string_to_int(h_36);
  i_36 = t;
  t = term_p_24;
  m_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_24, i_36);
  t = d_7(m_36, i_36, t);
  t = h_36;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_3, w_3, y_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm o_36 = NULL;
  o_36 = t;
  if(match_string(t, "-S"))
    {
      t = o_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_36;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL;
  t = term_z_8;
  p_36 = t;
  t = term_t_24;
  q_36 = t;
  t = term_u_24;
  t = d_7(p_36, q_36, t);
  t = term_v_24;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_w_24;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
  x_36 = t;
  t = SSL_string_to_int(x_36);
  y_36 = t;
  t = term_z_8;
  z_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_8, y_36);
  t = d_7(z_36, y_36, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_36);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_a_25;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL;
  t = term_d_25;
  a_37 = t;
  t = term_l_18;
  b_37 = t;
  t = term_e_25;
  t = d_7(a_37, b_37, t);
  t = term_f_25;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_3, b_4, e_4, t);
      LocalPopChoice(j_25);
    }
  else
    {
      t = i_25;
      {
        ATerm k_25 = t;
        int n_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_4, g_4, h_4, t);
            LocalPopChoice(n_25);
          }
        else
          {
            t = k_25;
            t = Option_3_0(j_4, l_4, m_4, t);
          }
      }
    }
  return(t);
}
static ATerm d_7 (ATerm h_34, ATerm i_34, ATerm t)
{
  ATerm c_37 = NULL;
  t = term_k_8;
  c_37 = t;
  t = SSL_table_put(c_37, h_34, i_34);
  t = (ATerm) ATmakeAppl(sym__3, term_k_8, h_34, i_34);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_37 = NULL,l_37 = NULL,q_37 = NULL;
      t = term_l_18;
      t = e_0(t);
      k_37 = t;
      t = term_o_25;
      l_37 = t;
      t = term_q_25;
      q_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_25, term_q_25, k_37);
      t = b_7(l_37, q_37, k_37, t);
      _fail(t);
    }
  else
    {
      ATerm t_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_37 = ATgetFirst((ATermList) t);
          i_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_37;
      t = c_0(t);
      t = term_l_18;
      t = d_0(t);
      t_37 = t;
      t = (ATerm) ATinsert(CheckATermList(i_37), t_37);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm v_37 = NULL;
  v_37 = t;
  if(match_string(t, "-o"))
    {
      t = v_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_37;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm w_37 = NULL,e_38 = NULL;
  w_37 = t;
  t = term_m_8;
  e_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, w_37);
  t = d_7(e_38, w_37, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_37);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_r_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, r_4, t);
  return(t);
}
static ATerm b_7 (ATerm w_31, ATerm x_31, ATerm v_31, ATerm t)
{
  ATerm h_38 = NULL,j_38 = NULL,k_38 = NULL;
  h_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_31, x_31);
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_25 = ATgetArgument(t, 0);
            ATerm v_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_31, x_31);
        t = a_7(w_31, x_31, t);
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        t = (ATerm) ATempty;
      }
  }
  j_38 = t;
  t = (ATerm) ATinsert(CheckATermList(j_38), v_31);
  k_38 = t;
  t = SSL_table_put(w_31, x_31, k_38);
  t = h_38;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL;
      t = term_l_18;
      t = n_0(t);
      w_38 = t;
      t = term_o_25;
      x_38 = t;
      t = term_q_25;
      y_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_25, term_q_25, w_38);
      t = b_7(x_38, y_38, w_38, t);
      _fail(t);
    }
  else
    {
      ATerm c_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_38 = ATgetFirst((ATermList) t);
          t_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_38;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_38 = ATgetFirst((ATermList) t);
          v_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_38;
      t = k_0(t);
      t = u_38;
      t = l_0(t);
      c_39 = t;
      t = (ATerm) ATinsert(CheckATermList(v_38), c_39);
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm e_39 = NULL;
  e_39 = t;
  if(match_string(t, "-i"))
    {
      t = e_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_39;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL;
  f_39 = t;
  t = term_m_18;
  g_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_18, f_39);
  t = d_7(g_39, f_39, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_39);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_w_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_4, a_5, b_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_18;
  t = whoami_0_0(t);
  h_39 = t;
  t = term_d_17;
  j_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_25), h_39);
  k_39 = t;
  t = SSL_printnl(j_39, k_39);
  t = term_f_9;
  i_39 = t;
  t = SSL_exit(i_39);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL;
  t = term_k_8;
  l_39 = t;
  t = term_y_25;
  m_39 = t;
  t = term_b_26;
  t = a_7(l_39, m_39, t);
  return(t);
}
static ATerm x_6 (ATerm v_28, ATerm w_28, ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_28, w_28);
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      t = SSL_addr(v_28, w_28);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
  o_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_39;
      t = c_79(t);
    }
  else
    {
      ATerm t_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_39 = ATgetFirst((ATermList) t);
          q_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_39;
      t = foldr_2_0(c_79, d_79, t);
      t_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_39, t_39);
      t = d_79(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_t_24;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL;
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      k_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(j_12, k_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_39 = NULL,d_12 = NULL,e_12 = NULL;
  t = times_0_0(t);
  e_12 = t;
  t = SSL_explode_term(e_12);
  if(match_cons(t, sym__2))
    {
      ATerm f_26 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_12;
  t = foldr_2_0(e_5, f_5, t);
  w_39 = t;
  t = SSL_TicksToSeconds(w_39);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
  h_40 = t;
  if(match_cons(t, sym__2))
    {
      i_40 = ATgetArgument(t, 0);
      j_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_40;
        if((i_40 != t))
          {
            _fail(t);
          }
        t = h_40;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = (ATerm) ATmakeAppl(sym__2, i_40, j_40);
        {
          ATerm i_26 = t;
          int m_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_40, j_40);
              LocalPopChoice(m_26);
            }
          else
            {
              t = i_26;
              t = SSL_gtr(i_40, j_40);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, i_40, j_40);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_82 (ATerm), ATerm t)
{
  ATerm n_40 = NULL;
  n_40 = t;
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
        t = term_k_8;
        q_40 = t;
        t = term_z_8;
        r_40 = t;
        t = term_e_9;
        t = a_7(q_40, r_40, t);
        p_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_40, term_f_9);
        t = geq_0_0(t);
        t = n_40;
        t = j_82(t);
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        t = n_40;
      }
  }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,w_40 = NULL,x_40 = NULL;
  t = run_time_0_0(t);
  t_40 = t;
  t = term_l_18;
  t = whoami_0_0(t);
  u_40 = t;
  t = term_d_17;
  w_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_26), t_40), term_s_9), u_40);
  x_40 = t;
  t = SSL_printnl(w_40, x_40);
  t = (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_26), t_40), term_s_9), u_40));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_24;
  y_40 = t;
  t = SSL_exit(y_40);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL;
  j_41 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_41;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_41 = ATgetArgument(t, 0);
          {
            ATerm i_13 = NULL,k_4 = NULL;
            t = SSLgetAnnotations(j_41);
            i_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_41);
            k_4 = t;
            t = SSLsetAnnotations(k_4, i_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_41;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_41 = NULL,c_41 = NULL;
      t = term_k_8;
      b_41 = t;
      t = term_u_26;
      c_41 = t;
      t = term_v_26;
      t = a_7(b_41, c_41, t);
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      t = fetch_1_0(h_5, t);
    }
  t = n_86(t);
  return(t);
}
ATerm map_1_0 (ATerm w_71 (ATerm), ATerm t)
{
  static ATerm z_41 (ATerm t)
  {
    ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
    w_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_41;
      }
    else
      {
        ATerm u_13 = NULL,y_13 = NULL,z_13 = NULL,n_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_41 = ATgetFirst((ATermList) t);
            y_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_41);
        u_13 = t;
        t = x_41;
        t = w_71(t);
        y_13 = t;
        t = y_41;
        t = z_41(t);
        z_13 = t;
        t = (ATerm) ATinsert(CheckATermList(z_13), y_13);
        n_4 = t;
        t = SSLsetAnnotations(n_4, u_13);
      }
    return(t);
  }
  t = z_41(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_42 = ATgetFirst((ATermList) t);
      d_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_42 = NULL,i_42 = NULL;
        static ATerm j_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_42)), not_null(i_42));
          return(t);
        }
        t = d_42;
        t = i_0(t);
        if(((h_42 != NULL) && (h_42 != t)))
          _fail(t);
        else
          h_42 = t;
        t = c_42;
        t = g_0(t);
        if(((i_42 != NULL) && (i_42 != t)))
          _fail(t);
        else
          i_42 = t;
        t = d_42;
        t = reverse_acc_2_0(g_0, j_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_18;
      t = i_0(t);
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,q_4 = NULL;
  q_42 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_42);
  o_42 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_42);
  q_4 = t;
  t = SSLsetAnnotations(q_4, o_42);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm s_42 = NULL;
  s_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_42), term_x_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL;
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_42 = NULL,n_42 = NULL;
      t = term_k_8;
      m_42 = t;
      t = term_y_25;
      n_42 = t;
      t = term_b_26;
      t = a_7(m_42, n_42, t);
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      t = fetch_1_0(k_5, t);
    }
  t = term_g_27;
  t = echo_0_0(t);
  t = term_o_25;
  k_42 = t;
  t = term_q_25;
  l_42 = t;
  t = term_h_27;
  t = a_7(k_42, l_42, t);
  t = reverse_acc_2_0(_id, p_5, t);
  t = map_1_0(r_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_72 (ATerm), ATerm t)
{
  static ATerm p_43 (ATerm t)
  {
    ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
    m_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_43 = ATgetFirst((ATermList) t);
        o_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_27 = t;
      int j_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_14 = NULL,c_15 = NULL,s_4 = NULL;
          t = SSLgetAnnotations(m_43);
          u_14 = t;
          t = n_43;
          t = g_72(t);
          c_15 = t;
          t = (ATerm) ATinsert(CheckATermList(o_43), c_15);
          s_4 = t;
          t = SSLsetAnnotations(s_4, u_14);
          LocalPopChoice(j_27);
        }
      else
        {
          t = i_27;
          {
            ATerm r_15 = NULL,z_15 = NULL,t_4 = NULL;
            t = SSLgetAnnotations(m_43);
            r_15 = t;
            t = o_43;
            t = p_43(t);
            z_15 = t;
            t = (ATerm) ATinsert(CheckATermList(z_15), n_43);
            t_4 = t;
            t = SSLsetAnnotations(t_4, r_15);
          }
        }
    }
    return(t);
  }
  t = p_43(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
  t_43 = t;
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_43;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_27 = ATgetFirst((ATermList) t);
                ATerm q_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_43;
          }
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        t = (ATerm) ATinsert(ATempty, t_43);
      }
  }
  u_43 = t;
  t = term_q_8;
  v_43 = t;
  t = SSL_printnl(v_43, u_43);
  t = t_43;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL;
  t = term_k_8;
  z_43 = t;
  t = term_y_25;
  a_44 = t;
  t = term_b_26;
  t = a_7(z_43, a_44, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL;
  t = term_r_27;
  b_44 = t;
  t = term_l_18;
  c_44 = t;
  t = term_v_27;
  t = d_7(b_44, c_44, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_x_27;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL;
  t = term_r_27;
  f_44 = t;
  t = term_l_18;
  g_44 = t;
  t = term_v_27;
  t = d_7(f_44, g_44, t);
  t = term_y_27;
  d_44 = t;
  t = term_l_18;
  e_44 = t;
  t = term_z_27;
  t = d_7(d_44, e_44, t);
  t = term_d_28;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_5, w_5, x_5, t);
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      t = Option_3_0(z_5, a_6, b_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_5 = NULL;
  m_44 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_44 = ATgetFirst((ATermList) t);
      j_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_44);
  h_44 = t;
  t = i_44;
  t = v_58(t);
  k_44 = t;
  t = j_44;
  t = w_58(t);
  l_44 = t;
  t = (ATerm) ATinsert(CheckATermList(l_44), k_44);
  n_5 = t;
  t = SSLsetAnnotations(n_5, h_44);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_88 (ATerm), ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,w_44 = NULL,x_44 = NULL,q_5 = NULL;
  r_44 = t;
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_28;
        t = l_88(t);
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
      }
  }
  t = r_44;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_44 = ATgetFirst((ATermList) t);
      u_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_44);
  s_44 = t;
  t = term_y_25;
  x_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_25, t_44);
  t = d_7(x_44, t_44, t);
  t = u_44;
  {
    static ATerm h_45 (ATerm t)
    {
      ATerm m_28 = t;
      int t_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_28 = t;
          int o_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_45 = NULL;
              a_45 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_45;
              LocalPopChoice(o_29);
            }
          else
            {
              t = u_28;
              t = l_88(t);
              t = Cons_2_0(_id, h_45, t);
            }
          LocalPopChoice(t_28);
        }
      else
        {
          t = m_28;
          {
            ATerm d_45 = NULL,e_45 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_45 = ATgetFirst((ATermList) t);
                e_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_45), (ATerm) ATmakeAppl(sym_Undefined_1, d_45));
          }
        }
      return(t);
    }
    t = h_45(t);
  }
  w_44 = t;
  t = (ATerm) ATinsert(CheckATermList(w_44), (ATerm) ATmakeAppl(sym_Program_1, t_44));
  q_5 = t;
  t = SSLsetAnnotations(q_5, s_44);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm t_45 = NULL;
  t_45 = t;
  if(match_string(t, "--help"))
    {
      t = t_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_45;
        }
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL;
  t = term_u_26;
  u_45 = t;
  t = term_l_18;
  v_45 = t;
  t = term_v_29;
  t = d_7(u_45, v_45, t);
  t = term_w_29;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_x_29;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL;
  o_45 = t;
  t = term_o_25;
  q_45 = t;
  t = term_q_25;
  r_45 = t;
  t = (ATerm) ATempty;
  s_45 = t;
  t = SSL_table_put(q_45, r_45, s_45);
  t = o_45;
  {
    static ATerm e_6 (ATerm t)
    {
      ATerm y_29 = t;
      int z_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_88(t);
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
                t = Option_3_0(g_6, s_6, y_6, t);
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
    t = parse_options_p__1_0(e_6, t);
  }
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_46 = NULL;
        g_46 = t;
        {
          ATerm e_30 = t;
          int f_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_16 = NULL;
              t = g_46;
              {
                ATerm g_30 = t;
                int i_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_16 = NULL,j_16 = NULL;
                    t = term_k_8;
                    i_16 = t;
                    t = term_u_26;
                    j_16 = t;
                    t = term_v_26;
                    t = a_7(i_16, j_16, t);
                    LocalPopChoice(i_30);
                  }
                else
                  {
                    t = g_30;
                    t = fetch_1_0(z_6, t);
                  }
              }
              t = g_46;
              t = default_system_usage_0_0(t);
              t = term_t_24;
              h_16 = t;
              t = SSL_exit(h_16);
              LocalPopChoice(f_30);
            }
          else
            {
              t = e_30;
              {
                ATerm s_16 = NULL,u_16 = NULL,w_16 = NULL;
                t = term_k_8;
                u_16 = t;
                t = term_r_27;
                w_16 = t;
                t = term_k_30;
                t = a_7(u_16, w_16, t);
                t = g_46;
                t = default_system_about_0_0(t);
                t = term_t_24;
                s_16 = t;
                t = SSL_exit(s_16);
              }
            }
        }
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        {
          ATerm l_30 = t;
          int m_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
              static ATerm e_7 (ATerm t)
              {
                ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,v_5 = NULL;
                m_46 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_46 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_46);
                k_46 = t;
                t = l_46;
                if(((m_45 != NULL) && (m_45 != t)))
                  _fail(t);
                else
                  m_45 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_46);
                v_5 = t;
                t = SSLsetAnnotations(v_5, k_46);
                return(t);
              }
              t = fetch_1_0(e_7, t);
              t = term_d_17;
              i_46 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_45)), term_n_30);
              j_46 = t;
              t = SSL_printnl(i_46, j_46);
              t = (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_45)), term_n_30));
              t = default_system_usage_0_0(t);
              t = term_f_9;
              h_46 = t;
              t = SSL_exit(h_46);
              LocalPopChoice(m_30);
            }
          else
            {
              t = l_30;
            }
        }
      }
  }
  n_45 = t;
  t = term_o_25;
  p_45 = t;
  t = SSL_table_destroy(p_45);
  t = n_45;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
  t = parse_options_1_0(p_86, t);
  r_46 = t;
  t = term_o_30;
  u_46 = t;
  t = SSL_table_create(u_46);
  t = term_o_30;
  s_46 = t;
  t = term_p_30;
  t_46 = t;
  t = SSL_table_put(s_46, t_46, r_46);
  t = r_46;
  t = r_86(t);
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_86, t);
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        {
          ATerm s_30 = t;
          int t_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_86(t);
              t = report_success_0_0(t);
              LocalPopChoice(t_30);
            }
          else
            {
              t = s_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm f_7 (ATerm t)
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
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(x_30);
          }
        else
          {
            t = w_30;
            {
              ATerm y_30 = t;
              int z_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(j_7, k_7, l_7, t);
                  LocalPopChoice(z_30);
                }
              else
                {
                  t = y_30;
                  {
                    ATerm b_31 = t;
                    int e_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(e_31);
                      }
                    else
                      {
                        t = b_31;
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
  t = xtc_temp_files_1_0(m_7, t);
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
  ATerm c_47 = NULL,d_47 = NULL;
  t = term_f_31;
  c_47 = t;
  t = term_l_18;
  d_47 = t;
  t = term_g_31;
  t = d_7(c_47, d_47, t);
  t = term_h_31;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_m_31;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL;
      t = term_k_8;
      g_47 = t;
      t = term_m_18;
      h_47 = t;
      t = term_r_31;
      t = a_7(g_47, h_47, t);
      f_47 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_47);
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      t = term_v_8;
    }
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_47 = NULL,o_47 = NULL;
        o_47 = t;
        if(match_cons(t, sym_FILE_1))
          {
            n_47 = ATgetArgument(t, 0);
            {
              ATerm i_17 = NULL,l_8 = NULL;
              t = SSLgetAnnotations(o_47);
              i_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_47);
              l_8 = t;
              t = SSLsetAnnotations(l_8, i_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_47;
          }
        LocalPopChoice(t_31);
        t = xtc_transform_file_2_0(n_7, o_7, t);
      }
    else
      {
        t = s_31;
        t = xtc_transform_term_2_0(p_7, q_7, t);
      }
  }
  {
    ATerm u_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_47 = NULL,x_47 = NULL;
        x_47 = t;
        if(match_cons(t, sym_FILE_1))
          {
            w_47 = ATgetArgument(t, 0);
            {
              ATerm v_17 = NULL,p_8 = NULL;
              t = SSLgetAnnotations(x_47);
              v_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_47);
              p_8 = t;
              t = SSLsetAnnotations(p_8, v_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_47;
          }
        LocalPopChoice(a_32);
        t = xtc_transform_file_2_0(r_7, pass_verbose_0_0, t);
      }
    else
      {
        t = u_31;
        t = xtc_transform_term_2_0(v_7, pass_verbose_0_0, t);
      }
  }
  {
    ATerm f_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_48 = NULL,e_48 = NULL;
        e_48 = t;
        if(match_cons(t, sym_FILE_1))
          {
            d_48 = ATgetArgument(t, 0);
            {
              ATerm e_18 = NULL,r_8 = NULL;
              t = SSLgetAnnotations(e_48);
              e_18 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_48);
              r_8 = t;
              t = SSLsetAnnotations(r_8, e_18);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_48;
          }
        LocalPopChoice(g_32);
        t = xtc_transform_file_2_0(w_7, pass_verbose_0_0, t);
      }
    else
      {
        t = f_32;
        t = xtc_transform_term_2_0(z_7, pass_verbose_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_h_32;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm p_47 = NULL;
  t = term_i_32;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  p_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_47), term_k_32);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_h_32;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm q_47 = NULL;
  t = term_i_32;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  q_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_47), term_k_32);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_l_32;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_l_32;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_m_32;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm io_pp_c_0_0 (ATerm t)
{
  t = option_wrap_4_0(f_7, default_usage_0_0, _id, g_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_c_0_0(t);
  return(t);
}
