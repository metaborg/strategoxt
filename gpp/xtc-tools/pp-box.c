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
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_h_33;
ATerm term_f_33;
ATerm term_n_32;
ATerm term_k_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_d_31;
ATerm term_i_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_u_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_d_29;
ATerm term_a_29;
ATerm term_y_28;
ATerm term_s_28;
ATerm term_m_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_t_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_f_27;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_z_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_l_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_u_24;
ATerm term_r_24;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_f_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_x_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_h_22;
ATerm term_f_22;
ATerm term_q_21;
ATerm term_l_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_h_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_a_18;
ATerm term_q_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_k_15;
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
ATerm term_w_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_k_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_m_8;
ATerm term_i_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_v_7;
ATerm term_s_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_v_7);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_m_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
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
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_9, term_s_8, term_l_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_q_9, term_r_9);
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
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_10, term_b_10, term_c_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_10, term_f_10, term_k_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_n_10, term_o_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_10, term_t_10, term_u_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_b_11, term_e_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_v_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_12, term_e_12, term_f_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_m_12, term_n_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_s_12, term_t_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_f_13, term_g_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_m_13, term_n_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_x_13, term_a_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_f_14, term_k_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_v_14);
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
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_o_15, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_u_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_y_15, term_z_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_d_16, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_i_16, term_k_16);
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
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_t_16, term_w_16);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_f_22);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym__2, term_l_21, term_u_22);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym__2, term_l_21, term_q_21);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_a_18);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_m_8, term_f_25);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_25);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__2, term_n_25, term_m_18);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_k_26);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_p_27);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_w_25, term_x_25);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_m_28, term_m_18);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_a_29, term_m_18);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__2, term_p_27, term_m_18);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__3, term_w_25, term_x_25, (ATerm) ATempty);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_m_28);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_f_32, term_m_18);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_n_18);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.pp.af", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm u_6 (ATerm o_14, ATerm p_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm d_6 (ATerm b_29, ATerm c_29, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm m_6 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm p_6 (ATerm a_69 (ATerm), ATerm s_170, ATerm y_17, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm t);
static ATerm q_6 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm c_74 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm p_67 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm o_87 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm h_74 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm q_10 (ATerm y_9, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm s_6 (ATerm c_83 (ATerm), ATerm j_30, ATerm h_30, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm y_68 (ATerm), ATerm t);
static ATerm e_6 (ATerm v_35, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm p_84 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm o_84 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm q_84 (ATerm), ATerm t);
static ATerm g_6 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm h_6 (ATerm b_78 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm i_6 (ATerm t_32, ATerm u_32, ATerm v_32, ATerm t);
static ATerm j_6 (ATerm s_84 (ATerm), ATerm d_33, ATerm c_33, ATerm t);
static ATerm l_6 (ATerm e_37, ATerm f_37, ATerm t);
static ATerm g_18 (ATerm n_17, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm k_6 (ATerm u_17, ATerm t);
static ATerm t_6 (ATerm m_53, ATerm n_53, ATerm t);
static ATerm n_6 (ATerm n_37, ATerm o_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_20 (ATerm u_18, ATerm t);
static ATerm m_20 (ATerm c_19, ATerm d_19, ATerm g_19, ATerm t);
static ATerm n_20 (ATerm w_19, ATerm x_19, ATerm y_19, ATerm t);
static ATerm o_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_82 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm y_25 (ATerm j_24, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm b_7 (ATerm p_33, ATerm q_33, ATerm t);
static ATerm v_6 (ATerm b_32, ATerm c_32, ATerm t);
ATerm end_scope_1_0 (ATerm z_82 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm y_82 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm a_87 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_7 (ATerm b_36, ATerm c_36, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_7 (ATerm w_31, ATerm x_31, ATerm v_31, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_6 (ATerm v_28, ATerm w_28, ATerm t);
ATerm foldr_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_84 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm need_help_1_0 (ATerm q_88 (ATerm), ATerm t);
static ATerm f_7 (ATerm o_35, ATerm p_35, ATerm q_35, ATerm t);
static ATerm g_7 (ATerm r_35, ATerm s_35, ATerm t);
ATerm lookup_table_0_1 (ATerm i_33, ATerm t);
ATerm new_hashtable_0_2 (ATerm w_35, ATerm x_35, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm y_6 (ATerm t_35, ATerm u_35, ATerm t);
static ATerm z_6 (ATerm y_35, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_73 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_74 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_60 (ATerm), ATerm q_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm o_90 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm parse_options_1_0 (ATerm n_90 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm v_88 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm h_7 (ATerm t);
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
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
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
        ATerm h_0 = NULL;
        t = u_1;
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
        t = (ATerm) ATmakeAppl(sym__2, v_1, h_0);
        t = u_6(v_1, h_0, t);
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
              ATerm v_0 = NULL;
              t = u_1;
              t = o_0(t);
              v_0 = t;
              {
                ATerm o_7 = t;
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
                            if((v_1 != t))
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
                    t = o_7;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, v_1, v_0);
              t = u_6(v_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
              LocalPopChoice(n_7);
            }
          else
            {
              t = m_7;
              t = u_1;
              t = o_0(t);
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
static ATerm u_6 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_copy(o_14, p_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm p_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 = NULL,v_2 = NULL;
      t = term_s_7;
      r_2 = t;
      t = term_v_7;
      v_2 = t;
      t = term_b_8;
      t = b_7(r_2, v_2, t);
      LocalPopChoice(r_7);
    }
  else
    {
      t = p_7;
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
      ATerm e_1 = NULL,k_1 = NULL;
      t = term_v_7;
      {
        ATerm d_8 = t;
        int h_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 = NULL,m_1 = NULL;
            t = term_s_7;
            l_1 = t;
            t = term_v_7;
            m_1 = t;
            t = term_b_8;
            t = b_7(l_1, m_1, t);
            LocalPopChoice(h_8);
          }
        else
          {
            t = d_8;
            t = term_c_8;
          }
      }
      e_1 = t;
      t = term_i_8;
      k_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_i_8, e_1);
      t = u_6(k_1, e_1, t);
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
static ATerm d_6 (ATerm b_29, ATerm c_29, ATerm t)
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(b_29, c_29);
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
      t = SSL_subtr(b_29, c_29);
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
        t = term_s_7;
        b_3 = t;
        t = term_m_8;
        c_3 = t;
        t = term_r_8;
        t = b_7(b_3, c_3, t);
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
  t = d_6(y_2, a_3, t);
  z_2 = t;
  t = SSL_int_to_string(z_2);
  x_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_2), term_m_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm i_3 = NULL;
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
          i_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_v_8);
      m_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATinsert(ATempty, term_v_8));
      t = l_6(i_3, m_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm m_6 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm o_3 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_3);
  return(t);
}
static ATerm p_6 (ATerm a_69 (ATerm), ATerm s_170, ATerm y_17, ATerm t)
{
  ATerm p_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_170, term_w_8);
  t = o_6(t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, y_17);
  t = a_69(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm t_3 = NULL,v_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_8 = ATgetArgument(t, 0);
      if(match_cons(x_8, sym_Stream_1))
        {
          t_3 = ATgetArgument(x_8, 0);
        }
      else
        _fail(t);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(t_3, v_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  s_3 = t;
  t = xtc_new_file_0_0(t);
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_3, s_3);
  t = p_6(b_0, r_3, s_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_3);
  t = xtc_transform_file_2_0(n_86, o_86, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm q_6 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,b_5 = NULL,c_5 = NULL;
  w_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_4 = ATgetArgument(t, 0);
      {
        ATerm r_1 = NULL,s_1 = NULL;
        t = SSL_int_to_string(x_4);
        r_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_8), r_1), term_y_8);
        s_1 = t;
        t = SSL_concat_strings(s_1);
      }
    }
  else
    {
      ATerm k_2 = NULL,l_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_4 = ATgetArgument(t, 0);
          b_5 = ATgetArgument(t, 1);
          c_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(b_5);
      k_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_5), term_b_9), k_2), term_a_9), x_4);
      l_2 = t;
      t = SSL_concat_strings(l_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm c_74 (ATerm), ATerm t)
{
  ATerm g_5 = NULL;
  static ATerm f_0 (ATerm t)
  {
    t = c_74(t);
    if(((g_5 != NULL) && (g_5 != t)))
      _fail(t);
    else
      g_5 = t;
    return(t);
  }
  t = fetch_1_0(f_0, t);
  t = not_null(g_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_5 = NULL;
  j_5 = t;
  {
    ATerm c_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm g_9 = ATgetArgument(t, 0);
              if((j_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm j_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_16), term_r_16), term_l_16), term_f_16), term_a_16), term_w_15), term_q_15), term_j_15), term_f_15), term_b_15), term_w_14), term_r_14), term_c_14), term_o_13), term_j_13), term_v_12), term_o_12), term_j_12), term_z_11), term_q_11), term_l_11), term_y_10), term_p_10), term_l_10), term_d_10), term_w_9), term_s_9), term_m_9);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(e_9);
      }
    else
      {
        t = c_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm o_5 = NULL,d_7 = NULL;
  o_5 = t;
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_17 = ATgetArgument(t, 0);
            d_7 = ATgetArgument(t, 1);
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
              ATerm f_3 = NULL,j_3 = NULL,k_3 = NULL;
              t = d_7;
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
              f_3 = t;
              t = term_g_17;
              j_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_3), term_h_17);
              k_3 = t;
              t = SSL_printnl(j_3, k_3);
              t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATempty, f_3), term_h_17));
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
ATerm fork_and_wait_1_0 (ATerm p_67 (ATerm), ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL;
  u_7 = t;
  t = fork_0_0(t);
  t_7 = t;
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = u_7;
        t = p_67(t);
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        t = SSL_waitpid(t_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm k_17 = ATgetArgument(t, 0);
            if(((ATgetType(k_17) != AT_INT) || (ATgetInt((ATermInt) k_17) != 0)))
              _fail(t);
            {
              ATerm l_17 = ATgetArgument(t, 1);
            }
            {
              ATerm m_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_7;
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
      ATerm a_8 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, y_7, z_7);
      t = q_6(y_7, z_7, t);
      t = term_q_17;
      a_8 = t;
      t = SSL_exit(a_8);
      return(t);
    }
    t = fork_and_wait_1_0(m_0, t);
  }
  t = z_7;
  return(t);
}
ATerm at_end_1_0 (ATerm h_74 (ATerm), ATerm t)
{
  static ATerm p_9 (ATerm t)
  {
    ATerm h_9 = NULL,i_9 = NULL,n_9 = NULL;
    n_9 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_9 = ATgetFirst((ATermList) t);
        i_9 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_3 = NULL,d_4 = NULL,x_0 = NULL;
          t = SSLgetAnnotations(n_9);
          x_3 = t;
          t = i_9;
          t = p_9(t);
          d_4 = t;
          t = (ATerm) ATinsert(CheckATermList(d_4), h_9);
          x_0 = t;
          t = SSLsetAnnotations(x_0, x_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_9;
        t = h_74(t);
      }
    return(t);
  }
  t = p_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
  e_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_8;
    }
  else
    {
      static ATerm q_0 (ATerm t)
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
      t = at_end_1_0(q_0, t);
    }
  return(t);
}
static ATerm q_10 (ATerm y_9, ATerm t)
{
  ATerm z_9 = NULL;
  t = SSL_explode_term(y_9);
  if(match_cons(t, sym__2))
    {
      ATerm r_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_17) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  i_10 = t;
  if(match_cons(t, sym__2))
    {
      g_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_0 (ATerm t)
            {
              t = h_10;
              return(t);
            }
            t = g_10;
            t = at_end_1_0(s_0, t);
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
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
static ATerm s_6 (ATerm c_83 (ATerm), ATerm j_30, ATerm h_30, ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
  f_11 = t;
  t = c_83(t);
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_10, j_30, h_30);
  t = c_7(v_10, j_30, h_30, t);
  {
    ATerm v_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_11 = NULL;
        t = term_a_18;
        k_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_10, term_a_18);
        t = b_7(v_10, k_11, t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = v_17;
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
  t = (ATerm) ATmakeAppl(sym__3, v_10, term_a_18, (ATerm) ATinsert(CheckATermList(x_10), (ATerm) ATinsert(CheckATermList(w_10), j_30)));
  t = lookup_table_0_1(v_10, t);
  j_11 = t;
  t = term_a_18;
  g_11 = t;
  t = (ATerm) ATinsert(CheckATermList(x_10), (ATerm) ATinsert(CheckATermList(w_10), j_30));
  h_11 = t;
  t = j_11;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(g_11, h_11, i_11, t);
  t = f_11;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm o_11 = NULL;
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_11 = NULL,r_4 = NULL;
      t_11 = t;
      t = term_d_18;
      r_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_11, term_d_18);
      t = t_6(t_11, r_4, t);
      o_11 = t;
      t = SSL_mkstemp(o_11);
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
      {
        ATerm u_11 = NULL;
        t = term_e_18;
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
static ATerm t_0 (ATerm t)
{
  t = term_f_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,b_12 = NULL,c_12 = NULL;
  t = P__tmpdir_0_0(t);
  b_12 = t;
  t = term_l_18;
  c_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_12, term_l_18);
  t = t_6(b_12, c_12, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      x_11 = ATgetArgument(t, 0);
      w_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_m_18;
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_11, term_m_18);
  t = s_6(t_0, x_11, y_11, t);
  t = SSL_close(w_11);
  t = x_11;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm g_12 = NULL,i_12 = NULL;
  g_12 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm k_12 = NULL,p_12 = NULL;
      t = g_12;
      t = xtc_new_file_0_0(t);
      k_12 = t;
      t = r_0(t);
      p_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_12, (ATerm) ATinsert(ATinsert(ATempty, k_12), term_v_7));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_12);
    }
  else
    {
      ATerm r_12 = NULL,x_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_12;
      t = xtc_new_file_0_0(t);
      r_12 = t;
      t = r_0(t);
      x_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_12), term_v_7), i_12), term_n_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_12);
    }
  return(t);
}
ATerm debug_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
  z_12 = t;
  t = y_68(t);
  a_13 = t;
  t = term_g_17;
  b_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_12), a_13);
  c_13 = t;
  t = SSL_printnl(b_13, c_13);
  t = z_12;
  return(t);
}
static ATerm e_6 (ATerm v_35, ATerm t)
{
  t = SSL_hashtable_keys(v_35);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL;
  static ATerm u_0 (ATerm t)
  {
    ATerm h_13 = NULL,i_13 = NULL;
    h_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), h_13);
    t = b_7(not_null(d_13), h_13, t);
    i_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_13, i_13);
    return(t);
  }
  if(((d_13 != NULL) && (d_13 != t)))
    _fail(t);
  else
    d_13 = t;
  t = lookup_table_0_1(d_13, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(e_13, t);
  t = map_1_0(u_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm p_84 (ATerm), ATerm t)
{
  ATerm l_13 = NULL;
  l_13 = t;
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
        t = term_s_7;
        s_13 = t;
        t = term_m_8;
        t_13 = t;
        t = term_r_8;
        t = b_7(s_13, t_13, t);
        r_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_13, term_d_16);
        t = geq_0_0(t);
        t = l_13;
        t = p_84(t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = l_13;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  ATerm w_13 = NULL;
  w_13 = t;
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_13 = NULL,z_13 = NULL,b_14 = NULL;
        t = term_s_7;
        z_13 = t;
        t = term_m_8;
        b_14 = t;
        t = term_r_8;
        t = b_7(z_13, b_14, t);
        y_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_13, term_m_12);
        t = geq_0_0(t);
        t = w_13;
        t = o_84(t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        t = w_13;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm q_84 (ATerm), ATerm t)
{
  ATerm j_14 = NULL;
  j_14 = t;
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_14 = NULL,n_14 = NULL,q_14 = NULL;
        t = term_s_7;
        n_14 = t;
        t = term_m_8;
        q_14 = t;
        t = term_r_8;
        t = b_7(n_14, q_14, t);
        m_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_14, term_b_10);
        t = geq_0_0(t);
        t = j_14;
        t = q_84(t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = j_14;
      }
  }
  return(t);
}
static ATerm g_6 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = f_78(t);
  {
    static ATerm y_0 (ATerm t)
    {
      ATerm x_14 = NULL;
      x_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, x_14);
      t = e_78(t);
      return(t);
    }
    t = fetch_1_0(y_0, t);
  }
  t = b_25;
  return(t);
}
static ATerm h_6 (ATerm b_78 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm b_16 (ATerm t)
  {
    ATerm l_15 = NULL,m_15 = NULL,t_15 = NULL;
    l_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_15 = ATgetFirst((ATermList) t);
            t_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_18 = t;
          int x_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_15;
              {
                static ATerm a_1 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = g_6(b_78, a_1, m_15, t_15, t);
              }
              t = b_16(t);
              LocalPopChoice(x_18);
            }
          else
            {
              t = v_18;
              {
                ATerm h_5 = NULL,l_5 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(l_15);
                h_5 = t;
                t = t_15;
                t = b_16(t);
                l_5 = t;
                t = (ATerm) ATinsert(CheckATermList(l_5), m_15);
                z_0 = t;
                t = SSLsetAnnotations(z_0, h_5);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = b_16(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm u_16 = NULL;
  if(match_cons(t, sym__2))
    {
      u_16 = ATgetArgument(t, 0);
      if((u_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm i_6 (ATerm t_32, ATerm u_32, ATerm v_32, ATerm t)
{
  ATerm h_16 = NULL,j_16 = NULL,m_16 = NULL,n_16 = NULL;
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_32, u_32);
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_19 = ATgetArgument(t, 0);
            ATerm b_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_32, u_32);
        t = b_7(t_32, u_32, t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        t = (ATerm) ATempty;
      }
  }
  m_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_16, v_32);
  t = h_6(b_1, m_16, v_32, t);
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_32, u_32, j_16);
  t = lookup_table_0_1(t_32, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(u_32, j_16, n_16, t);
  t = h_16;
  return(t);
}
static ATerm j_6 (ATerm s_84 (ATerm), ATerm d_33, ATerm c_33, ATerm t)
{
  static ATerm c_1 (ATerm t)
  {
    ATerm v_16 = NULL,x_16 = NULL;
    if(match_cons(t, sym__2))
      {
        v_16 = ATgetArgument(t, 0);
        x_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, d_33, v_16, x_16);
    t = s_84(t);
    return(t);
  }
  t = c_33;
  t = map_1_0(c_1, t);
  return(t);
}
static ATerm l_6 (ATerm e_37, ATerm f_37, ATerm t)
{
  t = SSL_access(e_37, f_37);
  return(t);
}
static ATerm g_18 (ATerm n_17, ATerm t)
{
  t = SSL_fclose(n_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_17 = NULL,z_17 = NULL;
  z_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_17 = ATgetArgument(t, 0);
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_17);
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            t = g_18(z_17, t);
          }
      }
    }
  else
    {
      t = g_18(z_17, t);
    }
  return(t);
}
static ATerm k_6 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm t_6 (ATerm m_53, ATerm n_53, ATerm t)
{
  t = SSL_strcat(m_53, n_53);
  return(t);
}
static ATerm n_6 (ATerm n_37, ATerm o_37, ATerm t)
{
  ATerm h_18 = NULL;
  t = SSL_fopen(n_37, o_37);
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_18);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_18 = NULL;
  t = SSL_stdin_stream();
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_18 = NULL;
  t = SSL_stdout_stream();
  j_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_18 = NULL;
  t = SSL_stderr_stream();
  k_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_18);
  return(t);
}
static ATerm l_20 (ATerm u_18, ATerm t)
{
  ATerm w_18 = NULL;
  t = SSL_explode_term(u_18);
  if(match_cons(t, sym__2))
    {
      ATerm i_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_19 = ATgetArgument(t, 1);
        if(((ATgetType(j_19) == AT_LIST) && !(ATisEmpty(j_19))))
          {
            w_18 = ATgetFirst((ATermList) j_19);
            {
              ATerm k_19 = (ATerm) ATgetNext((ATermList) j_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_20 (ATerm c_19, ATerm d_19, ATerm g_19, ATerm t)
{
  ATerm h_19 = NULL,n_19 = NULL,q_19 = NULL,u_19 = NULL,f_1 = NULL;
  t = SSLgetAnnotations(g_19);
  q_19 = t;
  t = c_19;
  if(match_cons(t, sym_Path_1))
    {
      u_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_19, d_19);
  f_1 = t;
  t = SSLsetAnnotations(f_1, q_19);
  if(match_cons(t, sym__2))
    {
      h_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(h_19, n_19, t);
  return(t);
}
static ATerm n_20 (ATerm w_19, ATerm x_19, ATerm y_19, ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL,g_20 = NULL,g_1 = NULL;
  t = SSLgetAnnotations(y_19);
  b_20 = t;
  t = SSL_is_string(w_19);
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_20, x_19);
  g_1 = t;
  t = SSLsetAnnotations(g_1, b_20);
  if(match_cons(t, sym__2))
    {
      z_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(z_19, a_20, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL;
  i_20 = t;
  if(match_cons(t, sym__2))
    {
      j_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_20(i_20, t);
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            {
              ATerm o_19 = t;
              int p_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_20(j_20, k_20, i_20, t);
                  LocalPopChoice(p_19);
                }
              else
                {
                  t = o_19;
                  t = n_20(j_20, k_20, i_20, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_20(i_20, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,w_20 = NULL;
  w_20 = t;
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_20, term_t_19);
        t = o_6(t);
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        {
          ATerm f_6 = NULL,r_6 = NULL;
          t = term_v_19;
          r_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_19, w_20);
          t = t_6(r_6, w_20, t);
          f_6 = t;
          t = SSL_perror(f_6);
          _fail(t);
        }
      }
  }
  q_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(r_20, t);
  p_20 = t;
  t = q_20;
  t = fclose_0_0(t);
  t = p_20;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_c_20;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_d_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_20 = NULL,a_21 = NULL;
      z_20 = t;
      t = (ATerm) ATinsert(ATempty, term_h_20);
      a_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_20, (ATerm) ATinsert(ATempty, term_h_20));
      t = l_6(z_20, a_21, t);
      LocalPopChoice(f_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = e_20;
      {
        ATerm o_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_20 = t;
            if((PushChoice() == 0))
              {
                ATerm b_21 = NULL,c_21 = NULL;
                b_21 = t;
                t = (ATerm) ATinsert(ATempty, term_v_8);
                c_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_21, (ATerm) ATinsert(ATempty, term_v_8));
                t = l_6(b_21, c_21, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_20;
              }
            t = debug_1_0(d_1, t);
            LocalPopChoice(s_20);
          }
        else
          {
            t = o_20;
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
  t = term_u_20;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_v_20;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm b_22 = NULL,d_22 = NULL,e_22 = NULL;
  b_22 = t;
  t = term_g_17;
  d_22 = t;
  t = (ATerm) ATinsert(ATempty, term_x_20);
  e_22 = t;
  t = SSL_printnl(d_22, e_22);
  t = b_22;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm g_22 = NULL,i_22 = NULL,j_22 = NULL;
  if(match_cons(t, sym__3))
    {
      g_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
      j_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_6(g_22, i_22, j_22, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
  k_22 = t;
  t = term_g_17;
  l_22 = t;
  t = (ATerm) ATinsert(ATempty, term_y_20);
  m_22 = t;
  t = SSL_printnl(l_22, m_22);
  t = k_22;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
  n_22 = t;
  t = term_g_17;
  o_22 = t;
  t = (ATerm) ATinsert(ATempty, term_x_20);
  p_22 = t;
  t = SSL_printnl(o_22, p_22);
  t = n_22;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,u_21 = NULL,v_21 = NULL,y_21 = NULL;
  d_21 = t;
  t = if_verbose5_1_0(i_1, t);
  {
    ATerm e_21 = t;
    if((PushChoice() == 0))
      {
        ATerm z_21 = NULL,a_22 = NULL;
        t = term_l_21;
        z_21 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, d_21);
        a_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_21, (ATerm) ATmakeAppl(sym_Imported_1, d_21));
        t = b_7(z_21, a_22, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_21;
      }
  }
  g_21 = t;
  t = term_l_21;
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_21, term_q_21, (ATerm) ATinsert(ATempty, d_21));
  t = lookup_table_0_1(o_21, t);
  y_21 = t;
  t = term_q_21;
  p_21 = t;
  t = (ATerm) ATinsert(ATempty, d_21);
  u_21 = t;
  t = y_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(p_21, u_21, v_21, t);
  t = g_21;
  t = if_verbose4_1_0(o_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(q_1, t);
  f_21 = t;
  t = term_l_21;
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_21, f_21);
  t = j_6(t_1, n_21, f_21, t);
  t = if_verbose6_1_0(w_1, t);
  t = term_l_21;
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_21, (ATerm)ATmakeAppl(sym_Imported_1, d_21), (ATerm) ATempty);
  t = lookup_table_0_1(h_21, t);
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, d_21);
  i_21 = t;
  t = (ATerm) ATempty;
  j_21 = t;
  t = m_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(i_21, j_21, k_21, t);
  t = (ATerm) ATmakeAppl(sym__3, term_l_21, (ATerm)ATmakeAppl(sym_Imported_1, d_21), (ATerm) ATempty);
  t = if_verbose4_1_0(x_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
  g_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_23;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_23 = ATgetFirst((ATermList) t);
          i_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_7 = NULL,w_7 = NULL,x_7 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(g_23);
            q_7 = t;
            t = h_23;
            t = i_82(t);
            w_7 = t;
            t = i_23;
            t = filter_1_0(i_82, t);
            x_7 = t;
            t = (ATerm) ATinsert(CheckATermList(x_7), w_7);
            j_1 = t;
            t = SSLsetAnnotations(j_1, q_7);
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            t = i_23;
            t = filter_1_0(i_82, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm t)
{
  static ATerm n_23 (ATerm t)
  {
    ATerm t_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_71(t);
        t = n_23(t);
        LocalPopChoice(w_21);
      }
    else
      {
        t = t_21;
        t = w_71(t);
      }
    return(t);
  }
  t = n_23(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_21 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_23 = NULL,p_23 = NULL;
      t = term_s_7;
      o_23 = t;
      t = term_f_22;
      p_23 = t;
      t = term_h_22;
      t = b_7(o_23, p_23, t);
      LocalPopChoice(c_22);
    }
  else
    {
      t = x_21;
      {
        ATerm q_22 = t;
        int r_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_23 = NULL;
            t = term_s_22;
            q_23 = t;
            t = SSL_getenv(q_23);
            LocalPopChoice(r_22);
          }
        else
          {
            t = q_22;
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
  t = term_t_22;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm a_24 = NULL,d_24 = NULL;
  t = term_l_21;
  a_24 = t;
  t = term_u_22;
  d_24 = t;
  t = term_v_22;
  t = b_7(a_24, d_24, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm w_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_22;
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
  t = term_x_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_23 = NULL;
  t = if_verbose5_1_0(y_1, t);
  v_23 = t;
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_23 = NULL,x_23 = NULL;
        t = term_l_21;
        w_23 = t;
        t = term_q_21;
        x_23 = t;
        t = term_a_23;
        t = b_7(w_23, x_23, t);
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        {
          ATerm y_23 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          y_23 = t;
          t = repeat_2_0(a_2, _id, t);
          t = y_23;
        }
      }
  }
  t = v_23;
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
  t = term_b_23;
  return(t);
}
static ATerm y_25 (ATerm j_24, ATerm t)
{
  ATerm l_24 = NULL,q_24 = NULL,t_24 = NULL;
  t = term_l_21;
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, j_24);
  t_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_21, (ATerm) ATmakeAppl(sym_Tool_1, j_24));
  t = b_7(q_24, t_24, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_23 = ATgetFirst((ATermList) t);
      if(match_cons(c_23, sym__2))
        {
          ATerm e_23 = ATgetArgument(c_23, 0);
          l_24 = ATgetArgument(c_23, 1);
        }
      else
        _fail(t);
      {
        ATerm d_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_24;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_b_23;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_l_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_f_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_24 = NULL,w_24 = NULL,z_24 = NULL;
      t = if_verbose5_1_0(e_2, t);
      t = xtc_load_0_0(t);
      z_24 = t;
      if(match_cons(t, sym__2))
        {
          v_24 = ATgetArgument(t, 0);
          w_24 = ATgetArgument(t, 1);
          {
            ATerm l_23 = t;
            int m_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_25 = NULL,k_25 = NULL,m_25 = NULL;
                t = term_l_21;
                k_25 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, v_24);
                m_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_21, (ATerm) ATmakeAppl(sym_Tool_1, v_24));
                t = b_7(k_25, m_25, t);
                {
                  static ATerm g_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((w_24 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((h_25 != NULL) && (h_25 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_25 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(g_2, t);
                }
                t = not_null(h_25);
                LocalPopChoice(m_23);
              }
            else
              {
                t = l_23;
                t = y_25(z_24, t);
              }
          }
        }
      else
        {
          t = y_25(z_24, t);
        }
      t = if_verbose5_1_0(i_2, t);
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
      {
        ATerm v_25 = NULL,n_8 = NULL,o_8 = NULL;
        v_25 = t;
        t = term_g_17;
        n_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_23), v_25), term_r_23);
        o_8 = t;
        t = SSL_printnl(n_8, o_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_23), v_25), term_r_23);
        t = if_verbose5_1_0(n_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm b_7 (ATerm p_33, ATerm q_33, ATerm t)
{
  ATerm b_26 = NULL;
  t = lookup_table_0_1(p_33, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(q_33, b_26, t);
  return(t);
}
static ATerm v_6 (ATerm b_32, ATerm c_32, ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL;
  e_26 = t;
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_32, c_32);
        t = b_7(b_32, c_32, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_23 = ATgetFirst((ATermList) t);
            d_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_23);
        {
          ATerm f_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, b_32, c_32, d_26);
          t = lookup_table_0_1(b_32, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_7(c_32, d_26, f_26, t);
          t = (ATerm) ATmakeAppl(sym__3, b_32, c_32, d_26);
        }
      }
    else
      {
        t = t_23;
        {
          ATerm l_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, b_32, c_32);
          t = lookup_table_0_1(b_32, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_6(c_32, l_26, t);
          t = (ATerm) ATmakeAppl(sym__2, b_32, c_32);
        }
      }
  }
  t = e_26;
  return(t);
}
ATerm end_scope_1_0 (ATerm z_82 (ATerm), ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,w_26 = NULL,x_26 = NULL;
  t_26 = t;
  t = z_82(t);
  s_26 = t;
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_27 = NULL;
        t = term_a_18;
        d_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_26, term_a_18);
        t = b_7(s_26, d_27, t);
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_26 = ATgetFirst((ATermList) t);
      o_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_26, term_a_18, o_26);
  t = lookup_table_0_1(s_26, t);
  x_26 = t;
  t = term_a_18;
  u_26 = t;
  t = x_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(u_26, o_26, w_26, t);
  t = p_26;
  {
    static ATerm s_2 (ATerm t)
    {
      ATerm e_27 = NULL;
      e_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_26, e_27);
      t = v_6(s_26, e_27, t);
      return(t);
    }
    t = map_1_0(s_2, t);
  }
  t = t_26;
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
  ATerm g_27 = NULL,h_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL;
  h_27 = t;
  t = y_82(t);
  g_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_27, term_a_18);
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_24 = ATgetArgument(t, 0);
            ATerm k_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_a_18;
        u_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_27, term_a_18);
        t = b_7(g_27, u_27, t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = (ATerm) ATempty;
      }
  }
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_27, term_a_18, (ATerm) ATinsert(CheckATermList(k_27), (ATerm) ATempty));
  t = lookup_table_0_1(g_27, t);
  o_27 = t;
  t = term_a_18;
  l_27 = t;
  t = (ATerm) ATinsert(CheckATermList(k_27), (ATerm) ATempty);
  m_27 = t;
  t = o_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(l_27, m_27, n_27, t);
  t = h_27;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_f_18;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm k_28 = NULL;
  k_28 = t;
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(k_28);
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = k_28;
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_f_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm a_87 (ATerm), ATerm t)
{
  ATerm b_28 = NULL;
  static ATerm u_2 (ATerm t)
  {
    ATerm c_28 = NULL;
    c_28 = t;
    {
      ATerm o_24 = t;
      int p_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_28 = NULL,f_28 = NULL;
          t = term_f_18;
          d_28 = t;
          t = term_a_18;
          f_28 = t;
          t = term_r_24;
          t = b_7(d_28, f_28, t);
          LocalPopChoice(p_24);
        }
      else
        {
          t = o_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((b_28 != NULL) && (b_28 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          b_28 = ATgetFirst((ATermList) t);
        {
          ATerm s_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = b_28;
    t = map_1_0(d_3, t);
    t = c_28;
    t = end_scope_1_0(e_3, t);
    return(t);
  }
  t = begin_scope_1_0(t_2, t);
  t = restore_always_2_0(a_87, u_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
  n_28 = t;
  t = term_m_18;
  t = whoami_0_0(t);
  o_28 = t;
  t = term_g_17;
  q_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_25), o_28), term_u_24);
  r_28 = t;
  t = SSL_printnl(q_28, r_28);
  t = term_s_8;
  p_28 = t;
  t = SSL_exit(p_28);
  t = n_28;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm t_28 = NULL;
  t_28 = t;
  if(match_string(t, "-k"))
    {
      t = t_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_28;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm u_28 = NULL,x_28 = NULL,z_28 = NULL;
  u_28 = t;
  t = SSL_string_to_int(u_28);
  x_28 = t;
  t = term_d_25;
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_25, x_28);
  t = e_7(z_28, x_28, t);
  t = u_28;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_e_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_3, h_3, l_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  if(match_string(t, "-S"))
    {
      t = e_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_29;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL;
  t = term_m_8;
  f_29 = t;
  t = term_f_25;
  g_29 = t;
  t = term_g_25;
  t = e_7(f_29, g_29, t);
  t = term_i_25;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_j_25;
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
  ATerm h_29 = NULL,k_29 = NULL,l_29 = NULL;
  h_29 = t;
  t = SSL_string_to_int(h_29);
  k_29 = t;
  t = term_m_8;
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, k_29);
  t = e_7(l_29, k_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_29);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_l_25;
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
  ATerm m_29 = NULL,n_29 = NULL;
  t = term_n_25;
  m_29 = t;
  t = term_m_18;
  n_29 = t;
  t = term_o_25;
  t = e_7(m_29, n_29, t);
  t = term_p_25;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_q_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_3, q_3, u_3, t);
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_3, y_3, z_3, t);
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            t = Option_3_0(a_4, b_4, e_4, t);
          }
      }
    }
  return(t);
}
static ATerm e_7 (ATerm b_36, ATerm c_36, ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL;
  t = term_s_7;
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_7, b_36, c_36);
  t = lookup_table_0_1(q_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(b_36, c_36, r_29, t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_7, b_36, c_36);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
      t = term_m_18;
      t = e_0(t);
      x_29 = t;
      t = term_w_25;
      y_29 = t;
      t = term_x_25;
      z_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_25, term_x_25, x_29);
      t = c_7(y_29, z_29, x_29, t);
      _fail(t);
    }
  else
    {
      ATerm n_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_29 = ATgetFirst((ATermList) t);
          w_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_29;
      t = c_0(t);
      t = term_m_18;
      t = d_0(t);
      n_30 = t;
      t = (ATerm) ATinsert(CheckATermList(w_29), n_30);
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  if(match_string(t, "-o"))
    {
      t = p_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_30;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  q_30 = t;
  t = term_v_7;
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_7, q_30);
  t = e_7(r_30, q_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_30);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, i_4, j_4, t);
  return(t);
}
static ATerm c_7 (ATerm w_31, ATerm x_31, ATerm v_31, ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_31, x_31);
  {
    ATerm a_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_26 = ATgetArgument(t, 0);
            ATerm h_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_31, x_31);
        t = b_7(w_31, x_31, t);
        LocalPopChoice(c_26);
      }
    else
      {
        t = a_26;
        t = (ATerm) ATempty;
      }
  }
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_31, x_31, (ATerm) ATinsert(CheckATermList(v_30), v_31));
  t = lookup_table_0_1(w_31, t);
  y_30 = t;
  t = (ATerm) ATinsert(CheckATermList(v_30), v_31);
  w_30 = t;
  t = y_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(x_31, w_30, x_30, t);
  t = u_30;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_31 = NULL,y_31 = NULL,z_31 = NULL,d_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_32 = NULL,i_32 = NULL,j_32 = NULL;
      t = term_m_18;
      t = n_0(t);
      e_32 = t;
      t = term_w_25;
      i_32 = t;
      t = term_x_25;
      j_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_25, term_x_25, e_32);
      t = c_7(i_32, j_32, e_32, t);
      _fail(t);
    }
  else
    {
      ATerm o_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_31 = ATgetFirst((ATermList) t);
          y_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_31 = ATgetFirst((ATermList) t);
          d_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_31;
      t = k_0(t);
      t = z_31;
      t = l_0(t);
      o_32 = t;
      t = (ATerm) ATinsert(CheckATermList(d_32), o_32);
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm s_32 = NULL;
  s_32 = t;
  if(match_string(t, "-i"))
    {
      t = s_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_32;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL;
  y_32 = t;
  t = term_n_18;
  z_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_18, y_32);
  t = e_7(z_32, y_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_32);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_i_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, o_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,g_33 = NULL,m_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_18;
  t = whoami_0_0(t);
  a_33 = t;
  t = term_g_17;
  g_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_26), a_33);
  m_33 = t;
  t = SSL_printnl(g_33, m_33);
  t = term_s_8;
  b_33 = t;
  t = SSL_exit(b_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  t = term_s_7;
  n_33 = t;
  t = term_k_26;
  o_33 = t;
  t = term_m_26;
  t = b_7(n_33, o_33, t);
  return(t);
}
static ATerm w_6 (ATerm v_28, ATerm w_28, ATerm t)
{
  ATerm n_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_28, w_28);
      LocalPopChoice(q_26);
    }
  else
    {
      t = n_26;
      t = SSL_addr(v_28, w_28);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  s_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_33;
      t = e_81(t);
    }
  else
    {
      ATerm x_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_33 = ATgetFirst((ATermList) t);
          u_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_33;
      t = foldr_2_0(e_81, f_81, t);
      x_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_33, x_33);
      t = f_81(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_f_25;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm d_9 = NULL,f_9 = NULL;
  if(match_cons(t, sym__2))
    {
      d_9 = ATgetArgument(t, 0);
      f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(d_9, f_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_34 = NULL,t_8 = NULL,u_8 = NULL;
  t = times_0_0(t);
  u_8 = t;
  t = SSL_explode_term(u_8);
  if(match_cons(t, sym__2))
    {
      ATerm r_26 = ATgetArgument(t, 0);
      t_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_8;
  t = foldr_2_0(p_4, q_4, t);
  c_34 = t;
  t = SSL_TicksToSeconds(c_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,v_34 = NULL;
  r_34 = t;
  if(match_cons(t, sym__2))
    {
      s_34 = ATgetArgument(t, 0);
      v_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_34;
        if((s_34 != t))
          {
            _fail(t);
          }
        t = r_34;
        LocalPopChoice(y_26);
      }
    else
      {
        t = v_26;
        t = (ATerm) ATmakeAppl(sym__2, s_34, v_34);
        {
          ATerm z_26 = t;
          int a_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_34, v_34);
              LocalPopChoice(a_27);
            }
          else
            {
              t = z_26;
              t = SSL_gtr(s_34, v_34);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, s_34, v_34);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm b_35 = NULL;
  b_35 = t;
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_35 = NULL,h_35 = NULL,i_35 = NULL;
        t = term_s_7;
        h_35 = t;
        t = term_m_8;
        i_35 = t;
        t = term_r_8;
        t = b_7(h_35, i_35, t);
        f_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_35, term_s_8);
        t = geq_0_0(t);
        t = b_35;
        t = l_84(t);
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        t = b_35;
      }
  }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,z_35 = NULL,a_36 = NULL;
  t = run_time_0_0(t);
  k_35 = t;
  t = term_m_18;
  t = whoami_0_0(t);
  l_35 = t;
  t = term_g_17;
  z_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_27), k_35), term_a_9), l_35);
  a_36 = t;
  t = SSL_printnl(z_35, a_36);
  t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_27), k_35), term_a_9), l_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_25;
  d_36 = t;
  t = SSL_exit(d_36);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL;
  d_37 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_37;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          c_37 = ATgetArgument(t, 0);
          {
            ATerm x_9 = NULL,c_2 = NULL;
            t = SSLgetAnnotations(d_37);
            x_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, c_37);
            c_2 = t;
            t = SSLsetAnnotations(c_2, x_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_37;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_36 = NULL,p_36 = NULL;
      t = term_s_7;
      o_36 = t;
      t = term_p_27;
      p_36 = t;
      t = term_q_27;
      t = b_7(o_36, p_36, t);
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      t = fetch_1_0(u_4, t);
    }
  t = q_88(t);
  return(t);
}
static ATerm f_7 (ATerm o_35, ATerm p_35, ATerm q_35, ATerm t)
{
  ATerm j_37 = NULL;
  t = SSL_hashtable_put(q_35, o_35, p_35);
  j_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_37);
  return(t);
}
static ATerm g_7 (ATerm r_35, ATerm s_35, ATerm t)
{
  t = SSL_hashtable_get(s_35, r_35);
  return(t);
}
ATerm lookup_table_0_1 (ATerm i_33, ATerm t)
{
  ATerm c_38 = NULL;
  t = table_hashtable_0_0(t);
  c_38 = t;
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_10 = NULL;
        t = c_38;
        if(match_cons(t, sym_Hashtable_1))
          {
            j_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_7(i_33, j_10, t);
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        {
          ATerm r_10 = NULL;
          t = i_33;
          t = table_create_0_0(t);
          t = c_38;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_7(i_33, r_10, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_35, ATerm x_35, ATerm t)
{
  ATerm i_38 = NULL;
  t = SSL_hashtable_create(w_35, x_35);
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_38);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL,r_38 = NULL,t_38 = NULL,u_38 = NULL;
  j_38 = t;
  t = term_t_27;
  t_38 = t;
  t = term_v_27;
  u_38 = t;
  t = j_38;
  t = new_hashtable_0_2(t_38, u_38, t);
  k_38 = t;
  t = j_38;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(j_38, k_38, r_38, t);
  t = j_38;
  return(t);
}
static ATerm y_6 (ATerm t_35, ATerm u_35, ATerm t)
{
  ATerm v_38 = NULL;
  t = SSL_hashtable_remove(u_35, t_35);
  v_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_38);
  return(t);
}
static ATerm z_6 (ATerm y_35, ATerm t)
{
  ATerm w_38 = NULL;
  t = SSL_hashtable_destroy(y_35);
  w_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_38);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm x_38 = NULL;
  t = SSL_table_hashtable();
  x_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_38);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm y_38 = NULL,b_39 = NULL,c_39 = NULL,e_39 = NULL;
  y_38 = t;
  t = table_hashtable_0_0(t);
  b_39 = t;
  t = lookup_table_0_1(y_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_6(e_39, t);
  t = b_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(y_38, c_39, t);
  t = y_38;
  return(t);
}
ATerm map_1_0 (ATerm q_73 (ATerm), ATerm t)
{
  static ATerm z_39 (ATerm t)
  {
    ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
    w_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_39;
      }
    else
      {
        ATerm z_10 = NULL,c_11 = NULL,d_11 = NULL,h_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_39 = ATgetFirst((ATermList) t);
            y_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_39);
        z_10 = t;
        t = x_39;
        t = q_73(t);
        c_11 = t;
        t = y_39;
        t = z_39(t);
        d_11 = t;
        t = (ATerm) ATinsert(CheckATermList(d_11), c_11);
        h_2 = t;
        t = SSLsetAnnotations(h_2, z_10);
      }
    return(t);
  }
  t = z_39(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_40 = ATgetFirst((ATermList) t);
      d_40 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_40 = NULL,j_40 = NULL;
        static ATerm v_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_40)), not_null(j_40));
          return(t);
        }
        t = d_40;
        t = i_0(t);
        if(((i_40 != NULL) && (i_40 != t)))
          _fail(t);
        else
          i_40 = t;
        t = c_40;
        t = g_0(t);
        if(((j_40 != NULL) && (j_40 != t)))
          _fail(t);
        else
          j_40 = t;
        t = d_40;
        t = reverse_acc_2_0(g_0, v_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_18;
      t = i_0(t);
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm p_40 = NULL,t_40 = NULL,u_40 = NULL,m_2 = NULL;
  u_40 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_40);
  p_40 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_40);
  m_2 = t;
  t = SSLsetAnnotations(m_2, p_40);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm w_40 = NULL;
  w_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_40), term_w_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL;
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_40 = NULL,o_40 = NULL;
      t = term_s_7;
      n_40 = t;
      t = term_k_26;
      o_40 = t;
      t = term_m_26;
      t = b_7(n_40, o_40, t);
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      t = fetch_1_0(y_4, t);
    }
  t = term_z_27;
  t = echo_0_0(t);
  t = term_w_25;
  l_40 = t;
  t = term_x_25;
  m_40 = t;
  t = term_a_28;
  t = b_7(l_40, m_40, t);
  t = reverse_acc_2_0(_id, z_4, t);
  t = map_1_0(a_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_74 (ATerm), ATerm t)
{
  static ATerm x_41 (ATerm t)
  {
    ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
    u_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_41 = ATgetFirst((ATermList) t);
        w_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_28 = t;
      int g_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_12 = NULL,h_12 = NULL,o_2 = NULL;
          t = SSLgetAnnotations(u_41);
          d_12 = t;
          t = v_41;
          t = a_74(t);
          h_12 = t;
          t = (ATerm) ATinsert(CheckATermList(w_41), h_12);
          o_2 = t;
          t = SSLsetAnnotations(o_2, d_12);
          LocalPopChoice(g_28);
        }
      else
        {
          t = e_28;
          {
            ATerm u_12 = NULL,y_12 = NULL,w_2 = NULL;
            t = SSLgetAnnotations(u_41);
            u_12 = t;
            t = w_41;
            t = x_41(t);
            y_12 = t;
            t = (ATerm) ATinsert(CheckATermList(y_12), v_41);
            w_2 = t;
            t = SSLsetAnnotations(w_2, u_12);
          }
        }
    }
    return(t);
  }
  t = x_41(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
  b_42 = t;
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_42;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_28 = ATgetFirst((ATermList) t);
                ATerm l_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_42;
          }
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = (ATerm) ATinsert(ATempty, b_42);
      }
  }
  c_42 = t;
  t = term_c_8;
  d_42 = t;
  t = SSL_printnl(d_42, c_42);
  t = b_42;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL;
  t = term_s_7;
  h_42 = t;
  t = term_k_26;
  i_42 = t;
  t = term_m_26;
  t = b_7(h_42, i_42, t);
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
  ATerm j_42 = NULL,k_42 = NULL;
  t = term_m_28;
  j_42 = t;
  t = term_m_18;
  k_42 = t;
  t = term_s_28;
  t = e_7(j_42, k_42, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_y_28;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
  t = term_m_28;
  n_42 = t;
  t = term_m_18;
  o_42 = t;
  t = term_s_28;
  t = e_7(n_42, o_42, t);
  t = term_a_29;
  l_42 = t;
  t = term_m_18;
  m_42 = t;
  t = term_d_29;
  t = e_7(l_42, m_42, t);
  t = term_i_29;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_5, e_5, f_5, t);
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
      t = Option_3_0(i_5, k_5, m_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_60 (ATerm), ATerm q_60 (ATerm), ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,c_4 = NULL;
  u_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_42 = ATgetFirst((ATermList) t);
      r_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_42);
  p_42 = t;
  t = q_42;
  t = p_60(t);
  s_42 = t;
  t = r_42;
  t = q_60(t);
  t_42 = t;
  t = (ATerm) ATinsert(CheckATermList(t_42), s_42);
  c_4 = t;
  t = SSLsetAnnotations(c_4, p_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,e_43 = NULL,f_43 = NULL,f_4 = NULL;
  z_42 = t;
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_29;
        t = o_90(t);
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
      }
  }
  t = z_42;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_43 = ATgetFirst((ATermList) t);
      c_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_42);
  a_43 = t;
  t = term_k_26;
  f_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_26, b_43);
  t = e_7(f_43, b_43, t);
  t = c_43;
  {
    static ATerm p_43 (ATerm t)
    {
      ATerm a_30 = t;
      int b_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_30 = t;
          int d_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_43 = NULL;
              i_43 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_43;
              LocalPopChoice(d_30);
            }
          else
            {
              t = c_30;
              t = o_90(t);
              t = Cons_2_0(_id, p_43, t);
            }
          LocalPopChoice(b_30);
        }
      else
        {
          t = a_30;
          {
            ATerm l_43 = NULL,m_43 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_43 = ATgetFirst((ATermList) t);
                m_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(m_43), (ATerm) ATmakeAppl(sym_Undefined_1, l_43));
          }
        }
      return(t);
    }
    t = p_43(t);
  }
  e_43 = t;
  t = (ATerm) ATinsert(CheckATermList(e_43), (ATerm) ATmakeAppl(sym_Program_1, b_43));
  f_4 = t;
  t = SSLsetAnnotations(f_4, a_43);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm c_44 = NULL;
  c_44 = t;
  if(match_string(t, "--help"))
    {
      t = c_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_44;
        }
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL;
  t = term_p_27;
  d_44 = t;
  t = term_m_18;
  e_44 = t;
  t = term_e_30;
  t = e_7(d_44, e_44, t);
  t = term_f_30;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_g_30;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_90 (ATerm), ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
  w_43 = t;
  t = term_w_25;
  x_43 = t;
  t = term_i_30;
  t = lookup_table_0_1(x_43, t);
  b_44 = t;
  t = term_x_25;
  y_43 = t;
  t = (ATerm) ATempty;
  z_43 = t;
  t = b_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(y_43, z_43, a_44, t);
  t = w_43;
  {
    static ATerm n_5 (ATerm t)
    {
      ATerm k_30 = t;
      int l_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_90(t);
          LocalPopChoice(l_30);
        }
      else
        {
          t = k_30;
          {
            ATerm m_30 = t;
            int o_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_5, q_5, r_5, t);
                LocalPopChoice(o_30);
              }
            else
              {
                t = m_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_5, t);
  }
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_44 = NULL;
        p_44 = t;
        {
          ATerm z_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_13 = NULL;
              t = p_44;
              {
                ATerm b_31 = t;
                int c_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_13 = NULL,v_13 = NULL;
                    t = term_s_7;
                    q_13 = t;
                    t = term_p_27;
                    v_13 = t;
                    t = term_q_27;
                    t = b_7(q_13, v_13, t);
                    LocalPopChoice(c_31);
                  }
                else
                  {
                    t = b_31;
                    t = fetch_1_0(s_5, t);
                  }
              }
              t = p_44;
              t = default_system_usage_0_0(t);
              t = term_f_25;
              p_13 = t;
              t = SSL_exit(p_13);
              LocalPopChoice(a_31);
            }
          else
            {
              t = z_30;
              {
                ATerm e_14 = NULL,i_14 = NULL,l_14 = NULL;
                t = term_s_7;
                i_14 = t;
                t = term_m_28;
                l_14 = t;
                t = term_d_31;
                t = b_7(i_14, l_14, t);
                t = p_44;
                t = default_system_about_0_0(t);
                t = term_f_25;
                e_14 = t;
                t = SSL_exit(e_14);
              }
            }
        }
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        {
          ATerm e_31 = t;
          int f_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
              static ATerm t_5 (ATerm t)
              {
                ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,h_4 = NULL;
                v_44 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_44 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_44);
                t_44 = t;
                t = u_44;
                if(((u_43 != NULL) && (u_43 != t)))
                  _fail(t);
                else
                  u_43 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_44);
                h_4 = t;
                t = SSLsetAnnotations(h_4, t_44);
                return(t);
              }
              t = fetch_1_0(t_5, t);
              t = term_g_17;
              r_44 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_43)), term_g_31);
              s_44 = t;
              t = SSL_printnl(r_44, s_44);
              t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_43)), term_g_31));
              t = default_system_usage_0_0(t);
              t = term_s_8;
              q_44 = t;
              t = SSL_exit(q_44);
              LocalPopChoice(f_31);
            }
          else
            {
              t = e_31;
            }
        }
      }
  }
  v_43 = t;
  t = term_w_25;
  t = table_destroy_0_0(t);
  t = v_43;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm v_88 (ATerm), ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL;
  t = parse_options_1_0(s_88, t);
  a_45 = t;
  t = term_h_31;
  t = table_create_0_0(t);
  t = term_h_31;
  b_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_31, term_i_31, a_45);
  t = lookup_table_0_1(b_45, t);
  e_45 = t;
  t = term_i_31;
  c_45 = t;
  t = e_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(c_45, a_45, d_45, t);
  t = a_45;
  t = u_88(t);
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_88, t);
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        {
          ATerm l_31 = t;
          int m_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_88(t);
              t = report_success_0_0(t);
              LocalPopChoice(m_31);
            }
          else
            {
              t = l_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      {
        ATerm p_31 = t;
        int r_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(r_31);
          }
        else
          {
            t = p_31;
            {
              ATerm s_31 = t;
              int t_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(w_5, x_5, y_5, t);
                  LocalPopChoice(t_31);
                }
              else
                {
                  t = s_31;
                  {
                    ATerm u_31 = t;
                    int a_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(a_32);
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
  ATerm m_45 = NULL,n_45 = NULL;
  t = term_f_32;
  m_45 = t;
  t = term_m_18;
  n_45 = t;
  t = term_g_32;
  t = e_7(m_45, n_45, t);
  t = term_h_32;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_k_32;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
      t = term_s_7;
      q_45 = t;
      t = term_n_18;
      r_45 = t;
      t = term_n_32;
      t = b_7(q_45, r_45, t);
      p_45 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_45);
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      t = term_i_8;
    }
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_45 = NULL,y_45 = NULL;
        y_45 = t;
        if(match_cons(t, sym_FILE_1))
          {
            x_45 = ATgetArgument(t, 0);
            {
              ATerm u_14 = NULL,k_4 = NULL;
              t = SSLgetAnnotations(y_45);
              u_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_45);
              k_4 = t;
              t = SSLsetAnnotations(k_4, u_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_45;
          }
        LocalPopChoice(q_32);
        t = xtc_transform_file_2_0(a_6, b_6, t);
      }
    else
      {
        t = p_32;
        t = xtc_transform_term_2_0(c_6, x_6, t);
      }
  }
  {
    ATerm r_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_46 = NULL,h_46 = NULL;
        h_46 = t;
        if(match_cons(t, sym_FILE_1))
          {
            g_46 = ATgetArgument(t, 0);
            {
              ATerm n_15 = NULL,n_4 = NULL;
              t = SSLgetAnnotations(h_46);
              n_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_46);
              n_4 = t;
              t = SSLsetAnnotations(n_4, n_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_46;
          }
        LocalPopChoice(w_32);
        t = xtc_transform_file_2_0(a_7, pass_verbose_0_0, t);
      }
    else
      {
        t = r_32;
        t = xtc_transform_term_2_0(h_7, pass_verbose_0_0, t);
      }
  }
  {
    ATerm x_32 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_46 = NULL,o_46 = NULL;
        o_46 = t;
        if(match_cons(t, sym_FILE_1))
          {
            n_46 = ATgetArgument(t, 0);
            {
              ATerm v_15 = NULL,s_4 = NULL;
              t = SSLgetAnnotations(o_46);
              v_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_46);
              s_4 = t;
              t = SSLsetAnnotations(s_4, v_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_46;
          }
        LocalPopChoice(e_33);
        t = xtc_transform_file_2_0(i_7, pass_verbose_0_0, t);
      }
    else
      {
        t = x_32;
        t = xtc_transform_term_2_0(j_7, pass_verbose_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_f_33;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm z_45 = NULL;
  t = term_h_33;
  t = xtc_find_0_0(t);
  z_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_45), term_j_33);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_f_33;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm a_46 = NULL;
  t = term_h_33;
  t = xtc_find_0_0(t);
  a_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_46), term_j_33);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_k_33;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_k_33;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_l_33;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_l_33;
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
