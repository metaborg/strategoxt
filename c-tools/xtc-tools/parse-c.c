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
ATerm term_g_33;
ATerm term_z_32;
ATerm term_v_32;
ATerm term_l_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_f_31;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_v_29;
ATerm term_n_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_w_28;
ATerm term_i_28;
ATerm term_b_28;
ATerm term_w_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_q_27;
ATerm term_n_27;
ATerm term_j_27;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_l_25;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_l_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_d_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_w_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_t_21;
ATerm term_m_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_m_20;
ATerm term_i_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_t_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_p_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
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
ATerm term_k_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_j_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_i_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_e_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_l_8;
ATerm term_e_8;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_t_7;
ATerm term_s_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_t_7);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_l_8);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_9, term_r_8, term_i_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_9, term_n_9, term_p_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_w_9, term_x_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_d_10, term_e_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_h_10, term_i_10);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_10, term_m_10, term_o_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_u_10, term_v_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_11, term_f_11, term_h_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_l_11, term_m_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_11, term_q_11, term_r_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_11, term_w_11, term_z_11);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_i_12, term_j_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_s_12, term_t_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_x_12, term_z_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_e_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_o_13, term_u_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_y_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_g_14, term_j_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_s_14, term_v_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_f_15, term_g_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_x_15, term_y_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_c_16, term_d_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_i_16, term_j_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_o_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_r_16, term_s_16);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_k_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym__2, term_m_21, term_z_22);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__2, term_m_21, term_t_21);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_g_18, term_x_17);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym__2, term_l_8, term_r_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_25);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym__2, term_z_25, term_i_18);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_s_26);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_n_27);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym__2, term_j_26, term_k_26);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_i_18);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_t_18, term_i_18);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym__2, term_n_27, term_i_18);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym__3, term_j_26, term_k_26, (ATerm) ATempty);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_w_28);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_i_18);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_j_18);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("C.tbl", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm y_6 (ATerm t_14, ATerm u_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm h_6 (ATerm b_34, ATerm c_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm q_6 (ATerm t_17, ATerm u_17, ATerm t);
static ATerm t_6 (ATerm e_79 (ATerm), ATerm l_181, ATerm d_18, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t);
static ATerm u_6 (ATerm l_14, ATerm m_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm h_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm t_77 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm x_101 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm m_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_10 (ATerm s_9, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm w_6 (ATerm t_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm w_98 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
ATerm pass_v_verbose_0_0 (ATerm t);
ATerm debug_1_0 (ATerm c_79 (ATerm), ATerm t);
static ATerm i_6 (ATerm m_50, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm y_98 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm x_98 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm z_98 (ATerm), ATerm t);
static ATerm k_6 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t);
static ATerm l_6 (ATerm g_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
static ATerm c_1 (ATerm t);
static ATerm m_6 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t);
static ATerm n_6 (ATerm b_99 (ATerm), ATerm u_46, ATerm t_46, ATerm t);
static ATerm p_6 (ATerm v_51, ATerm w_51, ATerm t);
static ATerm n_18 (ATerm f_18, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_6 (ATerm z_17, ATerm t);
static ATerm x_6 (ATerm q_32, ATerm r_32, ATerm t);
static ATerm r_6 (ATerm e_52, ATerm f_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_20 (ATerm z_18, ATerm t);
static ATerm t_20 (ATerm h_19, ATerm k_19, ATerm l_19, ATerm t);
static ATerm u_20 (ATerm d_20, ATerm e_20, ATerm f_20, ATerm t);
static ATerm s_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm n_92 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_26 (ATerm v_24, ATerm t);
static ATerm k_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm xtc_sglr_1_0 (ATerm c_112 (ATerm), ATerm t);
static ATerm f_7 (ATerm g_47, ATerm h_47, ATerm t);
static ATerm z_6 (ATerm s_45, ATerm t_45, ATerm t);
ATerm end_scope_1_0 (ATerm q_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_94 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm j_101 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_7 (ATerm s_50, ATerm t_50, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm g_7 (ATerm n_45, ATerm o_45, ATerm m_45, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm a_7 (ATerm v_33, ATerm w_33, ATerm t);
ATerm foldr_2_0 (ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm u_98 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm need_help_1_0 (ATerm z_102 (ATerm), ATerm t);
static ATerm j_7 (ATerm f_50, ATerm g_50, ATerm h_50, ATerm t);
static ATerm k_7 (ATerm i_50, ATerm j_50, ATerm t);
ATerm lookup_table_0_1 (ATerm z_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm n_50, ATerm o_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm c_7 (ATerm k_50, ATerm l_50, ATerm t);
static ATerm d_7 (ATerm p_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm v_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm x_104 (ATerm), ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm parse_options_1_0 (ATerm w_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm m_1 = NULL,o_1 = NULL;
  m_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = m_1;
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
        t = (ATerm) ATmakeAppl(sym__2, o_1, e_0);
        t = y_6(o_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
        LocalPopChoice(h_7);
      }
    else
      {
        t = e_7;
        {
          ATerm l_7 = t;
          int m_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_0 = NULL;
              t = m_1;
              t = q_0(t);
              w_0 = t;
              {
                ATerm n_7 = t;
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
                            if((o_1 != t))
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
                    t = n_7;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, o_1, w_0);
              t = y_6(o_1, w_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
              LocalPopChoice(m_7);
            }
          else
            {
              t = l_7;
              t = m_1;
              t = q_0(t);
              if((o_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
            }
        }
      }
  }
  return(t);
}
static ATerm y_6 (ATerm t_14, ATerm u_14, ATerm t)
{
  t = SSL_copy(t_14, u_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm o_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_2 = NULL,u_2 = NULL;
      t = term_s_7;
      t_2 = t;
      t = term_t_7;
      u_2 = t;
      t = term_x_7;
      t = f_7(t_2, u_2, t);
      LocalPopChoice(q_7);
    }
  else
    {
      t = o_7;
      t = term_y_7;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm r_2 = NULL;
  r_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_1 = NULL,g_1 = NULL;
      t = term_t_7;
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 = NULL,p_1 = NULL;
            t = term_s_7;
            n_1 = t;
            t = term_t_7;
            p_1 = t;
            t = term_x_7;
            t = f_7(n_1, p_1, t);
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            t = term_y_7;
          }
      }
      f_1 = t;
      t = term_e_8;
      g_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_e_8, f_1);
      t = y_6(g_1, f_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm f_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm h_6 (ATerm b_34, ATerm c_34, ATerm t)
{
  ATerm g_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(b_34, c_34);
      LocalPopChoice(k_8);
    }
  else
    {
      t = g_8;
      t = SSL_subtr(b_34, c_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL;
  t = term_l_8;
  {
    ATerm n_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL,d_3 = NULL;
        t = term_s_7;
        c_3 = t;
        t = term_l_8;
        d_3 = t;
        t = term_q_8;
        t = f_7(c_3, d_3, t);
        LocalPopChoice(p_8);
      }
    else
      {
        t = n_8;
        t = term_r_8;
      }
  }
  z_2 = t;
  t = term_r_8;
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_2, term_r_8);
  t = h_6(z_2, b_3, t);
  a_3 = t;
  t = SSL_int_to_string(a_3);
  y_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_2), term_l_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm h_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_e_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm j_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          h_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_s_8);
      j_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_3, (ATerm) ATinsert(ATempty, term_s_8));
      t = p_6(h_3, j_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm q_6 (ATerm t_17, ATerm u_17, ATerm t)
{
  ATerm l_3 = NULL;
  t = SSL_write_term_to_stream_baf(t_17, u_17);
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_3);
  return(t);
}
static ATerm t_6 (ATerm e_79 (ATerm), ATerm l_181, ATerm d_18, ATerm t)
{
  ATerm n_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_181, term_t_8);
  t = s_6(t);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_3, d_18);
  t = e_79(t);
  t = fclose_0_0(t);
  t = d_18;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm u_3 = NULL,w_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_8 = ATgetArgument(t, 0);
      if(match_cons(u_8, sym_Stream_1))
        {
          u_3 = ATgetArgument(u_8, 0);
        }
      else
        _fail(t);
      w_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(u_3, w_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,t_3 = NULL;
  t_3 = t;
  t = xtc_new_file_0_0(t);
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_3, t_3);
  t = t_6(b_0, r_3, t_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_3);
  t = xtc_transform_file_2_0(w_100, x_100, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm u_6 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_execvp(l_14, m_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  z_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      a_5 = ATgetArgument(t, 0);
      {
        ATerm u_1 = NULL,v_1 = NULL;
        t = SSL_int_to_string(a_5);
        u_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_8), u_1), term_w_8);
        v_1 = t;
        t = SSL_concat_strings(v_1);
      }
    }
  else
    {
      ATerm i_2 = NULL,m_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          a_5 = ATgetArgument(t, 0);
          b_5 = ATgetArgument(t, 1);
          c_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(b_5);
      i_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_5), term_z_8), i_2), term_y_8), a_5);
      m_2 = t;
      t = SSL_concat_strings(m_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm h_84 (ATerm), ATerm t)
{
  ATerm g_5 = NULL;
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    t = h_84(t);
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
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_0 (ATerm t);
        static ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm c_9 = ATgetArgument(t, 0);
              if((h_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm d_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_16), term_p_16), term_k_16), term_e_16), term_z_15), term_v_15), term_r_15), term_n_15), term_h_15), term_y_14), term_o_14), term_a_14), term_v_13), term_i_13), term_b_13), term_v_12), term_n_12), term_b_12), term_s_11), term_o_11), term_j_11), term_a_11), term_s_10), term_j_10), term_f_10), term_b_10), term_q_9), term_j_9);
        t = fetch_elem_1_0(f_0, t);
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, h_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_5 = NULL,j_6 = NULL;
  n_5 = t;
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_17 = ATgetArgument(t, 0);
            j_6 = ATgetArgument(t, 1);
            {
              ATerm b_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_16);
        {
          ATerm c_17 = t;
          int d_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_3 = NULL,m_3 = NULL,o_3 = NULL;
              t = j_6;
              {
                ATerm e_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_17;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              f_3 = t;
              t = term_g_17;
              m_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_3), term_h_17);
              o_3 = t;
              t = SSL_printnl(m_3, o_3);
              t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATempty, f_3), term_h_17));
              LocalPopChoice(d_17);
            }
          else
            {
              t = c_17;
              t = n_5;
            }
        }
      }
    else
      {
        t = y_16;
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
ATerm fork_and_wait_1_0 (ATerm t_77 (ATerm), ATerm t)
{
  ATerm p_7 = NULL,u_7 = NULL;
  u_7 = t;
  t = fork_0_0(t);
  p_7 = t;
  {
    ATerm j_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = u_7;
        t = t_77(t);
        LocalPopChoice(l_17);
      }
    else
      {
        t = j_17;
        t = SSL_waitpid(p_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_17 = ATgetArgument(t, 0);
            if(((ATgetType(m_17) != AT_INT) || (ATgetInt((ATermInt) m_17) != 0)))
              _fail(t);
            {
              ATerm n_17 = ATgetArgument(t, 1);
            }
            {
              ATerm o_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_7;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm x_101 (ATerm), ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL;
  a_8 = t;
  t = x_101(t);
  t = xtc_find_0_0(t);
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_7, a_8);
  {
    static ATerm i_0 (ATerm t);
    static ATerm i_0 (ATerm t)
    {
      ATerm d_8 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, z_7, a_8);
      t = u_6(z_7, a_8, t);
      t = term_p_17;
      d_8 = t;
      t = SSL_exit(d_8);
      return(t);
    }
    t = fork_and_wait_1_0(i_0, t);
  }
  t = a_8;
  return(t);
}
ATerm at_end_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  static ATerm o_9 (ATerm t);
  static ATerm o_9 (ATerm t)
  {
    ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
    h_9 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_9 = ATgetFirst((ATermList) t);
        g_9 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_3 = NULL,a_4 = NULL,v_0 = NULL;
          t = SSLgetAnnotations(h_9);
          x_3 = t;
          t = g_9;
          t = o_9(t);
          a_4 = t;
          t = (ATerm) ATinsert(CheckATermList(a_4), f_9);
          v_0 = t;
          t = SSLsetAnnotations(v_0, x_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_9;
        t = m_84(t);
      }
    return(t);
  }
  t = o_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
  h_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_8;
    }
  else
    {
      static ATerm k_0 (ATerm t);
      static ATerm k_0 (ATerm t)
      {
        t = not_null(j_8);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_8 = ATgetFirst((ATermList) t);
          if(((j_8 != NULL) && (j_8 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_8;
      t = at_end_1_0(k_0, t);
    }
  return(t);
}
static ATerm l_10 (ATerm s_9, ATerm t)
{
  ATerm t_9 = NULL;
  t = SSL_explode_term(s_9);
  if(match_cons(t, sym__2))
    {
      ATerm q_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_9;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
  a_10 = t;
  if(match_cons(t, sym__2))
    {
      y_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
      {
        ATerm r_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_0 (ATerm t);
            static ATerm n_0 (ATerm t)
            {
              t = z_9;
              return(t);
            }
            t = y_9;
            t = at_end_1_0(n_0, t);
            LocalPopChoice(s_17);
          }
        else
          {
            t = r_17;
            t = l_10(a_10, t);
          }
      }
    }
  else
    {
      t = l_10(a_10, t);
    }
  return(t);
}
static ATerm w_6 (ATerm t_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,c_11 = NULL,d_11 = NULL;
  x_10 = t;
  t = t_94(t);
  p_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_10, j_35, h_35);
  t = g_7(p_10, j_35, h_35, t);
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_11 = NULL;
        t = term_x_17;
        e_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_10, term_x_17);
        t = f_7(p_10, e_11, t);
        {
          ATerm y_17 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_17;
            }
        }
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_10 = ATgetFirst((ATermList) t);
      r_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_10, term_x_17, (ATerm) ATinsert(CheckATermList(r_10), (ATerm) ATinsert(CheckATermList(q_10), j_35)));
  t = lookup_table_0_1(p_10, t);
  d_11 = t;
  t = term_x_17;
  y_10 = t;
  t = (ATerm) ATinsert(CheckATermList(r_10), (ATerm) ATinsert(CheckATermList(q_10), j_35));
  z_10 = t;
  t = d_11;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(y_10, z_10, c_11, t);
  t = x_10;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm g_11 = NULL;
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_11 = NULL,t_4 = NULL;
      x_11 = t;
      t = term_c_18;
      t_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_11, term_c_18);
      t = x_6(x_11, t_4, t);
      g_11 = t;
      t = SSL_mkstemp(g_11);
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      {
        ATerm y_11 = NULL;
        t = term_e_18;
        y_11 = t;
        t = SSL_perror(y_11);
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
  t = term_g_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm a_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
  t = P__tmpdir_0_0(t);
  e_12 = t;
  t = term_h_18;
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_12, term_h_18);
  t = x_6(e_12, f_12, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      c_12 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_i_18;
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_12, term_i_18);
  t = w_6(s_0, c_12, d_12, t);
  t = SSL_close(a_12);
  t = c_12;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,k_12 = NULL;
  h_12 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_12 = NULL,m_12 = NULL;
      t = h_12;
      t = xtc_new_file_0_0(t);
      l_12 = t;
      t = t_0(t);
      m_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_12, (ATerm) ATinsert(ATinsert(ATempty, l_12), term_t_7));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_12);
    }
  else
    {
      ATerm p_12 = NULL,r_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_12;
      t = xtc_new_file_0_0(t);
      p_12 = t;
      t = t_0(t);
      r_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_12), term_t_7), k_12), term_j_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_12);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm y_12 = NULL;
  y_12 = t;
  {
    ATerm m_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_13 = NULL,f_13 = NULL,h_13 = NULL;
        t = term_s_7;
        f_13 = t;
        t = term_l_8;
        h_13 = t;
        t = term_q_8;
        t = f_7(f_13, h_13, t);
        a_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_13, term_w_9);
        t = geq_0_0(t);
        t = y_12;
        t = w_98(t);
        LocalPopChoice(s_18);
      }
    else
      {
        t = m_18;
        t = y_12;
      }
  }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_18);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(u_0, t);
  return(t);
}
ATerm debug_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
  j_13 = t;
  t = c_79(t);
  k_13 = t;
  t = term_g_17;
  l_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_13), k_13);
  m_13 = t;
  t = SSL_printnl(l_13, m_13);
  t = j_13;
  return(t);
}
static ATerm i_6 (ATerm m_50, ATerm t)
{
  t = SSL_hashtable_keys(m_50);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL;
  static ATerm y_0 (ATerm t);
  static ATerm y_0 (ATerm t)
  {
    ATerm r_13 = NULL,t_13 = NULL;
    r_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), r_13);
    t = f_7(not_null(p_13), r_13, t);
    t_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_13, t_13);
    return(t);
  }
  if(((p_13 != NULL) && (p_13 != t)))
    _fail(t);
  else
    p_13 = t;
  t = lookup_table_0_1(p_13, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(q_13, t);
  t = map_1_0(y_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm y_98 (ATerm), ATerm t)
{
  ATerm z_13 = NULL;
  z_13 = t;
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
        t = term_s_7;
        c_14 = t;
        t = term_l_8;
        d_14 = t;
        t = term_q_8;
        t = f_7(c_14, d_14, t);
        b_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_14, term_c_16);
        t = geq_0_0(t);
        t = z_13;
        t = y_98(t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        t = z_13;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm x_98 (ATerm), ATerm t)
{
  ATerm i_14 = NULL;
  i_14 = t;
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_14 = NULL,q_14 = NULL,r_14 = NULL;
        t = term_s_7;
        q_14 = t;
        t = term_l_8;
        r_14 = t;
        t = term_q_8;
        t = f_7(q_14, r_14, t);
        n_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_14, term_i_12);
        t = geq_0_0(t);
        t = i_14;
        t = x_98(t);
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = i_14;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm x_14 = NULL;
  x_14 = t;
  {
    ATerm y_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_14 = NULL,a_15 = NULL,e_15 = NULL;
        t = term_s_7;
        a_15 = t;
        t = term_l_8;
        e_15 = t;
        t = term_q_8;
        t = f_7(a_15, e_15, t);
        z_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_14, term_d_10);
        t = geq_0_0(t);
        t = x_14;
        t = z_98(t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = y_18;
        t = x_14;
      }
  }
  return(t);
}
static ATerm k_6 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  t = k_88(t);
  {
    static ATerm a_1 (ATerm t);
    static ATerm a_1 (ATerm t)
    {
      ATerm i_15 = NULL;
      i_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_25, i_15);
      t = j_88(t);
      return(t);
    }
    t = fetch_1_0(a_1, t);
  }
  t = g_25;
  return(t);
}
static ATerm l_6 (ATerm g_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  static ATerm l_16 (ATerm t);
  static ATerm l_16 (ATerm t)
  {
    ATerm b_16 = NULL,g_16 = NULL,h_16 = NULL;
    b_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_16 = ATgetFirst((ATermList) t);
            h_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_19 = t;
          int d_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_16;
              {
                static ATerm b_1 (ATerm t);
                static ATerm b_1 (ATerm t)
                {
                  t = c_25;
                  return(t);
                }
                t = k_6(g_88, b_1, g_16, h_16, t);
              }
              t = l_16(t);
              LocalPopChoice(d_19);
            }
          else
            {
              t = b_19;
              {
                ATerm i_5 = NULL,l_5 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(b_16);
                i_5 = t;
                t = h_16;
                t = l_16(t);
                l_5 = t;
                t = (ATerm) ATinsert(CheckATermList(l_5), g_16);
                z_0 = t;
                t = SSLsetAnnotations(z_0, i_5);
              }
            }
        }
      }
    return(t);
  }
  t = d_25;
  t = l_16(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm f_17 = NULL;
  if(match_cons(t, sym__2))
    {
      f_17 = ATgetArgument(t, 0);
      if((f_17 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_6 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  u_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_46, l_46);
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_19 = ATgetArgument(t, 0);
            ATerm i_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_46, l_46);
        t = f_7(k_46, l_46, t);
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        t = (ATerm) ATempty;
      }
  }
  w_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_16, m_46);
  t = l_6(c_1, w_16, m_46, t);
  v_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_46, l_46, v_16);
  t = lookup_table_0_1(k_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(l_46, v_16, x_16, t);
  t = u_16;
  return(t);
}
static ATerm n_6 (ATerm b_99 (ATerm), ATerm u_46, ATerm t_46, ATerm t)
{
  static ATerm d_1 (ATerm t);
  static ATerm d_1 (ATerm t)
  {
    ATerm i_17 = NULL,k_17 = NULL;
    if(match_cons(t, sym__2))
      {
        i_17 = ATgetArgument(t, 0);
        k_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, u_46, i_17, k_17);
    t = b_99(t);
    return(t);
  }
  t = t_46;
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm p_6 (ATerm v_51, ATerm w_51, ATerm t)
{
  t = SSL_access(v_51, w_51);
  return(t);
}
static ATerm n_18 (ATerm f_18, ATerm t)
{
  t = SSL_fclose(f_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL;
  l_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_18 = ATgetArgument(t, 0);
      {
        ATerm j_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_18);
            LocalPopChoice(m_19);
          }
        else
          {
            t = j_19;
            t = n_18(l_18, t);
          }
      }
    }
  else
    {
      t = n_18(l_18, t);
    }
  return(t);
}
static ATerm o_6 (ATerm z_17, ATerm t)
{
  t = SSL_read_term_from_stream(z_17);
  return(t);
}
static ATerm x_6 (ATerm q_32, ATerm r_32, ATerm t)
{
  t = SSL_strcat(q_32, r_32);
  return(t);
}
static ATerm r_6 (ATerm e_52, ATerm f_52, ATerm t)
{
  ATerm o_18 = NULL;
  t = SSL_fopen(e_52, f_52);
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_18);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_18 = NULL;
  t = SSL_stdin_stream();
  p_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_18 = NULL;
  t = SSL_stdout_stream();
  q_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_18 = NULL;
  t = SSL_stderr_stream();
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_18);
  return(t);
}
static ATerm s_20 (ATerm z_18, ATerm t)
{
  ATerm c_19 = NULL;
  t = SSL_explode_term(z_18);
  if(match_cons(t, sym__2))
    {
      ATerm n_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_19 = ATgetArgument(t, 1);
        if(((ATgetType(o_19) == AT_LIST) && !(ATisEmpty(o_19))))
          {
            c_19 = ATgetFirst((ATermList) o_19);
            {
              ATerm p_19 = (ATerm) ATgetNext((ATermList) o_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_19;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_19;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_19;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_19;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_20 (ATerm h_19, ATerm k_19, ATerm l_19, ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,b_20 = NULL,e_1 = NULL;
  t = SSLgetAnnotations(l_19);
  v_19 = t;
  t = h_19;
  if(match_cons(t, sym_Path_1))
    {
      b_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_20, k_19);
  e_1 = t;
  t = SSLsetAnnotations(e_1, v_19);
  if(match_cons(t, sym__2))
    {
      t_19 = ATgetArgument(t, 0);
      u_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(t_19, u_19, t);
  return(t);
}
static ATerm u_20 (ATerm d_20, ATerm e_20, ATerm f_20, ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,k_20 = NULL,n_20 = NULL,h_1 = NULL;
  t = SSLgetAnnotations(f_20);
  k_20 = t;
  t = SSL_is_string(d_20);
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_20, e_20);
  h_1 = t;
  t = SSLsetAnnotations(h_1, k_20);
  if(match_cons(t, sym__2))
    {
      g_20 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(g_20, h_20, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  if(match_cons(t, sym__2))
    {
      q_20 = ATgetArgument(t, 0);
      r_20 = ATgetArgument(t, 1);
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_20(p_20, t);
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            {
              ATerm s_19 = t;
              int w_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_20(q_20, r_20, p_20, t);
                  LocalPopChoice(w_19);
                }
              else
                {
                  t = s_19;
                  t = u_20(q_20, r_20, p_20, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_20(p_20, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,d_21 = NULL;
  d_21 = t;
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_21, term_z_19);
        t = s_6(t);
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        {
          ATerm e_6 = NULL,g_6 = NULL;
          t = term_a_20;
          g_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_20, d_21);
          t = x_6(g_6, d_21, t);
          e_6 = t;
          t = SSL_perror(e_6);
          _fail(t);
        }
      }
  }
  x_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(y_20, t);
  w_20 = t;
  t = x_20;
  t = fclose_0_0(t);
  t = w_20;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_c_20;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm j_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_21 = NULL,h_21 = NULL;
      g_21 = t;
      t = (ATerm) ATinsert(ATempty, term_m_20);
      h_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_21, (ATerm) ATinsert(ATempty, term_m_20));
      t = p_6(g_21, h_21, t);
      LocalPopChoice(l_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = j_20;
      {
        ATerm o_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_20 = t;
            if((PushChoice() == 0))
              {
                ATerm i_21 = NULL,j_21 = NULL;
                i_21 = t;
                t = (ATerm) ATinsert(ATempty, term_s_8);
                j_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_21, (ATerm) ATinsert(ATempty, term_s_8));
                t = p_6(i_21, j_21, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = z_20;
              }
            t = debug_1_0(i_1, t);
            LocalPopChoice(v_20);
          }
        else
          {
            t = o_20;
            t = debug_1_0(j_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,l_22 = NULL;
  i_22 = t;
  t = term_g_17;
  j_22 = t;
  t = (ATerm) ATinsert(ATempty, term_c_21);
  l_22 = t;
  t = SSL_printnl(j_22, l_22);
  t = i_22;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm m_22 = NULL,o_22 = NULL,q_22 = NULL;
  if(match_cons(t, sym__3))
    {
      m_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
      q_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_6(m_22, o_22, q_22, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  r_22 = t;
  t = term_g_17;
  s_22 = t;
  t = (ATerm) ATinsert(ATempty, term_e_21);
  t_22 = t;
  t = SSL_printnl(s_22, t_22);
  t = r_22;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm u_22 = NULL,x_22 = NULL,b_23 = NULL;
  u_22 = t;
  t = term_g_17;
  x_22 = t;
  t = (ATerm) ATinsert(ATempty, term_c_21);
  b_23 = t;
  t = SSL_printnl(x_22, b_23);
  t = u_22;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,c_22 = NULL,d_22 = NULL;
  k_21 = t;
  t = if_verbose5_1_0(l_1, t);
  {
    ATerm f_21 = t;
    if((PushChoice() == 0))
      {
        ATerm g_22 = NULL,h_22 = NULL;
        t = term_m_21;
        g_22 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, k_21);
        h_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATmakeAppl(sym_Imported_1, k_21));
        t = f_7(g_22, h_22, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_21;
      }
  }
  n_21 = t;
  t = term_m_21;
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_21, term_t_21, (ATerm) ATinsert(ATempty, k_21));
  t = lookup_table_0_1(v_21, t);
  d_22 = t;
  t = term_t_21;
  w_21 = t;
  t = (ATerm) ATinsert(ATempty, k_21);
  x_21 = t;
  t = d_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(w_21, x_21, c_22, t);
  t = n_21;
  t = if_verbose4_1_0(r_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(t_1, t);
  l_21 = t;
  t = term_m_21;
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_21, l_21);
  t = n_6(w_1, u_21, l_21, t);
  t = if_verbose6_1_0(y_1, t);
  t = term_m_21;
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_21, (ATerm)ATmakeAppl(sym_Imported_1, k_21), (ATerm) ATempty);
  t = lookup_table_0_1(o_21, t);
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, k_21);
  p_21 = t;
  t = (ATerm) ATempty;
  q_21 = t;
  t = s_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(p_21, q_21, r_21, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_21, (ATerm)ATmakeAppl(sym_Imported_1, k_21), (ATerm) ATempty);
  t = if_verbose4_1_0(z_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm n_92 (ATerm), ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
  t_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_23;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_23 = ATgetFirst((ATermList) t);
          v_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_7 = NULL,v_7 = NULL,w_7 = NULL,k_1 = NULL;
            t = SSLgetAnnotations(t_23);
            r_7 = t;
            t = u_23;
            t = n_92(t);
            v_7 = t;
            t = v_23;
            t = filter_1_0(n_92, t);
            w_7 = t;
            t = (ATerm) ATinsert(CheckATermList(w_7), v_7);
            k_1 = t;
            t = SSLsetAnnotations(k_1, r_7);
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
            t = v_23;
            t = filter_1_0(n_92, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm t)
{
  static ATerm y_23 (ATerm t);
  static ATerm y_23 (ATerm t)
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_81(t);
        t = y_23(t);
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        t = a_82(t);
      }
    return(t);
  }
  t = y_23(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_23 = NULL,a_24 = NULL;
      t = term_s_7;
      z_23 = t;
      t = term_k_22;
      a_24 = t;
      t = term_n_22;
      t = f_7(z_23, a_24, t);
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
        ATerm p_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_24 = NULL;
            t = term_w_22;
            b_24 = t;
            t = SSL_getenv(b_24);
            LocalPopChoice(v_22);
          }
        else
          {
            t = p_22;
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
  t = term_y_22;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm l_24 = NULL,n_24 = NULL;
  t = term_m_21;
  l_24 = t;
  t = term_z_22;
  n_24 = t;
  t = term_a_23;
  t = f_7(l_24, n_24, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm c_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_23;
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
  t = term_d_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm f_24 = NULL;
  t = if_verbose5_1_0(a_2, t);
  f_24 = t;
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_24 = NULL,h_24 = NULL;
        t = term_m_21;
        g_24 = t;
        t = term_t_21;
        h_24 = t;
        t = term_g_23;
        t = f_7(g_24, h_24, t);
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        {
          ATerm i_24 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          i_24 = t;
          t = repeat_2_0(c_2, _id, t);
          t = i_24;
        }
      }
  }
  t = f_24;
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
  t = term_h_23;
  return(t);
}
static ATerm i_26 (ATerm v_24, ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,a_25 = NULL;
  t = term_m_21;
  y_24 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, v_24);
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATmakeAppl(sym_Tool_1, v_24));
  t = f_7(y_24, a_25, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_23 = ATgetFirst((ATermList) t);
      if(match_cons(i_23, sym__2))
        {
          ATerm k_23 = ATgetArgument(i_23, 0);
          x_24 = ATgetArgument(i_23, 1);
        }
      else
        _fail(t);
      {
        ATerm j_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_24;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_h_23;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_m_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_25 = NULL,e_25 = NULL,f_25 = NULL;
      t = if_verbose5_1_0(f_2, t);
      t = xtc_load_0_0(t);
      f_25 = t;
      if(match_cons(t, sym__2))
        {
          b_25 = ATgetArgument(t, 0);
          e_25 = ATgetArgument(t, 1);
          {
            ATerm o_23 = t;
            int p_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
                t = term_m_21;
                u_25 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, b_25);
                v_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATmakeAppl(sym_Tool_1, b_25));
                t = f_7(u_25, v_25, t);
                {
                  static ATerm h_2 (ATerm t);
                  static ATerm h_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((e_25 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((t_25 != NULL) && (t_25 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          t_25 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(h_2, t);
                }
                t = not_null(t_25);
                LocalPopChoice(p_23);
              }
            else
              {
                t = o_23;
                t = i_26(f_25, t);
              }
          }
        }
      else
        {
          t = i_26(f_25, t);
        }
      t = if_verbose5_1_0(k_2, t);
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      {
        ATerm e_26 = NULL,m_8 = NULL,o_8 = NULL;
        e_26 = t;
        t = term_g_17;
        m_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_23), e_26), term_q_23);
        o_8 = t;
        t = SSL_printnl(m_8, o_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_23), e_26), term_q_23);
        t = if_verbose5_1_0(o_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_s_23;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm c_112 (ATerm), ATerm t)
{
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_26 = NULL,y_26 = NULL;
      y_26 = t;
      if(match_cons(t, sym_FILE_1))
        {
          x_26 = ATgetArgument(t, 0);
          {
            ATerm v_8 = NULL,x_1 = NULL;
            t = SSLgetAnnotations(y_26);
            v_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, x_26);
            x_1 = t;
            t = SSLsetAnnotations(x_1, v_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_26;
        }
      LocalPopChoice(x_23);
      {
        static ATerm v_2 (ATerm t);
        static ATerm v_2 (ATerm t)
        {
          ATerm z_26 = NULL,c_27 = NULL;
          t = term_i_18;
          t = c_112(t);
          t = xtc_find_0_0(t);
          z_26 = t;
          t = term_i_18;
          t = pass_v_verbose_0_0(t);
          c_27 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(c_27), z_26), term_d_24), term_c_24);
          return(t);
        }
        t = xtc_transform_file_2_0(s_2, v_2, t);
      }
    }
  else
    {
      t = w_23;
      {
        static ATerm x_2 (ATerm t);
        static ATerm x_2 (ATerm t)
        {
          ATerm e_27 = NULL,g_27 = NULL;
          t = term_i_18;
          t = c_112(t);
          t = xtc_find_0_0(t);
          e_27 = t;
          t = term_i_18;
          t = pass_v_verbose_0_0(t);
          g_27 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(g_27), e_27), term_d_24), term_c_24);
          return(t);
        }
        t = xtc_transform_term_2_0(w_2, x_2, t);
      }
    }
  return(t);
}
static ATerm f_7 (ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm l_27 = NULL;
  t = lookup_table_0_1(g_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(h_47, l_27, t);
  return(t);
}
static ATerm z_6 (ATerm s_45, ATerm t_45, ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL;
  p_27 = t;
  {
    ATerm e_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
        t = f_7(s_45, t_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_24 = ATgetFirst((ATermList) t);
            o_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_24);
        {
          ATerm v_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, s_45, t_45, o_27);
          t = lookup_table_0_1(s_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_7(t_45, o_27, v_27, t);
          t = (ATerm) ATmakeAppl(sym__3, s_45, t_45, o_27);
        }
      }
    else
      {
        t = e_24;
        {
          ATerm x_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
          t = lookup_table_0_1(s_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              x_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_7(t_45, x_27, t);
          t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
        }
      }
  }
  t = p_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_94 (ATerm), ATerm t)
{
  ATerm z_27 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL;
  e_28 = t;
  t = q_94(t);
  d_28 = t;
  {
    ATerm m_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_28 = NULL;
        t = term_x_17;
        k_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_28, term_x_17);
        t = f_7(d_28, k_28, t);
        {
          ATerm p_24 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_24;
            }
        }
        LocalPopChoice(o_24);
      }
    else
      {
        t = m_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_28 = ATgetFirst((ATermList) t);
      z_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_28, term_x_17, z_27);
  t = lookup_table_0_1(d_28, t);
  h_28 = t;
  t = term_x_17;
  f_28 = t;
  t = h_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(f_28, z_27, g_28, t);
  t = c_28;
  {
    static ATerm e_3 (ATerm t);
    static ATerm e_3 (ATerm t)
    {
      ATerm l_28 = NULL;
      l_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_28, l_28);
      t = z_6(d_28, l_28, t);
      return(t);
    }
    t = map_1_0(e_3, t);
  }
  t = e_28;
  return(t);
}
ATerm restore_always_2_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_98(t);
      t = j_98(t);
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      t = j_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_94 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,x_28 = NULL,y_28 = NULL;
  q_28 = t;
  t = p_94(t);
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_28, term_x_17);
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_29 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_24 = ATgetArgument(t, 0);
            ATerm w_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_17;
        e_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_28, term_x_17);
        t = f_7(p_28, e_29, t);
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        t = (ATerm) ATempty;
      }
  }
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_28, term_x_17, (ATerm) ATinsert(CheckATermList(t_28), (ATerm) ATempty));
  t = lookup_table_0_1(p_28, t);
  y_28 = t;
  t = term_x_17;
  u_28 = t;
  t = (ATerm) ATinsert(CheckATermList(t_28), (ATerm) ATempty);
  v_28 = t;
  t = y_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(u_28, v_28, x_28, t);
  t = q_28;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_g_18;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm p_29 = NULL;
  p_29 = t;
  {
    ATerm z_24 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(p_29);
        LocalPopChoice(i_25);
      }
    else
      {
        t = z_24;
        t = p_29;
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_g_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_101 (ATerm), ATerm t)
{
  ATerm h_29 = NULL;
  static ATerm i_3 (ATerm t);
  static ATerm i_3 (ATerm t)
  {
    ATerm i_29 = NULL;
    i_29 = t;
    {
      ATerm j_25 = t;
      int k_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_29 = NULL,k_29 = NULL;
          t = term_g_18;
          j_29 = t;
          t = term_x_17;
          k_29 = t;
          t = term_l_25;
          t = f_7(j_29, k_29, t);
          LocalPopChoice(k_25);
        }
      else
        {
          t = j_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((h_29 != NULL) && (h_29 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          h_29 = ATgetFirst((ATermList) t);
        {
          ATerm m_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = h_29;
    t = map_1_0(k_3, t);
    t = i_29;
    t = end_scope_1_0(p_3, t);
    return(t);
  }
  t = begin_scope_1_0(g_3, t);
  t = restore_always_2_0(j_101, i_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
  s_29 = t;
  t = term_i_18;
  t = whoami_0_0(t);
  t_29 = t;
  t = term_g_17;
  x_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_25), t_29), term_n_25);
  y_29 = t;
  t = SSL_printnl(x_29, y_29);
  t = term_r_8;
  w_29 = t;
  t = SSL_exit(w_29);
  t = s_29;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm c_30 = NULL;
  c_30 = t;
  if(match_string(t, "-k"))
    {
      t = c_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_30;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  d_30 = t;
  t = SSL_string_to_int(d_30);
  e_30 = t;
  t = term_p_25;
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_25, e_30);
  t = i_7(f_30, e_30, t);
  t = d_30;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_q_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_3, s_3, v_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm h_30 = NULL;
  h_30 = t;
  if(match_string(t, "-S"))
    {
      t = h_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_30;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  t = term_l_8;
  i_30 = t;
  t = term_r_25;
  j_30 = t;
  t = term_s_25;
  t = i_7(i_30, j_30, t);
  t = term_w_25;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_x_25;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
  k_30 = t;
  t = SSL_string_to_int(k_30);
  l_30 = t;
  t = term_l_8;
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_8, l_30);
  t = i_7(m_30, l_30, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_30);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_y_25;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  t = term_z_25;
  n_30 = t;
  t = term_i_18;
  o_30 = t;
  t = term_a_26;
  t = i_7(n_30, o_30, t);
  t = term_b_26;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_3, z_3, b_4, t);
      LocalPopChoice(f_26);
    }
  else
    {
      t = d_26;
      {
        ATerm g_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_4, f_4, g_4, t);
            LocalPopChoice(h_26);
          }
        else
          {
            t = g_26;
            t = Option_3_0(i_4, j_4, l_4, t);
          }
      }
    }
  return(t);
}
static ATerm i_7 (ATerm s_50, ATerm t_50, ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  t = term_s_7;
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_7, s_50, t_50);
  t = lookup_table_0_1(p_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(s_50, t_50, q_30, t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_7, s_50, t_50);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_30 = NULL,a_31 = NULL,b_31 = NULL;
      t = term_i_18;
      t = h_0(t);
      x_30 = t;
      t = term_j_26;
      a_31 = t;
      t = term_k_26;
      b_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_26, term_k_26, x_30);
      t = g_7(a_31, b_31, x_30, t);
      _fail(t);
    }
  else
    {
      ATerm m_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_30 = ATgetFirst((ATermList) t);
          w_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_30;
      t = d_0(t);
      t = term_i_18;
      t = g_0(t);
      m_31 = t;
      t = (ATerm) ATinsert(CheckATermList(w_30), m_31);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm o_31 = NULL;
  o_31 = t;
  if(match_string(t, "-o"))
    {
      t = o_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_31;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL;
  p_31 = t;
  t = term_t_7;
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_7, p_31);
  t = i_7(q_31, p_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_31);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_l_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, o_4, p_4, t);
  return(t);
}
static ATerm g_7 (ATerm n_45, ATerm o_45, ATerm m_45, ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,a_32 = NULL;
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_26 = ATgetArgument(t, 0);
            ATerm p_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
        t = f_7(n_45, o_45, t);
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        t = (ATerm) ATempty;
      }
  }
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_45, o_45, (ATerm) ATinsert(CheckATermList(w_31), m_45));
  t = lookup_table_0_1(n_45, t);
  a_32 = t;
  t = (ATerm) ATinsert(CheckATermList(w_31), m_45);
  x_31 = t;
  t = a_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(o_45, x_31, y_31, t);
  t = v_31;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,m_32 = NULL,n_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_32 = NULL,p_32 = NULL,s_32 = NULL;
      t = term_i_18;
      t = p_0(t);
      o_32 = t;
      t = term_j_26;
      p_32 = t;
      t = term_k_26;
      s_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_26, term_k_26, o_32);
      t = g_7(p_32, s_32, o_32, t);
      _fail(t);
    }
  else
    {
      ATerm y_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_32 = ATgetFirst((ATermList) t);
          k_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_32 = ATgetFirst((ATermList) t);
          n_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_32;
      t = m_0(t);
      t = m_32;
      t = o_0(t);
      y_32 = t;
      t = (ATerm) ATinsert(CheckATermList(n_32), y_32);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm a_33 = NULL;
  a_33 = t;
  if(match_string(t, "-i"))
    {
      t = a_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_33;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL;
  b_33 = t;
  t = term_j_18;
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_18, b_33);
  t = i_7(c_33, b_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_33);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_q_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, u_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,i_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_18;
  t = whoami_0_0(t);
  d_33 = t;
  t = term_g_17;
  f_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_26), d_33);
  i_33 = t;
  t = SSL_printnl(f_33, i_33);
  t = term_r_8;
  e_33 = t;
  t = SSL_exit(e_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL;
  t = term_s_7;
  l_33 = t;
  t = term_s_26;
  m_33 = t;
  t = term_t_26;
  t = f_7(l_33, m_33, t);
  return(t);
}
static ATerm a_7 (ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_33, w_33);
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      t = SSL_addr(v_33, w_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  o_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_33;
      t = j_91(t);
    }
  else
    {
      ATerm x_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_33 = ATgetFirst((ATermList) t);
          q_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_33;
      t = foldr_2_0(j_91, k_91, t);
      x_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_33, x_33);
      t = k_91(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_r_25;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm r_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      r_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(r_9, u_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_34 = NULL,l_9 = NULL,m_9 = NULL;
  t = times_0_0(t);
  m_9 = t;
  t = SSL_explode_term(m_9);
  if(match_cons(t, sym__2))
    {
      ATerm w_26 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9;
  t = foldr_2_0(v_4, w_4, t);
  e_34 = t;
  t = SSL_TicksToSeconds(e_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,z_34 = NULL;
  v_34 = t;
  if(match_cons(t, sym__2))
    {
      w_34 = ATgetArgument(t, 0);
      z_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_34;
        if((w_34 != t))
          {
            _fail(t);
          }
        t = v_34;
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        t = (ATerm) ATmakeAppl(sym__2, w_34, z_34);
        {
          ATerm d_27 = t;
          int f_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_34, z_34);
              LocalPopChoice(f_27);
            }
          else
            {
              t = d_27;
              t = SSL_gtr(w_34, z_34);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_34, z_34);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm u_35 = NULL;
  u_35 = t;
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_35 = NULL,b_36 = NULL,c_36 = NULL;
        t = term_s_7;
        b_36 = t;
        t = term_l_8;
        c_36 = t;
        t = term_q_8;
        t = f_7(b_36, c_36, t);
        x_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_35, term_r_8);
        t = geq_0_0(t);
        t = u_35;
        t = u_98(t);
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = u_35;
      }
  }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm e_36 = NULL,h_36 = NULL,j_36 = NULL,m_36 = NULL;
  t = run_time_0_0(t);
  e_36 = t;
  t = term_i_18;
  t = whoami_0_0(t);
  h_36 = t;
  t = term_g_17;
  j_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_27), e_36), term_y_8), h_36);
  m_36 = t;
  t = SSL_printnl(j_36, m_36);
  t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_27), e_36), term_y_8), h_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_25;
  o_36 = t;
  t = SSL_exit(o_36);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  c_37 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_37;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_37 = ATgetArgument(t, 0);
          {
            ATerm n_10 = NULL,j_2 = NULL;
            t = SSLgetAnnotations(c_37);
            n_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_37);
            j_2 = t;
            t = SSLsetAnnotations(j_2, n_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_37;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_102 (ATerm), ATerm t)
{
  ATerm k_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_36 = NULL,v_36 = NULL;
      t = term_s_7;
      s_36 = t;
      t = term_n_27;
      v_36 = t;
      t = term_q_27;
      t = f_7(s_36, v_36, t);
      LocalPopChoice(m_27);
    }
  else
    {
      t = k_27;
      t = fetch_1_0(y_4, t);
    }
  t = z_102(t);
  return(t);
}
static ATerm j_7 (ATerm f_50, ATerm g_50, ATerm h_50, ATerm t)
{
  ATerm e_37 = NULL;
  t = SSL_hashtable_put(h_50, f_50, g_50);
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_37);
  return(t);
}
static ATerm k_7 (ATerm i_50, ATerm j_50, ATerm t)
{
  t = SSL_hashtable_get(j_50, i_50);
  return(t);
}
ATerm lookup_table_0_1 (ATerm z_46, ATerm t)
{
  ATerm n_37 = NULL;
  t = table_hashtable_0_0(t);
  n_37 = t;
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_10 = NULL;
        t = n_37;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_7(z_46, w_10, t);
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        {
          ATerm i_11 = NULL;
          t = z_46;
          t = table_create_0_0(t);
          t = n_37;
          if(match_cons(t, sym_Hashtable_1))
            {
              i_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_7(z_46, i_11, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm n_50, ATerm o_50, ATerm t)
{
  ATerm q_37 = NULL;
  t = SSL_hashtable_create(n_50, o_50);
  q_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_37);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,v_37 = NULL,w_37 = NULL;
  r_37 = t;
  t = term_t_27;
  v_37 = t;
  t = term_u_27;
  w_37 = t;
  t = r_37;
  t = new_hashtable_0_2(v_37, w_37, t);
  s_37 = t;
  t = r_37;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(r_37, s_37, t_37, t);
  t = r_37;
  return(t);
}
static ATerm c_7 (ATerm k_50, ATerm l_50, ATerm t)
{
  ATerm x_37 = NULL;
  t = SSL_hashtable_remove(l_50, k_50);
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_37);
  return(t);
}
static ATerm d_7 (ATerm p_50, ATerm t)
{
  ATerm y_37 = NULL;
  t = SSL_hashtable_destroy(p_50);
  y_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_37);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm z_37 = NULL;
  t = SSL_table_hashtable();
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_37);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL;
  a_38 = t;
  t = table_hashtable_0_0(t);
  b_38 = t;
  t = lookup_table_0_1(a_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(d_38, t);
  t = b_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_7(a_38, c_38, t);
  t = a_38;
  return(t);
}
ATerm map_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  static ATerm v_38 (ATerm t);
  static ATerm v_38 (ATerm t)
  {
    ATerm p_38 = NULL,q_38 = NULL,u_38 = NULL;
    p_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_38;
      }
    else
      {
        ATerm n_11 = NULL,t_11 = NULL,u_11 = NULL,l_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_38 = ATgetFirst((ATermList) t);
            u_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_38);
        n_11 = t;
        t = q_38;
        t = v_83(t);
        t_11 = t;
        t = u_38;
        t = v_38(t);
        u_11 = t;
        t = (ATerm) ATinsert(CheckATermList(u_11), t_11);
        l_2 = t;
        t = SSLsetAnnotations(l_2, n_11);
      }
    return(t);
  }
  t = v_38(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_39 = ATgetFirst((ATermList) t);
      b_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_39 = NULL,g_39 = NULL;
        static ATerm d_5 (ATerm t);
        static ATerm d_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_39)), not_null(g_39));
          return(t);
        }
        t = b_39;
        t = l_0(t);
        if(((f_39 != NULL) && (f_39 != t)))
          _fail(t);
        else
          f_39 = t;
        t = a_39;
        t = j_0(t);
        if(((g_39 != NULL) && (g_39 != t)))
          _fail(t);
        else
          g_39 = t;
        t = b_39;
        t = reverse_acc_2_0(j_0, d_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_18;
      t = l_0(t);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL,q_2 = NULL;
  o_39 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_39);
  m_39 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_39);
  q_2 = t;
  t = SSLsetAnnotations(q_2, m_39);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm q_39 = NULL;
  q_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_39), term_w_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL;
  ATerm y_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_39 = NULL,l_39 = NULL;
      t = term_s_7;
      k_39 = t;
      t = term_s_26;
      l_39 = t;
      t = term_t_26;
      t = f_7(k_39, l_39, t);
      LocalPopChoice(a_28);
    }
  else
    {
      t = y_27;
      t = fetch_1_0(e_5, t);
    }
  t = term_b_28;
  t = echo_0_0(t);
  t = term_j_26;
  i_39 = t;
  t = term_k_26;
  j_39 = t;
  t = term_i_28;
  t = f_7(i_39, j_39, t);
  t = reverse_acc_2_0(_id, f_5, t);
  t = map_1_0(j_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  static ATerm n_40 (ATerm t);
  static ATerm n_40 (ATerm t)
  {
    ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
    k_40 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_40 = ATgetFirst((ATermList) t);
        m_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_28 = t;
      int m_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_12 = NULL,u_12 = NULL,c_4 = NULL;
          t = SSLgetAnnotations(k_40);
          q_12 = t;
          t = l_40;
          t = f_84(t);
          u_12 = t;
          t = (ATerm) ATinsert(CheckATermList(m_40), u_12);
          c_4 = t;
          t = SSLsetAnnotations(c_4, q_12);
          LocalPopChoice(m_28);
        }
      else
        {
          t = j_28;
          {
            ATerm g_13 = NULL,s_13 = NULL,d_4 = NULL;
            t = SSLgetAnnotations(k_40);
            g_13 = t;
            t = m_40;
            t = n_40(t);
            s_13 = t;
            t = (ATerm) ATinsert(CheckATermList(s_13), l_40);
            d_4 = t;
            t = SSLsetAnnotations(d_4, g_13);
          }
        }
    }
    return(t);
  }
  t = n_40(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
  r_40 = t;
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_40;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_28 = ATgetFirst((ATermList) t);
                ATerm s_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_40;
          }
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        t = (ATerm) ATinsert(ATempty, r_40);
      }
  }
  s_40 = t;
  t = term_y_7;
  t_40 = t;
  t = SSL_printnl(t_40, s_40);
  t = r_40;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL;
  t = term_s_7;
  x_40 = t;
  t = term_s_26;
  y_40 = t;
  t = term_t_26;
  t = f_7(x_40, y_40, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL;
  t = term_w_28;
  z_40 = t;
  t = term_i_18;
  a_41 = t;
  t = term_z_28;
  t = i_7(z_40, a_41, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_a_29;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL;
  t = term_w_28;
  d_41 = t;
  t = term_i_18;
  e_41 = t;
  t = term_z_28;
  t = i_7(d_41, e_41, t);
  t = term_t_18;
  b_41 = t;
  t = term_i_18;
  c_41 = t;
  t = term_b_29;
  t = i_7(b_41, c_41, t);
  t = term_c_29;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_d_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_5, m_5, o_5, t);
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
      t = Option_3_0(p_5, q_5, r_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,h_4 = NULL;
  k_41 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_41 = ATgetFirst((ATermList) t);
      h_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_41);
  f_41 = t;
  t = g_41;
  t = o_70(t);
  i_41 = t;
  t = h_41;
  t = p_70(t);
  j_41 = t;
  t = (ATerm) ATinsert(CheckATermList(j_41), i_41);
  h_4 = t;
  t = SSLsetAnnotations(h_4, f_41);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_104 (ATerm), ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,u_41 = NULL,v_41 = NULL,k_4 = NULL;
  p_41 = t;
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_29;
        t = x_104(t);
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
      }
  }
  t = p_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_41 = ATgetFirst((ATermList) t);
      s_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_41);
  q_41 = t;
  t = term_s_26;
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_26, r_41);
  t = i_7(v_41, r_41, t);
  t = s_41;
  {
    static ATerm f_42 (ATerm t);
    static ATerm f_42 (ATerm t)
    {
      ATerm o_29 = t;
      int q_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_29 = t;
          int u_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_41 = NULL;
              y_41 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_41;
              LocalPopChoice(u_29);
            }
          else
            {
              t = r_29;
              t = x_104(t);
              t = Cons_2_0(_id, f_42, t);
            }
          LocalPopChoice(q_29);
        }
      else
        {
          t = o_29;
          {
            ATerm b_42 = NULL,c_42 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_42 = ATgetFirst((ATermList) t);
                c_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_42), (ATerm) ATmakeAppl(sym_Undefined_1, b_42));
          }
        }
      return(t);
    }
    t = f_42(t);
  }
  u_41 = t;
  t = (ATerm) ATinsert(CheckATermList(u_41), (ATerm) ATmakeAppl(sym_Program_1, r_41));
  k_4 = t;
  t = SSLsetAnnotations(k_4, q_41);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm s_42 = NULL;
  s_42 = t;
  if(match_string(t, "--help"))
    {
      t = s_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_42;
        }
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL;
  t = term_n_27;
  t_42 = t;
  t = term_i_18;
  u_42 = t;
  t = term_v_29;
  t = i_7(t_42, u_42, t);
  t = term_z_29;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_a_30;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_104 (ATerm), ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  m_42 = t;
  t = term_j_26;
  n_42 = t;
  t = term_b_30;
  t = lookup_table_0_1(n_42, t);
  r_42 = t;
  t = term_k_26;
  o_42 = t;
  t = (ATerm) ATempty;
  p_42 = t;
  t = r_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(o_42, p_42, q_42, t);
  t = m_42;
  {
    static ATerm s_5 (ATerm t);
    static ATerm s_5 (ATerm t)
    {
      ATerm g_30 = t;
      int r_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_104(t);
          LocalPopChoice(r_30);
        }
      else
        {
          t = g_30;
          {
            ATerm s_30 = t;
            int t_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_5, u_5, v_5, t);
                LocalPopChoice(t_30);
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
    t = parse_options_p__1_0(s_5, t);
  }
  {
    ATerm u_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_43 = NULL;
        f_43 = t;
        {
          ATerm z_30 = t;
          int c_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_14 = NULL;
              t = f_43;
              {
                ATerm d_31 = t;
                int e_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_14 = NULL,k_14 = NULL;
                    t = term_s_7;
                    h_14 = t;
                    t = term_n_27;
                    k_14 = t;
                    t = term_q_27;
                    t = f_7(h_14, k_14, t);
                    LocalPopChoice(e_31);
                  }
                else
                  {
                    t = d_31;
                    t = fetch_1_0(w_5, t);
                  }
              }
              t = f_43;
              t = default_system_usage_0_0(t);
              t = term_r_25;
              f_14 = t;
              t = SSL_exit(f_14);
              LocalPopChoice(c_31);
            }
          else
            {
              t = z_30;
              {
                ATerm w_14 = NULL,b_15 = NULL,c_15 = NULL;
                t = term_s_7;
                b_15 = t;
                t = term_w_28;
                c_15 = t;
                t = term_f_31;
                t = f_7(b_15, c_15, t);
                t = f_43;
                t = default_system_about_0_0(t);
                t = term_r_25;
                w_14 = t;
                t = SSL_exit(w_14);
              }
            }
        }
        LocalPopChoice(y_30);
      }
    else
      {
        t = u_30;
        {
          ATerm g_31 = t;
          int h_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
              static ATerm x_5 (ATerm t);
              static ATerm x_5 (ATerm t)
              {
                ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,m_4 = NULL;
                l_43 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_43 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_43);
                j_43 = t;
                t = k_43;
                if(((k_42 != NULL) && (k_42 != t)))
                  _fail(t);
                else
                  k_42 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_43);
                m_4 = t;
                t = SSLsetAnnotations(m_4, j_43);
                return(t);
              }
              t = fetch_1_0(x_5, t);
              t = term_g_17;
              h_43 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_42)), term_i_31);
              i_43 = t;
              t = SSL_printnl(h_43, i_43);
              t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_42)), term_i_31));
              t = default_system_usage_0_0(t);
              t = term_r_8;
              g_43 = t;
              t = SSL_exit(g_43);
              LocalPopChoice(h_31);
            }
          else
            {
              t = g_31;
            }
        }
      }
  }
  l_42 = t;
  t = term_j_26;
  t = table_destroy_0_0(t);
  t = l_42;
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL;
  t = parse_options_1_0(b_103, t);
  q_43 = t;
  t = term_j_31;
  t = table_create_0_0(t);
  t = term_j_31;
  r_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_31, term_k_31, q_43);
  t = lookup_table_0_1(r_43, t);
  u_43 = t;
  t = term_k_31;
  s_43 = t;
  t = u_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(s_43, q_43, t_43, t);
  t = q_43;
  t = d_103(t);
  {
    ATerm l_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_103, t);
        LocalPopChoice(n_31);
      }
    else
      {
        t = l_31;
        {
          ATerm r_31 = t;
          int s_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(s_31);
            }
          else
            {
              t = r_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
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
              int d_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(a_6, b_6, c_6, t);
                  LocalPopChoice(d_32);
                }
              else
                {
                  t = c_32;
                  {
                    ATerm e_32 = t;
                    int f_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(f_32);
                      }
                    else
                      {
                        t = e_32;
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
static ATerm z_5 (ATerm t)
{
  t = xtc_temp_files_1_0(d_6, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL;
  t = term_g_32;
  y_43 = t;
  t = term_i_18;
  z_43 = t;
  t = term_h_32;
  t = i_7(y_43, z_43, t);
  t = term_i_32;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_l_32;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
      t = term_s_7;
      c_44 = t;
      t = term_j_18;
      d_44 = t;
      t = term_v_32;
      t = f_7(c_44, d_44, t);
      b_44 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_44);
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      t = term_e_8;
    }
  t = xtc_sglr_1_0(f_6, t);
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_44 = NULL,k_44 = NULL;
        k_44 = t;
        if(match_cons(t, sym_FILE_1))
          {
            j_44 = ATgetArgument(t, 0);
            {
              ATerm j_15 = NULL,q_4 = NULL;
              t = SSLgetAnnotations(k_44);
              j_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_44);
              q_4 = t;
              t = SSLsetAnnotations(q_4, j_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_44;
          }
        LocalPopChoice(x_32);
        t = xtc_transform_file_2_0(v_6, pass_verbose_0_0, t);
      }
    else
      {
        t = w_32;
        t = xtc_transform_term_2_0(b_7, pass_verbose_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_z_32;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_g_33;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_g_33;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_5, default_usage_0_0, _id, z_5, t);
  return(t);
}
