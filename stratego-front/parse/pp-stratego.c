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
ATerm term_m_35;
ATerm term_j_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_d_35;
ATerm term_u_34;
ATerm term_j_34;
ATerm term_g_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_t_32;
ATerm term_e_32;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_j_31;
ATerm term_e_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_s_30;
ATerm term_h_30;
ATerm term_d_30;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_m_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_e_27;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_d_26;
ATerm term_z_25;
ATerm term_d_25;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_p_24;
ATerm term_k_24;
ATerm term_a_24;
ATerm term_y_23;
ATerm term_r_23;
ATerm term_p_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_w_22;
ATerm term_u_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_d_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_x_19;
ATerm term_t_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_i_10;
ATerm term_z_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_o_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_q_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_i_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_q_10, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_t_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_11, term_x_11, term_y_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_12, term_b_12, term_c_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_g_12, term_h_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_m_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_s_12, term_u_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_y_12, term_a_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_f_13, term_h_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_m_13, term_q_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_u_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_c_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_j_14, term_k_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_t_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_a_15, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_f_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_r_15, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_b_16, term_d_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_j_16, term_l_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_p_16, term_s_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_w_16, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_k_17, term_l_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_s_17, term_t_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_z_17, term_a_18);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_18, term_d_18, term_e_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_18, term_q_18, term_r_18);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_f_23);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym__2, term_u_22, term_l_23);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_u_22, term_w_22);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_t_24);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym__2, term_i_20, term_x_19);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_i_26);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_26);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_k_20);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym__2, term_p_28, term_k_20);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__2, term_s_28, term_k_20);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_b_29);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_t_29);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym__2, term_e_27, term_o_27);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym__2, term_s_30, term_k_20);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym__2, term_w_30, term_k_20);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym__2, term_t_29, term_k_20);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_s_30);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__2, term_a_34, term_k_20);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_l_20);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_p_28);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_s_28);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm v_6 (ATerm o_14, ATerm p_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm f_6 (ATerm w_33, ATerm x_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm g_6 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm h_6 (ATerm g_67 (ATerm), ATerm w_172, ATerm y_17, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t);
static ATerm i_6 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm i_72 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm v_65 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm v_86 (ATerm), ATerm t);
static ATerm k_6 (ATerm k_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm e_67 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm x_83 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm w_83 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm y_83 (ATerm), ATerm t);
static ATerm m_6 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm n_6 (ATerm h_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm x_0 (ATerm t);
static ATerm o_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm p_6 (ATerm a_84 (ATerm), ATerm y_37, ATerm x_37, ATerm t);
static ATerm u_6 (ATerm h_40, ATerm i_40, ATerm t);
static ATerm m_14 (ATerm b_14, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_6 (ATerm u_17, ATerm t);
static ATerm r_6 (ATerm l_32, ATerm m_32, ATerm t);
static ATerm s_6 (ATerm q_40, ATerm r_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_17 (ATerm g_15, ATerm t);
static ATerm g_17 (ATerm k_15, ATerm m_15, ATerm n_15, ATerm t);
static ATerm h_17 (ATerm a_16, ATerm e_16, ATerm f_16, ATerm t);
static ATerm t_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm d_23 (ATerm c_22, ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm b_7 (ATerm i_38, ATerm j_38, ATerm t);
ATerm foldr_3_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm t);
static ATerm o_2 (ATerm t);
ATerm pass_includes_0_0 (ATerm t);
static ATerm w_6 (ATerm w_36, ATerm x_36, ATerm t);
ATerm end_scope_1_0 (ATerm h_82 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm g_82 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm h_86 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_7 (ATerm e_39, ATerm f_39, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm n_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm e_30 (ATerm w_29, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm x_6 (ATerm k_39, ATerm j_39, ATerm t);
static ATerm c_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm pp_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm y_6 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_83 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm need_help_1_0 (ATerm x_87 (ATerm), ATerm t);
ATerm map_1_0 (ATerm w_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_72 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_89 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm parse_options_1_0 (ATerm u_89 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm pp_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL;
  k_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = k_1;
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
        t = (ATerm) ATmakeAppl(sym__2, l_1, h_0);
        t = v_6(l_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
        {
          ATerm w_8 = t;
          int b_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_0 = NULL;
              t = k_1;
              t = o_0(t);
              y_0 = t;
              {
                ATerm c_9 = t;
                if((PushChoice() == 0))
                  {
                    ATerm z_0 = NULL;
                    z_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = z_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = z_0;
                          }
                        else
                          {
                            t = z_0;
                            if((l_1 != t))
                              {
                                _fail(t);
                              }
                            t = z_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_9;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_1, y_0);
              t = v_6(l_1, y_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
              LocalPopChoice(b_9);
            }
          else
            {
              t = w_8;
              t = k_1;
              t = o_0(t);
              if((l_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
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
  ATerm k_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 = NULL,w_2 = NULL;
      t = term_o_9;
      g_2 = t;
      t = term_q_9;
      w_2 = t;
      t = term_r_9;
      t = b_7(g_2, w_2, t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = k_9;
      t = term_s_9;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm e_2 = NULL;
  e_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm m_1 = NULL,p_1 = NULL;
      t = term_q_9;
      {
        ATerm t_9 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 = NULL,s_1 = NULL;
            t = term_o_9;
            q_1 = t;
            t = term_q_9;
            s_1 = t;
            t = term_r_9;
            t = b_7(q_1, s_1, t);
            LocalPopChoice(v_9);
          }
        else
          {
            t = t_9;
            t = term_s_9;
          }
      }
      m_1 = t;
      t = term_z_9;
      p_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_z_9, m_1);
      t = v_6(p_1, m_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm c_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm f_6 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm f_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_33, x_33);
      LocalPopChoice(h_10);
    }
  else
    {
      t = f_10;
      t = SSL_subtr(w_33, x_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,b_3 = NULL,c_3 = NULL;
  t = term_i_10;
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_3 = NULL,e_3 = NULL;
        t = term_o_9;
        d_3 = t;
        t = term_i_10;
        e_3 = t;
        t = term_p_10;
        t = b_7(d_3, e_3, t);
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        t = term_q_10;
      }
  }
  z_2 = t;
  t = term_q_10;
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_2, term_q_10);
  t = f_6(z_2, c_3, t);
  b_3 = t;
  t = SSL_int_to_string(b_3);
  y_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_2), term_i_10);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm m_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_z_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm p_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_s_10);
      p_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_3, (ATerm) ATinsert(ATempty, term_s_10));
      t = u_6(m_3, p_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm g_6 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm q_3 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_3);
  return(t);
}
static ATerm h_6 (ATerm g_67 (ATerm), ATerm w_172, ATerm y_17, ATerm t)
{
  ATerm s_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_172, term_t_10);
  t = t_6(t);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_3, y_17);
  t = g_67(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_10 = ATgetArgument(t, 0);
      if(match_cons(u_10, sym_Stream_1))
        {
          w_3 = ATgetArgument(u_10, 0);
        }
      else
        _fail(t);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(w_3, x_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL;
  u_3 = t;
  t = xtc_new_file_0_0(t);
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_3, u_3);
  t = h_6(b_0, t_3, u_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_3);
  t = xtc_transform_file_2_0(u_85, v_85, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm i_6 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,y_4 = NULL;
  u_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      v_4 = ATgetArgument(t, 0);
      {
        ATerm z_1 = NULL,b_2 = NULL;
        t = SSL_int_to_string(v_4);
        z_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_10), z_1), term_v_10);
        b_2 = t;
        t = SSL_concat_strings(b_2);
      }
    }
  else
    {
      ATerm q_2 = NULL,r_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          v_4 = ATgetArgument(t, 0);
          w_4 = ATgetArgument(t, 1);
          y_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(w_4);
      q_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_4), term_c_11), q_2), term_b_11), v_4);
      r_2 = t;
      t = SSL_concat_strings(r_2);
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
    ATerm d_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm i_11 = ATgetArgument(t, 0);
              if((d_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm j_11 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_18), term_j_18), term_b_18), term_v_17), term_q_17), term_d_17), term_y_16), term_t_16), term_m_16), term_h_16), term_y_15), term_t_15), term_i_15), term_c_15), term_v_14), term_q_14), term_d_14), term_v_13), term_r_13), term_i_13), term_d_13), term_v_12), term_n_12), term_i_12), term_e_12), term_z_11), term_u_11), term_q_11);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(h_11);
      }
    else
      {
        t = d_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, d_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm l_5 = NULL,c_6 = NULL;
  l_5 = t;
  {
    ATerm u_18 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm c_19 = ATgetArgument(t, 0);
            c_6 = ATgetArgument(t, 1);
            {
              ATerm i_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_19);
        {
          ATerm j_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_3 = NULL,h_3 = NULL,i_3 = NULL;
              t = c_6;
              {
                ATerm l_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_19;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              f_3 = t;
              t = term_m_19;
              h_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_3), term_n_19);
              i_3 = t;
              t = SSL_printnl(h_3, i_3);
              t = (ATerm) ATmakeAppl(sym__2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, f_3), term_n_19));
              LocalPopChoice(k_19);
            }
          else
            {
              t = j_19;
              t = l_5;
            }
        }
      }
    else
      {
        t = u_18;
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
ATerm fork_and_wait_1_0 (ATerm v_65 (ATerm), ATerm t)
{
  ATerm g_7 = NULL,j_7 = NULL;
  j_7 = t;
  t = fork_0_0(t);
  g_7 = t;
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = j_7;
        t = v_65(t);
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        t = SSL_waitpid(g_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_19 = ATgetArgument(t, 0);
            if(((ATgetType(q_19) != AT_INT) || (ATgetInt((ATermInt) q_19) != 0)))
              _fail(t);
            {
              ATerm r_19 = ATgetArgument(t, 1);
            }
            {
              ATerm s_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = j_7;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL;
  o_7 = t;
  t = v_86(t);
  t = xtc_find_0_0(t);
  n_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_7, o_7);
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm q_7 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_7, o_7);
      t = i_6(n_7, o_7, t);
      t = term_t_19;
      q_7 = t;
      t = SSL_exit(q_7);
      return(t);
    }
    t = fork_and_wait_1_0(m_0, t);
  }
  t = o_7;
  return(t);
}
static ATerm k_6 (ATerm k_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm t_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,b_8 = NULL,c_8 = NULL;
  x_7 = t;
  t = k_82(t);
  t_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_7, e_35, c_35);
  t = c_7(t_7, e_35, c_35, t);
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_8 = NULL;
        t = term_x_19;
        d_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_7, term_x_19);
        t = b_7(t_7, d_8, t);
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_7 = ATgetFirst((ATermList) t);
      w_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_x_19;
  b_8 = t;
  t = (ATerm) ATinsert(CheckATermList(w_7), (ATerm) ATinsert(CheckATermList(v_7), e_35));
  c_8 = t;
  t = SSL_table_put(t_7, b_8, c_8);
  t = x_7;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm i_8 = NULL;
  ATerm y_19 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_8 = NULL,r_3 = NULL;
      s_8 = t;
      t = term_d_20;
      r_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_8, term_d_20);
      t = r_6(s_8, r_3, t);
      i_8 = t;
      t = SSL_mkstemp(i_8);
      LocalPopChoice(b_20);
    }
  else
    {
      t = y_19;
      {
        ATerm t_8 = NULL;
        t = term_e_20;
        t_8 = t;
        t = SSL_perror(t_8);
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
static ATerm q_0 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
  t = P__tmpdir_0_0(t);
  e_9 = t;
  t = term_j_20;
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_9, term_j_20);
  t = r_6(e_9, f_9, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      a_9 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_k_20;
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_9, term_k_20);
  t = k_6(q_0, a_9, d_9, t);
  t = SSL_close(z_8);
  t = a_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL;
  h_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_9 = NULL,n_9 = NULL;
      t = h_9;
      t = xtc_new_file_0_0(t);
      l_9 = t;
      t = r_0(t);
      n_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_9, (ATerm) ATinsert(ATinsert(ATempty, l_9), term_q_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_9);
    }
  else
    {
      ATerm p_9 = NULL,u_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_9;
      t = xtc_new_file_0_0(t);
      p_9 = t;
      t = r_0(t);
      u_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_9), term_q_9), i_9), term_l_20));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_9);
    }
  return(t);
}
ATerm debug_1_0 (ATerm e_67 (ATerm), ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,a_10 = NULL;
  w_9 = t;
  t = e_67(t);
  x_9 = t;
  t = term_m_19;
  y_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_9), x_9);
  a_10 = t;
  t = SSL_printnl(y_9, a_10);
  t = w_9;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm b_10 = NULL;
  static ATerm s_0 (ATerm t)
  {
    ATerm d_10 = NULL,e_10 = NULL;
    d_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_10), d_10);
    t = b_7(not_null(b_10), d_10, t);
    e_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_10, e_10);
    return(t);
  }
  if(((b_10 != NULL) && (b_10 != t)))
    _fail(t);
  else
    b_10 = t;
  t = SSL_table_keys(b_10);
  t = map_1_0(s_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  ATerm g_10 = NULL;
  g_10 = t;
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
        t = term_o_9;
        k_10 = t;
        t = term_i_10;
        l_10 = t;
        t = term_p_10;
        t = b_7(k_10, l_10, t);
        j_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_10, term_s_17);
        t = geq_0_0(t);
        t = g_10;
        t = x_83(t);
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = g_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm r_10 = NULL;
  r_10 = t;
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_10 = NULL,y_10 = NULL,a_11 = NULL;
        t = term_o_9;
        y_10 = t;
        t = term_i_10;
        a_11 = t;
        t = term_p_10;
        t = b_7(y_10, a_11, t);
        x_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_10, term_a_14);
        t = geq_0_0(t);
        t = r_10;
        t = w_83(t);
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        t = r_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm g_11 = NULL;
  g_11 = t;
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL;
        t = term_o_9;
        l_11 = t;
        t = term_i_10;
        m_11 = t;
        t = term_p_10;
        t = b_7(l_11, m_11, t);
        k_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_11, term_b_12);
        t = geq_0_0(t);
        t = g_11;
        t = y_83(t);
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        t = g_11;
      }
  }
  return(t);
}
static ATerm m_6 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = l_76(t);
  {
    static ATerm t_0 (ATerm t)
    {
      ATerm o_11 = NULL;
      o_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, o_11);
      t = k_76(t);
      return(t);
    }
    t = fetch_1_0(t_0, t);
  }
  t = b_25;
  return(t);
}
static ATerm n_6 (ATerm h_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm t_12 (ATerm t)
  {
    ATerm j_12 = NULL,p_12 = NULL,q_12 = NULL;
    j_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_12 = ATgetFirst((ATermList) t);
            q_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_20 = t;
          int t_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_12;
              {
                static ATerm v_0 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = m_6(h_76, v_0, p_12, q_12, t);
              }
              t = t_12(t);
              LocalPopChoice(t_20);
            }
          else
            {
              t = s_20;
              {
                ATerm b_4 = NULL,m_4 = NULL,u_0 = NULL;
                t = SSLgetAnnotations(j_12);
                b_4 = t;
                t = q_12;
                t = t_12(t);
                m_4 = t;
                t = (ATerm) ATinsert(CheckATermList(m_4), p_12);
                u_0 = t;
                t = SSLsetAnnotations(u_0, b_4);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = t_12(t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm g_13 = NULL;
  if(match_cons(t, sym__2))
    {
      g_13 = ATgetArgument(t, 0);
      if((g_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm z_12 = NULL,b_13 = NULL,c_13 = NULL;
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_20 = ATgetArgument(t, 0);
            ATerm x_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = b_7(o_37, p_37, t);
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        t = (ATerm) ATempty;
      }
  }
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_13, q_37);
  t = n_6(x_0, c_13, q_37, t);
  b_13 = t;
  t = SSL_table_put(o_37, p_37, b_13);
  t = z_12;
  return(t);
}
static ATerm p_6 (ATerm a_84 (ATerm), ATerm y_37, ATerm x_37, ATerm t)
{
  static ATerm b_1 (ATerm t)
  {
    ATerm j_13 = NULL,l_13 = NULL;
    if(match_cons(t, sym__2))
      {
        j_13 = ATgetArgument(t, 0);
        l_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_37, j_13, l_13);
    t = a_84(t);
    return(t);
  }
  t = x_37;
  t = map_1_0(b_1, t);
  return(t);
}
static ATerm u_6 (ATerm h_40, ATerm i_40, ATerm t)
{
  t = SSL_access(h_40, i_40);
  return(t);
}
static ATerm m_14 (ATerm b_14, ATerm t)
{
  t = SSL_fclose(b_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_14 = NULL,i_14 = NULL;
  i_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_14 = ATgetArgument(t, 0);
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_14);
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
            t = m_14(i_14, t);
          }
      }
    }
  else
    {
      t = m_14(i_14, t);
    }
  return(t);
}
static ATerm q_6 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm r_6 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = SSL_strcat(l_32, m_32);
  return(t);
}
static ATerm s_6 (ATerm q_40, ATerm r_40, ATerm t)
{
  ATerm n_14 = NULL;
  t = SSL_fopen(q_40, r_40);
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_14 = NULL;
  t = SSL_stdin_stream();
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_14);
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
static ATerm f_17 (ATerm g_15, ATerm t)
{
  ATerm h_15 = NULL;
  t = SSL_explode_term(g_15);
  if(match_cons(t, sym__2))
    {
      ATerm a_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_21 = ATgetArgument(t, 1);
        if(((ATgetType(e_21) == AT_LIST) && !(ATisEmpty(e_21))))
          {
            h_15 = ATgetFirst((ATermList) e_21);
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
  t = h_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_17 (ATerm k_15, ATerm m_15, ATerm n_15, ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,x_15 = NULL,w_0 = NULL;
  t = SSLgetAnnotations(n_15);
  q_15 = t;
  t = k_15;
  if(match_cons(t, sym_Path_1))
    {
      x_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_15, m_15);
  w_0 = t;
  t = SSLsetAnnotations(w_0, q_15);
  if(match_cons(t, sym__2))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(o_15, p_15, t);
  return(t);
}
static ATerm h_17 (ATerm a_16, ATerm e_16, ATerm f_16, ATerm t)
{
  ATerm g_16 = NULL,k_16 = NULL,n_16 = NULL,r_16 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(f_16);
  n_16 = t;
  t = SSL_is_string(a_16);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_16, e_16);
  a_1 = t;
  t = SSLsetAnnotations(a_1, n_16);
  if(match_cons(t, sym__2))
    {
      g_16 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(g_16, k_16, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm v_16 = NULL,c_17 = NULL,e_17 = NULL;
  v_16 = t;
  if(match_cons(t, sym__2))
    {
      c_17 = ATgetArgument(t, 0);
      e_17 = ATgetArgument(t, 1);
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_17(v_16, t);
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            {
              ATerm m_21 = t;
              int o_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_17(c_17, e_17, v_16, t);
                  LocalPopChoice(o_21);
                }
              else
                {
                  t = m_21;
                  t = h_17(c_17, e_17, v_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_17(v_16, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_17 = NULL,m_17 = NULL,n_17 = NULL,w_17 = NULL;
  w_17 = t;
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_17, term_u_21);
        t = t_6(t);
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        {
          ATerm r_5 = NULL,s_5 = NULL;
          t = term_v_21;
          s_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_21, w_17);
          t = r_6(s_5, w_17, t);
          r_5 = t;
          t = SSL_perror(r_5);
          _fail(t);
        }
      }
  }
  m_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_6(n_17, t);
  j_17 = t;
  t = m_17;
  t = fclose_0_0(t);
  t = j_17;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_y_21;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_18 = NULL,g_18 = NULL;
      f_18 = t;
      t = (ATerm) ATinsert(ATempty, term_d_22);
      g_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_18, (ATerm) ATinsert(ATempty, term_d_22));
      t = u_6(f_18, g_18, t);
      LocalPopChoice(b_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = a_22;
      {
        ATerm g_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_22 = t;
            if((PushChoice() == 0))
              {
                ATerm h_18 = NULL,i_18 = NULL;
                h_18 = t;
                t = (ATerm) ATinsert(ATempty, term_s_10);
                i_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_18, (ATerm) ATinsert(ATempty, term_s_10));
                t = u_6(h_18, i_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_22;
              }
            t = debug_1_0(c_1, t);
            LocalPopChoice(i_22);
          }
        else
          {
            t = g_22;
            t = debug_1_0(d_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = debug_1_0(f_1, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_n_22;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = debug_1_0(j_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_o_22;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
  d_19 = t;
  t = term_m_19;
  e_19 = t;
  t = (ATerm) ATinsert(ATempty, term_q_22);
  f_19 = t;
  t = SSL_printnl(e_19, f_19);
  t = d_19;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,u_19 = NULL;
  if(match_cons(t, sym__3))
    {
      g_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
      u_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_6(g_19, h_19, u_19, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,c_20 = NULL;
  z_19 = t;
  t = term_m_19;
  a_20 = t;
  t = (ATerm) ATinsert(ATempty, term_r_22);
  c_20 = t;
  t = SSL_printnl(a_20, c_20);
  t = z_19;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  f_20 = t;
  t = term_m_19;
  g_20 = t;
  t = (ATerm) ATinsert(ATempty, term_q_22);
  h_20 = t;
  t = SSL_printnl(g_20, h_20);
  t = f_20;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,t_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
  l_18 = t;
  t = if_verbose5_1_0(e_1, t);
  {
    ATerm t_22 = t;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL,a_19 = NULL;
        t = term_u_22;
        z_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, l_18);
        a_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_22, (ATerm) ATmakeAppl(sym_Imported_1, l_18));
        t = b_7(z_18, a_19, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_22;
      }
  }
  n_18 = t;
  t = term_u_22;
  w_18 = t;
  t = term_w_22;
  x_18 = t;
  t = (ATerm) ATinsert(ATempty, l_18);
  y_18 = t;
  t = SSL_table_put(w_18, x_18, y_18);
  t = n_18;
  t = if_verbose4_1_0(h_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(n_1, t);
  m_18 = t;
  t = term_u_22;
  v_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_22, m_18);
  t = p_6(r_1, v_18, m_18, t);
  t = if_verbose6_1_0(t_1, t);
  t = term_u_22;
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, l_18);
  p_18 = t;
  t = (ATerm) ATempty;
  t_18 = t;
  t = SSL_table_put(o_18, p_18, t_18);
  t = (ATerm) ATmakeAppl(sym__3, term_u_22, (ATerm)ATmakeAppl(sym_Imported_1, l_18), (ATerm) ATempty);
  t = if_verbose4_1_0(u_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  b_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_21;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_21 = ATgetFirst((ATermList) t);
          d_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_6 = NULL,e_6 = NULL,f_7 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(b_21);
            a_6 = t;
            t = c_21;
            t = g_80(t);
            e_6 = t;
            t = d_21;
            t = filter_1_0(g_80, t);
            f_7 = t;
            t = (ATerm) ATinsert(CheckATermList(f_7), e_6);
            g_1 = t;
            t = SSLsetAnnotations(g_1, a_6);
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            t = d_21;
            t = filter_1_0(g_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm t)
{
  static ATerm i_21 (ATerm t)
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_70(t);
        t = i_21(t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        t = c_70(t);
      }
    return(t);
  }
  t = i_21(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_21 = NULL,k_21 = NULL;
      t = term_o_9;
      j_21 = t;
      t = term_f_23;
      k_21 = t;
      t = term_g_23;
      t = b_7(j_21, k_21, t);
      LocalPopChoice(e_23);
    }
  else
    {
      t = c_23;
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_21 = NULL;
            t = term_j_23;
            l_21 = t;
            t = SSL_getenv(l_21);
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
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
  t = term_k_23;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL;
  t = term_u_22;
  w_21 = t;
  t = term_l_23;
  x_21 = t;
  t = term_p_23;
  t = b_7(w_21, x_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm q_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_23;
      }
  }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_r_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm n_21 = NULL;
  t = if_verbose5_1_0(v_1, t);
  n_21 = t;
  {
    ATerm u_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_21 = NULL,s_21 = NULL;
        t = term_u_22;
        r_21 = t;
        t = term_w_22;
        s_21 = t;
        t = term_y_23;
        t = b_7(r_21, s_21, t);
        LocalPopChoice(x_23);
      }
    else
      {
        t = u_23;
        {
          ATerm t_21 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          t_21 = t;
          t = repeat_2_0(y_1, _id, t);
          t = t_21;
        }
      }
  }
  t = n_21;
  t = if_verbose5_1_0(c_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_a_24;
  return(t);
}
static ATerm d_23 (ATerm c_22, ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,h_22 = NULL;
  t = term_u_22;
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, c_22);
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_22, (ATerm) ATmakeAppl(sym_Tool_1, c_22));
  t = b_7(f_22, h_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_24 = ATgetFirst((ATermList) t);
      if(match_cons(e_24, sym__2))
        {
          ATerm i_24 = ATgetArgument(e_24, 0);
          e_22 = ATgetArgument(e_24, 1);
        }
      else
        _fail(t);
      {
        ATerm h_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_22;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_a_24;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_u_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_k_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
      t = if_verbose5_1_0(h_2, t);
      t = xtc_load_0_0(t);
      l_22 = t;
      if(match_cons(t, sym__2))
        {
          j_22 = ATgetArgument(t, 0);
          k_22 = ATgetArgument(t, 1);
          {
            ATerm n_24 = t;
            int o_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_22 = NULL,s_22 = NULL,v_22 = NULL;
                t = term_u_22;
                s_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, j_22);
                v_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_u_22, (ATerm) ATmakeAppl(sym_Tool_1, j_22));
                t = b_7(s_22, v_22, t);
                {
                  static ATerm j_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((k_22 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((p_22 != NULL) && (p_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(j_2, t);
                }
                t = not_null(p_22);
                LocalPopChoice(o_24);
              }
            else
              {
                t = n_24;
                t = d_23(l_22, t);
              }
          }
        }
      else
        {
          t = d_23(l_22, t);
        }
      t = if_verbose5_1_0(k_2, t);
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      {
        ATerm b_23 = NULL,s_7 = NULL,u_7 = NULL;
        b_23 = t;
        t = term_m_19;
        s_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_24), b_23), term_p_24);
        u_7 = t;
        t = SSL_printnl(s_7, u_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_24), b_23), term_p_24);
        t = if_verbose5_1_0(m_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm b_7 (ATerm i_38, ATerm j_38, ATerm t)
{
  t = SSL_table_get(i_38, j_38);
  return(t);
}
ATerm foldr_3_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  m_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_23;
      t = e_79(t);
    }
  else
    {
      ATerm s_23 = NULL,t_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_23 = ATgetFirst((ATermList) t);
          o_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_23;
      t = g_79(t);
      s_23 = t;
      t = o_23;
      t = foldr_3_0(e_79, f_79, g_79, t);
      t_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_23, t_23);
      t = f_79(t);
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm z_23 = NULL;
  z_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_23), term_t_24);
  return(t);
}
ATerm pass_includes_0_0 (ATerm t)
{
  t = term_t_24;
  {
    ATerm v_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL,w_23 = NULL;
        t = term_o_9;
        v_23 = t;
        t = term_t_24;
        w_23 = t;
        t = term_d_25;
        t = b_7(v_23, w_23, t);
        LocalPopChoice(z_24);
      }
    else
      {
        t = v_24;
        t = (ATerm) ATempty;
      }
  }
  t = foldr_3_0(_id, conc_0_0, o_2, t);
  return(t);
}
static ATerm w_6 (ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL;
  c_24 = t;
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = b_7(w_36, x_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_25 = ATgetFirst((ATermList) t);
            b_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_25);
        t = SSL_table_put(w_36, x_36, b_24);
        t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, b_24);
      }
    else
      {
        t = f_25;
        t = SSL_table_remove(w_36, x_36);
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
      }
  }
  t = c_24;
  return(t);
}
ATerm end_scope_1_0 (ATerm h_82 (ATerm), ATerm t)
{
  ATerm d_24 = NULL,f_24 = NULL,g_24 = NULL,j_24 = NULL,q_24 = NULL;
  j_24 = t;
  t = h_82(t);
  g_24 = t;
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_24 = NULL;
        t = term_x_19;
        r_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_24, term_x_19);
        t = b_7(g_24, r_24, t);
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_24 = ATgetFirst((ATermList) t);
      d_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_x_19;
  q_24 = t;
  t = SSL_table_put(g_24, q_24, d_24);
  t = f_24;
  {
    static ATerm p_2 (ATerm t)
    {
      ATerm u_24 = NULL;
      u_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_24, u_24);
      t = w_6(g_24, u_24, t);
      return(t);
    }
    t = map_1_0(p_2, t);
  }
  t = j_24;
  return(t);
}
ATerm restore_always_2_0 (ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm t)
{
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_83(t);
      t = i_83(t);
      LocalPopChoice(n_25);
    }
  else
    {
      t = m_25;
      t = i_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm w_24 = NULL,a_25 = NULL,e_25 = NULL,i_25 = NULL,j_25 = NULL;
  a_25 = t;
  t = g_82(t);
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_24, term_x_19);
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_25 = ATgetArgument(t, 0);
            ATerm r_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_19;
        t_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_24, term_x_19);
        t = b_7(w_24, t_25, t);
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        t = (ATerm) ATempty;
      }
  }
  e_25 = t;
  t = term_x_19;
  i_25 = t;
  t = (ATerm) ATinsert(CheckATermList(e_25), (ATerm) ATempty);
  j_25 = t;
  t = SSL_table_put(w_24, i_25, j_25);
  t = a_25;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm e_26 = NULL;
  e_26 = t;
  {
    ATerm s_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(e_26);
        LocalPopChoice(u_25);
      }
    else
      {
        t = s_25;
        t = e_26;
      }
  }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  ATerm w_25 = NULL;
  static ATerm t_2 (ATerm t)
  {
    ATerm x_25 = NULL;
    x_25 = t;
    {
      ATerm v_25 = t;
      int y_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_26 = NULL,b_26 = NULL;
          t = term_i_20;
          a_26 = t;
          t = term_x_19;
          b_26 = t;
          t = term_z_25;
          t = b_7(a_26, b_26, t);
          LocalPopChoice(y_25);
        }
      else
        {
          t = v_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((w_25 != NULL) && (w_25 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          w_25 = ATgetFirst((ATermList) t);
        {
          ATerm c_26 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = w_25;
    t = map_1_0(u_2, t);
    t = x_25;
    t = end_scope_1_0(v_2, t);
    return(t);
  }
  t = begin_scope_1_0(s_2, t);
  t = restore_always_2_0(h_86, t_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,r_26 = NULL,s_26 = NULL,v_26 = NULL;
  n_26 = t;
  t = term_k_20;
  t = whoami_0_0(t);
  o_26 = t;
  t = term_m_19;
  s_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_26), o_26), term_d_26);
  v_26 = t;
  t = SSL_printnl(s_26, v_26);
  t = term_q_10;
  r_26 = t;
  t = SSL_exit(r_26);
  t = n_26;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm x_26 = NULL;
  x_26 = t;
  if(match_string(t, "-k"))
    {
      t = x_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_26;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,d_27 = NULL;
  z_26 = t;
  t = SSL_string_to_int(z_26);
  a_27 = t;
  t = term_g_26;
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_26, a_27);
  t = e_7(d_27, a_27, t);
  t = z_26;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, g_3, j_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm f_27 = NULL;
  f_27 = t;
  if(match_string(t, "-S"))
    {
      t = f_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_27;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL;
  t = term_i_10;
  g_27 = t;
  t = term_i_26;
  h_27 = t;
  t = term_j_26;
  t = e_7(g_27, h_27, t);
  t = term_k_26;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_l_26;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  i_27 = t;
  t = SSL_string_to_int(i_27);
  j_27 = t;
  t = term_i_10;
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, j_27);
  t = e_7(k_27, j_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_27);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_m_26;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL;
  t = term_p_26;
  l_27 = t;
  t = term_k_20;
  m_27 = t;
  t = term_q_26;
  t = e_7(l_27, m_27, t);
  t = term_t_26;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_u_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_3, l_3, n_3, t);
      LocalPopChoice(y_26);
    }
  else
    {
      t = w_26;
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_3, v_3, y_3, t);
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            t = Option_3_0(z_3, a_4, c_4, t);
          }
      }
    }
  return(t);
}
static ATerm e_7 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm n_27 = NULL;
  t = term_o_9;
  n_27 = t;
  t = SSL_table_put(n_27, e_39, f_39);
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, e_39, f_39);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
      t = term_k_20;
      t = e_0(t);
      w_27 = t;
      t = term_e_27;
      x_27 = t;
      t = term_o_27;
      y_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_27, term_o_27, w_27);
      t = c_7(x_27, y_27, w_27, t);
      _fail(t);
    }
  else
    {
      ATerm b_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_27 = ATgetFirst((ATermList) t);
          t_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_27;
      t = c_0(t);
      t = term_k_20;
      t = d_0(t);
      b_28 = t;
      t = (ATerm) ATinsert(CheckATermList(t_27), b_28);
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm d_28 = NULL;
  d_28 = t;
  if(match_string(t, "-o"))
    {
      t = d_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_28;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL;
  e_28 = t;
  t = term_q_9;
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_9, e_28);
  t = e_7(f_28, e_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_28);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_p_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_4, f_4, h_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm h_28 = NULL;
  h_28 = t;
  if(match_string(t, "-i"))
    {
      t = h_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_28;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL;
  i_28 = t;
  t = term_l_20;
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_20, i_28);
  t = e_7(j_28, i_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_28);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_q_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, k_4, l_4, t);
  return(t);
}
ATerm at_end_1_0 (ATerm n_72 (ATerm), ATerm t)
{
  static ATerm r_29 (ATerm t)
  {
    ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL;
    q_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_29 = ATgetFirst((ATermList) t);
        p_29 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_8 = NULL,n_8 = NULL,i_1 = NULL;
          t = SSLgetAnnotations(q_29);
          j_8 = t;
          t = p_29;
          t = r_29(t);
          n_8 = t;
          t = (ATerm) ATinsert(CheckATermList(n_8), o_29);
          i_1 = t;
          t = SSLsetAnnotations(i_1, j_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_29;
        t = n_72(t);
      }
    return(t);
  }
  t = r_29(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
  m_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_28;
    }
  else
    {
      static ATerm o_4 (ATerm t)
      {
        t = not_null(o_28);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_28 = ATgetFirst((ATermList) t);
          if(((o_28 != NULL) && (o_28 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_28;
      t = at_end_1_0(o_4, t);
    }
  return(t);
}
static ATerm e_30 (ATerm w_29, ATerm t)
{
  ATerm x_29 = NULL;
  t = SSL_explode_term(w_29);
  if(match_cons(t, sym__2))
    {
      ATerm r_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_29;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
  b_30 = t;
  if(match_cons(t, sym__2))
    {
      z_29 = ATgetArgument(t, 0);
      a_30 = ATgetArgument(t, 1);
      {
        ATerm u_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_4 (ATerm t)
            {
              t = a_30;
              return(t);
            }
            t = z_29;
            t = at_end_1_0(t_4, t);
            LocalPopChoice(v_27);
          }
        else
          {
            t = u_27;
            t = e_30(b_30, t);
          }
      }
    }
  else
    {
      t = e_30(b_30, t);
    }
  return(t);
}
static ATerm x_6 (ATerm k_39, ATerm j_39, ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,j_30 = NULL;
  t = k_39;
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_30 = NULL;
        t = term_o_9;
        m_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_9, k_39);
        t = b_7(m_30, k_39, t);
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = (ATerm) ATempty;
      }
  }
  g_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_39, g_30);
  t = conc_0_0(t);
  f_30 = t;
  t = term_o_9;
  j_30 = t;
  t = SSL_table_put(j_30, k_39, f_30);
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, k_39, f_30);
  return(t);
}
static ATerm c_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,t_30 = NULL;
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm c_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_28 = ATgetArgument(t, 0);
            ATerm l_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = b_7(r_36, s_36, t);
        LocalPopChoice(g_28);
      }
    else
      {
        t = c_28;
        t = (ATerm) ATempty;
      }
  }
  p_30 = t;
  t = (ATerm) ATinsert(CheckATermList(p_30), q_36);
  t_30 = t;
  t = SSL_table_put(r_36, s_36, t_30);
  t = o_30;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
      t = term_k_20;
      t = n_0(t);
      q_31 = t;
      t = term_e_27;
      r_31 = t;
      t = term_o_27;
      s_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_27, term_o_27, q_31);
      t = c_7(r_31, s_31, q_31, t);
      _fail(t);
    }
  else
    {
      ATerm c_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_31 = ATgetFirst((ATermList) t);
          l_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_31 = ATgetFirst((ATermList) t);
          n_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_31;
      t = k_0(t);
      t = m_31;
      t = l_0(t);
      c_32 = t;
      t = (ATerm) ATinsert(CheckATermList(n_31), c_32);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm f_32 = NULL;
  f_32 = t;
  if(match_string(t, "-a"))
    {
      t = f_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = f_32;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  g_32 = t;
  t = term_p_28;
  h_32 = t;
  t = term_k_20;
  i_32 = t;
  t = term_q_28;
  t = e_7(h_32, i_32, t);
  t = g_32;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_r_28;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--annotations", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,n_32 = NULL;
  j_32 = t;
  t = term_s_28;
  k_32 = t;
  t = term_k_20;
  n_32 = t;
  t = term_t_28;
  t = e_7(k_32, n_32, t);
  t = j_32;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_u_28;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm o_32 = NULL;
  o_32 = t;
  if(match_string(t, "-I"))
    {
      t = o_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = o_32;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,u_32 = NULL;
  p_32 = t;
  t = term_t_24;
  q_32 = t;
  t = (ATerm) ATinsert(ATempty, p_32);
  u_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATempty, p_32));
  t = x_6(q_32, u_32, t);
  t = p_32;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_v_28;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_4, z_4, a_5, t);
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
      {
        ATerm y_28 = t;
        int z_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(b_5, e_5, f_5, t);
            LocalPopChoice(z_28);
          }
        else
          {
            t = y_28;
            t = ArgOption_3_0(g_5, h_5, i_5, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_20;
  t = whoami_0_0(t);
  v_32 = t;
  t = term_m_19;
  z_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_29), v_32);
  a_33 = t;
  t = SSL_printnl(z_32, a_33);
  t = term_q_10;
  y_32 = t;
  t = SSL_exit(y_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL;
  t = term_o_9;
  b_33 = t;
  t = term_b_29;
  c_33 = t;
  t = term_c_29;
  t = b_7(b_33, c_33, t);
  return(t);
}
static ATerm y_6 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,i_33 = NULL;
  e_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_33;
      t = c_79(t);
    }
  else
    {
      ATerm l_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_33 = ATgetFirst((ATermList) t);
          i_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_33;
      t = foldr_2_0(c_79, d_79, t);
      l_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_33, l_33);
      t = d_79(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_i_26;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm g_9 = NULL,j_9 = NULL;
  if(match_cons(t, sym__2))
    {
      g_9 = ATgetArgument(t, 0);
      j_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(g_9, j_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_33 = NULL,x_8 = NULL,y_8 = NULL;
  t = times_0_0(t);
  y_8 = t;
  t = SSL_explode_term(y_8);
  if(match_cons(t, sym__2))
    {
      ATerm f_29 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_8;
  t = foldr_2_0(j_5, k_5, t);
  s_33 = t;
  t = SSL_TicksToSeconds(s_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
  n_34 = t;
  if(match_cons(t, sym__2))
    {
      o_34 = ATgetArgument(t, 0);
      p_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_34;
        if((o_34 != t))
          {
            _fail(t);
          }
        t = n_34;
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
        t = (ATerm) ATmakeAppl(sym__2, o_34, p_34);
        {
          ATerm i_29 = t;
          int j_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_34, p_34);
              LocalPopChoice(j_29);
            }
          else
            {
              t = i_29;
              t = SSL_gtr(o_34, p_34);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_34, p_34);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm t_34 = NULL;
  t_34 = t;
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_34 = NULL,h_35 = NULL,i_35 = NULL;
        t = term_o_9;
        h_35 = t;
        t = term_i_10;
        i_35 = t;
        t = term_p_10;
        t = b_7(h_35, i_35, t);
        v_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_34, term_q_10);
        t = geq_0_0(t);
        t = t_34;
        t = t_83(t);
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        t = t_34;
      }
  }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,n_35 = NULL,o_35 = NULL;
  t = run_time_0_0(t);
  k_35 = t;
  t = term_k_20;
  t = whoami_0_0(t);
  l_35 = t;
  t = term_m_19;
  n_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_29), k_35), term_b_11), l_35);
  o_35 = t;
  t = SSL_printnl(n_35, o_35);
  t = (ATerm) ATmakeAppl(sym__2, term_m_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_29), k_35), term_b_11), l_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_26;
  p_35 = t;
  t = SSL_exit(p_35);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL;
  a_36 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = a_36;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          z_35 = ATgetArgument(t, 0);
          {
            ATerm m_10 = NULL,o_1 = NULL;
            t = SSLgetAnnotations(a_36);
            m_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, z_35);
            o_1 = t;
            t = SSLsetAnnotations(o_1, m_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = a_36;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm n_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_35 = NULL,t_35 = NULL;
      t = term_o_9;
      s_35 = t;
      t = term_t_29;
      t_35 = t;
      t = term_u_29;
      t = b_7(s_35, t_35, t);
      LocalPopChoice(s_29);
    }
  else
    {
      t = n_29;
      t = fetch_1_0(n_5, t);
    }
  t = x_87(t);
  return(t);
}
ATerm map_1_0 (ATerm w_71 (ATerm), ATerm t)
{
  static ATerm b_37 (ATerm t)
  {
    ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
    y_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_36;
      }
    else
      {
        ATerm z_10 = NULL,e_11 = NULL,f_11 = NULL,x_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_36 = ATgetFirst((ATermList) t);
            a_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_36);
        z_10 = t;
        t = z_36;
        t = w_71(t);
        e_11 = t;
        t = a_37;
        t = b_37(t);
        f_11 = t;
        t = (ATerm) ATinsert(CheckATermList(f_11), e_11);
        x_1 = t;
        t = SSLsetAnnotations(x_1, z_10);
      }
    return(t);
  }
  t = b_37(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_37 = ATgetFirst((ATermList) t);
      f_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_37 = NULL,k_37 = NULL;
        static ATerm o_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_37)), not_null(k_37));
          return(t);
        }
        t = f_37;
        t = i_0(t);
        if(((j_37 != NULL) && (j_37 != t)))
          _fail(t);
        else
          j_37 = t;
        t = e_37;
        t = g_0(t);
        if(((k_37 != NULL) && (k_37 != t)))
          _fail(t);
        else
          k_37 = t;
        t = f_37;
        t = reverse_acc_2_0(g_0, o_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_20;
      t = i_0(t);
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,b_38 = NULL,a_2 = NULL;
  b_38 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_38);
  v_37 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_37);
  a_2 = t;
  t = SSLsetAnnotations(a_2, v_37);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm d_38 = NULL;
  d_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_38), term_v_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL;
  ATerm y_29 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_37 = NULL,u_37 = NULL;
      t = term_o_9;
      t_37 = t;
      t = term_b_29;
      u_37 = t;
      t = term_c_29;
      t = b_7(t_37, u_37, t);
      LocalPopChoice(c_30);
    }
  else
    {
      t = y_29;
      t = fetch_1_0(p_5, t);
    }
  t = term_d_30;
  t = echo_0_0(t);
  t = term_e_27;
  m_37 = t;
  t = term_o_27;
  n_37 = t;
  t = term_h_30;
  t = b_7(m_37, n_37, t);
  t = reverse_acc_2_0(_id, q_5, t);
  t = map_1_0(t_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_72 (ATerm), ATerm t)
{
  static ATerm c_39 (ATerm t)
  {
    ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
    z_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_39 = ATgetFirst((ATermList) t);
        b_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_30 = t;
      int k_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_11 = NULL,d_12 = NULL,d_2 = NULL;
          t = SSLgetAnnotations(z_38);
          w_11 = t;
          t = a_39;
          t = g_72(t);
          d_12 = t;
          t = (ATerm) ATinsert(CheckATermList(b_39), d_12);
          d_2 = t;
          t = SSLsetAnnotations(d_2, w_11);
          LocalPopChoice(k_30);
        }
      else
        {
          t = i_30;
          {
            ATerm o_12 = NULL,x_12 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(z_38);
            o_12 = t;
            t = b_39;
            t = c_39(t);
            x_12 = t;
            t = (ATerm) ATinsert(CheckATermList(x_12), a_39);
            x_2 = t;
            t = SSLsetAnnotations(x_2, o_12);
          }
        }
    }
    return(t);
  }
  t = c_39(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_39 = NULL,l_39 = NULL,m_39 = NULL;
  i_39 = t;
  {
    ATerm l_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_39;
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
            t = i_39;
          }
        LocalPopChoice(n_30);
      }
    else
      {
        t = l_30;
        t = (ATerm) ATinsert(ATempty, i_39);
      }
  }
  l_39 = t;
  t = term_s_9;
  m_39 = t;
  t = SSL_printnl(m_39, l_39);
  t = i_39;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL;
  t = term_o_9;
  q_39 = t;
  t = term_b_29;
  r_39 = t;
  t = term_c_29;
  t = b_7(q_39, r_39, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL;
  t = term_s_30;
  s_39 = t;
  t = term_k_20;
  t_39 = t;
  t = term_u_30;
  t = e_7(s_39, t_39, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_v_30;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL;
  t = term_s_30;
  w_39 = t;
  t = term_k_20;
  x_39 = t;
  t = term_u_30;
  t = e_7(w_39, x_39, t);
  t = term_w_30;
  u_39 = t;
  t = term_k_20;
  v_39 = t;
  t = term_x_30;
  t = e_7(u_39, v_39, t);
  t = term_y_30;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_z_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, v_5, w_5, t);
      LocalPopChoice(b_31);
    }
  else
    {
      t = a_31;
      t = Option_3_0(x_5, y_5, z_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,d_40 = NULL,e_40 = NULL,e_4 = NULL;
  e_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_39 = ATgetFirst((ATermList) t);
      a_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_40);
  y_39 = t;
  t = z_39;
  t = v_58(t);
  b_40 = t;
  t = a_40;
  t = w_58(t);
  d_40 = t;
  t = (ATerm) ATinsert(CheckATermList(d_40), b_40);
  e_4 = t;
  t = SSLsetAnnotations(e_4, y_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_89 (ATerm), ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,u_40 = NULL,v_40 = NULL,g_4 = NULL;
  l_40 = t;
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_31;
        t = v_89(t);
        LocalPopChoice(d_31);
      }
    else
      {
        t = c_31;
      }
  }
  t = l_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_40 = ATgetFirst((ATermList) t);
      o_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_40);
  m_40 = t;
  t = term_b_29;
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_29, n_40);
  t = e_7(v_40, n_40, t);
  t = o_40;
  {
    static ATerm f_41 (ATerm t)
    {
      ATerm f_31 = t;
      int g_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_31 = t;
          int i_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_40 = NULL;
              y_40 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_40;
              LocalPopChoice(i_31);
            }
          else
            {
              t = h_31;
              t = v_89(t);
              t = Cons_2_0(_id, f_41, t);
            }
          LocalPopChoice(g_31);
        }
      else
        {
          t = f_31;
          {
            ATerm b_41 = NULL,c_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_41 = ATgetFirst((ATermList) t);
                c_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_41), (ATerm) ATmakeAppl(sym_Undefined_1, b_41));
          }
        }
      return(t);
    }
    t = f_41(t);
  }
  u_40 = t;
  t = (ATerm) ATinsert(CheckATermList(u_40), (ATerm) ATmakeAppl(sym_Program_1, n_40));
  g_4 = t;
  t = SSLsetAnnotations(g_4, m_40);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm a_42 = NULL;
  a_42 = t;
  if(match_string(t, "--help"))
    {
      t = a_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_42;
        }
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm b_42 = NULL,e_42 = NULL;
  t = term_t_29;
  b_42 = t;
  t = term_k_20;
  e_42 = t;
  t = term_j_31;
  t = e_7(b_42, e_42, t);
  t = term_o_31;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_p_31;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm n_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL;
  v_41 = t;
  t = term_e_27;
  x_41 = t;
  t = term_o_27;
  y_41 = t;
  t = (ATerm) ATempty;
  z_41 = t;
  t = SSL_table_put(x_41, y_41, z_41);
  t = v_41;
  {
    static ATerm b_6 (ATerm t)
    {
      ATerm t_31 = t;
      int u_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_89(t);
          LocalPopChoice(u_31);
        }
      else
        {
          t = t_31;
          {
            ATerm v_31 = t;
            int w_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_6, j_6, l_6, t);
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
    t = parse_options_p__1_0(b_6, t);
  }
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_42 = NULL;
        r_42 = t;
        {
          ATerm z_31 = t;
          int a_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_13 = NULL;
              t = r_42;
              {
                ATerm b_32 = t;
                int d_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_13 = NULL,p_13 = NULL;
                    t = term_o_9;
                    o_13 = t;
                    t = term_t_29;
                    p_13 = t;
                    t = term_u_29;
                    t = b_7(o_13, p_13, t);
                    LocalPopChoice(d_32);
                  }
                else
                  {
                    t = b_32;
                    t = fetch_1_0(z_6, t);
                  }
              }
              t = r_42;
              t = default_system_usage_0_0(t);
              t = term_i_26;
              n_13 = t;
              t = SSL_exit(n_13);
              LocalPopChoice(a_32);
            }
          else
            {
              t = z_31;
              {
                ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
                t = term_o_9;
                x_13 = t;
                t = term_s_30;
                y_13 = t;
                t = term_e_32;
                t = b_7(x_13, y_13, t);
                t = r_42;
                t = default_system_about_0_0(t);
                t = term_i_26;
                w_13 = t;
                t = SSL_exit(w_13);
              }
            }
        }
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        {
          ATerm r_32 = t;
          int s_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
              static ATerm a_7 (ATerm t)
              {
                ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,i_4 = NULL;
                x_42 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    w_42 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_42);
                v_42 = t;
                t = w_42;
                if(((n_41 != NULL) && (n_41 != t)))
                  _fail(t);
                else
                  n_41 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, w_42);
                i_4 = t;
                t = SSLsetAnnotations(i_4, v_42);
                return(t);
              }
              t = fetch_1_0(a_7, t);
              t = term_m_19;
              t_42 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_41)), term_t_32);
              u_42 = t;
              t = SSL_printnl(t_42, u_42);
              t = (ATerm) ATmakeAppl(sym__2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_41)), term_t_32));
              t = default_system_usage_0_0(t);
              t = term_q_10;
              s_42 = t;
              t = SSL_exit(s_42);
              LocalPopChoice(s_32);
            }
          else
            {
              t = r_32;
            }
        }
      }
  }
  u_41 = t;
  t = term_e_27;
  w_41 = t;
  t = SSL_table_destroy(w_41);
  t = u_41;
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,k_43 = NULL;
  t = parse_options_1_0(z_87, t);
  c_43 = t;
  t = term_w_32;
  k_43 = t;
  t = SSL_table_create(k_43);
  t = term_w_32;
  d_43 = t;
  t = term_x_32;
  e_43 = t;
  t = SSL_table_put(d_43, e_43, c_43);
  t = c_43;
  t = b_88(t);
  {
    ATerm d_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_88, t);
        LocalPopChoice(g_33);
      }
    else
      {
        t = d_33;
        {
          ATerm h_33 = t;
          int j_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_88(t);
              t = report_success_0_0(t);
              LocalPopChoice(j_33);
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
static ATerm d_7 (ATerm t)
{
  ATerm k_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      LocalPopChoice(m_33);
    }
  else
    {
      t = k_33;
      {
        ATerm n_33 = t;
        int o_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(o_33);
          }
        else
          {
            t = n_33;
            {
              ATerm p_33 = t;
              int t_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(t_33);
                }
              else
                {
                  t = p_33;
                  {
                    ATerm u_33 = t;
                    int v_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(i_7, k_7, l_7, t);
                        LocalPopChoice(v_33);
                      }
                    else
                      {
                        t = u_33;
                        {
                          ATerm y_33 = t;
                          int z_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(z_33);
                            }
                          else
                            {
                              t = y_33;
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
static ATerm h_7 (ATerm t)
{
  t = xtc_temp_files_1_0(m_7, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL;
  t = term_a_34;
  x_43 = t;
  t = term_k_20;
  y_43 = t;
  t = term_b_34;
  t = e_7(x_43, y_43, t);
  t = term_c_34;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_d_34;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
      t = term_o_9;
      b_44 = t;
      t = term_l_20;
      c_44 = t;
      t = term_g_34;
      t = b_7(b_44, c_44, t);
      a_44 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_44);
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      t = term_z_9;
    }
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_44 = NULL,f_44 = NULL,g_44 = NULL;
        d_44 = t;
        t = term_o_9;
        f_44 = t;
        t = term_p_28;
        g_44 = t;
        t = term_j_34;
        t = b_7(f_44, g_44, t);
        t = d_44;
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
        {
          ATerm k_34 = t;
          int l_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_44 = NULL,n_44 = NULL;
              n_44 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  m_44 = ATgetArgument(t, 0);
                  {
                    ATerm l_14 = NULL,n_4 = NULL;
                    t = SSLgetAnnotations(n_44);
                    l_14 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, m_44);
                    n_4 = t;
                    t = SSLsetAnnotations(n_4, l_14);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = n_44;
                }
              LocalPopChoice(l_34);
              t = xtc_transform_file_2_0(p_7, pass_includes_0_0, t);
            }
          else
            {
              t = k_34;
              t = xtc_transform_term_2_0(r_7, pass_includes_0_0, t);
            }
        }
      }
  }
  {
    ATerm m_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_44 = NULL,u_44 = NULL;
        u_44 = t;
        if(match_cons(t, sym_FILE_1))
          {
            t_44 = ATgetArgument(t, 0);
            {
              ATerm z_14 = NULL,p_4 = NULL;
              t = SSLgetAnnotations(u_44);
              z_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_44);
              p_4 = t;
              t = SSLsetAnnotations(p_4, z_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_44;
          }
        LocalPopChoice(q_34);
        t = xtc_transform_file_2_0(y_7, z_7, t);
      }
    else
      {
        t = m_34;
        t = xtc_transform_term_2_0(a_8, e_8, t);
      }
  }
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_44 = NULL,x_44 = NULL,y_44 = NULL;
        v_44 = t;
        t = term_o_9;
        x_44 = t;
        t = term_s_28;
        y_44 = t;
        t = term_u_34;
        t = b_7(x_44, y_44, t);
        t = v_44;
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        {
          ATerm w_34 = t;
          int x_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_45 = NULL,f_45 = NULL;
              f_45 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  e_45 = ATgetArgument(t, 0);
                  {
                    ATerm l_15 = NULL,q_4 = NULL;
                    t = SSLgetAnnotations(f_45);
                    l_15 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, e_45);
                    q_4 = t;
                    t = SSLsetAnnotations(q_4, l_15);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = f_45;
                }
              LocalPopChoice(x_34);
              t = xtc_transform_file_2_0(f_8, g_8, t);
            }
          else
            {
              t = w_34;
              t = xtc_transform_term_2_0(h_8, k_8, t);
            }
        }
      }
  }
  {
    ATerm y_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_45 = NULL,m_45 = NULL;
        m_45 = t;
        if(match_cons(t, sym_FILE_1))
          {
            l_45 = ATgetArgument(t, 0);
            {
              ATerm c_16 = NULL,r_4 = NULL;
              t = SSLgetAnnotations(m_45);
              c_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_45);
              r_4 = t;
              t = SSLsetAnnotations(r_4, c_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_45;
          }
        LocalPopChoice(z_34);
        t = xtc_transform_file_2_0(l_8, m_8, t);
      }
    else
      {
        t = y_34;
        t = xtc_transform_term_2_0(o_8, p_8, t);
      }
  }
  {
    ATerm a_35 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_45 = NULL,z_45 = NULL;
        z_45 = t;
        if(match_cons(t, sym_FILE_1))
          {
            y_45 = ATgetArgument(t, 0);
            {
              ATerm q_16 = NULL,s_4 = NULL;
              t = SSLgetAnnotations(z_45);
              q_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_45);
              s_4 = t;
              t = SSLsetAnnotations(s_4, q_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_45;
          }
        LocalPopChoice(b_35);
        t = xtc_transform_file_2_0(q_8, pass_verbose_0_0, t);
      }
    else
      {
        t = a_35;
        t = xtc_transform_term_2_0(r_8, pass_verbose_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_d_35;
  return(t);
}
static ATerm r_7 (ATerm t)
{
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
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_f_35;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_g_35;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_g_35;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_j_35;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL;
  t = pass_verbose_0_0(t);
  n_45 = t;
  t = term_m_35;
  t = xtc_find_0_0(t);
  o_45 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(n_45), o_45), term_q_35);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_j_35;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm q_45 = NULL,r_45 = NULL;
  t = pass_verbose_0_0(t);
  q_45 = t;
  t = term_m_35;
  t = xtc_find_0_0(t);
  r_45 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(q_45), r_45), term_q_35);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_r_35;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm pp_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(d_7, default_usage_0_0, _id, h_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pp_stratego_0_0(t);
  return(t);
}
