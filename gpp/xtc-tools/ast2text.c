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
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_o_32;
ATerm term_t_31;
ATerm term_o_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_z_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_o_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_c_29;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_j_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_t_25;
ATerm term_o_25;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_l_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_u_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_q_21;
ATerm term_l_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_r_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_a_16;
ATerm term_v_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_b_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_z_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_k_8);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_v_8);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_z_8);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_d_9, term_o_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_10, term_t_10, term_u_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_x_10, term_a_11);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_11, term_f_11, term_j_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_o_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_11, term_t_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_11, term_w_11, term_x_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_a_12, term_b_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_f_12, term_g_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_m_12, term_q_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_v_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_z_12);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_13, term_g_13, term_i_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_y_13, term_z_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_e_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_14, term_h_14, term_i_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_q_14, term_r_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_h_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_q_15, term_r_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_e_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_p_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_w_16, term_y_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_b_17, term_c_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_n_17);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_l_21);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_b_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_b_21);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__2, term_b_24, term_l_23);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_d_24);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_g_26);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_c_27);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_27);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_k_9);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_j_28);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_f_29);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym__2, term_x_26, term_y_26);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__2, term_e_30, term_k_9);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_h_30, term_k_9);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym__2, term_f_29, term_k_9);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym__3, term_x_26, term_y_26, (ATerm) ATempty);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_e_30);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm d_7 (ATerm t_14, ATerm u_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm pass_width_0_0 (ATerm t);
static ATerm m_6 (ATerm b_34, ATerm c_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_abox2text_1_0 (ATerm o_101 (ATerm), ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm n_6 (ATerm t_17, ATerm u_17, ATerm t);
static ATerm o_6 (ATerm b_79 (ATerm), ATerm x_181, ATerm d_18, ATerm t);
static ATerm n_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm f_100 (ATerm), ATerm g_100 (ATerm), ATerm t);
static ATerm p_6 (ATerm l_14, ATerm m_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm e_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm q_77 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm z_78 (ATerm), ATerm t);
static ATerm r_6 (ATerm k_50, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm b_112 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm a_112 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm c_112 (ATerm), ATerm t);
static ATerm t_6 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t);
static ATerm u_6 (ATerm d_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm v_6 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t);
static ATerm w_6 (ATerm k_98 (ATerm), ATerm s_46, ATerm r_46, ATerm t);
static ATerm a_7 (ATerm t_51, ATerm u_51, ATerm t);
static ATerm v_14 (ATerm j_14, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_6 (ATerm z_17, ATerm t);
static ATerm y_6 (ATerm c_52, ATerm d_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_16 (ATerm f_15, ATerm t);
static ATerm v_16 (ATerm j_15, ATerm k_15, ATerm l_15, ATerm t);
static ATerm x_16 (ATerm w_15, ATerm x_15, ATerm y_15, ATerm t);
static ATerm z_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm k_92 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm e_23 (ATerm c_22, ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm g_101 (ATerm), ATerm t);
static ATerm b_7 (ATerm q_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm c_7 (ATerm q_32, ATerm r_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm e_7 (ATerm q_45, ATerm r_45, ATerm t);
ATerm end_scope_1_0 (ATerm n_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm m_94 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm s_100 (ATerm), ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm ast2text_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm j_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm h_31 (ATerm v_30, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm f_7 (ATerm w_50, ATerm v_50, ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_7 (ATerm v_33, ATerm w_33, ATerm t);
ATerm foldr_2_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_111 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm need_help_1_0 (ATerm n_102 (ATerm), ATerm t);
static ATerm p_7 (ATerm d_50, ATerm e_50, ATerm f_50, ATerm t);
ATerm lookup_table_0_1 (ATerm x_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm l_50, ATerm m_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm i_7 (ATerm i_50, ATerm j_50, ATerm t);
static ATerm j_7 (ATerm n_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm s_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_7 (ATerm g_50, ATerm h_50, ATerm t);
static ATerm l_7 (ATerm e_47, ATerm f_47, ATerm t);
static ATerm a_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm o_7 (ATerm q_50, ATerm r_50, ATerm t);
static ATerm m_7 (ATerm l_45, ATerm m_45, ATerm k_45, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_104 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm parse_options_1_0 (ATerm k_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
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
    ATerm y_7 = t;
    int z_7 = stack_ptr;
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
        t = d_7(k_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        {
          ATerm d_8 = t;
          int e_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_1 = NULL;
              t = i_1;
              t = q_0(t);
              c_1 = t;
              {
                ATerm f_8 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_1 = NULL;
                    f_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = f_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = f_1;
                          }
                        else
                          {
                            t = f_1;
                            if((k_1 != t))
                              {
                                _fail(t);
                              }
                            t = f_1;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, k_1, c_1);
              t = d_7(k_1, c_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
              LocalPopChoice(e_8);
            }
          else
            {
              t = d_8;
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
static ATerm d_7 (ATerm t_14, ATerm u_14, ATerm t)
{
  t = SSL_copy(t_14, u_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 = NULL,v_2 = NULL;
      t = term_j_8;
      r_2 = t;
      t = term_k_8;
      v_2 = t;
      t = term_l_8;
      t = l_7(r_2, v_2, t);
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      t = term_m_8;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm b_2 = NULL;
  b_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_1 = NULL,p_1 = NULL;
      t = term_k_8;
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 = NULL,s_1 = NULL;
            t = term_j_8;
            r_1 = t;
            t = term_k_8;
            s_1 = t;
            t = term_l_8;
            t = l_7(r_1, s_1, t);
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            t = term_m_8;
          }
      }
      o_1 = t;
      t = term_p_8;
      p_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_p_8, o_1);
      t = d_7(p_1, o_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm q_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 = NULL,y_2 = NULL;
      t = term_j_8;
      x_2 = t;
      t = term_v_8;
      y_2 = t;
      t = term_w_8;
      t = l_7(x_2, y_2, t);
      LocalPopChoice(t_8);
      {
        ATerm z_2 = NULL;
        z_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, z_2), term_v_8);
      }
    }
  else
    {
      t = s_8;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm m_6 (ATerm b_34, ATerm c_34, ATerm t)
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(b_34, c_34);
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      t = SSL_subtr(b_34, c_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
  t = term_z_8;
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_3 = NULL,g_3 = NULL;
        t = term_j_8;
        e_3 = t;
        t = term_z_8;
        g_3 = t;
        t = term_c_9;
        t = l_7(e_3, g_3, t);
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        t = term_d_9;
      }
  }
  b_3 = t;
  t = term_d_9;
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_3, term_d_9);
  t = m_6(b_3, d_3, t);
  c_3 = t;
  t = SSL_int_to_string(c_3);
  a_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_3), term_z_8);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_e_9;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_e_9;
  return(t);
}
ATerm xtc_abox2text_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  ATerm f_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_3 = NULL,t_3 = NULL;
      t_3 = t;
      if(match_cons(t, sym_FILE_1))
        {
          s_3 = ATgetArgument(t, 0);
          {
            ATerm c_2 = NULL,k_0 = NULL;
            t = SSLgetAnnotations(t_3);
            c_2 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, s_3);
            k_0 = t;
            t = SSLsetAnnotations(k_0, c_2);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_3;
        }
      LocalPopChoice(h_9);
      {
        static ATerm c_0 (ATerm t)
        {
          ATerm v_3 = NULL,w_3 = NULL,z_3 = NULL;
          t = term_k_9;
          t = o_101(t);
          z_3 = t;
          t = SSL_int_to_string(z_3);
          v_3 = t;
          t = term_k_9;
          t = pass_verbose_0_0(t);
          w_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, v_3), term_v_8), w_3);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(b_0, c_0, t);
      }
    }
  else
    {
      t = f_9;
      {
        static ATerm i_0 (ATerm t)
        {
          ATerm a_4 = NULL,c_4 = NULL,e_4 = NULL;
          t = term_k_9;
          t = o_101(t);
          e_4 = t;
          t = SSL_int_to_string(e_4);
          a_4 = t;
          t = term_k_9;
          t = pass_verbose_0_0(t);
          c_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, a_4), term_v_8), c_4);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(f_0, i_0, t);
      }
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm k_4 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_p_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm o_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_l_9);
      o_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_4, (ATerm) ATinsert(ATempty, term_l_9));
      t = a_7(k_4, o_4, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm n_6 (ATerm t_17, ATerm u_17, ATerm t)
{
  ATerm p_4 = NULL;
  t = SSL_write_term_to_stream_baf(t_17, u_17);
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_4);
  return(t);
}
static ATerm o_6 (ATerm b_79 (ATerm), ATerm x_181, ATerm d_18, ATerm t)
{
  ATerm q_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_181, term_m_9);
  t = z_6(t);
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_4, d_18);
  t = b_79(t);
  t = fclose_0_0(t);
  t = d_18;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm t_4 = NULL,x_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_9 = ATgetArgument(t, 0);
      if(match_cons(p_9, sym_Stream_1))
        {
          t_4 = ATgetArgument(p_9, 0);
        }
      else
        _fail(t);
      x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(t_4, x_4, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm f_100 (ATerm), ATerm g_100 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL;
  s_4 = t;
  t = xtc_new_file_0_0(t);
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_4, s_4);
  t = o_6(n_0, r_4, s_4, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_4);
  t = xtc_transform_file_2_0(f_100, g_100, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm p_6 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_execvp(l_14, m_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm b_6 = NULL,d_6 = NULL,e_6 = NULL,h_7 = NULL;
  b_6 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      d_6 = ATgetArgument(t, 0);
      {
        ATerm k_2 = NULL,l_2 = NULL;
        t = SSL_int_to_string(d_6);
        k_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_9), k_2), term_q_9);
        l_2 = t;
        t = SSL_concat_strings(l_2);
      }
    }
  else
    {
      ATerm i_3 = NULL,j_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          d_6 = ATgetArgument(t, 0);
          e_6 = ATgetArgument(t, 1);
          h_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(e_6);
      i_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_7), term_b_10), i_3), term_u_9), d_6);
      j_3 = t;
      t = SSL_concat_strings(j_3);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_84 (ATerm), ATerm t)
{
  ATerm r_7 = NULL;
  static ATerm s_0 (ATerm t)
  {
    t = e_84(t);
    if(((r_7 != NULL) && (r_7 != t)))
      _fail(t);
    else
      r_7 = t;
    return(t);
  }
  t = fetch_1_0(s_0, t);
  t = not_null(r_7);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm s_7 = NULL;
  s_7 = t;
  {
    ATerm d_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm k_10 = ATgetArgument(t, 0);
              if((s_7 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm m_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_17), term_k_17), term_d_17), term_z_16), term_q_16), term_l_16), term_g_16), term_v_15), term_i_15), term_s_14), term_k_14), term_f_14), term_b_14), term_s_13), term_o_13), term_k_13), term_a_13), term_w_12), term_r_12), term_i_12), term_c_12), term_y_11), term_u_11), term_p_11), term_k_11), term_b_11), term_v_10), term_q_10);
        t = fetch_elem_1_0(u_0, t);
        LocalPopChoice(g_10);
      }
    else
      {
        t = d_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, s_7);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm c_8 = NULL,r_8 = NULL;
  c_8 = t;
  {
    ATerm p_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_17 = ATgetArgument(t, 0);
            r_8 = ATgetArgument(t, 1);
            {
              ATerm x_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(r_17);
        {
          ATerm y_17 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_4 = NULL,h_4 = NULL,i_4 = NULL;
              t = r_8;
              {
                ATerm f_18 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_18;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              b_4 = t;
              t = term_i_18;
              h_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, b_4), term_j_18);
              i_4 = t;
              t = SSL_printnl(h_4, i_4);
              t = (ATerm) ATmakeAppl(sym__2, term_i_18, (ATerm) ATinsert(ATinsert(ATempty, b_4), term_j_18));
              LocalPopChoice(c_18);
            }
          else
            {
              t = y_17;
              t = c_8;
            }
        }
      }
    else
      {
        t = p_17;
        t = c_8;
      }
  }
  t = c_8;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm g_9 = NULL,j_9 = NULL;
  j_9 = t;
  t = fork_0_0(t);
  g_9 = t;
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = j_9;
        t = q_77(t);
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        t = SSL_waitpid(g_9);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_18 = ATgetArgument(t, 0);
            if(((ATgetType(u_18) != AT_INT) || (ATgetInt((ATermInt) u_18) != 0)))
              _fail(t);
            {
              ATerm v_18 = ATgetArgument(t, 1);
            }
            {
              ATerm z_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = j_9;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm z_78 (ATerm), ATerm t)
{
  ATerm o_9 = NULL,r_9 = NULL,s_9 = NULL,v_9 = NULL;
  o_9 = t;
  t = z_78(t);
  r_9 = t;
  t = term_i_18;
  s_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_9), r_9);
  v_9 = t;
  t = SSL_printnl(s_9, v_9);
  t = o_9;
  return(t);
}
static ATerm r_6 (ATerm k_50, ATerm t)
{
  t = SSL_hashtable_keys(k_50);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL;
  static ATerm v_0 (ATerm t)
  {
    ATerm a_10 = NULL,c_10 = NULL;
    a_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), a_10);
    t = l_7(not_null(w_9), a_10, t);
    c_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_10, c_10);
    return(t);
  }
  if(((w_9 != NULL) && (w_9 != t)))
    _fail(t);
  else
    w_9 = t;
  t = lookup_table_0_1(w_9, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(x_9, t);
  t = map_1_0(v_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_112 (ATerm), ATerm t)
{
  ATerm f_10 = NULL;
  f_10 = t;
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
        t = term_j_8;
        i_10 = t;
        t = term_z_8;
        j_10 = t;
        t = term_c_9;
        t = l_7(i_10, j_10, t);
        h_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_10, term_w_16);
        t = geq_0_0(t);
        t = f_10;
        t = b_112(t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = f_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_112 (ATerm), ATerm t)
{
  ATerm p_10 = NULL;
  p_10 = t;
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_10 = NULL,y_10 = NULL,z_10 = NULL;
        t = term_j_8;
        y_10 = t;
        t = term_z_8;
        z_10 = t;
        t = term_c_9;
        t = l_7(y_10, z_10, t);
        r_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_10, term_y_12);
        t = geq_0_0(t);
        t = p_10;
        t = a_112(t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = p_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_112 (ATerm), ATerm t)
{
  ATerm e_11 = NULL;
  e_11 = t;
  {
    ATerm i_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
        t = term_j_8;
        h_11 = t;
        t = term_z_8;
        i_11 = t;
        t = term_c_9;
        t = l_7(h_11, i_11, t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, term_f_11);
        t = geq_0_0(t);
        t = e_11;
        t = c_112(t);
        LocalPopChoice(n_19);
      }
    else
      {
        t = i_19;
        t = e_11;
      }
  }
  return(t);
}
static ATerm t_6 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  t = h_88(t);
  {
    static ATerm x_0 (ATerm t)
    {
      ATerm l_11 = NULL;
      l_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_25, l_11);
      t = g_88(t);
      return(t);
    }
    t = fetch_1_0(x_0, t);
  }
  t = g_25;
  return(t);
}
static ATerm u_6 (ATerm d_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  static ATerm s_12 (ATerm t)
  {
    ATerm h_12 = NULL,j_12 = NULL,n_12 = NULL;
    h_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_12 = ATgetFirst((ATermList) t);
            n_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_19 = t;
          int p_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_12;
              {
                static ATerm a_1 (ATerm t)
                {
                  t = c_25;
                  return(t);
                }
                t = t_6(d_88, a_1, j_12, n_12, t);
              }
              t = s_12(t);
              LocalPopChoice(p_19);
            }
          else
            {
              t = o_19;
              {
                ATerm w_4 = NULL,a_5 = NULL,w_0 = NULL;
                t = SSLgetAnnotations(h_12);
                w_4 = t;
                t = n_12;
                t = s_12(t);
                a_5 = t;
                t = (ATerm) ATinsert(CheckATermList(a_5), j_12);
                w_0 = t;
                t = SSLsetAnnotations(w_0, w_4);
              }
            }
        }
      }
    return(t);
  }
  t = d_25;
  t = s_12(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm u_13 = NULL;
  if(match_cons(t, sym__2))
    {
      u_13 = ATgetArgument(t, 0);
      if((u_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_6 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,j_13 = NULL;
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_19 = ATgetArgument(t, 0);
            ATerm v_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
        t = l_7(i_46, j_46, t);
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = (ATerm) ATempty;
      }
  }
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_13, k_46);
  t = u_6(b_1, d_13, k_46, t);
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_46, j_46, c_13);
  t = lookup_table_0_1(i_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(j_46, c_13, j_13, t);
  t = b_13;
  return(t);
}
static ATerm w_6 (ATerm k_98 (ATerm), ATerm s_46, ATerm r_46, ATerm t)
{
  static ATerm d_1 (ATerm t)
  {
    ATerm v_13 = NULL,w_13 = NULL;
    if(match_cons(t, sym__2))
      {
        v_13 = ATgetArgument(t, 0);
        w_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, s_46, v_13, w_13);
    t = k_98(t);
    return(t);
  }
  t = r_46;
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm a_7 (ATerm t_51, ATerm u_51, ATerm t)
{
  t = SSL_access(t_51, u_51);
  return(t);
}
static ATerm v_14 (ATerm j_14, ATerm t)
{
  t = SSL_fclose(j_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL;
  p_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_14 = ATgetArgument(t, 0);
      {
        ATerm y_19 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_14);
            LocalPopChoice(b_20);
          }
        else
          {
            t = y_19;
            t = v_14(p_14, t);
          }
      }
    }
  else
    {
      t = v_14(p_14, t);
    }
  return(t);
}
static ATerm x_6 (ATerm z_17, ATerm t)
{
  t = SSL_read_term_from_stream(z_17);
  return(t);
}
static ATerm y_6 (ATerm c_52, ATerm d_52, ATerm t)
{
  ATerm w_14 = NULL;
  t = SSL_fopen(c_52, d_52);
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_14 = NULL;
  t = SSL_stdin_stream();
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_14 = NULL;
  t = SSL_stdout_stream();
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_14 = NULL;
  t = SSL_stderr_stream();
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_14);
  return(t);
}
static ATerm t_16 (ATerm f_15, ATerm t)
{
  ATerm g_15 = NULL;
  t = SSL_explode_term(f_15);
  if(match_cons(t, sym__2))
    {
      ATerm c_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_20 = ATgetArgument(t, 1);
        if(((ATgetType(d_20) == AT_LIST) && !(ATisEmpty(d_20))))
          {
            g_15 = ATgetFirst((ATermList) d_20);
            {
              ATerm e_20 = (ATerm) ATgetNext((ATermList) d_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_16 (ATerm j_15, ATerm k_15, ATerm l_15, ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,s_15 = NULL,y_0 = NULL;
  t = SSLgetAnnotations(l_15);
  p_15 = t;
  t = j_15;
  if(match_cons(t, sym_Path_1))
    {
      s_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_15, k_15);
  y_0 = t;
  t = SSLsetAnnotations(y_0, p_15);
  if(match_cons(t, sym__2))
    {
      n_15 = ATgetArgument(t, 0);
      o_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(n_15, o_15, t);
  return(t);
}
static ATerm x_16 (ATerm w_15, ATerm x_15, ATerm y_15, ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,j_16 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(y_15);
  d_16 = t;
  t = SSL_is_string(w_15);
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_16, x_15);
  z_0 = t;
  t = SSLsetAnnotations(z_0, d_16);
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(b_16, c_16, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm o_16 = NULL,r_16 = NULL,s_16 = NULL;
  o_16 = t;
  if(match_cons(t, sym__2))
    {
      r_16 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
      {
        ATerm f_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_16(o_16, t);
            LocalPopChoice(g_20);
          }
        else
          {
            t = f_20;
            {
              ATerm h_20 = t;
              int i_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_16(r_16, s_16, o_16, t);
                  LocalPopChoice(i_20);
                }
              else
                {
                  t = h_20;
                  t = x_16(r_16, s_16, o_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_16(o_16, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,q_17 = NULL;
  q_17 = t;
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_17, term_l_20);
        t = z_6(t);
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        {
          ATerm c_6 = NULL,f_6 = NULL;
          t = term_m_20;
          f_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_20, q_17);
          t = c_7(f_6, q_17, t);
          c_6 = t;
          t = SSL_perror(c_6);
          _fail(t);
        }
      }
  }
  f_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(g_17, t);
  e_17 = t;
  t = f_17;
  t = fclose_0_0(t);
  t = e_17;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_17 = NULL,w_17 = NULL;
      v_17 = t;
      t = (ATerm) ATinsert(ATempty, term_r_20);
      w_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_17, (ATerm) ATinsert(ATempty, term_r_20));
      t = a_7(v_17, w_17, t);
      LocalPopChoice(q_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = p_20;
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_20 = t;
            if((PushChoice() == 0))
              {
                ATerm a_18 = NULL,b_18 = NULL;
                a_18 = t;
                t = (ATerm) ATinsert(ATempty, term_l_9);
                b_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_18, (ATerm) ATinsert(ATempty, term_l_9));
                t = a_7(a_18, b_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_20;
              }
            t = debug_1_0(g_1, t);
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
static ATerm j_1 (ATerm t)
{
  t = debug_1_0(l_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_v_20;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_w_20;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm c_19 = NULL,h_19 = NULL,j_19 = NULL;
  c_19 = t;
  t = term_i_18;
  h_19 = t;
  t = (ATerm) ATinsert(ATempty, term_x_20);
  j_19 = t;
  t = SSL_printnl(h_19, j_19);
  t = c_19;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  if(match_cons(t, sym__3))
    {
      k_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
      m_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_6(k_19, l_19, m_19, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,w_19 = NULL;
  s_19 = t;
  t = term_i_18;
  t_19 = t;
  t = (ATerm) ATinsert(ATempty, term_y_20);
  w_19 = t;
  t = SSL_printnl(t_19, w_19);
  t = s_19;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm x_19 = NULL,z_19 = NULL,a_20 = NULL;
  x_19 = t;
  t = term_i_18;
  z_19 = t;
  t = (ATerm) ATinsert(ATempty, term_x_20);
  a_20 = t;
  t = SSL_printnl(z_19, a_20);
  t = x_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm e_18 = NULL,g_18 = NULL,h_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
  e_18 = t;
  t = if_verbose5_1_0(j_1, t);
  {
    ATerm z_20 = t;
    if((PushChoice() == 0))
      {
        ATerm a_19 = NULL,b_19 = NULL;
        t = term_a_21;
        a_19 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, e_18);
        b_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATmakeAppl(sym_Imported_1, e_18));
        t = l_7(a_19, b_19, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_20;
      }
  }
  h_18 = t;
  t = term_a_21;
  s_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_21, term_b_21, (ATerm) ATinsert(ATempty, e_18));
  t = lookup_table_0_1(s_18, t);
  y_18 = t;
  t = term_b_21;
  t_18 = t;
  t = (ATerm) ATinsert(ATempty, e_18);
  w_18 = t;
  t = y_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(t_18, w_18, x_18, t);
  t = h_18;
  t = if_verbose4_1_0(n_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(t_1, t);
  g_18 = t;
  t = term_a_21;
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, g_18);
  t = w_6(u_1, r_18, g_18, t);
  t = if_verbose6_1_0(w_1, t);
  t = term_a_21;
  m_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_21, (ATerm)ATmakeAppl(sym_Imported_1, e_18), (ATerm) ATempty);
  t = lookup_table_0_1(m_18, t);
  q_18 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, e_18);
  n_18 = t;
  t = (ATerm) ATempty;
  o_18 = t;
  t = q_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(n_18, o_18, p_18, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_21, (ATerm)ATmakeAppl(sym_Imported_1, e_18), (ATerm) ATempty);
  t = if_verbose4_1_0(y_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm k_92 (ATerm), ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  f_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_21;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_21 = ATgetFirst((ATermList) t);
          h_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_6 = NULL,s_6 = NULL,t_7 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(f_21);
            k_6 = t;
            t = g_21;
            t = k_92(t);
            s_6 = t;
            t = h_21;
            t = filter_1_0(k_92, t);
            t_7 = t;
            t = (ATerm) ATinsert(CheckATermList(t_7), s_6);
            e_1 = t;
            t = SSLsetAnnotations(e_1, k_6);
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
            t = h_21;
            t = filter_1_0(k_92, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm t)
{
  static ATerm m_21 (ATerm t)
  {
    ATerm e_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_81(t);
        t = m_21(t);
        LocalPopChoice(i_21);
      }
    else
      {
        t = e_21;
        t = x_81(t);
      }
    return(t);
  }
  t = m_21(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_21 = NULL,o_21 = NULL;
      t = term_j_8;
      n_21 = t;
      t = term_l_21;
      o_21 = t;
      t = term_q_21;
      t = l_7(n_21, o_21, t);
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_21 = NULL;
            t = term_z_21;
            p_21 = t;
            t = SSL_getenv(p_21);
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            t = XTC_REPOSITORY();
          }
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
  t = term_a_22;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  t = term_a_21;
  v_21 = t;
  t = term_b_22;
  w_21 = t;
  t = term_d_22;
  t = l_7(v_21, w_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm e_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_22;
      }
  }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_i_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_21 = NULL;
  t = if_verbose5_1_0(a_2, t);
  r_21 = t;
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_21 = NULL,t_21 = NULL;
        t = term_a_21;
        s_21 = t;
        t = term_b_21;
        t_21 = t;
        t = term_l_22;
        t = l_7(s_21, t_21, t);
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        {
          ATerm u_21 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          u_21 = t;
          t = repeat_2_0(e_2, _id, t);
          t = u_21;
        }
      }
  }
  t = r_21;
  t = if_verbose5_1_0(f_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_o_22;
  return(t);
}
static ATerm e_23 (ATerm c_22, ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
  t = term_a_21;
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, c_22);
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATmakeAppl(sym_Tool_1, c_22));
  t = l_7(g_22, h_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_22 = ATgetFirst((ATermList) t);
      if(match_cons(p_22, sym__2))
        {
          ATerm s_22 = ATgetArgument(p_22, 0);
          f_22 = ATgetArgument(p_22, 1);
        }
      else
        _fail(t);
      {
        ATerm r_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_22;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_o_22;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_a_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_u_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_22 = NULL,n_22 = NULL,q_22 = NULL;
      t = if_verbose5_1_0(h_2, t);
      t = xtc_load_0_0(t);
      q_22 = t;
      if(match_cons(t, sym__2))
        {
          m_22 = ATgetArgument(t, 0);
          n_22 = ATgetArgument(t, 1);
          {
            ATerm z_22 = t;
            int a_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_22 = NULL,v_22 = NULL,w_22 = NULL;
                t = term_a_21;
                v_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, m_22);
                w_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATmakeAppl(sym_Tool_1, m_22));
                t = l_7(v_22, w_22, t);
                {
                  static ATerm j_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((n_22 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((t_22 != NULL) && (t_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          t_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(j_2, t);
                }
                t = not_null(t_22);
                LocalPopChoice(a_23);
              }
            else
              {
                t = z_22;
                t = e_23(q_22, t);
              }
          }
        }
      else
        {
          t = e_23(q_22, t);
        }
      t = if_verbose5_1_0(m_2, t);
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      {
        ATerm d_23 = NULL,a_8 = NULL,b_8 = NULL;
        d_23 = t;
        t = term_i_18;
        a_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_23), d_23), term_b_23);
        b_8 = t;
        t = SSL_printnl(a_8, b_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_23), d_23), term_b_23);
        t = if_verbose5_1_0(o_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL;
  h_23 = t;
  t = g_101(t);
  t = xtc_find_0_0(t);
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_23, h_23);
  {
    static ATerm q_2 (ATerm t)
    {
      ATerm i_23 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, g_23, h_23);
      t = p_6(g_23, h_23, t);
      t = term_f_23;
      i_23 = t;
      t = SSL_exit(i_23);
      return(t);
    }
    t = fork_and_wait_1_0(q_2, t);
  }
  t = h_23;
  return(t);
}
static ATerm b_7 (ATerm q_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
  r_23 = t;
  t = q_94(t);
  m_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_23, j_35, h_35);
  t = m_7(m_23, j_35, h_35, t);
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_23 = NULL;
        t = term_l_23;
        w_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_23, term_l_23);
        t = l_7(m_23, w_23, t);
        {
          ATerm p_23 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_23;
            }
        }
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_23 = ATgetFirst((ATermList) t);
      o_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_23, term_l_23, (ATerm) ATinsert(CheckATermList(o_23), (ATerm) ATinsert(CheckATermList(n_23), j_35)));
  t = lookup_table_0_1(m_23, t);
  v_23 = t;
  t = term_l_23;
  s_23 = t;
  t = (ATerm) ATinsert(CheckATermList(o_23), (ATerm) ATinsert(CheckATermList(n_23), j_35));
  t_23 = t;
  t = v_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(s_23, t_23, u_23, t);
  t = r_23;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm y_23 = NULL;
  ATerm q_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_24 = NULL,i_8 = NULL;
      e_24 = t;
      t = term_z_23;
      i_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_24, term_z_23);
      t = c_7(e_24, i_8, t);
      y_23 = t;
      t = SSL_mkstemp(y_23);
      LocalPopChoice(x_23);
    }
  else
    {
      t = q_23;
      {
        ATerm f_24 = NULL;
        t = term_a_24;
        f_24 = t;
        t = SSL_perror(f_24);
        _fail(t);
      }
    }
  return(t);
}
static ATerm c_7 (ATerm q_32, ATerm r_32, ATerm t)
{
  t = SSL_strcat(q_32, r_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,l_24 = NULL,n_24 = NULL,o_24 = NULL;
  t = P__tmpdir_0_0(t);
  n_24 = t;
  t = term_c_24;
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_24, term_c_24);
  t = c_7(n_24, o_24, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      i_24 = ATgetArgument(t, 0);
      h_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_k_9;
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_24, term_k_9);
  t = b_7(s_2, i_24, l_24, t);
  t = SSL_close(h_24);
  t = i_24;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm q_24 = NULL,s_24 = NULL;
  q_24 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_24 = NULL,w_24 = NULL;
      t = q_24;
      t = xtc_new_file_0_0(t);
      v_24 = t;
      t = t_0(t);
      w_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_24, (ATerm) ATinsert(ATinsert(ATempty, v_24), term_k_8));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_24);
    }
  else
    {
      ATerm y_24 = NULL,a_25 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_24;
      t = xtc_new_file_0_0(t);
      y_24 = t;
      t = t_0(t);
      a_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_24), term_k_8), s_24), term_d_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_24);
    }
  return(t);
}
static ATerm e_7 (ATerm q_45, ATerm r_45, ATerm t)
{
  ATerm b_25 = NULL,e_25 = NULL;
  e_25 = t;
  {
    ATerm g_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        t = l_7(q_45, r_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_24 = ATgetFirst((ATermList) t);
            b_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_24);
        {
          ATerm f_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, q_45, r_45, b_25);
          t = lookup_table_0_1(q_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_7(r_45, b_25, f_25, t);
          t = (ATerm) ATmakeAppl(sym__3, q_45, r_45, b_25);
        }
      }
    else
      {
        t = g_24;
        {
          ATerm r_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
          t = lookup_table_0_1(q_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_7(r_45, r_25, t);
          t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        }
      }
  }
  t = e_25;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_94 (ATerm), ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL;
  y_25 = t;
  t = n_94(t);
  w_25 = t;
  {
    ATerm m_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_26 = NULL;
        t = term_l_23;
        c_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_25, term_l_23);
        t = l_7(w_25, c_26, t);
        {
          ATerm r_24 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_24;
            }
        }
        LocalPopChoice(p_24);
      }
    else
      {
        t = m_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_25 = ATgetFirst((ATermList) t);
      u_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_25, term_l_23, u_25);
  t = lookup_table_0_1(w_25, t);
  b_26 = t;
  t = term_l_23;
  z_25 = t;
  t = b_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(z_25, u_25, a_26, t);
  t = v_25;
  {
    static ATerm t_2 (ATerm t)
    {
      ATerm d_26 = NULL;
      d_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_25, d_26);
      t = e_7(w_25, d_26, t);
      return(t);
    }
    t = map_1_0(t_2, t);
  }
  t = y_25;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_98(t);
      t = g_98(t);
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      t = g_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_94 (ATerm), ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,k_26 = NULL,o_26 = NULL,p_26 = NULL,s_26 = NULL,t_26 = NULL;
  i_26 = t;
  t = m_94(t);
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_26, term_l_23);
  {
    ATerm x_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_26 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_25 = ATgetArgument(t, 0);
            ATerm j_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_23;
        z_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_26, term_l_23);
        t = l_7(h_26, z_26, t);
        LocalPopChoice(z_24);
      }
    else
      {
        t = x_24;
        t = (ATerm) ATempty;
      }
  }
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_26, term_l_23, (ATerm) ATinsert(CheckATermList(k_26), (ATerm) ATempty));
  t = lookup_table_0_1(h_26, t);
  t_26 = t;
  t = term_l_23;
  o_26 = t;
  t = (ATerm) ATinsert(CheckATermList(k_26), (ATerm) ATempty);
  p_26 = t;
  t = t_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(o_26, p_26, s_26, t);
  t = i_26;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_b_24;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm p_27 = NULL;
  p_27 = t;
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(p_27);
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        t = p_27;
      }
  }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm s_100 (ATerm), ATerm t)
{
  ATerm e_27 = NULL;
  static ATerm w_2 (ATerm t)
  {
    ATerm f_27 = NULL;
    f_27 = t;
    {
      ATerm m_25 = t;
      int n_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_27 = NULL,h_27 = NULL;
          t = term_b_24;
          g_27 = t;
          t = term_l_23;
          h_27 = t;
          t = term_o_25;
          t = l_7(g_27, h_27, t);
          LocalPopChoice(n_25);
        }
      else
        {
          t = m_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_27 != NULL) && (e_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_27 = ATgetFirst((ATermList) t);
        {
          ATerm p_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = e_27;
    t = map_1_0(f_3, t);
    t = f_27;
    t = end_scope_1_0(h_3, t);
    return(t);
  }
  t = begin_scope_1_0(u_2, t);
  t = restore_always_2_0(s_100, w_2, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm q_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_28 = NULL,e_28 = NULL,g_28 = NULL;
      t = term_j_8;
      e_28 = t;
      t = term_d_24;
      g_28 = t;
      t = term_t_25;
      t = l_7(e_28, g_28, t);
      a_28 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_28);
      LocalPopChoice(s_25);
    }
  else
    {
      t = q_25;
      t = term_p_8;
    }
  {
    ATerm x_25 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_28 = NULL,r_28 = NULL;
        r_28 = t;
        if(match_cons(t, sym_FILE_1))
          {
            p_28 = ATgetArgument(t, 0);
            {
              ATerm u_8 = NULL,m_1 = NULL;
              t = SSLgetAnnotations(r_28);
              u_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_28);
              m_1 = t;
              t = SSLsetAnnotations(m_1, u_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_28;
          }
        LocalPopChoice(e_26);
        t = xtc_transform_file_2_0(l_3, m_3, t);
      }
    else
      {
        t = x_25;
        t = xtc_transform_term_2_0(r_3, u_3, t);
      }
  }
  t = xtc_abox2text_1_0(pass_width_0_0, t);
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm s_28 = NULL,v_28 = NULL;
  t = term_j_8;
  s_28 = t;
  t = term_g_26;
  v_28 = t;
  t = term_j_26;
  t = l_7(s_28, v_28, t);
  t = map_1_0(o_3, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_28), term_g_26);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm x_28 = NULL,z_28 = NULL;
  t = term_j_8;
  x_28 = t;
  t = term_g_26;
  z_28 = t;
  t = term_j_26;
  t = l_7(x_28, z_28, t);
  t = map_1_0(x_3, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_29), term_g_26);
  return(t);
}
ATerm ast2text_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(k_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,n_29 = NULL;
  h_29 = t;
  t = term_k_9;
  t = whoami_0_0(t);
  i_29 = t;
  t = term_i_18;
  k_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_26), i_29), term_l_26);
  n_29 = t;
  t = SSL_printnl(k_29, n_29);
  t = term_d_9;
  j_29 = t;
  t = SSL_exit(j_29);
  t = h_29;
  return(t);
}
ATerm at_end_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  static ATerm r_30 (ATerm t)
  {
    ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
    q_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_30 = ATgetFirst((ATermList) t);
        p_30 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_9 = NULL,n_9 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(q_30);
          i_9 = t;
          t = p_30;
          t = r_30(t);
          n_9 = t;
          t = (ATerm) ATinsert(CheckATermList(n_9), o_30);
          v_1 = t;
          t = SSLsetAnnotations(v_1, i_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_30;
        t = j_84(t);
      }
    return(t);
  }
  t = r_30(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  p_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_29;
    }
  else
    {
      static ATerm y_3 (ATerm t)
      {
        t = not_null(r_29);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_29 = ATgetFirst((ATermList) t);
          if(((r_29 != NULL) && (r_29 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_29;
      t = at_end_1_0(y_3, t);
    }
  return(t);
}
static ATerm h_31 (ATerm v_30, ATerm t)
{
  ATerm w_30 = NULL;
  t = SSL_explode_term(v_30);
  if(match_cons(t, sym__2))
    {
      ATerm n_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_30;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
  c_31 = t;
  if(match_cons(t, sym__2))
    {
      a_31 = ATgetArgument(t, 0);
      b_31 = ATgetArgument(t, 1);
      {
        ATerm q_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_4 (ATerm t)
            {
              t = b_31;
              return(t);
            }
            t = a_31;
            t = at_end_1_0(d_4, t);
            LocalPopChoice(r_26);
          }
        else
          {
            t = q_26;
            t = h_31(c_31, t);
          }
      }
    }
  else
    {
      t = h_31(c_31, t);
    }
  return(t);
}
static ATerm f_7 (ATerm w_50, ATerm v_50, ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,n_31 = NULL;
  t = w_50;
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_31 = NULL;
        t = term_j_8;
        p_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_8, w_50);
        t = l_7(p_31, w_50, t);
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = (ATerm) ATempty;
      }
  }
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_50, j_31);
  t = conc_0_0(t);
  i_31 = t;
  t = term_j_8;
  k_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, w_50, i_31);
  t = lookup_table_0_1(k_31, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(w_50, i_31, n_31, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, w_50, i_31);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
  q_31 = t;
  t = term_g_26;
  r_31 = t;
  t = (ATerm) ATinsert(ATempty, q_31);
  s_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_26, (ATerm) ATinsert(ATempty, q_31));
  t = f_7(r_31, s_31, t);
  t = q_31;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_w_26;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_4, g_4, j_4, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_32 = NULL,b_32 = NULL,d_32 = NULL;
      t = term_k_9;
      t = p_0(t);
      a_32 = t;
      t = term_x_26;
      b_32 = t;
      t = term_y_26;
      d_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_26, term_y_26, a_32);
      t = m_7(b_32, d_32, a_32, t);
      _fail(t);
    }
  else
    {
      ATerm h_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_31 = ATgetFirst((ATermList) t);
          x_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_31 = ATgetFirst((ATermList) t);
          z_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_31;
      t = m_0(t);
      t = y_31;
      t = o_0(t);
      h_32 = t;
      t = (ATerm) ATinsert(CheckATermList(z_31), h_32);
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm l_32 = NULL;
  l_32 = t;
  if(match_string(t, "-k"))
    {
      t = l_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_32;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm m_32 = NULL,s_32 = NULL,t_32 = NULL;
  m_32 = t;
  t = SSL_string_to_int(m_32);
  s_32 = t;
  t = term_a_27;
  t_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_27, s_32);
  t = o_7(t_32, s_32, t);
  t = m_32;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_b_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, n_4, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm a_33 = NULL;
  a_33 = t;
  if(match_string(t, "-S"))
    {
      t = a_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_33;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL;
  t = term_z_8;
  b_33 = t;
  t = term_c_27;
  c_33 = t;
  t = term_d_27;
  t = o_7(b_33, c_33, t);
  t = term_i_27;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_j_27;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
  d_33 = t;
  t = SSL_string_to_int(d_33);
  e_33 = t;
  t = term_z_8;
  f_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_8, e_33);
  t = o_7(f_33, e_33, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_33);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_k_27;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm g_33 = NULL,k_33 = NULL;
  t = term_l_27;
  g_33 = t;
  t = term_k_9;
  k_33 = t;
  t = term_m_27;
  t = o_7(g_33, k_33, t);
  t = term_n_27;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_4, v_4, y_4, t);
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm s_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_4, b_5, c_5, t);
            LocalPopChoice(t_27);
          }
        else
          {
            t = s_27;
            t = Option_3_0(d_5, e_5, g_5, t);
          }
      }
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm m_33 = NULL;
  m_33 = t;
  if(match_string(t, "-o"))
    {
      t = m_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_33;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm n_33 = NULL,p_33 = NULL;
  n_33 = t;
  t = term_k_8;
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_8, n_33);
  t = o_7(p_33, n_33, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_33);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_u_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_5, j_5, k_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm r_33 = NULL;
  r_33 = t;
  if(match_string(t, "-i"))
    {
      t = r_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_33;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm s_33 = NULL,x_33 = NULL;
  s_33 = t;
  t = term_d_24;
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_24, s_33);
  t = o_7(x_33, s_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_33);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_v_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, n_5, o_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm z_33 = NULL;
  z_33 = t;
  if(match_string(t, "-w"))
    {
      t = z_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = z_33;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm a_34 = NULL,d_34 = NULL;
  a_34 = t;
  t = term_v_8;
  d_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_8, a_34);
  t = o_7(d_34, a_34, t);
  t = a_34;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_w_27;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
        ATerm z_27 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(b_28);
          }
        else
          {
            t = z_27;
            {
              ATerm c_28 = t;
              int d_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(d_28);
                }
              else
                {
                  t = c_28;
                  {
                    ATerm f_28 = t;
                    int h_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(h_28);
                      }
                    else
                      {
                        t = f_28;
                        t = ArgOption_3_0(p_5, q_5, r_5, t);
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
  ATerm e_34 = NULL,f_34 = NULL,h_34 = NULL,i_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_9;
  t = whoami_0_0(t);
  e_34 = t;
  t = term_i_18;
  h_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_28), e_34);
  i_34 = t;
  t = SSL_printnl(h_34, i_34);
  t = term_d_9;
  f_34 = t;
  t = SSL_exit(f_34);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL;
  t = term_j_8;
  j_34 = t;
  t = term_j_28;
  k_34 = t;
  t = term_k_28;
  t = l_7(j_34, k_34, t);
  return(t);
}
static ATerm g_7 (ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_33, w_33);
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      t = SSL_addr(v_33, w_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
  o_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_34;
      t = g_91(t);
    }
  else
    {
      ATerm t_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_34 = ATgetFirst((ATermList) t);
          q_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_34;
      t = foldr_2_0(g_91, h_91, t);
      t_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_34, t_34);
      t = h_91(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_c_27;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm e_10 = NULL,l_10 = NULL;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(e_10, l_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_34 = NULL,y_9 = NULL,z_9 = NULL;
  t = times_0_0(t);
  z_9 = t;
  t = SSL_explode_term(z_9);
  if(match_cons(t, sym__2))
    {
      ATerm n_28 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9;
  t = foldr_2_0(s_5, t_5, t);
  w_34 = t;
  t = SSL_TicksToSeconds(w_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_35 = NULL,b_36 = NULL,c_36 = NULL;
  y_35 = t;
  if(match_cons(t, sym__2))
    {
      b_36 = ATgetArgument(t, 0);
      c_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_36;
        if((b_36 != t))
          {
            _fail(t);
          }
        t = y_35;
        LocalPopChoice(q_28);
      }
    else
      {
        t = o_28;
        t = (ATerm) ATmakeAppl(sym__2, b_36, c_36);
        {
          ATerm t_28 = t;
          int u_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_36, c_36);
              LocalPopChoice(u_28);
            }
          else
            {
              t = t_28;
              t = SSL_gtr(b_36, c_36);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_36, c_36);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_111 (ATerm), ATerm t)
{
  ATerm j_36 = NULL;
  j_36 = t;
  {
    ATerm y_28 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_36 = NULL,m_36 = NULL,o_36 = NULL;
        t = term_j_8;
        m_36 = t;
        t = term_z_8;
        o_36 = t;
        t = term_c_9;
        t = l_7(m_36, o_36, t);
        l_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_36, term_d_9);
        t = geq_0_0(t);
        t = j_36;
        t = x_111(t);
        LocalPopChoice(b_29);
      }
    else
      {
        t = y_28;
        t = j_36;
      }
  }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm q_36 = NULL,v_36 = NULL,b_37 = NULL,c_37 = NULL;
  t = run_time_0_0(t);
  q_36 = t;
  t = term_k_9;
  t = whoami_0_0(t);
  v_36 = t;
  t = term_i_18;
  b_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_29), q_36), term_u_9), v_36);
  c_37 = t;
  t = SSL_printnl(b_37, c_37);
  t = (ATerm) ATmakeAppl(sym__2, term_i_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_29), q_36), term_u_9), v_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_27;
  f_37 = t;
  t = SSL_exit(f_37);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm x_37 = NULL,z_37 = NULL;
  z_37 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_37;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_37 = ATgetArgument(t, 0);
          {
            ATerm d_11 = NULL,x_1 = NULL;
            t = SSLgetAnnotations(z_37);
            d_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_37);
            x_1 = t;
            t = SSLsetAnnotations(x_1, d_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_37;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_37 = NULL,n_37 = NULL;
      t = term_j_8;
      m_37 = t;
      t = term_f_29;
      n_37 = t;
      t = term_g_29;
      t = l_7(m_37, n_37, t);
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      t = fetch_1_0(v_5, t);
    }
  t = n_102(t);
  return(t);
}
static ATerm p_7 (ATerm d_50, ATerm e_50, ATerm f_50, ATerm t)
{
  ATerm b_38 = NULL;
  t = SSL_hashtable_put(f_50, d_50, e_50);
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_38);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_46, ATerm t)
{
  ATerm n_38 = NULL;
  t = table_hashtable_0_0(t);
  n_38 = t;
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_11 = NULL;
        t = n_38;
        if(match_cons(t, sym_Hashtable_1))
          {
            s_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_7(x_46, s_11, t);
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
        {
          ATerm d_12 = NULL;
          t = x_46;
          t = table_create_0_0(t);
          t = n_38;
          if(match_cons(t, sym_Hashtable_1))
            {
              d_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_7(x_46, d_12, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm l_50, ATerm m_50, ATerm t)
{
  ATerm q_38 = NULL;
  t = SSL_hashtable_create(l_50, m_50);
  q_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_38);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,v_38 = NULL,w_38 = NULL;
  r_38 = t;
  t = term_o_29;
  v_38 = t;
  t = term_s_29;
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
  t = p_7(r_38, s_38, t_38, t);
  t = r_38;
  return(t);
}
static ATerm i_7 (ATerm i_50, ATerm j_50, ATerm t)
{
  ATerm x_38 = NULL;
  t = SSL_hashtable_remove(j_50, i_50);
  x_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_38);
  return(t);
}
static ATerm j_7 (ATerm n_50, ATerm t)
{
  ATerm y_38 = NULL;
  t = SSL_hashtable_destroy(n_50);
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
  t = j_7(d_39, t);
  t = b_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(a_39, c_39, t);
  t = a_39;
  return(t);
}
ATerm map_1_0 (ATerm s_83 (ATerm), ATerm t)
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
        ATerm k_12 = NULL,o_12 = NULL,p_12 = NULL,z_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_39 = ATgetFirst((ATermList) t);
            r_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_39);
        k_12 = t;
        t = q_39;
        t = s_83(t);
        o_12 = t;
        t = r_39;
        t = s_39(t);
        p_12 = t;
        t = (ATerm) ATinsert(CheckATermList(p_12), o_12);
        z_1 = t;
        t = SSLsetAnnotations(z_1, k_12);
      }
    return(t);
  }
  t = s_39(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_39 = ATgetFirst((ATermList) t);
      w_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_40 = NULL,b_40 = NULL;
        static ATerm w_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_40)), not_null(b_40));
          return(t);
        }
        t = w_39;
        t = l_0(t);
        if(((a_40 != NULL) && (a_40 != t)))
          _fail(t);
        else
          a_40 = t;
        t = v_39;
        t = j_0(t);
        if(((b_40 != NULL) && (b_40 != t)))
          _fail(t);
        else
          b_40 = t;
        t = w_39;
        t = reverse_acc_2_0(j_0, w_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_9;
      t = l_0(t);
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,n_3 = NULL;
  j_40 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_40);
  h_40 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_40);
  n_3 = t;
  t = SSLsetAnnotations(n_3, h_40);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm l_40 = NULL;
  l_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_40), term_t_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL;
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_40 = NULL,g_40 = NULL;
      t = term_j_8;
      f_40 = t;
      t = term_j_28;
      g_40 = t;
      t = term_k_28;
      t = l_7(f_40, g_40, t);
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      t = fetch_1_0(x_5, t);
    }
  t = term_w_29;
  t = echo_0_0(t);
  t = term_x_26;
  d_40 = t;
  t = term_y_26;
  e_40 = t;
  t = term_x_29;
  t = l_7(d_40, e_40, t);
  t = reverse_acc_2_0(_id, y_5, t);
  t = map_1_0(z_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_84 (ATerm), ATerm t)
{
  static ATerm i_41 (ATerm t)
  {
    ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
    f_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_41 = ATgetFirst((ATermList) t);
        h_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_29 = t;
      int z_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_13 = NULL,h_13 = NULL,p_3 = NULL;
          t = SSLgetAnnotations(f_41);
          e_13 = t;
          t = g_41;
          t = c_84(t);
          h_13 = t;
          t = (ATerm) ATinsert(CheckATermList(h_41), h_13);
          p_3 = t;
          t = SSLsetAnnotations(p_3, e_13);
          LocalPopChoice(z_29);
        }
      else
        {
          t = y_29;
          {
            ATerm x_13 = NULL,a_14 = NULL,q_3 = NULL;
            t = SSLgetAnnotations(f_41);
            x_13 = t;
            t = h_41;
            t = i_41(t);
            a_14 = t;
            t = (ATerm) ATinsert(CheckATermList(a_14), g_41);
            q_3 = t;
            t = SSLsetAnnotations(q_3, x_13);
          }
        }
    }
    return(t);
  }
  t = i_41(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
  m_41 = t;
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_41;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_30 = ATgetFirst((ATermList) t);
                ATerm d_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_41;
          }
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        t = (ATerm) ATinsert(ATempty, m_41);
      }
  }
  n_41 = t;
  t = term_m_8;
  o_41 = t;
  t = SSL_printnl(o_41, n_41);
  t = m_41;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL;
  t = term_j_8;
  s_41 = t;
  t = term_j_28;
  t_41 = t;
  t = term_k_28;
  t = l_7(s_41, t_41, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_7 (ATerm g_50, ATerm h_50, ATerm t)
{
  t = SSL_hashtable_get(h_50, g_50);
  return(t);
}
static ATerm l_7 (ATerm e_47, ATerm f_47, ATerm t)
{
  ATerm u_41 = NULL;
  t = lookup_table_0_1(e_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(f_47, u_41, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL;
  t = term_e_30;
  w_41 = t;
  t = term_k_9;
  x_41 = t;
  t = term_f_30;
  t = o_7(w_41, x_41, t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_g_30;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL;
  t = term_e_30;
  a_42 = t;
  t = term_k_9;
  b_42 = t;
  t = term_f_30;
  t = o_7(a_42, b_42, t);
  t = term_h_30;
  y_41 = t;
  t = term_k_9;
  z_41 = t;
  t = term_i_30;
  t = o_7(y_41, z_41, t);
  t = term_j_30;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_6, g_6, h_6, t);
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      t = Option_3_0(i_6, j_6, l_6, t);
    }
  return(t);
}
static ATerm o_7 (ATerm q_50, ATerm r_50, ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL;
  t = term_j_8;
  c_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, q_50, r_50);
  t = lookup_table_0_1(c_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(q_50, r_50, d_42, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, q_50, r_50);
  return(t);
}
static ATerm m_7 (ATerm l_45, ATerm m_45, ATerm k_45, ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
  {
    ATerm n_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_30 = ATgetArgument(t, 0);
            ATerm u_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
        t = l_7(l_45, m_45, t);
        LocalPopChoice(s_30);
      }
    else
      {
        t = n_30;
        t = (ATerm) ATempty;
      }
  }
  h_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_45, m_45, (ATerm) ATinsert(CheckATermList(h_42), k_45));
  t = lookup_table_0_1(l_45, t);
  k_42 = t;
  t = (ATerm) ATinsert(CheckATermList(h_42), k_45);
  i_42 = t;
  t = k_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(m_45, i_42, j_42, t);
  t = g_42;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
      t = term_k_9;
      t = h_0(t);
      s_42 = t;
      t = term_x_26;
      t_42 = t;
      t = term_y_26;
      u_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_26, term_y_26, s_42);
      t = m_7(t_42, u_42, s_42, t);
      _fail(t);
    }
  else
    {
      ATerm x_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_42 = ATgetFirst((ATermList) t);
          r_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_42;
      t = d_0(t);
      t = term_k_9;
      t = g_0(t);
      x_42 = t;
      t = (ATerm) ATinsert(CheckATermList(r_42), x_42);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,f_5 = NULL;
  d_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_42 = ATgetFirst((ATermList) t);
      a_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_43);
  y_42 = t;
  t = z_42;
  t = l_70(t);
  b_43 = t;
  t = a_43;
  t = m_70(t);
  c_43 = t;
  t = (ATerm) ATinsert(CheckATermList(c_43), b_43);
  f_5 = t;
  t = SSLsetAnnotations(f_5, y_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_104 (ATerm), ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,n_43 = NULL,o_43 = NULL,h_5 = NULL;
  i_43 = t;
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_30;
        t = l_104(t);
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
      }
  }
  t = i_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_43 = ATgetFirst((ATermList) t);
      l_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_43);
  j_43 = t;
  t = term_j_28;
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_28, k_43);
  t = o_7(o_43, k_43, t);
  t = l_43;
  {
    static ATerm y_43 (ATerm t)
    {
      ATerm d_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_31 = t;
          int g_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_43 = NULL;
              r_43 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_43;
              LocalPopChoice(g_31);
            }
          else
            {
              t = f_31;
              t = l_104(t);
              t = Cons_2_0(_id, y_43, t);
            }
          LocalPopChoice(e_31);
        }
      else
        {
          t = d_31;
          {
            ATerm u_43 = NULL,v_43 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_43 = ATgetFirst((ATermList) t);
                v_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(v_43), (ATerm) ATmakeAppl(sym_Undefined_1, u_43));
          }
        }
      return(t);
    }
    t = y_43(t);
  }
  n_43 = t;
  t = (ATerm) ATinsert(CheckATermList(n_43), (ATerm) ATmakeAppl(sym_Program_1, k_43));
  h_5 = t;
  t = SSLsetAnnotations(h_5, j_43);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm l_44 = NULL;
  l_44 = t;
  if(match_string(t, "--help"))
    {
      t = l_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_44;
        }
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL;
  t = term_f_29;
  m_44 = t;
  t = term_k_9;
  n_44 = t;
  t = term_l_31;
  t = o_7(m_44, n_44, t);
  t = term_m_31;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_o_31;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL;
  f_44 = t;
  t = term_x_26;
  g_44 = t;
  t = term_t_31;
  t = lookup_table_0_1(g_44, t);
  k_44 = t;
  t = term_y_26;
  h_44 = t;
  t = (ATerm) ATempty;
  i_44 = t;
  t = k_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(h_44, i_44, j_44, t);
  t = f_44;
  {
    static ATerm q_6 (ATerm t)
    {
      ATerm u_31 = t;
      int v_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_104(t);
          LocalPopChoice(v_31);
        }
      else
        {
          t = u_31;
          {
            ATerm c_32 = t;
            int e_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_7, n_7, u_7, t);
                LocalPopChoice(e_32);
              }
            else
              {
                t = c_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_6, t);
  }
  {
    ATerm f_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_44 = NULL;
        y_44 = t;
        {
          ATerm i_32 = t;
          int j_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_15 = NULL;
              t = y_44;
              {
                ATerm k_32 = t;
                int n_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_15 = NULL,c_15 = NULL;
                    t = term_j_8;
                    b_15 = t;
                    t = term_f_29;
                    c_15 = t;
                    t = term_g_29;
                    t = l_7(b_15, c_15, t);
                    LocalPopChoice(n_32);
                  }
                else
                  {
                    t = k_32;
                    t = fetch_1_0(v_7, t);
                  }
              }
              t = y_44;
              t = default_system_usage_0_0(t);
              t = term_c_27;
              a_15 = t;
              t = SSL_exit(a_15);
              LocalPopChoice(j_32);
            }
          else
            {
              t = i_32;
              {
                ATerm t_15 = NULL,u_15 = NULL,z_15 = NULL;
                t = term_j_8;
                u_15 = t;
                t = term_e_30;
                z_15 = t;
                t = term_o_32;
                t = l_7(u_15, z_15, t);
                t = y_44;
                t = default_system_about_0_0(t);
                t = term_c_27;
                t_15 = t;
                t = SSL_exit(t_15);
              }
            }
        }
        LocalPopChoice(g_32);
      }
    else
      {
        t = f_32;
        {
          ATerm p_32 = t;
          int u_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
              static ATerm w_7 (ATerm t)
              {
                ATerm c_45 = NULL,e_45 = NULL,f_45 = NULL,l_5 = NULL;
                f_45 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_45 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_45);
                c_45 = t;
                t = e_45;
                if(((d_44 != NULL) && (d_44 != t)))
                  _fail(t);
                else
                  d_44 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_45);
                l_5 = t;
                t = SSLsetAnnotations(l_5, c_45);
                return(t);
              }
              t = fetch_1_0(w_7, t);
              t = term_i_18;
              a_45 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_44)), term_v_32);
              b_45 = t;
              t = SSL_printnl(a_45, b_45);
              t = (ATerm) ATmakeAppl(sym__2, term_i_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_44)), term_v_32));
              t = default_system_usage_0_0(t);
              t = term_d_9;
              z_44 = t;
              t = SSL_exit(z_44);
              LocalPopChoice(u_32);
            }
          else
            {
              t = p_32;
            }
        }
      }
  }
  e_44 = t;
  t = term_x_26;
  t = table_destroy_0_0(t);
  t = e_44;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL;
  t = parse_options_1_0(p_102, t);
  u_45 = t;
  t = term_w_32;
  t = table_create_0_0(t);
  t = term_w_32;
  v_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_32, term_x_32, u_45);
  t = lookup_table_0_1(v_45, t);
  y_45 = t;
  t = term_x_32;
  w_45 = t;
  t = y_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(w_45, u_45, x_45, t);
  t = u_45;
  t = r_102(t);
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_102, t);
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        {
          ATerm h_33 = t;
          int i_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_102(t);
              t = report_success_0_0(t);
              LocalPopChoice(i_33);
            }
          else
            {
              t = h_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm j_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_options_0_0(t);
      LocalPopChoice(l_33);
    }
  else
    {
      t = j_33;
      t = pp_options_0_0(t);
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(x_7, default_usage_0_0, _id, ast2text_0_0, t);
  return(t);
}
