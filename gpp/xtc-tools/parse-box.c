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
ATerm term_x_32;
ATerm term_w_32;
ATerm term_t_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_d_31;
ATerm term_z_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_r_29;
ATerm term_l_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_w_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_a_28;
ATerm term_y_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_m_27;
ATerm term_k_27;
ATerm term_h_27;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
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
ATerm term_m_25;
ATerm term_l_25;
ATerm term_f_25;
ATerm term_c_24;
ATerm term_x_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_k_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_k_22;
ATerm term_f_22;
ATerm term_m_21;
ATerm term_f_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_l_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_s_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_z_17;
ATerm term_r_17;
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
ATerm term_e_15;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
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
ATerm term_p_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_a_12;
ATerm term_y_11;
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
ATerm term_g_11;
ATerm term_e_11;
ATerm term_a_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
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
ATerm term_a_8;
ATerm term_x_7;
ATerm term_u_7;
ATerm term_s_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_u_7);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_stdout_0);
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
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_9, term_r_8, term_i_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_9, term_o_9, term_p_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_w_9, term_a_10);
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
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_m_10, term_r_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_u_10, term_v_10);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_g_11, term_h_11);
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
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_11, term_y_11, term_a_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_i_12, term_m_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_s_12, term_t_12);
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
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_o_13, term_u_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_a_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_j_14, term_m_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_u_14, term_v_14);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_g_15);
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
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_f_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym__2, term_f_21, term_y_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__2, term_f_21, term_m_21);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym__2, term_e_18, term_z_17);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__2, term_l_8, term_p_25);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_25);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_x_25, term_h_18);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_q_26);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_k_27);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_g_26, term_h_26);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_r_28, term_h_18);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym__2, term_s_18, term_h_18);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym__2, term_k_27, term_h_18);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__3, term_g_26, term_h_26, (ATerm) ATempty);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_r_28);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_e_32, term_h_18);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_i_18);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.tbl", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm x_6 (ATerm o_14, ATerm p_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm g_6 (ATerm w_33, ATerm x_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm p_6 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm s_6 (ATerm a_69 (ATerm), ATerm c_170, ATerm y_17, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm t);
static ATerm t_6 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm c_74 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm p_67 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm y_88 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm h_74 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_10 (ATerm r_9, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm v_6 (ATerm m_84 (ATerm), ATerm e_35, ATerm c_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm x_85 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
ATerm pass_v_verbose_0_0 (ATerm t);
ATerm debug_1_0 (ATerm y_68 (ATerm), ATerm t);
static ATerm h_6 (ATerm q_40, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm z_85 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm y_85 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm a_86 (ATerm), ATerm t);
static ATerm j_6 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm k_6 (ATerm b_78 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm c_1 (ATerm t);
static ATerm l_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm m_6 (ATerm c_86 (ATerm), ATerm y_37, ATerm x_37, ATerm t);
static ATerm o_6 (ATerm z_41, ATerm a_42, ATerm t);
static ATerm n_18 (ATerm f_18, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_6 (ATerm u_17, ATerm t);
static ATerm w_6 (ATerm l_32, ATerm m_32, ATerm t);
static ATerm q_6 (ATerm i_42, ATerm j_42, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_20 (ATerm z_18, ATerm t);
static ATerm t_20 (ATerm h_19, ATerm p_19, ATerm q_19, ATerm t);
static ATerm u_20 (ATerm f_20, ATerm g_20, ATerm h_20, ATerm t);
static ATerm r_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_82 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm k_26 (ATerm v_24, ATerm t);
static ATerm j_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm xtc_sglr_1_0 (ATerm o_100 (ATerm), ATerm t);
static ATerm e_7 (ATerm k_38, ATerm l_38, ATerm t);
static ATerm y_6 (ATerm w_36, ATerm x_36, ATerm t);
ATerm end_scope_1_0 (ATerm j_84 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_84 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm k_88 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_7 (ATerm w_40, ATerm x_40, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_6 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_85 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm need_help_1_0 (ATerm a_90 (ATerm), ATerm t);
static ATerm i_7 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t);
static ATerm j_7 (ATerm m_40, ATerm n_40, ATerm t);
ATerm lookup_table_0_1 (ATerm d_38, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_40, ATerm s_40, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm b_7 (ATerm o_40, ATerm p_40, ATerm t);
static ATerm c_7 (ATerm t_40, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_73 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_74 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_60 (ATerm), ATerm q_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm y_91 (ATerm), ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm parse_options_1_0 (ATerm x_91 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,n_1 = NULL;
  l_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = l_1;
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
        t = (ATerm) ATmakeAppl(sym__2, n_1, h_0);
        t = x_6(n_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
        LocalPopChoice(g_7);
      }
    else
      {
        t = d_7;
        {
          ATerm k_7 = t;
          int m_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_0 = NULL;
              t = l_1;
              t = o_0(t);
              w_0 = t;
              {
                ATerm n_7 = t;
                if((PushChoice() == 0))
                  {
                    ATerm a_1 = NULL;
                    a_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = a_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = a_1;
                          }
                        else
                          {
                            t = a_1;
                            if((n_1 != t))
                              {
                                _fail(t);
                              }
                            t = a_1;
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
              t = (ATerm) ATmakeAppl(sym__2, n_1, w_0);
              t = x_6(n_1, w_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
              LocalPopChoice(m_7);
            }
          else
            {
              t = k_7;
              t = l_1;
              t = o_0(t);
              if((n_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
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
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 = NULL,t_2 = NULL;
      t = term_s_7;
      s_2 = t;
      t = term_u_7;
      t_2 = t;
      t = term_x_7;
      t = e_7(s_2, t_2, t);
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
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
      ATerm f_1 = NULL,m_1 = NULL;
      t = term_u_7;
      {
        ATerm b_8 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 = NULL,p_1 = NULL;
            t = term_s_7;
            o_1 = t;
            t = term_u_7;
            p_1 = t;
            t = term_x_7;
            t = e_7(o_1, p_1, t);
            LocalPopChoice(d_8);
          }
        else
          {
            t = b_8;
            t = term_a_8;
          }
      }
      f_1 = t;
      t = term_e_8;
      m_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_e_8, f_1);
      t = x_6(m_1, f_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm f_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm g_6 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm j_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_33, x_33);
      LocalPopChoice(k_8);
    }
  else
    {
      t = j_8;
      t = SSL_subtr(w_33, x_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL;
  t = term_l_8;
  {
    ATerm m_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_3 = NULL,c_3 = NULL;
        t = term_s_7;
        b_3 = t;
        t = term_l_8;
        c_3 = t;
        t = term_q_8;
        t = e_7(b_3, c_3, t);
        LocalPopChoice(p_8);
      }
    else
      {
        t = m_8;
        t = term_r_8;
      }
  }
  y_2 = t;
  t = term_r_8;
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, term_r_8);
  t = g_6(y_2, a_3, t);
  z_2 = t;
  t = SSL_int_to_string(z_2);
  x_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_2), term_l_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm g_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_e_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm i_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          g_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_s_8);
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_3, (ATerm) ATinsert(ATempty, term_s_8));
      t = o_6(g_3, i_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm p_6 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm k_3 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_3);
  return(t);
}
static ATerm s_6 (ATerm a_69 (ATerm), ATerm c_170, ATerm y_17, ATerm t)
{
  ATerm m_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_170, term_t_8);
  t = r_6(t);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_3, y_17);
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
      ATerm u_8 = ATgetArgument(t, 0);
      if(match_cons(u_8, sym_Stream_1))
        {
          t_3 = ATgetArgument(u_8, 0);
        }
      else
        _fail(t);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(t_3, v_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,s_3 = NULL;
  s_3 = t;
  t = xtc_new_file_0_0(t);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_3, s_3);
  t = s_6(b_0, q_3, s_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_3);
  t = xtc_transform_file_2_0(x_87, y_87, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm t_6 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
  y_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      z_4 = ATgetArgument(t, 0);
      {
        ATerm u_1 = NULL,y_1 = NULL;
        t = SSL_int_to_string(z_4);
        u_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_8), u_1), term_w_8);
        y_1 = t;
        t = SSL_concat_strings(y_1);
      }
    }
  else
    {
      ATerm l_2 = NULL,m_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          z_4 = ATgetArgument(t, 0);
          a_5 = ATgetArgument(t, 1);
          b_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(a_5);
      l_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_5), term_z_8), l_2), term_y_8), z_4);
      m_2 = t;
      t = SSL_concat_strings(m_2);
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
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm c_9 = ATgetArgument(t, 0);
              if((g_5 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_16), term_p_16), term_k_16), term_e_16), term_z_15), term_v_15), term_r_15), term_n_15), term_h_15), term_y_14), term_q_14), term_c_14), term_w_13), term_i_13), term_b_13), term_v_12), term_n_12), term_f_12), term_s_11), term_o_11), term_j_11), term_a_11), term_s_10), term_j_10), term_f_10), term_b_10), term_q_9), term_j_9);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, g_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm m_5 = NULL,i_6 = NULL;
  m_5 = t;
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_17 = ATgetArgument(t, 0);
            i_6 = ATgetArgument(t, 1);
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
              ATerm j_3 = NULL,n_3 = NULL,o_3 = NULL;
              t = i_6;
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
              j_3 = t;
              t = term_g_17;
              n_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, j_3), term_h_17);
              o_3 = t;
              t = SSL_printnl(n_3, o_3);
              t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATempty, j_3), term_h_17));
              LocalPopChoice(d_17);
            }
          else
            {
              t = c_17;
              t = m_5;
            }
        }
      }
    else
      {
        t = y_16;
        t = m_5;
      }
  }
  t = m_5;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm p_67 (ATerm), ATerm t)
{
  ATerm o_7 = NULL,t_7 = NULL;
  t_7 = t;
  t = fork_0_0(t);
  o_7 = t;
  {
    ATerm j_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = t_7;
        t = p_67(t);
        LocalPopChoice(l_17);
      }
    else
      {
        t = j_17;
        t = SSL_waitpid(o_7);
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
              ATerm q_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = t_7;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm y_88 (ATerm), ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL;
  z_7 = t;
  t = y_88(t);
  t = xtc_find_0_0(t);
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_7, z_7);
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm c_8 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, y_7, z_7);
      t = t_6(y_7, z_7, t);
      t = term_r_17;
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
  static ATerm n_9 (ATerm t)
  {
    ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
    g_9 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_9 = ATgetFirst((ATermList) t);
        f_9 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_3 = NULL,a_4 = NULL,u_0 = NULL;
          t = SSLgetAnnotations(g_9);
          x_3 = t;
          t = f_9;
          t = n_9(t);
          a_4 = t;
          t = (ATerm) ATinsert(CheckATermList(a_4), e_9);
          u_0 = t;
          t = SSLsetAnnotations(u_0, x_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_9;
        t = h_74(t);
      }
    return(t);
  }
  t = n_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
  g_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_8;
    }
  else
    {
      static ATerm q_0 (ATerm t)
      {
        t = not_null(i_8);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_8 = ATgetFirst((ATermList) t);
          if(((i_8 != NULL) && (i_8 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_8;
      t = at_end_1_0(q_0, t);
    }
  return(t);
}
static ATerm k_10 (ATerm r_9, ATerm t)
{
  ATerm s_9 = NULL;
  t = SSL_explode_term(r_9);
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
  z_9 = t;
  if(match_cons(t, sym__2))
    {
      x_9 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
      {
        ATerm t_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_0 (ATerm t)
            {
              t = y_9;
              return(t);
            }
            t = x_9;
            t = at_end_1_0(s_0, t);
            LocalPopChoice(v_17);
          }
        else
          {
            t = t_17;
            t = k_10(z_9, t);
          }
      }
    }
  else
    {
      t = k_10(z_9, t);
    }
  return(t);
}
static ATerm v_6 (ATerm m_84 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,b_11 = NULL,c_11 = NULL;
  w_10 = t;
  t = m_84(t);
  o_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_10, e_35, c_35);
  t = f_7(o_10, e_35, c_35, t);
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_11 = NULL;
        t = term_z_17;
        d_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_10, term_z_17);
        t = e_7(o_10, d_11, t);
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
      p_10 = ATgetFirst((ATermList) t);
      q_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_10, term_z_17, (ATerm) ATinsert(CheckATermList(q_10), (ATerm) ATinsert(CheckATermList(p_10), e_35)));
  t = lookup_table_0_1(o_10, t);
  c_11 = t;
  t = term_z_17;
  x_10 = t;
  t = (ATerm) ATinsert(CheckATermList(q_10), (ATerm) ATinsert(CheckATermList(p_10), e_35));
  y_10 = t;
  t = c_11;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(x_10, y_10, b_11, t);
  t = w_10;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm f_11 = NULL;
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_11 = NULL,t_4 = NULL;
      w_11 = t;
      t = term_c_18;
      t_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_11, term_c_18);
      t = w_6(w_11, t_4, t);
      f_11 = t;
      t = SSL_mkstemp(f_11);
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      {
        ATerm x_11 = NULL;
        t = term_d_18;
        x_11 = t;
        t = SSL_perror(x_11);
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
  t = term_e_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm z_11 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
  t = P__tmpdir_0_0(t);
  d_12 = t;
  t = term_g_18;
  e_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_12, term_g_18);
  t = w_6(d_12, e_12, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_h_18;
  c_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_12, term_h_18);
  t = v_6(t_0, b_12, c_12, t);
  t = SSL_close(z_11);
  t = b_12;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm g_12 = NULL,j_12 = NULL;
  g_12 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm k_12 = NULL,l_12 = NULL;
      t = g_12;
      t = xtc_new_file_0_0(t);
      k_12 = t;
      t = r_0(t);
      l_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_12, (ATerm) ATinsert(ATinsert(ATempty, k_12), term_u_7));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_12);
    }
  else
    {
      ATerm o_12 = NULL,q_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_12;
      t = xtc_new_file_0_0(t);
      o_12 = t;
      t = r_0(t);
      q_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_12), term_u_7), j_12), term_i_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_12);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm y_12 = NULL;
  y_12 = t;
  {
    ATerm j_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_13 = NULL,f_13 = NULL,h_13 = NULL;
        t = term_s_7;
        f_13 = t;
        t = term_l_8;
        h_13 = t;
        t = term_q_8;
        t = e_7(f_13, h_13, t);
        a_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_13, term_w_9);
        t = geq_0_0(t);
        t = y_12;
        t = x_85(t);
        LocalPopChoice(m_18);
      }
    else
      {
        t = j_18;
        t = y_12;
      }
  }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_s_18);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(v_0, t);
  return(t);
}
ATerm debug_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
  j_13 = t;
  t = y_68(t);
  k_13 = t;
  t = term_g_17;
  l_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_13), k_13);
  m_13 = t;
  t = SSL_printnl(l_13, m_13);
  t = j_13;
  return(t);
}
static ATerm h_6 (ATerm q_40, ATerm t)
{
  t = SSL_hashtable_keys(q_40);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL;
  static ATerm x_0 (ATerm t)
  {
    ATerm r_13 = NULL,t_13 = NULL;
    r_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), r_13);
    t = e_7(not_null(p_13), r_13, t);
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
  t = h_6(q_13, t);
  t = map_1_0(x_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_85 (ATerm), ATerm t)
{
  ATerm v_13 = NULL;
  v_13 = t;
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_13 = NULL,b_14 = NULL,f_14 = NULL;
        t = term_s_7;
        b_14 = t;
        t = term_l_8;
        f_14 = t;
        t = term_q_8;
        t = e_7(b_14, f_14, t);
        z_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_13, term_c_16);
        t = geq_0_0(t);
        t = v_13;
        t = z_85(t);
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        t = v_13;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm l_14 = NULL;
  l_14 = t;
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_14 = NULL,s_14 = NULL,t_14 = NULL;
        t = term_s_7;
        s_14 = t;
        t = term_l_8;
        t_14 = t;
        t = term_q_8;
        t = e_7(s_14, t_14, t);
        n_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_14, term_i_12);
        t = geq_0_0(t);
        t = l_14;
        t = y_85(t);
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = l_14;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_86 (ATerm), ATerm t)
{
  ATerm w_14 = NULL;
  w_14 = t;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
        t = term_s_7;
        a_15 = t;
        t = term_l_8;
        b_15 = t;
        t = term_q_8;
        t = e_7(a_15, b_15, t);
        z_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_14, term_d_10);
        t = geq_0_0(t);
        t = w_14;
        t = a_86(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = w_14;
      }
  }
  return(t);
}
static ATerm j_6 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = f_78(t);
  {
    static ATerm z_0 (ATerm t)
    {
      ATerm i_15 = NULL;
      i_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, i_15);
      t = e_78(t);
      return(t);
    }
    t = fetch_1_0(z_0, t);
  }
  t = b_25;
  return(t);
}
static ATerm k_6 (ATerm b_78 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm l_16 (ATerm t)
  {
    ATerm b_16 = NULL,g_16 = NULL,h_16 = NULL;
    b_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
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
          ATerm a_19 = t;
          int b_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_16;
              {
                static ATerm b_1 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = j_6(b_78, b_1, g_16, h_16, t);
              }
              t = l_16(t);
              LocalPopChoice(b_19);
            }
          else
            {
              t = a_19;
              {
                ATerm i_5 = NULL,l_5 = NULL,y_0 = NULL;
                t = SSLgetAnnotations(b_16);
                i_5 = t;
                t = h_16;
                t = l_16(t);
                l_5 = t;
                t = (ATerm) ATinsert(CheckATermList(l_5), g_16);
                y_0 = t;
                t = SSLsetAnnotations(y_0, i_5);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
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
static ATerm l_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  u_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_19 = ATgetArgument(t, 0);
            ATerm g_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = e_7(o_37, p_37, t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = (ATerm) ATempty;
      }
  }
  w_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_16, q_37);
  t = k_6(c_1, w_16, q_37, t);
  v_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_37, p_37, v_16);
  t = lookup_table_0_1(o_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(p_37, v_16, x_16, t);
  t = u_16;
  return(t);
}
static ATerm m_6 (ATerm c_86 (ATerm), ATerm y_37, ATerm x_37, ATerm t)
{
  static ATerm e_1 (ATerm t)
  {
    ATerm i_17 = NULL,k_17 = NULL;
    if(match_cons(t, sym__2))
      {
        i_17 = ATgetArgument(t, 0);
        k_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_37, i_17, k_17);
    t = c_86(t);
    return(t);
  }
  t = x_37;
  t = map_1_0(e_1, t);
  return(t);
}
static ATerm o_6 (ATerm z_41, ATerm a_42, ATerm t)
{
  t = SSL_access(z_41, a_42);
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
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_18);
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
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
static ATerm n_6 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm w_6 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = SSL_strcat(l_32, m_32);
  return(t);
}
static ATerm q_6 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm o_18 = NULL;
  t = SSL_fopen(i_42, j_42);
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
      ATerm k_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_19 = ATgetArgument(t, 1);
        if(((ATgetType(l_19) == AT_LIST) && !(ATisEmpty(l_19))))
          {
            c_19 = ATgetFirst((ATermList) l_19);
            {
              ATerm m_19 = (ATerm) ATgetNext((ATermList) l_19);
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
static ATerm t_20 (ATerm h_19, ATerm p_19, ATerm q_19, ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,b_20 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(q_19);
  w_19 = t;
  t = h_19;
  if(match_cons(t, sym_Path_1))
    {
      b_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_20, p_19);
  d_1 = t;
  t = SSLsetAnnotations(d_1, w_19);
  if(match_cons(t, sym__2))
    {
      u_19 = ATgetArgument(t, 0);
      v_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(u_19, v_19, t);
  return(t);
}
static ATerm u_20 (ATerm f_20, ATerm g_20, ATerm h_20, ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,n_20 = NULL,g_1 = NULL;
  t = SSLgetAnnotations(h_20);
  k_20 = t;
  t = SSL_is_string(f_20);
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_20, g_20);
  g_1 = t;
  t = SSLsetAnnotations(g_1, k_20);
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(i_20, j_20, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  if(match_cons(t, sym__2))
    {
      q_20 = ATgetArgument(t, 0);
      r_20 = ATgetArgument(t, 1);
      {
        ATerm n_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_20(p_20, t);
            LocalPopChoice(o_19);
          }
        else
          {
            t = n_19;
            {
              ATerm r_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_20(q_20, r_20, p_20, t);
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = r_19;
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
    ATerm t_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_21, term_y_19);
        t = r_6(t);
        LocalPopChoice(x_19);
      }
    else
      {
        t = t_19;
        {
          ATerm f_6 = NULL,l_7 = NULL;
          t = term_z_19;
          l_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_19, d_21);
          t = w_6(l_7, d_21, t);
          f_6 = t;
          t = SSL_perror(f_6);
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
  t = n_6(y_20, t);
  w_20 = t;
  t = x_20;
  t = fclose_0_0(t);
  t = w_20;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_a_20;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_21 = NULL,h_21 = NULL;
      g_21 = t;
      t = (ATerm) ATinsert(ATempty, term_l_20);
      h_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_21, (ATerm) ATinsert(ATempty, term_l_20));
      t = o_6(g_21, h_21, t);
      LocalPopChoice(e_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_20;
      {
        ATerm m_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_20 = t;
            if((PushChoice() == 0))
              {
                ATerm i_21 = NULL,j_21 = NULL;
                i_21 = t;
                t = (ATerm) ATinsert(ATempty, term_s_8);
                j_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_21, (ATerm) ATinsert(ATempty, term_s_8));
                t = o_6(i_21, j_21, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_20;
              }
            t = debug_1_0(h_1, t);
            LocalPopChoice(o_20);
          }
        else
          {
            t = m_20;
            t = debug_1_0(i_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,l_22 = NULL;
  i_22 = t;
  t = term_g_17;
  j_22 = t;
  t = (ATerm) ATinsert(ATempty, term_b_21);
  l_22 = t;
  t = SSL_printnl(j_22, l_22);
  t = i_22;
  return(t);
}
static ATerm v_1 (ATerm t)
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
  t = l_6(m_22, o_22, q_22, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  r_22 = t;
  t = term_g_17;
  s_22 = t;
  t = (ATerm) ATinsert(ATempty, term_c_21);
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
  t = (ATerm) ATinsert(ATempty, term_b_21);
  b_23 = t;
  t = SSL_printnl(x_22, b_23);
  t = u_22;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,c_22 = NULL,d_22 = NULL;
  k_21 = t;
  t = if_verbose5_1_0(k_1, t);
  {
    ATerm e_21 = t;
    if((PushChoice() == 0))
      {
        ATerm g_22 = NULL,h_22 = NULL;
        t = term_f_21;
        g_22 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, k_21);
        h_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATmakeAppl(sym_Imported_1, k_21));
        t = e_7(g_22, h_22, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_21;
      }
  }
  n_21 = t;
  t = term_f_21;
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_21, term_m_21, (ATerm) ATinsert(ATempty, k_21));
  t = lookup_table_0_1(v_21, t);
  d_22 = t;
  t = term_m_21;
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
  t = i_7(w_21, x_21, c_22, t);
  t = n_21;
  t = if_verbose4_1_0(r_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(t_1, t);
  l_21 = t;
  t = term_f_21;
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_21, l_21);
  t = m_6(v_1, u_21, l_21, t);
  t = if_verbose6_1_0(x_1, t);
  t = term_f_21;
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_21, (ATerm)ATmakeAppl(sym_Imported_1, k_21), (ATerm) ATempty);
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
  t = i_7(p_21, q_21, r_21, t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_21, (ATerm)ATmakeAppl(sym_Imported_1, k_21), (ATerm) ATempty);
  t = if_verbose4_1_0(z_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm i_82 (ATerm), ATerm t)
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
        ATerm t_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_7 = NULL,v_7 = NULL,w_7 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(t_23);
            r_7 = t;
            t = u_23;
            t = i_82(t);
            v_7 = t;
            t = v_23;
            t = filter_1_0(i_82, t);
            w_7 = t;
            t = (ATerm) ATinsert(CheckATermList(w_7), v_7);
            j_1 = t;
            t = SSLsetAnnotations(j_1, r_7);
            LocalPopChoice(y_21);
          }
        else
          {
            t = t_21;
            t = v_23;
            t = filter_1_0(i_82, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm t)
{
  static ATerm y_23 (ATerm t)
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_71(t);
        t = y_23(t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        t = w_71(t);
      }
    return(t);
  }
  t = y_23(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm b_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_23 = NULL,a_24 = NULL;
      t = term_s_7;
      z_23 = t;
      t = term_f_22;
      a_24 = t;
      t = term_k_22;
      t = e_7(z_23, a_24, t);
      LocalPopChoice(e_22);
    }
  else
    {
      t = b_22;
      {
        ATerm n_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_24 = NULL;
            t = term_v_22;
            b_24 = t;
            t = SSL_getenv(b_24);
            LocalPopChoice(p_22);
          }
        else
          {
            t = n_22;
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
  t = term_w_22;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm l_24 = NULL,n_24 = NULL;
  t = term_f_21;
  l_24 = t;
  t = term_y_22;
  n_24 = t;
  t = term_z_22;
  t = e_7(l_24, n_24, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm a_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_23;
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
  t = term_c_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm f_24 = NULL;
  t = if_verbose5_1_0(a_2, t);
  f_24 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_24 = NULL,h_24 = NULL;
        t = term_f_21;
        g_24 = t;
        t = term_m_21;
        h_24 = t;
        t = term_f_23;
        t = e_7(g_24, h_24, t);
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
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
  t = term_g_23;
  return(t);
}
static ATerm k_26 (ATerm v_24, ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,g_25 = NULL;
  t = term_f_21;
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, v_24);
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATmakeAppl(sym_Tool_1, v_24));
  t = e_7(a_25, g_25, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_23 = ATgetFirst((ATermList) t);
      if(match_cons(h_23, sym__2))
        {
          ATerm j_23 = ATgetArgument(h_23, 0);
          z_24 = ATgetArgument(h_23, 1);
        }
      else
        _fail(t);
      {
        ATerm i_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_24;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_g_23;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_f_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_k_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
      t = if_verbose5_1_0(f_2, t);
      t = xtc_load_0_0(t);
      j_25 = t;
      if(match_cons(t, sym__2))
        {
          h_25 = ATgetArgument(t, 0);
          i_25 = ATgetArgument(t, 1);
          {
            ATerm n_23 = t;
            int o_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
                t = term_f_21;
                u_25 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, h_25);
                v_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATmakeAppl(sym_Tool_1, h_25));
                t = e_7(u_25, v_25, t);
                {
                  static ATerm h_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((i_25 != ATgetArgument(t, 0)))
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
                LocalPopChoice(o_23);
              }
            else
              {
                t = n_23;
                t = k_26(j_25, t);
              }
          }
        }
      else
        {
          t = k_26(j_25, t);
        }
      t = if_verbose5_1_0(j_2, t);
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      {
        ATerm e_26 = NULL,n_8 = NULL,o_8 = NULL;
        e_26 = t;
        t = term_g_17;
        n_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_23), e_26), term_p_23);
        o_8 = t;
        t = SSL_printnl(n_8, o_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_23), e_26), term_p_23);
        t = if_verbose5_1_0(o_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_r_23;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_r_23;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm o_100 (ATerm), ATerm t)
{
  ATerm s_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_26 = NULL,y_26 = NULL;
      y_26 = t;
      if(match_cons(t, sym_FILE_1))
        {
          x_26 = ATgetArgument(t, 0);
          {
            ATerm v_8 = NULL,w_1 = NULL;
            t = SSLgetAnnotations(y_26);
            v_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, x_26);
            w_1 = t;
            t = SSLsetAnnotations(w_1, v_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_26;
        }
      LocalPopChoice(w_23);
      {
        static ATerm v_2 (ATerm t)
        {
          ATerm z_26 = NULL,c_27 = NULL;
          t = term_h_18;
          t = o_100(t);
          t = xtc_find_0_0(t);
          z_26 = t;
          t = term_h_18;
          t = pass_v_verbose_0_0(t);
          c_27 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(c_27), z_26), term_c_24), term_x_23);
          return(t);
        }
        t = xtc_transform_file_2_0(u_2, v_2, t);
      }
    }
  else
    {
      t = s_23;
      {
        static ATerm d_3 (ATerm t)
        {
          ATerm e_27 = NULL,g_27 = NULL;
          t = term_h_18;
          t = o_100(t);
          t = xtc_find_0_0(t);
          e_27 = t;
          t = term_h_18;
          t = pass_v_verbose_0_0(t);
          g_27 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(g_27), e_27), term_c_24), term_x_23);
          return(t);
        }
        t = xtc_transform_term_2_0(w_2, d_3, t);
      }
    }
  return(t);
}
static ATerm e_7 (ATerm k_38, ATerm l_38, ATerm t)
{
  ATerm l_27 = NULL;
  t = lookup_table_0_1(k_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(l_38, l_27, t);
  return(t);
}
static ATerm y_6 (ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL;
  p_27 = t;
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = e_7(w_36, x_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_24 = ATgetFirst((ATermList) t);
            o_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(e_24);
        {
          ATerm v_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, o_27);
          t = lookup_table_0_1(w_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_7(x_36, o_27, v_27, t);
          t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, o_27);
        }
      }
    else
      {
        t = d_24;
        {
          ATerm x_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
          t = lookup_table_0_1(w_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              x_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_7(x_36, x_27, t);
          t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        }
      }
  }
  t = p_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm z_27 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL;
  e_28 = t;
  t = j_84(t);
  d_28 = t;
  {
    ATerm k_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_28 = NULL;
        t = term_z_17;
        k_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_28, term_z_17);
        t = e_7(d_28, k_28, t);
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
      c_28 = ATgetFirst((ATermList) t);
      z_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_28, term_z_17, z_27);
  t = lookup_table_0_1(d_28, t);
  h_28 = t;
  t = term_z_17;
  f_28 = t;
  t = h_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(f_28, z_27, g_28, t);
  t = c_28;
  {
    static ATerm e_3 (ATerm t)
    {
      ATerm l_28 = NULL;
      l_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_28, l_28);
      t = y_6(d_28, l_28, t);
      return(t);
    }
    t = map_1_0(e_3, t);
  }
  t = e_28;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t)
{
  ATerm o_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_85(t);
      t = k_85(t);
      LocalPopChoice(p_24);
    }
  else
    {
      t = o_24;
      t = k_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,x_28 = NULL,y_28 = NULL;
  q_28 = t;
  t = i_84(t);
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_28, term_z_17);
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_29 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm s_24 = ATgetArgument(t, 0);
            ATerm t_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_z_17;
        e_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_28, term_z_17);
        t = e_7(p_28, e_29, t);
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = (ATerm) ATempty;
      }
  }
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_28, term_z_17, (ATerm) ATinsert(CheckATermList(t_28), (ATerm) ATempty));
  t = lookup_table_0_1(p_28, t);
  y_28 = t;
  t = term_z_17;
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
  t = i_7(u_28, v_28, x_28, t);
  t = q_28;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_e_18;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm p_29 = NULL;
  p_29 = t;
  {
    ATerm u_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(p_29);
        LocalPopChoice(w_24);
      }
    else
      {
        t = u_24;
        t = p_29;
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_e_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm h_29 = NULL;
  static ATerm h_3 (ATerm t)
  {
    ATerm i_29 = NULL;
    i_29 = t;
    {
      ATerm d_25 = t;
      int e_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_29 = NULL,k_29 = NULL;
          t = term_e_18;
          j_29 = t;
          t = term_z_17;
          k_29 = t;
          t = term_f_25;
          t = e_7(j_29, k_29, t);
          LocalPopChoice(e_25);
        }
      else
        {
          t = d_25;
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
          ATerm k_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = h_29;
    t = map_1_0(l_3, t);
    t = i_29;
    t = end_scope_1_0(p_3, t);
    return(t);
  }
  t = begin_scope_1_0(f_3, t);
  t = restore_always_2_0(k_88, h_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
  s_29 = t;
  t = term_h_18;
  t = whoami_0_0(t);
  t_29 = t;
  t = term_g_17;
  x_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_25), t_29), term_l_25);
  y_29 = t;
  t = SSL_printnl(x_29, y_29);
  t = term_r_8;
  w_29 = t;
  t = SSL_exit(w_29);
  t = s_29;
  return(t);
}
static ATerm r_3 (ATerm t)
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
static ATerm u_3 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  d_30 = t;
  t = SSL_string_to_int(d_30);
  e_30 = t;
  t = term_n_25;
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_25, e_30);
  t = h_7(f_30, e_30, t);
  t = d_30;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, u_3, w_3, t);
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
  t = term_p_25;
  j_30 = t;
  t = term_q_25;
  t = h_7(i_30, j_30, t);
  t = term_r_25;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_s_25;
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
  t = h_7(m_30, l_30, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_30);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_w_25;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  t = term_x_25;
  n_30 = t;
  t = term_h_18;
  o_30 = t;
  t = term_y_25;
  t = h_7(n_30, o_30, t);
  t = term_z_25;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_3, z_3, d_4, t);
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm d_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_4, f_4, h_4, t);
            LocalPopChoice(f_26);
          }
        else
          {
            t = d_26;
            t = Option_3_0(i_4, k_4, m_4, t);
          }
      }
    }
  return(t);
}
static ATerm h_7 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  t = term_s_7;
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_7, w_40, x_40);
  t = lookup_table_0_1(p_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(w_40, x_40, q_30, t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_7, w_40, x_40);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_30 = NULL,a_31 = NULL,b_31 = NULL;
      t = term_h_18;
      t = e_0(t);
      x_30 = t;
      t = term_g_26;
      a_31 = t;
      t = term_h_26;
      b_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_26, term_h_26, x_30);
      t = f_7(a_31, b_31, x_30, t);
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
      t = c_0(t);
      t = term_h_18;
      t = d_0(t);
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
  t = term_u_7;
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_7, p_31);
  t = h_7(q_31, p_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_31);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_i_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, o_4, q_4, t);
  return(t);
}
static ATerm f_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,a_32 = NULL;
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm j_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_26 = ATgetArgument(t, 0);
            ATerm n_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = e_7(r_36, s_36, t);
        LocalPopChoice(l_26);
      }
    else
      {
        t = j_26;
        t = (ATerm) ATempty;
      }
  }
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_36, s_36, (ATerm) ATinsert(CheckATermList(w_31), q_36));
  t = lookup_table_0_1(r_36, t);
  a_32 = t;
  t = (ATerm) ATinsert(CheckATermList(w_31), q_36);
  x_31 = t;
  t = a_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(s_36, x_31, y_31, t);
  t = v_31;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,n_32 = NULL,o_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
      t = term_h_18;
      t = n_0(t);
      q_32 = t;
      t = term_g_26;
      r_32 = t;
      t = term_h_26;
      s_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_26, term_h_26, q_32);
      t = f_7(r_32, s_32, q_32, t);
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
          n_32 = ATgetFirst((ATermList) t);
          o_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_32;
      t = k_0(t);
      t = n_32;
      t = l_0(t);
      y_32 = t;
      t = (ATerm) ATinsert(CheckATermList(o_32), y_32);
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
  t = term_i_18;
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_18, b_33);
  t = h_7(c_33, b_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_33);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_o_26;
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
  t = term_h_18;
  t = whoami_0_0(t);
  d_33 = t;
  t = term_g_17;
  f_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_26), d_33);
  i_33 = t;
  t = SSL_printnl(f_33, i_33);
  t = term_r_8;
  e_33 = t;
  t = SSL_exit(e_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL;
  t = term_s_7;
  k_33 = t;
  t = term_q_26;
  l_33 = t;
  t = term_r_26;
  t = e_7(k_33, l_33, t);
  return(t);
}
static ATerm z_6 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,s_33 = NULL;
  o_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_33;
      t = e_81(t);
    }
  else
    {
      ATerm z_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_33 = ATgetFirst((ATermList) t);
          s_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_33;
      t = foldr_2_0(e_81, f_81, t);
      z_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_33, z_33);
      t = f_81(t);
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
  t = term_p_25;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(t_9, u_9, t);
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
      ATerm u_26 = ATgetArgument(t, 0);
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
  ATerm t_34 = NULL,u_34 = NULL,k_35 = NULL;
  t_34 = t;
  if(match_cons(t, sym__2))
    {
      u_34 = ATgetArgument(t, 0);
      k_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_35;
        if((u_34 != t))
          {
            _fail(t);
          }
        t = t_34;
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
        t = (ATerm) ATmakeAppl(sym__2, u_34, k_35);
        {
          ATerm a_27 = t;
          int b_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_34, k_35);
              LocalPopChoice(b_27);
            }
          else
            {
              t = a_27;
              t = SSL_gtr(u_34, k_35);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_34, k_35);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm u_35 = NULL;
  u_35 = t;
  {
    ATerm d_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_35 = NULL,b_36 = NULL,c_36 = NULL;
        t = term_s_7;
        b_36 = t;
        t = term_l_8;
        c_36 = t;
        t = term_q_8;
        t = e_7(b_36, c_36, t);
        x_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_35, term_r_8);
        t = geq_0_0(t);
        t = u_35;
        t = v_85(t);
        LocalPopChoice(f_27);
      }
    else
      {
        t = d_27;
        t = u_35;
      }
  }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm e_36 = NULL,h_36 = NULL,k_36 = NULL,l_36 = NULL;
  t = run_time_0_0(t);
  e_36 = t;
  t = term_h_18;
  t = whoami_0_0(t);
  h_36 = t;
  t = term_g_17;
  k_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_27), e_36), term_y_8), h_36);
  l_36 = t;
  t = SSL_printnl(k_36, l_36);
  t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_27), e_36), term_y_8), h_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_25;
  y_36 = t;
  t = SSL_exit(y_36);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL;
  n_37 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_37;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_37 = ATgetArgument(t, 0);
          {
            ATerm n_10 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(n_37);
            n_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_37);
            i_2 = t;
            t = SSLsetAnnotations(i_2, n_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_37;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_90 (ATerm), ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_37 = NULL,e_37 = NULL;
      t = term_s_7;
      c_37 = t;
      t = term_k_27;
      e_37 = t;
      t = term_m_27;
      t = e_7(c_37, e_37, t);
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      t = fetch_1_0(c_5, t);
    }
  t = a_90(t);
  return(t);
}
static ATerm i_7 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t)
{
  ATerm u_37 = NULL;
  t = SSL_hashtable_put(l_40, j_40, k_40);
  u_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_37);
  return(t);
}
static ATerm j_7 (ATerm m_40, ATerm n_40, ATerm t)
{
  t = SSL_hashtable_get(n_40, m_40);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_38, ATerm t)
{
  ATerm n_38 = NULL;
  t = table_hashtable_0_0(t);
  n_38 = t;
  {
    ATerm n_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_10 = NULL;
        t = n_38;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_7(d_38, z_10, t);
        LocalPopChoice(q_27);
      }
    else
      {
        t = n_27;
        {
          ATerm i_11 = NULL;
          t = d_38;
          t = table_create_0_0(t);
          t = n_38;
          if(match_cons(t, sym_Hashtable_1))
            {
              i_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_7(d_38, i_11, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm q_38 = NULL;
  t = SSL_hashtable_create(r_40, s_40);
  q_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_38);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,v_38 = NULL,w_38 = NULL;
  r_38 = t;
  t = term_r_27;
  v_38 = t;
  t = term_s_27;
  w_38 = t;
  t = r_38;
  t = new_hashtable_0_2(v_38, w_38, t);
  s_38 = t;
  t = r_38;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(r_38, s_38, t_38, t);
  t = r_38;
  return(t);
}
static ATerm b_7 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm x_38 = NULL;
  t = SSL_hashtable_remove(p_40, o_40);
  x_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_38);
  return(t);
}
static ATerm c_7 (ATerm t_40, ATerm t)
{
  ATerm y_38 = NULL;
  t = SSL_hashtable_destroy(t_40);
  y_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_38);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm z_38 = NULL;
  t = SSL_table_hashtable();
  z_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_38);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
  a_39 = t;
  t = table_hashtable_0_0(t);
  b_39 = t;
  t = lookup_table_0_1(a_39, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_7(d_39, t);
  t = b_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_7(a_39, c_39, t);
  t = a_39;
  return(t);
}
ATerm map_1_0 (ATerm q_73 (ATerm), ATerm t)
{
  static ATerm s_39 (ATerm t)
  {
    ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
    p_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_39;
      }
    else
      {
        ATerm n_11 = NULL,t_11 = NULL,u_11 = NULL,k_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_39 = ATgetFirst((ATermList) t);
            r_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_39);
        n_11 = t;
        t = q_39;
        t = q_73(t);
        t_11 = t;
        t = r_39;
        t = s_39(t);
        u_11 = t;
        t = (ATerm) ATinsert(CheckATermList(u_11), t_11);
        k_2 = t;
        t = SSLsetAnnotations(k_2, n_11);
      }
    return(t);
  }
  t = s_39(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_39 = ATgetFirst((ATermList) t);
      w_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_40 = NULL,e_40 = NULL;
        static ATerm d_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_40)), not_null(e_40));
          return(t);
        }
        t = w_39;
        t = i_0(t);
        if(((d_40 != NULL) && (d_40 != t)))
          _fail(t);
        else
          d_40 = t;
        t = v_39;
        t = g_0(t);
        if(((e_40 != NULL) && (e_40 != t)))
          _fail(t);
        else
          e_40 = t;
        t = w_39;
        t = reverse_acc_2_0(g_0, d_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_18;
      t = i_0(t);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,p_2 = NULL;
  b_41 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_41);
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_41);
  p_2 = t;
  t = SSLsetAnnotations(p_2, z_40);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm d_41 = NULL;
  d_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_41), term_t_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_40 = NULL,u_40 = NULL;
  ATerm u_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_40 = NULL,y_40 = NULL;
      t = term_s_7;
      v_40 = t;
      t = term_q_26;
      y_40 = t;
      t = term_r_26;
      t = e_7(v_40, y_40, t);
      LocalPopChoice(w_27);
    }
  else
    {
      t = u_27;
      t = fetch_1_0(e_5, t);
    }
  t = term_y_27;
  t = echo_0_0(t);
  t = term_g_26;
  i_40 = t;
  t = term_h_26;
  u_40 = t;
  t = term_a_28;
  t = e_7(i_40, u_40, t);
  t = reverse_acc_2_0(_id, h_5, t);
  t = map_1_0(j_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_74 (ATerm), ATerm t)
{
  static ATerm d_42 (ATerm t)
  {
    ATerm y_41 = NULL,b_42 = NULL,c_42 = NULL;
    y_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_42 = ATgetFirst((ATermList) t);
        c_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_28 = t;
      int i_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_12 = NULL,u_12 = NULL,b_4 = NULL;
          t = SSLgetAnnotations(y_41);
          r_12 = t;
          t = b_42;
          t = a_74(t);
          u_12 = t;
          t = (ATerm) ATinsert(CheckATermList(c_42), u_12);
          b_4 = t;
          t = SSLsetAnnotations(b_4, r_12);
          LocalPopChoice(i_28);
        }
      else
        {
          t = b_28;
          {
            ATerm g_13 = NULL,s_13 = NULL,c_4 = NULL;
            t = SSLgetAnnotations(y_41);
            g_13 = t;
            t = c_42;
            t = d_42(t);
            s_13 = t;
            t = (ATerm) ATinsert(CheckATermList(s_13), b_42);
            c_4 = t;
            t = SSLsetAnnotations(c_4, g_13);
          }
        }
    }
    return(t);
  }
  t = d_42(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_42 = NULL,m_42 = NULL,n_42 = NULL;
  h_42 = t;
  {
    ATerm j_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_42;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_28 = ATgetFirst((ATermList) t);
                ATerm o_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_42;
          }
        LocalPopChoice(m_28);
      }
    else
      {
        t = j_28;
        t = (ATerm) ATinsert(ATempty, h_42);
      }
  }
  m_42 = t;
  t = term_a_8;
  n_42 = t;
  t = SSL_printnl(n_42, m_42);
  t = h_42;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL;
  t = term_s_7;
  r_42 = t;
  t = term_q_26;
  s_42 = t;
  t = term_r_26;
  t = e_7(r_42, s_42, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL;
  t = term_r_28;
  t_42 = t;
  t = term_h_18;
  u_42 = t;
  t = term_s_28;
  t = h_7(t_42, u_42, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_w_28;
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
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,b_43 = NULL;
  t = term_r_28;
  x_42 = t;
  t = term_h_18;
  b_43 = t;
  t = term_s_28;
  t = h_7(x_42, b_43, t);
  t = term_s_18;
  v_42 = t;
  t = term_h_18;
  w_42 = t;
  t = term_z_28;
  t = h_7(v_42, w_42, t);
  t = term_a_29;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_5, n_5, o_5, t);
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      t = Option_3_0(p_5, q_5, r_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_60 (ATerm), ATerm q_60 (ATerm), ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,m_43 = NULL,n_43 = NULL,g_4 = NULL;
  n_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_43 = ATgetFirst((ATermList) t);
      e_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_43);
  c_43 = t;
  t = d_43;
  t = p_60(t);
  f_43 = t;
  t = e_43;
  t = q_60(t);
  m_43 = t;
  t = (ATerm) ATinsert(CheckATermList(m_43), f_43);
  g_4 = t;
  t = SSLsetAnnotations(g_4, c_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_91 (ATerm), ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,w_43 = NULL,x_43 = NULL,a_44 = NULL,b_44 = NULL,j_4 = NULL;
  s_43 = t;
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_29;
        t = y_91(t);
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
      }
  }
  t = s_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_43 = ATgetFirst((ATermList) t);
      x_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_43);
  t_43 = t;
  t = term_q_26;
  b_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_26, w_43);
  t = h_7(b_44, w_43, t);
  t = x_43;
  {
    static ATerm r_44 (ATerm t)
    {
      ATerm m_29 = t;
      int n_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_29 = t;
          int q_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_44 = NULL;
              f_44 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_44;
              LocalPopChoice(q_29);
            }
          else
            {
              t = o_29;
              t = y_91(t);
              t = Cons_2_0(_id, r_44, t);
            }
          LocalPopChoice(n_29);
        }
      else
        {
          t = m_29;
          {
            ATerm i_44 = NULL,j_44 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_44 = ATgetFirst((ATermList) t);
                j_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(j_44), (ATerm) ATmakeAppl(sym_Undefined_1, i_44));
          }
        }
      return(t);
    }
    t = r_44(t);
  }
  a_44 = t;
  t = (ATerm) ATinsert(CheckATermList(a_44), (ATerm) ATmakeAppl(sym_Program_1, w_43));
  j_4 = t;
  t = SSLsetAnnotations(j_4, t_43);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm f_45 = NULL;
  f_45 = t;
  if(match_string(t, "--help"))
    {
      t = f_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_45;
        }
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL;
  t = term_k_27;
  g_45 = t;
  t = term_h_18;
  h_45 = t;
  t = term_r_29;
  t = h_7(g_45, h_45, t);
  t = term_u_29;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_v_29;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_91 (ATerm), ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL;
  y_44 = t;
  t = term_g_26;
  z_44 = t;
  t = term_z_29;
  t = lookup_table_0_1(z_44, t);
  e_45 = t;
  t = term_h_26;
  a_45 = t;
  t = (ATerm) ATempty;
  c_45 = t;
  t = e_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(a_45, c_45, d_45, t);
  t = y_44;
  {
    static ATerm s_5 (ATerm t)
    {
      ATerm a_30 = t;
      int b_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_91(t);
          LocalPopChoice(b_30);
        }
      else
        {
          t = a_30;
          {
            ATerm g_30 = t;
            int r_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_5, u_5, v_5, t);
                LocalPopChoice(r_30);
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
    t = parse_options_p__1_0(s_5, t);
  }
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_45 = NULL;
        s_45 = t;
        {
          ATerm u_30 = t;
          int y_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_14 = NULL;
              t = s_45;
              {
                ATerm z_30 = t;
                int c_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_14 = NULL,k_14 = NULL;
                    t = term_s_7;
                    i_14 = t;
                    t = term_k_27;
                    k_14 = t;
                    t = term_m_27;
                    t = e_7(i_14, k_14, t);
                    LocalPopChoice(c_31);
                  }
                else
                  {
                    t = z_30;
                    t = fetch_1_0(w_5, t);
                  }
              }
              t = s_45;
              t = default_system_usage_0_0(t);
              t = term_p_25;
              e_14 = t;
              t = SSL_exit(e_14);
              LocalPopChoice(y_30);
            }
          else
            {
              t = u_30;
              {
                ATerm x_14 = NULL,c_15 = NULL,d_15 = NULL;
                t = term_s_7;
                c_15 = t;
                t = term_r_28;
                d_15 = t;
                t = term_d_31;
                t = e_7(c_15, d_15, t);
                t = s_45;
                t = default_system_about_0_0(t);
                t = term_p_25;
                x_14 = t;
                t = SSL_exit(x_14);
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
              ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL;
              static ATerm x_5 (ATerm t)
              {
                ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,l_4 = NULL;
                y_45 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_45 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_45);
                w_45 = t;
                t = x_45;
                if(((w_44 != NULL) && (w_44 != t)))
                  _fail(t);
                else
                  w_44 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_45);
                l_4 = t;
                t = SSLsetAnnotations(l_4, w_45);
                return(t);
              }
              t = fetch_1_0(x_5, t);
              t = term_g_17;
              u_45 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_44)), term_g_31);
              v_45 = t;
              t = SSL_printnl(u_45, v_45);
              t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_44)), term_g_31));
              t = default_system_usage_0_0(t);
              t = term_r_8;
              t_45 = t;
              t = SSL_exit(t_45);
              LocalPopChoice(f_31);
            }
          else
            {
              t = e_31;
            }
        }
      }
  }
  x_44 = t;
  t = term_g_26;
  t = table_destroy_0_0(t);
  t = x_44;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
  t = parse_options_1_0(c_90, t);
  d_46 = t;
  t = term_h_31;
  t = table_create_0_0(t);
  t = term_h_31;
  e_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_31, term_i_31, d_46);
  t = lookup_table_0_1(e_46, t);
  h_46 = t;
  t = term_i_31;
  f_46 = t;
  t = h_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(f_46, d_46, g_46, t);
  t = d_46;
  t = e_90(t);
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_90, t);
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        {
          ATerm l_31 = t;
          int n_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_90(t);
              t = report_success_0_0(t);
              LocalPopChoice(n_31);
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
static ATerm y_5 (ATerm t)
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
      {
        ATerm t_31 = t;
        int u_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(a_6, b_6, c_6, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(d_32);
                      }
                    else
                      {
                        t = c_32;
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
  ATerm l_46 = NULL,m_46 = NULL;
  t = term_e_32;
  l_46 = t;
  t = term_h_18;
  m_46 = t;
  t = term_f_32;
  t = h_7(l_46, m_46, t);
  t = term_g_32;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_h_32;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm i_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
      t = term_s_7;
      p_46 = t;
      t = term_i_18;
      q_46 = t;
      t = term_t_32;
      t = e_7(p_46, q_46, t);
      o_46 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_46);
      LocalPopChoice(p_32);
    }
  else
    {
      t = i_32;
      t = term_e_8;
    }
  t = xtc_sglr_1_0(e_6, t);
  {
    ATerm u_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_46 = NULL,x_46 = NULL;
        x_46 = t;
        if(match_cons(t, sym_FILE_1))
          {
            w_46 = ATgetArgument(t, 0);
            {
              ATerm j_15 = NULL,p_4 = NULL;
              t = SSLgetAnnotations(x_46);
              j_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_46);
              p_4 = t;
              t = SSLsetAnnotations(p_4, j_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_46;
          }
        LocalPopChoice(v_32);
        t = xtc_transform_file_2_0(u_6, pass_verbose_0_0, t);
      }
    else
      {
        t = u_32;
        t = xtc_transform_term_2_0(a_7, pass_verbose_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_w_32;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_x_32;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_x_32;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_5, default_usage_0_0, _id, z_5, t);
  return(t);
}
