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
ATerm term_j_35;
ATerm term_f_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_f_34;
ATerm term_b_34;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_d_33;
ATerm term_u_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_t_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_n_30;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_f_29;
ATerm term_c_29;
ATerm term_y_28;
ATerm term_w_28;
ATerm term_g_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_v_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_g_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_t_26;
ATerm term_l_25;
ATerm term_h_25;
ATerm term_f_25;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_x_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_j_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_u_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_s_21;
ATerm term_n_21;
ATerm term_l_21;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_e_18;
ATerm term_z_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_m_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_x_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_m_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_p_8;
ATerm term_n_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_p_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_9, term_n_9, term_o_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_9, term_u_9, term_w_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_9, term_a_10, term_b_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_j_10, term_k_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_s_10, term_t_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_a_11, term_b_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_e_11, term_g_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_l_11, term_m_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_t_11, term_v_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_z_11, term_b_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_g_12, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_m_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_13, term_g_13, term_h_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_y_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_e_14, term_f_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_v_14, term_w_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_r_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_e_16, term_f_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_m_16, term_o_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_t_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_w_16, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_j_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_s_18);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_l_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym__2, term_r_20, term_x_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, term_r_20, term_s_20);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_c_24);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_h_24);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_p_24);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_h_25);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_j_23);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym__2, term_s_18, term_a_27);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_27);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym__2, term_e_24, term_q_23);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--start symbol   Define start symbol", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_r_29);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_q_30);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym__2, term_v_27, term_b_28);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_q_23);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym__2, term_c_32, term_q_23);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym__2, term_q_30, term_q_23);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_t_31);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym__2, term_b_35, term_q_23);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_x_23);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm v_6 (ATerm q_14, ATerm r_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm f_6 (ATerm q_17, ATerm r_17, ATerm t);
static ATerm g_6 (ATerm m_67 (ATerm), ATerm b_175, ATerm a_18, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm t);
static ATerm h_6 (ATerm i_14, ATerm j_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm o_72 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm b_66 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm k_67 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm d_84 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm c_84 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm e_84 (ATerm), ATerm t);
static ATerm k_6 (ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm e_25, ATerm d_25, ATerm t);
static ATerm l_6 (ATerm n_76 (ATerm), ATerm a_25, ATerm z_24, ATerm t);
static ATerm s_0 (ATerm t);
static ATerm m_6 (ATerm q_37, ATerm r_37, ATerm s_37, ATerm t);
static ATerm n_6 (ATerm g_84 (ATerm), ATerm a_38, ATerm z_37, ATerm t);
static ATerm r_6 (ATerm h_40, ATerm i_40, ATerm t);
static ATerm o_11 (ATerm f_11, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_6 (ATerm w_17, ATerm t);
static ATerm p_6 (ATerm q_40, ATerm r_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_14 (ATerm h_12, ATerm t);
static ATerm k_14 (ATerm z_12, ATerm a_13, ATerm b_13, ATerm t);
static ATerm l_14 (ATerm o_13, ATerm p_13, ATerm q_13, ATerm t);
static ATerm q_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm m_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm o_20 (ATerm v_18, ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm b_87 (ATerm), ATerm t);
static ATerm s_6 (ATerm q_82 (ATerm), ATerm g_35, ATerm e_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm t_6 (ATerm n_32, ATerm o_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
ATerm pass_sglri_args_0_0 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm sglr_2_0 (ATerm u_64 (ATerm), ATerm v_64 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm parse_and_implode_0_0 (ATerm t);
static ATerm a_7 (ATerm k_38, ATerm l_38, ATerm t);
static ATerm w_6 (ATerm y_36, ATerm z_36, ATerm t);
ATerm end_scope_1_0 (ATerm n_82 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm m_82 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm n_86 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_7 (ATerm e_39, ATerm f_39, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm b_7 (ATerm t_36, ATerm u_36, ATerm s_36, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm t_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_31 (ATerm r_31, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm u_6 (ATerm k_39, ATerm j_39, ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm sglri_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_6 (ATerm s_33, ATerm t_33, ATerm t);
ATerm foldr_2_0 (ATerm i_79 (ATerm), ATerm j_79 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_83 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm need_help_1_0 (ATerm d_88 (ATerm), ATerm t);
ATerm map_1_0 (ATerm c_72 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm m_72 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm b_90 (ATerm), ATerm t);
static ATerm g_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm parse_options_1_0 (ATerm a_90 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm t);
static ATerm q_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,p_1 = NULL;
  n_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = n_1;
        t = r_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, p_1, h_0);
        t = v_6(p_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_1);
        LocalPopChoice(d_8);
      }
    else
      {
        t = a_8;
        {
          ATerm e_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_0 = NULL;
              t = n_1;
              t = r_0(t);
              z_0 = t;
              {
                ATerm j_8 = t;
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
                            if((p_1 != t))
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
                    t = j_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, p_1, z_0);
              t = v_6(p_1, z_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_1);
              LocalPopChoice(i_8);
            }
          else
            {
              t = e_8;
              t = n_1;
              t = r_0(t);
              if((p_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_1);
            }
        }
      }
  }
  return(t);
}
static ATerm v_6 (ATerm q_14, ATerm r_14, ATerm t)
{
  t = SSL_copy(q_14, r_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_2 = NULL,x_2 = NULL;
      t = term_n_8;
      w_2 = t;
      t = term_p_8;
      x_2 = t;
      t = term_s_8;
      t = a_7(w_2, x_2, t);
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
      t = term_t_8;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm u_2 = NULL;
  u_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm k_1 = NULL,l_1 = NULL;
      t = term_p_8;
      {
        ATerm w_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 = NULL,q_1 = NULL;
            t = term_n_8;
            o_1 = t;
            t = term_p_8;
            q_1 = t;
            t = term_s_8;
            t = a_7(o_1, q_1, t);
            LocalPopChoice(x_8);
          }
        else
          {
            t = w_8;
            t = term_t_8;
          }
      }
      k_1 = t;
      t = term_y_8;
      l_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_y_8, k_1);
      t = v_6(l_1, k_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm z_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm b_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_y_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm d_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_9);
      d_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_3, (ATerm) ATinsert(ATempty, term_a_9));
      t = r_6(b_3, d_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm f_6 (ATerm q_17, ATerm r_17, ATerm t)
{
  ATerm e_3 = NULL;
  t = SSL_write_term_to_stream_baf(q_17, r_17);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_3);
  return(t);
}
static ATerm g_6 (ATerm m_67 (ATerm), ATerm b_175, ATerm a_18, ATerm t)
{
  ATerm f_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_175, term_b_9);
  t = q_6(t);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_3, a_18);
  t = m_67(t);
  t = fclose_0_0(t);
  t = a_18;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm k_3 = NULL,m_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      if(match_cons(c_9, sym_Stream_1))
        {
          k_3 = ATgetArgument(c_9, 0);
        }
      else
        _fail(t);
      m_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(k_3, m_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,i_3 = NULL;
  i_3 = t;
  t = xtc_new_file_0_0(t);
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_3, i_3);
  t = g_6(b_0, g_3, i_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_3);
  t = xtc_transform_file_2_0(a_86, b_86, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm h_6 (ATerm i_14, ATerm j_14, ATerm t)
{
  t = SSL_execvp(i_14, j_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm n_4 = NULL,p_4 = NULL,q_4 = NULL,s_4 = NULL;
  n_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      p_4 = ATgetArgument(t, 0);
      {
        ATerm y_1 = NULL,z_1 = NULL;
        t = SSL_int_to_string(p_4);
        y_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_9), y_1), term_d_9);
        z_1 = t;
        t = SSL_concat_strings(z_1);
      }
    }
  else
    {
      ATerm k_2 = NULL,l_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          p_4 = ATgetArgument(t, 0);
          q_4 = ATgetArgument(t, 1);
          s_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(q_4);
      k_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_4), term_g_9), k_2), term_f_9), p_4);
      l_2 = t;
      t = SSL_concat_strings(l_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm o_72 (ATerm), ATerm t)
{
  ATerm v_4 = NULL;
  static ATerm f_0 (ATerm t)
  {
    t = o_72(t);
    if(((v_4 != NULL) && (v_4 != t)))
      _fail(t);
    else
      v_4 = t;
    return(t);
  }
  t = fetch_1_0(f_0, t);
  t = not_null(v_4);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm w_4 = NULL;
  w_4 = t;
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm j_9 = ATgetArgument(t, 0);
              if((w_4 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_17), term_g_17), term_c_17), term_y_16), term_u_16), term_q_16), term_h_16), term_s_15), term_x_14), term_m_14), term_z_13), term_s_13), term_i_13), term_y_12), term_u_12), term_p_12), term_j_12), term_c_12), term_x_11), term_r_11), term_h_11), term_c_11), term_y_10), term_u_10), term_m_10), term_f_10), term_y_9), term_r_9);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, w_4);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm f_5 = NULL,p_5 = NULL;
  f_5 = t;
  {
    ATerm l_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_17 = ATgetArgument(t, 0);
            p_5 = ATgetArgument(t, 1);
            {
              ATerm t_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_17);
        {
          ATerm u_17 = t;
          int v_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_3 = NULL,l_3 = NULL,n_3 = NULL;
              t = p_5;
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
              h_3 = t;
              t = term_z_17;
              l_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, h_3), term_e_18);
              n_3 = t;
              t = SSL_printnl(l_3, n_3);
              t = (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATinsert(ATempty, h_3), term_e_18));
              LocalPopChoice(v_17);
            }
          else
            {
              t = u_17;
              t = f_5;
            }
        }
      }
    else
      {
        t = l_17;
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
ATerm fork_and_wait_1_0 (ATerm b_66 (ATerm), ATerm t)
{
  ATerm y_5 = NULL,c_6 = NULL;
  c_6 = t;
  t = fork_0_0(t);
  y_5 = t;
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = c_6;
        t = b_66(t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        t = SSL_waitpid(y_5);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm k_18 = ATgetArgument(t, 0);
            if(((ATgetType(k_18) != AT_INT) || (ATgetInt((ATermInt) k_18) != 0)))
              _fail(t);
            {
              ATerm l_18 = ATgetArgument(t, 1);
            }
            {
              ATerm m_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_6;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm k_67 (ATerm), ATerm t)
{
  ATerm j_6 = NULL,y_6 = NULL,z_6 = NULL,c_7 = NULL;
  j_6 = t;
  t = k_67(t);
  y_6 = t;
  t = term_z_17;
  z_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_6), y_6);
  c_7 = t;
  t = SSL_printnl(z_6, c_7);
  t = j_6;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_7 = NULL;
  static ATerm l_0 (ATerm t)
  {
    ATerm h_7 = NULL,i_7 = NULL;
    h_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_7), h_7);
    t = a_7(not_null(e_7), h_7, t);
    i_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_7, i_7);
    return(t);
  }
  if(((e_7 != NULL) && (e_7 != t)))
    _fail(t);
  else
    e_7 = t;
  t = SSL_table_keys(e_7);
  t = map_1_0(l_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  ATerm m_7 = NULL;
  m_7 = t;
  {
    ATerm o_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
        t = term_n_8;
        s_7 = t;
        t = term_s_18;
        t_7 = t;
        t = term_t_18;
        t = a_7(s_7, t_7, t);
        r_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_7, term_w_16);
        t = geq_0_0(t);
        t = m_7;
        t = d_84(t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = o_18;
        t = m_7;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_84 (ATerm), ATerm t)
{
  ATerm b_8 = NULL;
  b_8 = t;
  {
    ATerm u_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
        t = term_n_8;
        g_8 = t;
        t = term_s_18;
        h_8 = t;
        t = term_t_18;
        t = a_7(g_8, h_8, t);
        f_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_8, term_g_12);
        t = geq_0_0(t);
        t = b_8;
        t = c_84(t);
        LocalPopChoice(w_18);
      }
    else
      {
        t = u_18;
        t = b_8;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_84 (ATerm), ATerm t)
{
  ATerm m_8 = NULL;
  m_8 = t;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_8 = NULL,q_8 = NULL,r_8 = NULL;
        t = term_n_8;
        q_8 = t;
        t = term_s_18;
        r_8 = t;
        t = term_t_18;
        t = a_7(q_8, r_8, t);
        o_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_8, term_j_10);
        t = geq_0_0(t);
        t = m_8;
        t = e_84(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = m_8;
      }
  }
  return(t);
}
static ATerm k_6 (ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm e_25, ATerm d_25, ATerm t)
{
  t = r_76(t);
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm u_8 = NULL;
      u_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_25, u_8);
      t = q_76(t);
      return(t);
    }
    t = fetch_1_0(m_0, t);
  }
  t = d_25;
  return(t);
}
static ATerm l_6 (ATerm n_76 (ATerm), ATerm a_25, ATerm z_24, ATerm t)
{
  static ATerm x_9 (ATerm t)
  {
    ATerm m_9 = NULL,p_9 = NULL,s_9 = NULL;
    m_9 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_9 = ATgetFirst((ATermList) t);
            s_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_19 = t;
          int f_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_9;
              {
                static ATerm q_0 (ATerm t)
                {
                  t = z_24;
                  return(t);
                }
                t = k_6(n_76, q_0, p_9, s_9, t);
              }
              t = x_9(t);
              LocalPopChoice(f_19);
            }
          else
            {
              t = e_19;
              {
                ATerm v_3 = NULL,b_4 = NULL,g_0 = NULL;
                t = SSLgetAnnotations(m_9);
                v_3 = t;
                t = s_9;
                t = x_9(t);
                b_4 = t;
                t = (ATerm) ATinsert(CheckATermList(b_4), p_9);
                g_0 = t;
                t = SSLsetAnnotations(g_0, v_3);
              }
            }
        }
      }
    return(t);
  }
  t = a_25;
  t = x_9(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm o_10 = NULL;
  if(match_cons(t, sym__2))
    {
      o_10 = ATgetArgument(t, 0);
      if((o_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_6 (ATerm q_37, ATerm r_37, ATerm s_37, ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
  c_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_37, r_37);
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_19 = ATgetArgument(t, 0);
            ATerm j_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_37, r_37);
        t = a_7(q_37, r_37, t);
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        t = (ATerm) ATempty;
      }
  }
  e_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_10, s_37);
  t = l_6(s_0, e_10, s_37, t);
  d_10 = t;
  t = SSL_table_put(q_37, r_37, d_10);
  t = c_10;
  return(t);
}
static ATerm n_6 (ATerm g_84 (ATerm), ATerm a_38, ATerm z_37, ATerm t)
{
  static ATerm u_0 (ATerm t)
  {
    ATerm p_10 = NULL,q_10 = NULL;
    if(match_cons(t, sym__2))
      {
        p_10 = ATgetArgument(t, 0);
        q_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, a_38, p_10, q_10);
    t = g_84(t);
    return(t);
  }
  t = z_37;
  t = map_1_0(u_0, t);
  return(t);
}
static ATerm r_6 (ATerm h_40, ATerm i_40, ATerm t)
{
  t = SSL_access(h_40, i_40);
  return(t);
}
static ATerm o_11 (ATerm f_11, ATerm t)
{
  t = SSL_fclose(f_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL;
  j_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_11 = ATgetArgument(t, 0);
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_11);
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            t = o_11(j_11, t);
          }
      }
    }
  else
    {
      t = o_11(j_11, t);
    }
  return(t);
}
static ATerm o_6 (ATerm w_17, ATerm t)
{
  t = SSL_read_term_from_stream(w_17);
  return(t);
}
static ATerm p_6 (ATerm q_40, ATerm r_40, ATerm t)
{
  ATerm p_11 = NULL;
  t = SSL_fopen(q_40, r_40);
  p_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_11);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_11 = NULL;
  t = SSL_stdin_stream();
  q_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_11 = NULL;
  t = SSL_stdout_stream();
  u_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_11 = NULL;
  t = SSL_stderr_stream();
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_11);
  return(t);
}
static ATerm h_14 (ATerm h_12, ATerm t)
{
  ATerm o_12 = NULL;
  t = SSL_explode_term(h_12);
  if(match_cons(t, sym__2))
    {
      ATerm m_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_19 = ATgetArgument(t, 1);
        if(((ATgetType(n_19) == AT_LIST) && !(ATisEmpty(n_19))))
          {
            o_12 = ATgetFirst((ATermList) n_19);
            {
              ATerm o_19 = (ATerm) ATgetNext((ATermList) n_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_12;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_12;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_12;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_12;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_14 (ATerm z_12, ATerm a_13, ATerm b_13, ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,k_13 = NULL,x_0 = NULL;
  t = SSLgetAnnotations(b_13);
  e_13 = t;
  t = z_12;
  if(match_cons(t, sym_Path_1))
    {
      k_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_13, a_13);
  x_0 = t;
  t = SSLsetAnnotations(x_0, e_13);
  if(match_cons(t, sym__2))
    {
      c_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(c_13, d_13, t);
  return(t);
}
static ATerm l_14 (ATerm o_13, ATerm p_13, ATerm q_13, ATerm t)
{
  ATerm t_13 = NULL,w_13 = NULL,x_13 = NULL,a_14 = NULL,y_0 = NULL;
  t = SSLgetAnnotations(q_13);
  x_13 = t;
  t = SSL_is_string(o_13);
  a_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_14, p_13);
  y_0 = t;
  t = SSLsetAnnotations(y_0, x_13);
  if(match_cons(t, sym__2))
    {
      t_13 = ATgetArgument(t, 0);
      w_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(t_13, w_13, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,g_14 = NULL;
  c_14 = t;
  if(match_cons(t, sym__2))
    {
      d_14 = ATgetArgument(t, 0);
      g_14 = ATgetArgument(t, 1);
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_14(c_14, t);
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            {
              ATerm s_19 = t;
              int t_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_14(d_14, g_14, c_14, t);
                  LocalPopChoice(t_19);
                }
              else
                {
                  t = s_19;
                  t = l_14(d_14, g_14, c_14, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_14(c_14, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_14 = NULL,s_14 = NULL,t_14 = NULL,y_14 = NULL;
  y_14 = t;
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_14, term_w_19);
        t = q_6(t);
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        {
          ATerm e_5 = NULL,i_5 = NULL;
          t = term_x_19;
          i_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_19, y_14);
          t = t_6(i_5, y_14, t);
          e_5 = t;
          t = SSL_perror(e_5);
          _fail(t);
        }
      }
  }
  s_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(t_14, t);
  n_14 = t;
  t = s_14;
  t = fclose_0_0(t);
  t = n_14;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_15 = NULL,c_15 = NULL;
      b_15 = t;
      t = (ATerm) ATinsert(ATempty, term_f_20);
      c_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_15, (ATerm) ATinsert(ATempty, term_f_20));
      t = r_6(b_15, c_15, t);
      LocalPopChoice(e_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_20;
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_20 = t;
            if((PushChoice() == 0))
              {
                ATerm d_15 = NULL,e_15 = NULL;
                d_15 = t;
                t = (ATerm) ATinsert(ATempty, term_a_9);
                e_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_15, (ATerm) ATinsert(ATempty, term_a_9));
                t = r_6(d_15, e_15, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_20;
              }
            t = debug_1_0(w_0, t);
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            t = debug_1_0(b_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = debug_1_0(d_1, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_j_20;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = debug_1_0(g_1, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_k_20;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  u_15 = t;
  t = term_z_17;
  v_15 = t;
  t = (ATerm) ATinsert(ATempty, term_l_20);
  w_15 = t;
  t = SSL_printnl(v_15, w_15);
  t = u_15;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym__3))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
      c_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_6(a_16, b_16, c_16, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm g_16 = NULL,j_16 = NULL,k_16 = NULL;
  g_16 = t;
  t = term_z_17;
  j_16 = t;
  t = (ATerm) ATinsert(ATempty, term_m_20);
  k_16 = t;
  t = SSL_printnl(j_16, k_16);
  t = g_16;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm l_16 = NULL,n_16 = NULL,p_16 = NULL;
  l_16 = t;
  t = term_z_17;
  n_16 = t;
  t = (ATerm) ATinsert(ATempty, term_l_20);
  p_16 = t;
  t = SSL_printnl(n_16, p_16);
  t = l_16;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  f_15 = t;
  t = if_verbose5_1_0(c_1, t);
  {
    ATerm p_20 = t;
    if((PushChoice() == 0))
      {
        ATerm q_15 = NULL,t_15 = NULL;
        t = term_r_20;
        q_15 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, f_15);
        t_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATmakeAppl(sym_Imported_1, f_15));
        t = a_7(q_15, t_15, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_20;
      }
  }
  h_15 = t;
  t = term_r_20;
  n_15 = t;
  t = term_s_20;
  o_15 = t;
  t = (ATerm) ATinsert(ATempty, f_15);
  p_15 = t;
  t = SSL_table_put(n_15, o_15, p_15);
  t = h_15;
  t = if_verbose4_1_0(f_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(i_1, t);
  g_15 = t;
  t = term_r_20;
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_20, g_15);
  t = n_6(j_1, m_15, g_15, t);
  t = if_verbose6_1_0(r_1, t);
  t = term_r_20;
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, f_15);
  k_15 = t;
  t = (ATerm) ATempty;
  l_15 = t;
  t = SSL_table_put(i_15, k_15, l_15);
  t = (ATerm) ATmakeAppl(sym__3, term_r_20, (ATerm)ATmakeAppl(sym_Imported_1, f_15), (ATerm) ATempty);
  t = if_verbose4_1_0(s_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
  m_17 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_17;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_17 = ATgetFirst((ATermList) t);
          o_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm c_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_5 = NULL,b_6 = NULL,d_6 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(m_17);
            x_5 = t;
            t = n_17;
            t = m_80(t);
            b_6 = t;
            t = o_17;
            t = filter_1_0(m_80, t);
            d_6 = t;
            t = (ATerm) ATinsert(CheckATermList(d_6), b_6);
            e_1 = t;
            t = SSLsetAnnotations(e_1, x_5);
            LocalPopChoice(e_21);
          }
        else
          {
            t = c_21;
            t = o_17;
            t = filter_1_0(m_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm t)
{
  static ATerm y_17 (ATerm t)
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_70(t);
        t = y_17(t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = i_70(t);
      }
    return(t);
  }
  t = y_17(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm h_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_18 = NULL,c_18 = NULL;
      t = term_n_8;
      b_18 = t;
      t = term_l_21;
      c_18 = t;
      t = term_n_21;
      t = a_7(b_18, c_18, t);
      LocalPopChoice(k_21);
    }
  else
    {
      t = h_21;
      {
        ATerm o_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_18 = NULL;
            t = term_s_21;
            d_18 = t;
            t = SSL_getenv(d_18);
            LocalPopChoice(r_21);
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
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_v_21;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL;
  t = term_r_20;
  p_18 = t;
  t = term_x_21;
  q_18 = t;
  t = term_a_22;
  t = a_7(p_18, q_18, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm c_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_22;
      }
  }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = debug_1_0(a_2, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm h_18 = NULL;
  t = if_verbose5_1_0(t_1, t);
  h_18 = t;
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_18 = NULL,j_18 = NULL;
        t = term_r_20;
        i_18 = t;
        t = term_s_20;
        j_18 = t;
        t = term_l_22;
        t = a_7(i_18, j_18, t);
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        {
          ATerm n_18 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          n_18 = t;
          t = repeat_2_0(w_1, _id, t);
          t = n_18;
        }
      }
  }
  t = h_18;
  t = if_verbose5_1_0(x_1, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_m_22;
  return(t);
}
static ATerm o_20 (ATerm v_18, ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
  t = term_r_20;
  a_19 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, v_18);
  b_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATmakeAppl(sym_Tool_1, v_18));
  t = a_7(a_19, b_19, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_22 = ATgetFirst((ATermList) t);
      if(match_cons(n_22, sym__2))
        {
          ATerm t_22 = ATgetArgument(n_22, 0);
          z_18 = ATgetArgument(n_22, 1);
        }
      else
        _fail(t);
      {
        ATerm p_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_18;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_m_22;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_r_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_u_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_19 = NULL,d_19 = NULL,p_19 = NULL;
      t = if_verbose5_1_0(b_2, t);
      t = xtc_load_0_0(t);
      p_19 = t;
      if(match_cons(t, sym__2))
        {
          c_19 = ATgetArgument(t, 0);
          d_19 = ATgetArgument(t, 1);
          {
            ATerm c_23 = t;
            int d_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
                t = term_r_20;
                z_19 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, c_19);
                a_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATmakeAppl(sym_Tool_1, c_19));
                t = a_7(z_19, a_20, t);
                {
                  static ATerm d_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((d_19 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((y_19 != NULL) && (y_19 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          y_19 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(d_2, t);
                }
                t = not_null(y_19);
                LocalPopChoice(d_23);
              }
            else
              {
                t = c_23;
                t = o_20(p_19, t);
              }
          }
        }
      else
        {
          t = o_20(p_19, t);
        }
      t = if_verbose5_1_0(e_2, t);
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      {
        ATerm n_20 = NULL,n_7 = NULL,o_7 = NULL;
        n_20 = t;
        t = term_z_17;
        n_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_23), n_20), term_e_23);
        o_7 = t;
        t = SSL_printnl(n_7, o_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_23), n_20), term_e_23);
        t = if_verbose5_1_0(g_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm b_87 (ATerm), ATerm t)
{
  ATerm q_20 = NULL,t_20 = NULL;
  t_20 = t;
  t = b_87(t);
  t = xtc_find_0_0(t);
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_20, t_20);
  {
    static ATerm i_2 (ATerm t)
    {
      ATerm u_20 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, q_20, t_20);
      t = h_6(q_20, t_20, t);
      t = term_g_23;
      u_20 = t;
      t = SSL_exit(u_20);
      return(t);
    }
    t = fork_and_wait_1_0(i_2, t);
  }
  t = t_20;
  return(t);
}
static ATerm s_6 (ATerm q_82 (ATerm), ATerm g_35, ATerm e_35, ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
  y_20 = t;
  t = q_82(t);
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_20, g_35, e_35);
  t = b_7(v_20, g_35, e_35, t);
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_21 = NULL;
        t = term_j_23;
        b_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_20, term_j_23);
        t = a_7(v_20, b_21, t);
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_20 = ATgetFirst((ATermList) t);
      x_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_j_23;
  z_20 = t;
  t = (ATerm) ATinsert(CheckATermList(x_20), (ATerm) ATinsert(CheckATermList(w_20), g_35));
  a_21 = t;
  t = SSL_table_put(v_20, z_20, a_21);
  t = y_20;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm d_21 = NULL;
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21 = NULL,w_7 = NULL;
      i_21 = t;
      t = term_m_23;
      w_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_21, term_m_23);
      t = t_6(i_21, w_7, t);
      d_21 = t;
      t = SSL_mkstemp(d_21);
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      {
        ATerm j_21 = NULL;
        t = term_n_23;
        j_21 = t;
        t = SSL_perror(j_21);
        _fail(t);
      }
    }
  return(t);
}
static ATerm t_6 (ATerm n_32, ATerm o_32, ATerm t)
{
  t = SSL_strcat(n_32, o_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_o_23;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm m_21 = NULL,p_21 = NULL,q_21 = NULL,t_21 = NULL,u_21 = NULL;
  t = P__tmpdir_0_0(t);
  t_21 = t;
  t = term_p_23;
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_21, term_p_23);
  t = t_6(t_21, u_21, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      p_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_q_23;
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_21, term_q_23);
  t = s_6(j_2, p_21, q_21, t);
  t = SSL_close(m_21);
  t = p_21;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm w_21 = NULL,y_21 = NULL;
  w_21 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm z_21 = NULL,b_22 = NULL;
      t = w_21;
      t = xtc_new_file_0_0(t);
      z_21 = t;
      t = v_0(t);
      b_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_22, (ATerm) ATinsert(ATinsert(ATempty, z_21), term_p_8));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_21);
    }
  else
    {
      ATerm e_22 = NULL,f_22 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_21;
      t = xtc_new_file_0_0(t);
      e_22 = t;
      t = v_0(t);
      f_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_22), term_p_8), y_21), term_x_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_22);
    }
  return(t);
}
ATerm pass_sglri_args_0_0 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL;
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_22 = NULL,o_22 = NULL,q_22 = NULL;
      t = term_n_8;
      o_22 = t;
      t = term_c_24;
      q_22 = t;
      t = term_d_24;
      t = a_7(o_22, q_22, t);
      k_22 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, k_22), term_e_24);
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      t = (ATerm) ATempty;
    }
  g_22 = t;
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_22 = NULL,s_22 = NULL;
        t = term_n_8;
        r_22 = t;
        t = term_h_24;
        s_22 = t;
        t = term_i_24;
        t = a_7(r_22, s_22, t);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = (ATerm) ATempty;
      }
  }
  h_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_22), g_22), (ATerm) ATinsert(ATempty, term_j_24));
  t = concat_0_0(t);
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_22 = NULL,w_22 = NULL;
      t = term_n_8;
      v_22 = t;
      t = term_p_24;
      w_22 = t;
      t = term_r_24;
      t = a_7(v_22, w_22, t);
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      {
        ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
        t = term_z_17;
        a_23 = t;
        t = (ATerm) ATinsert(ATempty, term_u_24);
        b_23 = t;
        t = SSL_printnl(a_23, b_23);
        t = term_n_9;
        z_22 = t;
        t = SSL_exit(z_22);
        t = (ATerm) ATinsert(ATempty, term_u_24);
      }
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_x_24;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_x_24;
  return(t);
}
ATerm sglr_2_0 (ATerm u_64 (ATerm), ATerm v_64 (ATerm), ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_23 = NULL,s_23 = NULL;
      s_23 = t;
      if(match_cons(t, sym_FILE_1))
        {
          r_23 = ATgetArgument(t, 0);
          {
            ATerm c_8 = NULL,h_1 = NULL;
            t = SSLgetAnnotations(s_23);
            c_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, r_23);
            h_1 = t;
            t = SSLsetAnnotations(h_1, c_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_23;
        }
      LocalPopChoice(c_25);
      {
        static ATerm n_2 (ATerm t)
        {
          ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
          v_23 = t;
          t = u_64(t);
          t_23 = t;
          t = v_23;
          t = v_64(t);
          u_23 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(u_23), t_23), term_p_24);
          return(t);
        }
        t = xtc_transform_file_2_0(m_2, n_2, t);
      }
    }
  else
    {
      t = b_25;
      {
        static ATerm q_2 (ATerm t)
        {
          ATerm w_23 = NULL,a_24 = NULL,b_24 = NULL;
          b_24 = t;
          t = u_64(t);
          w_23 = t;
          t = b_24;
          t = v_64(t);
          a_24 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(a_24), w_23), term_p_24);
          return(t);
        }
        t = xtc_transform_term_2_0(p_2, q_2, t);
      }
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_f_25;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_h_25;
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_24 = NULL,q_24 = NULL;
        t = term_n_8;
        o_24 = t;
        t = term_h_25;
        q_24 = t;
        t = term_l_25;
        t = a_7(o_24, q_24, t);
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_f_25;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_h_25;
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_24 = NULL,t_24 = NULL;
        t = term_n_8;
        s_24 = t;
        t = term_h_25;
        t_24 = t;
        t = term_l_25;
        t = a_7(s_24, t_24, t);
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  t = sglr_2_0(get_parse_table_0_0, pass_sglri_args_0_0, t);
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_24 = NULL,n_24 = NULL;
        n_24 = t;
        if(match_cons(t, sym_FILE_1))
          {
            m_24 = ATgetArgument(t, 0);
            {
              ATerm v_8 = NULL,m_1 = NULL;
              t = SSLgetAnnotations(n_24);
              v_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_24);
              m_1 = t;
              t = SSLsetAnnotations(m_1, v_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_24;
          }
        LocalPopChoice(u_25);
        t = xtc_transform_file_2_0(r_2, t_2, t);
      }
    else
      {
        t = t_25;
        t = xtc_transform_term_2_0(v_2, z_2, t);
      }
  }
  return(t);
}
static ATerm a_7 (ATerm k_38, ATerm l_38, ATerm t)
{
  t = SSL_table_get(k_38, l_38);
  return(t);
}
static ATerm w_6 (ATerm y_36, ATerm z_36, ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL;
  w_24 = t;
  {
    ATerm w_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_36, z_36);
        t = a_7(y_36, z_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_25 = ATgetFirst((ATermList) t);
            v_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_25);
        t = SSL_table_put(y_36, z_36, v_24);
        t = (ATerm) ATmakeAppl(sym__3, y_36, z_36, v_24);
      }
    else
      {
        t = w_25;
        t = SSL_table_remove(y_36, z_36);
        t = (ATerm) ATmakeAppl(sym__2, y_36, z_36);
      }
  }
  t = w_24;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  ATerm y_24 = NULL,g_25 = NULL,k_25 = NULL,m_25 = NULL,n_25 = NULL;
  m_25 = t;
  t = n_82(t);
  k_25 = t;
  {
    ATerm a_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_25 = NULL;
        t = term_j_23;
        o_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_25, term_j_23);
        t = a_7(k_25, o_25, t);
        LocalPopChoice(d_26);
      }
    else
      {
        t = a_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_25 = ATgetFirst((ATermList) t);
      y_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_j_23;
  n_25 = t;
  t = SSL_table_put(k_25, n_25, y_24);
  t = g_25;
  {
    static ATerm a_3 (ATerm t)
    {
      ATerm p_25 = NULL;
      p_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_25, p_25);
      t = w_6(k_25, p_25, t);
      return(t);
    }
    t = map_1_0(a_3, t);
  }
  t = m_25;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_83(t);
      t = o_83(t);
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      t = o_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_82 (ATerm), ATerm t)
{
  ATerm s_25 = NULL,v_25 = NULL,x_25 = NULL,b_26 = NULL,c_26 = NULL;
  v_25 = t;
  t = m_82(t);
  s_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_25, term_j_23);
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_26 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_26 = ATgetArgument(t, 0);
            ATerm j_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_23;
        l_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_25, term_j_23);
        t = a_7(s_25, l_26, t);
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = (ATerm) ATempty;
      }
  }
  x_25 = t;
  t = term_j_23;
  b_26 = t;
  t = (ATerm) ATinsert(CheckATermList(x_25), (ATerm) ATempty);
  c_26 = t;
  t = SSL_table_put(s_25, b_26, c_26);
  t = v_25;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_o_23;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm x_26 = NULL;
  x_26 = t;
  {
    ATerm k_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(x_26);
        LocalPopChoice(m_26);
      }
    else
      {
        t = k_26;
        t = x_26;
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_o_23;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  ATerm p_26 = NULL;
  static ATerm j_3 (ATerm t)
  {
    ATerm q_26 = NULL;
    q_26 = t;
    {
      ATerm n_26 = t;
      int o_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_26 = NULL,s_26 = NULL;
          t = term_o_23;
          r_26 = t;
          t = term_j_23;
          s_26 = t;
          t = term_t_26;
          t = a_7(r_26, s_26, t);
          LocalPopChoice(o_26);
        }
      else
        {
          t = n_26;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((p_26 != NULL) && (p_26 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          p_26 = ATgetFirst((ATermList) t);
        {
          ATerm u_26 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = p_26;
    t = map_1_0(o_3, t);
    t = q_26;
    t = end_scope_1_0(p_3, t);
    return(t);
  }
  t = begin_scope_1_0(c_3, t);
  t = restore_always_2_0(n_86, j_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,h_27 = NULL,i_27 = NULL;
  d_27 = t;
  t = term_q_23;
  t = whoami_0_0(t);
  e_27 = t;
  t = term_z_17;
  h_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_26), e_27), term_v_26);
  i_27 = t;
  t = SSL_printnl(h_27, i_27);
  t = term_n_9;
  f_27 = t;
  t = SSL_exit(f_27);
  t = d_27;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm p_27 = NULL;
  p_27 = t;
  if(match_string(t, "-k"))
    {
      t = p_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_27;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
  q_27 = t;
  t = SSL_string_to_int(q_27);
  r_27 = t;
  t = term_y_26;
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_26, r_27);
  t = d_7(s_27, r_27, t);
  t = q_27;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_z_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_3, r_3, t_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm w_27 = NULL;
  w_27 = t;
  if(match_string(t, "-S"))
    {
      t = w_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_27;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  t = term_s_18;
  x_27 = t;
  t = term_a_27;
  y_27 = t;
  t = term_b_27;
  t = d_7(x_27, y_27, t);
  t = term_c_27;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_g_27;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,d_28 = NULL;
  z_27 = t;
  t = SSL_string_to_int(z_27);
  a_28 = t;
  t = term_s_18;
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_18, a_28);
  t = d_7(d_28, a_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_27);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_j_27;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL;
  t = term_e_24;
  e_28 = t;
  t = term_q_23;
  f_28 = t;
  t = term_k_27;
  t = d_7(e_28, f_28, t);
  t = term_l_27;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_m_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_3, x_3, y_3, t);
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      {
        ATerm t_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_3, c_4, e_4, t);
            LocalPopChoice(u_27);
          }
        else
          {
            t = t_27;
            t = Option_3_0(f_4, h_4, i_4, t);
          }
      }
    }
  return(t);
}
static ATerm d_7 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm i_28 = NULL;
  t = term_n_8;
  i_28 = t;
  t = SSL_table_put(i_28, e_39, f_39);
  t = (ATerm) ATmakeAppl(sym__3, term_n_8, e_39, f_39);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_28 = NULL,r_28 = NULL,u_28 = NULL;
      t = term_q_23;
      t = e_0(t);
      q_28 = t;
      t = term_v_27;
      r_28 = t;
      t = term_b_28;
      u_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_27, term_b_28, q_28);
      t = b_7(r_28, u_28, q_28, t);
      _fail(t);
    }
  else
    {
      ATerm x_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_28 = ATgetFirst((ATermList) t);
          o_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_28;
      t = c_0(t);
      t = term_q_23;
      t = d_0(t);
      x_28 = t;
      t = (ATerm) ATinsert(CheckATermList(o_28), x_28);
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm z_28 = NULL;
  z_28 = t;
  if(match_string(t, "-o"))
    {
      t = z_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_28;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL;
  a_29 = t;
  t = term_p_8;
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_8, a_29);
  t = d_7(b_29, a_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_29);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_c_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, k_4, l_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm d_29 = NULL;
  d_29 = t;
  if(match_string(t, "-i"))
    {
      t = d_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_29;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm e_29 = NULL,h_29 = NULL;
  e_29 = t;
  t = term_x_23;
  h_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_23, e_29);
  t = d_7(h_29, e_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_29);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_g_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_4, o_4, r_4, t);
  return(t);
}
static ATerm b_7 (ATerm t_36, ATerm u_36, ATerm s_36, ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_36, u_36);
  {
    ATerm h_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_28 = ATgetArgument(t, 0);
            ATerm l_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_36, u_36);
        t = a_7(t_36, u_36, t);
        LocalPopChoice(j_28);
      }
    else
      {
        t = h_28;
        t = (ATerm) ATempty;
      }
  }
  k_29 = t;
  t = (ATerm) ATinsert(CheckATermList(k_29), s_36);
  l_29 = t;
  t = SSL_table_put(t_36, u_36, l_29);
  t = j_29;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
      t = term_q_23;
      t = p_0(t);
      y_29 = t;
      t = term_v_27;
      z_29 = t;
      t = term_b_28;
      a_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_27, term_b_28, y_29);
      t = b_7(z_29, a_30, y_29, t);
      _fail(t);
    }
  else
    {
      ATerm f_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_29 = ATgetFirst((ATermList) t);
          v_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_29 = ATgetFirst((ATermList) t);
          x_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_29;
      t = n_0(t);
      t = w_29;
      t = o_0(t);
      f_30 = t;
      t = (ATerm) ATinsert(CheckATermList(x_29), f_30);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm t_72 (ATerm), ATerm t)
{
  static ATerm m_31 (ATerm t)
  {
    ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
    l_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_31 = ATgetFirst((ATermList) t);
        k_31 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_9 = NULL,v_9 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(l_31);
          q_9 = t;
          t = k_31;
          t = m_31(t);
          v_9 = t;
          t = (ATerm) ATinsert(CheckATermList(v_9), j_31);
          v_1 = t;
          t = SSLsetAnnotations(v_1, q_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_31;
        t = t_72(t);
      }
    return(t);
  }
  t = m_31(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
  h_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_30;
    }
  else
    {
      static ATerm t_4 (ATerm t)
      {
        t = not_null(j_30);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_30 = ATgetFirst((ATermList) t);
          if(((j_30 != NULL) && (j_30 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_30;
      t = at_end_1_0(t_4, t);
    }
  return(t);
}
static ATerm z_31 (ATerm r_31, ATerm t)
{
  ATerm s_31 = NULL;
  t = SSL_explode_term(r_31);
  if(match_cons(t, sym__2))
    {
      ATerm m_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_31;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  w_31 = t;
  if(match_cons(t, sym__2))
    {
      u_31 = ATgetArgument(t, 0);
      v_31 = ATgetArgument(t, 1);
      {
        ATerm p_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_4 (ATerm t)
            {
              t = v_31;
              return(t);
            }
            t = u_31;
            t = at_end_1_0(u_4, t);
            LocalPopChoice(s_28);
          }
        else
          {
            t = p_28;
            t = z_31(w_31, t);
          }
      }
    }
  else
    {
      t = z_31(w_31, t);
    }
  return(t);
}
static ATerm u_6 (ATerm k_39, ATerm j_39, ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,e_32 = NULL;
  t = k_39;
  {
    ATerm t_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_32 = NULL;
        t = term_n_8;
        h_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_8, k_39);
        t = a_7(h_32, k_39, t);
        LocalPopChoice(v_28);
      }
    else
      {
        t = t_28;
        t = (ATerm) ATempty;
      }
  }
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_39, b_32);
  t = conc_0_0(t);
  a_32 = t;
  t = term_n_8;
  e_32 = t;
  t = SSL_table_put(e_32, k_39, a_32);
  t = (ATerm) ATmakeAppl(sym__3, term_n_8, k_39, a_32);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL;
  i_32 = t;
  t = term_p_24;
  j_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_24, i_32);
  t = d_7(j_32, i_32, t);
  t = i_32;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_w_28;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm k_32 = NULL,p_32 = NULL,q_32 = NULL;
  k_32 = t;
  t = term_h_24;
  p_32 = t;
  t = (ATerm) ATinsert(ATempty, k_32);
  q_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_24, (ATerm) ATinsert(ATempty, k_32));
  t = u_6(p_32, q_32, t);
  t = k_32;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_y_28;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm s_32 = NULL,v_32 = NULL,y_32 = NULL;
  s_32 = t;
  t = term_h_25;
  v_32 = t;
  t = (ATerm) ATinsert(ATempty, s_32);
  y_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATinsert(ATempty, s_32));
  t = u_6(v_32, y_32, t);
  t = s_32;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_c_29;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--start", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm z_32 = NULL,c_33 = NULL;
  z_32 = t;
  t = term_c_24;
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_24, z_32);
  t = d_7(c_33, z_32, t);
  t = z_32;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm g_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(x_4, y_4, z_4, t);
      LocalPopChoice(i_29);
    }
  else
    {
      t = g_29;
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_5, b_5, c_5, t);
            LocalPopChoice(n_29);
          }
        else
          {
            t = m_29;
            {
              ATerm o_29 = t;
              int p_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(d_5, g_5, h_5, t);
                  LocalPopChoice(p_29);
                }
              else
                {
                  t = o_29;
                  t = ArgOption_3_0(j_5, k_5, l_5, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,j_33 = NULL,k_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_23;
  t = whoami_0_0(t);
  e_33 = t;
  t = term_z_17;
  j_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_29), e_33);
  k_33 = t;
  t = SSL_printnl(j_33, k_33);
  t = term_n_9;
  f_33 = t;
  t = SSL_exit(f_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL;
  t = term_n_8;
  l_33 = t;
  t = term_r_29;
  m_33 = t;
  t = term_s_29;
  t = a_7(l_33, m_33, t);
  return(t);
}
static ATerm x_6 (ATerm s_33, ATerm t_33, ATerm t)
{
  ATerm t_29 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_33, t_33);
      LocalPopChoice(b_30);
    }
  else
    {
      t = t_29;
      t = SSL_addr(s_33, t_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_79 (ATerm), ATerm j_79 (ATerm), ATerm t)
{
  ATerm o_33 = NULL,r_33 = NULL,u_33 = NULL;
  o_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_33;
      t = i_79(t);
    }
  else
    {
      ATerm d_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_33 = ATgetFirst((ATermList) t);
          u_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_33;
      t = foldr_2_0(i_79, j_79, t);
      d_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_33, d_34);
      t = j_79(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_a_27;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm l_10 = NULL,r_10 = NULL;
  if(match_cons(t, sym__2))
    {
      l_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(l_10, r_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_34 = NULL,h_10 = NULL,i_10 = NULL;
  t = times_0_0(t);
  i_10 = t;
  t = SSL_explode_term(i_10);
  if(match_cons(t, sym__2))
    {
      ATerm c_30 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10;
  t = foldr_2_0(m_5, n_5, t);
  g_34 = t;
  t = SSL_TicksToSeconds(g_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
  r_34 = t;
  if(match_cons(t, sym__2))
    {
      s_34 = ATgetArgument(t, 0);
      t_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_34;
        if((s_34 != t))
          {
            _fail(t);
          }
        t = r_34;
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = (ATerm) ATmakeAppl(sym__2, s_34, t_34);
        {
          ATerm g_30 = t;
          int k_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_34, t_34);
              LocalPopChoice(k_30);
            }
          else
            {
              t = g_30;
              t = SSL_gtr(s_34, t_34);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, s_34, t_34);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  {
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
        t = term_n_8;
        l_35 = t;
        t = term_s_18;
        m_35 = t;
        t = term_t_18;
        t = a_7(l_35, m_35, t);
        k_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_35, term_n_9);
        t = geq_0_0(t);
        t = x_34;
        t = z_83(t);
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
        t = x_34;
      }
  }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL,r_35 = NULL,s_35 = NULL;
  t = run_time_0_0(t);
  o_35 = t;
  t = term_q_23;
  t = whoami_0_0(t);
  p_35 = t;
  t = term_z_17;
  r_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_30), o_35), term_f_9), p_35);
  s_35 = t;
  t = SSL_printnl(r_35, s_35);
  t = (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_30), o_35), term_f_9), p_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_27;
  t_35 = t;
  t = SSL_exit(t_35);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL;
  j_36 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_36;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_36 = ATgetArgument(t, 0);
          {
            ATerm n_11 = NULL,o_2 = NULL;
            t = SSLgetAnnotations(j_36);
            n_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_36);
            o_2 = t;
            t = SSLsetAnnotations(o_2, n_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_36;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_35 = NULL,a_36 = NULL;
      t = term_n_8;
      w_35 = t;
      t = term_q_30;
      a_36 = t;
      t = term_r_30;
      t = a_7(w_35, a_36, t);
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
      t = fetch_1_0(q_5, t);
    }
  t = d_88(t);
  return(t);
}
ATerm map_1_0 (ATerm c_72 (ATerm), ATerm t)
{
  static ATerm k_37 (ATerm t)
  {
    ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
    h_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_37;
      }
    else
      {
        ATerm a_12 = NULL,d_12 = NULL,e_12 = NULL,s_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_37 = ATgetFirst((ATermList) t);
            j_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_37);
        a_12 = t;
        t = i_37;
        t = c_72(t);
        d_12 = t;
        t = j_37;
        t = k_37(t);
        e_12 = t;
        t = (ATerm) ATinsert(CheckATermList(e_12), d_12);
        s_2 = t;
        t = SSLsetAnnotations(s_2, a_12);
      }
    return(t);
  }
  t = k_37(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_37 = ATgetFirst((ATermList) t);
      o_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_37 = NULL,y_37 = NULL;
        static ATerm r_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_37)), not_null(y_37));
          return(t);
        }
        t = o_37;
        t = k_0(t);
        if(((x_37 != NULL) && (x_37 != t)))
          _fail(t);
        else
          x_37 = t;
        t = n_37;
        t = i_0(t);
        if(((y_37 != NULL) && (y_37 != t)))
          _fail(t);
        else
          y_37 = t;
        t = o_37;
        t = reverse_acc_2_0(i_0, r_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_23;
      t = k_0(t);
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm t_38 = NULL;
  t_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_38), term_s_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_38 = NULL,m_38 = NULL;
      t = term_n_8;
      j_38 = t;
      t = term_r_29;
      m_38 = t;
      t = term_s_29;
      t = a_7(j_38, m_38, t);
      g_38 = t;
      LocalPopChoice(u_30);
    }
  else
    {
      t = t_30;
      {
        static ATerm s_5 (ATerm t)
        {
          ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,y_2 = NULL;
          p_38 = t;
          if(match_cons(t, sym_Program_1))
            {
              o_38 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_38);
          n_38 = t;
          t = o_38;
          if(((g_38 != NULL) && (g_38 != t)))
            _fail(t);
          else
            g_38 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, o_38);
          y_2 = t;
          t = SSLsetAnnotations(y_2, n_38);
          return(t);
        }
        t = fetch_1_0(s_5, t);
      }
    }
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_30), not_null(g_38)), term_x_30);
        t = echo_0_0(t);
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
      }
  }
  t = term_z_30;
  t = echo_0_0(t);
  t = term_v_27;
  h_38 = t;
  t = term_b_28;
  i_38 = t;
  t = term_a_31;
  t = a_7(h_38, i_38, t);
  t = reverse_acc_2_0(_id, t_5, t);
  t = map_1_0(u_5, t);
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_31), term_f_31), term_e_31), term_d_31);
        t = echo_0_0(t);
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm m_72 (ATerm), ATerm t)
{
  static ATerm w_39 (ATerm t)
  {
    ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
    t_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_39 = ATgetFirst((ATermList) t);
        v_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_31 = t;
      int i_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_12 = NULL,t_12 = NULL,s_3 = NULL;
          t = SSLgetAnnotations(t_39);
          n_12 = t;
          t = u_39;
          t = m_72(t);
          t_12 = t;
          t = (ATerm) ATinsert(CheckATermList(v_39), t_12);
          s_3 = t;
          t = SSLsetAnnotations(s_3, n_12);
          LocalPopChoice(i_31);
        }
      else
        {
          t = h_31;
          {
            ATerm j_13 = NULL,r_13 = NULL,u_3 = NULL;
            t = SSLgetAnnotations(t_39);
            j_13 = t;
            t = v_39;
            t = w_39(t);
            r_13 = t;
            t = (ATerm) ATinsert(CheckATermList(r_13), u_39);
            u_3 = t;
            t = SSLsetAnnotations(u_3, j_13);
          }
        }
    }
    return(t);
  }
  t = w_39(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,d_40 = NULL;
  a_40 = t;
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_40;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_31 = ATgetFirst((ATermList) t);
                ATerm q_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_40;
          }
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
        t = (ATerm) ATinsert(ATempty, a_40);
      }
  }
  b_40 = t;
  t = term_t_8;
  d_40 = t;
  t = SSL_printnl(d_40, b_40);
  t = a_40;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL;
  t = term_n_8;
  j_40 = t;
  t = term_r_29;
  k_40 = t;
  t = term_s_29;
  t = a_7(j_40, k_40, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL;
  t = term_t_31;
  l_40 = t;
  t = term_q_23;
  m_40 = t;
  t = term_x_31;
  t = d_7(l_40, m_40, t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_y_31;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,u_40 = NULL;
  t = term_t_31;
  p_40 = t;
  t = term_q_23;
  u_40 = t;
  t = term_x_31;
  t = d_7(p_40, u_40, t);
  t = term_c_32;
  n_40 = t;
  t = term_q_23;
  o_40 = t;
  t = term_d_32;
  t = d_7(n_40, o_40, t);
  t = term_f_32;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_5, w_5, z_5, t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      t = Option_3_0(a_6, e_6, i_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,a_4 = NULL;
  a_41 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_40 = ATgetFirst((ATermList) t);
      x_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_41);
  v_40 = t;
  t = w_40;
  t = v_58(t);
  y_40 = t;
  t = x_40;
  t = w_58(t);
  z_40 = t;
  t = (ATerm) ATinsert(CheckATermList(z_40), y_40);
  a_4 = t;
  t = SSLsetAnnotations(a_4, v_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_90 (ATerm), ATerm t)
{
  ATerm f_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,n_41 = NULL,u_41 = NULL,d_4 = NULL;
  f_41 = t;
  {
    ATerm r_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_32;
        t = b_90(t);
        LocalPopChoice(t_32);
      }
    else
      {
        t = r_32;
      }
  }
  t = f_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_41 = ATgetFirst((ATermList) t);
      l_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_41);
  j_41 = t;
  t = term_r_29;
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_29, k_41);
  t = d_7(u_41, k_41, t);
  t = l_41;
  {
    static ATerm h_42 (ATerm t)
    {
      ATerm w_32 = t;
      int x_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_33 = t;
          int b_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_41 = NULL;
              x_41 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_41;
              LocalPopChoice(b_33);
            }
          else
            {
              t = a_33;
              t = b_90(t);
              t = Cons_2_0(_id, h_42, t);
            }
          LocalPopChoice(x_32);
        }
      else
        {
          t = w_32;
          {
            ATerm a_42 = NULL,b_42 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_42 = ATgetFirst((ATermList) t);
                b_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_42), (ATerm) ATmakeAppl(sym_Undefined_1, a_42));
          }
        }
      return(t);
    }
    t = h_42(t);
  }
  n_41 = t;
  t = (ATerm) ATinsert(CheckATermList(n_41), (ATerm) ATmakeAppl(sym_Program_1, k_41));
  d_4 = t;
  t = SSLsetAnnotations(d_4, j_41);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm z_42 = NULL;
  z_42 = t;
  if(match_string(t, "--help"))
    {
      t = z_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_42;
        }
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL;
  t = term_q_30;
  a_43 = t;
  t = term_q_23;
  b_43 = t;
  t = term_d_33;
  t = d_7(a_43, b_43, t);
  t = term_g_33;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_h_33;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_90 (ATerm), ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL;
  p_42 = t;
  t = term_v_27;
  r_42 = t;
  t = term_b_28;
  s_42 = t;
  t = (ATerm) ATempty;
  t_42 = t;
  t = SSL_table_put(r_42, s_42, t_42);
  t = p_42;
  {
    static ATerm f_7 (ATerm t)
    {
      ATerm i_33 = t;
      int n_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_90(t);
          LocalPopChoice(n_33);
        }
      else
        {
          t = i_33;
          {
            ATerm p_33 = t;
            int q_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_7, j_7, k_7, t);
                LocalPopChoice(q_33);
              }
            else
              {
                t = p_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_7, t);
  }
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_43 = NULL;
        o_43 = t;
        {
          ATerm x_33 = t;
          int y_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_14 = NULL;
              t = o_43;
              {
                ATerm z_33 = t;
                int a_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_14 = NULL,j_15 = NULL;
                    t = term_n_8;
                    p_14 = t;
                    t = term_q_30;
                    j_15 = t;
                    t = term_r_30;
                    t = a_7(p_14, j_15, t);
                    LocalPopChoice(a_34);
                  }
                else
                  {
                    t = z_33;
                    t = fetch_1_0(l_7, t);
                  }
              }
              t = o_43;
              t = default_system_usage_0_0(t);
              t = term_a_27;
              o_14 = t;
              t = SSL_exit(o_14);
              LocalPopChoice(y_33);
            }
          else
            {
              t = x_33;
              {
                ATerm y_15 = NULL,z_15 = NULL,d_16 = NULL;
                t = term_n_8;
                z_15 = t;
                t = term_t_31;
                d_16 = t;
                t = term_b_34;
                t = a_7(z_15, d_16, t);
                t = o_43;
                t = default_system_about_0_0(t);
                t = term_a_27;
                y_15 = t;
                t = SSL_exit(y_15);
              }
            }
        }
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        {
          ATerm c_34 = t;
          int e_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
              static ATerm p_7 (ATerm t)
              {
                ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,g_4 = NULL;
                u_43 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_43 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_43);
                s_43 = t;
                t = t_43;
                if(((n_42 != NULL) && (n_42 != t)))
                  _fail(t);
                else
                  n_42 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_43);
                g_4 = t;
                t = SSLsetAnnotations(g_4, s_43);
                return(t);
              }
              t = fetch_1_0(p_7, t);
              t = term_z_17;
              q_43 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_42)), term_f_34);
              r_43 = t;
              t = SSL_printnl(q_43, r_43);
              t = (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_42)), term_f_34));
              t = default_system_usage_0_0(t);
              t = term_n_9;
              p_43 = t;
              t = SSL_exit(p_43);
              LocalPopChoice(e_34);
            }
          else
            {
              t = c_34;
            }
        }
      }
  }
  o_42 = t;
  t = term_v_27;
  q_42 = t;
  t = SSL_table_destroy(q_42);
  t = o_42;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL;
  t = parse_options_1_0(f_88, t);
  z_43 = t;
  t = term_h_34;
  c_44 = t;
  t = SSL_table_create(c_44);
  t = term_h_34;
  a_44 = t;
  t = term_i_34;
  b_44 = t;
  t = SSL_table_put(a_44, b_44, z_43);
  t = z_43;
  t = h_88(t);
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_88, t);
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        {
          ATerm l_34 = t;
          int m_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_88(t);
              t = report_success_0_0(t);
              LocalPopChoice(m_34);
            }
          else
            {
              t = l_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm n_34 = t;
  int o_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sglri_options_0_0(t);
      LocalPopChoice(o_34);
    }
  else
    {
      t = n_34;
      {
        ATerm p_34 = t;
        int q_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(q_34);
          }
        else
          {
            t = p_34;
            {
              ATerm u_34 = t;
              int v_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(v_34);
                }
              else
                {
                  t = u_34;
                  {
                    ATerm w_34 = t;
                    int y_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(v_7, x_7, y_7, t);
                        LocalPopChoice(y_34);
                      }
                    else
                      {
                        t = w_34;
                        {
                          ATerm z_34 = t;
                          int a_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(a_35);
                            }
                          else
                            {
                              t = z_34;
                              t = keep_option_0_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = xtc_temp_files_1_0(z_7, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL;
  t = term_b_35;
  e_44 = t;
  t = term_q_23;
  f_44 = t;
  t = term_c_35;
  t = d_7(e_44, f_44, t);
  t = term_d_35;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_f_35;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
      t = term_n_8;
      i_44 = t;
      t = term_x_23;
      j_44 = t;
      t = term_j_35;
      t = a_7(i_44, j_44, t);
      h_44 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_44);
      LocalPopChoice(i_35);
    }
  else
    {
      t = h_35;
      t = term_y_8;
    }
  t = parse_and_implode_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(q_7, default_usage_0_0, _id, u_7, t);
  return(t);
}
