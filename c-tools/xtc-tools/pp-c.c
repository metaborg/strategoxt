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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_h_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_t_30;
ATerm term_n_30;
ATerm term_s_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_d_29;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_f_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_m_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_b_27;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_v_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_v_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_o_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_g_23;
ATerm term_e_23;
ATerm term_c_23;
ATerm term_a_23;
ATerm term_x_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_a_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_s_21;
ATerm term_k_21;
ATerm term_f_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_y_20;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_k_18;
ATerm term_x_17;
ATerm term_e_17;
ATerm term_x_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
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
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
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
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_w_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_s_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_e_9;
ATerm term_a_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_q_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_r_8);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_e_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_10, term_i_9, term_g_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_l_10, term_m_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_10, term_s_10, term_w_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_10, term_d_11, term_e_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_l_11, term_m_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_11, term_p_11, term_q_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_a_12, term_b_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_j_12, term_k_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_s_12, term_v_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_z_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_c_13, term_d_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_13, term_h_13, term_i_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_m_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_v_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_f_14, term_i_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_m_14, term_n_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_t_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_x_15, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_e_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_o_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_s_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_c_23);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_g_22);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym__2, term_q_18, term_k_18);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_f_25);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_25);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_u_18);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_j_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_f_27);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__2, term_v_25, term_b_26);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym__2, term_f_28, term_u_18);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_u_18);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym__2, term_f_27, term_u_18);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__3, term_v_25, term_b_26, (ATerm) ATempty);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_f_28);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym__2, term_z_31, term_u_18);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_v_18);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm i_7 (ATerm o_14, ATerm p_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm o_6 (ATerm b_29, ATerm c_29, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm a_7 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm d_7 (ATerm a_69 (ATerm), ATerm s_170, ATerm y_17, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm t);
static ATerm e_7 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm c_74 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm p_67 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm o_87 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm h_74 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_10 (ATerm y_9, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm g_7 (ATerm c_83 (ATerm), ATerm j_30, ATerm h_30, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm p_6 (ATerm e_19, ATerm f_19, ATerm t);
ATerm at_last_1_0 (ATerm s_74 (ATerm), ATerm t);
static ATerm r_6 (ATerm z_73 (ATerm), ATerm s_19, ATerm f_202, ATerm t);
ATerm at_suffix_1_0 (ATerm l_74 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm d_74 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm w_99 (ATerm), ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm remove_extension_0_0 (ATerm t);
ATerm debug_1_0 (ATerm y_68 (ATerm), ATerm t);
static ATerm s_6 (ATerm v_35, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm p_84 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm o_84 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm q_84 (ATerm), ATerm t);
static ATerm u_6 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm v_6 (ATerm b_78 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm n_1 (ATerm t);
static ATerm w_6 (ATerm t_32, ATerm u_32, ATerm v_32, ATerm t);
static ATerm x_6 (ATerm s_84 (ATerm), ATerm d_33, ATerm c_33, ATerm t);
static ATerm z_6 (ATerm e_37, ATerm f_37, ATerm t);
static ATerm w_25 (ATerm o_25, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_6 (ATerm u_17, ATerm t);
static ATerm h_7 (ATerm o_53, ATerm p_53, ATerm t);
static ATerm b_7 (ATerm n_37, ATerm o_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_28 (ATerm m_26, ATerm t);
static ATerm j_28 (ATerm s_26, ATerm u_26, ATerm v_26, ATerm t);
static ATerm k_28 (ATerm k_27, ATerm l_27, ATerm n_27, ATerm t);
static ATerm c_7 (ATerm t);
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
ATerm filter_1_0 (ATerm i_82 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm b_35 (ATerm y_33, ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm p_7 (ATerm p_33, ATerm q_33, ATerm t);
static ATerm j_7 (ATerm b_32, ATerm c_32, ATerm t);
ATerm end_scope_1_0 (ATerm z_82 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm y_82 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm a_87 (ATerm), ATerm t);
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
static ATerm s_7 (ATerm b_36, ATerm c_36, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_7 (ATerm w_31, ATerm x_31, ATerm v_31, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_7 (ATerm v_28, ATerm w_28, ATerm t);
ATerm foldr_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_84 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm need_help_1_0 (ATerm q_88 (ATerm), ATerm t);
static ATerm t_7 (ATerm o_35, ATerm p_35, ATerm q_35, ATerm t);
static ATerm u_7 (ATerm r_35, ATerm s_35, ATerm t);
ATerm lookup_table_0_1 (ATerm i_33, ATerm t);
ATerm new_hashtable_0_2 (ATerm w_35, ATerm x_35, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_7 (ATerm t_35, ATerm u_35, ATerm t);
static ATerm n_7 (ATerm y_35, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_73 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_74 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_60 (ATerm), ATerm q_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm o_90 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm parse_options_1_0 (ATerm n_90 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm v_88 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm e_8 (ATerm t);
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
    ATerm f_8 = t;
    int g_8 = stack_ptr;
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
        t = i_7(s_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, s_1);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        {
          ATerm h_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = r_1;
              t = o_0(t);
              v_0 = t;
              {
                ATerm j_8 = t;
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
                    t = j_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, s_1, v_0);
              t = i_7(s_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_1);
              LocalPopChoice(i_8);
            }
          else
            {
              t = h_8;
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
static ATerm i_7 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_copy(o_14, p_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm l_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_2 = NULL,u_2 = NULL;
      t = term_q_8;
      t_2 = t;
      t = term_r_8;
      u_2 = t;
      t = term_t_8;
      t = p_7(t_2, u_2, t);
      LocalPopChoice(p_8);
    }
  else
    {
      t = l_8;
      t = term_u_8;
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
      t = term_r_8;
      {
        ATerm v_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_1 = NULL,k_1 = NULL;
            t = term_q_8;
            g_1 = t;
            t = term_r_8;
            k_1 = t;
            t = term_t_8;
            t = p_7(g_1, k_1, t);
            LocalPopChoice(w_8);
          }
        else
          {
            t = v_8;
            t = term_u_8;
          }
      }
      d_1 = t;
      t = term_a_9;
      f_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, d_1);
      t = i_7(f_1, d_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm b_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm o_6 (ATerm b_29, ATerm c_29, ATerm t)
{
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(b_29, c_29);
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      t = SSL_subtr(b_29, c_29);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL;
  t = term_e_9;
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL,f_3 = NULL;
        t = term_q_8;
        c_3 = t;
        t = term_e_9;
        f_3 = t;
        t = term_h_9;
        t = p_7(c_3, f_3, t);
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        t = term_i_9;
      }
  }
  z_2 = t;
  t = term_i_9;
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_2, term_i_9);
  t = o_6(z_2, b_3, t);
  a_3 = t;
  t = SSL_int_to_string(a_3);
  y_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_2), term_e_9);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm i_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_a_9;
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
      t = (ATerm) ATinsert(ATempty, term_j_9);
      k_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATinsert(ATempty, term_j_9));
      t = z_6(i_3, k_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm a_7 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm l_3 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_3);
  return(t);
}
static ATerm d_7 (ATerm a_69 (ATerm), ATerm s_170, ATerm y_17, ATerm t)
{
  ATerm m_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_170, term_m_9);
  t = c_7(t);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_3, y_17);
  t = a_69(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm r_3 = NULL,t_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_9 = ATgetArgument(t, 0);
      if(match_cons(n_9, sym_Stream_1))
        {
          r_3 = ATgetArgument(n_9, 0);
        }
      else
        _fail(t);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(r_3, t_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL;
  o_3 = t;
  t = xtc_new_file_0_0(t);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_3, o_3);
  t = d_7(b_0, n_3, o_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_3);
  t = xtc_transform_file_2_0(n_86, o_86, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm e_7 (ATerm g_14, ATerm h_14, ATerm t)
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), x_1), term_s_9);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_4), term_v_9), j_2), term_u_9), v_4);
      k_2 = t;
      t = SSL_concat_strings(k_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm c_74 (ATerm), ATerm t)
{
  ATerm f_5 = NULL;
  static ATerm f_0 (ATerm t)
  {
    t = c_74(t);
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
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm a_10 = ATgetArgument(t, 0);
              if((g_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm c_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_16), term_l_16), term_f_16), term_a_16), term_s_15), term_o_15), term_j_15), term_e_15), term_a_15), term_v_14), term_q_14), term_j_14), term_c_14), term_w_13), term_s_13), term_o_13), term_j_13), term_f_13), term_a_13), term_w_12), term_q_12), term_d_12), term_r_11), term_n_11), term_i_11), term_x_10), term_n_10), term_h_10);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, g_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_5 = NULL,c_6 = NULL;
  n_5 = t;
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_16 = ATgetArgument(t, 0);
            c_6 = ATgetArgument(t, 1);
            {
              ATerm t_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(r_16);
        {
          ATerm u_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_3 = NULL,p_3 = NULL,q_3 = NULL;
              t = c_6;
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
              e_3 = t;
              t = term_x_16;
              p_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_3), term_e_17);
              q_3 = t;
              t = SSL_printnl(p_3, q_3);
              t = (ATerm) ATmakeAppl(sym__2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, e_3), term_e_17));
              LocalPopChoice(v_16);
            }
          else
            {
              t = u_16;
              t = n_5;
            }
        }
      }
    else
      {
        t = q_16;
        t = n_5;
      }
  }
  t = n_5;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm p_67 (ATerm), ATerm t)
{
  ATerm o_7 = NULL,r_7 = NULL;
  r_7 = t;
  t = fork_0_0(t);
  o_7 = t;
  {
    ATerm g_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = r_7;
        t = p_67(t);
        LocalPopChoice(m_17);
      }
    else
      {
        t = g_17;
        t = SSL_waitpid(o_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_17 = ATgetArgument(t, 0);
            if(((ATgetType(q_17) != AT_INT) || (ATgetInt((ATermInt) q_17) != 0)))
              _fail(t);
            {
              ATerm v_17 = ATgetArgument(t, 1);
            }
            {
              ATerm w_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = r_7;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL;
  z_7 = t;
  t = o_87(t);
  t = xtc_find_0_0(t);
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_7, z_7);
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm c_8 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, y_7, z_7);
      t = e_7(y_7, z_7, t);
      t = term_x_17;
      c_8 = t;
      t = SSL_exit(c_8);
      return(t);
    }
    t = fork_and_wait_1_0(m_0, t);
  }
  t = z_7;
  return(t);
}
ATerm at_end_1_0 (ATerm h_74 (ATerm), ATerm t)
{
  static ATerm r_9 (ATerm t)
  {
    ATerm k_9 = NULL,o_9 = NULL,p_9 = NULL;
    p_9 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_9 = ATgetFirst((ATermList) t);
        o_9 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_3 = NULL,a_4 = NULL,y_0 = NULL;
          t = SSLgetAnnotations(p_9);
          x_3 = t;
          t = o_9;
          t = r_9(t);
          a_4 = t;
          t = (ATerm) ATinsert(CheckATermList(a_4), k_9);
          y_0 = t;
          t = SSLsetAnnotations(y_0, x_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_9;
        t = h_74(t);
      }
    return(t);
  }
  t = r_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_8 = NULL,n_8 = NULL,o_8 = NULL;
  k_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_8;
    }
  else
    {
      static ATerm q_0 (ATerm t)
      {
        t = not_null(o_8);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_8 = ATgetFirst((ATermList) t);
          if(((o_8 != NULL) && (o_8 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_8;
      t = at_end_1_0(q_0, t);
    }
  return(t);
}
static ATerm j_10 (ATerm y_9, ATerm t)
{
  ATerm z_9 = NULL;
  t = SSL_explode_term(y_9);
  if(match_cons(t, sym__2))
    {
      ATerm b_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_10 = NULL,d_10 = NULL,e_10 = NULL;
  e_10 = t;
  if(match_cons(t, sym__2))
    {
      b_10 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
      {
        ATerm c_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_0 (ATerm t)
            {
              t = d_10;
              return(t);
            }
            t = b_10;
            t = at_end_1_0(s_0, t);
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
            t = j_10(e_10, t);
          }
      }
    }
  else
    {
      t = j_10(e_10, t);
    }
  return(t);
}
static ATerm g_7 (ATerm c_83 (ATerm), ATerm j_30, ATerm h_30, ATerm t)
{
  ATerm k_10 = NULL,q_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,z_10 = NULL,a_11 = NULL,c_11 = NULL;
  u_10 = t;
  t = c_83(t);
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_10, j_30, h_30);
  t = q_7(k_10, j_30, h_30, t);
  {
    ATerm g_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL;
        t = term_k_18;
        h_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_10, term_k_18);
        t = p_7(k_10, h_11, t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = g_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_10 = ATgetFirst((ATermList) t);
      t_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_10, term_k_18, (ATerm) ATinsert(CheckATermList(t_10), (ATerm) ATinsert(CheckATermList(q_10), j_30)));
  t = lookup_table_0_1(k_10, t);
  c_11 = t;
  t = term_k_18;
  v_10 = t;
  t = (ATerm) ATinsert(CheckATermList(t_10), (ATerm) ATinsert(CheckATermList(q_10), j_30));
  z_10 = t;
  t = c_11;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(v_10, z_10, a_11, t);
  t = u_10;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm k_11 = NULL;
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_11 = NULL,x_4 = NULL;
      u_11 = t;
      t = term_o_18;
      x_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_11, term_o_18);
      t = h_7(u_11, x_4, t);
      k_11 = t;
      t = SSL_mkstemp(k_11);
      LocalPopChoice(n_18);
    }
  else
    {
      t = m_18;
      {
        ATerm v_11 = NULL;
        t = term_p_18;
        v_11 = t;
        t = SSL_perror(v_11);
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
  t = term_q_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,c_12 = NULL,f_12 = NULL;
  t = P__tmpdir_0_0(t);
  c_12 = t;
  t = term_s_18;
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_12, term_s_18);
  t = h_7(c_12, f_12, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      y_11 = ATgetArgument(t, 0);
      x_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_u_18;
  z_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_11, term_u_18);
  t = g_7(t_0, y_11, z_11, t);
  t = SSL_close(x_11);
  t = y_11;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,n_12 = NULL;
  h_12 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_12 = NULL,p_12 = NULL;
      t = h_12;
      t = xtc_new_file_0_0(t);
      o_12 = t;
      t = r_0(t);
      p_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_12, (ATerm) ATinsert(ATinsert(ATempty, o_12), term_r_8));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_12);
    }
  else
    {
      ATerm t_12 = NULL,u_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_12;
      t = xtc_new_file_0_0(t);
      t_12 = t;
      t = r_0(t);
      u_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_12), term_r_8), n_12), term_v_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_12);
    }
  return(t);
}
static ATerm p_6 (ATerm e_19, ATerm f_19, ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL;
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
          x_13 = ATgetFirst((ATermList) t);
          y_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_19);
      i_5 = t;
      t = y_13;
      {
        static ATerm s_5 (ATerm t)
        {
          ATerm x_18 = t;
          int y_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_5 = NULL;
              m_5 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_5;
              LocalPopChoice(y_18);
            }
          else
            {
              t = x_18;
              {
                ATerm o_5 = NULL;
                t = Cons_2_0(_id, s_5, t);
                o_5 = t;
                t = (ATerm) ATinsert(CheckATermList(o_5), e_19);
              }
            }
          return(t);
        }
        t = s_5(t);
      }
      l_5 = t;
      t = (ATerm) ATinsert(CheckATermList(l_5), x_13);
      b_1 = t;
      t = SSLsetAnnotations(b_1, i_5);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm s_74 (ATerm), ATerm t)
{
  static ATerm y_15 (ATerm t)
  {
    ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
    u_15 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_15 = ATgetFirst((ATermList) t);
        w_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_18 = t;
      int a_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_6 = NULL,h_1 = NULL;
          t = SSLgetAnnotations(u_15);
          h_6 = t;
          t = w_15;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(w_15), v_15);
          h_1 = t;
          t = SSLsetAnnotations(h_1, h_6);
          t = s_74(t);
          LocalPopChoice(a_19);
        }
      else
        {
          t = z_18;
          {
            ATerm x_7 = NULL,d_8 = NULL,i_1 = NULL;
            t = SSLgetAnnotations(u_15);
            x_7 = t;
            t = w_15;
            t = y_15(t);
            d_8 = t;
            t = (ATerm) ATinsert(CheckATermList(d_8), v_15);
            i_1 = t;
            t = SSLsetAnnotations(i_1, x_7);
          }
        }
    }
    return(t);
  }
  t = y_15(t);
  return(t);
}
static ATerm r_6 (ATerm z_73 (ATerm), ATerm s_19, ATerm f_202, ATerm t)
{
  static ATerm u_0 (ATerm t)
  {
    ATerm g_16 = NULL;
    g_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_19, g_16);
    t = z_73(t);
    t = g_16;
    return(t);
  }
  t = f_202;
  t = SRTS_one(u_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm l_74 (ATerm), ATerm t)
{
  static ATerm d_17 (ATerm t)
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_74(t);
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        {
          ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,m_8 = NULL,s_8 = NULL,p_1 = NULL;
          a_17 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_17 = ATgetFirst((ATermList) t);
              c_17 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_17);
          m_8 = t;
          t = c_17;
          t = d_17(t);
          s_8 = t;
          t = (ATerm) ATinsert(CheckATermList(s_8), b_17);
          p_1 = t;
          t = SSLsetAnnotations(p_1, m_8);
        }
      }
    return(t);
  }
  t = d_17(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm d_74 (ATerm), ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL;
  static ATerm x_0 (ATerm t)
  {
    ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,n_17 = NULL,z_17 = NULL,e_18 = NULL,f_18 = NULL,h_18 = NULL,i_18 = NULL,w_1 = NULL,u_1 = NULL;
    i_18 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_17 = ATgetFirst((ATermList) t);
        e_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_18);
    n_17 = t;
    t = z_17;
    t = d_74(t);
    f_18 = t;
    t = (ATerm) ATinsert(CheckATermList(e_18), f_18);
    u_1 = t;
    t = SSLsetAnnotations(u_1, n_17);
    h_18 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_17 = ATgetFirst((ATermList) t);
        l_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_18);
    j_17 = t;
    t = l_17;
    if(((h_17 != NULL) && (h_17 != t)))
      _fail(t);
    else
      h_17 = t;
    t = (ATerm) ATinsert(CheckATermList(l_17), k_17);
    w_1 = t;
    t = SSLsetAnnotations(w_1, j_17);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(x_0, t);
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_17, not_null(h_17));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm w_99 (ATerm), ATerm t)
{
  ATerm w_18 = NULL,b_19 = NULL;
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(w_99, t);
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      {
        ATerm r_18 = NULL;
        r_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_18, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      w_18 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_18;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_19;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm i_19 = ATgetFirst((ATermList) t);
              ATerm j_19 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_19;
          t = list_tokenize_1_0(w_99, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm k_19 = ATgetFirst((ATermList) t);
          ATerm l_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_19;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, w_18);
        }
      else
        {
          ATerm w_19 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm m_19 = ATgetFirst((ATermList) t);
              ATerm n_19 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_19;
          t = list_tokenize_1_0(w_99, t);
          w_19 = t;
          t = (ATerm) ATinsert(CheckATermList(w_19), w_18);
        }
    }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm z_20 = NULL;
  if(match_cons(t, sym__2))
    {
      z_20 = ATgetArgument(t, 0);
      if((z_20 != ATgetArgument(t, 1)))
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
  ATerm c_21 = NULL;
  c_21 = t;
  t = SSL_implode_string(c_21);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm y_19 = NULL,b_20 = NULL,c_20 = NULL,f_20 = NULL,o_20 = NULL,r_20 = NULL,s_20 = NULL,n_2 = NULL;
  s_20 = t;
  if(match_cons(t, sym__2))
    {
      f_20 = ATgetArgument(t, 0);
      o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_20);
  c_20 = t;
  t = SSL_explode_string(o_20);
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_20, r_20);
  n_2 = t;
  t = SSLsetAnnotations(n_2, c_20);
  if(match_cons(t, sym__2))
    {
      y_19 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_20;
  {
    static ATerm z_0 (ATerm t)
    {
      ATerm t_20 = NULL;
      t_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_20, y_19);
      t = r_6(a_1, t_20, y_19, t);
      return(t);
    }
    t = list_tokenize_1_0(z_0, t);
  }
  t = map_1_0(c_1, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm l_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_19 = ATgetFirst((ATermList) t);
      l_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_21;
  return(t);
}
ATerm remove_extension_0_0 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,h_21 = NULL,j_21 = NULL;
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_p_19), e_21);
  t = string_tokenize_0_0(t);
  t = at_last_1_0(e_1, t);
  d_21 = t;
  t = term_q_19;
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_19, d_21);
  t = p_6(j_21, d_21, t);
  h_21 = t;
  t = SSL_concat_strings(h_21);
  return(t);
}
ATerm debug_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm m_21 = NULL,p_21 = NULL,q_21 = NULL,t_21 = NULL;
  m_21 = t;
  t = y_68(t);
  p_21 = t;
  t = term_x_16;
  q_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_21), p_21);
  t_21 = t;
  t = SSL_printnl(q_21, t_21);
  t = m_21;
  return(t);
}
static ATerm s_6 (ATerm v_35, ATerm t)
{
  t = SSL_hashtable_keys(v_35);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL;
  static ATerm j_1 (ATerm t)
  {
    ATerm y_21 = NULL,z_21 = NULL;
    y_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_21), y_21);
    t = p_7(not_null(u_21), y_21, t);
    z_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_21, z_21);
    return(t);
  }
  if(((u_21 != NULL) && (u_21 != t)))
    _fail(t);
  else
    u_21 = t;
  t = lookup_table_0_1(u_21, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(v_21, t);
  t = map_1_0(j_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm p_84 (ATerm), ATerm t)
{
  ATerm b_22 = NULL;
  b_22 = t;
  {
    ATerm r_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_22 = NULL,e_22 = NULL,h_22 = NULL;
        t = term_q_8;
        e_22 = t;
        t = term_e_9;
        h_22 = t;
        t = term_h_9;
        t = p_7(e_22, h_22, t);
        d_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_22, term_x_15);
        t = geq_0_0(t);
        t = b_22;
        t = p_84(t);
        LocalPopChoice(t_19);
      }
    else
      {
        t = r_19;
        t = b_22;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_22 = NULL,o_22 = NULL,r_22 = NULL;
        t = term_q_8;
        o_22 = t;
        t = term_e_9;
        r_22 = t;
        t = term_h_9;
        t = p_7(o_22, r_22, t);
        n_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_22, term_h_13);
        t = geq_0_0(t);
        t = l_22;
        t = o_84(t);
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        t = l_22;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm q_84 (ATerm), ATerm t)
{
  ATerm v_22 = NULL;
  v_22 = t;
  {
    ATerm x_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_22 = NULL,z_22 = NULL,b_23 = NULL;
        t = term_q_8;
        z_22 = t;
        t = term_e_9;
        b_23 = t;
        t = term_h_9;
        t = p_7(z_22, b_23, t);
        y_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_22, term_d_11);
        t = geq_0_0(t);
        t = v_22;
        t = q_84(t);
        LocalPopChoice(z_19);
      }
    else
      {
        t = x_19;
        t = v_22;
      }
  }
  return(t);
}
static ATerm u_6 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = f_78(t);
  {
    static ATerm l_1 (ATerm t)
    {
      ATerm d_23 = NULL;
      d_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, d_23);
      t = e_78(t);
      return(t);
    }
    t = fetch_1_0(l_1, t);
  }
  t = b_25;
  return(t);
}
static ATerm v_6 (ATerm b_78 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm c_24 (ATerm t)
  {
    ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
    r_23 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_23 = ATgetFirst((ATermList) t);
            t_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_20 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_23;
              {
                static ATerm m_1 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = u_6(b_78, m_1, s_23, t_23, t);
              }
              t = c_24(t);
              LocalPopChoice(d_20);
            }
          else
            {
              t = a_20;
              {
                ATerm l_9 = NULL,q_9 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(r_23);
                l_9 = t;
                t = t_23;
                t = c_24(t);
                q_9 = t;
                t = (ATerm) ATinsert(CheckATermList(q_9), s_23);
                q_2 = t;
                t = SSLsetAnnotations(q_2, l_9);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = c_24(t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm s_24 = NULL;
  if(match_cons(t, sym__2))
    {
      s_24 = ATgetArgument(t, 0);
      if((s_24 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t_32, ATerm u_32, ATerm v_32, ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,k_24 = NULL,n_24 = NULL;
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_32, u_32);
  {
    ATerm e_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_20 = ATgetArgument(t, 0);
            ATerm i_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_32, u_32);
        t = p_7(t_32, u_32, t);
        LocalPopChoice(g_20);
      }
    else
      {
        t = e_20;
        t = (ATerm) ATempty;
      }
  }
  k_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_24, v_32);
  t = v_6(n_1, k_24, v_32, t);
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_32, u_32, i_24);
  t = lookup_table_0_1(t_32, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(u_32, i_24, n_24, t);
  t = h_24;
  return(t);
}
static ATerm x_6 (ATerm s_84 (ATerm), ATerm d_33, ATerm c_33, ATerm t)
{
  static ATerm o_1 (ATerm t)
  {
    ATerm t_24 = NULL,u_24 = NULL;
    if(match_cons(t, sym__2))
      {
        t_24 = ATgetArgument(t, 0);
        u_24 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, d_33, t_24, u_24);
    t = s_84(t);
    return(t);
  }
  t = c_33;
  t = map_1_0(o_1, t);
  return(t);
}
static ATerm z_6 (ATerm e_37, ATerm f_37, ATerm t)
{
  t = SSL_access(e_37, f_37);
  return(t);
}
static ATerm w_25 (ATerm o_25, ATerm t)
{
  t = SSL_fclose(o_25);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL;
  s_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_25 = ATgetArgument(t, 0);
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_25);
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            t = w_25(s_25, t);
          }
      }
    }
  else
    {
      t = w_25(s_25, t);
    }
  return(t);
}
static ATerm y_6 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm h_7 (ATerm o_53, ATerm p_53, ATerm t)
{
  t = SSL_strcat(o_53, p_53);
  return(t);
}
static ATerm b_7 (ATerm n_37, ATerm o_37, ATerm t)
{
  ATerm x_25 = NULL;
  t = SSL_fopen(n_37, o_37);
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_25);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_25 = NULL;
  t = SSL_stdin_stream();
  y_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_25);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_25 = NULL;
  t = SSL_stdout_stream();
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_25);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_26 = NULL;
  t = SSL_stderr_stream();
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_26);
  return(t);
}
static ATerm i_28 (ATerm m_26, ATerm t)
{
  ATerm p_26 = NULL;
  t = SSL_explode_term(m_26);
  if(match_cons(t, sym__2))
    {
      ATerm l_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_20 = ATgetArgument(t, 1);
        if(((ATgetType(m_20) == AT_LIST) && !(ATisEmpty(m_20))))
          {
            p_26 = ATgetFirst((ATermList) m_20);
            {
              ATerm n_20 = (ATerm) ATgetNext((ATermList) m_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_26;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_26;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_26;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_26;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_28 (ATerm s_26, ATerm u_26, ATerm v_26, ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,c_27 = NULL,i_27 = NULL,c_4 = NULL;
  t = SSLgetAnnotations(v_26);
  c_27 = t;
  t = s_26;
  if(match_cons(t, sym_Path_1))
    {
      i_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_27, u_26);
  c_4 = t;
  t = SSLsetAnnotations(c_4, c_27);
  if(match_cons(t, sym__2))
    {
      w_26 = ATgetArgument(t, 0);
      x_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(w_26, x_26, t);
  return(t);
}
static ATerm k_28 (ATerm k_27, ATerm l_27, ATerm n_27, ATerm t)
{
  ATerm q_27 = NULL,s_27 = NULL,w_27 = NULL,a_28 = NULL,d_4 = NULL;
  t = SSLgetAnnotations(n_27);
  w_27 = t;
  t = SSL_is_string(k_27);
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_28, l_27);
  d_4 = t;
  t = SSLsetAnnotations(d_4, w_27);
  if(match_cons(t, sym__2))
    {
      q_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(q_27, s_27, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm e_28 = NULL,g_28 = NULL,h_28 = NULL;
  e_28 = t;
  if(match_cons(t, sym__2))
    {
      g_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_28(e_28, t);
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
            {
              ATerm u_20 = t;
              int v_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_28(g_28, h_28, e_28, t);
                  LocalPopChoice(v_20);
                }
              else
                {
                  t = u_20;
                  t = k_28(g_28, h_28, e_28, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_28(e_28, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,a_29 = NULL;
  a_29 = t;
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_29, term_y_20);
        t = c_7(t);
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        {
          ATerm p_10 = NULL,r_10 = NULL;
          t = term_a_21;
          r_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_21, a_29);
          t = h_7(r_10, a_29, t);
          p_10 = t;
          t = SSL_perror(p_10);
          _fail(t);
        }
      }
  }
  p_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(q_28, t);
  o_28 = t;
  t = p_28;
  t = fclose_0_0(t);
  t = o_28;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm g_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_29 = NULL,h_29 = NULL;
      g_29 = t;
      t = (ATerm) ATinsert(ATempty, term_k_21);
      h_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_29, (ATerm) ATinsert(ATempty, term_k_21));
      t = z_6(g_29, h_29, t);
      LocalPopChoice(i_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_21;
      {
        ATerm n_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_21 = t;
            if((PushChoice() == 0))
              {
                ATerm n_29 = NULL,o_29 = NULL;
                n_29 = t;
                t = (ATerm) ATinsert(ATempty, term_j_9);
                o_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, n_29, (ATerm) ATinsert(ATempty, term_j_9));
                t = z_6(n_29, o_29, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_21;
              }
            t = debug_1_0(q_1, t);
            LocalPopChoice(o_21);
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
  t = term_w_21;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
  y_30 = t;
  t = term_x_16;
  z_30 = t;
  t = (ATerm) ATinsert(ATempty, term_x_21);
  a_31 = t;
  t = SSL_printnl(z_30, a_31);
  t = y_30;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,g_31 = NULL;
  if(match_cons(t, sym__3))
    {
      c_31 = ATgetArgument(t, 0);
      d_31 = ATgetArgument(t, 1);
      g_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_6(c_31, d_31, g_31, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
  h_31 = t;
  t = term_x_16;
  i_31 = t;
  t = (ATerm) ATinsert(ATempty, term_a_22);
  j_31 = t;
  t = SSL_printnl(i_31, j_31);
  t = h_31;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
  k_31 = t;
  t = term_x_16;
  l_31 = t;
  t = (ATerm) ATinsert(ATempty, term_x_21);
  m_31 = t;
  t = SSL_printnl(l_31, m_31);
  t = k_31;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,m_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL;
  p_29 = t;
  t = if_verbose5_1_0(v_1, t);
  {
    ATerm c_22 = t;
    if((PushChoice() == 0))
      {
        ATerm u_30 = NULL,v_30 = NULL;
        t = term_f_22;
        u_30 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, p_29);
        v_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_22, (ATerm) ATmakeAppl(sym_Imported_1, p_29));
        t = p_7(u_30, v_30, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_22;
      }
  }
  r_29 = t;
  t = term_f_22;
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_22, term_g_22, (ATerm) ATinsert(ATempty, p_29));
  t = lookup_table_0_1(a_30, t);
  r_30 = t;
  t = term_g_22;
  m_30 = t;
  t = (ATerm) ATinsert(ATempty, p_29);
  p_30 = t;
  t = r_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(m_30, p_30, q_30, t);
  t = r_29;
  t = if_verbose4_1_0(a_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(c_2, t);
  q_29 = t;
  t = term_f_22;
  z_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_22, q_29);
  t = x_6(d_2, z_29, q_29, t);
  t = if_verbose6_1_0(e_2, t);
  t = term_f_22;
  u_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_22, (ATerm)ATmakeAppl(sym_Imported_1, p_29), (ATerm) ATempty);
  t = lookup_table_0_1(u_29, t);
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, p_29);
  v_29 = t;
  t = (ATerm) ATempty;
  w_29 = t;
  t = y_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(v_29, w_29, x_29, t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_22, (ATerm)ATmakeAppl(sym_Imported_1, p_29), (ATerm) ATempty);
  t = if_verbose4_1_0(f_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_32;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_32 = ATgetFirst((ATermList) t);
          p_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_11 = NULL,f_11 = NULL,g_11 = NULL,i_4 = NULL;
            t = SSLgetAnnotations(n_32);
            b_11 = t;
            t = o_32;
            t = i_82(t);
            f_11 = t;
            t = p_32;
            t = filter_1_0(i_82, t);
            g_11 = t;
            t = (ATerm) ATinsert(CheckATermList(g_11), f_11);
            i_4 = t;
            t = SSLsetAnnotations(i_4, b_11);
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            t = p_32;
            t = filter_1_0(i_82, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm t)
{
  static ATerm z_32 (ATerm t)
  {
    ATerm k_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_71(t);
        t = z_32(t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = k_22;
        t = w_71(t);
      }
    return(t);
  }
  t = z_32(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_33 = NULL,b_33 = NULL;
      t = term_q_8;
      a_33 = t;
      t = term_s_22;
      b_33 = t;
      t = term_t_22;
      t = p_7(a_33, b_33, t);
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      {
        ATerm u_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_33 = NULL;
            t = term_x_22;
            g_33 = t;
            t = SSL_getenv(g_33);
            LocalPopChoice(w_22);
          }
        else
          {
            t = u_22;
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
  t = term_a_23;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL;
  t = term_f_22;
  s_33 = t;
  t = term_c_23;
  t_33 = t;
  t = term_e_23;
  t = p_7(s_33, t_33, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm f_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_23;
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
  t = term_g_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm m_33 = NULL;
  t = if_verbose5_1_0(g_2, t);
  m_33 = t;
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_33 = NULL,o_33 = NULL;
        t = term_f_22;
        n_33 = t;
        t = term_g_22;
        o_33 = t;
        t = term_j_23;
        t = p_7(n_33, o_33, t);
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        {
          ATerm r_33 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          r_33 = t;
          t = repeat_2_0(i_2, _id, t);
          t = r_33;
        }
      }
  }
  t = m_33;
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
  t = term_k_23;
  return(t);
}
static ATerm b_35 (ATerm y_33, ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
  t = term_f_22;
  b_34 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, y_33);
  c_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_22, (ATerm) ATmakeAppl(sym_Tool_1, y_33));
  t = p_7(b_34, c_34, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_23 = ATgetFirst((ATermList) t);
      if(match_cons(l_23, sym__2))
        {
          ATerm n_23 = ATgetArgument(l_23, 0);
          a_34 = ATgetArgument(l_23, 1);
        }
      else
        _fail(t);
      {
        ATerm m_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_34;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = debug_1_0(w_2, t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_k_23;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_f_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(d_3, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_o_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
      t = if_verbose5_1_0(o_2, t);
      t = xtc_load_0_0(t);
      g_34 = t;
      if(match_cons(t, sym__2))
        {
          e_34 = ATgetArgument(t, 0);
          f_34 = ATgetArgument(t, 1);
          {
            ATerm u_23 = t;
            int v_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_34 = NULL,m_34 = NULL,n_34 = NULL;
                t = term_f_22;
                m_34 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, e_34);
                n_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_22, (ATerm) ATmakeAppl(sym_Tool_1, e_34));
                t = p_7(m_34, n_34, t);
                {
                  static ATerm s_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((f_34 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((j_34 != NULL) && (j_34 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_34 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(s_2, t);
                }
                t = not_null(j_34);
                LocalPopChoice(v_23);
              }
            else
              {
                t = u_23;
                t = b_35(g_34, t);
              }
          }
        }
      else
        {
          t = b_35(g_34, t);
        }
      t = if_verbose5_1_0(v_2, t);
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        ATerm a_35 = NULL,s_11 = NULL,t_11 = NULL;
        a_35 = t;
        t = term_x_16;
        s_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_23), a_35), term_w_23);
        t_11 = t;
        t = SSL_printnl(s_11, t_11);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_23), a_35), term_w_23);
        t = if_verbose5_1_0(x_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm p_7 (ATerm p_33, ATerm q_33, ATerm t)
{
  ATerm d_35 = NULL;
  t = lookup_table_0_1(p_33, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(q_33, d_35, t);
  return(t);
}
static ATerm j_7 (ATerm b_32, ATerm c_32, ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL;
  j_35 = t;
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_32, c_32);
        t = p_7(b_32, c_32, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_24 = ATgetFirst((ATermList) t);
            i_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_23);
        {
          ATerm k_35 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, b_32, c_32, i_35);
          t = lookup_table_0_1(b_32, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              k_35 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_7(c_32, i_35, k_35, t);
          t = (ATerm) ATmakeAppl(sym__3, b_32, c_32, i_35);
        }
      }
    else
      {
        t = y_23;
        {
          ATerm n_35 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, b_32, c_32);
          t = lookup_table_0_1(b_32, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_35 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_7(c_32, n_35, t);
          t = (ATerm) ATmakeAppl(sym__2, b_32, c_32);
        }
      }
  }
  t = j_35;
  return(t);
}
ATerm end_scope_1_0 (ATerm z_82 (ATerm), ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,l_36 = NULL;
  h_36 = t;
  t = z_82(t);
  g_36 = t;
  {
    ATerm b_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_36 = NULL;
        t = term_k_18;
        m_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_36, term_k_18);
        t = p_7(g_36, m_36, t);
        LocalPopChoice(d_24);
      }
    else
      {
        t = b_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_36 = ATgetFirst((ATermList) t);
      e_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_36, term_k_18, e_36);
  t = lookup_table_0_1(g_36, t);
  l_36 = t;
  t = term_k_18;
  i_36 = t;
  t = l_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(i_36, e_36, j_36, t);
  t = f_36;
  {
    static ATerm g_3 (ATerm t)
    {
      ATerm n_36 = NULL;
      n_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_36, n_36);
      t = j_7(g_36, n_36, t);
      return(t);
    }
    t = map_1_0(g_3, t);
  }
  t = h_36;
  return(t);
}
ATerm restore_always_2_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_83(t);
      t = a_84(t);
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      t = a_84(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm p_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL;
  s_36 = t;
  t = y_82(t);
  p_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_36, term_k_18);
  {
    ATerm g_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_37 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_24 = ATgetArgument(t, 0);
            ATerm m_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_18;
        c_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_36, term_k_18);
        t = p_7(p_36, c_37, t);
        LocalPopChoice(j_24);
      }
    else
      {
        t = g_24;
        t = (ATerm) ATempty;
      }
  }
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_36, term_k_18, (ATerm) ATinsert(CheckATermList(t_36), (ATerm) ATempty));
  t = lookup_table_0_1(p_36, t);
  x_36 = t;
  t = term_k_18;
  u_36 = t;
  t = (ATerm) ATinsert(CheckATermList(t_36), (ATerm) ATempty);
  v_36 = t;
  t = x_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(u_36, v_36, w_36, t);
  t = s_36;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_q_18;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm x_37 = NULL;
  x_37 = t;
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(x_37);
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        t = x_37;
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_q_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm a_87 (ATerm), ATerm t)
{
  ATerm l_37 = NULL;
  static ATerm j_3 (ATerm t)
  {
    ATerm m_37 = NULL;
    m_37 = t;
    {
      ATerm q_24 = t;
      int r_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_37 = NULL,u_37 = NULL;
          t = term_q_18;
          r_37 = t;
          t = term_k_18;
          u_37 = t;
          t = term_v_24;
          t = p_7(r_37, u_37, t);
          LocalPopChoice(r_24);
        }
      else
        {
          t = q_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_37 != NULL) && (l_37 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_37 = ATgetFirst((ATermList) t);
        {
          ATerm w_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = l_37;
    t = map_1_0(s_3, t);
    t = m_37;
    t = end_scope_1_0(u_3, t);
    return(t);
  }
  t = begin_scope_1_0(h_3, t);
  t = restore_always_2_0(a_87, j_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_38 = NULL,j_38 = NULL,k_38 = NULL,r_38 = NULL,s_38 = NULL;
  h_38 = t;
  t = term_u_18;
  t = whoami_0_0(t);
  j_38 = t;
  t = term_x_16;
  r_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_25), j_38), term_z_24);
  s_38 = t;
  t = SSL_printnl(r_38, s_38);
  t = term_i_9;
  k_38 = t;
  t = SSL_exit(k_38);
  t = h_38;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm u_38 = NULL;
  u_38 = t;
  if(match_string(t, "-k"))
    {
      t = u_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_38;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
  v_38 = t;
  t = SSL_string_to_int(v_38);
  w_38 = t;
  t = term_d_25;
  x_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_25, w_38);
  t = s_7(x_38, w_38, t);
  t = v_38;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_e_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_3, w_3, y_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm c_39 = NULL;
  c_39 = t;
  if(match_string(t, "-S"))
    {
      t = c_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_39;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL;
  t = term_e_9;
  e_39 = t;
  t = term_f_25;
  f_39 = t;
  t = term_g_25;
  t = s_7(e_39, f_39, t);
  t = term_h_25;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_i_25;
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
  ATerm g_39 = NULL,m_39 = NULL,o_39 = NULL;
  g_39 = t;
  t = SSL_string_to_int(g_39);
  m_39 = t;
  t = term_e_9;
  o_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_9, m_39);
  t = s_7(o_39, m_39, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_39);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_j_25;
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
  ATerm q_39 = NULL,y_39 = NULL;
  t = term_k_25;
  q_39 = t;
  t = term_u_18;
  y_39 = t;
  t = term_l_25;
  t = s_7(q_39, y_39, t);
  t = term_m_25;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_3, b_4, e_4, t);
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_4, g_4, h_4, t);
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            t = Option_3_0(j_4, l_4, m_4, t);
          }
      }
    }
  return(t);
}
static ATerm s_7 (ATerm b_36, ATerm c_36, ATerm t)
{
  ATerm z_39 = NULL,c_40 = NULL;
  t = term_q_8;
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_8, b_36, c_36);
  t = lookup_table_0_1(z_39, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(b_36, c_36, c_40, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_8, b_36, c_36);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
      t = term_u_18;
      t = e_0(t);
      n_40 = t;
      t = term_v_25;
      o_40 = t;
      t = term_b_26;
      p_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_25, term_b_26, n_40);
      t = q_7(o_40, p_40, n_40, t);
      _fail(t);
    }
  else
    {
      ATerm u_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_40 = ATgetFirst((ATermList) t);
          j_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_40;
      t = c_0(t);
      t = term_u_18;
      t = d_0(t);
      u_40 = t;
      t = (ATerm) ATinsert(CheckATermList(j_40), u_40);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm y_40 = NULL;
  y_40 = t;
  if(match_string(t, "-o"))
    {
      t = y_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_40;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL;
  a_41 = t;
  t = term_r_8;
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_8, a_41);
  t = s_7(b_41, a_41, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_41);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, r_4, t);
  return(t);
}
static ATerm q_7 (ATerm w_31, ATerm x_31, ATerm v_31, ATerm t)
{
  ATerm e_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_31, x_31);
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_26 = ATgetArgument(t, 0);
            ATerm g_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_31, x_31);
        t = p_7(w_31, x_31, t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = (ATerm) ATempty;
      }
  }
  h_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_31, x_31, (ATerm) ATinsert(CheckATermList(h_41), v_31));
  t = lookup_table_0_1(w_31, t);
  k_41 = t;
  t = (ATerm) ATinsert(CheckATermList(h_41), v_31);
  i_41 = t;
  t = k_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(x_31, i_41, j_41, t);
  t = e_41;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
      t = term_u_18;
      t = n_0(t);
      v_41 = t;
      t = term_v_25;
      w_41 = t;
      t = term_b_26;
      x_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_25, term_b_26, v_41);
      t = q_7(w_41, x_41, v_41, t);
      _fail(t);
    }
  else
    {
      ATerm b_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_41 = ATgetFirst((ATermList) t);
          s_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_41 = ATgetFirst((ATermList) t);
          u_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_41;
      t = k_0(t);
      t = t_41;
      t = l_0(t);
      b_42 = t;
      t = (ATerm) ATinsert(CheckATermList(u_41), b_42);
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm d_42 = NULL;
  d_42 = t;
  if(match_string(t, "-i"))
    {
      t = d_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_42;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL;
  e_42 = t;
  t = term_v_18;
  f_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_18, e_42);
  t = s_7(f_42, e_42, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_42);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_4, a_5, b_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_18;
  t = whoami_0_0(t);
  g_42 = t;
  t = term_x_16;
  i_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_26), g_42);
  j_42 = t;
  t = SSL_printnl(i_42, j_42);
  t = term_i_9;
  h_42 = t;
  t = SSL_exit(h_42);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL;
  t = term_q_8;
  k_42 = t;
  t = term_j_26;
  l_42 = t;
  t = term_k_26;
  t = p_7(k_42, l_42, t);
  return(t);
}
static ATerm k_7 (ATerm v_28, ATerm w_28, ATerm t)
{
  ATerm l_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_28, w_28);
      LocalPopChoice(n_26);
    }
  else
    {
      t = l_26;
      t = SSL_addr(v_28, w_28);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
  n_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_42;
      t = e_81(t);
    }
  else
    {
      ATerm s_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_42 = ATgetFirst((ATermList) t);
          p_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_42;
      t = foldr_2_0(e_81, f_81, t);
      s_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_42, s_42);
      t = f_81(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_f_25;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL;
  if(match_cons(t, sym__2))
    {
      l_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(l_12, m_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_42 = NULL,g_12 = NULL,i_12 = NULL;
  t = times_0_0(t);
  i_12 = t;
  t = SSL_explode_term(i_12);
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12;
  t = foldr_2_0(c_5, d_5, t);
  y_42 = t;
  t = SSL_TicksToSeconds(y_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
  n_43 = t;
  if(match_cons(t, sym__2))
    {
      o_43 = ATgetArgument(t, 0);
      p_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_43;
        if((o_43 != t))
          {
            _fail(t);
          }
        t = n_43;
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        t = (ATerm) ATmakeAppl(sym__2, o_43, p_43);
        {
          ATerm t_26 = t;
          int y_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_43, p_43);
              LocalPopChoice(y_26);
            }
          else
            {
              t = t_26;
              t = SSL_gtr(o_43, p_43);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_43, p_43);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm t_43 = NULL;
  t_43 = t;
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
        t = term_q_8;
        w_43 = t;
        t = term_e_9;
        x_43 = t;
        t = term_h_9;
        t = p_7(w_43, x_43, t);
        v_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_43, term_i_9);
        t = geq_0_0(t);
        t = t_43;
        t = l_84(t);
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        t = t_43;
      }
  }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,c_44 = NULL,d_44 = NULL;
  t = run_time_0_0(t);
  z_43 = t;
  t = term_u_18;
  t = whoami_0_0(t);
  a_44 = t;
  t = term_x_16;
  c_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_27), z_43), term_u_9), a_44);
  d_44 = t;
  t = SSL_printnl(c_44, d_44);
  t = (ATerm) ATmakeAppl(sym__2, term_x_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_27), z_43), term_u_9), a_44));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_25;
  e_44 = t;
  t = SSL_exit(e_44);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  p_44 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_44;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_44 = ATgetArgument(t, 0);
          {
            ATerm e_13 = NULL,k_4 = NULL;
            t = SSLgetAnnotations(p_44);
            e_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_44);
            k_4 = t;
            t = SSLsetAnnotations(k_4, e_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_44;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_44 = NULL,i_44 = NULL;
      t = term_q_8;
      h_44 = t;
      t = term_f_27;
      i_44 = t;
      t = term_g_27;
      t = p_7(h_44, i_44, t);
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      t = fetch_1_0(h_5, t);
    }
  t = q_88(t);
  return(t);
}
static ATerm t_7 (ATerm o_35, ATerm p_35, ATerm q_35, ATerm t)
{
  ATerm r_44 = NULL;
  t = SSL_hashtable_put(q_35, o_35, p_35);
  r_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_44);
  return(t);
}
static ATerm u_7 (ATerm r_35, ATerm s_35, ATerm t)
{
  t = SSL_hashtable_get(s_35, r_35);
  return(t);
}
ATerm lookup_table_0_1 (ATerm i_33, ATerm t)
{
  ATerm a_45 = NULL;
  t = table_hashtable_0_0(t);
  a_45 = t;
  {
    ATerm h_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_13 = NULL;
        t = a_45;
        if(match_cons(t, sym_Hashtable_1))
          {
            n_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_7(i_33, n_13, t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = h_27;
        {
          ATerm e_14 = NULL;
          t = i_33;
          t = table_create_0_0(t);
          t = a_45;
          if(match_cons(t, sym_Hashtable_1))
            {
              e_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_7(i_33, e_14, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_35, ATerm x_35, ATerm t)
{
  ATerm d_45 = NULL;
  t = SSL_hashtable_create(w_35, x_35);
  d_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_45);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL,i_45 = NULL,j_45 = NULL;
  e_45 = t;
  t = term_m_27;
  i_45 = t;
  t = term_o_27;
  j_45 = t;
  t = e_45;
  t = new_hashtable_0_2(i_45, j_45, t);
  f_45 = t;
  t = e_45;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(e_45, f_45, g_45, t);
  t = e_45;
  return(t);
}
static ATerm m_7 (ATerm t_35, ATerm u_35, ATerm t)
{
  ATerm k_45 = NULL;
  t = SSL_hashtable_remove(u_35, t_35);
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_45);
  return(t);
}
static ATerm n_7 (ATerm y_35, ATerm t)
{
  ATerm l_45 = NULL;
  t = SSL_hashtable_destroy(y_35);
  l_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_45);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm m_45 = NULL;
  t = SSL_table_hashtable();
  m_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_45);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL;
  n_45 = t;
  t = table_hashtable_0_0(t);
  o_45 = t;
  t = lookup_table_0_1(n_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(q_45, t);
  t = o_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_7(n_45, p_45, t);
  t = n_45;
  return(t);
}
ATerm map_1_0 (ATerm q_73 (ATerm), ATerm t)
{
  static ATerm f_46 (ATerm t)
  {
    ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
    c_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_46;
      }
    else
      {
        ATerm l_14 = NULL,u_14 = NULL,w_14 = NULL,n_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_46 = ATgetFirst((ATermList) t);
            e_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_46);
        l_14 = t;
        t = d_46;
        t = q_73(t);
        u_14 = t;
        t = e_46;
        t = f_46(t);
        w_14 = t;
        t = (ATerm) ATinsert(CheckATermList(w_14), u_14);
        n_4 = t;
        t = SSLsetAnnotations(n_4, l_14);
      }
    return(t);
  }
  t = f_46(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_46 = ATgetFirst((ATermList) t);
      j_46 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_46 = NULL,o_46 = NULL;
        static ATerm j_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_46)), not_null(o_46));
          return(t);
        }
        t = j_46;
        t = i_0(t);
        if(((n_46 != NULL) && (n_46 != t)))
          _fail(t);
        else
          n_46 = t;
        t = i_46;
        t = g_0(t);
        if(((o_46 != NULL) && (o_46 != t)))
          _fail(t);
        else
          o_46 = t;
        t = j_46;
        t = reverse_acc_2_0(g_0, j_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_18;
      t = i_0(t);
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,q_4 = NULL;
  w_46 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_46);
  u_46 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_46);
  q_4 = t;
  t = SSLsetAnnotations(q_4, u_46);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm y_46 = NULL;
  y_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_46), term_p_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL;
  ATerm r_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_46 = NULL,t_46 = NULL;
      t = term_q_8;
      s_46 = t;
      t = term_j_26;
      t_46 = t;
      t = term_k_26;
      t = p_7(s_46, t_46, t);
      LocalPopChoice(t_27);
    }
  else
    {
      t = r_27;
      t = fetch_1_0(k_5, t);
    }
  t = term_u_27;
  t = echo_0_0(t);
  t = term_v_25;
  q_46 = t;
  t = term_b_26;
  r_46 = t;
  t = term_v_27;
  t = p_7(q_46, r_46, t);
  t = reverse_acc_2_0(_id, p_5, t);
  t = map_1_0(r_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_74 (ATerm), ATerm t)
{
  static ATerm v_47 (ATerm t)
  {
    ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL;
    s_47 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_47 = ATgetFirst((ATermList) t);
        u_47 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_27 = t;
      int y_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_15 = NULL,m_15 = NULL,s_4 = NULL;
          t = SSLgetAnnotations(s_47);
          i_15 = t;
          t = t_47;
          t = a_74(t);
          m_15 = t;
          t = (ATerm) ATinsert(CheckATermList(u_47), m_15);
          s_4 = t;
          t = SSLsetAnnotations(s_4, i_15);
          LocalPopChoice(y_27);
        }
      else
        {
          t = x_27;
          {
            ATerm d_16 = NULL,k_16 = NULL,t_4 = NULL;
            t = SSLgetAnnotations(s_47);
            d_16 = t;
            t = u_47;
            t = v_47(t);
            k_16 = t;
            t = (ATerm) ATinsert(CheckATermList(k_16), t_47);
            t_4 = t;
            t = SSLsetAnnotations(t_4, d_16);
          }
        }
    }
    return(t);
  }
  t = v_47(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL;
  z_47 = t;
  {
    ATerm z_27 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_47;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_28 = ATgetFirst((ATermList) t);
                ATerm d_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_47;
          }
        LocalPopChoice(b_28);
      }
    else
      {
        t = z_27;
        t = (ATerm) ATinsert(ATempty, z_47);
      }
  }
  a_48 = t;
  t = term_u_8;
  b_48 = t;
  t = SSL_printnl(b_48, a_48);
  t = z_47;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL;
  t = term_q_8;
  f_48 = t;
  t = term_j_26;
  g_48 = t;
  t = term_k_26;
  t = p_7(f_48, g_48, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL;
  t = term_f_28;
  h_48 = t;
  t = term_u_18;
  i_48 = t;
  t = term_l_28;
  t = s_7(h_48, i_48, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_m_28;
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
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL;
  t = term_f_28;
  l_48 = t;
  t = term_u_18;
  m_48 = t;
  t = term_l_28;
  t = s_7(l_48, m_48, t);
  t = term_n_28;
  j_48 = t;
  t = term_u_18;
  k_48 = t;
  t = term_r_28;
  t = s_7(j_48, k_48, t);
  t = term_s_28;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_t_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, w_5, x_5, t);
      LocalPopChoice(x_28);
    }
  else
    {
      t = u_28;
      t = Option_3_0(y_5, z_5, a_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_60 (ATerm), ATerm q_60 (ATerm), ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,q_5 = NULL;
  s_48 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_48 = ATgetFirst((ATermList) t);
      p_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_48);
  n_48 = t;
  t = o_48;
  t = p_60(t);
  q_48 = t;
  t = p_48;
  t = q_60(t);
  r_48 = t;
  t = (ATerm) ATinsert(CheckATermList(r_48), q_48);
  q_5 = t;
  t = SSLsetAnnotations(q_5, n_48);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,c_49 = NULL,d_49 = NULL,t_5 = NULL;
  x_48 = t;
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_29;
        t = o_90(t);
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
      }
  }
  t = x_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_48 = ATgetFirst((ATermList) t);
      a_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_48);
  y_48 = t;
  t = term_j_26;
  d_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_26, z_48);
  t = s_7(d_49, z_48, t);
  t = a_49;
  {
    static ATerm n_49 (ATerm t)
    {
      ATerm e_29 = t;
      int f_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_29 = t;
          int j_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_49 = NULL;
              g_49 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_49;
              LocalPopChoice(j_29);
            }
          else
            {
              t = i_29;
              t = o_90(t);
              t = Cons_2_0(_id, n_49, t);
            }
          LocalPopChoice(f_29);
        }
      else
        {
          t = e_29;
          {
            ATerm j_49 = NULL,k_49 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_49 = ATgetFirst((ATermList) t);
                k_49 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_49), (ATerm) ATmakeAppl(sym_Undefined_1, j_49));
          }
        }
      return(t);
    }
    t = n_49(t);
  }
  c_49 = t;
  t = (ATerm) ATinsert(CheckATermList(c_49), (ATerm) ATmakeAppl(sym_Program_1, z_48));
  t_5 = t;
  t = SSLsetAnnotations(t_5, y_48);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm a_50 = NULL;
  a_50 = t;
  if(match_string(t, "--help"))
    {
      t = a_50;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_50;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_50;
        }
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL;
  t = term_f_27;
  b_50 = t;
  t = term_u_18;
  c_50 = t;
  t = term_k_29;
  t = s_7(b_50, c_50, t);
  t = term_l_29;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_m_29;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_90 (ATerm), ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL;
  u_49 = t;
  t = term_v_25;
  v_49 = t;
  t = term_s_29;
  t = lookup_table_0_1(v_49, t);
  z_49 = t;
  t = term_b_26;
  w_49 = t;
  t = (ATerm) ATempty;
  x_49 = t;
  t = z_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(w_49, x_49, y_49, t);
  t = u_49;
  {
    static ATerm b_6 (ATerm t)
    {
      ATerm t_29 = t;
      int b_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_90(t);
          LocalPopChoice(b_30);
        }
      else
        {
          t = t_29;
          {
            ATerm c_30 = t;
            int d_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_6, e_6, f_6, t);
                LocalPopChoice(d_30);
              }
            else
              {
                t = c_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_6, t);
  }
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_50 = NULL;
        n_50 = t;
        {
          ATerm g_30 = t;
          int i_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_16 = NULL;
              t = n_50;
              {
                ATerm k_30 = t;
                int l_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_16 = NULL,f_17 = NULL;
                    t = term_q_8;
                    z_16 = t;
                    t = term_f_27;
                    f_17 = t;
                    t = term_g_27;
                    t = p_7(z_16, f_17, t);
                    LocalPopChoice(l_30);
                  }
                else
                  {
                    t = k_30;
                    t = fetch_1_0(g_6, t);
                  }
              }
              t = n_50;
              t = default_system_usage_0_0(t);
              t = term_f_25;
              y_16 = t;
              t = SSL_exit(y_16);
              LocalPopChoice(i_30);
            }
          else
            {
              t = g_30;
              {
                ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
                t = term_q_8;
                s_17 = t;
                t = term_f_28;
                t_17 = t;
                t = term_n_30;
                t = p_7(s_17, t_17, t);
                t = n_50;
                t = default_system_about_0_0(t);
                t = term_f_25;
                r_17 = t;
                t = SSL_exit(r_17);
              }
            }
        }
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        {
          ATerm o_30 = t;
          int s_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
              static ATerm i_6 (ATerm t)
              {
                ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,v_5 = NULL;
                t_50 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_50 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_50);
                r_50 = t;
                t = s_50;
                if(((s_49 != NULL) && (s_49 != t)))
                  _fail(t);
                else
                  s_49 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_50);
                v_5 = t;
                t = SSLsetAnnotations(v_5, r_50);
                return(t);
              }
              t = fetch_1_0(i_6, t);
              t = term_x_16;
              p_50 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_49)), term_t_30);
              q_50 = t;
              t = SSL_printnl(p_50, q_50);
              t = (ATerm) ATmakeAppl(sym__2, term_x_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_49)), term_t_30));
              t = default_system_usage_0_0(t);
              t = term_i_9;
              o_50 = t;
              t = SSL_exit(o_50);
              LocalPopChoice(s_30);
            }
          else
            {
              t = o_30;
            }
        }
      }
  }
  t_49 = t;
  t = term_v_25;
  t = table_destroy_0_0(t);
  t = t_49;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm v_88 (ATerm), ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL;
  t = parse_options_1_0(s_88, t);
  y_50 = t;
  t = term_w_30;
  t = table_create_0_0(t);
  t = term_w_30;
  z_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_30, term_x_30, y_50);
  t = lookup_table_0_1(z_50, t);
  c_51 = t;
  t = term_x_30;
  a_51 = t;
  t = c_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(a_51, y_50, b_51, t);
  t = y_50;
  t = u_88(t);
  {
    ATerm b_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_88, t);
        LocalPopChoice(e_31);
      }
    else
      {
        t = b_31;
        {
          ATerm f_31 = t;
          int n_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_88(t);
              t = report_success_0_0(t);
              LocalPopChoice(n_31);
            }
          else
            {
              t = f_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      {
        ATerm q_31 = t;
        int r_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(r_31);
          }
        else
          {
            t = q_31;
            {
              ATerm s_31 = t;
              int t_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(l_6, m_6, n_6, t);
                  LocalPopChoice(t_31);
                }
              else
                {
                  t = s_31;
                  {
                    ATerm u_31 = t;
                    int y_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(y_31);
                      }
                    else
                      {
                        t = u_31;
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
static ATerm k_6 (ATerm t)
{
  t = xtc_temp_files_1_0(q_6, t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL;
  t = term_z_31;
  k_51 = t;
  t = term_u_18;
  l_51 = t;
  t = term_a_32;
  t = s_7(k_51, l_51, t);
  t = term_d_32;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_e_32;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL;
      t = term_q_8;
      o_51 = t;
      t = term_v_18;
      p_51 = t;
      t = term_h_32;
      t = p_7(o_51, p_51, t);
      n_51 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, n_51);
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      t = term_a_9;
    }
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_51 = NULL,w_51 = NULL;
        w_51 = t;
        if(match_cons(t, sym_FILE_1))
          {
            v_51 = ATgetArgument(t, 0);
            {
              ATerm a_18 = NULL,x_8 = NULL;
              t = SSLgetAnnotations(w_51);
              a_18 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_51);
              x_8 = t;
              t = SSLsetAnnotations(x_8, a_18);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_51;
          }
        LocalPopChoice(j_32);
        t = xtc_transform_file_2_0(t_6, f_7, t);
      }
    else
      {
        t = i_32;
        t = xtc_transform_term_2_0(l_7, v_7, t);
      }
  }
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_52 = NULL,k_52 = NULL;
        k_52 = t;
        if(match_cons(t, sym_FILE_1))
          {
            j_52 = ATgetArgument(t, 0);
            {
              ATerm l_18 = NULL,y_8 = NULL;
              t = SSLgetAnnotations(k_52);
              l_18 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_52);
              y_8 = t;
              t = SSLsetAnnotations(y_8, l_18);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_52;
          }
        LocalPopChoice(l_32);
        t = xtc_transform_file_2_0(w_7, pass_verbose_0_0, t);
      }
    else
      {
        t = k_32;
        t = xtc_transform_term_2_0(a_8, pass_verbose_0_0, t);
      }
  }
  {
    ATerm m_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_52 = NULL,r_52 = NULL;
        r_52 = t;
        if(match_cons(t, sym_FILE_1))
          {
            q_52 = ATgetArgument(t, 0);
            {
              ATerm t_18 = NULL,z_8 = NULL;
              t = SSLgetAnnotations(r_52);
              t_18 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_52);
              z_8 = t;
              t = SSLsetAnnotations(z_8, t_18);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_52;
          }
        LocalPopChoice(q_32);
        t = xtc_transform_file_2_0(b_8, pass_verbose_0_0, t);
      }
    else
      {
        t = m_32;
        t = xtc_transform_term_2_0(e_8, pass_verbose_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_r_32;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm x_51 = NULL;
  t = term_s_32;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  x_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_51), term_w_32);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_r_32;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm y_51 = NULL;
  t = term_s_32;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  y_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_51), term_w_32);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_x_32;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_x_32;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_y_32;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm io_pp_c_0_0 (ATerm t)
{
  t = option_wrap_4_0(j_6, default_usage_0_0, _id, k_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_c_0_0(t);
  return(t);
}
