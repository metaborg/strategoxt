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
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_z_35;
ATerm term_r_35;
ATerm term_n_35;
ATerm term_i_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_p_33;
ATerm term_m_33;
ATerm term_u_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_z_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_l_30;
ATerm term_q_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_f_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_q_28;
ATerm term_o_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_g_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_u_26;
ATerm term_n_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_f_25;
ATerm term_u_24;
ATerm term_o_24;
ATerm term_l_24;
ATerm term_h_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_n_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_m_20;
ATerm term_f_20;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_j_10;
ATerm term_b_10;
ATerm term_u_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_p_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_j_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_10, term_s_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_c_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_g_12, term_h_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_k_12, term_l_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_o_12, term_p_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_u_12, term_v_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_b_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_f_13, term_g_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_k_13, term_m_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_c_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_i_14, term_j_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_o_14, term_p_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_v_14, term_a_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_i_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
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
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_y_15, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_g_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_q_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_z_16, term_a_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_j_17, term_k_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_17, term_p_17, term_v_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_17, term_a_18, term_b_18);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_18, term_f_18, term_g_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_18, term_k_18, term_l_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_18, term_o_18, term_p_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_18, term_w_18, term_x_18);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_t_23);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_g_23, term_c_24);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym__2, term_g_23, term_h_23);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_j_25);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym__2, term_y_20, term_m_20);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym__2, term_j_10, term_d_27);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_27);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym__2, term_k_27, term_a_21);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym__2, term_o_28, term_a_21);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_v_28, term_a_21);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_m_29);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_o_30);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_u_27);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_a_21);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym__2, term_r_31, term_a_21);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, term_o_30, term_a_21);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__3, term_t_27, term_u_27, (ATerm) ATempty);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_l_31);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym__2, term_e_35, term_a_21);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_b_21);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_o_28);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_v_28);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm j_7 (ATerm t_14, ATerm u_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm s_6 (ATerm b_34, ATerm c_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm t_6 (ATerm t_17, ATerm u_17, ATerm t);
static ATerm u_6 (ATerm x_78 (ATerm), ATerm c_186, ATerm d_18, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm t);
static ATerm v_6 (ATerm l_14, ATerm m_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm a_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm m_77 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm q_101 (ATerm), ATerm t);
static ATerm x_6 (ATerm m_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm v_78 (ATerm), ATerm t);
static ATerm y_6 (ATerm k_50, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm r_98 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm q_98 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm s_98 (ATerm), ATerm t);
static ATerm a_7 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t);
static ATerm b_7 (ATerm z_87 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
static ATerm y_0 (ATerm t);
static ATerm c_7 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t);
static ATerm d_7 (ATerm u_98 (ATerm), ATerm s_46, ATerm r_46, ATerm t);
static ATerm i_7 (ATerm t_51, ATerm u_51, ATerm t);
static ATerm d_15 (ATerm r_14, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_7 (ATerm z_17, ATerm t);
static ATerm f_7 (ATerm q_32, ATerm r_32, ATerm t);
static ATerm g_7 (ATerm c_52, ATerm d_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_17 (ATerm x_15, ATerm t);
static ATerm m_17 (ATerm f_16, ATerm h_16, ATerm i_16, ATerm t);
static ATerm n_17 (ATerm r_16, ATerm s_16, ATerm t_16, ATerm t);
static ATerm h_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_92 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm x_23 (ATerm a_23, ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm r_7 (ATerm e_47, ATerm f_47, ATerm t);
ATerm foldr_3_0 (ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
ATerm pass_includes_0_0 (ATerm t);
static ATerm k_7 (ATerm q_45, ATerm r_45, ATerm t);
ATerm end_scope_1_0 (ATerm j_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_94 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm c_101 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_7 (ATerm q_50, ATerm r_50, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm f_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm a_32 (ATerm j_31, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm l_7 (ATerm w_50, ATerm v_50, ATerm t);
static ATerm s_7 (ATerm l_45, ATerm m_45, ATerm k_45, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm pp_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_7 (ATerm v_33, ATerm w_33, ATerm t);
ATerm foldr_2_0 (ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_98 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm need_help_1_0 (ATerm s_102 (ATerm), ATerm t);
static ATerm v_7 (ATerm d_50, ATerm e_50, ATerm f_50, ATerm t);
static ATerm w_7 (ATerm g_50, ATerm h_50, ATerm t);
ATerm lookup_table_0_1 (ATerm x_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm l_50, ATerm m_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm o_7 (ATerm i_50, ATerm j_50, ATerm t);
static ATerm p_7 (ATerm n_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_83 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_104 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm parse_options_1_0 (ATerm p_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm pp_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL;
  k_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = k_1;
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
        t = (ATerm) ATmakeAppl(sym__2, l_1, e_0);
        t = j_7(l_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
        LocalPopChoice(c_9);
      }
    else
      {
        t = a_9;
        {
          ATerm d_9 = t;
          int e_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_0 = NULL;
              t = k_1;
              t = q_0(t);
              z_0 = t;
              {
                ATerm j_9 = t;
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
                            if((l_1 != t))
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
                    t = j_9;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_1, z_0);
              t = j_7(l_1, z_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
              LocalPopChoice(e_9);
            }
          else
            {
              t = d_9;
              t = k_1;
              t = q_0(t);
              if((l_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
            }
        }
      }
  }
  return(t);
}
static ATerm j_7 (ATerm t_14, ATerm u_14, ATerm t)
{
  t = SSL_copy(t_14, u_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm k_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 = NULL,h_2 = NULL;
      t = term_o_9;
      g_2 = t;
      t = term_p_9;
      h_2 = t;
      t = term_q_9;
      t = r_7(g_2, h_2, t);
      LocalPopChoice(n_9);
    }
  else
    {
      t = k_9;
      t = term_u_9;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm e_2 = NULL;
  e_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm n_1 = NULL,q_1 = NULL;
      t = term_p_9;
      {
        ATerm z_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 = NULL,s_1 = NULL;
            t = term_o_9;
            r_1 = t;
            t = term_p_9;
            s_1 = t;
            t = term_q_9;
            t = r_7(r_1, s_1, t);
            LocalPopChoice(a_10);
          }
        else
          {
            t = z_9;
            t = term_u_9;
          }
      }
      n_1 = t;
      t = term_b_10;
      q_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_b_10, n_1);
      t = j_7(q_1, n_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm c_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm s_6 (ATerm b_34, ATerm c_34, ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(b_34, c_34);
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      t = SSL_subtr(b_34, c_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL,c_3 = NULL;
  t = term_j_10;
  {
    ATerm l_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_3 = NULL,e_3 = NULL;
        t = term_o_9;
        d_3 = t;
        t = term_j_10;
        e_3 = t;
        t = term_o_10;
        t = r_7(d_3, e_3, t);
        LocalPopChoice(n_10);
      }
    else
      {
        t = l_10;
        t = term_r_10;
      }
  }
  z_2 = t;
  t = term_r_10;
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_2, term_r_10);
  t = s_6(z_2, c_3, t);
  a_3 = t;
  t = SSL_int_to_string(a_3);
  y_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_2), term_j_10);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm k_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_b_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm o_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_x_10);
      o_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_3, (ATerm) ATinsert(ATempty, term_x_10));
      t = i_7(k_3, o_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm t_6 (ATerm t_17, ATerm u_17, ATerm t)
{
  ATerm q_3 = NULL;
  t = SSL_write_term_to_stream_baf(t_17, u_17);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_3);
  return(t);
}
static ATerm u_6 (ATerm x_78 (ATerm), ATerm c_186, ATerm d_18, ATerm t)
{
  ATerm r_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_186, term_z_10);
  t = h_7(t);
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_3, d_18);
  t = x_78(t);
  t = fclose_0_0(t);
  t = d_18;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm v_3 = NULL,x_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_11 = ATgetArgument(t, 0);
      if(match_cons(c_11, sym_Stream_1))
        {
          v_3 = ATgetArgument(c_11, 0);
        }
      else
        _fail(t);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(v_3, x_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL;
  u_3 = t;
  t = xtc_new_file_0_0(t);
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_3, u_3);
  t = u_6(b_0, t_3, u_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_3);
  t = xtc_transform_file_2_0(p_100, q_100, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm v_6 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_execvp(l_14, m_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
  u_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      v_4 = ATgetArgument(t, 0);
      {
        ATerm a_2 = NULL,c_2 = NULL;
        t = SSL_int_to_string(v_4);
        a_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_11), a_2), term_d_11);
        c_2 = t;
        t = SSL_concat_strings(c_2);
      }
    }
  else
    {
      ATerm r_2 = NULL,s_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          v_4 = ATgetArgument(t, 0);
          w_4 = ATgetArgument(t, 1);
          x_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(w_4);
      r_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_4), term_j_11), r_2), term_g_11), v_4);
      s_2 = t;
      t = SSL_concat_strings(s_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm f_5 = NULL;
  static ATerm c_0 (ATerm t)
  {
    t = a_84(t);
    if(((f_5 != NULL) && (f_5 != t)))
      _fail(t);
    else
      f_5 = t;
    return(t);
  }
  t = fetch_1_0(c_0, t);
  t = not_null(f_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm g_5 = NULL;
  g_5 = t;
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm o_11 = ATgetArgument(t, 0);
              if((g_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm p_11 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_18), term_u_18), term_m_18), term_h_18), term_c_18), term_x_17), term_l_17), term_c_17), term_v_16), term_m_16), term_c_16), term_v_15), term_q_15), term_j_15), term_c_15), term_q_14), term_k_14), term_d_14), term_w_13), term_s_13), term_h_13), term_c_13), term_y_12), term_r_12), term_m_12), term_i_12), term_e_12), term_t_11);
        t = fetch_elem_1_0(f_0, t);
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, g_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_5 = NULL,c_6 = NULL;
  n_5 = t;
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_19 = ATgetArgument(t, 0);
            c_6 = ATgetArgument(t, 1);
            {
              ATerm n_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_19);
        {
          ATerm o_19 = t;
          int p_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_3 = NULL,h_3 = NULL,j_3 = NULL;
              t = c_6;
              {
                ATerm q_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_19;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              f_3 = t;
              t = term_r_19;
              h_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_3), term_t_19);
              j_3 = t;
              t = SSL_printnl(h_3, j_3);
              t = (ATerm) ATmakeAppl(sym__2, term_r_19, (ATerm) ATinsert(ATinsert(ATempty, f_3), term_t_19));
              LocalPopChoice(p_19);
            }
          else
            {
              t = o_19;
              t = n_5;
            }
        }
      }
    else
      {
        t = g_19;
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
ATerm fork_and_wait_1_0 (ATerm m_77 (ATerm), ATerm t)
{
  ATerm w_6 = NULL,z_6 = NULL;
  z_6 = t;
  t = fork_0_0(t);
  w_6 = t;
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = z_6;
        t = m_77(t);
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        t = SSL_waitpid(w_6);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_19 = ATgetArgument(t, 0);
            if(((ATgetType(w_19) != AT_INT) || (ATgetInt((ATermInt) w_19) != 0)))
              _fail(t);
            {
              ATerm y_19 = ATgetArgument(t, 1);
            }
            {
              ATerm e_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_6;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm q_101 (ATerm), ATerm t)
{
  ATerm q_7 = NULL,x_7 = NULL;
  x_7 = t;
  t = q_101(t);
  t = xtc_find_0_0(t);
  q_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_7, x_7);
  {
    static ATerm i_0 (ATerm t)
    {
      ATerm y_7 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, q_7, x_7);
      t = v_6(q_7, x_7, t);
      t = term_f_20;
      y_7 = t;
      t = SSL_exit(y_7);
      return(t);
    }
    t = fork_and_wait_1_0(i_0, t);
  }
  t = x_7;
  return(t);
}
static ATerm x_6 (ATerm m_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t)
{
  ATerm b_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,j_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL;
  g_8 = t;
  t = m_94(t);
  b_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_8, j_35, h_35);
  t = s_7(b_8, j_35, h_35, t);
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_8 = NULL;
        t = term_m_20;
        t_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_8, term_m_20);
        t = r_7(b_8, t_8, t);
        {
          ATerm q_20 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_20;
            }
        }
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_8 = ATgetFirst((ATermList) t);
      f_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_8, term_m_20, (ATerm) ATinsert(CheckATermList(f_8), (ATerm) ATinsert(CheckATermList(e_8), j_35)));
  t = lookup_table_0_1(b_8, t);
  n_8 = t;
  t = term_m_20;
  j_8 = t;
  t = (ATerm) ATinsert(CheckATermList(f_8), (ATerm) ATinsert(CheckATermList(e_8), j_35));
  l_8 = t;
  t = n_8;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(j_8, l_8, m_8, t);
  t = g_8;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm v_8 = NULL;
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_9 = NULL,s_3 = NULL;
      g_9 = t;
      t = term_t_20;
      s_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_9, term_t_20);
      t = f_7(g_9, s_3, t);
      v_8 = t;
      t = SSL_mkstemp(v_8);
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm h_9 = NULL;
        t = term_v_20;
        h_9 = t;
        t = SSL_perror(h_9);
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
static ATerm k_0 (ATerm t)
{
  t = term_y_20;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL;
  t = P__tmpdir_0_0(t);
  s_9 = t;
  t = term_z_20;
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_9, term_z_20);
  t = f_7(s_9, t_9, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_a_21;
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_9, term_a_21);
  t = x_6(k_0, m_9, r_9, t);
  t = SSL_close(l_9);
  t = m_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL;
  v_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_9 = NULL,y_9 = NULL;
      t = v_9;
      t = xtc_new_file_0_0(t);
      x_9 = t;
      t = t_0(t);
      y_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_9, (ATerm) ATinsert(ATinsert(ATempty, x_9), term_p_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_9);
    }
  else
    {
      ATerm d_10 = NULL,e_10 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_9;
      t = xtc_new_file_0_0(t);
      d_10 = t;
      t = t_0(t);
      e_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_10), term_p_9), w_9), term_b_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_10);
    }
  return(t);
}
ATerm debug_1_0 (ATerm v_78 (ATerm), ATerm t)
{
  ATerm f_10 = NULL,k_10 = NULL,m_10 = NULL,p_10 = NULL;
  f_10 = t;
  t = v_78(t);
  k_10 = t;
  t = term_r_19;
  m_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_10), k_10);
  p_10 = t;
  t = SSL_printnl(m_10, p_10);
  t = f_10;
  return(t);
}
static ATerm y_6 (ATerm k_50, ATerm t)
{
  t = SSL_hashtable_keys(k_50);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_10 = NULL,s_10 = NULL;
  static ATerm n_0 (ATerm t)
  {
    ATerm t_10 = NULL,u_10 = NULL;
    t_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_10), t_10);
    t = r_7(not_null(q_10), t_10, t);
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
  t = y_6(s_10, t);
  t = map_1_0(n_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm r_98 (ATerm), ATerm t)
{
  ATerm w_10 = NULL;
  w_10 = t;
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_10 = NULL,a_11 = NULL,b_11 = NULL;
        t = term_o_9;
        a_11 = t;
        t = term_j_10;
        b_11 = t;
        t = term_o_10;
        t = r_7(a_11, b_11, t);
        y_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_10, term_f_18);
        t = geq_0_0(t);
        t = w_10;
        t = r_98(t);
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        t = w_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm q_98 (ATerm), ATerm t)
{
  ATerm f_11 = NULL;
  f_11 = t;
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL,i_11 = NULL,n_11 = NULL;
        t = term_o_9;
        i_11 = t;
        t = term_j_10;
        n_11 = t;
        t = term_o_10;
        t = r_7(i_11, n_11, t);
        h_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_11, term_i_14);
        t = geq_0_0(t);
        t = f_11;
        t = q_98(t);
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = f_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  ATerm v_11 = NULL;
  v_11 = t;
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
        t = term_o_9;
        a_12 = t;
        t = term_j_10;
        b_12 = t;
        t = term_o_10;
        t = r_7(a_12, b_12, t);
        z_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_11, term_k_12);
        t = geq_0_0(t);
        t = v_11;
        t = s_98(t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = v_11;
      }
  }
  return(t);
}
static ATerm a_7 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  t = d_88(t);
  {
    static ATerm s_0 (ATerm t)
    {
      ATerm d_12 = NULL;
      d_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_25, d_12);
      t = c_88(t);
      return(t);
    }
    t = fetch_1_0(s_0, t);
  }
  t = g_25;
  return(t);
}
static ATerm b_7 (ATerm z_87 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  static ATerm l_13 (ATerm t)
  {
    ATerm t_12 = NULL,w_12 = NULL,d_13 = NULL;
    t_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_12 = ATgetFirst((ATermList) t);
            d_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_21 = t;
          int j_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_12;
              {
                static ATerm v_0 (ATerm t)
                {
                  t = c_25;
                  return(t);
                }
                t = a_7(z_87, v_0, w_12, d_13, t);
              }
              t = l_13(t);
              LocalPopChoice(j_21);
            }
          else
            {
              t = i_21;
              {
                ATerm b_4 = NULL,n_4 = NULL,u_0 = NULL;
                t = SSLgetAnnotations(t_12);
                b_4 = t;
                t = d_13;
                t = l_13(t);
                n_4 = t;
                t = (ATerm) ATinsert(CheckATermList(n_4), w_12);
                u_0 = t;
                t = SSLsetAnnotations(u_0, b_4);
              }
            }
        }
      }
    return(t);
  }
  t = d_25;
  t = l_13(t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm z_13 = NULL;
  if(match_cons(t, sym__2))
    {
      z_13 = ATgetArgument(t, 0);
      if((z_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_7 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL;
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_21 = ATgetArgument(t, 0);
            ATerm n_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
        t = r_7(i_46, j_46, t);
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        t = (ATerm) ATempty;
      }
  }
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_13, k_46);
  t = b_7(y_0, q_13, k_46, t);
  p_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_46, j_46, p_13);
  t = lookup_table_0_1(i_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(j_46, p_13, r_13, t);
  t = o_13;
  return(t);
}
static ATerm d_7 (ATerm u_98 (ATerm), ATerm s_46, ATerm r_46, ATerm t)
{
  static ATerm b_1 (ATerm t)
  {
    ATerm a_14 = NULL,b_14 = NULL;
    if(match_cons(t, sym__2))
      {
        a_14 = ATgetArgument(t, 0);
        b_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, s_46, a_14, b_14);
    t = u_98(t);
    return(t);
  }
  t = r_46;
  t = map_1_0(b_1, t);
  return(t);
}
static ATerm i_7 (ATerm t_51, ATerm u_51, ATerm t)
{
  t = SSL_access(t_51, u_51);
  return(t);
}
static ATerm d_15 (ATerm r_14, ATerm t)
{
  t = SSL_fclose(r_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_14 = NULL,b_15 = NULL;
  b_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_14 = ATgetArgument(t, 0);
      {
        ATerm o_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_14);
            LocalPopChoice(p_21);
          }
        else
          {
            t = o_21;
            t = d_15(b_15, t);
          }
      }
    }
  else
    {
      t = d_15(b_15, t);
    }
  return(t);
}
static ATerm e_7 (ATerm z_17, ATerm t)
{
  t = SSL_read_term_from_stream(z_17);
  return(t);
}
static ATerm f_7 (ATerm q_32, ATerm r_32, ATerm t)
{
  t = SSL_strcat(q_32, r_32);
  return(t);
}
static ATerm g_7 (ATerm c_52, ATerm d_52, ATerm t)
{
  ATerm e_15 = NULL;
  t = SSL_fopen(c_52, d_52);
  e_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_15);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_15 = NULL;
  t = SSL_stdin_stream();
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_15);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_15 = NULL;
  t = SSL_stdout_stream();
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_15 = NULL;
  t = SSL_stderr_stream();
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_15);
  return(t);
}
static ATerm i_17 (ATerm x_15, ATerm t)
{
  ATerm a_16 = NULL;
  t = SSL_explode_term(x_15);
  if(match_cons(t, sym__2))
    {
      ATerm q_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_21 = ATgetArgument(t, 1);
        if(((ATgetType(r_21) == AT_LIST) && !(ATisEmpty(r_21))))
          {
            a_16 = ATgetFirst((ATermList) r_21);
            {
              ATerm s_21 = (ATerm) ATgetNext((ATermList) r_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_16;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_16;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_16;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_16;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_17 (ATerm f_16, ATerm h_16, ATerm i_16, ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,p_16 = NULL,w_0 = NULL;
  t = SSLgetAnnotations(i_16);
  l_16 = t;
  t = f_16;
  if(match_cons(t, sym_Path_1))
    {
      p_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_16, h_16);
  w_0 = t;
  t = SSLsetAnnotations(w_0, l_16);
  if(match_cons(t, sym__2))
    {
      j_16 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(j_16, k_16, t);
  return(t);
}
static ATerm n_17 (ATerm r_16, ATerm s_16, ATerm t_16, ATerm t)
{
  ATerm u_16 = NULL,x_16 = NULL,y_16 = NULL,b_17 = NULL,x_0 = NULL;
  t = SSLgetAnnotations(t_16);
  y_16 = t;
  t = SSL_is_string(r_16);
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_17, s_16);
  x_0 = t;
  t = SSLsetAnnotations(x_0, y_16);
  if(match_cons(t, sym__2))
    {
      u_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(u_16, x_16, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL;
  f_17 = t;
  if(match_cons(t, sym__2))
    {
      g_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
      {
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_17(f_17, t);
            LocalPopChoice(u_21);
          }
        else
          {
            t = t_21;
            {
              ATerm w_21 = t;
              int z_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_17(g_17, h_17, f_17, t);
                  LocalPopChoice(z_21);
                }
              else
                {
                  t = w_21;
                  t = n_17(g_17, h_17, f_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_17(f_17, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,w_17 = NULL,i_18 = NULL;
  i_18 = t;
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_18, term_c_22);
        t = h_7(t);
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        {
          ATerm p_5 = NULL,s_5 = NULL;
          t = term_d_22;
          s_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_22, i_18);
          t = f_7(s_5, i_18, t);
          p_5 = t;
          t = SSL_perror(p_5);
          _fail(t);
        }
      }
  }
  s_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_7(w_17, t);
  r_17 = t;
  t = s_17;
  t = fclose_0_0(t);
  t = r_17;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_e_22;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_g_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm h_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_18 = NULL,r_18 = NULL;
      q_18 = t;
      t = (ATerm) ATinsert(ATempty, term_n_22);
      r_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_18, (ATerm) ATinsert(ATempty, term_n_22));
      t = i_7(q_18, r_18, t);
      LocalPopChoice(l_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = h_22;
      {
        ATerm o_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_22 = t;
            if((PushChoice() == 0))
              {
                ATerm s_18 = NULL,t_18 = NULL;
                s_18 = t;
                t = (ATerm) ATinsert(ATempty, term_x_10);
                t_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_18, (ATerm) ATinsert(ATempty, term_x_10));
                t = i_7(s_18, t_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_22;
              }
            t = debug_1_0(c_1, t);
            LocalPopChoice(u_22);
          }
        else
          {
            t = o_22;
            t = debug_1_0(d_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = debug_1_0(f_1, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_w_22;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = debug_1_0(j_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_x_22;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,g_20 = NULL;
  c_20 = t;
  t = term_r_19;
  d_20 = t;
  t = (ATerm) ATinsert(ATempty, term_y_22);
  g_20 = t;
  t = SSL_printnl(d_20, g_20);
  t = c_20;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm h_20 = NULL,k_20 = NULL,l_20 = NULL;
  if(match_cons(t, sym__3))
    {
      h_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
      l_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_7(h_20, k_20, l_20, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  n_20 = t;
  t = term_r_19;
  o_20 = t;
  t = (ATerm) ATinsert(ATempty, term_z_22);
  p_20 = t;
  t = SSL_printnl(o_20, p_20);
  t = n_20;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm u_20 = NULL,w_20 = NULL,x_20 = NULL;
  u_20 = t;
  t = term_r_19;
  w_20 = t;
  t = (ATerm) ATinsert(ATempty, term_y_22);
  x_20 = t;
  t = SSL_printnl(w_20, x_20);
  t = u_20;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm y_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,m_19 = NULL,s_19 = NULL,x_19 = NULL,z_19 = NULL;
  y_18 = t;
  t = if_verbose5_1_0(e_1, t);
  {
    ATerm b_23 = t;
    if((PushChoice() == 0))
      {
        ATerm a_20 = NULL,b_20 = NULL;
        t = term_g_23;
        a_20 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, y_18);
        b_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_23, (ATerm) ATmakeAppl(sym_Imported_1, y_18));
        t = r_7(a_20, b_20, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_23;
      }
  }
  b_19 = t;
  t = term_g_23;
  k_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_23, term_h_23, (ATerm) ATinsert(ATempty, y_18));
  t = lookup_table_0_1(k_19, t);
  z_19 = t;
  t = term_h_23;
  m_19 = t;
  t = (ATerm) ATinsert(ATempty, y_18);
  s_19 = t;
  t = z_19;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(m_19, s_19, x_19, t);
  t = b_19;
  t = if_verbose4_1_0(h_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(m_1, t);
  a_19 = t;
  t = term_g_23;
  j_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_23, a_19);
  t = d_7(p_1, j_19, a_19, t);
  t = if_verbose6_1_0(t_1, t);
  t = term_g_23;
  c_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_23, (ATerm)ATmakeAppl(sym_Imported_1, y_18), (ATerm) ATempty);
  t = lookup_table_0_1(c_19, t);
  i_19 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, y_18);
  d_19 = t;
  t = (ATerm) ATempty;
  e_19 = t;
  t = i_19;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(d_19, e_19, f_19, t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_23, (ATerm)ATmakeAppl(sym_Imported_1, y_18), (ATerm) ATempty);
  t = if_verbose4_1_0(v_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm g_92 (ATerm), ATerm t)
{
  ATerm v_21 = NULL,x_21 = NULL,y_21 = NULL;
  v_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_21;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_21 = ATgetFirst((ATermList) t);
          y_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_6 = NULL,h_6 = NULL,i_6 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(v_21);
            a_6 = t;
            t = x_21;
            t = g_92(t);
            h_6 = t;
            t = y_21;
            t = filter_1_0(g_92, t);
            i_6 = t;
            t = (ATerm) ATinsert(CheckATermList(i_6), h_6);
            g_1 = t;
            t = SSLsetAnnotations(g_1, a_6);
            LocalPopChoice(l_23);
          }
        else
          {
            t = i_23;
            t = y_21;
            t = filter_1_0(g_92, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm t)
{
  static ATerm f_22 (ATerm t)
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_81(t);
        t = f_22(t);
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = t_81(t);
      }
    return(t);
  }
  t = f_22(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm o_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_22 = NULL,j_22 = NULL;
      t = term_o_9;
      i_22 = t;
      t = term_t_23;
      j_22 = t;
      t = term_u_23;
      t = r_7(i_22, j_22, t);
      LocalPopChoice(s_23);
    }
  else
    {
      t = o_23;
      {
        ATerm v_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_22 = NULL;
            t = term_z_23;
            k_22 = t;
            t = SSL_getenv(k_22);
            LocalPopChoice(y_23);
          }
        else
          {
            t = v_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_a_24;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL;
  t = term_g_23;
  s_22 = t;
  t = term_c_24;
  t_22 = t;
  t = term_d_24;
  t = r_7(s_22, t_22, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm g_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_24;
      }
  }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_h_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm m_22 = NULL;
  t = if_verbose5_1_0(w_1, t);
  m_22 = t;
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_22 = NULL,q_22 = NULL;
        t = term_g_23;
        p_22 = t;
        t = term_h_23;
        q_22 = t;
        t = term_l_24;
        t = r_7(p_22, q_22, t);
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        {
          ATerm r_22 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          r_22 = t;
          t = repeat_2_0(y_1, _id, t);
          t = r_22;
        }
      }
  }
  t = m_22;
  t = if_verbose5_1_0(b_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_o_24;
  return(t);
}
static ATerm x_23 (ATerm a_23, ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
  t = term_g_23;
  d_23 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, a_23);
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_23, (ATerm) ATmakeAppl(sym_Tool_1, a_23));
  t = r_7(d_23, e_23, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_24 = ATgetFirst((ATermList) t);
      if(match_cons(p_24, sym__2))
        {
          ATerm r_24 = ATgetArgument(p_24, 0);
          c_23 = ATgetArgument(p_24, 1);
        }
      else
        _fail(t);
      {
        ATerm q_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_23;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_o_24;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_g_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm w_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_23 = NULL,j_23 = NULL,k_23 = NULL;
      t = if_verbose5_1_0(i_2, t);
      t = xtc_load_0_0(t);
      k_23 = t;
      if(match_cons(t, sym__2))
        {
          f_23 = ATgetArgument(t, 0);
          j_23 = ATgetArgument(t, 1);
          {
            ATerm b_25 = t;
            int e_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
                t = term_g_23;
                q_23 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, f_23);
                r_23 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_23, (ATerm) ATmakeAppl(sym_Tool_1, f_23));
                t = r_7(q_23, r_23, t);
                {
                  static ATerm k_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((j_23 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((p_23 != NULL) && (p_23 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(k_2, t);
                }
                t = not_null(p_23);
                LocalPopChoice(e_25);
              }
            else
              {
                t = b_25;
                t = x_23(k_23, t);
              }
          }
        }
      else
        {
          t = x_23(k_23, t);
        }
      t = if_verbose5_1_0(l_2, t);
      LocalPopChoice(a_25);
    }
  else
    {
      t = w_24;
      {
        ATerm w_23 = NULL,r_6 = NULL,t_7 = NULL;
        w_23 = t;
        t = term_r_19;
        r_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_25), w_23), term_f_25);
        t_7 = t;
        t = SSL_printnl(r_6, t_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_25), w_23), term_f_25);
        t = if_verbose5_1_0(n_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm r_7 (ATerm e_47, ATerm f_47, ATerm t)
{
  ATerm b_24 = NULL;
  t = lookup_table_0_1(e_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(f_47, b_24, t);
  return(t);
}
ATerm foldr_3_0 (ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,i_24 = NULL;
  e_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_24;
      t = e_91(t);
    }
  else
    {
      ATerm m_24 = NULL,n_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_24 = ATgetFirst((ATermList) t);
          i_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_24;
      t = g_91(t);
      m_24 = t;
      t = i_24;
      t = foldr_3_0(e_91, f_91, g_91, t);
      n_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_24, n_24);
      t = f_91(t);
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_24), term_j_25);
  return(t);
}
ATerm pass_includes_0_0 (ATerm t)
{
  t = term_j_25;
  {
    ATerm k_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_24 = NULL,t_24 = NULL;
        t = term_o_9;
        s_24 = t;
        t = term_j_25;
        t_24 = t;
        t = term_n_25;
        t = r_7(s_24, t_24, t);
        LocalPopChoice(m_25);
      }
    else
      {
        t = k_25;
        t = (ATerm) ATempty;
      }
  }
  t = foldr_3_0(_id, conc_0_0, p_2, t);
  return(t);
}
static ATerm k_7 (ATerm q_45, ATerm r_45, ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  y_24 = t;
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        t = r_7(q_45, r_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_25 = ATgetFirst((ATermList) t);
            x_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_25);
        {
          ATerm z_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, q_45, r_45, x_24);
          t = lookup_table_0_1(q_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              z_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_7(r_45, x_24, z_24, t);
          t = (ATerm) ATmakeAppl(sym__3, q_45, r_45, x_24);
        }
      }
    else
      {
        t = o_25;
        {
          ATerm l_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
          t = lookup_table_0_1(q_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_7(r_45, l_25, t);
          t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        }
      }
  }
  t = y_24;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_94 (ATerm), ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,w_25 = NULL,z_25 = NULL;
  t_25 = t;
  t = j_94(t);
  s_25 = t;
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_26 = NULL;
        t = term_m_20;
        b_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_25, term_m_20);
        t = r_7(s_25, b_26, t);
        {
          ATerm a_26 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_26;
            }
        }
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_25 = ATgetFirst((ATermList) t);
      q_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_25, term_m_20, q_25);
  t = lookup_table_0_1(s_25, t);
  z_25 = t;
  t = term_m_20;
  u_25 = t;
  t = z_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(u_25, q_25, w_25, t);
  t = r_25;
  {
    static ATerm q_2 (ATerm t)
    {
      ATerm f_26 = NULL;
      f_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_25, f_26);
      t = k_7(s_25, f_26, t);
      return(t);
    }
    t = map_1_0(q_2, t);
  }
  t = t_25;
  return(t);
}
ATerm restore_always_2_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_98(t);
      t = c_98(t);
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      t = c_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_94 (ATerm), ATerm t)
{
  ATerm h_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
  j_26 = t;
  t = i_94(t);
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_26, term_m_20);
  {
    ATerm e_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_26 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_26 = ATgetArgument(t, 0);
            ATerm m_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_m_20;
        y_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_26, term_m_20);
        t = r_7(h_26, y_26, t);
        LocalPopChoice(g_26);
      }
    else
      {
        t = e_26;
        t = (ATerm) ATempty;
      }
  }
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_26, term_m_20, (ATerm) ATinsert(CheckATermList(k_26), (ATerm) ATempty));
  t = lookup_table_0_1(h_26, t);
  s_26 = t;
  t = term_m_20;
  l_26 = t;
  t = (ATerm) ATinsert(CheckATermList(k_26), (ATerm) ATempty);
  q_26 = t;
  t = s_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(l_26, q_26, r_26, t);
  t = j_26;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm s_27 = NULL;
  s_27 = t;
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(s_27);
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = s_27;
      }
  }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_y_20;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm b_27 = NULL;
  static ATerm u_2 (ATerm t)
  {
    ATerm c_27 = NULL;
    c_27 = t;
    {
      ATerm p_26 = t;
      int t_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_27 = NULL,h_27 = NULL;
          t = term_y_20;
          f_27 = t;
          t = term_m_20;
          h_27 = t;
          t = term_u_26;
          t = r_7(f_27, h_27, t);
          LocalPopChoice(t_26);
        }
      else
        {
          t = p_26;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((b_27 != NULL) && (b_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          b_27 = ATgetFirst((ATermList) t);
        {
          ATerm v_26 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = b_27;
    t = map_1_0(v_2, t);
    t = c_27;
    t = end_scope_1_0(w_2, t);
    return(t);
  }
  t = begin_scope_1_0(t_2, t);
  t = restore_always_2_0(c_101, u_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,a_28 = NULL,b_28 = NULL,e_28 = NULL;
  x_27 = t;
  t = term_a_21;
  t = whoami_0_0(t);
  y_27 = t;
  t = term_r_19;
  b_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_26), y_27), term_w_26);
  e_28 = t;
  t = SSL_printnl(b_28, e_28);
  t = term_r_10;
  a_28 = t;
  t = SSL_exit(a_28);
  t = x_27;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  if(match_string(t, "-k"))
    {
      t = g_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_28;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,p_28 = NULL;
  i_28 = t;
  t = SSL_string_to_int(i_28);
  j_28 = t;
  t = term_z_26;
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_26, j_28);
  t = u_7(p_28, j_28, t);
  t = i_28;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_3, g_3, i_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  if(match_string(t, "-S"))
    {
      t = r_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_28;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL;
  t = term_j_10;
  s_28 = t;
  t = term_d_27;
  t_28 = t;
  t = term_e_27;
  t = u_7(s_28, t_28, t);
  t = term_g_27;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_i_27;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
  w_28 = t;
  t = SSL_string_to_int(w_28);
  x_28 = t;
  t = term_j_10;
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, x_28);
  t = u_7(y_28, x_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_28);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_j_27;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL;
  t = term_k_27;
  z_28 = t;
  t = term_a_21;
  a_29 = t;
  t = term_l_27;
  t = u_7(z_28, a_29, t);
  t = term_m_27;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_3, m_3, n_3, t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm q_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_3, w_3, y_3, t);
            LocalPopChoice(r_27);
          }
        else
          {
            t = q_27;
            t = Option_3_0(z_3, a_4, c_4, t);
          }
      }
    }
  return(t);
}
static ATerm u_7 (ATerm q_50, ATerm r_50, ATerm t)
{
  ATerm b_29 = NULL,e_29 = NULL;
  t = term_o_9;
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, q_50, r_50);
  t = lookup_table_0_1(b_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(q_50, r_50, e_29, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, q_50, r_50);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm k_29 = NULL,n_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_29 = NULL,p_29 = NULL,r_29 = NULL;
      t = term_a_21;
      t = h_0(t);
      o_29 = t;
      t = term_t_27;
      p_29 = t;
      t = term_u_27;
      r_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_27, term_u_27, o_29);
      t = s_7(p_29, r_29, o_29, t);
      _fail(t);
    }
  else
    {
      ATerm w_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_29 = ATgetFirst((ATermList) t);
          n_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_29;
      t = d_0(t);
      t = term_a_21;
      t = g_0(t);
      w_29 = t;
      t = (ATerm) ATinsert(CheckATermList(n_29), w_29);
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  if(match_string(t, "-o"))
    {
      t = y_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_29;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  z_29 = t;
  t = term_p_9;
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, z_29);
  t = u_7(a_30, z_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_29);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_v_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_4, f_4, h_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm c_30 = NULL;
  c_30 = t;
  if(match_string(t, "-i"))
    {
      t = c_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_30;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL;
  d_30 = t;
  t = term_b_21;
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_21, d_30);
  t = u_7(e_30, d_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_30);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_w_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, k_4, l_4, t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  static ATerm f_31 (ATerm t)
  {
    ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
    e_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_31 = ATgetFirst((ATermList) t);
        d_31 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_8 = NULL,r_8 = NULL,i_1 = NULL;
          t = SSLgetAnnotations(e_31);
          o_8 = t;
          t = d_31;
          t = f_31(t);
          r_8 = t;
          t = (ATerm) ATinsert(CheckATermList(r_8), c_31);
          i_1 = t;
          t = SSLsetAnnotations(i_1, o_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_31;
        t = f_84(t);
      }
    return(t);
  }
  t = f_31(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_30 = NULL,j_30 = NULL,k_30 = NULL;
  h_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_30;
    }
  else
    {
      static ATerm p_4 (ATerm t)
      {
        t = not_null(k_30);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_30 = ATgetFirst((ATermList) t);
          if(((k_30 != NULL) && (k_30 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_30;
      t = at_end_1_0(p_4, t);
    }
  return(t);
}
static ATerm a_32 (ATerm j_31, ATerm t)
{
  ATerm k_31 = NULL;
  t = SSL_explode_term(j_31);
  if(match_cons(t, sym__2))
    {
      ATerm z_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_31;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  p_31 = t;
  if(match_cons(t, sym__2))
    {
      n_31 = ATgetArgument(t, 0);
      o_31 = ATgetArgument(t, 1);
      {
        ATerm c_28 = t;
        int d_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_4 (ATerm t)
            {
              t = o_31;
              return(t);
            }
            t = n_31;
            t = at_end_1_0(t_4, t);
            LocalPopChoice(d_28);
          }
        else
          {
            t = c_28;
            t = a_32(p_31, t);
          }
      }
    }
  else
    {
      t = a_32(p_31, t);
    }
  return(t);
}
static ATerm l_7 (ATerm w_50, ATerm v_50, ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
  t = w_50;
  {
    ATerm f_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_32 = NULL;
        t = term_o_9;
        i_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_9, w_50);
        t = r_7(i_32, w_50, t);
        LocalPopChoice(h_28);
      }
    else
      {
        t = f_28;
        t = (ATerm) ATempty;
      }
  }
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_50, e_32);
  t = conc_0_0(t);
  d_32 = t;
  t = term_o_9;
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, w_50, d_32);
  t = lookup_table_0_1(f_32, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(w_50, d_32, g_32, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, w_50, d_32);
  return(t);
}
static ATerm s_7 (ATerm l_45, ATerm m_45, ATerm k_45, ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,s_32 = NULL,t_32 = NULL;
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_28 = ATgetArgument(t, 0);
            ATerm n_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
        t = r_7(l_45, m_45, t);
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        t = (ATerm) ATempty;
      }
  }
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_45, m_45, (ATerm) ATinsert(CheckATermList(o_32), k_45));
  t = lookup_table_0_1(l_45, t);
  t_32 = t;
  t = (ATerm) ATinsert(CheckATermList(o_32), k_45);
  p_32 = t;
  t = t_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(m_45, p_32, s_32, t);
  t = n_32;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
      t = term_a_21;
      t = p_0(t);
      i_33 = t;
      t = term_t_27;
      j_33 = t;
      t = term_u_27;
      k_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_27, term_u_27, i_33);
      t = s_7(j_33, k_33, i_33, t);
      _fail(t);
    }
  else
    {
      ATerm q_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_33 = ATgetFirst((ATermList) t);
          e_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_33;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_33 = ATgetFirst((ATermList) t);
          g_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_33;
      t = m_0(t);
      t = f_33;
      t = o_0(t);
      q_33 = t;
      t = (ATerm) ATinsert(CheckATermList(g_33), q_33);
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm t_33 = NULL;
  t_33 = t;
  if(match_string(t, "-a"))
    {
      t = t_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = t_33;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm u_33 = NULL,x_33 = NULL,y_33 = NULL;
  u_33 = t;
  t = term_o_28;
  x_33 = t;
  t = term_a_21;
  y_33 = t;
  t = term_q_28;
  t = u_7(x_33, y_33, t);
  t = u_33;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_u_28;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--annotations", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,d_34 = NULL;
  z_33 = t;
  t = term_v_28;
  a_34 = t;
  t = term_a_21;
  d_34 = t;
  t = term_c_29;
  t = u_7(a_34, d_34, t);
  t = z_33;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_d_29;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm g_34 = NULL;
  g_34 = t;
  if(match_string(t, "-I"))
    {
      t = g_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = g_34;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  j_34 = t;
  t = term_j_25;
  k_34 = t;
  t = (ATerm) ATinsert(ATempty, j_34);
  l_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_25, (ATerm) ATinsert(ATempty, j_34));
  t = l_7(k_34, l_34, t);
  t = j_34;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_4, z_4, a_5, t);
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
      {
        ATerm i_29 = t;
        int j_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(b_5, c_5, d_5, t);
            LocalPopChoice(j_29);
          }
        else
          {
            t = i_29;
            t = ArgOption_3_0(e_5, h_5, i_5, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_21;
  t = whoami_0_0(t);
  m_34 = t;
  t = term_r_19;
  q_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_29), m_34);
  r_34 = t;
  t = SSL_printnl(q_34, r_34);
  t = term_r_10;
  p_34 = t;
  t = SSL_exit(p_34);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm s_34 = NULL,v_34 = NULL;
  t = term_o_9;
  s_34 = t;
  t = term_m_29;
  v_34 = t;
  t = term_q_29;
  t = r_7(s_34, v_34, t);
  return(t);
}
static ATerm m_7 (ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_33, w_33);
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      t = SSL_addr(v_33, w_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,m_35 = NULL;
  x_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_34;
      t = c_91(t);
    }
  else
    {
      ATerm q_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_34 = ATgetFirst((ATermList) t);
          m_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_35;
      t = foldr_2_0(c_91, d_91, t);
      q_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_34, q_35);
      t = d_91(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_d_27;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm f_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym__2))
    {
      f_9 = ATgetArgument(t, 0);
      i_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(f_9, i_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_35 = NULL,z_8 = NULL,b_9 = NULL;
  t = times_0_0(t);
  b_9 = t;
  t = SSL_explode_term(b_9);
  if(match_cons(t, sym__2))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_8;
  t = foldr_2_0(j_5, k_5, t);
  t_35 = t;
  t = SSL_TicksToSeconds(t_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  if(match_cons(t, sym__2))
    {
      u_36 = ATgetArgument(t, 0);
      v_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_36;
        if((u_36 != t))
          {
            _fail(t);
          }
        t = t_36;
        LocalPopChoice(x_29);
      }
    else
      {
        t = v_29;
        t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
        {
          ATerm b_30 = t;
          int f_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_36, v_36);
              LocalPopChoice(f_30);
            }
          else
            {
              t = b_30;
              t = SSL_gtr(u_36, v_36);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm b_37 = NULL;
  b_37 = t;
  {
    ATerm g_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
        t = term_o_9;
        h_37 = t;
        t = term_j_10;
        i_37 = t;
        t = term_o_10;
        t = r_7(h_37, i_37, t);
        g_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_37, term_r_10);
        t = geq_0_0(t);
        t = b_37;
        t = n_98(t);
        LocalPopChoice(i_30);
      }
    else
      {
        t = g_30;
        t = b_37;
      }
  }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,q_37 = NULL,r_37 = NULL;
  t = run_time_0_0(t);
  n_37 = t;
  t = term_a_21;
  t = whoami_0_0(t);
  o_37 = t;
  t = term_r_19;
  q_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_30), n_37), term_g_11), o_37);
  r_37 = t;
  t = SSL_printnl(q_37, r_37);
  t = (ATerm) ATmakeAppl(sym__2, term_r_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_30), n_37), term_g_11), o_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_27;
  s_37 = t;
  t = SSL_exit(s_37);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL;
  i_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_38 = ATgetArgument(t, 0);
          {
            ATerm i_10 = NULL,o_1 = NULL;
            t = SSLgetAnnotations(i_38);
            i_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_38);
            o_1 = t;
            t = SSLsetAnnotations(o_1, i_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_37 = NULL,w_37 = NULL;
      t = term_o_9;
      v_37 = t;
      t = term_o_30;
      w_37 = t;
      t = term_p_30;
      t = r_7(v_37, w_37, t);
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      t = fetch_1_0(m_5, t);
    }
  t = s_102(t);
  return(t);
}
static ATerm v_7 (ATerm d_50, ATerm e_50, ATerm f_50, ATerm t)
{
  ATerm k_38 = NULL;
  t = SSL_hashtable_put(f_50, d_50, e_50);
  k_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_38);
  return(t);
}
static ATerm w_7 (ATerm g_50, ATerm h_50, ATerm t)
{
  t = SSL_hashtable_get(h_50, g_50);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_46, ATerm t)
{
  ATerm x_38 = NULL;
  t = table_hashtable_0_0(t);
  x_38 = t;
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_10 = NULL;
        t = x_38;
        if(match_cons(t, sym_Hashtable_1))
          {
            v_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_7(x_46, v_10, t);
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        {
          ATerm k_11 = NULL;
          t = x_46;
          t = table_create_0_0(t);
          t = x_38;
          if(match_cons(t, sym_Hashtable_1))
            {
              k_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_7(x_46, k_11, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm l_50, ATerm m_50, ATerm t)
{
  ATerm c_39 = NULL;
  t = SSL_hashtable_create(l_50, m_50);
  c_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_39);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm d_39 = NULL,g_39 = NULL,k_39 = NULL,n_39 = NULL,o_39 = NULL;
  d_39 = t;
  t = term_s_30;
  n_39 = t;
  t = term_t_30;
  o_39 = t;
  t = d_39;
  t = new_hashtable_0_2(n_39, o_39, t);
  g_39 = t;
  t = d_39;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(d_39, g_39, k_39, t);
  t = d_39;
  return(t);
}
static ATerm o_7 (ATerm i_50, ATerm j_50, ATerm t)
{
  ATerm p_39 = NULL;
  t = SSL_hashtable_remove(j_50, i_50);
  p_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_39);
  return(t);
}
static ATerm p_7 (ATerm n_50, ATerm t)
{
  ATerm q_39 = NULL;
  t = SSL_hashtable_destroy(n_50);
  q_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_39);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm r_39 = NULL;
  t = SSL_table_hashtable();
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_39);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
  s_39 = t;
  t = table_hashtable_0_0(t);
  t_39 = t;
  t = lookup_table_0_1(s_39, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(v_39, t);
  t = t_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(s_39, u_39, t);
  t = s_39;
  return(t);
}
ATerm map_1_0 (ATerm o_83 (ATerm), ATerm t)
{
  static ATerm k_40 (ATerm t)
  {
    ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
    h_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_40;
      }
    else
      {
        ATerm r_11 = NULL,u_11 = NULL,w_11 = NULL,u_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_40 = ATgetFirst((ATermList) t);
            j_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_40);
        r_11 = t;
        t = i_40;
        t = o_83(t);
        u_11 = t;
        t = j_40;
        t = k_40(t);
        w_11 = t;
        t = (ATerm) ATinsert(CheckATermList(w_11), u_11);
        u_1 = t;
        t = SSLsetAnnotations(u_1, r_11);
      }
    return(t);
  }
  t = k_40(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_40 = ATgetFirst((ATermList) t);
      o_40 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_40 = NULL,t_40 = NULL;
        static ATerm o_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_40)), not_null(t_40));
          return(t);
        }
        t = o_40;
        t = l_0(t);
        if(((s_40 != NULL) && (s_40 != t)))
          _fail(t);
        else
          s_40 = t;
        t = n_40;
        t = j_0(t);
        if(((t_40 != NULL) && (t_40 != t)))
          _fail(t);
        else
          t_40 = t;
        t = o_40;
        t = reverse_acc_2_0(j_0, o_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_21;
      t = l_0(t);
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,z_1 = NULL;
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
  z_1 = t;
  t = SSLsetAnnotations(z_1, z_40);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm d_41 = NULL;
  d_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_41), term_u_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL;
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_40 = NULL,y_40 = NULL;
      t = term_o_9;
      x_40 = t;
      t = term_m_29;
      y_40 = t;
      t = term_q_29;
      t = r_7(x_40, y_40, t);
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
      t = fetch_1_0(q_5, t);
    }
  t = term_x_30;
  t = echo_0_0(t);
  t = term_t_27;
  v_40 = t;
  t = term_u_27;
  w_40 = t;
  t = term_y_30;
  t = r_7(v_40, w_40, t);
  t = reverse_acc_2_0(_id, r_5, t);
  t = map_1_0(t_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  static ATerm a_42 (ATerm t)
  {
    ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
    x_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_41 = ATgetFirst((ATermList) t);
        z_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_30 = t;
      int a_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_12 = NULL,x_12 = NULL,d_2 = NULL;
          t = SSLgetAnnotations(x_41);
          q_12 = t;
          t = y_41;
          t = y_83(t);
          x_12 = t;
          t = (ATerm) ATinsert(CheckATermList(z_41), x_12);
          d_2 = t;
          t = SSLsetAnnotations(d_2, q_12);
          LocalPopChoice(a_31);
        }
      else
        {
          t = z_30;
          {
            ATerm i_13 = NULL,n_13 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(x_41);
            i_13 = t;
            t = z_41;
            t = a_42(t);
            n_13 = t;
            t = (ATerm) ATinsert(CheckATermList(n_13), y_41);
            x_2 = t;
            t = SSLsetAnnotations(x_2, i_13);
          }
        }
    }
    return(t);
  }
  t = a_42(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL;
  e_42 = t;
  {
    ATerm b_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_42;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_31 = ATgetFirst((ATermList) t);
                ATerm i_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_42;
          }
        LocalPopChoice(g_31);
      }
    else
      {
        t = b_31;
        t = (ATerm) ATinsert(ATempty, e_42);
      }
  }
  f_42 = t;
  t = term_u_9;
  g_42 = t;
  t = SSL_printnl(g_42, f_42);
  t = e_42;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL;
  t = term_o_9;
  k_42 = t;
  t = term_m_29;
  l_42 = t;
  t = term_q_29;
  t = r_7(k_42, l_42, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  t = term_l_31;
  m_42 = t;
  t = term_a_21;
  n_42 = t;
  t = term_m_31;
  t = u_7(m_42, n_42, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_q_31;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  t = term_l_31;
  q_42 = t;
  t = term_a_21;
  r_42 = t;
  t = term_m_31;
  t = u_7(q_42, r_42, t);
  t = term_r_31;
  o_42 = t;
  t = term_a_21;
  p_42 = t;
  t = term_s_31;
  t = u_7(o_42, p_42, t);
  t = term_t_31;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_u_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, v_5, w_5, t);
      LocalPopChoice(w_31);
    }
  else
    {
      t = v_31;
      t = Option_3_0(x_5, y_5, z_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,e_4 = NULL;
  x_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_42 = ATgetFirst((ATermList) t);
      u_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_42);
  s_42 = t;
  t = t_42;
  t = h_70(t);
  v_42 = t;
  t = u_42;
  t = i_70(t);
  w_42 = t;
  t = (ATerm) ATinsert(CheckATermList(w_42), v_42);
  e_4 = t;
  t = SSLsetAnnotations(e_4, s_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_104 (ATerm), ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,h_43 = NULL,i_43 = NULL,g_4 = NULL;
  c_43 = t;
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_31;
        t = q_104(t);
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
      }
  }
  t = c_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_43 = ATgetFirst((ATermList) t);
      f_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_43);
  d_43 = t;
  t = term_m_29;
  i_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_29, e_43);
  t = u_7(i_43, e_43, t);
  t = f_43;
  {
    static ATerm s_43 (ATerm t)
    {
      ATerm b_32 = t;
      int c_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_32 = t;
          int j_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_43 = NULL;
              l_43 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_43;
              LocalPopChoice(j_32);
            }
          else
            {
              t = h_32;
              t = q_104(t);
              t = Cons_2_0(_id, s_43, t);
            }
          LocalPopChoice(c_32);
        }
      else
        {
          t = b_32;
          {
            ATerm o_43 = NULL,p_43 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_43 = ATgetFirst((ATermList) t);
                p_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_43), (ATerm) ATmakeAppl(sym_Undefined_1, o_43));
          }
        }
      return(t);
    }
    t = s_43(t);
  }
  h_43 = t;
  t = (ATerm) ATinsert(CheckATermList(h_43), (ATerm) ATmakeAppl(sym_Program_1, e_43));
  g_4 = t;
  t = SSLsetAnnotations(g_4, d_43);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm f_44 = NULL;
  f_44 = t;
  if(match_string(t, "--help"))
    {
      t = f_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_44;
        }
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL;
  t = term_o_30;
  g_44 = t;
  t = term_a_21;
  h_44 = t;
  t = term_k_32;
  t = u_7(g_44, h_44, t);
  t = term_l_32;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_m_32;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_104 (ATerm), ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL;
  z_43 = t;
  t = term_t_27;
  a_44 = t;
  t = term_u_32;
  t = lookup_table_0_1(a_44, t);
  e_44 = t;
  t = term_u_27;
  b_44 = t;
  t = (ATerm) ATempty;
  c_44 = t;
  t = e_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(b_44, c_44, d_44, t);
  t = z_43;
  {
    static ATerm b_6 (ATerm t)
    {
      ATerm v_32 = t;
      int w_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_104(t);
          LocalPopChoice(w_32);
        }
      else
        {
          t = v_32;
          {
            ATerm x_32 = t;
            int y_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_6, e_6, f_6, t);
                LocalPopChoice(y_32);
              }
            else
              {
                t = x_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_6, t);
  }
  {
    ATerm z_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_44 = NULL;
        s_44 = t;
        {
          ATerm b_33 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_14 = NULL;
              t = s_44;
              {
                ATerm h_33 = t;
                int l_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_14 = NULL,h_14 = NULL;
                    t = term_o_9;
                    g_14 = t;
                    t = term_o_30;
                    h_14 = t;
                    t = term_p_30;
                    t = r_7(g_14, h_14, t);
                    LocalPopChoice(l_33);
                  }
                else
                  {
                    t = h_33;
                    t = fetch_1_0(g_6, t);
                  }
              }
              t = s_44;
              t = default_system_usage_0_0(t);
              t = term_d_27;
              f_14 = t;
              t = SSL_exit(f_14);
              LocalPopChoice(c_33);
            }
          else
            {
              t = b_33;
              {
                ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
                t = term_o_9;
                y_14 = t;
                t = term_l_31;
                z_14 = t;
                t = term_m_33;
                t = r_7(y_14, z_14, t);
                t = s_44;
                t = default_system_about_0_0(t);
                t = term_d_27;
                x_14 = t;
                t = SSL_exit(x_14);
              }
            }
        }
        LocalPopChoice(a_33);
      }
    else
      {
        t = z_32;
        {
          ATerm n_33 = t;
          int o_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
              static ATerm j_6 (ATerm t)
              {
                ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL,i_4 = NULL;
                y_44 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_44 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_44);
                w_44 = t;
                t = x_44;
                if(((x_43 != NULL) && (x_43 != t)))
                  _fail(t);
                else
                  x_43 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_44);
                i_4 = t;
                t = SSLsetAnnotations(i_4, w_44);
                return(t);
              }
              t = fetch_1_0(j_6, t);
              t = term_r_19;
              u_44 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_43)), term_p_33);
              v_44 = t;
              t = SSL_printnl(u_44, v_44);
              t = (ATerm) ATmakeAppl(sym__2, term_r_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_43)), term_p_33));
              t = default_system_usage_0_0(t);
              t = term_r_10;
              t_44 = t;
              t = SSL_exit(t_44);
              LocalPopChoice(o_33);
            }
          else
            {
              t = n_33;
            }
        }
      }
  }
  y_43 = t;
  t = term_t_27;
  t = table_destroy_0_0(t);
  t = y_43;
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,n_45 = NULL,o_45 = NULL,s_45 = NULL;
  t = parse_options_1_0(u_102, t);
  e_45 = t;
  t = term_r_33;
  t = table_create_0_0(t);
  t = term_r_33;
  f_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_33, term_s_33, e_45);
  t = lookup_table_0_1(f_45, t);
  s_45 = t;
  t = term_s_33;
  n_45 = t;
  t = s_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(n_45, e_45, o_45, t);
  t = e_45;
  t = w_102(t);
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_102, t);
        LocalPopChoice(f_34);
      }
    else
      {
        t = e_34;
        {
          ATerm h_34 = t;
          int i_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_102(t);
              t = report_success_0_0(t);
              LocalPopChoice(i_34);
            }
          else
            {
              t = h_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm n_34 = t;
  int o_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      LocalPopChoice(o_34);
    }
  else
    {
      t = n_34;
      {
        ATerm t_34 = t;
        int u_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(u_34);
          }
        else
          {
            t = t_34;
            {
              ATerm w_34 = t;
              int z_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(z_34);
                }
              else
                {
                  t = w_34;
                  {
                    ATerm a_35 = t;
                    int b_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(m_6, n_6, o_6, t);
                        LocalPopChoice(b_35);
                      }
                    else
                      {
                        t = a_35;
                        {
                          ATerm c_35 = t;
                          int d_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(d_35);
                            }
                          else
                            {
                              t = c_35;
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
static ATerm l_6 (ATerm t)
{
  t = xtc_temp_files_1_0(p_6, t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL;
  t = term_e_35;
  e_46 = t;
  t = term_a_21;
  f_46 = t;
  t = term_f_35;
  t = u_7(e_46, f_46, t);
  t = term_g_35;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_i_35;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_46 = NULL,n_46 = NULL,o_46 = NULL;
      t = term_o_9;
      n_46 = t;
      t = term_b_21;
      o_46 = t;
      t = term_n_35;
      t = r_7(n_46, o_46, t);
      h_46 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_46);
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
      t = term_b_10;
    }
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_46 = NULL,v_46 = NULL,w_46 = NULL;
        p_46 = t;
        t = term_o_9;
        v_46 = t;
        t = term_o_28;
        w_46 = t;
        t = term_r_35;
        t = r_7(v_46, w_46, t);
        t = p_46;
        LocalPopChoice(p_35);
      }
    else
      {
        t = o_35;
        {
          ATerm s_35 = t;
          int u_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_47 = NULL,j_47 = NULL;
              j_47 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  i_47 = ATgetArgument(t, 0);
                  {
                    ATerm h_15 = NULL,m_4 = NULL;
                    t = SSLgetAnnotations(j_47);
                    h_15 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, i_47);
                    m_4 = t;
                    t = SSLsetAnnotations(m_4, h_15);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = j_47;
                }
              LocalPopChoice(u_35);
              t = xtc_transform_file_2_0(q_6, pass_includes_0_0, t);
            }
          else
            {
              t = s_35;
              t = xtc_transform_term_2_0(n_7, pass_includes_0_0, t);
            }
        }
      }
  }
  {
    ATerm v_35 = t;
    int w_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_47 = NULL,q_47 = NULL;
        q_47 = t;
        if(match_cons(t, sym_FILE_1))
          {
            p_47 = ATgetArgument(t, 0);
            {
              ATerm r_15 = NULL,o_4 = NULL;
              t = SSLgetAnnotations(q_47);
              r_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_47);
              o_4 = t;
              t = SSLsetAnnotations(o_4, r_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_47;
          }
        LocalPopChoice(w_35);
        t = xtc_transform_file_2_0(z_7, a_8, t);
      }
    else
      {
        t = v_35;
        t = xtc_transform_term_2_0(c_8, d_8, t);
      }
  }
  {
    ATerm x_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_47 = NULL,t_47 = NULL,u_47 = NULL;
        r_47 = t;
        t = term_o_9;
        t_47 = t;
        t = term_v_28;
        u_47 = t;
        t = term_z_35;
        t = r_7(t_47, u_47, t);
        t = r_47;
        LocalPopChoice(y_35);
      }
    else
      {
        t = x_35;
        {
          ATerm a_36 = t;
          int b_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_48 = NULL,b_48 = NULL;
              b_48 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  a_48 = ATgetArgument(t, 0);
                  {
                    ATerm z_15 = NULL,q_4 = NULL;
                    t = SSLgetAnnotations(b_48);
                    z_15 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, a_48);
                    q_4 = t;
                    t = SSLsetAnnotations(q_4, z_15);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = b_48;
                }
              LocalPopChoice(b_36);
              t = xtc_transform_file_2_0(h_8, i_8, t);
            }
          else
            {
              t = a_36;
              t = xtc_transform_term_2_0(k_8, p_8, t);
            }
        }
      }
  }
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_48 = NULL,i_48 = NULL;
        i_48 = t;
        if(match_cons(t, sym_FILE_1))
          {
            h_48 = ATgetArgument(t, 0);
            {
              ATerm d_17 = NULL,r_4 = NULL;
              t = SSLgetAnnotations(i_48);
              d_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_48);
              r_4 = t;
              t = SSLsetAnnotations(r_4, d_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_48;
          }
        LocalPopChoice(d_36);
        t = xtc_transform_file_2_0(q_8, s_8, t);
      }
    else
      {
        t = c_36;
        t = xtc_transform_term_2_0(u_8, w_8, t);
      }
  }
  {
    ATerm e_36 = t;
    int f_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_48 = NULL,v_48 = NULL;
        v_48 = t;
        if(match_cons(t, sym_FILE_1))
          {
            u_48 = ATgetArgument(t, 0);
            {
              ATerm q_17 = NULL,s_4 = NULL;
              t = SSLgetAnnotations(v_48);
              q_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_48);
              s_4 = t;
              t = SSLsetAnnotations(s_4, q_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_48;
          }
        LocalPopChoice(f_36);
        t = xtc_transform_file_2_0(x_8, pass_verbose_0_0, t);
      }
    else
      {
        t = e_36;
        t = xtc_transform_term_2_0(y_8, pass_verbose_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_g_36;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_g_36;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_h_36;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_h_36;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_i_36;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_i_36;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_j_36;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL;
  t = pass_verbose_0_0(t);
  j_48 = t;
  t = term_k_36;
  t = xtc_find_0_0(t);
  k_48 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(j_48), k_48), term_l_36);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_j_36;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL;
  t = pass_verbose_0_0(t);
  m_48 = t;
  t = term_k_36;
  t = xtc_find_0_0(t);
  n_48 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(m_48), n_48), term_l_36);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_m_36;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_m_36;
  return(t);
}
ATerm pp_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(k_6, default_usage_0_0, _id, l_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pp_stratego_0_0(t);
  return(t);
}
