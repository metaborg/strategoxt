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
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_m_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_g_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_x_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_e_29;
ATerm term_x_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_k_28;
ATerm term_g_28;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_b_27;
ATerm term_h_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_n_25;
ATerm term_z_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_b_24;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_k_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_z_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_a_20;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_q_19;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_f_17;
ATerm term_z_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_q_8;
ATerm term_n_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_y_7;
ATerm term_v_7;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_q_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_r_7);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_8, term_q_8, term_v_8);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_8, term_a_9, term_b_9);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_9, term_g_9, term_k_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_9, term_n_9, term_o_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_9, term_v_9, term_w_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_10, term_e_10, term_g_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_j_10, term_l_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_o_10, term_p_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_w_10, term_b_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_f_11, term_k_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_11, term_q_11, term_t_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_z_11, term_a_12);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_h_12, term_j_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_q_12, term_r_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_v_12, term_z_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_e_13, term_i_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_q_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_w_13, term_x_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_e_14, term_f_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_m_14, term_n_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_v_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_z_14, term_a_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_h_15, term_i_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_b_16, term_c_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_c_18);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_q_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__2, term_h_21, term_w_21);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_h_21, term_j_21);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("visamb.pp.af", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.pp.af", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_q_17, term_f_17);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_c_18, term_j_24);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__2, term_s_24, term_t_17);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_c_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_f_27);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym__2, term_n_25, term_t_25);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym__2, term_g_28, term_t_17);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym__2, term_p_28, term_t_17);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym__2, term_f_27, term_t_17);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_g_28);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_d_31, term_t_17);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_w_17);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Vis-amb", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm f_6 (ATerm o_14, ATerm p_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm q_5 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm r_5 (ATerm e_67 (ATerm), ATerm b_169, ATerm y_17, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm t);
static ATerm s_5 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm g_72 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm t_65 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm t_86 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm l_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm p_9 (ATerm c_9, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm d_6 (ATerm i_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm c_67 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm v_83 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm u_83 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm w_83 (ATerm), ATerm t);
static ATerm v_5 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm w_5 (ATerm f_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm x_5 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm y_5 (ATerm y_83 (ATerm), ATerm y_37, ATerm x_37, ATerm t);
static ATerm c_6 (ATerm f_40, ATerm g_40, ATerm t);
static ATerm k_16 (ATerm a_16, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_5 (ATerm u_17, ATerm t);
static ATerm e_6 (ATerm l_32, ATerm m_32, ATerm t);
static ATerm a_6 (ATerm o_40, ATerm p_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm v_18 (ATerm g_17, ATerm t);
static ATerm x_18 (ATerm m_17, ATerm n_17, ATerm s_17, ATerm t);
static ATerm y_18 (ATerm i_18, ATerm j_18, ATerm k_18, ATerm t);
static ATerm b_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm e_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm m_24 (ATerm i_23, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm build_pp_tables_0_0 (ATerm t);
static ATerm k_6 (ATerm i_38, ATerm j_38, ATerm t);
static ATerm g_6 (ATerm w_36, ATerm x_36, ATerm t);
ATerm end_scope_1_0 (ATerm f_82 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm e_82 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm f_86 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm n_6 (ATerm c_39, ATerm d_39, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm l_6 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_6 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_83 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm need_help_1_0 (ATerm v_87 (ATerm), ATerm t);
ATerm map_1_0 (ATerm u_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm e_72 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_58 (ATerm), ATerm u_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_89 (ATerm), ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm parse_options_1_0 (ATerm s_89 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL;
  q_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_7 = t;
    int f_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = q_1;
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
        t = (ATerm) ATmakeAppl(sym__2, r_1, h_0);
        t = f_6(r_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_1);
        LocalPopChoice(f_7);
      }
    else
      {
        t = a_7;
        {
          ATerm h_7 = t;
          int j_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_0 = NULL;
              t = q_1;
              t = o_0(t);
              x_0 = t;
              {
                ATerm k_7 = t;
                if((PushChoice() == 0))
                  {
                    ATerm y_0 = NULL;
                    y_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = y_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = y_0;
                          }
                        else
                          {
                            t = y_0;
                            if((r_1 != t))
                              {
                                _fail(t);
                              }
                            t = y_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_7;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, r_1, x_0);
              t = f_6(r_1, x_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_1);
              LocalPopChoice(j_7);
            }
          else
            {
              t = h_7;
              t = q_1;
              t = o_0(t);
              if((r_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_1);
            }
        }
      }
  }
  return(t);
}
static ATerm f_6 (ATerm o_14, ATerm p_14, ATerm t)
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
      ATerm v_2 = NULL,w_2 = NULL;
      t = term_q_7;
      v_2 = t;
      t = term_r_7;
      w_2 = t;
      t = term_t_7;
      t = k_6(v_2, w_2, t);
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      t = term_v_7;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm q_2 = NULL;
  q_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm g_1 = NULL,k_1 = NULL;
      t = term_r_7;
      {
        ATerm w_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 = NULL,m_1 = NULL;
            t = term_q_7;
            l_1 = t;
            t = term_r_7;
            m_1 = t;
            t = term_t_7;
            t = k_6(l_1, m_1, t);
            LocalPopChoice(x_7);
          }
        else
          {
            t = w_7;
            t = term_v_7;
          }
      }
      g_1 = t;
      t = term_y_7;
      k_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_y_7, g_1);
      t = f_6(k_1, g_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm z_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm a_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_y_7;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm c_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_8);
      c_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_3, (ATerm) ATinsert(ATempty, term_a_8));
      t = c_6(a_3, c_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm q_5 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm d_3 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_3);
  return(t);
}
static ATerm r_5 (ATerm e_67 (ATerm), ATerm b_169, ATerm y_17, ATerm t)
{
  ATerm g_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_169, term_b_8);
  t = b_6(t);
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_3, y_17);
  t = e_67(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm m_3 = NULL,o_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if(match_cons(c_8, sym_Stream_1))
        {
          m_3 = ATgetArgument(c_8, 0);
        }
      else
        _fail(t);
      o_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(m_3, o_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm t)
{
  ATerm i_3 = NULL,l_3 = NULL;
  l_3 = t;
  t = xtc_new_file_0_0(t);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_3, l_3);
  t = r_5(b_0, i_3, l_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_3);
  t = xtc_transform_file_2_0(s_85, t_85, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm s_5 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm n_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
  n_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      p_4 = ATgetArgument(t, 0);
      {
        ATerm x_1 = NULL,y_1 = NULL;
        t = SSL_int_to_string(p_4);
        x_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_8), x_1), term_e_8);
        y_1 = t;
        t = SSL_concat_strings(y_1);
      }
    }
  else
    {
      ATerm j_2 = NULL,k_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          p_4 = ATgetArgument(t, 0);
          q_4 = ATgetArgument(t, 1);
          r_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(q_4);
      j_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_4), term_i_8), j_2), term_h_8), p_4);
      k_2 = t;
      t = SSL_concat_strings(k_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm g_72 (ATerm), ATerm t)
{
  ATerm x_4 = NULL;
  static ATerm f_0 (ATerm t)
  {
    t = g_72(t);
    if(((x_4 != NULL) && (x_4 != t)))
      _fail(t);
    else
      x_4 = t;
    return(t);
  }
  t = fetch_1_0(f_0, t);
  t = not_null(x_4);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  {
    ATerm j_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm l_8 = ATgetArgument(t, 0);
              if((y_4 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm m_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_16), term_y_15), term_u_15), term_q_15), term_k_15), term_e_15), term_w_14), term_r_14), term_i_14), term_c_14), term_y_13), term_s_13), term_j_13), term_a_13), term_t_12), term_l_12), term_c_12), term_x_11), term_m_11), term_c_11), term_s_10), term_m_10), term_h_10), term_z_9), term_s_9), term_l_9), term_e_9), term_w_8);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(k_8);
      }
    else
      {
        t = j_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, y_4);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm f_5 = NULL,o_6 = NULL;
  f_5 = t;
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_16 = ATgetArgument(t, 0);
            o_6 = ATgetArgument(t, 1);
            {
              ATerm j_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_16);
        {
          ATerm n_16 = t;
          int o_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_3 = NULL,h_3 = NULL,j_3 = NULL;
              t = o_6;
              {
                ATerm r_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_16;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              e_3 = t;
              t = term_s_16;
              h_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_3), term_t_16);
              j_3 = t;
              t = SSL_printnl(h_3, j_3);
              t = (ATerm) ATmakeAppl(sym__2, term_s_16, (ATerm) ATinsert(ATinsert(ATempty, e_3), term_t_16));
              LocalPopChoice(o_16);
            }
          else
            {
              t = n_16;
              t = f_5;
            }
        }
      }
    else
      {
        t = e_16;
        t = f_5;
      }
  }
  t = f_5;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm t_65 (ATerm), ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL;
  x_6 = t;
  t = fork_0_0(t);
  w_6 = t;
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = x_6;
        t = t_65(t);
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
        t = SSL_waitpid(w_6);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_16 = ATgetArgument(t, 0);
            if(((ATgetType(w_16) != AT_INT) || (ATgetInt((ATermInt) w_16) != 0)))
              _fail(t);
            {
              ATerm x_16 = ATgetArgument(t, 1);
            }
            {
              ATerm y_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_6;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL;
  d_7 = t;
  t = t_86(t);
  t = xtc_find_0_0(t);
  c_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_7, d_7);
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm g_7 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, c_7, d_7);
      t = s_5(c_7, d_7, t);
      t = term_z_16;
      g_7 = t;
      t = SSL_exit(g_7);
      return(t);
    }
    t = fork_and_wait_1_0(m_0, t);
  }
  t = d_7;
  return(t);
}
ATerm at_end_1_0 (ATerm l_72 (ATerm), ATerm t)
{
  static ATerm u_8 (ATerm t)
  {
    ATerm o_8 = NULL,p_8 = NULL,s_8 = NULL;
    s_8 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_8 = ATgetFirst((ATermList) t);
        p_8 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_3 = NULL,a_4 = NULL,v_0 = NULL;
          t = SSLgetAnnotations(s_8);
          r_3 = t;
          t = p_8;
          t = u_8(t);
          a_4 = t;
          t = (ATerm) ATinsert(CheckATermList(a_4), o_8);
          v_0 = t;
          t = SSLsetAnnotations(v_0, r_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_8;
        t = l_72(t);
      }
    return(t);
  }
  t = u_8(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_7 = NULL,l_7 = NULL,n_7 = NULL;
  i_7 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_7;
    }
  else
    {
      static ATerm q_0 (ATerm t)
      {
        t = not_null(n_7);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_7 = ATgetFirst((ATermList) t);
          if(((n_7 != NULL) && (n_7 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_7;
      t = at_end_1_0(q_0, t);
    }
  return(t);
}
static ATerm p_9 (ATerm c_9, ATerm t)
{
  ATerm d_9 = NULL;
  t = SSL_explode_term(c_9);
  if(match_cons(t, sym__2))
    {
      ATerm a_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_9;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
  j_9 = t;
  if(match_cons(t, sym__2))
    {
      h_9 = ATgetArgument(t, 0);
      i_9 = ATgetArgument(t, 1);
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_0 (ATerm t)
            {
              t = i_9;
              return(t);
            }
            t = h_9;
            t = at_end_1_0(s_0, t);
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            t = p_9(j_9, t);
          }
      }
    }
  else
    {
      t = p_9(j_9, t);
    }
  return(t);
}
static ATerm d_6 (ATerm i_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,u_9 = NULL,y_9 = NULL,b_10 = NULL,c_10 = NULL;
  y_9 = t;
  t = i_82(t);
  q_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_9, e_35, c_35);
  t = l_6(q_9, e_35, c_35, t);
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_10 = NULL;
        t = term_f_17;
        d_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_9, term_f_17);
        t = k_6(q_9, d_10, t);
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_9 = ATgetFirst((ATermList) t);
      u_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_f_17;
  b_10 = t;
  t = (ATerm) ATinsert(CheckATermList(u_9), (ATerm) ATinsert(CheckATermList(r_9), e_35));
  c_10 = t;
  t = SSL_table_put(q_9, b_10, c_10);
  t = y_9;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm f_10 = NULL;
  ATerm h_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_10 = NULL,v_4 = NULL;
      u_10 = t;
      t = term_k_17;
      v_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_10, term_k_17);
      t = e_6(u_10, v_4, t);
      f_10 = t;
      t = SSL_mkstemp(f_10);
      LocalPopChoice(j_17);
    }
  else
    {
      t = h_17;
      {
        ATerm v_10 = NULL;
        t = term_l_17;
        v_10 = t;
        t = SSL_perror(v_10);
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
  t = term_q_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,d_11 = NULL;
  t = P__tmpdir_0_0(t);
  a_11 = t;
  t = term_r_17;
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_11, term_r_17);
  t = e_6(a_11, d_11, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      y_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_t_17;
  z_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_10, term_t_17);
  t = d_6(t_0, y_10, z_10, t);
  t = SSL_close(x_10);
  t = y_10;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL;
  g_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_11 = NULL,j_11 = NULL;
      t = g_11;
      t = xtc_new_file_0_0(t);
      i_11 = t;
      t = r_0(t);
      j_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_11, (ATerm) ATinsert(ATinsert(ATempty, i_11), term_r_7));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_11);
    }
  else
    {
      ATerm n_11 = NULL,o_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          h_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_11;
      t = xtc_new_file_0_0(t);
      n_11 = t;
      t = r_0(t);
      o_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_11), term_r_7), h_11), term_w_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, n_11);
    }
  return(t);
}
ATerm debug_1_0 (ATerm c_67 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  r_11 = t;
  t = c_67(t);
  u_11 = t;
  t = term_s_16;
  v_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_11), u_11);
  w_11 = t;
  t = SSL_printnl(v_11, w_11);
  t = r_11;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm b_12 = NULL;
  static ATerm u_0 (ATerm t)
  {
    ATerm f_12 = NULL,g_12 = NULL;
    f_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_12), f_12);
    t = k_6(not_null(b_12), f_12, t);
    g_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_12, g_12);
    return(t);
  }
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  t = SSL_table_keys(b_12);
  t = map_1_0(u_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm i_12 = NULL;
  i_12 = t;
  {
    ATerm x_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
        t = term_q_7;
        o_12 = t;
        t = term_c_18;
        p_12 = t;
        t = term_d_18;
        t = k_6(o_12, p_12, t);
        n_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_12, term_o_15);
        t = geq_0_0(t);
        t = i_12;
        t = v_83(t);
        LocalPopChoice(z_17);
      }
    else
      {
        t = x_17;
        t = i_12;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  ATerm s_12 = NULL;
  s_12 = t;
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL;
        t = term_q_7;
        x_12 = t;
        t = term_c_18;
        y_12 = t;
        t = term_d_18;
        t = k_6(x_12, y_12, t);
        w_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_12, term_z_11);
        t = geq_0_0(t);
        t = s_12;
        t = u_83(t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        t = s_12;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm b_13 = NULL;
  b_13 = t;
  {
    ATerm h_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_13 = NULL,l_13 = NULL,n_13 = NULL;
        t = term_q_7;
        l_13 = t;
        t = term_c_18;
        n_13 = t;
        t = term_d_18;
        t = k_6(l_13, n_13, t);
        f_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_13, term_n_9);
        t = geq_0_0(t);
        t = b_13;
        t = w_83(t);
        LocalPopChoice(o_18);
      }
    else
      {
        t = h_18;
        t = b_13;
      }
  }
  return(t);
}
static ATerm v_5 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = j_76(t);
  {
    static ATerm w_0 (ATerm t)
    {
      ATerm u_13 = NULL;
      u_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, u_13);
      t = i_76(t);
      return(t);
    }
    t = fetch_1_0(w_0, t);
  }
  t = b_25;
  return(t);
}
static ATerm w_5 (ATerm f_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm y_14 (ATerm t)
  {
    ATerm j_14 = NULL,l_14 = NULL,u_14 = NULL;
    j_14 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_14 = ATgetFirst((ATermList) t);
            u_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_18 = t;
          int r_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_14;
              {
                static ATerm a_1 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = v_5(f_76, a_1, l_14, u_14, t);
              }
              t = y_14(t);
              LocalPopChoice(r_18);
            }
          else
            {
              t = p_18;
              {
                ATerm c_5 = NULL,h_5 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(j_14);
                c_5 = t;
                t = u_14;
                t = y_14(t);
                h_5 = t;
                t = (ATerm) ATinsert(CheckATermList(h_5), l_14);
                z_0 = t;
                t = SSLsetAnnotations(z_0, c_5);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = y_14(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm j_15 = NULL;
  if(match_cons(t, sym__2))
    {
      j_15 = ATgetArgument(t, 0);
      if((j_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  {
    ATerm w_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_19 = ATgetArgument(t, 0);
            ATerm e_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = k_6(o_37, p_37, t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = w_18;
        t = (ATerm) ATempty;
      }
  }
  d_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_15, q_37);
  t = w_5(b_1, d_15, q_37, t);
  c_15 = t;
  t = SSL_table_put(o_37, p_37, c_15);
  t = b_15;
  return(t);
}
static ATerm y_5 (ATerm y_83 (ATerm), ATerm y_37, ATerm x_37, ATerm t)
{
  static ATerm d_1 (ATerm t)
  {
    ATerm l_15 = NULL,m_15 = NULL;
    if(match_cons(t, sym__2))
      {
        l_15 = ATgetArgument(t, 0);
        m_15 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_37, l_15, m_15);
    t = y_83(t);
    return(t);
  }
  t = x_37;
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm c_6 (ATerm f_40, ATerm g_40, ATerm t)
{
  t = SSL_access(f_40, g_40);
  return(t);
}
static ATerm k_16 (ATerm a_16, ATerm t)
{
  t = SSL_fclose(a_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL;
  i_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_16 = ATgetArgument(t, 0);
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_16);
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
            t = k_16(i_16, t);
          }
      }
    }
  else
    {
      t = k_16(i_16, t);
    }
  return(t);
}
static ATerm z_5 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm e_6 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = SSL_strcat(l_32, m_32);
  return(t);
}
static ATerm a_6 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm l_16 = NULL;
  t = SSL_fopen(o_40, p_40);
  l_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_16);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_16 = NULL;
  t = SSL_stdin_stream();
  m_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_16);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_16 = NULL;
  t = SSL_stdout_stream();
  p_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_16);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_16 = NULL;
  t = SSL_stderr_stream();
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_16);
  return(t);
}
static ATerm v_18 (ATerm g_17, ATerm t)
{
  ATerm i_17 = NULL;
  t = SSL_explode_term(g_17);
  if(match_cons(t, sym__2))
    {
      ATerm h_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_19 = ATgetArgument(t, 1);
        if(((ATgetType(i_19) == AT_LIST) && !(ATisEmpty(i_19))))
          {
            i_17 = ATgetFirst((ATermList) i_19);
            {
              ATerm j_19 = (ATerm) ATgetNext((ATermList) i_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_17;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_17;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_17;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_17;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_18 (ATerm m_17, ATerm n_17, ATerm s_17, ATerm t)
{
  ATerm v_17 = NULL,a_18 = NULL,b_18 = NULL,e_18 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(s_17);
  b_18 = t;
  t = m_17;
  if(match_cons(t, sym_Path_1))
    {
      e_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_18, n_17);
  c_1 = t;
  t = SSLsetAnnotations(c_1, b_18);
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(v_17, a_18, t);
  return(t);
}
static ATerm y_18 (ATerm i_18, ATerm j_18, ATerm k_18, ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,q_18 = NULL,e_1 = NULL;
  t = SSLgetAnnotations(k_18);
  n_18 = t;
  t = SSL_is_string(i_18);
  q_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_18, j_18);
  e_1 = t;
  t = SSLsetAnnotations(e_1, n_18);
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
static ATerm b_6 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  s_18 = t;
  if(match_cons(t, sym__2))
    {
      t_18 = ATgetArgument(t, 0);
      u_18 = ATgetArgument(t, 1);
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_18(s_18, t);
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            {
              ATerm m_19 = t;
              int n_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_18(t_18, u_18, s_18, t);
                  LocalPopChoice(n_19);
                }
              else
                {
                  t = m_19;
                  t = y_18(t_18, u_18, s_18, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_18(s_18, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,r_19 = NULL;
  r_19 = t;
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_19, term_q_19);
        t = b_6(t);
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        {
          ATerm b_7 = NULL,e_7 = NULL;
          t = term_s_19;
          e_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_19, r_19);
          t = e_6(e_7, r_19, t);
          b_7 = t;
          t = SSL_perror(b_7);
          _fail(t);
        }
      }
  }
  b_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(c_19, t);
  a_19 = t;
  t = b_19;
  t = fclose_0_0(t);
  t = a_19;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm v_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_19 = NULL,x_19 = NULL;
      w_19 = t;
      t = (ATerm) ATinsert(ATempty, term_a_20);
      x_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_19, (ATerm) ATinsert(ATempty, term_a_20));
      t = c_6(w_19, x_19, t);
      LocalPopChoice(y_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = v_19;
      {
        ATerm d_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_20 = t;
            if((PushChoice() == 0))
              {
                ATerm z_19 = NULL,b_20 = NULL;
                z_19 = t;
                t = (ATerm) ATinsert(ATempty, term_a_8);
                b_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_19, (ATerm) ATinsert(ATempty, term_a_8));
                t = c_6(z_19, b_20, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_20;
              }
            t = debug_1_0(f_1, t);
            LocalPopChoice(e_20);
          }
        else
          {
            t = d_20;
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
  t = term_o_20;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_p_20;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  v_20 = t;
  t = term_s_16;
  w_20 = t;
  t = (ATerm) ATinsert(ATempty, term_t_20);
  x_20 = t;
  t = SSL_printnl(w_20, x_20);
  t = v_20;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
  if(match_cons(t, sym__3))
    {
      y_20 = ATgetArgument(t, 0);
      z_20 = ATgetArgument(t, 1);
      a_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_5(y_20, z_20, a_21, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  b_21 = t;
  t = term_s_16;
  c_21 = t;
  t = (ATerm) ATinsert(ATempty, term_u_20);
  d_21 = t;
  t = SSL_printnl(c_21, d_21);
  t = b_21;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm e_21 = NULL,g_21 = NULL,i_21 = NULL;
  e_21 = t;
  t = term_s_16;
  g_21 = t;
  t = (ATerm) ATinsert(ATempty, term_t_20);
  i_21 = t;
  t = SSL_printnl(g_21, i_21);
  t = e_21;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,q_20 = NULL;
  c_20 = t;
  t = if_verbose5_1_0(i_1, t);
  {
    ATerm f_21 = t;
    if((PushChoice() == 0))
      {
        ATerm r_20 = NULL,s_20 = NULL;
        t = term_h_21;
        r_20 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_20);
        s_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATmakeAppl(sym_Imported_1, c_20));
        t = k_6(r_20, s_20, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_21;
      }
  }
  g_20 = t;
  t = term_h_21;
  l_20 = t;
  t = term_j_21;
  m_20 = t;
  t = (ATerm) ATinsert(ATempty, c_20);
  q_20 = t;
  t = SSL_table_put(l_20, m_20, q_20);
  t = g_20;
  t = if_verbose4_1_0(o_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(s_1, t);
  f_20 = t;
  t = term_h_21;
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_21, f_20);
  t = y_5(u_1, k_20, f_20, t);
  t = if_verbose6_1_0(v_1, t);
  t = term_h_21;
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, c_20);
  i_20 = t;
  t = (ATerm) ATempty;
  j_20 = t;
  t = SSL_table_put(h_20, i_20, j_20);
  t = (ATerm) ATmakeAppl(sym__3, term_h_21, (ATerm)ATmakeAppl(sym_Imported_1, c_20), (ATerm) ATempty);
  t = if_verbose4_1_0(w_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm a_22 = NULL,c_22 = NULL,f_22 = NULL;
  a_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_22;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_22 = ATgetFirst((ATermList) t);
          f_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_7 = NULL,s_7 = NULL,u_7 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(a_22);
            m_7 = t;
            t = c_22;
            t = e_80(t);
            s_7 = t;
            t = f_22;
            t = filter_1_0(e_80, t);
            u_7 = t;
            t = (ATerm) ATinsert(CheckATermList(u_7), s_7);
            j_1 = t;
            t = SSLsetAnnotations(j_1, m_7);
            LocalPopChoice(l_21);
          }
        else
          {
            t = k_21;
            t = f_22;
            t = filter_1_0(e_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm t)
{
  static ATerm m_22 (ATerm t)
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_69(t);
        t = m_22(t);
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        t = a_70(t);
      }
    return(t);
  }
  t = m_22(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_22 = NULL,p_22 = NULL;
      t = term_q_7;
      n_22 = t;
      t = term_q_21;
      p_22 = t;
      t = term_r_21;
      t = k_6(n_22, p_22, t);
      LocalPopChoice(p_21);
    }
  else
    {
      t = o_21;
      {
        ATerm s_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_22 = NULL;
            t = term_u_21;
            q_22 = t;
            t = SSL_getenv(q_22);
            LocalPopChoice(t_21);
          }
        else
          {
            t = s_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = debug_1_0(a_2, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_v_21;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL;
  t = term_h_21;
  z_22 = t;
  t = term_w_21;
  a_23 = t;
  t = term_x_21;
  t = k_6(z_22, a_23, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm y_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_21;
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
  t = term_z_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_22 = NULL;
  t = if_verbose5_1_0(z_1, t);
  v_22 = t;
  {
    ATerm b_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_22 = NULL,x_22 = NULL;
        t = term_h_21;
        w_22 = t;
        t = term_j_21;
        x_22 = t;
        t = term_e_22;
        t = k_6(w_22, x_22, t);
        LocalPopChoice(d_22);
      }
    else
      {
        t = b_22;
        {
          ATerm y_22 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          y_22 = t;
          t = repeat_2_0(b_2, _id, t);
          t = y_22;
        }
      }
  }
  t = v_22;
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
  t = term_g_22;
  return(t);
}
static ATerm m_24 (ATerm i_23, ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,p_23 = NULL;
  t = term_h_21;
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, i_23);
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATmakeAppl(sym_Tool_1, i_23));
  t = k_6(n_23, p_23, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_22 = ATgetFirst((ATermList) t);
      if(match_cons(h_22, sym__2))
        {
          ATerm j_22 = ATgetArgument(h_22, 0);
          m_23 = ATgetArgument(h_22, 1);
        }
      else
        _fail(t);
      {
        ATerm i_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_23;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_g_22;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_h_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm l_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_23 = NULL,w_23 = NULL,x_23 = NULL;
      t = if_verbose5_1_0(f_2, t);
      t = xtc_load_0_0(t);
      x_23 = t;
      if(match_cons(t, sym__2))
        {
          q_23 = ATgetArgument(t, 0);
          w_23 = ATgetArgument(t, 1);
          {
            ATerm r_22 = t;
            int s_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_24 = NULL,d_24 = NULL,e_24 = NULL;
                t = term_h_21;
                d_24 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, q_23);
                e_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATmakeAppl(sym_Tool_1, q_23));
                t = k_6(d_24, e_24, t);
                {
                  static ATerm h_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((w_23 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((a_24 != NULL) && (a_24 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          a_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(h_2, t);
                }
                t = not_null(a_24);
                LocalPopChoice(s_22);
              }
            else
              {
                t = r_22;
                t = m_24(x_23, t);
              }
          }
        }
      else
        {
          t = m_24(x_23, t);
        }
      t = if_verbose5_1_0(i_2, t);
      LocalPopChoice(o_22);
    }
  else
    {
      t = l_22;
      {
        ATerm l_24 = NULL,d_8 = NULL,g_8 = NULL;
        l_24 = t;
        t = term_s_16;
        d_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_22), l_24), term_t_22);
        g_8 = t;
        t = SSL_printnl(d_8, g_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_22), l_24), term_t_22);
        t = if_verbose5_1_0(m_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm build_pp_tables_0_0 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL;
  t = term_b_23;
  t = xtc_find_0_0(t);
  q_24 = t;
  t = term_c_23;
  t = xtc_find_0_0(t);
  r_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_24), term_d_23), q_24), term_d_23);
  return(t);
}
static ATerm k_6 (ATerm i_38, ATerm j_38, ATerm t)
{
  t = SSL_table_get(i_38, j_38);
  return(t);
}
static ATerm g_6 (ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL;
  w_24 = t;
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = k_6(w_36, x_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_23 = ATgetFirst((ATermList) t);
            v_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_23);
        t = SSL_table_put(w_36, x_36, v_24);
        t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, v_24);
      }
    else
      {
        t = e_23;
        t = SSL_table_remove(w_36, x_36);
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
      }
  }
  t = w_24;
  return(t);
}
ATerm end_scope_1_0 (ATerm f_82 (ATerm), ATerm t)
{
  ATerm a_25 = NULL,e_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
  j_25 = t;
  t = f_82(t);
  i_25 = t;
  {
    ATerm h_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_25 = NULL;
        t = term_f_17;
        l_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_25, term_f_17);
        t = k_6(i_25, l_25, t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = h_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_25 = ATgetFirst((ATermList) t);
      a_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_f_17;
  k_25 = t;
  t = SSL_table_put(i_25, k_25, a_25);
  t = e_25;
  {
    static ATerm r_2 (ATerm t)
    {
      ATerm m_25 = NULL;
      m_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_25, m_25);
      t = g_6(i_25, m_25, t);
      return(t);
    }
    t = map_1_0(r_2, t);
  }
  t = j_25;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm t)
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_83(t);
      t = g_83(t);
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      t = g_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_82 (ATerm), ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL;
  p_25 = t;
  t = e_82(t);
  o_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_25, term_f_17);
  {
    ATerm o_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm s_23 = ATgetArgument(t, 0);
            ATerm t_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_17;
        y_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_25, term_f_17);
        t = k_6(o_25, y_25, t);
        LocalPopChoice(r_23);
      }
    else
      {
        t = o_23;
        t = (ATerm) ATempty;
      }
  }
  q_25 = t;
  t = term_f_17;
  r_25 = t;
  t = (ATerm) ATinsert(CheckATermList(q_25), (ATerm) ATempty);
  s_25 = t;
  t = SSL_table_put(o_25, r_25, s_25);
  t = p_25;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_q_17;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm l_26 = NULL;
  l_26 = t;
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(l_26);
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = l_26;
      }
  }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_q_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm f_86 (ATerm), ATerm t)
{
  ATerm d_26 = NULL;
  static ATerm t_2 (ATerm t)
  {
    ATerm e_26 = NULL;
    e_26 = t;
    {
      ATerm y_23 = t;
      int z_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_26 = NULL,g_26 = NULL;
          t = term_q_17;
          f_26 = t;
          t = term_f_17;
          g_26 = t;
          t = term_b_24;
          t = k_6(f_26, g_26, t);
          LocalPopChoice(z_23);
        }
      else
        {
          t = y_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_26 != NULL) && (d_26 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_26 = ATgetFirst((ATermList) t);
        {
          ATerm c_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = d_26;
    t = map_1_0(u_2, t);
    t = e_26;
    t = end_scope_1_0(y_2, t);
    return(t);
  }
  t = begin_scope_1_0(s_2, t);
  t = restore_always_2_0(f_86, t_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,t_26 = NULL;
  o_26 = t;
  t = term_t_17;
  t = whoami_0_0(t);
  p_26 = t;
  t = term_s_16;
  r_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_24), p_26), term_f_24);
  t_26 = t;
  t = SSL_printnl(r_26, t_26);
  t = term_q_8;
  q_26 = t;
  t = SSL_exit(q_26);
  t = o_26;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm v_26 = NULL;
  v_26 = t;
  if(match_string(t, "-k"))
    {
      t = v_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_26;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  w_26 = t;
  t = SSL_string_to_int(w_26);
  x_26 = t;
  t = term_h_24;
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_24, x_26);
  t = n_6(y_26, x_26, t);
  t = w_26;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_i_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, b_3, f_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm c_27 = NULL;
  c_27 = t;
  if(match_string(t, "-S"))
    {
      t = c_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_27;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  t = term_c_18;
  j_27 = t;
  t = term_j_24;
  k_27 = t;
  t = term_k_24;
  t = n_6(j_27, k_27, t);
  t = term_n_24;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_o_24;
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
  ATerm l_27 = NULL,m_27 = NULL,o_27 = NULL;
  l_27 = t;
  t = SSL_string_to_int(l_27);
  m_27 = t;
  t = term_c_18;
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_18, m_27);
  t = n_6(o_27, m_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_27);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_p_24;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL;
  t = term_s_24;
  p_27 = t;
  t = term_t_17;
  q_27 = t;
  t = term_t_24;
  t = n_6(p_27, q_27, t);
  t = term_u_24;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_3, n_3, p_3, t);
      LocalPopChoice(f_25);
    }
  else
    {
      t = d_25;
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_3, s_3, t_3, t);
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            t = Option_3_0(u_3, v_3, x_3, t);
          }
      }
    }
  return(t);
}
static ATerm n_6 (ATerm c_39, ATerm d_39, ATerm t)
{
  ATerm r_27 = NULL;
  t = term_q_7;
  r_27 = t;
  t = SSL_table_put(r_27, c_39, d_39);
  t = (ATerm) ATmakeAppl(sym__3, term_q_7, c_39, d_39);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
      t = term_t_17;
      t = e_0(t);
      z_27 = t;
      t = term_n_25;
      a_28 = t;
      t = term_t_25;
      b_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_25, term_t_25, z_27);
      t = l_6(a_28, b_28, z_27, t);
      _fail(t);
    }
  else
    {
      ATerm f_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_27 = ATgetFirst((ATermList) t);
          y_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_27;
      t = c_0(t);
      t = term_t_17;
      t = d_0(t);
      f_28 = t;
      t = (ATerm) ATinsert(CheckATermList(y_27), f_28);
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm h_28 = NULL;
  h_28 = t;
  if(match_string(t, "-o"))
    {
      t = h_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_28;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL;
  i_28 = t;
  t = term_r_7;
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, i_28);
  t = n_6(j_28, i_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_28);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, c_4, d_4, t);
  return(t);
}
static ATerm l_6 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_25 = ATgetArgument(t, 0);
            ATerm z_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = k_6(r_36, s_36, t);
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        t = (ATerm) ATempty;
      }
  }
  m_28 = t;
  t = (ATerm) ATinsert(CheckATermList(m_28), q_36);
  n_28 = t;
  t = SSL_table_put(r_36, s_36, n_28);
  t = l_28;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm y_28 = NULL,c_29 = NULL,f_29 = NULL,i_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_29 = NULL,m_29 = NULL,o_29 = NULL;
      t = term_t_17;
      t = n_0(t);
      j_29 = t;
      t = term_n_25;
      m_29 = t;
      t = term_t_25;
      o_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_25, term_t_25, j_29);
      t = l_6(m_29, o_29, j_29, t);
      _fail(t);
    }
  else
    {
      ATerm v_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_28 = ATgetFirst((ATermList) t);
          c_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_29 = ATgetFirst((ATermList) t);
          i_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_28;
      t = k_0(t);
      t = f_29;
      t = l_0(t);
      v_29 = t;
      t = (ATerm) ATinsert(CheckATermList(i_29), v_29);
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  if(match_string(t, "-i"))
    {
      t = z_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_29;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  a_30 = t;
  t = term_w_17;
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_17, a_30);
  t = n_6(b_30, a_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_30);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, j_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_17;
  t = whoami_0_0(t);
  f_30 = t;
  t = term_s_16;
  k_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_26), f_30);
  l_30 = t;
  t = SSL_printnl(k_30, l_30);
  t = term_q_8;
  j_30 = t;
  t = SSL_exit(j_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL;
  t = term_q_7;
  m_30 = t;
  t = term_c_26;
  n_30 = t;
  t = term_h_26;
  t = k_6(m_30, n_30, t);
  return(t);
}
static ATerm h_6 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
  p_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_30;
      t = a_79(t);
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
      t = foldr_2_0(a_79, b_79, t);
      u_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_30, u_30);
      t = b_79(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_j_24;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL;
  if(match_cons(t, sym__2))
    {
      y_8 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(y_8, z_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_30 = NULL,r_8 = NULL,t_8 = NULL;
  t = times_0_0(t);
  t_8 = t;
  t = SSL_explode_term(t_8);
  if(match_cons(t, sym__2))
    {
      ATerm k_26 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8;
  t = foldr_2_0(k_4, l_4, t);
  x_30 = t;
  t = SSL_TicksToSeconds(x_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL;
  i_31 = t;
  if(match_cons(t, sym__2))
    {
      j_31 = ATgetArgument(t, 0);
      k_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_31;
        if((j_31 != t))
          {
            _fail(t);
          }
        t = i_31;
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        t = (ATerm) ATmakeAppl(sym__2, j_31, k_31);
        {
          ATerm s_26 = t;
          int u_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_31, k_31);
              LocalPopChoice(u_26);
            }
          else
            {
              t = s_26;
              t = SSL_gtr(j_31, k_31);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_31, k_31);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm o_31 = NULL;
  o_31 = t;
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
        t = term_q_7;
        r_31 = t;
        t = term_c_18;
        s_31 = t;
        t = term_d_18;
        t = k_6(r_31, s_31, t);
        q_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_31, term_q_8);
        t = geq_0_0(t);
        t = o_31;
        t = r_83(t);
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        t = o_31;
      }
  }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,x_31 = NULL,y_31 = NULL;
  t = run_time_0_0(t);
  u_31 = t;
  t = term_t_17;
  t = whoami_0_0(t);
  v_31 = t;
  t = term_s_16;
  x_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_27), u_31), term_h_8), v_31);
  y_31 = t;
  t = SSL_printnl(x_31, y_31);
  t = (ATerm) ATmakeAppl(sym__2, term_s_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_27), u_31), term_h_8), v_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_24;
  z_31 = t;
  t = SSL_exit(z_31);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm j_32 = NULL,n_32 = NULL;
  n_32 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_32;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_32 = ATgetArgument(t, 0);
          {
            ATerm x_9 = NULL,t_1 = NULL;
            t = SSLgetAnnotations(n_32);
            x_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_32);
            t_1 = t;
            t = SSLsetAnnotations(t_1, x_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_32;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_32 = NULL,d_32 = NULL;
      t = term_q_7;
      c_32 = t;
      t = term_f_27;
      d_32 = t;
      t = term_g_27;
      t = k_6(c_32, d_32, t);
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      t = fetch_1_0(o_4, t);
    }
  t = v_87(t);
  return(t);
}
ATerm map_1_0 (ATerm u_71 (ATerm), ATerm t)
{
  static ATerm h_33 (ATerm t)
  {
    ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
    e_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_33;
      }
    else
      {
        ATerm k_10 = NULL,q_10 = NULL,r_10 = NULL,c_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_33 = ATgetFirst((ATermList) t);
            g_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_33);
        k_10 = t;
        t = f_33;
        t = u_71(t);
        q_10 = t;
        t = g_33;
        t = h_33(t);
        r_10 = t;
        t = (ATerm) ATinsert(CheckATermList(r_10), q_10);
        c_2 = t;
        t = SSLsetAnnotations(c_2, k_10);
      }
    return(t);
  }
  t = h_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_33 = ATgetFirst((ATermList) t);
      l_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_33 = NULL,s_33 = NULL;
        static ATerm s_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_33)), not_null(s_33));
          return(t);
        }
        t = l_33;
        t = i_0(t);
        if(((p_33 != NULL) && (p_33 != t)))
          _fail(t);
        else
          p_33 = t;
        t = k_33;
        t = g_0(t);
        if(((s_33 != NULL) && (s_33 != t)))
          _fail(t);
        else
          s_33 = t;
        t = l_33;
        t = reverse_acc_2_0(g_0, s_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_17;
      t = i_0(t);
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,n_2 = NULL;
  a_34 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_34);
  y_33 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_33);
  n_2 = t;
  t = SSLsetAnnotations(n_2, y_33);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm c_34 = NULL;
  c_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_34), term_h_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL;
  ATerm i_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_33 = NULL,x_33 = NULL;
      t = term_q_7;
      w_33 = t;
      t = term_c_26;
      x_33 = t;
      t = term_h_26;
      t = k_6(w_33, x_33, t);
      LocalPopChoice(n_27);
    }
  else
    {
      t = i_27;
      t = fetch_1_0(t_4, t);
    }
  t = term_s_27;
  t = echo_0_0(t);
  t = term_n_25;
  u_33 = t;
  t = term_t_25;
  v_33 = t;
  t = term_t_27;
  t = k_6(u_33, v_33, t);
  t = reverse_acc_2_0(_id, u_4, t);
  t = map_1_0(w_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm e_72 (ATerm), ATerm t)
{
  static ATerm k_35 (ATerm t)
  {
    ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
    h_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_35 = ATgetFirst((ATermList) t);
        j_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_27 = t;
      int v_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_11 = NULL,s_11 = NULL,p_2 = NULL;
          t = SSLgetAnnotations(h_35);
          l_11 = t;
          t = i_35;
          t = e_72(t);
          s_11 = t;
          t = (ATerm) ATinsert(CheckATermList(j_35), s_11);
          p_2 = t;
          t = SSLsetAnnotations(p_2, l_11);
          LocalPopChoice(v_27);
        }
      else
        {
          t = u_27;
          {
            ATerm e_12 = NULL,k_12 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(h_35);
            e_12 = t;
            t = j_35;
            t = k_35(t);
            k_12 = t;
            t = (ATerm) ATinsert(CheckATermList(k_12), i_35);
            x_2 = t;
            t = SSLsetAnnotations(x_2, e_12);
          }
        }
    }
    return(t);
  }
  t = k_35(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
  o_35 = t;
  {
    ATerm w_27 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_28 = ATgetFirst((ATermList) t);
                ATerm e_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_35;
          }
        LocalPopChoice(c_28);
      }
    else
      {
        t = w_27;
        t = (ATerm) ATinsert(ATempty, o_35);
      }
  }
  p_35 = t;
  t = term_v_7;
  q_35 = t;
  t = SSL_printnl(q_35, p_35);
  t = o_35;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL;
  t = term_q_7;
  u_35 = t;
  t = term_c_26;
  v_35 = t;
  t = term_h_26;
  t = k_6(u_35, v_35, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL;
  t = term_g_28;
  w_35 = t;
  t = term_t_17;
  x_35 = t;
  t = term_k_28;
  t = n_6(w_35, x_35, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_o_28;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
  t = term_g_28;
  a_36 = t;
  t = term_t_17;
  b_36 = t;
  t = term_k_28;
  t = n_6(a_36, b_36, t);
  t = term_p_28;
  y_35 = t;
  t = term_t_17;
  z_35 = t;
  t = term_q_28;
  t = n_6(y_35, z_35, t);
  t = term_r_28;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_s_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_4, a_5, b_5, t);
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      t = Option_3_0(d_5, e_5, g_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_58 (ATerm), ATerm u_58 (ATerm), ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,w_3 = NULL;
  h_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_36 = ATgetFirst((ATermList) t);
      e_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_36);
  c_36 = t;
  t = d_36;
  t = t_58(t);
  f_36 = t;
  t = e_36;
  t = u_58(t);
  g_36 = t;
  t = (ATerm) ATinsert(CheckATermList(g_36), f_36);
  w_3 = t;
  t = SSLsetAnnotations(w_3, c_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm u_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,c_37 = NULL,d_37 = NULL,y_3 = NULL;
  u_36 = t;
  {
    ATerm v_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_28;
        t = t_89(t);
        LocalPopChoice(w_28);
      }
    else
      {
        t = v_28;
      }
  }
  t = u_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_36 = ATgetFirst((ATermList) t);
      a_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_36);
  y_36 = t;
  t = term_c_26;
  d_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_26, z_36);
  t = n_6(d_37, z_36, t);
  t = a_37;
  {
    static ATerm n_37 (ATerm t)
    {
      ATerm z_28 = t;
      int a_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_29 = t;
          int d_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_37 = NULL;
              g_37 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_37;
              LocalPopChoice(d_29);
            }
          else
            {
              t = b_29;
              t = t_89(t);
              t = Cons_2_0(_id, n_37, t);
            }
          LocalPopChoice(a_29);
        }
      else
        {
          t = z_28;
          {
            ATerm j_37 = NULL,k_37 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_37 = ATgetFirst((ATermList) t);
                k_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_37), (ATerm) ATmakeAppl(sym_Undefined_1, j_37));
          }
        }
      return(t);
    }
    t = n_37(t);
  }
  c_37 = t;
  t = (ATerm) ATinsert(CheckATermList(c_37), (ATerm) ATmakeAppl(sym_Program_1, z_36));
  y_3 = t;
  t = SSLsetAnnotations(y_3, y_36);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm k_38 = NULL;
  k_38 = t;
  if(match_string(t, "--help"))
    {
      t = k_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_38;
        }
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL;
  t = term_f_27;
  l_38 = t;
  t = term_t_17;
  m_38 = t;
  t = term_e_29;
  t = n_6(l_38, m_38, t);
  t = term_g_29;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_h_29;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
  d_38 = t;
  t = term_n_25;
  f_38 = t;
  t = term_t_25;
  g_38 = t;
  t = (ATerm) ATempty;
  h_38 = t;
  t = SSL_table_put(f_38, g_38, h_38);
  t = d_38;
  {
    static ATerm i_5 (ATerm t)
    {
      ATerm k_29 = t;
      int l_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_89(t);
          LocalPopChoice(l_29);
        }
      else
        {
          t = k_29;
          {
            ATerm n_29 = t;
            int p_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_5, k_5, l_5, t);
                LocalPopChoice(p_29);
              }
            else
              {
                t = n_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_5, t);
  }
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_38 = NULL;
        x_38 = t;
        {
          ATerm s_29 = t;
          int t_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_13 = NULL;
              t = x_38;
              {
                ATerm u_29 = t;
                int w_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_13 = NULL,h_13 = NULL;
                    t = term_q_7;
                    g_13 = t;
                    t = term_f_27;
                    h_13 = t;
                    t = term_g_27;
                    t = k_6(g_13, h_13, t);
                    LocalPopChoice(w_29);
                  }
                else
                  {
                    t = u_29;
                    t = fetch_1_0(m_5, t);
                  }
              }
              t = x_38;
              t = default_system_usage_0_0(t);
              t = term_j_24;
              d_13 = t;
              t = SSL_exit(d_13);
              LocalPopChoice(t_29);
            }
          else
            {
              t = s_29;
              {
                ATerm m_13 = NULL,o_13 = NULL,p_13 = NULL;
                t = term_q_7;
                o_13 = t;
                t = term_g_28;
                p_13 = t;
                t = term_x_29;
                t = k_6(o_13, p_13, t);
                t = x_38;
                t = default_system_about_0_0(t);
                t = term_j_24;
                m_13 = t;
                t = SSL_exit(m_13);
              }
            }
        }
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        {
          ATerm y_29 = t;
          int c_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
              static ATerm n_5 (ATerm t)
              {
                ATerm b_39 = NULL,e_39 = NULL,f_39 = NULL,b_4 = NULL;
                f_39 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_39 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_39);
                b_39 = t;
                t = e_39;
                if(((b_38 != NULL) && (b_38 != t)))
                  _fail(t);
                else
                  b_38 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_39);
                b_4 = t;
                t = SSLsetAnnotations(b_4, b_39);
                return(t);
              }
              t = fetch_1_0(n_5, t);
              t = term_s_16;
              z_38 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_38)), term_d_30);
              a_39 = t;
              t = SSL_printnl(z_38, a_39);
              t = (ATerm) ATmakeAppl(sym__2, term_s_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_38)), term_d_30));
              t = default_system_usage_0_0(t);
              t = term_q_8;
              y_38 = t;
              t = SSL_exit(y_38);
              LocalPopChoice(c_30);
            }
          else
            {
              t = y_29;
            }
        }
      }
  }
  c_38 = t;
  t = term_n_25;
  e_38 = t;
  t = SSL_table_destroy(e_38);
  t = c_38;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL;
  t = parse_options_1_0(x_87, t);
  k_39 = t;
  t = term_e_30;
  n_39 = t;
  t = SSL_table_create(n_39);
  t = term_e_30;
  l_39 = t;
  t = term_g_30;
  m_39 = t;
  t = SSL_table_put(l_39, m_39, k_39);
  t = k_39;
  t = z_87(t);
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_87, t);
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        {
          ATerm o_30 = t;
          int s_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_88(t);
              t = report_success_0_0(t);
              LocalPopChoice(s_30);
            }
          else
            {
              t = o_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm t_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(v_30);
    }
  else
    {
      t = t_30;
      {
        ATerm w_30 = t;
        int y_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(y_30);
          }
        else
          {
            t = w_30;
            {
              ATerm z_30 = t;
              int a_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(t_5, u_5, i_6, t);
                  LocalPopChoice(a_31);
                }
              else
                {
                  t = z_30;
                  {
                    ATerm b_31 = t;
                    int c_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(c_31);
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
static ATerm p_5 (ATerm t)
{
  t = xtc_temp_files_1_0(j_6, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL;
  t = term_d_31;
  v_39 = t;
  t = term_t_17;
  w_39 = t;
  t = term_e_31;
  t = n_6(v_39, w_39, t);
  t = term_f_31;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_g_31;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm h_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_39 = NULL,z_39 = NULL,b_40 = NULL;
      t = term_q_7;
      z_39 = t;
      t = term_w_17;
      b_40 = t;
      t = term_m_31;
      t = k_6(z_39, b_40, t);
      y_39 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_39);
      LocalPopChoice(l_31);
    }
  else
    {
      t = h_31;
      t = term_y_7;
    }
  {
    ATerm n_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_40 = NULL,k_40 = NULL;
        k_40 = t;
        if(match_cons(t, sym_FILE_1))
          {
            j_40 = ATgetArgument(t, 0);
            {
              ATerm v_13 = NULL,e_4 = NULL;
              t = SSLgetAnnotations(k_40);
              v_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_40);
              e_4 = t;
              t = SSLsetAnnotations(e_4, v_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_40;
          }
        LocalPopChoice(p_31);
        t = xtc_transform_file_2_0(m_6, p_6, t);
      }
    else
      {
        t = n_31;
        t = xtc_transform_term_2_0(q_6, r_6, t);
      }
  }
  {
    ATerm t_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_40 = NULL,v_40 = NULL;
        v_40 = t;
        if(match_cons(t, sym_FILE_1))
          {
            u_40 = ATgetArgument(t, 0);
            {
              ATerm q_14 = NULL,f_4 = NULL;
              t = SSLgetAnnotations(v_40);
              q_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_40);
              f_4 = t;
              t = SSLsetAnnotations(f_4, q_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_40;
          }
        LocalPopChoice(w_31);
        t = xtc_transform_file_2_0(s_6, build_pp_tables_0_0, t);
      }
    else
      {
        t = t_31;
        t = xtc_transform_term_2_0(t_6, build_pp_tables_0_0, t);
      }
  }
  {
    ATerm a_32 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_41 = NULL,c_41 = NULL;
        c_41 = t;
        if(match_cons(t, sym_FILE_1))
          {
            b_41 = ATgetArgument(t, 0);
            {
              ATerm g_15 = NULL,g_4 = NULL;
              t = SSLgetAnnotations(c_41);
              g_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_41);
              g_4 = t;
              t = SSLsetAnnotations(g_4, g_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_41;
          }
        LocalPopChoice(b_32);
        t = xtc_transform_file_2_0(u_6, v_6, t);
      }
    else
      {
        t = a_32;
        t = xtc_transform_term_2_0(y_6, z_6, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_e_32;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_e_32;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_f_32;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_f_32;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_g_32;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_g_32;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(o_5, default_usage_0_0, _id, p_5, t);
  return(t);
}
