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
ATerm term_r_35;
ATerm term_q_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_y_34;
ATerm term_j_34;
ATerm term_f_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_d_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_v_32;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_i_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_b_30;
ATerm term_u_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_y_27;
ATerm term_u_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_z_25;
ATerm term_t_25;
ATerm term_o_25;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_b_24;
ATerm term_r_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_c_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_v_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_v_9);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_d_10, term_b_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_g_11, term_h_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_l_11, term_m_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_11, term_q_11, term_r_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_w_11, term_x_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_d_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_g_12, term_k_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_r_12, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_v_12, term_w_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_h_13, term_i_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_t_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_b_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_j_14, term_k_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_q_14, term_r_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_a_15, term_b_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_i_15, term_j_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_o_15, term_p_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_u_15, term_v_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_c_16, term_g_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_k_16, term_l_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_v_16, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_z_16, term_a_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_k_17, term_s_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_17, term_y_17, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_d_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_g_18, term_h_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_18, term_k_18, term_l_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_18, term_p_18, term_q_18);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_t_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_z_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_m_22);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_e_24);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__2, term_a_20, term_s_19);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_d_20);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_e_20);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_m_26);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_26);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__2, term_v_26, term_c_20);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym__2, term_o_28, term_c_20);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_r_28, term_c_20);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_a_29);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_b_30);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_r_27, term_s_27);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym__2, term_s_30, term_c_20);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym__2, term_v_30, term_c_20);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_b_30, term_c_20);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_s_30);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__2, term_z_33, term_c_20);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_o_28);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_r_28);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm e_6 (ATerm v_33, ATerm w_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm f_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm g_6 (ATerm q_66 (ATerm), ATerm c_172, ATerm x_17, ATerm t);
static ATerm h_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm t);
static ATerm h_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm s_71 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm f_65 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm a_86 (ATerm), ATerm t);
static ATerm j_6 (ATerm p_81 (ATerm), ATerm d_35, ATerm b_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm o_66 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm c_83 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm b_83 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm d_83 (ATerm), ATerm t);
static ATerm l_6 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm b_25, ATerm a_25, ATerm t);
static ATerm m_6 (ATerm q_75 (ATerm), ATerm x_24, ATerm w_24, ATerm t);
static ATerm c_1 (ATerm t);
static ATerm n_6 (ATerm n_37, ATerm o_37, ATerm p_37, ATerm t);
static ATerm o_6 (ATerm f_83 (ATerm), ATerm x_37, ATerm w_37, ATerm t);
static ATerm t_6 (ATerm t_39, ATerm u_39, ATerm t);
static ATerm h_12 (ATerm t_11, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm p_6 (ATerm t_17, ATerm t);
static ATerm q_6 (ATerm k_32, ATerm l_32, ATerm t);
static ATerm r_6 (ATerm c_40, ATerm d_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_14 (ATerm z_12, ATerm t);
static ATerm z_14 (ATerm e_13, ATerm f_13, ATerm g_13, ATerm t);
static ATerm c_15 (ATerm v_13, ATerm z_13, ATerm a_14, ATerm t);
static ATerm s_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_79 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm j_21 (ATerm k_20, ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm a_7 (ATerm h_38, ATerm i_38, ATerm t);
ATerm foldr_3_0 (ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
ATerm pass_includes_0_0 (ATerm t);
static ATerm u_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm v_6 (ATerm v_36, ATerm w_36, ATerm t);
ATerm end_scope_1_0 (ATerm m_81 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm l_81 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm m_85 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm n_85 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_7 (ATerm q_38, ATerm r_38, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm x_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm w_29 (ATerm n_29, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm w_6 (ATerm w_38, ATerm v_38, ATerm t);
static ATerm b_7 (ATerm q_36, ATerm r_36, ATerm p_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm pp_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_6 (ATerm p_33, ATerm q_33, ATerm t);
ATerm foldr_2_0 (ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm y_82 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm need_help_1_0 (ATerm c_87 (ATerm), ATerm t);
ATerm map_1_0 (ATerm g_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_71 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_58 (ATerm), ATerm h_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm a_89 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm parse_options_1_0 (ATerm z_88 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
ATerm pp_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm e_6 (ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm s_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(v_33, w_33);
      LocalPopChoice(t_9);
    }
  else
    {
      t = s_9;
      t = SSL_subtr(v_33, w_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,m_0 = NULL;
  t = term_v_9;
  {
    ATerm y_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_0 = NULL,u_0 = NULL;
        t = term_a_10;
        t_0 = t;
        t = term_v_9;
        u_0 = t;
        t = term_c_10;
        t = a_7(t_0, u_0, t);
        LocalPopChoice(z_9);
      }
    else
      {
        t = y_9;
        t = term_d_10;
      }
  }
  b_0 = t;
  t = term_d_10;
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_d_10);
  t = e_6(b_0, m_0, t);
  f_0 = t;
  t = SSL_int_to_string(f_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_v_9);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm a_1 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_g_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm f_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_i_10);
      f_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_1, (ATerm) ATinsert(ATempty, term_i_10));
      t = t_6(a_1, f_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm f_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm g_1 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_1);
  return(t);
}
static ATerm g_6 (ATerm q_66 (ATerm), ATerm c_172, ATerm x_17, ATerm t)
{
  ATerm h_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_172, term_j_10);
  t = s_6(t);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, x_17);
  t = q_66(t);
  t = fclose_0_0(t);
  t = x_17;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      if(match_cons(l_10, sym_Stream_1))
        {
          k_1 = ATgetArgument(l_10, 0);
        }
      else
        _fail(t);
      l_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(k_1, l_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL;
  j_1 = t;
  t = xtc_new_file_0_0(t);
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_1, j_1);
  t = g_6(h_0, i_1, j_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_1);
  t = xtc_transform_file_2_0(z_84, a_85, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm h_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,g_3 = NULL;
  b_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      c_3 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,v_0 = NULL;
        t = SSL_int_to_string(c_3);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_10), s_0), term_m_10);
        v_0 = t;
        t = SSL_concat_strings(v_0);
      }
    }
  else
    {
      ATerm p_1 = NULL,q_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          c_3 = ATgetArgument(t, 0);
          d_3 = ATgetArgument(t, 1);
          g_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(d_3);
      p_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_3), term_p_10), p_1), term_o_10), c_3);
      q_1 = t;
      t = SSL_concat_strings(q_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm s_71 (ATerm), ATerm t)
{
  ATerm m_3 = NULL;
  static ATerm j_0 (ATerm t)
  {
    t = s_71(t);
    if(((m_3 != NULL) && (m_3 != t)))
      _fail(t);
    else
      m_3 = t;
    return(t);
  }
  t = fetch_1_0(j_0, t);
  t = not_null(m_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm o_3 = NULL;
  o_3 = t;
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm u_10 = ATgetArgument(t, 0);
              if((o_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm v_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_18), term_m_18), term_i_18), term_e_18), term_a_18), term_v_17), term_c_17), term_x_16), term_r_16), term_h_16), term_z_15), term_r_15), term_l_15), term_d_15), term_t_14), term_l_14), term_d_14), term_u_13), term_k_13), term_c_13), term_t_12), term_m_12), term_e_12), term_a_12), term_s_11), term_n_11), term_j_11), term_c_11);
        t = fetch_elem_1_0(q_0, t);
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, o_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm t_3 = NULL,c_4 = NULL;
  t_3 = t;
  {
    ATerm t_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_18 = ATgetArgument(t, 0);
            c_4 = ATgetArgument(t, 1);
            {
              ATerm a_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_18);
        {
          ATerm b_19 = t;
          int d_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_2 = NULL,i_2 = NULL,j_2 = NULL;
              t = c_4;
              {
                ATerm h_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_19;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              b_2 = t;
              t = term_i_19;
              i_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, b_2), term_j_19);
              j_2 = t;
              t = SSL_printnl(i_2, j_2);
              t = (ATerm) ATmakeAppl(sym__2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, b_2), term_j_19));
              LocalPopChoice(d_19);
            }
          else
            {
              t = b_19;
              t = t_3;
            }
        }
      }
    else
      {
        t = t_18;
        t = t_3;
      }
  }
  t = t_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm f_65 (ATerm), ATerm t)
{
  ATerm m_4 = NULL,o_4 = NULL;
  o_4 = t;
  t = fork_0_0(t);
  m_4 = t;
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = o_4;
        t = f_65(t);
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = SSL_waitpid(m_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_19 = ATgetArgument(t, 0);
            if(((ATgetType(m_19) != AT_INT) || (ATgetInt((ATermInt) m_19) != 0)))
              _fail(t);
            {
              ATerm n_19 = ATgetArgument(t, 1);
            }
            {
              ATerm o_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = o_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm a_86 (ATerm), ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL;
  r_4 = t;
  t = a_86(t);
  t = xtc_find_0_0(t);
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_4, r_4);
  {
    static ATerm w_0 (ATerm t)
    {
      ATerm s_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, q_4, r_4);
      t = h_6(q_4, r_4, t);
      t = term_p_19;
      s_4 = t;
      t = SSL_exit(s_4);
      return(t);
    }
    t = fork_and_wait_1_0(w_0, t);
  }
  t = r_4;
  return(t);
}
static ATerm j_6 (ATerm p_81 (ATerm), ATerm d_35, ATerm b_35, ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  t = p_81(t);
  t_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_4, d_35, b_35);
  t = b_7(t_4, d_35, b_35, t);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 = NULL;
        t = term_s_19;
        a_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_4, term_s_19);
        t = a_7(t_4, a_5, t);
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_4 = ATgetFirst((ATermList) t);
      v_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_s_19;
  y_4 = t;
  t = (ATerm) ATinsert(CheckATermList(v_4), (ATerm) ATinsert(CheckATermList(u_4), d_35));
  z_4 = t;
  t = SSL_table_put(t_4, y_4, z_4);
  t = x_4;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm c_5 = NULL;
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_5 = NULL,n_2 = NULL;
      k_5 = t;
      t = term_w_19;
      n_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_5, term_w_19);
      t = q_6(k_5, n_2, t);
      c_5 = t;
      t = SSL_mkstemp(c_5);
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      {
        ATerm l_5 = NULL;
        t = term_x_19;
        l_5 = t;
        t = SSL_perror(l_5);
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
static ATerm x_0 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm p_5 = NULL,u_5 = NULL,w_5 = NULL,x_5 = NULL,c_6 = NULL;
  t = P__tmpdir_0_0(t);
  x_5 = t;
  t = term_b_20;
  c_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_5, term_b_20);
  t = q_6(x_5, c_6, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_c_20;
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_5, term_c_20);
  t = j_6(x_0, u_5, w_5, t);
  t = SSL_close(p_5);
  t = u_5;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL;
  y_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_7 = NULL,e_7 = NULL;
      t = y_6;
      t = xtc_new_file_0_0(t);
      c_7 = t;
      t = r_0(t);
      e_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_7, (ATerm) ATinsert(ATinsert(ATempty, c_7), term_d_20));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_7);
    }
  else
    {
      ATerm i_7 = NULL,l_7 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_6;
      t = xtc_new_file_0_0(t);
      i_7 = t;
      t = r_0(t);
      l_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_7), term_d_20), z_6), term_e_20));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_7);
    }
  return(t);
}
ATerm debug_1_0 (ATerm o_66 (ATerm), ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,p_7 = NULL,q_7 = NULL;
  m_7 = t;
  t = o_66(t);
  n_7 = t;
  t = term_i_19;
  p_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_7), n_7);
  q_7 = t;
  t = SSL_printnl(p_7, q_7);
  t = m_7;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_7 = NULL;
  static ATerm y_0 (ATerm t)
  {
    ATerm v_7 = NULL,w_7 = NULL;
    v_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_7), v_7);
    t = a_7(not_null(t_7), v_7, t);
    w_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_7, w_7);
    return(t);
  }
  if(((t_7 != NULL) && (t_7 != t)))
    _fail(t);
  else
    t_7 = t;
  t = SSL_table_keys(t_7);
  t = map_1_0(y_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  ATerm a_8 = NULL;
  a_8 = t;
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL,f_8 = NULL,h_8 = NULL;
        t = term_a_10;
        f_8 = t;
        t = term_v_9;
        h_8 = t;
        t = term_c_10;
        t = a_7(f_8, h_8, t);
        c_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_8, term_c_18);
        t = geq_0_0(t);
        t = a_8;
        t = c_83(t);
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
        t = a_8;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_83 (ATerm), ATerm t)
{
  ATerm o_8 = NULL;
  o_8 = t;
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_8 = NULL,t_8 = NULL,y_8 = NULL;
        t = term_a_10;
        t_8 = t;
        t = term_v_9;
        y_8 = t;
        t = term_c_10;
        t = a_7(t_8, y_8, t);
        s_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_8, term_x_13);
        t = geq_0_0(t);
        t = o_8;
        t = b_83(t);
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        t = o_8;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm e_9 = NULL;
  e_9 = t;
  {
    ATerm j_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
        t = term_a_10;
        h_9 = t;
        t = term_v_9;
        i_9 = t;
        t = term_c_10;
        t = a_7(h_9, i_9, t);
        g_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_9, term_q_11);
        t = geq_0_0(t);
        t = e_9;
        t = d_83(t);
        LocalPopChoice(l_20);
      }
    else
      {
        t = j_20;
        t = e_9;
      }
  }
  return(t);
}
static ATerm l_6 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm b_25, ATerm a_25, ATerm t)
{
  t = u_75(t);
  {
    static ATerm z_0 (ATerm t)
    {
      ATerm n_9 = NULL;
      n_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_25, n_9);
      t = t_75(t);
      return(t);
    }
    t = fetch_1_0(z_0, t);
  }
  t = a_25;
  return(t);
}
static ATerm m_6 (ATerm q_75 (ATerm), ATerm x_24, ATerm w_24, ATerm t)
{
  static ATerm k_10 (ATerm t)
  {
    ATerm e_10 = NULL,f_10 = NULL,h_10 = NULL;
    e_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_10 = ATgetFirst((ATermList) t);
            h_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_20 = t;
          int n_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_10;
              {
                static ATerm b_1 (ATerm t)
                {
                  t = w_24;
                  return(t);
                }
                t = l_6(q_75, b_1, f_10, h_10, t);
              }
              t = k_10(t);
              LocalPopChoice(n_20);
            }
          else
            {
              t = m_20;
              {
                ATerm s_2 = NULL,v_2 = NULL,s_1 = NULL;
                t = SSLgetAnnotations(e_10);
                s_2 = t;
                t = h_10;
                t = k_10(t);
                v_2 = t;
                t = (ATerm) ATinsert(CheckATermList(v_2), f_10);
                s_1 = t;
                t = SSLsetAnnotations(s_1, s_2);
              }
            }
        }
      }
    return(t);
  }
  t = x_24;
  t = k_10(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm e_11 = NULL;
  if(match_cons(t, sym__2))
    {
      e_11 = ATgetArgument(t, 0);
      if((e_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_6 (ATerm n_37, ATerm o_37, ATerm p_37, ATerm t)
{
  ATerm q_10 = NULL,w_10 = NULL,x_10 = NULL;
  q_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_37, o_37);
  {
    ATerm o_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_20 = ATgetArgument(t, 0);
            ATerm x_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_37, o_37);
        t = a_7(n_37, o_37, t);
        LocalPopChoice(u_20);
      }
    else
      {
        t = o_20;
        t = (ATerm) ATempty;
      }
  }
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_10, p_37);
  t = m_6(c_1, x_10, p_37, t);
  w_10 = t;
  t = SSL_table_put(n_37, o_37, w_10);
  t = q_10;
  return(t);
}
static ATerm o_6 (ATerm f_83 (ATerm), ATerm x_37, ATerm w_37, ATerm t)
{
  static ATerm d_1 (ATerm t)
  {
    ATerm f_11 = NULL,i_11 = NULL;
    if(match_cons(t, sym__2))
      {
        f_11 = ATgetArgument(t, 0);
        i_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, x_37, f_11, i_11);
    t = f_83(t);
    return(t);
  }
  t = w_37;
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm t_6 (ATerm t_39, ATerm u_39, ATerm t)
{
  t = SSL_access(t_39, u_39);
  return(t);
}
static ATerm h_12 (ATerm t_11, ATerm t)
{
  t = SSL_fclose(t_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL;
  z_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_11 = ATgetArgument(t, 0);
      {
        ATerm y_20 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_11);
            LocalPopChoice(c_21);
          }
        else
          {
            t = y_20;
            t = h_12(z_11, t);
          }
      }
    }
  else
    {
      t = h_12(z_11, t);
    }
  return(t);
}
static ATerm p_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm q_6 (ATerm k_32, ATerm l_32, ATerm t)
{
  t = SSL_strcat(k_32, l_32);
  return(t);
}
static ATerm r_6 (ATerm c_40, ATerm d_40, ATerm t)
{
  ATerm i_12 = NULL;
  t = SSL_fopen(c_40, d_40);
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_12);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_12 = NULL;
  t = SSL_stdin_stream();
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_12 = NULL;
  t = SSL_stdout_stream();
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_12 = NULL;
  t = SSL_stderr_stream();
  q_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_12);
  return(t);
}
static ATerm y_14 (ATerm z_12, ATerm t)
{
  ATerm b_13 = NULL;
  t = SSL_explode_term(z_12);
  if(match_cons(t, sym__2))
    {
      ATerm d_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_21 = ATgetArgument(t, 1);
        if(((ATgetType(e_21) == AT_LIST) && !(ATisEmpty(e_21))))
          {
            b_13 = ATgetFirst((ATermList) e_21);
            {
              ATerm f_21 = (ATerm) ATgetNext((ATermList) e_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_13;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_13;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_14 (ATerm e_13, ATerm f_13, ATerm g_13, ATerm t)
{
  ATerm j_13 = NULL,l_13 = NULL,m_13 = NULL,r_13 = NULL,x_1 = NULL;
  t = SSLgetAnnotations(g_13);
  m_13 = t;
  t = e_13;
  if(match_cons(t, sym_Path_1))
    {
      r_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_13, f_13);
  x_1 = t;
  t = SSLsetAnnotations(x_1, m_13);
  if(match_cons(t, sym__2))
    {
      j_13 = ATgetArgument(t, 0);
      l_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(j_13, l_13, t);
  return(t);
}
static ATerm c_15 (ATerm v_13, ATerm z_13, ATerm a_14, ATerm t)
{
  ATerm c_14 = NULL,e_14 = NULL,h_14 = NULL,m_14 = NULL,y_1 = NULL;
  t = SSLgetAnnotations(a_14);
  h_14 = t;
  t = SSL_is_string(v_13);
  m_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_14, z_13);
  y_1 = t;
  t = SSLsetAnnotations(y_1, h_14);
  if(match_cons(t, sym__2))
    {
      c_14 = ATgetArgument(t, 0);
      e_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(c_14, e_14, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm u_14 = NULL,w_14 = NULL,x_14 = NULL;
  u_14 = t;
  if(match_cons(t, sym__2))
    {
      w_14 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_14(u_14, t);
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            {
              ATerm k_21 = t;
              int l_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_14(w_14, x_14, u_14, t);
                  LocalPopChoice(l_21);
                }
              else
                {
                  t = k_21;
                  t = c_15(w_14, x_14, u_14, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_14(u_14, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,n_15 = NULL;
  n_15 = t;
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_15, term_t_21);
        t = s_6(t);
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        {
          ATerm y_3 = NULL,i_4 = NULL;
          t = term_v_21;
          i_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_21, n_15);
          t = q_6(i_4, n_15, t);
          y_3 = t;
          t = SSL_perror(y_3);
          _fail(t);
        }
      }
  }
  g_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(h_15, t);
  f_15 = t;
  t = g_15;
  t = fclose_0_0(t);
  t = f_15;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_x_21;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_15 = NULL,t_15 = NULL;
      q_15 = t;
      t = (ATerm) ATinsert(ATempty, term_c_22);
      t_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_15, (ATerm) ATinsert(ATempty, term_c_22));
      t = t_6(q_15, t_15, t);
      LocalPopChoice(b_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = a_22;
      {
        ATerm d_22 = t;
        int e_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_22 = t;
            if((PushChoice() == 0))
              {
                ATerm w_15 = NULL,x_15 = NULL;
                w_15 = t;
                t = (ATerm) ATinsert(ATempty, term_i_10);
                x_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_15, (ATerm) ATinsert(ATempty, term_i_10));
                t = t_6(w_15, x_15, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_22;
              }
            t = debug_1_0(e_1, t);
            LocalPopChoice(e_22);
          }
        else
          {
            t = d_22;
            t = debug_1_0(m_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_g_22;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = debug_1_0(t_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_h_22;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  t = term_i_19;
  e_17 = t;
  t = (ATerm) ATinsert(ATempty, term_i_22);
  f_17 = t;
  t = SSL_printnl(e_17, f_17);
  t = d_17;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  if(match_cons(t, sym__3))
    {
      g_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
      i_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_6(g_17, h_17, i_17, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,p_17 = NULL;
  l_17 = t;
  t = term_i_19;
  m_17 = t;
  t = (ATerm) ATinsert(ATempty, term_j_22);
  p_17 = t;
  t = SSL_printnl(m_17, p_17);
  t = l_17;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,u_17 = NULL;
  q_17 = t;
  t = term_i_19;
  r_17 = t;
  t = (ATerm) ATinsert(ATempty, term_i_22);
  u_17 = t;
  t = SSL_printnl(r_17, u_17);
  t = q_17;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm y_15 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,j_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,q_16 = NULL,s_16 = NULL;
  y_15 = t;
  t = if_verbose5_1_0(n_1, t);
  {
    ATerm k_22 = t;
    if((PushChoice() == 0))
      {
        ATerm u_16 = NULL,b_17 = NULL;
        t = term_l_22;
        u_16 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, y_15);
        b_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_22, (ATerm) ATmakeAppl(sym_Imported_1, y_15));
        t = a_7(u_16, b_17, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_22;
      }
  }
  e_16 = t;
  t = term_l_22;
  o_16 = t;
  t = term_m_22;
  q_16 = t;
  t = (ATerm) ATinsert(ATempty, y_15);
  s_16 = t;
  t = SSL_table_put(o_16, q_16, s_16);
  t = e_16;
  t = if_verbose4_1_0(r_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(u_1, t);
  d_16 = t;
  t = term_l_22;
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_22, d_16);
  t = o_6(v_1, n_16, d_16, t);
  t = if_verbose6_1_0(w_1, t);
  t = term_l_22;
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, y_15);
  j_16 = t;
  t = (ATerm) ATempty;
  m_16 = t;
  t = SSL_table_put(f_16, j_16, m_16);
  t = (ATerm) ATmakeAppl(sym__3, term_l_22, (ATerm)ATmakeAppl(sym_Imported_1, y_15), (ATerm) ATempty);
  t = if_verbose4_1_0(z_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm l_79 (ATerm), ATerm t)
{
  ATerm o_18 = NULL,s_18 = NULL,u_18 = NULL;
  o_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_18;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_18 = ATgetFirst((ATermList) t);
          u_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm n_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_4 = NULL,f_5 = NULL,g_5 = NULL,d_2 = NULL;
            t = SSLgetAnnotations(o_18);
            w_4 = t;
            t = s_18;
            t = l_79(t);
            f_5 = t;
            t = u_18;
            t = filter_1_0(l_79, t);
            g_5 = t;
            t = (ATerm) ATinsert(CheckATermList(g_5), f_5);
            d_2 = t;
            t = SSLsetAnnotations(d_2, w_4);
            LocalPopChoice(o_22);
          }
        else
          {
            t = n_22;
            t = u_18;
            t = filter_1_0(l_79, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm t)
{
  static ATerm x_18 (ATerm t)
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_69(t);
        t = x_18(t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = m_69(t);
      }
    return(t);
  }
  t = x_18(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_18 = NULL,z_18 = NULL;
      t = term_a_10;
      y_18 = t;
      t = term_t_22;
      z_18 = t;
      t = term_u_22;
      t = a_7(y_18, z_18, t);
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_19 = NULL;
            t = term_x_22;
            c_19 = t;
            t = SSL_getenv(c_19);
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_y_22;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL;
  t = term_l_22;
  y_19 = t;
  t = term_z_22;
  z_19 = t;
  t = term_a_23;
  t = a_7(y_19, z_19, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm b_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_23;
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
  t = term_c_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm e_19 = NULL;
  t = if_verbose5_1_0(a_2, t);
  e_19 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_19 = NULL,g_19 = NULL;
        t = term_l_22;
        f_19 = t;
        t = term_m_22;
        g_19 = t;
        t = term_f_23;
        t = a_7(f_19, g_19, t);
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        {
          ATerm t_19 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          t_19 = t;
          t = repeat_2_0(e_2, _id, t);
          t = t_19;
        }
      }
  }
  t = e_19;
  t = if_verbose5_1_0(g_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_i_23;
  return(t);
}
static ATerm j_21 (ATerm k_20, ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  t = term_l_22;
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, k_20);
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_22, (ATerm) ATmakeAppl(sym_Tool_1, k_20));
  t = a_7(q_20, r_20, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_23 = ATgetFirst((ATermList) t);
      if(match_cons(j_23, sym__2))
        {
          ATerm l_23 = ATgetArgument(j_23, 0);
          p_20 = ATgetArgument(j_23, 1);
        }
      else
        _fail(t);
      {
        ATerm k_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_20;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_i_23;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_l_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_r_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm t_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_20 = NULL,t_20 = NULL,w_20 = NULL;
      t = if_verbose5_1_0(k_2, t);
      t = xtc_load_0_0(t);
      w_20 = t;
      if(match_cons(t, sym__2))
        {
          s_20 = ATgetArgument(t, 0);
          t_20 = ATgetArgument(t, 1);
          {
            ATerm y_23 = t;
            int a_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
                t = term_l_22;
                a_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, s_20);
                b_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_22, (ATerm) ATmakeAppl(sym_Tool_1, s_20));
                t = a_7(a_21, b_21, t);
                {
                  static ATerm m_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((t_20 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((z_20 != NULL) && (z_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          z_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(m_2, t);
                }
                t = not_null(z_20);
                LocalPopChoice(a_24);
              }
            else
              {
                t = y_23;
                t = j_21(w_20, t);
              }
          }
        }
      else
        {
          t = j_21(w_20, t);
        }
      t = if_verbose5_1_0(o_2, t);
      LocalPopChoice(x_23);
    }
  else
    {
      t = t_23;
      {
        ATerm i_21 = NULL,t_5 = NULL,v_5 = NULL;
        i_21 = t;
        t = term_i_19;
        t_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_24), i_21), term_b_24);
        v_5 = t;
        t = SSL_printnl(t_5, v_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_24), i_21), term_b_24);
        t = if_verbose5_1_0(q_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm a_7 (ATerm h_38, ATerm i_38, ATerm t)
{
  t = SSL_table_get(h_38, i_38);
  return(t);
}
ATerm foldr_3_0 (ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_21;
      t = j_78(t);
    }
  else
    {
      ATerm r_21 = NULL,s_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_21 = ATgetFirst((ATermList) t);
          o_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_21;
      t = l_78(t);
      r_21 = t;
      t = o_21;
      t = foldr_3_0(j_78, k_78, l_78, t);
      s_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_21, s_21);
      t = k_78(t);
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm z_21 = NULL;
  z_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_21), term_e_24);
  return(t);
}
ATerm pass_includes_0_0 (ATerm t)
{
  t = term_e_24;
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_21 = NULL,w_21 = NULL;
        t = term_a_10;
        u_21 = t;
        t = term_e_24;
        w_21 = t;
        t = term_h_24;
        t = a_7(u_21, w_21, t);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = (ATerm) ATempty;
      }
  }
  t = foldr_3_0(_id, conc_0_0, t_2, t);
  return(t);
}
static ATerm u_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL;
  g_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_6 = NULL;
        t = g_23;
        t = o_0(t);
        d_6 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = d_6;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = d_6;
          }
        t = (ATerm) ATmakeAppl(sym__2, h_23, d_6);
        t = u_6(h_23, d_6, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_23);
        LocalPopChoice(l_24);
      }
    else
      {
        t = i_24;
        {
          ATerm m_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_7 = NULL;
              t = g_23;
              t = o_0(t);
              o_7 = t;
              {
                ATerm p_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm r_7 = NULL;
                    r_7 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = r_7;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = r_7;
                          }
                        else
                          {
                            t = r_7;
                            if((h_23 != t))
                              {
                                _fail(t);
                              }
                            t = r_7;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_24;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, h_23, o_7);
              t = u_6(h_23, o_7, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_23);
              LocalPopChoice(o_24);
            }
          else
            {
              t = m_24;
              t = g_23;
              t = o_0(t);
              if((h_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_23);
            }
        }
      }
  }
  return(t);
}
static ATerm v_6 (ATerm v_36, ATerm w_36, ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL;
  n_23 = t;
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_36, w_36);
        t = a_7(v_36, w_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_24 = ATgetFirst((ATermList) t);
            m_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_24);
        t = SSL_table_put(v_36, w_36, m_23);
        t = (ATerm) ATmakeAppl(sym__3, v_36, w_36, m_23);
      }
    else
      {
        t = q_24;
        t = SSL_table_remove(v_36, w_36);
        t = (ATerm) ATmakeAppl(sym__2, v_36, w_36);
      }
  }
  t = n_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm m_81 (ATerm), ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,s_23 = NULL,u_23 = NULL;
  s_23 = t;
  t = m_81(t);
  q_23 = t;
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL;
        t = term_s_19;
        v_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_23, term_s_19);
        t = a_7(q_23, v_23, t);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_23 = ATgetFirst((ATermList) t);
      o_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_s_19;
  u_23 = t;
  t = SSL_table_put(q_23, u_23, o_23);
  t = p_23;
  {
    static ATerm u_2 (ATerm t)
    {
      ATerm w_23 = NULL;
      w_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_23, w_23);
      t = v_6(q_23, w_23, t);
      return(t);
    }
    t = map_1_0(u_2, t);
  }
  t = s_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm t)
{
  ATerm y_24 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_82(t);
      t = n_82(t);
      LocalPopChoice(c_25);
    }
  else
    {
      t = y_24;
      t = n_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  ATerm z_23 = NULL,c_24 = NULL,j_24 = NULL,k_24 = NULL,n_24 = NULL;
  c_24 = t;
  t = l_81(t);
  z_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_23, term_s_19);
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_25 = ATgetArgument(t, 0);
            ATerm i_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_19;
        s_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_23, term_s_19);
        t = a_7(z_23, s_24, t);
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
        t = (ATerm) ATempty;
      }
  }
  j_24 = t;
  t = term_s_19;
  k_24 = t;
  t = (ATerm) ATinsert(CheckATermList(j_24), (ATerm) ATempty);
  n_24 = t;
  t = SSL_table_put(z_23, k_24, n_24);
  t = c_24;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_a_20;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm p_25 = NULL;
  p_25 = t;
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(p_25);
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = p_25;
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm m_85 (ATerm), ATerm t)
{
  ATerm z_24 = NULL;
  static ATerm z_2 (ATerm t)
  {
    ATerm f_25 = NULL;
    f_25 = t;
    {
      ATerm l_25 = t;
      int n_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_25 = NULL,m_25 = NULL;
          t = term_a_20;
          g_25 = t;
          t = term_s_19;
          m_25 = t;
          t = term_o_25;
          t = a_7(g_25, m_25, t);
          LocalPopChoice(n_25);
        }
      else
        {
          t = l_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((z_24 != NULL) && (z_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          z_24 = ATgetFirst((ATermList) t);
        {
          ATerm q_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = z_24;
    t = map_1_0(a_3, t);
    t = f_25;
    t = end_scope_1_0(e_3, t);
    return(t);
  }
  t = begin_scope_1_0(x_2, t);
  t = restore_always_2_0(m_85, z_2, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_25 = NULL,y_25 = NULL;
      t = term_a_10;
      x_25 = t;
      t = term_d_20;
      y_25 = t;
      t = term_t_25;
      t = a_7(x_25, y_25, t);
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      t = term_z_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm n_85 (ATerm), ATerm t)
{
  static ATerm f_3 (ATerm t)
  {
    ATerm a_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
        t = term_a_10;
        v_25 = t;
        t = term_e_20;
        w_25 = t;
        t = term_f_26;
        t = a_7(v_25, w_25, t);
        u_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, u_25);
        LocalPopChoice(e_26);
      }
    else
      {
        t = a_26;
        t = term_g_10;
      }
    t = n_85(t);
    t = copy_to_1_0(h_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(f_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,k_26 = NULL,l_26 = NULL;
  b_26 = t;
  t = term_c_20;
  t = whoami_0_0(t);
  c_26 = t;
  t = term_i_19;
  k_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_26), c_26), term_g_26);
  l_26 = t;
  t = SSL_printnl(k_26, l_26);
  t = term_d_10;
  d_26 = t;
  t = SSL_exit(d_26);
  t = b_26;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm p_26 = NULL;
  p_26 = t;
  if(match_string(t, "-k"))
    {
      t = p_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_26;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm q_26 = NULL,s_26 = NULL,t_26 = NULL;
  q_26 = t;
  t = SSL_string_to_int(q_26);
  s_26 = t;
  t = term_i_26;
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_26, s_26);
  t = d_7(t_26, s_26, t);
  t = q_26;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_3, k_3, l_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm x_26 = NULL;
  x_26 = t;
  if(match_string(t, "-S"))
    {
      t = x_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_26;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL;
  t = term_v_9;
  y_26 = t;
  t = term_m_26;
  z_26 = t;
  t = term_n_26;
  t = d_7(y_26, z_26, t);
  t = term_o_26;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_r_26;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
  a_27 = t;
  t = SSL_string_to_int(a_27);
  b_27 = t;
  t = term_v_9;
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_9, b_27);
  t = d_7(c_27, b_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_27);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_u_26;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL;
  t = term_v_26;
  d_27 = t;
  t = term_c_20;
  e_27 = t;
  t = term_w_26;
  t = d_7(d_27, e_27, t);
  t = term_g_27;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_h_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_3, p_3, q_3, t);
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      {
        ATerm n_27 = t;
        int o_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_3, s_3, u_3, t);
            LocalPopChoice(o_27);
          }
        else
          {
            t = n_27;
            t = Option_3_0(x_3, z_3, b_4, t);
          }
      }
    }
  return(t);
}
static ATerm d_7 (ATerm q_38, ATerm r_38, ATerm t)
{
  ATerm f_27 = NULL;
  t = term_a_10;
  f_27 = t;
  t = SSL_table_put(f_27, q_38, r_38);
  t = (ATerm) ATmakeAppl(sym__3, term_a_10, q_38, r_38);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_27 = NULL,p_27 = NULL,q_27 = NULL;
      t = term_c_20;
      t = e_0(t);
      m_27 = t;
      t = term_r_27;
      p_27 = t;
      t = term_s_27;
      q_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_27, term_s_27, m_27);
      t = b_7(p_27, q_27, m_27, t);
      _fail(t);
    }
  else
    {
      ATerm t_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_27 = ATgetFirst((ATermList) t);
          l_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_27;
      t = c_0(t);
      t = term_c_20;
      t = d_0(t);
      t_27 = t;
      t = (ATerm) ATinsert(CheckATermList(l_27), t_27);
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm v_27 = NULL;
  v_27 = t;
  if(match_string(t, "-o"))
    {
      t = v_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_27;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL;
  w_27 = t;
  t = term_d_20;
  x_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_20, w_27);
  t = d_7(x_27, w_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_27);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_u_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_4, e_4, f_4, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm z_27 = NULL;
  z_27 = t;
  if(match_string(t, "-i"))
    {
      t = z_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_27;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL;
  a_28 = t;
  t = term_e_20;
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_20, a_28);
  t = d_7(b_28, a_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_28);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_y_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, h_4, j_4, t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_71 (ATerm), ATerm t)
{
  static ATerm j_29 (ATerm t)
  {
    ATerm e_29 = NULL,h_29 = NULL,i_29 = NULL;
    i_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_29 = ATgetFirst((ATermList) t);
        h_29 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_8 = NULL,m_8 = NULL,f_2 = NULL;
          t = SSLgetAnnotations(i_29);
          i_8 = t;
          t = h_29;
          t = j_29(t);
          m_8 = t;
          t = (ATerm) ATinsert(CheckATermList(m_8), e_29);
          f_2 = t;
          t = SSLsetAnnotations(f_2, i_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_29;
        t = x_71(t);
      }
    return(t);
  }
  t = j_29(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_28 = NULL,f_28 = NULL,g_28 = NULL;
  d_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_28;
    }
  else
    {
      static ATerm k_4 (ATerm t)
      {
        t = not_null(g_28);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_28 = ATgetFirst((ATermList) t);
          if(((g_28 != NULL) && (g_28 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_28;
      t = at_end_1_0(k_4, t);
    }
  return(t);
}
static ATerm w_29 (ATerm n_29, ATerm t)
{
  ATerm p_29 = NULL;
  t = SSL_explode_term(n_29);
  if(match_cons(t, sym__2))
    {
      ATerm c_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_29;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
  t_29 = t;
  if(match_cons(t, sym__2))
    {
      r_29 = ATgetArgument(t, 0);
      s_29 = ATgetArgument(t, 1);
      {
        ATerm e_28 = t;
        int h_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm l_4 (ATerm t)
            {
              t = s_29;
              return(t);
            }
            t = r_29;
            t = at_end_1_0(l_4, t);
            LocalPopChoice(h_28);
          }
        else
          {
            t = e_28;
            t = w_29(t_29, t);
          }
      }
    }
  else
    {
      t = w_29(t_29, t);
    }
  return(t);
}
static ATerm w_6 (ATerm w_38, ATerm v_38, ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  t = w_38;
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_30 = NULL;
        t = term_a_10;
        c_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_10, w_38);
        t = a_7(c_30, w_38, t);
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
        t = (ATerm) ATempty;
      }
  }
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_38, y_29);
  t = conc_0_0(t);
  x_29 = t;
  t = term_a_10;
  z_29 = t;
  t = SSL_table_put(z_29, w_38, x_29);
  t = (ATerm) ATmakeAppl(sym__3, term_a_10, w_38, x_29);
  return(t);
}
static ATerm b_7 (ATerm q_36, ATerm r_36, ATerm p_36, ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
  g_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_36, r_36);
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_28 = ATgetArgument(t, 0);
            ATerm n_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_36, r_36);
        t = a_7(q_36, r_36, t);
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        t = (ATerm) ATempty;
      }
  }
  h_30 = t;
  t = (ATerm) ATinsert(CheckATermList(h_30), p_36);
  i_30 = t;
  t = SSL_table_put(q_36, r_36, i_30);
  t = g_30;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_30 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_31 = NULL,j_31 = NULL,k_31 = NULL;
      t = term_c_20;
      t = n_0(t);
      g_31 = t;
      t = term_r_27;
      j_31 = t;
      t = term_s_27;
      k_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_27, term_s_27, g_31);
      t = b_7(j_31, k_31, g_31, t);
      _fail(t);
    }
  else
    {
      ATerm u_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_30 = ATgetFirst((ATermList) t);
          d_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_31 = ATgetFirst((ATermList) t);
          f_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_30;
      t = k_0(t);
      t = e_31;
      t = l_0(t);
      u_31 = t;
      t = (ATerm) ATinsert(CheckATermList(f_31), u_31);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm z_31 = NULL;
  z_31 = t;
  if(match_string(t, "-a"))
    {
      t = z_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = z_31;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
  a_32 = t;
  t = term_o_28;
  b_32 = t;
  t = term_c_20;
  c_32 = t;
  t = term_p_28;
  t = d_7(b_32, c_32, t);
  t = a_32;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_q_28;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--annotations", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL;
  d_32 = t;
  t = term_r_28;
  e_32 = t;
  t = term_c_20;
  f_32 = t;
  t = term_s_28;
  t = d_7(e_32, f_32, t);
  t = d_32;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_t_28;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm i_32 = NULL;
  i_32 = t;
  if(match_string(t, "-I"))
    {
      t = i_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = i_32;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm j_32 = NULL,m_32 = NULL,n_32 = NULL;
  j_32 = t;
  t = term_e_24;
  m_32 = t;
  t = (ATerm) ATinsert(ATempty, j_32);
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_24, (ATerm) ATinsert(ATempty, j_32));
  t = w_6(m_32, n_32, t);
  t = j_32;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_4, p_4, b_5, t);
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
      {
        ATerm x_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(e_5, h_5, j_5, t);
            LocalPopChoice(y_28);
          }
        else
          {
            t = x_28;
            t = ArgOption_3_0(m_5, n_5, o_5, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_20;
  t = whoami_0_0(t);
  q_32 = t;
  t = term_i_19;
  s_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_28), q_32);
  t_32 = t;
  t = SSL_printnl(s_32, t_32);
  t = term_d_10;
  r_32 = t;
  t = SSL_exit(r_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_32 = NULL,x_32 = NULL;
  t = term_a_10;
  u_32 = t;
  t = term_a_29;
  x_32 = t;
  t = term_b_29;
  t = a_7(u_32, x_32, t);
  return(t);
}
static ATerm x_6 (ATerm p_33, ATerm q_33, ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_33, q_33);
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      t = SSL_addr(p_33, q_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm t)
{
  ATerm z_32 = NULL,c_33 = NULL,g_33 = NULL;
  z_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_32;
      t = h_78(t);
    }
  else
    {
      ATerm k_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_33 = ATgetFirst((ATermList) t);
          g_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_33;
      t = foldr_2_0(h_78, i_78, t);
      k_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_33, k_33);
      t = i_78(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_m_26;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL;
  if(match_cons(t, sym__2))
    {
      b_9 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(b_9, c_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_33 = NULL,v_8 = NULL,w_8 = NULL;
  t = times_0_0(t);
  w_8 = t;
  t = SSL_explode_term(w_8);
  if(match_cons(t, sym__2))
    {
      ATerm f_29 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_8;
  t = foldr_2_0(q_5, r_5, t);
  n_33 = t;
  t = SSL_TicksToSeconds(n_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL;
  c_34 = t;
  if(match_cons(t, sym__2))
    {
      d_34 = ATgetArgument(t, 0);
      e_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_34;
        if((d_34 != t))
          {
            _fail(t);
          }
        t = c_34;
        LocalPopChoice(k_29);
      }
    else
      {
        t = g_29;
        t = (ATerm) ATmakeAppl(sym__2, d_34, e_34);
        {
          ATerm l_29 = t;
          int m_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_34, e_34);
              LocalPopChoice(m_29);
            }
          else
            {
              t = l_29;
              t = SSL_gtr(d_34, e_34);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_34, e_34);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm i_34 = NULL;
  i_34 = t;
  {
    ATerm o_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
        t = term_a_10;
        l_34 = t;
        t = term_v_9;
        m_34 = t;
        t = term_c_10;
        t = a_7(l_34, m_34, t);
        k_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_34, term_d_10);
        t = geq_0_0(t);
        t = i_34;
        t = y_82(t);
        LocalPopChoice(q_29);
      }
    else
      {
        t = o_29;
        t = i_34;
      }
  }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,r_34 = NULL,s_34 = NULL;
  t = run_time_0_0(t);
  o_34 = t;
  t = term_c_20;
  t = whoami_0_0(t);
  p_34 = t;
  t = term_i_19;
  r_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_29), o_34), term_o_10), p_34);
  s_34 = t;
  t = SSL_printnl(r_34, s_34);
  t = (ATerm) ATmakeAppl(sym__2, term_i_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_29), o_34), term_o_10), p_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_26;
  t_34 = t;
  t = SSL_exit(t_34);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL;
  p_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_35 = ATgetArgument(t, 0);
          {
            ATerm b_10 = NULL,w_2 = NULL;
            t = SSLgetAnnotations(p_35);
            b_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_35);
            w_2 = t;
            t = SSLsetAnnotations(w_2, b_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm v_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_35 = NULL,i_35 = NULL;
      t = term_a_10;
      h_35 = t;
      t = term_b_30;
      i_35 = t;
      t = term_d_30;
      t = a_7(h_35, i_35, t);
      LocalPopChoice(a_30);
    }
  else
    {
      t = v_29;
      t = fetch_1_0(y_5, t);
    }
  t = c_87(t);
  return(t);
}
ATerm map_1_0 (ATerm g_71 (ATerm), ATerm t)
{
  static ATerm f_36 (ATerm t)
  {
    ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
    c_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_36;
      }
    else
      {
        ATerm t_10 = NULL,y_10 = NULL,a_11 = NULL,y_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_36 = ATgetFirst((ATermList) t);
            e_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_36);
        t_10 = t;
        t = d_36;
        t = g_71(t);
        y_10 = t;
        t = e_36;
        t = f_36(t);
        a_11 = t;
        t = (ATerm) ATinsert(CheckATermList(a_11), y_10);
        y_2 = t;
        t = SSLsetAnnotations(y_2, t_10);
      }
    return(t);
  }
  t = f_36(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_36 = ATgetFirst((ATermList) t);
      k_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_36 = NULL,z_36 = NULL;
        static ATerm z_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_36)), not_null(z_36));
          return(t);
        }
        t = k_36;
        t = i_0(t);
        if(((y_36 != NULL) && (y_36 != t)))
          _fail(t);
        else
          y_36 = t;
        t = j_36;
        t = g_0(t);
        if(((z_36 != NULL) && (z_36 != t)))
          _fail(t);
        else
          z_36 = t;
        t = k_36;
        t = reverse_acc_2_0(g_0, z_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_20;
      t = i_0(t);
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_3 = NULL;
  h_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_37);
  f_37 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_37);
  i_3 = t;
  t = SSLsetAnnotations(i_3, f_37);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm j_37 = NULL;
  j_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_37), term_e_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  ATerm f_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_37 = NULL,e_37 = NULL;
      t = term_a_10;
      d_37 = t;
      t = term_a_29;
      e_37 = t;
      t = term_b_29;
      t = a_7(d_37, e_37, t);
      LocalPopChoice(j_30);
    }
  else
    {
      t = f_30;
      t = fetch_1_0(a_6, t);
    }
  t = term_k_30;
  t = echo_0_0(t);
  t = term_r_27;
  b_37 = t;
  t = term_s_27;
  c_37 = t;
  t = term_l_30;
  t = a_7(b_37, c_37, t);
  t = reverse_acc_2_0(_id, b_6, t);
  t = map_1_0(i_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm q_71 (ATerm), ATerm t)
{
  static ATerm t_38 (ATerm t)
  {
    ATerm o_38 = NULL,p_38 = NULL,s_38 = NULL;
    o_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_38 = ATgetFirst((ATermList) t);
        s_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_30 = t;
      int n_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_11 = NULL,v_11 = NULL,v_3 = NULL;
          t = SSLgetAnnotations(o_38);
          p_11 = t;
          t = p_38;
          t = q_71(t);
          v_11 = t;
          t = (ATerm) ATinsert(CheckATermList(s_38), v_11);
          v_3 = t;
          t = SSLsetAnnotations(v_3, p_11);
          LocalPopChoice(n_30);
        }
      else
        {
          t = m_30;
          {
            ATerm l_12 = NULL,o_12 = NULL,w_3 = NULL;
            t = SSLgetAnnotations(o_38);
            l_12 = t;
            t = s_38;
            t = t_38(t);
            o_12 = t;
            t = (ATerm) ATinsert(CheckATermList(o_12), p_38);
            w_3 = t;
            t = SSLsetAnnotations(w_3, l_12);
          }
        }
    }
    return(t);
  }
  t = t_38(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
  z_38 = t;
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_38;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_30 = ATgetFirst((ATermList) t);
                ATerm r_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_38;
          }
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        t = (ATerm) ATinsert(ATempty, z_38);
      }
  }
  a_39 = t;
  t = term_z_25;
  b_39 = t;
  t = SSL_printnl(b_39, a_39);
  t = z_38;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL;
  t = term_a_10;
  f_39 = t;
  t = term_a_29;
  g_39 = t;
  t = term_b_29;
  t = a_7(f_39, g_39, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL;
  t = term_s_30;
  h_39 = t;
  t = term_c_20;
  i_39 = t;
  t = term_t_30;
  t = d_7(h_39, i_39, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_u_30;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL;
  t = term_s_30;
  l_39 = t;
  t = term_c_20;
  m_39 = t;
  t = term_t_30;
  t = d_7(l_39, m_39, t);
  t = term_v_30;
  j_39 = t;
  t = term_c_20;
  k_39 = t;
  t = term_w_30;
  t = d_7(j_39, k_39, t);
  t = term_x_30;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_y_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_6, f_7, g_7, t);
      LocalPopChoice(b_31);
    }
  else
    {
      t = a_31;
      t = Option_3_0(h_7, j_7, k_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_58 (ATerm), ATerm h_58 (ATerm), ATerm t)
{
  ATerm n_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,v_39 = NULL,a_4 = NULL;
  v_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_39 = ATgetFirst((ATermList) t);
      q_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_39);
  n_39 = t;
  t = p_39;
  t = g_58(t);
  r_39 = t;
  t = q_39;
  t = h_58(t);
  s_39 = t;
  t = (ATerm) ATinsert(CheckATermList(s_39), r_39);
  a_4 = t;
  t = SSLsetAnnotations(a_4, n_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_89 (ATerm), ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,g_40 = NULL,h_40 = NULL,j_40 = NULL,k_40 = NULL,d_5 = NULL;
  a_40 = t;
  {
    ATerm c_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_31;
        t = a_89(t);
        LocalPopChoice(h_31);
      }
    else
      {
        t = c_31;
      }
  }
  t = a_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_40 = ATgetFirst((ATermList) t);
      h_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_40);
  b_40 = t;
  t = term_a_29;
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_29, g_40);
  t = d_7(k_40, g_40, t);
  t = h_40;
  {
    static ATerm x_40 (ATerm t)
    {
      ATerm l_31 = t;
      int m_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_31 = t;
          int o_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_40 = NULL;
              n_40 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_40;
              LocalPopChoice(o_31);
            }
          else
            {
              t = n_31;
              t = a_89(t);
              t = Cons_2_0(_id, x_40, t);
            }
          LocalPopChoice(m_31);
        }
      else
        {
          t = l_31;
          {
            ATerm q_40 = NULL,r_40 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_40 = ATgetFirst((ATermList) t);
                r_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_40), (ATerm) ATmakeAppl(sym_Undefined_1, q_40));
          }
        }
      return(t);
    }
    t = x_40(t);
  }
  j_40 = t;
  t = (ATerm) ATinsert(CheckATermList(j_40), (ATerm) ATmakeAppl(sym_Program_1, g_40));
  d_5 = t;
  t = SSLsetAnnotations(d_5, b_40);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm r_41 = NULL;
  r_41 = t;
  if(match_string(t, "--help"))
    {
      t = r_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_41;
        }
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL;
  t = term_b_30;
  t_41 = t;
  t = term_c_20;
  u_41 = t;
  t = term_p_31;
  t = d_7(t_41, u_41, t);
  t = term_q_31;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_r_31;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_88 (ATerm), ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,q_41 = NULL;
  k_41 = t;
  t = term_r_27;
  m_41 = t;
  t = term_s_27;
  n_41 = t;
  t = (ATerm) ATempty;
  q_41 = t;
  t = SSL_table_put(m_41, n_41, q_41);
  t = k_41;
  {
    static ATerm s_7 (ATerm t)
    {
      ATerm s_31 = t;
      int t_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_88(t);
          LocalPopChoice(t_31);
        }
      else
        {
          t = s_31;
          {
            ATerm v_31 = t;
            int w_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_7, x_7, y_7, t);
                LocalPopChoice(w_31);
              }
            else
              {
                t = v_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_7, t);
  }
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_42 = NULL;
        g_42 = t;
        {
          ATerm g_32 = t;
          int h_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_12 = NULL;
              t = g_42;
              {
                ATerm o_32 = t;
                int p_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_12 = NULL,a_13 = NULL;
                    t = term_a_10;
                    y_12 = t;
                    t = term_b_30;
                    a_13 = t;
                    t = term_d_30;
                    t = a_7(y_12, a_13, t);
                    LocalPopChoice(p_32);
                  }
                else
                  {
                    t = o_32;
                    t = fetch_1_0(z_7, t);
                  }
              }
              t = g_42;
              t = default_system_usage_0_0(t);
              t = term_m_26;
              x_12 = t;
              t = SSL_exit(x_12);
              LocalPopChoice(h_32);
            }
          else
            {
              t = g_32;
              {
                ATerm n_13 = NULL,o_13 = NULL,s_13 = NULL;
                t = term_a_10;
                o_13 = t;
                t = term_s_30;
                s_13 = t;
                t = term_v_32;
                t = a_7(o_13, s_13, t);
                t = g_42;
                t = default_system_about_0_0(t);
                t = term_m_26;
                n_13 = t;
                t = SSL_exit(n_13);
              }
            }
        }
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        {
          ATerm w_32 = t;
          int y_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL;
              static ATerm b_8 (ATerm t)
              {
                ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,i_5 = NULL;
                m_42 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_42 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_42);
                k_42 = t;
                t = l_42;
                if(((i_41 != NULL) && (i_41 != t)))
                  _fail(t);
                else
                  i_41 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_42);
                i_5 = t;
                t = SSLsetAnnotations(i_5, k_42);
                return(t);
              }
              t = fetch_1_0(b_8, t);
              t = term_i_19;
              i_42 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_41)), term_a_33);
              j_42 = t;
              t = SSL_printnl(i_42, j_42);
              t = (ATerm) ATmakeAppl(sym__2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_41)), term_a_33));
              t = default_system_usage_0_0(t);
              t = term_d_10;
              h_42 = t;
              t = SSL_exit(h_42);
              LocalPopChoice(y_32);
            }
          else
            {
              t = w_32;
            }
        }
      }
  }
  j_41 = t;
  t = term_r_27;
  l_41 = t;
  t = SSL_table_destroy(l_41);
  t = j_41;
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL;
  t = parse_options_1_0(e_87, t);
  w_42 = t;
  t = term_b_33;
  z_42 = t;
  t = SSL_table_create(z_42);
  t = term_b_33;
  x_42 = t;
  t = term_d_33;
  y_42 = t;
  t = SSL_table_put(x_42, y_42, w_42);
  t = w_42;
  t = g_87(t);
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_87, t);
        LocalPopChoice(f_33);
      }
    else
      {
        t = e_33;
        {
          ATerm h_33 = t;
          int i_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_87(t);
              t = report_success_0_0(t);
              LocalPopChoice(i_33);
            }
          else
            {
              t = h_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm j_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      LocalPopChoice(l_33);
    }
  else
    {
      t = j_33;
      {
        ATerm m_33 = t;
        int o_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(o_33);
          }
        else
          {
            t = m_33;
            {
              ATerm r_33 = t;
              int s_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(s_33);
                }
              else
                {
                  t = r_33;
                  {
                    ATerm t_33 = t;
                    int u_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(g_8, j_8, k_8, t);
                        LocalPopChoice(u_33);
                      }
                    else
                      {
                        t = t_33;
                        {
                          ATerm x_33 = t;
                          int y_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(y_33);
                            }
                          else
                            {
                              t = x_33;
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
static ATerm e_8 (ATerm t)
{
  t = xtc_io_1_0(l_8, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL;
  t = term_z_33;
  m_43 = t;
  t = term_c_20;
  n_43 = t;
  t = term_a_34;
  t = d_7(m_43, n_43, t);
  t = term_b_34;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_f_34;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_43 = NULL,r_43 = NULL,s_43 = NULL;
      p_43 = t;
      t = term_a_10;
      r_43 = t;
      t = term_o_28;
      s_43 = t;
      t = term_j_34;
      t = a_7(r_43, s_43, t);
      t = p_43;
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      {
        ATerm n_34 = t;
        int q_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_43 = NULL,z_43 = NULL;
            z_43 = t;
            if(match_cons(t, sym_FILE_1))
              {
                y_43 = ATgetArgument(t, 0);
                {
                  ATerm y_13 = NULL,x_8 = NULL;
                  t = SSLgetAnnotations(z_43);
                  y_13 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, y_43);
                  x_8 = t;
                  t = SSLsetAnnotations(x_8, y_13);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = z_43;
              }
            LocalPopChoice(q_34);
            t = xtc_transform_file_2_0(n_8, pass_includes_0_0, t);
          }
        else
          {
            t = n_34;
            t = xtc_transform_term_2_0(p_8, pass_includes_0_0, t);
          }
      }
    }
  {
    ATerm u_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_44 = NULL,g_44 = NULL;
        g_44 = t;
        if(match_cons(t, sym_FILE_1))
          {
            f_44 = ATgetArgument(t, 0);
            {
              ATerm s_14 = NULL,a_9 = NULL;
              t = SSLgetAnnotations(g_44);
              s_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_44);
              a_9 = t;
              t = SSLsetAnnotations(a_9, s_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_44;
          }
        LocalPopChoice(v_34);
        t = xtc_transform_file_2_0(q_8, r_8, t);
      }
    else
      {
        t = u_34;
        t = xtc_transform_term_2_0(u_8, z_8, t);
      }
  }
  {
    ATerm w_34 = t;
    int x_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_44 = NULL,j_44 = NULL,k_44 = NULL;
        h_44 = t;
        t = term_a_10;
        j_44 = t;
        t = term_r_28;
        k_44 = t;
        t = term_y_34;
        t = a_7(j_44, k_44, t);
        t = h_44;
        LocalPopChoice(x_34);
      }
    else
      {
        t = w_34;
        {
          ATerm z_34 = t;
          int a_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_44 = NULL,r_44 = NULL;
              r_44 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  q_44 = ATgetArgument(t, 0);
                  {
                    ATerm k_15 = NULL,u_9 = NULL;
                    t = SSLgetAnnotations(r_44);
                    k_15 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, q_44);
                    u_9 = t;
                    t = SSLsetAnnotations(u_9, k_15);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = r_44;
                }
              LocalPopChoice(a_35);
              t = xtc_transform_file_2_0(d_9, f_9, t);
            }
          else
            {
              t = z_34;
              t = xtc_transform_term_2_0(j_9, k_9, t);
            }
        }
      }
  }
  {
    ATerm c_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_44 = NULL,y_44 = NULL;
        y_44 = t;
        if(match_cons(t, sym_FILE_1))
          {
            x_44 = ATgetArgument(t, 0);
            {
              ATerm b_16 = NULL,w_9 = NULL;
              t = SSLgetAnnotations(y_44);
              b_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_44);
              w_9 = t;
              t = SSLsetAnnotations(w_9, b_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_44;
          }
        LocalPopChoice(e_35);
        t = xtc_transform_file_2_0(l_9, m_9, t);
      }
    else
      {
        t = c_35;
        t = xtc_transform_term_2_0(o_9, p_9, t);
      }
  }
  {
    ATerm f_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_45 = NULL,l_45 = NULL;
        l_45 = t;
        if(match_cons(t, sym_FILE_1))
          {
            k_45 = ATgetArgument(t, 0);
            {
              ATerm p_16 = NULL,x_9 = NULL;
              t = SSLgetAnnotations(l_45);
              p_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_45);
              x_9 = t;
              t = SSLsetAnnotations(x_9, p_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_45;
          }
        LocalPopChoice(g_35);
        t = xtc_transform_file_2_0(q_9, pass_verbose_0_0, t);
      }
    else
      {
        t = f_35;
        t = xtc_transform_term_2_0(r_9, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_j_35;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_j_35;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_k_35;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_k_35;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = term_l_35;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_l_35;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_m_35;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL;
  t = pass_verbose_0_0(t);
  z_44 = t;
  t = term_n_35;
  t = xtc_find_0_0(t);
  a_45 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(z_44), a_45), term_q_35);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_m_35;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL;
  t = pass_verbose_0_0(t);
  c_45 = t;
  t = term_n_35;
  t = xtc_find_0_0(t);
  d_45 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(c_45), d_45), term_q_35);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_r_35;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm pp_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(d_8, default_usage_0_0, _id, e_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pp_stratego_0_0(t);
  return(t);
}
