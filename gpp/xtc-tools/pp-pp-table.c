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
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_r_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_f_30;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_i_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_s_28;
ATerm term_q_28;
ATerm term_m_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_m_27;
ATerm term_e_27;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_p_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_u_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_i_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_f_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_n_17;
ATerm term_e_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_o_10;
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
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_h_8;
ATerm term_d_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_u_7;
ATerm term_t_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_u_7);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_h_8);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_9, term_n_8, term_i_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_9, term_l_9, term_m_9);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_9, term_r_9, term_s_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_z_9, term_a_10);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_d_10, term_e_10);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_10, term_i_10, term_k_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_10, term_u_10, term_x_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_b_11, term_c_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_h_11, term_i_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_11, term_n_11, term_p_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_x_11, term_b_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_g_12, term_h_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_t_12, term_u_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_z_12, term_d_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_m_13, term_n_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_z_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_i_14, term_j_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_q_14, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_u_14, term_v_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_z_14, term_a_15);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_e_15, term_f_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_l_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_u_15, term_v_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_g_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_l_16, term_m_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_z_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym__2, term_r_21, term_f_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_r_21, term_s_21);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym__2, term_z_17, term_n_17);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_h_8, term_p_24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_24);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym__2, term_w_24, term_b_18);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_g_26);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_m_27);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_s_25);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym__2, term_j_28, term_b_18);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_q_28, term_b_18);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym__2, term_m_27, term_b_18);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_j_28);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_b_18);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_c_18);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table.pp.af", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm h_6 (ATerm o_14, ATerm p_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm r_5 (ATerm b_29, ATerm c_29, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm z_5 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm c_6 (ATerm i_67 (ATerm), ATerm r_168, ATerm y_17, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm t);
static ATerm d_6 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm k_72 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm x_65 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm n_85 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm p_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_10 (ATerm n_9, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm f_6 (ATerm c_81 (ATerm), ATerm j_30, ATerm h_30, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm g_67 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm p_82 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm o_82 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm q_82 (ATerm), ATerm t);
static ATerm t_5 (ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm u_5 (ATerm j_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm v_5 (ATerm t_32, ATerm u_32, ATerm v_32, ATerm t);
static ATerm w_5 (ATerm s_82 (ATerm), ATerm d_33, ATerm c_33, ATerm t);
static ATerm y_5 (ATerm m_35, ATerm n_35, ATerm t);
static ATerm k_17 (ATerm y_16, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_5 (ATerm u_17, ATerm t);
static ATerm g_6 (ATerm u_51, ATerm v_51, ATerm t);
static ATerm a_6 (ATerm v_35, ATerm w_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_19 (ATerm e_18, ATerm t);
static ATerm g_19 (ATerm i_18, ATerm j_18, ATerm k_18, ATerm t);
static ATerm h_19 (ATerm s_18, ATerm t_18, ATerm u_18, ATerm t);
static ATerm b_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm u_24 (ATerm r_23, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm m_6 (ATerm n_33, ATerm o_33, ATerm t);
static ATerm i_6 (ATerm b_32, ATerm c_32, ATerm t);
ATerm end_scope_1_0 (ATerm z_80 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm y_80 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm z_84 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_6 (ATerm j_34, ATerm k_34, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_6 (ATerm w_31, ATerm x_31, ATerm v_31, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_6 (ATerm v_28, ATerm w_28, ATerm t);
ATerm foldr_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_82 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm need_help_1_0 (ATerm p_86 (ATerm), ATerm t);
ATerm map_1_0 (ATerm y_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_72 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm x_58 (ATerm), ATerm y_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_88 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm parse_options_1_0 (ATerm m_88 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm io_pp_pp_table_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL;
  u_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_7 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = u_1;
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
        t = (ATerm) ATmakeAppl(sym__2, v_1, h_0);
        t = h_6(v_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
        LocalPopChoice(e_7);
      }
    else
      {
        t = d_7;
        {
          ATerm h_7 = t;
          int k_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = u_1;
              t = o_0(t);
              v_0 = t;
              {
                ATerm n_7 = t;
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
                            if((v_1 != t))
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
                    t = n_7;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, v_1, v_0);
              t = h_6(v_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
              LocalPopChoice(k_7);
            }
          else
            {
              t = h_7;
              t = u_1;
              t = o_0(t);
              if((v_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
            }
        }
      }
  }
  return(t);
}
static ATerm h_6 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_copy(o_14, p_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 = NULL,v_2 = NULL;
      t = term_t_7;
      r_2 = t;
      t = term_u_7;
      v_2 = t;
      t = term_y_7;
      t = m_6(r_2, v_2, t);
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      t = term_z_7;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm e_1 = NULL,k_1 = NULL;
      t = term_u_7;
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 = NULL,m_1 = NULL;
            t = term_t_7;
            l_1 = t;
            t = term_u_7;
            m_1 = t;
            t = term_y_7;
            t = m_6(l_1, m_1, t);
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            t = term_z_7;
          }
      }
      e_1 = t;
      t = term_d_8;
      k_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_d_8, e_1);
      t = h_6(k_1, e_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm e_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm r_5 (ATerm b_29, ATerm c_29, ATerm t)
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(b_29, c_29);
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      t = SSL_subtr(b_29, c_29);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL;
  t = term_h_8;
  {
    ATerm j_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_3 = NULL,c_3 = NULL;
        t = term_t_7;
        b_3 = t;
        t = term_h_8;
        c_3 = t;
        t = term_l_8;
        t = m_6(b_3, c_3, t);
        LocalPopChoice(k_8);
      }
    else
      {
        t = j_8;
        t = term_n_8;
      }
  }
  y_2 = t;
  t = term_n_8;
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, term_n_8);
  t = r_5(y_2, a_3, t);
  z_2 = t;
  t = SSL_int_to_string(z_2);
  x_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_2), term_h_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm i_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_d_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm m_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_o_8);
      m_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATinsert(ATempty, term_o_8));
      t = y_5(i_3, m_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm z_5 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm o_3 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_3);
  return(t);
}
static ATerm c_6 (ATerm i_67 (ATerm), ATerm r_168, ATerm y_17, ATerm t)
{
  ATerm p_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_168, term_p_8);
  t = b_6(t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, y_17);
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
      ATerm q_8 = ATgetArgument(t, 0);
      if(match_cons(q_8, sym_Stream_1))
        {
          t_3 = ATgetArgument(q_8, 0);
        }
      else
        _fail(t);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(t_3, v_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  s_3 = t;
  t = xtc_new_file_0_0(t);
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_3, s_3);
  t = c_6(b_0, r_3, s_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_3);
  t = xtc_transform_file_2_0(m_84, n_84, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm d_6 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm t_4 = NULL,x_4 = NULL,y_4 = NULL,a_5 = NULL;
  t_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_4 = ATgetArgument(t, 0);
      {
        ATerm r_1 = NULL,s_1 = NULL;
        t = SSL_int_to_string(x_4);
        r_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_8), r_1), term_r_8);
        s_1 = t;
        t = SSL_concat_strings(s_1);
      }
    }
  else
    {
      ATerm k_2 = NULL,l_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_4 = ATgetArgument(t, 0);
          y_4 = ATgetArgument(t, 1);
          a_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_4);
      k_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_5), term_u_8), k_2), term_t_8), x_4);
      l_2 = t;
      t = SSL_concat_strings(l_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm k_72 (ATerm), ATerm t)
{
  ATerm f_5 = NULL;
  static ATerm f_0 (ATerm t)
  {
    t = k_72(t);
    if(((f_5 != NULL) && (f_5 != t)))
      _fail(t);
    else
      f_5 = t;
    return(t);
  }
  t = fetch_1_0(f_0, t);
  t = not_null(f_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm g_5 = NULL;
  g_5 = t;
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm a_9 = ATgetArgument(t, 0);
              if((g_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm e_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_16), term_h_16), term_c_16), term_y_15), term_r_15), term_m_15), term_i_15), term_b_15), term_w_14), term_s_14), term_m_14), term_a_14), term_w_13), term_r_13), term_g_13), term_v_12), term_p_12), term_c_12), term_u_11), term_k_11), term_e_11), term_z_10), term_l_10), term_f_10), term_b_10), term_t_9), term_p_9), term_j_9);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(y_8);
      }
    else
      {
        t = x_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, g_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm l_5 = NULL,u_6 = NULL;
  l_5 = t;
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_16 = ATgetArgument(t, 0);
            u_6 = ATgetArgument(t, 1);
            {
              ATerm r_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_16);
        {
          ATerm s_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_3 = NULL,j_3 = NULL,k_3 = NULL;
              t = u_6;
              {
                ATerm u_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_16;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              f_3 = t;
              t = term_v_16;
              j_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_3), term_w_16);
              k_3 = t;
              t = SSL_printnl(j_3, k_3);
              t = (ATerm) ATmakeAppl(sym__2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, f_3), term_w_16));
              LocalPopChoice(t_16);
            }
          else
            {
              t = s_16;
              t = l_5;
            }
        }
      }
    else
      {
        t = o_16;
        t = l_5;
      }
  }
  t = l_5;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm x_65 (ATerm), ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL;
  j_7 = t;
  t = fork_0_0(t);
  i_7 = t;
  {
    ATerm x_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = j_7;
        t = x_65(t);
        LocalPopChoice(z_16);
      }
    else
      {
        t = x_16;
        t = SSL_waitpid(i_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_17 = ATgetArgument(t, 0);
            if(((ATgetType(a_17) != AT_INT) || (ATgetInt((ATermInt) a_17) != 0)))
              _fail(t);
            {
              ATerm b_17 = ATgetArgument(t, 1);
            }
            {
              ATerm c_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = j_7;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm n_85 (ATerm), ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL;
  m_7 = t;
  t = n_85(t);
  t = xtc_find_0_0(t);
  l_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_7, m_7);
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm q_7 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, l_7, m_7);
      t = d_6(l_7, m_7, t);
      t = term_e_17;
      q_7 = t;
      t = SSL_exit(q_7);
      return(t);
    }
    t = fork_and_wait_1_0(m_0, t);
  }
  t = m_7;
  return(t);
}
ATerm at_end_1_0 (ATerm p_72 (ATerm), ATerm t)
{
  static ATerm h_9 (ATerm t)
  {
    ATerm z_8 = NULL,d_9 = NULL,g_9 = NULL;
    g_9 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_8 = ATgetFirst((ATermList) t);
        d_9 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_3 = NULL,d_4 = NULL,x_0 = NULL;
          t = SSLgetAnnotations(g_9);
          x_3 = t;
          t = d_9;
          t = h_9(t);
          d_4 = t;
          t = (ATerm) ATinsert(CheckATermList(d_4), z_8);
          x_0 = t;
          t = SSLsetAnnotations(x_0, x_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_9;
        t = p_72(t);
      }
    return(t);
  }
  t = h_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_7 = NULL,v_7 = NULL,x_7 = NULL;
  s_7 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_7;
    }
  else
    {
      static ATerm q_0 (ATerm t)
      {
        t = not_null(x_7);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_7 = ATgetFirst((ATermList) t);
          if(((x_7 != NULL) && (x_7 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_7;
      t = at_end_1_0(q_0, t);
    }
  return(t);
}
static ATerm j_10 (ATerm n_9, ATerm t)
{
  ATerm o_9 = NULL;
  t = SSL_explode_term(n_9);
  if(match_cons(t, sym__2))
    {
      ATerm f_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_9;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  x_9 = t;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
      {
        ATerm h_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_0 (ATerm t)
            {
              t = w_9;
              return(t);
            }
            t = v_9;
            t = at_end_1_0(s_0, t);
            LocalPopChoice(i_17);
          }
        else
          {
            t = h_17;
            t = j_10(x_9, t);
          }
      }
    }
  else
    {
      t = j_10(x_9, t);
    }
  return(t);
}
static ATerm f_6 (ATerm c_81 (ATerm), ATerm j_30, ATerm h_30, ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,v_10 = NULL;
  s_10 = t;
  t = c_81(t);
  p_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_10, j_30, h_30);
  t = n_6(p_10, j_30, h_30, t);
  {
    ATerm j_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_10 = NULL;
        t = term_n_17;
        w_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_10, term_n_17);
        t = m_6(p_10, w_10, t);
        LocalPopChoice(m_17);
      }
    else
      {
        t = j_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_10 = ATgetFirst((ATermList) t);
      r_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_n_17;
  t_10 = t;
  t = (ATerm) ATinsert(CheckATermList(r_10), (ATerm) ATinsert(CheckATermList(q_10), j_30));
  v_10 = t;
  t = SSL_table_put(p_10, t_10, v_10);
  t = s_10;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm y_10 = NULL;
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_11 = NULL,w_4 = NULL;
      d_11 = t;
      t = term_v_17;
      w_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_11, term_v_17);
      t = g_6(d_11, w_4, t);
      y_10 = t;
      t = SSL_mkstemp(y_10);
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      {
        ATerm f_11 = NULL;
        t = term_x_17;
        f_11 = t;
        t = SSL_perror(f_11);
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
  t = term_z_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL;
  t = P__tmpdir_0_0(t);
  s_11 = t;
  t = term_a_18;
  t_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_11, term_a_18);
  t = g_6(s_11, t_11, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      q_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_b_18;
  r_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_11, term_b_18);
  t = f_6(t_0, q_11, r_11, t);
  t = SSL_close(o_11);
  t = q_11;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm v_11 = NULL,y_11 = NULL;
  v_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm z_11 = NULL,a_12 = NULL;
      t = v_11;
      t = xtc_new_file_0_0(t);
      z_11 = t;
      t = r_0(t);
      a_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_12, (ATerm) ATinsert(ATinsert(ATempty, z_11), term_u_7));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_11);
    }
  else
    {
      ATerm d_12 = NULL,i_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_11;
      t = xtc_new_file_0_0(t);
      d_12 = t;
      t = r_0(t);
      i_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_12), term_u_7), y_11), term_c_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_12);
    }
  return(t);
}
ATerm debug_1_0 (ATerm g_67 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
  j_12 = t;
  t = g_67(t);
  k_12 = t;
  t = term_v_16;
  l_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_12), k_12);
  m_12 = t;
  t = SSL_printnl(l_12, m_12);
  t = j_12;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm n_12 = NULL;
  static ATerm u_0 (ATerm t)
  {
    ATerm q_12 = NULL,r_12 = NULL;
    q_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_12), q_12);
    t = m_6(not_null(n_12), q_12, t);
    r_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_12, r_12);
    return(t);
  }
  if(((n_12 != NULL) && (n_12 != t)))
    _fail(t);
  else
    n_12 = t;
  t = SSL_table_keys(n_12);
  t = map_1_0(u_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm p_82 (ATerm), ATerm t)
{
  ATerm x_12 = NULL;
  x_12 = t;
  {
    ATerm d_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
        t = term_t_7;
        b_13 = t;
        t = term_h_8;
        c_13 = t;
        t = term_l_8;
        t = m_6(b_13, c_13, t);
        a_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_13, term_u_15);
        t = geq_0_0(t);
        t = x_12;
        t = p_82(t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = d_18;
        t = x_12;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm o_82 (ATerm), ATerm t)
{
  ATerm h_13 = NULL;
  h_13 = t;
  {
    ATerm h_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
        t = term_t_7;
        k_13 = t;
        t = term_h_8;
        l_13 = t;
        t = term_l_8;
        t = m_6(k_13, l_13, t);
        j_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_13, term_g_12);
        t = geq_0_0(t);
        t = h_13;
        t = o_82(t);
        LocalPopChoice(o_18);
      }
    else
      {
        t = h_18;
        t = h_13;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm q_82 (ATerm), ATerm t)
{
  ATerm b_14 = NULL;
  b_14 = t;
  {
    ATerm p_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
        t = term_t_7;
        e_14 = t;
        t = term_h_8;
        f_14 = t;
        t = term_l_8;
        t = m_6(e_14, f_14, t);
        d_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_14, term_z_9);
        t = geq_0_0(t);
        t = b_14;
        t = q_82(t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = p_18;
        t = b_14;
      }
  }
  return(t);
}
static ATerm t_5 (ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = n_76(t);
  {
    static ATerm y_0 (ATerm t)
    {
      ATerm k_14 = NULL;
      k_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, k_14);
      t = m_76(t);
      return(t);
    }
    t = fetch_1_0(y_0, t);
  }
  t = b_25;
  return(t);
}
static ATerm u_5 (ATerm j_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm p_15 (ATerm t)
  {
    ATerm d_15 = NULL,g_15 = NULL,h_15 = NULL;
    d_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_15 = ATgetFirst((ATermList) t);
            h_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_18 = t;
          int z_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_15;
              {
                static ATerm a_1 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = t_5(j_76, a_1, g_15, h_15, t);
              }
              t = p_15(t);
              LocalPopChoice(z_18);
            }
          else
            {
              t = y_18;
              {
                ATerm i_5 = NULL,m_5 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(d_15);
                i_5 = t;
                t = h_15;
                t = p_15(t);
                m_5 = t;
                t = (ATerm) ATinsert(CheckATermList(m_5), g_15);
                z_0 = t;
                t = SSLsetAnnotations(z_0, i_5);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = p_15(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      f_16 = ATgetArgument(t, 0);
      if((f_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t_32, ATerm u_32, ATerm v_32, ATerm t)
{
  ATerm t_15 = NULL,w_15 = NULL,x_15 = NULL;
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_32, u_32);
  {
    ATerm b_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_19 = ATgetArgument(t, 0);
            ATerm k_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_32, u_32);
        t = m_6(t_32, u_32, t);
        LocalPopChoice(i_19);
      }
    else
      {
        t = b_19;
        t = (ATerm) ATempty;
      }
  }
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_15, v_32);
  t = u_5(b_1, x_15, v_32, t);
  w_15 = t;
  t = SSL_table_put(t_32, u_32, w_15);
  t = t_15;
  return(t);
}
static ATerm w_5 (ATerm s_82 (ATerm), ATerm d_33, ATerm c_33, ATerm t)
{
  static ATerm c_1 (ATerm t)
  {
    ATerm i_16 = NULL,j_16 = NULL;
    if(match_cons(t, sym__2))
      {
        i_16 = ATgetArgument(t, 0);
        j_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, d_33, i_16, j_16);
    t = s_82(t);
    return(t);
  }
  t = c_33;
  t = map_1_0(c_1, t);
  return(t);
}
static ATerm y_5 (ATerm m_35, ATerm n_35, ATerm t)
{
  t = SSL_access(m_35, n_35);
  return(t);
}
static ATerm k_17 (ATerm y_16, ATerm t)
{
  t = SSL_fclose(y_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_17 = NULL,g_17 = NULL;
  g_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_17 = ATgetArgument(t, 0);
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_17);
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            t = k_17(g_17, t);
          }
      }
    }
  else
    {
      t = k_17(g_17, t);
    }
  return(t);
}
static ATerm x_5 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm g_6 (ATerm u_51, ATerm v_51, ATerm t)
{
  t = SSL_strcat(u_51, v_51);
  return(t);
}
static ATerm a_6 (ATerm v_35, ATerm w_35, ATerm t)
{
  ATerm l_17 = NULL;
  t = SSL_fopen(v_35, w_35);
  l_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_17 = NULL;
  t = SSL_stdin_stream();
  q_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_17 = NULL;
  t = SSL_stdout_stream();
  t_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_17 = NULL;
  t = SSL_stderr_stream();
  w_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_17);
  return(t);
}
static ATerm f_19 (ATerm e_18, ATerm t)
{
  ATerm f_18 = NULL;
  t = SSL_explode_term(e_18);
  if(match_cons(t, sym__2))
    {
      ATerm n_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_19 = ATgetArgument(t, 1);
        if(((ATgetType(o_19) == AT_LIST) && !(ATisEmpty(o_19))))
          {
            f_18 = ATgetFirst((ATermList) o_19);
            {
              ATerm s_19 = (ATerm) ATgetNext((ATermList) o_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_19 (ATerm i_18, ATerm j_18, ATerm k_18, ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,q_18 = NULL,f_1 = NULL;
  t = SSLgetAnnotations(k_18);
  n_18 = t;
  t = i_18;
  if(match_cons(t, sym_Path_1))
    {
      q_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_18, j_18);
  f_1 = t;
  t = SSLsetAnnotations(f_1, n_18);
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(l_18, m_18, t);
  return(t);
}
static ATerm h_19 (ATerm s_18, ATerm t_18, ATerm u_18, ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,a_19 = NULL,g_1 = NULL;
  t = SSLgetAnnotations(u_18);
  x_18 = t;
  t = SSL_is_string(s_18);
  a_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_19, t_18);
  g_1 = t;
  t = SSLsetAnnotations(g_1, x_18);
  if(match_cons(t, sym__2))
    {
      v_18 = ATgetArgument(t, 0);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(v_18, w_18, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
  c_19 = t;
  if(match_cons(t, sym__2))
    {
      d_19 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_19(c_19, t);
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
            {
              ATerm v_19 = t;
              int w_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_19(d_19, e_19, c_19, t);
                  LocalPopChoice(w_19);
                }
              else
                {
                  t = v_19;
                  t = h_19(d_19, e_19, c_19, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_19(c_19, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,a_20 = NULL;
  a_20 = t;
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_20, term_z_19);
        t = b_6(t);
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        {
          ATerm f_7 = NULL,g_7 = NULL;
          t = term_b_20;
          g_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_20, a_20);
          t = g_6(g_7, a_20, t);
          f_7 = t;
          t = SSL_perror(f_7);
          _fail(t);
        }
      }
  }
  q_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(r_19, t);
  p_19 = t;
  t = q_19;
  t = fclose_0_0(t);
  t = p_19;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_c_20;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_d_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_20 = NULL,i_20 = NULL;
      h_20 = t;
      t = (ATerm) ATinsert(ATempty, term_g_20);
      i_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_20, (ATerm) ATinsert(ATempty, term_g_20));
      t = y_5(h_20, i_20, t);
      LocalPopChoice(f_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = e_20;
      {
        ATerm k_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_20 = t;
            if((PushChoice() == 0))
              {
                ATerm j_20 = NULL,l_20 = NULL;
                j_20 = t;
                t = (ATerm) ATinsert(ATempty, term_o_8);
                l_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_20, (ATerm) ATinsert(ATempty, term_o_8));
                t = y_5(j_20, l_20, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_20;
              }
            t = debug_1_0(d_1, t);
            LocalPopChoice(n_20);
          }
        else
          {
            t = k_20;
            t = debug_1_0(h_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(n_1, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,h_21 = NULL;
  d_21 = t;
  t = term_v_16;
  e_21 = t;
  t = (ATerm) ATinsert(ATempty, term_b_21);
  h_21 = t;
  t = SSL_printnl(e_21, h_21);
  t = d_21;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
  if(match_cons(t, sym__3))
    {
      i_21 = ATgetArgument(t, 0);
      j_21 = ATgetArgument(t, 1);
      k_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_5(i_21, j_21, k_21, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
  l_21 = t;
  t = term_v_16;
  m_21 = t;
  t = (ATerm) ATinsert(ATempty, term_f_21);
  n_21 = t;
  t = SSL_printnl(m_21, n_21);
  t = l_21;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  o_21 = t;
  t = term_v_16;
  p_21 = t;
  t = (ATerm) ATinsert(ATempty, term_b_21);
  q_21 = t;
  t = SSL_printnl(p_21, q_21);
  t = o_21;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm m_20 = NULL,o_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
  m_20 = t;
  t = if_verbose5_1_0(i_1, t);
  {
    ATerm g_21 = t;
    if((PushChoice() == 0))
      {
        ATerm y_20 = NULL,c_21 = NULL;
        t = term_r_21;
        y_20 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, m_20);
        c_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_21, (ATerm) ATmakeAppl(sym_Imported_1, m_20));
        t = m_6(y_20, c_21, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_21;
      }
  }
  q_20 = t;
  t = term_r_21;
  v_20 = t;
  t = term_s_21;
  w_20 = t;
  t = (ATerm) ATinsert(ATempty, m_20);
  x_20 = t;
  t = SSL_table_put(v_20, w_20, x_20);
  t = q_20;
  t = if_verbose4_1_0(o_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(q_1, t);
  o_20 = t;
  t = term_r_21;
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_21, o_20);
  t = w_5(t_1, u_20, o_20, t);
  t = if_verbose6_1_0(w_1, t);
  t = term_r_21;
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, m_20);
  s_20 = t;
  t = (ATerm) ATempty;
  t_20 = t;
  t = SSL_table_put(r_20, s_20, t_20);
  t = (ATerm) ATmakeAppl(sym__3, term_r_21, (ATerm)ATmakeAppl(sym_Imported_1, m_20), (ATerm) ATempty);
  t = if_verbose4_1_0(x_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm i_80 (ATerm), ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
  k_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_22;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_22 = ATgetFirst((ATermList) t);
          m_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_7 = NULL,w_7 = NULL,a_8 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(k_22);
            r_7 = t;
            t = l_22;
            t = i_80(t);
            w_7 = t;
            t = m_22;
            t = filter_1_0(i_80, t);
            a_8 = t;
            t = (ATerm) ATinsert(CheckATermList(a_8), w_7);
            j_1 = t;
            t = SSLsetAnnotations(j_1, r_7);
            LocalPopChoice(u_21);
          }
        else
          {
            t = t_21;
            t = m_22;
            t = filter_1_0(i_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm t)
{
  static ATerm t_22 (ATerm t)
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_70(t);
        t = t_22(t);
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        t = e_70(t);
      }
    return(t);
  }
  t = t_22(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_22 = NULL,y_22 = NULL;
      t = term_t_7;
      x_22 = t;
      t = term_z_21;
      y_22 = t;
      t = term_a_22;
      t = m_6(x_22, y_22, t);
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      {
        ATerm b_22 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_22 = NULL;
            t = term_d_22;
            z_22 = t;
            t = SSL_getenv(z_22);
            LocalPopChoice(c_22);
          }
        else
          {
            t = b_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_e_22;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL;
  t = term_r_21;
  j_23 = t;
  t = term_f_22;
  k_23 = t;
  t = term_g_22;
  t = m_6(j_23, k_23, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm h_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_22;
      }
  }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_i_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm c_23 = NULL;
  t = if_verbose5_1_0(y_1, t);
  c_23 = t;
  {
    ATerm j_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_23 = NULL,h_23 = NULL;
        t = term_r_21;
        f_23 = t;
        t = term_s_21;
        h_23 = t;
        t = term_o_22;
        t = m_6(f_23, h_23, t);
        LocalPopChoice(n_22);
      }
    else
      {
        t = j_22;
        {
          ATerm i_23 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          i_23 = t;
          t = repeat_2_0(a_2, _id, t);
          t = i_23;
        }
      }
  }
  t = c_23;
  t = if_verbose5_1_0(b_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_p_22;
  return(t);
}
static ATerm u_24 (ATerm r_23, ATerm t)
{
  ATerm u_23 = NULL,x_23 = NULL,y_23 = NULL;
  t = term_r_21;
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, r_23);
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_21, (ATerm) ATmakeAppl(sym_Tool_1, r_23));
  t = m_6(x_23, y_23, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_22 = ATgetFirst((ATermList) t);
      if(match_cons(q_22, sym__2))
        {
          ATerm s_22 = ATgetArgument(q_22, 0);
          u_23 = ATgetArgument(q_22, 1);
        }
      else
        _fail(t);
      {
        ATerm r_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_23;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_p_22;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_r_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_u_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_23 = NULL,b_24 = NULL,c_24 = NULL;
      t = if_verbose5_1_0(e_2, t);
      t = xtc_load_0_0(t);
      c_24 = t;
      if(match_cons(t, sym__2))
        {
          z_23 = ATgetArgument(t, 0);
          b_24 = ATgetArgument(t, 1);
          {
            ATerm a_23 = t;
            int b_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
                t = term_r_21;
                l_24 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, z_23);
                m_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_21, (ATerm) ATmakeAppl(sym_Tool_1, z_23));
                t = m_6(l_24, m_24, t);
                {
                  static ATerm g_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((b_24 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((k_24 != NULL) && (k_24 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          k_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(g_2, t);
                }
                t = not_null(k_24);
                LocalPopChoice(b_23);
              }
            else
              {
                t = a_23;
                t = u_24(c_24, t);
              }
          }
        }
      else
        {
          t = u_24(c_24, t);
        }
      t = if_verbose5_1_0(i_2, t);
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      {
        ATerm t_24 = NULL,i_8 = NULL,m_8 = NULL;
        t_24 = t;
        t = term_v_16;
        i_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_23), t_24), term_d_23);
        m_8 = t;
        t = SSL_printnl(i_8, m_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_23), t_24), term_d_23);
        t = if_verbose5_1_0(n_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm m_6 (ATerm n_33, ATerm o_33, ATerm t)
{
  t = SSL_table_get(n_33, o_33);
  return(t);
}
static ATerm i_6 (ATerm b_32, ATerm c_32, ATerm t)
{
  ATerm a_25 = NULL,e_25 = NULL;
  e_25 = t;
  {
    ATerm g_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_32, c_32);
        t = m_6(b_32, c_32, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_23 = ATgetFirst((ATermList) t);
            a_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(l_23);
        t = SSL_table_put(b_32, c_32, a_25);
        t = (ATerm) ATmakeAppl(sym__3, b_32, c_32, a_25);
      }
    else
      {
        t = g_23;
        t = SSL_table_remove(b_32, c_32);
        t = (ATerm) ATmakeAppl(sym__2, b_32, c_32);
      }
  }
  t = e_25;
  return(t);
}
ATerm end_scope_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
  n_25 = t;
  t = z_80(t);
  m_25 = t;
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_25 = NULL;
        t = term_n_17;
        q_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_25, term_n_17);
        t = m_6(m_25, q_25, t);
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_25 = ATgetFirst((ATermList) t);
      i_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_n_17;
  o_25 = t;
  t = SSL_table_put(m_25, o_25, i_25);
  t = j_25;
  {
    static ATerm s_2 (ATerm t)
    {
      ATerm r_25 = NULL;
      r_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_25, r_25);
      t = i_6(m_25, r_25, t);
      return(t);
    }
    t = map_1_0(s_2, t);
  }
  t = n_25;
  return(t);
}
ATerm restore_always_2_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_81(t);
      t = a_82(t);
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      t = a_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
  w_25 = t;
  t = y_80(t);
  v_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_25, term_n_17);
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_26 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm v_23 = ATgetArgument(t, 0);
            ATerm w_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_17;
        d_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_25, term_n_17);
        t = m_6(v_25, d_26, t);
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
        t = (ATerm) ATempty;
      }
  }
  x_25 = t;
  t = term_n_17;
  y_25 = t;
  t = (ATerm) ATinsert(CheckATermList(x_25), (ATerm) ATempty);
  z_25 = t;
  t = SSL_table_put(v_25, y_25, z_25);
  t = w_25;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_z_17;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm s_26 = NULL;
  s_26 = t;
  {
    ATerm a_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(s_26);
        LocalPopChoice(d_24);
      }
    else
      {
        t = a_24;
        t = s_26;
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_z_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm z_84 (ATerm), ATerm t)
{
  ATerm k_26 = NULL;
  static ATerm u_2 (ATerm t)
  {
    ATerm l_26 = NULL;
    l_26 = t;
    {
      ATerm e_24 = t;
      int f_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_26 = NULL,p_26 = NULL;
          t = term_z_17;
          m_26 = t;
          t = term_n_17;
          p_26 = t;
          t = term_g_24;
          t = m_6(m_26, p_26, t);
          LocalPopChoice(f_24);
        }
      else
        {
          t = e_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_26 != NULL) && (k_26 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_26 = ATgetFirst((ATermList) t);
        {
          ATerm h_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = k_26;
    t = map_1_0(d_3, t);
    t = l_26;
    t = end_scope_1_0(e_3, t);
    return(t);
  }
  t = begin_scope_1_0(t_2, t);
  t = restore_always_2_0(z_84, u_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL;
  v_26 = t;
  t = term_b_18;
  t = whoami_0_0(t);
  w_26 = t;
  t = term_v_16;
  y_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_24), w_26), term_i_24);
  z_26 = t;
  t = SSL_printnl(y_26, z_26);
  t = term_n_8;
  x_26 = t;
  t = SSL_exit(x_26);
  t = v_26;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm b_27 = NULL;
  b_27 = t;
  if(match_string(t, "-k"))
    {
      t = b_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_27;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,f_27 = NULL;
  c_27 = t;
  t = SSL_string_to_int(c_27);
  d_27 = t;
  t = term_n_24;
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_24, d_27);
  t = p_6(f_27, d_27, t);
  t = c_27;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_3, h_3, l_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
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
static ATerm q_3 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL;
  t = term_h_8;
  i_27 = t;
  t = term_p_24;
  j_27 = t;
  t = term_q_24;
  t = p_6(i_27, j_27, t);
  t = term_r_24;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_s_24;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm k_27 = NULL,n_27 = NULL,o_27 = NULL;
  k_27 = t;
  t = SSL_string_to_int(k_27);
  n_27 = t;
  t = term_h_8;
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_8, n_27);
  t = p_6(o_27, n_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_27);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_v_24;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL;
  t = term_w_24;
  v_27 = t;
  t = term_b_18;
  w_27 = t;
  t = term_z_24;
  t = p_6(v_27, w_27, t);
  t = term_d_25;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_f_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_3, q_3, u_3, t);
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      {
        ATerm k_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_3, y_3, z_3, t);
            LocalPopChoice(l_25);
          }
        else
          {
            t = k_25;
            t = Option_3_0(a_4, b_4, e_4, t);
          }
      }
    }
  return(t);
}
static ATerm p_6 (ATerm j_34, ATerm k_34, ATerm t)
{
  ATerm x_27 = NULL;
  t = term_t_7;
  x_27 = t;
  t = SSL_table_put(x_27, j_34, k_34);
  t = (ATerm) ATmakeAppl(sym__3, term_t_7, j_34, k_34);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_28 = NULL,f_28 = NULL,g_28 = NULL;
      t = term_b_18;
      t = e_0(t);
      d_28 = t;
      t = term_p_25;
      f_28 = t;
      t = term_s_25;
      g_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_25, term_s_25, d_28);
      t = n_6(f_28, g_28, d_28, t);
      _fail(t);
    }
  else
    {
      ATerm l_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_28 = ATgetFirst((ATermList) t);
          c_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_28;
      t = c_0(t);
      t = term_b_18;
      t = d_0(t);
      l_28 = t;
      t = (ATerm) ATinsert(CheckATermList(c_28), l_28);
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm n_28 = NULL;
  n_28 = t;
  if(match_string(t, "-o"))
    {
      t = n_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_28;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  o_28 = t;
  t = term_u_7;
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_7, o_28);
  t = p_6(p_28, o_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_28);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, i_4, j_4, t);
  return(t);
}
static ATerm n_6 (ATerm w_31, ATerm x_31, ATerm v_31, ATerm t)
{
  ATerm r_28 = NULL,t_28 = NULL,u_28 = NULL;
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_31, x_31);
  {
    ATerm u_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_26 = ATgetArgument(t, 0);
            ATerm c_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_31, x_31);
        t = m_6(w_31, x_31, t);
        LocalPopChoice(a_26);
      }
    else
      {
        t = u_25;
        t = (ATerm) ATempty;
      }
  }
  t_28 = t;
  t = (ATerm) ATinsert(CheckATermList(t_28), v_31);
  u_28 = t;
  t = SSL_table_put(w_31, x_31, u_28);
  t = r_28;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,k_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
      t = term_b_18;
      t = n_0(t);
      n_29 = t;
      t = term_p_25;
      o_29 = t;
      t = term_s_25;
      p_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_25, term_s_25, n_29);
      t = n_6(o_29, p_29, n_29, t);
      _fail(t);
    }
  else
    {
      ATerm w_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_29 = ATgetFirst((ATermList) t);
          g_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_29 = ATgetFirst((ATermList) t);
          k_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_29;
      t = k_0(t);
      t = h_29;
      t = l_0(t);
      w_29 = t;
      t = (ATerm) ATinsert(CheckATermList(k_29), w_29);
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm n_30 = NULL;
  n_30 = t;
  if(match_string(t, "-i"))
    {
      t = n_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_30;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm o_30 = NULL,r_30 = NULL;
  o_30 = t;
  t = term_c_18;
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_18, o_30);
  t = p_6(r_30, o_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_30);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, o_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,y_30 = NULL,z_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_18;
  t = whoami_0_0(t);
  t_30 = t;
  t = term_v_16;
  y_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_26), t_30);
  z_30 = t;
  t = SSL_printnl(y_30, z_30);
  t = term_n_8;
  u_30 = t;
  t = SSL_exit(u_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL;
  t = term_t_7;
  a_31 = t;
  t = term_g_26;
  b_31 = t;
  t = term_h_26;
  t = m_6(a_31, b_31, t);
  return(t);
}
static ATerm j_6 (ATerm v_28, ATerm w_28, ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_28, w_28);
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      t = SSL_addr(v_28, w_28);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,k_31 = NULL;
  f_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_31;
      t = e_79(t);
    }
  else
    {
      ATerm y_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_31 = ATgetFirst((ATermList) t);
          k_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_31;
      t = foldr_2_0(e_79, f_79, t);
      y_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_31, y_31);
      t = f_79(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_p_24;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL;
  if(match_cons(t, sym__2))
    {
      b_9 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(b_9, c_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_32 = NULL,v_8 = NULL,w_8 = NULL;
  t = times_0_0(t);
  w_8 = t;
  t = SSL_explode_term(w_8);
  if(match_cons(t, sym__2))
    {
      ATerm n_26 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_8;
  t = foldr_2_0(q_4, r_4, t);
  e_32 = t;
  t = SSL_TicksToSeconds(e_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
  p_32 = t;
  if(match_cons(t, sym__2))
    {
      q_32 = ATgetArgument(t, 0);
      r_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_32;
        if((q_32 != t))
          {
            _fail(t);
          }
        t = p_32;
        LocalPopChoice(q_26);
      }
    else
      {
        t = o_26;
        t = (ATerm) ATmakeAppl(sym__2, q_32, r_32);
        {
          ATerm r_26 = t;
          int t_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_32, r_32);
              LocalPopChoice(t_26);
            }
          else
            {
              t = r_26;
              t = SSL_gtr(q_32, r_32);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, q_32, r_32);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_82 (ATerm), ATerm t)
{
  ATerm a_33 = NULL;
  a_33 = t;
  {
    ATerm u_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
        t = term_t_7;
        h_33 = t;
        t = term_h_8;
        i_33 = t;
        t = term_l_8;
        t = m_6(h_33, i_33, t);
        g_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_33, term_n_8);
        t = geq_0_0(t);
        t = a_33;
        t = l_82(t);
        LocalPopChoice(a_27);
      }
    else
      {
        t = u_26;
        t = a_33;
      }
  }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,p_33 = NULL,q_33 = NULL;
  t = run_time_0_0(t);
  k_33 = t;
  t = term_b_18;
  t = whoami_0_0(t);
  l_33 = t;
  t = term_v_16;
  p_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_27), k_33), term_t_8), l_33);
  q_33 = t;
  t = SSL_printnl(p_33, q_33);
  t = (ATerm) ATmakeAppl(sym__2, term_v_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_27), k_33), term_t_8), l_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_24;
  r_33 = t;
  t = SSL_exit(r_33);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL;
  c_34 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_34;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_34 = ATgetArgument(t, 0);
          {
            ATerm y_9 = NULL,c_2 = NULL;
            t = SSLgetAnnotations(c_34);
            y_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_34);
            c_2 = t;
            t = SSLsetAnnotations(c_2, y_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_34;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_86 (ATerm), ATerm t)
{
  ATerm g_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_33 = NULL,v_33 = NULL;
      t = term_t_7;
      u_33 = t;
      t = term_m_27;
      v_33 = t;
      t = term_p_27;
      t = m_6(u_33, v_33, t);
      LocalPopChoice(l_27);
    }
  else
    {
      t = g_27;
      t = fetch_1_0(u_4, t);
    }
  t = p_86(t);
  return(t);
}
ATerm map_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  static ATerm b_35 (ATerm t)
  {
    ATerm x_34 = NULL,z_34 = NULL,a_35 = NULL;
    x_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_34;
      }
    else
      {
        ATerm g_10 = NULL,m_10 = NULL,n_10 = NULL,h_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_34 = ATgetFirst((ATermList) t);
            a_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_34);
        g_10 = t;
        t = z_34;
        t = y_71(t);
        m_10 = t;
        t = a_35;
        t = b_35(t);
        n_10 = t;
        t = (ATerm) ATinsert(CheckATermList(n_10), m_10);
        h_2 = t;
        t = SSLsetAnnotations(h_2, g_10);
      }
    return(t);
  }
  t = b_35(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_35 = ATgetFirst((ATermList) t);
      f_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_35 = NULL,l_35 = NULL;
        static ATerm v_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_35)), not_null(l_35));
          return(t);
        }
        t = f_35;
        t = i_0(t);
        if(((k_35 != NULL) && (k_35 != t)))
          _fail(t);
        else
          k_35 = t;
        t = e_35;
        t = g_0(t);
        if(((l_35 != NULL) && (l_35 != t)))
          _fail(t);
        else
          l_35 = t;
        t = f_35;
        t = reverse_acc_2_0(g_0, v_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_18;
      t = i_0(t);
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,z_35 = NULL,m_2 = NULL;
  z_35 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_35);
  t_35 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_35);
  m_2 = t;
  t = SSLsetAnnotations(m_2, t_35);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm b_36 = NULL;
  b_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_36), term_q_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_35 = NULL,s_35 = NULL;
      t = term_t_7;
      r_35 = t;
      t = term_g_26;
      s_35 = t;
      t = term_h_26;
      t = m_6(r_35, s_35, t);
      LocalPopChoice(s_27);
    }
  else
    {
      t = r_27;
      t = fetch_1_0(z_4, t);
    }
  t = term_t_27;
  t = echo_0_0(t);
  t = term_p_25;
  p_35 = t;
  t = term_s_25;
  q_35 = t;
  t = term_u_27;
  t = m_6(p_35, q_35, t);
  t = reverse_acc_2_0(_id, b_5, t);
  t = map_1_0(c_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_72 (ATerm), ATerm t)
{
  static ATerm j_37 (ATerm t)
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
      ATerm y_27 = t;
      int z_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_11 = NULL,m_11 = NULL,o_2 = NULL;
          t = SSLgetAnnotations(e_37);
          j_11 = t;
          t = f_37;
          t = i_72(t);
          m_11 = t;
          t = (ATerm) ATinsert(CheckATermList(g_37), m_11);
          o_2 = t;
          t = SSLsetAnnotations(o_2, j_11);
          LocalPopChoice(z_27);
        }
      else
        {
          t = y_27;
          {
            ATerm f_12 = NULL,o_12 = NULL,w_2 = NULL;
            t = SSLgetAnnotations(e_37);
            f_12 = t;
            t = g_37;
            t = j_37(t);
            o_12 = t;
            t = (ATerm) ATinsert(CheckATermList(o_12), f_37);
            w_2 = t;
            t = SSLsetAnnotations(w_2, f_12);
          }
        }
    }
    return(t);
  }
  t = j_37(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,r_37 = NULL;
  o_37 = t;
  {
    ATerm a_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_28 = ATgetFirst((ATermList) t);
                ATerm i_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_37;
          }
        LocalPopChoice(e_28);
      }
    else
      {
        t = a_28;
        t = (ATerm) ATinsert(ATempty, o_37);
      }
  }
  p_37 = t;
  t = term_z_7;
  r_37 = t;
  t = SSL_printnl(r_37, p_37);
  t = o_37;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL;
  t = term_t_7;
  v_37 = t;
  t = term_g_26;
  w_37 = t;
  t = term_h_26;
  t = m_6(v_37, w_37, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL;
  t = term_j_28;
  x_37 = t;
  t = term_b_18;
  y_37 = t;
  t = term_k_28;
  t = p_6(x_37, y_37, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_m_28;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
  t = term_j_28;
  g_38 = t;
  t = term_b_18;
  h_38 = t;
  t = term_k_28;
  t = p_6(g_38, h_38, t);
  t = term_q_28;
  e_38 = t;
  t = term_b_18;
  f_38 = t;
  t = term_s_28;
  t = p_6(e_38, f_38, t);
  t = term_x_28;
  return(t);
}
static ATerm n_5 (ATerm t)
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
      t = Option_3_0(d_5, e_5, h_5, t);
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
      t = Option_3_0(j_5, k_5, n_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_58 (ATerm), ATerm y_58 (ATerm), ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,c_4 = NULL;
  n_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_38 = ATgetFirst((ATermList) t);
      k_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_38);
  i_38 = t;
  t = j_38;
  t = x_58(t);
  l_38 = t;
  t = k_38;
  t = y_58(t);
  m_38 = t;
  t = (ATerm) ATinsert(CheckATermList(m_38), l_38);
  c_4 = t;
  t = SSLsetAnnotations(c_4, i_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_88 (ATerm), ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,y_38 = NULL,z_38 = NULL,f_4 = NULL;
  t_38 = t;
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_29;
        t = n_88(t);
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
      }
  }
  t = t_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_38 = ATgetFirst((ATermList) t);
      w_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_38);
  u_38 = t;
  t = term_g_26;
  z_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_26, v_38);
  t = p_6(z_38, v_38, t);
  t = w_38;
  {
    static ATerm j_39 (ATerm t)
    {
      ATerm j_29 = t;
      int l_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_29 = t;
          int q_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_39 = NULL;
              c_39 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_39;
              LocalPopChoice(q_29);
            }
          else
            {
              t = m_29;
              t = n_88(t);
              t = Cons_2_0(_id, j_39, t);
            }
          LocalPopChoice(l_29);
        }
      else
        {
          t = j_29;
          {
            ATerm f_39 = NULL,g_39 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_39 = ATgetFirst((ATermList) t);
                g_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_39), (ATerm) ATmakeAppl(sym_Undefined_1, f_39));
          }
        }
      return(t);
    }
    t = j_39(t);
  }
  y_38 = t;
  t = (ATerm) ATinsert(CheckATermList(y_38), (ATerm) ATmakeAppl(sym_Program_1, v_38));
  f_4 = t;
  t = SSLsetAnnotations(f_4, u_38);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm v_39 = NULL;
  v_39 = t;
  if(match_string(t, "--help"))
    {
      t = v_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_39;
        }
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL;
  t = term_m_27;
  w_39 = t;
  t = term_b_18;
  x_39 = t;
  t = term_r_29;
  t = p_6(w_39, x_39, t);
  t = term_s_29;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_t_29;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_88 (ATerm), ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
  q_39 = t;
  t = term_p_25;
  s_39 = t;
  t = term_s_25;
  t_39 = t;
  t = (ATerm) ATempty;
  u_39 = t;
  t = SSL_table_put(s_39, t_39, u_39);
  t = q_39;
  {
    static ATerm o_5 (ATerm t)
    {
      ATerm u_29 = t;
      int v_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_88(t);
          LocalPopChoice(v_29);
        }
      else
        {
          t = u_29;
          {
            ATerm x_29 = t;
            int y_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_5, q_5, s_5, t);
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
    t = parse_options_p__1_0(o_5, t);
  }
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_40 = NULL;
        i_40 = t;
        {
          ATerm b_30 = t;
          int c_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_12 = NULL;
              t = i_40;
              {
                ATerm d_30 = t;
                int e_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_13 = NULL,f_13 = NULL;
                    t = term_t_7;
                    e_13 = t;
                    t = term_m_27;
                    f_13 = t;
                    t = term_p_27;
                    t = m_6(e_13, f_13, t);
                    LocalPopChoice(e_30);
                  }
                else
                  {
                    t = d_30;
                    t = fetch_1_0(e_6, t);
                  }
              }
              t = i_40;
              t = default_system_usage_0_0(t);
              t = term_p_24;
              y_12 = t;
              t = SSL_exit(y_12);
              LocalPopChoice(c_30);
            }
          else
            {
              t = b_30;
              {
                ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
                t = term_t_7;
                p_13 = t;
                t = term_j_28;
                q_13 = t;
                t = term_f_30;
                t = m_6(p_13, q_13, t);
                t = i_40;
                t = default_system_about_0_0(t);
                t = term_p_24;
                o_13 = t;
                t = SSL_exit(o_13);
              }
            }
        }
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        {
          ATerm g_30 = t;
          int i_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
              static ATerm k_6 (ATerm t)
              {
                ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,h_4 = NULL;
                o_40 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_40);
                m_40 = t;
                t = n_40;
                if(((o_39 != NULL) && (o_39 != t)))
                  _fail(t);
                else
                  o_39 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_40);
                h_4 = t;
                t = SSLsetAnnotations(h_4, m_40);
                return(t);
              }
              t = fetch_1_0(k_6, t);
              t = term_v_16;
              k_40 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_39)), term_k_30);
              l_40 = t;
              t = SSL_printnl(k_40, l_40);
              t = (ATerm) ATmakeAppl(sym__2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_39)), term_k_30));
              t = default_system_usage_0_0(t);
              t = term_n_8;
              j_40 = t;
              t = SSL_exit(j_40);
              LocalPopChoice(i_30);
            }
          else
            {
              t = g_30;
            }
        }
      }
  }
  p_39 = t;
  t = term_p_25;
  r_39 = t;
  t = SSL_table_destroy(r_39);
  t = p_39;
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL;
  t = parse_options_1_0(r_86, t);
  t_40 = t;
  t = term_l_30;
  w_40 = t;
  t = SSL_table_create(w_40);
  t = term_l_30;
  u_40 = t;
  t = term_m_30;
  v_40 = t;
  t = SSL_table_put(u_40, v_40, t_40);
  t = t_40;
  t = t_86(t);
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_86, t);
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
        {
          ATerm s_30 = t;
          int v_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_86(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_30);
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
static ATerm l_6 (ATerm t)
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      {
        ATerm c_31 = t;
        int d_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(d_31);
          }
        else
          {
            t = c_31;
            {
              ATerm e_31 = t;
              int h_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(q_6, r_6, s_6, t);
                  LocalPopChoice(h_31);
                }
              else
                {
                  t = e_31;
                  {
                    ATerm i_31 = t;
                    int j_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(j_31);
                      }
                    else
                      {
                        t = i_31;
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
static ATerm o_6 (ATerm t)
{
  t = xtc_temp_files_1_0(t_6, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL;
  t = term_l_31;
  e_41 = t;
  t = term_b_18;
  f_41 = t;
  t = term_m_31;
  t = p_6(e_41, f_41, t);
  t = term_n_31;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_o_31;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL;
      t = term_t_7;
      i_41 = t;
      t = term_c_18;
      j_41 = t;
      t = term_r_31;
      t = m_6(i_41, j_41, t);
      h_41 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_41);
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      t = term_d_8;
    }
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_41 = NULL,q_41 = NULL;
        q_41 = t;
        if(match_cons(t, sym_FILE_1))
          {
            p_41 = ATgetArgument(t, 0);
            {
              ATerm u_13 = NULL,k_4 = NULL;
              t = SSLgetAnnotations(q_41);
              u_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_41);
              k_4 = t;
              t = SSLsetAnnotations(k_4, u_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_41;
          }
        LocalPopChoice(t_31);
        t = xtc_transform_file_2_0(v_6, w_6, t);
      }
    else
      {
        t = s_31;
        t = xtc_transform_term_2_0(x_6, y_6, t);
      }
  }
  {
    ATerm u_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_41 = NULL,z_41 = NULL;
        z_41 = t;
        if(match_cons(t, sym_FILE_1))
          {
            y_41 = ATgetArgument(t, 0);
            {
              ATerm l_14 = NULL,n_4 = NULL;
              t = SSLgetAnnotations(z_41);
              l_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_41);
              n_4 = t;
              t = SSLsetAnnotations(n_4, l_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_41;
          }
        LocalPopChoice(z_31);
        t = xtc_transform_file_2_0(z_6, pass_verbose_0_0, t);
      }
    else
      {
        t = u_31;
        t = xtc_transform_term_2_0(a_7, pass_verbose_0_0, t);
      }
  }
  {
    ATerm a_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_42 = NULL,g_42 = NULL;
        g_42 = t;
        if(match_cons(t, sym_FILE_1))
          {
            f_42 = ATgetArgument(t, 0);
            {
              ATerm x_14 = NULL,p_4 = NULL;
              t = SSLgetAnnotations(g_42);
              x_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_42);
              p_4 = t;
              t = SSLsetAnnotations(p_4, x_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_42;
          }
        LocalPopChoice(d_32);
        t = xtc_transform_file_2_0(b_7, pass_verbose_0_0, t);
      }
    else
      {
        t = a_32;
        t = xtc_transform_term_2_0(c_7, pass_verbose_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_f_32;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm r_41 = NULL;
  t = term_g_32;
  t = xtc_find_0_0(t);
  r_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_41), term_h_32);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_f_32;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm s_41 = NULL;
  t = term_g_32;
  t = xtc_find_0_0(t);
  s_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_41), term_h_32);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_i_32;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_i_32;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_j_32;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm io_pp_pp_table_0_0 (ATerm t)
{
  t = option_wrap_4_0(l_6, default_usage_0_0, _id, o_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_pp_table_0_0(t);
  return(t);
}
