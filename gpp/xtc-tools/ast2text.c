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
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_k_32;
ATerm term_l_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_v_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_h_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_u_28;
ATerm term_h_28;
ATerm term_f_28;
ATerm term_d_28;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_r_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_h_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_q_25;
ATerm term_l_25;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_y_23;
ATerm term_q_23;
ATerm term_k_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_t_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_m_21;
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
ATerm term_i_18;
ATerm term_f_18;
ATerm term_q_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
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
ATerm term_l_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_a_10;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_j_9;
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
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_d_9, term_o_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_10, term_s_10, term_t_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_a_11);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_11, term_f_11, term_i_11);
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
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_s_11, term_t_11);
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
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_a_12, term_b_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_f_12, term_g_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_q_12);
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
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_f_13, term_h_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_y_13, term_z_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_e_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_j_14, term_k_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_q_14, term_t_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_f_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_r_15, term_s_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_o_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_u_16, term_w_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_b_17, term_c_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_h_17, term_i_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_m_17, term_n_17);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
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
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_l_21);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_b_22);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_b_21);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_a_24, term_k_23);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_c_24);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_x_25);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_z_26);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_26);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__2, term_i_27, term_j_9);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_f_28);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_c_29);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym__2, term_u_26, term_v_26);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__2, term_c_30, term_j_9);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym__2, term_f_30, term_j_9);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_j_9);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym__3, term_u_26, term_v_26, (ATerm) ATempty);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_c_30);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm c_7 (ATerm o_14, ATerm p_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm pass_width_0_0 (ATerm t);
static ATerm l_6 (ATerm w_33, ATerm x_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm xtc_abox2text_1_0 (ATerm v_88 (ATerm), ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm m_6 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm n_6 (ATerm c_69 (ATerm), ATerm t_170, ATerm y_17, ATerm t);
static ATerm q_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm t);
static ATerm o_6 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm e_74 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm r_67 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm a_69 (ATerm), ATerm t);
static ATerm q_6 (ATerm q_40, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm s_100 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm r_100 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm t_100 (ATerm), ATerm t);
static ATerm s_6 (ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm t_6 (ATerm d_78 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm c_1 (ATerm t);
static ATerm u_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm v_6 (ATerm q_85 (ATerm), ATerm y_37, ATerm x_37, ATerm t);
static ATerm z_6 (ATerm z_41, ATerm a_42, ATerm t);
static ATerm v_14 (ATerm m_14, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_6 (ATerm u_17, ATerm t);
static ATerm x_6 (ATerm i_42, ATerm j_42, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm v_16 (ATerm g_15, ATerm t);
static ATerm x_16 (ATerm k_15, ATerm l_15, ATerm n_15, ATerm t);
static ATerm z_16 (ATerm x_15, ATerm y_15, ATerm b_16, ATerm t);
static ATerm y_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm k_82 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm x_71 (ATerm), ATerm y_71 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm f_23 (ATerm e_22, ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm m_88 (ATerm), ATerm t);
static ATerm a_7 (ATerm o_84 (ATerm), ATerm e_35, ATerm c_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm b_7 (ATerm l_32, ATerm m_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm d_7 (ATerm w_36, ATerm x_36, ATerm t);
ATerm end_scope_1_0 (ATerm l_84 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm k_84 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm y_87 (ATerm), ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm ast2text_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm j_74 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_31 (ATerm w_30, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm e_7 (ATerm c_41, ATerm b_41, ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
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
static ATerm f_7 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm o_100 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm need_help_1_0 (ATerm u_89 (ATerm), ATerm t);
static ATerm o_7 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t);
ATerm lookup_table_0_1 (ATerm d_38, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_40, ATerm s_40, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm h_7 (ATerm o_40, ATerm p_40, ATerm t);
static ATerm i_7 (ATerm t_40, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm s_73 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_74 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_7 (ATerm m_40, ATerm n_40, ATerm t);
static ATerm k_7 (ATerm k_38, ATerm l_38, ATerm t);
static ATerm a_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm n_7 (ATerm w_40, ATerm x_40, ATerm t);
static ATerm l_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm r_60 (ATerm), ATerm s_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_91 (ATerm), ATerm t);
static ATerm m_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm parse_options_1_0 (ATerm r_91 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL;
  j_1 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, k_1, h_0);
        t = c_7(k_1, h_0, t);
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
              ATerm b_1 = NULL;
              t = j_1;
              t = o_0(t);
              b_1 = t;
              {
                ATerm f_8 = t;
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
                    t = f_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, k_1, b_1);
              t = c_7(k_1, b_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
              LocalPopChoice(e_8);
            }
          else
            {
              t = d_8;
              t = j_1;
              t = o_0(t);
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
static ATerm c_7 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_copy(o_14, p_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm g_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_2 = NULL,v_2 = NULL;
      t = term_j_8;
      u_2 = t;
      t = term_k_8;
      v_2 = t;
      t = term_l_8;
      t = k_7(u_2, v_2, t);
      LocalPopChoice(i_8);
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
  ATerm p_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm n_1 = NULL,o_1 = NULL;
      t = term_k_8;
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 = NULL,r_1 = NULL;
            t = term_j_8;
            q_1 = t;
            t = term_k_8;
            r_1 = t;
            t = term_l_8;
            t = k_7(q_1, r_1, t);
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            t = term_m_8;
          }
      }
      n_1 = t;
      t = term_p_8;
      o_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_p_8, n_1);
      t = c_7(o_1, n_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm q_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 = NULL,y_2 = NULL;
      t = term_j_8;
      x_2 = t;
      t = term_v_8;
      y_2 = t;
      t = term_w_8;
      t = k_7(x_2, y_2, t);
      LocalPopChoice(s_8);
      {
        ATerm z_2 = NULL;
        z_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, z_2), term_v_8);
      }
    }
  else
    {
      t = r_8;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm l_6 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_33, x_33);
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      t = SSL_subtr(w_33, x_33);
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
        ATerm f_3 = NULL,h_3 = NULL;
        t = term_j_8;
        f_3 = t;
        t = term_z_8;
        h_3 = t;
        t = term_c_9;
        t = k_7(f_3, h_3, t);
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
  t = l_6(b_3, d_3, t);
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
static ATerm j_0 (ATerm t)
{
  t = term_e_9;
  return(t);
}
ATerm xtc_abox2text_1_0 (ATerm v_88 (ATerm), ATerm t)
{
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_3 = NULL,u_3 = NULL;
      u_3 = t;
      if(match_cons(t, sym_FILE_1))
        {
          s_3 = ATgetArgument(t, 0);
          {
            ATerm b_2 = NULL,t_0 = NULL;
            t = SSLgetAnnotations(u_3);
            b_2 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, s_3);
            t_0 = t;
            t = SSLsetAnnotations(t_0, b_2);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_3;
        }
      LocalPopChoice(g_9);
      {
        static ATerm f_0 (ATerm t)
        {
          ATerm v_3 = NULL,w_3 = NULL,z_3 = NULL;
          t = term_j_9;
          t = v_88(t);
          z_3 = t;
          t = SSL_int_to_string(z_3);
          v_3 = t;
          t = term_j_9;
          t = pass_verbose_0_0(t);
          w_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, v_3), term_v_8), w_3);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(b_0, f_0, t);
      }
    }
  else
    {
      t = f_9;
      {
        static ATerm m_0 (ATerm t)
        {
          ATerm b_4 = NULL,c_4 = NULL,f_4 = NULL;
          t = term_j_9;
          t = v_88(t);
          f_4 = t;
          t = SSL_int_to_string(f_4);
          b_4 = t;
          t = term_j_9;
          t = pass_verbose_0_0(t);
          c_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, b_4), term_v_8), c_4);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(j_0, m_0, t);
      }
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm l_4 = NULL;
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
          l_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_l_9);
      o_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_4, (ATerm) ATinsert(ATempty, term_l_9));
      t = z_6(l_4, o_4, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm m_6 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm p_4 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_4);
  return(t);
}
static ATerm n_6 (ATerm c_69 (ATerm), ATerm t_170, ATerm y_17, ATerm t)
{
  ATerm q_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_170, term_n_9);
  t = y_6(t);
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_4, y_17);
  t = c_69(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm w_4 = NULL,b_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_9 = ATgetArgument(t, 0);
      if(match_cons(o_9, sym_Stream_1))
        {
          w_4 = ATgetArgument(o_9, 0);
        }
      else
        _fail(t);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(w_4, b_5, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL;
  s_4 = t;
  t = xtc_new_file_0_0(t);
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_4, s_4);
  t = n_6(q_0, r_4, s_4, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_4);
  t = xtc_transform_file_2_0(l_87, m_87, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm o_6 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm c_6 = NULL,d_6 = NULL,g_7 = NULL,j_7 = NULL;
  c_6 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      d_6 = ATgetArgument(t, 0);
      {
        ATerm j_2 = NULL,k_2 = NULL;
        t = SSL_int_to_string(d_6);
        j_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_9), j_2), term_p_9);
        k_2 = t;
        t = SSL_concat_strings(k_2);
      }
    }
  else
    {
      ATerm i_3 = NULL,j_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          d_6 = ATgetArgument(t, 0);
          g_7 = ATgetArgument(t, 1);
          j_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(g_7);
      i_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_7), term_a_10), i_3), term_t_9), d_6);
      j_3 = t;
      t = SSL_concat_strings(j_3);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_74 (ATerm), ATerm t)
{
  ATerm r_7 = NULL;
  static ATerm s_0 (ATerm t)
  {
    t = e_74(t);
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
  ATerm u_7 = NULL;
  u_7 = t;
  {
    ATerm d_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm l_10 = ATgetArgument(t, 0);
              if((u_7 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_17), term_j_17), term_d_17), term_y_16), term_p_16), term_l_16), term_g_16), term_w_15), term_i_15), term_u_14), term_l_14), term_f_14), term_b_14), term_s_13), term_o_13), term_i_13), term_a_13), term_w_12), term_r_12), term_h_12), term_d_12), term_y_11), term_u_11), term_p_11), term_k_11), term_b_11), term_u_10), term_q_10);
        t = fetch_elem_1_0(u_0, t);
        LocalPopChoice(g_10);
      }
    else
      {
        t = d_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, u_7);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm c_8 = NULL,u_8 = NULL;
  c_8 = t;
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_17 = ATgetArgument(t, 0);
            u_8 = ATgetArgument(t, 1);
            {
              ATerm w_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_17);
        {
          ATerm x_17 = t;
          int a_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_4 = NULL,h_4 = NULL,i_4 = NULL;
              t = u_8;
              {
                ATerm b_18 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_18;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              a_4 = t;
              t = term_f_18;
              h_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_4), term_i_18);
              i_4 = t;
              t = SSL_printnl(h_4, i_4);
              t = (ATerm) ATmakeAppl(sym__2, term_f_18, (ATerm) ATinsert(ATinsert(ATempty, a_4), term_i_18));
              LocalPopChoice(a_18);
            }
          else
            {
              t = x_17;
              t = c_8;
            }
        }
      }
    else
      {
        t = r_17;
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
ATerm fork_and_wait_1_0 (ATerm r_67 (ATerm), ATerm t)
{
  ATerm i_9 = NULL,k_9 = NULL;
  k_9 = t;
  t = fork_0_0(t);
  i_9 = t;
  {
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_9;
        t = r_67(t);
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
        t = SSL_waitpid(i_9);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_18 = ATgetArgument(t, 0);
            if(((ATgetType(l_18) != AT_INT) || (ATgetInt((ATermInt) l_18) != 0)))
              _fail(t);
            {
              ATerm u_18 = ATgetArgument(t, 1);
            }
            {
              ATerm v_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = k_9;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm a_69 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,u_9 = NULL,v_9 = NULL;
  q_9 = t;
  t = a_69(t);
  r_9 = t;
  t = term_f_18;
  u_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_9), r_9);
  v_9 = t;
  t = SSL_printnl(u_9, v_9);
  t = q_9;
  return(t);
}
static ATerm q_6 (ATerm q_40, ATerm t)
{
  t = SSL_hashtable_keys(q_40);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm w_9 = NULL,z_9 = NULL;
  static ATerm v_0 (ATerm t)
  {
    ATerm b_10 = NULL,c_10 = NULL;
    b_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), b_10);
    t = k_7(not_null(w_9), b_10, t);
    c_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_10, c_10);
    return(t);
  }
  if(((w_9 != NULL) && (w_9 != t)))
    _fail(t);
  else
    w_9 = t;
  t = lookup_table_0_1(w_9, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_6(z_9, t);
  t = map_1_0(v_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm s_100 (ATerm), ATerm t)
{
  ATerm f_10 = NULL;
  f_10 = t;
  {
    ATerm z_18 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
        t = term_j_8;
        i_10 = t;
        t = term_z_8;
        j_10 = t;
        t = term_c_9;
        t = k_7(i_10, j_10, t);
        h_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_10, term_u_16);
        t = geq_0_0(t);
        t = f_10;
        t = s_100(t);
        LocalPopChoice(d_19);
      }
    else
      {
        t = z_18;
        t = f_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm r_100 (ATerm), ATerm t)
{
  ATerm p_10 = NULL;
  p_10 = t;
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
        t = term_j_8;
        y_10 = t;
        t = term_z_8;
        z_10 = t;
        t = term_c_9;
        t = k_7(y_10, z_10, t);
        x_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_10, term_y_12);
        t = geq_0_0(t);
        t = p_10;
        t = r_100(t);
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        t = p_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm e_11 = NULL;
  e_11 = t;
  {
    ATerm g_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_11 = NULL,h_11 = NULL,j_11 = NULL;
        t = term_j_8;
        h_11 = t;
        t = term_z_8;
        j_11 = t;
        t = term_c_9;
        t = k_7(h_11, j_11, t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, term_f_11);
        t = geq_0_0(t);
        t = e_11;
        t = t_100(t);
        LocalPopChoice(i_19);
      }
    else
      {
        t = g_19;
        t = e_11;
      }
  }
  return(t);
}
static ATerm s_6 (ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = h_78(t);
  {
    static ATerm x_0 (ATerm t)
    {
      ATerm l_11 = NULL;
      l_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, l_11);
      t = g_78(t);
      return(t);
    }
    t = fetch_1_0(x_0, t);
  }
  t = b_25;
  return(t);
}
static ATerm t_6 (ATerm d_78 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm s_12 (ATerm t)
  {
    ATerm i_12 = NULL,m_12 = NULL,p_12 = NULL;
    i_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_12 = ATgetFirst((ATermList) t);
            p_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_12;
              {
                static ATerm a_1 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = s_6(d_78, a_1, m_12, p_12, t);
              }
              t = s_12(t);
              LocalPopChoice(k_19);
            }
          else
            {
              t = j_19;
              {
                ATerm v_4 = NULL,z_4 = NULL,w_0 = NULL;
                t = SSLgetAnnotations(i_12);
                v_4 = t;
                t = p_12;
                t = s_12(t);
                z_4 = t;
                t = (ATerm) ATinsert(CheckATermList(z_4), m_12);
                w_0 = t;
                t = SSLsetAnnotations(w_0, v_4);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = s_12(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm v_13 = NULL;
  if(match_cons(t, sym__2))
    {
      v_13 = ATgetArgument(t, 0);
      if((v_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,j_13 = NULL,m_13 = NULL;
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_19 = ATgetArgument(t, 0);
            ATerm t_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = k_7(o_37, p_37, t);
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = (ATerm) ATempty;
      }
  }
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_13, q_37);
  t = t_6(c_1, j_13, q_37, t);
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_37, p_37, d_13);
  t = lookup_table_0_1(o_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(p_37, d_13, m_13, t);
  t = c_13;
  return(t);
}
static ATerm v_6 (ATerm q_85 (ATerm), ATerm y_37, ATerm x_37, ATerm t)
{
  static ATerm d_1 (ATerm t)
  {
    ATerm w_13 = NULL,x_13 = NULL;
    if(match_cons(t, sym__2))
      {
        w_13 = ATgetArgument(t, 0);
        x_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_37, w_13, x_13);
    t = q_85(t);
    return(t);
  }
  t = x_37;
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm z_6 (ATerm z_41, ATerm a_42, ATerm t)
{
  t = SSL_access(z_41, a_42);
  return(t);
}
static ATerm v_14 (ATerm m_14, ATerm t)
{
  t = SSL_fclose(m_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL;
  s_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_14 = ATgetArgument(t, 0);
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_14);
            LocalPopChoice(w_19);
          }
        else
          {
            t = v_19;
            t = v_14(s_14, t);
          }
      }
    }
  else
    {
      t = v_14(s_14, t);
    }
  return(t);
}
static ATerm w_6 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm x_6 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm x_14 = NULL;
  t = SSL_fopen(i_42, j_42);
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_14 = NULL;
  t = SSL_stdin_stream();
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_14 = NULL;
  t = SSL_stdout_stream();
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_15 = NULL;
  t = SSL_stderr_stream();
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_15);
  return(t);
}
static ATerm v_16 (ATerm g_15, ATerm t)
{
  ATerm h_15 = NULL;
  t = SSL_explode_term(g_15);
  if(match_cons(t, sym__2))
    {
      ATerm c_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_20 = ATgetArgument(t, 1);
        if(((ATgetType(d_20) == AT_LIST) && !(ATisEmpty(d_20))))
          {
            h_15 = ATgetFirst((ATermList) d_20);
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
  t = h_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_16 (ATerm k_15, ATerm l_15, ATerm n_15, ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,v_15 = NULL,y_0 = NULL;
  t = SSLgetAnnotations(n_15);
  q_15 = t;
  t = k_15;
  if(match_cons(t, sym_Path_1))
    {
      v_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_15, l_15);
  y_0 = t;
  t = SSLsetAnnotations(y_0, q_15);
  if(match_cons(t, sym__2))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(o_15, p_15, t);
  return(t);
}
static ATerm z_16 (ATerm x_15, ATerm y_15, ATerm b_16, ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,k_16 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(b_16);
  e_16 = t;
  t = SSL_is_string(x_15);
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_16, y_15);
  z_0 = t;
  t = SSLsetAnnotations(z_0, e_16);
  if(match_cons(t, sym__2))
    {
      c_16 = ATgetArgument(t, 0);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(c_16, d_16, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  r_16 = t;
  if(match_cons(t, sym__2))
    {
      s_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
      {
        ATerm f_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_16(r_16, t);
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
                  t = x_16(s_16, t_16, r_16, t);
                  LocalPopChoice(i_20);
                }
              else
                {
                  t = h_20;
                  t = z_16(s_16, t_16, r_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_16(r_16, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,l_17 = NULL,t_17 = NULL;
  t_17 = t;
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_17, term_l_20);
        t = y_6(t);
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        {
          ATerm b_6 = NULL,e_6 = NULL;
          t = term_m_20;
          e_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_20, t_17);
          t = b_7(e_6, t_17, t);
          b_6 = t;
          t = SSL_perror(b_6);
          _fail(t);
        }
      }
  }
  g_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_6(l_17, t);
  f_17 = t;
  t = g_17;
  t = fclose_0_0(t);
  t = f_17;
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
      ATerm z_17 = NULL,c_18 = NULL;
      z_17 = t;
      t = (ATerm) ATinsert(ATempty, term_r_20);
      c_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_17, (ATerm) ATinsert(ATempty, term_r_20));
      t = z_6(z_17, c_18, t);
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
                ATerm d_18 = NULL,e_18 = NULL;
                d_18 = t;
                t = (ATerm) ATinsert(ATempty, term_l_9);
                e_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_18, (ATerm) ATinsert(ATempty, term_l_9));
                t = z_6(d_18, e_18, t);
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
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(l_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_v_20;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_w_20;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm h_19 = NULL,o_19 = NULL,p_19 = NULL;
  h_19 = t;
  t = term_f_18;
  o_19 = t;
  t = (ATerm) ATinsert(ATempty, term_x_20);
  p_19 = t;
  t = SSL_printnl(o_19, p_19);
  t = h_19;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
  if(match_cons(t, sym__3))
    {
      q_19 = ATgetArgument(t, 0);
      r_19 = ATgetArgument(t, 1);
      s_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_6(q_19, r_19, s_19, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm u_19 = NULL,x_19 = NULL,y_19 = NULL;
  u_19 = t;
  t = term_f_18;
  x_19 = t;
  t = (ATerm) ATinsert(ATempty, term_y_20);
  y_19 = t;
  t = SSL_printnl(x_19, y_19);
  t = u_19;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  z_19 = t;
  t = term_f_18;
  a_20 = t;
  t = (ATerm) ATinsert(ATempty, term_x_20);
  b_20 = t;
  t = SSL_printnl(a_20, b_20);
  t = z_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,a_19 = NULL;
  g_18 = t;
  t = if_verbose5_1_0(i_1, t);
  {
    ATerm z_20 = t;
    if((PushChoice() == 0))
      {
        ATerm b_19 = NULL,c_19 = NULL;
        t = term_a_21;
        b_19 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, g_18);
        c_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATmakeAppl(sym_Imported_1, g_18));
        t = k_7(b_19, c_19, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_20;
      }
  }
  m_18 = t;
  t = term_a_21;
  t_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_21, term_b_21, (ATerm) ATinsert(ATempty, g_18));
  t = lookup_table_0_1(t_18, t);
  a_19 = t;
  t = term_b_21;
  w_18 = t;
  t = (ATerm) ATinsert(ATempty, g_18);
  x_18 = t;
  t = a_19;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(w_18, x_18, y_18, t);
  t = m_18;
  t = if_verbose4_1_0(m_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(t_1, t);
  h_18 = t;
  t = term_a_21;
  s_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, h_18);
  t = v_6(u_1, s_18, h_18, t);
  t = if_verbose6_1_0(w_1, t);
  t = term_a_21;
  n_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_21, (ATerm)ATmakeAppl(sym_Imported_1, g_18), (ATerm) ATempty);
  t = lookup_table_0_1(n_18, t);
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, g_18);
  o_18 = t;
  t = (ATerm) ATempty;
  p_18 = t;
  t = r_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(o_18, p_18, q_18, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_21, (ATerm)ATmakeAppl(sym_Imported_1, g_18), (ATerm) ATempty);
  t = if_verbose4_1_0(y_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm k_82 (ATerm), ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
  g_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_21;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_21 = ATgetFirst((ATermList) t);
          i_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 = NULL,r_6 = NULL,s_7 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(g_21);
            j_6 = t;
            t = h_21;
            t = k_82(t);
            r_6 = t;
            t = i_21;
            t = filter_1_0(k_82, t);
            s_7 = t;
            t = (ATerm) ATinsert(CheckATermList(s_7), r_6);
            f_1 = t;
            t = SSLsetAnnotations(f_1, j_6);
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
            t = i_21;
            t = filter_1_0(k_82, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm x_71 (ATerm), ATerm y_71 (ATerm), ATerm t)
{
  static ATerm n_21 (ATerm t)
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_71(t);
        t = n_21(t);
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = y_71(t);
      }
    return(t);
  }
  t = n_21(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_21 = NULL,p_21 = NULL;
      t = term_j_8;
      o_21 = t;
      t = term_l_21;
      p_21 = t;
      t = term_m_21;
      t = k_7(o_21, p_21, t);
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      {
        ATerm r_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_21 = NULL;
            t = term_z_21;
            q_21 = t;
            t = SSL_getenv(q_21);
            LocalPopChoice(y_21);
          }
        else
          {
            t = r_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL;
  t = term_a_21;
  w_21 = t;
  t = term_b_22;
  x_21 = t;
  t = term_c_22;
  t = k_7(w_21, x_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm d_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_22;
      }
  }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_f_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_21 = NULL;
  t = if_verbose5_1_0(z_1, t);
  s_21 = t;
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_21 = NULL,u_21 = NULL;
        t = term_a_21;
        t_21 = t;
        t = term_b_21;
        u_21 = t;
        t = term_k_22;
        t = k_7(t_21, u_21, t);
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        {
          ATerm v_21 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          v_21 = t;
          t = repeat_2_0(d_2, _id, t);
          t = v_21;
        }
      }
  }
  t = s_21;
  t = if_verbose5_1_0(e_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_l_22;
  return(t);
}
static ATerm f_23 (ATerm e_22, ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,m_22 = NULL;
  t = term_a_21;
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, e_22);
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATmakeAppl(sym_Tool_1, e_22));
  t = k_7(h_22, m_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_22 = ATgetFirst((ATermList) t);
      if(match_cons(o_22, sym__2))
        {
          ATerm s_22 = ATgetArgument(o_22, 0);
          g_22 = ATgetArgument(o_22, 1);
        }
      else
        _fail(t);
      {
        ATerm p_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_22;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_l_22;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_a_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm u_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_22 = NULL,q_22 = NULL,r_22 = NULL;
      t = if_verbose5_1_0(g_2, t);
      t = xtc_load_0_0(t);
      r_22 = t;
      if(match_cons(t, sym__2))
        {
          n_22 = ATgetArgument(t, 0);
          q_22 = ATgetArgument(t, 1);
          {
            ATerm z_22 = t;
            int a_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_22 = NULL,w_22 = NULL,y_22 = NULL;
                t = term_a_21;
                w_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, n_22);
                y_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATmakeAppl(sym_Tool_1, n_22));
                t = k_7(w_22, y_22, t);
                {
                  static ATerm i_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((q_22 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((v_22 != NULL) && (v_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(i_2, t);
                }
                t = not_null(v_22);
                LocalPopChoice(a_23);
              }
            else
              {
                t = z_22;
                t = f_23(r_22, t);
              }
          }
        }
      else
        {
          t = f_23(r_22, t);
        }
      t = if_verbose5_1_0(l_2, t);
      LocalPopChoice(x_22);
    }
  else
    {
      t = u_22;
      {
        ATerm e_23 = NULL,a_8 = NULL,b_8 = NULL;
        e_23 = t;
        t = term_f_18;
        a_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_23), e_23), term_b_23);
        b_8 = t;
        t = SSL_printnl(a_8, b_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_23), e_23), term_b_23);
        t = if_verbose5_1_0(n_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm m_88 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL;
  i_23 = t;
  t = m_88(t);
  t = xtc_find_0_0(t);
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_23, i_23);
  {
    static ATerm q_2 (ATerm t)
    {
      ATerm m_23 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, h_23, i_23);
      t = o_6(h_23, i_23, t);
      t = term_d_23;
      m_23 = t;
      t = SSL_exit(m_23);
      return(t);
    }
    t = fork_and_wait_1_0(q_2, t);
  }
  t = i_23;
  return(t);
}
static ATerm a_7 (ATerm o_84 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
  s_23 = t;
  t = o_84(t);
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_23, e_35, c_35);
  t = l_7(n_23, e_35, c_35, t);
  {
    ATerm g_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_23 = NULL;
        t = term_k_23;
        x_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_23, term_k_23);
        t = k_7(n_23, x_23, t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = g_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_23 = ATgetFirst((ATermList) t);
      r_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_23, term_k_23, (ATerm) ATinsert(CheckATermList(r_23), (ATerm) ATinsert(CheckATermList(o_23), e_35)));
  t = lookup_table_0_1(n_23, t);
  w_23 = t;
  t = term_k_23;
  t_23 = t;
  t = (ATerm) ATinsert(CheckATermList(r_23), (ATerm) ATinsert(CheckATermList(o_23), e_35));
  u_23 = t;
  t = w_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(t_23, u_23, v_23, t);
  t = s_23;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm z_23 = NULL;
  ATerm l_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_24 = NULL,h_8 = NULL;
      f_24 = t;
      t = term_q_23;
      h_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_24, term_q_23);
      t = b_7(f_24, h_8, t);
      z_23 = t;
      t = SSL_mkstemp(z_23);
      LocalPopChoice(p_23);
    }
  else
    {
      t = l_23;
      {
        ATerm g_24 = NULL;
        t = term_y_23;
        g_24 = t;
        t = SSL_perror(g_24);
        _fail(t);
      }
    }
  return(t);
}
static ATerm b_7 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = SSL_strcat(l_32, m_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_a_24;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm i_24 = NULL,l_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
  t = P__tmpdir_0_0(t);
  o_24 = t;
  t = term_b_24;
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_24, term_b_24);
  t = b_7(o_24, p_24, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      l_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_j_9;
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_24, term_j_9);
  t = a_7(r_2, l_24, n_24, t);
  t = SSL_close(i_24);
  t = l_24;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,v_24 = NULL;
  s_24 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm w_24 = NULL,z_24 = NULL;
      t = s_24;
      t = xtc_new_file_0_0(t);
      w_24 = t;
      t = r_0(t);
      z_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_24, (ATerm) ATinsert(ATinsert(ATempty, w_24), term_k_8));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_24);
    }
  else
    {
      ATerm g_25 = NULL,h_25 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_24;
      t = xtc_new_file_0_0(t);
      g_25 = t;
      t = r_0(t);
      h_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_25), term_k_8), v_24), term_c_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_25);
    }
  return(t);
}
static ATerm d_7 (ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL;
  j_25 = t;
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = k_7(w_36, x_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_24 = ATgetFirst((ATermList) t);
            i_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(e_24);
        {
          ATerm o_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, i_25);
          t = lookup_table_0_1(w_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_7(x_36, i_25, o_25, t);
          t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, i_25);
        }
      }
    else
      {
        t = d_24;
        {
          ATerm t_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
          t = lookup_table_0_1(w_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_7(x_36, t_25, t);
          t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        }
      }
  }
  t = j_25;
  return(t);
}
ATerm end_scope_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
  z_25 = t;
  t = l_84(t);
  y_25 = t;
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_26 = NULL;
        t = term_k_23;
        d_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_25, term_k_23);
        t = k_7(y_25, d_26, t);
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_25 = ATgetFirst((ATermList) t);
      v_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_25, term_k_23, v_25);
  t = lookup_table_0_1(y_25, t);
  c_26 = t;
  t = term_k_23;
  a_26 = t;
  t = c_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(a_26, v_25, b_26, t);
  t = w_25;
  {
    static ATerm s_2 (ATerm t)
    {
      ATerm g_26 = NULL;
      g_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_25, g_26);
      t = d_7(y_25, g_26, t);
      return(t);
    }
    t = map_1_0(s_2, t);
  }
  t = z_25;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t)
{
  ATerm m_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_85(t);
      t = m_85(t);
      LocalPopChoice(q_24);
    }
  else
    {
      t = m_24;
      t = m_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_84 (ATerm), ATerm t)
{
  ATerm k_26 = NULL,m_26 = NULL,o_26 = NULL,p_26 = NULL,s_26 = NULL,t_26 = NULL,w_26 = NULL;
  m_26 = t;
  t = k_84(t);
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_26, term_k_23);
  {
    ATerm r_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_24 = ATgetArgument(t, 0);
            ATerm a_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_23;
        b_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_26, term_k_23);
        t = k_7(k_26, b_27, t);
        LocalPopChoice(t_24);
      }
    else
      {
        t = r_24;
        t = (ATerm) ATempty;
      }
  }
  o_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_26, term_k_23, (ATerm) ATinsert(CheckATermList(o_26), (ATerm) ATempty));
  t = lookup_table_0_1(k_26, t);
  w_26 = t;
  t = term_k_23;
  p_26 = t;
  t = (ATerm) ATinsert(CheckATermList(o_26), (ATerm) ATempty);
  s_26 = t;
  t = w_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(p_26, s_26, t_26, t);
  t = m_26;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_a_24;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm s_27 = NULL;
  s_27 = t;
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(s_27);
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
        t = s_27;
      }
  }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_a_24;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm f_27 = NULL;
  static ATerm w_2 (ATerm t)
  {
    ATerm g_27 = NULL;
    g_27 = t;
    {
      ATerm f_25 = t;
      int k_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_27 = NULL,k_27 = NULL;
          t = term_a_24;
          h_27 = t;
          t = term_k_23;
          k_27 = t;
          t = term_l_25;
          t = k_7(h_27, k_27, t);
          LocalPopChoice(k_25);
        }
      else
        {
          t = f_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_27 != NULL) && (f_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_27 = ATgetFirst((ATermList) t);
        {
          ATerm m_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = f_27;
    t = map_1_0(e_3, t);
    t = g_27;
    t = end_scope_1_0(g_3, t);
    return(t);
  }
  t = begin_scope_1_0(t_2, t);
  t = restore_always_2_0(y_87, w_2, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm n_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_28 = NULL,g_28 = NULL,i_28 = NULL;
      t = term_j_8;
      g_28 = t;
      t = term_c_24;
      i_28 = t;
      t = term_q_25;
      t = k_7(g_28, i_28, t);
      e_28 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_28);
      LocalPopChoice(p_25);
    }
  else
    {
      t = n_25;
      t = term_p_8;
    }
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_28 = NULL,s_28 = NULL;
        s_28 = t;
        if(match_cons(t, sym_FILE_1))
          {
            r_28 = ATgetArgument(t, 0);
            {
              ATerm t_8 = NULL,p_1 = NULL;
              t = SSLgetAnnotations(s_28);
              t_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_28);
              p_1 = t;
              t = SSLsetAnnotations(p_1, t_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_28;
          }
        LocalPopChoice(s_25);
        t = xtc_transform_file_2_0(l_3, m_3, t);
      }
    else
      {
        t = r_25;
        t = xtc_transform_term_2_0(r_3, t_3, t);
      }
  }
  t = xtc_abox2text_1_0(pass_width_0_0, t);
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_u_25;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL;
  t = term_j_8;
  v_28 = t;
  t = term_x_25;
  w_28 = t;
  t = term_e_26;
  t = k_7(v_28, w_28, t);
  t = map_1_0(o_3, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm x_28 = NULL;
  x_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_28), term_x_25);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_u_25;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL;
  t = term_j_8;
  z_28 = t;
  t = term_x_25;
  a_29 = t;
  t = term_e_26;
  t = k_7(z_28, a_29, t);
  t = map_1_0(x_3, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm g_29 = NULL;
  g_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_29), term_x_25);
  return(t);
}
ATerm ast2text_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(k_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,n_29 = NULL,o_29 = NULL;
  i_29 = t;
  t = term_j_9;
  t = whoami_0_0(t);
  j_29 = t;
  t = term_f_18;
  n_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_26), j_29), term_f_26);
  o_29 = t;
  t = SSL_printnl(n_29, o_29);
  t = term_d_9;
  k_29 = t;
  t = SSL_exit(k_29);
  t = i_29;
  return(t);
}
ATerm at_end_1_0 (ATerm j_74 (ATerm), ATerm t)
{
  static ATerm s_30 (ATerm t)
  {
    ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
    r_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_30 = ATgetFirst((ATermList) t);
        q_30 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_9 = NULL,m_9 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(r_30);
          h_9 = t;
          t = q_30;
          t = s_30(t);
          m_9 = t;
          t = (ATerm) ATinsert(CheckATermList(m_9), p_30);
          v_1 = t;
          t = SSLsetAnnotations(v_1, h_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_30;
        t = j_74(t);
      }
    return(t);
  }
  t = s_30(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
  q_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_29;
    }
  else
    {
      static ATerm y_3 (ATerm t)
      {
        t = not_null(s_29);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_29 = ATgetFirst((ATermList) t);
          if(((s_29 != NULL) && (s_29 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_29;
      t = at_end_1_0(y_3, t);
    }
  return(t);
}
static ATerm i_31 (ATerm w_30, ATerm t)
{
  ATerm y_30 = NULL;
  t = SSL_explode_term(w_30);
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_30;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  d_31 = t;
  if(match_cons(t, sym__2))
    {
      b_31 = ATgetArgument(t, 0);
      c_31 = ATgetArgument(t, 1);
      {
        ATerm j_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_4 (ATerm t)
            {
              t = c_31;
              return(t);
            }
            t = b_31;
            t = at_end_1_0(d_4, t);
            LocalPopChoice(l_26);
          }
        else
          {
            t = j_26;
            t = i_31(d_31, t);
          }
      }
    }
  else
    {
      t = i_31(d_31, t);
    }
  return(t);
}
static ATerm e_7 (ATerm c_41, ATerm b_41, ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,n_31 = NULL,o_31 = NULL;
  t = c_41;
  {
    ATerm n_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_31 = NULL;
        t = term_j_8;
        q_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_8, c_41);
        t = k_7(q_31, c_41, t);
        LocalPopChoice(q_26);
      }
    else
      {
        t = n_26;
        t = (ATerm) ATempty;
      }
  }
  k_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_41, k_31);
  t = conc_0_0(t);
  j_31 = t;
  t = term_j_8;
  n_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, c_41, j_31);
  t = lookup_table_0_1(n_31, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(c_41, j_31, o_31, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, c_41, j_31);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  t = term_x_25;
  s_31 = t;
  t = (ATerm) ATinsert(ATempty, r_31);
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_25, (ATerm) ATinsert(ATempty, r_31));
  t = e_7(s_31, t_31, t);
  t = r_31;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_r_26;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_4, g_4, j_4, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_32 = NULL,d_32 = NULL,e_32 = NULL;
      t = term_j_9;
      t = n_0(t);
      b_32 = t;
      t = term_u_26;
      d_32 = t;
      t = term_v_26;
      e_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_26, term_v_26, b_32);
      t = l_7(d_32, e_32, b_32, t);
      _fail(t);
    }
  else
    {
      ATerm i_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_31 = ATgetFirst((ATermList) t);
          y_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_31 = ATgetFirst((ATermList) t);
          a_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_31;
      t = k_0(t);
      t = z_31;
      t = l_0(t);
      i_32 = t;
      t = (ATerm) ATinsert(CheckATermList(a_32), i_32);
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm o_32 = NULL;
  o_32 = t;
  if(match_string(t, "-k"))
    {
      t = o_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_32;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,x_32 = NULL;
  p_32 = t;
  t = SSL_string_to_int(p_32);
  q_32 = t;
  t = term_x_26;
  x_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_26, q_32);
  t = n_7(x_32, q_32, t);
  t = p_32;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_y_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, m_4, n_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm b_33 = NULL;
  b_33 = t;
  if(match_string(t, "-S"))
    {
      t = b_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_33;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL;
  t = term_z_8;
  c_33 = t;
  t = term_z_26;
  d_33 = t;
  t = term_a_27;
  t = n_7(c_33, d_33, t);
  t = term_c_27;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_d_27;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
  e_33 = t;
  t = SSL_string_to_int(e_33);
  f_33 = t;
  t = term_z_8;
  g_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_8, f_33);
  t = n_7(g_33, f_33, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_33);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_e_27;
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
  ATerm k_33 = NULL,l_33 = NULL;
  t = term_i_27;
  k_33 = t;
  t = term_j_9;
  l_33 = t;
  t = term_j_27;
  t = n_7(k_33, l_33, t);
  t = term_l_27;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_m_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_4, u_4, x_4, t);
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      {
        ATerm p_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_4, a_5, c_5, t);
            LocalPopChoice(q_27);
          }
        else
          {
            t = p_27;
            t = Option_3_0(d_5, e_5, g_5, t);
          }
      }
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm n_33 = NULL;
  n_33 = t;
  if(match_string(t, "-o"))
    {
      t = n_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_33;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL;
  o_33 = t;
  t = term_k_8;
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_8, o_33);
  t = n_7(p_33, o_33, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_33);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_r_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_5, i_5, k_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm u_33 = NULL;
  u_33 = t;
  if(match_string(t, "-i"))
    {
      t = u_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_33;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL;
  z_33 = t;
  t = term_c_24;
  a_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_24, z_33);
  t = n_7(a_34, z_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_33);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_t_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, n_5, o_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm c_34 = NULL;
  c_34 = t;
  if(match_string(t, "-w"))
    {
      t = c_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = c_34;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL;
  d_34 = t;
  t = term_v_8;
  e_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_8, d_34);
  t = n_7(e_34, d_34, t);
  t = d_34;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_u_27;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      {
        ATerm x_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(y_27);
          }
        else
          {
            t = x_27;
            {
              ATerm z_27 = t;
              int a_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(a_28);
                }
              else
                {
                  t = z_27;
                  {
                    ATerm b_28 = t;
                    int c_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(c_28);
                      }
                    else
                      {
                        t = b_28;
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
  ATerm f_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_9;
  t = whoami_0_0(t);
  f_34 = t;
  t = term_f_18;
  i_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_28), f_34);
  j_34 = t;
  t = SSL_printnl(i_34, j_34);
  t = term_d_9;
  h_34 = t;
  t = SSL_exit(h_34);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL;
  t = term_j_8;
  k_34 = t;
  t = term_f_28;
  l_34 = t;
  t = term_h_28;
  t = k_7(k_34, l_34, t);
  return(t);
}
static ATerm f_7 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  p_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_34;
      t = g_81(t);
    }
  else
    {
      ATerm u_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_34 = ATgetFirst((ATermList) t);
          r_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_34;
      t = foldr_2_0(g_81, h_81, t);
      u_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_34, u_34);
      t = h_81(t);
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
  t = term_z_26;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm e_10 = NULL,k_10 = NULL;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(e_10, k_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_35 = NULL,x_9 = NULL,y_9 = NULL;
  t = times_0_0(t);
  y_9 = t;
  t = SSL_explode_term(y_9);
  if(match_cons(t, sym__2))
    {
      ATerm l_28 = ATgetArgument(t, 0);
      x_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_9;
  t = foldr_2_0(s_5, t_5, t);
  i_35 = t;
  t = SSL_TicksToSeconds(i_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,f_36 = NULL;
  b_36 = t;
  if(match_cons(t, sym__2))
    {
      c_36 = ATgetArgument(t, 0);
      f_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_36;
        if((c_36 != t))
          {
            _fail(t);
          }
        t = b_36;
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
        t = (ATerm) ATmakeAppl(sym__2, c_36, f_36);
        {
          ATerm o_28 = t;
          int p_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_36, f_36);
              LocalPopChoice(p_28);
            }
          else
            {
              t = o_28;
              t = SSL_gtr(c_36, f_36);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_36, f_36);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_100 (ATerm), ATerm t)
{
  ATerm l_36 = NULL;
  l_36 = t;
  {
    ATerm q_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_36 = NULL,y_36 = NULL,a_37 = NULL;
        t = term_j_8;
        y_36 = t;
        t = term_z_8;
        a_37 = t;
        t = term_c_9;
        t = k_7(y_36, a_37, t);
        u_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_36, term_d_9);
        t = geq_0_0(t);
        t = l_36;
        t = o_100(t);
        LocalPopChoice(t_28);
      }
    else
      {
        t = q_28;
        t = l_36;
      }
  }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm c_37 = NULL,h_37 = NULL,n_37 = NULL,t_37 = NULL;
  t = run_time_0_0(t);
  c_37 = t;
  t = term_j_9;
  t = whoami_0_0(t);
  h_37 = t;
  t = term_f_18;
  n_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_28), c_37), term_t_9), h_37);
  t_37 = t;
  t = SSL_printnl(n_37, t_37);
  t = (ATerm) ATmakeAppl(sym__2, term_f_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_28), c_37), term_t_9), h_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_26;
  w_37 = t;
  t = SSL_exit(w_37);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL;
  v_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          u_38 = ATgetArgument(t, 0);
          {
            ATerm d_11 = NULL,x_1 = NULL;
            t = SSLgetAnnotations(v_38);
            d_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, u_38);
            x_1 = t;
            t = SSLsetAnnotations(x_1, d_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm y_28 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_38 = NULL,j_38 = NULL;
      t = term_j_8;
      i_38 = t;
      t = term_c_29;
      j_38 = t;
      t = term_d_29;
      t = k_7(i_38, j_38, t);
      LocalPopChoice(b_29);
    }
  else
    {
      t = y_28;
      t = fetch_1_0(v_5, t);
    }
  t = u_89(t);
  return(t);
}
static ATerm o_7 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t)
{
  ATerm z_38 = NULL;
  t = SSL_hashtable_put(l_40, j_40, k_40);
  z_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_38);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_38, ATerm t)
{
  ATerm o_39 = NULL;
  t = table_hashtable_0_0(t);
  o_39 = t;
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_11 = NULL;
        t = o_39;
        if(match_cons(t, sym_Hashtable_1))
          {
            r_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_7(d_38, r_11, t);
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        {
          ATerm c_12 = NULL;
          t = d_38;
          t = table_create_0_0(t);
          t = o_39;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_7(d_38, c_12, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm r_39 = NULL;
  t = SSL_hashtable_create(r_40, s_40);
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_39);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,w_39 = NULL,x_39 = NULL;
  s_39 = t;
  t = term_h_29;
  w_39 = t;
  t = term_l_29;
  x_39 = t;
  t = s_39;
  t = new_hashtable_0_2(w_39, x_39, t);
  t_39 = t;
  t = s_39;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(s_39, t_39, u_39, t);
  t = s_39;
  return(t);
}
static ATerm h_7 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm y_39 = NULL;
  t = SSL_hashtable_remove(p_40, o_40);
  y_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_39);
  return(t);
}
static ATerm i_7 (ATerm t_40, ATerm t)
{
  ATerm z_39 = NULL;
  t = SSL_hashtable_destroy(t_40);
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_39);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm a_40 = NULL;
  t = SSL_table_hashtable();
  a_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_40);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL;
  b_40 = t;
  t = table_hashtable_0_0(t);
  c_40 = t;
  t = lookup_table_0_1(b_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(e_40, t);
  t = c_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_7(b_40, d_40, t);
  t = b_40;
  return(t);
}
ATerm map_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  static ATerm i_41 (ATerm t)
  {
    ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
    f_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_41;
      }
    else
      {
        ATerm j_12 = NULL,n_12 = NULL,o_12 = NULL,a_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_41 = ATgetFirst((ATermList) t);
            h_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_41);
        j_12 = t;
        t = g_41;
        t = s_73(t);
        n_12 = t;
        t = h_41;
        t = i_41(t);
        o_12 = t;
        t = (ATerm) ATinsert(CheckATermList(o_12), n_12);
        a_2 = t;
        t = SSLsetAnnotations(a_2, j_12);
      }
    return(t);
  }
  t = i_41(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_41 = ATgetFirst((ATermList) t);
      m_41 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_41 = NULL,r_41 = NULL;
        static ATerm w_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_41)), not_null(r_41));
          return(t);
        }
        t = m_41;
        t = i_0(t);
        if(((q_41 != NULL) && (q_41 != t)))
          _fail(t);
        else
          q_41 = t;
        t = l_41;
        t = g_0(t);
        if(((r_41 != NULL) && (r_41 != t)))
          _fail(t);
        else
          r_41 = t;
        t = m_41;
        t = reverse_acc_2_0(g_0, w_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_9;
      t = i_0(t);
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm y_41 = NULL,b_42 = NULL,c_42 = NULL,n_3 = NULL;
  c_42 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_42);
  y_41 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_42);
  n_3 = t;
  t = SSLsetAnnotations(n_3, y_41);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm e_42 = NULL;
  e_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_42), term_m_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_41 = NULL,v_41 = NULL;
  ATerm p_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_41 = NULL,x_41 = NULL;
      t = term_j_8;
      w_41 = t;
      t = term_f_28;
      x_41 = t;
      t = term_h_28;
      t = k_7(w_41, x_41, t);
      LocalPopChoice(t_29);
    }
  else
    {
      t = p_29;
      t = fetch_1_0(x_5, t);
    }
  t = term_u_29;
  t = echo_0_0(t);
  t = term_u_26;
  t_41 = t;
  t = term_v_26;
  v_41 = t;
  t = term_v_29;
  t = k_7(t_41, v_41, t);
  t = reverse_acc_2_0(_id, y_5, t);
  t = map_1_0(z_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_74 (ATerm), ATerm t)
{
  static ATerm o_43 (ATerm t)
  {
    ATerm f_43 = NULL,m_43 = NULL,n_43 = NULL;
    f_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_43 = ATgetFirst((ATermList) t);
        n_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_13 = NULL,g_13 = NULL,p_3 = NULL;
          t = SSLgetAnnotations(f_43);
          b_13 = t;
          t = m_43;
          t = c_74(t);
          g_13 = t;
          t = (ATerm) ATinsert(CheckATermList(n_43), g_13);
          p_3 = t;
          t = SSLsetAnnotations(p_3, b_13);
          LocalPopChoice(x_29);
        }
      else
        {
          t = w_29;
          {
            ATerm t_13 = NULL,a_14 = NULL,q_3 = NULL;
            t = SSLgetAnnotations(f_43);
            t_13 = t;
            t = n_43;
            t = o_43(t);
            a_14 = t;
            t = (ATerm) ATinsert(CheckATermList(a_14), m_43);
            q_3 = t;
            t = SSLsetAnnotations(q_3, t_13);
          }
        }
    }
    return(t);
  }
  t = o_43(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,w_43 = NULL;
  s_43 = t;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_43;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_30 = ATgetFirst((ATermList) t);
                ATerm b_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_43;
          }
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        t = (ATerm) ATinsert(ATempty, s_43);
      }
  }
  t_43 = t;
  t = term_m_8;
  w_43 = t;
  t = SSL_printnl(w_43, t_43);
  t = s_43;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL;
  t = term_j_8;
  b_44 = t;
  t = term_f_28;
  c_44 = t;
  t = term_h_28;
  t = k_7(b_44, c_44, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_7 (ATerm m_40, ATerm n_40, ATerm t)
{
  t = SSL_hashtable_get(n_40, m_40);
  return(t);
}
static ATerm k_7 (ATerm k_38, ATerm l_38, ATerm t)
{
  ATerm e_44 = NULL;
  t = lookup_table_0_1(k_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(l_38, e_44, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL;
  t = term_c_30;
  g_44 = t;
  t = term_j_9;
  h_44 = t;
  t = term_d_30;
  t = n_7(g_44, h_44, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_e_30;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL;
  t = term_c_30;
  k_44 = t;
  t = term_j_9;
  l_44 = t;
  t = term_d_30;
  t = n_7(k_44, l_44, t);
  t = term_f_30;
  i_44 = t;
  t = term_j_9;
  j_44 = t;
  t = term_g_30;
  t = n_7(i_44, j_44, t);
  t = term_h_30;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_6, f_6, g_6, t);
      LocalPopChoice(k_30);
    }
  else
    {
      t = j_30;
      t = Option_3_0(h_6, i_6, k_6, t);
    }
  return(t);
}
static ATerm n_7 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL;
  t = term_j_8;
  m_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, w_40, x_40);
  t = lookup_table_0_1(m_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(w_40, x_40, n_44, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, w_40, x_40);
  return(t);
}
static ATerm l_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL;
  q_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_30 = ATgetArgument(t, 0);
            ATerm o_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = k_7(r_36, s_36, t);
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
        t = (ATerm) ATempty;
      }
  }
  r_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_36, s_36, (ATerm) ATinsert(CheckATermList(r_44), q_36));
  t = lookup_table_0_1(r_36, t);
  u_44 = t;
  t = (ATerm) ATinsert(CheckATermList(r_44), q_36);
  s_44 = t;
  t = u_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(s_36, s_44, t_44, t);
  t = q_44;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
      t = term_j_9;
      t = e_0(t);
      h_45 = t;
      t = term_u_26;
      i_45 = t;
      t = term_v_26;
      j_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_26, term_v_26, h_45);
      t = l_7(i_45, j_45, h_45, t);
      _fail(t);
    }
  else
    {
      ATerm m_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_45 = ATgetFirst((ATermList) t);
          g_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_45;
      t = c_0(t);
      t = term_j_9;
      t = d_0(t);
      m_45 = t;
      t = (ATerm) ATinsert(CheckATermList(g_45), m_45);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_60 (ATerm), ATerm s_60 (ATerm), ATerm t)
{
  ATerm n_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,f_5 = NULL;
  t_45 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_45 = ATgetFirst((ATermList) t);
      q_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_45);
  n_45 = t;
  t = p_45;
  t = r_60(t);
  r_45 = t;
  t = q_45;
  t = s_60(t);
  s_45 = t;
  t = (ATerm) ATinsert(CheckATermList(s_45), r_45);
  f_5 = t;
  t = SSLsetAnnotations(f_5, n_45);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_91 (ATerm), ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,d_46 = NULL,e_46 = NULL,j_5 = NULL;
  y_45 = t;
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_30;
        t = s_91(t);
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
      }
  }
  t = y_45;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_46 = ATgetFirst((ATermList) t);
      b_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_45);
  z_45 = t;
  t = term_f_28;
  e_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_28, a_46);
  t = n_7(e_46, a_46, t);
  t = b_46;
  {
    static ATerm o_46 (ATerm t)
    {
      ATerm x_30 = t;
      int z_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_31 = t;
          int e_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_46 = NULL;
              h_46 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_46;
              LocalPopChoice(e_31);
            }
          else
            {
              t = a_31;
              t = s_91(t);
              t = Cons_2_0(_id, o_46, t);
            }
          LocalPopChoice(z_30);
        }
      else
        {
          t = x_30;
          {
            ATerm k_46 = NULL,l_46 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_46 = ATgetFirst((ATermList) t);
                l_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_46), (ATerm) ATmakeAppl(sym_Undefined_1, k_46));
          }
        }
      return(t);
    }
    t = o_46(t);
  }
  d_46 = t;
  t = (ATerm) ATinsert(CheckATermList(d_46), (ATerm) ATmakeAppl(sym_Program_1, a_46));
  j_5 = t;
  t = SSLsetAnnotations(j_5, z_45);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm b_47 = NULL;
  b_47 = t;
  if(match_string(t, "--help"))
    {
      t = b_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_47;
        }
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL;
  t = term_c_29;
  c_47 = t;
  t = term_j_9;
  d_47 = t;
  t = term_f_31;
  t = n_7(c_47, d_47, t);
  t = term_g_31;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_h_31;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL;
  v_46 = t;
  t = term_u_26;
  w_46 = t;
  t = term_l_31;
  t = lookup_table_0_1(w_46, t);
  a_47 = t;
  t = term_v_26;
  x_46 = t;
  t = (ATerm) ATempty;
  y_46 = t;
  t = a_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(x_46, y_46, z_46, t);
  t = v_46;
  {
    static ATerm p_6 (ATerm t)
    {
      ATerm m_31 = t;
      int p_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_91(t);
          LocalPopChoice(p_31);
        }
      else
        {
          t = m_31;
          {
            ATerm u_31 = t;
            int v_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_7, q_7, t_7, t);
                LocalPopChoice(v_31);
              }
            else
              {
                t = u_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_6, t);
  }
  {
    ATerm w_31 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_47 = NULL;
        o_47 = t;
        {
          ATerm f_32 = t;
          int g_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_14 = NULL;
              t = o_47;
              {
                ATerm h_32 = t;
                int j_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_15 = NULL,c_15 = NULL;
                    t = term_j_8;
                    b_15 = t;
                    t = term_c_29;
                    c_15 = t;
                    t = term_d_29;
                    t = k_7(b_15, c_15, t);
                    LocalPopChoice(j_32);
                  }
                else
                  {
                    t = h_32;
                    t = fetch_1_0(v_7, t);
                  }
              }
              t = o_47;
              t = default_system_usage_0_0(t);
              t = term_z_26;
              w_14 = t;
              t = SSL_exit(w_14);
              LocalPopChoice(g_32);
            }
          else
            {
              t = f_32;
              {
                ATerm m_15 = NULL,t_15 = NULL,u_15 = NULL;
                t = term_j_8;
                t_15 = t;
                t = term_c_30;
                u_15 = t;
                t = term_k_32;
                t = k_7(t_15, u_15, t);
                t = o_47;
                t = default_system_about_0_0(t);
                t = term_z_26;
                m_15 = t;
                t = SSL_exit(m_15);
              }
            }
        }
        LocalPopChoice(c_32);
      }
    else
      {
        t = w_31;
        {
          ATerm n_32 = t;
          int r_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
              static ATerm w_7 (ATerm t)
              {
                ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,l_5 = NULL;
                u_47 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_47 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_47);
                s_47 = t;
                t = t_47;
                if(((t_46 != NULL) && (t_46 != t)))
                  _fail(t);
                else
                  t_46 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_47);
                l_5 = t;
                t = SSLsetAnnotations(l_5, s_47);
                return(t);
              }
              t = fetch_1_0(w_7, t);
              t = term_f_18;
              q_47 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_46)), term_s_32);
              r_47 = t;
              t = SSL_printnl(q_47, r_47);
              t = (ATerm) ATmakeAppl(sym__2, term_f_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_46)), term_s_32));
              t = default_system_usage_0_0(t);
              t = term_d_9;
              p_47 = t;
              t = SSL_exit(p_47);
              LocalPopChoice(r_32);
            }
          else
            {
              t = n_32;
            }
        }
      }
  }
  u_46 = t;
  t = term_u_26;
  t = table_destroy_0_0(t);
  t = u_46;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL;
  t = parse_options_1_0(w_89, t);
  z_47 = t;
  t = term_t_32;
  t = table_create_0_0(t);
  t = term_t_32;
  a_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_32, term_u_32, z_47);
  t = lookup_table_0_1(a_48, t);
  d_48 = t;
  t = term_u_32;
  b_48 = t;
  t = d_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(b_48, z_47, c_48, t);
  t = z_47;
  t = y_89(t);
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_89, t);
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        {
          ATerm y_32 = t;
          int z_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_89(t);
              t = report_success_0_0(t);
              LocalPopChoice(z_32);
            }
          else
            {
              t = y_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm a_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_options_0_0(t);
      LocalPopChoice(h_33);
    }
  else
    {
      t = a_33;
      t = pp_options_0_0(t);
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(x_7, default_usage_0_0, _id, ast2text_0_0, t);
  return(t);
}
