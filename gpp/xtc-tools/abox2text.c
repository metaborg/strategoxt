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
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_x_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_a_31;
ATerm term_x_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_n_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_v_27;
ATerm term_t_27;
ATerm term_n_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_b_27;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_p_25;
ATerm term_l_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_n_24;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_g_22;
ATerm term_u_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_r_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_o_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_r_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_v_8;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_j_8;
ATerm term_a_8;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_v_7);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_j_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_v_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_s_8, term_p_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_v_9, term_w_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_9, term_z_9, term_a_10);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_d_10, term_e_10);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_10, term_j_10, term_k_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_10, term_w_10, term_x_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_b_11, term_d_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_i_11, term_k_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_o_11, term_p_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_w_11, term_x_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_d_12, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_h_12, term_i_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_r_12, term_s_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_b_13);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_f_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_s_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_a_14, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_j_14, term_k_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_n_14, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_u_14, term_v_14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_d_16, term_f_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_j_16, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_p_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_a_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_g_20, term_g_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__2, term_g_20, term_h_20);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym__2, term_t_22, term_o_22);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_a_25);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_25);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym__2, term_i_25, term_w_22);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_m_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_g_27);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__2, term_s_24, term_t_24);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym__2, term_l_28, term_w_22);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_q_28, term_w_22);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym__2, term_g_27, term_w_22);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym__3, term_s_24, term_t_24, (ATerm) ATempty);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_l_28);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_c_23);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm x_6 (ATerm o_14, ATerm p_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm f_74 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm x_4 (ATerm i_4, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm g_6 (ATerm w_33, ATerm x_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm pass_width_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm h_6 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm i_6 (ATerm y_68 (ATerm), ATerm o_172, ATerm y_17, ATerm t);
static ATerm j_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm t);
static ATerm j_6 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm a_74 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm n_67 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm w_68 (ATerm), ATerm t);
static ATerm l_6 (ATerm q_40, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm x_85 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm w_85 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm y_85 (ATerm), ATerm t);
static ATerm n_6 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm o_6 (ATerm z_77 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm x_0 (ATerm t);
static ATerm p_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm q_6 (ATerm a_86 (ATerm), ATerm y_37, ATerm x_37, ATerm t);
static ATerm u_6 (ATerm z_41, ATerm a_42, ATerm t);
static ATerm z_14 (ATerm t_14, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_6 (ATerm u_17, ATerm t);
static ATerm s_6 (ATerm i_42, ATerm j_42, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_17 (ATerm n_15, ATerm t);
static ATerm s_17 (ATerm x_15, ATerm a_16, ATerm b_16, ATerm t);
static ATerm t_17 (ATerm u_16, ATerm w_16, ATerm x_16, ATerm t);
static ATerm t_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_82 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm s_23 (ATerm u_22, ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm w_88 (ATerm), ATerm t);
static ATerm v_6 (ATerm k_84 (ATerm), ATerm e_35, ATerm c_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm w_6 (ATerm l_32, ATerm m_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm abox2text_0_0 (ATerm t);
static ATerm e_7 (ATerm k_38, ATerm l_38, ATerm t);
static ATerm y_6 (ATerm w_36, ATerm x_36, ATerm t);
ATerm end_scope_1_0 (ATerm h_84 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm g_84 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm i_88 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_6 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_85 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm need_help_1_0 (ATerm y_89 (ATerm), ATerm t);
static ATerm i_7 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t);
static ATerm j_7 (ATerm m_40, ATerm n_40, ATerm t);
ATerm lookup_table_0_1 (ATerm d_38, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_40, ATerm s_40, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm b_7 (ATerm o_40, ATerm p_40, ATerm t);
static ATerm c_7 (ATerm t_40, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_73 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_73 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm h_7 (ATerm w_40, ATerm x_40, ATerm t);
static ATerm f_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm n_60 (ATerm), ATerm o_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm w_91 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm parse_options_1_0 (ATerm v_91 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm j_1 = NULL,m_1 = NULL;
  j_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_3 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = j_1;
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
        t = (ATerm) ATmakeAppl(sym__2, m_1, h_0);
        t = x_6(m_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
        LocalPopChoice(n_7);
      }
    else
      {
        t = f_3;
        {
          ATerm p_7 = t;
          int q_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_1 = NULL;
              t = j_1;
              t = o_0(t);
              c_1 = t;
              {
                ATerm r_7 = t;
                if((PushChoice() == 0))
                  {
                    ATerm d_1 = NULL;
                    d_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = d_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = d_1;
                          }
                        else
                          {
                            t = d_1;
                            if((m_1 != t))
                              {
                                _fail(t);
                              }
                            t = d_1;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_7;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, m_1, c_1);
              t = x_6(m_1, c_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
              LocalPopChoice(q_7);
            }
          else
            {
              t = p_7;
              t = j_1;
              t = o_0(t);
              if((m_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
            }
        }
      }
  }
  return(t);
}
static ATerm x_6 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_copy(o_14, p_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 = NULL,w_2 = NULL;
      t = term_u_7;
      s_2 = t;
      t = term_v_7;
      w_2 = t;
      t = term_w_7;
      t = e_7(s_2, w_2, t);
      LocalPopChoice(t_7);
    }
  else
    {
      t = s_7;
      t = term_x_7;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm h_2 = NULL;
  h_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_1 = NULL,p_1 = NULL;
      t = term_v_7;
      {
        ATerm y_7 = t;
        int z_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 = NULL,r_1 = NULL;
            t = term_u_7;
            q_1 = t;
            t = term_v_7;
            r_1 = t;
            t = term_w_7;
            t = e_7(q_1, r_1, t);
            LocalPopChoice(z_7);
          }
        else
          {
            t = y_7;
            t = term_x_7;
          }
      }
      l_1 = t;
      t = term_a_8;
      p_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_a_8, l_1);
      t = x_6(p_1, l_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm b_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm f_74 (ATerm), ATerm t)
{
  static ATerm b_4 (ATerm t)
  {
    ATerm x_3 = NULL,y_3 = NULL,a_4 = NULL;
    a_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_3 = ATgetFirst((ATermList) t);
        y_3 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_2 = NULL,f_2 = NULL,s_0 = NULL;
          t = SSLgetAnnotations(a_4);
          b_2 = t;
          t = y_3;
          t = b_4(t);
          f_2 = t;
          t = (ATerm) ATinsert(CheckATermList(f_2), x_3);
          s_0 = t;
          t = SSLsetAnnotations(s_0, b_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_4;
        t = f_74(t);
      }
    return(t);
  }
  t = b_4(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,c_3 = NULL;
  z_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_2;
    }
  else
    {
      static ATerm b_0 (ATerm t)
      {
        t = not_null(c_3);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_3 = ATgetFirst((ATermList) t);
          if(((c_3 != NULL) && (c_3 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_3 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_3;
      t = at_end_1_0(b_0, t);
    }
  return(t);
}
static ATerm x_4 (ATerm i_4, ATerm t)
{
  ATerm j_4 = NULL;
  t = SSL_explode_term(i_4);
  if(match_cons(t, sym__2))
    {
      ATerm e_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL;
  n_4 = t;
  if(match_cons(t, sym__2))
    {
      l_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
      {
        ATerm f_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm f_0 (ATerm t)
            {
              t = m_4;
              return(t);
            }
            t = l_4;
            t = at_end_1_0(f_0, t);
            LocalPopChoice(g_8);
          }
        else
          {
            t = f_8;
            t = x_4(n_4, t);
          }
      }
    }
  else
    {
      t = x_4(n_4, t);
    }
  return(t);
}
static ATerm g_6 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_33, x_33);
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      t = SSL_subtr(w_33, x_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
  t = term_j_8;
  {
    ATerm k_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 = NULL,f_5 = NULL;
        t = term_u_7;
        e_5 = t;
        t = term_j_8;
        f_5 = t;
        t = term_q_8;
        t = e_7(e_5, f_5, t);
        LocalPopChoice(l_8);
      }
    else
      {
        t = k_8;
        t = term_s_8;
      }
  }
  z_4 = t;
  t = term_s_8;
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_4, term_s_8);
  t = g_6(z_4, b_5, t);
  a_5 = t;
  t = SSL_int_to_string(a_5);
  y_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_4), term_j_8);
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm t_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 = NULL,j_5 = NULL;
      t = term_u_7;
      g_5 = t;
      t = term_v_8;
      j_5 = t;
      t = term_y_8;
      t = e_7(g_5, j_5, t);
      LocalPopChoice(u_8);
      {
        ATerm k_5 = NULL;
        k_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, k_5), term_v_8);
      }
    }
  else
    {
      t = t_8;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm o_5 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_a_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm r_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_9);
      r_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_5, (ATerm) ATinsert(ATempty, term_a_9));
      t = u_6(o_5, r_5, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm h_6 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm s_5 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  s_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_5);
  return(t);
}
static ATerm i_6 (ATerm y_68 (ATerm), ATerm o_172, ATerm y_17, ATerm t)
{
  ATerm v_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_172, term_b_9);
  t = t_6(t);
  v_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_5, y_17);
  t = y_68(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm a_7 = NULL,d_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      if(match_cons(c_9, sym_Stream_1))
        {
          a_7 = ATgetArgument(c_9, 0);
        }
      else
        _fail(t);
      d_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(a_7, d_7, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL;
  y_5 = t;
  t = xtc_new_file_0_0(t);
  x_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_5, y_5);
  t = i_6(j_0, x_5, y_5, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, x_5);
  t = xtc_transform_file_2_0(v_87, w_87, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm j_6 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,r_8 = NULL;
  m_8 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      n_8 = ATgetArgument(t, 0);
      {
        ATerm o_2 = NULL,p_2 = NULL;
        t = SSL_int_to_string(n_8);
        o_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_9), o_2), term_d_9);
        p_2 = t;
        t = SSL_concat_strings(p_2);
      }
    }
  else
    {
      ATerm k_3 = NULL,m_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          n_8 = ATgetArgument(t, 0);
          o_8 = ATgetArgument(t, 1);
          r_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(o_8);
      k_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_8), term_i_9), k_3), term_g_9), n_8);
      m_3 = t;
      t = SSL_concat_strings(m_3);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm a_74 (ATerm), ATerm t)
{
  ATerm w_8 = NULL;
  static ATerm m_0 (ATerm t)
  {
    t = a_74(t);
    if(((w_8 != NULL) && (w_8 != t)))
      _fail(t);
    else
      w_8 = t;
    return(t);
  }
  t = fetch_1_0(m_0, t);
  t = not_null(w_8);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm z_8 = NULL;
  z_8 = t;
  {
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm m_9 = ATgetArgument(t, 0);
              if((z_8 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm n_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_16), term_l_16), term_h_16), term_y_15), term_t_15), term_o_15), term_y_14), term_r_14), term_l_14), term_c_14), term_u_13), term_l_13), term_h_13), term_c_13), term_y_12), term_u_12), term_k_12), term_f_12), term_a_12), term_q_11), term_m_11), term_f_11), term_z_10), term_l_10), term_f_10), term_b_10), term_x_9), term_q_9);
        t = fetch_elem_1_0(q_0, t);
        LocalPopChoice(l_9);
      }
    else
      {
        t = k_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, z_8);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm f_9 = NULL,r_9 = NULL;
  f_9 = t;
  {
    ATerm r_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm t_16 = ATgetArgument(t, 0);
            r_9 = ATgetArgument(t, 1);
            {
              ATerm v_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_16);
        {
          ATerm b_17 = t;
          int c_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_4 = NULL,f_4 = NULL,g_4 = NULL;
              t = r_9;
              {
                ATerm d_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_17;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              c_4 = t;
              t = term_e_17;
              f_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, c_4), term_g_17);
              g_4 = t;
              t = SSL_printnl(f_4, g_4);
              t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, c_4), term_g_17));
              LocalPopChoice(c_17);
            }
          else
            {
              t = b_17;
              t = f_9;
            }
        }
      }
    else
      {
        t = r_16;
        t = f_9;
      }
  }
  t = f_9;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm n_67 (ATerm), ATerm t)
{
  ATerm g_10 = NULL,i_10 = NULL;
  i_10 = t;
  t = fork_0_0(t);
  g_10 = t;
  {
    ATerm h_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_10;
        t = n_67(t);
        LocalPopChoice(k_17);
      }
    else
      {
        t = h_17;
        t = SSL_waitpid(g_10);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_17 = ATgetArgument(t, 0);
            if(((ATgetType(l_17) != AT_INT) || (ATgetInt((ATermInt) l_17) != 0)))
              _fail(t);
            {
              ATerm q_17 = ATgetArgument(t, 1);
            }
            {
              ATerm r_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_10;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm w_68 (ATerm), ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
  m_10 = t;
  t = w_68(t);
  n_10 = t;
  t = term_e_17;
  o_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_10), n_10);
  p_10 = t;
  t = SSL_printnl(o_10, p_10);
  t = m_10;
  return(t);
}
static ATerm l_6 (ATerm q_40, ATerm t)
{
  t = SSL_hashtable_keys(q_40);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_10 = NULL,s_10 = NULL;
  static ATerm t_0 (ATerm t)
  {
    ATerm t_10 = NULL,u_10 = NULL;
    t_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_10), t_10);
    t = e_7(not_null(q_10), t_10, t);
    u_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_10, u_10);
    return(t);
  }
  if(((q_10 != NULL) && (q_10 != t)))
    _fail(t);
  else
    q_10 = t;
  t = lookup_table_0_1(q_10, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(s_10, t);
  t = map_1_0(t_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm y_10 = NULL;
  y_10 = t;
  {
    ATerm v_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_11 = NULL,h_11 = NULL,j_11 = NULL;
        t = term_u_7;
        h_11 = t;
        t = term_j_8;
        j_11 = t;
        t = term_q_8;
        t = e_7(h_11, j_11, t);
        c_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_11, term_v_15);
        t = geq_0_0(t);
        t = y_10;
        t = x_85(t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = v_17;
        t = y_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  ATerm r_11 = NULL;
  r_11 = t;
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_11 = NULL,u_11 = NULL,b_12 = NULL;
        t = term_u_7;
        u_11 = t;
        t = term_j_8;
        b_12 = t;
        t = term_q_8;
        t = e_7(u_11, b_12, t);
        t_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_11, term_h_12);
        t = geq_0_0(t);
        t = r_11;
        t = w_85(t);
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
        t = r_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm j_12 = NULL;
  j_12 = t;
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
        t = term_u_7;
        m_12 = t;
        t = term_j_8;
        n_12 = t;
        t = term_q_8;
        t = e_7(m_12, n_12, t);
        l_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_12, term_d_10);
        t = geq_0_0(t);
        t = j_12;
        t = y_85(t);
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = j_12;
      }
  }
  return(t);
}
static ATerm n_6 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = d_78(t);
  {
    static ATerm u_0 (ATerm t)
    {
      ATerm p_12 = NULL;
      p_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, p_12);
      t = c_78(t);
      return(t);
    }
    t = fetch_1_0(u_0, t);
  }
  t = b_25;
  return(t);
}
static ATerm o_6 (ATerm z_77 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm t_13 (ATerm t)
  {
    ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
    m_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_13 = ATgetFirst((ATermList) t);
            o_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_18 = t;
          int g_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_13;
              {
                static ATerm w_0 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = n_6(z_77, w_0, n_13, o_13, t);
              }
              t = t_13(t);
              LocalPopChoice(g_18);
            }
          else
            {
              t = f_18;
              {
                ATerm s_4 = NULL,v_4 = NULL,v_0 = NULL;
                t = SSLgetAnnotations(m_13);
                s_4 = t;
                t = o_13;
                t = t_13(t);
                v_4 = t;
                t = (ATerm) ATinsert(CheckATermList(v_4), n_13);
                v_0 = t;
                t = SSLsetAnnotations(v_0, s_4);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = t_13(t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm e_14 = NULL;
  if(match_cons(t, sym__2))
    {
      e_14 = ATgetArgument(t, 0);
      if((e_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
  w_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  {
    ATerm h_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_18 = ATgetArgument(t, 0);
            ATerm l_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = e_7(o_37, p_37, t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = h_18;
        t = (ATerm) ATempty;
      }
  }
  y_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_13, q_37);
  t = o_6(x_0, y_13, q_37, t);
  x_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_37, p_37, x_13);
  t = lookup_table_0_1(o_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(p_37, x_13, z_13, t);
  t = w_13;
  return(t);
}
static ATerm q_6 (ATerm a_86 (ATerm), ATerm y_37, ATerm x_37, ATerm t)
{
  static ATerm y_0 (ATerm t)
  {
    ATerm f_14 = NULL,i_14 = NULL;
    if(match_cons(t, sym__2))
      {
        f_14 = ATgetArgument(t, 0);
        i_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_37, f_14, i_14);
    t = a_86(t);
    return(t);
  }
  t = x_37;
  t = map_1_0(y_0, t);
  return(t);
}
static ATerm u_6 (ATerm z_41, ATerm a_42, ATerm t)
{
  t = SSL_access(z_41, a_42);
  return(t);
}
static ATerm z_14 (ATerm t_14, ATerm t)
{
  t = SSL_fclose(t_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL;
  x_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_14 = ATgetArgument(t, 0);
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_14);
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            t = z_14(x_14, t);
          }
      }
    }
  else
    {
      t = z_14(x_14, t);
    }
  return(t);
}
static ATerm r_6 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm s_6 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm a_15 = NULL;
  t = SSL_fopen(i_42, j_42);
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_15);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_15 = NULL;
  t = SSL_stdin_stream();
  b_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_15);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_15 = NULL;
  t = SSL_stdout_stream();
  e_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_15 = NULL;
  t = SSL_stderr_stream();
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_15);
  return(t);
}
static ATerm n_17 (ATerm n_15, ATerm t)
{
  ATerm r_15 = NULL;
  t = SSL_explode_term(n_15);
  if(match_cons(t, sym__2))
    {
      ATerm p_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_18 = ATgetArgument(t, 1);
        if(((ATgetType(r_18) == AT_LIST) && !(ATisEmpty(r_18))))
          {
            r_15 = ATgetFirst((ATermList) r_18);
            {
              ATerm y_18 = (ATerm) ATgetNext((ATermList) r_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_17 (ATerm x_15, ATerm a_16, ATerm b_16, ATerm t)
{
  ATerm c_16 = NULL,e_16 = NULL,g_16 = NULL,o_16 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(b_16);
  g_16 = t;
  t = x_15;
  if(match_cons(t, sym_Path_1))
    {
      o_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_16, a_16);
  z_0 = t;
  t = SSLsetAnnotations(z_0, g_16);
  if(match_cons(t, sym__2))
    {
      c_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(c_16, e_16, t);
  return(t);
}
static ATerm t_17 (ATerm u_16, ATerm w_16, ATerm x_16, ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,f_17 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(x_16);
  a_17 = t;
  t = SSL_is_string(u_16);
  f_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_17, w_16);
  a_1 = t;
  t = SSLsetAnnotations(a_1, a_17);
  if(match_cons(t, sym__2))
    {
      y_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(y_16, z_16, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,m_17 = NULL;
  i_17 = t;
  if(match_cons(t, sym__2))
    {
      j_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
      {
        ATerm z_18 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_17(i_17, t);
            LocalPopChoice(f_19);
          }
        else
          {
            t = z_18;
            {
              ATerm g_19 = t;
              int h_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_17(j_17, m_17, i_17, t);
                  LocalPopChoice(h_19);
                }
              else
                {
                  t = g_19;
                  t = t_17(j_17, m_17, i_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_17(i_17, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_17 = NULL,z_17 = NULL,a_18 = NULL,i_18 = NULL;
  i_18 = t;
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_18, term_k_19);
        t = t_6(t);
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        {
          ATerm b_6 = NULL,c_6 = NULL;
          t = term_l_19;
          c_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_19, i_18);
          t = w_6(c_6, i_18, t);
          b_6 = t;
          t = SSL_perror(b_6);
          _fail(t);
        }
      }
  }
  z_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(a_18, t);
  w_17 = t;
  t = z_17;
  t = fclose_0_0(t);
  t = w_17;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_m_19;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_n_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_18 = NULL,q_18 = NULL;
      o_18 = t;
      t = (ATerm) ATinsert(ATempty, term_r_19);
      q_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_18, (ATerm) ATinsert(ATempty, term_r_19));
      t = u_6(o_18, q_18, t);
      LocalPopChoice(p_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = o_19;
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_19 = t;
            if((PushChoice() == 0))
              {
                ATerm s_18 = NULL,t_18 = NULL;
                s_18 = t;
                t = (ATerm) ATinsert(ATempty, term_a_9);
                t_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_18, (ATerm) ATinsert(ATempty, term_a_9));
                t = u_6(s_18, t_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_19;
              }
            t = debug_1_0(b_1, t);
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            t = debug_1_0(e_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = debug_1_0(h_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_y_19;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm i_20 = NULL,k_20 = NULL,n_20 = NULL;
  i_20 = t;
  t = term_e_17;
  k_20 = t;
  t = (ATerm) ATinsert(ATempty, term_c_20);
  n_20 = t;
  t = SSL_printnl(k_20, n_20);
  t = i_20;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  if(match_cons(t, sym__3))
    {
      o_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
      q_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_6(o_20, p_20, q_20, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm r_20 = NULL,u_20 = NULL,v_20 = NULL;
  r_20 = t;
  t = term_e_17;
  u_20 = t;
  t = (ATerm) ATinsert(ATempty, term_d_20);
  v_20 = t;
  t = SSL_printnl(u_20, v_20);
  t = r_20;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  w_20 = t;
  t = term_e_17;
  x_20 = t;
  t = (ATerm) ATinsert(ATempty, term_c_20);
  y_20 = t;
  t = SSL_printnl(x_20, y_20);
  t = w_20;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,q_19 = NULL,w_19 = NULL,x_19 = NULL,z_19 = NULL,a_20 = NULL;
  u_18 = t;
  t = if_verbose5_1_0(g_1, t);
  {
    ATerm e_20 = t;
    if((PushChoice() == 0))
      {
        ATerm b_20 = NULL,f_20 = NULL;
        t = term_g_20;
        b_20 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, u_18);
        f_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_20, (ATerm) ATmakeAppl(sym_Imported_1, u_18));
        t = e_7(b_20, f_20, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_20;
      }
  }
  w_18 = t;
  t = term_g_20;
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_20, term_h_20, (ATerm) ATinsert(ATempty, u_18));
  t = lookup_table_0_1(q_19, t);
  a_20 = t;
  t = term_h_20;
  w_19 = t;
  t = (ATerm) ATinsert(ATempty, u_18);
  x_19 = t;
  t = a_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(w_19, x_19, z_19, t);
  t = w_18;
  t = if_verbose4_1_0(i_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(n_1, t);
  v_18 = t;
  t = term_g_20;
  e_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_20, v_18);
  t = q_6(s_1, e_19, v_18, t);
  t = if_verbose6_1_0(t_1, t);
  t = term_g_20;
  x_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_20, (ATerm)ATmakeAppl(sym_Imported_1, u_18), (ATerm) ATempty);
  t = lookup_table_0_1(x_18, t);
  d_19 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, u_18);
  a_19 = t;
  t = (ATerm) ATempty;
  b_19 = t;
  t = d_19;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(a_19, b_19, c_19, t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_20, (ATerm)ATmakeAppl(sym_Imported_1, u_18), (ATerm) ATempty);
  t = if_verbose4_1_0(u_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,n_21 = NULL,o_21 = NULL;
  l_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_21;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_21 = ATgetFirst((ATermList) t);
          o_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm j_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_6 = NULL,l_7 = NULL,o_7 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(l_21);
            m_6 = t;
            t = n_21;
            t = g_82(t);
            l_7 = t;
            t = o_21;
            t = filter_1_0(g_82, t);
            o_7 = t;
            t = (ATerm) ATinsert(CheckATermList(o_7), l_7);
            f_1 = t;
            t = SSLsetAnnotations(f_1, m_6);
            LocalPopChoice(l_20);
          }
        else
          {
            t = j_20;
            t = o_21;
            t = filter_1_0(g_82, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm t)
{
  static ATerm v_21 (ATerm t)
  {
    ATerm m_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_71(t);
        t = v_21(t);
        LocalPopChoice(s_20);
      }
    else
      {
        t = m_20;
        t = u_71(t);
      }
    return(t);
  }
  t = v_21(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_21 = NULL,z_21 = NULL;
      t = term_u_7;
      w_21 = t;
      t = term_a_21;
      z_21 = t;
      t = term_b_21;
      t = e_7(w_21, z_21, t);
      LocalPopChoice(z_20);
    }
  else
    {
      t = t_20;
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_22 = NULL;
            t = term_e_21;
            a_22 = t;
            t = SSL_getenv(a_22);
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
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
  t = term_f_21;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL;
  t = term_g_20;
  j_22 = t;
  t = term_g_21;
  k_22 = t;
  t = term_h_21;
  t = e_7(j_22, k_22, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm i_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_21;
      }
  }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm c_22 = NULL;
  t = if_verbose5_1_0(v_1, t);
  c_22 = t;
  {
    ATerm k_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_22 = NULL,f_22 = NULL;
        t = term_g_20;
        e_22 = t;
        t = term_h_20;
        f_22 = t;
        t = term_p_21;
        t = e_7(e_22, f_22, t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = k_21;
        {
          ATerm h_22 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          h_22 = t;
          t = repeat_2_0(y_1, _id, t);
          t = h_22;
        }
      }
  }
  t = c_22;
  t = if_verbose5_1_0(a_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_q_21;
  return(t);
}
static ATerm s_23 (ATerm u_22, ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
  t = term_g_20;
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, u_22);
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_20, (ATerm) ATmakeAppl(sym_Tool_1, u_22));
  t = e_7(y_22, z_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_21 = ATgetFirst((ATermList) t);
      if(match_cons(r_21, sym__2))
        {
          ATerm t_21 = ATgetArgument(r_21, 0);
          x_22 = ATgetArgument(r_21, 1);
        }
      else
        _fail(t);
      {
        ATerm s_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_22;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_q_21;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_g_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_u_21;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_23 = NULL,b_23 = NULL,f_23 = NULL;
      t = if_verbose5_1_0(e_2, t);
      t = xtc_load_0_0(t);
      f_23 = t;
      if(match_cons(t, sym__2))
        {
          a_23 = ATgetArgument(t, 0);
          b_23 = ATgetArgument(t, 1);
          {
            ATerm b_22 = t;
            int d_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
                t = term_g_20;
                l_23 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, a_23);
                m_23 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_20, (ATerm) ATmakeAppl(sym_Tool_1, a_23));
                t = e_7(l_23, m_23, t);
                {
                  static ATerm i_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((b_23 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((k_23 != NULL) && (k_23 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          k_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(i_2, t);
                }
                t = not_null(k_23);
                LocalPopChoice(d_22);
              }
            else
              {
                t = b_22;
                t = s_23(f_23, t);
              }
          }
        }
      else
        {
          t = s_23(f_23, t);
        }
      t = if_verbose5_1_0(j_2, t);
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      {
        ATerm r_23 = NULL,c_8 = NULL,d_8 = NULL;
        r_23 = t;
        t = term_e_17;
        c_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_22), r_23), term_g_22);
        d_8 = t;
        t = SSL_printnl(c_8, d_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_22), r_23), term_g_22);
        t = if_verbose5_1_0(l_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm w_88 (ATerm), ATerm t)
{
  ATerm u_23 = NULL,x_23 = NULL;
  x_23 = t;
  t = w_88(t);
  t = xtc_find_0_0(t);
  u_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_23, x_23);
  {
    static ATerm n_2 (ATerm t)
    {
      ATerm y_23 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, u_23, x_23);
      t = j_6(u_23, x_23, t);
      t = term_l_22;
      y_23 = t;
      t = SSL_exit(y_23);
      return(t);
    }
    t = fork_and_wait_1_0(n_2, t);
  }
  t = x_23;
  return(t);
}
static ATerm v_6 (ATerm k_84 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,e_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
  e_24 = t;
  t = k_84(t);
  z_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_23, e_35, c_35);
  t = f_7(z_23, e_35, c_35, t);
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_24 = NULL;
        t = term_o_22;
        l_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_23, term_o_22);
        t = e_7(z_23, l_24, t);
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_24 = ATgetFirst((ATermList) t);
      b_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_23, term_o_22, (ATerm) ATinsert(CheckATermList(b_24), (ATerm) ATinsert(CheckATermList(a_24), e_35)));
  t = lookup_table_0_1(z_23, t);
  j_24 = t;
  t = term_o_22;
  g_24 = t;
  t = (ATerm) ATinsert(CheckATermList(b_24), (ATerm) ATinsert(CheckATermList(a_24), e_35));
  h_24 = t;
  t = j_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(g_24, h_24, i_24, t);
  t = e_24;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm p_24 = NULL;
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_24 = NULL,p_8 = NULL;
      u_24 = t;
      t = term_r_22;
      p_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_24, term_r_22);
      t = w_6(u_24, p_8, t);
      p_24 = t;
      t = SSL_mkstemp(p_24);
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      {
        ATerm v_24 = NULL;
        t = term_s_22;
        v_24 = t;
        t = SSL_perror(v_24);
        _fail(t);
      }
    }
  return(t);
}
static ATerm w_6 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = SSL_strcat(l_32, m_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm h_25 = NULL,k_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
  t = P__tmpdir_0_0(t);
  n_25 = t;
  t = term_v_22;
  o_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_25, term_v_22);
  t = w_6(n_25, o_25, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      k_25 = ATgetArgument(t, 0);
      h_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_w_22;
  m_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_25, term_w_22);
  t = v_6(q_2, k_25, m_25, t);
  t = SSL_close(h_25);
  t = k_25;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL;
  r_25 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_25 = NULL,w_25 = NULL;
      t = r_25;
      t = xtc_new_file_0_0(t);
      v_25 = t;
      t = r_0(t);
      w_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_25, (ATerm) ATinsert(ATinsert(ATempty, v_25), term_v_7));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_25);
    }
  else
    {
      ATerm b_26 = NULL,d_26 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_25;
      t = xtc_new_file_0_0(t);
      b_26 = t;
      t = r_0(t);
      d_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_26, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_26), term_v_7), s_25), term_c_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_26);
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_d_23;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm x_26 = NULL,a_27 = NULL;
  t = term_w_22;
  t = pass_width_0_0(t);
  x_26 = t;
  t = term_w_22;
  t = pass_verbose_0_0(t);
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_26, a_27);
  t = conc_0_0(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_d_23;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm c_27 = NULL,e_27 = NULL;
  t = term_w_22;
  t = pass_width_0_0(t);
  c_27 = t;
  t = term_w_22;
  t = pass_verbose_0_0(t);
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_27, e_27);
  t = conc_0_0(t);
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm e_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_26 = NULL,w_26 = NULL;
      w_26 = t;
      if(match_cons(t, sym_FILE_1))
        {
          u_26 = ATgetArgument(t, 0);
          {
            ATerm x_8 = NULL,o_1 = NULL;
            t = SSLgetAnnotations(w_26);
            x_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, u_26);
            o_1 = t;
            t = SSLsetAnnotations(o_1, x_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_26;
        }
      LocalPopChoice(g_23);
      t = xtc_transform_file_2_0(r_2, t_2, t);
    }
  else
    {
      t = e_23;
      t = xtc_transform_term_2_0(u_2, v_2, t);
    }
  return(t);
}
static ATerm e_7 (ATerm k_38, ATerm l_38, ATerm t)
{
  ATerm m_27 = NULL;
  t = lookup_table_0_1(k_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(l_38, m_27, t);
  return(t);
}
static ATerm y_6 (ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL;
  p_27 = t;
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = e_7(w_36, x_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_23 = ATgetFirst((ATermList) t);
            o_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_23);
        {
          ATerm s_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, o_27);
          t = lookup_table_0_1(w_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              s_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_7(x_36, o_27, s_27, t);
          t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, o_27);
        }
      }
    else
      {
        t = h_23;
        {
          ATerm u_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
          t = lookup_table_0_1(w_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              u_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_7(x_36, u_27, t);
          t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        }
      }
  }
  t = p_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm h_84 (ATerm), ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,f_28 = NULL,g_28 = NULL;
  b_28 = t;
  t = h_84(t);
  a_28 = t;
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_28 = NULL;
        t = term_o_22;
        j_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_28, term_o_22);
        t = e_7(a_28, j_28, t);
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_27 = ATgetFirst((ATermList) t);
      w_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_28, term_o_22, w_27);
  t = lookup_table_0_1(a_28, t);
  g_28 = t;
  t = term_o_22;
  c_28 = t;
  t = g_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(c_28, w_27, f_28, t);
  t = x_27;
  {
    static ATerm x_2 (ATerm t)
    {
      ATerm k_28 = NULL;
      k_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_28, k_28);
      t = y_6(a_28, k_28, t);
      return(t);
    }
    t = map_1_0(x_2, t);
  }
  t = b_28;
  return(t);
}
ATerm restore_always_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_85(t);
      t = i_85(t);
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      t = i_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  o_28 = t;
  t = g_84(t);
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_28, term_o_22);
  {
    ATerm t_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_28 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_23 = ATgetArgument(t, 0);
            ATerm c_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_22;
        z_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_28, term_o_22);
        t = e_7(n_28, z_28, t);
        LocalPopChoice(v_23);
      }
    else
      {
        t = t_23;
        t = (ATerm) ATempty;
      }
  }
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_28, term_o_22, (ATerm) ATinsert(CheckATermList(r_28), (ATerm) ATempty));
  t = lookup_table_0_1(n_28, t);
  v_28 = t;
  t = term_o_22;
  s_28 = t;
  t = (ATerm) ATinsert(CheckATermList(r_28), (ATerm) ATempty);
  t_28 = t;
  t = v_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(s_28, t_28, u_28, t);
  t = o_28;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_t_22;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm m_29 = NULL;
  m_29 = t;
  {
    ATerm d_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(m_29);
        LocalPopChoice(f_24);
      }
    else
      {
        t = d_24;
        t = m_29;
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm d_29 = NULL;
  static ATerm b_3 (ATerm t)
  {
    ATerm f_29 = NULL;
    f_29 = t;
    {
      ATerm k_24 = t;
      int m_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_29 = NULL,h_29 = NULL;
          t = term_t_22;
          g_29 = t;
          t = term_o_22;
          h_29 = t;
          t = term_n_24;
          t = e_7(g_29, h_29, t);
          LocalPopChoice(m_24);
        }
      else
        {
          t = k_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_29 != NULL) && (d_29 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_29 = ATgetFirst((ATermList) t);
        {
          ATerm o_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = d_29;
    t = map_1_0(d_3, t);
    t = f_29;
    t = end_scope_1_0(e_3, t);
    return(t);
  }
  t = begin_scope_1_0(y_2, t);
  t = restore_always_2_0(i_88, b_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
  p_29 = t;
  t = term_w_22;
  t = whoami_0_0(t);
  s_29 = t;
  t = term_e_17;
  u_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_24), s_29), term_q_24);
  v_29 = t;
  t = SSL_printnl(u_29, v_29);
  t = term_s_8;
  t_29 = t;
  t = SSL_exit(t_29);
  t = p_29;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
      t = term_w_22;
      t = n_0(t);
      d_30 = t;
      t = term_s_24;
      e_30 = t;
      t = term_t_24;
      f_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_24, term_t_24, d_30);
      t = f_7(e_30, f_30, d_30, t);
      _fail(t);
    }
  else
    {
      ATerm k_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_29 = ATgetFirst((ATermList) t);
          a_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_30 = ATgetFirst((ATermList) t);
          c_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_29;
      t = k_0(t);
      t = b_30;
      t = l_0(t);
      k_30 = t;
      t = (ATerm) ATinsert(CheckATermList(c_30), k_30);
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  if(match_string(t, "-k"))
    {
      t = m_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_30;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm n_30 = NULL,q_30 = NULL,r_30 = NULL;
  n_30 = t;
  t = SSL_string_to_int(n_30);
  q_30 = t;
  t = term_w_24;
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_24, q_30);
  t = h_7(r_30, q_30, t);
  t = n_30;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_3, h_3, i_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm b_31 = NULL;
  b_31 = t;
  if(match_string(t, "-S"))
    {
      t = b_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_31;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL;
  t = term_j_8;
  c_31 = t;
  t = term_a_25;
  d_31 = t;
  t = term_d_25;
  t = h_7(c_31, d_31, t);
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
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  e_31 = t;
  t = SSL_string_to_int(e_31);
  f_31 = t;
  t = term_j_8;
  g_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_8, f_31);
  t = h_7(g_31, f_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_31);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_g_25;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm h_31 = NULL,l_31 = NULL;
  t = term_i_25;
  h_31 = t;
  t = term_w_22;
  l_31 = t;
  t = term_j_25;
  t = h_7(h_31, l_31, t);
  t = term_l_25;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_p_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_3, o_3, p_3, t);
      LocalPopChoice(t_25);
    }
  else
    {
      t = q_25;
      {
        ATerm u_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_3, s_3, t_3, t);
            LocalPopChoice(x_25);
          }
        else
          {
            t = u_25;
            t = Option_3_0(v_3, w_3, z_3, t);
          }
      }
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm n_31 = NULL;
  n_31 = t;
  if(match_string(t, "-o"))
    {
      t = n_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_31;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm o_31 = NULL,q_31 = NULL;
  o_31 = t;
  t = term_v_7;
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_7, o_31);
  t = h_7(q_31, o_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_31);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_4, h_4, k_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm u_31 = NULL;
  u_31 = t;
  if(match_string(t, "-i"))
    {
      t = u_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_31;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  v_31 = t;
  t = term_c_23;
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_23, v_31);
  t = h_7(w_31, v_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_31);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm y_31 = NULL;
  y_31 = t;
  if(match_string(t, "-w"))
    {
      t = y_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = y_31;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL;
  z_31 = t;
  t = term_v_8;
  a_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_8, z_31);
  t = h_7(a_32, z_31, t);
  t = z_31;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm c_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(e_26);
    }
  else
    {
      t = c_26;
      {
        ATerm f_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(g_26);
          }
        else
          {
            t = f_26;
            {
              ATerm h_26 = t;
              int i_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(i_26);
                }
              else
                {
                  t = h_26;
                  {
                    ATerm j_26 = t;
                    int k_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(k_26);
                      }
                    else
                      {
                        t = j_26;
                        t = ArgOption_3_0(r_4, t_4, u_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_22;
  t = whoami_0_0(t);
  c_32 = t;
  t = term_e_17;
  e_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_26), c_32);
  f_32 = t;
  t = SSL_printnl(e_32, f_32);
  t = term_s_8;
  d_32 = t;
  t = SSL_exit(d_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm g_32 = NULL,j_32 = NULL;
  t = term_u_7;
  g_32 = t;
  t = term_m_26;
  j_32 = t;
  t = term_n_26;
  t = e_7(g_32, j_32, t);
  return(t);
}
static ATerm z_6 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm o_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(p_26);
    }
  else
    {
      t = o_26;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_32;
      t = c_81(t);
    }
  else
    {
      ATerm s_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_32 = ATgetFirst((ATermList) t);
          p_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_32;
      t = foldr_2_0(c_81, d_81, t);
      s_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_32, s_32);
      t = d_81(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_a_25;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(s_9, t_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_32 = NULL,h_9 = NULL,j_9 = NULL;
  t = times_0_0(t);
  j_9 = t;
  t = SSL_explode_term(j_9);
  if(match_cons(t, sym__2))
    {
      ATerm q_26 = ATgetArgument(t, 0);
      h_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_9;
  t = foldr_2_0(w_4, c_5, t);
  v_32 = t;
  t = SSL_TicksToSeconds(v_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_33 = NULL,p_33 = NULL,s_33 = NULL;
  m_33 = t;
  if(match_cons(t, sym__2))
    {
      p_33 = ATgetArgument(t, 0);
      s_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_33;
        if((p_33 != t))
          {
            _fail(t);
          }
        t = m_33;
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        t = (ATerm) ATmakeAppl(sym__2, p_33, s_33);
        {
          ATerm t_26 = t;
          int v_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_33, s_33);
              LocalPopChoice(v_26);
            }
          else
            {
              t = t_26;
              t = SSL_gtr(p_33, s_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_33, s_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_85 (ATerm), ATerm t)
{
  ATerm b_34 = NULL;
  b_34 = t;
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_34 = NULL,e_34 = NULL,g_34 = NULL;
        t = term_u_7;
        e_34 = t;
        t = term_j_8;
        g_34 = t;
        t = term_q_8;
        t = e_7(e_34, g_34, t);
        d_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_34, term_s_8);
        t = geq_0_0(t);
        t = b_34;
        t = t_85(t);
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = b_34;
      }
  }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm i_34 = NULL,n_34 = NULL,r_34 = NULL,s_34 = NULL;
  t = run_time_0_0(t);
  i_34 = t;
  t = term_w_22;
  t = whoami_0_0(t);
  n_34 = t;
  t = term_e_17;
  r_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_27), i_34), term_g_9), n_34);
  s_34 = t;
  t = SSL_printnl(r_34, s_34);
  t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_27), i_34), term_g_9), n_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_25;
  v_34 = t;
  t = SSL_exit(v_34);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL;
  z_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_35 = ATgetArgument(t, 0);
          {
            ATerm v_10 = NULL,x_1 = NULL;
            t = SSLgetAnnotations(z_35);
            v_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_35);
            x_1 = t;
            t = SSLsetAnnotations(x_1, v_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm d_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_35 = NULL,n_35 = NULL;
      t = term_u_7;
      m_35 = t;
      t = term_g_27;
      n_35 = t;
      t = term_h_27;
      t = e_7(m_35, n_35, t);
      LocalPopChoice(f_27);
    }
  else
    {
      t = d_27;
      t = fetch_1_0(h_5, t);
    }
  t = y_89(t);
  return(t);
}
static ATerm i_7 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t)
{
  ATerm e_36 = NULL;
  t = SSL_hashtable_put(l_40, j_40, k_40);
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_36);
  return(t);
}
static ATerm j_7 (ATerm m_40, ATerm n_40, ATerm t)
{
  t = SSL_hashtable_get(n_40, m_40);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_38, ATerm t)
{
  ATerm b_37 = NULL;
  t = table_hashtable_0_0(t);
  b_37 = t;
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_11 = NULL;
        t = b_37;
        if(match_cons(t, sym_Hashtable_1))
          {
            e_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_7(d_38, e_11, t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        {
          ATerm l_11 = NULL;
          t = d_38;
          t = table_create_0_0(t);
          t = b_37;
          if(match_cons(t, sym_Hashtable_1))
            {
              l_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_7(d_38, l_11, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm e_37 = NULL;
  t = SSL_hashtable_create(r_40, s_40);
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_37);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,k_37 = NULL,l_37 = NULL;
  f_37 = t;
  t = term_k_27;
  k_37 = t;
  t = term_l_27;
  l_37 = t;
  t = f_37;
  t = new_hashtable_0_2(k_37, l_37, t);
  g_37 = t;
  t = f_37;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(f_37, g_37, h_37, t);
  t = f_37;
  return(t);
}
static ATerm b_7 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm m_37 = NULL;
  t = SSL_hashtable_remove(p_40, o_40);
  m_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_37);
  return(t);
}
static ATerm c_7 (ATerm t_40, ATerm t)
{
  ATerm n_37 = NULL;
  t = SSL_hashtable_destroy(t_40);
  n_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_37);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm v_37 = NULL;
  t = SSL_table_hashtable();
  v_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_37);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm w_37 = NULL,b_38 = NULL,c_38 = NULL,h_38 = NULL;
  w_37 = t;
  t = table_hashtable_0_0(t);
  b_38 = t;
  t = lookup_table_0_1(w_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_7(h_38, t);
  t = b_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_7(w_37, c_38, t);
  t = w_37;
  return(t);
}
ATerm map_1_0 (ATerm o_73 (ATerm), ATerm t)
{
  static ATerm y_38 (ATerm t)
  {
    ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
    v_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_38;
      }
    else
      {
        ATerm v_11 = NULL,y_11 = NULL,z_11 = NULL,z_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_38 = ATgetFirst((ATermList) t);
            x_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_38);
        v_11 = t;
        t = w_38;
        t = o_73(t);
        y_11 = t;
        t = x_38;
        t = y_38(t);
        z_11 = t;
        t = (ATerm) ATinsert(CheckATermList(z_11), y_11);
        z_1 = t;
        t = SSLsetAnnotations(z_1, v_11);
      }
    return(t);
  }
  t = y_38(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_39 = ATgetFirst((ATermList) t);
      c_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_39 = NULL,h_39 = NULL;
        static ATerm i_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_39)), not_null(h_39));
          return(t);
        }
        t = c_39;
        t = i_0(t);
        if(((g_39 != NULL) && (g_39 != t)))
          _fail(t);
        else
          g_39 = t;
        t = b_39;
        t = g_0(t);
        if(((h_39 != NULL) && (h_39 != t)))
          _fail(t);
        else
          h_39 = t;
        t = c_39;
        t = reverse_acc_2_0(g_0, i_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_22;
      t = i_0(t);
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,c_2 = NULL;
  p_39 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_39);
  n_39 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_39);
  c_2 = t;
  t = SSLsetAnnotations(c_2, n_39);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm r_39 = NULL;
  r_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_39), term_n_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL;
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_39 = NULL,m_39 = NULL;
      t = term_u_7;
      l_39 = t;
      t = term_m_26;
      m_39 = t;
      t = term_n_26;
      t = e_7(l_39, m_39, t);
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      t = fetch_1_0(l_5, t);
    }
  t = term_t_27;
  t = echo_0_0(t);
  t = term_s_24;
  j_39 = t;
  t = term_t_24;
  k_39 = t;
  t = term_v_27;
  t = e_7(j_39, k_39, t);
  t = reverse_acc_2_0(_id, m_5, t);
  t = map_1_0(n_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm y_73 (ATerm), ATerm t)
{
  static ATerm b_41 (ATerm t)
  {
    ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
    y_40 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_40 = ATgetFirst((ATermList) t);
        a_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_27 = t;
      int z_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_12 = NULL,t_12 = NULL,j_3 = NULL;
          t = SSLgetAnnotations(y_40);
          q_12 = t;
          t = z_40;
          t = y_73(t);
          t_12 = t;
          t = (ATerm) ATinsert(CheckATermList(a_41), t_12);
          j_3 = t;
          t = SSLsetAnnotations(j_3, q_12);
          LocalPopChoice(z_27);
        }
      else
        {
          t = y_27;
          {
            ATerm g_13 = NULL,r_13 = NULL,l_3 = NULL;
            t = SSLgetAnnotations(y_40);
            g_13 = t;
            t = a_41;
            t = b_41(t);
            r_13 = t;
            t = (ATerm) ATinsert(CheckATermList(r_13), z_40);
            l_3 = t;
            t = SSLsetAnnotations(l_3, g_13);
          }
        }
    }
    return(t);
  }
  t = b_41(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
  f_41 = t;
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_41;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_28 = ATgetFirst((ATermList) t);
                ATerm i_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_41;
          }
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        t = (ATerm) ATinsert(ATempty, f_41);
      }
  }
  g_41 = t;
  t = term_x_7;
  h_41 = t;
  t = SSL_printnl(h_41, g_41);
  t = f_41;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL;
  t = term_u_7;
  l_41 = t;
  t = term_m_26;
  m_41 = t;
  t = term_n_26;
  t = e_7(l_41, m_41, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL;
  t = term_l_28;
  n_41 = t;
  t = term_w_22;
  o_41 = t;
  t = term_m_28;
  t = h_7(n_41, o_41, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_p_28;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  t = term_l_28;
  r_41 = t;
  t = term_w_22;
  s_41 = t;
  t = term_m_28;
  t = h_7(r_41, s_41, t);
  t = term_q_28;
  p_41 = t;
  t = term_w_22;
  q_41 = t;
  t = term_w_28;
  t = h_7(p_41, q_41, t);
  t = term_x_28;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_y_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_5, q_5, t_5, t);
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
      t = Option_3_0(u_5, w_5, z_5, t);
    }
  return(t);
}
static ATerm h_7 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm t_41 = NULL,v_41 = NULL;
  t = term_u_7;
  t_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_7, w_40, x_40);
  t = lookup_table_0_1(t_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(w_40, x_40, v_41, t);
  t = (ATerm) ATmakeAppl(sym__3, term_u_7, w_40, x_40);
  return(t);
}
static ATerm f_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t)
{
  ATerm y_41 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL;
  y_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm c_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_29 = ATgetArgument(t, 0);
            ATerm j_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = e_7(r_36, s_36, t);
        LocalPopChoice(e_29);
      }
    else
      {
        t = c_29;
        t = (ATerm) ATempty;
      }
  }
  b_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_36, s_36, (ATerm) ATinsert(CheckATermList(b_42), q_36));
  t = lookup_table_0_1(r_36, t);
  e_42 = t;
  t = (ATerm) ATinsert(CheckATermList(b_42), q_36);
  c_42 = t;
  t = e_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(s_36, c_42, d_42, t);
  t = y_41;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
      t = term_w_22;
      t = e_0(t);
      q_42 = t;
      t = term_s_24;
      r_42 = t;
      t = term_t_24;
      s_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_24, term_t_24, q_42);
      t = f_7(r_42, s_42, q_42, t);
      _fail(t);
    }
  else
    {
      ATerm v_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_42 = ATgetFirst((ATermList) t);
          p_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_42;
      t = c_0(t);
      t = term_w_22;
      t = d_0(t);
      v_42 = t;
      t = (ATerm) ATinsert(CheckATermList(p_42), v_42);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_60 (ATerm), ATerm o_60 (ATerm), ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,r_3 = NULL;
  e_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_42 = ATgetFirst((ATermList) t);
      b_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_43);
  w_42 = t;
  t = x_42;
  t = n_60(t);
  c_43 = t;
  t = b_43;
  t = o_60(t);
  d_43 = t;
  t = (ATerm) ATinsert(CheckATermList(d_43), c_43);
  r_3 = t;
  t = SSLsetAnnotations(r_3, w_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,w_43 = NULL,x_43 = NULL,u_3 = NULL;
  p_43 = t;
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_29;
        t = w_91(t);
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
      }
  }
  t = p_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_43 = ATgetFirst((ATermList) t);
      s_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_43);
  q_43 = t;
  t = term_m_26;
  x_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_26, r_43);
  t = h_7(x_43, r_43, t);
  t = s_43;
  {
    static ATerm j_44 (ATerm t)
    {
      ATerm o_29 = t;
      int q_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_29 = t;
          int w_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_44 = NULL;
              b_44 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_44;
              LocalPopChoice(w_29);
            }
          else
            {
              t = r_29;
              t = w_91(t);
              t = Cons_2_0(_id, j_44, t);
            }
          LocalPopChoice(q_29);
        }
      else
        {
          t = o_29;
          {
            ATerm f_44 = NULL,g_44 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_44 = ATgetFirst((ATermList) t);
                g_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_44), (ATerm) ATmakeAppl(sym_Undefined_1, f_44));
          }
        }
      return(t);
    }
    t = j_44(t);
  }
  w_43 = t;
  t = (ATerm) ATinsert(CheckATermList(w_43), (ATerm) ATmakeAppl(sym_Program_1, r_43));
  u_3 = t;
  t = SSLsetAnnotations(u_3, q_43);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm w_44 = NULL;
  w_44 = t;
  if(match_string(t, "--help"))
    {
      t = w_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_44;
        }
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL;
  t = term_g_27;
  c_45 = t;
  t = term_w_22;
  d_45 = t;
  t = term_x_29;
  t = h_7(c_45, d_45, t);
  t = term_y_29;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_g_30;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_91 (ATerm), ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL;
  q_44 = t;
  t = term_s_24;
  r_44 = t;
  t = term_h_30;
  t = lookup_table_0_1(r_44, t);
  v_44 = t;
  t = term_t_24;
  s_44 = t;
  t = (ATerm) ATempty;
  t_44 = t;
  t = v_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(s_44, t_44, u_44, t);
  t = q_44;
  {
    static ATerm a_6 (ATerm t)
    {
      ATerm i_30 = t;
      int j_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_91(t);
          LocalPopChoice(j_30);
        }
      else
        {
          t = i_30;
          {
            ATerm l_30 = t;
            int o_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_6, e_6, f_6, t);
                LocalPopChoice(o_30);
              }
            else
              {
                t = l_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_6, t);
  }
  {
    ATerm p_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_45 = NULL;
        p_45 = t;
        {
          ATerm t_30 = t;
          int u_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_15 = NULL;
              t = p_45;
              {
                ATerm v_30 = t;
                int w_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_15 = NULL,g_15 = NULL;
                    t = term_u_7;
                    d_15 = t;
                    t = term_g_27;
                    g_15 = t;
                    t = term_h_27;
                    t = e_7(d_15, g_15, t);
                    LocalPopChoice(w_30);
                  }
                else
                  {
                    t = v_30;
                    t = fetch_1_0(k_6, t);
                  }
              }
              t = p_45;
              t = default_system_usage_0_0(t);
              t = term_a_25;
              c_15 = t;
              t = SSL_exit(c_15);
              LocalPopChoice(u_30);
            }
          else
            {
              t = t_30;
              {
                ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
                t = term_u_7;
                l_15 = t;
                t = term_l_28;
                m_15 = t;
                t = term_x_30;
                t = e_7(l_15, m_15, t);
                t = p_45;
                t = default_system_about_0_0(t);
                t = term_a_25;
                k_15 = t;
                t = SSL_exit(k_15);
              }
            }
        }
        LocalPopChoice(s_30);
      }
    else
      {
        t = p_30;
        {
          ATerm y_30 = t;
          int z_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL;
              static ATerm g_7 (ATerm t)
              {
                ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,d_4 = NULL;
                v_45 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_45 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_45);
                t_45 = t;
                t = u_45;
                if(((o_44 != NULL) && (o_44 != t)))
                  _fail(t);
                else
                  o_44 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_45);
                d_4 = t;
                t = SSLsetAnnotations(d_4, t_45);
                return(t);
              }
              t = fetch_1_0(g_7, t);
              t = term_e_17;
              r_45 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_44)), term_a_31);
              s_45 = t;
              t = SSL_printnl(r_45, s_45);
              t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_44)), term_a_31));
              t = default_system_usage_0_0(t);
              t = term_s_8;
              q_45 = t;
              t = SSL_exit(q_45);
              LocalPopChoice(z_30);
            }
          else
            {
              t = y_30;
            }
        }
      }
  }
  p_44 = t;
  t = term_s_24;
  t = table_destroy_0_0(t);
  t = p_44;
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL;
  t = parse_options_1_0(a_90, t);
  a_46 = t;
  t = term_i_31;
  t = table_create_0_0(t);
  t = term_i_31;
  b_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_31, term_j_31, a_46);
  t = lookup_table_0_1(b_46, t);
  e_46 = t;
  t = term_j_31;
  c_46 = t;
  t = e_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(c_46, a_46, d_46, t);
  t = a_46;
  t = c_90(t);
  {
    ATerm k_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_90, t);
        LocalPopChoice(m_31);
      }
    else
      {
        t = k_31;
        {
          ATerm p_31 = t;
          int r_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_90(t);
              t = report_success_0_0(t);
              LocalPopChoice(r_31);
            }
          else
            {
              t = p_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = xtc_temp_files_1_0(m_7, t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
      t = term_u_7;
      i_46 = t;
      t = term_c_23;
      j_46 = t;
      t = term_x_31;
      t = e_7(i_46, j_46, t);
      h_46 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_46);
      LocalPopChoice(t_31);
    }
  else
    {
      t = s_31;
      t = term_a_8;
    }
  t = abox2text_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, k_7, t);
  return(t);
}
