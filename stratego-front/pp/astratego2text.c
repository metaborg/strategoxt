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
ATerm term_u_31;
ATerm term_t_31;
ATerm term_p_31;
ATerm term_m_31;
ATerm term_a_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_x_29;
ATerm term_q_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_q_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_y_27;
ATerm term_w_27;
ATerm term_k_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_s_26;
ATerm term_y_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_v_23;
ATerm term_t_23;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_i_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_z_19;
ATerm term_t_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_x_17;
ATerm term_q_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_v_16;
ATerm term_n_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
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
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_b_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_x_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_i_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_v_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym__2, term_m_7, term_n_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_8, term_l_8, term_m_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_8, term_u_8, term_v_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_9, term_b_9, term_d_9);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_9, term_h_9, term_i_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_9, term_o_9, term_p_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_9, term_t_9, term_u_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_x_9, term_a_10);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_k_10, term_m_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_10, term_r_10, term_s_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_c_11, term_d_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_11, term_o_11, term_r_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_11, term_u_11, term_v_11);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_h_12, term_k_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_r_12, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_v_12, term_x_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_j_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_p_13);
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
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_i_14, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_n_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_t_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_a_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_f_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_l_15, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_u_15);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__2, term_m_7, term_q_17);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__2, term_m_7, term_m_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_s_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_f_21);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__2, term_g_17, term_v_16);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_q_17, term_c_24);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_24);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym__2, term_j_24, term_i_17);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_m_7, term_t_25);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_m_7, term_c_27);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym__2, term_e_25, term_f_25);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_w_27, term_i_17);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym__2, term_d_28, term_i_17);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_i_17);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym__2, term_m_7, term_w_27);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_u_30, term_i_17);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym__2, term_m_7, term_j_17);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm e_6 (ATerm o_14, ATerm p_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm w_5 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm z_5 (ATerm g_67 (ATerm), ATerm n_168, ATerm y_17, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t);
static ATerm a_6 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm i_72 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm v_65 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm v_86 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm n_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm y_9 (ATerm c_9, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm c_6 (ATerm k_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm e_67 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm x_83 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm w_83 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm y_83 (ATerm), ATerm t);
static ATerm q_5 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm r_5 (ATerm h_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm s_5 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm t_5 (ATerm a_84 (ATerm), ATerm y_37, ATerm x_37, ATerm t);
static ATerm v_5 (ATerm h_40, ATerm i_40, ATerm t);
static ATerm z_16 (ATerm p_16, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_5 (ATerm u_17, ATerm t);
static ATerm d_6 (ATerm l_32, ATerm m_32, ATerm t);
static ATerm x_5 (ATerm q_40, ATerm r_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_18 (ATerm l_17, ATerm t);
static ATerm s_18 (ATerm r_17, ATerm s_17, ATerm t_17, ATerm t);
static ATerm t_18 (ATerm e_18, ATerm f_18, ATerm g_18, ATerm t);
static ATerm y_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_24 (ATerm d_23, ATerm t);
static ATerm h_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm j_6 (ATerm i_38, ATerm j_38, ATerm t);
static ATerm f_6 (ATerm w_36, ATerm x_36, ATerm t);
ATerm end_scope_1_0 (ATerm h_82 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm g_82 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm h_86 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm m_6 (ATerm e_39, ATerm f_39, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm k_6 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_6 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_83 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm need_help_1_0 (ATerm x_87 (ATerm), ATerm t);
ATerm map_1_0 (ATerm w_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_72 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_89 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm parse_options_1_0 (ATerm u_89 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm astratego2text_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL;
  z_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = z_1;
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
        t = (ATerm) ATmakeAppl(sym__2, a_2, h_0);
        t = e_6(a_2, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_2);
        LocalPopChoice(y_6);
      }
    else
      {
        t = v_6;
        {
          ATerm b_7 = t;
          int c_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = z_1;
              t = o_0(t);
              v_0 = t;
              {
                ATerm h_7 = t;
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
                            if((a_2 != t))
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
                    t = h_7;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, a_2, v_0);
              t = e_6(a_2, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_2);
              LocalPopChoice(c_7);
            }
          else
            {
              t = b_7;
              t = z_1;
              t = o_0(t);
              if((a_2 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_2);
            }
        }
      }
  }
  return(t);
}
static ATerm e_6 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_copy(o_14, p_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_2 = NULL,v_2 = NULL;
      t = term_m_7;
      u_2 = t;
      t = term_n_7;
      v_2 = t;
      t = term_o_7;
      t = j_6(u_2, v_2, t);
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      t = term_p_7;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_1 = NULL,i_1 = NULL;
      t = term_n_7;
      {
        ATerm r_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 = NULL,k_1 = NULL;
            t = term_m_7;
            j_1 = t;
            t = term_n_7;
            k_1 = t;
            t = term_o_7;
            t = j_6(j_1, k_1, t);
            LocalPopChoice(s_7);
          }
        else
          {
            t = r_7;
            t = term_p_7;
          }
      }
      c_1 = t;
      t = term_v_7;
      i_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_v_7, c_1);
      t = e_6(i_1, c_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm w_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm z_2 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_v_7;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm b_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_x_7);
      b_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_2, (ATerm) ATinsert(ATempty, term_x_7));
      t = v_5(z_2, b_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm w_5 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm e_3 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_3);
  return(t);
}
static ATerm z_5 (ATerm g_67 (ATerm), ATerm n_168, ATerm y_17, ATerm t)
{
  ATerm g_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_168, term_y_7);
  t = y_5(t);
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_3, y_17);
  t = g_67(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_7 = ATgetArgument(t, 0);
      if(match_cons(z_7, sym_Stream_1))
        {
          m_3 = ATgetArgument(z_7, 0);
        }
      else
        _fail(t);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(m_3, n_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL;
  k_3 = t;
  t = xtc_new_file_0_0(t);
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_3, k_3);
  t = z_5(b_0, j_3, k_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, j_3);
  t = xtc_transform_file_2_0(u_85, v_85, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm a_6 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
  n_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      o_4 = ATgetArgument(t, 0);
      {
        ATerm p_1 = NULL,q_1 = NULL;
        t = SSL_int_to_string(o_4);
        p_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_8), p_1), term_a_8);
        q_1 = t;
        t = SSL_concat_strings(q_1);
      }
    }
  else
    {
      ATerm i_2 = NULL,j_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          o_4 = ATgetArgument(t, 0);
          p_4 = ATgetArgument(t, 1);
          q_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(p_4);
      i_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_4), term_d_8), i_2), term_c_8), o_4);
      j_2 = t;
      t = SSL_concat_strings(j_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_72 (ATerm), ATerm t)
{
  ATerm w_4 = NULL;
  static ATerm f_0 (ATerm t)
  {
    t = i_72(t);
    if(((w_4 != NULL) && (w_4 != t)))
      _fail(t);
    else
      w_4 = t;
    return(t);
  }
  t = fetch_1_0(f_0, t);
  t = not_null(w_4);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm g_8 = ATgetArgument(t, 0);
              if((y_4 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm h_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_15), term_r_15), term_n_15), term_h_15), term_b_15), term_u_14), term_q_14), term_k_14), term_e_14), term_y_13), term_r_13), term_l_13), term_c_13), term_t_12), term_l_12), term_b_12), term_s_11), term_j_11), term_y_10), term_t_10), term_o_10), term_b_10), term_v_9), term_q_9), term_l_9), term_e_9), term_x_8), term_o_8);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, y_4);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm e_5 = NULL,n_6 = NULL;
  e_5 = t;
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_16 = ATgetArgument(t, 0);
            n_6 = ATgetArgument(t, 1);
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
              ATerm d_3 = NULL,h_3 = NULL,i_3 = NULL;
              t = n_6;
              {
                ATerm f_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_16;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              d_3 = t;
              t = term_g_16;
              h_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, d_3), term_h_16);
              i_3 = t;
              t = SSL_printnl(h_3, i_3);
              t = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATinsert(ATinsert(ATempty, d_3), term_h_16));
              LocalPopChoice(e_16);
            }
          else
            {
              t = d_16;
              t = e_5;
            }
        }
      }
    else
      {
        t = z_15;
        t = e_5;
      }
  }
  t = e_5;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm v_65 (ATerm), ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL;
  x_6 = t;
  t = fork_0_0(t);
  w_6 = t;
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = x_6;
        t = v_65(t);
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
        t = SSL_waitpid(w_6);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm k_16 = ATgetArgument(t, 0);
            if(((ATgetType(k_16) != AT_INT) || (ATgetInt((ATermInt) k_16) != 0)))
              _fail(t);
            {
              ATerm l_16 = ATgetArgument(t, 1);
            }
            {
              ATerm m_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_6;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL;
  a_7 = t;
  t = v_86(t);
  t = xtc_find_0_0(t);
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_6, a_7);
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm d_7 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, z_6, a_7);
      t = a_6(z_6, a_7, t);
      t = term_n_16;
      d_7 = t;
      t = SSL_exit(d_7);
      return(t);
    }
    t = fork_and_wait_1_0(m_0, t);
  }
  t = a_7;
  return(t);
}
ATerm at_end_1_0 (ATerm n_72 (ATerm), ATerm t)
{
  static ATerm w_8 (ATerm t)
  {
    ATerm n_8 = NULL,p_8 = NULL,t_8 = NULL;
    t_8 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_8 = ATgetFirst((ATermList) t);
        p_8 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_3 = NULL,b_4 = NULL,x_0 = NULL;
          t = SSLgetAnnotations(t_8);
          r_3 = t;
          t = p_8;
          t = w_8(t);
          b_4 = t;
          t = (ATerm) ATinsert(CheckATermList(b_4), n_8);
          x_0 = t;
          t = SSLsetAnnotations(x_0, r_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_8;
        t = n_72(t);
      }
    return(t);
  }
  t = w_8(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_7 = NULL,i_7 = NULL,l_7 = NULL;
  f_7 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_7;
    }
  else
    {
      static ATerm q_0 (ATerm t)
      {
        t = not_null(l_7);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_7 = ATgetFirst((ATermList) t);
          if(((l_7 != NULL) && (l_7 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_7;
      t = at_end_1_0(q_0, t);
    }
  return(t);
}
static ATerm y_9 (ATerm c_9, ATerm t)
{
  ATerm f_9 = NULL;
  t = SSL_explode_term(c_9);
  if(match_cons(t, sym__2))
    {
      ATerm o_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,n_9 = NULL;
  n_9 = t;
  if(match_cons(t, sym__2))
    {
      j_9 = ATgetArgument(t, 0);
      k_9 = ATgetArgument(t, 1);
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_0 (ATerm t)
            {
              t = k_9;
              return(t);
            }
            t = j_9;
            t = at_end_1_0(s_0, t);
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            t = y_9(n_9, t);
          }
      }
    }
  else
    {
      t = y_9(n_9, t);
    }
  return(t);
}
static ATerm c_6 (ATerm k_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm z_9 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,i_10 = NULL;
  f_10 = t;
  t = k_82(t);
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_9, e_35, c_35);
  t = k_6(z_9, e_35, c_35, t);
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_10 = NULL;
        t = term_v_16;
        j_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_9, term_v_16);
        t = j_6(z_9, j_10, t);
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_10 = ATgetFirst((ATermList) t);
      e_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_v_16;
  g_10 = t;
  t = (ATerm) ATinsert(CheckATermList(e_10), (ATerm) ATinsert(CheckATermList(d_10), e_35));
  i_10 = t;
  t = SSL_table_put(z_9, g_10, i_10);
  t = f_10;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm l_10 = NULL;
  ATerm w_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_10 = NULL,u_4 = NULL;
      u_10 = t;
      t = term_a_17;
      u_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_10, term_a_17);
      t = d_6(u_10, u_4, t);
      l_10 = t;
      t = SSL_mkstemp(l_10);
      LocalPopChoice(y_16);
    }
  else
    {
      t = w_16;
      {
        ATerm b_11 = NULL;
        t = term_b_17;
        b_11 = t;
        t = SSL_perror(b_11);
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
  t = term_g_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
  t = P__tmpdir_0_0(t);
  h_11 = t;
  t = term_h_17;
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_11, term_h_17);
  t = d_6(h_11, i_11, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      f_11 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_i_17;
  g_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_11, term_i_17);
  t = c_6(t_0, f_11, g_11, t);
  t = SSL_close(e_11);
  t = f_11;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL;
  m_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm p_11 = NULL,q_11 = NULL;
      t = m_11;
      t = xtc_new_file_0_0(t);
      p_11 = t;
      t = r_0(t);
      q_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_11, (ATerm) ATinsert(ATinsert(ATempty, p_11), term_n_7));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_11);
    }
  else
    {
      ATerm w_11 = NULL,x_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_11;
      t = xtc_new_file_0_0(t);
      w_11 = t;
      t = r_0(t);
      x_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_11), term_n_7), n_11), term_j_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_11);
    }
  return(t);
}
ATerm debug_1_0 (ATerm e_67 (ATerm), ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL,d_12 = NULL;
  y_11 = t;
  t = e_67(t);
  z_11 = t;
  t = term_g_16;
  a_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_11), z_11);
  d_12 = t;
  t = SSL_printnl(a_12, d_12);
  t = y_11;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_12 = NULL;
  static ATerm u_0 (ATerm t)
  {
    ATerm f_12 = NULL,j_12 = NULL;
    f_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_12), f_12);
    t = j_6(not_null(e_12), f_12, t);
    j_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_12, j_12);
    return(t);
  }
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  t = SSL_table_keys(e_12);
  t = map_1_0(u_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  ATerm m_12 = NULL;
  m_12 = t;
  {
    ATerm k_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
        t = term_m_7;
        p_12 = t;
        t = term_q_17;
        q_12 = t;
        t = term_x_17;
        t = j_6(p_12, q_12, t);
        o_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_12, term_e_15);
        t = geq_0_0(t);
        t = m_12;
        t = x_83(t);
        LocalPopChoice(n_17);
      }
    else
      {
        t = k_17;
        t = m_12;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm w_12 = NULL;
  w_12 = t;
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_12 = NULL,f_13 = NULL,k_13 = NULL;
        t = term_m_7;
        f_13 = t;
        t = term_q_17;
        k_13 = t;
        t = term_x_17;
        t = j_6(f_13, k_13, t);
        y_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_12, term_o_11);
        t = geq_0_0(t);
        t = w_12;
        t = w_83(t);
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        t = w_12;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm o_13 = NULL;
  o_13 = t;
  {
    ATerm d_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_13 = NULL,v_13 = NULL,w_13 = NULL;
        t = term_m_7;
        v_13 = t;
        t = term_q_17;
        w_13 = t;
        t = term_x_17;
        t = j_6(v_13, w_13, t);
        t_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_13, term_h_9);
        t = geq_0_0(t);
        t = o_13;
        t = y_83(t);
        LocalPopChoice(k_18);
      }
    else
      {
        t = d_18;
        t = o_13;
      }
  }
  return(t);
}
static ATerm q_5 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = l_76(t);
  {
    static ATerm y_0 (ATerm t)
    {
      ATerm b_14 = NULL;
      b_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, b_14);
      t = k_76(t);
      return(t);
    }
    t = fetch_1_0(y_0, t);
  }
  t = b_25;
  return(t);
}
static ATerm r_5 (ATerm h_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm c_15 (ATerm t)
  {
    ATerm v_14 = NULL,w_14 = NULL,z_14 = NULL;
    v_14 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_14 = ATgetFirst((ATermList) t);
            z_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_14;
              {
                static ATerm z_0 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = q_5(h_76, z_0, w_14, z_14, t);
              }
              t = c_15(t);
              LocalPopChoice(n_18);
            }
          else
            {
              t = l_18;
              {
                ATerm c_5 = NULL,k_5 = NULL,d_1 = NULL;
                t = SSLgetAnnotations(v_14);
                c_5 = t;
                t = z_14;
                t = c_15(t);
                k_5 = t;
                t = (ATerm) ATinsert(CheckATermList(k_5), w_14);
                d_1 = t;
                t = SSLsetAnnotations(d_1, c_5);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = c_15(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm w_15 = NULL;
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      if((w_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm g_15 = NULL,j_15 = NULL,k_15 = NULL;
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_18 = ATgetArgument(t, 0);
            ATerm a_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = j_6(o_37, p_37, t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        t = (ATerm) ATempty;
      }
  }
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_15, q_37);
  t = r_5(a_1, k_15, q_37, t);
  j_15 = t;
  t = SSL_table_put(o_37, p_37, j_15);
  t = g_15;
  return(t);
}
static ATerm t_5 (ATerm a_84 (ATerm), ATerm y_37, ATerm x_37, ATerm t)
{
  static ATerm b_1 (ATerm t)
  {
    ATerm x_15 = NULL,y_15 = NULL;
    if(match_cons(t, sym__2))
      {
        x_15 = ATgetArgument(t, 0);
        y_15 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_37, x_15, y_15);
    t = a_84(t);
    return(t);
  }
  t = x_37;
  t = map_1_0(b_1, t);
  return(t);
}
static ATerm v_5 (ATerm h_40, ATerm i_40, ATerm t)
{
  t = SSL_access(h_40, i_40);
  return(t);
}
static ATerm z_16 (ATerm p_16, ATerm t)
{
  t = SSL_fclose(p_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_16 = NULL,x_16 = NULL;
  x_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_16 = ATgetArgument(t, 0);
      {
        ATerm b_19 = t;
        int c_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_16);
            LocalPopChoice(c_19);
          }
        else
          {
            t = b_19;
            t = z_16(x_16, t);
          }
      }
    }
  else
    {
      t = z_16(x_16, t);
    }
  return(t);
}
static ATerm u_5 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm d_6 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = SSL_strcat(l_32, m_32);
  return(t);
}
static ATerm x_5 (ATerm q_40, ATerm r_40, ATerm t)
{
  ATerm c_17 = NULL;
  t = SSL_fopen(q_40, r_40);
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_17 = NULL;
  t = SSL_stdin_stream();
  d_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_17 = NULL;
  t = SSL_stdout_stream();
  e_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_17 = NULL;
  t = SSL_stderr_stream();
  f_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_17);
  return(t);
}
static ATerm r_18 (ATerm l_17, ATerm t)
{
  ATerm m_17 = NULL;
  t = SSL_explode_term(l_17);
  if(match_cons(t, sym__2))
    {
      ATerm d_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_19 = ATgetArgument(t, 1);
        if(((ATgetType(e_19) == AT_LIST) && !(ATisEmpty(e_19))))
          {
            m_17 = ATgetFirst((ATermList) e_19);
            {
              ATerm f_19 = (ATerm) ATgetNext((ATermList) e_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_17;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_17;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_17;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_17;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_18 (ATerm r_17, ATerm s_17, ATerm t_17, ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,z_17 = NULL,c_18 = NULL,f_1 = NULL;
  t = SSLgetAnnotations(t_17);
  z_17 = t;
  t = r_17;
  if(match_cons(t, sym_Path_1))
    {
      c_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_18, s_17);
  f_1 = t;
  t = SSLsetAnnotations(f_1, z_17);
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(v_17, w_17, t);
  return(t);
}
static ATerm t_18 (ATerm e_18, ATerm f_18, ATerm g_18, ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,m_18 = NULL,g_1 = NULL;
  t = SSLgetAnnotations(g_18);
  j_18 = t;
  t = SSL_is_string(e_18);
  m_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_18, f_18);
  g_1 = t;
  t = SSLsetAnnotations(g_1, j_18);
  if(match_cons(t, sym__2))
    {
      h_18 = ATgetArgument(t, 0);
      i_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(h_18, i_18, t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
  o_18 = t;
  if(match_cons(t, sym__2))
    {
      p_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_18(o_18, t);
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            {
              ATerm j_19 = t;
              int k_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_18(p_18, q_18, o_18, t);
                  LocalPopChoice(k_19);
                }
              else
                {
                  t = j_19;
                  t = t_18(p_18, q_18, o_18, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_18(o_18, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,g_19 = NULL;
  g_19 = t;
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_19, term_n_19);
        t = y_5(t);
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        {
          ATerm e_7 = NULL,g_7 = NULL;
          t = term_o_19;
          g_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_19, g_19);
          t = d_6(g_7, g_19, t);
          e_7 = t;
          t = SSL_perror(e_7);
          _fail(t);
        }
      }
  }
  x_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_5(y_18, t);
  w_18 = t;
  t = x_18;
  t = fclose_0_0(t);
  t = w_18;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_p_19;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm u_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_19 = NULL,r_19 = NULL;
      q_19 = t;
      t = (ATerm) ATinsert(ATempty, term_z_19);
      r_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_19, (ATerm) ATinsert(ATempty, term_z_19));
      t = v_5(q_19, r_19, t);
      LocalPopChoice(x_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = u_19;
      {
        ATerm d_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_20 = t;
            if((PushChoice() == 0))
              {
                ATerm s_19 = NULL,v_19 = NULL;
                s_19 = t;
                t = (ATerm) ATinsert(ATempty, term_x_7);
                v_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_19, (ATerm) ATinsert(ATempty, term_x_7));
                t = v_5(s_19, v_19, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_20;
              }
            t = debug_1_0(e_1, t);
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
static ATerm l_1 (ATerm t)
{
  t = debug_1_0(m_1, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  t = term_g_16;
  q_20 = t;
  t = (ATerm) ATinsert(ATempty, term_s_20);
  r_20 = t;
  t = SSL_printnl(q_20, r_20);
  t = p_20;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
  if(match_cons(t, sym__3))
    {
      u_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
      w_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_5(u_20, v_20, w_20, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL;
  x_20 = t;
  t = term_g_16;
  y_20 = t;
  t = (ATerm) ATinsert(ATempty, term_t_20);
  z_20 = t;
  t = SSL_printnl(y_20, z_20);
  t = x_20;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
  a_21 = t;
  t = term_g_16;
  b_21 = t;
  t = (ATerm) ATinsert(ATempty, term_s_20);
  c_21 = t;
  t = SSL_printnl(b_21, c_21);
  t = a_21;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm w_19 = NULL,y_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  w_19 = t;
  t = if_verbose5_1_0(l_1, t);
  {
    ATerm d_21 = t;
    if((PushChoice() == 0))
      {
        ATerm k_20 = NULL,l_20 = NULL;
        t = term_e_21;
        k_20 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, w_19);
        l_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Imported_1, w_19));
        t = j_6(k_20, l_20, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_21;
      }
  }
  a_20 = t;
  t = term_e_21;
  h_20 = t;
  t = term_f_21;
  i_20 = t;
  t = (ATerm) ATinsert(ATempty, w_19);
  j_20 = t;
  t = SSL_table_put(h_20, i_20, j_20);
  t = a_20;
  t = if_verbose4_1_0(n_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(r_1, t);
  y_19 = t;
  t = term_e_21;
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_21, y_19);
  t = t_5(t_1, g_20, y_19, t);
  t = if_verbose6_1_0(u_1, t);
  t = term_e_21;
  b_20 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, w_19);
  c_20 = t;
  t = (ATerm) ATempty;
  f_20 = t;
  t = SSL_table_put(b_20, c_20, f_20);
  t = (ATerm) ATmakeAppl(sym__3, term_e_21, (ATerm)ATmakeAppl(sym_Imported_1, w_19), (ATerm) ATempty);
  t = if_verbose4_1_0(v_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_21;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_21 = ATgetFirst((ATermList) t);
          y_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_7 = NULL,t_7 = NULL,u_7 = NULL,s_1 = NULL;
            t = SSLgetAnnotations(w_21);
            q_7 = t;
            t = x_21;
            t = g_80(t);
            t_7 = t;
            t = y_21;
            t = filter_1_0(g_80, t);
            u_7 = t;
            t = (ATerm) ATinsert(CheckATermList(u_7), t_7);
            s_1 = t;
            t = SSLsetAnnotations(s_1, q_7);
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            t = y_21;
            t = filter_1_0(g_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm t)
{
  static ATerm e_22 (ATerm t)
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_70(t);
        t = e_22(t);
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        t = c_70(t);
      }
    return(t);
  }
  t = e_22(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_22 = NULL,k_22 = NULL;
      t = term_m_7;
      g_22 = t;
      t = term_m_21;
      k_22 = t;
      t = term_n_21;
      t = j_6(g_22, k_22, t);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm o_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_22 = NULL;
            t = term_q_21;
            l_22 = t;
            t = SSL_getenv(l_22);
            LocalPopChoice(p_21);
          }
        else
          {
            t = o_21;
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
  t = term_r_21;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL;
  t = term_e_21;
  v_22 = t;
  t = term_s_21;
  w_22 = t;
  t = term_t_21;
  t = j_6(v_22, w_22, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm u_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_21;
      }
  }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm o_22 = NULL;
  t = if_verbose5_1_0(w_1, t);
  o_22 = t;
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_22 = NULL,s_22 = NULL;
        t = term_e_21;
        p_22 = t;
        t = term_f_21;
        s_22 = t;
        t = term_b_22;
        t = j_6(p_22, s_22, t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        {
          ATerm u_22 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          u_22 = t;
          t = repeat_2_0(y_1, _id, t);
          t = u_22;
        }
      }
  }
  t = o_22;
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
  t = term_c_22;
  return(t);
}
static ATerm g_24 (ATerm d_23, ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,k_23 = NULL;
  t = term_e_21;
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, d_23);
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Tool_1, d_23));
  t = j_6(h_23, k_23, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_22 = ATgetFirst((ATermList) t);
      if(match_cons(d_22, sym__2))
        {
          ATerm h_22 = ATgetArgument(d_22, 0);
          g_23 = ATgetArgument(d_22, 1);
        }
      else
        _fail(t);
      {
        ATerm f_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_23;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_c_22;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_e_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_i_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm j_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_23 = NULL,m_23 = NULL,o_23 = NULL;
      t = if_verbose5_1_0(e_2, t);
      t = xtc_load_0_0(t);
      o_23 = t;
      if(match_cons(t, sym__2))
        {
          l_23 = ATgetArgument(t, 0);
          m_23 = ATgetArgument(t, 1);
          {
            ATerm n_22 = t;
            int q_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
                t = term_e_21;
                x_23 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, l_23);
                y_23 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Tool_1, l_23));
                t = j_6(x_23, y_23, t);
                {
                  static ATerm g_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((m_23 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((w_23 != NULL) && (w_23 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          w_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(g_2, t);
                }
                t = not_null(w_23);
                LocalPopChoice(q_22);
              }
            else
              {
                t = n_22;
                t = g_24(o_23, t);
              }
          }
        }
      else
        {
          t = g_24(o_23, t);
        }
      t = if_verbose5_1_0(h_2, t);
      LocalPopChoice(m_22);
    }
  else
    {
      t = j_22;
      {
        ATerm f_24 = NULL,j_8 = NULL,k_8 = NULL;
        f_24 = t;
        t = term_g_16;
        j_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_22), f_24), term_r_22);
        k_8 = t;
        t = SSL_printnl(j_8, k_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_22), f_24), term_r_22);
        t = if_verbose5_1_0(n_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm j_6 (ATerm i_38, ATerm j_38, ATerm t)
{
  t = SSL_table_get(i_38, j_38);
  return(t);
}
static ATerm f_6 (ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL;
  l_24 = t;
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = j_6(w_36, x_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_22 = ATgetFirst((ATermList) t);
            k_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_22);
        t = SSL_table_put(w_36, x_36, k_24);
        t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, k_24);
      }
    else
      {
        t = x_22;
        t = SSL_table_remove(w_36, x_36);
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
      }
  }
  t = l_24;
  return(t);
}
ATerm end_scope_1_0 (ATerm h_82 (ATerm), ATerm t)
{
  ATerm m_24 = NULL,p_24 = NULL,q_24 = NULL,t_24 = NULL,u_24 = NULL;
  t_24 = t;
  t = h_82(t);
  q_24 = t;
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL;
        t = term_v_16;
        v_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_24, term_v_16);
        t = j_6(q_24, v_24, t);
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
      p_24 = ATgetFirst((ATermList) t);
      m_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_v_16;
  u_24 = t;
  t = SSL_table_put(q_24, u_24, m_24);
  t = p_24;
  {
    static ATerm r_2 (ATerm t)
    {
      ATerm z_24 = NULL;
      z_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, z_24);
      t = f_6(q_24, z_24, t);
      return(t);
    }
    t = map_1_0(r_2, t);
  }
  t = t_24;
  return(t);
}
ATerm restore_always_2_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm t)
{
  ATerm c_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_83(t);
      t = i_83(t);
      LocalPopChoice(e_23);
    }
  else
    {
      t = c_23;
      t = i_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
  i_25 = t;
  t = g_82(t);
  h_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_25, term_v_16);
  {
    ATerm f_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_23 = ATgetArgument(t, 0);
            ATerm n_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_16;
        p_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_25, term_v_16);
        t = j_6(h_25, p_25, t);
        LocalPopChoice(i_23);
      }
    else
      {
        t = f_23;
        t = (ATerm) ATempty;
      }
  }
  j_25 = t;
  t = term_v_16;
  k_25 = t;
  t = (ATerm) ATinsert(CheckATermList(j_25), (ATerm) ATempty);
  l_25 = t;
  t = SSL_table_put(h_25, k_25, l_25);
  t = i_25;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_g_17;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm c_26 = NULL;
  c_26 = t;
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(c_26);
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = c_26;
      }
  }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_g_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  ATerm u_25 = NULL;
  static ATerm t_2 (ATerm t)
  {
    ATerm v_25 = NULL;
    v_25 = t;
    {
      ATerm r_23 = t;
      int s_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_25 = NULL,x_25 = NULL;
          t = term_g_17;
          w_25 = t;
          t = term_v_16;
          x_25 = t;
          t = term_t_23;
          t = j_6(w_25, x_25, t);
          LocalPopChoice(s_23);
        }
      else
        {
          t = r_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((u_25 != NULL) && (u_25 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          u_25 = ATgetFirst((ATermList) t);
        {
          ATerm u_23 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = u_25;
    t = map_1_0(x_2, t);
    t = v_25;
    t = end_scope_1_0(y_2, t);
    return(t);
  }
  t = begin_scope_1_0(s_2, t);
  t = restore_always_2_0(h_86, t_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL;
  f_26 = t;
  t = term_i_17;
  t = whoami_0_0(t);
  g_26 = t;
  t = term_g_16;
  k_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_23), g_26), term_v_23);
  l_26 = t;
  t = SSL_printnl(k_26, l_26);
  t = term_l_8;
  j_26 = t;
  t = SSL_exit(j_26);
  t = f_26;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm n_26 = NULL;
  n_26 = t;
  if(match_string(t, "-k"))
    {
      t = n_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_26;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  o_26 = t;
  t = SSL_string_to_int(o_26);
  p_26 = t;
  t = term_a_24;
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_24, p_26);
  t = m_6(q_26, p_26, t);
  t = o_26;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, c_3, f_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm t_26 = NULL;
  t_26 = t;
  if(match_string(t, "-S"))
    {
      t = t_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_26;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL;
  t = term_q_17;
  u_26 = t;
  t = term_c_24;
  v_26 = t;
  t = term_d_24;
  t = m_6(u_26, v_26, t);
  t = term_e_24;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_h_24;
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
  ATerm w_26 = NULL,x_26 = NULL,a_27 = NULL;
  w_26 = t;
  t = SSL_string_to_int(w_26);
  x_26 = t;
  t = term_q_17;
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, x_26);
  t = m_6(a_27, x_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_26);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_i_24;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm b_27 = NULL,i_27 = NULL;
  t = term_j_24;
  b_27 = t;
  t = term_i_17;
  i_27 = t;
  t = term_n_24;
  t = m_6(b_27, i_27, t);
  t = term_o_24;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_3, o_3, p_3, t);
      LocalPopChoice(w_24);
    }
  else
    {
      t = s_24;
      {
        ATerm a_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_3, s_3, t_3, t);
            LocalPopChoice(d_25);
          }
        else
          {
            t = a_25;
            t = Option_3_0(u_3, w_3, y_3, t);
          }
      }
    }
  return(t);
}
static ATerm m_6 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm j_27 = NULL;
  t = term_m_7;
  j_27 = t;
  t = SSL_table_put(j_27, e_39, f_39);
  t = (ATerm) ATmakeAppl(sym__3, term_m_7, e_39, f_39);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_27 = NULL,q_27 = NULL,s_27 = NULL;
      t = term_i_17;
      t = e_0(t);
      p_27 = t;
      t = term_e_25;
      q_27 = t;
      t = term_f_25;
      s_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_25, term_f_25, p_27);
      t = k_6(q_27, s_27, p_27, t);
      _fail(t);
    }
  else
    {
      ATerm x_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_27 = ATgetFirst((ATermList) t);
          o_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_27;
      t = c_0(t);
      t = term_i_17;
      t = d_0(t);
      x_27 = t;
      t = (ATerm) ATinsert(CheckATermList(o_27), x_27);
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm z_27 = NULL;
  z_27 = t;
  if(match_string(t, "-o"))
    {
      t = z_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_27;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL;
  a_28 = t;
  t = term_n_7;
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_7, a_28);
  t = m_6(b_28, a_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_28);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, c_4, f_4, t);
  return(t);
}
static ATerm k_6 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_25 = ATgetArgument(t, 0);
            ATerm q_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = j_6(r_36, s_36, t);
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        t = (ATerm) ATempty;
      }
  }
  f_28 = t;
  t = (ATerm) ATinsert(CheckATermList(f_28), q_36);
  g_28 = t;
  t = SSL_table_put(r_36, s_36, g_28);
  t = e_28;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,r_28 = NULL,u_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
      t = term_i_17;
      t = n_0(t);
      v_28 = t;
      t = term_e_25;
      w_28 = t;
      t = term_f_25;
      x_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_25, term_f_25, v_28);
      t = k_6(w_28, x_28, v_28, t);
      _fail(t);
    }
  else
    {
      ATerm i_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_28 = ATgetFirst((ATermList) t);
          o_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_28 = ATgetFirst((ATermList) t);
          u_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_28;
      t = k_0(t);
      t = r_28;
      t = l_0(t);
      i_29 = t;
      t = (ATerm) ATinsert(CheckATermList(u_28), i_29);
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm n_29 = NULL;
  n_29 = t;
  if(match_string(t, "-i"))
    {
      t = n_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_29;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm o_29 = NULL,s_29 = NULL;
  o_29 = t;
  t = term_j_17;
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_17, o_29);
  t = m_6(s_29, o_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_29);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_r_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, h_4, i_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL,y_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_17;
  t = whoami_0_0(t);
  t_29 = t;
  t = term_g_16;
  v_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_25), t_29);
  y_29 = t;
  t = SSL_printnl(v_29, y_29);
  t = term_l_8;
  u_29 = t;
  t = SSL_exit(u_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  t = term_m_7;
  z_29 = t;
  t = term_t_25;
  a_30 = t;
  t = term_y_25;
  t = j_6(z_29, a_30, t);
  return(t);
}
static ATerm g_6 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
  i_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_30;
      t = c_79(t);
    }
  else
    {
      ATerm n_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_30 = ATgetFirst((ATermList) t);
          k_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_30;
      t = foldr_2_0(c_79, d_79, t);
      n_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_30, n_30);
      t = d_79(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_c_24;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL;
  if(match_cons(t, sym__2))
    {
      y_8 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(y_8, z_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_30 = NULL,r_8 = NULL,s_8 = NULL;
  t = times_0_0(t);
  s_8 = t;
  t = SSL_explode_term(s_8);
  if(match_cons(t, sym__2))
    {
      ATerm b_26 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8;
  t = foldr_2_0(j_4, k_4, t);
  q_30 = t;
  t = SSL_TicksToSeconds(q_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  b_31 = t;
  if(match_cons(t, sym__2))
    {
      c_31 = ATgetArgument(t, 0);
      d_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_31;
        if((c_31 != t))
          {
            _fail(t);
          }
        t = b_31;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = (ATerm) ATmakeAppl(sym__2, c_31, d_31);
        {
          ATerm h_26 = t;
          int i_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_31, d_31);
              LocalPopChoice(i_26);
            }
          else
            {
              t = h_26;
              t = SSL_gtr(c_31, d_31);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_31, d_31);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm h_31 = NULL;
  h_31 = t;
  {
    ATerm m_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
        t = term_m_7;
        k_31 = t;
        t = term_q_17;
        l_31 = t;
        t = term_x_17;
        t = j_6(k_31, l_31, t);
        j_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_31, term_l_8);
        t = geq_0_0(t);
        t = h_31;
        t = t_83(t);
        LocalPopChoice(r_26);
      }
    else
      {
        t = m_26;
        t = h_31;
      }
  }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,q_31 = NULL,r_31 = NULL;
  t = run_time_0_0(t);
  n_31 = t;
  t = term_i_17;
  t = whoami_0_0(t);
  o_31 = t;
  t = term_g_16;
  q_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_26), n_31), term_c_8), o_31);
  r_31 = t;
  t = SSL_printnl(q_31, r_31);
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_26), n_31), term_c_8), o_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_24;
  s_31 = t;
  t = SSL_exit(s_31);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL;
  d_32 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_32;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          c_32 = ATgetArgument(t, 0);
          {
            ATerm s_9 = NULL,d_2 = NULL;
            t = SSLgetAnnotations(d_32);
            s_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, c_32);
            d_2 = t;
            t = SSLsetAnnotations(d_2, s_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_32;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_31 = NULL,w_31 = NULL;
      t = term_m_7;
      v_31 = t;
      t = term_c_27;
      w_31 = t;
      t = term_d_27;
      t = j_6(v_31, w_31, t);
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      t = fetch_1_0(m_4, t);
    }
  t = x_87(t);
  return(t);
}
ATerm map_1_0 (ATerm w_71 (ATerm), ATerm t)
{
  static ATerm y_32 (ATerm t)
  {
    ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
    v_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_32;
      }
    else
      {
        ATerm h_10 = NULL,n_10 = NULL,p_10 = NULL,k_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_32 = ATgetFirst((ATermList) t);
            x_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_32);
        h_10 = t;
        t = w_32;
        t = w_71(t);
        n_10 = t;
        t = x_32;
        t = y_32(t);
        p_10 = t;
        t = (ATerm) ATinsert(CheckATermList(p_10), n_10);
        k_2 = t;
        t = SSLsetAnnotations(k_2, h_10);
      }
    return(t);
  }
  t = y_32(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_33 = ATgetFirst((ATermList) t);
      e_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_33 = NULL,l_33 = NULL;
        static ATerm r_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_33)), not_null(l_33));
          return(t);
        }
        t = e_33;
        t = i_0(t);
        if(((k_33 != NULL) && (k_33 != t)))
          _fail(t);
        else
          k_33 = t;
        t = d_33;
        t = g_0(t);
        if(((l_33 != NULL) && (l_33 != t)))
          _fail(t);
        else
          l_33 = t;
        t = e_33;
        t = reverse_acc_2_0(g_0, r_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_17;
      t = i_0(t);
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,m_2 = NULL;
  v_33 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_33);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_33);
  m_2 = t;
  t = SSLsetAnnotations(m_2, t_33);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm x_33 = NULL;
  x_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_33), term_e_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_33 = NULL,s_33 = NULL;
      t = term_m_7;
      p_33 = t;
      t = term_t_25;
      s_33 = t;
      t = term_y_25;
      t = j_6(p_33, s_33, t);
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      t = fetch_1_0(s_4, t);
    }
  t = term_h_27;
  t = echo_0_0(t);
  t = term_e_25;
  n_33 = t;
  t = term_f_25;
  o_33 = t;
  t = term_k_27;
  t = j_6(n_33, o_33, t);
  t = reverse_acc_2_0(_id, t_4, t);
  t = map_1_0(v_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_72 (ATerm), ATerm t)
{
  static ATerm u_34 (ATerm t)
  {
    ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
    r_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_34 = ATgetFirst((ATermList) t);
        t_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_27 = t;
      int m_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_11 = NULL,k_11 = NULL,o_2 = NULL;
          t = SSLgetAnnotations(r_34);
          a_11 = t;
          t = s_34;
          t = g_72(t);
          k_11 = t;
          t = (ATerm) ATinsert(CheckATermList(t_34), k_11);
          o_2 = t;
          t = SSLsetAnnotations(o_2, a_11);
          LocalPopChoice(m_27);
        }
      else
        {
          t = l_27;
          {
            ATerm c_12 = NULL,i_12 = NULL,w_2 = NULL;
            t = SSLgetAnnotations(r_34);
            c_12 = t;
            t = t_34;
            t = u_34(t);
            i_12 = t;
            t = (ATerm) ATinsert(CheckATermList(i_12), s_34);
            w_2 = t;
            t = SSLsetAnnotations(w_2, c_12);
          }
        }
    }
    return(t);
  }
  t = u_34(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
  j_35 = t;
  {
    ATerm r_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_27 = ATgetFirst((ATermList) t);
                ATerm v_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_35;
          }
        LocalPopChoice(t_27);
      }
    else
      {
        t = r_27;
        t = (ATerm) ATinsert(ATempty, j_35);
      }
  }
  k_35 = t;
  t = term_p_7;
  l_35 = t;
  t = SSL_printnl(l_35, k_35);
  t = j_35;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  t = term_m_7;
  p_35 = t;
  t = term_t_25;
  q_35 = t;
  t = term_y_25;
  t = j_6(p_35, q_35, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL;
  t = term_w_27;
  r_35 = t;
  t = term_i_17;
  s_35 = t;
  t = term_y_27;
  t = m_6(r_35, s_35, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_c_28;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
  t = term_w_27;
  v_35 = t;
  t = term_i_17;
  w_35 = t;
  t = term_y_27;
  t = m_6(v_35, w_35, t);
  t = term_d_28;
  t_35 = t;
  t = term_i_17;
  u_35 = t;
  t = term_h_28;
  t = m_6(t_35, u_35, t);
  t = term_i_28;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_j_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_4, z_4, a_5, t);
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      t = Option_3_0(b_5, d_5, f_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,v_3 = NULL;
  c_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_35 = ATgetFirst((ATermList) t);
      z_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_36);
  x_35 = t;
  t = y_35;
  t = v_58(t);
  a_36 = t;
  t = z_35;
  t = w_58(t);
  b_36 = t;
  t = (ATerm) ATinsert(CheckATermList(b_36), a_36);
  v_3 = t;
  t = SSLsetAnnotations(v_3, x_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_89 (ATerm), ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,k_36 = NULL,l_36 = NULL,u_36 = NULL,y_36 = NULL,x_3 = NULL;
  h_36 = t;
  {
    ATerm m_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_28;
        t = v_89(t);
        LocalPopChoice(p_28);
      }
    else
      {
        t = m_28;
      }
  }
  t = h_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_36 = ATgetFirst((ATermList) t);
      l_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_36);
  i_36 = t;
  t = term_t_25;
  y_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_25, k_36);
  t = m_6(y_36, k_36, t);
  t = l_36;
  {
    static ATerm i_37 (ATerm t)
    {
      ATerm s_28 = t;
      int t_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_28 = t;
          int z_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_37 = NULL;
              b_37 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_37;
              LocalPopChoice(z_28);
            }
          else
            {
              t = y_28;
              t = v_89(t);
              t = Cons_2_0(_id, i_37, t);
            }
          LocalPopChoice(t_28);
        }
      else
        {
          t = s_28;
          {
            ATerm e_37 = NULL,f_37 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_37 = ATgetFirst((ATermList) t);
                f_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_37), (ATerm) ATmakeAppl(sym_Undefined_1, e_37));
          }
        }
      return(t);
    }
    t = i_37(t);
  }
  u_36 = t;
  t = (ATerm) ATinsert(CheckATermList(u_36), (ATerm) ATmakeAppl(sym_Program_1, k_36));
  x_3 = t;
  t = SSLsetAnnotations(x_3, i_36);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm d_38 = NULL;
  d_38 = t;
  if(match_string(t, "--help"))
    {
      t = d_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_38;
        }
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL;
  t = term_c_27;
  e_38 = t;
  t = term_i_17;
  f_38 = t;
  t = term_a_29;
  t = m_6(e_38, f_38, t);
  t = term_b_29;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_c_29;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm n_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,b_38 = NULL,c_38 = NULL;
  u_37 = t;
  t = term_e_25;
  w_37 = t;
  t = term_f_25;
  b_38 = t;
  t = (ATerm) ATempty;
  c_38 = t;
  t = SSL_table_put(w_37, b_38, c_38);
  t = u_37;
  {
    static ATerm g_5 (ATerm t)
    {
      ATerm d_29 = t;
      int e_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_89(t);
          LocalPopChoice(e_29);
        }
      else
        {
          t = d_29;
          {
            ATerm f_29 = t;
            int g_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_5, i_5, j_5, t);
                LocalPopChoice(g_29);
              }
            else
              {
                t = f_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_5, t);
  }
  {
    ATerm h_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_38 = NULL;
        s_38 = t;
        {
          ATerm k_29 = t;
          int l_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_12 = NULL;
              t = s_38;
              {
                ATerm m_29 = t;
                int p_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_13 = NULL,b_13 = NULL;
                    t = term_m_7;
                    a_13 = t;
                    t = term_c_27;
                    b_13 = t;
                    t = term_d_27;
                    t = j_6(a_13, b_13, t);
                    LocalPopChoice(p_29);
                  }
                else
                  {
                    t = m_29;
                    t = fetch_1_0(l_5, t);
                  }
              }
              t = s_38;
              t = default_system_usage_0_0(t);
              t = term_c_24;
              z_12 = t;
              t = SSL_exit(z_12);
              LocalPopChoice(l_29);
            }
          else
            {
              t = k_29;
              {
                ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
                t = term_m_7;
                h_13 = t;
                t = term_w_27;
                i_13 = t;
                t = term_q_29;
                t = j_6(h_13, i_13, t);
                t = s_38;
                t = default_system_about_0_0(t);
                t = term_c_24;
                g_13 = t;
                t = SSL_exit(g_13);
              }
            }
        }
        LocalPopChoice(j_29);
      }
    else
      {
        t = h_29;
        {
          ATerm r_29 = t;
          int w_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
              static ATerm m_5 (ATerm t)
              {
                ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,a_4 = NULL;
                y_38 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_38 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_38);
                w_38 = t;
                t = x_38;
                if(((n_37 != NULL) && (n_37 != t)))
                  _fail(t);
                else
                  n_37 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_38);
                a_4 = t;
                t = SSLsetAnnotations(a_4, w_38);
                return(t);
              }
              t = fetch_1_0(m_5, t);
              t = term_g_16;
              u_38 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_37)), term_x_29);
              v_38 = t;
              t = SSL_printnl(u_38, v_38);
              t = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_37)), term_x_29));
              t = default_system_usage_0_0(t);
              t = term_l_8;
              t_38 = t;
              t = SSL_exit(t_38);
              LocalPopChoice(w_29);
            }
          else
            {
              t = r_29;
            }
        }
      }
  }
  t_37 = t;
  t = term_e_25;
  v_37 = t;
  t = SSL_table_destroy(v_37);
  t = t_37;
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm t)
{
  ATerm d_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL;
  t = parse_options_1_0(z_87, t);
  d_39 = t;
  t = term_b_30;
  i_39 = t;
  t = SSL_table_create(i_39);
  t = term_b_30;
  g_39 = t;
  t = term_c_30;
  h_39 = t;
  t = SSL_table_put(g_39, h_39, d_39);
  t = d_39;
  t = b_88(t);
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_88, t);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        {
          ATerm f_30 = t;
          int g_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_88(t);
              t = report_success_0_0(t);
              LocalPopChoice(g_30);
            }
          else
            {
              t = f_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm h_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(l_30);
    }
  else
    {
      t = h_30;
      {
        ATerm m_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(o_30);
          }
        else
          {
            t = m_30;
            {
              ATerm p_30 = t;
              int r_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(p_5, b_6, h_6, t);
                  LocalPopChoice(r_30);
                }
              else
                {
                  t = p_30;
                  {
                    ATerm s_30 = t;
                    int t_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(t_30);
                      }
                    else
                      {
                        t = s_30;
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
static ATerm o_5 (ATerm t)
{
  t = xtc_temp_files_1_0(i_6, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL;
  t = term_u_30;
  o_39 = t;
  t = term_i_17;
  p_39 = t;
  t = term_v_30;
  t = m_6(o_39, p_39, t);
  t = term_w_30;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_x_30;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
      t = term_m_7;
      s_39 = t;
      t = term_j_17;
      t_39 = t;
      t = term_a_31;
      t = j_6(s_39, t_39, t);
      r_39 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_39);
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      t = term_v_7;
    }
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_39 = NULL,a_40 = NULL;
        a_40 = t;
        if(match_cons(t, sym_FILE_1))
          {
            z_39 = ATgetArgument(t, 0);
            {
              ATerm q_13 = NULL,d_4 = NULL;
              t = SSLgetAnnotations(a_40);
              q_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_39);
              d_4 = t;
              t = SSLsetAnnotations(d_4, q_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_40;
          }
        LocalPopChoice(f_31);
        t = xtc_transform_file_2_0(l_6, o_6, t);
      }
    else
      {
        t = e_31;
        t = xtc_transform_term_2_0(p_6, q_6, t);
      }
  }
  {
    ATerm g_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_40 = NULL,m_40 = NULL;
        m_40 = t;
        if(match_cons(t, sym_FILE_1))
          {
            l_40 = ATgetArgument(t, 0);
            {
              ATerm c_14 = NULL,e_4 = NULL;
              t = SSLgetAnnotations(m_40);
              c_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_40);
              e_4 = t;
              t = SSLsetAnnotations(e_4, c_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_40;
          }
        LocalPopChoice(i_31);
        t = xtc_transform_file_2_0(r_6, s_6, t);
      }
    else
      {
        t = g_31;
        t = xtc_transform_term_2_0(t_6, u_6, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_m_31;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm b_40 = NULL;
  t = term_p_31;
  t = xtc_find_0_0(t);
  b_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_40), term_t_31);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_m_31;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm d_40 = NULL;
  t = term_p_31;
  t = xtc_find_0_0(t);
  d_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_40), term_t_31);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_u_31;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_u_31;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm astratego2text_0_0 (ATerm t)
{
  t = option_wrap_4_0(n_5, default_usage_0_0, _id, o_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = astratego2text_0_0(t);
  return(t);
}
