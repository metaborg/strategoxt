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
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_p_32;
ATerm term_m_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_v_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_v_29;
ATerm term_n_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_t_28;
ATerm term_d_28;
ATerm term_b_28;
ATerm term_v_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_k_27;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_b_26;
ATerm term_z_25;
ATerm term_w_25;
ATerm term_n_25;
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
ATerm term_w_24;
ATerm term_v_24;
ATerm term_r_24;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_n_23;
ATerm term_j_23;
ATerm term_a_23;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_z_20;
ATerm term_s_20;
ATerm term_n_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_u_18;
ATerm term_r_18;
ATerm term_o_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_s_17;
ATerm term_k_17;
ATerm term_e_17;
ATerm term_y_16;
ATerm term_o_16;
ATerm term_n_16;
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
ATerm term_a_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_y_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_s_9;
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
ATerm term_x_8;
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
ATerm term_x_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_y_7);
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
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_8, term_v_8, term_w_8);
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
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_p_9, term_q_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_w_9, term_y_9);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_10, term_g_10, term_h_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_o_10, term_q_10);
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
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_a_11, term_c_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_j_11, term_k_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_t_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_c_12, term_e_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_m_12, term_n_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_t_12, term_v_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_b_13, term_d_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_i_13, term_j_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_q_13, term_r_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_c_14, term_d_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_n_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_y_14, term_z_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_f_15, term_h_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_m_15, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_r_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
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
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_l_16, term_n_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_r_18);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_g_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_m_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_h_21);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("visamb.pp.af", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_s_17);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym__2, term_r_18, term_a_25);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_25);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym__2, term_j_25, term_l_18);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_m_26);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_n_27);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym__2, term_w_25, term_z_25);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_l_18);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_g_29, term_l_18);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__2, term_n_27, term_l_18);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__3, term_w_25, term_z_25, (ATerm) ATempty);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_t_28);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_i_32, term_l_18);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_o_18);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Vis-amb", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm t_6 (ATerm t_14, ATerm u_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm d_6 (ATerm t_17, ATerm u_17, ATerm t);
static ATerm e_6 (ATerm c_79 (ATerm), ATerm o_182, ATerm d_18, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t);
static ATerm f_6 (ATerm l_14, ATerm m_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm f_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm r_77 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm v_101 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm k_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_9 (ATerm k_9, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm r_6 (ATerm r_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm a_79 (ATerm), ATerm t);
static ATerm h_6 (ATerm m_50, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm w_98 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm v_98 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm x_98 (ATerm), ATerm t);
static ATerm j_6 (ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t);
static ATerm k_6 (ATerm e_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
static ATerm c_1 (ATerm t);
static ATerm l_6 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t);
static ATerm m_6 (ATerm z_98 (ATerm), ATerm u_46, ATerm t_46, ATerm t);
static ATerm q_6 (ATerm v_51, ATerm w_51, ATerm t);
static ATerm z_16 (ATerm m_16, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_6 (ATerm z_17, ATerm t);
static ATerm s_6 (ATerm q_32, ATerm r_32, ATerm t);
static ATerm o_6 (ATerm e_52, ATerm f_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm v_19 (ATerm m_17, ATerm t);
static ATerm w_19 (ATerm w_17, ATerm y_17, ATerm a_18, ATerm t);
static ATerm x_19 (ATerm m_18, ATerm n_18, ATerm s_18, ATerm t);
static ATerm p_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_92 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm o_25 (ATerm y_23, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm build_pp_tables_0_0 (ATerm t);
static ATerm a_7 (ATerm g_47, ATerm h_47, ATerm t);
static ATerm u_6 (ATerm s_45, ATerm t_45, ATerm t);
ATerm end_scope_1_0 (ATerm o_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_94 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm h_101 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_7 (ATerm s_50, ATerm t_50, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_7 (ATerm n_45, ATerm o_45, ATerm m_45, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm v_6 (ATerm v_33, ATerm w_33, ATerm t);
ATerm foldr_2_0 (ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm s_98 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm need_help_1_0 (ATerm x_102 (ATerm), ATerm t);
static ATerm e_7 (ATerm f_50, ATerm g_50, ATerm h_50, ATerm t);
static ATerm f_7 (ATerm i_50, ATerm j_50, ATerm t);
ATerm lookup_table_0_1 (ATerm z_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm n_50, ATerm o_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm x_6 (ATerm k_50, ATerm l_50, ATerm t);
static ATerm y_6 (ATerm p_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm t_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm m_70 (ATerm), ATerm n_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_104 (ATerm), ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm parse_options_1_0 (ATerm u_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm t);
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
static ATerm c_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm o_1 = NULL,r_1 = NULL;
  o_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = o_1;
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
        t = (ATerm) ATmakeAppl(sym__2, r_1, e_0);
        t = t_6(r_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_1);
        LocalPopChoice(g_7);
      }
    else
      {
        t = c_7;
        {
          ATerm j_7 = t;
          int m_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_0 = NULL;
              t = o_1;
              t = q_0(t);
              y_0 = t;
              {
                ATerm o_7 = t;
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
                            if((r_1 != t))
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
                    t = o_7;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, r_1, y_0);
              t = t_6(r_1, y_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_1);
              LocalPopChoice(m_7);
            }
          else
            {
              t = j_7;
              t = o_1;
              t = q_0(t);
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
static ATerm t_6 (ATerm t_14, ATerm u_14, ATerm t)
{
  t = SSL_copy(t_14, u_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 = NULL,w_2 = NULL;
      t = term_x_7;
      s_2 = t;
      t = term_y_7;
      w_2 = t;
      t = term_z_7;
      t = a_7(s_2, w_2, t);
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
      ATerm h_1 = NULL,l_1 = NULL;
      t = term_y_7;
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 = NULL,n_1 = NULL;
            t = term_x_7;
            m_1 = t;
            t = term_y_7;
            n_1 = t;
            t = term_z_7;
            t = a_7(m_1, n_1, t);
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            t = term_a_8;
          }
      }
      h_1 = t;
      t = term_d_8;
      l_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_d_8, h_1);
      t = t_6(l_1, h_1, t);
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
      t = q_6(a_3, c_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm d_6 (ATerm t_17, ATerm u_17, ATerm t)
{
  ATerm d_3 = NULL;
  t = SSL_write_term_to_stream_baf(t_17, u_17);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_3);
  return(t);
}
static ATerm e_6 (ATerm c_79 (ATerm), ATerm o_182, ATerm d_18, ATerm t)
{
  ATerm e_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_182, term_i_8);
  t = p_6(t);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_3, d_18);
  t = c_79(t);
  t = fclose_0_0(t);
  t = d_18;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_8 = ATgetArgument(t, 0);
      if(match_cons(j_8, sym_Stream_1))
        {
          m_3 = ATgetArgument(j_8, 0);
        }
      else
        _fail(t);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(m_3, n_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t)
{
  ATerm h_3 = NULL,j_3 = NULL;
  j_3 = t;
  t = xtc_new_file_0_0(t);
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_3, j_3);
  t = e_6(b_0, h_3, j_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_3);
  t = xtc_transform_file_2_0(u_100, v_100, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm f_6 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_execvp(l_14, m_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm l_4 = NULL,o_4 = NULL,t_4 = NULL,u_4 = NULL;
  l_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      o_4 = ATgetArgument(t, 0);
      {
        ATerm x_1 = NULL,z_1 = NULL;
        t = SSL_int_to_string(o_4);
        x_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_8), x_1), term_k_8);
        z_1 = t;
        t = SSL_concat_strings(z_1);
      }
    }
  else
    {
      ATerm k_2 = NULL,l_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          o_4 = ATgetArgument(t, 0);
          t_4 = ATgetArgument(t, 1);
          u_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(t_4);
      k_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_4), term_n_8), k_2), term_m_8), o_4);
      l_2 = t;
      t = SSL_concat_strings(l_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  ATerm x_4 = NULL;
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    t = f_84(t);
    if(((x_4 != NULL) && (x_4 != t)))
      _fail(t);
    else
      x_4 = t;
    return(t);
  }
  t = fetch_1_0(c_0, t);
  t = not_null(x_4);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_0 (ATerm t);
        static ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm q_8 = ATgetArgument(t, 0);
              if((y_4 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm r_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_16), term_j_16), term_f_16), term_a_16), term_s_15), term_o_15), term_j_15), term_b_15), term_o_14), term_i_14), term_e_14), term_u_13), term_l_13), term_g_13), term_x_12), term_r_12), term_f_12), term_v_11), term_l_11), term_d_11), term_y_10), term_r_10), term_i_10), term_b_10), term_s_9), term_n_9), term_h_9), term_x_8);
        t = fetch_elem_1_0(f_0, t);
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, y_4);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm g_5 = NULL,s_5 = NULL;
  g_5 = t;
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_16 = ATgetArgument(t, 0);
            s_5 = ATgetArgument(t, 1);
            {
              ATerm u_16 = ATgetArgument(t, 2);
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
              ATerm f_3 = NULL,i_3 = NULL,k_3 = NULL;
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
              f_3 = t;
              t = term_y_16;
              i_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_3), term_e_17);
              k_3 = t;
              t = SSL_printnl(i_3, k_3);
              t = (ATerm) ATmakeAppl(sym__2, term_y_16, (ATerm) ATinsert(ATinsert(ATempty, f_3), term_e_17));
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
        t = p_16;
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
ATerm fork_and_wait_1_0 (ATerm r_77 (ATerm), ATerm t)
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
        t = r_77(t);
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
ATerm xtc_command_1_0 (ATerm v_101 (ATerm), ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL;
  l_7 = t;
  t = v_101(t);
  t = xtc_find_0_0(t);
  k_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_7, l_7);
  {
    static ATerm i_0 (ATerm t);
    static ATerm i_0 (ATerm t)
    {
      ATerm n_7 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, k_7, l_7);
      t = f_6(k_7, l_7, t);
      t = term_k_17;
      n_7 = t;
      t = SSL_exit(n_7);
      return(t);
    }
    t = fork_and_wait_1_0(i_0, t);
  }
  t = l_7;
  return(t);
}
ATerm at_end_1_0 (ATerm k_84 (ATerm), ATerm t)
{
  static ATerm d_9 (ATerm t);
  static ATerm d_9 (ATerm t)
  {
    ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
    c_9 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_9 = ATgetFirst((ATermList) t);
        b_9 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_3 = NULL,b_4 = NULL,v_0 = NULL;
          t = SSLgetAnnotations(c_9);
          r_3 = t;
          t = b_9;
          t = d_9(t);
          b_4 = t;
          t = (ATerm) ATinsert(CheckATermList(b_4), a_9);
          v_0 = t;
          t = SSLsetAnnotations(v_0, r_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_9;
        t = k_84(t);
      }
    return(t);
  }
  t = d_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
  s_7 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_7;
    }
  else
    {
      static ATerm k_0 (ATerm t);
      static ATerm k_0 (ATerm t)
      {
        t = not_null(u_7);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_7 = ATgetFirst((ATermList) t);
          if(((u_7 != NULL) && (u_7 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_7;
      t = at_end_1_0(k_0, t);
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
  ATerm r_9 = NULL,t_9 = NULL,u_9 = NULL;
  u_9 = t;
  if(match_cons(t, sym__2))
    {
      r_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_0 (ATerm t);
            static ATerm n_0 (ATerm t)
            {
              t = t_9;
              return(t);
            }
            t = r_9;
            t = at_end_1_0(n_0, t);
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
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
static ATerm r_6 (ATerm r_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t)
{
  ATerm a_10 = NULL,c_10 = NULL,e_10 = NULL,f_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,p_10 = NULL;
  f_10 = t;
  t = r_94(t);
  a_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_10, j_35, h_35);
  t = b_7(a_10, j_35, h_35, t);
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_10 = NULL;
        t = term_s_17;
        s_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_10, term_s_17);
        t = a_7(a_10, s_10, t);
        {
          ATerm v_17 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_17;
            }
        }
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_10 = ATgetFirst((ATermList) t);
      e_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_10, term_s_17, (ATerm) ATinsert(CheckATermList(e_10), (ATerm) ATinsert(CheckATermList(c_10), j_35)));
  t = lookup_table_0_1(a_10, t);
  p_10 = t;
  t = term_s_17;
  j_10 = t;
  t = (ATerm) ATinsert(CheckATermList(e_10), (ATerm) ATinsert(CheckATermList(c_10), j_35));
  k_10 = t;
  t = p_10;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_7(j_10, k_10, l_10, t);
  t = f_10;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm u_10 = NULL;
  ATerm x_17 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_11 = NULL,r_4 = NULL;
      e_11 = t;
      t = term_g_18;
      r_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_11, term_g_18);
      t = s_6(e_11, r_4, t);
      u_10 = t;
      t = SSL_mkstemp(u_10);
      LocalPopChoice(c_18);
    }
  else
    {
      t = x_17;
      {
        ATerm f_11 = NULL;
        t = term_h_18;
        f_11 = t;
        t = SSL_perror(f_11);
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
  t = term_i_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  t = P__tmpdir_0_0(t);
  p_11 = t;
  t = term_j_18;
  q_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_11, term_j_18);
  t = s_6(p_11, q_11, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      n_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_l_18;
  o_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_11, term_l_18);
  t = r_6(s_0, n_11, o_11, t);
  t = SSL_close(m_11);
  t = n_11;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,w_11 = NULL;
  u_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_11 = NULL,y_11 = NULL;
      t = u_11;
      t = xtc_new_file_0_0(t);
      x_11 = t;
      t = t_0(t);
      y_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_11, (ATerm) ATinsert(ATinsert(ATempty, x_11), term_y_7));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_11);
    }
  else
    {
      ATerm a_12 = NULL,b_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_11;
      t = xtc_new_file_0_0(t);
      a_12 = t;
      t = t_0(t);
      b_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_12), term_y_7), w_11), term_o_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_12);
    }
  return(t);
}
ATerm debug_1_0 (ATerm a_79 (ATerm), ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL,l_12 = NULL;
  g_12 = t;
  t = a_79(t);
  h_12 = t;
  t = term_y_16;
  i_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_12), h_12);
  l_12 = t;
  t = SSL_printnl(i_12, l_12);
  t = g_12;
  return(t);
}
static ATerm h_6 (ATerm m_50, ATerm t)
{
  t = SSL_hashtable_keys(m_50);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL;
  static ATerm u_0 (ATerm t);
  static ATerm u_0 (ATerm t)
  {
    ATerm q_12 = NULL,u_12 = NULL;
    q_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_12), q_12);
    t = a_7(not_null(o_12), q_12, t);
    u_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_12, u_12);
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
  t = h_6(p_12, t);
  t = map_1_0(u_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm w_12 = NULL;
  w_12 = t;
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_13 = NULL,e_13 = NULL,f_13 = NULL;
        t = term_x_7;
        e_13 = t;
        t = term_r_18;
        f_13 = t;
        t = term_u_18;
        t = a_7(e_13, f_13, t);
        a_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_13, term_w_15);
        t = geq_0_0(t);
        t = w_12;
        t = w_98(t);
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        t = w_12;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm k_13 = NULL;
  k_13 = t;
  {
    ATerm v_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
        t = term_x_7;
        o_13 = t;
        t = term_r_18;
        p_13 = t;
        t = term_u_18;
        t = a_7(o_13, p_13, t);
        n_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_13, term_c_12);
        t = geq_0_0(t);
        t = k_13;
        t = v_98(t);
        LocalPopChoice(x_18);
      }
    else
      {
        t = v_18;
        t = k_13;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm x_98 (ATerm), ATerm t)
{
  ATerm t_13 = NULL;
  t_13 = t;
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
        t = term_x_7;
        w_13 = t;
        t = term_r_18;
        x_13 = t;
        t = term_u_18;
        t = a_7(w_13, x_13, t);
        v_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_13, term_p_9);
        t = geq_0_0(t);
        t = t_13;
        t = x_98(t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        t = t_13;
      }
  }
  return(t);
}
static ATerm j_6 (ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  t = i_88(t);
  {
    static ATerm w_0 (ATerm t);
    static ATerm w_0 (ATerm t)
    {
      ATerm a_14 = NULL;
      a_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_25, a_14);
      t = h_88(t);
      return(t);
    }
    t = fetch_1_0(w_0, t);
  }
  t = g_25;
  return(t);
}
static ATerm k_6 (ATerm e_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  static ATerm a_15 (ATerm t);
  static ATerm a_15 (ATerm t)
  {
    ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL;
    q_14 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_14 = ATgetFirst((ATermList) t);
            s_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_19 = t;
          int c_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_14;
              {
                static ATerm a_1 (ATerm t);
                static ATerm a_1 (ATerm t)
                {
                  t = c_25;
                  return(t);
                }
                t = j_6(e_88, a_1, r_14, s_14, t);
              }
              t = a_15(t);
              LocalPopChoice(c_19);
            }
          else
            {
              t = a_19;
              {
                ATerm c_5 = NULL,f_5 = NULL,x_0 = NULL;
                t = SSLgetAnnotations(q_14);
                c_5 = t;
                t = s_14;
                t = a_15(t);
                f_5 = t;
                t = (ATerm) ATinsert(CheckATermList(f_5), r_14);
                x_0 = t;
                t = SSLsetAnnotations(x_0, c_5);
              }
            }
        }
      }
    return(t);
  }
  t = d_25;
  t = a_15(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm t_15 = NULL;
  if(match_cons(t, sym__2))
    {
      t_15 = ATgetArgument(t, 0);
      if((t_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,i_15 = NULL,l_15 = NULL;
  d_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_46, l_46);
  {
    ATerm d_19 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, k_46, l_46);
        t = a_7(k_46, l_46, t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = (ATerm) ATempty;
      }
  }
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_15, m_46);
  t = k_6(c_1, i_15, m_46, t);
  e_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_46, l_46, e_15);
  t = lookup_table_0_1(k_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_7(l_46, e_15, l_15, t);
  t = d_15;
  return(t);
}
static ATerm m_6 (ATerm z_98 (ATerm), ATerm u_46, ATerm t_46, ATerm t)
{
  static ATerm e_1 (ATerm t);
  static ATerm e_1 (ATerm t)
  {
    ATerm y_15 = NULL,z_15 = NULL;
    if(match_cons(t, sym__2))
      {
        y_15 = ATgetArgument(t, 0);
        z_15 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, u_46, y_15, z_15);
    t = z_98(t);
    return(t);
  }
  t = t_46;
  t = map_1_0(e_1, t);
  return(t);
}
static ATerm q_6 (ATerm v_51, ATerm w_51, ATerm t)
{
  t = SSL_access(v_51, w_51);
  return(t);
}
static ATerm z_16 (ATerm m_16, ATerm t)
{
  t = SSL_fclose(m_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_16 = NULL,t_16 = NULL;
  t_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_16 = ATgetArgument(t, 0);
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_16);
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            t = z_16(t_16, t);
          }
      }
    }
  else
    {
      t = z_16(t_16, t);
    }
  return(t);
}
static ATerm n_6 (ATerm z_17, ATerm t)
{
  t = SSL_read_term_from_stream(z_17);
  return(t);
}
static ATerm s_6 (ATerm q_32, ATerm r_32, ATerm t)
{
  t = SSL_strcat(q_32, r_32);
  return(t);
}
static ATerm o_6 (ATerm e_52, ATerm f_52, ATerm t)
{
  ATerm a_17 = NULL;
  t = SSL_fopen(e_52, f_52);
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_17 = NULL;
  t = SSL_stdin_stream();
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_17 = NULL;
  t = SSL_stdout_stream();
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_17 = NULL;
  t = SSL_stderr_stream();
  d_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_17);
  return(t);
}
static ATerm v_19 (ATerm m_17, ATerm t)
{
  ATerm n_17 = NULL;
  t = SSL_explode_term(m_17);
  if(match_cons(t, sym__2))
    {
      ATerm l_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_19 = ATgetArgument(t, 1);
        if(((ATgetType(n_19) == AT_LIST) && !(ATisEmpty(n_19))))
          {
            n_17 = ATgetFirst((ATermList) n_19);
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
  t = n_17;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_17;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_17;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_17;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm w_19 (ATerm w_17, ATerm y_17, ATerm a_18, ATerm t)
{
  ATerm b_18 = NULL,e_18 = NULL,f_18 = NULL,k_18 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(a_18);
  f_18 = t;
  t = w_17;
  if(match_cons(t, sym_Path_1))
    {
      k_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_18, y_17);
  b_1 = t;
  t = SSLsetAnnotations(b_1, f_18);
  if(match_cons(t, sym__2))
    {
      b_18 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(b_18, e_18, t);
  return(t);
}
static ATerm x_19 (ATerm m_18, ATerm n_18, ATerm s_18, ATerm t)
{
  ATerm t_18 = NULL,w_18 = NULL,b_19 = NULL,f_19 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(s_18);
  b_19 = t;
  t = SSL_is_string(m_18);
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_19, n_18);
  d_1 = t;
  t = SSLsetAnnotations(d_1, b_19);
  if(match_cons(t, sym__2))
    {
      t_18 = ATgetArgument(t, 0);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(t_18, w_18, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm k_19 = NULL,m_19 = NULL,u_19 = NULL;
  k_19 = t;
  if(match_cons(t, sym__2))
    {
      m_19 = ATgetArgument(t, 0);
      u_19 = ATgetArgument(t, 1);
      {
        ATerm p_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_19(k_19, t);
            LocalPopChoice(q_19);
          }
        else
          {
            t = p_19;
            {
              ATerm r_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_19(m_19, u_19, k_19, t);
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = r_19;
                  t = x_19(m_19, u_19, k_19, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_19(k_19, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,l_20 = NULL;
  l_20 = t;
  {
    ATerm t_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_20, term_z_19);
        t = p_6(t);
        LocalPopChoice(y_19);
      }
    else
      {
        t = t_19;
        {
          ATerm g_6 = NULL,i_6 = NULL;
          t = term_a_20;
          i_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_20, l_20);
          t = s_6(i_6, l_20, t);
          g_6 = t;
          t = SSL_perror(g_6);
          _fail(t);
        }
      }
  }
  d_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(e_20, t);
  c_20 = t;
  t = d_20;
  t = fclose_0_0(t);
  t = c_20;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_f_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_20 = NULL,p_20 = NULL;
      o_20 = t;
      t = (ATerm) ATinsert(ATempty, term_i_20);
      p_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_20, (ATerm) ATinsert(ATempty, term_i_20));
      t = q_6(o_20, p_20, t);
      LocalPopChoice(h_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_20;
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_20 = t;
            if((PushChoice() == 0))
              {
                ATerm q_20 = NULL,r_20 = NULL;
                q_20 = t;
                t = (ATerm) ATinsert(ATempty, term_f_8);
                r_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, q_20, (ATerm) ATinsert(ATempty, term_f_8));
                t = q_6(q_20, r_20, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_20;
              }
            t = debug_1_0(f_1, t);
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            t = debug_1_0(g_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_s_20;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,u_21 = NULL;
  r_21 = t;
  t = term_y_16;
  s_21 = t;
  t = (ATerm) ATinsert(ATempty, term_z_20);
  u_21 = t;
  t = SSL_printnl(s_21, u_21);
  t = r_21;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  if(match_cons(t, sym__3))
    {
      w_21 = ATgetArgument(t, 0);
      x_21 = ATgetArgument(t, 1);
      y_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_6(w_21, x_21, y_21, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
  z_21 = t;
  t = term_y_16;
  a_22 = t;
  t = (ATerm) ATinsert(ATempty, term_e_21);
  b_22 = t;
  t = SSL_printnl(a_22, b_22);
  t = z_21;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
  c_22 = t;
  t = term_y_16;
  d_22 = t;
  t = (ATerm) ATinsert(ATempty, term_z_20);
  e_22 = t;
  t = SSL_printnl(d_22, e_22);
  t = c_22;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,i_21 = NULL,j_21 = NULL,m_21 = NULL,n_21 = NULL;
  t_20 = t;
  t = if_verbose5_1_0(i_1, t);
  {
    ATerm f_21 = t;
    if((PushChoice() == 0))
      {
        ATerm o_21 = NULL,p_21 = NULL;
        t = term_g_21;
        o_21 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, t_20);
        p_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATmakeAppl(sym_Imported_1, t_20));
        t = a_7(o_21, p_21, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_21;
      }
  }
  v_20 = t;
  t = term_g_21;
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_21, term_h_21, (ATerm) ATinsert(ATempty, t_20));
  t = lookup_table_0_1(d_21, t);
  n_21 = t;
  t = term_h_21;
  i_21 = t;
  t = (ATerm) ATinsert(ATempty, t_20);
  j_21 = t;
  t = n_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_7(i_21, j_21, m_21, t);
  t = v_20;
  t = if_verbose4_1_0(p_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(s_1, t);
  u_20 = t;
  t = term_g_21;
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_21, u_20);
  t = m_6(u_1, c_21, u_20, t);
  t = if_verbose6_1_0(v_1, t);
  t = term_g_21;
  w_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_21, (ATerm)ATmakeAppl(sym_Imported_1, t_20), (ATerm) ATempty);
  t = lookup_table_0_1(w_20, t);
  b_21 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, t_20);
  x_20 = t;
  t = (ATerm) ATempty;
  y_20 = t;
  t = b_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_7(x_20, y_20, a_21, t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_21, (ATerm)ATmakeAppl(sym_Imported_1, t_20), (ATerm) ATempty);
  t = if_verbose4_1_0(w_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm l_92 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
  v_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_22;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_22 = ATgetFirst((ATermList) t);
          x_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_7 = NULL,v_7 = NULL,w_7 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(v_22);
            p_7 = t;
            t = w_22;
            t = l_92(t);
            v_7 = t;
            t = x_22;
            t = filter_1_0(l_92, t);
            w_7 = t;
            t = (ATerm) ATinsert(CheckATermList(w_7), v_7);
            j_1 = t;
            t = SSLsetAnnotations(j_1, p_7);
            LocalPopChoice(l_21);
          }
        else
          {
            t = k_21;
            t = x_22;
            t = filter_1_0(l_92, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm t)
{
  static ATerm c_23 (ATerm t);
  static ATerm c_23 (ATerm t)
  {
    ATerm q_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_81(t);
        t = c_23(t);
        LocalPopChoice(t_21);
      }
    else
      {
        t = q_21;
        t = y_81(t);
      }
    return(t);
  }
  t = c_23(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm v_21 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_23 = NULL,e_23 = NULL;
      t = term_x_7;
      d_23 = t;
      t = term_g_22;
      e_23 = t;
      t = term_h_22;
      t = a_7(d_23, e_23, t);
      LocalPopChoice(f_22);
    }
  else
    {
      t = v_21;
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_23 = NULL;
            t = term_k_22;
            h_23 = t;
            t = SSL_getenv(h_23);
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_l_22;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL;
  t = term_g_21;
  r_23 = t;
  t = term_m_22;
  s_23 = t;
  t = term_n_22;
  t = a_7(r_23, s_23, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm o_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_22;
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
  t = term_p_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_23 = NULL;
  t = if_verbose5_1_0(a_2, t);
  k_23 = t;
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_23 = NULL,m_23 = NULL;
        t = term_g_21;
        l_23 = t;
        t = term_h_21;
        m_23 = t;
        t = term_s_22;
        t = a_7(l_23, m_23, t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        {
          ATerm o_23 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          o_23 = t;
          t = repeat_2_0(c_2, _id, t);
          t = o_23;
        }
      }
  }
  t = k_23;
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
  t = term_t_22;
  return(t);
}
static ATerm o_25 (ATerm y_23, ATerm t)
{
  ATerm e_24 = NULL,h_24 = NULL,j_24 = NULL;
  t = term_g_21;
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, y_23);
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATmakeAppl(sym_Tool_1, y_23));
  t = a_7(h_24, j_24, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_22 = ATgetFirst((ATermList) t);
      if(match_cons(u_22, sym__2))
        {
          ATerm z_22 = ATgetArgument(u_22, 0);
          e_24 = ATgetArgument(u_22, 1);
        }
      else
        _fail(t);
      {
        ATerm y_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_24;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_t_22;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_g_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm b_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
      t = if_verbose5_1_0(f_2, t);
      t = xtc_load_0_0(t);
      m_24 = t;
      if(match_cons(t, sym__2))
        {
          k_24 = ATgetArgument(t, 0);
          l_24 = ATgetArgument(t, 1);
          {
            ATerm g_23 = t;
            int i_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_24 = NULL,u_24 = NULL,y_24 = NULL;
                t = term_g_21;
                u_24 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, k_24);
                y_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATmakeAppl(sym_Tool_1, k_24));
                t = a_7(u_24, y_24, t);
                {
                  static ATerm h_2 (ATerm t);
                  static ATerm h_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((l_24 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((s_24 != NULL) && (s_24 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(h_2, t);
                }
                t = not_null(s_24);
                LocalPopChoice(i_23);
              }
            else
              {
                t = g_23;
                t = o_25(m_24, t);
              }
          }
        }
      else
        {
          t = o_25(m_24, t);
        }
      t = if_verbose5_1_0(i_2, t);
      LocalPopChoice(f_23);
    }
  else
    {
      t = b_23;
      {
        ATerm m_25 = NULL,g_8 = NULL,h_8 = NULL;
        m_25 = t;
        t = term_y_16;
        g_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_23), m_25), term_j_23);
        h_8 = t;
        t = SSL_printnl(g_8, h_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_23), m_25), term_j_23);
        t = if_verbose5_1_0(m_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm build_pp_tables_0_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL;
  t = term_p_23;
  t = xtc_find_0_0(t);
  q_25 = t;
  t = term_q_23;
  t = xtc_find_0_0(t);
  r_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_25), term_t_23), q_25), term_t_23);
  return(t);
}
static ATerm a_7 (ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm t_25 = NULL;
  t = lookup_table_0_1(g_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(h_47, t_25, t);
  return(t);
}
static ATerm u_6 (ATerm s_45, ATerm t_45, ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  y_25 = t;
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
        t = a_7(s_45, t_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_23 = ATgetFirst((ATermList) t);
            x_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_23);
        {
          ATerm a_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, s_45, t_45, x_25);
          t = lookup_table_0_1(s_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              a_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_7(t_45, x_25, a_26, t);
          t = (ATerm) ATmakeAppl(sym__3, s_45, t_45, x_25);
        }
      }
    else
      {
        t = u_23;
        {
          ATerm e_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
          t = lookup_table_0_1(s_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              e_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_6(t_45, e_26, t);
          t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
        }
      }
  }
  t = y_25;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_94 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,i_26 = NULL,j_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL;
  r_26 = t;
  t = o_94(t);
  j_26 = t;
  {
    ATerm x_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_26 = NULL;
        t = term_s_17;
        v_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_26, term_s_17);
        t = a_7(j_26, v_26, t);
        {
          ATerm a_24 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_24;
            }
        }
        LocalPopChoice(z_23);
      }
    else
      {
        t = x_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_26 = ATgetFirst((ATermList) t);
      g_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_26, term_s_17, g_26);
  t = lookup_table_0_1(j_26, t);
  u_26 = t;
  t = term_s_17;
  s_26 = t;
  t = u_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_7(s_26, g_26, t_26, t);
  t = i_26;
  {
    static ATerm r_2 (ATerm t);
    static ATerm r_2 (ATerm t)
    {
      ATerm y_26 = NULL;
      y_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_26, y_26);
      t = u_6(j_26, y_26, t);
      return(t);
    }
    t = map_1_0(r_2, t);
  }
  t = r_26;
  return(t);
}
ATerm restore_always_2_0 (ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm t)
{
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_98(t);
      t = h_98(t);
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
      t = h_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_94 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
  b_27 = t;
  t = n_94(t);
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_27, term_s_17);
  {
    ATerm d_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_24 = ATgetArgument(t, 0);
            ATerm i_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_17;
        q_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_27, term_s_17);
        t = a_7(a_27, q_27, t);
        LocalPopChoice(f_24);
      }
    else
      {
        t = d_24;
        t = (ATerm) ATempty;
      }
  }
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_27, term_s_17, (ATerm) ATinsert(CheckATermList(c_27), (ATerm) ATempty));
  t = lookup_table_0_1(a_27, t);
  i_27 = t;
  t = term_s_17;
  d_27 = t;
  t = (ATerm) ATinsert(CheckATermList(c_27), (ATerm) ATempty);
  g_27 = t;
  t = i_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_7(d_27, g_27, h_27, t);
  t = b_27;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_i_18;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm c_28 = NULL;
  c_28 = t;
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(c_28);
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        t = c_28;
      }
  }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_i_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  ATerm u_27 = NULL;
  static ATerm u_2 (ATerm t);
  static ATerm u_2 (ATerm t)
  {
    ATerm x_27 = NULL;
    x_27 = t;
    {
      ATerm p_24 = t;
      int q_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_27 = NULL,z_27 = NULL;
          t = term_i_18;
          y_27 = t;
          t = term_s_17;
          z_27 = t;
          t = term_r_24;
          t = a_7(y_27, z_27, t);
          LocalPopChoice(q_24);
        }
      else
        {
          t = p_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((u_27 != NULL) && (u_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          u_27 = ATgetFirst((ATermList) t);
        {
          ATerm t_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = u_27;
    t = map_1_0(v_2, t);
    t = x_27;
    t = end_scope_1_0(y_2, t);
    return(t);
  }
  t = begin_scope_1_0(t_2, t);
  t = restore_always_2_0(h_101, u_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,j_28 = NULL,l_28 = NULL;
  f_28 = t;
  t = term_l_18;
  t = whoami_0_0(t);
  g_28 = t;
  t = term_y_16;
  j_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_24), g_28), term_v_24);
  l_28 = t;
  t = SSL_printnl(j_28, l_28);
  t = term_v_8;
  h_28 = t;
  t = SSL_exit(h_28);
  t = f_28;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm n_28 = NULL;
  n_28 = t;
  if(match_string(t, "-k"))
    {
      t = n_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_28;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,s_28 = NULL;
  o_28 = t;
  t = SSL_string_to_int(o_28);
  p_28 = t;
  t = term_x_24;
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_24, p_28);
  t = d_7(s_28, p_28, t);
  t = o_28;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, b_3, g_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm u_28 = NULL;
  u_28 = t;
  if(match_string(t, "-S"))
    {
      t = u_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_28;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm v_28 = NULL,y_28 = NULL;
  t = term_r_18;
  v_28 = t;
  t = term_a_25;
  y_28 = t;
  t = term_b_25;
  t = d_7(v_28, y_28, t);
  t = term_e_25;
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
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL;
  z_28 = t;
  t = SSL_string_to_int(z_28);
  a_29 = t;
  t = term_r_18;
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_18, a_29);
  t = d_7(b_29, a_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_28);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_i_25;
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
  ATerm c_29 = NULL,d_29 = NULL;
  t = term_j_25;
  c_29 = t;
  t = term_l_18;
  d_29 = t;
  t = term_k_25;
  t = d_7(c_29, d_29, t);
  t = term_l_25;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_3, o_3, p_3, t);
      LocalPopChoice(s_25);
    }
  else
    {
      t = p_25;
      {
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_3, s_3, t_3, t);
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
            t = Option_3_0(u_3, v_3, x_3, t);
          }
      }
    }
  return(t);
}
static ATerm d_7 (ATerm s_50, ATerm t_50, ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL;
  t = term_x_7;
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_7, s_50, t_50);
  t = lookup_table_0_1(e_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_7(s_50, t_50, f_29, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_7, s_50, t_50);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_29 = NULL,m_29 = NULL,o_29 = NULL;
      t = term_l_18;
      t = h_0(t);
      l_29 = t;
      t = term_w_25;
      m_29 = t;
      t = term_z_25;
      o_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_25, term_z_25, l_29);
      t = b_7(m_29, o_29, l_29, t);
      _fail(t);
    }
  else
    {
      ATerm r_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_29 = ATgetFirst((ATermList) t);
          k_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_29;
      t = d_0(t);
      t = term_l_18;
      t = g_0(t);
      r_29 = t;
      t = (ATerm) ATinsert(CheckATermList(k_29), r_29);
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm t_29 = NULL;
  t_29 = t;
  if(match_string(t, "-o"))
    {
      t = t_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_29;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL;
  w_29 = t;
  t = term_y_7;
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, w_29);
  t = d_7(x_29, w_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_29);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, c_4, e_4, t);
  return(t);
}
static ATerm b_7 (ATerm n_45, ATerm o_45, ATerm m_45, ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL;
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_26 = ATgetArgument(t, 0);
            ATerm h_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
        t = a_7(n_45, o_45, t);
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        t = (ATerm) ATempty;
      }
  }
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_45, o_45, (ATerm) ATinsert(CheckATermList(i_30), m_45));
  t = lookup_table_0_1(n_45, t);
  l_30 = t;
  t = (ATerm) ATinsert(CheckATermList(i_30), m_45);
  j_30 = t;
  t = l_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_7(o_45, j_30, k_30, t);
  t = h_30;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,a_31 = NULL,b_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
      t = term_l_18;
      t = p_0(t);
      c_31 = t;
      t = term_w_25;
      d_31 = t;
      t = term_z_25;
      e_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_25, term_z_25, c_31);
      t = b_7(d_31, e_31, c_31, t);
      _fail(t);
    }
  else
    {
      ATerm j_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_30 = ATgetFirst((ATermList) t);
          x_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_31 = ATgetFirst((ATermList) t);
          b_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_30;
      t = m_0(t);
      t = a_31;
      t = o_0(t);
      j_31 = t;
      t = (ATerm) ATinsert(CheckATermList(b_31), j_31);
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm l_31 = NULL;
  l_31 = t;
  if(match_string(t, "-i"))
    {
      t = l_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_31;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm m_31 = NULL,p_31 = NULL;
  m_31 = t;
  t = term_o_18;
  p_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_18, m_31);
  t = d_7(p_31, m_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_31);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, j_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_18;
  t = whoami_0_0(t);
  q_31 = t;
  t = term_y_16;
  s_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_26), q_31);
  t_31 = t;
  t = SSL_printnl(s_31, t_31);
  t = term_v_8;
  r_31 = t;
  t = SSL_exit(r_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL;
  t = term_x_7;
  u_31 = t;
  t = term_m_26;
  v_31 = t;
  t = term_n_26;
  t = a_7(u_31, v_31, t);
  return(t);
}
static ATerm v_6 (ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm o_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_33, w_33);
      LocalPopChoice(p_26);
    }
  else
    {
      t = o_26;
      t = SSL_addr(v_33, w_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm t)
{
  ATerm x_31 = NULL,a_32 = NULL,d_32 = NULL;
  x_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_31;
      t = h_91(t);
    }
  else
    {
      ATerm g_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_32 = ATgetFirst((ATermList) t);
          d_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_32;
      t = foldr_2_0(h_91, i_91, t);
      g_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_32, g_32);
      t = i_91(t);
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
  t = term_a_25;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL;
  if(match_cons(t, sym__2))
    {
      y_8 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(y_8, z_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_32 = NULL,s_8 = NULL,t_8 = NULL;
  t = times_0_0(t);
  t_8 = t;
  t = SSL_explode_term(t_8);
  if(match_cons(t, sym__2))
    {
      ATerm q_26 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_8;
  t = foldr_2_0(k_4, m_4, t);
  l_32 = t;
  t = SSL_TicksToSeconds(l_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,g_33 = NULL;
  d_33 = t;
  if(match_cons(t, sym__2))
    {
      e_33 = ATgetArgument(t, 0);
      g_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_33;
        if((e_33 != t))
          {
            _fail(t);
          }
        t = d_33;
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        t = (ATerm) ATmakeAppl(sym__2, e_33, g_33);
        {
          ATerm z_26 = t;
          int e_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_33, g_33);
              LocalPopChoice(e_27);
            }
          else
            {
              t = z_26;
              t = SSL_gtr(e_33, g_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_33, g_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  ATerm p_33 = NULL;
  p_33 = t;
  {
    ATerm f_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_33 = NULL,x_33 = NULL,y_33 = NULL;
        t = term_x_7;
        x_33 = t;
        t = term_r_18;
        y_33 = t;
        t = term_u_18;
        t = a_7(x_33, y_33, t);
        s_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_33, term_v_8);
        t = geq_0_0(t);
        t = p_33;
        t = s_98(t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = f_27;
        t = p_33;
      }
  }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,j_34 = NULL,k_34 = NULL;
  t = run_time_0_0(t);
  d_34 = t;
  t = term_l_18;
  t = whoami_0_0(t);
  e_34 = t;
  t = term_y_16;
  j_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_27), d_34), term_m_8), e_34);
  k_34 = t;
  t = SSL_printnl(j_34, k_34);
  t = (ATerm) ATmakeAppl(sym__2, term_y_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_27), d_34), term_m_8), e_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_25;
  l_34 = t;
  t = SSL_exit(l_34);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm m_35 = NULL,p_35 = NULL;
  p_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_35 = ATgetArgument(t, 0);
          {
            ATerm x_9 = NULL,t_1 = NULL;
            t = SSLgetAnnotations(p_35);
            x_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_35);
            t_1 = t;
            t = SSLsetAnnotations(t_1, x_9);
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
ATerm need_help_1_0 (ATerm x_102 (ATerm), ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_34 = NULL,t_34 = NULL;
      t = term_x_7;
      q_34 = t;
      t = term_n_27;
      t_34 = t;
      t = term_o_27;
      t = a_7(q_34, t_34, t);
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      t = fetch_1_0(p_4, t);
    }
  t = x_102(t);
  return(t);
}
static ATerm e_7 (ATerm f_50, ATerm g_50, ATerm h_50, ATerm t)
{
  ATerm r_35 = NULL;
  t = SSL_hashtable_put(h_50, f_50, g_50);
  r_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_35);
  return(t);
}
static ATerm f_7 (ATerm i_50, ATerm j_50, ATerm t)
{
  t = SSL_hashtable_get(j_50, i_50);
  return(t);
}
ATerm lookup_table_0_1 (ATerm z_46, ATerm t)
{
  ATerm a_36 = NULL;
  t = table_hashtable_0_0(t);
  a_36 = t;
  {
    ATerm p_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_10 = NULL;
        t = a_36;
        if(match_cons(t, sym_Hashtable_1))
          {
            m_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_7(z_46, m_10, t);
        LocalPopChoice(r_27);
      }
    else
      {
        t = p_27;
        {
          ATerm t_10 = NULL;
          t = z_46;
          t = table_create_0_0(t);
          t = a_36;
          if(match_cons(t, sym_Hashtable_1))
            {
              t_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_7(z_46, t_10, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm n_50, ATerm o_50, ATerm t)
{
  ATerm d_36 = NULL;
  t = SSL_hashtable_create(n_50, o_50);
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_36);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,i_36 = NULL,j_36 = NULL;
  e_36 = t;
  t = term_s_27;
  i_36 = t;
  t = term_t_27;
  j_36 = t;
  t = e_36;
  t = new_hashtable_0_2(i_36, j_36, t);
  f_36 = t;
  t = e_36;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_7(e_36, f_36, g_36, t);
  t = e_36;
  return(t);
}
static ATerm x_6 (ATerm k_50, ATerm l_50, ATerm t)
{
  ATerm k_36 = NULL;
  t = SSL_hashtable_remove(l_50, k_50);
  k_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_36);
  return(t);
}
static ATerm y_6 (ATerm p_50, ATerm t)
{
  ATerm l_36 = NULL;
  t = SSL_hashtable_destroy(p_50);
  l_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_36);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm m_36 = NULL;
  t = SSL_table_hashtable();
  m_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_36);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
  n_36 = t;
  t = table_hashtable_0_0(t);
  o_36 = t;
  t = lookup_table_0_1(n_36, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(q_36, t);
  t = o_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(n_36, p_36, t);
  t = n_36;
  return(t);
}
ATerm map_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  static ATerm f_37 (ATerm t);
  static ATerm f_37 (ATerm t)
  {
    ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
    c_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_37;
      }
    else
      {
        ATerm b_11 = NULL,h_11 = NULL,i_11 = NULL,y_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_37 = ATgetFirst((ATermList) t);
            e_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_37);
        b_11 = t;
        t = d_37;
        t = t_83(t);
        h_11 = t;
        t = e_37;
        t = f_37(t);
        i_11 = t;
        t = (ATerm) ATinsert(CheckATermList(i_11), h_11);
        y_1 = t;
        t = SSLsetAnnotations(y_1, b_11);
      }
    return(t);
  }
  t = f_37(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_37 = ATgetFirst((ATermList) t);
      j_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_37 = NULL,o_37 = NULL;
        static ATerm q_4 (ATerm t);
        static ATerm q_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_37)), not_null(o_37));
          return(t);
        }
        t = j_37;
        t = l_0(t);
        if(((n_37 != NULL) && (n_37 != t)))
          _fail(t);
        else
          n_37 = t;
        t = i_37;
        t = j_0(t);
        if(((o_37 != NULL) && (o_37 != t)))
          _fail(t);
        else
          o_37 = t;
        t = j_37;
        t = reverse_acc_2_0(j_0, q_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_18;
      t = l_0(t);
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,n_2 = NULL;
  b_38 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_38);
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_38);
  n_2 = t;
  t = SSLsetAnnotations(n_2, z_37);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm d_38 = NULL;
  d_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_38), term_v_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL;
  ATerm w_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_37 = NULL,y_37 = NULL;
      t = term_x_7;
      v_37 = t;
      t = term_m_26;
      y_37 = t;
      t = term_n_26;
      t = a_7(v_37, y_37, t);
      LocalPopChoice(a_28);
    }
  else
    {
      t = w_27;
      t = fetch_1_0(s_4, t);
    }
  t = term_b_28;
  t = echo_0_0(t);
  t = term_w_25;
  t_37 = t;
  t = term_z_25;
  u_37 = t;
  t = term_d_28;
  t = a_7(t_37, u_37, t);
  t = reverse_acc_2_0(_id, v_4, t);
  t = map_1_0(w_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  static ATerm a_39 (ATerm t);
  static ATerm a_39 (ATerm t)
  {
    ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
    x_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_38 = ATgetFirst((ATermList) t);
        z_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_28 = t;
      int i_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_12 = NULL,j_12 = NULL,p_2 = NULL;
          t = SSLgetAnnotations(x_38);
          d_12 = t;
          t = y_38;
          t = d_84(t);
          j_12 = t;
          t = (ATerm) ATinsert(CheckATermList(z_38), j_12);
          p_2 = t;
          t = SSLsetAnnotations(p_2, d_12);
          LocalPopChoice(i_28);
        }
      else
        {
          t = e_28;
          {
            ATerm y_12 = NULL,c_13 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(x_38);
            y_12 = t;
            t = z_38;
            t = a_39(t);
            c_13 = t;
            t = (ATerm) ATinsert(CheckATermList(c_13), y_38);
            x_2 = t;
            t = SSLsetAnnotations(x_2, y_12);
          }
        }
    }
    return(t);
  }
  t = a_39(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  e_39 = t;
  {
    ATerm k_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_39;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_28 = ATgetFirst((ATermList) t);
                ATerm r_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_39;
          }
        LocalPopChoice(m_28);
      }
    else
      {
        t = k_28;
        t = (ATerm) ATinsert(ATempty, e_39);
      }
  }
  f_39 = t;
  t = term_a_8;
  g_39 = t;
  t = SSL_printnl(g_39, f_39);
  t = e_39;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL;
  t = term_x_7;
  k_39 = t;
  t = term_m_26;
  l_39 = t;
  t = term_n_26;
  t = a_7(k_39, l_39, t);
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
  ATerm m_39 = NULL,n_39 = NULL;
  t = term_t_28;
  m_39 = t;
  t = term_l_18;
  n_39 = t;
  t = term_w_28;
  t = d_7(m_39, n_39, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_x_28;
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
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL;
  t = term_t_28;
  q_39 = t;
  t = term_l_18;
  r_39 = t;
  t = term_w_28;
  t = d_7(q_39, r_39, t);
  t = term_g_29;
  o_39 = t;
  t = term_l_18;
  p_39 = t;
  t = term_h_29;
  t = d_7(o_39, p_39, t);
  t = term_i_29;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_n_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_4, a_5, b_5, t);
      LocalPopChoice(q_29);
    }
  else
    {
      t = p_29;
      t = Option_3_0(d_5, e_5, h_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_70 (ATerm), ATerm n_70 (ATerm), ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,w_3 = NULL;
  x_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_39 = ATgetFirst((ATermList) t);
      u_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_39);
  s_39 = t;
  t = t_39;
  t = m_70(t);
  v_39 = t;
  t = u_39;
  t = n_70(t);
  w_39 = t;
  t = (ATerm) ATinsert(CheckATermList(w_39), v_39);
  w_3 = t;
  t = SSLsetAnnotations(w_3, s_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_104 (ATerm), ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,h_40 = NULL,i_40 = NULL,y_3 = NULL;
  c_40 = t;
  {
    ATerm s_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_29;
        t = v_104(t);
        LocalPopChoice(u_29);
      }
    else
      {
        t = s_29;
      }
  }
  t = c_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_40 = ATgetFirst((ATermList) t);
      f_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_40);
  d_40 = t;
  t = term_m_26;
  i_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_26, e_40);
  t = d_7(i_40, e_40, t);
  t = f_40;
  {
    static ATerm s_40 (ATerm t);
    static ATerm s_40 (ATerm t)
    {
      ATerm y_29 = t;
      int z_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_30 = t;
          int b_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_40 = NULL;
              l_40 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_40;
              LocalPopChoice(b_30);
            }
          else
            {
              t = a_30;
              t = v_104(t);
              t = Cons_2_0(_id, s_40, t);
            }
          LocalPopChoice(z_29);
        }
      else
        {
          t = y_29;
          {
            ATerm o_40 = NULL,p_40 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_40 = ATgetFirst((ATermList) t);
                p_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_40), (ATerm) ATmakeAppl(sym_Undefined_1, o_40));
          }
        }
      return(t);
    }
    t = s_40(t);
  }
  h_40 = t;
  t = (ATerm) ATinsert(CheckATermList(h_40), (ATerm) ATmakeAppl(sym_Program_1, e_40));
  y_3 = t;
  t = SSLsetAnnotations(y_3, d_40);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm f_41 = NULL;
  f_41 = t;
  if(match_string(t, "--help"))
    {
      t = f_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_41;
        }
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL;
  t = term_n_27;
  g_41 = t;
  t = term_l_18;
  h_41 = t;
  t = term_c_30;
  t = d_7(g_41, h_41, t);
  t = term_d_30;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_e_30;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL;
  z_40 = t;
  t = term_w_25;
  a_41 = t;
  t = term_f_30;
  t = lookup_table_0_1(a_41, t);
  e_41 = t;
  t = term_z_25;
  b_41 = t;
  t = (ATerm) ATempty;
  c_41 = t;
  t = e_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_7(b_41, c_41, d_41, t);
  t = z_40;
  {
    static ATerm i_5 (ATerm t);
    static ATerm i_5 (ATerm t)
    {
      ATerm g_30 = t;
      int m_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_104(t);
          LocalPopChoice(m_30);
        }
      else
        {
          t = g_30;
          {
            ATerm n_30 = t;
            int o_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_5, k_5, l_5, t);
                LocalPopChoice(o_30);
              }
            else
              {
                t = n_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_5, t);
  }
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_41 = NULL;
        s_41 = t;
        {
          ATerm r_30 = t;
          int s_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_13 = NULL;
              t = s_41;
              {
                ATerm t_30 = t;
                int u_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_13 = NULL,b_14 = NULL;
                    t = term_x_7;
                    z_13 = t;
                    t = term_n_27;
                    b_14 = t;
                    t = term_o_27;
                    t = a_7(z_13, b_14, t);
                    LocalPopChoice(u_30);
                  }
                else
                  {
                    t = t_30;
                    t = fetch_1_0(m_5, t);
                  }
              }
              t = s_41;
              t = default_system_usage_0_0(t);
              t = term_a_25;
              s_13 = t;
              t = SSL_exit(s_13);
              LocalPopChoice(s_30);
            }
          else
            {
              t = r_30;
              {
                ATerm p_14 = NULL,w_14 = NULL,x_14 = NULL;
                t = term_x_7;
                w_14 = t;
                t = term_t_28;
                x_14 = t;
                t = term_v_30;
                t = a_7(w_14, x_14, t);
                t = s_41;
                t = default_system_about_0_0(t);
                t = term_a_25;
                p_14 = t;
                t = SSL_exit(p_14);
              }
            }
        }
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
        {
          ATerm y_30 = t;
          int z_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL;
              static ATerm n_5 (ATerm t);
              static ATerm n_5 (ATerm t)
              {
                ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL,a_4 = NULL;
                y_41 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_41 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_41);
                w_41 = t;
                t = x_41;
                if(((x_40 != NULL) && (x_40 != t)))
                  _fail(t);
                else
                  x_40 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_41);
                a_4 = t;
                t = SSLsetAnnotations(a_4, w_41);
                return(t);
              }
              t = fetch_1_0(n_5, t);
              t = term_y_16;
              u_41 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_40)), term_f_31);
              v_41 = t;
              t = SSL_printnl(u_41, v_41);
              t = (ATerm) ATmakeAppl(sym__2, term_y_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_40)), term_f_31));
              t = default_system_usage_0_0(t);
              t = term_v_8;
              t_41 = t;
              t = SSL_exit(t_41);
              LocalPopChoice(z_30);
            }
          else
            {
              t = y_30;
            }
        }
      }
  }
  y_40 = t;
  t = term_w_25;
  t = table_destroy_0_0(t);
  t = y_40;
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
  t = parse_options_1_0(z_102, t);
  d_42 = t;
  t = term_g_31;
  t = table_create_0_0(t);
  t = term_g_31;
  e_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_31, term_h_31, d_42);
  t = lookup_table_0_1(e_42, t);
  h_42 = t;
  t = term_h_31;
  f_42 = t;
  t = h_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_7(f_42, d_42, g_42, t);
  t = d_42;
  t = b_103(t);
  {
    ATerm i_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_103, t);
        LocalPopChoice(k_31);
      }
    else
      {
        t = i_31;
        {
          ATerm n_31 = t;
          int o_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(o_31);
            }
          else
            {
              t = n_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm w_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(y_31);
    }
  else
    {
      t = w_31;
      {
        ATerm z_31 = t;
        int b_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(b_32);
          }
        else
          {
            t = z_31;
            {
              ATerm c_32 = t;
              int e_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(q_5, r_5, t_5, t);
                  LocalPopChoice(e_32);
                }
              else
                {
                  t = c_32;
                  {
                    ATerm f_32 = t;
                    int h_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(h_32);
                      }
                    else
                      {
                        t = f_32;
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
  ATerm p_42 = NULL,q_42 = NULL;
  t = term_i_32;
  p_42 = t;
  t = term_l_18;
  q_42 = t;
  t = term_j_32;
  t = d_7(p_42, q_42, t);
  t = term_k_32;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_m_32;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm n_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
      t = term_x_7;
      t_42 = t;
      t = term_o_18;
      u_42 = t;
      t = term_p_32;
      t = a_7(t_42, u_42, t);
      s_42 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_42);
      LocalPopChoice(o_32);
    }
  else
    {
      t = n_32;
      t = term_d_8;
    }
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_43 = NULL,b_43 = NULL;
        b_43 = t;
        if(match_cons(t, sym_FILE_1))
          {
            a_43 = ATgetArgument(t, 0);
            {
              ATerm g_15 = NULL,d_4 = NULL;
              t = SSLgetAnnotations(b_43);
              g_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_43);
              d_4 = t;
              t = SSLsetAnnotations(d_4, g_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_43;
          }
        LocalPopChoice(t_32);
        t = xtc_transform_file_2_0(v_5, w_5, t);
      }
    else
      {
        t = s_32;
        t = xtc_transform_term_2_0(x_5, y_5, t);
      }
  }
  {
    ATerm u_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_43 = NULL,i_43 = NULL;
        i_43 = t;
        if(match_cons(t, sym_FILE_1))
          {
            h_43 = ATgetArgument(t, 0);
            {
              ATerm u_15 = NULL,f_4 = NULL;
              t = SSLgetAnnotations(i_43);
              u_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_43);
              f_4 = t;
              t = SSLsetAnnotations(f_4, u_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_43;
          }
        LocalPopChoice(v_32);
        t = xtc_transform_file_2_0(z_5, build_pp_tables_0_0, t);
      }
    else
      {
        t = u_32;
        t = xtc_transform_term_2_0(a_6, build_pp_tables_0_0, t);
      }
  }
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_43 = NULL,p_43 = NULL;
        p_43 = t;
        if(match_cons(t, sym_FILE_1))
          {
            o_43 = ATgetArgument(t, 0);
            {
              ATerm d_16 = NULL,g_4 = NULL;
              t = SSLgetAnnotations(p_43);
              d_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_43);
              g_4 = t;
              t = SSLsetAnnotations(g_4, d_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_43;
          }
        LocalPopChoice(x_32);
        t = xtc_transform_file_2_0(b_6, c_6, t);
      }
    else
      {
        t = w_32;
        t = xtc_transform_term_2_0(w_6, z_6, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_y_32;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_y_32;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_z_32;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_z_32;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_a_33;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_a_33;
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
