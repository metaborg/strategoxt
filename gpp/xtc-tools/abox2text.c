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
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_f_31;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_n_30;
ATerm term_k_30;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_o_29;
ATerm term_a_29;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_i_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_w_26;
ATerm term_a_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_k_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_i_22;
ATerm term_z_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_m_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_q_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_x_18;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_n_15;
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
ATerm term_t_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_g_8;
ATerm term_v_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_q_7);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_g_8);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_s_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_9, term_n_8, term_k_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_9, term_o_9, term_p_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_9, term_u_9, term_v_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_d_10, term_h_10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_10, term_l_10, term_n_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_10, term_r_10, term_s_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_y_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_11, term_c_11, term_e_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_11, term_k_11, term_o_11);
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
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_w_11, term_a_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_g_12, term_h_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_k_12, term_l_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_o_12, term_q_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_u_12, term_v_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_z_12);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_g_13, term_h_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_o_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_u_13, term_x_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_d_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_i_14, term_l_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_y_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_l_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_u_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_f_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_n_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_w_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_g_20);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_p_22, term_i_22);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_j_24);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_24);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym__2, term_p_24, term_s_22);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_x_25);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_f_27);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym__2, term_d_24, term_e_24);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_z_27, term_s_22);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym__2, term_c_28, term_s_22);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym__2, term_f_27, term_s_22);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_z_27);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_t_22);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm k_6 (ATerm o_14, ATerm p_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm n_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm u_4 (ATerm i_4, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm u_5 (ATerm w_33, ATerm x_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm pass_width_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm v_5 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm w_5 (ATerm g_67 (ATerm), ATerm n_170, ATerm y_17, ATerm t);
static ATerm j_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t);
static ATerm x_5 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm i_72 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm v_65 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm e_67 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm x_83 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm w_83 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm y_83 (ATerm), ATerm t);
static ATerm a_6 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm b_6 (ATerm h_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm x_0 (ATerm t);
static ATerm c_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm d_6 (ATerm a_84 (ATerm), ATerm y_37, ATerm x_37, ATerm t);
static ATerm h_6 (ATerm h_40, ATerm i_40, ATerm t);
static ATerm r_14 (ATerm b_14, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_6 (ATerm u_17, ATerm t);
static ATerm f_6 (ATerm q_40, ATerm r_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_17 (ATerm m_15, ATerm t);
static ATerm e_17 (ATerm r_15, ATerm s_15, ATerm t_15, ATerm t);
static ATerm f_17 (ATerm i_16, ATerm j_16, ATerm k_16, ATerm t);
static ATerm g_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm z_22 (ATerm y_21, ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm v_86 (ATerm), ATerm t);
static ATerm i_6 (ATerm k_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm j_6 (ATerm l_32, ATerm m_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm abox2text_0_0 (ATerm t);
static ATerm p_6 (ATerm i_38, ATerm j_38, ATerm t);
static ATerm l_6 (ATerm w_36, ATerm x_36, ATerm t);
ATerm end_scope_1_0 (ATerm h_82 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm g_82 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm h_86 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_6 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_83 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm need_help_1_0 (ATerm x_87 (ATerm), ATerm t);
ATerm map_1_0 (ATerm w_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_72 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm s_6 (ATerm e_39, ATerm f_39, ATerm t);
static ATerm q_6 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_89 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm parse_options_1_0 (ATerm u_89 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm j_1 = NULL,m_1 = NULL;
  j_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_3 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = j_1;
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
        t = (ATerm) ATmakeAppl(sym__2, m_1, h_0);
        t = k_6(m_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
        LocalPopChoice(h_7);
      }
    else
      {
        t = f_3;
        {
          ATerm i_7 = t;
          int k_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_1 = NULL;
              t = j_1;
              t = o_0(t);
              c_1 = t;
              {
                ATerm l_7 = t;
                if((PushChoice() == 0))
                  {
                    ATerm d_1 = NULL;
                    d_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = d_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = d_1;
                          }
                        else
                          {
                            t = d_1;
                            if((m_1 != t))
                              {
                                _fail(t);
                              }
                            t = d_1;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_7;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, m_1, c_1);
              t = k_6(m_1, c_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
              LocalPopChoice(k_7);
            }
          else
            {
              t = i_7;
              t = j_1;
              t = o_0(t);
              if((m_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
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
  ATerm m_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 = NULL,w_2 = NULL;
      t = term_p_7;
      s_2 = t;
      t = term_q_7;
      w_2 = t;
      t = term_r_7;
      t = p_6(s_2, w_2, t);
      LocalPopChoice(o_7);
    }
  else
    {
      t = m_7;
      t = term_s_7;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm h_2 = NULL;
  h_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_1 = NULL,p_1 = NULL;
      t = term_q_7;
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 = NULL,r_1 = NULL;
            t = term_p_7;
            q_1 = t;
            t = term_q_7;
            r_1 = t;
            t = term_r_7;
            t = p_6(q_1, r_1, t);
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            t = term_s_7;
          }
      }
      l_1 = t;
      t = term_v_7;
      p_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_v_7, l_1);
      t = k_6(p_1, l_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm w_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_72 (ATerm), ATerm t)
{
  static ATerm b_4 (ATerm t)
  {
    ATerm x_3 = NULL,y_3 = NULL,a_4 = NULL;
    a_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_3 = ATgetFirst((ATermList) t);
        y_3 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_2 = NULL,f_2 = NULL,s_0 = NULL;
          t = SSLgetAnnotations(a_4);
          b_2 = t;
          t = y_3;
          t = b_4(t);
          f_2 = t;
          t = (ATerm) ATinsert(CheckATermList(f_2), x_3);
          s_0 = t;
          t = SSLsetAnnotations(s_0, b_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_4;
        t = n_72(t);
      }
    return(t);
  }
  t = b_4(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,c_3 = NULL;
  z_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_2;
    }
  else
    {
      static ATerm b_0 (ATerm t)
      {
        t = not_null(c_3);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_3 = ATgetFirst((ATermList) t);
          if(((c_3 != NULL) && (c_3 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_3 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_3;
      t = at_end_1_0(b_0, t);
    }
  return(t);
}
static ATerm u_4 (ATerm i_4, ATerm t)
{
  ATerm j_4 = NULL;
  t = SSL_explode_term(i_4);
  if(match_cons(t, sym__2))
    {
      ATerm x_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL;
  n_4 = t;
  if(match_cons(t, sym__2))
    {
      l_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
      {
        ATerm y_7 = t;
        int z_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm f_0 (ATerm t)
            {
              t = m_4;
              return(t);
            }
            t = l_4;
            t = at_end_1_0(f_0, t);
            LocalPopChoice(z_7);
          }
        else
          {
            t = y_7;
            t = u_4(n_4, t);
          }
      }
    }
  else
    {
      t = u_4(n_4, t);
    }
  return(t);
}
static ATerm u_5 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm a_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_33, x_33);
      LocalPopChoice(c_8);
    }
  else
    {
      t = a_8;
      t = SSL_subtr(w_33, x_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,a_5 = NULL;
  t = term_g_8;
  {
    ATerm h_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_5 = NULL,c_5 = NULL;
        t = term_p_7;
        b_5 = t;
        t = term_g_8;
        c_5 = t;
        t = term_m_8;
        t = p_6(b_5, c_5, t);
        LocalPopChoice(k_8);
      }
    else
      {
        t = h_8;
        t = term_n_8;
      }
  }
  w_4 = t;
  t = term_n_8;
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_4, term_n_8);
  t = u_5(w_4, a_5, t);
  x_4 = t;
  t = SSL_int_to_string(x_4);
  v_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_4), term_g_8);
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_5 = NULL,g_5 = NULL;
      t = term_p_7;
      f_5 = t;
      t = term_s_8;
      g_5 = t;
      t = term_u_8;
      t = p_6(f_5, g_5, t);
      LocalPopChoice(q_8);
      {
        ATerm i_5 = NULL;
        i_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, i_5), term_s_8);
      }
    }
  else
    {
      t = p_8;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm m_5 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_v_7;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm o_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_w_8);
      o_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_5, (ATerm) ATinsert(ATempty, term_w_8));
      t = h_6(m_5, o_5, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm v_5 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm p_5 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_5);
  return(t);
}
static ATerm w_5 (ATerm g_67 (ATerm), ATerm n_170, ATerm y_17, ATerm t)
{
  ATerm r_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_170, term_x_8);
  t = g_6(t);
  r_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_6, y_17);
  t = g_67(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_8 = ATgetArgument(t, 0);
      if(match_cons(y_8, sym_Stream_1))
        {
          v_6 = ATgetArgument(y_8, 0);
        }
      else
        _fail(t);
      w_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(v_6, w_6, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL;
  u_6 = t;
  t = xtc_new_file_0_0(t);
  t_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_6, u_6);
  t = w_5(j_0, t_6, u_6, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_6);
  t = xtc_transform_file_2_0(u_85, v_85, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm x_5 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,i_8 = NULL,j_8 = NULL;
  e_8 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      f_8 = ATgetArgument(t, 0);
      {
        ATerm o_2 = NULL,p_2 = NULL;
        t = SSL_int_to_string(f_8);
        o_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_9), o_2), term_z_8);
        p_2 = t;
        t = SSL_concat_strings(p_2);
      }
    }
  else
    {
      ATerm k_3 = NULL,m_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          f_8 = ATgetArgument(t, 0);
          i_8 = ATgetArgument(t, 1);
          j_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(i_8);
      k_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_8), term_c_9), k_3), term_b_9), f_8);
      m_3 = t;
      t = SSL_concat_strings(m_3);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_72 (ATerm), ATerm t)
{
  ATerm o_8 = NULL;
  static ATerm m_0 (ATerm t)
  {
    t = i_72(t);
    if(((o_8 != NULL) && (o_8 != t)))
      _fail(t);
    else
      o_8 = t;
    return(t);
  }
  t = fetch_1_0(m_0, t);
  t = not_null(o_8);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm r_8 = NULL;
  r_8 = t;
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm f_9 = ATgetArgument(t, 0);
              if((r_8 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_16), term_c_16), term_v_15), term_n_15), term_i_15), term_e_15), term_a_15), term_m_14), term_e_14), term_y_13), term_r_13), term_j_13), term_d_13), term_w_12), term_r_12), term_m_12), term_i_12), term_c_12), term_t_11), term_p_11), term_g_11), term_z_10), term_u_10), term_o_10), term_i_10), term_y_9), term_r_9), term_m_9);
        t = fetch_elem_1_0(q_0, t);
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, r_8);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm v_8 = NULL,l_9 = NULL;
  v_8 = t;
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_16 = ATgetArgument(t, 0);
            l_9 = ATgetArgument(t, 1);
            {
              ATerm r_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(n_16);
        {
          ATerm s_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_4 = NULL,f_4 = NULL,g_4 = NULL;
              t = l_9;
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
              c_4 = t;
              t = term_v_16;
              f_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, c_4), term_x_16);
              g_4 = t;
              t = SSL_printnl(f_4, g_4);
              t = (ATerm) ATmakeAppl(sym__2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, c_4), term_x_16));
              LocalPopChoice(t_16);
            }
          else
            {
              t = s_16;
              t = v_8;
            }
        }
      }
    else
      {
        t = m_16;
        t = v_8;
      }
  }
  t = v_8;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm v_65 (ATerm), ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL;
  x_9 = t;
  t = fork_0_0(t);
  w_9 = t;
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = x_9;
        t = v_65(t);
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        t = SSL_waitpid(w_9);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_17 = ATgetArgument(t, 0);
            if(((ATgetType(g_17) != AT_INT) || (ATgetInt((ATermInt) g_17) != 0)))
              _fail(t);
            {
              ATerm j_17 = ATgetArgument(t, 1);
            }
            {
              ATerm k_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_9;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm e_67 (ATerm), ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,e_10 = NULL;
  z_9 = t;
  t = e_67(t);
  a_10 = t;
  t = term_v_16;
  b_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_9), a_10);
  e_10 = t;
  t = SSL_printnl(b_10, e_10);
  t = z_9;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_10 = NULL;
  static ATerm t_0 (ATerm t)
  {
    ATerm g_10 = NULL,k_10 = NULL;
    g_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_10), g_10);
    t = p_6(not_null(f_10), g_10, t);
    k_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_10, k_10);
    return(t);
  }
  if(((f_10 != NULL) && (f_10 != t)))
    _fail(t);
  else
    f_10 = t;
  t = SSL_table_keys(f_10);
  t = map_1_0(t_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  ATerm m_10 = NULL;
  m_10 = t;
  {
    ATerm l_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_10 = NULL,x_10 = NULL,a_11 = NULL;
        t = term_p_7;
        x_10 = t;
        t = term_g_8;
        a_11 = t;
        t = term_m_8;
        t = p_6(x_10, a_11, t);
        t_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_10, term_k_15);
        t = geq_0_0(t);
        t = m_10;
        t = x_83(t);
        LocalPopChoice(n_17);
      }
    else
      {
        t = l_17;
        t = m_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
        t = term_p_7;
        m_11 = t;
        t = term_g_8;
        n_11 = t;
        t = term_m_8;
        t = p_6(m_11, n_11, t);
        l_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_11, term_g_12);
        t = geq_0_0(t);
        t = d_11;
        t = w_83(t);
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
        t = d_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm v_11 = NULL;
  v_11 = t;
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_11 = NULL,y_11 = NULL,b_12 = NULL;
        t = term_p_7;
        y_11 = t;
        t = term_g_8;
        b_12 = t;
        t = term_m_8;
        t = p_6(y_11, b_12, t);
        x_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_11, term_d_10);
        t = geq_0_0(t);
        t = v_11;
        t = y_83(t);
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
        t = v_11;
      }
  }
  return(t);
}
static ATerm a_6 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = l_76(t);
  {
    static ATerm u_0 (ATerm t)
    {
      ATerm d_12 = NULL;
      d_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, d_12);
      t = k_76(t);
      return(t);
    }
    t = fetch_1_0(u_0, t);
  }
  t = b_25;
  return(t);
}
static ATerm b_6 (ATerm h_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm f_13 (ATerm t)
  {
    ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
    a_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_13 = ATgetFirst((ATermList) t);
            c_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_17 = t;
          int w_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_13;
              {
                static ATerm w_0 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = a_6(h_76, w_0, b_13, c_13, t);
              }
              t = f_13(t);
              LocalPopChoice(w_17);
            }
          else
            {
              t = v_17;
              {
                ATerm s_4 = NULL,d_5 = NULL,v_0 = NULL;
                t = SSLgetAnnotations(a_13);
                s_4 = t;
                t = c_13;
                t = f_13(t);
                d_5 = t;
                t = (ATerm) ATinsert(CheckATermList(d_5), b_13);
                v_0 = t;
                t = SSLsetAnnotations(v_0, s_4);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = f_13(t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm p_13 = NULL;
  if(match_cons(t, sym__2))
    {
      p_13 = ATgetArgument(t, 0);
      if((p_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm i_13 = NULL,k_13 = NULL,l_13 = NULL;
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  {
    ATerm x_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_18 = ATgetArgument(t, 0);
            ATerm b_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = p_6(o_37, p_37, t);
        LocalPopChoice(z_17);
      }
    else
      {
        t = x_17;
        t = (ATerm) ATempty;
      }
  }
  l_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_13, q_37);
  t = b_6(x_0, l_13, q_37, t);
  k_13 = t;
  t = SSL_table_put(o_37, p_37, k_13);
  t = i_13;
  return(t);
}
static ATerm d_6 (ATerm a_84 (ATerm), ATerm y_37, ATerm x_37, ATerm t)
{
  static ATerm y_0 (ATerm t)
  {
    ATerm q_13 = NULL,t_13 = NULL;
    if(match_cons(t, sym__2))
      {
        q_13 = ATgetArgument(t, 0);
        t_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_37, q_13, t_13);
    t = a_84(t);
    return(t);
  }
  t = x_37;
  t = map_1_0(y_0, t);
  return(t);
}
static ATerm h_6 (ATerm h_40, ATerm i_40, ATerm t)
{
  t = SSL_access(h_40, i_40);
  return(t);
}
static ATerm r_14 (ATerm b_14, ATerm t)
{
  t = SSL_fclose(b_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL;
  k_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_14 = ATgetArgument(t, 0);
      {
        ATerm c_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_14);
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
            t = r_14(k_14, t);
          }
      }
    }
  else
    {
      t = r_14(k_14, t);
    }
  return(t);
}
static ATerm e_6 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm f_6 (ATerm q_40, ATerm r_40, ATerm t)
{
  ATerm u_14 = NULL;
  t = SSL_fopen(q_40, r_40);
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_14 = NULL;
  t = SSL_stdin_stream();
  v_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_14 = NULL;
  t = SSL_stdout_stream();
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_14 = NULL;
  t = SSL_stderr_stream();
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_14);
  return(t);
}
static ATerm b_17 (ATerm m_15, ATerm t)
{
  ATerm o_15 = NULL;
  t = SSL_explode_term(m_15);
  if(match_cons(t, sym__2))
    {
      ATerm f_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_18 = ATgetArgument(t, 1);
        if(((ATgetType(g_18) == AT_LIST) && !(ATisEmpty(g_18))))
          {
            o_15 = ATgetFirst((ATermList) g_18);
            {
              ATerm h_18 = (ATerm) ATgetNext((ATermList) g_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_17 (ATerm r_15, ATerm s_15, ATerm t_15, ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,g_16 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(t_15);
  y_15 = t;
  t = r_15;
  if(match_cons(t, sym_Path_1))
    {
      g_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_16, s_15);
  z_0 = t;
  t = SSLsetAnnotations(z_0, y_15);
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(w_15, x_15, t);
  return(t);
}
static ATerm f_17 (ATerm i_16, ATerm j_16, ATerm k_16, ATerm t)
{
  ATerm l_16 = NULL,o_16 = NULL,p_16 = NULL,w_16 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(k_16);
  p_16 = t;
  t = SSL_is_string(i_16);
  w_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_16, j_16);
  a_1 = t;
  t = SSLsetAnnotations(a_1, p_16);
  if(match_cons(t, sym__2))
    {
      l_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(l_16, o_16, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
  y_16 = t;
  if(match_cons(t, sym__2))
    {
      z_16 = ATgetArgument(t, 0);
      a_17 = ATgetArgument(t, 1);
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_17(y_16, t);
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
            {
              ATerm l_18 = t;
              int p_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_17(z_16, a_17, y_16, t);
                  LocalPopChoice(p_18);
                }
              else
                {
                  t = l_18;
                  t = f_17(z_16, a_17, y_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_17(y_16, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,m_17 = NULL,e_18 = NULL;
  e_18 = t;
  {
    ATerm q_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_18, term_x_18);
        t = g_6(t);
        LocalPopChoice(w_18);
      }
    else
      {
        t = q_18;
        {
          ATerm x_6 = NULL,y_6 = NULL;
          t = term_i_19;
          y_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_19, e_18);
          t = j_6(y_6, e_18, t);
          x_6 = t;
          t = SSL_perror(x_6);
          _fail(t);
        }
      }
  }
  i_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(m_17, t);
  h_17 = t;
  t = i_17;
  t = fclose_0_0(t);
  t = h_17;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_j_19;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_k_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_18 = NULL,m_18 = NULL;
      k_18 = t;
      t = (ATerm) ATinsert(ATempty, term_q_19);
      m_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_18, (ATerm) ATinsert(ATempty, term_q_19));
      t = h_6(k_18, m_18, t);
      LocalPopChoice(m_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = l_19;
      {
        ATerm t_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_19 = t;
            if((PushChoice() == 0))
              {
                ATerm n_18 = NULL,o_18 = NULL;
                n_18 = t;
                t = (ATerm) ATinsert(ATempty, term_w_8);
                o_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, n_18, (ATerm) ATinsert(ATempty, term_w_8));
                t = h_6(n_18, o_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_19;
              }
            t = debug_1_0(b_1, t);
            LocalPopChoice(w_19);
          }
        else
          {
            t = t_19;
            t = debug_1_0(e_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = debug_1_0(h_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
  f_19 = t;
  t = term_v_16;
  g_19 = t;
  t = (ATerm) ATinsert(ATempty, term_c_20);
  h_19 = t;
  t = SSL_printnl(g_19, h_19);
  t = f_19;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
  if(match_cons(t, sym__3))
    {
      n_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
      p_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_6(n_19, o_19, p_19, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,u_19 = NULL;
  r_19 = t;
  t = term_v_16;
  s_19 = t;
  t = (ATerm) ATinsert(ATempty, term_d_20);
  u_19 = t;
  t = SSL_printnl(s_19, u_19);
  t = r_19;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm v_19 = NULL,x_19 = NULL,a_20 = NULL;
  v_19 = t;
  t = term_v_16;
  x_19 = t;
  t = (ATerm) ATinsert(ATempty, term_c_20);
  a_20 = t;
  t = SSL_printnl(x_19, a_20);
  t = v_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  r_18 = t;
  t = if_verbose5_1_0(g_1, t);
  {
    ATerm e_20 = t;
    if((PushChoice() == 0))
      {
        ATerm d_19 = NULL,e_19 = NULL;
        t = term_f_20;
        d_19 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, r_18);
        e_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_20, (ATerm) ATmakeAppl(sym_Imported_1, r_18));
        t = p_6(d_19, e_19, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_20;
      }
  }
  t_18 = t;
  t = term_f_20;
  a_19 = t;
  t = term_g_20;
  b_19 = t;
  t = (ATerm) ATinsert(ATempty, r_18);
  c_19 = t;
  t = SSL_table_put(a_19, b_19, c_19);
  t = t_18;
  t = if_verbose4_1_0(i_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(n_1, t);
  s_18 = t;
  t = term_f_20;
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_20, s_18);
  t = d_6(s_1, z_18, s_18, t);
  t = if_verbose6_1_0(t_1, t);
  t = term_f_20;
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, r_18);
  v_18 = t;
  t = (ATerm) ATempty;
  y_18 = t;
  t = SSL_table_put(u_18, v_18, y_18);
  t = (ATerm) ATmakeAppl(sym__3, term_f_20, (ATerm)ATmakeAppl(sym_Imported_1, r_18), (ATerm) ATempty);
  t = if_verbose4_1_0(u_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_20;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_20 = ATgetFirst((ATermList) t);
          v_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm h_20 = t;
        int i_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_7 = NULL,j_7 = NULL,n_7 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(t_20);
            d_7 = t;
            t = u_20;
            t = g_80(t);
            j_7 = t;
            t = v_20;
            t = filter_1_0(g_80, t);
            n_7 = t;
            t = (ATerm) ATinsert(CheckATermList(n_7), j_7);
            f_1 = t;
            t = SSLsetAnnotations(f_1, d_7);
            LocalPopChoice(i_20);
          }
        else
          {
            t = h_20;
            t = v_20;
            t = filter_1_0(g_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm t)
{
  static ATerm e_21 (ATerm t)
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_70(t);
        t = e_21(t);
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        t = c_70(t);
      }
    return(t);
  }
  t = e_21(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_21 = NULL,g_21 = NULL;
      t = term_p_7;
      f_21 = t;
      t = term_n_20;
      g_21 = t;
      t = term_o_20;
      t = p_6(f_21, g_21, t);
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_21 = NULL;
            t = term_r_20;
            h_21 = t;
            t = SSL_getenv(h_21);
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = debug_1_0(w_1, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_s_20;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL;
  t = term_f_20;
  s_21 = t;
  t = term_w_20;
  t_21 = t;
  t = term_x_20;
  t = p_6(s_21, t_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm y_20 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_20;
      }
  }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm j_21 = NULL;
  t = if_verbose5_1_0(v_1, t);
  j_21 = t;
  {
    ATerm a_21 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_21 = NULL,o_21 = NULL;
        t = term_f_20;
        n_21 = t;
        t = term_g_20;
        o_21 = t;
        t = term_c_21;
        t = p_6(n_21, o_21, t);
        LocalPopChoice(b_21);
      }
    else
      {
        t = a_21;
        {
          ATerm p_21 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          p_21 = t;
          t = repeat_2_0(y_1, _id, t);
          t = p_21;
        }
      }
  }
  t = j_21;
  t = if_verbose5_1_0(a_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_d_21;
  return(t);
}
static ATerm z_22 (ATerm y_21, ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,d_22 = NULL;
  t = term_f_20;
  b_22 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, y_21);
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_20, (ATerm) ATmakeAppl(sym_Tool_1, y_21));
  t = p_6(b_22, d_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_21 = ATgetFirst((ATermList) t);
      if(match_cons(i_21, sym__2))
        {
          ATerm l_21 = ATgetArgument(i_21, 0);
          a_22 = ATgetArgument(i_21, 1);
        }
      else
        _fail(t);
      {
        ATerm k_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_22;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_d_21;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_f_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
      t = if_verbose5_1_0(e_2, t);
      t = xtc_load_0_0(t);
      h_22 = t;
      if(match_cons(t, sym__2))
        {
          f_22 = ATgetArgument(t, 0);
          g_22 = ATgetArgument(t, 1);
          {
            ATerm u_21 = t;
            int v_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_22 = NULL,o_22 = NULL,r_22 = NULL;
                t = term_f_20;
                o_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, f_22);
                r_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_20, (ATerm) ATmakeAppl(sym_Tool_1, f_22));
                t = p_6(o_22, r_22, t);
                {
                  static ATerm i_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((g_22 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((l_22 != NULL) && (l_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          l_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(i_2, t);
                }
                t = not_null(l_22);
                LocalPopChoice(v_21);
              }
            else
              {
                t = u_21;
                t = z_22(h_22, t);
              }
          }
        }
      else
        {
          t = z_22(h_22, t);
        }
      t = if_verbose5_1_0(j_2, t);
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      {
        ATerm y_22 = NULL,b_8 = NULL,d_8 = NULL;
        y_22 = t;
        t = term_v_16;
        b_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_21), y_22), term_w_21);
        d_8 = t;
        t = SSL_printnl(b_8, d_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_21), y_22), term_w_21);
        t = if_verbose5_1_0(l_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm d_23 = NULL,f_23 = NULL;
  f_23 = t;
  t = v_86(t);
  t = xtc_find_0_0(t);
  d_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_23, f_23);
  {
    static ATerm n_2 (ATerm t)
    {
      ATerm i_23 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, d_23, f_23);
      t = x_5(d_23, f_23, t);
      t = term_z_21;
      i_23 = t;
      t = SSL_exit(i_23);
      return(t);
    }
    t = fork_and_wait_1_0(n_2, t);
  }
  t = f_23;
  return(t);
}
static ATerm i_6 (ATerm k_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm k_23 = NULL,o_23 = NULL,q_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
  s_23 = t;
  t = k_82(t);
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_23, e_35, c_35);
  t = q_6(k_23, e_35, c_35, t);
  {
    ATerm c_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_23 = NULL;
        t = term_i_22;
        x_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_23, term_i_22);
        t = p_6(k_23, x_23, t);
        LocalPopChoice(e_22);
      }
    else
      {
        t = c_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_23 = ATgetFirst((ATermList) t);
      q_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_i_22;
  t_23 = t;
  t = (ATerm) ATinsert(CheckATermList(q_23), (ATerm) ATinsert(CheckATermList(o_23), e_35));
  u_23 = t;
  t = SSL_table_put(k_23, t_23, u_23);
  t = s_23;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm z_23 = NULL;
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_24 = NULL,l_8 = NULL;
      g_24 = t;
      t = term_m_22;
      l_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_24, term_m_22);
      t = j_6(g_24, l_8, t);
      z_23 = t;
      t = SSL_mkstemp(z_23);
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      {
        ATerm h_24 = NULL;
        t = term_n_22;
        h_24 = t;
        t = SSL_perror(h_24);
        _fail(t);
      }
    }
  return(t);
}
static ATerm j_6 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = SSL_strcat(l_32, m_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_p_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm k_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL;
  t = P__tmpdir_0_0(t);
  s_24 = t;
  t = term_q_22;
  t_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_24, term_q_22);
  t = j_6(s_24, t_24, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      q_24 = ATgetArgument(t, 0);
      k_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_s_22;
  r_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_24, term_s_22);
  t = i_6(q_2, q_24, r_24, t);
  t = SSL_close(k_24);
  t = q_24;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL;
  z_24 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm e_25 = NULL,g_25 = NULL;
      t = z_24;
      t = xtc_new_file_0_0(t);
      e_25 = t;
      t = r_0(t);
      g_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_25, (ATerm) ATinsert(ATinsert(ATempty, e_25), term_q_7));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_25);
    }
  else
    {
      ATerm i_25 = NULL,l_25 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_25;
      t = xtc_new_file_0_0(t);
      i_25 = t;
      t = r_0(t);
      l_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_25), term_q_7), a_25), term_t_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_25);
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_u_22;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL;
  t = term_s_22;
  t = pass_width_0_0(t);
  c_26 = t;
  t = term_s_22;
  t = pass_verbose_0_0(t);
  d_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_26, d_26);
  t = conc_0_0(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_u_22;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL;
  t = term_s_22;
  t = pass_width_0_0(t);
  f_26 = t;
  t = term_s_22;
  t = pass_verbose_0_0(t);
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_26, g_26);
  t = conc_0_0(t);
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_25 = NULL,z_25 = NULL;
      z_25 = t;
      if(match_cons(t, sym_FILE_1))
        {
          y_25 = ATgetArgument(t, 0);
          {
            ATerm t_8 = NULL,o_1 = NULL;
            t = SSLgetAnnotations(z_25);
            t_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, y_25);
            o_1 = t;
            t = SSLsetAnnotations(o_1, t_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_25;
        }
      LocalPopChoice(w_22);
      t = xtc_transform_file_2_0(r_2, t_2, t);
    }
  else
    {
      t = v_22;
      t = xtc_transform_term_2_0(u_2, v_2, t);
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
  ATerm l_26 = NULL,m_26 = NULL;
  m_26 = t;
  {
    ATerm x_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = p_6(w_36, x_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_23 = ATgetFirst((ATermList) t);
            l_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_23);
        t = SSL_table_put(w_36, x_36, l_26);
        t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, l_26);
      }
    else
      {
        t = x_22;
        t = SSL_table_remove(w_36, x_36);
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
      }
  }
  t = m_26;
  return(t);
}
ATerm end_scope_1_0 (ATerm h_82 (ATerm), ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL;
  s_26 = t;
  t = h_82(t);
  r_26 = t;
  {
    ATerm c_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_26 = NULL;
        t = term_i_22;
        u_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_26, term_i_22);
        t = p_6(r_26, u_26, t);
        LocalPopChoice(e_23);
      }
    else
      {
        t = c_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_26 = ATgetFirst((ATermList) t);
      n_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_i_22;
  t_26 = t;
  t = SSL_table_put(r_26, t_26, n_26);
  t = o_26;
  {
    static ATerm x_2 (ATerm t)
    {
      ATerm x_26 = NULL;
      x_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_26, x_26);
      t = l_6(r_26, x_26, t);
      return(t);
    }
    t = map_1_0(x_2, t);
  }
  t = s_26;
  return(t);
}
ATerm restore_always_2_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_83(t);
      t = i_83(t);
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      t = i_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
  a_27 = t;
  t = g_82(t);
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_26, term_i_22);
  {
    ATerm j_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_23 = ATgetArgument(t, 0);
            ATerm n_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_22;
        h_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_26, term_i_22);
        t = p_6(z_26, h_27, t);
        LocalPopChoice(l_23);
      }
    else
      {
        t = j_23;
        t = (ATerm) ATempty;
      }
  }
  b_27 = t;
  t = term_i_22;
  c_27 = t;
  t = (ATerm) ATinsert(CheckATermList(b_27), (ATerm) ATempty);
  d_27 = t;
  t = SSL_table_put(z_26, c_27, d_27);
  t = a_27;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_p_22;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm r_27 = NULL;
  r_27 = t;
  {
    ATerm p_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(r_27);
        LocalPopChoice(r_23);
      }
    else
      {
        t = p_23;
        t = r_27;
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_p_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  ATerm k_27 = NULL;
  static ATerm b_3 (ATerm t)
  {
    ATerm l_27 = NULL;
    l_27 = t;
    {
      ATerm v_23 = t;
      int w_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_27 = NULL,o_27 = NULL;
          t = term_p_22;
          n_27 = t;
          t = term_i_22;
          o_27 = t;
          t = term_y_23;
          t = p_6(n_27, o_27, t);
          LocalPopChoice(w_23);
        }
      else
        {
          t = v_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_27 != NULL) && (k_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_27 = ATgetFirst((ATermList) t);
        {
          ATerm a_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = k_27;
    t = map_1_0(d_3, t);
    t = l_27;
    t = end_scope_1_0(e_3, t);
    return(t);
  }
  t = begin_scope_1_0(y_2, t);
  t = restore_always_2_0(h_86, b_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_27 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  w_27 = t;
  t = term_s_22;
  t = whoami_0_0(t);
  d_28 = t;
  t = term_v_16;
  f_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_24), d_28), term_b_24);
  g_28 = t;
  t = SSL_printnl(f_28, g_28);
  t = term_n_8;
  e_28 = t;
  t = SSL_exit(e_28);
  t = w_27;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm l_28 = NULL,n_28 = NULL,o_28 = NULL,r_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
      t = term_s_22;
      t = n_0(t);
      s_28 = t;
      t = term_d_24;
      t_28 = t;
      t = term_e_24;
      u_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_24, term_e_24, s_28);
      t = q_6(t_28, u_28, s_28, t);
      _fail(t);
    }
  else
    {
      ATerm z_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_28 = ATgetFirst((ATermList) t);
          n_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_28 = ATgetFirst((ATermList) t);
          r_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_28;
      t = k_0(t);
      t = o_28;
      t = l_0(t);
      z_28 = t;
      t = (ATerm) ATinsert(CheckATermList(r_28), z_28);
    }
  return(t);
}
static ATerm g_3 (ATerm t)
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
static ATerm h_3 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  t = SSL_string_to_int(c_29);
  d_29 = t;
  t = term_f_24;
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_24, d_29);
  t = s_6(e_29, d_29, t);
  t = c_29;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_i_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_3, h_3, i_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm g_29 = NULL;
  g_29 = t;
  if(match_string(t, "-S"))
    {
      t = g_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_29;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL;
  t = term_g_8;
  h_29 = t;
  t = term_j_24;
  i_29 = t;
  t = term_l_24;
  t = s_6(h_29, i_29, t);
  t = term_m_24;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_n_24;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm j_29 = NULL,m_29 = NULL,p_29 = NULL;
  j_29 = t;
  t = SSL_string_to_int(j_29);
  m_29 = t;
  t = term_g_8;
  p_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_8, m_29);
  t = s_6(p_29, m_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_29);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_o_24;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL;
  t = term_p_24;
  q_29 = t;
  t = term_s_22;
  r_29 = t;
  t = term_u_24;
  t = s_6(q_29, r_29, t);
  t = term_v_24;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_w_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_3, o_3, p_3, t);
      LocalPopChoice(f_25);
    }
  else
    {
      t = d_25;
      {
        ATerm h_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_3, s_3, t_3, t);
            LocalPopChoice(j_25);
          }
        else
          {
            t = h_25;
            t = Option_3_0(v_3, w_3, z_3, t);
          }
      }
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  if(match_string(t, "-o"))
    {
      t = w_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_29;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm z_29 = NULL,c_30 = NULL;
  z_29 = t;
  t = term_q_7;
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_7, z_29);
  t = s_6(c_30, z_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_29);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_4, h_4, k_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm g_30 = NULL;
  g_30 = t;
  if(match_string(t, "-i"))
    {
      t = g_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_30;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  i_30 = t;
  t = term_t_22;
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_22, i_30);
  t = s_6(j_30, i_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_30);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_m_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm o_30 = NULL;
  o_30 = t;
  if(match_string(t, "-w"))
    {
      t = o_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = o_30;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  p_30 = t;
  t = term_s_8;
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_8, p_30);
  t = s_6(q_30, p_30, t);
  t = p_30;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
            {
              ATerm s_25 = t;
              int t_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(t_25);
                }
              else
                {
                  t = s_25;
                  {
                    ATerm u_25 = t;
                    int v_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(v_25);
                      }
                    else
                      {
                        t = u_25;
                        t = ArgOption_3_0(r_4, t_4, y_4, t);
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
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,z_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_22;
  t = whoami_0_0(t);
  t_30 = t;
  t = term_v_16;
  v_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_25), t_30);
  z_30 = t;
  t = SSL_printnl(v_30, z_30);
  t = term_n_8;
  u_30 = t;
  t = SSL_exit(u_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL;
  t = term_p_7;
  d_31 = t;
  t = term_x_25;
  e_31 = t;
  t = term_a_26;
  t = p_6(d_31, e_31, t);
  return(t);
}
static ATerm m_6 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm b_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(e_26);
    }
  else
    {
      t = b_26;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
  g_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_31;
      t = c_79(t);
    }
  else
    {
      ATerm l_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_31 = ATgetFirst((ATermList) t);
          i_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_31;
      t = foldr_2_0(c_79, d_79, t);
      l_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_31, l_31);
      t = d_79(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_j_24;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm q_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(q_9, t_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_31 = NULL,g_9 = NULL,h_9 = NULL;
  t = times_0_0(t);
  h_9 = t;
  t = SSL_explode_term(h_9);
  if(match_cons(t, sym__2))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      g_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9;
  t = foldr_2_0(z_4, e_5, t);
  o_31 = t;
  t = SSL_TicksToSeconds(o_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
  c_32 = t;
  if(match_cons(t, sym__2))
    {
      d_32 = ATgetArgument(t, 0);
      e_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_32;
        if((d_32 != t))
          {
            _fail(t);
          }
        t = c_32;
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        t = (ATerm) ATmakeAppl(sym__2, d_32, e_32);
        {
          ATerm k_26 = t;
          int p_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_32, e_32);
              LocalPopChoice(p_26);
            }
          else
            {
              t = k_26;
              t = SSL_gtr(d_32, e_32);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_32, e_32);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm i_32 = NULL;
  i_32 = t;
  {
    ATerm q_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_32 = NULL,n_32 = NULL,o_32 = NULL;
        t = term_p_7;
        n_32 = t;
        t = term_g_8;
        o_32 = t;
        t = term_m_8;
        t = p_6(n_32, o_32, t);
        k_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_32, term_n_8);
        t = geq_0_0(t);
        t = i_32;
        t = t_83(t);
        LocalPopChoice(v_26);
      }
    else
      {
        t = q_26;
        t = i_32;
      }
  }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,t_32 = NULL,u_32 = NULL;
  t = run_time_0_0(t);
  q_32 = t;
  t = term_s_22;
  t = whoami_0_0(t);
  r_32 = t;
  t = term_v_16;
  t_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_26), q_32), term_b_9), r_32);
  u_32 = t;
  t = SSL_printnl(t_32, u_32);
  t = (ATerm) ATmakeAppl(sym__2, term_v_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_26), q_32), term_b_9), r_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_24;
  v_32 = t;
  t = SSL_exit(v_32);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL;
  g_33 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = g_33;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_33 = ATgetArgument(t, 0);
          {
            ATerm q_10 = NULL,x_1 = NULL;
            t = SSLgetAnnotations(g_33);
            q_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_33);
            x_1 = t;
            t = SSLsetAnnotations(x_1, q_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = g_33;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm y_26 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_32 = NULL,z_32 = NULL;
      t = term_p_7;
      y_32 = t;
      t = term_f_27;
      z_32 = t;
      t = term_g_27;
      t = p_6(y_32, z_32, t);
      LocalPopChoice(e_27);
    }
  else
    {
      t = y_26;
      t = fetch_1_0(j_5, t);
    }
  t = x_87(t);
  return(t);
}
ATerm map_1_0 (ATerm w_71 (ATerm), ATerm t)
{
  static ATerm a_34 (ATerm t)
  {
    ATerm v_33 = NULL,y_33 = NULL,z_33 = NULL;
    v_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_33;
      }
    else
      {
        ATerm f_11 = NULL,i_11 = NULL,j_11 = NULL,z_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_33 = ATgetFirst((ATermList) t);
            z_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_33);
        f_11 = t;
        t = y_33;
        t = w_71(t);
        i_11 = t;
        t = z_33;
        t = a_34(t);
        j_11 = t;
        t = (ATerm) ATinsert(CheckATermList(j_11), i_11);
        z_1 = t;
        t = SSLsetAnnotations(z_1, f_11);
      }
    return(t);
  }
  t = a_34(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_34 = ATgetFirst((ATermList) t);
      e_34 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_34 = NULL,j_34 = NULL;
        static ATerm k_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_34)), not_null(j_34));
          return(t);
        }
        t = e_34;
        t = i_0(t);
        if(((i_34 != NULL) && (i_34 != t)))
          _fail(t);
        else
          i_34 = t;
        t = d_34;
        t = g_0(t);
        if(((j_34 != NULL) && (j_34 != t)))
          _fail(t);
        else
          j_34 = t;
        t = e_34;
        t = reverse_acc_2_0(g_0, k_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_22;
      t = i_0(t);
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,c_2 = NULL;
  r_34 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_34);
  p_34 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_34);
  c_2 = t;
  t = SSLsetAnnotations(c_2, p_34);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm t_34 = NULL;
  t_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_34), term_i_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL;
  ATerm j_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_34 = NULL,o_34 = NULL;
      t = term_p_7;
      n_34 = t;
      t = term_x_25;
      o_34 = t;
      t = term_a_26;
      t = p_6(n_34, o_34, t);
      LocalPopChoice(m_27);
    }
  else
    {
      t = j_27;
      t = fetch_1_0(l_5, t);
    }
  t = term_p_27;
  t = echo_0_0(t);
  t = term_d_24;
  l_34 = t;
  t = term_e_24;
  m_34 = t;
  t = term_q_27;
  t = p_6(l_34, m_34, t);
  t = reverse_acc_2_0(_id, n_5, t);
  t = map_1_0(q_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_72 (ATerm), ATerm t)
{
  static ATerm b_36 (ATerm t)
  {
    ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
    y_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_35 = ATgetFirst((ATermList) t);
        a_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_27 = t;
      int t_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_11 = NULL,f_12 = NULL,j_3 = NULL;
          t = SSLgetAnnotations(y_35);
          z_11 = t;
          t = z_35;
          t = g_72(t);
          f_12 = t;
          t = (ATerm) ATinsert(CheckATermList(a_36), f_12);
          j_3 = t;
          t = SSLsetAnnotations(j_3, z_11);
          LocalPopChoice(t_27);
        }
      else
        {
          t = s_27;
          {
            ATerm p_12 = NULL,t_12 = NULL,l_3 = NULL;
            t = SSLgetAnnotations(y_35);
            p_12 = t;
            t = a_36;
            t = b_36(t);
            t_12 = t;
            t = (ATerm) ATinsert(CheckATermList(t_12), z_35);
            l_3 = t;
            t = SSLsetAnnotations(l_3, p_12);
          }
        }
    }
    return(t);
  }
  t = b_36(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
  f_36 = t;
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_36;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_27 = ATgetFirst((ATermList) t);
                ATerm y_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_36;
          }
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        t = (ATerm) ATinsert(ATempty, f_36);
      }
  }
  g_36 = t;
  t = term_s_7;
  h_36 = t;
  t = SSL_printnl(h_36, g_36);
  t = f_36;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL;
  t = term_p_7;
  t_36 = t;
  t = term_x_25;
  u_36 = t;
  t = term_a_26;
  t = p_6(t_36, u_36, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL;
  t = term_z_27;
  y_36 = t;
  t = term_s_22;
  z_36 = t;
  t = term_a_28;
  t = s_6(y_36, z_36, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_b_28;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL;
  t = term_z_27;
  c_37 = t;
  t = term_s_22;
  d_37 = t;
  t = term_a_28;
  t = s_6(c_37, d_37, t);
  t = term_c_28;
  a_37 = t;
  t = term_s_22;
  b_37 = t;
  t = term_h_28;
  t = s_6(a_37, b_37, t);
  t = term_i_28;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_j_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_5, s_5, t_5, t);
      LocalPopChoice(m_28);
    }
  else
    {
      t = k_28;
      t = Option_3_0(y_5, z_5, n_6, t);
    }
  return(t);
}
static ATerm s_6 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm e_37 = NULL;
  t = term_p_7;
  e_37 = t;
  t = SSL_table_put(e_37, e_39, f_39);
  t = (ATerm) ATmakeAppl(sym__3, term_p_7, e_39, f_39);
  return(t);
}
static ATerm q_6 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_28 = ATgetArgument(t, 0);
            ATerm w_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = p_6(r_36, s_36, t);
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = (ATerm) ATempty;
      }
  }
  h_37 = t;
  t = (ATerm) ATinsert(CheckATermList(h_37), q_36);
  i_37 = t;
  t = SSL_table_put(r_36, s_36, i_37);
  t = g_37;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_37 = NULL,w_37 = NULL,b_38 = NULL;
      t = term_s_22;
      t = e_0(t);
      v_37 = t;
      t = term_d_24;
      w_37 = t;
      t = term_e_24;
      b_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_24, term_e_24, v_37);
      t = q_6(w_37, b_38, v_37, t);
      _fail(t);
    }
  else
    {
      ATerm e_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_37 = ATgetFirst((ATermList) t);
          u_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_37;
      t = c_0(t);
      t = term_s_22;
      t = d_0(t);
      e_38 = t;
      t = (ATerm) ATinsert(CheckATermList(u_37), e_38);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,r_3 = NULL;
  m_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_38 = ATgetFirst((ATermList) t);
      h_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_38);
  f_38 = t;
  t = g_38;
  t = v_58(t);
  k_38 = t;
  t = h_38;
  t = w_58(t);
  l_38 = t;
  t = (ATerm) ATinsert(CheckATermList(l_38), k_38);
  r_3 = t;
  t = SSLsetAnnotations(r_3, f_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_89 (ATerm), ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,w_38 = NULL,x_38 = NULL,u_3 = NULL;
  r_38 = t;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_29;
        t = v_89(t);
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
      }
  }
  t = r_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_38 = ATgetFirst((ATermList) t);
      u_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_38);
  s_38 = t;
  t = term_x_25;
  x_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_25, t_38);
  t = s_6(x_38, t_38, t);
  t = u_38;
  {
    static ATerm j_39 (ATerm t)
    {
      ATerm f_29 = t;
      int k_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_29 = t;
          int n_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_39 = NULL;
              a_39 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_39;
              LocalPopChoice(n_29);
            }
          else
            {
              t = l_29;
              t = v_89(t);
              t = Cons_2_0(_id, j_39, t);
            }
          LocalPopChoice(k_29);
        }
      else
        {
          t = f_29;
          {
            ATerm d_39 = NULL,g_39 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_39 = ATgetFirst((ATermList) t);
                g_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_39), (ATerm) ATmakeAppl(sym_Undefined_1, d_39));
          }
        }
      return(t);
    }
    t = j_39(t);
  }
  w_38 = t;
  t = (ATerm) ATinsert(CheckATermList(w_38), (ATerm) ATmakeAppl(sym_Program_1, t_38));
  u_3 = t;
  t = SSLsetAnnotations(u_3, s_38);
  return(t);
}
static ATerm z_6 (ATerm t)
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
static ATerm a_7 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL;
  t = term_f_27;
  w_39 = t;
  t = term_s_22;
  x_39 = t;
  t = term_o_29;
  t = s_6(w_39, x_39, t);
  t = term_s_29;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_t_29;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
  q_39 = t;
  t = term_d_24;
  s_39 = t;
  t = term_e_24;
  t_39 = t;
  t = (ATerm) ATempty;
  u_39 = t;
  t = SSL_table_put(s_39, t_39, u_39);
  t = q_39;
  {
    static ATerm o_6 (ATerm t)
    {
      ATerm u_29 = t;
      int v_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_89(t);
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
                t = Option_3_0(z_6, a_7, b_7, t);
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
    t = parse_options_p__1_0(o_6, t);
  }
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_40 = NULL;
        l_40 = t;
        {
          ATerm d_30 = t;
          int e_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_13 = NULL;
              t = l_40;
              {
                ATerm f_30 = t;
                int h_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_13 = NULL,c_14 = NULL;
                    t = term_p_7;
                    w_13 = t;
                    t = term_f_27;
                    c_14 = t;
                    t = term_g_27;
                    t = p_6(w_13, c_14, t);
                    LocalPopChoice(h_30);
                  }
                else
                  {
                    t = f_30;
                    t = fetch_1_0(c_7, t);
                  }
              }
              t = l_40;
              t = default_system_usage_0_0(t);
              t = term_j_24;
              v_13 = t;
              t = SSL_exit(v_13);
              LocalPopChoice(e_30);
            }
          else
            {
              t = d_30;
              {
                ATerm n_14 = NULL,q_14 = NULL,s_14 = NULL;
                t = term_p_7;
                q_14 = t;
                t = term_z_27;
                s_14 = t;
                t = term_k_30;
                t = p_6(q_14, s_14, t);
                t = l_40;
                t = default_system_about_0_0(t);
                t = term_j_24;
                n_14 = t;
                t = SSL_exit(n_14);
              }
            }
        }
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        {
          ATerm l_30 = t;
          int m_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
              static ATerm e_7 (ATerm t)
              {
                ATerm p_40 = NULL,u_40 = NULL,v_40 = NULL,d_4 = NULL;
                v_40 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_40);
                p_40 = t;
                t = u_40;
                if(((o_39 != NULL) && (o_39 != t)))
                  _fail(t);
                else
                  o_39 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_40);
                d_4 = t;
                t = SSLsetAnnotations(d_4, p_40);
                return(t);
              }
              t = fetch_1_0(e_7, t);
              t = term_v_16;
              n_40 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_39)), term_n_30);
              o_40 = t;
              t = SSL_printnl(n_40, o_40);
              t = (ATerm) ATmakeAppl(sym__2, term_v_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_39)), term_n_30));
              t = default_system_usage_0_0(t);
              t = term_n_8;
              m_40 = t;
              t = SSL_exit(m_40);
              LocalPopChoice(m_30);
            }
          else
            {
              t = l_30;
            }
        }
      }
  }
  p_39 = t;
  t = term_d_24;
  r_39 = t;
  t = SSL_table_destroy(r_39);
  t = p_39;
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL;
  t = parse_options_1_0(z_87, t);
  a_41 = t;
  t = term_r_30;
  d_41 = t;
  t = SSL_table_create(d_41);
  t = term_r_30;
  b_41 = t;
  t = term_s_30;
  c_41 = t;
  t = SSL_table_put(b_41, c_41, a_41);
  t = a_41;
  t = b_88(t);
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_88, t);
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        {
          ATerm y_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_88(t);
              t = report_success_0_0(t);
              LocalPopChoice(a_31);
            }
          else
            {
              t = y_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = xtc_temp_files_1_0(g_7, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
      t = term_p_7;
      k_41 = t;
      t = term_t_22;
      l_41 = t;
      t = term_f_31;
      t = p_6(k_41, l_41, t);
      j_41 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_41);
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      t = term_v_7;
    }
  t = abox2text_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, f_7, t);
  return(t);
}
