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
ATerm term_b_32;
ATerm term_a_32;
ATerm term_y_31;
ATerm term_u_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_w_30;
ATerm term_j_30;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_k_29;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_n_28;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_p_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_n_25;
ATerm term_l_25;
ATerm term_h_25;
ATerm term_d_25;
ATerm term_u_23;
ATerm term_s_23;
ATerm term_q_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_g_23;
ATerm term_c_23;
ATerm term_z_22;
ATerm term_x_22;
ATerm term_l_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_q_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_e_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_w_11;
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
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_l_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_d_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym__2, term_d_8, term_f_8);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__2, term_d_8, term_p_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym__2, term_d_8, term_t_8);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_10, term_y_8, term_j_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_p_10, term_q_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_u_10, term_y_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_c_11, term_d_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_h_11, term_i_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_l_11, term_m_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_11, term_p_11, term_q_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_u_11, term_v_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_d_12, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_h_12, term_i_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_m_12, term_o_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_v_12, term_w_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_z_12, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_f_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_x_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_l_14, term_m_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_v_14, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_g_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_r_15, term_t_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_y_15, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_i_16, term_l_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_s_16, term_t_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_w_16, term_a_17);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_17, term_d_17, term_e_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_d_8, term_i_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym__2, term_t_20, term_t_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_t_20, term_v_20);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym__2, term_q_23, term_g_23);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym__2, term_d_8, term_u_23);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, term_d_8, term_n_25);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym__2, term_t_8, term_j_26);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_o_26, term_g_9);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym__2, term_d_8, term_s_27);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__2, term_d_8, term_q_28);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_b_26, term_e_26);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_k_29, term_g_9);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym__2, term_p_29, term_g_9);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym__2, term_q_28, term_g_9);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__2, term_d_8, term_k_29);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm p_6 (ATerm o_14, ATerm p_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm pass_width_0_0 (ATerm t);
static ATerm z_5 (ATerm w_33, ATerm x_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm xtc_abox2text_1_0 (ATerm s_86 (ATerm), ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm a_6 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm b_6 (ATerm i_67 (ATerm), ATerm q_168, ATerm y_17, ATerm t);
static ATerm q_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm t);
static ATerm c_6 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm k_72 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm x_65 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm g_67 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm p_98 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm o_98 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm q_98 (ATerm), ATerm t);
static ATerm f_6 (ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm g_6 (ATerm j_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm c_1 (ATerm t);
static ATerm h_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm i_6 (ATerm o_83 (ATerm), ATerm y_37, ATerm x_37, ATerm t);
static ATerm m_6 (ATerm f_40, ATerm g_40, ATerm t);
static ATerm c_14 (ATerm w_13, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_6 (ATerm u_17, ATerm t);
static ATerm k_6 (ATerm o_40, ATerm p_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_16 (ATerm r_14, ATerm t);
static ATerm p_16 (ATerm x_14, ATerm y_14, ATerm z_14, ATerm t);
static ATerm r_16 (ATerm p_15, ATerm q_15, ATerm s_15, ATerm t);
static ATerm l_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_22 (ATerm l_21, ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm j_86 (ATerm), ATerm t);
static ATerm n_6 (ATerm m_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm o_6 (ATerm l_32, ATerm m_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm q_6 (ATerm w_36, ATerm x_36, ATerm t);
ATerm end_scope_1_0 (ATerm j_82 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_82 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm v_85 (ATerm), ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm ast2text_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm p_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm v_29 (ATerm f_29, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm r_6 (ATerm i_39, ATerm h_39, ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_6 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_98 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm need_help_1_0 (ATerm r_87 (ATerm), ATerm t);
ATerm map_1_0 (ATerm y_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_72 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_6 (ATerm i_38, ATerm j_38, ATerm t);
static ATerm u_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm y_6 (ATerm c_39, ATerm d_39, ATerm t);
static ATerm w_6 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm x_58 (ATerm), ATerm y_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_89 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm parse_options_1_0 (ATerm o_89 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL;
  j_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
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
        t = (ATerm) ATmakeAppl(sym__2, k_1, h_0);
        t = p_6(k_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        {
          ATerm x_7 = t;
          int z_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_1 = NULL;
              t = j_1;
              t = o_0(t);
              b_1 = t;
              {
                ATerm a_8 = t;
                if((PushChoice() == 0))
                  {
                    ATerm e_1 = NULL;
                    e_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = e_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = e_1;
                          }
                        else
                          {
                            t = e_1;
                            if((k_1 != t))
                              {
                                _fail(t);
                              }
                            t = e_1;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, k_1, b_1);
              t = p_6(k_1, b_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
              LocalPopChoice(z_7);
            }
          else
            {
              t = x_7;
              t = j_1;
              t = o_0(t);
              if((k_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
            }
        }
      }
  }
  return(t);
}
static ATerm p_6 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_copy(o_14, p_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_2 = NULL,v_2 = NULL;
      t = term_d_8;
      u_2 = t;
      t = term_f_8;
      v_2 = t;
      t = term_g_8;
      t = v_6(u_2, v_2, t);
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      t = term_h_8;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm n_1 = NULL,o_1 = NULL;
      t = term_f_8;
      {
        ATerm i_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 = NULL,r_1 = NULL;
            t = term_d_8;
            q_1 = t;
            t = term_f_8;
            r_1 = t;
            t = term_g_8;
            t = v_6(q_1, r_1, t);
            LocalPopChoice(k_8);
          }
        else
          {
            t = i_8;
            t = term_h_8;
          }
      }
      n_1 = t;
      t = term_l_8;
      o_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_l_8, n_1);
      t = p_6(o_1, n_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm m_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 = NULL,y_2 = NULL;
      t = term_d_8;
      x_2 = t;
      t = term_p_8;
      y_2 = t;
      t = term_q_8;
      t = v_6(x_2, y_2, t);
      LocalPopChoice(o_8);
      {
        ATerm z_2 = NULL;
        z_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, z_2), term_p_8);
      }
    }
  else
    {
      t = n_8;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm z_5 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_33, x_33);
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      t = SSL_subtr(w_33, x_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
  t = term_t_8;
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_3 = NULL,h_3 = NULL;
        t = term_d_8;
        f_3 = t;
        t = term_t_8;
        h_3 = t;
        t = term_x_8;
        t = v_6(f_3, h_3, t);
        LocalPopChoice(w_8);
      }
    else
      {
        t = v_8;
        t = term_y_8;
      }
  }
  b_3 = t;
  t = term_y_8;
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_3, term_y_8);
  t = z_5(b_3, d_3, t);
  c_3 = t;
  t = SSL_int_to_string(c_3);
  a_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_3), term_t_8);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_b_9;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_b_9;
  return(t);
}
ATerm xtc_abox2text_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_3 = NULL,u_3 = NULL;
      u_3 = t;
      if(match_cons(t, sym_FILE_1))
        {
          s_3 = ATgetArgument(t, 0);
          {
            ATerm b_2 = NULL,t_0 = NULL;
            t = SSLgetAnnotations(u_3);
            b_2 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, s_3);
            t_0 = t;
            t = SSLsetAnnotations(t_0, b_2);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_3;
        }
      LocalPopChoice(d_9);
      {
        static ATerm f_0 (ATerm t)
        {
          ATerm v_3 = NULL,w_3 = NULL,z_3 = NULL;
          t = term_g_9;
          t = s_86(t);
          z_3 = t;
          t = SSL_int_to_string(z_3);
          v_3 = t;
          t = term_g_9;
          t = pass_verbose_0_0(t);
          w_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, v_3), term_p_8), w_3);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(b_0, f_0, t);
      }
    }
  else
    {
      t = c_9;
      {
        static ATerm m_0 (ATerm t)
        {
          ATerm b_4 = NULL,c_4 = NULL,f_4 = NULL;
          t = term_g_9;
          t = s_86(t);
          f_4 = t;
          t = SSL_int_to_string(f_4);
          b_4 = t;
          t = term_g_9;
          t = pass_verbose_0_0(t);
          c_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, b_4), term_p_8), c_4);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(j_0, m_0, t);
      }
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm l_4 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_l_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm o_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          l_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_i_9);
      o_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_4, (ATerm) ATinsert(ATempty, term_i_9));
      t = m_6(l_4, o_4, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm a_6 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm p_4 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_4);
  return(t);
}
static ATerm b_6 (ATerm i_67 (ATerm), ATerm q_168, ATerm y_17, ATerm t)
{
  ATerm q_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_168, term_j_9);
  t = l_6(t);
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_4, y_17);
  t = i_67(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm w_4 = NULL,y_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_9 = ATgetArgument(t, 0);
      if(match_cons(o_9, sym_Stream_1))
        {
          w_4 = ATgetArgument(o_9, 0);
        }
      else
        _fail(t);
      y_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(w_4, y_4, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL;
  s_4 = t;
  t = xtc_new_file_0_0(t);
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_4, s_4);
  t = b_6(q_0, r_4, s_4, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_4);
  t = xtc_transform_file_2_0(i_85, j_85, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm c_6 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,d_7 = NULL,e_7 = NULL;
  z_6 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      a_7 = ATgetArgument(t, 0);
      {
        ATerm j_2 = NULL,k_2 = NULL;
        t = SSL_int_to_string(a_7);
        j_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), j_2), term_r_9);
        k_2 = t;
        t = SSL_concat_strings(k_2);
      }
    }
  else
    {
      ATerm i_3 = NULL,j_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          a_7 = ATgetArgument(t, 0);
          d_7 = ATgetArgument(t, 1);
          e_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(d_7);
      i_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_7), term_w_9), i_3), term_v_9), a_7);
      j_3 = t;
      t = SSL_concat_strings(j_3);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm k_72 (ATerm), ATerm t)
{
  ATerm l_7 = NULL;
  static ATerm s_0 (ATerm t)
  {
    t = k_72(t);
    if(((l_7 != NULL) && (l_7 != t)))
      _fail(t);
    else
      l_7 = t;
    return(t);
  }
  t = fetch_1_0(s_0, t);
  t = not_null(l_7);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm o_7 = NULL;
  o_7 = t;
  {
    ATerm a_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm d_10 = ATgetArgument(t, 0);
              if((o_7 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm g_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_17), term_b_17), term_u_16), term_m_16), term_f_16), term_a_16), term_v_15), term_n_15), term_i_15), term_d_15), term_n_14), term_y_13), term_s_13), term_o_13), term_g_13), term_b_13), term_x_12), term_p_12), term_j_12), term_f_12), term_w_11), term_r_11), term_n_11), term_j_11), term_e_11), term_z_10), term_s_10), term_k_10);
        t = fetch_elem_1_0(u_0, t);
        LocalPopChoice(c_10);
      }
    else
      {
        t = a_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, o_7);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm y_7 = NULL,j_8 = NULL;
  y_7 = t;
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_17 = ATgetArgument(t, 0);
            j_8 = ATgetArgument(t, 1);
            {
              ATerm k_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(i_17);
        {
          ATerm l_17 = t;
          int q_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_4 = NULL,h_4 = NULL,i_4 = NULL;
              t = j_8;
              {
                ATerm x_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_17;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              a_4 = t;
              t = term_a_18;
              h_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_4), term_b_18);
              i_4 = t;
              t = SSL_printnl(h_4, i_4);
              t = (ATerm) ATmakeAppl(sym__2, term_a_18, (ATerm) ATinsert(ATinsert(ATempty, a_4), term_b_18));
              LocalPopChoice(q_17);
            }
          else
            {
              t = l_17;
              t = y_7;
            }
        }
      }
    else
      {
        t = h_17;
        t = y_7;
      }
  }
  t = y_7;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm x_65 (ATerm), ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  a_9 = t;
  t = fork_0_0(t);
  z_8 = t;
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = a_9;
        t = x_65(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        t = SSL_waitpid(z_8);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_18 = ATgetArgument(t, 0);
            if(((ATgetType(j_18) != AT_INT) || (ATgetInt((ATermInt) j_18) != 0)))
              _fail(t);
            {
              ATerm k_18 = ATgetArgument(t, 1);
            }
            {
              ATerm l_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = a_9;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm g_67 (ATerm), ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,k_9 = NULL,l_9 = NULL;
  e_9 = t;
  t = g_67(t);
  f_9 = t;
  t = term_a_18;
  k_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_9), f_9);
  l_9 = t;
  t = SSL_printnl(k_9, l_9);
  t = e_9;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm m_9 = NULL;
  static ATerm v_0 (ATerm t)
  {
    ATerm p_9 = NULL,q_9 = NULL;
    p_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), p_9);
    t = v_6(not_null(m_9), p_9, t);
    q_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_9, q_9);
    return(t);
  }
  if(((m_9 != NULL) && (m_9 != t)))
    _fail(t);
  else
    m_9 = t;
  t = SSL_table_keys(m_9);
  t = map_1_0(v_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm p_98 (ATerm), ATerm t)
{
  ATerm s_9 = NULL;
  s_9 = t;
  {
    ATerm m_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_9 = NULL,x_9 = NULL,z_9 = NULL;
        t = term_d_8;
        x_9 = t;
        t = term_t_8;
        z_9 = t;
        t = term_x_8;
        t = v_6(x_9, z_9, t);
        u_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_9, term_i_16);
        t = geq_0_0(t);
        t = s_9;
        t = p_98(t);
        LocalPopChoice(q_18);
      }
    else
      {
        t = m_18;
        t = s_9;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm o_98 (ATerm), ATerm t)
{
  ATerm i_10 = NULL;
  i_10 = t;
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
        t = term_d_8;
        n_10 = t;
        t = term_t_8;
        o_10 = t;
        t = term_x_8;
        t = v_6(n_10, o_10, t);
        m_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_10, term_v_12);
        t = geq_0_0(t);
        t = i_10;
        t = o_98(t);
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        t = i_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm q_98 (ATerm), ATerm t)
{
  ATerm r_10 = NULL;
  r_10 = t;
  {
    ATerm t_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
        t = term_d_8;
        w_10 = t;
        t = term_t_8;
        x_10 = t;
        t = term_x_8;
        t = v_6(w_10, x_10, t);
        v_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_10, term_c_11);
        t = geq_0_0(t);
        t = r_10;
        t = q_98(t);
        LocalPopChoice(w_18);
      }
    else
      {
        t = t_18;
        t = r_10;
      }
  }
  return(t);
}
static ATerm f_6 (ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = n_76(t);
  {
    static ATerm x_0 (ATerm t)
    {
      ATerm b_11 = NULL;
      b_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, b_11);
      t = m_76(t);
      return(t);
    }
    t = fetch_1_0(x_0, t);
  }
  t = b_25;
  return(t);
}
static ATerm g_6 (ATerm j_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm k_12 (ATerm t)
  {
    ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
    z_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_12 = ATgetFirst((ATermList) t);
            b_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_19 = t;
          int b_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_11;
              {
                static ATerm a_1 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = f_6(j_76, a_1, a_12, b_12, t);
              }
              t = k_12(t);
              LocalPopChoice(b_19);
            }
          else
            {
              t = a_19;
              {
                ATerm v_4 = NULL,a_5 = NULL,w_0 = NULL;
                t = SSLgetAnnotations(z_11);
                v_4 = t;
                t = b_12;
                t = k_12(t);
                a_5 = t;
                t = (ATerm) ATinsert(CheckATermList(a_5), a_12);
                w_0 = t;
                t = SSLsetAnnotations(w_0, v_4);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = k_12(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm h_13 = NULL;
  if(match_cons(t, sym__2))
    {
      h_13 = ATgetArgument(t, 0);
      if((h_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  {
    ATerm c_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_19 = ATgetArgument(t, 0);
            ATerm h_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = v_6(o_37, p_37, t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = c_19;
        t = (ATerm) ATempty;
      }
  }
  u_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_12, q_37);
  t = g_6(c_1, u_12, q_37, t);
  t_12 = t;
  t = SSL_table_put(o_37, p_37, t_12);
  t = s_12;
  return(t);
}
static ATerm i_6 (ATerm o_83 (ATerm), ATerm y_37, ATerm x_37, ATerm t)
{
  static ATerm d_1 (ATerm t)
  {
    ATerm i_13 = NULL,j_13 = NULL;
    if(match_cons(t, sym__2))
      {
        i_13 = ATgetArgument(t, 0);
        j_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_37, i_13, j_13);
    t = o_83(t);
    return(t);
  }
  t = x_37;
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm m_6 (ATerm f_40, ATerm g_40, ATerm t)
{
  t = SSL_access(f_40, g_40);
  return(t);
}
static ATerm c_14 (ATerm w_13, ATerm t)
{
  t = SSL_fclose(w_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL;
  a_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_13 = ATgetArgument(t, 0);
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_13);
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            t = c_14(a_14, t);
          }
      }
    }
  else
    {
      t = c_14(a_14, t);
    }
  return(t);
}
static ATerm j_6 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm k_6 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm d_14 = NULL;
  t = SSL_fopen(o_40, p_40);
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_14 = NULL;
  t = SSL_stdin_stream();
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_14 = NULL;
  t = SSL_stdout_stream();
  f_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_14 = NULL;
  t = SSL_stderr_stream();
  i_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_14);
  return(t);
}
static ATerm o_16 (ATerm r_14, ATerm t)
{
  ATerm s_14 = NULL;
  t = SSL_explode_term(r_14);
  if(match_cons(t, sym__2))
    {
      ATerm k_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_19 = ATgetArgument(t, 1);
        if(((ATgetType(l_19) == AT_LIST) && !(ATisEmpty(l_19))))
          {
            s_14 = ATgetFirst((ATermList) l_19);
            {
              ATerm m_19 = (ATerm) ATgetNext((ATermList) l_19);
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
static ATerm p_16 (ATerm x_14, ATerm y_14, ATerm z_14, ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,f_15 = NULL,l_15 = NULL,y_0 = NULL;
  t = SSLgetAnnotations(z_14);
  f_15 = t;
  t = x_14;
  if(match_cons(t, sym_Path_1))
    {
      l_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_15, y_14);
  y_0 = t;
  t = SSLsetAnnotations(y_0, f_15);
  if(match_cons(t, sym__2))
    {
      a_15 = ATgetArgument(t, 0);
      b_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(a_15, b_15, t);
  return(t);
}
static ATerm r_16 (ATerm p_15, ATerm q_15, ATerm s_15, ATerm t)
{
  ATerm u_15 = NULL,w_15 = NULL,d_16 = NULL,h_16 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(s_15);
  d_16 = t;
  t = SSL_is_string(p_15);
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_16, q_15);
  z_0 = t;
  t = SSLsetAnnotations(z_0, d_16);
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(u_15, w_15, t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,n_16 = NULL;
  j_16 = t;
  if(match_cons(t, sym__2))
    {
      k_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_16(j_16, t);
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            {
              ATerm u_19 = t;
              int v_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_16(k_16, n_16, j_16, t);
                  LocalPopChoice(v_19);
                }
              else
                {
                  t = u_19;
                  t = r_16(k_16, n_16, j_16, t);
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
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,g_17 = NULL;
  g_17 = t;
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_17, term_y_19);
        t = l_6(t);
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        {
          ATerm e_6 = NULL,t_6 = NULL;
          t = term_z_19;
          t_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_19, g_17);
          t = o_6(t_6, g_17, t);
          e_6 = t;
          t = SSL_perror(e_6);
          _fail(t);
        }
      }
  }
  y_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(z_16, t);
  x_16 = t;
  t = y_16;
  t = fclose_0_0(t);
  t = x_16;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_a_20;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_17 = NULL,n_17 = NULL;
      m_17 = t;
      t = (ATerm) ATinsert(ATempty, term_e_20);
      n_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_17, (ATerm) ATinsert(ATempty, term_e_20));
      t = m_6(m_17, n_17, t);
      LocalPopChoice(d_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = c_20;
      {
        ATerm f_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_20 = t;
            if((PushChoice() == 0))
              {
                ATerm r_17 = NULL,s_17 = NULL;
                r_17 = t;
                t = (ATerm) ATinsert(ATempty, term_i_9);
                s_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_17, (ATerm) ATinsert(ATempty, term_i_9));
                t = m_6(r_17, s_17, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_20;
              }
            t = debug_1_0(g_1, t);
            LocalPopChoice(g_20);
          }
        else
          {
            t = f_20;
            t = debug_1_0(h_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(l_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_l_20;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_m_20;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,x_18 = NULL;
  u_18 = t;
  t = term_a_18;
  v_18 = t;
  t = (ATerm) ATinsert(ATempty, term_n_20);
  x_18 = t;
  t = SSL_printnl(v_18, x_18);
  t = u_18;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,d_19 = NULL;
  if(match_cons(t, sym__3))
    {
      y_18 = ATgetArgument(t, 0);
      z_18 = ATgetArgument(t, 1);
      d_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_6(y_18, z_18, d_19, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm f_19 = NULL,n_19 = NULL,o_19 = NULL;
  f_19 = t;
  t = term_a_18;
  n_19 = t;
  t = (ATerm) ATinsert(ATempty, term_q_20);
  o_19 = t;
  t = SSL_printnl(n_19, o_19);
  t = f_19;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  p_19 = t;
  t = term_a_18;
  q_19 = t;
  t = (ATerm) ATinsert(ATempty, term_n_20);
  r_19 = t;
  t = SSL_printnl(q_19, r_19);
  t = p_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm t_17 = NULL,v_17 = NULL,w_17 = NULL,z_17 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,n_18 = NULL;
  t_17 = t;
  t = if_verbose5_1_0(i_1, t);
  {
    ATerm s_20 = t;
    if((PushChoice() == 0))
      {
        ATerm o_18 = NULL,p_18 = NULL;
        t = term_t_20;
        o_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, t_17);
        p_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_20, (ATerm) ATmakeAppl(sym_Imported_1, t_17));
        t = v_6(o_18, p_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_20;
      }
  }
  w_17 = t;
  t = term_t_20;
  f_18 = t;
  t = term_v_20;
  g_18 = t;
  t = (ATerm) ATinsert(ATempty, t_17);
  n_18 = t;
  t = SSL_table_put(f_18, g_18, n_18);
  t = w_17;
  t = if_verbose4_1_0(m_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(t_1, t);
  v_17 = t;
  t = term_t_20;
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_20, v_17);
  t = i_6(u_1, e_18, v_17, t);
  t = if_verbose6_1_0(w_1, t);
  t = term_t_20;
  z_17 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, t_17);
  c_18 = t;
  t = (ATerm) ATempty;
  d_18 = t;
  t = SSL_table_put(z_17, c_18, d_18);
  t = (ATerm) ATmakeAppl(sym__3, term_t_20, (ATerm)ATmakeAppl(sym_Imported_1, t_17), (ATerm) ATempty);
  t = if_verbose4_1_0(y_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm i_80 (ATerm), ATerm t)
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
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_7 = NULL,m_7 = NULL,n_7 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(i_20);
            g_7 = t;
            t = j_20;
            t = i_80(t);
            m_7 = t;
            t = k_20;
            t = filter_1_0(i_80, t);
            n_7 = t;
            t = (ATerm) ATinsert(CheckATermList(n_7), m_7);
            f_1 = t;
            t = SSLsetAnnotations(f_1, g_7);
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            t = k_20;
            t = filter_1_0(i_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm t)
{
  static ATerm o_20 (ATerm t)
  {
    ATerm c_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_70(t);
        t = o_20(t);
        LocalPopChoice(f_21);
      }
    else
      {
        t = c_21;
        t = e_70(t);
      }
    return(t);
  }
  t = o_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_20 = NULL,r_20 = NULL;
      t = term_d_8;
      p_20 = t;
      t = term_i_21;
      r_20 = t;
      t = term_j_21;
      t = v_6(p_20, r_20, t);
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      {
        ATerm k_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_20 = NULL;
            t = term_r_21;
            u_20 = t;
            t = SSL_getenv(u_20);
            LocalPopChoice(m_21);
          }
        else
          {
            t = k_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_s_21;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  t = term_t_20;
  d_21 = t;
  t = term_t_21;
  e_21 = t;
  t = term_w_21;
  t = v_6(d_21, e_21, t);
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
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm y_20 = NULL;
  t = if_verbose5_1_0(z_1, t);
  y_20 = t;
  {
    ATerm z_21 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_20 = NULL,a_21 = NULL;
        t = term_t_20;
        z_20 = t;
        t = term_v_20;
        a_21 = t;
        t = term_e_22;
        t = v_6(z_20, a_21, t);
        LocalPopChoice(d_22);
      }
    else
      {
        t = z_21;
        {
          ATerm b_21 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          b_21 = t;
          t = repeat_2_0(d_2, _id, t);
          t = b_21;
        }
      }
  }
  t = y_20;
  t = if_verbose5_1_0(e_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_f_22;
  return(t);
}
static ATerm i_22 (ATerm l_21, ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
  t = term_t_20;
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, l_21);
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_20, (ATerm) ATmakeAppl(sym_Tool_1, l_21));
  t = v_6(o_21, p_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_22 = ATgetFirst((ATermList) t);
      if(match_cons(g_22, sym__2))
        {
          ATerm k_22 = ATgetArgument(g_22, 0);
          n_21 = ATgetArgument(g_22, 1);
        }
      else
        _fail(t);
      {
        ATerm j_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_21;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_f_22;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_t_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm r_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_21 = NULL,u_21 = NULL,v_21 = NULL;
      t = if_verbose5_1_0(g_2, t);
      t = xtc_load_0_0(t);
      v_21 = t;
      if(match_cons(t, sym__2))
        {
          q_21 = ATgetArgument(t, 0);
          u_21 = ATgetArgument(t, 1);
          {
            ATerm u_22 = t;
            int w_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
                t = term_t_20;
                b_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, q_21);
                c_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_t_20, (ATerm) ATmakeAppl(sym_Tool_1, q_21));
                t = v_6(b_22, c_22, t);
                {
                  static ATerm i_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((u_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((a_22 != NULL) && (a_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          a_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(i_2, t);
                }
                t = not_null(a_22);
                LocalPopChoice(w_22);
              }
            else
              {
                t = u_22;
                t = i_22(v_21, t);
              }
          }
        }
      else
        {
          t = i_22(v_21, t);
        }
      t = if_verbose5_1_0(l_2, t);
      LocalPopChoice(t_22);
    }
  else
    {
      t = r_22;
      {
        ATerm h_22 = NULL,v_7 = NULL,w_7 = NULL;
        h_22 = t;
        t = term_a_18;
        v_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_22), h_22), term_x_22);
        w_7 = t;
        t = SSL_printnl(v_7, w_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_22), h_22), term_x_22);
        t = if_verbose5_1_0(n_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm j_86 (ATerm), ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL;
  n_22 = t;
  t = j_86(t);
  t = xtc_find_0_0(t);
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_22, n_22);
  {
    static ATerm q_2 (ATerm t)
    {
      ATerm o_22 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, m_22, n_22);
      t = c_6(m_22, n_22, t);
      t = term_c_23;
      o_22 = t;
      t = SSL_exit(o_22);
      return(t);
    }
    t = fork_and_wait_1_0(q_2, t);
  }
  t = n_22;
  return(t);
}
static ATerm n_6 (ATerm m_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,s_22 = NULL,v_22 = NULL,y_22 = NULL,a_23 = NULL;
  v_22 = t;
  t = m_82(t);
  p_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_22, e_35, c_35);
  t = w_6(p_22, e_35, c_35, t);
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_23 = NULL;
        t = term_g_23;
        b_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_22, term_g_23);
        t = v_6(p_22, b_23, t);
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
      q_22 = ATgetFirst((ATermList) t);
      s_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_g_23;
  y_22 = t;
  t = (ATerm) ATinsert(CheckATermList(s_22), (ATerm) ATinsert(CheckATermList(q_22), e_35));
  a_23 = t;
  t = SSL_table_put(p_22, y_22, a_23);
  t = v_22;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm d_23 = NULL;
  ATerm h_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_23 = NULL,e_8 = NULL;
      i_23 = t;
      t = term_l_23;
      e_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_23, term_l_23);
      t = o_6(i_23, e_8, t);
      d_23 = t;
      t = SSL_mkstemp(d_23);
      LocalPopChoice(k_23);
    }
  else
    {
      t = h_23;
      {
        ATerm j_23 = NULL;
        t = term_m_23;
        j_23 = t;
        t = SSL_perror(j_23);
        _fail(t);
      }
    }
  return(t);
}
static ATerm o_6 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = SSL_strcat(l_32, m_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,r_23 = NULL,t_23 = NULL;
  t = P__tmpdir_0_0(t);
  r_23 = t;
  t = term_s_23;
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_23, term_s_23);
  t = o_6(r_23, t_23, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      o_23 = ATgetArgument(t, 0);
      n_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_g_9;
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_23, term_g_9);
  t = n_6(r_2, o_23, p_23, t);
  t = SSL_close(n_23);
  t = o_23;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL;
  x_23 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm b_24 = NULL,c_24 = NULL;
      t = x_23;
      t = xtc_new_file_0_0(t);
      b_24 = t;
      t = r_0(t);
      c_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_24, (ATerm) ATinsert(ATinsert(ATempty, b_24), term_f_8));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_24);
    }
  else
    {
      ATerm e_24 = NULL,g_24 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_23;
      t = xtc_new_file_0_0(t);
      e_24 = t;
      t = r_0(t);
      g_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_24), term_f_8), y_23), term_u_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_24);
    }
  return(t);
}
static ATerm q_6 (ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL;
  j_24 = t;
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = v_6(w_36, x_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_23 = ATgetFirst((ATermList) t);
            i_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(w_23);
        t = SSL_table_put(w_36, x_36, i_24);
        t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, i_24);
      }
    else
      {
        t = v_23;
        t = SSL_table_remove(w_36, x_36);
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
      }
  }
  t = j_24;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_82 (ATerm), ATerm t)
{
  ATerm k_24 = NULL,o_24 = NULL,p_24 = NULL,s_24 = NULL,t_24 = NULL;
  s_24 = t;
  t = j_82(t);
  p_24 = t;
  {
    ATerm a_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL;
        t = term_g_23;
        v_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_24, term_g_23);
        t = v_6(p_24, v_24, t);
        LocalPopChoice(d_24);
      }
    else
      {
        t = a_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_24 = ATgetFirst((ATermList) t);
      k_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_g_23;
  t_24 = t;
  t = SSL_table_put(p_24, t_24, k_24);
  t = o_24;
  {
    static ATerm s_2 (ATerm t)
    {
      ATerm a_25 = NULL;
      a_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_24, a_25);
      t = q_6(p_24, a_25, t);
      return(t);
    }
    t = map_1_0(s_2, t);
  }
  t = s_24;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm f_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_83(t);
      t = k_83(t);
      LocalPopChoice(h_24);
    }
  else
    {
      t = f_24;
      t = k_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  ATerm k_25 = NULL,m_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
  m_25 = t;
  t = i_82(t);
  k_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_25, term_g_23);
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_24 = ATgetArgument(t, 0);
            ATerm q_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_23;
        x_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_25, term_g_23);
        t = v_6(k_25, x_25, t);
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        t = (ATerm) ATempty;
      }
  }
  o_25 = t;
  t = term_g_23;
  p_25 = t;
  t = (ATerm) ATinsert(CheckATermList(o_25), (ATerm) ATempty);
  q_25 = t;
  t = SSL_table_put(k_25, p_25, q_25);
  t = m_25;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_q_23;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm q_26 = NULL;
  q_26 = t;
  {
    ATerm r_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(q_26);
        LocalPopChoice(u_24);
      }
    else
      {
        t = r_24;
        t = q_26;
      }
  }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm c_26 = NULL;
  static ATerm w_2 (ATerm t)
  {
    ATerm d_26 = NULL;
    d_26 = t;
    {
      ATerm w_24 = t;
      int z_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_26 = NULL,g_26 = NULL;
          t = term_q_23;
          f_26 = t;
          t = term_g_23;
          g_26 = t;
          t = term_d_25;
          t = v_6(f_26, g_26, t);
          LocalPopChoice(z_24);
        }
      else
        {
          t = w_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((c_26 != NULL) && (c_26 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          c_26 = ATgetFirst((ATermList) t);
        {
          ATerm e_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = c_26;
    t = map_1_0(e_3, t);
    t = d_26;
    t = end_scope_1_0(g_3, t);
    return(t);
  }
  t = begin_scope_1_0(t_2, t);
  t = restore_always_2_0(v_85, w_2, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
      t = term_d_8;
      y_26 = t;
      t = term_u_23;
      z_26 = t;
      t = term_h_25;
      t = v_6(y_26, z_26, t);
      x_26 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_26);
      LocalPopChoice(g_25);
    }
  else
    {
      t = f_25;
      t = term_l_8;
    }
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_27 = NULL,m_27 = NULL;
        m_27 = t;
        if(match_cons(t, sym_FILE_1))
          {
            j_27 = ATgetArgument(t, 0);
            {
              ATerm u_8 = NULL,p_1 = NULL;
              t = SSLgetAnnotations(m_27);
              u_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_27);
              p_1 = t;
              t = SSLsetAnnotations(p_1, u_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_27;
          }
        LocalPopChoice(j_25);
        t = xtc_transform_file_2_0(l_3, m_3, t);
      }
    else
      {
        t = i_25;
        t = xtc_transform_term_2_0(r_3, t_3, t);
      }
  }
  t = xtc_abox2text_1_0(pass_width_0_0, t);
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_l_25;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL;
  t = term_d_8;
  n_27 = t;
  t = term_n_25;
  o_27 = t;
  t = term_r_25;
  t = v_6(n_27, o_27, t);
  t = map_1_0(o_3, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm q_27 = NULL;
  q_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_27), term_n_25);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_l_25;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm r_27 = NULL,u_27 = NULL;
  t = term_d_8;
  r_27 = t;
  t = term_n_25;
  u_27 = t;
  t = term_r_25;
  t = v_6(r_27, u_27, t);
  t = map_1_0(x_3, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm v_27 = NULL;
  v_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_27), term_n_25);
  return(t);
}
ATerm ast2text_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(k_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
  x_27 = t;
  t = term_g_9;
  t = whoami_0_0(t);
  y_27 = t;
  t = term_a_18;
  a_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_25), y_27), term_s_25);
  b_28 = t;
  t = SSL_printnl(a_28, b_28);
  t = term_y_8;
  z_27 = t;
  t = SSL_exit(z_27);
  t = x_27;
  return(t);
}
ATerm at_end_1_0 (ATerm p_72 (ATerm), ATerm t)
{
  static ATerm a_29 (ATerm t)
  {
    ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
    z_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_28 = ATgetFirst((ATermList) t);
        y_28 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_9 = NULL,n_9 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(z_28);
          h_9 = t;
          t = y_28;
          t = a_29(t);
          n_9 = t;
          t = (ATerm) ATinsert(CheckATermList(n_9), x_28);
          v_1 = t;
          t = SSLsetAnnotations(v_1, h_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_28;
        t = p_72(t);
      }
    return(t);
  }
  t = a_29(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,h_28 = NULL;
  d_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_28;
    }
  else
    {
      static ATerm y_3 (ATerm t)
      {
        t = not_null(h_28);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_28 = ATgetFirst((ATermList) t);
          if(((h_28 != NULL) && (h_28 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_28;
      t = at_end_1_0(y_3, t);
    }
  return(t);
}
static ATerm v_29 (ATerm f_29, ATerm t)
{
  ATerm g_29 = NULL;
  t = SSL_explode_term(f_29);
  if(match_cons(t, sym__2))
    {
      ATerm u_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_29;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_29 = NULL,l_29 = NULL,m_29 = NULL;
  m_29 = t;
  if(match_cons(t, sym__2))
    {
      i_29 = ATgetArgument(t, 0);
      l_29 = ATgetArgument(t, 1);
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_4 (ATerm t)
            {
              t = l_29;
              return(t);
            }
            t = i_29;
            t = at_end_1_0(d_4, t);
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            t = v_29(m_29, t);
          }
      }
    }
  else
    {
      t = v_29(m_29, t);
    }
  return(t);
}
static ATerm r_6 (ATerm i_39, ATerm h_39, ATerm t)
{
  ATerm w_29 = NULL,y_29 = NULL,z_29 = NULL;
  t = i_39;
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_30 = NULL;
        t = term_d_8;
        a_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_8, i_39);
        t = v_6(a_30, i_39, t);
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        t = (ATerm) ATempty;
      }
  }
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_39, y_29);
  t = conc_0_0(t);
  w_29 = t;
  t = term_d_8;
  z_29 = t;
  t = SSL_table_put(z_29, i_39, w_29);
  t = (ATerm) ATmakeAppl(sym__3, term_d_8, i_39, w_29);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm b_30 = NULL,d_30 = NULL,e_30 = NULL;
  b_30 = t;
  t = term_n_25;
  d_30 = t;
  t = (ATerm) ATinsert(ATempty, b_30);
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_25, (ATerm) ATinsert(ATempty, b_30));
  t = r_6(d_30, e_30, t);
  t = b_30;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_4, g_4, j_4, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
      t = term_g_9;
      t = n_0(t);
      p_30 = t;
      t = term_b_26;
      q_30 = t;
      t = term_e_26;
      r_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_26, term_e_26, p_30);
      t = w_6(q_30, r_30, p_30, t);
      _fail(t);
    }
  else
    {
      ATerm v_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_30 = ATgetFirst((ATermList) t);
          l_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_30 = ATgetFirst((ATermList) t);
          n_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_30;
      t = k_0(t);
      t = m_30;
      t = l_0(t);
      v_30 = t;
      t = (ATerm) ATinsert(CheckATermList(n_30), v_30);
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm x_30 = NULL;
  x_30 = t;
  if(match_string(t, "-k"))
    {
      t = x_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_30;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,c_31 = NULL;
  y_30 = t;
  t = SSL_string_to_int(y_30);
  z_30 = t;
  t = term_h_26;
  c_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_26, z_30);
  t = y_6(c_31, z_30, t);
  t = y_30;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_i_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, m_4, n_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm g_31 = NULL;
  g_31 = t;
  if(match_string(t, "-S"))
    {
      t = g_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_31;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL;
  t = term_t_8;
  h_31 = t;
  t = term_j_26;
  i_31 = t;
  t = term_k_26;
  t = y_6(h_31, i_31, t);
  t = term_l_26;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_m_26;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm m_31 = NULL,p_31 = NULL,s_31 = NULL;
  m_31 = t;
  t = SSL_string_to_int(m_31);
  p_31 = t;
  t = term_t_8;
  s_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_8, p_31);
  t = y_6(s_31, p_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_31);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_n_26;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm t_31 = NULL,w_31 = NULL;
  t = term_o_26;
  t_31 = t;
  t = term_g_9;
  w_31 = t;
  t = term_p_26;
  t = y_6(t_31, w_31, t);
  t = term_r_26;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_s_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_4, u_4, x_4, t);
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
            t = ArgOption_3_0(z_4, b_5, d_5, t);
            LocalPopChoice(w_26);
          }
        else
          {
            t = v_26;
            t = Option_3_0(e_5, f_5, h_5, t);
          }
      }
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm z_31 = NULL;
  z_31 = t;
  if(match_string(t, "-o"))
    {
      t = z_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_31;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL;
  d_32 = t;
  t = term_f_8;
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_8, d_32);
  t = y_6(e_32, d_32, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_32);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_5, j_5, l_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm g_32 = NULL;
  g_32 = t;
  if(match_string(t, "-i"))
    {
      t = g_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_32;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL;
  j_32 = t;
  t = term_u_23;
  k_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_23, j_32);
  t = y_6(k_32, j_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_32);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_b_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, n_5, o_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm o_32 = NULL;
  o_32 = t;
  if(match_string(t, "-w"))
    {
      t = o_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = o_32;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm p_32 = NULL,t_32 = NULL;
  p_32 = t;
  t = term_p_8;
  t_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_8, p_32);
  t = y_6(t_32, p_32, t);
  t = p_32;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_c_27;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      {
        ATerm f_27 = t;
        int g_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(g_27);
          }
        else
          {
            t = f_27;
            {
              ATerm h_27 = t;
              int i_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(i_27);
                }
              else
                {
                  t = h_27;
                  {
                    ATerm k_27 = t;
                    int l_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(l_27);
                      }
                    else
                      {
                        t = k_27;
                        t = ArgOption_3_0(p_5, q_5, r_5, t);
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
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_9;
  t = whoami_0_0(t);
  x_32 = t;
  t = term_a_18;
  z_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_27), x_32);
  a_33 = t;
  t = SSL_printnl(z_32, a_33);
  t = term_y_8;
  y_32 = t;
  t = SSL_exit(y_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL;
  t = term_d_8;
  b_33 = t;
  t = term_s_27;
  c_33 = t;
  t = term_t_27;
  t = v_6(b_33, c_33, t);
  return(t);
}
static ATerm s_6 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm w_27 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(c_28);
    }
  else
    {
      t = w_27;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
  e_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_33;
      t = e_79(t);
    }
  else
    {
      ATerm j_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_33 = ATgetFirst((ATermList) t);
          g_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_33;
      t = foldr_2_0(e_79, f_79, t);
      j_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_33, j_33);
      t = f_79(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_j_26;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(e_10, f_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_33 = NULL,y_9 = NULL,b_10 = NULL;
  t = times_0_0(t);
  b_10 = t;
  t = SSL_explode_term(b_10);
  if(match_cons(t, sym__2))
    {
      ATerm f_28 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9;
  t = foldr_2_0(s_5, t_5, t);
  m_33 = t;
  t = SSL_TicksToSeconds(m_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
  b_34 = t;
  if(match_cons(t, sym__2))
    {
      c_34 = ATgetArgument(t, 0);
      d_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_34;
        if((c_34 != t))
          {
            _fail(t);
          }
        t = b_34;
        LocalPopChoice(i_28);
      }
    else
      {
        t = g_28;
        t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
        {
          ATerm j_28 = t;
          int k_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_34, d_34);
              LocalPopChoice(k_28);
            }
          else
            {
              t = j_28;
              t = SSL_gtr(c_34, d_34);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_98 (ATerm), ATerm t)
{
  ATerm h_34 = NULL;
  h_34 = t;
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
        t = term_d_8;
        k_34 = t;
        t = term_t_8;
        l_34 = t;
        t = term_x_8;
        t = v_6(k_34, l_34, t);
        j_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_34, term_y_8);
        t = geq_0_0(t);
        t = h_34;
        t = l_98(t);
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = h_34;
      }
  }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,q_34 = NULL,r_34 = NULL;
  t = run_time_0_0(t);
  n_34 = t;
  t = term_g_9;
  t = whoami_0_0(t);
  o_34 = t;
  t = term_a_18;
  q_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_28), n_34), term_v_9), o_34);
  r_34 = t;
  t = SSL_printnl(q_34, r_34);
  t = (ATerm) ATmakeAppl(sym__2, term_a_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_28), n_34), term_v_9), o_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_26;
  s_34 = t;
  t = SSL_exit(s_34);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL;
  o_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_35 = ATgetArgument(t, 0);
          {
            ATerm f_11 = NULL,x_1 = NULL;
            t = SSLgetAnnotations(o_35);
            f_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_35);
            x_1 = t;
            t = SSLsetAnnotations(x_1, f_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_34 = NULL,h_35 = NULL;
      t = term_d_8;
      v_34 = t;
      t = term_q_28;
      h_35 = t;
      t = term_r_28;
      t = v_6(v_34, h_35, t);
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      t = fetch_1_0(v_5, t);
    }
  t = r_87(t);
  return(t);
}
ATerm map_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  static ATerm e_36 (ATerm t)
  {
    ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
    b_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_36;
      }
    else
      {
        ATerm t_11 = NULL,x_11 = NULL,y_11 = NULL,a_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_36 = ATgetFirst((ATermList) t);
            d_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_36);
        t_11 = t;
        t = c_36;
        t = y_71(t);
        x_11 = t;
        t = d_36;
        t = e_36(t);
        y_11 = t;
        t = (ATerm) ATinsert(CheckATermList(y_11), x_11);
        a_2 = t;
        t = SSLsetAnnotations(a_2, t_11);
      }
    return(t);
  }
  t = e_36(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_36 = ATgetFirst((ATermList) t);
      i_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_36 = NULL,y_36 = NULL;
        static ATerm w_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_36)), not_null(y_36));
          return(t);
        }
        t = i_36;
        t = i_0(t);
        if(((u_36 != NULL) && (u_36 != t)))
          _fail(t);
        else
          u_36 = t;
        t = h_36;
        t = g_0(t);
        if(((y_36 != NULL) && (y_36 != t)))
          _fail(t);
        else
          y_36 = t;
        t = i_36;
        t = reverse_acc_2_0(g_0, w_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_9;
      t = i_0(t);
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,n_3 = NULL;
  g_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_37);
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_37);
  n_3 = t;
  t = SSLsetAnnotations(n_3, e_37);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm i_37 = NULL;
  i_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_37), term_s_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL;
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_37 = NULL,d_37 = NULL;
      t = term_d_8;
      c_37 = t;
      t = term_s_27;
      d_37 = t;
      t = term_t_27;
      t = v_6(c_37, d_37, t);
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      t = fetch_1_0(x_5, t);
    }
  t = term_v_28;
  t = echo_0_0(t);
  t = term_b_26;
  a_37 = t;
  t = term_e_26;
  b_37 = t;
  t = term_w_28;
  t = v_6(a_37, b_37, t);
  t = reverse_acc_2_0(_id, y_5, t);
  t = map_1_0(d_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_72 (ATerm), ATerm t)
{
  static ATerm q_38 (ATerm t)
  {
    ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
    n_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_38 = ATgetFirst((ATermList) t);
        p_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_29 = t;
      int c_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_12 = NULL,q_12 = NULL,p_3 = NULL;
          t = SSLgetAnnotations(n_38);
          n_12 = t;
          t = o_38;
          t = i_72(t);
          q_12 = t;
          t = (ATerm) ATinsert(CheckATermList(p_38), q_12);
          p_3 = t;
          t = SSLsetAnnotations(p_3, n_12);
          LocalPopChoice(c_29);
        }
      else
        {
          t = b_29;
          {
            ATerm e_13 = NULL,k_13 = NULL,q_3 = NULL;
            t = SSLgetAnnotations(n_38);
            e_13 = t;
            t = p_38;
            t = q_38(t);
            k_13 = t;
            t = (ATerm) ATinsert(CheckATermList(k_13), o_38);
            q_3 = t;
            t = SSLsetAnnotations(q_3, e_13);
          }
        }
    }
    return(t);
  }
  t = q_38(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
  u_38 = t;
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_38;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_29 = ATgetFirst((ATermList) t);
                ATerm j_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_38;
          }
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
        t = (ATerm) ATinsert(ATempty, u_38);
      }
  }
  v_38 = t;
  t = term_h_8;
  w_38 = t;
  t = SSL_printnl(w_38, v_38);
  t = u_38;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL;
  t = term_d_8;
  a_39 = t;
  t = term_s_27;
  b_39 = t;
  t = term_t_27;
  t = v_6(a_39, b_39, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_6 (ATerm i_38, ATerm j_38, ATerm t)
{
  t = SSL_table_get(i_38, j_38);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL;
  t = term_k_29;
  e_39 = t;
  t = term_g_9;
  f_39 = t;
  t = term_n_29;
  t = y_6(e_39, f_39, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_o_29;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm g_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
  t = term_k_29;
  k_39 = t;
  t = term_g_9;
  l_39 = t;
  t = term_n_29;
  t = y_6(k_39, l_39, t);
  t = term_p_29;
  g_39 = t;
  t = term_g_9;
  j_39 = t;
  t = term_q_29;
  t = y_6(g_39, j_39, t);
  t = term_r_29;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_6, x_6, b_7, t);
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      t = Option_3_0(c_7, f_7, h_7, t);
    }
  return(t);
}
static ATerm y_6 (ATerm c_39, ATerm d_39, ATerm t)
{
  ATerm m_39 = NULL;
  t = term_d_8;
  m_39 = t;
  t = SSL_table_put(m_39, c_39, d_39);
  t = (ATerm) ATmakeAppl(sym__3, term_d_8, c_39, d_39);
  return(t);
}
static ATerm w_6 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
  o_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm x_29 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_30 = ATgetArgument(t, 0);
            ATerm g_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = v_6(r_36, s_36, t);
        LocalPopChoice(c_30);
      }
    else
      {
        t = x_29;
        t = (ATerm) ATempty;
      }
  }
  p_39 = t;
  t = (ATerm) ATinsert(CheckATermList(p_39), q_36);
  q_39 = t;
  t = SSL_table_put(r_36, s_36, q_39);
  t = o_39;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_39 = NULL,z_39 = NULL,b_40 = NULL;
      t = term_g_9;
      t = e_0(t);
      y_39 = t;
      t = term_b_26;
      z_39 = t;
      t = term_e_26;
      b_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_26, term_e_26, y_39);
      t = w_6(z_39, b_40, y_39, t);
      _fail(t);
    }
  else
    {
      ATerm e_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_39 = ATgetFirst((ATermList) t);
          x_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_39;
      t = c_0(t);
      t = term_g_9;
      t = d_0(t);
      e_40 = t;
      t = (ATerm) ATinsert(CheckATermList(x_39), e_40);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_58 (ATerm), ATerm y_58 (ATerm), ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,c_5 = NULL;
  m_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_40 = ATgetFirst((ATermList) t);
      j_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_40);
  h_40 = t;
  t = i_40;
  t = x_58(t);
  k_40 = t;
  t = j_40;
  t = y_58(t);
  l_40 = t;
  t = (ATerm) ATinsert(CheckATermList(l_40), k_40);
  c_5 = t;
  t = SSLsetAnnotations(c_5, h_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_89 (ATerm), ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,a_41 = NULL,b_41 = NULL,g_5 = NULL;
  v_40 = t;
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_30;
        t = p_89(t);
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
      }
  }
  t = v_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_40 = ATgetFirst((ATermList) t);
      y_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_40);
  w_40 = t;
  t = term_s_27;
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_27, x_40);
  t = y_6(b_41, x_40, t);
  t = y_40;
  {
    static ATerm u_41 (ATerm t)
    {
      ATerm o_30 = t;
      int s_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_30 = t;
          int u_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_41 = NULL;
              h_41 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_41;
              LocalPopChoice(u_30);
            }
          else
            {
              t = t_30;
              t = p_89(t);
              t = Cons_2_0(_id, u_41, t);
            }
          LocalPopChoice(s_30);
        }
      else
        {
          t = o_30;
          {
            ATerm k_41 = NULL,l_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_41 = ATgetFirst((ATermList) t);
                l_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_41), (ATerm) ATmakeAppl(sym_Undefined_1, k_41));
          }
        }
      return(t);
    }
    t = u_41(t);
  }
  a_41 = t;
  t = (ATerm) ATinsert(CheckATermList(a_41), (ATerm) ATmakeAppl(sym_Program_1, x_40));
  g_5 = t;
  t = SSLsetAnnotations(g_5, w_40);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm k_42 = NULL;
  k_42 = t;
  if(match_string(t, "--help"))
    {
      t = k_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_42;
        }
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL;
  t = term_q_28;
  l_42 = t;
  t = term_g_9;
  m_42 = t;
  t = term_w_30;
  t = y_6(l_42, m_42, t);
  t = term_a_31;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_b_31;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_89 (ATerm), ATerm t)
{
  ATerm z_41 = NULL,c_42 = NULL,d_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL;
  d_42 = t;
  t = term_b_26;
  g_42 = t;
  t = term_e_26;
  h_42 = t;
  t = (ATerm) ATempty;
  i_42 = t;
  t = SSL_table_put(g_42, h_42, i_42);
  t = d_42;
  {
    static ATerm i_7 (ATerm t)
    {
      ATerm d_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_89(t);
          LocalPopChoice(e_31);
        }
      else
        {
          t = d_31;
          {
            ATerm f_31 = t;
            int j_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_7, k_7, p_7, t);
                LocalPopChoice(j_31);
              }
            else
              {
                t = f_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_7, t);
  }
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_42 = NULL;
        x_42 = t;
        {
          ATerm n_31 = t;
          int o_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_13 = NULL;
              t = x_42;
              {
                ATerm q_31 = t;
                int r_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_14 = NULL,k_14 = NULL;
                    t = term_d_8;
                    j_14 = t;
                    t = term_q_28;
                    k_14 = t;
                    t = term_r_28;
                    t = v_6(j_14, k_14, t);
                    LocalPopChoice(r_31);
                  }
                else
                  {
                    t = q_31;
                    t = fetch_1_0(q_7, t);
                  }
              }
              t = x_42;
              t = default_system_usage_0_0(t);
              t = term_j_26;
              t_13 = t;
              t = SSL_exit(t_13);
              LocalPopChoice(o_31);
            }
          else
            {
              t = n_31;
              {
                ATerm q_14 = NULL,t_14 = NULL,w_14 = NULL;
                t = term_d_8;
                t_14 = t;
                t = term_k_29;
                w_14 = t;
                t = term_u_31;
                t = v_6(t_14, w_14, t);
                t = x_42;
                t = default_system_about_0_0(t);
                t = term_j_26;
                q_14 = t;
                t = SSL_exit(q_14);
              }
            }
        }
        LocalPopChoice(l_31);
      }
    else
      {
        t = k_31;
        {
          ATerm v_31 = t;
          int x_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL;
              static ATerm r_7 (ATerm t)
              {
                ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,k_5 = NULL;
                d_43 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_43 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_43);
                b_43 = t;
                t = c_43;
                if(((z_41 != NULL) && (z_41 != t)))
                  _fail(t);
                else
                  z_41 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_43);
                k_5 = t;
                t = SSLsetAnnotations(k_5, b_43);
                return(t);
              }
              t = fetch_1_0(r_7, t);
              t = term_a_18;
              z_42 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_41)), term_y_31);
              a_43 = t;
              t = SSL_printnl(z_42, a_43);
              t = (ATerm) ATmakeAppl(sym__2, term_a_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_41)), term_y_31));
              t = default_system_usage_0_0(t);
              t = term_y_8;
              y_42 = t;
              t = SSL_exit(y_42);
              LocalPopChoice(x_31);
            }
          else
            {
              t = v_31;
            }
        }
      }
  }
  c_42 = t;
  t = term_b_26;
  f_42 = t;
  t = SSL_table_destroy(f_42);
  t = c_42;
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL;
  t = parse_options_1_0(t_87, t);
  n_43 = t;
  t = term_a_32;
  q_43 = t;
  t = SSL_table_create(q_43);
  t = term_a_32;
  o_43 = t;
  t = term_b_32;
  p_43 = t;
  t = SSL_table_put(o_43, p_43, n_43);
  t = n_43;
  t = v_87(t);
  {
    ATerm c_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_87, t);
        LocalPopChoice(f_32);
      }
    else
      {
        t = c_32;
        {
          ATerm h_32 = t;
          int i_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_87(t);
              t = report_success_0_0(t);
              LocalPopChoice(i_32);
            }
          else
            {
              t = h_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm n_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_options_0_0(t);
      LocalPopChoice(q_32);
    }
  else
    {
      t = n_32;
      t = pp_options_0_0(t);
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(s_7, default_usage_0_0, _id, ast2text_0_0, t);
  return(t);
}
