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
ATerm term_d_38;
ATerm term_u_37;
ATerm term_r_37;
ATerm term_o_37;
ATerm term_m_37;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_j_36;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_v_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_q_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_h_33;
ATerm term_f_33;
ATerm term_z_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_d_32;
ATerm term_i_31;
ATerm term_z_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_o_30;
ATerm term_m_30;
ATerm term_g_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_t_29;
ATerm term_o_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_f_29;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_e_26;
ATerm term_b_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_o_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_p_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_z_23;
ATerm term_u_23;
ATerm term_q_23;
ATerm term_l_23;
ATerm term_f_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_i_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_t_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_r_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_w_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_c_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_p_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_f_10;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_s_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_f_10);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_p_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_11, term_k_10, term_j_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_11, term_m_11, term_n_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_u_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_z_11);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_k_12, term_n_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_q_12, term_r_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_v_12, term_w_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_b_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_g_13, term_i_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_o_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_w_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_n_14, term_p_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_b_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_g_15, term_h_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_p_15, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_x_15, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_e_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_l_16, term_m_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_w_16, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_r_17, term_x_17);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_18, term_f_18, term_g_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_18, term_k_18, term_p_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_18, term_s_18, term_t_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_18, term_w_18, term_x_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_18, term_a_19, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_e_19, term_f_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_z_22);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym__2, term_o_22, term_q_23);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym__2, term_o_22, term_p_22);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_q_27);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym__2, term_y_25, term_o_25);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym__2, term_f_10, term_v_29);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__2, term_b_30, term_b_26);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_g_32);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_f_33);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_m_30, term_o_30);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym__2, term_g_34, term_b_26);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym__2, term_j_34, term_b_26);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym__2, term_f_33, term_b_26);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym__3, term_m_30, term_o_30, (ATerm) ATempty);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_g_34);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_b_26);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_e_26);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm r_7 (ATerm t_14, ATerm u_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm y_6 (ATerm e_34, ATerm f_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm pass_width_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm z_6 (ATerm t_17, ATerm u_17, ATerm t);
static ATerm a_7 (ATerm i_79 (ATerm), ATerm v_182, ATerm d_18, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm t);
static ATerm b_7 (ATerm l_14, ATerm m_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm l_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm x_77 (ATerm), ATerm t);
static ATerm d_7 (ATerm p_50, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose4_1_0 (ATerm h_112 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm j_112 (ATerm), ATerm t);
static ATerm f_7 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t);
static ATerm g_7 (ATerm k_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
static ATerm s_0 (ATerm t);
static ATerm h_7 (ATerm n_46, ATerm o_46, ATerm p_46, ATerm t);
static ATerm i_7 (ATerm r_98 (ATerm), ATerm x_46, ATerm w_46, ATerm t);
static ATerm c_12 (ATerm p_11, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_7 (ATerm z_17, ATerm t);
static ATerm k_7 (ATerm h_52, ATerm i_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_14 (ATerm s_12, ATerm t);
static ATerm d_15 (ATerm f_13, ATerm h_13, ATerm l_13, ATerm t);
static ATerm f_15 (ATerm c_14, ATerm d_14, ATerm f_14, ATerm t);
static ATerm l_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm r_92 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm y_21 (ATerm x_20, ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm n_101 (ATerm), ATerm t);
static ATerm m_7 (ATerm x_94 (ATerm), ATerm m_35, ATerm k_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm n_7 (ATerm q_32, ATerm r_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm g_79 (ATerm), ATerm t);
ATerm if_verbose5_1_0 (ATerm i_112 (ATerm), ATerm t);
ATerm if_verbose2_1_0 (ATerm f_112 (ATerm), ATerm t);
static ATerm o_7 (ATerm y_51, ATerm z_51, ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm u_84 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm ast2text_0_0 (ATerm t);
static ATerm y_7 (ATerm j_47, ATerm k_47, ATerm t);
static ATerm s_7 (ATerm v_45, ATerm w_45, ATerm t);
ATerm end_scope_1_0 (ATerm u_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm t_94 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm z_100 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_8 (ATerm v_50, ATerm w_50, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm q_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm r_35 (ATerm w_34, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm q_7 (ATerm b_51, ATerm a_51, ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
static ATerm z_7 (ATerm q_45, ATerm r_45, ATerm p_45, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm b_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm t_7 (ATerm y_33, ATerm z_33, ATerm t);
ATerm foldr_2_0 (ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_112 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm need_help_1_0 (ATerm u_102 (ATerm), ATerm t);
static ATerm c_8 (ATerm i_50, ATerm j_50, ATerm k_50, ATerm t);
static ATerm d_8 (ATerm l_50, ATerm m_50, ATerm t);
ATerm lookup_table_0_1 (ATerm c_47, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_50, ATerm r_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm v_7 (ATerm n_50, ATerm o_50, ATerm t);
static ATerm w_7 (ATerm s_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm z_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm s_70 (ATerm), ATerm t_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_104 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm parse_options_1_0 (ATerm r_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL;
  n_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = n_1;
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
        t = r_7(o_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
        LocalPopChoice(f_9);
      }
    else
      {
        t = c_9;
        {
          ATerm j_9 = t;
          int k_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_0 = NULL;
              t = n_1;
              t = q_0(t);
              z_0 = t;
              {
                ATerm m_9 = t;
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
                            if((o_1 != t))
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
                    t = m_9;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, o_1, z_0);
              t = r_7(o_1, z_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
              LocalPopChoice(k_9);
            }
          else
            {
              t = j_9;
              t = n_1;
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
static ATerm r_7 (ATerm t_14, ATerm u_14, ATerm t)
{
  t = SSL_copy(t_14, u_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 = NULL,t_2 = NULL;
      t = term_r_9;
      q_2 = t;
      t = term_s_9;
      t_2 = t;
      t = term_t_9;
      t = y_7(q_2, t_2, t);
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
      t = term_u_9;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm o_2 = NULL;
  o_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm j_1 = NULL,k_1 = NULL;
      t = term_s_9;
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 = NULL,r_1 = NULL;
            t = term_r_9;
            l_1 = t;
            t = term_s_9;
            r_1 = t;
            t = term_t_9;
            t = y_7(l_1, r_1, t);
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
            t = term_u_9;
          }
      }
      j_1 = t;
      t = term_x_9;
      k_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_x_9, j_1);
      t = r_7(k_1, j_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm y_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm y_6 (ATerm e_34, ATerm f_34, ATerm t)
{
  ATerm a_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(e_34, f_34);
      LocalPopChoice(e_10);
    }
  else
    {
      t = a_10;
      t = SSL_subtr(e_34, f_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL;
  t = term_f_10;
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_3 = NULL,g_3 = NULL;
        t = term_r_9;
        f_3 = t;
        t = term_f_10;
        g_3 = t;
        t = term_j_10;
        t = y_7(f_3, g_3, t);
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        t = term_k_10;
      }
  }
  c_3 = t;
  t = term_k_10;
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_3, term_k_10);
  t = y_6(c_3, e_3, t);
  d_3 = t;
  t = SSL_int_to_string(d_3);
  b_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_3), term_f_10);
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm l_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_3 = NULL,j_3 = NULL;
      t = term_r_9;
      h_3 = t;
      t = term_p_10;
      j_3 = t;
      t = term_t_10;
      t = y_7(h_3, j_3, t);
      LocalPopChoice(o_10);
      {
        ATerm k_3 = NULL;
        k_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, k_3), term_p_10);
      }
    }
  else
    {
      t = l_10;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm o_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_x_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm q_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_u_10);
      q_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_3, (ATerm) ATinsert(ATempty, term_u_10));
      t = o_7(o_3, q_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm z_6 (ATerm t_17, ATerm u_17, ATerm t)
{
  ATerm r_3 = NULL;
  t = SSL_write_term_to_stream_baf(t_17, u_17);
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_3);
  return(t);
}
static ATerm a_7 (ATerm i_79 (ATerm), ATerm v_182, ATerm d_18, ATerm t)
{
  ATerm s_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_182, term_v_10);
  t = l_7(t);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_3, d_18);
  t = i_79(t);
  t = fclose_0_0(t);
  t = d_18;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_10 = ATgetArgument(t, 0);
      if(match_cons(w_10, sym_Stream_1))
        {
          x_3 = ATgetArgument(w_10, 0);
        }
      else
        _fail(t);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(x_3, y_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm t)
{
  ATerm u_3 = NULL,w_3 = NULL;
  w_3 = t;
  t = xtc_new_file_0_0(t);
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_3, w_3);
  t = a_7(b_0, u_3, w_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, u_3);
  t = xtc_transform_file_2_0(m_100, n_100, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm b_7 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_execvp(l_14, m_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL,h_5 = NULL;
  c_5 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      d_5 = ATgetArgument(t, 0);
      {
        ATerm w_1 = NULL,x_1 = NULL;
        t = SSL_int_to_string(d_5);
        w_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_10), w_1), term_x_10);
        x_1 = t;
        t = SSL_concat_strings(x_1);
      }
    }
  else
    {
      ATerm i_2 = NULL,r_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          d_5 = ATgetArgument(t, 0);
          e_5 = ATgetArgument(t, 1);
          h_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(e_5);
      i_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_5), term_c_11), i_2), term_z_10), d_5);
      r_2 = t;
      t = SSL_concat_strings(r_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm o_5 = NULL;
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    t = l_84(t);
    if(((o_5 != NULL) && (o_5 != t)))
      _fail(t);
    else
      o_5 = t;
    return(t);
  }
  t = fetch_1_0(c_0, t);
  t = not_null(o_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm p_5 = NULL;
  p_5 = t;
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_0 (ATerm t);
        static ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm g_11 = ATgetArgument(t, 0);
              if((p_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm h_11 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_19), term_c_19), term_y_18), term_u_18), term_q_18), term_h_18), term_c_18), term_g_17), term_n_16), term_f_16), term_a_16), term_v_15), term_r_15), term_j_15), term_c_15), term_q_14), term_h_14), term_x_13), term_p_13), term_j_13), term_d_13), term_x_12), term_t_12), term_o_12), term_b_12), term_w_11), term_q_11), term_k_11);
        t = fetch_elem_1_0(f_0, t);
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, p_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm t_5 = NULL,c_6 = NULL;
  t_5 = t;
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_19 = ATgetArgument(t, 0);
            c_6 = ATgetArgument(t, 1);
            {
              ATerm k_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(i_19);
        {
          ATerm l_19 = t;
          int m_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_2 = NULL,i_3 = NULL,l_3 = NULL;
              t = c_6;
              {
                ATerm n_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_19;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              z_2 = t;
              t = term_o_19;
              i_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, z_2), term_p_19);
              l_3 = t;
              t = SSL_printnl(i_3, l_3);
              t = (ATerm) ATmakeAppl(sym__2, term_o_19, (ATerm) ATinsert(ATinsert(ATempty, z_2), term_p_19));
              LocalPopChoice(m_19);
            }
          else
            {
              t = l_19;
              t = t_5;
            }
        }
      }
    else
      {
        t = h_19;
        t = t_5;
      }
  }
  t = t_5;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm x_77 (ATerm), ATerm t)
{
  ATerm t_6 = NULL,e_7 = NULL;
  e_7 = t;
  t = fork_0_0(t);
  t_6 = t;
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_7;
        t = x_77(t);
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = SSL_waitpid(t_6);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_19 = ATgetArgument(t, 0);
            if(((ATgetType(v_19) != AT_INT) || (ATgetInt((ATermInt) v_19) != 0)))
              _fail(t);
            {
              ATerm w_19 = ATgetArgument(t, 1);
            }
            {
              ATerm x_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_7;
      }
  }
  return(t);
}
static ATerm d_7 (ATerm p_50, ATerm t)
{
  t = SSL_hashtable_keys(p_50);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm a_8 = NULL,e_8 = NULL;
  static ATerm i_0 (ATerm t);
  static ATerm i_0 (ATerm t)
  {
    ATerm f_8 = NULL,i_8 = NULL;
    f_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_8), f_8);
    t = y_7(not_null(a_8), f_8, t);
    i_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_8, i_8);
    return(t);
  }
  if(((a_8 != NULL) && (a_8 != t)))
    _fail(t);
  else
    a_8 = t;
  t = lookup_table_0_1(a_8, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(e_8, t);
  t = map_1_0(i_0, t);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm h_112 (ATerm), ATerm t)
{
  ATerm m_8 = NULL;
  m_8 = t;
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_8 = NULL,r_8 = NULL,t_8 = NULL;
        t = term_r_9;
        r_8 = t;
        t = term_f_10;
        t_8 = t;
        t = term_j_10;
        t = y_7(r_8, t_8, t);
        q_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_8, term_a_14);
        t = geq_0_0(t);
        t = m_8;
        t = h_112(t);
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        t = m_8;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm j_112 (ATerm), ATerm t)
{
  ATerm w_8 = NULL;
  w_8 = t;
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_8 = NULL,b_9 = NULL,e_9 = NULL;
        t = term_r_9;
        b_9 = t;
        t = term_f_10;
        e_9 = t;
        t = term_j_10;
        t = y_7(b_9, e_9, t);
        z_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_8, term_y_11);
        t = geq_0_0(t);
        t = w_8;
        t = j_112(t);
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = w_8;
      }
  }
  return(t);
}
static ATerm f_7 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  t = o_88(t);
  {
    static ATerm k_0 (ATerm t);
    static ATerm k_0 (ATerm t)
    {
      ATerm g_9 = NULL;
      g_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_25, g_9);
      t = n_88(t);
      return(t);
    }
    t = fetch_1_0(k_0, t);
  }
  t = g_25;
  return(t);
}
static ATerm g_7 (ATerm k_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  static ATerm i_10 (ATerm t);
  static ATerm i_10 (ATerm t)
  {
    ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL;
    b_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_10 = ATgetFirst((ATermList) t);
            d_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_20 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_10;
              {
                static ATerm n_0 (ATerm t);
                static ATerm n_0 (ATerm t)
                {
                  t = c_25;
                  return(t);
                }
                t = f_7(k_88, n_0, c_10, d_10, t);
              }
              t = i_10(t);
              LocalPopChoice(d_20);
            }
          else
            {
              t = c_20;
              {
                ATerm a_4 = NULL,d_4 = NULL,v_0 = NULL;
                t = SSLgetAnnotations(b_10);
                a_4 = t;
                t = d_10;
                t = i_10(t);
                d_4 = t;
                t = (ATerm) ATinsert(CheckATermList(d_4), c_10);
                v_0 = t;
                t = SSLsetAnnotations(v_0, a_4);
              }
            }
        }
      }
    return(t);
  }
  t = d_25;
  t = i_10(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm a_11 = NULL;
  if(match_cons(t, sym__2))
    {
      a_11 = ATgetArgument(t, 0);
      if((a_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_7 (ATerm n_46, ATerm o_46, ATerm p_46, ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL,q_10 = NULL,s_10 = NULL;
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_46, o_46);
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_20 = ATgetArgument(t, 0);
            ATerm m_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_46, o_46);
        t = y_7(n_46, o_46, t);
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        t = (ATerm) ATempty;
      }
  }
  q_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_10, p_46);
  t = g_7(s_0, q_10, p_46, t);
  n_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_46, o_46, n_10);
  t = lookup_table_0_1(n_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(o_46, n_10, s_10, t);
  t = m_10;
  return(t);
}
static ATerm i_7 (ATerm r_98 (ATerm), ATerm x_46, ATerm w_46, ATerm t)
{
  static ATerm u_0 (ATerm t);
  static ATerm u_0 (ATerm t)
  {
    ATerm b_11 = NULL,d_11 = NULL;
    if(match_cons(t, sym__2))
      {
        b_11 = ATgetArgument(t, 0);
        d_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, x_46, b_11, d_11);
    t = r_98(t);
    return(t);
  }
  t = w_46;
  t = map_1_0(u_0, t);
  return(t);
}
static ATerm c_12 (ATerm p_11, ATerm t)
{
  t = SSL_fclose(p_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_11 = NULL,a_12 = NULL;
  a_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_11 = ATgetArgument(t, 0);
      {
        ATerm n_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_11);
            LocalPopChoice(t_20);
          }
        else
          {
            t = n_20;
            t = c_12(a_12, t);
          }
      }
    }
  else
    {
      t = c_12(a_12, t);
    }
  return(t);
}
static ATerm j_7 (ATerm z_17, ATerm t)
{
  t = SSL_read_term_from_stream(z_17);
  return(t);
}
static ATerm k_7 (ATerm h_52, ATerm i_52, ATerm t)
{
  ATerm d_12 = NULL;
  t = SSL_fopen(h_52, i_52);
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_12);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_12 = NULL;
  t = SSL_stdin_stream();
  e_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_12 = NULL;
  t = SSL_stdout_stream();
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_12 = NULL;
  t = SSL_stderr_stream();
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_12);
  return(t);
}
static ATerm y_14 (ATerm s_12, ATerm t)
{
  ATerm y_12 = NULL;
  t = SSL_explode_term(s_12);
  if(match_cons(t, sym__2))
    {
      ATerm u_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_20 = ATgetArgument(t, 1);
        if(((ATgetType(v_20) == AT_LIST) && !(ATisEmpty(v_20))))
          {
            y_12 = ATgetFirst((ATermList) v_20);
            {
              ATerm w_20 = (ATerm) ATgetNext((ATermList) v_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_12;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_12;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_12;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_12;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_15 (ATerm f_13, ATerm h_13, ATerm l_13, ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,y_13 = NULL,x_0 = NULL;
  t = SSLgetAnnotations(l_13);
  s_13 = t;
  t = f_13;
  if(match_cons(t, sym_Path_1))
    {
      y_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_13, h_13);
  x_0 = t;
  t = SSLsetAnnotations(x_0, s_13);
  if(match_cons(t, sym__2))
    {
      q_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(q_13, r_13, t);
  return(t);
}
static ATerm f_15 (ATerm c_14, ATerm d_14, ATerm f_14, ATerm t)
{
  ATerm g_14 = NULL,i_14 = NULL,j_14 = NULL,o_14 = NULL,y_0 = NULL;
  t = SSLgetAnnotations(f_14);
  j_14 = t;
  t = SSL_is_string(c_14);
  o_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_14, d_14);
  y_0 = t;
  t = SSLsetAnnotations(y_0, j_14);
  if(match_cons(t, sym__2))
    {
      g_14 = ATgetArgument(t, 0);
      i_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(g_14, i_14, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,x_14 = NULL;
  r_14 = t;
  if(match_cons(t, sym__2))
    {
      s_14 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
      {
        ATerm y_20 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_14(r_14, t);
            LocalPopChoice(b_21);
          }
        else
          {
            t = y_20;
            {
              ATerm g_21 = t;
              int h_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_15(s_14, x_14, r_14, t);
                  LocalPopChoice(h_21);
                }
              else
                {
                  t = g_21;
                  t = f_15(s_14, x_14, r_14, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_14(r_14, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,y_15 = NULL;
  y_15 = t;
  {
    ATerm i_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_15, term_m_21);
        t = l_7(t);
        LocalPopChoice(l_21);
      }
    else
      {
        t = i_21;
        {
          ATerm i_5 = NULL,l_5 = NULL;
          t = term_n_21;
          l_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_21, y_15);
          t = n_7(l_5, y_15, t);
          i_5 = t;
          t = SSL_perror(i_5);
          _fail(t);
        }
      }
  }
  m_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(n_15, t);
  l_15 = t;
  t = m_15;
  t = fclose_0_0(t);
  t = l_15;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_q_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_16 = NULL,i_16 = NULL;
      h_16 = t;
      t = (ATerm) ATinsert(ATempty, term_t_21);
      i_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_16, (ATerm) ATinsert(ATempty, term_t_21));
      t = o_7(h_16, i_16, t);
      LocalPopChoice(s_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = r_21;
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_21 = t;
            if((PushChoice() == 0))
              {
                ATerm j_16 = NULL,o_16 = NULL;
                j_16 = t;
                t = (ATerm) ATinsert(ATempty, term_u_10);
                o_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_16, (ATerm) ATinsert(ATempty, term_u_10));
                t = o_7(j_16, o_16, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_21;
              }
            t = debug_1_0(w_0, t);
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            t = debug_1_0(b_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = debug_1_0(d_1, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_z_21;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = debug_1_0(f_1, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_a_22;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm q_17 = NULL,s_17 = NULL,v_17 = NULL;
  q_17 = t;
  t = term_o_19;
  s_17 = t;
  t = (ATerm) ATinsert(ATempty, term_c_22);
  v_17 = t;
  t = SSL_printnl(s_17, v_17);
  t = q_17;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm w_17 = NULL,y_17 = NULL,a_18 = NULL;
  if(match_cons(t, sym__3))
    {
      w_17 = ATgetArgument(t, 0);
      y_17 = ATgetArgument(t, 1);
      a_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_7(w_17, y_17, a_18, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm b_18 = NULL,i_18 = NULL,l_18 = NULL;
  b_18 = t;
  t = term_o_19;
  i_18 = t;
  t = (ATerm) ATinsert(ATempty, term_i_22);
  l_18 = t;
  t = SSL_printnl(i_18, l_18);
  t = b_18;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
  m_18 = t;
  t = term_o_19;
  n_18 = t;
  t = (ATerm) ATinsert(ATempty, term_c_22);
  o_18 = t;
  t = SSL_printnl(n_18, o_18);
  t = m_18;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,c_17 = NULL,d_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  q_16 = t;
  t = if_verbose5_1_0(c_1, t);
  {
    ATerm j_22 = t;
    if((PushChoice() == 0))
      {
        ATerm m_17 = NULL,n_17 = NULL;
        t = term_o_22;
        m_17 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, q_16);
        n_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATmakeAppl(sym_Imported_1, q_16));
        t = y_7(m_17, n_17, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_22;
      }
  }
  s_16 = t;
  t = term_o_22;
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_22, term_p_22, (ATerm) ATinsert(ATempty, q_16));
  t = lookup_table_0_1(c_17, t);
  l_17 = t;
  t = term_p_22;
  d_17 = t;
  t = (ATerm) ATinsert(ATempty, q_16);
  j_17 = t;
  t = l_17;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(d_17, j_17, k_17, t);
  t = s_16;
  t = if_verbose4_1_0(e_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(h_1, t);
  r_16 = t;
  t = term_o_22;
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_22, r_16);
  t = i_7(m_1, a_17, r_16, t);
  t = if_verbose6_1_0(p_1, t);
  t = term_o_22;
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_22, (ATerm)ATmakeAppl(sym_Imported_1, q_16), (ATerm) ATempty);
  t = lookup_table_0_1(t_16, t);
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, q_16);
  u_16 = t;
  t = (ATerm) ATempty;
  v_16 = t;
  t = z_16;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(u_16, v_16, y_16, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_22, (ATerm)ATmakeAppl(sym_Imported_1, q_16), (ATerm) ATempty);
  t = if_verbose4_1_0(s_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm r_92 (ATerm), ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_19 = ATgetFirst((ATermList) t);
          u_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 = NULL,d_6 = NULL,e_6 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(s_19);
            s_5 = t;
            t = t_19;
            t = r_92(t);
            d_6 = t;
            t = u_19;
            t = filter_1_0(r_92, t);
            e_6 = t;
            t = (ATerm) ATinsert(CheckATermList(e_6), d_6);
            g_1 = t;
            t = SSLsetAnnotations(g_1, s_5);
            LocalPopChoice(t_22);
          }
        else
          {
            t = s_22;
            t = u_19;
            t = filter_1_0(r_92, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm t)
{
  static ATerm e_20 (ATerm t);
  static ATerm e_20 (ATerm t)
  {
    ATerm u_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_82(t);
        t = e_20(t);
        LocalPopChoice(w_22);
      }
    else
      {
        t = u_22;
        t = e_82(t);
      }
    return(t);
  }
  t = e_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_20 = NULL,g_20 = NULL;
      t = term_r_9;
      f_20 = t;
      t = term_z_22;
      g_20 = t;
      t = term_a_23;
      t = y_7(f_20, g_20, t);
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_20 = NULL;
            t = term_f_23;
            h_20 = t;
            t = SSL_getenv(h_20);
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_l_23;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL;
  t = term_o_22;
  r_20 = t;
  t = term_q_23;
  s_20 = t;
  t = term_u_23;
  t = y_7(r_20, s_20, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm w_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_23;
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
  t = term_z_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm l_20 = NULL;
  t = if_verbose5_1_0(t_1, t);
  l_20 = t;
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_20 = NULL,p_20 = NULL;
        t = term_o_22;
        o_20 = t;
        t = term_p_22;
        p_20 = t;
        t = term_g_24;
        t = y_7(o_20, p_20, t);
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        {
          ATerm q_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          q_20 = t;
          t = repeat_2_0(v_1, _id, t);
          t = q_20;
        }
      }
  }
  t = l_20;
  t = if_verbose5_1_0(y_1, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_h_24;
  return(t);
}
static ATerm y_21 (ATerm x_20, ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,c_21 = NULL;
  t = term_o_22;
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_20);
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATmakeAppl(sym_Tool_1, x_20));
  t = y_7(a_21, c_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_24 = ATgetFirst((ATermList) t);
      if(match_cons(i_24, sym__2))
        {
          ATerm l_24 = ATgetArgument(i_24, 0);
          z_20 = ATgetArgument(i_24, 1);
        }
      else
        _fail(t);
      {
        ATerm k_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_20;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_h_24;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_o_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm b_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
      t = if_verbose5_1_0(a_2, t);
      t = xtc_load_0_0(t);
      f_21 = t;
      if(match_cons(t, sym__2))
        {
          d_21 = ATgetArgument(t, 0);
          e_21 = ATgetArgument(t, 1);
          {
            ATerm f_25 = t;
            int i_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_21 = NULL,k_21 = NULL,p_21 = NULL;
                t = term_o_22;
                k_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, d_21);
                p_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATmakeAppl(sym_Tool_1, d_21));
                t = y_7(k_21, p_21, t);
                {
                  static ATerm c_2 (ATerm t);
                  static ATerm c_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((e_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((j_21 != NULL) && (j_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(c_2, t);
                }
                t = not_null(j_21);
                LocalPopChoice(i_25);
              }
            else
              {
                t = f_25;
                t = y_21(f_21, t);
              }
          }
        }
      else
        {
          t = y_21(f_21, t);
        }
      t = if_verbose5_1_0(d_2, t);
      LocalPopChoice(e_25);
    }
  else
    {
      t = b_25;
      {
        ATerm w_21 = NULL,q_6 = NULL,r_6 = NULL;
        w_21 = t;
        t = term_o_19;
        q_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_25), w_21), term_j_25);
        r_6 = t;
        t = SSL_printnl(q_6, r_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_25), w_21), term_j_25);
        t = if_verbose5_1_0(f_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm n_101 (ATerm), ATerm t)
{
  ATerm b_22 = NULL,d_22 = NULL;
  d_22 = t;
  t = n_101(t);
  t = xtc_find_0_0(t);
  b_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_22, d_22);
  {
    static ATerm h_2 (ATerm t);
    static ATerm h_2 (ATerm t)
    {
      ATerm e_22 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, b_22, d_22);
      t = b_7(b_22, d_22, t);
      t = term_l_25;
      e_22 = t;
      t = SSL_exit(e_22);
      return(t);
    }
    t = fork_and_wait_1_0(h_2, t);
  }
  t = d_22;
  return(t);
}
static ATerm m_7 (ATerm x_94 (ATerm), ATerm m_35, ATerm k_35, ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,q_22 = NULL;
  k_22 = t;
  t = x_94(t);
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_22, m_35, k_35);
  t = z_7(f_22, m_35, k_35, t);
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_22 = NULL;
        t = term_o_25;
        r_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_22, term_o_25);
        t = y_7(f_22, r_22, t);
        {
          ATerm p_25 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_25;
            }
        }
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
      g_22 = ATgetFirst((ATermList) t);
      h_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_22, term_o_25, (ATerm) ATinsert(CheckATermList(h_22), (ATerm) ATinsert(CheckATermList(g_22), m_35)));
  t = lookup_table_0_1(f_22, t);
  q_22 = t;
  t = term_o_25;
  l_22 = t;
  t = (ATerm) ATinsert(CheckATermList(h_22), (ATerm) ATinsert(CheckATermList(g_22), m_35));
  m_22 = t;
  t = q_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(l_22, m_22, n_22, t);
  t = k_22;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm v_22 = NULL;
  ATerm q_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_23 = NULL,w_6 = NULL;
      b_23 = t;
      t = term_w_25;
      w_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_23, term_w_25);
      t = n_7(b_23, w_6, t);
      v_22 = t;
      t = SSL_mkstemp(v_22);
      LocalPopChoice(v_25);
    }
  else
    {
      t = q_25;
      {
        ATerm c_23 = NULL;
        t = term_x_25;
        c_23 = t;
        t = SSL_perror(c_23);
        _fail(t);
      }
    }
  return(t);
}
static ATerm n_7 (ATerm q_32, ATerm r_32, ATerm t)
{
  t = SSL_strcat(q_32, r_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
  t = P__tmpdir_0_0(t);
  j_23 = t;
  t = term_z_25;
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_23, term_z_25);
  t = n_7(j_23, k_23, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      h_23 = ATgetArgument(t, 0);
      g_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_b_26;
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_23, term_b_26);
  t = m_7(k_2, h_23, i_23, t);
  t = SSL_close(g_23);
  t = h_23;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL;
  m_23 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_23 = NULL,p_23 = NULL;
      t = m_23;
      t = xtc_new_file_0_0(t);
      o_23 = t;
      t = t_0(t);
      p_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_23, (ATerm) ATinsert(ATinsert(ATempty, o_23), term_s_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_23);
    }
  else
    {
      ATerm r_23 = NULL,s_23 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_23;
      t = xtc_new_file_0_0(t);
      r_23 = t;
      t = t_0(t);
      s_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_23), term_s_9), n_23), term_e_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_23);
    }
  return(t);
}
ATerm debug_1_0 (ATerm g_79 (ATerm), ATerm t)
{
  ATerm t_23 = NULL,v_23 = NULL,x_23 = NULL,y_23 = NULL;
  t_23 = t;
  t = g_79(t);
  v_23 = t;
  t = term_o_19;
  x_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_23), v_23);
  y_23 = t;
  t = SSL_printnl(x_23, y_23);
  t = t_23;
  return(t);
}
ATerm if_verbose5_1_0 (ATerm i_112 (ATerm), ATerm t)
{
  ATerm a_24 = NULL;
  a_24 = t;
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
        t = term_r_9;
        e_24 = t;
        t = term_f_10;
        f_24 = t;
        t = term_j_10;
        t = y_7(e_24, f_24, t);
        d_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_24, term_s_18);
        t = geq_0_0(t);
        t = a_24;
        t = i_112(t);
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = a_24;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_112 (ATerm), ATerm t)
{
  ATerm j_24 = NULL;
  j_24 = t;
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
        t = term_r_9;
        n_24 = t;
        t = term_f_10;
        o_24 = t;
        t = term_j_10;
        t = y_7(n_24, o_24, t);
        m_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_24, term_m_11);
        t = geq_0_0(t);
        t = j_24;
        t = f_112(t);
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        t = j_24;
      }
  }
  return(t);
}
static ATerm o_7 (ATerm y_51, ATerm z_51, ATerm t)
{
  t = SSL_access(y_51, z_51);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,i_1 = NULL;
  r_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_26), term_l_26), r_24);
  w_24 = t;
  t = SSL_concat_strings(w_24);
  v_24 = t;
  t = (ATerm) ATinsert(ATempty, term_u_10);
  u_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_24, (ATerm) ATinsert(ATempty, term_u_10));
  t = o_7(v_24, u_24, t);
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_24, r_24);
  a_25 = t;
  if(match_cons(t, sym__2))
    {
      ATerm n_26 = ATgetArgument(t, 0);
      ATerm o_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_25);
  x_24 = t;
  t = SSL_modification_time(q_24);
  y_24 = t;
  t = SSL_modification_time(r_24);
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_24, z_24);
  i_1 = t;
  t = SSLsetAnnotations(i_1, x_24);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, q_24, r_24);
  t_24 = t;
  t = SSL_explode_term(t_24);
  if(match_cons(t, sym__2))
    {
      ATerm q_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_26 = ATgetArgument(t, 1);
        if(((ATgetType(s_26) == AT_LIST) && !(ATisEmpty(s_26))))
          {
            s_24 = ATgetFirst((ATermList) s_26);
            {
              ATerm t_26 = (ATerm) ATgetNext((ATermList) s_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_24;
  t = if_verbose2_1_0(n_2, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  static ATerm u_25 (ATerm t);
  static ATerm u_25 (ATerm t)
  {
    ATerm v_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_84(t);
        LocalPopChoice(x_26);
      }
    else
      {
        t = v_26;
        {
          ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,g_8 = NULL,k_8 = NULL,q_1 = NULL;
          r_25 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_25 = ATgetFirst((ATermList) t);
              t_25 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_25);
          g_8 = t;
          t = t_25;
          t = u_25(t);
          k_8 = t;
          t = (ATerm) ATinsert(CheckATermList(k_8), s_25);
          q_1 = t;
          t = SSLsetAnnotations(q_1, g_8);
        }
      }
    return(t);
  }
  t = u_25(t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_y_26;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_y_26;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = debug_1_0(m_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_z_26;
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_8 = NULL,y_8 = NULL,a_9 = NULL;
      y_8 = t;
      t = term_c_27;
      a_9 = t;
      t = SSL_explode_string(a_9);
      v_8 = t;
      t = SSL_explode_string(y_8);
      {
        static ATerm s_2 (ATerm t);
        static ATerm s_2 (ATerm t)
        {
          if((v_8 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(s_2, t);
      }
      t = y_8;
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_9 = NULL,h_9 = NULL,i_9 = NULL;
            h_9 = t;
            t = term_f_27;
            i_9 = t;
            t = SSL_explode_string(i_9);
            d_9 = t;
            t = SSL_explode_string(h_9);
            {
              static ATerm u_2 (ATerm t);
              static ATerm u_2 (ATerm t)
              {
                if((d_9 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(u_2, t);
            }
            t = h_9;
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            {
              ATerm a_26 = NULL,c_26 = NULL,d_26 = NULL,f_26 = NULL;
              a_26 = t;
              t = term_o_19;
              d_26 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_26), term_g_27);
              f_26 = t;
              t = SSL_printnl(d_26, f_26);
              t = term_k_10;
              c_26 = t;
              t = SSL_exit(c_26);
              t = (ATerm) ATinsert(ATinsert(ATempty, a_26), term_g_27);
            }
          }
      }
      {
        ATerm h_27 = t;
        int i_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(i_27);
          }
        else
          {
            t = h_27;
            {
              ATerm p_26 = NULL,l_9 = NULL;
              p_26 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_26);
              {
                ATerm j_27 = t;
                int k_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_9 = NULL,q_9 = NULL,j_2 = NULL;
                    q_9 = t;
                    if(match_cons(t, sym_FILE_1))
                      {
                        ATerm l_27 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(q_9);
                    p_9 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, p_26);
                    j_2 = t;
                    t = SSLsetAnnotations(j_2, p_9);
                    LocalPopChoice(k_27);
                    t = xtc_transform_file_2_0(v_2, w_2, t);
                  }
                else
                  {
                    t = j_27;
                    t = xtc_transform_term_2_0(x_2, y_2, t);
                  }
              }
              if(match_cons(t, sym_FILE_1))
                {
                  l_9 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = l_9;
              t = if_verbose2_1_0(a_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_26 = NULL,u_26 = NULL;
      t = term_r_9;
      r_26 = t;
      t = term_q_27;
      u_26 = t;
      t = term_r_27;
      t = y_7(r_26, u_26, t);
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm w_26 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  w_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_26), term_q_27);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = debug_1_0(t_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_s_27;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(n_3, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(p_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_t_27;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_t_27;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_u_27;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL;
  t = term_b_26;
  t = pass_width_0_0(t);
  e_28 = t;
  t = term_b_26;
  t = pass_verbose_0_0(t);
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_28, f_28);
  t = conc_0_0(t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_u_27;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL;
  t = term_b_26;
  t = pass_width_0_0(t);
  h_28 = t;
  t = term_b_26;
  t = pass_verbose_0_0(t);
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_28, i_28);
  t = conc_0_0(t);
  return(t);
}
ATerm ast2text_0_0 (ATerm t)
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_27 = NULL,p_27 = NULL;
      p_27 = t;
      if(match_cons(t, sym_FILE_1))
        {
          o_27 = ATgetArgument(t, 0);
          {
            ATerm z_9 = NULL,l_2 = NULL;
            t = SSLgetAnnotations(p_27);
            z_9 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, o_27);
            l_2 = t;
            t = SSLsetAnnotations(l_2, z_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_27;
        }
      LocalPopChoice(w_27);
      t = xtc_transform_file_2_0(v_3, create_pp_table_args_0_0, t);
    }
  else
    {
      t = v_27;
      t = xtc_transform_term_2_0(z_3, create_pp_table_args_0_0, t);
    }
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_27 = NULL,a_28 = NULL;
        a_28 = t;
        if(match_cons(t, sym_FILE_1))
          {
            x_27 = ATgetArgument(t, 0);
            {
              ATerm r_10 = NULL,m_2 = NULL;
              t = SSLgetAnnotations(a_28);
              r_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_27);
              m_2 = t;
              t = SSLsetAnnotations(m_2, r_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_28;
          }
        LocalPopChoice(z_27);
        t = xtc_transform_file_2_0(b_4, c_4, t);
      }
    else
      {
        t = y_27;
        t = xtc_transform_term_2_0(e_4, f_4, t);
      }
  }
  return(t);
}
static ATerm y_7 (ATerm j_47, ATerm k_47, ATerm t)
{
  ATerm p_28 = NULL;
  t = lookup_table_0_1(j_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(k_47, p_28, t);
  return(t);
}
static ATerm s_7 (ATerm v_45, ATerm w_45, ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL;
  u_28 = t;
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_45, w_45);
        t = y_7(v_45, w_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_28 = ATgetFirst((ATermList) t);
            t_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_28);
        {
          ATerm v_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, v_45, w_45, t_28);
          t = lookup_table_0_1(v_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_8(w_45, t_28, v_28, t);
          t = (ATerm) ATmakeAppl(sym__3, v_45, w_45, t_28);
        }
      }
    else
      {
        t = b_28;
        {
          ATerm x_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, v_45, w_45);
          t = lookup_table_0_1(v_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              x_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_7(w_45, x_28, t);
          t = (ATerm) ATmakeAppl(sym__2, v_45, w_45);
        }
      }
  }
  t = u_28;
  return(t);
}
ATerm end_scope_1_0 (ATerm u_94 (ATerm), ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,g_29 = NULL,h_29 = NULL;
  c_29 = t;
  t = u_94(t);
  b_29 = t;
  {
    ATerm g_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_29 = NULL;
        t = term_o_25;
        i_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_29, term_o_25);
        t = y_7(b_29, i_29, t);
        {
          ATerm k_28 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_28;
            }
        }
        LocalPopChoice(j_28);
      }
    else
      {
        t = g_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_29 = ATgetFirst((ATermList) t);
      z_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_29, term_o_25, z_28);
  t = lookup_table_0_1(b_29, t);
  h_29 = t;
  t = term_o_25;
  d_29 = t;
  t = h_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(d_29, z_28, g_29, t);
  t = a_29;
  {
    static ATerm g_4 (ATerm t);
    static ATerm g_4 (ATerm t)
    {
      ATerm j_29 = NULL;
      j_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_29, j_29);
      t = s_7(b_29, j_29, t);
      return(t);
    }
    t = map_1_0(g_4, t);
  }
  t = c_29;
  return(t);
}
ATerm restore_always_2_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm t)
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_98(t);
      t = n_98(t);
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      t = n_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_94 (ATerm), ATerm t)
{
  ATerm n_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,u_29 = NULL,x_29 = NULL;
  p_29 = t;
  t = t_94(t);
  n_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_29, term_o_25);
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_30 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_28 = ATgetArgument(t, 0);
            ATerm r_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_25;
        c_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_29, term_o_25);
        t = y_7(n_29, c_30, t);
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        t = (ATerm) ATempty;
      }
  }
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_29, term_o_25, (ATerm) ATinsert(CheckATermList(q_29), (ATerm) ATempty));
  t = lookup_table_0_1(n_29, t);
  x_29 = t;
  t = term_o_25;
  r_29 = t;
  t = (ATerm) ATinsert(CheckATermList(q_29), (ATerm) ATempty);
  s_29 = t;
  t = x_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(r_29, s_29, u_29, t);
  t = p_29;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_y_25;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm s_30 = NULL;
  s_30 = t;
  {
    ATerm s_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(s_30);
        LocalPopChoice(w_28);
      }
    else
      {
        t = s_28;
        t = s_30;
      }
  }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm z_100 (ATerm), ATerm t)
{
  ATerm f_30 = NULL;
  static ATerm j_4 (ATerm t);
  static ATerm j_4 (ATerm t)
  {
    ATerm k_30 = NULL;
    k_30 = t;
    {
      ATerm y_28 = t;
      int e_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_30 = NULL,p_30 = NULL;
          t = term_y_25;
          n_30 = t;
          t = term_o_25;
          p_30 = t;
          t = term_f_29;
          t = y_7(n_30, p_30, t);
          LocalPopChoice(e_29);
        }
      else
        {
          t = y_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_30 != NULL) && (f_30 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_30 = ATgetFirst((ATermList) t);
        {
          ATerm k_29 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = f_30;
    t = map_1_0(k_4, t);
    t = k_30;
    t = end_scope_1_0(m_4, t);
    return(t);
  }
  t = begin_scope_1_0(h_4, t);
  t = restore_always_2_0(z_100, j_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_30 = NULL,a_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
  y_30 = t;
  t = term_b_26;
  t = whoami_0_0(t);
  a_31 = t;
  t = term_o_19;
  f_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_29), a_31), term_l_29);
  g_31 = t;
  t = SSL_printnl(f_31, g_31);
  t = term_k_10;
  e_31 = t;
  t = SSL_exit(e_31);
  t = y_30;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm j_31 = NULL;
  j_31 = t;
  if(match_string(t, "-k"))
    {
      t = j_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_31;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm m_31 = NULL,o_31 = NULL,p_31 = NULL;
  m_31 = t;
  t = SSL_string_to_int(m_31);
  o_31 = t;
  t = term_o_29;
  p_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_29, o_31);
  t = b_8(p_31, o_31, t);
  t = m_31;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, p_4, q_4, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm r_31 = NULL;
  r_31 = t;
  if(match_string(t, "-S"))
    {
      t = r_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_31;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL;
  t = term_f_10;
  s_31 = t;
  t = term_v_29;
  t_31 = t;
  t = term_w_29;
  t = b_8(s_31, t_31, t);
  t = term_y_29;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_z_29;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  w_31 = t;
  t = SSL_string_to_int(w_31);
  x_31 = t;
  t = term_f_10;
  y_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_10, x_31);
  t = b_8(y_31, x_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_31);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_a_30;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  t = term_b_30;
  a_32 = t;
  t = term_b_26;
  b_32 = t;
  t = term_d_30;
  t = b_8(a_32, b_32, t);
  t = term_e_30;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_4, t_4, w_4, t);
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      {
        ATerm j_30 = t;
        int l_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_4, y_4, z_4, t);
            LocalPopChoice(l_30);
          }
        else
          {
            t = j_30;
            t = Option_3_0(b_5, f_5, g_5, t);
          }
      }
    }
  return(t);
}
static ATerm b_8 (ATerm v_50, ATerm w_50, ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL;
  t = term_r_9;
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_9, v_50, w_50);
  t = lookup_table_0_1(e_32, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(v_50, w_50, f_32, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_9, v_50, w_50);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm p_32 = NULL,s_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
      t = term_b_26;
      t = h_0(t);
      t_32 = t;
      t = term_m_30;
      u_32 = t;
      t = term_o_30;
      v_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_30, term_o_30, t_32);
      t = z_7(u_32, v_32, t_32, t);
      _fail(t);
    }
  else
    {
      ATerm y_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_32 = ATgetFirst((ATermList) t);
          s_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_32;
      t = d_0(t);
      t = term_b_26;
      t = g_0(t);
      y_32 = t;
      t = (ATerm) ATinsert(CheckATermList(s_32), y_32);
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm c_33 = NULL;
  c_33 = t;
  if(match_string(t, "-o"))
    {
      t = c_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_33;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL;
  d_33 = t;
  t = term_s_9;
  e_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_9, d_33);
  t = b_8(e_33, d_33, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_33);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_5, m_5, n_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm g_33 = NULL;
  g_33 = t;
  if(match_string(t, "-i"))
    {
      t = g_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_33;
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL;
  j_33 = t;
  t = term_e_26;
  k_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_26, j_33);
  t = b_8(k_33, j_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_33);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_r_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_5, r_5, u_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm q_84 (ATerm), ATerm t)
{
  static ATerm q_34 (ATerm t);
  static ATerm q_34 (ATerm t)
  {
    ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
    p_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_34 = ATgetFirst((ATermList) t);
        o_34 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_11 = NULL,v_11 = NULL,i_4 = NULL;
          t = SSLgetAnnotations(p_34);
          o_11 = t;
          t = o_34;
          t = q_34(t);
          v_11 = t;
          t = (ATerm) ATinsert(CheckATermList(v_11), n_34);
          i_4 = t;
          t = SSLsetAnnotations(i_4, o_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_34;
        t = q_84(t);
      }
    return(t);
  }
  t = q_34(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,s_33 = NULL;
  o_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_33;
    }
  else
    {
      static ATerm w_5 (ATerm t);
      static ATerm w_5 (ATerm t)
      {
        t = not_null(s_33);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_33 = ATgetFirst((ATermList) t);
          if(((s_33 != NULL) && (s_33 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_33;
      t = at_end_1_0(w_5, t);
    }
  return(t);
}
static ATerm r_35 (ATerm w_34, ATerm t)
{
  ATerm x_34 = NULL;
  t = SSL_explode_term(w_34);
  if(match_cons(t, sym__2))
    {
      ATerm t_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_34;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,d_35 = NULL;
  d_35 = t;
  if(match_cons(t, sym__2))
    {
      z_34 = ATgetArgument(t, 0);
      a_35 = ATgetArgument(t, 1);
      {
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_5 (ATerm t);
            static ATerm x_5 (ATerm t)
            {
              t = a_35;
              return(t);
            }
            t = z_34;
            t = at_end_1_0(x_5, t);
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
            t = r_35(d_35, t);
          }
      }
    }
  else
    {
      t = r_35(d_35, t);
    }
  return(t);
}
static ATerm q_7 (ATerm b_51, ATerm a_51, ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL;
  t = b_51;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_35 = NULL;
        t = term_r_9;
        z_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_9, b_51);
        t = y_7(z_35, b_51, t);
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = (ATerm) ATempty;
      }
  }
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_51, v_35);
  t = conc_0_0(t);
  u_35 = t;
  t = term_r_9;
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_9, b_51, u_35);
  t = lookup_table_0_1(w_35, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(b_51, u_35, x_35, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_9, b_51, u_35);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  t = term_q_27;
  b_36 = t;
  t = (ATerm) ATinsert(ATempty, a_36);
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_27, (ATerm) ATinsert(ATempty, a_36));
  t = q_7(b_36, c_36, t);
  t = a_36;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_z_30;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_5, z_5, a_6, t);
  return(t);
}
static ATerm z_7 (ATerm q_45, ATerm r_45, ATerm p_45, ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_31 = ATgetArgument(t, 0);
            ATerm h_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        t = y_7(q_45, r_45, t);
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        t = (ATerm) ATempty;
      }
  }
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_45, r_45, (ATerm) ATinsert(CheckATermList(f_36), p_45));
  t = lookup_table_0_1(q_45, t);
  i_36 = t;
  t = (ATerm) ATinsert(CheckATermList(f_36), p_45);
  g_36 = t;
  t = i_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(r_45, g_36, h_36, t);
  t = e_36;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,a_37 = NULL,d_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
      t = term_b_26;
      t = p_0(t);
      e_37 = t;
      t = term_m_30;
      f_37 = t;
      t = term_o_30;
      g_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_30, term_o_30, e_37);
      t = z_7(f_37, g_37, e_37, t);
      _fail(t);
    }
  else
    {
      ATerm n_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_36 = ATgetFirst((ATermList) t);
          t_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_37 = ATgetFirst((ATermList) t);
          d_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_36;
      t = m_0(t);
      t = a_37;
      t = o_0(t);
      n_37 = t;
      t = (ATerm) ATinsert(CheckATermList(d_37), n_37);
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm p_37 = NULL;
  p_37 = t;
  if(match_string(t, "-w"))
    {
      t = p_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = p_37;
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm q_37 = NULL,s_37 = NULL;
  q_37 = t;
  t = term_p_10;
  s_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_10, q_37);
  t = b_8(s_37, q_37, t);
  t = q_37;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_i_31;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
      {
        ATerm n_31 = t;
        int q_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(q_31);
          }
        else
          {
            t = n_31;
            {
              ATerm u_31 = t;
              int v_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(v_31);
                }
              else
                {
                  t = u_31;
                  {
                    ATerm z_31 = t;
                    int c_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(c_32);
                      }
                    else
                      {
                        t = z_31;
                        t = ArgOption_3_0(b_6, f_6, g_6, t);
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
  ATerm t_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_26;
  t = whoami_0_0(t);
  t_37 = t;
  t = term_o_19;
  x_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_32), t_37);
  y_37 = t;
  t = SSL_printnl(x_37, y_37);
  t = term_k_10;
  w_37 = t;
  t = SSL_exit(w_37);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL;
  t = term_r_9;
  z_37 = t;
  t = term_g_32;
  a_38 = t;
  t = term_h_32;
  t = y_7(z_37, a_38, t);
  return(t);
}
static ATerm t_7 (ATerm y_33, ATerm z_33, ATerm t)
{
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_33, z_33);
      LocalPopChoice(j_32);
    }
  else
    {
      t = i_32;
      t = SSL_addr(y_33, z_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm t)
{
  ATerm c_38 = NULL,e_38 = NULL,f_38 = NULL;
  c_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_38;
      t = n_91(t);
    }
  else
    {
      ATerm i_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_38 = ATgetFirst((ATermList) t);
          f_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_38;
      t = foldr_2_0(n_91, o_91, t);
      i_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_38, i_38);
      t = o_91(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_v_29;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL;
  if(match_cons(t, sym__2))
    {
      l_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(l_12, m_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_38 = NULL,g_12 = NULL,h_12 = NULL;
  t = times_0_0(t);
  h_12 = t;
  t = SSL_explode_term(h_12);
  if(match_cons(t, sym__2))
    {
      ATerm k_32 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12;
  t = foldr_2_0(h_6, i_6, t);
  n_38 = t;
  t = SSL_TicksToSeconds(n_38);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_39 = NULL,f_39 = NULL,g_39 = NULL;
  c_39 = t;
  if(match_cons(t, sym__2))
    {
      f_39 = ATgetArgument(t, 0);
      g_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_39;
        if((f_39 != t))
          {
            _fail(t);
          }
        t = c_39;
        LocalPopChoice(m_32);
      }
    else
      {
        t = l_32;
        t = (ATerm) ATmakeAppl(sym__2, f_39, g_39);
        {
          ATerm n_32 = t;
          int o_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_39, g_39);
              LocalPopChoice(o_32);
            }
          else
            {
              t = n_32;
              t = SSL_gtr(f_39, g_39);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_39, g_39);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_112 (ATerm), ATerm t)
{
  ATerm m_39 = NULL;
  m_39 = t;
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
        t = term_r_9;
        s_39 = t;
        t = term_f_10;
        t_39 = t;
        t = term_j_10;
        t = y_7(s_39, t_39, t);
        r_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_39, term_k_10);
        t = geq_0_0(t);
        t = m_39;
        t = e_112(t);
        LocalPopChoice(x_32);
      }
    else
      {
        t = w_32;
        t = m_39;
      }
  }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,z_39 = NULL,a_40 = NULL;
  t = run_time_0_0(t);
  v_39 = t;
  t = term_b_26;
  t = whoami_0_0(t);
  w_39 = t;
  t = term_o_19;
  z_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_32), v_39), term_z_10), w_39);
  a_40 = t;
  t = SSL_printnl(z_39, a_40);
  t = (ATerm) ATmakeAppl(sym__2, term_o_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_32), v_39), term_z_10), w_39));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_29;
  f_40 = t;
  t = SSL_exit(f_40);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm z_40 = NULL,c_41 = NULL;
  c_41 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_41;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          z_40 = ATgetArgument(t, 0);
          {
            ATerm c_13 = NULL,l_4 = NULL;
            t = SSLgetAnnotations(c_41);
            c_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, z_40);
            l_4 = t;
            t = SSLsetAnnotations(l_4, c_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_41;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_102 (ATerm), ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_40 = NULL,p_40 = NULL;
      t = term_r_9;
      m_40 = t;
      t = term_f_33;
      p_40 = t;
      t = term_h_33;
      t = y_7(m_40, p_40, t);
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
      t = fetch_1_0(k_6, t);
    }
  t = u_102(t);
  return(t);
}
static ATerm c_8 (ATerm i_50, ATerm j_50, ATerm k_50, ATerm t)
{
  ATerm e_41 = NULL;
  t = SSL_hashtable_put(k_50, i_50, j_50);
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_41);
  return(t);
}
static ATerm d_8 (ATerm l_50, ATerm m_50, ATerm t)
{
  t = SSL_hashtable_get(m_50, l_50);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_47, ATerm t)
{
  ATerm t_41 = NULL;
  t = table_hashtable_0_0(t);
  t_41 = t;
  {
    ATerm i_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_13 = NULL;
        t = t_41;
        if(match_cons(t, sym_Hashtable_1))
          {
            k_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_8(c_47, k_13, t);
        LocalPopChoice(l_33);
      }
    else
      {
        t = i_33;
        {
          ATerm v_13 = NULL;
          t = c_47;
          t = table_create_0_0(t);
          t = t_41;
          if(match_cons(t, sym_Hashtable_1))
            {
              v_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_8(c_47, v_13, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_50, ATerm r_50, ATerm t)
{
  ATerm w_41 = NULL;
  t = SSL_hashtable_create(q_50, r_50);
  w_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_41);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,b_42 = NULL,c_42 = NULL;
  x_41 = t;
  t = term_m_33;
  b_42 = t;
  t = term_n_33;
  c_42 = t;
  t = x_41;
  t = new_hashtable_0_2(b_42, c_42, t);
  y_41 = t;
  t = x_41;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(x_41, y_41, z_41, t);
  t = x_41;
  return(t);
}
static ATerm v_7 (ATerm n_50, ATerm o_50, ATerm t)
{
  ATerm d_42 = NULL;
  t = SSL_hashtable_remove(o_50, n_50);
  d_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_42);
  return(t);
}
static ATerm w_7 (ATerm s_50, ATerm t)
{
  ATerm e_42 = NULL;
  t = SSL_hashtable_destroy(s_50);
  e_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_42);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_42 = NULL;
  t = SSL_table_hashtable();
  f_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_42);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL;
  g_42 = t;
  t = table_hashtable_0_0(t);
  h_42 = t;
  t = lookup_table_0_1(g_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(j_42, t);
  t = h_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(g_42, i_42, t);
  t = g_42;
  return(t);
}
ATerm map_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  static ATerm b_43 (ATerm t);
  static ATerm b_43 (ATerm t)
  {
    ATerm v_42 = NULL,z_42 = NULL,a_43 = NULL;
    v_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_42;
      }
    else
      {
        ATerm e_14 = NULL,v_14 = NULL,w_14 = NULL,o_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_42 = ATgetFirst((ATermList) t);
            a_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_42);
        e_14 = t;
        t = z_42;
        t = z_83(t);
        v_14 = t;
        t = a_43;
        t = b_43(t);
        w_14 = t;
        t = (ATerm) ATinsert(CheckATermList(w_14), v_14);
        o_4 = t;
        t = SSLsetAnnotations(o_4, e_14);
      }
    return(t);
  }
  t = b_43(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_43 = ATgetFirst((ATermList) t);
      h_43 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_43 = NULL,m_43 = NULL;
        static ATerm l_6 (ATerm t);
        static ATerm l_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_43)), not_null(m_43));
          return(t);
        }
        t = h_43;
        t = l_0(t);
        if(((l_43 != NULL) && (l_43 != t)))
          _fail(t);
        else
          l_43 = t;
        t = g_43;
        t = j_0(t);
        if(((m_43 != NULL) && (m_43 != t)))
          _fail(t);
        else
          m_43 = t;
        t = h_43;
        t = reverse_acc_2_0(j_0, l_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_26;
      t = l_0(t);
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,r_4 = NULL;
  u_43 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_43);
  s_43 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_43);
  r_4 = t;
  t = SSLsetAnnotations(r_4, s_43);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm w_43 = NULL;
  w_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_43), term_q_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL;
  ATerm r_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_43 = NULL,r_43 = NULL;
      t = term_r_9;
      q_43 = t;
      t = term_g_32;
      r_43 = t;
      t = term_h_32;
      t = y_7(q_43, r_43, t);
      LocalPopChoice(t_33);
    }
  else
    {
      t = r_33;
      t = fetch_1_0(m_6, t);
    }
  t = term_u_33;
  t = echo_0_0(t);
  t = term_m_30;
  o_43 = t;
  t = term_o_30;
  p_43 = t;
  t = term_v_33;
  t = y_7(o_43, p_43, t);
  t = reverse_acc_2_0(_id, n_6, t);
  t = map_1_0(o_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  static ATerm t_44 (ATerm t);
  static ATerm t_44 (ATerm t)
  {
    ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
    q_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_44 = ATgetFirst((ATermList) t);
        s_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_33 = t;
      int x_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_15 = NULL,o_15 = NULL,u_4 = NULL;
          t = SSLgetAnnotations(q_44);
          i_15 = t;
          t = r_44;
          t = j_84(t);
          o_15 = t;
          t = (ATerm) ATinsert(CheckATermList(s_44), o_15);
          u_4 = t;
          t = SSLsetAnnotations(u_4, i_15);
          LocalPopChoice(x_33);
        }
      else
        {
          t = w_33;
          {
            ATerm d_16 = NULL,g_16 = NULL,v_4 = NULL;
            t = SSLgetAnnotations(q_44);
            d_16 = t;
            t = s_44;
            t = t_44(t);
            g_16 = t;
            t = (ATerm) ATinsert(CheckATermList(g_16), r_44);
            v_4 = t;
            t = SSLsetAnnotations(v_4, d_16);
          }
        }
    }
    return(t);
  }
  t = t_44(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
  x_44 = t;
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_44;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_34 = ATgetFirst((ATermList) t);
                ATerm d_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_44;
          }
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        t = (ATerm) ATinsert(ATempty, x_44);
      }
  }
  y_44 = t;
  t = term_u_9;
  z_44 = t;
  t = SSL_printnl(z_44, y_44);
  t = x_44;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL;
  t = term_r_9;
  d_45 = t;
  t = term_g_32;
  e_45 = t;
  t = term_h_32;
  t = y_7(d_45, e_45, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL;
  t = term_g_34;
  f_45 = t;
  t = term_b_26;
  g_45 = t;
  t = term_h_34;
  t = b_8(f_45, g_45, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_i_34;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm h_45 = NULL,j_45 = NULL,k_45 = NULL,s_45 = NULL;
  t = term_g_34;
  k_45 = t;
  t = term_b_26;
  s_45 = t;
  t = term_h_34;
  t = b_8(k_45, s_45, t);
  t = term_j_34;
  h_45 = t;
  t = term_b_26;
  j_45 = t;
  t = term_k_34;
  t = b_8(h_45, j_45, t);
  t = term_l_34;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_m_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_6, s_6, u_6, t);
      LocalPopChoice(s_34);
    }
  else
    {
      t = r_34;
      t = Option_3_0(v_6, x_6, c_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_70 (ATerm), ATerm t_70 (ATerm), ATerm t)
{
  ATerm t_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,a_5 = NULL;
  b_46 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_45 = ATgetFirst((ATermList) t);
      y_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_46);
  t_45 = t;
  t = x_45;
  t = s_70(t);
  z_45 = t;
  t = y_45;
  t = t_70(t);
  a_46 = t;
  t = (ATerm) ATinsert(CheckATermList(a_46), z_45);
  a_5 = t;
  t = SSLsetAnnotations(a_5, t_45);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_104 (ATerm), ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,l_46 = NULL,m_46 = NULL,j_5 = NULL;
  g_46 = t;
  {
    ATerm t_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_34;
        t = s_104(t);
        LocalPopChoice(u_34);
      }
    else
      {
        t = t_34;
      }
  }
  t = g_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_46 = ATgetFirst((ATermList) t);
      j_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_46);
  h_46 = t;
  t = term_g_32;
  m_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_32, i_46);
  t = b_8(m_46, i_46, t);
  t = j_46;
  {
    static ATerm l_47 (ATerm t);
    static ATerm l_47 (ATerm t)
    {
      ATerm y_34 = t;
      int b_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_46 = NULL;
              u_46 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_46;
              LocalPopChoice(e_35);
            }
          else
            {
              t = c_35;
              t = s_104(t);
              t = Cons_2_0(_id, l_47, t);
            }
          LocalPopChoice(b_35);
        }
      else
        {
          t = y_34;
          {
            ATerm b_47 = NULL,g_47 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_47 = ATgetFirst((ATermList) t);
                g_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_47), (ATerm) ATmakeAppl(sym_Undefined_1, b_47));
          }
        }
      return(t);
    }
    t = l_47(t);
  }
  l_46 = t;
  t = (ATerm) ATinsert(CheckATermList(l_46), (ATerm) ATmakeAppl(sym_Program_1, i_46));
  j_5 = t;
  t = SSLsetAnnotations(j_5, h_46);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm y_47 = NULL;
  y_47 = t;
  if(match_string(t, "--help"))
    {
      t = y_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_47;
        }
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL;
  t = term_f_33;
  z_47 = t;
  t = term_b_26;
  a_48 = t;
  t = term_f_35;
  t = b_8(z_47, a_48, t);
  t = term_g_35;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_h_35;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_104 (ATerm), ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL;
  s_47 = t;
  t = term_m_30;
  t_47 = t;
  t = term_i_35;
  t = lookup_table_0_1(t_47, t);
  x_47 = t;
  t = term_o_30;
  u_47 = t;
  t = (ATerm) ATempty;
  v_47 = t;
  t = x_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(u_47, v_47, w_47, t);
  t = s_47;
  {
    static ATerm p_7 (ATerm t);
    static ATerm p_7 (ATerm t)
    {
      ATerm j_35 = t;
      int l_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_104(t);
          LocalPopChoice(l_35);
        }
      else
        {
          t = j_35;
          {
            ATerm n_35 = t;
            int o_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_7, x_7, h_8, t);
                LocalPopChoice(o_35);
              }
            else
              {
                t = n_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_7, t);
  }
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_48 = NULL;
        l_48 = t;
        {
          ATerm s_35 = t;
          int t_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_16 = NULL;
              t = l_48;
              {
                ATerm y_35 = t;
                int d_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_17 = NULL,e_17 = NULL;
                    t = term_r_9;
                    b_17 = t;
                    t = term_f_33;
                    e_17 = t;
                    t = term_h_33;
                    t = y_7(b_17, e_17, t);
                    LocalPopChoice(d_36);
                  }
                else
                  {
                    t = y_35;
                    t = fetch_1_0(j_8, t);
                  }
              }
              t = l_48;
              t = default_system_usage_0_0(t);
              t = term_v_29;
              x_16 = t;
              t = SSL_exit(x_16);
              LocalPopChoice(t_35);
            }
          else
            {
              t = s_35;
              {
                ATerm i_17 = NULL,o_17 = NULL,p_17 = NULL;
                t = term_r_9;
                o_17 = t;
                t = term_g_34;
                p_17 = t;
                t = term_j_36;
                t = y_7(o_17, p_17, t);
                t = l_48;
                t = default_system_about_0_0(t);
                t = term_v_29;
                i_17 = t;
                t = SSL_exit(i_17);
              }
            }
        }
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        {
          ATerm k_36 = t;
          int l_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL;
              static ATerm l_8 (ATerm t);
              static ATerm l_8 (ATerm t)
              {
                ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL,v_5 = NULL;
                r_48 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_48 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_48);
                p_48 = t;
                t = q_48;
                if(((q_47 != NULL) && (q_47 != t)))
                  _fail(t);
                else
                  q_47 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_48);
                v_5 = t;
                t = SSLsetAnnotations(v_5, p_48);
                return(t);
              }
              t = fetch_1_0(l_8, t);
              t = term_o_19;
              n_48 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_47)), term_m_36);
              o_48 = t;
              t = SSL_printnl(n_48, o_48);
              t = (ATerm) ATmakeAppl(sym__2, term_o_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_47)), term_m_36));
              t = default_system_usage_0_0(t);
              t = term_k_10;
              m_48 = t;
              t = SSL_exit(m_48);
              LocalPopChoice(l_36);
            }
          else
            {
              t = k_36;
            }
        }
      }
  }
  r_47 = t;
  t = term_m_30;
  t = table_destroy_0_0(t);
  t = r_47;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL;
  t = parse_options_1_0(w_102, t);
  w_48 = t;
  t = term_n_36;
  t = table_create_0_0(t);
  t = term_n_36;
  x_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_36, term_o_36, w_48);
  t = lookup_table_0_1(x_48, t);
  a_49 = t;
  t = term_o_36;
  y_48 = t;
  t = a_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(y_48, w_48, z_48, t);
  t = w_48;
  t = y_102(t);
  {
    ATerm p_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_102, t);
        LocalPopChoice(q_36);
      }
    else
      {
        t = p_36;
        {
          ATerm r_36 = t;
          int u_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_102(t);
              t = report_success_0_0(t);
              LocalPopChoice(u_36);
            }
          else
            {
              t = r_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm v_36 = t;
  int w_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_36 = t;
      int y_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = abox2text_options_0_0(t);
          LocalPopChoice(y_36);
        }
      else
        {
          t = x_36;
          t = pp_options_0_0(t);
        }
      LocalPopChoice(w_36);
    }
  else
    {
      t = v_36;
      {
        ATerm z_36 = t;
        int b_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(b_37);
          }
        else
          {
            t = z_36;
            {
              ATerm c_37 = t;
              int h_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(h_37);
                }
              else
                {
                  t = c_37;
                  {
                    ATerm i_37 = t;
                    int j_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(p_8, s_8, u_8, t);
                        LocalPopChoice(j_37);
                      }
                    else
                      {
                        t = i_37;
                        {
                          ATerm k_37 = t;
                          int l_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(l_37);
                            }
                          else
                            {
                              t = k_37;
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
static ATerm o_8 (ATerm t)
{
  t = xtc_temp_files_1_0(x_8, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL;
  t = term_m_37;
  c_49 = t;
  t = term_b_26;
  d_49 = t;
  t = term_o_37;
  t = b_8(c_49, d_49, t);
  t = term_r_37;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_u_37;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm v_37 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL;
      t = term_r_9;
      g_49 = t;
      t = term_e_26;
      h_49 = t;
      t = term_d_38;
      t = y_7(g_49, h_49, t);
      f_49 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_49);
      LocalPopChoice(b_38);
    }
  else
    {
      t = v_37;
      t = term_x_9;
    }
  t = ast2text_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(n_8, default_usage_0_0, _id, o_8, t);
  return(t);
}
