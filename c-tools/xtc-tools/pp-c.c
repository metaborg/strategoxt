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
ATerm term_i_33;
ATerm term_h_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_z_32;
ATerm term_h_32;
ATerm term_e_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_b_31;
ATerm term_t_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_i_29;
ATerm term_w_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_n_28;
ATerm term_z_27;
ATerm term_x_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_r_27;
ATerm term_m_27;
ATerm term_i_27;
ATerm term_e_27;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_s_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_x_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_p_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_b_23;
ATerm term_v_22;
ATerm term_t_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_f_22;
ATerm term_b_22;
ATerm term_z_21;
ATerm term_x_21;
ATerm term_o_21;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_b_21;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_k_18;
ATerm term_y_17;
ATerm term_d_17;
ATerm term_y_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
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
ATerm term_v_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
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
ATerm term_l_12;
ATerm term_k_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_t_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_n_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_e_9;
ATerm term_a_9;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_r_8);
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
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
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
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_m_10, term_n_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_10, term_t_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_e_11, term_f_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_l_11, term_m_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_11, term_q_11, term_r_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_b_12, term_c_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_k_12, term_l_12);
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
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_m_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_p_13, term_q_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_v_13);
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
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_f_14, term_g_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_j_14, term_k_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_q_14, term_r_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_y_14, term_z_14);
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
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_q_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_y_15, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_d_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_o_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_t_22);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__2, term_h_22, term_e_23);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, term_h_22, term_i_22);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_r_18, term_k_18);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_f_25);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_25);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_u_18);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_n_26);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_i_27);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__2, term_c_26, term_d_26);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_u_18);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__2, term_s_28, term_u_18);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__2, term_i_27, term_u_18);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__3, term_c_26, term_d_26, (ATerm) ATempty);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_n_28);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_u_18);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_w_18);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm j_7 (ATerm t_14, ATerm u_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm p_6 (ATerm g_29, ATerm h_29, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm b_7 (ATerm t_17, ATerm u_17, ATerm t);
static ATerm e_7 (ATerm z_78 (ATerm), ATerm w_181, ATerm d_18, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm t);
static ATerm f_7 (ATerm l_14, ATerm m_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm c_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm o_77 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm h_100 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm h_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_10 (ATerm y_9, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm h_7 (ATerm d_93 (ATerm), ATerm o_30, ATerm m_30, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm q_6 (ATerm j_19, ATerm k_19, ATerm t);
ATerm at_last_1_0 (ATerm s_84 (ATerm), ATerm t);
static ATerm s_6 (ATerm z_83 (ATerm), ATerm x_19, ATerm j_213, ATerm t);
ATerm at_suffix_1_0 (ATerm l_84 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm d_84 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm e_111 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm remove_extension_0_0 (ATerm t);
ATerm debug_1_0 (ATerm x_78 (ATerm), ATerm t);
static ATerm t_6 (ATerm p_45, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm i_97 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm h_97 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm j_97 (ATerm), ATerm t);
static ATerm v_6 (ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t);
static ATerm w_6 (ATerm b_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
static ATerm n_1 (ATerm t);
static ATerm x_6 (ATerm n_41, ATerm o_41, ATerm p_41, ATerm t);
static ATerm y_6 (ATerm l_97 (ATerm), ATerm x_41, ATerm w_41, ATerm t);
static ATerm a_7 (ATerm y_46, ATerm z_46, ATerm t);
static ATerm t_25 (ATerm n_25, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_6 (ATerm z_17, ATerm t);
static ATerm i_7 (ATerm i_63, ATerm j_63, ATerm t);
static ATerm c_7 (ATerm h_47, ATerm i_47, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_28 (ATerm i_26, ATerm t);
static ATerm i_28 (ATerm r_26, ATerm s_26, ATerm u_26, ATerm t);
static ATerm j_28 (ATerm j_27, ATerm k_27, ATerm l_27, ATerm t);
static ATerm d_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_92 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm d_34 (ATerm y_32, ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm q_7 (ATerm j_42, ATerm k_42, ATerm t);
static ATerm k_7 (ATerm v_40, ATerm w_40, ATerm t);
ATerm end_scope_1_0 (ATerm a_93 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm z_92 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm t_99 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_7 (ATerm v_45, ATerm w_45, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_7 (ATerm q_40, ATerm r_40, ATerm p_40, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_7 (ATerm a_29, ATerm b_29, ATerm t);
ATerm foldr_2_0 (ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_97 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm need_help_1_0 (ATerm j_101 (ATerm), ATerm t);
static ATerm u_7 (ATerm i_45, ATerm j_45, ATerm k_45, ATerm t);
static ATerm v_7 (ATerm l_45, ATerm m_45, ATerm t);
ATerm lookup_table_0_1 (ATerm c_42, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_45, ATerm r_45, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm n_7 (ATerm n_45, ATerm o_45, ATerm t);
static ATerm o_7 (ATerm s_45, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm h_103 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm parse_options_1_0 (ATerm g_103 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm io_pp_c_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
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
        ATerm e_0 = NULL;
        t = r_1;
        t = q_0(t);
        e_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = e_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = e_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, s_1, e_0);
        t = j_7(s_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, s_1);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        {
          ATerm h_8 = t;
          int j_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_0 = NULL;
              t = r_1;
              t = q_0(t);
              w_0 = t;
              {
                ATerm k_8 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_0 = NULL;
                    x_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = x_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = x_0;
                          }
                        else
                          {
                            t = x_0;
                            if((s_1 != t))
                              {
                                _fail(t);
                              }
                            t = x_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, s_1, w_0);
              t = j_7(s_1, w_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_1);
              LocalPopChoice(j_8);
            }
          else
            {
              t = h_8;
              t = r_1;
              t = q_0(t);
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
static ATerm j_7 (ATerm t_14, ATerm u_14, ATerm t)
{
  t = SSL_copy(t_14, u_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm m_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_2 = NULL,u_2 = NULL;
      t = term_q_8;
      t_2 = t;
      t = term_r_8;
      u_2 = t;
      t = term_s_8;
      t = q_7(t_2, u_2, t);
      LocalPopChoice(p_8);
    }
  else
    {
      t = m_8;
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
      ATerm e_1 = NULL,g_1 = NULL;
      t = term_r_8;
      {
        ATerm v_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 = NULL,l_1 = NULL;
            t = term_q_8;
            h_1 = t;
            t = term_r_8;
            l_1 = t;
            t = term_s_8;
            t = q_7(h_1, l_1, t);
            LocalPopChoice(w_8);
          }
        else
          {
            t = v_8;
            t = term_u_8;
          }
      }
      e_1 = t;
      t = term_a_9;
      g_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, e_1);
      t = j_7(g_1, e_1, t);
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
static ATerm p_6 (ATerm g_29, ATerm h_29, ATerm t)
{
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(g_29, h_29);
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      t = SSL_subtr(g_29, h_29);
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
        ATerm c_3 = NULL,d_3 = NULL;
        t = term_q_8;
        c_3 = t;
        t = term_e_9;
        d_3 = t;
        t = term_h_9;
        t = q_7(c_3, d_3, t);
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
  t = p_6(z_2, b_3, t);
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
      t = a_7(i_3, k_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm b_7 (ATerm t_17, ATerm u_17, ATerm t)
{
  ATerm l_3 = NULL;
  t = SSL_write_term_to_stream_baf(t_17, u_17);
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_3);
  return(t);
}
static ATerm e_7 (ATerm z_78 (ATerm), ATerm w_181, ATerm d_18, ATerm t)
{
  ATerm m_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_181, term_n_9);
  t = d_7(t);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_3, d_18);
  t = z_78(t);
  t = fclose_0_0(t);
  t = d_18;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm p_3 = NULL,s_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_9 = ATgetArgument(t, 0);
      if(match_cons(o_9, sym_Stream_1))
        {
          p_3 = ATgetArgument(o_9, 0);
        }
      else
        _fail(t);
      s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(p_3, s_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL;
  o_3 = t;
  t = xtc_new_file_0_0(t);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_3, o_3);
  t = e_7(b_0, n_3, o_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_3);
  t = xtc_transform_file_2_0(g_99, h_99, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm f_7 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_execvp(l_14, m_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,z_4 = NULL;
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
      ATerm k_2 = NULL,l_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          v_4 = ATgetArgument(t, 0);
          w_4 = ATgetArgument(t, 1);
          z_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(w_4);
      k_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_4), term_v_9), k_2), term_u_9), v_4);
      l_2 = t;
      t = SSL_concat_strings(l_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm c_84 (ATerm), ATerm t)
{
  ATerm f_5 = NULL;
  static ATerm c_0 (ATerm t)
  {
    t = c_84(t);
    if(((f_5 != NULL) && (f_5 != t)))
      _fail(t);
    else
      f_5 = t;
    return(t);
  }
  t = fetch_1_0(c_0, t);
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
        static ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm a_10 = ATgetArgument(t, 0);
              if((g_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm d_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_16), term_k_16), term_e_16), term_a_16), term_t_15), term_n_15), term_i_15), term_e_15), term_a_15), term_s_14), term_n_14), term_h_14), term_c_14), term_y_13), term_r_13), term_n_13), term_j_13), term_f_13), term_a_13), term_w_12), term_q_12), term_e_12), term_s_11), term_n_11), term_i_11), term_y_10), term_o_10), term_h_10);
        t = fetch_elem_1_0(f_0, t);
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
  ATerm n_5 = NULL,a_6 = NULL;
  n_5 = t;
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_16 = ATgetArgument(t, 0);
            a_6 = ATgetArgument(t, 1);
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
              ATerm f_3 = NULL,q_3 = NULL,r_3 = NULL;
              t = a_6;
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
              f_3 = t;
              t = term_y_16;
              q_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_3), term_d_17);
              r_3 = t;
              t = SSL_printnl(q_3, r_3);
              t = (ATerm) ATmakeAppl(sym__2, term_y_16, (ATerm) ATinsert(ATinsert(ATempty, f_3), term_d_17));
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
ATerm fork_and_wait_1_0 (ATerm o_77 (ATerm), ATerm t)
{
  ATerm u_6 = NULL,p_7 = NULL;
  p_7 = t;
  t = fork_0_0(t);
  u_6 = t;
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = p_7;
        t = o_77(t);
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        t = SSL_waitpid(u_6);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_17 = ATgetArgument(t, 0);
            if(((ATgetType(o_17) != AT_INT) || (ATgetInt((ATermInt) o_17) != 0)))
              _fail(t);
            {
              ATerm v_17 = ATgetArgument(t, 1);
            }
            {
              ATerm x_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = p_7;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm h_100 (ATerm), ATerm t)
{
  ATerm w_7 = NULL,z_7 = NULL;
  z_7 = t;
  t = h_100(t);
  t = xtc_find_0_0(t);
  w_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_7, z_7);
  {
    static ATerm i_0 (ATerm t)
    {
      ATerm a_8 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, w_7, z_7);
      t = f_7(w_7, z_7, t);
      t = term_y_17;
      a_8 = t;
      t = SSL_exit(a_8);
      return(t);
    }
    t = fork_and_wait_1_0(i_0, t);
  }
  t = z_7;
  return(t);
}
ATerm at_end_1_0 (ATerm h_84 (ATerm), ATerm t)
{
  static ATerm q_9 (ATerm t)
  {
    ATerm k_9 = NULL,l_9 = NULL,p_9 = NULL;
    p_9 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_9 = ATgetFirst((ATermList) t);
        l_9 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_3 = NULL,a_4 = NULL,v_0 = NULL;
          t = SSLgetAnnotations(p_9);
          x_3 = t;
          t = l_9;
          t = q_9(t);
          a_4 = t;
          t = (ATerm) ATinsert(CheckATermList(a_4), k_9);
          v_0 = t;
          t = SSLsetAnnotations(v_0, x_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_9;
        t = h_84(t);
      }
    return(t);
  }
  t = q_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_8 = NULL,l_8 = NULL,o_8 = NULL;
  i_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_8;
    }
  else
    {
      static ATerm k_0 (ATerm t)
      {
        t = not_null(o_8);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_8 = ATgetFirst((ATermList) t);
          if(((o_8 != NULL) && (o_8 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_8;
      t = at_end_1_0(k_0, t);
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
  ATerm b_10 = NULL,c_10 = NULL,e_10 = NULL;
  e_10 = t;
  if(match_cons(t, sym__2))
    {
      b_10 = ATgetArgument(t, 0);
      c_10 = ATgetArgument(t, 1);
      {
        ATerm c_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_0 (ATerm t)
            {
              t = c_10;
              return(t);
            }
            t = b_10;
            t = at_end_1_0(n_0, t);
            LocalPopChoice(g_18);
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
static ATerm h_7 (ATerm d_93 (ATerm), ATerm o_30, ATerm m_30, ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,r_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,a_11 = NULL,b_11 = NULL;
  u_10 = t;
  t = d_93(t);
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_10, o_30, m_30);
  t = r_7(k_10, o_30, m_30, t);
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_11 = NULL;
        t = term_k_18;
        d_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_10, term_k_18);
        t = q_7(k_10, d_11, t);
        {
          ATerm m_18 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_18;
            }
        }
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_10 = ATgetFirst((ATermList) t);
      r_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_10, term_k_18, (ATerm) ATinsert(CheckATermList(r_10), (ATerm) ATinsert(CheckATermList(l_10), o_30)));
  t = lookup_table_0_1(k_10, t);
  b_11 = t;
  t = term_k_18;
  v_10 = t;
  t = (ATerm) ATinsert(CheckATermList(r_10), (ATerm) ATinsert(CheckATermList(l_10), o_30));
  w_10 = t;
  t = b_11;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(v_10, w_10, a_11, t);
  t = u_10;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm k_11 = NULL;
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_11 = NULL,y_4 = NULL;
      o_11 = t;
      t = term_p_18;
      y_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_11, term_p_18);
      t = i_7(o_11, y_4, t);
      k_11 = t;
      t = SSL_mkstemp(k_11);
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      {
        ATerm v_11 = NULL;
        t = term_q_18;
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
static ATerm s_0 (ATerm t)
{
  t = term_r_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,d_12 = NULL;
  t = P__tmpdir_0_0(t);
  a_12 = t;
  t = term_t_18;
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_12, term_t_18);
  t = i_7(a_12, d_12, t);
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
  t = h_7(s_0, y_11, z_11, t);
  t = SSL_close(x_11);
  t = y_11;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL;
  h_12 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_12 = NULL,p_12 = NULL;
      t = h_12;
      t = xtc_new_file_0_0(t);
      o_12 = t;
      t = t_0(t);
      p_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_12, (ATerm) ATinsert(ATinsert(ATempty, o_12), term_r_8));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_12);
    }
  else
    {
      ATerm t_12 = NULL,u_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_12;
      t = xtc_new_file_0_0(t);
      t_12 = t;
      t = t_0(t);
      u_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_12), term_r_8), i_12), term_w_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_12);
    }
  return(t);
}
static ATerm q_6 (ATerm j_19, ATerm k_19, ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL;
  t = k_19;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_19;
    }
  else
    {
      ATerm i_5 = NULL,l_5 = NULL,a_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_13 = ATgetFirst((ATermList) t);
          x_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_19);
      i_5 = t;
      t = x_13;
      {
        static ATerm t_5 (ATerm t)
        {
          ATerm x_18 = t;
          int a_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_5 = NULL;
              m_5 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_5;
              LocalPopChoice(a_19);
            }
          else
            {
              t = x_18;
              {
                ATerm p_5 = NULL;
                t = Cons_2_0(_id, t_5, t);
                p_5 = t;
                t = (ATerm) ATinsert(CheckATermList(p_5), j_19);
              }
            }
          return(t);
        }
        t = t_5(t);
      }
      l_5 = t;
      t = (ATerm) ATinsert(CheckATermList(l_5), w_13);
      a_1 = t;
      t = SSLsetAnnotations(a_1, i_5);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm s_84 (ATerm), ATerm t)
{
  static ATerm w_15 (ATerm t)
  {
    ATerm r_15 = NULL,u_15 = NULL,v_15 = NULL;
    r_15 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_15 = ATgetFirst((ATermList) t);
        v_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_19 = t;
      int c_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_6 = NULL,f_1 = NULL;
          t = SSLgetAnnotations(r_15);
          i_6 = t;
          t = v_15;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(v_15), u_15);
          f_1 = t;
          t = SSLsetAnnotations(f_1, i_6);
          t = s_84(t);
          LocalPopChoice(c_19);
        }
      else
        {
          t = b_19;
          {
            ATerm y_7 = NULL,d_8 = NULL,i_1 = NULL;
            t = SSLgetAnnotations(r_15);
            y_7 = t;
            t = v_15;
            t = w_15(t);
            d_8 = t;
            t = (ATerm) ATinsert(CheckATermList(d_8), u_15);
            i_1 = t;
            t = SSLsetAnnotations(i_1, y_7);
          }
        }
    }
    return(t);
  }
  t = w_15(t);
  return(t);
}
static ATerm s_6 (ATerm z_83 (ATerm), ATerm x_19, ATerm j_213, ATerm t)
{
  static ATerm u_0 (ATerm t)
  {
    ATerm f_16 = NULL;
    f_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_19, f_16);
    t = z_83(t);
    t = f_16;
    return(t);
  }
  t = j_213;
  t = SRTS_one(u_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  static ATerm c_17 (ATerm t)
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_84(t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        {
          ATerm x_16 = NULL,a_17 = NULL,b_17 = NULL,n_8 = NULL,t_8 = NULL,o_1 = NULL;
          x_16 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_17 = ATgetFirst((ATermList) t);
              b_17 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_16);
          n_8 = t;
          t = b_17;
          t = c_17(t);
          t_8 = t;
          t = (ATerm) ATinsert(CheckATermList(t_8), a_17);
          o_1 = t;
          t = SSLsetAnnotations(o_1, n_8);
        }
      }
    return(t);
  }
  t = c_17(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  ATerm e_17 = NULL,h_17 = NULL;
  static ATerm y_0 (ATerm t)
  {
    ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,s_17 = NULL,w_17 = NULL,e_18 = NULL,f_18 = NULL,h_18 = NULL,v_1 = NULL,u_1 = NULL;
    h_18 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_17 = ATgetFirst((ATermList) t);
        w_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_18);
    l_17 = t;
    t = s_17;
    t = d_84(t);
    e_18 = t;
    t = (ATerm) ATinsert(CheckATermList(w_17), e_18);
    u_1 = t;
    t = SSLsetAnnotations(u_1, l_17);
    f_18 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_17 = ATgetFirst((ATermList) t);
        k_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_18);
    i_17 = t;
    t = k_17;
    if(((e_17 != NULL) && (e_17 != t)))
      _fail(t);
    else
      e_17 = t;
    t = (ATerm) ATinsert(CheckATermList(k_17), j_17);
    v_1 = t;
    t = SSLsetAnnotations(v_1, i_17);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(y_0, t);
  h_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_17, not_null(e_17));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm e_111 (ATerm), ATerm t)
{
  ATerm v_18 = NULL,y_18 = NULL;
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(e_111, t);
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      {
        ATerm s_18 = NULL;
        s_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_18, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      v_18 = ATgetArgument(t, 0);
      y_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_18;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_18;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm h_19 = ATgetFirst((ATermList) t);
              ATerm i_19 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = y_18;
          t = list_tokenize_1_0(e_111, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm l_19 = ATgetFirst((ATermList) t);
          ATerm m_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_18;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, v_18);
        }
      else
        {
          ATerm s_19 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm n_19 = ATgetFirst((ATermList) t);
              ATerm o_19 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = y_18;
          t = list_tokenize_1_0(e_111, t);
          s_19 = t;
          t = (ATerm) ATinsert(CheckATermList(s_19), v_18);
        }
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm t_20 = NULL;
  if(match_cons(t, sym__2))
    {
      t_20 = ATgetArgument(t, 0);
      if((t_20 != ATgetArgument(t, 1)))
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
  ATerm z_20 = NULL;
  z_20 = t;
  t = SSL_implode_string(z_20);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm t_19 = NULL,v_19 = NULL,b_20 = NULL,c_20 = NULL,k_20 = NULL,o_20 = NULL,r_20 = NULL,n_2 = NULL;
  r_20 = t;
  if(match_cons(t, sym__2))
    {
      c_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_20);
  b_20 = t;
  t = SSL_explode_string(k_20);
  o_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_20, o_20);
  n_2 = t;
  t = SSLsetAnnotations(n_2, b_20);
  if(match_cons(t, sym__2))
    {
      t_19 = ATgetArgument(t, 0);
      v_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_19;
  {
    static ATerm z_0 (ATerm t)
    {
      ATerm s_20 = NULL;
      s_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_20, t_19);
      t = s_6(b_1, s_20, t_19, t);
      return(t);
    }
    t = list_tokenize_1_0(z_0, t);
  }
  t = map_1_0(c_1, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm j_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_19 = ATgetFirst((ATermList) t);
      j_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_21;
  return(t);
}
ATerm remove_extension_0_0 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,h_21 = NULL;
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_q_19), d_21);
  t = string_tokenize_0_0(t);
  t = at_last_1_0(d_1, t);
  c_21 = t;
  t = term_r_19;
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_19, c_21);
  t = q_6(h_21, c_21, t);
  e_21 = t;
  t = SSL_concat_strings(e_21);
  return(t);
}
ATerm debug_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,p_21 = NULL,q_21 = NULL;
  l_21 = t;
  t = x_78(t);
  m_21 = t;
  t = term_y_16;
  p_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_21), m_21);
  q_21 = t;
  t = SSL_printnl(p_21, q_21);
  t = l_21;
  return(t);
}
static ATerm t_6 (ATerm p_45, ATerm t)
{
  t = SSL_hashtable_keys(p_45);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL;
  static ATerm j_1 (ATerm t)
  {
    ATerm v_21 = NULL,y_21 = NULL;
    v_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_21), v_21);
    t = q_7(not_null(t_21), v_21, t);
    y_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_21, y_21);
    return(t);
  }
  if(((t_21 != NULL) && (t_21 != t)))
    _fail(t);
  else
    t_21 = t;
  t = lookup_table_0_1(t_21, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(u_21, t);
  t = map_1_0(j_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm i_97 (ATerm), ATerm t)
{
  ATerm a_22 = NULL;
  a_22 = t;
  {
    ATerm u_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
        t = term_q_8;
        d_22 = t;
        t = term_e_9;
        e_22 = t;
        t = term_h_9;
        t = q_7(d_22, e_22, t);
        c_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_22, term_y_15);
        t = geq_0_0(t);
        t = a_22;
        t = i_97(t);
        LocalPopChoice(w_19);
      }
    else
      {
        t = u_19;
        t = a_22;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm h_97 (ATerm), ATerm t)
{
  ATerm k_22 = NULL;
  k_22 = t;
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
        t = term_q_8;
        n_22 = t;
        t = term_e_9;
        o_22 = t;
        t = term_h_9;
        t = q_7(n_22, o_22, t);
        m_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_22, term_h_13);
        t = geq_0_0(t);
        t = k_22;
        t = h_97(t);
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        t = k_22;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm j_97 (ATerm), ATerm t)
{
  ATerm u_22 = NULL;
  u_22 = t;
  {
    ATerm a_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_22 = NULL,y_22 = NULL,z_22 = NULL;
        t = term_q_8;
        y_22 = t;
        t = term_e_9;
        z_22 = t;
        t = term_h_9;
        t = q_7(y_22, z_22, t);
        w_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_22, term_e_11);
        t = geq_0_0(t);
        t = u_22;
        t = j_97(t);
        LocalPopChoice(d_20);
      }
    else
      {
        t = a_20;
        t = u_22;
      }
  }
  return(t);
}
static ATerm v_6 (ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  t = f_88(t);
  {
    static ATerm k_1 (ATerm t)
    {
      ATerm c_23 = NULL;
      c_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_25, c_23);
      t = e_88(t);
      return(t);
    }
    t = fetch_1_0(k_1, t);
  }
  t = g_25;
  return(t);
}
static ATerm w_6 (ATerm b_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  static ATerm z_23 (ATerm t)
  {
    ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
    q_23 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_23 = ATgetFirst((ATermList) t);
            s_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_23;
              {
                static ATerm m_1 (ATerm t)
                {
                  t = c_25;
                  return(t);
                }
                t = v_6(b_88, m_1, r_23, s_23, t);
              }
              t = z_23(t);
              LocalPopChoice(f_20);
            }
          else
            {
              t = e_20;
              {
                ATerm m_9 = NULL,r_9 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(q_23);
                m_9 = t;
                t = s_23;
                t = z_23(t);
                r_9 = t;
                t = (ATerm) ATinsert(CheckATermList(r_9), r_23);
                q_2 = t;
                t = SSLsetAnnotations(q_2, m_9);
              }
            }
        }
      }
    return(t);
  }
  t = d_25;
  t = z_23(t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm r_24 = NULL;
  if(match_cons(t, sym__2))
    {
      r_24 = ATgetArgument(t, 0);
      if((r_24 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_6 (ATerm n_41, ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm e_24 = NULL,h_24 = NULL,i_24 = NULL,k_24 = NULL;
  e_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_20 = ATgetArgument(t, 0);
            ATerm j_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
        t = q_7(n_41, o_41, t);
        LocalPopChoice(h_20);
      }
    else
      {
        t = g_20;
        t = (ATerm) ATempty;
      }
  }
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_24, p_41);
  t = w_6(n_1, i_24, p_41, t);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_41, o_41, h_24);
  t = lookup_table_0_1(n_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(o_41, h_24, k_24, t);
  t = e_24;
  return(t);
}
static ATerm y_6 (ATerm l_97 (ATerm), ATerm x_41, ATerm w_41, ATerm t)
{
  static ATerm p_1 (ATerm t)
  {
    ATerm s_24 = NULL,t_24 = NULL;
    if(match_cons(t, sym__2))
      {
        s_24 = ATgetArgument(t, 0);
        t_24 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, x_41, s_24, t_24);
    t = l_97(t);
    return(t);
  }
  t = w_41;
  t = map_1_0(p_1, t);
  return(t);
}
static ATerm a_7 (ATerm y_46, ATerm z_46, ATerm t)
{
  t = SSL_access(y_46, z_46);
  return(t);
}
static ATerm t_25 (ATerm n_25, ATerm t)
{
  t = SSL_fclose(n_25);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL;
  r_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_25 = ATgetArgument(t, 0);
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_25);
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            t = t_25(r_25, t);
          }
      }
    }
  else
    {
      t = t_25(r_25, t);
    }
  return(t);
}
static ATerm z_6 (ATerm z_17, ATerm t)
{
  t = SSL_read_term_from_stream(z_17);
  return(t);
}
static ATerm i_7 (ATerm i_63, ATerm j_63, ATerm t)
{
  t = SSL_strcat(i_63, j_63);
  return(t);
}
static ATerm c_7 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm w_25 = NULL;
  t = SSL_fopen(h_47, i_47);
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_25);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_25 = NULL;
  t = SSL_stdin_stream();
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_25);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_25 = NULL;
  t = SSL_stdout_stream();
  y_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_25);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_25 = NULL;
  t = SSL_stderr_stream();
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_25);
  return(t);
}
static ATerm h_28 (ATerm i_26, ATerm t)
{
  ATerm k_26 = NULL;
  t = SSL_explode_term(i_26);
  if(match_cons(t, sym__2))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_20 = ATgetArgument(t, 1);
        if(((ATgetType(p_20) == AT_LIST) && !(ATisEmpty(p_20))))
          {
            k_26 = ATgetFirst((ATermList) p_20);
            {
              ATerm q_20 = (ATerm) ATgetNext((ATermList) p_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_26;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_26;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_26;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_26;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_28 (ATerm r_26, ATerm s_26, ATerm u_26, ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,h_27 = NULL,b_4 = NULL;
  t = SSLgetAnnotations(u_26);
  x_26 = t;
  t = r_26;
  if(match_cons(t, sym_Path_1))
    {
      h_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_27, s_26);
  b_4 = t;
  t = SSLsetAnnotations(b_4, x_26);
  if(match_cons(t, sym__2))
    {
      v_26 = ATgetArgument(t, 0);
      w_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(v_26, w_26, t);
  return(t);
}
static ATerm j_28 (ATerm j_27, ATerm k_27, ATerm l_27, ATerm t)
{
  ATerm n_27 = NULL,q_27 = NULL,s_27 = NULL,y_27 = NULL,d_4 = NULL;
  t = SSLgetAnnotations(l_27);
  s_27 = t;
  t = SSL_is_string(j_27);
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_27, k_27);
  d_4 = t;
  t = SSLsetAnnotations(d_4, s_27);
  if(match_cons(t, sym__2))
    {
      n_27 = ATgetArgument(t, 0);
      q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(n_27, q_27, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm b_28 = NULL,e_28 = NULL,g_28 = NULL;
  b_28 = t;
  if(match_cons(t, sym__2))
    {
      e_28 = ATgetArgument(t, 0);
      g_28 = ATgetArgument(t, 1);
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_28(b_28, t);
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
            {
              ATerm w_20 = t;
              int x_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_28(e_28, g_28, b_28, t);
                  LocalPopChoice(x_20);
                }
              else
                {
                  t = w_20;
                  t = j_28(e_28, g_28, b_28, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_28(b_28, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_28 = NULL,o_28 = NULL,p_28 = NULL,v_28 = NULL;
  v_28 = t;
  {
    ATerm y_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_28, term_b_21);
        t = d_7(t);
        LocalPopChoice(a_21);
      }
    else
      {
        t = y_20;
        {
          ATerm q_10 = NULL,s_10 = NULL;
          t = term_f_21;
          s_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_21, v_28);
          t = i_7(s_10, v_28, t);
          q_10 = t;
          t = SSL_perror(q_10);
          _fail(t);
        }
      }
  }
  o_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_6(p_28, t);
  l_28 = t;
  t = o_28;
  t = fclose_0_0(t);
  t = l_28;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_g_21;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_i_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm k_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_29 = NULL,e_29 = NULL;
      c_29 = t;
      t = (ATerm) ATinsert(ATempty, term_o_21);
      e_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_29, (ATerm) ATinsert(ATempty, term_o_21));
      t = a_7(c_29, e_29, t);
      LocalPopChoice(n_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = k_21;
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_21 = t;
            if((PushChoice() == 0))
              {
                ATerm f_29 = NULL,n_29 = NULL;
                f_29 = t;
                t = (ATerm) ATinsert(ATempty, term_j_9);
                n_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_29, (ATerm) ATinsert(ATempty, term_j_9));
                t = a_7(f_29, n_29, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_21;
              }
            t = debug_1_0(q_1, t);
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            t = debug_1_0(t_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_x_21;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm v_30 = NULL,y_30 = NULL,z_30 = NULL;
  v_30 = t;
  t = term_y_16;
  y_30 = t;
  t = (ATerm) ATinsert(ATempty, term_b_22);
  z_30 = t;
  t = SSL_printnl(y_30, z_30);
  t = v_30;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm a_31 = NULL,c_31 = NULL,d_31 = NULL;
  if(match_cons(t, sym__3))
    {
      a_31 = ATgetArgument(t, 0);
      c_31 = ATgetArgument(t, 1);
      d_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_6(a_31, c_31, d_31, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
  g_31 = t;
  t = term_y_16;
  h_31 = t;
  t = (ATerm) ATinsert(ATempty, term_f_22);
  i_31 = t;
  t = SSL_printnl(h_31, i_31);
  t = g_31;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  j_31 = t;
  t = term_y_16;
  k_31 = t;
  t = (ATerm) ATinsert(ATempty, term_b_22);
  l_31 = t;
  t = SSL_printnl(k_31, l_31);
  t = j_31;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,e_30 = NULL,f_30 = NULL;
  o_29 = t;
  t = if_verbose5_1_0(w_1, t);
  {
    ATerm g_22 = t;
    if((PushChoice() == 0))
      {
        ATerm r_30 = NULL,u_30 = NULL;
        t = term_h_22;
        r_30 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, o_29);
        u_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_22, (ATerm) ATmakeAppl(sym_Imported_1, o_29));
        t = q_7(r_30, u_30, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_22;
      }
  }
  q_29 = t;
  t = term_h_22;
  z_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_22, term_i_22, (ATerm) ATinsert(ATempty, o_29));
  t = lookup_table_0_1(z_29, t);
  f_30 = t;
  t = term_i_22;
  a_30 = t;
  t = (ATerm) ATinsert(ATempty, o_29);
  b_30 = t;
  t = f_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(a_30, b_30, e_30, t);
  t = q_29;
  t = if_verbose4_1_0(a_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(c_2, t);
  p_29 = t;
  t = term_h_22;
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_22, p_29);
  t = y_6(d_2, y_29, p_29, t);
  t = if_verbose6_1_0(e_2, t);
  t = term_h_22;
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_22, (ATerm)ATmakeAppl(sym_Imported_1, o_29), (ATerm) ATempty);
  t = lookup_table_0_1(r_29, t);
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, o_29);
  u_29 = t;
  t = (ATerm) ATempty;
  v_29 = t;
  t = x_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(u_29, v_29, w_29, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_22, (ATerm)ATmakeAppl(sym_Imported_1, o_29), (ATerm) ATempty);
  t = if_verbose4_1_0(f_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
  b_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_32;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_32 = ATgetFirst((ATermList) t);
          d_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm j_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_11 = NULL,g_11 = NULL,h_11 = NULL,h_4 = NULL;
            t = SSLgetAnnotations(b_32);
            c_11 = t;
            t = c_32;
            t = i_92(t);
            g_11 = t;
            t = d_32;
            t = filter_1_0(i_92, t);
            h_11 = t;
            t = (ATerm) ATinsert(CheckATermList(h_11), g_11);
            h_4 = t;
            t = SSLsetAnnotations(h_4, c_11);
            LocalPopChoice(l_22);
          }
        else
          {
            t = j_22;
            t = d_32;
            t = filter_1_0(i_92, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm t)
{
  static ATerm i_32 (ATerm t)
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_81(t);
        t = i_32(t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = v_81(t);
      }
    return(t);
  }
  t = i_32(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_32 = NULL,k_32 = NULL;
      t = term_q_8;
      j_32 = t;
      t = term_t_22;
      k_32 = t;
      t = term_v_22;
      t = q_7(j_32, k_32, t);
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
        ATerm x_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_32 = NULL;
            t = term_b_23;
            l_32 = t;
            t = SSL_getenv(l_32);
            LocalPopChoice(a_23);
          }
        else
          {
            t = x_22;
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
  t = term_d_23;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL;
  t = term_h_22;
  r_32 = t;
  t = term_e_23;
  s_32 = t;
  t = term_f_23;
  t = q_7(r_32, s_32, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm g_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_23;
      }
  }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm n_32 = NULL;
  t = if_verbose5_1_0(g_2, t);
  n_32 = t;
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_32 = NULL,p_32 = NULL;
        t = term_h_22;
        o_32 = t;
        t = term_i_22;
        p_32 = t;
        t = term_k_23;
        t = q_7(o_32, p_32, t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        {
          ATerm q_32 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          q_32 = t;
          t = repeat_2_0(i_2, _id, t);
          t = q_32;
        }
      }
  }
  t = n_32;
  t = if_verbose5_1_0(j_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_l_23;
  return(t);
}
static ATerm d_34 (ATerm y_32, ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  t = term_h_22;
  b_33 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, y_32);
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_22, (ATerm) ATmakeAppl(sym_Tool_1, y_32));
  t = q_7(b_33, c_33, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_23 = ATgetFirst((ATermList) t);
      if(match_cons(m_23, sym__2))
        {
          ATerm o_23 = ATgetArgument(m_23, 0);
          a_33 = ATgetArgument(m_23, 1);
        }
      else
        _fail(t);
      {
        ATerm n_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_33;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = debug_1_0(w_2, t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_l_23;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_h_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(e_3, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_p_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_33 = NULL,g_33 = NULL,n_33 = NULL;
      t = if_verbose5_1_0(o_2, t);
      t = xtc_load_0_0(t);
      n_33 = t;
      if(match_cons(t, sym__2))
        {
          f_33 = ATgetArgument(t, 0);
          g_33 = ATgetArgument(t, 1);
          {
            ATerm v_23 = t;
            int w_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
                t = term_h_22;
                t_33 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, f_33);
                u_33 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_h_22, (ATerm) ATmakeAppl(sym_Tool_1, f_33));
                t = q_7(t_33, u_33, t);
                {
                  static ATerm s_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((g_33 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((s_33 != NULL) && (s_33 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_33 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(s_2, t);
                }
                t = not_null(s_33);
                LocalPopChoice(w_23);
              }
            else
              {
                t = v_23;
                t = d_34(n_33, t);
              }
          }
        }
      else
        {
          t = d_34(n_33, t);
        }
      t = if_verbose5_1_0(v_2, t);
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      {
        ATerm c_34 = NULL,t_11 = NULL,u_11 = NULL;
        c_34 = t;
        t = term_y_16;
        t_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_23), c_34), term_x_23);
        u_11 = t;
        t = SSL_printnl(t_11, u_11);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_23), c_34), term_x_23);
        t = if_verbose5_1_0(x_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm q_7 (ATerm j_42, ATerm k_42, ATerm t)
{
  ATerm g_34 = NULL;
  t = lookup_table_0_1(j_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(k_42, g_34, t);
  return(t);
}
static ATerm k_7 (ATerm v_40, ATerm w_40, ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL;
  l_34 = t;
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
        t = q_7(v_40, w_40, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_24 = ATgetFirst((ATermList) t);
            k_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_24);
        {
          ATerm m_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, v_40, w_40, k_34);
          t = lookup_table_0_1(v_40, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              m_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_7(w_40, k_34, m_34, t);
          t = (ATerm) ATmakeAppl(sym__3, v_40, w_40, k_34);
        }
      }
    else
      {
        t = a_24;
        {
          ATerm o_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
          t = lookup_table_0_1(v_40, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_7(w_40, o_34, t);
          t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
        }
      }
  }
  t = l_34;
  return(t);
}
ATerm end_scope_1_0 (ATerm a_93 (ATerm), ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,y_34 = NULL,z_34 = NULL;
  u_34 = t;
  t = a_93(t);
  t_34 = t;
  {
    ATerm d_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_35 = NULL;
        t = term_k_18;
        a_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_34, term_k_18);
        t = q_7(t_34, a_35, t);
        {
          ATerm g_24 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_24;
            }
        }
        LocalPopChoice(f_24);
      }
    else
      {
        t = d_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_34 = ATgetFirst((ATermList) t);
      r_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_34, term_k_18, r_34);
  t = lookup_table_0_1(t_34, t);
  z_34 = t;
  t = term_k_18;
  v_34 = t;
  t = z_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(v_34, r_34, y_34, t);
  t = s_34;
  {
    static ATerm g_3 (ATerm t)
    {
      ATerm b_35 = NULL;
      b_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_34, b_35);
      t = k_7(t_34, b_35, t);
      return(t);
    }
    t = map_1_0(g_3, t);
  }
  t = u_34;
  return(t);
}
ATerm restore_always_2_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm t)
{
  ATerm j_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_96(t);
      t = t_96(t);
      LocalPopChoice(l_24);
    }
  else
    {
      t = j_24;
      t = t_96(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,j_35 = NULL,m_35 = NULL,n_35 = NULL;
  e_35 = t;
  t = z_92(t);
  d_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_35, term_k_18);
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_35 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_24 = ATgetArgument(t, 0);
            ATerm p_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_18;
        t_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_35, term_k_18);
        t = q_7(d_35, t_35, t);
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = (ATerm) ATempty;
      }
  }
  f_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_35, term_k_18, (ATerm) ATinsert(CheckATermList(f_35), (ATerm) ATempty));
  t = lookup_table_0_1(d_35, t);
  n_35 = t;
  t = term_k_18;
  g_35 = t;
  t = (ATerm) ATinsert(CheckATermList(f_35), (ATerm) ATempty);
  j_35 = t;
  t = n_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(g_35, j_35, m_35, t);
  t = e_35;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_r_18;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm h_36 = NULL;
  h_36 = t;
  {
    ATerm q_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(h_36);
        LocalPopChoice(u_24);
      }
    else
      {
        t = q_24;
        t = h_36;
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_r_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_99 (ATerm), ATerm t)
{
  ATerm y_35 = NULL;
  static ATerm j_3 (ATerm t)
  {
    ATerm z_35 = NULL;
    z_35 = t;
    {
      ATerm v_24 = t;
      int w_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_36 = NULL,e_36 = NULL;
          t = term_r_18;
          c_36 = t;
          t = term_k_18;
          e_36 = t;
          t = term_x_24;
          t = q_7(c_36, e_36, t);
          LocalPopChoice(w_24);
        }
      else
        {
          t = v_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_35 != NULL) && (y_35 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_35 = ATgetFirst((ATermList) t);
        {
          ATerm y_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = y_35;
    t = map_1_0(t_3, t);
    t = z_35;
    t = end_scope_1_0(u_3, t);
    return(t);
  }
  t = begin_scope_1_0(h_3, t);
  t = restore_always_2_0(t_99, j_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL,s_36 = NULL,v_36 = NULL;
  l_36 = t;
  t = term_u_18;
  t = whoami_0_0(t);
  m_36 = t;
  t = term_y_16;
  s_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_25), m_36), term_z_24);
  v_36 = t;
  t = SSL_printnl(s_36, v_36);
  t = term_i_9;
  n_36 = t;
  t = SSL_exit(n_36);
  t = l_36;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm z_36 = NULL;
  z_36 = t;
  if(match_string(t, "-k"))
    {
      t = z_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_36;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm c_37 = NULL,e_37 = NULL,f_37 = NULL;
  c_37 = t;
  t = SSL_string_to_int(c_37);
  e_37 = t;
  t = term_b_25;
  f_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_25, e_37);
  t = t_7(f_37, e_37, t);
  t = c_37;
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
  ATerm k_37 = NULL;
  k_37 = t;
  if(match_string(t, "-S"))
    {
      t = k_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_37;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL;
  t = term_e_9;
  l_37 = t;
  t = term_f_25;
  m_37 = t;
  t = term_i_25;
  t = t_7(l_37, m_37, t);
  t = term_j_25;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_k_25;
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
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
  p_37 = t;
  t = SSL_string_to_int(p_37);
  q_37 = t;
  t = term_e_9;
  r_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_9, q_37);
  t = t_7(r_37, q_37, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_37);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_l_25;
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
  ATerm u_37 = NULL,w_37 = NULL;
  t = term_m_25;
  u_37 = t;
  t = term_u_18;
  w_37 = t;
  t = term_o_25;
  t = t_7(u_37, w_37, t);
  t = term_p_25;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_s_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_3, c_4, e_4, t);
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
      {
        ATerm a_26 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_4, g_4, i_4, t);
            LocalPopChoice(b_26);
          }
        else
          {
            t = a_26;
            t = Option_3_0(j_4, l_4, m_4, t);
          }
      }
    }
  return(t);
}
static ATerm t_7 (ATerm v_45, ATerm w_45, ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL;
  t = term_q_8;
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_8, v_45, w_45);
  t = lookup_table_0_1(x_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(v_45, w_45, y_37, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_8, v_45, w_45);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
      t = term_u_18;
      t = h_0(t);
      h_38 = t;
      t = term_c_26;
      i_38 = t;
      t = term_d_26;
      j_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_26, term_d_26, h_38);
      t = r_7(i_38, j_38, h_38, t);
      _fail(t);
    }
  else
    {
      ATerm m_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_38 = ATgetFirst((ATermList) t);
          g_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_38;
      t = d_0(t);
      t = term_u_18;
      t = g_0(t);
      m_38 = t;
      t = (ATerm) ATinsert(CheckATermList(g_38), m_38);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm o_38 = NULL;
  o_38 = t;
  if(match_string(t, "-o"))
    {
      t = o_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_38;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL;
  p_38 = t;
  t = term_r_8;
  q_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_8, p_38);
  t = t_7(q_38, p_38, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_38);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, r_4, t);
  return(t);
}
static ATerm r_7 (ATerm q_40, ATerm r_40, ATerm p_40, ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL;
  s_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_26 = ATgetArgument(t, 0);
            ATerm j_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
        t = q_7(q_40, r_40, t);
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        t = (ATerm) ATempty;
      }
  }
  t_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_40, r_40, (ATerm) ATinsert(CheckATermList(t_38), p_40));
  t = lookup_table_0_1(q_40, t);
  w_38 = t;
  t = (ATerm) ATinsert(CheckATermList(t_38), p_40);
  u_38 = t;
  t = w_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(r_40, u_38, v_38, t);
  t = s_38;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
      t = term_u_18;
      t = p_0(t);
      h_39 = t;
      t = term_c_26;
      i_39 = t;
      t = term_d_26;
      j_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_26, term_d_26, h_39);
      t = r_7(i_39, j_39, h_39, t);
      _fail(t);
    }
  else
    {
      ATerm n_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_39 = ATgetFirst((ATermList) t);
          e_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_39;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_39 = ATgetFirst((ATermList) t);
          g_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_39;
      t = m_0(t);
      t = f_39;
      t = o_0(t);
      n_39 = t;
      t = (ATerm) ATinsert(CheckATermList(g_39), n_39);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm p_39 = NULL;
  p_39 = t;
  if(match_string(t, "-i"))
    {
      t = p_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_39;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL;
  t_39 = t;
  t = term_w_18;
  u_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_18, t_39);
  t = t_7(u_39, t_39, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_39);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_l_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, a_5, b_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_18;
  t = whoami_0_0(t);
  v_39 = t;
  t = term_y_16;
  x_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_26), v_39);
  y_39 = t;
  t = SSL_printnl(x_39, y_39);
  t = term_i_9;
  w_39 = t;
  t = SSL_exit(w_39);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL;
  t = term_q_8;
  b_40 = t;
  t = term_n_26;
  c_40 = t;
  t = term_o_26;
  t = q_7(b_40, c_40, t);
  return(t);
}
static ATerm l_7 (ATerm a_29, ATerm b_29, ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_29, b_29);
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      t = SSL_addr(a_29, b_29);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,j_40 = NULL;
  g_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_40;
      t = e_91(t);
    }
  else
    {
      ATerm t_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_40 = ATgetFirst((ATermList) t);
          j_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_40;
      t = foldr_2_0(e_91, f_91, t);
      t_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_40, t_40);
      t = f_91(t);
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
  ATerm m_12 = NULL,n_12 = NULL;
  if(match_cons(t, sym__2))
    {
      m_12 = ATgetArgument(t, 0);
      n_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(m_12, n_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_40 = NULL,g_12 = NULL,j_12 = NULL;
  t = times_0_0(t);
  j_12 = t;
  t = SSL_explode_term(j_12);
  if(match_cons(t, sym__2))
    {
      ATerm t_26 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12;
  t = foldr_2_0(c_5, d_5, t);
  z_40 = t;
  t = SSL_TicksToSeconds(z_40);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
  k_41 = t;
  if(match_cons(t, sym__2))
    {
      l_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_41;
        if((l_41 != t))
          {
            _fail(t);
          }
        t = k_41;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATmakeAppl(sym__2, l_41, m_41);
        {
          ATerm a_27 = t;
          int b_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_41, m_41);
              LocalPopChoice(b_27);
            }
          else
            {
              t = a_27;
              t = SSL_gtr(l_41, m_41);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_41, m_41);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_97 (ATerm), ATerm t)
{
  ATerm v_41 = NULL;
  v_41 = t;
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_42 = NULL,g_42 = NULL,h_42 = NULL;
        t = term_q_8;
        g_42 = t;
        t = term_e_9;
        h_42 = t;
        t = term_h_9;
        t = q_7(g_42, h_42, t);
        b_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_42, term_i_9);
        t = geq_0_0(t);
        t = v_41;
        t = e_97(t);
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        t = v_41;
      }
  }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL,o_42 = NULL,p_42 = NULL;
  t = run_time_0_0(t);
  l_42 = t;
  t = term_u_18;
  t = whoami_0_0(t);
  m_42 = t;
  t = term_y_16;
  o_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_27), l_42), term_u_9), m_42);
  p_42 = t;
  t = SSL_printnl(o_42, p_42);
  t = (ATerm) ATmakeAppl(sym__2, term_y_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_27), l_42), term_u_9), m_42));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_25;
  q_42 = t;
  t = SSL_exit(q_42);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL;
  b_43 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_43;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_43 = ATgetArgument(t, 0);
          {
            ATerm e_13 = NULL,k_4 = NULL;
            t = SSLgetAnnotations(b_43);
            e_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_43);
            k_4 = t;
            t = SSLsetAnnotations(k_4, e_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_43;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_101 (ATerm), ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_42 = NULL,u_42 = NULL;
      t = term_q_8;
      t_42 = t;
      t = term_i_27;
      u_42 = t;
      t = term_m_27;
      t = q_7(t_42, u_42, t);
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      t = fetch_1_0(h_5, t);
    }
  t = j_101(t);
  return(t);
}
static ATerm u_7 (ATerm i_45, ATerm j_45, ATerm k_45, ATerm t)
{
  ATerm d_43 = NULL;
  t = SSL_hashtable_put(k_45, i_45, j_45);
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_43);
  return(t);
}
static ATerm v_7 (ATerm l_45, ATerm m_45, ATerm t)
{
  t = SSL_hashtable_get(m_45, l_45);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_42, ATerm t)
{
  ATerm m_43 = NULL;
  t = table_hashtable_0_0(t);
  m_43 = t;
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_13 = NULL;
        t = m_43;
        if(match_cons(t, sym_Hashtable_1))
          {
            s_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_7(c_42, s_13, t);
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        {
          ATerm e_14 = NULL;
          t = c_42;
          t = table_create_0_0(t);
          t = m_43;
          if(match_cons(t, sym_Hashtable_1))
            {
              e_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_7(c_42, e_14, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_45, ATerm r_45, ATerm t)
{
  ATerm p_43 = NULL;
  t = SSL_hashtable_create(q_45, r_45);
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_43);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,u_43 = NULL,v_43 = NULL;
  q_43 = t;
  t = term_r_27;
  u_43 = t;
  t = term_t_27;
  v_43 = t;
  t = q_43;
  t = new_hashtable_0_2(u_43, v_43, t);
  r_43 = t;
  t = q_43;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(q_43, r_43, s_43, t);
  t = q_43;
  return(t);
}
static ATerm n_7 (ATerm n_45, ATerm o_45, ATerm t)
{
  ATerm w_43 = NULL;
  t = SSL_hashtable_remove(o_45, n_45);
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_43);
  return(t);
}
static ATerm o_7 (ATerm s_45, ATerm t)
{
  ATerm x_43 = NULL;
  t = SSL_hashtable_destroy(s_45);
  x_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_43);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm y_43 = NULL;
  t = SSL_table_hashtable();
  y_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_43);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL;
  z_43 = t;
  t = table_hashtable_0_0(t);
  a_44 = t;
  t = lookup_table_0_1(z_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(c_44, t);
  t = a_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(z_43, b_44, t);
  t = z_43;
  return(t);
}
ATerm map_1_0 (ATerm q_83 (ATerm), ATerm t)
{
  static ATerm r_44 (ATerm t)
  {
    ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
    o_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_44;
      }
    else
      {
        ATerm o_14 = NULL,w_14 = NULL,x_14 = NULL,n_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_44 = ATgetFirst((ATermList) t);
            q_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_44);
        o_14 = t;
        t = p_44;
        t = q_83(t);
        w_14 = t;
        t = q_44;
        t = r_44(t);
        x_14 = t;
        t = (ATerm) ATinsert(CheckATermList(x_14), w_14);
        n_4 = t;
        t = SSLsetAnnotations(n_4, o_14);
      }
    return(t);
  }
  t = r_44(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_44 = ATgetFirst((ATermList) t);
      v_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_44 = NULL,a_45 = NULL;
        static ATerm j_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_44)), not_null(a_45));
          return(t);
        }
        t = v_44;
        t = l_0(t);
        if(((z_44 != NULL) && (z_44 != t)))
          _fail(t);
        else
          z_44 = t;
        t = u_44;
        t = j_0(t);
        if(((a_45 != NULL) && (a_45 != t)))
          _fail(t);
        else
          a_45 = t;
        t = v_44;
        t = reverse_acc_2_0(j_0, j_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_18;
      t = l_0(t);
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,t_45 = NULL,q_4 = NULL;
  t_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_45);
  g_45 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_45);
  q_4 = t;
  t = SSLsetAnnotations(q_4, g_45);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm x_45 = NULL;
  x_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_45), term_u_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL;
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_45 = NULL,f_45 = NULL;
      t = term_q_8;
      e_45 = t;
      t = term_n_26;
      f_45 = t;
      t = term_o_26;
      t = q_7(e_45, f_45, t);
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      t = fetch_1_0(k_5, t);
    }
  t = term_x_27;
  t = echo_0_0(t);
  t = term_c_26;
  c_45 = t;
  t = term_d_26;
  d_45 = t;
  t = term_z_27;
  t = q_7(c_45, d_45, t);
  t = reverse_acc_2_0(_id, q_5, t);
  t = map_1_0(r_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  static ATerm v_46 (ATerm t)
  {
    ATerm r_46 = NULL,s_46 = NULL,u_46 = NULL;
    r_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_46 = ATgetFirst((ATermList) t);
        u_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_28 = t;
      int c_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_15 = NULL,s_15 = NULL,s_4 = NULL;
          t = SSLgetAnnotations(r_46);
          j_15 = t;
          t = s_46;
          t = a_84(t);
          s_15 = t;
          t = (ATerm) ATinsert(CheckATermList(u_46), s_15);
          s_4 = t;
          t = SSLsetAnnotations(s_4, j_15);
          LocalPopChoice(c_28);
        }
      else
        {
          t = a_28;
          {
            ATerm g_16 = NULL,l_16 = NULL,t_4 = NULL;
            t = SSLgetAnnotations(r_46);
            g_16 = t;
            t = u_46;
            t = v_46(t);
            l_16 = t;
            t = (ATerm) ATinsert(CheckATermList(l_16), s_46);
            t_4 = t;
            t = SSLsetAnnotations(t_4, g_16);
          }
        }
    }
    return(t);
  }
  t = v_46(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
  b_47 = t;
  {
    ATerm d_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_47;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_28 = ATgetFirst((ATermList) t);
                ATerm m_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_47;
          }
        LocalPopChoice(f_28);
      }
    else
      {
        t = d_28;
        t = (ATerm) ATinsert(ATempty, b_47);
      }
  }
  c_47 = t;
  t = term_u_8;
  d_47 = t;
  t = SSL_printnl(d_47, c_47);
  t = b_47;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL;
  t = term_q_8;
  l_47 = t;
  t = term_n_26;
  m_47 = t;
  t = term_o_26;
  t = q_7(l_47, m_47, t);
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
  ATerm n_47 = NULL,o_47 = NULL;
  t = term_n_28;
  n_47 = t;
  t = term_u_18;
  o_47 = t;
  t = term_q_28;
  t = t_7(n_47, o_47, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_r_28;
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
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL;
  t = term_n_28;
  r_47 = t;
  t = term_u_18;
  s_47 = t;
  t = term_q_28;
  t = t_7(r_47, s_47, t);
  t = term_s_28;
  p_47 = t;
  t = term_u_18;
  q_47 = t;
  t = term_t_28;
  t = t_7(p_47, q_47, t);
  t = term_u_28;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_w_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, w_5, x_5, t);
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      t = Option_3_0(y_5, z_5, b_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,a_48 = NULL,b_48 = NULL,o_5 = NULL;
  b_48 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_47 = ATgetFirst((ATermList) t);
      v_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_48);
  t_47 = t;
  t = u_47;
  t = j_70(t);
  w_47 = t;
  t = v_47;
  t = k_70(t);
  a_48 = t;
  t = (ATerm) ATinsert(CheckATermList(a_48), w_47);
  o_5 = t;
  t = SSLsetAnnotations(o_5, t_47);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_103 (ATerm), ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,r_48 = NULL,s_48 = NULL,s_5 = NULL;
  m_48 = t;
  {
    ATerm z_28 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_29;
        t = h_103(t);
        LocalPopChoice(d_29);
      }
    else
      {
        t = z_28;
      }
  }
  t = m_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_48 = ATgetFirst((ATermList) t);
      p_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_48);
  n_48 = t;
  t = term_n_26;
  s_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_26, o_48);
  t = t_7(s_48, o_48, t);
  t = p_48;
  {
    static ATerm g_49 (ATerm t)
    {
      ATerm j_29 = t;
      int k_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_29 = t;
          int m_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_48 = NULL;
              y_48 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_48;
              LocalPopChoice(m_29);
            }
          else
            {
              t = l_29;
              t = h_103(t);
              t = Cons_2_0(_id, g_49, t);
            }
          LocalPopChoice(k_29);
        }
      else
        {
          t = j_29;
          {
            ATerm b_49 = NULL,d_49 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_49 = ATgetFirst((ATermList) t);
                d_49 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_49), (ATerm) ATmakeAppl(sym_Undefined_1, b_49));
          }
        }
      return(t);
    }
    t = g_49(t);
  }
  r_48 = t;
  t = (ATerm) ATinsert(CheckATermList(r_48), (ATerm) ATmakeAppl(sym_Program_1, o_48));
  s_5 = t;
  t = SSLsetAnnotations(s_5, n_48);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm y_49 = NULL;
  y_49 = t;
  if(match_string(t, "--help"))
    {
      t = y_49;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_49;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_49;
        }
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm z_49 = NULL,b_50 = NULL;
  t = term_i_27;
  z_49 = t;
  t = term_u_18;
  b_50 = t;
  t = term_s_29;
  t = t_7(z_49, b_50, t);
  t = term_t_29;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_c_30;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL;
  s_49 = t;
  t = term_c_26;
  t_49 = t;
  t = term_d_30;
  t = lookup_table_0_1(t_49, t);
  x_49 = t;
  t = term_d_26;
  u_49 = t;
  t = (ATerm) ATempty;
  v_49 = t;
  t = x_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(u_49, v_49, w_49, t);
  t = s_49;
  {
    static ATerm c_6 (ATerm t)
    {
      ATerm g_30 = t;
      int h_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_103(t);
          LocalPopChoice(h_30);
        }
      else
        {
          t = g_30;
          {
            ATerm i_30 = t;
            int j_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_6, e_6, f_6, t);
                LocalPopChoice(j_30);
              }
            else
              {
                t = i_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_6, t);
  }
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_50 = NULL;
        m_50 = t;
        {
          ATerm n_30 = t;
          int p_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_16 = NULL;
              t = m_50;
              {
                ATerm q_30 = t;
                int s_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_17 = NULL,g_17 = NULL;
                    t = term_q_8;
                    f_17 = t;
                    t = term_i_27;
                    g_17 = t;
                    t = term_m_27;
                    t = q_7(f_17, g_17, t);
                    LocalPopChoice(s_30);
                  }
                else
                  {
                    t = q_30;
                    t = fetch_1_0(g_6, t);
                  }
              }
              t = m_50;
              t = default_system_usage_0_0(t);
              t = term_f_25;
              z_16 = t;
              t = SSL_exit(z_16);
              LocalPopChoice(p_30);
            }
          else
            {
              t = n_30;
              {
                ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
                t = term_q_8;
                q_17 = t;
                t = term_n_28;
                r_17 = t;
                t = term_t_30;
                t = q_7(q_17, r_17, t);
                t = m_50;
                t = default_system_about_0_0(t);
                t = term_f_25;
                p_17 = t;
                t = SSL_exit(p_17);
              }
            }
        }
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        {
          ATerm w_30 = t;
          int x_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
              static ATerm h_6 (ATerm t)
              {
                ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,v_5 = NULL;
                s_50 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_50 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_50);
                q_50 = t;
                t = r_50;
                if(((q_49 != NULL) && (q_49 != t)))
                  _fail(t);
                else
                  q_49 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_50);
                v_5 = t;
                t = SSLsetAnnotations(v_5, q_50);
                return(t);
              }
              t = fetch_1_0(h_6, t);
              t = term_y_16;
              o_50 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_49)), term_b_31);
              p_50 = t;
              t = SSL_printnl(o_50, p_50);
              t = (ATerm) ATmakeAppl(sym__2, term_y_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_49)), term_b_31));
              t = default_system_usage_0_0(t);
              t = term_i_9;
              n_50 = t;
              t = SSL_exit(n_50);
              LocalPopChoice(x_30);
            }
          else
            {
              t = w_30;
            }
        }
      }
  }
  r_49 = t;
  t = term_c_26;
  t = table_destroy_0_0(t);
  t = r_49;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL;
  t = parse_options_1_0(l_101, t);
  x_50 = t;
  t = term_e_31;
  t = table_create_0_0(t);
  t = term_e_31;
  y_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_31, term_f_31, x_50);
  t = lookup_table_0_1(y_50, t);
  b_51 = t;
  t = term_f_31;
  z_50 = t;
  t = b_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(z_50, x_50, a_51, t);
  t = x_50;
  t = n_101(t);
  {
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_101, t);
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
        {
          ATerm o_31 = t;
          int p_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_101(t);
              t = report_success_0_0(t);
              LocalPopChoice(p_31);
            }
          else
            {
              t = o_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
            LocalPopChoice(t_31);
          }
        else
          {
            t = s_31;
            {
              ATerm u_31 = t;
              int v_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(l_6, m_6, n_6, t);
                  LocalPopChoice(v_31);
                }
              else
                {
                  t = u_31;
                  {
                    ATerm w_31 = t;
                    int x_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(x_31);
                      }
                    else
                      {
                        t = w_31;
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
  t = xtc_temp_files_1_0(o_6, t);
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
  ATerm j_51 = NULL,k_51 = NULL;
  t = term_y_31;
  j_51 = t;
  t = term_u_18;
  k_51 = t;
  t = term_z_31;
  t = t_7(j_51, k_51, t);
  t = term_a_32;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_e_32;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
      t = term_q_8;
      n_51 = t;
      t = term_w_18;
      o_51 = t;
      t = term_h_32;
      t = q_7(n_51, o_51, t);
      m_51 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_51);
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      t = term_a_9;
    }
  {
    ATerm m_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_51 = NULL,v_51 = NULL;
        v_51 = t;
        if(match_cons(t, sym_FILE_1))
          {
            u_51 = ATgetArgument(t, 0);
            {
              ATerm a_18 = NULL,x_8 = NULL;
              t = SSLgetAnnotations(v_51);
              a_18 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_51);
              x_8 = t;
              t = SSLsetAnnotations(x_8, a_18);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_51;
          }
        LocalPopChoice(t_32);
        t = xtc_transform_file_2_0(r_6, g_7, t);
      }
    else
      {
        t = m_32;
        t = xtc_transform_term_2_0(m_7, s_7, t);
      }
  }
  {
    ATerm u_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_52 = NULL,e_52 = NULL;
        e_52 = t;
        if(match_cons(t, sym_FILE_1))
          {
            d_52 = ATgetArgument(t, 0);
            {
              ATerm l_18 = NULL,y_8 = NULL;
              t = SSLgetAnnotations(e_52);
              l_18 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_52);
              y_8 = t;
              t = SSLsetAnnotations(y_8, l_18);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_52;
          }
        LocalPopChoice(v_32);
        t = xtc_transform_file_2_0(x_7, pass_verbose_0_0, t);
      }
    else
      {
        t = u_32;
        t = xtc_transform_term_2_0(b_8, pass_verbose_0_0, t);
      }
  }
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_52 = NULL,l_52 = NULL;
        l_52 = t;
        if(match_cons(t, sym_FILE_1))
          {
            k_52 = ATgetArgument(t, 0);
            {
              ATerm z_18 = NULL,z_8 = NULL;
              t = SSLgetAnnotations(l_52);
              z_18 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_52);
              z_8 = t;
              t = SSLsetAnnotations(z_8, z_18);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_52;
          }
        LocalPopChoice(x_32);
        t = xtc_transform_file_2_0(c_8, pass_verbose_0_0, t);
      }
    else
      {
        t = w_32;
        t = xtc_transform_term_2_0(e_8, pass_verbose_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_z_32;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm w_51 = NULL;
  t = term_d_33;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  w_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_51), term_e_33);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_z_32;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm x_51 = NULL;
  t = term_d_33;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  x_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_51), term_e_33);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_h_33;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_h_33;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_i_33;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_i_33;
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
