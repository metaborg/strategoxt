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
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_x_32;
ATerm term_s_32;
ATerm term_q_32;
ATerm term_m_32;
ATerm term_f_32;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_f_31;
ATerm term_p_30;
ATerm term_n_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_c_30;
ATerm term_r_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_z_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_o_27;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_f_26;
ATerm term_b_26;
ATerm term_z_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_i_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_a_25;
ATerm term_x_24;
ATerm term_u_23;
ATerm term_s_23;
ATerm term_j_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_y_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_l_21;
ATerm term_e_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_r_20;
ATerm term_i_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_f_18;
ATerm term_y_17;
ATerm term_o_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_j_15;
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
ATerm term_x_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_m_8;
ATerm term_i_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_v_7;
ATerm term_t_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_v_7);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_m_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_9, term_s_8, term_m_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_9, term_q_9, term_r_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_9, term_u_9, term_v_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_10, term_c_10, term_d_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_10, term_g_10, term_j_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_n_10, term_o_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_u_10, term_v_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_11, term_c_11, term_f_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_o_11, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_t_11, term_v_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_e_12, term_g_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_n_12, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_t_12, term_u_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_g_13, term_i_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_n_13, term_o_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_w_13, term_y_13);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_f_14, term_g_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_z_14, term_a_15);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_e_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_i_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_p_15, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_u_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_y_15, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_e_16, term_f_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_k_16, term_l_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_p_16, term_q_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_w_16, term_x_16);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_p_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym__2, term_r_21, term_v_22);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__2, term_r_21, term_s_21);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_y_17);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_m_8, term_k_25);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_25);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_n_18);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_q_26);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_r_27);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym__2, term_z_25, term_b_26);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym__2, term_x_28, term_n_18);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym__2, term_j_29, term_n_18);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_r_27, term_n_18);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym__3, term_z_25, term_b_26, (ATerm) ATempty);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_x_28);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym__2, term_f_32, term_n_18);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym__2, term_t_7, term_o_18);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.pp.af", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm v_6 (ATerm t_14, ATerm u_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm e_6 (ATerm g_29, ATerm h_29, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm n_6 (ATerm t_17, ATerm u_17, ATerm t);
static ATerm q_6 (ATerm z_78 (ATerm), ATerm w_181, ATerm d_18, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm t);
static ATerm r_6 (ATerm l_14, ATerm m_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm c_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm o_77 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm h_100 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm h_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm q_10 (ATerm y_9, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm t_6 (ATerm d_93 (ATerm), ATerm o_30, ATerm m_30, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm x_78 (ATerm), ATerm t);
static ATerm f_6 (ATerm p_45, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm i_97 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm h_97 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm j_97 (ATerm), ATerm t);
static ATerm h_6 (ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t);
static ATerm i_6 (ATerm b_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm j_6 (ATerm n_41, ATerm o_41, ATerm p_41, ATerm t);
static ATerm k_6 (ATerm l_97 (ATerm), ATerm x_41, ATerm w_41, ATerm t);
static ATerm m_6 (ATerm y_46, ATerm z_46, ATerm t);
static ATerm e_18 (ATerm l_17, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_6 (ATerm z_17, ATerm t);
static ATerm u_6 (ATerm g_63, ATerm h_63, ATerm t);
static ATerm o_6 (ATerm h_47, ATerm i_47, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm k_20 (ATerm t_18, ATerm t);
static ATerm l_20 (ATerm z_18, ATerm c_19, ATerm d_19, ATerm t);
static ATerm m_20 (ATerm u_19, ATerm v_19, ATerm w_19, ATerm t);
static ATerm p_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_92 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm v_25 (ATerm i_24, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm c_7 (ATerm j_42, ATerm k_42, ATerm t);
static ATerm w_6 (ATerm v_40, ATerm w_40, ATerm t);
ATerm end_scope_1_0 (ATerm a_93 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm z_92 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm t_99 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_7 (ATerm v_45, ATerm w_45, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_7 (ATerm q_40, ATerm r_40, ATerm p_40, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_6 (ATerm a_29, ATerm b_29, ATerm t);
ATerm foldr_2_0 (ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_97 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm need_help_1_0 (ATerm j_101 (ATerm), ATerm t);
static ATerm g_7 (ATerm i_45, ATerm j_45, ATerm k_45, ATerm t);
static ATerm h_7 (ATerm l_45, ATerm m_45, ATerm t);
ATerm lookup_table_0_1 (ATerm c_42, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_45, ATerm r_45, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm z_6 (ATerm n_45, ATerm o_45, ATerm t);
static ATerm a_7 (ATerm s_45, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm h_103 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm parse_options_1_0 (ATerm g_103 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm io_pp_box_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL;
  u_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = u_1;
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
        t = (ATerm) ATmakeAppl(sym__2, v_1, e_0);
        t = v_6(v_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
        LocalPopChoice(l_7);
      }
    else
      {
        t = k_7;
        {
          ATerm m_7 = t;
          int n_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_0 = NULL;
              t = u_1;
              t = q_0(t);
              w_0 = t;
              {
                ATerm o_7 = t;
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
                            if((v_1 != t))
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
                    t = o_7;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, v_1, w_0);
              t = v_6(v_1, w_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
              LocalPopChoice(n_7);
            }
          else
            {
              t = m_7;
              t = u_1;
              t = q_0(t);
              if((v_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
            }
        }
      }
  }
  return(t);
}
static ATerm v_6 (ATerm t_14, ATerm u_14, ATerm t)
{
  t = SSL_copy(t_14, u_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm q_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 = NULL,s_2 = NULL;
      t = term_t_7;
      r_2 = t;
      t = term_v_7;
      s_2 = t;
      t = term_b_8;
      t = c_7(r_2, s_2, t);
      LocalPopChoice(s_7);
    }
  else
    {
      t = q_7;
      t = term_c_8;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_1 = NULL,l_1 = NULL;
      t = term_v_7;
      {
        ATerm e_8 = t;
        int h_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 = NULL,n_1 = NULL;
            t = term_t_7;
            m_1 = t;
            t = term_v_7;
            n_1 = t;
            t = term_b_8;
            t = c_7(m_1, n_1, t);
            LocalPopChoice(h_8);
          }
        else
          {
            t = e_8;
            t = term_c_8;
          }
      }
      f_1 = t;
      t = term_i_8;
      l_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_i_8, f_1);
      t = v_6(l_1, f_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm j_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm e_6 (ATerm g_29, ATerm h_29, ATerm t)
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(g_29, h_29);
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
      t = SSL_subtr(g_29, h_29);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL;
  t = term_m_8;
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_3 = NULL,c_3 = NULL;
        t = term_t_7;
        b_3 = t;
        t = term_m_8;
        c_3 = t;
        t = term_r_8;
        t = c_7(b_3, c_3, t);
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        t = term_s_8;
      }
  }
  y_2 = t;
  t = term_s_8;
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, term_s_8);
  t = e_6(y_2, a_3, t);
  z_2 = t;
  t = SSL_int_to_string(z_2);
  x_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_2), term_m_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm h_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_i_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm m_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          h_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_t_8);
      m_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_3, (ATerm) ATinsert(ATempty, term_t_8));
      t = m_6(h_3, m_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm n_6 (ATerm t_17, ATerm u_17, ATerm t)
{
  ATerm n_3 = NULL;
  t = SSL_write_term_to_stream_baf(t_17, u_17);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_3);
  return(t);
}
static ATerm q_6 (ATerm z_78 (ATerm), ATerm w_181, ATerm d_18, ATerm t)
{
  ATerm p_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_181, term_w_8);
  t = p_6(t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, d_18);
  t = z_78(t);
  t = fclose_0_0(t);
  t = d_18;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_8 = ATgetArgument(t, 0);
      if(match_cons(x_8, sym_Stream_1))
        {
          t_3 = ATgetArgument(x_8, 0);
        }
      else
        _fail(t);
      u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(t_3, u_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,s_3 = NULL;
  s_3 = t;
  t = xtc_new_file_0_0(t);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_3, s_3);
  t = q_6(b_0, q_3, s_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_3);
  t = xtc_transform_file_2_0(g_99, h_99, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm r_6 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_execvp(l_14, m_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,c_5 = NULL;
  w_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_4 = ATgetArgument(t, 0);
      {
        ATerm s_1 = NULL,t_1 = NULL;
        t = SSL_int_to_string(x_4);
        s_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_8), s_1), term_y_8);
        t_1 = t;
        t = SSL_concat_strings(t_1);
      }
    }
  else
    {
      ATerm l_2 = NULL,m_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_4 = ATgetArgument(t, 0);
          y_4 = ATgetArgument(t, 1);
          c_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_4);
      l_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_5), term_b_9), l_2), term_a_9), x_4);
      m_2 = t;
      t = SSL_concat_strings(m_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm c_84 (ATerm), ATerm t)
{
  ATerm g_5 = NULL;
  static ATerm c_0 (ATerm t)
  {
    t = c_84(t);
    if(((g_5 != NULL) && (g_5 != t)))
      _fail(t);
    else
      g_5 = t;
    return(t);
  }
  t = fetch_1_0(c_0, t);
  t = not_null(g_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm h_5 = NULL;
  h_5 = t;
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm f_9 = ATgetArgument(t, 0);
              if((h_5 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_16), term_r_16), term_n_16), term_g_16), term_b_16), term_v_15), term_r_15), term_j_15), term_f_15), term_b_15), term_x_14), term_o_14), term_c_14), term_p_13), term_k_13), term_w_12), term_p_12), term_k_12), term_a_12), term_q_11), term_l_11), term_z_10), term_p_10), term_l_10), term_e_10), term_w_9), term_s_9), term_n_9);
        t = fetch_elem_1_0(f_0, t);
        LocalPopChoice(d_9);
      }
    else
      {
        t = c_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, h_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm o_5 = NULL,b_7 = NULL;
  o_5 = t;
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_17 = ATgetArgument(t, 0);
            b_7 = ATgetArgument(t, 1);
            {
              ATerm c_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(a_17);
        {
          ATerm d_17 = t;
          int e_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_3 = NULL,k_3 = NULL,l_3 = NULL;
              t = b_7;
              {
                ATerm f_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_17;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              g_3 = t;
              t = term_g_17;
              k_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, g_3), term_h_17);
              l_3 = t;
              t = SSL_printnl(k_3, l_3);
              t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATempty, g_3), term_h_17));
              LocalPopChoice(e_17);
            }
          else
            {
              t = d_17;
              t = o_5;
            }
        }
      }
    else
      {
        t = z_16;
        t = o_5;
      }
  }
  t = o_5;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm o_77 (ATerm), ATerm t)
{
  ATerm p_7 = NULL,u_7 = NULL;
  u_7 = t;
  t = fork_0_0(t);
  p_7 = t;
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = u_7;
        t = o_77(t);
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        t = SSL_waitpid(p_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm k_17 = ATgetArgument(t, 0);
            if(((ATgetType(k_17) != AT_INT) || (ATgetInt((ATermInt) k_17) != 0)))
              _fail(t);
            {
              ATerm m_17 = ATgetArgument(t, 1);
            }
            {
              ATerm n_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_7;
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
      t = r_6(w_7, z_7, t);
      t = term_o_17;
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
  static ATerm o_9 (ATerm t)
  {
    ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
    j_9 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_9 = ATgetFirst((ATermList) t);
        i_9 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_3 = NULL,e_4 = NULL,v_0 = NULL;
          t = SSLgetAnnotations(j_9);
          x_3 = t;
          t = i_9;
          t = o_9(t);
          e_4 = t;
          t = (ATerm) ATinsert(CheckATermList(e_4), h_9);
          v_0 = t;
          t = SSLsetAnnotations(v_0, x_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_9;
        t = h_84(t);
      }
    return(t);
  }
  t = o_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_8 = NULL,f_8 = NULL,g_8 = NULL;
  d_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_8;
    }
  else
    {
      static ATerm k_0 (ATerm t)
      {
        t = not_null(g_8);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_8 = ATgetFirst((ATermList) t);
          if(((g_8 != NULL) && (g_8 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_8;
      t = at_end_1_0(k_0, t);
    }
  return(t);
}
static ATerm q_10 (ATerm y_9, ATerm t)
{
  ATerm z_9 = NULL;
  t = SSL_explode_term(y_9);
  if(match_cons(t, sym__2))
    {
      ATerm p_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_17) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm b_10 = NULL,h_10 = NULL,i_10 = NULL;
  i_10 = t;
  if(match_cons(t, sym__2))
    {
      b_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
      {
        ATerm q_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_0 (ATerm t)
            {
              t = h_10;
              return(t);
            }
            t = b_10;
            t = at_end_1_0(n_0, t);
            LocalPopChoice(r_17);
          }
        else
          {
            t = q_17;
            t = q_10(i_10, t);
          }
      }
    }
  else
    {
      t = q_10(i_10, t);
    }
  return(t);
}
static ATerm t_6 (ATerm d_93 (ATerm), ATerm o_30, ATerm m_30, ATerm t)
{
  ATerm r_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
  y_10 = t;
  t = d_93(t);
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_10, o_30, m_30);
  t = d_7(r_10, o_30, m_30, t);
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_11 = NULL;
        t = term_y_17;
        k_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_10, term_y_17);
        t = c_7(r_10, k_11, t);
        {
          ATerm a_18 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_18;
            }
        }
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_10 = ATgetFirst((ATermList) t);
      x_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_10, term_y_17, (ATerm) ATinsert(CheckATermList(x_10), (ATerm) ATinsert(CheckATermList(w_10), o_30)));
  t = lookup_table_0_1(r_10, t);
  j_11 = t;
  t = term_y_17;
  g_11 = t;
  t = (ATerm) ATinsert(CheckATermList(x_10), (ATerm) ATinsert(CheckATermList(w_10), o_30));
  h_11 = t;
  t = j_11;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(g_11, h_11, i_11, t);
  t = y_10;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm m_11 = NULL;
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_11 = NULL,s_4 = NULL;
      s_11 = t;
      t = term_f_18;
      s_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_11, term_f_18);
      t = u_6(s_11, s_4, t);
      m_11 = t;
      t = SSL_mkstemp(m_11);
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
      {
        ATerm u_11 = NULL;
        t = term_k_18;
        u_11 = t;
        t = SSL_perror(u_11);
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
  t = term_l_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,c_12 = NULL;
  t = P__tmpdir_0_0(t);
  z_11 = t;
  t = term_m_18;
  c_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_11, term_m_18);
  t = u_6(z_11, c_12, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      x_11 = ATgetArgument(t, 0);
      w_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_n_18;
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_11, term_n_18);
  t = t_6(s_0, x_11, y_11, t);
  t = SSL_close(w_11);
  t = x_11;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm f_12 = NULL,h_12 = NULL;
  f_12 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm j_12 = NULL,l_12 = NULL;
      t = f_12;
      t = xtc_new_file_0_0(t);
      j_12 = t;
      t = t_0(t);
      l_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_12, (ATerm) ATinsert(ATinsert(ATempty, j_12), term_v_7));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_12);
    }
  else
    {
      ATerm r_12 = NULL,s_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          h_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_12;
      t = xtc_new_file_0_0(t);
      r_12 = t;
      t = t_0(t);
      s_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_12), term_v_7), h_12), term_o_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_12);
    }
  return(t);
}
ATerm debug_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm x_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  x_12 = t;
  t = x_78(t);
  z_12 = t;
  t = term_g_17;
  a_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_12), z_12);
  b_13 = t;
  t = SSL_printnl(a_13, b_13);
  t = x_12;
  return(t);
}
static ATerm f_6 (ATerm p_45, ATerm t)
{
  t = SSL_hashtable_keys(p_45);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  static ATerm u_0 (ATerm t)
  {
    ATerm e_13 = NULL,h_13 = NULL;
    e_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_13), e_13);
    t = c_7(not_null(c_13), e_13, t);
    h_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_13, h_13);
    return(t);
  }
  if(((c_13 != NULL) && (c_13 != t)))
    _fail(t);
  else
    c_13 = t;
  t = lookup_table_0_1(c_13, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_6(d_13, t);
  t = map_1_0(u_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm i_97 (ATerm), ATerm t)
{
  ATerm j_13 = NULL;
  j_13 = t;
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_13 = NULL,r_13 = NULL,s_13 = NULL;
        t = term_t_7;
        r_13 = t;
        t = term_m_8;
        s_13 = t;
        t = term_r_8;
        t = c_7(r_13, s_13, t);
        m_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_13, term_e_16);
        t = geq_0_0(t);
        t = j_13;
        t = i_97(t);
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        t = j_13;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm h_97 (ATerm), ATerm t)
{
  ATerm v_13 = NULL;
  v_13 = t;
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
        t = term_t_7;
        a_14 = t;
        t = term_m_8;
        b_14 = t;
        t = term_r_8;
        t = c_7(a_14, b_14, t);
        z_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_13, term_n_12);
        t = geq_0_0(t);
        t = v_13;
        t = h_97(t);
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        t = v_13;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm j_97 (ATerm), ATerm t)
{
  ATerm e_14 = NULL;
  e_14 = t;
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_14 = NULL,k_14 = NULL,n_14 = NULL;
        t = term_t_7;
        k_14 = t;
        t = term_m_8;
        n_14 = t;
        t = term_r_8;
        t = c_7(k_14, n_14, t);
        i_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_14, term_c_10);
        t = geq_0_0(t);
        t = e_14;
        t = j_97(t);
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = e_14;
      }
  }
  return(t);
}
static ATerm h_6 (ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  t = f_88(t);
  {
    static ATerm y_0 (ATerm t)
    {
      ATerm v_14 = NULL;
      v_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_25, v_14);
      t = e_88(t);
      return(t);
    }
    t = fetch_1_0(y_0, t);
  }
  t = g_25;
  return(t);
}
static ATerm i_6 (ATerm b_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  static ATerm z_15 (ATerm t)
  {
    ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
    k_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_15 = ATgetFirst((ATermList) t);
            m_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_18 = t;
          int y_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_15;
              {
                static ATerm a_1 (ATerm t)
                {
                  t = c_25;
                  return(t);
                }
                t = h_6(b_88, a_1, l_15, m_15, t);
              }
              t = z_15(t);
              LocalPopChoice(y_18);
            }
          else
            {
              t = x_18;
              {
                ATerm i_5 = NULL,l_5 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(k_15);
                i_5 = t;
                t = m_15;
                t = z_15(t);
                l_5 = t;
                t = (ATerm) ATinsert(CheckATermList(l_5), l_15);
                z_0 = t;
                t = SSLsetAnnotations(z_0, i_5);
              }
            }
        }
      }
    return(t);
  }
  t = d_25;
  t = z_15(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm t_16 = NULL;
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      if((t_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm n_41, ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm d_16 = NULL,h_16 = NULL,j_16 = NULL,m_16 = NULL;
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_19 = ATgetArgument(t, 0);
            ATerm f_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
        t = c_7(n_41, o_41, t);
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = (ATerm) ATempty;
      }
  }
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_16, p_41);
  t = i_6(b_1, j_16, p_41, t);
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_41, o_41, h_16);
  t = lookup_table_0_1(n_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(o_41, h_16, m_16, t);
  t = d_16;
  return(t);
}
static ATerm k_6 (ATerm l_97 (ATerm), ATerm x_41, ATerm w_41, ATerm t)
{
  static ATerm c_1 (ATerm t)
  {
    ATerm u_16 = NULL,v_16 = NULL;
    if(match_cons(t, sym__2))
      {
        u_16 = ATgetArgument(t, 0);
        v_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, x_41, u_16, v_16);
    t = l_97(t);
    return(t);
  }
  t = w_41;
  t = map_1_0(c_1, t);
  return(t);
}
static ATerm m_6 (ATerm y_46, ATerm z_46, ATerm t)
{
  t = SSL_access(y_46, z_46);
  return(t);
}
static ATerm e_18 (ATerm l_17, ATerm t)
{
  t = SSL_fclose(l_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_17 = NULL,v_17 = NULL;
  v_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_17 = ATgetArgument(t, 0);
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_17);
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            t = e_18(v_17, t);
          }
      }
    }
  else
    {
      t = e_18(v_17, t);
    }
  return(t);
}
static ATerm l_6 (ATerm z_17, ATerm t)
{
  t = SSL_read_term_from_stream(z_17);
  return(t);
}
static ATerm u_6 (ATerm g_63, ATerm h_63, ATerm t)
{
  t = SSL_strcat(g_63, h_63);
  return(t);
}
static ATerm o_6 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm g_18 = NULL;
  t = SSL_fopen(h_47, i_47);
  g_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_18);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_18 = NULL;
  t = SSL_stdin_stream();
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_18 = NULL;
  t = SSL_stdout_stream();
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_18 = NULL;
  t = SSL_stderr_stream();
  j_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_18);
  return(t);
}
static ATerm k_20 (ATerm t_18, ATerm t)
{
  ATerm u_18 = NULL;
  t = SSL_explode_term(t_18);
  if(match_cons(t, sym__2))
    {
      ATerm l_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_19 = ATgetArgument(t, 1);
        if(((ATgetType(m_19) == AT_LIST) && !(ATisEmpty(m_19))))
          {
            u_18 = ATgetFirst((ATermList) m_19);
            {
              ATerm n_19 = (ATerm) ATgetNext((ATermList) m_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_20 (ATerm z_18, ATerm c_19, ATerm d_19, ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,s_19 = NULL,e_1 = NULL;
  t = SSLgetAnnotations(d_19);
  i_19 = t;
  t = z_18;
  if(match_cons(t, sym_Path_1))
    {
      s_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_19, c_19);
  e_1 = t;
  t = SSLsetAnnotations(e_1, i_19);
  if(match_cons(t, sym__2))
    {
      g_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(g_19, h_19, t);
  return(t);
}
static ATerm m_20 (ATerm u_19, ATerm v_19, ATerm w_19, ATerm t)
{
  ATerm x_19 = NULL,z_19 = NULL,a_20 = NULL,d_20 = NULL,g_1 = NULL;
  t = SSLgetAnnotations(w_19);
  a_20 = t;
  t = SSL_is_string(u_19);
  d_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_20, v_19);
  g_1 = t;
  t = SSLsetAnnotations(g_1, a_20);
  if(match_cons(t, sym__2))
    {
      x_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(x_19, z_19, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  f_20 = t;
  if(match_cons(t, sym__2))
    {
      g_20 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
      {
        ATerm o_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_20(f_20, t);
            LocalPopChoice(p_19);
          }
        else
          {
            t = o_19;
            {
              ATerm q_19 = t;
              int r_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_20(g_20, h_20, f_20, t);
                  LocalPopChoice(r_19);
                }
              else
                {
                  t = q_19;
                  t = m_20(g_20, h_20, f_20, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_20(f_20, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,v_20 = NULL;
  v_20 = t;
  {
    ATerm t_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_20, term_b_20);
        t = p_6(t);
        LocalPopChoice(y_19);
      }
    else
      {
        t = t_19;
        {
          ATerm g_6 = NULL,s_6 = NULL;
          t = term_c_20;
          s_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_20, v_20);
          t = u_6(s_6, v_20, t);
          g_6 = t;
          t = SSL_perror(g_6);
          _fail(t);
        }
      }
  }
  p_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(q_20, t);
  o_20 = t;
  t = p_20;
  t = fclose_0_0(t);
  t = o_20;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_e_20;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm j_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_20 = NULL,z_20 = NULL;
      y_20 = t;
      t = (ATerm) ATinsert(ATempty, term_r_20);
      z_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_20, (ATerm) ATinsert(ATempty, term_r_20));
      t = m_6(y_20, z_20, t);
      LocalPopChoice(n_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = j_20;
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_20 = t;
            if((PushChoice() == 0))
              {
                ATerm a_21 = NULL,b_21 = NULL;
                a_21 = t;
                t = (ATerm) ATinsert(ATempty, term_t_8);
                b_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_21, (ATerm) ATinsert(ATempty, term_t_8));
                t = m_6(a_21, b_21, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_20;
              }
            t = debug_1_0(d_1, t);
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            t = debug_1_0(h_1, t);
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
  t = term_w_20;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,d_22 = NULL;
  a_22 = t;
  t = term_g_17;
  b_22 = t;
  t = (ATerm) ATinsert(ATempty, term_e_21);
  d_22 = t;
  t = SSL_printnl(b_22, d_22);
  t = a_22;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm e_22 = NULL,g_22 = NULL,i_22 = NULL;
  if(match_cons(t, sym__3))
    {
      e_22 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
      i_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_6(e_22, g_22, i_22, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
  j_22 = t;
  t = term_g_17;
  k_22 = t;
  t = (ATerm) ATinsert(ATempty, term_l_21);
  l_22 = t;
  t = SSL_printnl(k_22, l_22);
  t = j_22;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  m_22 = t;
  t = term_g_17;
  n_22 = t;
  t = (ATerm) ATinsert(ATempty, term_e_21);
  o_22 = t;
  t = SSL_printnl(n_22, o_22);
  t = m_22;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,u_21 = NULL,v_21 = NULL;
  c_21 = t;
  t = if_verbose5_1_0(i_1, t);
  {
    ATerm q_21 = t;
    if((PushChoice() == 0))
      {
        ATerm y_21 = NULL,z_21 = NULL;
        t = term_r_21;
        y_21 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_21);
        z_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_21, (ATerm) ATmakeAppl(sym_Imported_1, c_21));
        t = c_7(y_21, z_21, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_21;
      }
  }
  f_21 = t;
  t = term_r_21;
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_21, term_s_21, (ATerm) ATinsert(ATempty, c_21));
  t = lookup_table_0_1(n_21, t);
  v_21 = t;
  t = term_s_21;
  o_21 = t;
  t = (ATerm) ATinsert(ATempty, c_21);
  p_21 = t;
  t = v_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(o_21, p_21, u_21, t);
  t = f_21;
  t = if_verbose4_1_0(o_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(q_1, t);
  d_21 = t;
  t = term_r_21;
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_21, d_21);
  t = k_6(r_1, m_21, d_21, t);
  t = if_verbose6_1_0(w_1, t);
  t = term_r_21;
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_21, (ATerm)ATmakeAppl(sym_Imported_1, c_21), (ATerm) ATempty);
  t = lookup_table_0_1(g_21, t);
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, c_21);
  h_21 = t;
  t = (ATerm) ATempty;
  i_21 = t;
  t = k_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(h_21, i_21, j_21, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_21, (ATerm)ATmakeAppl(sym_Imported_1, c_21), (ATerm) ATempty);
  t = if_verbose4_1_0(x_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
  f_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_23;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_23 = ATgetFirst((ATermList) t);
          h_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_7 = NULL,x_7 = NULL,y_7 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(f_23);
            r_7 = t;
            t = g_23;
            t = i_92(t);
            x_7 = t;
            t = h_23;
            t = filter_1_0(i_92, t);
            y_7 = t;
            t = (ATerm) ATinsert(CheckATermList(y_7), x_7);
            j_1 = t;
            t = SSLsetAnnotations(j_1, r_7);
            LocalPopChoice(w_21);
          }
        else
          {
            t = t_21;
            t = h_23;
            t = filter_1_0(i_92, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm t)
{
  static ATerm m_23 (ATerm t)
  {
    ATerm x_21 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_81(t);
        t = m_23(t);
        LocalPopChoice(c_22);
      }
    else
      {
        t = x_21;
        t = v_81(t);
      }
    return(t);
  }
  t = m_23(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_23 = NULL,o_23 = NULL;
      t = term_t_7;
      n_23 = t;
      t = term_p_22;
      o_23 = t;
      t = term_q_22;
      t = c_7(n_23, o_23, t);
      LocalPopChoice(h_22);
    }
  else
    {
      t = f_22;
      {
        ATerm r_22 = t;
        int s_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_23 = NULL;
            t = term_t_22;
            p_23 = t;
            t = SSL_getenv(p_23);
            LocalPopChoice(s_22);
          }
        else
          {
            t = r_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_u_22;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm y_23 = NULL,a_24 = NULL;
  t = term_r_21;
  y_23 = t;
  t = term_v_22;
  a_24 = t;
  t = term_w_22;
  t = c_7(y_23, a_24, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm x_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_22;
      }
  }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_y_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm t_23 = NULL;
  t = if_verbose5_1_0(y_1, t);
  t_23 = t;
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL,w_23 = NULL;
        t = term_r_21;
        v_23 = t;
        t = term_s_21;
        w_23 = t;
        t = term_b_23;
        t = c_7(v_23, w_23, t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        {
          ATerm x_23 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          x_23 = t;
          t = repeat_2_0(a_2, _id, t);
          t = x_23;
        }
      }
  }
  t = t_23;
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
  t = term_c_23;
  return(t);
}
static ATerm v_25 (ATerm i_24, ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,q_24 = NULL;
  t = term_r_21;
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, i_24);
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_21, (ATerm) ATmakeAppl(sym_Tool_1, i_24));
  t = c_7(l_24, q_24, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_23 = ATgetFirst((ATermList) t);
      if(match_cons(d_23, sym__2))
        {
          ATerm i_23 = ATgetArgument(d_23, 0);
          k_24 = ATgetArgument(d_23, 1);
        }
      else
        _fail(t);
      {
        ATerm e_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_24;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_c_23;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_r_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_j_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_24 = NULL,v_24 = NULL,w_24 = NULL;
      t = if_verbose5_1_0(e_2, t);
      t = xtc_load_0_0(t);
      w_24 = t;
      if(match_cons(t, sym__2))
        {
          t_24 = ATgetArgument(t, 0);
          v_24 = ATgetArgument(t, 1);
          {
            ATerm q_23 = t;
            int r_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_24 = NULL,b_25 = NULL,j_25 = NULL;
                t = term_r_21;
                b_25 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, t_24);
                j_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_21, (ATerm) ATmakeAppl(sym_Tool_1, t_24));
                t = c_7(b_25, j_25, t);
                {
                  static ATerm g_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((v_24 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((z_24 != NULL) && (z_24 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          z_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(g_2, t);
                }
                t = not_null(z_24);
                LocalPopChoice(r_23);
              }
            else
              {
                t = q_23;
                t = v_25(w_24, t);
              }
          }
        }
      else
        {
          t = v_25(w_24, t);
        }
      t = if_verbose5_1_0(i_2, t);
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      {
        ATerm u_25 = NULL,n_8 = NULL,o_8 = NULL;
        u_25 = t;
        t = term_g_17;
        n_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_23), u_25), term_s_23);
        o_8 = t;
        t = SSL_printnl(n_8, o_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_23), u_25), term_s_23);
        t = if_verbose5_1_0(n_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm c_7 (ATerm j_42, ATerm k_42, ATerm t)
{
  ATerm a_26 = NULL;
  t = lookup_table_0_1(j_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_7(k_42, a_26, t);
  return(t);
}
static ATerm w_6 (ATerm v_40, ATerm w_40, ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL;
  d_26 = t;
  {
    ATerm z_23 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
        t = c_7(v_40, w_40, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_24 = ATgetFirst((ATermList) t);
            c_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_24);
        {
          ATerm e_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, v_40, w_40, c_26);
          t = lookup_table_0_1(v_40, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              e_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_7(w_40, c_26, e_26, t);
          t = (ATerm) ATmakeAppl(sym__3, v_40, w_40, c_26);
        }
      }
    else
      {
        t = z_23;
        {
          ATerm i_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
          t = lookup_table_0_1(v_40, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              i_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_6(w_40, i_26, t);
          t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
        }
      }
  }
  t = d_26;
  return(t);
}
ATerm end_scope_1_0 (ATerm a_93 (ATerm), ATerm t)
{
  ATerm k_26 = NULL,o_26 = NULL,p_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,w_26 = NULL;
  s_26 = t;
  t = a_93(t);
  p_26 = t;
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_26 = NULL;
        t = term_y_17;
        x_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_26, term_y_17);
        t = c_7(p_26, x_26, t);
        {
          ATerm f_24 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_24;
            }
        }
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_26 = ATgetFirst((ATermList) t);
      k_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_26, term_y_17, k_26);
  t = lookup_table_0_1(p_26, t);
  w_26 = t;
  t = term_y_17;
  t_26 = t;
  t = w_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(t_26, k_26, u_26, t);
  t = o_26;
  {
    static ATerm t_2 (ATerm t)
    {
      ATerm d_27 = NULL;
      d_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_26, d_27);
      t = w_6(p_26, d_27, t);
      return(t);
    }
    t = map_1_0(t_2, t);
  }
  t = s_26;
  return(t);
}
ATerm restore_always_2_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_96(t);
      t = t_96(t);
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      t = t_96(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  g_27 = t;
  t = z_92(t);
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_27, term_y_17);
  {
    ATerm j_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_24 = ATgetArgument(t, 0);
            ATerm o_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_17;
        t_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_27, term_y_17);
        t = c_7(f_27, t_27, t);
        LocalPopChoice(m_24);
      }
    else
      {
        t = j_24;
        t = (ATerm) ATempty;
      }
  }
  h_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_27, term_y_17, (ATerm) ATinsert(CheckATermList(h_27), (ATerm) ATempty));
  t = lookup_table_0_1(f_27, t);
  n_27 = t;
  t = term_y_17;
  k_27 = t;
  t = (ATerm) ATinsert(CheckATermList(h_27), (ATerm) ATempty);
  l_27 = t;
  t = n_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(k_27, l_27, m_27, t);
  t = g_27;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_l_18;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm j_28 = NULL;
  j_28 = t;
  {
    ATerm p_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(j_28);
        LocalPopChoice(r_24);
      }
    else
      {
        t = p_24;
        t = j_28;
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_99 (ATerm), ATerm t)
{
  ATerm y_27 = NULL;
  static ATerm v_2 (ATerm t)
  {
    ATerm b_28 = NULL;
    b_28 = t;
    {
      ATerm s_24 = t;
      int u_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_28 = NULL,d_28 = NULL;
          t = term_l_18;
          c_28 = t;
          t = term_y_17;
          d_28 = t;
          t = term_x_24;
          t = c_7(c_28, d_28, t);
          LocalPopChoice(u_24);
        }
      else
        {
          t = s_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_27 != NULL) && (y_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_27 = ATgetFirst((ATermList) t);
        {
          ATerm y_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = y_27;
    t = map_1_0(d_3, t);
    t = b_28;
    t = end_scope_1_0(e_3, t);
    return(t);
  }
  t = begin_scope_1_0(u_2, t);
  t = restore_always_2_0(t_99, v_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
  m_28 = t;
  t = term_n_18;
  t = whoami_0_0(t);
  n_28 = t;
  t = term_g_17;
  p_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_25), n_28), term_a_25);
  q_28 = t;
  t = SSL_printnl(p_28, q_28);
  t = term_s_8;
  o_28 = t;
  t = SSL_exit(o_28);
  t = m_28;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  if(match_string(t, "-k"))
    {
      t = s_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_28;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t_28 = t;
  t = SSL_string_to_int(t_28);
  u_28 = t;
  t = term_f_25;
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_25, u_28);
  t = f_7(v_28, u_28, t);
  t = t_28;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_3, i_3, j_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm z_28 = NULL;
  z_28 = t;
  if(match_string(t, "-S"))
    {
      t = z_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_28;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL;
  t = term_m_8;
  c_29 = t;
  t = term_k_25;
  d_29 = t;
  t = term_l_25;
  t = f_7(c_29, d_29, t);
  t = term_m_25;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_n_25;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,k_29 = NULL;
  e_29 = t;
  t = SSL_string_to_int(e_29);
  f_29 = t;
  t = term_m_8;
  k_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, f_29);
  t = f_7(k_29, f_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_29);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_o_25;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL;
  t = term_p_25;
  l_29 = t;
  t = term_n_18;
  m_29 = t;
  t = term_q_25;
  t = f_7(l_29, m_29, t);
  t = term_r_25;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_s_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_3, r_3, v_3, t);
      LocalPopChoice(w_25);
    }
  else
    {
      t = t_25;
      {
        ATerm x_25 = t;
        int y_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_3, y_3, z_3, t);
            LocalPopChoice(y_25);
          }
        else
          {
            t = x_25;
            t = Option_3_0(a_4, b_4, d_4, t);
          }
      }
    }
  return(t);
}
static ATerm f_7 (ATerm v_45, ATerm w_45, ATerm t)
{
  ATerm n_29 = NULL,q_29 = NULL;
  t = term_t_7;
  n_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_7, v_45, w_45);
  t = lookup_table_0_1(n_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(v_45, w_45, q_29, t);
  t = (ATerm) ATmakeAppl(sym__3, term_t_7, v_45, w_45);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
      t = term_n_18;
      t = h_0(t);
      w_29 = t;
      t = term_z_25;
      x_29 = t;
      t = term_b_26;
      y_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_25, term_b_26, w_29);
      t = d_7(x_29, y_29, w_29, t);
      _fail(t);
    }
  else
    {
      ATerm b_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_29 = ATgetFirst((ATermList) t);
          v_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_29;
      t = d_0(t);
      t = term_n_18;
      t = g_0(t);
      b_30 = t;
      t = (ATerm) ATinsert(CheckATermList(v_29), b_30);
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm d_30 = NULL;
  d_30 = t;
  if(match_string(t, "-o"))
    {
      t = d_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_30;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL;
  e_30 = t;
  t = term_v_7;
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_7, e_30);
  t = f_7(f_30, e_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_30);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, i_4, k_4, t);
  return(t);
}
static ATerm d_7 (ATerm q_40, ATerm r_40, ATerm p_40, ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_26 = ATgetArgument(t, 0);
            ATerm l_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
        t = c_7(q_40, r_40, t);
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = (ATerm) ATempty;
      }
  }
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_40, r_40, (ATerm) ATinsert(CheckATermList(u_30), p_40));
  t = lookup_table_0_1(q_40, t);
  x_30 = t;
  t = (ATerm) ATinsert(CheckATermList(u_30), p_40);
  v_30 = t;
  t = x_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(r_40, v_30, w_30, t);
  t = t_30;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_31 = NULL,w_31 = NULL,x_31 = NULL;
      t = term_n_18;
      t = p_0(t);
      s_31 = t;
      t = term_z_25;
      w_31 = t;
      t = term_b_26;
      x_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_25, term_b_26, s_31);
      t = d_7(w_31, x_31, s_31, t);
      _fail(t);
    }
  else
    {
      ATerm c_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_31 = ATgetFirst((ATermList) t);
          p_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_31 = ATgetFirst((ATermList) t);
          r_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_31;
      t = m_0(t);
      t = q_31;
      t = o_0(t);
      c_32 = t;
      t = (ATerm) ATinsert(CheckATermList(r_31), c_32);
    }
  return(t);
}
static ATerm m_4 (ATerm t)
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
static ATerm n_4 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL;
  h_32 = t;
  t = term_o_18;
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_18, h_32);
  t = f_7(i_32, h_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_32);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_4, n_4, p_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,n_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_18;
  t = whoami_0_0(t);
  j_32 = t;
  t = term_g_17;
  l_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_26), j_32);
  n_32 = t;
  t = SSL_printnl(l_32, n_32);
  t = term_s_8;
  k_32 = t;
  t = SSL_exit(k_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL;
  t = term_t_7;
  o_32 = t;
  t = term_q_26;
  p_32 = t;
  t = term_r_26;
  t = c_7(o_32, p_32, t);
  return(t);
}
static ATerm x_6 (ATerm a_29, ATerm b_29, ATerm t)
{
  ATerm v_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_29, b_29);
      LocalPopChoice(y_26);
    }
  else
    {
      t = v_26;
      t = SSL_addr(a_29, b_29);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm t)
{
  ATerm r_32 = NULL,u_32 = NULL,v_32 = NULL;
  r_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_32;
      t = e_91(t);
    }
  else
    {
      ATerm y_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_32 = ATgetFirst((ATermList) t);
          v_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_32;
      t = foldr_2_0(e_91, f_91, t);
      y_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_32, y_32);
      t = f_91(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_k_25;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm e_9 = NULL,g_9 = NULL;
  if(match_cons(t, sym__2))
    {
      e_9 = ATgetArgument(t, 0);
      g_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(e_9, g_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_33 = NULL,u_8 = NULL,v_8 = NULL;
  t = times_0_0(t);
  v_8 = t;
  t = SSL_explode_term(v_8);
  if(match_cons(t, sym__2))
    {
      ATerm z_26 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8;
  t = foldr_2_0(q_4, r_4, t);
  b_33 = t;
  t = SSL_TicksToSeconds(b_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,y_33 = NULL;
  u_33 = t;
  if(match_cons(t, sym__2))
    {
      v_33 = ATgetArgument(t, 0);
      y_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_33;
        if((v_33 != t))
          {
            _fail(t);
          }
        t = u_33;
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        t = (ATerm) ATmakeAppl(sym__2, v_33, y_33);
        {
          ATerm c_27 = t;
          int e_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_33, y_33);
              LocalPopChoice(e_27);
            }
          else
            {
              t = c_27;
              t = SSL_gtr(v_33, y_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_33, y_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_97 (ATerm), ATerm t)
{
  ATerm d_34 = NULL;
  d_34 = t;
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_34 = NULL,h_34 = NULL,i_34 = NULL;
        t = term_t_7;
        h_34 = t;
        t = term_m_8;
        i_34 = t;
        t = term_r_8;
        t = c_7(h_34, i_34, t);
        f_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_34, term_s_8);
        t = geq_0_0(t);
        t = d_34;
        t = e_97(t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = d_34;
      }
  }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm o_34 = NULL,r_34 = NULL,v_34 = NULL,y_34 = NULL;
  t = run_time_0_0(t);
  o_34 = t;
  t = term_n_18;
  t = whoami_0_0(t);
  r_34 = t;
  t = term_g_17;
  v_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_27), o_34), term_a_9), r_34);
  y_34 = t;
  t = SSL_printnl(v_34, y_34);
  t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_27), o_34), term_a_9), r_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_25;
  a_35 = t;
  t = SSL_exit(a_35);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL;
  t_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_35 = ATgetArgument(t, 0);
          {
            ATerm x_9 = NULL,c_2 = NULL;
            t = SSLgetAnnotations(t_35);
            x_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_35);
            c_2 = t;
            t = SSLsetAnnotations(c_2, x_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_101 (ATerm), ATerm t)
{
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_35 = NULL,h_35 = NULL;
      t = term_t_7;
      g_35 = t;
      t = term_r_27;
      h_35 = t;
      t = term_s_27;
      t = c_7(g_35, h_35, t);
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      t = fetch_1_0(u_4, t);
    }
  t = j_101(t);
  return(t);
}
static ATerm g_7 (ATerm i_45, ATerm j_45, ATerm k_45, ATerm t)
{
  ATerm w_35 = NULL;
  t = SSL_hashtable_put(k_45, i_45, j_45);
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_35);
  return(t);
}
static ATerm h_7 (ATerm l_45, ATerm m_45, ATerm t)
{
  t = SSL_hashtable_get(m_45, l_45);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_42, ATerm t)
{
  ATerm h_36 = NULL;
  t = table_hashtable_0_0(t);
  h_36 = t;
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_10 = NULL;
        t = h_36;
        if(match_cons(t, sym_Hashtable_1))
          {
            k_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_7(c_42, k_10, t);
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        {
          ATerm s_10 = NULL;
          t = c_42;
          t = table_create_0_0(t);
          t = h_36;
          if(match_cons(t, sym_Hashtable_1))
            {
              s_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_7(c_42, s_10, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_45, ATerm r_45, ATerm t)
{
  ATerm k_36 = NULL;
  t = SSL_hashtable_create(q_45, r_45);
  k_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_36);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL,p_36 = NULL,q_36 = NULL;
  l_36 = t;
  t = term_w_27;
  p_36 = t;
  t = term_x_27;
  q_36 = t;
  t = l_36;
  t = new_hashtable_0_2(p_36, q_36, t);
  m_36 = t;
  t = l_36;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(l_36, m_36, n_36, t);
  t = l_36;
  return(t);
}
static ATerm z_6 (ATerm n_45, ATerm o_45, ATerm t)
{
  ATerm r_36 = NULL;
  t = SSL_hashtable_remove(o_45, n_45);
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_36);
  return(t);
}
static ATerm a_7 (ATerm s_45, ATerm t)
{
  ATerm s_36 = NULL;
  t = SSL_hashtable_destroy(s_45);
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_36);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm t_36 = NULL;
  t = SSL_table_hashtable();
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_36);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL;
  u_36 = t;
  t = table_hashtable_0_0(t);
  v_36 = t;
  t = lookup_table_0_1(u_36, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_7(x_36, t);
  t = v_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_6(u_36, w_36, t);
  t = u_36;
  return(t);
}
ATerm map_1_0 (ATerm q_83 (ATerm), ATerm t)
{
  static ATerm p_37 (ATerm t)
  {
    ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
    j_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_37;
      }
    else
      {
        ATerm a_11 = NULL,d_11 = NULL,e_11 = NULL,h_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_37 = ATgetFirst((ATermList) t);
            l_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_37);
        a_11 = t;
        t = k_37;
        t = q_83(t);
        d_11 = t;
        t = l_37;
        t = p_37(t);
        e_11 = t;
        t = (ATerm) ATinsert(CheckATermList(e_11), d_11);
        h_2 = t;
        t = SSLsetAnnotations(h_2, a_11);
      }
    return(t);
  }
  t = p_37(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_37 = ATgetFirst((ATermList) t);
      t_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_38 = NULL,c_38 = NULL;
        static ATerm v_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_38)), not_null(c_38));
          return(t);
        }
        t = t_37;
        t = l_0(t);
        if(((a_38 != NULL) && (a_38 != t)))
          _fail(t);
        else
          a_38 = t;
        t = s_37;
        t = j_0(t);
        if(((c_38 != NULL) && (c_38 != t)))
          _fail(t);
        else
          c_38 = t;
        t = t_37;
        t = reverse_acc_2_0(j_0, v_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_18;
      t = l_0(t);
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,j_2 = NULL;
  k_38 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_38);
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_38);
  j_2 = t;
  t = SSLsetAnnotations(j_2, i_38);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm m_38 = NULL;
  m_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_38), term_z_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL;
  ATerm a_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_38 = NULL,h_38 = NULL;
      t = term_t_7;
      g_38 = t;
      t = term_q_26;
      h_38 = t;
      t = term_r_26;
      t = c_7(g_38, h_38, t);
      LocalPopChoice(e_28);
    }
  else
    {
      t = a_28;
      t = fetch_1_0(z_4, t);
    }
  t = term_f_28;
  t = echo_0_0(t);
  t = term_z_25;
  e_38 = t;
  t = term_b_26;
  f_38 = t;
  t = term_g_28;
  t = c_7(e_38, f_38, t);
  t = reverse_acc_2_0(_id, a_5, t);
  t = map_1_0(b_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  static ATerm j_39 (ATerm t)
  {
    ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
    g_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_39 = ATgetFirst((ATermList) t);
        i_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_28 = t;
      int i_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_12 = NULL,i_12 = NULL,o_2 = NULL;
          t = SSLgetAnnotations(g_39);
          d_12 = t;
          t = h_39;
          t = a_84(t);
          i_12 = t;
          t = (ATerm) ATinsert(CheckATermList(i_39), i_12);
          o_2 = t;
          t = SSLsetAnnotations(o_2, d_12);
          LocalPopChoice(i_28);
        }
      else
        {
          t = h_28;
          {
            ATerm v_12 = NULL,f_13 = NULL,w_2 = NULL;
            t = SSLgetAnnotations(g_39);
            v_12 = t;
            t = i_39;
            t = j_39(t);
            f_13 = t;
            t = (ATerm) ATinsert(CheckATermList(f_13), h_39);
            w_2 = t;
            t = SSLsetAnnotations(w_2, v_12);
          }
        }
    }
    return(t);
  }
  t = j_39(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
  n_39 = t;
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_39;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_28 = ATgetFirst((ATermList) t);
                ATerm w_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_39;
          }
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        t = (ATerm) ATinsert(ATempty, n_39);
      }
  }
  o_39 = t;
  t = term_c_8;
  p_39 = t;
  t = SSL_printnl(p_39, o_39);
  t = n_39;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL;
  t = term_t_7;
  t_39 = t;
  t = term_q_26;
  u_39 = t;
  t = term_r_26;
  t = c_7(t_39, u_39, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL;
  t = term_x_28;
  v_39 = t;
  t = term_n_18;
  w_39 = t;
  t = term_y_28;
  t = f_7(v_39, w_39, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_i_29;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL;
  t = term_x_28;
  z_39 = t;
  t = term_n_18;
  a_40 = t;
  t = term_y_28;
  t = f_7(z_39, a_40, t);
  t = term_j_29;
  x_39 = t;
  t = term_n_18;
  y_39 = t;
  t = term_o_29;
  t = f_7(x_39, y_39, t);
  t = term_p_29;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_r_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_5, e_5, f_5, t);
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      t = Option_3_0(j_5, k_5, m_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,c_4 = NULL;
  g_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_40 = ATgetFirst((ATermList) t);
      d_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_40);
  b_40 = t;
  t = c_40;
  t = j_70(t);
  e_40 = t;
  t = d_40;
  t = k_70(t);
  f_40 = t;
  t = (ATerm) ATinsert(CheckATermList(f_40), e_40);
  c_4 = t;
  t = SSLsetAnnotations(c_4, b_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_103 (ATerm), ATerm t)
{
  ATerm t_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,b_41 = NULL,c_41 = NULL,f_4 = NULL;
  t_40 = t;
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_30;
        t = h_103(t);
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
      }
  }
  t = t_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_40 = ATgetFirst((ATermList) t);
      z_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_40);
  x_40 = t;
  t = term_q_26;
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_26, y_40);
  t = f_7(c_41, y_40, t);
  t = z_40;
  {
    static ATerm m_41 (ATerm t)
    {
      ATerm g_30 = t;
      int h_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_30 = t;
          int j_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_41 = NULL;
              f_41 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_41;
              LocalPopChoice(j_30);
            }
          else
            {
              t = i_30;
              t = h_103(t);
              t = Cons_2_0(_id, m_41, t);
            }
          LocalPopChoice(h_30);
        }
      else
        {
          t = g_30;
          {
            ATerm i_41 = NULL,j_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_41 = ATgetFirst((ATermList) t);
                j_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(j_41), (ATerm) ATmakeAppl(sym_Undefined_1, i_41));
          }
        }
      return(t);
    }
    t = m_41(t);
  }
  b_41 = t;
  t = (ATerm) ATinsert(CheckATermList(b_41), (ATerm) ATmakeAppl(sym_Program_1, y_40));
  f_4 = t;
  t = SSLsetAnnotations(f_4, x_40);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm o_42 = NULL;
  o_42 = t;
  if(match_string(t, "--help"))
    {
      t = o_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_42;
        }
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL;
  t = term_r_27;
  p_42 = t;
  t = term_n_18;
  q_42 = t;
  t = term_k_30;
  t = f_7(p_42, q_42, t);
  t = term_l_30;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_n_30;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL;
  g_42 = t;
  t = term_z_25;
  h_42 = t;
  t = term_p_30;
  t = lookup_table_0_1(h_42, t);
  n_42 = t;
  t = term_b_26;
  i_42 = t;
  t = (ATerm) ATempty;
  l_42 = t;
  t = n_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(i_42, l_42, m_42, t);
  t = g_42;
  {
    static ATerm n_5 (ATerm t)
    {
      ATerm q_30 = t;
      int r_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_103(t);
          LocalPopChoice(r_30);
        }
      else
        {
          t = q_30;
          {
            ATerm s_30 = t;
            int y_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_5, q_5, r_5, t);
                LocalPopChoice(y_30);
              }
            else
              {
                t = s_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_5, t);
  }
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_43 = NULL;
        b_43 = t;
        {
          ATerm b_31 = t;
          int c_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_13 = NULL;
              t = b_43;
              {
                ATerm d_31 = t;
                int e_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_13 = NULL,x_13 = NULL;
                    t = term_t_7;
                    u_13 = t;
                    t = term_r_27;
                    x_13 = t;
                    t = term_s_27;
                    t = c_7(u_13, x_13, t);
                    LocalPopChoice(e_31);
                  }
                else
                  {
                    t = d_31;
                    t = fetch_1_0(s_5, t);
                  }
              }
              t = b_43;
              t = default_system_usage_0_0(t);
              t = term_k_25;
              q_13 = t;
              t = SSL_exit(q_13);
              LocalPopChoice(c_31);
            }
          else
            {
              t = b_31;
              {
                ATerm h_14 = NULL,j_14 = NULL,p_14 = NULL;
                t = term_t_7;
                j_14 = t;
                t = term_x_28;
                p_14 = t;
                t = term_f_31;
                t = c_7(j_14, p_14, t);
                t = b_43;
                t = default_system_about_0_0(t);
                t = term_k_25;
                h_14 = t;
                t = SSL_exit(h_14);
              }
            }
        }
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        {
          ATerm g_31 = t;
          int h_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL;
              static ATerm t_5 (ATerm t)
              {
                ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,h_4 = NULL;
                h_43 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_43 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_43);
                f_43 = t;
                t = g_43;
                if(((a_42 != NULL) && (a_42 != t)))
                  _fail(t);
                else
                  a_42 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_43);
                h_4 = t;
                t = SSLsetAnnotations(h_4, f_43);
                return(t);
              }
              t = fetch_1_0(t_5, t);
              t = term_g_17;
              d_43 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_42)), term_i_31);
              e_43 = t;
              t = SSL_printnl(d_43, e_43);
              t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_42)), term_i_31));
              t = default_system_usage_0_0(t);
              t = term_s_8;
              c_43 = t;
              t = SSL_exit(c_43);
              LocalPopChoice(h_31);
            }
          else
            {
              t = g_31;
            }
        }
      }
  }
  b_42 = t;
  t = term_z_25;
  t = table_destroy_0_0(t);
  t = b_42;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL;
  t = parse_options_1_0(l_101, t);
  m_43 = t;
  t = term_j_31;
  t = table_create_0_0(t);
  t = term_j_31;
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_31, term_k_31, m_43);
  t = lookup_table_0_1(n_43, t);
  q_43 = t;
  t = term_k_31;
  o_43 = t;
  t = q_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(o_43, m_43, p_43, t);
  t = m_43;
  t = n_101(t);
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_101, t);
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        {
          ATerm n_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_101(t);
              t = report_success_0_0(t);
              LocalPopChoice(t_31);
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
static ATerm u_5 (ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      {
        ATerm y_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(z_31);
          }
        else
          {
            t = y_31;
            {
              ATerm a_32 = t;
              int b_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(w_5, x_5, y_5, t);
                  LocalPopChoice(b_32);
                }
              else
                {
                  t = a_32;
                  {
                    ATerm d_32 = t;
                    int e_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(e_32);
                      }
                    else
                      {
                        t = d_32;
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
static ATerm v_5 (ATerm t)
{
  t = xtc_temp_files_1_0(z_5, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL;
  t = term_f_32;
  y_43 = t;
  t = term_n_18;
  z_43 = t;
  t = term_m_32;
  t = f_7(y_43, z_43, t);
  t = term_q_32;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_s_32;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm t_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
      t = term_t_7;
      c_44 = t;
      t = term_o_18;
      d_44 = t;
      t = term_x_32;
      t = c_7(c_44, d_44, t);
      b_44 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_44);
      LocalPopChoice(w_32);
    }
  else
    {
      t = t_32;
      t = term_i_8;
    }
  {
    ATerm z_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_44 = NULL,k_44 = NULL;
        k_44 = t;
        if(match_cons(t, sym_FILE_1))
          {
            j_44 = ATgetArgument(t, 0);
            {
              ATerm w_14 = NULL,j_4 = NULL;
              t = SSLgetAnnotations(k_44);
              w_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_44);
              j_4 = t;
              t = SSLsetAnnotations(j_4, w_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_44;
          }
        LocalPopChoice(a_33);
        t = xtc_transform_file_2_0(a_6, b_6, t);
      }
    else
      {
        t = z_32;
        t = xtc_transform_term_2_0(c_6, d_6, t);
      }
  }
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_44 = NULL,t_44 = NULL;
        t_44 = t;
        if(match_cons(t, sym_FILE_1))
          {
            s_44 = ATgetArgument(t, 0);
            {
              ATerm o_15 = NULL,l_4 = NULL;
              t = SSLgetAnnotations(t_44);
              o_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_44);
              l_4 = t;
              t = SSLsetAnnotations(l_4, o_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_44;
          }
        LocalPopChoice(d_33);
        t = xtc_transform_file_2_0(y_6, pass_verbose_0_0, t);
      }
    else
      {
        t = c_33;
        t = xtc_transform_term_2_0(e_7, pass_verbose_0_0, t);
      }
  }
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_44 = NULL,a_45 = NULL;
        a_45 = t;
        if(match_cons(t, sym_FILE_1))
          {
            z_44 = ATgetArgument(t, 0);
            {
              ATerm w_15 = NULL,o_4 = NULL;
              t = SSLgetAnnotations(a_45);
              w_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_44);
              o_4 = t;
              t = SSLsetAnnotations(o_4, w_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_45;
          }
        LocalPopChoice(f_33);
        t = xtc_transform_file_2_0(i_7, pass_verbose_0_0, t);
      }
    else
      {
        t = e_33;
        t = xtc_transform_term_2_0(j_7, pass_verbose_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_g_33;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm l_44 = NULL;
  t = term_h_33;
  t = xtc_find_0_0(t);
  l_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_44), term_i_33);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_g_33;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm m_44 = NULL;
  t = term_h_33;
  t = xtc_find_0_0(t);
  m_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_44), term_i_33);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_j_33;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_j_33;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_k_33;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm io_pp_box_0_0 (ATerm t)
{
  t = option_wrap_4_0(u_5, default_usage_0_0, _id, v_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_box_0_0(t);
  return(t);
}
