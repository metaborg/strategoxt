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
ATerm term_p_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_w_30;
ATerm term_t_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_r_29;
ATerm term_h_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_u_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_n_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_s_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_m_27;
ATerm term_k_27;
ATerm term_e_27;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_e_26;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_p_23;
ATerm term_n_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_g_23;
ATerm term_y_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_o_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_f_22;
ATerm term_v_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_s_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_e_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_v_17;
ATerm term_k_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_s_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_v_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_z_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_f_8;
ATerm term_d_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_w_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_y_7);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_8, term_v_8, term_w_8);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_9, term_f_9, term_g_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_9, term_j_9, term_m_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_p_9, term_q_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_x_9, term_y_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_f_10, term_g_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_n_10, term_p_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_b_11, term_c_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_i_11, term_j_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_t_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_b_12, term_d_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_l_12, term_m_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_s_12, term_v_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_c_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_i_13, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_n_13, term_r_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_c_14, term_d_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_i_14, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_n_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_a_15);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_g_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_r_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_i_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_l_16, term_m_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_r_18);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_v_21);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_l_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_f_21);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("visamb.pp.af", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.pp.af", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym__2, term_h_18, term_v_17);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym__2, term_r_18, term_w_24);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_24);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_h_25, term_j_18);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_h_26);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_k_27);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym__2, term_t_25, term_u_25);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_j_18);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_j_18);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__2, term_k_27, term_j_18);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__3, term_t_25, term_u_25, (ATerm) ATempty);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_n_28);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_f_32, term_j_18);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_k_18);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Vis-amb", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm s_6 (ATerm o_14, ATerm p_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm c_6 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm d_6 (ATerm y_68 (ATerm), ATerm e_171, ATerm y_17, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm t);
static ATerm e_6 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm a_74 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm n_67 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm w_88 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm f_74 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_9 (ATerm k_9, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm q_6 (ATerm k_84 (ATerm), ATerm e_35, ATerm c_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm w_68 (ATerm), ATerm t);
static ATerm g_6 (ATerm q_40, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm x_85 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm w_85 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm y_85 (ATerm), ATerm t);
static ATerm i_6 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm j_6 (ATerm z_77 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm k_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm l_6 (ATerm a_86 (ATerm), ATerm y_37, ATerm x_37, ATerm t);
static ATerm p_6 (ATerm z_41, ATerm a_42, ATerm t);
static ATerm a_17 (ATerm p_16, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_6 (ATerm u_17, ATerm t);
static ATerm r_6 (ATerm l_32, ATerm m_32, ATerm t);
static ATerm n_6 (ATerm i_42, ATerm j_42, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm x_19 (ATerm n_17, ATerm t);
static ATerm y_19 (ATerm b_18, ATerm c_18, ATerm d_18, ATerm t);
static ATerm z_19 (ATerm n_18, ATerm o_18, ATerm p_18, ATerm t);
static ATerm o_6 (ATerm t);
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
ATerm filter_1_0 (ATerm g_82 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm p_25 (ATerm z_23, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm build_pp_tables_0_0 (ATerm t);
static ATerm z_6 (ATerm k_38, ATerm l_38, ATerm t);
static ATerm t_6 (ATerm w_36, ATerm x_36, ATerm t);
ATerm end_scope_1_0 (ATerm h_84 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm g_84 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm i_88 (ATerm), ATerm t);
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
static ATerm c_7 (ATerm w_40, ATerm x_40, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_6 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_85 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm need_help_1_0 (ATerm y_89 (ATerm), ATerm t);
static ATerm d_7 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t);
static ATerm e_7 (ATerm m_40, ATerm n_40, ATerm t);
ATerm lookup_table_0_1 (ATerm d_38, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_40, ATerm s_40, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm w_6 (ATerm o_40, ATerm p_40, ATerm t);
static ATerm x_6 (ATerm t_40, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_73 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_73 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_60 (ATerm), ATerm o_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm w_91 (ATerm), ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm parse_options_1_0 (ATerm v_91 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm b_7 (ATerm t);
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
    ATerm f_7 = t;
    int g_7 = stack_ptr;
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
        t = s_6(r_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_1);
        LocalPopChoice(g_7);
      }
    else
      {
        t = f_7;
        {
          ATerm j_7 = t;
          int l_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_0 = NULL;
              t = q_1;
              t = o_0(t);
              x_0 = t;
              {
                ATerm n_7 = t;
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
                    t = n_7;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, r_1, x_0);
              t = s_6(r_1, x_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_1);
              LocalPopChoice(l_7);
            }
          else
            {
              t = j_7;
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
static ATerm s_6 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_copy(o_14, p_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 = NULL,w_2 = NULL;
      t = term_w_7;
      v_2 = t;
      t = term_y_7;
      w_2 = t;
      t = term_z_7;
      t = z_6(v_2, w_2, t);
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      t = term_a_8;
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
      t = term_y_7;
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 = NULL,m_1 = NULL;
            t = term_w_7;
            l_1 = t;
            t = term_y_7;
            m_1 = t;
            t = term_z_7;
            t = z_6(l_1, m_1, t);
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            t = term_a_8;
          }
      }
      g_1 = t;
      t = term_d_8;
      k_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_d_8, g_1);
      t = s_6(k_1, g_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm e_8 = ATgetArgument(t, 0);
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
      t = term_d_8;
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
      t = (ATerm) ATinsert(ATempty, term_f_8);
      c_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_3, (ATerm) ATinsert(ATempty, term_f_8));
      t = p_6(a_3, c_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm c_6 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm d_3 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_3);
  return(t);
}
static ATerm d_6 (ATerm y_68 (ATerm), ATerm e_171, ATerm y_17, ATerm t)
{
  ATerm g_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_171, term_i_8);
  t = o_6(t);
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_3, y_17);
  t = y_68(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm m_3 = NULL,o_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_8 = ATgetArgument(t, 0);
      if(match_cons(j_8, sym_Stream_1))
        {
          m_3 = ATgetArgument(j_8, 0);
        }
      else
        _fail(t);
      o_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(m_3, o_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm t)
{
  ATerm i_3 = NULL,l_3 = NULL;
  l_3 = t;
  t = xtc_new_file_0_0(t);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_3, l_3);
  t = d_6(b_0, i_3, l_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_3);
  t = xtc_transform_file_2_0(v_87, w_87, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm e_6 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm n_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
  n_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      s_4 = ATgetArgument(t, 0);
      {
        ATerm x_1 = NULL,y_1 = NULL;
        t = SSL_int_to_string(s_4);
        x_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_8), x_1), term_k_8);
        y_1 = t;
        t = SSL_concat_strings(y_1);
      }
    }
  else
    {
      ATerm j_2 = NULL,k_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          s_4 = ATgetArgument(t, 0);
          t_4 = ATgetArgument(t, 1);
          u_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(t_4);
      j_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_4), term_n_8), j_2), term_m_8), s_4);
      k_2 = t;
      t = SSL_concat_strings(k_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm a_74 (ATerm), ATerm t)
{
  ATerm x_4 = NULL;
  static ATerm f_0 (ATerm t)
  {
    t = a_74(t);
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
  ATerm b_5 = NULL;
  b_5 = t;
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm q_8 = ATgetArgument(t, 0);
              if((b_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm t_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_16), term_j_16), term_f_16), term_x_15), term_t_15), term_o_15), term_h_15), term_b_15), term_s_14), term_k_14), term_e_14), term_v_13), term_k_13), term_d_13), term_y_12), term_q_12), term_e_12), term_u_11), term_l_11), term_d_11), term_y_10), term_q_10), term_h_10), term_a_10), term_r_9), term_n_9), term_h_9), term_z_8);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm g_5 = NULL,s_5 = NULL;
  g_5 = t;
  {
    ATerm o_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_16 = ATgetArgument(t, 0);
            s_5 = ATgetArgument(t, 1);
            {
              ATerm s_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_16);
        {
          ATerm v_16 = t;
          int w_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_3 = NULL,h_3 = NULL,j_3 = NULL;
              t = s_5;
              {
                ATerm x_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_16;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              e_3 = t;
              t = term_y_16;
              h_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_3), term_z_16);
              j_3 = t;
              t = SSL_printnl(h_3, j_3);
              t = (ATerm) ATmakeAppl(sym__2, term_y_16, (ATerm) ATinsert(ATinsert(ATempty, e_3), term_z_16));
              LocalPopChoice(w_16);
            }
          else
            {
              t = v_16;
              t = g_5;
            }
        }
      }
    else
      {
        t = o_16;
        t = g_5;
      }
  }
  t = g_5;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm n_67 (ATerm), ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL;
  i_7 = t;
  t = fork_0_0(t);
  h_7 = t;
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_7;
        t = n_67(t);
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        t = SSL_waitpid(h_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_17 = ATgetArgument(t, 0);
            if(((ATgetType(h_17) != AT_INT) || (ATgetInt((ATermInt) h_17) != 0)))
              _fail(t);
            {
              ATerm i_17 = ATgetArgument(t, 1);
            }
            {
              ATerm j_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_7;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm w_88 (ATerm), ATerm t)
{
  ATerm k_7 = NULL,m_7 = NULL;
  m_7 = t;
  t = w_88(t);
  t = xtc_find_0_0(t);
  k_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_7, m_7);
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm p_7 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, k_7, m_7);
      t = e_6(k_7, m_7, t);
      t = term_k_17;
      p_7 = t;
      t = SSL_exit(p_7);
      return(t);
    }
    t = fork_and_wait_1_0(m_0, t);
  }
  t = m_7;
  return(t);
}
ATerm at_end_1_0 (ATerm f_74 (ATerm), ATerm t)
{
  static ATerm d_9 (ATerm t)
  {
    ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
    c_9 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_9 = ATgetFirst((ATermList) t);
        b_9 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_3 = NULL,a_4 = NULL,v_0 = NULL;
          t = SSLgetAnnotations(c_9);
          r_3 = t;
          t = b_9;
          t = d_9(t);
          a_4 = t;
          t = (ATerm) ATinsert(CheckATermList(a_4), a_9);
          v_0 = t;
          t = SSLsetAnnotations(v_0, r_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_9;
        t = f_74(t);
      }
    return(t);
  }
  t = d_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL,x_7 = NULL;
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
          t_7 = ATgetFirst((ATermList) t);
          if(((x_7 != NULL) && (x_7 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_7;
      t = at_end_1_0(q_0, t);
    }
  return(t);
}
static ATerm z_9 (ATerm k_9, ATerm t)
{
  ATerm l_9 = NULL;
  t = SSL_explode_term(k_9);
  if(match_cons(t, sym__2))
    {
      ATerm l_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
  u_9 = t;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
      {
        ATerm m_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_0 (ATerm t)
            {
              t = t_9;
              return(t);
            }
            t = s_9;
            t = at_end_1_0(s_0, t);
            LocalPopChoice(r_17);
          }
        else
          {
            t = m_17;
            t = z_9(u_9, t);
          }
      }
    }
  else
    {
      t = z_9(u_9, t);
    }
  return(t);
}
static ATerm q_6 (ATerm k_84 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm b_10 = NULL,d_10 = NULL,e_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,o_10 = NULL,r_10 = NULL;
  i_10 = t;
  t = k_84(t);
  b_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_10, e_35, c_35);
  t = a_7(b_10, e_35, c_35, t);
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_10 = NULL;
        t = term_v_17;
        s_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_10, term_v_17);
        t = z_6(b_10, s_10, t);
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
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
  t = (ATerm) ATmakeAppl(sym__3, b_10, term_v_17, (ATerm) ATinsert(CheckATermList(e_10), (ATerm) ATinsert(CheckATermList(d_10), e_35)));
  t = lookup_table_0_1(b_10, t);
  r_10 = t;
  t = term_v_17;
  j_10 = t;
  t = (ATerm) ATinsert(CheckATermList(e_10), (ATerm) ATinsert(CheckATermList(d_10), e_35));
  k_10 = t;
  t = r_10;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(j_10, k_10, o_10, t);
  t = i_10;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm u_10 = NULL;
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_11 = NULL,q_4 = NULL;
      e_11 = t;
      t = term_z_17;
      q_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_11, term_z_17);
      t = r_6(e_11, q_4, t);
      u_10 = t;
      t = SSL_mkstemp(u_10);
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      {
        ATerm k_11 = NULL;
        t = term_a_18;
        k_11 = t;
        t = SSL_perror(k_11);
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
  t = term_h_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  t = P__tmpdir_0_0(t);
  p_11 = t;
  t = term_i_18;
  q_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_11, term_i_18);
  t = r_6(p_11, q_11, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      n_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_j_18;
  o_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_11, term_j_18);
  t = q_6(t_0, n_11, o_11, t);
  t = SSL_close(m_11);
  t = n_11;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL;
  v_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_11 = NULL,y_11 = NULL;
      t = v_11;
      t = xtc_new_file_0_0(t);
      x_11 = t;
      t = r_0(t);
      y_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_11, (ATerm) ATinsert(ATinsert(ATempty, x_11), term_y_7));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_11);
    }
  else
    {
      ATerm a_12 = NULL,f_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_11;
      t = xtc_new_file_0_0(t);
      a_12 = t;
      t = r_0(t);
      f_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_12), term_y_7), w_11), term_k_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_12);
    }
  return(t);
}
ATerm debug_1_0 (ATerm w_68 (ATerm), ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,k_12 = NULL,n_12 = NULL;
  g_12 = t;
  t = w_68(t);
  h_12 = t;
  t = term_y_16;
  k_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_12), h_12);
  n_12 = t;
  t = SSL_printnl(k_12, n_12);
  t = g_12;
  return(t);
}
static ATerm g_6 (ATerm q_40, ATerm t)
{
  t = SSL_hashtable_keys(q_40);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL;
  static ATerm u_0 (ATerm t)
  {
    ATerm t_12 = NULL,u_12 = NULL;
    t_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_12), t_12);
    t = z_6(not_null(o_12), t_12, t);
    u_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_12, u_12);
    return(t);
  }
  if(((o_12 != NULL) && (o_12 != t)))
    _fail(t);
  else
    o_12 = t;
  t = lookup_table_0_1(o_12, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_6(p_12, t);
  t = map_1_0(u_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm x_12 = NULL;
  x_12 = t;
  {
    ATerm m_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
        t = term_w_7;
        f_13 = t;
        t = term_r_18;
        g_13 = t;
        t = term_s_18;
        t = z_6(f_13, g_13, t);
        e_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_13, term_v_15);
        t = geq_0_0(t);
        t = x_12;
        t = x_85(t);
        LocalPopChoice(q_18);
      }
    else
      {
        t = m_18;
        t = x_12;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  ATerm m_13 = NULL;
  m_13 = t;
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
        t = term_w_7;
        p_13 = t;
        t = term_r_18;
        q_13 = t;
        t = term_s_18;
        t = z_6(p_13, q_13, t);
        o_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_13, term_b_12);
        t = geq_0_0(t);
        t = m_13;
        t = w_85(t);
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        t = m_13;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm u_13 = NULL;
  u_13 = t;
  {
    ATerm v_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
        t = term_w_7;
        x_13 = t;
        t = term_r_18;
        y_13 = t;
        t = term_s_18;
        t = z_6(x_13, y_13, t);
        w_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_13, term_p_9);
        t = geq_0_0(t);
        t = u_13;
        t = y_85(t);
        LocalPopChoice(x_18);
      }
    else
      {
        t = v_18;
        t = u_13;
      }
  }
  return(t);
}
static ATerm i_6 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = d_78(t);
  {
    static ATerm w_0 (ATerm t)
    {
      ATerm a_14 = NULL;
      a_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, a_14);
      t = c_78(t);
      return(t);
    }
    t = fetch_1_0(w_0, t);
  }
  t = b_25;
  return(t);
}
static ATerm j_6 (ATerm z_77 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm z_14 (ATerm t)
  {
    ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL;
    t_14 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_14 = ATgetFirst((ATermList) t);
            v_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_18 = t;
          int z_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_14;
              {
                static ATerm a_1 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = i_6(z_77, a_1, u_14, v_14, t);
              }
              t = z_14(t);
              LocalPopChoice(z_18);
            }
          else
            {
              t = y_18;
              {
                ATerm c_5 = NULL,f_5 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(t_14);
                c_5 = t;
                t = v_14;
                t = z_14(t);
                f_5 = t;
                t = (ATerm) ATinsert(CheckATermList(f_5), u_14);
                z_0 = t;
                t = SSLsetAnnotations(z_0, c_5);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = z_14(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm y_15 = NULL;
  if(match_cons(t, sym__2))
    {
      y_15 = ATgetArgument(t, 0);
      if((y_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm e_15 = NULL,i_15 = NULL,l_15 = NULL,m_15 = NULL;
  e_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  {
    ATerm a_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_19 = ATgetArgument(t, 0);
            ATerm f_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = z_6(o_37, p_37, t);
        LocalPopChoice(d_19);
      }
    else
      {
        t = a_19;
        t = (ATerm) ATempty;
      }
  }
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_15, q_37);
  t = j_6(b_1, l_15, q_37, t);
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_37, p_37, i_15);
  t = lookup_table_0_1(o_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(p_37, i_15, m_15, t);
  t = e_15;
  return(t);
}
static ATerm l_6 (ATerm a_86 (ATerm), ATerm y_37, ATerm x_37, ATerm t)
{
  static ATerm d_1 (ATerm t)
  {
    ATerm z_15 = NULL,a_16 = NULL;
    if(match_cons(t, sym__2))
      {
        z_15 = ATgetArgument(t, 0);
        a_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_37, z_15, a_16);
    t = a_86(t);
    return(t);
  }
  t = x_37;
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm p_6 (ATerm z_41, ATerm a_42, ATerm t)
{
  t = SSL_access(z_41, a_42);
  return(t);
}
static ATerm a_17 (ATerm p_16, ATerm t)
{
  t = SSL_fclose(p_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL;
  u_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_16 = ATgetArgument(t, 0);
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_16);
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            t = a_17(u_16, t);
          }
      }
    }
  else
    {
      t = a_17(u_16, t);
    }
  return(t);
}
static ATerm m_6 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm r_6 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = SSL_strcat(l_32, m_32);
  return(t);
}
static ATerm n_6 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm b_17 = NULL;
  t = SSL_fopen(i_42, j_42);
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_17 = NULL;
  t = SSL_stdin_stream();
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_17 = NULL;
  t = SSL_stdout_stream();
  d_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_17 = NULL;
  t = SSL_stderr_stream();
  e_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_17);
  return(t);
}
static ATerm x_19 (ATerm n_17, ATerm t)
{
  ATerm q_17 = NULL;
  t = SSL_explode_term(n_17);
  if(match_cons(t, sym__2))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_19 = ATgetArgument(t, 1);
        if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
          {
            q_17 = ATgetFirst((ATermList) k_19);
            {
              ATerm l_19 = (ATerm) ATgetNext((ATermList) k_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_17;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_17;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_17;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_17;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm y_19 (ATerm b_18, ATerm c_18, ATerm d_18, ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,l_18 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(d_18);
  g_18 = t;
  t = b_18;
  if(match_cons(t, sym_Path_1))
    {
      l_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_18, c_18);
  c_1 = t;
  t = SSLsetAnnotations(c_1, g_18);
  if(match_cons(t, sym__2))
    {
      e_18 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(e_18, f_18, t);
  return(t);
}
static ATerm z_19 (ATerm n_18, ATerm o_18, ATerm p_18, ATerm t)
{
  ATerm w_18 = NULL,b_19 = NULL,c_19 = NULL,g_19 = NULL,e_1 = NULL;
  t = SSLgetAnnotations(p_18);
  c_19 = t;
  t = SSL_is_string(n_18);
  g_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_19, o_18);
  e_1 = t;
  t = SSLsetAnnotations(e_1, c_19);
  if(match_cons(t, sym__2))
    {
      w_18 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(w_18, b_19, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm r_19 = NULL,v_19 = NULL,w_19 = NULL;
  r_19 = t;
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      w_19 = ATgetArgument(t, 1);
      {
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_19(r_19, t);
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
            {
              ATerm o_19 = t;
              int p_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_19(v_19, w_19, r_19, t);
                  LocalPopChoice(p_19);
                }
              else
                {
                  t = o_19;
                  t = z_19(v_19, w_19, r_19, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_19(r_19, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,m_20 = NULL;
  m_20 = t;
  {
    ATerm q_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_20, term_t_19);
        t = o_6(t);
        LocalPopChoice(s_19);
      }
    else
      {
        t = q_19;
        {
          ATerm f_6 = NULL,h_6 = NULL;
          t = term_u_19;
          h_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_19, m_20);
          t = r_6(h_6, m_20, t);
          f_6 = t;
          t = SSL_perror(f_6);
          _fail(t);
        }
      }
  }
  g_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(h_20, t);
  f_20 = t;
  t = g_20;
  t = fclose_0_0(t);
  t = f_20;
  return(t);
}
static ATerm f_1 (ATerm t)
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
      ATerm p_20 = NULL,q_20 = NULL;
      p_20 = t;
      t = (ATerm) ATinsert(ATempty, term_e_20);
      q_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_20, (ATerm) ATinsert(ATempty, term_e_20));
      t = p_6(p_20, q_20, t);
      LocalPopChoice(d_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = c_20;
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_20 = t;
            if((PushChoice() == 0))
              {
                ATerm r_20 = NULL,t_20 = NULL;
                r_20 = t;
                t = (ATerm) ATinsert(ATempty, term_f_8);
                t_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_20, (ATerm) ATinsert(ATempty, term_f_8));
                t = p_6(r_20, t_20, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_20;
              }
            t = debug_1_0(f_1, t);
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
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
  t = term_l_20;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm s_21 = NULL,u_21 = NULL,w_21 = NULL;
  s_21 = t;
  t = term_y_16;
  u_21 = t;
  t = (ATerm) ATinsert(ATempty, term_o_20);
  w_21 = t;
  t = SSL_printnl(u_21, w_21);
  t = s_21;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym__3))
    {
      x_21 = ATgetArgument(t, 0);
      y_21 = ATgetArgument(t, 1);
      z_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_6(x_21, y_21, z_21, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
  a_22 = t;
  t = term_y_16;
  b_22 = t;
  t = (ATerm) ATinsert(ATempty, term_s_20);
  c_22 = t;
  t = SSL_printnl(b_22, c_22);
  t = a_22;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,i_22 = NULL;
  d_22 = t;
  t = term_y_16;
  e_22 = t;
  t = (ATerm) ATinsert(ATempty, term_o_20);
  i_22 = t;
  t = SSL_printnl(e_22, i_22);
  t = d_22;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,i_21 = NULL,j_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL;
  u_20 = t;
  t = if_verbose5_1_0(i_1, t);
  {
    ATerm z_20 = t;
    if((PushChoice() == 0))
      {
        ATerm p_21 = NULL,r_21 = NULL;
        t = term_e_21;
        p_21 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, u_20);
        r_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Imported_1, u_20));
        t = z_6(p_21, r_21, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_20;
      }
  }
  w_20 = t;
  t = term_e_21;
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_21, term_f_21, (ATerm) ATinsert(ATempty, u_20));
  t = lookup_table_0_1(i_21, t);
  o_21 = t;
  t = term_f_21;
  j_21 = t;
  t = (ATerm) ATinsert(ATempty, u_20);
  m_21 = t;
  t = o_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(j_21, m_21, n_21, t);
  t = w_20;
  t = if_verbose4_1_0(o_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(s_1, t);
  v_20 = t;
  t = term_e_21;
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_21, v_20);
  t = l_6(u_1, d_21, v_20, t);
  t = if_verbose6_1_0(v_1, t);
  t = term_e_21;
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_21, (ATerm)ATmakeAppl(sym_Imported_1, u_20), (ATerm) ATempty);
  t = lookup_table_0_1(x_20, t);
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, u_20);
  y_20 = t;
  t = (ATerm) ATempty;
  a_21 = t;
  t = c_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(y_20, a_21, b_21, t);
  t = (ATerm) ATmakeAppl(sym__3, term_e_21, (ATerm)ATmakeAppl(sym_Imported_1, u_20), (ATerm) ATempty);
  t = if_verbose4_1_0(w_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,a_23 = NULL;
  w_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_22;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_22 = ATgetFirst((ATermList) t);
          a_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_7 = NULL,u_7 = NULL,v_7 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(w_22);
            o_7 = t;
            t = x_22;
            t = g_82(t);
            u_7 = t;
            t = a_23;
            t = filter_1_0(g_82, t);
            v_7 = t;
            t = (ATerm) ATinsert(CheckATermList(v_7), u_7);
            j_1 = t;
            t = SSLsetAnnotations(j_1, o_7);
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            t = a_23;
            t = filter_1_0(g_82, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm t)
{
  static ATerm d_23 (ATerm t)
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_71(t);
        t = d_23(t);
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        t = u_71(t);
      }
    return(t);
  }
  t = d_23(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm q_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_23 = NULL,h_23 = NULL;
      t = term_w_7;
      e_23 = t;
      t = term_v_21;
      h_23 = t;
      t = term_f_22;
      t = z_6(e_23, h_23, t);
      LocalPopChoice(t_21);
    }
  else
    {
      t = q_21;
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_23 = NULL;
            t = term_j_22;
            j_23 = t;
            t = SSL_getenv(j_23);
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
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
  t = term_k_22;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  t = term_e_21;
  s_23 = t;
  t = term_l_22;
  t_23 = t;
  t = term_m_22;
  t = z_6(s_23, t_23, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm n_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_22;
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
  t = term_o_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm l_23 = NULL;
  t = if_verbose5_1_0(z_1, t);
  l_23 = t;
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_23 = NULL,o_23 = NULL;
        t = term_e_21;
        m_23 = t;
        t = term_f_21;
        o_23 = t;
        t = term_r_22;
        t = z_6(m_23, o_23, t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        {
          ATerm r_23 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          r_23 = t;
          t = repeat_2_0(b_2, _id, t);
          t = r_23;
        }
      }
  }
  t = l_23;
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
  t = term_s_22;
  return(t);
}
static ATerm p_25 (ATerm z_23, ATerm t)
{
  ATerm h_24 = NULL,j_24 = NULL,k_24 = NULL;
  t = term_e_21;
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, z_23);
  k_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Tool_1, z_23));
  t = z_6(j_24, k_24, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_22 = ATgetFirst((ATermList) t);
      if(match_cons(t_22, sym__2))
        {
          ATerm v_22 = ATgetArgument(t_22, 0);
          h_24 = ATgetArgument(t_22, 1);
        }
      else
        _fail(t);
      {
        ATerm u_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_24;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_s_22;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_e_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_y_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm z_22 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
      t = if_verbose5_1_0(f_2, t);
      t = xtc_load_0_0(t);
      n_24 = t;
      if(match_cons(t, sym__2))
        {
          l_24 = ATgetArgument(t, 0);
          m_24 = ATgetArgument(t, 1);
          {
            ATerm c_23 = t;
            int f_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_24 = NULL,a_25 = NULL,e_25 = NULL;
                t = term_e_21;
                a_25 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, l_24);
                e_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Tool_1, l_24));
                t = z_6(a_25, e_25, t);
                {
                  static ATerm h_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((m_24 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((u_24 != NULL) && (u_24 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(h_2, t);
                }
                t = not_null(u_24);
                LocalPopChoice(f_23);
              }
            else
              {
                t = c_23;
                t = p_25(n_24, t);
              }
          }
        }
      else
        {
          t = p_25(n_24, t);
        }
      t = if_verbose5_1_0(i_2, t);
      LocalPopChoice(b_23);
    }
  else
    {
      t = z_22;
      {
        ATerm o_25 = NULL,g_8 = NULL,h_8 = NULL;
        o_25 = t;
        t = term_y_16;
        g_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_23), o_25), term_g_23);
        h_8 = t;
        t = SSL_printnl(g_8, h_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_23), o_25), term_g_23);
        t = if_verbose5_1_0(m_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm build_pp_tables_0_0 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL;
  t = term_k_23;
  t = xtc_find_0_0(t);
  r_25 = t;
  t = term_n_23;
  t = xtc_find_0_0(t);
  s_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_25), term_p_23), r_25), term_p_23);
  return(t);
}
static ATerm z_6 (ATerm k_38, ATerm l_38, ATerm t)
{
  ATerm w_25 = NULL;
  t = lookup_table_0_1(k_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_7(l_38, w_25, t);
  return(t);
}
static ATerm t_6 (ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm y_25 = NULL,a_26 = NULL;
  a_26 = t;
  {
    ATerm q_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = z_6(w_36, x_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_23 = ATgetFirst((ATermList) t);
            y_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_23);
        {
          ATerm b_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, y_25);
          t = lookup_table_0_1(w_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              b_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_7(x_36, y_25, b_26, t);
          t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, y_25);
        }
      }
    else
      {
        t = q_23;
        {
          ATerm f_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
          t = lookup_table_0_1(w_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_6(x_36, f_26, t);
          t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        }
      }
  }
  t = a_26;
  return(t);
}
ATerm end_scope_1_0 (ATerm h_84 (ATerm), ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
  s_26 = t;
  t = h_84(t);
  r_26 = t;
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_26 = NULL;
        t = term_v_17;
        y_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_26, term_v_17);
        t = z_6(r_26, y_26, t);
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_26 = ATgetFirst((ATermList) t);
      k_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_26, term_v_17, k_26);
  t = lookup_table_0_1(r_26, t);
  v_26 = t;
  t = term_v_17;
  t_26 = t;
  t = v_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(t_26, k_26, u_26, t);
  t = l_26;
  {
    static ATerm r_2 (ATerm t)
    {
      ATerm z_26 = NULL;
      z_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_26, z_26);
      t = t_6(r_26, z_26, t);
      return(t);
    }
    t = map_1_0(r_2, t);
  }
  t = s_26;
  return(t);
}
ATerm restore_always_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t)
{
  ATerm y_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_85(t);
      t = i_85(t);
      LocalPopChoice(a_24);
    }
  else
    {
      t = y_23;
      t = i_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,l_27 = NULL;
  c_27 = t;
  t = g_84(t);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_27, term_v_17);
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_24 = ATgetArgument(t, 0);
            ATerm e_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_17;
        r_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_27, term_v_17);
        t = z_6(b_27, r_27, t);
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        t = (ATerm) ATempty;
      }
  }
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_27, term_v_17, (ATerm) ATinsert(CheckATermList(d_27), (ATerm) ATempty));
  t = lookup_table_0_1(b_27, t);
  l_27 = t;
  t = term_v_17;
  g_27 = t;
  t = (ATerm) ATinsert(CheckATermList(d_27), (ATerm) ATempty);
  h_27 = t;
  t = l_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(g_27, h_27, i_27, t);
  t = c_27;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_h_18;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm d_28 = NULL;
  d_28 = t;
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(d_28);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = d_28;
      }
  }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_h_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm x_27 = NULL;
  static ATerm t_2 (ATerm t)
  {
    ATerm y_27 = NULL;
    y_27 = t;
    {
      ATerm i_24 = t;
      int o_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_27 = NULL,a_28 = NULL;
          t = term_h_18;
          z_27 = t;
          t = term_v_17;
          a_28 = t;
          t = term_p_24;
          t = z_6(z_27, a_28, t);
          LocalPopChoice(o_24);
        }
      else
        {
          t = i_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((x_27 != NULL) && (x_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          x_27 = ATgetFirst((ATermList) t);
        {
          ATerm q_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = x_27;
    t = map_1_0(u_2, t);
    t = y_27;
    t = end_scope_1_0(y_2, t);
    return(t);
  }
  t = begin_scope_1_0(s_2, t);
  t = restore_always_2_0(i_88, t_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,j_28 = NULL,l_28 = NULL,m_28 = NULL;
  g_28 = t;
  t = term_j_18;
  t = whoami_0_0(t);
  h_28 = t;
  t = term_y_16;
  l_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_24), h_28), term_r_24);
  m_28 = t;
  t = SSL_printnl(l_28, m_28);
  t = term_v_8;
  j_28 = t;
  t = SSL_exit(j_28);
  t = g_28;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  if(match_string(t, "-k"))
    {
      t = o_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_28;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm p_28 = NULL,s_28 = NULL,t_28 = NULL;
  p_28 = t;
  t = SSL_string_to_int(p_28);
  s_28 = t;
  t = term_t_24;
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_24, s_28);
  t = c_7(t_28, s_28, t);
  t = p_28;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, b_3, f_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm v_28 = NULL;
  v_28 = t;
  if(match_string(t, "-S"))
    {
      t = v_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_28;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  t = term_r_18;
  y_28 = t;
  t = term_w_24;
  z_28 = t;
  t = term_z_24;
  t = c_7(y_28, z_28, t);
  t = term_d_25;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_f_25;
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
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  a_29 = t;
  t = SSL_string_to_int(a_29);
  b_29 = t;
  t = term_r_18;
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_18, b_29);
  t = c_7(c_29, b_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_29);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_g_25;
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
  ATerm d_29 = NULL,e_29 = NULL;
  t = term_h_25;
  d_29 = t;
  t = term_j_18;
  e_29 = t;
  t = term_i_25;
  t = c_7(d_29, e_29, t);
  t = term_j_25;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_3, n_3, p_3, t);
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm n_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_3, s_3, t_3, t);
            LocalPopChoice(q_25);
          }
        else
          {
            t = n_25;
            t = Option_3_0(u_3, v_3, x_3, t);
          }
      }
    }
  return(t);
}
static ATerm c_7 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL;
  t = term_w_7;
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_7, w_40, x_40);
  t = lookup_table_0_1(f_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(w_40, x_40, g_29, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_7, w_40, x_40);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_29 = NULL,o_29 = NULL,p_29 = NULL;
      t = term_j_18;
      t = e_0(t);
      m_29 = t;
      t = term_t_25;
      o_29 = t;
      t = term_u_25;
      p_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_25, term_u_25, m_29);
      t = a_7(o_29, p_29, m_29, t);
      _fail(t);
    }
  else
    {
      ATerm s_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_29 = ATgetFirst((ATermList) t);
          l_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_29;
      t = c_0(t);
      t = term_j_18;
      t = d_0(t);
      s_29 = t;
      t = (ATerm) ATinsert(CheckATermList(l_29), s_29);
    }
  return(t);
}
static ATerm z_3 (ATerm t)
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
static ATerm c_4 (ATerm t)
{
  ATerm x_29 = NULL,e_30 = NULL;
  x_29 = t;
  t = term_y_7;
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, x_29);
  t = c_7(e_30, x_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_29);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_v_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, c_4, d_4, t);
  return(t);
}
static ATerm a_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL;
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm x_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_26 = ATgetArgument(t, 0);
            ATerm d_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = z_6(r_36, s_36, t);
        LocalPopChoice(z_25);
      }
    else
      {
        t = x_25;
        t = (ATerm) ATempty;
      }
  }
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_36, s_36, (ATerm) ATinsert(CheckATermList(j_30), q_36));
  t = lookup_table_0_1(r_36, t);
  m_30 = t;
  t = (ATerm) ATinsert(CheckATermList(j_30), q_36);
  k_30 = t;
  t = m_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(s_36, k_30, l_30, t);
  t = i_30;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm x_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
      t = term_j_18;
      t = n_0(t);
      d_31 = t;
      t = term_t_25;
      e_31 = t;
      t = term_u_25;
      f_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_25, term_u_25, d_31);
      t = a_7(e_31, f_31, d_31, t);
      _fail(t);
    }
  else
    {
      ATerm k_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_30 = ATgetFirst((ATermList) t);
          a_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_31 = ATgetFirst((ATermList) t);
          c_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_30;
      t = k_0(t);
      t = b_31;
      t = l_0(t);
      k_31 = t;
      t = (ATerm) ATinsert(CheckATermList(c_31), k_31);
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm m_31 = NULL;
  m_31 = t;
  if(match_string(t, "-i"))
    {
      t = m_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_31;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL;
  p_31 = t;
  t = term_k_18;
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_18, p_31);
  t = c_7(q_31, p_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_31);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, j_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_18;
  t = whoami_0_0(t);
  r_31 = t;
  t = term_y_16;
  t_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_26), r_31);
  u_31 = t;
  t = SSL_printnl(t_31, u_31);
  t = term_v_8;
  s_31 = t;
  t = SSL_exit(s_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  t = term_w_7;
  v_31 = t;
  t = term_h_26;
  w_31 = t;
  t = term_i_26;
  t = z_6(v_31, w_31, t);
  return(t);
}
static ATerm u_6 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm j_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(m_26);
    }
  else
    {
      t = j_26;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm t)
{
  ATerm a_32 = NULL,d_32 = NULL,e_32 = NULL;
  a_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_32;
      t = c_81(t);
    }
  else
    {
      ATerm j_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_32 = ATgetFirst((ATermList) t);
          e_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_32;
      t = foldr_2_0(c_81, d_81, t);
      j_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_32, j_32);
      t = d_81(t);
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
  t = term_w_24;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL;
  if(match_cons(t, sym__2))
    {
      x_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(x_8, y_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_32 = NULL,r_8 = NULL,s_8 = NULL;
  t = times_0_0(t);
  s_8 = t;
  t = SSL_explode_term(s_8);
  if(match_cons(t, sym__2))
    {
      ATerm n_26 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8;
  t = foldr_2_0(k_4, l_4, t);
  o_32 = t;
  t = SSL_TicksToSeconds(o_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_33 = NULL,g_33 = NULL,h_33 = NULL;
  e_33 = t;
  if(match_cons(t, sym__2))
    {
      g_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_33;
        if((g_33 != t))
          {
            _fail(t);
          }
        t = e_33;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
        {
          ATerm q_26 = t;
          int w_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_33, h_33);
              LocalPopChoice(w_26);
            }
          else
            {
              t = q_26;
              t = SSL_gtr(g_33, h_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_85 (ATerm), ATerm t)
{
  ATerm p_33 = NULL;
  p_33 = t;
  {
    ATerm x_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_33 = NULL,y_33 = NULL,b_34 = NULL;
        t = term_w_7;
        y_33 = t;
        t = term_r_18;
        b_34 = t;
        t = term_s_18;
        t = z_6(y_33, b_34, t);
        x_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_33, term_v_8);
        t = geq_0_0(t);
        t = p_33;
        t = t_85(t);
        LocalPopChoice(a_27);
      }
    else
      {
        t = x_26;
        t = p_33;
      }
  }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm e_34 = NULL,i_34 = NULL,k_34 = NULL,l_34 = NULL;
  t = run_time_0_0(t);
  e_34 = t;
  t = term_j_18;
  t = whoami_0_0(t);
  i_34 = t;
  t = term_y_16;
  k_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_27), e_34), term_m_8), i_34);
  l_34 = t;
  t = SSL_printnl(k_34, l_34);
  t = (ATerm) ATmakeAppl(sym__2, term_y_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_27), e_34), term_m_8), i_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_24;
  o_34 = t;
  t = SSL_exit(o_34);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  q_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_35 = ATgetArgument(t, 0);
          {
            ATerm w_9 = NULL,t_1 = NULL;
            t = SSLgetAnnotations(q_35);
            w_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_35);
            t_1 = t;
            t = SSLsetAnnotations(t_1, w_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm f_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_34 = NULL,s_34 = NULL;
      t = term_w_7;
      r_34 = t;
      t = term_k_27;
      s_34 = t;
      t = term_m_27;
      t = z_6(r_34, s_34, t);
      LocalPopChoice(j_27);
    }
  else
    {
      t = f_27;
      t = fetch_1_0(o_4, t);
    }
  t = y_89(t);
  return(t);
}
static ATerm d_7 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t)
{
  ATerm s_35 = NULL;
  t = SSL_hashtable_put(l_40, j_40, k_40);
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_35);
  return(t);
}
static ATerm e_7 (ATerm m_40, ATerm n_40, ATerm t)
{
  t = SSL_hashtable_get(n_40, m_40);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_38, ATerm t)
{
  ATerm b_36 = NULL;
  t = table_hashtable_0_0(t);
  b_36 = t;
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_10 = NULL;
        t = b_36;
        if(match_cons(t, sym_Hashtable_1))
          {
            l_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_7(d_38, l_10, t);
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        {
          ATerm t_10 = NULL;
          t = d_38;
          t = table_create_0_0(t);
          t = b_36;
          if(match_cons(t, sym_Hashtable_1))
            {
              t_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_7(d_38, t_10, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm e_36 = NULL;
  t = SSL_hashtable_create(r_40, s_40);
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_36);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,k_36 = NULL,l_36 = NULL;
  f_36 = t;
  t = term_p_27;
  k_36 = t;
  t = term_q_27;
  l_36 = t;
  t = f_36;
  t = new_hashtable_0_2(k_36, l_36, t);
  g_36 = t;
  t = f_36;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(f_36, g_36, h_36, t);
  t = f_36;
  return(t);
}
static ATerm w_6 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm t_36 = NULL;
  t = SSL_hashtable_remove(p_40, o_40);
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_36);
  return(t);
}
static ATerm x_6 (ATerm t_40, ATerm t)
{
  ATerm u_36 = NULL;
  t = SSL_hashtable_destroy(t_40);
  u_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_36);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm y_36 = NULL;
  t = SSL_table_hashtable();
  y_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_36);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
  z_36 = t;
  t = table_hashtable_0_0(t);
  a_37 = t;
  t = lookup_table_0_1(z_36, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(c_37, t);
  t = a_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_6(z_36, b_37, t);
  t = z_36;
  return(t);
}
ATerm map_1_0 (ATerm o_73 (ATerm), ATerm t)
{
  static ATerm w_37 (ATerm t)
  {
    ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
    t_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_37;
      }
    else
      {
        ATerm a_11 = NULL,g_11 = NULL,h_11 = NULL,c_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_37 = ATgetFirst((ATermList) t);
            v_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_37);
        a_11 = t;
        t = u_37;
        t = o_73(t);
        g_11 = t;
        t = v_37;
        t = w_37(t);
        h_11 = t;
        t = (ATerm) ATinsert(CheckATermList(h_11), g_11);
        c_2 = t;
        t = SSLsetAnnotations(c_2, a_11);
      }
    return(t);
  }
  t = w_37(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_38 = ATgetFirst((ATermList) t);
      i_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_38 = NULL,p_38 = NULL;
        static ATerm p_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_38)), not_null(p_38));
          return(t);
        }
        t = i_38;
        t = i_0(t);
        if(((o_38 != NULL) && (o_38 != t)))
          _fail(t);
        else
          o_38 = t;
        t = h_38;
        t = g_0(t);
        if(((p_38 != NULL) && (p_38 != t)))
          _fail(t);
        else
          p_38 = t;
        t = i_38;
        t = reverse_acc_2_0(g_0, p_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_18;
      t = i_0(t);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm v_38 = NULL,z_38 = NULL,a_39 = NULL,n_2 = NULL;
  a_39 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_39);
  v_38 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_38);
  n_2 = t;
  t = SSLsetAnnotations(n_2, v_38);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm c_39 = NULL;
  c_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_39), term_s_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL;
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_38 = NULL,u_38 = NULL;
      t = term_w_7;
      t_38 = t;
      t = term_h_26;
      u_38 = t;
      t = term_i_26;
      t = z_6(t_38, u_38, t);
      LocalPopChoice(u_27);
    }
  else
    {
      t = t_27;
      t = fetch_1_0(r_4, t);
    }
  t = term_v_27;
  t = echo_0_0(t);
  t = term_t_25;
  r_38 = t;
  t = term_u_25;
  s_38 = t;
  t = term_w_27;
  t = z_6(r_38, s_38, t);
  t = reverse_acc_2_0(_id, v_4, t);
  t = map_1_0(w_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm y_73 (ATerm), ATerm t)
{
  static ATerm b_40 (ATerm t)
  {
    ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL;
    y_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_39 = ATgetFirst((ATermList) t);
        a_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_28 = t;
      int c_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_12 = NULL,i_12 = NULL,p_2 = NULL;
          t = SSLgetAnnotations(y_39);
          c_12 = t;
          t = z_39;
          t = y_73(t);
          i_12 = t;
          t = (ATerm) ATinsert(CheckATermList(a_40), i_12);
          p_2 = t;
          t = SSLsetAnnotations(p_2, c_12);
          LocalPopChoice(c_28);
        }
      else
        {
          t = b_28;
          {
            ATerm w_12 = NULL,b_13 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(y_39);
            w_12 = t;
            t = a_40;
            t = b_40(t);
            b_13 = t;
            t = (ATerm) ATinsert(CheckATermList(b_13), z_39);
            x_2 = t;
            t = SSLsetAnnotations(x_2, w_12);
          }
        }
    }
    return(t);
  }
  t = b_40(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
  f_40 = t;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_40;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_28 = ATgetFirst((ATermList) t);
                ATerm k_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_40;
          }
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        t = (ATerm) ATinsert(ATempty, f_40);
      }
  }
  g_40 = t;
  t = term_a_8;
  h_40 = t;
  t = SSL_printnl(h_40, g_40);
  t = f_40;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL;
  t = term_w_7;
  y_40 = t;
  t = term_h_26;
  z_40 = t;
  t = term_i_26;
  t = z_6(y_40, z_40, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL;
  t = term_n_28;
  a_41 = t;
  t = term_j_18;
  b_41 = t;
  t = term_q_28;
  t = c_7(a_41, b_41, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_r_28;
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
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
  t = term_n_28;
  e_41 = t;
  t = term_j_18;
  f_41 = t;
  t = term_q_28;
  t = c_7(e_41, f_41, t);
  t = term_u_28;
  c_41 = t;
  t = term_j_18;
  d_41 = t;
  t = term_w_28;
  t = c_7(c_41, d_41, t);
  t = term_x_28;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_4, z_4, a_5, t);
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      t = Option_3_0(d_5, e_5, h_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_60 (ATerm), ATerm o_60 (ATerm), ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,w_3 = NULL;
  l_41 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_41 = ATgetFirst((ATermList) t);
      i_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_41);
  g_41 = t;
  t = h_41;
  t = n_60(t);
  j_41 = t;
  t = i_41;
  t = o_60(t);
  k_41 = t;
  t = (ATerm) ATinsert(CheckATermList(k_41), j_41);
  w_3 = t;
  t = SSLsetAnnotations(w_3, g_41);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,w_41 = NULL,x_41 = NULL,y_3 = NULL;
  q_41 = t;
  {
    ATerm n_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_29;
        t = w_91(t);
        LocalPopChoice(q_29);
      }
    else
      {
        t = n_29;
      }
  }
  t = q_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_41 = ATgetFirst((ATermList) t);
      t_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_41);
  r_41 = t;
  t = term_h_26;
  x_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_26, s_41);
  t = c_7(x_41, s_41, t);
  t = t_41;
  {
    static ATerm n_42 (ATerm t)
    {
      ATerm t_29 = t;
      int u_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_29 = t;
          int y_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_42 = NULL;
              c_42 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_42;
              LocalPopChoice(y_29);
            }
          else
            {
              t = v_29;
              t = w_91(t);
              t = Cons_2_0(_id, n_42, t);
            }
          LocalPopChoice(u_29);
        }
      else
        {
          t = t_29;
          {
            ATerm f_42 = NULL,g_42 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_42 = ATgetFirst((ATermList) t);
                g_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_42), (ATerm) ATmakeAppl(sym_Undefined_1, f_42));
          }
        }
      return(t);
    }
    t = n_42(t);
  }
  w_41 = t;
  t = (ATerm) ATinsert(CheckATermList(w_41), (ATerm) ATmakeAppl(sym_Program_1, s_41));
  y_3 = t;
  t = SSLsetAnnotations(y_3, r_41);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm d_43 = NULL;
  d_43 = t;
  if(match_string(t, "--help"))
    {
      t = d_43;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_43;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_43;
        }
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL;
  t = term_k_27;
  e_43 = t;
  t = term_j_18;
  f_43 = t;
  t = term_z_29;
  t = c_7(e_43, f_43, t);
  t = term_a_30;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_b_30;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_91 (ATerm), ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,b_43 = NULL,c_43 = NULL;
  u_42 = t;
  t = term_t_25;
  v_42 = t;
  t = term_c_30;
  t = lookup_table_0_1(v_42, t);
  c_43 = t;
  t = term_u_25;
  w_42 = t;
  t = (ATerm) ATempty;
  x_42 = t;
  t = c_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(w_42, x_42, b_43, t);
  t = u_42;
  {
    static ATerm i_5 (ATerm t)
    {
      ATerm d_30 = t;
      int f_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_91(t);
          LocalPopChoice(f_30);
        }
      else
        {
          t = d_30;
          {
            ATerm g_30 = t;
            int h_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_5, k_5, l_5, t);
                LocalPopChoice(h_30);
              }
            else
              {
                t = g_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_5, t);
  }
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_43 = NULL;
        z_43 = t;
        {
          ATerm p_30 = t;
          int q_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_13 = NULL;
              t = z_43;
              {
                ATerm r_30 = t;
                int s_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_13 = NULL,b_14 = NULL;
                    t = term_w_7;
                    t_13 = t;
                    t = term_k_27;
                    b_14 = t;
                    t = term_m_27;
                    t = z_6(t_13, b_14, t);
                    LocalPopChoice(s_30);
                  }
                else
                  {
                    t = r_30;
                    t = fetch_1_0(m_5, t);
                  }
              }
              t = z_43;
              t = default_system_usage_0_0(t);
              t = term_w_24;
              s_13 = t;
              t = SSL_exit(s_13);
              LocalPopChoice(q_30);
            }
          else
            {
              t = p_30;
              {
                ATerm q_14 = NULL,r_14 = NULL,y_14 = NULL;
                t = term_w_7;
                r_14 = t;
                t = term_n_28;
                y_14 = t;
                t = term_t_30;
                t = z_6(r_14, y_14, t);
                t = z_43;
                t = default_system_about_0_0(t);
                t = term_w_24;
                q_14 = t;
                t = SSL_exit(q_14);
              }
            }
        }
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        {
          ATerm u_30 = t;
          int v_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
              static ATerm n_5 (ATerm t)
              {
                ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,b_4 = NULL;
                g_44 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_44 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_44);
                e_44 = t;
                t = f_44;
                if(((s_42 != NULL) && (s_42 != t)))
                  _fail(t);
                else
                  s_42 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_44);
                b_4 = t;
                t = SSLsetAnnotations(b_4, e_44);
                return(t);
              }
              t = fetch_1_0(n_5, t);
              t = term_y_16;
              b_44 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_42)), term_w_30);
              c_44 = t;
              t = SSL_printnl(b_44, c_44);
              t = (ATerm) ATmakeAppl(sym__2, term_y_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_42)), term_w_30));
              t = default_system_usage_0_0(t);
              t = term_v_8;
              a_44 = t;
              t = SSL_exit(a_44);
              LocalPopChoice(v_30);
            }
          else
            {
              t = u_30;
            }
        }
      }
  }
  t_42 = t;
  t = term_t_25;
  t = table_destroy_0_0(t);
  t = t_42;
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm t)
{
  ATerm l_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL;
  t = parse_options_1_0(a_90, t);
  l_44 = t;
  t = term_y_30;
  t = table_create_0_0(t);
  t = term_y_30;
  r_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_30, term_z_30, l_44);
  t = lookup_table_0_1(r_44, t);
  u_44 = t;
  t = term_z_30;
  s_44 = t;
  t = u_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(s_44, l_44, t_44, t);
  t = l_44;
  t = c_90(t);
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_90, t);
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        {
          ATerm i_31 = t;
          int j_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_90(t);
              t = report_success_0_0(t);
              LocalPopChoice(j_31);
            }
          else
            {
              t = i_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm l_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(n_31);
    }
  else
    {
      t = l_31;
      {
        ATerm o_31 = t;
        int x_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(x_31);
          }
        else
          {
            t = o_31;
            {
              ATerm y_31 = t;
              int z_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(q_5, r_5, t_5, t);
                  LocalPopChoice(z_31);
                }
              else
                {
                  t = y_31;
                  {
                    ATerm b_32 = t;
                    int c_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(c_32);
                      }
                    else
                      {
                        t = b_32;
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
  t = xtc_temp_files_1_0(u_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL;
  t = term_f_32;
  d_45 = t;
  t = term_j_18;
  e_45 = t;
  t = term_g_32;
  t = c_7(d_45, e_45, t);
  t = term_h_32;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_i_32;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm k_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL;
      t = term_w_7;
      h_45 = t;
      t = term_k_18;
      i_45 = t;
      t = term_p_32;
      t = z_6(h_45, i_45, t);
      g_45 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_45);
      LocalPopChoice(n_32);
    }
  else
    {
      t = k_32;
      t = term_d_8;
    }
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_45 = NULL,p_45 = NULL;
        p_45 = t;
        if(match_cons(t, sym_FILE_1))
          {
            o_45 = ATgetArgument(t, 0);
            {
              ATerm f_15 = NULL,e_4 = NULL;
              t = SSLgetAnnotations(p_45);
              f_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_45);
              e_4 = t;
              t = SSLsetAnnotations(e_4, f_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_45;
          }
        LocalPopChoice(r_32);
        t = xtc_transform_file_2_0(v_5, w_5, t);
      }
    else
      {
        t = q_32;
        t = xtc_transform_term_2_0(x_5, y_5, t);
      }
  }
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_45 = NULL,w_45 = NULL;
        w_45 = t;
        if(match_cons(t, sym_FILE_1))
          {
            v_45 = ATgetArgument(t, 0);
            {
              ATerm s_15 = NULL,f_4 = NULL;
              t = SSLgetAnnotations(w_45);
              s_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_45);
              f_4 = t;
              t = SSLsetAnnotations(f_4, s_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_45;
          }
        LocalPopChoice(t_32);
        t = xtc_transform_file_2_0(z_5, build_pp_tables_0_0, t);
      }
    else
      {
        t = s_32;
        t = xtc_transform_term_2_0(a_6, build_pp_tables_0_0, t);
      }
  }
  {
    ATerm u_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_46 = NULL,d_46 = NULL;
        d_46 = t;
        if(match_cons(t, sym_FILE_1))
          {
            c_46 = ATgetArgument(t, 0);
            {
              ATerm d_16 = NULL,g_4 = NULL;
              t = SSLgetAnnotations(d_46);
              d_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_46);
              g_4 = t;
              t = SSLsetAnnotations(g_4, d_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_46;
          }
        LocalPopChoice(v_32);
        t = xtc_transform_file_2_0(b_6, v_6, t);
      }
    else
      {
        t = u_32;
        t = xtc_transform_term_2_0(y_6, b_7, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_w_32;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_w_32;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_x_32;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_x_32;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_y_32;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_y_32;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(o_5, default_usage_0_0, _id, p_5, t);
  return(t);
}
