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
ATerm term_i_32;
ATerm term_p_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_a_31;
ATerm term_k_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_r_29;
ATerm term_c_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_q_28;
ATerm term_d_28;
ATerm term_z_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_o_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_i_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_s_24;
ATerm term_q_24;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_i_22;
ATerm term_x_21;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_y_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_b_15;
ATerm term_x_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
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
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_s_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_v_8;
ATerm term_s_8;
ATerm term_r_8;
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
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_j_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_v_8);
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
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_s_8, term_p_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_9, term_v_9, term_w_9);
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
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_d_10, term_f_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_j_10, term_l_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_10, term_w_10, term_x_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_11, term_c_11, term_e_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_11, term_j_11, term_k_11);
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
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_x_11, term_y_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_d_12, term_f_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_i_12, term_j_12);
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
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_f_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_r_13, term_t_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_14, term_h_14, term_i_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_n_14, term_o_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_x_14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_r_15, term_s_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_y_15);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_f_16, term_g_16);
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
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_o_16, term_q_16);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Repository_0);
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
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_i_20, term_g_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__2, term_i_20, term_j_20);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_v_22, term_o_22);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_e_25);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_25);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__2, term_o_25, term_d_23);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_o_26);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_i_27);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym__2, term_x_24, term_y_24);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__2, term_q_28, term_d_23);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym__2, term_x_28, term_d_23);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym__2, term_i_27, term_d_23);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__3, term_x_24, term_y_24, (ATerm) ATempty);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_q_28);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_e_23);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm y_6 (ATerm t_14, ATerm u_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm f_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm x_4 (ATerm h_4, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm h_6 (ATerm b_34, ATerm c_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm pass_width_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm i_6 (ATerm t_17, ATerm u_17, ATerm t);
static ATerm j_6 (ATerm x_78 (ATerm), ATerm t_183, ATerm d_18, ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm t);
static ATerm k_6 (ATerm l_14, ATerm m_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm a_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm m_77 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm v_78 (ATerm), ATerm t);
static ATerm m_6 (ATerm k_50, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm r_98 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm q_98 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm s_98 (ATerm), ATerm t);
static ATerm o_6 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t);
static ATerm p_6 (ATerm z_87 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
static ATerm x_0 (ATerm t);
static ATerm q_6 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t);
static ATerm r_6 (ATerm u_98 (ATerm), ATerm s_46, ATerm r_46, ATerm t);
static ATerm v_6 (ATerm t_51, ATerm u_51, ATerm t);
static ATerm y_14 (ATerm p_14, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_6 (ATerm z_17, ATerm t);
static ATerm t_6 (ATerm c_52, ATerm d_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_17 (ATerm m_15, ATerm t);
static ATerm p_17 (ATerm t_15, ATerm x_15, ATerm a_16, ATerm t);
static ATerm q_17 (ATerm p_16, ATerm u_16, ATerm w_16, ATerm t);
static ATerm u_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_92 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm r_23 (ATerm q_22, ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm q_101 (ATerm), ATerm t);
static ATerm w_6 (ATerm m_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm x_6 (ATerm q_32, ATerm r_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm abox2text_0_0 (ATerm t);
static ATerm f_7 (ATerm e_47, ATerm f_47, ATerm t);
static ATerm z_6 (ATerm q_45, ATerm r_45, ATerm t);
ATerm end_scope_1_0 (ATerm j_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_94 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm c_101 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm a_7 (ATerm v_33, ATerm w_33, ATerm t);
ATerm foldr_2_0 (ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_98 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm need_help_1_0 (ATerm s_102 (ATerm), ATerm t);
static ATerm j_7 (ATerm d_50, ATerm e_50, ATerm f_50, ATerm t);
static ATerm k_7 (ATerm g_50, ATerm h_50, ATerm t);
ATerm lookup_table_0_1 (ATerm x_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm l_50, ATerm m_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm c_7 (ATerm i_50, ATerm j_50, ATerm t);
static ATerm d_7 (ATerm n_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_83 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm i_7 (ATerm q_50, ATerm r_50, ATerm t);
static ATerm g_7 (ATerm l_45, ATerm m_45, ATerm k_45, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_104 (ATerm), ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm parse_options_1_0 (ATerm p_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm t);
static ATerm h_7 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm i_1 = NULL,k_1 = NULL;
  i_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_3 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = i_1;
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
        t = (ATerm) ATmakeAppl(sym__2, k_1, e_0);
        t = y_6(k_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
        LocalPopChoice(n_7);
      }
    else
      {
        t = f_3;
        {
          ATerm o_7 = t;
          int q_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_1 = NULL;
              t = i_1;
              t = q_0(t);
              d_1 = t;
              {
                ATerm r_7 = t;
                if((PushChoice() == 0))
                  {
                    ATerm e_1 = NULL;
                    e_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = e_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = e_1;
                          }
                        else
                          {
                            t = e_1;
                            if((k_1 != t))
                              {
                                _fail(t);
                              }
                            t = e_1;
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
              t = (ATerm) ATmakeAppl(sym__2, k_1, d_1);
              t = y_6(k_1, d_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
              LocalPopChoice(q_7);
            }
          else
            {
              t = o_7;
              t = i_1;
              t = q_0(t);
              if((k_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
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
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 = NULL,t_2 = NULL;
      t = term_u_7;
      s_2 = t;
      t = term_v_7;
      t_2 = t;
      t = term_w_7;
      t = f_7(s_2, t_2, t);
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
  ATerm d_2 = NULL;
  d_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm m_1 = NULL,q_1 = NULL;
      t = term_v_7;
      {
        ATerm y_7 = t;
        int z_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 = NULL,s_1 = NULL;
            t = term_u_7;
            r_1 = t;
            t = term_v_7;
            s_1 = t;
            t = term_w_7;
            t = f_7(r_1, s_1, t);
            LocalPopChoice(z_7);
          }
        else
          {
            t = y_7;
            t = term_x_7;
          }
      }
      m_1 = t;
      t = term_a_8;
      q_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_a_8, m_1);
      t = y_6(q_1, m_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm b_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  static ATerm b_4 (ATerm t)
  {
    ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
    z_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_3 = ATgetFirst((ATermList) t);
        y_3 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_2 = NULL,g_2 = NULL,i_0 = NULL;
          t = SSLgetAnnotations(z_3);
          c_2 = t;
          t = y_3;
          t = b_4(t);
          g_2 = t;
          t = (ATerm) ATinsert(CheckATermList(g_2), x_3);
          i_0 = t;
          t = SSLsetAnnotations(i_0, c_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_3;
        t = f_84(t);
      }
    return(t);
  }
  t = b_4(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL;
  z_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_2;
    }
  else
    {
      static ATerm b_0 (ATerm t)
      {
        t = not_null(b_3);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_3 = ATgetFirst((ATermList) t);
          if(((b_3 != NULL) && (b_3 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            b_3 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_3;
      t = at_end_1_0(b_0, t);
    }
  return(t);
}
static ATerm x_4 (ATerm h_4, ATerm t)
{
  ATerm j_4 = NULL;
  t = SSL_explode_term(h_4);
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_8) != ATmakeSymbol("", 0, ATtrue)))
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
            static ATerm c_0 (ATerm t)
            {
              t = m_4;
              return(t);
            }
            t = l_4;
            t = at_end_1_0(c_0, t);
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
static ATerm h_6 (ATerm b_34, ATerm c_34, ATerm t)
{
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(b_34, c_34);
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      t = SSL_subtr(b_34, c_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
  t = term_j_8;
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_5 = NULL,f_5 = NULL;
        t = term_u_7;
        c_5 = t;
        t = term_j_8;
        f_5 = t;
        t = term_r_8;
        t = f_7(c_5, f_5, t);
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        t = term_s_8;
      }
  }
  z_4 = t;
  t = term_s_8;
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_4, term_s_8);
  t = h_6(z_4, b_5, t);
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
      ATerm g_5 = NULL,h_5 = NULL;
      t = term_u_7;
      g_5 = t;
      t = term_v_8;
      h_5 = t;
      t = term_z_8;
      t = f_7(g_5, h_5, t);
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
      t = v_6(o_5, r_5, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm i_6 (ATerm t_17, ATerm u_17, ATerm t)
{
  ATerm s_5 = NULL;
  t = SSL_write_term_to_stream_baf(t_17, u_17);
  s_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_5);
  return(t);
}
static ATerm j_6 (ATerm x_78 (ATerm), ATerm t_183, ATerm d_18, ATerm t)
{
  ATerm t_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_183, term_b_9);
  t = u_6(t);
  t_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_5, d_18);
  t = x_78(t);
  t = fclose_0_0(t);
  t = d_18;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm z_5 = NULL,b_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      if(match_cons(c_9, sym_Stream_1))
        {
          z_5 = ATgetArgument(c_9, 0);
        }
      else
        _fail(t);
      b_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(z_5, b_7, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm t)
{
  ATerm w_5 = NULL,y_5 = NULL;
  y_5 = t;
  t = xtc_new_file_0_0(t);
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_5, y_5);
  t = j_6(f_0, w_5, y_5, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_5);
  t = xtc_transform_file_2_0(p_100, q_100, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm k_6 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_execvp(l_14, m_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm k_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
  k_8 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      n_8 = ATgetArgument(t, 0);
      {
        ATerm p_2 = NULL,q_2 = NULL;
        t = SSL_int_to_string(n_8);
        p_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_9), p_2), term_d_9);
        q_2 = t;
        t = SSL_concat_strings(q_2);
      }
    }
  else
    {
      ATerm l_3 = NULL,n_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          n_8 = ATgetArgument(t, 0);
          o_8 = ATgetArgument(t, 1);
          p_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(o_8);
      l_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_8), term_h_9), l_3), term_g_9), n_8);
      n_3 = t;
      t = SSL_concat_strings(n_3);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm w_8 = NULL;
  static ATerm k_0 (ATerm t)
  {
    t = a_84(t);
    if(((w_8 != NULL) && (w_8 != t)))
      _fail(t);
    else
      w_8 = t;
    return(t);
  }
  t = fetch_1_0(k_0, t);
  t = not_null(w_8);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm x_8 = NULL;
  x_8 = t;
  {
    ATerm j_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm m_9 = ATgetArgument(t, 0);
              if((x_8 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_16), term_l_16), term_h_16), term_z_15), term_u_15), term_p_15), term_b_15), term_q_14), term_j_14), term_c_14), term_u_13), term_o_13), term_g_13), term_c_13), term_y_12), term_u_12), term_k_12), term_g_12), term_b_12), term_q_11), term_l_11), term_g_11), term_z_10), term_m_10), term_g_10), term_b_10), term_x_9), term_q_9);
        t = fetch_elem_1_0(n_0, t);
        LocalPopChoice(l_9);
      }
    else
      {
        t = j_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, x_8);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm f_9 = NULL,r_9 = NULL;
  f_9 = t;
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_16 = ATgetArgument(t, 0);
            r_9 = ATgetArgument(t, 1);
            {
              ATerm a_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_16);
        {
          ATerm b_17 = t;
          int c_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_4 = NULL,f_4 = NULL,g_4 = NULL;
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
              d_4 = t;
              t = term_f_17;
              f_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, d_4), term_h_17);
              g_4 = t;
              t = SSL_printnl(f_4, g_4);
              t = (ATerm) ATmakeAppl(sym__2, term_f_17, (ATerm) ATinsert(ATinsert(ATempty, d_4), term_h_17));
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
        t = s_16;
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
ATerm fork_and_wait_1_0 (ATerm m_77 (ATerm), ATerm t)
{
  ATerm e_10 = NULL,h_10 = NULL;
  h_10 = t;
  t = fork_0_0(t);
  e_10 = t;
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = h_10;
        t = m_77(t);
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        t = SSL_waitpid(e_10);
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
              ATerm r_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = h_10;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm v_78 (ATerm), ATerm t)
{
  ATerm k_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
  k_10 = t;
  t = v_78(t);
  n_10 = t;
  t = term_f_17;
  o_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_10), n_10);
  p_10 = t;
  t = SSL_printnl(o_10, p_10);
  t = k_10;
  return(t);
}
static ATerm m_6 (ATerm k_50, ATerm t)
{
  t = SSL_hashtable_keys(k_50);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL;
  static ATerm s_0 (ATerm t)
  {
    ATerm t_10 = NULL,u_10 = NULL;
    t_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_10), t_10);
    t = f_7(not_null(q_10), t_10, t);
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
      r_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(r_10, t);
  t = map_1_0(s_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm r_98 (ATerm), ATerm t)
{
  ATerm y_10 = NULL;
  y_10 = t;
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_11 = NULL,d_11 = NULL,i_11 = NULL;
        t = term_u_7;
        d_11 = t;
        t = term_j_8;
        i_11 = t;
        t = term_r_8;
        t = f_7(d_11, i_11, t);
        a_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_11, term_w_15);
        t = geq_0_0(t);
        t = y_10;
        t = r_98(t);
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        t = y_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm q_98 (ATerm), ATerm t)
{
  ATerm r_11 = NULL;
  r_11 = t;
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
        t = term_u_7;
        u_11 = t;
        t = term_j_8;
        v_11 = t;
        t = term_r_8;
        t = f_7(u_11, v_11, t);
        t_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_11, term_i_12);
        t = geq_0_0(t);
        t = r_11;
        t = q_98(t);
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        t = r_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  ATerm e_12 = NULL;
  e_12 = t;
  {
    ATerm c_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
        t = term_u_7;
        m_12 = t;
        t = term_j_8;
        n_12 = t;
        t = term_r_8;
        t = f_7(m_12, n_12, t);
        l_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_12, term_d_10);
        t = geq_0_0(t);
        t = e_12;
        t = s_98(t);
        LocalPopChoice(e_18);
      }
    else
      {
        t = c_18;
        t = e_12;
      }
  }
  return(t);
}
static ATerm o_6 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  t = d_88(t);
  {
    static ATerm v_0 (ATerm t)
    {
      ATerm p_12 = NULL;
      p_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_25, p_12);
      t = c_88(t);
      return(t);
    }
    t = fetch_1_0(v_0, t);
  }
  t = g_25;
  return(t);
}
static ATerm p_6 (ATerm z_87 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  static ATerm q_13 (ATerm t)
  {
    ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
    l_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_13 = ATgetFirst((ATermList) t);
            n_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_18 = t;
          int g_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_13;
              {
                static ATerm w_0 (ATerm t)
                {
                  t = c_25;
                  return(t);
                }
                t = o_6(z_87, w_0, m_13, n_13, t);
              }
              t = q_13(t);
              LocalPopChoice(g_18);
            }
          else
            {
              t = f_18;
              {
                ATerm t_4 = NULL,w_4 = NULL,u_0 = NULL;
                t = SSLgetAnnotations(l_13);
                t_4 = t;
                t = n_13;
                t = q_13(t);
                w_4 = t;
                t = (ATerm) ATinsert(CheckATermList(w_4), m_13);
                u_0 = t;
                t = SSLsetAnnotations(u_0, t_4);
              }
            }
        }
      }
    return(t);
  }
  t = d_25;
  t = q_13(t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm d_14 = NULL;
  if(match_cons(t, sym__2))
    {
      d_14 = ATgetArgument(t, 0);
      if((d_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_6 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
  v_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
  {
    ATerm i_18 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
        t = f_7(i_46, j_46, t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        t = (ATerm) ATempty;
      }
  }
  x_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_13, k_46);
  t = p_6(x_0, x_13, k_46, t);
  w_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_46, j_46, w_13);
  t = lookup_table_0_1(i_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(j_46, w_13, y_13, t);
  t = v_13;
  return(t);
}
static ATerm r_6 (ATerm u_98 (ATerm), ATerm s_46, ATerm r_46, ATerm t)
{
  static ATerm y_0 (ATerm t)
  {
    ATerm e_14 = NULL,f_14 = NULL;
    if(match_cons(t, sym__2))
      {
        e_14 = ATgetArgument(t, 0);
        f_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, s_46, e_14, f_14);
    t = u_98(t);
    return(t);
  }
  t = r_46;
  t = map_1_0(y_0, t);
  return(t);
}
static ATerm v_6 (ATerm t_51, ATerm u_51, ATerm t)
{
  t = SSL_access(t_51, u_51);
  return(t);
}
static ATerm y_14 (ATerm p_14, ATerm t)
{
  t = SSL_fclose(p_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL;
  w_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_14 = ATgetArgument(t, 0);
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_14);
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            t = y_14(w_14, t);
          }
      }
    }
  else
    {
      t = y_14(w_14, t);
    }
  return(t);
}
static ATerm s_6 (ATerm z_17, ATerm t)
{
  t = SSL_read_term_from_stream(z_17);
  return(t);
}
static ATerm t_6 (ATerm c_52, ATerm d_52, ATerm t)
{
  ATerm z_14 = NULL;
  t = SSL_fopen(c_52, d_52);
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_15 = NULL;
  t = SSL_stdin_stream();
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_15);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_15 = NULL;
  t = SSL_stdout_stream();
  d_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_15 = NULL;
  t = SSL_stderr_stream();
  e_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_15);
  return(t);
}
static ATerm o_17 (ATerm m_15, ATerm t)
{
  ATerm n_15 = NULL;
  t = SSL_explode_term(m_15);
  if(match_cons(t, sym__2))
    {
      ATerm p_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_18 = ATgetArgument(t, 1);
        if(((ATgetType(y_18) == AT_LIST) && !(ATisEmpty(y_18))))
          {
            n_15 = ATgetFirst((ATermList) y_18);
            {
              ATerm z_18 = (ATerm) ATgetNext((ATermList) y_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_17 (ATerm t_15, ATerm x_15, ATerm a_16, ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,e_16 = NULL,n_16 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(a_16);
  e_16 = t;
  t = t_15;
  if(match_cons(t, sym_Path_1))
    {
      n_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_16, x_15);
  z_0 = t;
  t = SSLsetAnnotations(z_0, e_16);
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(b_16, c_16, t);
  return(t);
}
static ATerm q_17 (ATerm p_16, ATerm u_16, ATerm w_16, ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,e_17 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(w_16);
  z_16 = t;
  t = SSL_is_string(p_16);
  e_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_17, u_16);
  a_1 = t;
  t = SSLsetAnnotations(a_1, z_16);
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(x_16, y_16, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm g_17 = NULL,i_17 = NULL,j_17 = NULL;
  g_17 = t;
  if(match_cons(t, sym__2))
    {
      i_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_17(g_17, t);
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
            {
              ATerm h_19 = t;
              int i_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_17(i_17, j_17, g_17, t);
                  LocalPopChoice(i_19);
                }
              else
                {
                  t = h_19;
                  t = q_17(i_17, j_17, g_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_17(g_17, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_17 = NULL,v_17 = NULL,w_17 = NULL,h_18 = NULL;
  h_18 = t;
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_18, term_m_19);
        t = u_6(t);
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        {
          ATerm c_6 = NULL,d_6 = NULL;
          t = term_n_19;
          d_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_19, h_18);
          t = x_6(d_6, h_18, t);
          c_6 = t;
          t = SSL_perror(c_6);
          _fail(t);
        }
      }
  }
  v_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(w_17, t);
  s_17 = t;
  t = v_17;
  t = fclose_0_0(t);
  t = s_17;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_o_19;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_18 = NULL,q_18 = NULL;
      o_18 = t;
      t = (ATerm) ATinsert(ATempty, term_s_19);
      q_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_18, (ATerm) ATinsert(ATempty, term_s_19));
      t = v_6(o_18, q_18, t);
      LocalPopChoice(r_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = q_19;
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_19 = t;
            if((PushChoice() == 0))
              {
                ATerm r_18 = NULL,s_18 = NULL;
                r_18 = t;
                t = (ATerm) ATinsert(ATempty, term_a_9);
                s_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_18, (ATerm) ATinsert(ATempty, term_a_9));
                t = v_6(r_18, s_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_19;
              }
            t = debug_1_0(b_1, t);
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
            t = debug_1_0(c_1, t);
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
  t = term_y_19;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = debug_1_0(l_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_c_20;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm f_20 = NULL,h_20 = NULL,k_20 = NULL;
  f_20 = t;
  t = term_f_17;
  h_20 = t;
  t = (ATerm) ATinsert(ATempty, term_d_20);
  k_20 = t;
  t = SSL_printnl(h_20, k_20);
  t = f_20;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  if(match_cons(t, sym__3))
    {
      n_20 = ATgetArgument(t, 0);
      o_20 = ATgetArgument(t, 1);
      p_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_6(n_20, o_20, p_20, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,u_20 = NULL;
  q_20 = t;
  t = term_f_17;
  r_20 = t;
  t = (ATerm) ATinsert(ATempty, term_e_20);
  u_20 = t;
  t = SSL_printnl(r_20, u_20);
  t = q_20;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  v_20 = t;
  t = term_f_17;
  w_20 = t;
  t = (ATerm) ATinsert(ATempty, term_d_20);
  x_20 = t;
  t = SSL_printnl(w_20, x_20);
  t = v_20;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,l_19 = NULL,v_19 = NULL,w_19 = NULL,z_19 = NULL;
  t_18 = t;
  t = if_verbose5_1_0(g_1, t);
  {
    ATerm g_20 = t;
    if((PushChoice() == 0))
      {
        ATerm a_20 = NULL,b_20 = NULL;
        t = term_i_20;
        a_20 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, t_18);
        b_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_20, (ATerm) ATmakeAppl(sym_Imported_1, t_18));
        t = f_7(a_20, b_20, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_20;
      }
  }
  v_18 = t;
  t = term_i_20;
  e_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_20, term_j_20, (ATerm) ATinsert(ATempty, t_18));
  t = lookup_table_0_1(e_19, t);
  z_19 = t;
  t = term_j_20;
  l_19 = t;
  t = (ATerm) ATinsert(ATempty, t_18);
  v_19 = t;
  t = z_19;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(l_19, v_19, w_19, t);
  t = v_18;
  t = if_verbose4_1_0(j_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(n_1, t);
  u_18 = t;
  t = term_i_20;
  d_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_20, u_18);
  t = r_6(p_1, d_19, u_18, t);
  t = if_verbose6_1_0(t_1, t);
  t = term_i_20;
  w_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_20, (ATerm)ATmakeAppl(sym_Imported_1, t_18), (ATerm) ATempty);
  t = lookup_table_0_1(w_18, t);
  c_19 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, t_18);
  x_18 = t;
  t = (ATerm) ATempty;
  a_19 = t;
  t = c_19;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(x_18, a_19, b_19, t);
  t = (ATerm) ATmakeAppl(sym__3, term_i_20, (ATerm)ATmakeAppl(sym_Imported_1, t_18), (ATerm) ATempty);
  t = if_verbose4_1_0(u_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm g_92 (ATerm), ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,n_21 = NULL;
  k_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_21;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_21 = ATgetFirst((ATermList) t);
          n_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_6 = NULL,l_7 = NULL,p_7 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(k_21);
            n_6 = t;
            t = l_21;
            t = g_92(t);
            l_7 = t;
            t = n_21;
            t = filter_1_0(g_92, t);
            p_7 = t;
            t = (ATerm) ATinsert(CheckATermList(p_7), l_7);
            f_1 = t;
            t = SSLsetAnnotations(f_1, n_6);
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            t = n_21;
            t = filter_1_0(g_92, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm t)
{
  static ATerm q_21 (ATerm t)
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_81(t);
        t = q_21(t);
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        t = t_81(t);
      }
    return(t);
  }
  t = q_21(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_21 = NULL,w_21 = NULL;
      t = term_u_7;
      v_21 = t;
      t = term_a_21;
      w_21 = t;
      t = term_b_21;
      t = f_7(v_21, w_21, t);
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_21 = NULL;
            t = term_e_21;
            z_21 = t;
            t = SSL_getenv(z_21);
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
  ATerm h_22 = NULL,j_22 = NULL;
  t = term_i_20;
  h_22 = t;
  t = term_g_21;
  j_22 = t;
  t = term_h_21;
  t = f_7(h_22, j_22, t);
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
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm b_22 = NULL;
  t = if_verbose5_1_0(v_1, t);
  b_22 = t;
  {
    ATerm m_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_22 = NULL,e_22 = NULL;
        t = term_i_20;
        c_22 = t;
        t = term_j_20;
        e_22 = t;
        t = term_p_21;
        t = f_7(c_22, e_22, t);
        LocalPopChoice(o_21);
      }
    else
      {
        t = m_21;
        {
          ATerm f_22 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          f_22 = t;
          t = repeat_2_0(y_1, _id, t);
          t = f_22;
        }
      }
  }
  t = b_22;
  t = if_verbose5_1_0(a_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_r_21;
  return(t);
}
static ATerm r_23 (ATerm q_22, ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
  t = term_i_20;
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, q_22);
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_20, (ATerm) ATmakeAppl(sym_Tool_1, q_22));
  t = f_7(x_22, y_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_21 = ATgetFirst((ATermList) t);
      if(match_cons(s_21, sym__2))
        {
          ATerm u_21 = ATgetArgument(s_21, 0);
          w_22 = ATgetArgument(s_21, 1);
        }
      else
        _fail(t);
      {
        ATerm t_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_22;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_r_21;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_i_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_x_21;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm y_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
      t = if_verbose5_1_0(f_2, t);
      t = xtc_load_0_0(t);
      b_23 = t;
      if(match_cons(t, sym__2))
        {
          z_22 = ATgetArgument(t, 0);
          a_23 = ATgetArgument(t, 1);
          {
            ATerm d_22 = t;
            int g_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_23 = NULL,k_23 = NULL,l_23 = NULL;
                t = term_i_20;
                k_23 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, z_22);
                l_23 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_i_20, (ATerm) ATmakeAppl(sym_Tool_1, z_22));
                t = f_7(k_23, l_23, t);
                {
                  static ATerm i_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((a_23 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((h_23 != NULL) && (h_23 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(i_2, t);
                }
                t = not_null(h_23);
                LocalPopChoice(g_22);
              }
            else
              {
                t = d_22;
                t = r_23(b_23, t);
              }
          }
        }
      else
        {
          t = r_23(b_23, t);
        }
      t = if_verbose5_1_0(j_2, t);
      LocalPopChoice(a_22);
    }
  else
    {
      t = y_21;
      {
        ATerm q_23 = NULL,d_8 = NULL,e_8 = NULL;
        q_23 = t;
        t = term_f_17;
        d_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_22), q_23), term_i_22);
        e_8 = t;
        t = SSL_printnl(d_8, e_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_22), q_23), term_i_22);
        t = if_verbose5_1_0(l_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm q_101 (ATerm), ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL;
  u_23 = t;
  t = q_101(t);
  t = xtc_find_0_0(t);
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_23, u_23);
  {
    static ATerm n_2 (ATerm t)
    {
      ATerm x_23 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, t_23, u_23);
      t = k_6(t_23, u_23, t);
      t = term_l_22;
      x_23 = t;
      t = SSL_exit(x_23);
      return(t);
    }
    t = fork_and_wait_1_0(n_2, t);
  }
  t = u_23;
  return(t);
}
static ATerm w_6 (ATerm m_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,e_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL;
  b_24 = t;
  t = m_94(t);
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_23, j_35, h_35);
  t = g_7(y_23, j_35, h_35, t);
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_24 = NULL;
        t = term_o_22;
        j_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_23, term_o_22);
        t = f_7(y_23, j_24, t);
        {
          ATerm p_22 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_22;
            }
        }
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
      z_23 = ATgetFirst((ATermList) t);
      a_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_23, term_o_22, (ATerm) ATinsert(CheckATermList(a_24), (ATerm) ATinsert(CheckATermList(z_23), j_35)));
  t = lookup_table_0_1(y_23, t);
  i_24 = t;
  t = term_o_22;
  e_24 = t;
  t = (ATerm) ATinsert(CheckATermList(a_24), (ATerm) ATinsert(CheckATermList(z_23), j_35));
  g_24 = t;
  t = i_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(e_24, g_24, h_24, t);
  t = b_24;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm o_24 = NULL;
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_24 = NULL,q_8 = NULL;
      t_24 = t;
      t = term_t_22;
      q_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_24, term_t_22);
      t = x_6(t_24, q_8, t);
      o_24 = t;
      t = SSL_mkstemp(o_24);
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
        ATerm u_24 = NULL;
        t = term_u_22;
        u_24 = t;
        t = SSL_perror(u_24);
        _fail(t);
      }
    }
  return(t);
}
static ATerm x_6 (ATerm q_32, ATerm r_32, ATerm t)
{
  t = SSL_strcat(q_32, r_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm w_24 = NULL,b_25 = NULL,j_25 = NULL,m_25 = NULL,n_25 = NULL;
  t = P__tmpdir_0_0(t);
  m_25 = t;
  t = term_c_23;
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_25, term_c_23);
  t = x_6(m_25, n_25, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      b_25 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_d_23;
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_25, term_d_23);
  t = w_6(o_2, b_25, j_25, t);
  t = SSL_close(w_24);
  t = b_25;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm p_25 = NULL,r_25 = NULL;
  p_25 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm s_25 = NULL,v_25 = NULL;
      t = p_25;
      t = xtc_new_file_0_0(t);
      s_25 = t;
      t = t_0(t);
      v_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_25, (ATerm) ATinsert(ATinsert(ATempty, s_25), term_v_7));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_25);
    }
  else
    {
      ATerm y_25 = NULL,b_26 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_25;
      t = xtc_new_file_0_0(t);
      y_25 = t;
      t = t_0(t);
      b_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_26, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_25), term_v_7), r_25), term_e_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_25);
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_f_23;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL;
  t = term_d_23;
  t = pass_width_0_0(t);
  w_26 = t;
  t = term_d_23;
  t = pass_verbose_0_0(t);
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_26, x_26);
  t = conc_0_0(t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_f_23;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL;
  t = term_d_23;
  t = pass_width_0_0(t);
  b_27 = t;
  t = term_d_23;
  t = pass_verbose_0_0(t);
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_27, c_27);
  t = conc_0_0(t);
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm g_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_26 = NULL,u_26 = NULL;
      u_26 = t;
      if(match_cons(t, sym_FILE_1))
        {
          t_26 = ATgetArgument(t, 0);
          {
            ATerm y_8 = NULL,o_1 = NULL;
            t = SSLgetAnnotations(u_26);
            y_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, t_26);
            o_1 = t;
            t = SSLsetAnnotations(o_1, y_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_26;
        }
      LocalPopChoice(i_23);
      t = xtc_transform_file_2_0(r_2, u_2, t);
    }
  else
    {
      t = g_23;
      t = xtc_transform_term_2_0(v_2, w_2, t);
    }
  return(t);
}
static ATerm f_7 (ATerm e_47, ATerm f_47, ATerm t)
{
  ATerm l_27 = NULL;
  t = lookup_table_0_1(e_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(f_47, l_27, t);
  return(t);
}
static ATerm z_6 (ATerm q_45, ATerm r_45, ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL;
  o_27 = t;
  {
    ATerm j_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        t = f_7(q_45, r_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_23 = ATgetFirst((ATermList) t);
            n_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_23);
        {
          ATerm p_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, q_45, r_45, n_27);
          t = lookup_table_0_1(q_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              p_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_7(r_45, n_27, p_27, t);
          t = (ATerm) ATmakeAppl(sym__3, q_45, r_45, n_27);
        }
      }
    else
      {
        t = j_23;
        {
          ATerm t_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
          t = lookup_table_0_1(q_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_7(r_45, t_27, t);
          t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        }
      }
  }
  t = o_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_94 (ATerm), ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,f_28 = NULL;
  a_28 = t;
  t = j_94(t);
  x_27 = t;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_28 = NULL;
        t = term_o_22;
        g_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_27, term_o_22);
        t = f_7(x_27, g_28, t);
        {
          ATerm s_23 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_23;
            }
        }
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_27 = ATgetFirst((ATermList) t);
      v_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_27, term_o_22, v_27);
  t = lookup_table_0_1(x_27, t);
  f_28 = t;
  t = term_o_22;
  b_28 = t;
  t = f_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(b_28, v_27, c_28, t);
  t = w_27;
  {
    static ATerm x_2 (ATerm t)
    {
      ATerm j_28 = NULL;
      j_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_27, j_28);
      t = z_6(x_27, j_28, t);
      return(t);
    }
    t = map_1_0(x_2, t);
  }
  t = a_28;
  return(t);
}
ATerm restore_always_2_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_98(t);
      t = c_98(t);
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      t = c_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_94 (ATerm), ATerm t)
{
  ATerm l_28 = NULL,n_28 = NULL,o_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
  n_28 = t;
  t = i_94(t);
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_28, term_o_22);
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_28 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_24 = ATgetArgument(t, 0);
            ATerm k_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_22;
        y_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_28, term_o_22);
        t = f_7(l_28, y_28, t);
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = (ATerm) ATempty;
      }
  }
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_28, term_o_22, (ATerm) ATinsert(CheckATermList(o_28), (ATerm) ATempty));
  t = lookup_table_0_1(l_28, t);
  u_28 = t;
  t = term_o_22;
  r_28 = t;
  t = (ATerm) ATinsert(CheckATermList(o_28), (ATerm) ATempty);
  s_28 = t;
  t = u_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(r_28, s_28, t_28, t);
  t = n_28;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_v_22;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm j_29 = NULL;
  j_29 = t;
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(j_29);
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        t = j_29;
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm b_29 = NULL;
  static ATerm c_3 (ATerm t)
  {
    ATerm d_29 = NULL;
    d_29 = t;
    {
      ATerm n_24 = t;
      int p_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_29 = NULL,g_29 = NULL;
          t = term_v_22;
          f_29 = t;
          t = term_o_22;
          g_29 = t;
          t = term_q_24;
          t = f_7(f_29, g_29, t);
          LocalPopChoice(p_24);
        }
      else
        {
          t = n_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((b_29 != NULL) && (b_29 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          b_29 = ATgetFirst((ATermList) t);
        {
          ATerm r_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = b_29;
    t = map_1_0(d_3, t);
    t = d_29;
    t = end_scope_1_0(e_3, t);
    return(t);
  }
  t = begin_scope_1_0(y_2, t);
  t = restore_always_2_0(c_101, c_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL;
  o_29 = t;
  t = term_d_23;
  t = whoami_0_0(t);
  p_29 = t;
  t = term_f_17;
  t_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_24), p_29), term_s_24);
  u_29 = t;
  t = SSL_printnl(t_29, u_29);
  t = term_s_8;
  s_29 = t;
  t = SSL_exit(s_29);
  t = o_29;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
      t = term_d_23;
      t = p_0(t);
      c_30 = t;
      t = term_x_24;
      d_30 = t;
      t = term_y_24;
      e_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_24, term_y_24, c_30);
      t = g_7(d_30, e_30, c_30, t);
      _fail(t);
    }
  else
    {
      ATerm j_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_29 = ATgetFirst((ATermList) t);
          z_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_30 = ATgetFirst((ATermList) t);
          b_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_29;
      t = m_0(t);
      t = a_30;
      t = o_0(t);
      j_30 = t;
      t = (ATerm) ATinsert(CheckATermList(b_30), j_30);
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm l_30 = NULL;
  l_30 = t;
  if(match_string(t, "-k"))
    {
      t = l_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_30;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,q_30 = NULL;
  m_30 = t;
  t = SSL_string_to_int(m_30);
  n_30 = t;
  t = term_z_24;
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_24, n_30);
  t = i_7(q_30, n_30, t);
  t = m_30;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_3, h_3, j_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm y_30 = NULL;
  y_30 = t;
  if(match_string(t, "-S"))
    {
      t = y_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_30;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL;
  t = term_j_8;
  b_31 = t;
  t = term_e_25;
  c_31 = t;
  t = term_f_25;
  t = i_7(b_31, c_31, t);
  t = term_i_25;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_k_25;
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
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
  d_31 = t;
  t = SSL_string_to_int(d_31);
  e_31 = t;
  t = term_j_8;
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_8, e_31);
  t = i_7(f_31, e_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_31);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_l_25;
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
  ATerm g_31 = NULL,h_31 = NULL;
  t = term_o_25;
  g_31 = t;
  t = term_d_23;
  h_31 = t;
  t = term_q_25;
  t = i_7(g_31, h_31, t);
  t = term_t_25;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_3, o_3, p_3, t);
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_3, s_3, t_3, t);
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            t = Option_3_0(v_3, w_3, a_4, t);
          }
      }
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm m_31 = NULL;
  m_31 = t;
  if(match_string(t, "-o"))
    {
      t = m_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_31;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL;
  n_31 = t;
  t = term_v_7;
  o_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_7, n_31);
  t = i_7(o_31, n_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_31);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_4, i_4, k_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm r_31 = NULL;
  r_31 = t;
  if(match_string(t, "-i"))
    {
      t = r_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_31;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL;
  u_31 = t;
  t = term_e_23;
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_23, u_31);
  t = i_7(v_31, u_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_31);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm x_31 = NULL;
  x_31 = t;
  if(match_string(t, "-w"))
    {
      t = x_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = x_31;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  y_31 = t;
  t = term_v_8;
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_8, y_31);
  t = i_7(z_31, y_31, t);
  t = y_31;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
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
                  t = verbose_option_0_0(t);
                  LocalPopChoice(k_26);
                }
              else
                {
                  t = j_26;
                  {
                    ATerm l_26 = t;
                    int m_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(m_26);
                      }
                    else
                      {
                        t = l_26;
                        t = ArgOption_3_0(r_4, s_4, u_4, t);
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
  ATerm a_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_23;
  t = whoami_0_0(t);
  a_32 = t;
  t = term_f_17;
  d_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_26), a_32);
  e_32 = t;
  t = SSL_printnl(d_32, e_32);
  t = term_s_8;
  c_32 = t;
  t = SSL_exit(c_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL;
  t = term_u_7;
  f_32 = t;
  t = term_o_26;
  g_32 = t;
  t = term_p_26;
  t = f_7(f_32, g_32, t);
  return(t);
}
static ATerm a_7 (ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_33, w_33);
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      t = SSL_addr(v_33, w_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
  k_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_32;
      t = c_91(t);
    }
  else
    {
      ATerm p_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_32 = ATgetFirst((ATermList) t);
          m_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_32;
      t = foldr_2_0(c_91, d_91, t);
      p_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_32, p_32);
      t = d_91(t);
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
  t = term_e_25;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(t_9, u_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_32 = NULL,i_9 = NULL,k_9 = NULL;
  t = times_0_0(t);
  k_9 = t;
  t = SSL_explode_term(k_9);
  if(match_cons(t, sym__2))
    {
      ATerm s_26 = ATgetArgument(t, 0);
      i_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_9;
  t = foldr_2_0(v_4, d_5, t);
  u_32 = t;
  t = SSL_TicksToSeconds(u_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
  n_33 = t;
  if(match_cons(t, sym__2))
    {
      o_33 = ATgetArgument(t, 0);
      p_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_33;
        if((o_33 != t))
          {
            _fail(t);
          }
        t = n_33;
        LocalPopChoice(y_26);
      }
    else
      {
        t = v_26;
        t = (ATerm) ATmakeAppl(sym__2, o_33, p_33);
        {
          ATerm z_26 = t;
          int a_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_33, p_33);
              LocalPopChoice(a_27);
            }
          else
            {
              t = z_26;
              t = SSL_gtr(o_33, p_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_33, p_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm y_33 = NULL;
  y_33 = t;
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_34 = NULL,d_34 = NULL,e_34 = NULL;
        t = term_u_7;
        d_34 = t;
        t = term_j_8;
        e_34 = t;
        t = term_r_8;
        t = f_7(d_34, e_34, t);
        a_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_34, term_s_8);
        t = geq_0_0(t);
        t = y_33;
        t = n_98(t);
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        t = y_33;
      }
  }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,q_34 = NULL,t_34 = NULL;
  t = run_time_0_0(t);
  h_34 = t;
  t = term_d_23;
  t = whoami_0_0(t);
  i_34 = t;
  t = term_f_17;
  q_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_27), h_34), term_g_9), i_34);
  t_34 = t;
  t = SSL_printnl(q_34, t_34);
  t = (ATerm) ATmakeAppl(sym__2, term_f_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_27), h_34), term_g_9), i_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_25;
  u_34 = t;
  t = SSL_exit(u_34);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL;
  y_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_35 = ATgetArgument(t, 0);
          {
            ATerm v_10 = NULL,x_1 = NULL;
            t = SSLgetAnnotations(y_35);
            v_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_35);
            x_1 = t;
            t = SSLsetAnnotations(x_1, v_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_34 = NULL,m_35 = NULL;
      t = term_u_7;
      z_34 = t;
      t = term_i_27;
      m_35 = t;
      t = term_j_27;
      t = f_7(z_34, m_35, t);
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      t = fetch_1_0(i_5, t);
    }
  t = s_102(t);
  return(t);
}
static ATerm j_7 (ATerm d_50, ATerm e_50, ATerm f_50, ATerm t)
{
  ATerm c_36 = NULL;
  t = SSL_hashtable_put(f_50, d_50, e_50);
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_36);
  return(t);
}
static ATerm k_7 (ATerm g_50, ATerm h_50, ATerm t)
{
  t = SSL_hashtable_get(h_50, g_50);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_46, ATerm t)
{
  ATerm p_36 = NULL;
  t = table_hashtable_0_0(t);
  p_36 = t;
  {
    ATerm k_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_11 = NULL;
        t = p_36;
        if(match_cons(t, sym_Hashtable_1))
          {
            f_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_7(x_46, f_11, t);
        LocalPopChoice(m_27);
      }
    else
      {
        t = k_27;
        {
          ATerm m_11 = NULL;
          t = x_46;
          t = table_create_0_0(t);
          t = p_36;
          if(match_cons(t, sym_Hashtable_1))
            {
              m_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_7(x_46, m_11, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm l_50, ATerm m_50, ATerm t)
{
  ATerm s_36 = NULL;
  t = SSL_hashtable_create(l_50, m_50);
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_36);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,y_36 = NULL,z_36 = NULL;
  t_36 = t;
  t = term_q_27;
  y_36 = t;
  t = term_r_27;
  z_36 = t;
  t = t_36;
  t = new_hashtable_0_2(y_36, z_36, t);
  u_36 = t;
  t = t_36;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(t_36, u_36, v_36, t);
  t = t_36;
  return(t);
}
static ATerm c_7 (ATerm i_50, ATerm j_50, ATerm t)
{
  ATerm a_37 = NULL;
  t = SSL_hashtable_remove(j_50, i_50);
  a_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_37);
  return(t);
}
static ATerm d_7 (ATerm n_50, ATerm t)
{
  ATerm b_37 = NULL;
  t = SSL_hashtable_destroy(n_50);
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_37);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm e_37 = NULL;
  t = SSL_table_hashtable();
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_37);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL;
  f_37 = t;
  t = table_hashtable_0_0(t);
  g_37 = t;
  t = lookup_table_0_1(f_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(i_37, t);
  t = g_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_7(f_37, h_37, t);
  t = f_37;
  return(t);
}
ATerm map_1_0 (ATerm o_83 (ATerm), ATerm t)
{
  static ATerm x_37 (ATerm t)
  {
    ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
    u_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_37;
      }
    else
      {
        ATerm w_11 = NULL,z_11 = NULL,a_12 = NULL,z_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_37 = ATgetFirst((ATermList) t);
            w_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_37);
        w_11 = t;
        t = v_37;
        t = o_83(t);
        z_11 = t;
        t = w_37;
        t = x_37(t);
        a_12 = t;
        t = (ATerm) ATinsert(CheckATermList(a_12), z_11);
        z_1 = t;
        t = SSLsetAnnotations(z_1, w_11);
      }
    return(t);
  }
  t = x_37(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_38 = ATgetFirst((ATermList) t);
      b_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_38 = NULL,g_38 = NULL;
        static ATerm j_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_38)), not_null(g_38));
          return(t);
        }
        t = b_38;
        t = l_0(t);
        if(((f_38 != NULL) && (f_38 != t)))
          _fail(t);
        else
          f_38 = t;
        t = a_38;
        t = j_0(t);
        if(((g_38 != NULL) && (g_38 != t)))
          _fail(t);
        else
          g_38 = t;
        t = b_38;
        t = reverse_acc_2_0(j_0, j_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_23;
      t = l_0(t);
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,b_2 = NULL;
  o_38 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_38);
  m_38 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_38);
  b_2 = t;
  t = SSLsetAnnotations(b_2, m_38);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm q_38 = NULL;
  q_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_38), term_s_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL;
  ATerm u_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_38 = NULL,l_38 = NULL;
      t = term_u_7;
      k_38 = t;
      t = term_o_26;
      l_38 = t;
      t = term_p_26;
      t = f_7(k_38, l_38, t);
      LocalPopChoice(y_27);
    }
  else
    {
      t = u_27;
      t = fetch_1_0(l_5, t);
    }
  t = term_z_27;
  t = echo_0_0(t);
  t = term_x_24;
  i_38 = t;
  t = term_y_24;
  j_38 = t;
  t = term_d_28;
  t = f_7(i_38, j_38, t);
  t = reverse_acc_2_0(_id, m_5, t);
  t = map_1_0(n_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  static ATerm n_39 (ATerm t)
  {
    ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
    k_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_39 = ATgetFirst((ATermList) t);
        m_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_28 = t;
      int h_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_12 = NULL,t_12 = NULL,i_3 = NULL;
          t = SSLgetAnnotations(k_39);
          q_12 = t;
          t = l_39;
          t = y_83(t);
          t_12 = t;
          t = (ATerm) ATinsert(CheckATermList(m_39), t_12);
          i_3 = t;
          t = SSLsetAnnotations(i_3, q_12);
          LocalPopChoice(h_28);
        }
      else
        {
          t = e_28;
          {
            ATerm h_13 = NULL,s_13 = NULL,k_3 = NULL;
            t = SSLgetAnnotations(k_39);
            h_13 = t;
            t = m_39;
            t = n_39(t);
            s_13 = t;
            t = (ATerm) ATinsert(CheckATermList(s_13), l_39);
            k_3 = t;
            t = SSLsetAnnotations(k_3, h_13);
          }
        }
    }
    return(t);
  }
  t = n_39(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
  r_39 = t;
  {
    ATerm i_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_39;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_28 = ATgetFirst((ATermList) t);
                ATerm p_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_39;
          }
        LocalPopChoice(k_28);
      }
    else
      {
        t = i_28;
        t = (ATerm) ATinsert(ATempty, r_39);
      }
  }
  s_39 = t;
  t = term_x_7;
  t_39 = t;
  t = SSL_printnl(t_39, s_39);
  t = r_39;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL;
  t = term_u_7;
  x_39 = t;
  t = term_o_26;
  y_39 = t;
  t = term_p_26;
  t = f_7(x_39, y_39, t);
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
  ATerm z_39 = NULL,a_40 = NULL;
  t = term_q_28;
  z_39 = t;
  t = term_d_23;
  a_40 = t;
  t = term_v_28;
  t = i_7(z_39, a_40, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_w_28;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL;
  t = term_q_28;
  d_40 = t;
  t = term_d_23;
  e_40 = t;
  t = term_v_28;
  t = i_7(d_40, e_40, t);
  t = term_x_28;
  b_40 = t;
  t = term_d_23;
  c_40 = t;
  t = term_z_28;
  t = i_7(b_40, c_40, t);
  t = term_a_29;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_5, q_5, u_5, t);
      LocalPopChoice(h_29);
    }
  else
    {
      t = e_29;
      t = Option_3_0(v_5, x_5, a_6, t);
    }
  return(t);
}
static ATerm i_7 (ATerm q_50, ATerm r_50, ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL;
  t = term_u_7;
  f_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_7, q_50, r_50);
  t = lookup_table_0_1(f_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(q_50, r_50, g_40, t);
  t = (ATerm) ATmakeAppl(sym__3, term_u_7, q_50, r_50);
  return(t);
}
static ATerm g_7 (ATerm l_45, ATerm m_45, ATerm k_45, ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
  {
    ATerm i_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_29 = ATgetArgument(t, 0);
            ATerm m_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
        t = f_7(l_45, m_45, t);
        LocalPopChoice(k_29);
      }
    else
      {
        t = i_29;
        t = (ATerm) ATempty;
      }
  }
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_45, m_45, (ATerm) ATinsert(CheckATermList(k_40), k_45));
  t = lookup_table_0_1(l_45, t);
  n_40 = t;
  t = (ATerm) ATinsert(CheckATermList(k_40), k_45);
  l_40 = t;
  t = n_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(m_45, l_40, m_40, t);
  t = j_40;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
      t = term_d_23;
      t = h_0(t);
      v_40 = t;
      t = term_x_24;
      w_40 = t;
      t = term_y_24;
      x_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_24, term_y_24, v_40);
      t = g_7(w_40, x_40, v_40, t);
      _fail(t);
    }
  else
    {
      ATerm a_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_40 = ATgetFirst((ATermList) t);
          u_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_40;
      t = d_0(t);
      t = term_d_23;
      t = g_0(t);
      a_41 = t;
      t = (ATerm) ATinsert(CheckATermList(u_40), a_41);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,r_3 = NULL;
  g_41 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_41 = ATgetFirst((ATermList) t);
      d_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_41);
  b_41 = t;
  t = c_41;
  t = h_70(t);
  e_41 = t;
  t = d_41;
  t = i_70(t);
  f_41 = t;
  t = (ATerm) ATinsert(CheckATermList(f_41), e_41);
  r_3 = t;
  t = SSLsetAnnotations(r_3, b_41);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_104 (ATerm), ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,q_41 = NULL,r_41 = NULL,u_3 = NULL;
  l_41 = t;
  {
    ATerm n_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_29;
        t = q_104(t);
        LocalPopChoice(q_29);
      }
    else
      {
        t = n_29;
      }
  }
  t = l_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_41 = ATgetFirst((ATermList) t);
      o_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_41);
  m_41 = t;
  t = term_o_26;
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_26, n_41);
  t = i_7(r_41, n_41, t);
  t = o_41;
  {
    static ATerm b_42 (ATerm t)
    {
      ATerm v_29 = t;
      int w_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_29 = t;
          int f_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_41 = NULL;
              u_41 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_41;
              LocalPopChoice(f_30);
            }
          else
            {
              t = x_29;
              t = q_104(t);
              t = Cons_2_0(_id, b_42, t);
            }
          LocalPopChoice(w_29);
        }
      else
        {
          t = v_29;
          {
            ATerm x_41 = NULL,y_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_41 = ATgetFirst((ATermList) t);
                y_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_41), (ATerm) ATmakeAppl(sym_Undefined_1, x_41));
          }
        }
      return(t);
    }
    t = b_42(t);
  }
  q_41 = t;
  t = (ATerm) ATinsert(CheckATermList(q_41), (ATerm) ATmakeAppl(sym_Program_1, n_41));
  u_3 = t;
  t = SSLsetAnnotations(u_3, m_41);
  return(t);
}
static ATerm e_6 (ATerm t)
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
static ATerm f_6 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL;
  t = term_i_27;
  p_42 = t;
  t = term_d_23;
  q_42 = t;
  t = term_g_30;
  t = i_7(p_42, q_42, t);
  t = term_h_30;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_i_30;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_104 (ATerm), ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL;
  i_42 = t;
  t = term_x_24;
  j_42 = t;
  t = term_k_30;
  t = lookup_table_0_1(j_42, t);
  n_42 = t;
  t = term_y_24;
  k_42 = t;
  t = (ATerm) ATempty;
  l_42 = t;
  t = n_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(k_42, l_42, m_42, t);
  t = i_42;
  {
    static ATerm b_6 (ATerm t)
    {
      ATerm o_30 = t;
      int p_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_104(t);
          LocalPopChoice(p_30);
        }
      else
        {
          t = o_30;
          {
            ATerm r_30 = t;
            int s_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(e_6, f_6, g_6, t);
                LocalPopChoice(s_30);
              }
            else
              {
                t = r_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_6, t);
  }
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_43 = NULL;
        b_43 = t;
        {
          ATerm v_30 = t;
          int w_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_15 = NULL;
              t = b_43;
              {
                ATerm x_30 = t;
                int z_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_15 = NULL,g_15 = NULL;
                    t = term_u_7;
                    f_15 = t;
                    t = term_i_27;
                    g_15 = t;
                    t = term_j_27;
                    t = f_7(f_15, g_15, t);
                    LocalPopChoice(z_30);
                  }
                else
                  {
                    t = x_30;
                    t = fetch_1_0(l_6, t);
                  }
              }
              t = b_43;
              t = default_system_usage_0_0(t);
              t = term_e_25;
              c_15 = t;
              t = SSL_exit(c_15);
              LocalPopChoice(w_30);
            }
          else
            {
              t = v_30;
              {
                ATerm k_15 = NULL,l_15 = NULL,o_15 = NULL;
                t = term_u_7;
                l_15 = t;
                t = term_q_28;
                o_15 = t;
                t = term_a_31;
                t = f_7(l_15, o_15, t);
                t = b_43;
                t = default_system_about_0_0(t);
                t = term_e_25;
                k_15 = t;
                t = SSL_exit(k_15);
              }
            }
        }
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        {
          ATerm i_31 = t;
          int j_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL;
              static ATerm e_7 (ATerm t)
              {
                ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,c_4 = NULL;
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
                if(((g_42 != NULL) && (g_42 != t)))
                  _fail(t);
                else
                  g_42 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_43);
                c_4 = t;
                t = SSLsetAnnotations(c_4, f_43);
                return(t);
              }
              t = fetch_1_0(e_7, t);
              t = term_f_17;
              d_43 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_42)), term_k_31);
              e_43 = t;
              t = SSL_printnl(d_43, e_43);
              t = (ATerm) ATmakeAppl(sym__2, term_f_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_42)), term_k_31));
              t = default_system_usage_0_0(t);
              t = term_s_8;
              c_43 = t;
              t = SSL_exit(c_43);
              LocalPopChoice(j_31);
            }
          else
            {
              t = i_31;
            }
        }
      }
  }
  h_42 = t;
  t = term_x_24;
  t = table_destroy_0_0(t);
  t = h_42;
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL;
  t = parse_options_1_0(u_102, t);
  m_43 = t;
  t = term_l_31;
  t = table_create_0_0(t);
  t = term_l_31;
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_31, term_p_31, m_43);
  t = lookup_table_0_1(n_43, t);
  q_43 = t;
  t = term_p_31;
  o_43 = t;
  t = q_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(o_43, m_43, p_43, t);
  t = m_43;
  t = w_102(t);
  {
    ATerm q_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_102, t);
        LocalPopChoice(s_31);
      }
    else
      {
        t = q_31;
        {
          ATerm t_31 = t;
          int w_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_102(t);
              t = report_success_0_0(t);
              LocalPopChoice(w_31);
            }
          else
            {
              t = t_31;
              t = report_failure_0_0(t);
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
static ATerm m_7 (ATerm t)
{
  ATerm b_32 = t;
  int h_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
      t = term_u_7;
      u_43 = t;
      t = term_e_23;
      v_43 = t;
      t = term_i_32;
      t = f_7(u_43, v_43, t);
      t_43 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_43);
      LocalPopChoice(h_32);
    }
  else
    {
      t = b_32;
      t = term_a_8;
    }
  t = abox2text_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, h_7, t);
  return(t);
}
