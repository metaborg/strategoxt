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
ATerm term_z_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_e_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_t_32;
ATerm term_e_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_s_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_g_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_h_30;
ATerm term_e_30;
ATerm term_a_30;
ATerm term_v_29;
ATerm term_r_29;
ATerm term_k_29;
ATerm term_v_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_e_28;
ATerm term_v_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_i_27;
ATerm term_c_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_r_26;
ATerm term_p_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_a_26;
ATerm term_x_25;
ATerm term_m_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_w_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_j_23;
ATerm term_a_23;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_e_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_i_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_v_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_y_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_v_14;
ATerm term_s_14;
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
ATerm term_u_13;
ATerm term_t_13;
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
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_d_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_v_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_n_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_p_8);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_z_8);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_d_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_j_9, term_u_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_x_10, term_a_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_f_11, term_j_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_o_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_11, term_s_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_11, term_w_11, term_x_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_a_12, term_b_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_f_12, term_g_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_m_12, term_q_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_v_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_z_12);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_13, term_g_13, term_i_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_y_13, term_z_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_e_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_14, term_h_14, term_i_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_q_14, term_s_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_h_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_q_15, term_r_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_e_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_k_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_q_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_x_16, term_y_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_r_17, term_s_17);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_z_21);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_k_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_i_21);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_j_24);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym__2, term_f_24, term_w_23);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym__2, term_d_9, term_i_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_26);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__2, term_r_26, term_r_9);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_t_28);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_r_29);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_i_27);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_c_31, term_r_9);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym__2, term_i_31, term_r_9);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__2, term_r_29, term_r_9);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__3, term_c_27, term_i_27, (ATerm) ATempty);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_c_31);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym__2, term_r_34, term_r_9);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_h_24);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm f_7 (ATerm t_14, ATerm u_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm pass_width_0_0 (ATerm t);
static ATerm n_6 (ATerm b_34, ATerm c_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_abox2text_1_0 (ATerm s_101 (ATerm), ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm o_6 (ATerm t_17, ATerm u_17, ATerm t);
static ATerm p_6 (ATerm f_79 (ATerm), ATerm b_182, ATerm d_18, ATerm t);
static ATerm n_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm t);
static ATerm q_6 (ATerm l_14, ATerm m_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm i_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm u_77 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm d_79 (ATerm), ATerm t);
static ATerm s_6 (ATerm m_50, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm f_112 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm e_112 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm g_112 (ATerm), ATerm t);
static ATerm u_6 (ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t);
static ATerm v_6 (ATerm h_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm w_6 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t);
static ATerm x_6 (ATerm o_98 (ATerm), ATerm u_46, ATerm t_46, ATerm t);
static ATerm b_7 (ATerm v_51, ATerm w_51, ATerm t);
static ATerm r_14 (ATerm j_14, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_6 (ATerm z_17, ATerm t);
static ATerm z_6 (ATerm e_52, ATerm f_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_16 (ATerm f_15, ATerm t);
static ATerm u_16 (ATerm j_15, ATerm k_15, ATerm l_15, ATerm t);
static ATerm w_16 (ATerm w_15, ATerm x_15, ATerm y_15, ATerm t);
static ATerm a_7 (ATerm t);
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
ATerm filter_1_0 (ATerm o_92 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm t);
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
ATerm xtc_command_1_0 (ATerm k_101 (ATerm), ATerm t);
static ATerm c_7 (ATerm u_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm d_7 (ATerm q_32, ATerm r_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm ast2text_0_0 (ATerm t);
static ATerm m_7 (ATerm g_47, ATerm h_47, ATerm t);
static ATerm g_7 (ATerm s_45, ATerm t_45, ATerm t);
ATerm end_scope_1_0 (ATerm r_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm q_94 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm w_100 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_7 (ATerm s_50, ATerm t_50, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm n_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_33 (ATerm j_32, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm e_7 (ATerm y_50, ATerm x_50, ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
static ATerm n_7 (ATerm n_45, ATerm o_45, ATerm m_45, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_7 (ATerm v_33, ATerm w_33, ATerm t);
ATerm foldr_2_0 (ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_112 (ATerm), ATerm t);
static ATerm t_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm need_help_1_0 (ATerm r_102 (ATerm), ATerm t);
static ATerm q_7 (ATerm f_50, ATerm g_50, ATerm h_50, ATerm t);
static ATerm r_7 (ATerm i_50, ATerm j_50, ATerm t);
ATerm lookup_table_0_1 (ATerm z_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm n_50, ATerm o_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_7 (ATerm k_50, ATerm l_50, ATerm t);
static ATerm k_7 (ATerm p_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm w_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_104 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm parse_options_1_0 (ATerm o_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
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
    ATerm f_8 = t;
    int g_8 = stack_ptr;
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
        t = f_7(k_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        {
          ATerm h_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_1 = NULL;
              t = i_1;
              t = q_0(t);
              c_1 = t;
              {
                ATerm k_8 = t;
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
                    t = k_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, k_1, c_1);
              t = f_7(k_1, c_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
              LocalPopChoice(i_8);
            }
          else
            {
              t = h_8;
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
static ATerm f_7 (ATerm t_14, ATerm u_14, ATerm t)
{
  t = SSL_copy(t_14, u_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 = NULL,v_2 = NULL;
      t = term_n_8;
      r_2 = t;
      t = term_p_8;
      v_2 = t;
      t = term_q_8;
      t = m_7(r_2, v_2, t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      t = term_r_8;
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
      t = term_p_8;
      {
        ATerm t_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 = NULL,s_1 = NULL;
            t = term_n_8;
            r_1 = t;
            t = term_p_8;
            s_1 = t;
            t = term_q_8;
            t = m_7(r_1, s_1, t);
            LocalPopChoice(u_8);
          }
        else
          {
            t = t_8;
            t = term_r_8;
          }
      }
      o_1 = t;
      t = term_v_8;
      p_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_v_8, o_1);
      t = f_7(p_1, o_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm w_8 = ATgetArgument(t, 0);
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
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 = NULL,y_2 = NULL;
      t = term_n_8;
      x_2 = t;
      t = term_z_8;
      y_2 = t;
      t = term_a_9;
      t = m_7(x_2, y_2, t);
      LocalPopChoice(y_8);
      {
        ATerm z_2 = NULL;
        z_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, z_2), term_z_8);
      }
    }
  else
    {
      t = x_8;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm n_6 (ATerm b_34, ATerm c_34, ATerm t)
{
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(b_34, c_34);
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      t = SSL_subtr(b_34, c_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
  t = term_d_9;
  {
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_3 = NULL,f_3 = NULL;
        t = term_n_8;
        e_3 = t;
        t = term_d_9;
        f_3 = t;
        t = term_g_9;
        t = m_7(e_3, f_3, t);
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        t = term_j_9;
      }
  }
  b_3 = t;
  t = term_j_9;
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_3, term_j_9);
  t = n_6(b_3, d_3, t);
  c_3 = t;
  t = SSL_int_to_string(c_3);
  a_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_3), term_d_9);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_l_9;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm xtc_abox2text_1_0 (ATerm s_101 (ATerm), ATerm t)
{
  ATerm m_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_3 = NULL,r_3 = NULL;
      r_3 = t;
      if(match_cons(t, sym_FILE_1))
        {
          p_3 = ATgetArgument(t, 0);
          {
            ATerm c_2 = NULL,k_0 = NULL;
            t = SSLgetAnnotations(r_3);
            c_2 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, p_3);
            k_0 = t;
            t = SSLsetAnnotations(k_0, c_2);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_3;
        }
      LocalPopChoice(q_9);
      {
        static ATerm c_0 (ATerm t);
        static ATerm c_0 (ATerm t)
        {
          ATerm t_3 = NULL,x_3 = NULL,a_4 = NULL;
          t = term_r_9;
          t = s_101(t);
          a_4 = t;
          t = SSL_int_to_string(a_4);
          t_3 = t;
          t = term_r_9;
          t = pass_verbose_0_0(t);
          x_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, t_3), term_z_8), x_3);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(b_0, c_0, t);
      }
    }
  else
    {
      t = m_9;
      {
        static ATerm i_0 (ATerm t);
        static ATerm i_0 (ATerm t)
        {
          ATerm c_4 = NULL,d_4 = NULL,g_4 = NULL;
          t = term_r_9;
          t = s_101(t);
          g_4 = t;
          t = SSL_int_to_string(g_4);
          c_4 = t;
          t = term_r_9;
          t = pass_verbose_0_0(t);
          d_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, c_4), term_z_8), d_4);
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
      t = term_v_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm n_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_u_9);
      n_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_4, (ATerm) ATinsert(ATempty, term_u_9));
      t = b_7(k_4, n_4, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm o_6 (ATerm t_17, ATerm u_17, ATerm t)
{
  ATerm p_4 = NULL;
  t = SSL_write_term_to_stream_baf(t_17, u_17);
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_4);
  return(t);
}
static ATerm p_6 (ATerm f_79 (ATerm), ATerm b_182, ATerm d_18, ATerm t)
{
  ATerm q_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_182, term_v_9);
  t = a_7(t);
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_4, d_18);
  t = f_79(t);
  t = fclose_0_0(t);
  t = d_18;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm t_4 = NULL,y_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_10 = ATgetArgument(t, 0);
      if(match_cons(b_10, sym_Stream_1))
        {
          t_4 = ATgetArgument(b_10, 0);
        }
      else
        _fail(t);
      y_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(t_4, y_4, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL;
  s_4 = t;
  t = xtc_new_file_0_0(t);
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_4, s_4);
  t = p_6(n_0, r_4, s_4, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_4);
  t = xtc_transform_file_2_0(j_100, k_100, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm q_6 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_execvp(l_14, m_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm z_5 = NULL,e_6 = NULL,f_6 = NULL,t_6 = NULL;
  z_5 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      e_6 = ATgetArgument(t, 0);
      {
        ATerm k_2 = NULL,l_2 = NULL;
        t = SSL_int_to_string(e_6);
        k_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_10), k_2), term_c_10);
        l_2 = t;
        t = SSL_concat_strings(l_2);
      }
    }
  else
    {
      ATerm i_3 = NULL,k_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          e_6 = ATgetArgument(t, 0);
          f_6 = ATgetArgument(t, 1);
          t_6 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(f_6);
      i_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_6), term_m_10), i_3), term_k_10), e_6);
      k_3 = t;
      t = SSL_concat_strings(k_3);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  ATerm o_7 = NULL;
  static ATerm s_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    t = i_84(t);
    if(((o_7 != NULL) && (o_7 != t)))
      _fail(t);
    else
      o_7 = t;
    return(t);
  }
  t = fetch_1_0(s_0, t);
  t = not_null(o_7);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm s_7 = NULL;
  s_7 = t;
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_0 (ATerm t);
        static ATerm u_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm q_10 = ATgetArgument(t, 0);
              if((s_7 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm s_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_17), term_o_17), term_k_17), term_e_17), term_z_16), term_r_16), term_m_16), term_g_16), term_t_15), term_i_15), term_v_14), term_k_14), term_f_14), term_b_14), term_t_13), term_o_13), term_k_13), term_a_13), term_w_12), term_r_12), term_i_12), term_c_12), term_y_11), term_u_11), term_p_11), term_k_11), term_b_11), term_v_10);
        t = fetch_elem_1_0(u_0, t);
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, s_7);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm a_8 = NULL,s_8 = NULL;
  a_8 = t;
  {
    ATerm a_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_18 = ATgetArgument(t, 0);
            s_8 = ATgetArgument(t, 1);
            {
              ATerm j_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_18);
        {
          ATerm k_18 = t;
          int l_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_3 = NULL,f_4 = NULL,i_4 = NULL;
              t = s_8;
              {
                ATerm m_18 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_18;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              y_3 = t;
              t = term_v_18;
              f_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, y_3), term_w_18);
              i_4 = t;
              t = SSL_printnl(f_4, i_4);
              t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(ATinsert(ATempty, y_3), term_w_18));
              LocalPopChoice(l_18);
            }
          else
            {
              t = k_18;
              t = a_8;
            }
        }
      }
    else
      {
        t = a_18;
        t = a_8;
      }
  }
  t = a_8;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm u_77 (ATerm), ATerm t)
{
  ATerm h_9 = NULL,k_9 = NULL;
  k_9 = t;
  t = fork_0_0(t);
  h_9 = t;
  {
    ATerm a_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_9;
        t = u_77(t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = a_19;
        t = SSL_waitpid(h_9);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm f_19 = ATgetArgument(t, 0);
            if(((ATgetType(f_19) != AT_INT) || (ATgetInt((ATermInt) f_19) != 0)))
              _fail(t);
            {
              ATerm g_19 = ATgetArgument(t, 1);
            }
            {
              ATerm h_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = k_9;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,s_9 = NULL,t_9 = NULL;
  o_9 = t;
  t = d_79(t);
  p_9 = t;
  t = term_v_18;
  s_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_9), p_9);
  t_9 = t;
  t = SSL_printnl(s_9, t_9);
  t = o_9;
  return(t);
}
static ATerm s_6 (ATerm m_50, ATerm t)
{
  t = SSL_hashtable_keys(m_50);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL;
  static ATerm v_0 (ATerm t);
  static ATerm v_0 (ATerm t)
  {
    ATerm y_9 = NULL,d_10 = NULL;
    y_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), y_9);
    t = m_7(not_null(w_9), y_9, t);
    d_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_9, d_10);
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
  t = s_6(x_9, t);
  t = map_1_0(v_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm f_112 (ATerm), ATerm t)
{
  ATerm f_10 = NULL;
  f_10 = t;
  {
    ATerm j_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
        t = term_n_8;
        i_10 = t;
        t = term_d_9;
        j_10 = t;
        t = term_g_9;
        t = m_7(i_10, j_10, t);
        h_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_10, term_c_17);
        t = geq_0_0(t);
        t = f_10;
        t = f_112(t);
        LocalPopChoice(n_19);
      }
    else
      {
        t = j_19;
        t = f_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm e_112 (ATerm), ATerm t)
{
  ATerm p_10 = NULL;
  p_10 = t;
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_10 = NULL,y_10 = NULL,z_10 = NULL;
        t = term_n_8;
        y_10 = t;
        t = term_d_9;
        z_10 = t;
        t = term_g_9;
        t = m_7(y_10, z_10, t);
        r_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_10, term_g_13);
        t = geq_0_0(t);
        t = p_10;
        t = e_112(t);
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        t = p_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm g_112 (ATerm), ATerm t)
{
  ATerm c_11 = NULL;
  c_11 = t;
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
        t = term_n_8;
        h_11 = t;
        t = term_d_9;
        i_11 = t;
        t = term_g_9;
        t = m_7(h_11, i_11, t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, term_n_11);
        t = geq_0_0(t);
        t = c_11;
        t = g_112(t);
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = c_11;
      }
  }
  return(t);
}
static ATerm u_6 (ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  t = l_88(t);
  {
    static ATerm x_0 (ATerm t);
    static ATerm x_0 (ATerm t)
    {
      ATerm l_11 = NULL;
      l_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_25, l_11);
      t = k_88(t);
      return(t);
    }
    t = fetch_1_0(x_0, t);
  }
  t = g_25;
  return(t);
}
static ATerm v_6 (ATerm h_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  static ATerm s_12 (ATerm t);
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
          ATerm v_19 = t;
          int w_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_12;
              {
                static ATerm a_1 (ATerm t);
                static ATerm a_1 (ATerm t)
                {
                  t = c_25;
                  return(t);
                }
                t = u_6(h_88, a_1, j_12, n_12, t);
              }
              t = s_12(t);
              LocalPopChoice(w_19);
            }
          else
            {
              t = v_19;
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
  ATerm s_13 = NULL;
  if(match_cons(t, sym__2))
    {
      s_13 = ATgetArgument(t, 0);
      if((s_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,j_13 = NULL;
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_46, l_46);
  {
    ATerm y_19 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_20 = ATgetArgument(t, 0);
            ATerm d_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_46, l_46);
        t = m_7(k_46, l_46, t);
        LocalPopChoice(b_20);
      }
    else
      {
        t = y_19;
        t = (ATerm) ATempty;
      }
  }
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_13, m_46);
  t = v_6(b_1, d_13, m_46, t);
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_46, l_46, c_13);
  t = lookup_table_0_1(k_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(l_46, c_13, j_13, t);
  t = b_13;
  return(t);
}
static ATerm x_6 (ATerm o_98 (ATerm), ATerm u_46, ATerm t_46, ATerm t)
{
  static ATerm d_1 (ATerm t);
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
    t = (ATerm) ATmakeAppl(sym__3, u_46, v_13, w_13);
    t = o_98(t);
    return(t);
  }
  t = t_46;
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm b_7 (ATerm v_51, ATerm w_51, ATerm t)
{
  t = SSL_access(v_51, w_51);
  return(t);
}
static ATerm r_14 (ATerm j_14, ATerm t)
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
        ATerm e_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_14);
            LocalPopChoice(f_20);
          }
        else
          {
            t = e_20;
            t = r_14(p_14, t);
          }
      }
    }
  else
    {
      t = r_14(p_14, t);
    }
  return(t);
}
static ATerm y_6 (ATerm z_17, ATerm t)
{
  t = SSL_read_term_from_stream(z_17);
  return(t);
}
static ATerm z_6 (ATerm e_52, ATerm f_52, ATerm t)
{
  ATerm w_14 = NULL;
  t = SSL_fopen(e_52, f_52);
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
      ATerm g_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_20 = ATgetArgument(t, 1);
        if(((ATgetType(h_20) == AT_LIST) && !(ATisEmpty(h_20))))
          {
            g_15 = ATgetFirst((ATermList) h_20);
            {
              ATerm i_20 = (ATerm) ATgetNext((ATermList) h_20);
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
static ATerm u_16 (ATerm j_15, ATerm k_15, ATerm l_15, ATerm t)
{
  ATerm m_15 = NULL,o_15 = NULL,p_15 = NULL,s_15 = NULL,y_0 = NULL;
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
      m_15 = ATgetArgument(t, 0);
      o_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(m_15, o_15, t);
  return(t);
}
static ATerm w_16 (ATerm w_15, ATerm x_15, ATerm y_15, ATerm t)
{
  ATerm z_15 = NULL,c_16 = NULL,d_16 = NULL,j_16 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(y_15);
  d_16 = t;
  t = SSL_is_string(w_15);
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_16, x_15);
  z_0 = t;
  t = SSLsetAnnotations(z_0, d_16);
  if(match_cons(t, sym__2))
    {
      z_15 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(z_15, c_16, t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm l_16 = NULL,p_16 = NULL,s_16 = NULL;
  l_16 = t;
  if(match_cons(t, sym__2))
    {
      p_16 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_16(l_16, t);
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            {
              ATerm l_20 = t;
              int m_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_16(p_16, s_16, l_16, t);
                  LocalPopChoice(m_20);
                }
              else
                {
                  t = l_20;
                  t = w_16(p_16, s_16, l_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_16(l_16, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_17 = NULL,f_17 = NULL,g_17 = NULL,q_17 = NULL;
  q_17 = t;
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_17, term_p_20);
        t = a_7(t);
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        {
          ATerm c_6 = NULL,d_6 = NULL;
          t = term_q_20;
          d_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_20, q_17);
          t = d_7(d_6, q_17, t);
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
  t = y_6(g_17, t);
  a_17 = t;
  t = f_17;
  t = fclose_0_0(t);
  t = a_17;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_r_20;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_s_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_17 = NULL,w_17 = NULL;
      v_17 = t;
      t = (ATerm) ATinsert(ATempty, term_v_20);
      w_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_17, (ATerm) ATinsert(ATempty, term_v_20));
      t = b_7(v_17, w_17, t);
      LocalPopChoice(u_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = t_20;
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_20 = t;
            if((PushChoice() == 0))
              {
                ATerm x_17 = NULL,b_18 = NULL;
                x_17 = t;
                t = (ATerm) ATinsert(ATempty, term_u_9);
                b_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_17, (ATerm) ATinsert(ATempty, term_u_9));
                t = b_7(x_17, b_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_20;
              }
            t = debug_1_0(g_1, t);
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
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
  t = term_z_20;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,i_19 = NULL;
  c_19 = t;
  t = term_v_18;
  d_19 = t;
  t = (ATerm) ATinsert(ATempty, term_b_21);
  i_19 = t;
  t = SSL_printnl(d_19, i_19);
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
  t = w_6(k_19, l_19, m_19, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  t = term_v_18;
  t_19 = t;
  t = (ATerm) ATinsert(ATempty, term_c_21);
  u_19 = t;
  t = SSL_printnl(t_19, u_19);
  t = s_19;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm x_19 = NULL,z_19 = NULL,a_20 = NULL;
  x_19 = t;
  t = term_v_18;
  z_19 = t;
  t = (ATerm) ATinsert(ATempty, term_b_21);
  a_20 = t;
  t = SSL_printnl(z_19, a_20);
  t = x_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,h_18 = NULL,i_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,x_18 = NULL,y_18 = NULL;
  e_18 = t;
  t = if_verbose5_1_0(j_1, t);
  {
    ATerm d_21 = t;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL,b_19 = NULL;
        t = term_e_21;
        z_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, e_18);
        b_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Imported_1, e_18));
        t = m_7(z_18, b_19, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_21;
      }
  }
  h_18 = t;
  t = term_e_21;
  s_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_21, term_i_21, (ATerm) ATinsert(ATempty, e_18));
  t = lookup_table_0_1(s_18, t);
  y_18 = t;
  t = term_i_21;
  t_18 = t;
  t = (ATerm) ATinsert(ATempty, e_18);
  u_18 = t;
  t = y_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(t_18, u_18, x_18, t);
  t = h_18;
  t = if_verbose4_1_0(n_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(t_1, t);
  f_18 = t;
  t = term_e_21;
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_21, f_18);
  t = x_6(u_1, r_18, f_18, t);
  t = if_verbose6_1_0(w_1, t);
  t = term_e_21;
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_21, (ATerm)ATmakeAppl(sym_Imported_1, e_18), (ATerm) ATempty);
  t = lookup_table_0_1(i_18, t);
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
  t = q_7(n_18, o_18, p_18, t);
  t = (ATerm) ATmakeAppl(sym__3, term_e_21, (ATerm)ATmakeAppl(sym_Imported_1, e_18), (ATerm) ATempty);
  t = if_verbose4_1_0(y_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm o_92 (ATerm), ATerm t)
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
        ATerm j_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_6 = NULL,r_6 = NULL,t_7 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(f_21);
            k_6 = t;
            t = g_21;
            t = o_92(t);
            r_6 = t;
            t = h_21;
            t = filter_1_0(o_92, t);
            t_7 = t;
            t = (ATerm) ATinsert(CheckATermList(t_7), r_6);
            e_1 = t;
            t = SSLsetAnnotations(e_1, k_6);
            LocalPopChoice(k_21);
          }
        else
          {
            t = j_21;
            t = h_21;
            t = filter_1_0(o_92, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm t)
{
  static ATerm m_21 (ATerm t);
  static ATerm m_21 (ATerm t)
  {
    ATerm l_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_82(t);
        t = m_21(t);
        LocalPopChoice(q_21);
      }
    else
      {
        t = l_21;
        t = b_82(t);
      }
    return(t);
  }
  t = m_21(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_21 = NULL,o_21 = NULL;
      t = term_n_8;
      n_21 = t;
      t = term_z_21;
      o_21 = t;
      t = term_a_22;
      t = m_7(n_21, o_21, t);
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      {
        ATerm b_22 = t;
        int d_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_21 = NULL;
            t = term_e_22;
            p_21 = t;
            t = SSL_getenv(p_21);
            LocalPopChoice(d_22);
          }
        else
          {
            t = b_22;
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
  t = term_j_22;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  t = term_e_21;
  v_21 = t;
  t = term_k_22;
  w_21 = t;
  t = term_l_22;
  t = m_7(v_21, w_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm m_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_22;
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
  t = term_p_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_21 = NULL;
  t = if_verbose5_1_0(a_2, t);
  r_21 = t;
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_21 = NULL,t_21 = NULL;
        t = term_e_21;
        s_21 = t;
        t = term_i_21;
        t_21 = t;
        t = term_s_22;
        t = m_7(s_21, t_21, t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
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
  t = term_v_22;
  return(t);
}
static ATerm e_23 (ATerm c_22, ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
  t = term_e_21;
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, c_22);
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Tool_1, c_22));
  t = m_7(g_22, h_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_22 = ATgetFirst((ATermList) t);
      if(match_cons(x_22, sym__2))
        {
          ATerm z_22 = ATgetArgument(x_22, 0);
          f_22 = ATgetArgument(x_22, 1);
        }
      else
        _fail(t);
      {
        ATerm y_22 = (ATerm) ATgetNext((ATermList) t);
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
  t = term_v_22;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_e_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_22 = NULL,n_22 = NULL,o_22 = NULL;
      t = if_verbose5_1_0(h_2, t);
      t = xtc_load_0_0(t);
      o_22 = t;
      if(match_cons(t, sym__2))
        {
          i_22 = ATgetArgument(t, 0);
          n_22 = ATgetArgument(t, 1);
          {
            ATerm f_23 = t;
            int h_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_22 = NULL,u_22 = NULL,w_22 = NULL;
                t = term_e_21;
                u_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, i_22);
                w_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Tool_1, i_22));
                t = m_7(u_22, w_22, t);
                {
                  static ATerm j_2 (ATerm t);
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
                LocalPopChoice(h_23);
              }
            else
              {
                t = f_23;
                t = e_23(o_22, t);
              }
          }
        }
      else
        {
          t = e_23(o_22, t);
        }
      t = if_verbose5_1_0(m_2, t);
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      {
        ATerm d_23 = NULL,b_8 = NULL,c_8 = NULL;
        d_23 = t;
        t = term_v_18;
        b_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_23), d_23), term_j_23);
        c_8 = t;
        t = SSL_printnl(b_8, c_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_23), d_23), term_j_23);
        t = if_verbose5_1_0(o_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm k_101 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,i_23 = NULL;
  i_23 = t;
  t = k_101(t);
  t = xtc_find_0_0(t);
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_23, i_23);
  {
    static ATerm q_2 (ATerm t);
    static ATerm q_2 (ATerm t)
    {
      ATerm k_23 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, g_23, i_23);
      t = q_6(g_23, i_23, t);
      t = term_n_23;
      k_23 = t;
      t = SSL_exit(k_23);
      return(t);
    }
    t = fork_and_wait_1_0(q_2, t);
  }
  t = i_23;
  return(t);
}
static ATerm c_7 (ATerm u_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t)
{
  ATerm l_23 = NULL,o_23 = NULL,p_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,x_23 = NULL;
  s_23 = t;
  t = u_94(t);
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_23, j_35, h_35);
  t = n_7(l_23, j_35, h_35, t);
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_23 = NULL;
        t = term_w_23;
        z_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_23, term_w_23);
        t = m_7(l_23, z_23, t);
        {
          ATerm y_23 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_23;
            }
        }
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_23 = ATgetFirst((ATermList) t);
      p_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, l_23, term_w_23, (ATerm) ATinsert(CheckATermList(p_23), (ATerm) ATinsert(CheckATermList(o_23), j_35)));
  t = lookup_table_0_1(l_23, t);
  x_23 = t;
  t = term_w_23;
  t_23 = t;
  t = (ATerm) ATinsert(CheckATermList(p_23), (ATerm) ATinsert(CheckATermList(o_23), j_35));
  u_23 = t;
  t = x_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(t_23, u_23, v_23, t);
  t = s_23;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm b_24 = NULL;
  ATerm a_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_24 = NULL,j_8 = NULL;
      k_24 = t;
      t = term_d_24;
      j_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_24, term_d_24);
      t = d_7(k_24, j_8, t);
      b_24 = t;
      t = SSL_mkstemp(b_24);
      LocalPopChoice(c_24);
    }
  else
    {
      t = a_24;
      {
        ATerm l_24 = NULL;
        t = term_e_24;
        l_24 = t;
        t = SSL_perror(l_24);
        _fail(t);
      }
    }
  return(t);
}
static ATerm d_7 (ATerm q_32, ATerm r_32, ATerm t)
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
  t = term_f_24;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,u_24 = NULL;
  t = P__tmpdir_0_0(t);
  q_24 = t;
  t = term_g_24;
  u_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_24, term_g_24);
  t = d_7(q_24, u_24, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      o_24 = ATgetArgument(t, 0);
      n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_r_9;
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_24, term_r_9);
  t = c_7(s_2, o_24, p_24, t);
  t = SSL_close(n_24);
  t = o_24;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm w_24 = NULL,z_24 = NULL;
  w_24 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm a_25 = NULL,b_25 = NULL;
      t = w_24;
      t = xtc_new_file_0_0(t);
      a_25 = t;
      t = t_0(t);
      b_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_25, (ATerm) ATinsert(ATinsert(ATempty, a_25), term_p_8));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_25);
    }
  else
    {
      ATerm f_25 = NULL,j_25 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_24;
      t = xtc_new_file_0_0(t);
      f_25 = t;
      t = t_0(t);
      j_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_25), term_p_8), z_24), term_h_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_25);
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_i_24;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm w_25 = NULL,z_25 = NULL;
  t = term_n_8;
  w_25 = t;
  t = term_j_24;
  z_25 = t;
  t = term_m_24;
  t = m_7(w_25, z_25, t);
  t = map_1_0(w_2, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm b_26 = NULL;
  b_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_26), term_j_24);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_i_24;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL;
  t = term_n_8;
  c_26 = t;
  t = term_j_24;
  d_26 = t;
  t = term_m_24;
  t = m_7(c_26, d_26, t);
  t = map_1_0(l_3, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm e_26 = NULL;
  e_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_26), term_j_24);
  return(t);
}
ATerm ast2text_0_0 (ATerm t)
{
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_25 = NULL,v_25 = NULL;
      v_25 = t;
      if(match_cons(t, sym_FILE_1))
        {
          u_25 = ATgetArgument(t, 0);
          {
            ATerm o_8 = NULL,m_1 = NULL;
            t = SSLgetAnnotations(v_25);
            o_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, u_25);
            m_1 = t;
            t = SSLsetAnnotations(m_1, o_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_25;
        }
      LocalPopChoice(s_24);
      t = xtc_transform_file_2_0(t_2, u_2, t);
    }
  else
    {
      t = r_24;
      t = xtc_transform_term_2_0(g_3, h_3, t);
    }
  t = xtc_abox2text_1_0(pass_width_0_0, t);
  return(t);
}
static ATerm m_7 (ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm j_26 = NULL;
  t = lookup_table_0_1(g_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(h_47, j_26, t);
  return(t);
}
static ATerm g_7 (ATerm s_45, ATerm t_45, ATerm t)
{
  ATerm l_26 = NULL,o_26 = NULL;
  o_26 = t;
  {
    ATerm t_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
        t = m_7(s_45, t_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_24 = ATgetFirst((ATermList) t);
            l_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_24);
        {
          ATerm q_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, s_45, t_45, l_26);
          t = lookup_table_0_1(s_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              q_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_7(t_45, l_26, q_26, t);
          t = (ATerm) ATmakeAppl(sym__3, s_45, t_45, l_26);
        }
      }
    else
      {
        t = t_24;
        {
          ATerm s_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
          t = lookup_table_0_1(s_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              s_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_7(t_45, s_26, t);
          t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
        }
      }
  }
  t = o_26;
  return(t);
}
ATerm end_scope_1_0 (ATerm r_94 (ATerm), ATerm t)
{
  ATerm y_26 = NULL,b_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL;
  e_27 = t;
  t = r_94(t);
  d_27 = t;
  {
    ATerm y_24 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_27 = NULL;
        t = term_w_23;
        j_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_27, term_w_23);
        t = m_7(d_27, j_27, t);
        {
          ATerm i_25 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_25;
            }
        }
        LocalPopChoice(e_25);
      }
    else
      {
        t = y_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_27 = ATgetFirst((ATermList) t);
      y_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_27, term_w_23, y_26);
  t = lookup_table_0_1(d_27, t);
  h_27 = t;
  t = term_w_23;
  f_27 = t;
  t = h_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(f_27, y_26, g_27, t);
  t = b_27;
  {
    static ATerm o_3 (ATerm t);
    static ATerm o_3 (ATerm t)
    {
      ATerm m_27 = NULL;
      m_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_27, m_27);
      t = g_7(d_27, m_27, t);
      return(t);
    }
    t = map_1_0(o_3, t);
  }
  t = e_27;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_98(t);
      t = k_98(t);
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
      t = k_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_94 (ATerm), ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,w_27 = NULL,x_27 = NULL,a_28 = NULL,c_28 = NULL;
  t_27 = t;
  t = q_94(t);
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_27, term_w_23);
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_28 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_25 = ATgetArgument(t, 0);
            ATerm p_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_w_23;
        g_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_27, term_w_23);
        t = m_7(s_27, g_28, t);
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        t = (ATerm) ATempty;
      }
  }
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_27, term_w_23, (ATerm) ATinsert(CheckATermList(u_27), (ATerm) ATempty));
  t = lookup_table_0_1(s_27, t);
  c_28 = t;
  t = term_w_23;
  w_27 = t;
  t = (ATerm) ATinsert(CheckATermList(u_27), (ATerm) ATempty);
  x_27 = t;
  t = c_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(w_27, x_27, a_28, t);
  t = t_27;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_f_24;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm u_28 = NULL;
  u_28 = t;
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(u_28);
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        t = u_28;
      }
  }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm w_100 (ATerm), ATerm t)
{
  ATerm l_28 = NULL;
  static ATerm s_3 (ATerm t);
  static ATerm s_3 (ATerm t)
  {
    ATerm m_28 = NULL;
    m_28 = t;
    {
      ATerm s_25 = t;
      int t_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_28 = NULL,p_28 = NULL;
          t = term_f_24;
          o_28 = t;
          t = term_w_23;
          p_28 = t;
          t = term_x_25;
          t = m_7(o_28, p_28, t);
          LocalPopChoice(t_25);
        }
      else
        {
          t = s_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_28 != NULL) && (l_28 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_28 = ATgetFirst((ATermList) t);
        {
          ATerm y_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = l_28;
    t = map_1_0(u_3, t);
    t = m_28;
    t = end_scope_1_0(v_3, t);
    return(t);
  }
  t = begin_scope_1_0(q_3, t);
  t = restore_always_2_0(w_100, s_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  d_29 = t;
  t = term_r_9;
  t = whoami_0_0(t);
  e_29 = t;
  t = term_v_18;
  g_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_26), e_29), term_a_26);
  h_29 = t;
  t = SSL_printnl(g_29, h_29);
  t = term_j_9;
  f_29 = t;
  t = SSL_exit(f_29);
  t = d_29;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm l_29 = NULL;
  l_29 = t;
  if(match_string(t, "-k"))
    {
      t = l_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_29;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
  m_29 = t;
  t = SSL_string_to_int(m_29);
  n_29 = t;
  t = term_g_26;
  o_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_26, n_29);
  t = p_7(o_29, n_29, t);
  t = m_29;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_3, z_3, b_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm s_29 = NULL;
  s_29 = t;
  if(match_string(t, "-S"))
    {
      t = s_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_29;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL;
  t = term_d_9;
  t_29 = t;
  t = term_i_26;
  u_29 = t;
  t = term_k_26;
  t = p_7(t_29, u_29, t);
  t = term_m_26;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_n_26;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,b_30 = NULL;
  x_29 = t;
  t = SSL_string_to_int(x_29);
  y_29 = t;
  t = term_d_9;
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_9, y_29);
  t = p_7(b_30, y_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_29);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_p_26;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL;
  t = term_r_26;
  c_30 = t;
  t = term_r_9;
  d_30 = t;
  t = term_t_26;
  t = p_7(c_30, d_30, t);
  t = term_u_26;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_v_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_4, h_4, j_4, t);
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_4, m_4, o_4, t);
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
            t = Option_3_0(u_4, v_4, x_4, t);
          }
      }
    }
  return(t);
}
static ATerm p_7 (ATerm s_50, ATerm t_50, ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL;
  t = term_n_8;
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_8, s_50, t_50);
  t = lookup_table_0_1(f_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(s_50, t_50, g_30, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_8, s_50, t_50);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
      t = term_r_9;
      t = h_0(t);
      o_30 = t;
      t = term_c_27;
      p_30 = t;
      t = term_i_27;
      q_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_27, term_i_27, o_30);
      t = n_7(p_30, q_30, o_30, t);
      _fail(t);
    }
  else
    {
      ATerm t_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_30 = ATgetFirst((ATermList) t);
          n_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_30;
      t = d_0(t);
      t = term_r_9;
      t = g_0(t);
      t_30 = t;
      t = (ATerm) ATinsert(CheckATermList(n_30), t_30);
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm x_30 = NULL;
  x_30 = t;
  if(match_string(t, "-o"))
    {
      t = x_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_30;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  y_30 = t;
  t = term_p_8;
  z_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_8, y_30);
  t = p_7(z_30, y_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_30);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_k_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_4, b_5, c_5, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm b_31 = NULL;
  b_31 = t;
  if(match_string(t, "-i"))
    {
      t = b_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_31;
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL;
  e_31 = t;
  t = term_h_24;
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_24, e_31);
  t = p_7(f_31, e_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_31);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_l_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_5, e_5, f_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  static ATerm d_32 (ATerm t);
  static ATerm d_32 (ATerm t)
  {
    ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
    c_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_32 = ATgetFirst((ATermList) t);
        b_32 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_9 = NULL,n_9 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(c_32);
          i_9 = t;
          t = b_32;
          t = d_32(t);
          n_9 = t;
          t = (ATerm) ATinsert(CheckATermList(n_9), a_32);
          v_1 = t;
          t = SSLsetAnnotations(v_1, i_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_32;
        t = n_84(t);
      }
    return(t);
  }
  t = d_32(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_31 = NULL,k_31 = NULL,l_31 = NULL;
  h_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_31;
    }
  else
    {
      static ATerm h_5 (ATerm t);
      static ATerm h_5 (ATerm t)
      {
        t = not_null(l_31);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_31 = ATgetFirst((ATermList) t);
          if(((l_31 != NULL) && (l_31 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_31;
      t = at_end_1_0(h_5, t);
    }
  return(t);
}
static ATerm b_33 (ATerm j_32, ATerm t)
{
  ATerm s_32 = NULL;
  t = SSL_explode_term(j_32);
  if(match_cons(t, sym__2))
    {
      ATerm n_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_32;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_32 = NULL,x_32 = NULL,y_32 = NULL;
  y_32 = t;
  if(match_cons(t, sym__2))
    {
      u_32 = ATgetArgument(t, 0);
      x_32 = ATgetArgument(t, 1);
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm j_5 (ATerm t);
            static ATerm j_5 (ATerm t)
            {
              t = x_32;
              return(t);
            }
            t = u_32;
            t = at_end_1_0(j_5, t);
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
            t = b_33(y_32, t);
          }
      }
    }
  else
    {
      t = b_33(y_32, t);
    }
  return(t);
}
static ATerm e_7 (ATerm y_50, ATerm x_50, ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,h_33 = NULL,i_33 = NULL;
  t = y_50;
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_33 = NULL;
        t = term_n_8;
        k_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_8, y_50);
        t = m_7(k_33, y_50, t);
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        t = (ATerm) ATempty;
      }
  }
  d_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_50, d_33);
  t = conc_0_0(t);
  c_33 = t;
  t = term_n_8;
  h_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_8, y_50, c_33);
  t = lookup_table_0_1(h_33, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(y_50, c_33, i_33, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_8, y_50, c_33);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,p_33 = NULL;
  m_33 = t;
  t = term_j_24;
  n_33 = t;
  t = (ATerm) ATinsert(ATempty, m_33);
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_24, (ATerm) ATinsert(ATempty, m_33));
  t = e_7(n_33, p_33, t);
  t = m_33;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_v_27;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_5, l_5, n_5, t);
  return(t);
}
static ATerm n_7 (ATerm n_45, ATerm o_45, ATerm m_45, ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,x_33 = NULL,y_33 = NULL;
  s_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_28 = ATgetArgument(t, 0);
            ATerm d_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
        t = m_7(n_45, o_45, t);
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = (ATerm) ATempty;
      }
  }
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_45, o_45, (ATerm) ATinsert(CheckATermList(t_33), m_45));
  t = lookup_table_0_1(n_45, t);
  y_33 = t;
  t = (ATerm) ATinsert(CheckATermList(t_33), m_45);
  u_33 = t;
  t = y_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(o_45, u_33, x_33, t);
  t = s_33;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm i_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
      t = term_r_9;
      t = p_0(t);
      o_34 = t;
      t = term_c_27;
      p_34 = t;
      t = term_i_27;
      q_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_27, term_i_27, o_34);
      t = n_7(p_34, q_34, o_34, t);
      _fail(t);
    }
  else
    {
      ATerm v_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_34 = ATgetFirst((ATermList) t);
          l_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_34 = ATgetFirst((ATermList) t);
          n_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_34;
      t = m_0(t);
      t = m_34;
      t = o_0(t);
      v_34 = t;
      t = (ATerm) ATinsert(CheckATermList(n_34), v_34);
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm y_34 = NULL;
  y_34 = t;
  if(match_string(t, "-w"))
    {
      t = y_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = y_34;
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL;
  m_35 = t;
  t = term_z_8;
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_8, m_35);
  t = p_7(n_35, m_35, t);
  t = m_35;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm f_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(h_28);
    }
  else
    {
      t = f_28;
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
            {
              ATerm k_28 = t;
              int n_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(n_28);
                }
              else
                {
                  t = k_28;
                  {
                    ATerm q_28 = t;
                    int r_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(r_28);
                      }
                    else
                      {
                        t = q_28;
                        t = ArgOption_3_0(o_5, p_5, q_5, t);
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
  ATerm o_35 = NULL,p_35 = NULL,s_35 = NULL,t_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_9;
  t = whoami_0_0(t);
  o_35 = t;
  t = term_v_18;
  s_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_28), o_35);
  t_35 = t;
  t = SSL_printnl(s_35, t_35);
  t = term_j_9;
  p_35 = t;
  t = SSL_exit(p_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL;
  t = term_n_8;
  u_35 = t;
  t = term_t_28;
  v_35 = t;
  t = term_v_28;
  t = m_7(u_35, v_35, t);
  return(t);
}
static ATerm h_7 (ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_33, w_33);
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
      t = SSL_addr(v_33, w_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm t)
{
  ATerm z_35 = NULL,c_36 = NULL,e_36 = NULL;
  z_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_35;
      t = k_91(t);
    }
  else
    {
      ATerm h_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_36 = ATgetFirst((ATermList) t);
          e_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_36;
      t = foldr_2_0(k_91, l_91, t);
      h_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_36, h_36);
      t = l_91(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_i_26;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm e_10 = NULL,l_10 = NULL;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(e_10, l_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_36 = NULL,z_9 = NULL,a_10 = NULL;
  t = times_0_0(t);
  a_10 = t;
  t = SSL_explode_term(a_10);
  if(match_cons(t, sym__2))
    {
      ATerm y_28 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9;
  t = foldr_2_0(r_5, s_5, t);
  l_36 = t;
  t = SSL_TicksToSeconds(l_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
  k_37 = t;
  if(match_cons(t, sym__2))
    {
      l_37 = ATgetArgument(t, 0);
      m_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_37;
        if((l_37 != t))
          {
            _fail(t);
          }
        t = k_37;
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        t = (ATerm) ATmakeAppl(sym__2, l_37, m_37);
        {
          ATerm b_29 = t;
          int c_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_37, m_37);
              LocalPopChoice(c_29);
            }
          else
            {
              t = b_29;
              t = SSL_gtr(l_37, m_37);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_37, m_37);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_112 (ATerm), ATerm t)
{
  ATerm u_37 = NULL;
  u_37 = t;
  {
    ATerm i_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_37 = NULL,y_37 = NULL,a_38 = NULL;
        t = term_n_8;
        y_37 = t;
        t = term_d_9;
        a_38 = t;
        t = term_g_9;
        t = m_7(y_37, a_38, t);
        x_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_37, term_j_9);
        t = geq_0_0(t);
        t = u_37;
        t = b_112(t);
        LocalPopChoice(j_29);
      }
    else
      {
        t = i_29;
        t = u_37;
      }
  }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,h_38 = NULL,i_38 = NULL;
  t = run_time_0_0(t);
  e_38 = t;
  t = term_r_9;
  t = whoami_0_0(t);
  f_38 = t;
  t = term_v_18;
  h_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_29), e_38), term_k_10), f_38);
  i_38 = t;
  t = SSL_printnl(h_38, i_38);
  t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_29), e_38), term_k_10), f_38));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_26;
  j_38 = t;
  t = SSL_exit(j_38);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL;
  u_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_38 = ATgetArgument(t, 0);
          {
            ATerm e_11 = NULL,x_1 = NULL;
            t = SSLgetAnnotations(u_38);
            e_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_38);
            x_1 = t;
            t = SSLsetAnnotations(x_1, e_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_102 (ATerm), ATerm t)
{
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_38 = NULL,n_38 = NULL;
      t = term_n_8;
      m_38 = t;
      t = term_r_29;
      n_38 = t;
      t = term_v_29;
      t = m_7(m_38, n_38, t);
      LocalPopChoice(q_29);
    }
  else
    {
      t = p_29;
      t = fetch_1_0(u_5, t);
    }
  t = r_102(t);
  return(t);
}
static ATerm q_7 (ATerm f_50, ATerm g_50, ATerm h_50, ATerm t)
{
  ATerm w_38 = NULL;
  t = SSL_hashtable_put(h_50, f_50, g_50);
  w_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_38);
  return(t);
}
static ATerm r_7 (ATerm i_50, ATerm j_50, ATerm t)
{
  t = SSL_hashtable_get(j_50, i_50);
  return(t);
}
ATerm lookup_table_0_1 (ATerm z_46, ATerm t)
{
  ATerm f_39 = NULL;
  t = table_hashtable_0_0(t);
  f_39 = t;
  {
    ATerm w_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_11 = NULL;
        t = f_39;
        if(match_cons(t, sym_Hashtable_1))
          {
            t_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_7(z_46, t_11, t);
        LocalPopChoice(z_29);
      }
    else
      {
        t = w_29;
        {
          ATerm d_12 = NULL;
          t = z_46;
          t = table_create_0_0(t);
          t = f_39;
          if(match_cons(t, sym_Hashtable_1))
            {
              d_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_7(z_46, d_12, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm n_50, ATerm o_50, ATerm t)
{
  ATerm i_39 = NULL;
  t = SSL_hashtable_create(n_50, o_50);
  i_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_39);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL,s_39 = NULL,t_39 = NULL;
  m_39 = t;
  t = term_a_30;
  s_39 = t;
  t = term_e_30;
  t_39 = t;
  t = m_39;
  t = new_hashtable_0_2(s_39, t_39, t);
  n_39 = t;
  t = m_39;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(m_39, n_39, o_39, t);
  t = m_39;
  return(t);
}
static ATerm j_7 (ATerm k_50, ATerm l_50, ATerm t)
{
  ATerm u_39 = NULL;
  t = SSL_hashtable_remove(l_50, k_50);
  u_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_39);
  return(t);
}
static ATerm k_7 (ATerm p_50, ATerm t)
{
  ATerm v_39 = NULL;
  t = SSL_hashtable_destroy(p_50);
  v_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_39);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm w_39 = NULL;
  t = SSL_table_hashtable();
  w_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_39);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL;
  x_39 = t;
  t = table_hashtable_0_0(t);
  y_39 = t;
  t = lookup_table_0_1(x_39, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(a_40, t);
  t = y_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(x_39, z_39, t);
  t = x_39;
  return(t);
}
ATerm map_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  static ATerm p_40 (ATerm t);
  static ATerm p_40 (ATerm t)
  {
    ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
    m_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_40;
      }
    else
      {
        ATerm k_12 = NULL,o_12 = NULL,p_12 = NULL,z_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_40 = ATgetFirst((ATermList) t);
            o_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_40);
        k_12 = t;
        t = n_40;
        t = w_83(t);
        o_12 = t;
        t = o_40;
        t = p_40(t);
        p_12 = t;
        t = (ATerm) ATinsert(CheckATermList(p_12), o_12);
        z_1 = t;
        t = SSLsetAnnotations(z_1, k_12);
      }
    return(t);
  }
  t = p_40(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_40 = ATgetFirst((ATermList) t);
      t_40 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_40 = NULL,y_40 = NULL;
        static ATerm v_5 (ATerm t);
        static ATerm v_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_40)), not_null(y_40));
          return(t);
        }
        t = t_40;
        t = l_0(t);
        if(((x_40 != NULL) && (x_40 != t)))
          _fail(t);
        else
          x_40 = t;
        t = s_40;
        t = j_0(t);
        if(((y_40 != NULL) && (y_40 != t)))
          _fail(t);
        else
          y_40 = t;
        t = t_40;
        t = reverse_acc_2_0(j_0, v_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_9;
      t = l_0(t);
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,j_3 = NULL;
  g_41 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_41);
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_41);
  j_3 = t;
  t = SSLsetAnnotations(j_3, e_41);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm i_41 = NULL;
  i_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_41), term_h_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL;
  ATerm i_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_41 = NULL,d_41 = NULL;
      t = term_n_8;
      c_41 = t;
      t = term_t_28;
      d_41 = t;
      t = term_v_28;
      t = m_7(c_41, d_41, t);
      LocalPopChoice(j_30);
    }
  else
    {
      t = i_30;
      t = fetch_1_0(w_5, t);
    }
  t = term_k_30;
  t = echo_0_0(t);
  t = term_c_27;
  a_41 = t;
  t = term_i_27;
  b_41 = t;
  t = term_l_30;
  t = m_7(a_41, b_41, t);
  t = reverse_acc_2_0(_id, x_5, t);
  t = map_1_0(y_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  static ATerm f_42 (ATerm t);
  static ATerm f_42 (ATerm t)
  {
    ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
    c_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_42 = ATgetFirst((ATermList) t);
        e_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_30 = t;
      int s_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_13 = NULL,h_13 = NULL,m_3 = NULL;
          t = SSLgetAnnotations(c_42);
          e_13 = t;
          t = d_42;
          t = g_84(t);
          h_13 = t;
          t = (ATerm) ATinsert(CheckATermList(e_42), h_13);
          m_3 = t;
          t = SSLsetAnnotations(m_3, e_13);
          LocalPopChoice(s_30);
        }
      else
        {
          t = r_30;
          {
            ATerm x_13 = NULL,a_14 = NULL,n_3 = NULL;
            t = SSLgetAnnotations(c_42);
            x_13 = t;
            t = e_42;
            t = f_42(t);
            a_14 = t;
            t = (ATerm) ATinsert(CheckATermList(a_14), d_42);
            n_3 = t;
            t = SSLsetAnnotations(n_3, x_13);
          }
        }
    }
    return(t);
  }
  t = f_42(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
  j_42 = t;
  {
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_42;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_30 = ATgetFirst((ATermList) t);
                ATerm a_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_42;
          }
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
        t = (ATerm) ATinsert(ATempty, j_42);
      }
  }
  k_42 = t;
  t = term_r_8;
  l_42 = t;
  t = SSL_printnl(l_42, k_42);
  t = j_42;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL;
  t = term_n_8;
  p_42 = t;
  t = term_t_28;
  q_42 = t;
  t = term_v_28;
  t = m_7(p_42, q_42, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL;
  t = term_c_31;
  r_42 = t;
  t = term_r_9;
  s_42 = t;
  t = term_d_31;
  t = p_7(r_42, s_42, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_g_31;
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
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL;
  t = term_c_31;
  v_42 = t;
  t = term_r_9;
  w_42 = t;
  t = term_d_31;
  t = p_7(v_42, w_42, t);
  t = term_i_31;
  t_42 = t;
  t = term_r_9;
  u_42 = t;
  t = term_j_31;
  t = p_7(t_42, u_42, t);
  t = term_m_31;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_n_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_6, b_6, g_6, t);
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      t = Option_3_0(h_6, i_6, j_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,g_5 = NULL;
  c_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_42 = ATgetFirst((ATermList) t);
      z_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_43);
  x_42 = t;
  t = y_42;
  t = p_70(t);
  a_43 = t;
  t = z_42;
  t = q_70(t);
  b_43 = t;
  t = (ATerm) ATinsert(CheckATermList(b_43), a_43);
  g_5 = t;
  t = SSLsetAnnotations(g_5, x_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_104 (ATerm), ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,m_43 = NULL,n_43 = NULL,i_5 = NULL;
  h_43 = t;
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_31;
        t = p_104(t);
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
      }
  }
  t = h_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_43 = ATgetFirst((ATermList) t);
      k_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_43);
  i_43 = t;
  t = term_t_28;
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_28, j_43);
  t = p_7(n_43, j_43, t);
  t = k_43;
  {
    static ATerm x_43 (ATerm t);
    static ATerm x_43 (ATerm t)
    {
      ATerm t_31 = t;
      int u_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_31 = t;
          int w_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_43 = NULL;
              q_43 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_43;
              LocalPopChoice(w_31);
            }
          else
            {
              t = v_31;
              t = p_104(t);
              t = Cons_2_0(_id, x_43, t);
            }
          LocalPopChoice(u_31);
        }
      else
        {
          t = t_31;
          {
            ATerm t_43 = NULL,u_43 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_43 = ATgetFirst((ATermList) t);
                u_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_43), (ATerm) ATmakeAppl(sym_Undefined_1, t_43));
          }
        }
      return(t);
    }
    t = x_43(t);
  }
  m_43 = t;
  t = (ATerm) ATinsert(CheckATermList(m_43), (ATerm) ATmakeAppl(sym_Program_1, j_43));
  i_5 = t;
  t = SSLsetAnnotations(i_5, i_43);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm k_44 = NULL;
  k_44 = t;
  if(match_string(t, "--help"))
    {
      t = k_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_44;
        }
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL;
  t = term_r_29;
  l_44 = t;
  t = term_r_9;
  m_44 = t;
  t = term_x_31;
  t = p_7(l_44, m_44, t);
  t = term_y_31;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_z_31;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_104 (ATerm), ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
  e_44 = t;
  t = term_c_27;
  f_44 = t;
  t = term_e_32;
  t = lookup_table_0_1(f_44, t);
  j_44 = t;
  t = term_i_27;
  g_44 = t;
  t = (ATerm) ATempty;
  h_44 = t;
  t = j_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(g_44, h_44, i_44, t);
  t = e_44;
  {
    static ATerm l_6 (ATerm t);
    static ATerm l_6 (ATerm t)
    {
      ATerm f_32 = t;
      int g_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_104(t);
          LocalPopChoice(g_32);
        }
      else
        {
          t = f_32;
          {
            ATerm h_32 = t;
            int i_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_6, i_7, l_7, t);
                LocalPopChoice(i_32);
              }
            else
              {
                t = h_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_6, t);
  }
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_44 = NULL;
        x_44 = t;
        {
          ATerm m_32 = t;
          int n_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_15 = NULL;
              t = x_44;
              {
                ATerm o_32 = t;
                int p_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_15 = NULL,c_15 = NULL;
                    t = term_n_8;
                    b_15 = t;
                    t = term_r_29;
                    c_15 = t;
                    t = term_v_29;
                    t = m_7(b_15, c_15, t);
                    LocalPopChoice(p_32);
                  }
                else
                  {
                    t = o_32;
                    t = fetch_1_0(u_7, t);
                  }
              }
              t = x_44;
              t = default_system_usage_0_0(t);
              t = term_i_26;
              a_15 = t;
              t = SSL_exit(a_15);
              LocalPopChoice(n_32);
            }
          else
            {
              t = m_32;
              {
                ATerm u_15 = NULL,v_15 = NULL,a_16 = NULL;
                t = term_n_8;
                v_15 = t;
                t = term_c_31;
                a_16 = t;
                t = term_t_32;
                t = m_7(v_15, a_16, t);
                t = x_44;
                t = default_system_about_0_0(t);
                t = term_i_26;
                u_15 = t;
                t = SSL_exit(u_15);
              }
            }
        }
        LocalPopChoice(l_32);
      }
    else
      {
        t = k_32;
        {
          ATerm v_32 = t;
          int w_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL;
              static ATerm v_7 (ATerm t);
              static ATerm v_7 (ATerm t)
              {
                ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,m_5 = NULL;
                d_45 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_45 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_45);
                b_45 = t;
                t = c_45;
                if(((c_44 != NULL) && (c_44 != t)))
                  _fail(t);
                else
                  c_44 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_45);
                m_5 = t;
                t = SSLsetAnnotations(m_5, b_45);
                return(t);
              }
              t = fetch_1_0(v_7, t);
              t = term_v_18;
              z_44 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_44)), term_z_32);
              a_45 = t;
              t = SSL_printnl(z_44, a_45);
              t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_44)), term_z_32));
              t = default_system_usage_0_0(t);
              t = term_j_9;
              y_44 = t;
              t = SSL_exit(y_44);
              LocalPopChoice(w_32);
            }
          else
            {
              t = v_32;
            }
        }
      }
  }
  d_44 = t;
  t = term_c_27;
  t = table_destroy_0_0(t);
  t = d_44;
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm t)
{
  ATerm q_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL;
  t = parse_options_1_0(t_102, t);
  q_45 = t;
  t = term_a_33;
  t = table_create_0_0(t);
  t = term_a_33;
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_33, term_e_33, q_45);
  t = lookup_table_0_1(u_45, t);
  x_45 = t;
  t = term_e_33;
  v_45 = t;
  t = x_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(v_45, q_45, w_45, t);
  t = q_45;
  t = v_102(t);
  {
    ATerm f_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_102, t);
        LocalPopChoice(g_33);
      }
    else
      {
        t = f_33;
        {
          ATerm j_33 = t;
          int l_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_102(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_33);
            }
          else
            {
              t = j_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm o_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_33 = t;
      int z_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = abox2text_options_0_0(t);
          LocalPopChoice(z_33);
        }
      else
        {
          t = r_33;
          t = pp_options_0_0(t);
        }
      LocalPopChoice(q_33);
    }
  else
    {
      t = o_33;
      {
        ATerm a_34 = t;
        int d_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(d_34);
          }
        else
          {
            t = a_34;
            {
              ATerm e_34 = t;
              int f_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(f_34);
                }
              else
                {
                  t = e_34;
                  {
                    ATerm g_34 = t;
                    int h_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(y_7, z_7, d_8, t);
                        LocalPopChoice(h_34);
                      }
                    else
                      {
                        t = g_34;
                        {
                          ATerm j_34 = t;
                          int k_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(k_34);
                            }
                          else
                            {
                              t = j_34;
                              t = keep_option_0_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = xtc_temp_files_1_0(e_8, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL;
  t = term_r_34;
  z_45 = t;
  t = term_r_9;
  a_46 = t;
  t = term_s_34;
  t = p_7(z_45, a_46, t);
  t = term_t_34;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_u_34;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
      t = term_n_8;
      d_46 = t;
      t = term_h_24;
      e_46 = t;
      t = term_z_34;
      t = m_7(d_46, e_46, t);
      c_46 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_46);
      LocalPopChoice(x_34);
    }
  else
    {
      t = w_34;
      t = term_v_8;
    }
  t = ast2text_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(w_7, default_usage_0_0, _id, x_7, t);
  return(t);
}
