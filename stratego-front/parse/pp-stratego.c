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
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_x_35;
ATerm term_n_35;
ATerm term_i_35;
ATerm term_f_35;
ATerm term_d_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_d_33;
ATerm term_n_32;
ATerm term_k_32;
ATerm term_i_32;
ATerm term_c_32;
ATerm term_x_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_n_31;
ATerm term_l_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_g_30;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_r_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_u_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_g_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_l_26;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_f_25;
ATerm term_r_24;
ATerm term_l_24;
ATerm term_j_24;
ATerm term_e_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_w_23;
ATerm term_t_23;
ATerm term_p_23;
ATerm term_c_23;
ATerm term_a_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_h_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_i_20;
ATerm term_d_20;
ATerm term_q_19;
ATerm term_m_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_r_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_v_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_i_10;
ATerm term_b_10;
ATerm term_u_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym__2, term_n_9, term_o_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_n_9, term_i_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_q_10, term_s_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_c_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_g_12, term_h_12);
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
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_o_12, term_q_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_t_12, term_u_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_z_12, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_f_13, term_g_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_l_13, term_n_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_z_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_k_14, term_l_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_q_14, term_r_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_a_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_f_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_n_15, term_o_15);
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
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_x_15, term_z_15);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_f_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_p_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_a_17, term_b_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_f_17, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_r_17, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_a_18, term_b_18);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_18, term_f_18, term_g_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_j_18, term_l_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_18, term_o_18, term_p_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_v_18, term_w_18);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__2, term_n_9, term_p_23);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_a_23, term_a_24);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym__2, term_a_23, term_c_23);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_n_9, term_i_25);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__2, term_t_20, term_i_20);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_y_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_26);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__2, term_g_27, term_z_20);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym__2, term_l_28, term_z_20);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__2, term_o_28, term_z_20);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym__2, term_n_9, term_j_29);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym__2, term_n_9, term_m_30);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym__2, term_q_27, term_r_27);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym__2, term_h_31, term_z_20);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_z_20);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym__2, term_m_30, term_z_20);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__3, term_q_27, term_r_27, (ATerm) ATempty);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym__2, term_n_9, term_h_31);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym__2, term_a_35, term_z_20);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym__2, term_n_9, term_a_21);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym__2, term_n_9, term_l_28);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym__2, term_n_9, term_o_28);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm i_7 (ATerm o_14, ATerm p_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm r_6 (ATerm w_33, ATerm x_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm s_6 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm t_6 (ATerm y_68 (ATerm), ATerm x_174, ATerm y_17, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm t);
static ATerm u_6 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm a_74 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm n_67 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm w_88 (ATerm), ATerm t);
static ATerm w_6 (ATerm k_84 (ATerm), ATerm e_35, ATerm c_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm w_68 (ATerm), ATerm t);
static ATerm x_6 (ATerm q_40, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm x_85 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm w_85 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm y_85 (ATerm), ATerm t);
static ATerm z_6 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm a_7 (ATerm z_77 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm x_0 (ATerm t);
static ATerm b_7 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm c_7 (ATerm a_86 (ATerm), ATerm y_37, ATerm x_37, ATerm t);
static ATerm h_7 (ATerm z_41, ATerm a_42, ATerm t);
static ATerm e_15 (ATerm u_14, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_7 (ATerm u_17, ATerm t);
static ATerm e_7 (ATerm l_32, ATerm m_32, ATerm t);
static ATerm f_7 (ATerm i_42, ATerm j_42, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_17 (ATerm a_16, ATerm t);
static ATerm n_17 (ATerm h_16, ATerm i_16, ATerm j_16, ATerm t);
static ATerm q_17 (ATerm s_16, ATerm t_16, ATerm u_16, ATerm t);
static ATerm g_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_82 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm y_23 (ATerm b_23, ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm q_7 (ATerm k_38, ATerm l_38, ATerm t);
ATerm foldr_3_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm g_81 (ATerm), ATerm t);
static ATerm o_2 (ATerm t);
ATerm pass_includes_0_0 (ATerm t);
static ATerm j_7 (ATerm w_36, ATerm x_36, ATerm t);
ATerm end_scope_1_0 (ATerm h_84 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm g_84 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm i_88 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_7 (ATerm w_40, ATerm x_40, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm f_74 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_32 (ATerm k_31, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm k_7 (ATerm c_41, ATerm b_41, ATerm t);
static ATerm r_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
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
static ATerm l_7 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_85 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm need_help_1_0 (ATerm y_89 (ATerm), ATerm t);
static ATerm u_7 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t);
static ATerm v_7 (ATerm m_40, ATerm n_40, ATerm t);
ATerm lookup_table_0_1 (ATerm d_38, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_40, ATerm s_40, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm n_7 (ATerm o_40, ATerm p_40, ATerm t);
static ATerm o_7 (ATerm t_40, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_73 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_73 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_60 (ATerm), ATerm o_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm w_91 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm parse_options_1_0 (ATerm v_91 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm pp_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
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
    ATerm b_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = k_1;
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
        t = (ATerm) ATmakeAppl(sym__2, l_1, h_0);
        t = i_7(l_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
        LocalPopChoice(c_9);
      }
    else
      {
        t = b_9;
        {
          ATerm d_9 = t;
          int f_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_0 = NULL;
              t = k_1;
              t = o_0(t);
              y_0 = t;
              {
                ATerm i_9 = t;
                if((PushChoice() == 0))
                  {
                    ATerm z_0 = NULL;
                    z_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = z_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = z_0;
                          }
                        else
                          {
                            t = z_0;
                            if((l_1 != t))
                              {
                                _fail(t);
                              }
                            t = z_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_9;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_1, y_0);
              t = i_7(l_1, y_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
              LocalPopChoice(f_9);
            }
          else
            {
              t = d_9;
              t = k_1;
              t = o_0(t);
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
static ATerm i_7 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_copy(o_14, p_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm k_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 = NULL,w_2 = NULL;
      t = term_n_9;
      g_2 = t;
      t = term_o_9;
      w_2 = t;
      t = term_p_9;
      t = q_7(g_2, w_2, t);
      LocalPopChoice(m_9);
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
      ATerm m_1 = NULL,p_1 = NULL;
      t = term_o_9;
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 = NULL,s_1 = NULL;
            t = term_n_9;
            q_1 = t;
            t = term_o_9;
            s_1 = t;
            t = term_p_9;
            t = q_7(q_1, s_1, t);
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            t = term_u_9;
          }
      }
      m_1 = t;
      t = term_b_10;
      p_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_b_10, m_1);
      t = i_7(p_1, m_1, t);
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
static ATerm r_6 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_33, x_33);
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      t = SSL_subtr(w_33, x_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,b_3 = NULL,c_3 = NULL;
  t = term_i_10;
  {
    ATerm k_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_3 = NULL,e_3 = NULL;
        t = term_n_9;
        d_3 = t;
        t = term_i_10;
        e_3 = t;
        t = term_n_10;
        t = q_7(d_3, e_3, t);
        LocalPopChoice(m_10);
      }
    else
      {
        t = k_10;
        t = term_q_10;
      }
  }
  z_2 = t;
  t = term_q_10;
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_2, term_q_10);
  t = r_6(z_2, c_3, t);
  b_3 = t;
  t = SSL_int_to_string(b_3);
  y_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_2), term_i_10);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm m_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_b_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm p_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_x_10);
      p_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_3, (ATerm) ATinsert(ATempty, term_x_10));
      t = h_7(m_3, p_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm s_6 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm q_3 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_3);
  return(t);
}
static ATerm t_6 (ATerm y_68 (ATerm), ATerm x_174, ATerm y_17, ATerm t)
{
  ATerm s_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_174, term_y_10);
  t = g_7(t);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_3, y_17);
  t = y_68(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_11 = ATgetArgument(t, 0);
      if(match_cons(c_11, sym_Stream_1))
        {
          w_3 = ATgetArgument(c_11, 0);
        }
      else
        _fail(t);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(w_3, x_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL;
  u_3 = t;
  t = xtc_new_file_0_0(t);
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_3, u_3);
  t = t_6(b_0, t_3, u_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_3);
  t = xtc_transform_file_2_0(v_87, w_87, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm u_6 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,y_4 = NULL;
  u_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      v_4 = ATgetArgument(t, 0);
      {
        ATerm z_1 = NULL,b_2 = NULL;
        t = SSL_int_to_string(v_4);
        z_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_11), z_1), term_d_11);
        b_2 = t;
        t = SSL_concat_strings(b_2);
      }
    }
  else
    {
      ATerm q_2 = NULL,r_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          v_4 = ATgetArgument(t, 0);
          w_4 = ATgetArgument(t, 1);
          y_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(w_4);
      q_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_4), term_i_11), q_2), term_g_11), v_4);
      r_2 = t;
      t = SSL_concat_strings(r_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm a_74 (ATerm), ATerm t)
{
  ATerm f_5 = NULL;
  static ATerm f_0 (ATerm t)
  {
    t = a_74(t);
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
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_18), term_q_18), term_m_18), term_h_18), term_d_18), term_w_17), term_k_17), term_d_17), term_r_16), term_g_16), term_c_16), term_v_15), term_q_15), term_i_15), term_b_15), term_t_14), term_m_14), term_d_14), term_w_13), term_o_13), term_i_13), term_b_13), term_x_12), term_r_12), term_m_12), term_i_12), term_d_12), term_t_11);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(l_11);
      }
    else
      {
        t = k_11;
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
    ATerm z_18 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_19 = ATgetArgument(t, 0);
            c_6 = ATgetArgument(t, 1);
            {
              ATerm i_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_19);
        {
          ATerm j_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_3 = NULL,h_3 = NULL,i_3 = NULL;
              t = c_6;
              {
                ATerm l_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_19;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              f_3 = t;
              t = term_m_19;
              h_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_3), term_q_19);
              i_3 = t;
              t = SSL_printnl(h_3, i_3);
              t = (ATerm) ATmakeAppl(sym__2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, f_3), term_q_19));
              LocalPopChoice(k_19);
            }
          else
            {
              t = j_19;
              t = n_5;
            }
        }
      }
    else
      {
        t = z_18;
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
ATerm fork_and_wait_1_0 (ATerm n_67 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,m_7 = NULL;
  m_7 = t;
  t = fork_0_0(t);
  y_6 = t;
  {
    ATerm t_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = m_7;
        t = n_67(t);
        LocalPopChoice(u_19);
      }
    else
      {
        t = t_19;
        t = SSL_waitpid(y_6);
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
        t = m_7;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm w_88 (ATerm), ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL;
  x_7 = t;
  t = w_88(t);
  t = xtc_find_0_0(t);
  w_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_7, x_7);
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm a_8 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, w_7, x_7);
      t = u_6(w_7, x_7, t);
      t = term_d_20;
      a_8 = t;
      t = SSL_exit(a_8);
      return(t);
    }
    t = fork_and_wait_1_0(m_0, t);
  }
  t = x_7;
  return(t);
}
static ATerm w_6 (ATerm k_84 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL,i_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,s_8 = NULL;
  i_8 = t;
  t = k_84(t);
  d_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_8, e_35, c_35);
  t = r_7(d_8, e_35, c_35, t);
  {
    ATerm e_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_8 = NULL;
        t = term_i_20;
        t_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_8, term_i_20);
        t = q_7(d_8, t_8, t);
        LocalPopChoice(h_20);
      }
    else
      {
        t = e_20;
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
  t = (ATerm) ATmakeAppl(sym__3, d_8, term_i_20, (ATerm) ATinsert(CheckATermList(f_8), (ATerm) ATinsert(CheckATermList(e_8), e_35)));
  t = lookup_table_0_1(d_8, t);
  s_8 = t;
  t = term_i_20;
  k_8 = t;
  t = (ATerm) ATinsert(CheckATermList(f_8), (ATerm) ATinsert(CheckATermList(e_8), e_35));
  l_8 = t;
  t = s_8;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(k_8, l_8, m_8, t);
  t = i_8;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm x_8 = NULL;
  ATerm m_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_9 = NULL,r_3 = NULL;
      g_9 = t;
      t = term_r_20;
      r_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_9, term_r_20);
      t = e_7(g_9, r_3, t);
      x_8 = t;
      t = SSL_mkstemp(x_8);
      LocalPopChoice(q_20);
    }
  else
    {
      t = m_20;
      {
        ATerm j_9 = NULL;
        t = term_s_20;
        j_9 = t;
        t = SSL_perror(j_9);
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
static ATerm q_0 (ATerm t)
{
  t = term_t_20;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm l_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL;
  t = P__tmpdir_0_0(t);
  s_9 = t;
  t = term_v_20;
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_9, term_v_20);
  t = e_7(s_9, t_9, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_z_20;
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_9, term_z_20);
  t = w_6(q_0, q_9, r_9, t);
  t = SSL_close(l_9);
  t = q_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL;
  v_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_9 = NULL,a_10 = NULL;
      t = v_9;
      t = xtc_new_file_0_0(t);
      x_9 = t;
      t = r_0(t);
      a_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_10, (ATerm) ATinsert(ATinsert(ATempty, x_9), term_o_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
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
      t = r_0(t);
      e_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_10), term_o_9), w_9), term_a_21));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_10);
    }
  return(t);
}
ATerm debug_1_0 (ATerm w_68 (ATerm), ATerm t)
{
  ATerm j_10 = NULL,l_10 = NULL,o_10 = NULL,p_10 = NULL;
  j_10 = t;
  t = w_68(t);
  l_10 = t;
  t = term_m_19;
  o_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_10), l_10);
  p_10 = t;
  t = SSL_printnl(o_10, p_10);
  t = j_10;
  return(t);
}
static ATerm x_6 (ATerm q_40, ATerm t)
{
  t = SSL_hashtable_keys(q_40);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL;
  static ATerm s_0 (ATerm t)
  {
    ATerm t_10 = NULL,u_10 = NULL;
    t_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_10), t_10);
    t = q_7(not_null(r_10), t_10, t);
    u_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_10, u_10);
    return(t);
  }
  if(((r_10 != NULL) && (r_10 != t)))
    _fail(t);
  else
    r_10 = t;
  t = lookup_table_0_1(r_10, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(s_10, t);
  t = map_1_0(s_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm w_10 = NULL;
  w_10 = t;
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
        t = term_n_9;
        a_11 = t;
        t = term_i_10;
        b_11 = t;
        t = term_n_10;
        t = q_7(a_11, b_11, t);
        z_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_10, term_f_18);
        t = geq_0_0(t);
        t = w_10;
        t = x_85(t);
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
        t = w_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  ATerm f_11 = NULL;
  f_11 = t;
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL,m_11 = NULL,n_11 = NULL;
        t = term_n_9;
        m_11 = t;
        t = term_i_10;
        n_11 = t;
        t = term_n_10;
        t = q_7(m_11, n_11, t);
        h_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_11, term_k_14);
        t = geq_0_0(t);
        t = f_11;
        t = w_85(t);
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = f_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm w_11 = NULL;
  w_11 = t;
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
        t = term_n_9;
        a_12 = t;
        t = term_i_10;
        b_12 = t;
        t = term_n_10;
        t = q_7(a_12, b_12, t);
        z_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_11, term_k_12);
        t = geq_0_0(t);
        t = w_11;
        t = y_85(t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = w_11;
      }
  }
  return(t);
}
static ATerm z_6 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = d_78(t);
  {
    static ATerm t_0 (ATerm t)
    {
      ATerm f_12 = NULL;
      f_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, f_12);
      t = c_78(t);
      return(t);
    }
    t = fetch_1_0(t_0, t);
  }
  t = b_25;
  return(t);
}
static ATerm a_7 (ATerm z_77 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm m_13 (ATerm t)
  {
    ATerm w_12 = NULL,d_13 = NULL,e_13 = NULL;
    w_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_13 = ATgetFirst((ATermList) t);
            e_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_21 = t;
          int i_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_12;
              {
                static ATerm v_0 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = z_6(z_77, v_0, d_13, e_13, t);
              }
              t = m_13(t);
              LocalPopChoice(i_21);
            }
          else
            {
              t = h_21;
              {
                ATerm b_4 = NULL,m_4 = NULL,u_0 = NULL;
                t = SSLgetAnnotations(w_12);
                b_4 = t;
                t = e_13;
                t = m_13(t);
                m_4 = t;
                t = (ATerm) ATinsert(CheckATermList(m_4), d_13);
                u_0 = t;
                t = SSLsetAnnotations(u_0, b_4);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = m_13(t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm a_14 = NULL;
  if(match_cons(t, sym__2))
    {
      a_14 = ATgetArgument(t, 0);
      if((a_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_7 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,u_13 = NULL;
  p_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_21 = ATgetArgument(t, 0);
            ATerm m_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = q_7(o_37, p_37, t);
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        t = (ATerm) ATempty;
      }
  }
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_13, q_37);
  t = a_7(x_0, r_13, q_37, t);
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_37, p_37, q_13);
  t = lookup_table_0_1(o_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(p_37, q_13, u_13, t);
  t = p_13;
  return(t);
}
static ATerm c_7 (ATerm a_86 (ATerm), ATerm y_37, ATerm x_37, ATerm t)
{
  static ATerm b_1 (ATerm t)
  {
    ATerm b_14 = NULL,c_14 = NULL;
    if(match_cons(t, sym__2))
      {
        b_14 = ATgetArgument(t, 0);
        c_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_37, b_14, c_14);
    t = a_86(t);
    return(t);
  }
  t = x_37;
  t = map_1_0(b_1, t);
  return(t);
}
static ATerm h_7 (ATerm z_41, ATerm a_42, ATerm t)
{
  t = SSL_access(z_41, a_42);
  return(t);
}
static ATerm e_15 (ATerm u_14, ATerm t)
{
  t = SSL_fclose(u_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_14 = NULL,c_15 = NULL;
  c_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_14 = ATgetArgument(t, 0);
      {
        ATerm n_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_14);
            LocalPopChoice(o_21);
          }
        else
          {
            t = n_21;
            t = e_15(c_15, t);
          }
      }
    }
  else
    {
      t = e_15(c_15, t);
    }
  return(t);
}
static ATerm d_7 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm e_7 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = SSL_strcat(l_32, m_32);
  return(t);
}
static ATerm f_7 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm k_15 = NULL;
  t = SSL_fopen(i_42, j_42);
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_15);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_15 = NULL;
  t = SSL_stdin_stream();
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_15);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_15 = NULL;
  t = SSL_stdout_stream();
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_15 = NULL;
  t = SSL_stderr_stream();
  p_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_15);
  return(t);
}
static ATerm m_17 (ATerm a_16, ATerm t)
{
  ATerm b_16 = NULL;
  t = SSL_explode_term(a_16);
  if(match_cons(t, sym__2))
    {
      ATerm p_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_21 = ATgetArgument(t, 1);
        if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
          {
            b_16 = ATgetFirst((ATermList) q_21);
            {
              ATerm r_21 = (ATerm) ATgetNext((ATermList) q_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_16;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_16;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_16;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_16;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_17 (ATerm h_16, ATerm i_16, ATerm j_16, ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,q_16 = NULL,w_0 = NULL;
  t = SSLgetAnnotations(j_16);
  m_16 = t;
  t = h_16;
  if(match_cons(t, sym_Path_1))
    {
      q_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_16, i_16);
  w_0 = t;
  t = SSLsetAnnotations(w_0, m_16);
  if(match_cons(t, sym__2))
    {
      k_16 = ATgetArgument(t, 0);
      l_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(k_16, l_16, t);
  return(t);
}
static ATerm q_17 (ATerm s_16, ATerm t_16, ATerm u_16, ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,c_17 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(u_16);
  z_16 = t;
  t = SSL_is_string(s_16);
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_17, t_16);
  a_1 = t;
  t = SSLsetAnnotations(a_1, z_16);
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(x_16, y_16, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  g_17 = t;
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      i_17 = ATgetArgument(t, 1);
      {
        ATerm s_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_17(g_17, t);
            LocalPopChoice(t_21);
          }
        else
          {
            t = s_21;
            {
              ATerm u_21 = t;
              int v_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_17(h_17, i_17, g_17, t);
                  LocalPopChoice(v_21);
                }
              else
                {
                  t = u_21;
                  t = q_17(h_17, i_17, g_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_17(g_17, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_17 = NULL,z_17 = NULL,c_18 = NULL,k_18 = NULL;
  k_18 = t;
  {
    ATerm w_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_18, term_b_22);
        t = g_7(t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = w_21;
        {
          ATerm o_5 = NULL,r_5 = NULL;
          t = term_c_22;
          r_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_22, k_18);
          t = e_7(r_5, k_18, t);
          o_5 = t;
          t = SSL_perror(o_5);
          _fail(t);
        }
      }
  }
  z_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(c_18, t);
  s_17 = t;
  t = z_17;
  t = fclose_0_0(t);
  t = s_17;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_d_22;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_18 = NULL,s_18 = NULL;
      r_18 = t;
      t = (ATerm) ATinsert(ATempty, term_h_22);
      s_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_18, (ATerm) ATinsert(ATempty, term_h_22));
      t = h_7(r_18, s_18, t);
      LocalPopChoice(g_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = f_22;
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_22 = t;
            if((PushChoice() == 0))
              {
                ATerm t_18 = NULL,y_18 = NULL;
                t_18 = t;
                t = (ATerm) ATinsert(ATempty, term_x_10);
                y_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_18, (ATerm) ATinsert(ATempty, term_x_10));
                t = h_7(t_18, y_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = o_22;
              }
            t = debug_1_0(c_1, t);
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
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
  t = term_v_22;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = debug_1_0(j_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_w_22;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,j_20 = NULL;
  f_20 = t;
  t = term_m_19;
  g_20 = t;
  t = (ATerm) ATinsert(ATempty, term_x_22);
  j_20 = t;
  t = SSL_printnl(g_20, j_20);
  t = f_20;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,n_20 = NULL;
  if(match_cons(t, sym__3))
    {
      k_20 = ATgetArgument(t, 0);
      l_20 = ATgetArgument(t, 1);
      n_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_7(k_20, l_20, n_20, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,u_20 = NULL;
  o_20 = t;
  t = term_m_19;
  p_20 = t;
  t = (ATerm) ATinsert(ATempty, term_y_22);
  u_20 = t;
  t = SSL_printnl(p_20, u_20);
  t = o_20;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  w_20 = t;
  t = term_m_19;
  x_20 = t;
  t = (ATerm) ATinsert(ATempty, term_x_22);
  y_20 = t;
  t = SSL_printnl(x_20, y_20);
  t = w_20;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,r_19 = NULL,s_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
  a_19 = t;
  t = if_verbose5_1_0(e_1, t);
  {
    ATerm z_22 = t;
    if((PushChoice() == 0))
      {
        ATerm b_20 = NULL,c_20 = NULL;
        t = term_a_23;
        b_20 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, a_19);
        c_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_23, (ATerm) ATmakeAppl(sym_Imported_1, a_19));
        t = q_7(b_20, c_20, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_22;
      }
  }
  c_19 = t;
  t = term_a_23;
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_23, term_c_23, (ATerm) ATinsert(ATempty, a_19));
  t = lookup_table_0_1(r_19, t);
  a_20 = t;
  t = term_c_23;
  s_19 = t;
  t = (ATerm) ATinsert(ATempty, a_19);
  y_19 = t;
  t = a_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(s_19, y_19, z_19, t);
  t = c_19;
  t = if_verbose4_1_0(h_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(n_1, t);
  b_19 = t;
  t = term_a_23;
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_23, b_19);
  t = c_7(r_1, p_19, b_19, t);
  t = if_verbose6_1_0(t_1, t);
  t = term_a_23;
  d_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_23, (ATerm)ATmakeAppl(sym_Imported_1, a_19), (ATerm) ATempty);
  t = lookup_table_0_1(d_19, t);
  o_19 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, a_19);
  e_19 = t;
  t = (ATerm) ATempty;
  f_19 = t;
  t = o_19;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(e_19, f_19, n_19, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_23, (ATerm)ATmakeAppl(sym_Imported_1, a_19), (ATerm) ATempty);
  t = if_verbose4_1_0(u_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_21;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_21 = ATgetFirst((ATermList) t);
          z_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_5 = NULL,g_6 = NULL,h_6 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(x_21);
            z_5 = t;
            t = y_21;
            t = g_82(t);
            g_6 = t;
            t = z_21;
            t = filter_1_0(g_82, t);
            h_6 = t;
            t = (ATerm) ATinsert(CheckATermList(h_6), g_6);
            g_1 = t;
            t = SSLsetAnnotations(g_1, z_5);
            LocalPopChoice(h_23);
          }
        else
          {
            t = g_23;
            t = z_21;
            t = filter_1_0(g_82, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm t)
{
  static ATerm i_22 (ATerm t)
  {
    ATerm i_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_71(t);
        t = i_22(t);
        LocalPopChoice(m_23);
      }
    else
      {
        t = i_23;
        t = u_71(t);
      }
    return(t);
  }
  t = i_22(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_22 = NULL,k_22 = NULL;
      t = term_n_9;
      j_22 = t;
      t = term_p_23;
      k_22 = t;
      t = term_t_23;
      t = q_7(j_22, k_22, t);
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_22 = NULL;
            t = term_w_23;
            l_22 = t;
            t = SSL_getenv(l_22);
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
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
  t = term_z_23;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL;
  t = term_a_23;
  t_22 = t;
  t = term_a_24;
  u_22 = t;
  t = term_b_24;
  t = q_7(t_22, u_22, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm d_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_24;
      }
  }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm p_22 = NULL;
  t = if_verbose5_1_0(v_1, t);
  p_22 = t;
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_22 = NULL,r_22 = NULL;
        t = term_a_23;
        q_22 = t;
        t = term_c_23;
        r_22 = t;
        t = term_j_24;
        t = q_7(q_22, r_22, t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        {
          ATerm s_22 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          s_22 = t;
          t = repeat_2_0(y_1, _id, t);
          t = s_22;
        }
      }
  }
  t = p_22;
  t = if_verbose5_1_0(c_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_l_24;
  return(t);
}
static ATerm y_23 (ATerm b_23, ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  t = term_a_23;
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, b_23);
  f_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_23, (ATerm) ATmakeAppl(sym_Tool_1, b_23));
  t = q_7(e_23, f_23, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_24 = ATgetFirst((ATermList) t);
      if(match_cons(m_24, sym__2))
        {
          ATerm q_24 = ATgetArgument(m_24, 0);
          d_23 = ATgetArgument(m_24, 1);
        }
      else
        _fail(t);
      {
        ATerm o_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_23;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_l_24;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_a_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm s_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
      t = if_verbose5_1_0(h_2, t);
      t = xtc_load_0_0(t);
      l_23 = t;
      if(match_cons(t, sym__2))
        {
          j_23 = ATgetArgument(t, 0);
          k_23 = ATgetArgument(t, 1);
          {
            ATerm w_24 = t;
            int d_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
                t = term_a_23;
                r_23 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, j_23);
                s_23 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_a_23, (ATerm) ATmakeAppl(sym_Tool_1, j_23));
                t = q_7(r_23, s_23, t);
                {
                  static ATerm j_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((k_23 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((q_23 != NULL) && (q_23 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          q_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(j_2, t);
                }
                t = not_null(q_23);
                LocalPopChoice(d_25);
              }
            else
              {
                t = w_24;
                t = y_23(l_23, t);
              }
          }
        }
      else
        {
          t = y_23(l_23, t);
        }
      t = if_verbose5_1_0(k_2, t);
      LocalPopChoice(v_24);
    }
  else
    {
      t = s_24;
      {
        ATerm x_23 = NULL,v_6 = NULL,s_7 = NULL;
        x_23 = t;
        t = term_m_19;
        v_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_25), x_23), term_f_25);
        s_7 = t;
        t = SSL_printnl(v_6, s_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_25), x_23), term_f_25);
        t = if_verbose5_1_0(m_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm q_7 (ATerm k_38, ATerm l_38, ATerm t)
{
  ATerm c_24 = NULL;
  t = lookup_table_0_1(k_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(l_38, c_24, t);
  return(t);
}
ATerm foldr_3_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm g_81 (ATerm), ATerm t)
{
  ATerm f_24 = NULL,i_24 = NULL,k_24 = NULL;
  f_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_24;
      t = e_81(t);
    }
  else
    {
      ATerm n_24 = NULL,p_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_24 = ATgetFirst((ATermList) t);
          k_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_24;
      t = g_81(t);
      n_24 = t;
      t = k_24;
      t = foldr_3_0(e_81, f_81, g_81, t);
      p_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_24, p_24);
      t = f_81(t);
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_24), term_i_25);
  return(t);
}
ATerm pass_includes_0_0 (ATerm t)
{
  t = term_i_25;
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_24 = NULL,u_24 = NULL;
        t = term_n_9;
        t_24 = t;
        t = term_i_25;
        u_24 = t;
        t = term_l_25;
        t = q_7(t_24, u_24, t);
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = (ATerm) ATempty;
      }
  }
  t = foldr_3_0(_id, conc_0_0, o_2, t);
  return(t);
}
static ATerm j_7 (ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm a_25 = NULL,e_25 = NULL;
  e_25 = t;
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = q_7(w_36, x_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_25 = ATgetFirst((ATermList) t);
            a_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_25);
        {
          ATerm g_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, a_25);
          t = lookup_table_0_1(w_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              g_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_7(x_36, a_25, g_25, t);
          t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, a_25);
        }
      }
    else
      {
        t = m_25;
        {
          ATerm o_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
          t = lookup_table_0_1(w_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_7(x_36, o_25, t);
          t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        }
      }
  }
  t = e_25;
  return(t);
}
ATerm end_scope_1_0 (ATerm h_84 (ATerm), ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,w_25 = NULL,z_25 = NULL,b_26 = NULL;
  u_25 = t;
  t = h_84(t);
  t_25 = t;
  {
    ATerm q_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_26 = NULL;
        t = term_i_20;
        f_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_25, term_i_20);
        t = q_7(t_25, f_26, t);
        LocalPopChoice(v_25);
      }
    else
      {
        t = q_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_25 = ATgetFirst((ATermList) t);
      r_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_25, term_i_20, r_25);
  t = lookup_table_0_1(t_25, t);
  b_26 = t;
  t = term_i_20;
  w_25 = t;
  t = b_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(w_25, r_25, z_25, t);
  t = s_25;
  {
    static ATerm p_2 (ATerm t)
    {
      ATerm g_26 = NULL;
      g_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_25, g_26);
      t = j_7(t_25, g_26, t);
      return(t);
    }
    t = map_1_0(p_2, t);
  }
  t = u_25;
  return(t);
}
ATerm restore_always_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_85(t);
      t = i_85(t);
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      t = i_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL;
  o_26 = t;
  t = g_84(t);
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_26, term_i_20);
  {
    ATerm a_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_26 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_26 = ATgetArgument(t, 0);
            ATerm e_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_20;
        z_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_26, term_i_20);
        t = q_7(n_26, z_26, t);
        LocalPopChoice(c_26);
      }
    else
      {
        t = a_26;
        t = (ATerm) ATempty;
      }
  }
  p_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_26, term_i_20, (ATerm) ATinsert(CheckATermList(p_26), (ATerm) ATempty));
  t = lookup_table_0_1(n_26, t);
  t_26 = t;
  t = term_i_20;
  q_26 = t;
  t = (ATerm) ATinsert(CheckATermList(p_26), (ATerm) ATempty);
  r_26 = t;
  t = t_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(q_26, r_26, s_26, t);
  t = o_26;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_t_20;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(t_27);
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = t_27;
      }
  }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_t_20;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm c_27 = NULL;
  static ATerm t_2 (ATerm t)
  {
    ATerm f_27 = NULL;
    f_27 = t;
    {
      ATerm j_26 = t;
      int k_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_27 = NULL,i_27 = NULL;
          t = term_t_20;
          h_27 = t;
          t = term_i_20;
          i_27 = t;
          t = term_l_26;
          t = q_7(h_27, i_27, t);
          LocalPopChoice(k_26);
        }
      else
        {
          t = j_26;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((c_27 != NULL) && (c_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          c_27 = ATgetFirst((ATermList) t);
        {
          ATerm m_26 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = c_27;
    t = map_1_0(u_2, t);
    t = f_27;
    t = end_scope_1_0(v_2, t);
    return(t);
  }
  t = begin_scope_1_0(s_2, t);
  t = restore_always_2_0(i_88, t_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_27 = NULL,a_28 = NULL,b_28 = NULL,e_28 = NULL,f_28 = NULL;
  y_27 = t;
  t = term_z_20;
  t = whoami_0_0(t);
  a_28 = t;
  t = term_m_19;
  e_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_26), a_28), term_u_26);
  f_28 = t;
  t = SSL_printnl(e_28, f_28);
  t = term_q_10;
  b_28 = t;
  t = SSL_exit(b_28);
  t = y_27;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  if(match_string(t, "-k"))
    {
      t = i_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_28;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm j_28 = NULL,p_28 = NULL,q_28 = NULL;
  j_28 = t;
  t = SSL_string_to_int(j_28);
  p_28 = t;
  t = term_w_26;
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_26, p_28);
  t = t_7(q_28, p_28, t);
  t = j_28;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_x_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, g_3, j_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  if(match_string(t, "-S"))
    {
      t = s_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_28;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm t_28 = NULL,w_28 = NULL;
  t = term_i_10;
  t_28 = t;
  t = term_y_26;
  w_28 = t;
  t = term_a_27;
  t = t_7(t_28, w_28, t);
  t = term_b_27;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_d_27;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  x_28 = t;
  t = SSL_string_to_int(x_28);
  y_28 = t;
  t = term_i_10;
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, y_28);
  t = t_7(z_28, y_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_28);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_e_27;
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
  ATerm a_29 = NULL,b_29 = NULL;
  t = term_g_27;
  a_29 = t;
  t = term_z_20;
  b_29 = t;
  t = term_j_27;
  t = t_7(a_29, b_29, t);
  t = term_k_27;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_l_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_3, l_3, n_3, t);
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_3, v_3, y_3, t);
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
            t = Option_3_0(z_3, a_4, c_4, t);
          }
      }
    }
  return(t);
}
static ATerm t_7 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL;
  t = term_n_9;
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_9, w_40, x_40);
  t = lookup_table_0_1(e_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(w_40, x_40, f_29, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_9, w_40, x_40);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_29 = NULL,r_29 = NULL,s_29 = NULL;
      t = term_z_20;
      t = e_0(t);
      p_29 = t;
      t = term_q_27;
      r_29 = t;
      t = term_r_27;
      s_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_27, term_r_27, p_29);
      t = r_7(r_29, s_29, p_29, t);
      _fail(t);
    }
  else
    {
      ATerm x_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_29 = ATgetFirst((ATermList) t);
          o_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_29;
      t = c_0(t);
      t = term_z_20;
      t = d_0(t);
      x_29 = t;
      t = (ATerm) ATinsert(CheckATermList(o_29), x_29);
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  if(match_string(t, "-o"))
    {
      t = z_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_29;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  a_30 = t;
  t = term_o_9;
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_9, a_30);
  t = t_7(b_30, a_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_30);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_s_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_4, f_4, h_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm d_30 = NULL;
  d_30 = t;
  if(match_string(t, "-i"))
    {
      t = d_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_30;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL;
  e_30 = t;
  t = term_a_21;
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, e_30);
  t = t_7(f_30, e_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_30);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_u_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, k_4, l_4, t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_74 (ATerm), ATerm t)
{
  static ATerm g_31 (ATerm t)
  {
    ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
    f_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_31 = ATgetFirst((ATermList) t);
        e_31 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_8 = NULL,q_8 = NULL,i_1 = NULL;
          t = SSLgetAnnotations(f_31);
          n_8 = t;
          t = e_31;
          t = g_31(t);
          q_8 = t;
          t = (ATerm) ATinsert(CheckATermList(q_8), d_31);
          i_1 = t;
          t = SSLsetAnnotations(i_1, n_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_31;
        t = f_74(t);
      }
    return(t);
  }
  t = g_31(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_30;
    }
  else
    {
      static ATerm o_4 (ATerm t)
      {
        t = not_null(l_30);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_30 = ATgetFirst((ATermList) t);
          if(((l_30 != NULL) && (l_30 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_30;
      t = at_end_1_0(o_4, t);
    }
  return(t);
}
static ATerm d_32 (ATerm k_31, ATerm t)
{
  ATerm m_31 = NULL;
  t = SSL_explode_term(k_31);
  if(match_cons(t, sym__2))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_31;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  q_31 = t;
  if(match_cons(t, sym__2))
    {
      o_31 = ATgetArgument(t, 0);
      p_31 = ATgetArgument(t, 1);
      {
        ATerm w_27 = t;
        int x_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_4 (ATerm t)
            {
              t = p_31;
              return(t);
            }
            t = o_31;
            t = at_end_1_0(t_4, t);
            LocalPopChoice(x_27);
          }
        else
          {
            t = w_27;
            t = d_32(q_31, t);
          }
      }
    }
  else
    {
      t = d_32(q_31, t);
    }
  return(t);
}
static ATerm k_7 (ATerm c_41, ATerm b_41, ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  t = c_41;
  {
    ATerm z_27 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_32 = NULL;
        t = term_n_9;
        j_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_9, c_41);
        t = q_7(j_32, c_41, t);
        LocalPopChoice(c_28);
      }
    else
      {
        t = z_27;
        t = (ATerm) ATempty;
      }
  }
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_41, f_32);
  t = conc_0_0(t);
  e_32 = t;
  t = term_n_9;
  g_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_9, c_41, e_32);
  t = lookup_table_0_1(g_32, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(c_41, e_32, h_32, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_9, c_41, e_32);
  return(t);
}
static ATerm r_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t)
{
  ATerm o_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL;
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm d_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_28 = ATgetArgument(t, 0);
            ATerm k_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = q_7(r_36, s_36, t);
        LocalPopChoice(g_28);
      }
    else
      {
        t = d_28;
        t = (ATerm) ATempty;
      }
  }
  r_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_36, s_36, (ATerm) ATinsert(CheckATermList(r_32), q_36));
  t = lookup_table_0_1(r_36, t);
  u_32 = t;
  t = (ATerm) ATinsert(CheckATermList(r_32), q_36);
  s_32 = t;
  t = u_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(s_36, s_32, t_32, t);
  t = o_32;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,i_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
      t = term_z_20;
      t = n_0(t);
      j_33 = t;
      t = term_q_27;
      k_33 = t;
      t = term_r_27;
      l_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_27, term_r_27, j_33);
      t = r_7(k_33, l_33, j_33, t);
      _fail(t);
    }
  else
    {
      ATerm t_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_33 = ATgetFirst((ATermList) t);
          f_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_33;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_33 = ATgetFirst((ATermList) t);
          i_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_33;
      t = k_0(t);
      t = g_33;
      t = l_0(t);
      t_33 = t;
      t = (ATerm) ATinsert(CheckATermList(i_33), t_33);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm y_33 = NULL;
  y_33 = t;
  if(match_string(t, "-a"))
    {
      t = y_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = y_33;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
  z_33 = t;
  t = term_l_28;
  a_34 = t;
  t = term_z_20;
  b_34 = t;
  t = term_m_28;
  t = t_7(a_34, b_34, t);
  t = z_33;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_n_28;
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
  ATerm c_34 = NULL,d_34 = NULL,g_34 = NULL;
  c_34 = t;
  t = term_o_28;
  d_34 = t;
  t = term_z_20;
  g_34 = t;
  t = term_r_28;
  t = t_7(d_34, g_34, t);
  t = c_34;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_u_28;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm j_34 = NULL;
  j_34 = t;
  if(match_string(t, "-I"))
    {
      t = j_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = j_34;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
  k_34 = t;
  t = term_i_25;
  l_34 = t;
  t = (ATerm) ATinsert(ATempty, k_34);
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_25, (ATerm) ATinsert(ATempty, k_34));
  t = k_7(l_34, m_34, t);
  t = k_34;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_v_28;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_4, z_4, a_5, t);
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      {
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(b_5, c_5, d_5, t);
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
            t = ArgOption_3_0(e_5, h_5, i_5, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_20;
  t = whoami_0_0(t);
  p_34 = t;
  t = term_m_19;
  r_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_29), p_34);
  s_34 = t;
  t = SSL_printnl(r_34, s_34);
  t = term_q_10;
  q_34 = t;
  t = SSL_exit(q_34);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL;
  t = term_n_9;
  t_34 = t;
  t = term_j_29;
  u_34 = t;
  t = term_k_29;
  t = q_7(t_34, u_34, t);
  return(t);
}
static ATerm l_7 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(m_29);
    }
  else
    {
      t = l_29;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm t)
{
  ATerm j_35 = NULL,m_35 = NULL,o_35 = NULL;
  j_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_35;
      t = c_81(t);
    }
  else
    {
      ATerm r_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_35 = ATgetFirst((ATermList) t);
          o_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_35;
      t = foldr_2_0(c_81, d_81, t);
      r_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_35, r_35);
      t = d_81(t);
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
  t = term_y_26;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm e_9 = NULL,h_9 = NULL;
  if(match_cons(t, sym__2))
    {
      e_9 = ATgetArgument(t, 0);
      h_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(e_9, h_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_35 = NULL,y_8 = NULL,a_9 = NULL;
  t = times_0_0(t);
  a_9 = t;
  t = SSL_explode_term(a_9);
  if(match_cons(t, sym__2))
    {
      ATerm q_29 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_8;
  t = foldr_2_0(j_5, k_5, t);
  v_35 = t;
  t = SSL_TicksToSeconds(v_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  if(match_cons(t, sym__2))
    {
      g_37 = ATgetArgument(t, 0);
      h_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_37;
        if((g_37 != t))
          {
            _fail(t);
          }
        t = f_37;
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
        t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
        {
          ATerm v_29 = t;
          int w_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_37, h_37);
              LocalPopChoice(w_29);
            }
          else
            {
              t = v_29;
              t = SSL_gtr(g_37, h_37);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_85 (ATerm), ATerm t)
{
  ATerm n_37 = NULL;
  n_37 = t;
  {
    ATerm y_29 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_38 = NULL,c_38 = NULL,h_38 = NULL;
        t = term_n_9;
        c_38 = t;
        t = term_i_10;
        h_38 = t;
        t = term_n_10;
        t = q_7(c_38, h_38, t);
        b_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_38, term_q_10);
        t = geq_0_0(t);
        t = n_37;
        t = t_85(t);
        LocalPopChoice(c_30);
      }
    else
      {
        t = y_29;
        t = n_37;
      }
  }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm j_38 = NULL,m_38 = NULL,o_38 = NULL,p_38 = NULL;
  t = run_time_0_0(t);
  j_38 = t;
  t = term_z_20;
  t = whoami_0_0(t);
  m_38 = t;
  t = term_m_19;
  o_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_30), j_38), term_g_11), m_38);
  p_38 = t;
  t = SSL_printnl(o_38, p_38);
  t = (ATerm) ATmakeAppl(sym__2, term_m_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_30), j_38), term_g_11), m_38));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_26;
  r_38 = t;
  t = SSL_exit(r_38);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL;
  e_39 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_39;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_39 = ATgetArgument(t, 0);
          {
            ATerm h_10 = NULL,o_1 = NULL;
            t = SSLgetAnnotations(e_39);
            h_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_39);
            o_1 = t;
            t = SSLsetAnnotations(o_1, h_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_39;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_38 = NULL,x_38 = NULL;
      t = term_n_9;
      w_38 = t;
      t = term_m_30;
      x_38 = t;
      t = term_n_30;
      t = q_7(w_38, x_38, t);
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      t = fetch_1_0(m_5, t);
    }
  t = y_89(t);
  return(t);
}
static ATerm u_7 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t)
{
  ATerm j_39 = NULL;
  t = SSL_hashtable_put(l_40, j_40, k_40);
  j_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_39);
  return(t);
}
static ATerm v_7 (ATerm m_40, ATerm n_40, ATerm t)
{
  t = SSL_hashtable_get(n_40, m_40);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_38, ATerm t)
{
  ATerm u_39 = NULL;
  t = table_hashtable_0_0(t);
  u_39 = t;
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_10 = NULL;
        t = u_39;
        if(match_cons(t, sym_Hashtable_1))
          {
            v_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_7(d_38, v_10, t);
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        {
          ATerm j_11 = NULL;
          t = d_38;
          t = table_create_0_0(t);
          t = u_39;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_7(d_38, j_11, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm b_40 = NULL;
  t = SSL_hashtable_create(r_40, s_40);
  b_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_40);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL,i_40 = NULL,u_40 = NULL;
  c_40 = t;
  t = term_q_30;
  i_40 = t;
  t = term_r_30;
  u_40 = t;
  t = c_40;
  t = new_hashtable_0_2(i_40, u_40, t);
  d_40 = t;
  t = c_40;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(c_40, d_40, e_40, t);
  t = c_40;
  return(t);
}
static ATerm n_7 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm v_40 = NULL;
  t = SSL_hashtable_remove(p_40, o_40);
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_40);
  return(t);
}
static ATerm o_7 (ATerm t_40, ATerm t)
{
  ATerm a_41 = NULL;
  t = SSL_hashtable_destroy(t_40);
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_41);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm g_41 = NULL;
  t = SSL_table_hashtable();
  g_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_41);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL;
  i_41 = t;
  t = table_hashtable_0_0(t);
  j_41 = t;
  t = lookup_table_0_1(i_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(l_41, t);
  t = j_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(i_41, k_41, t);
  t = i_41;
  return(t);
}
ATerm map_1_0 (ATerm o_73 (ATerm), ATerm t)
{
  static ATerm d_42 (ATerm t)
  {
    ATerm y_41 = NULL,b_42 = NULL,c_42 = NULL;
    y_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_41;
      }
    else
      {
        ATerm q_11 = NULL,u_11 = NULL,v_11 = NULL,x_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_42 = ATgetFirst((ATermList) t);
            c_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_41);
        q_11 = t;
        t = b_42;
        t = o_73(t);
        u_11 = t;
        t = c_42;
        t = d_42(t);
        v_11 = t;
        t = (ATerm) ATinsert(CheckATermList(v_11), u_11);
        x_1 = t;
        t = SSLsetAnnotations(x_1, q_11);
      }
    return(t);
  }
  t = d_42(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_42 = ATgetFirst((ATermList) t);
      h_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_42 = NULL,q_42 = NULL;
        static ATerm p_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_42)), not_null(q_42));
          return(t);
        }
        t = h_42;
        t = i_0(t);
        if(((p_42 != NULL) && (p_42 != t)))
          _fail(t);
        else
          p_42 = t;
        t = g_42;
        t = g_0(t);
        if(((q_42 != NULL) && (q_42 != t)))
          _fail(t);
        else
          q_42 = t;
        t = h_42;
        t = reverse_acc_2_0(g_0, p_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_20;
      t = i_0(t);
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,b_43 = NULL,a_2 = NULL;
  b_43 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_43);
  w_42 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_42);
  a_2 = t;
  t = SSLsetAnnotations(a_2, w_42);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm d_43 = NULL;
  d_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_43), term_s_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL;
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_42 = NULL,v_42 = NULL;
      t = term_n_9;
      u_42 = t;
      t = term_j_29;
      v_42 = t;
      t = term_k_29;
      t = q_7(u_42, v_42, t);
      LocalPopChoice(u_30);
    }
  else
    {
      t = t_30;
      t = fetch_1_0(q_5, t);
    }
  t = term_v_30;
  t = echo_0_0(t);
  t = term_q_27;
  s_42 = t;
  t = term_r_27;
  t_42 = t;
  t = term_w_30;
  t = q_7(s_42, t_42, t);
  t = reverse_acc_2_0(_id, s_5, t);
  t = map_1_0(t_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm y_73 (ATerm), ATerm t)
{
  static ATerm k_44 (ATerm t)
  {
    ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
    h_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_44 = ATgetFirst((ATermList) t);
        j_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_30 = t;
      int y_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_12 = NULL,v_12 = NULL,d_2 = NULL;
          t = SSLgetAnnotations(h_44);
          p_12 = t;
          t = i_44;
          t = y_73(t);
          v_12 = t;
          t = (ATerm) ATinsert(CheckATermList(j_44), v_12);
          d_2 = t;
          t = SSLsetAnnotations(d_2, p_12);
          LocalPopChoice(y_30);
        }
      else
        {
          t = x_30;
          {
            ATerm h_13 = NULL,k_13 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(h_44);
            h_13 = t;
            t = j_44;
            t = k_44(t);
            k_13 = t;
            t = (ATerm) ATinsert(CheckATermList(k_13), i_44);
            x_2 = t;
            t = SSLsetAnnotations(x_2, h_13);
          }
        }
    }
    return(t);
  }
  t = k_44(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
  o_44 = t;
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_44;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_31 = ATgetFirst((ATermList) t);
                ATerm c_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_44;
          }
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        t = (ATerm) ATinsert(ATempty, o_44);
      }
  }
  p_44 = t;
  t = term_u_9;
  q_44 = t;
  t = SSL_printnl(q_44, p_44);
  t = o_44;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL;
  t = term_n_9;
  u_44 = t;
  t = term_j_29;
  v_44 = t;
  t = term_k_29;
  t = q_7(u_44, v_44, t);
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
  ATerm w_44 = NULL,c_45 = NULL;
  t = term_h_31;
  w_44 = t;
  t = term_z_20;
  c_45 = t;
  t = term_i_31;
  t = t_7(w_44, c_45, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_j_31;
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
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL;
  t = term_h_31;
  f_45 = t;
  t = term_z_20;
  g_45 = t;
  t = term_i_31;
  t = t_7(f_45, g_45, t);
  t = term_l_31;
  d_45 = t;
  t = term_z_20;
  e_45 = t;
  t = term_n_31;
  t = t_7(d_45, e_45, t);
  t = term_r_31;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, v_5, w_5, t);
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      t = Option_3_0(x_5, y_5, a_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_60 (ATerm), ATerm o_60 (ATerm), ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,n_45 = NULL,e_4 = NULL;
  n_45 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_45 = ATgetFirst((ATermList) t);
      j_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_45);
  h_45 = t;
  t = i_45;
  t = n_60(t);
  k_45 = t;
  t = j_45;
  t = o_60(t);
  l_45 = t;
  t = (ATerm) ATinsert(CheckATermList(l_45), k_45);
  e_4 = t;
  t = SSLsetAnnotations(e_4, h_45);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,x_45 = NULL,y_45 = NULL,g_4 = NULL;
  s_45 = t;
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_31;
        t = w_91(t);
        LocalPopChoice(w_31);
      }
    else
      {
        t = v_31;
      }
  }
  t = s_45;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_45 = ATgetFirst((ATermList) t);
      v_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_45);
  t_45 = t;
  t = term_j_29;
  y_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_29, u_45);
  t = t_7(y_45, u_45, t);
  t = v_45;
  {
    static ATerm i_46 (ATerm t)
    {
      ATerm y_31 = t;
      int z_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_32 = t;
          int b_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_46 = NULL;
              b_46 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_46;
              LocalPopChoice(b_32);
            }
          else
            {
              t = a_32;
              t = w_91(t);
              t = Cons_2_0(_id, i_46, t);
            }
          LocalPopChoice(z_31);
        }
      else
        {
          t = y_31;
          {
            ATerm e_46 = NULL,f_46 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_46 = ATgetFirst((ATermList) t);
                f_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_46), (ATerm) ATmakeAppl(sym_Undefined_1, e_46));
          }
        }
      return(t);
    }
    t = i_46(t);
  }
  x_45 = t;
  t = (ATerm) ATinsert(CheckATermList(x_45), (ATerm) ATmakeAppl(sym_Program_1, u_45));
  g_4 = t;
  t = SSLsetAnnotations(g_4, t_45);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm v_46 = NULL;
  v_46 = t;
  if(match_string(t, "--help"))
    {
      t = v_46;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_46;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_46;
        }
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL;
  t = term_m_30;
  w_46 = t;
  t = term_z_20;
  x_46 = t;
  t = term_c_32;
  t = t_7(w_46, x_46, t);
  t = term_i_32;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_k_32;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_91 (ATerm), ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
  p_46 = t;
  t = term_q_27;
  q_46 = t;
  t = term_n_32;
  t = lookup_table_0_1(q_46, t);
  u_46 = t;
  t = term_r_27;
  r_46 = t;
  t = (ATerm) ATempty;
  s_46 = t;
  t = u_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(r_46, s_46, t_46, t);
  t = p_46;
  {
    static ATerm b_6 (ATerm t)
    {
      ATerm p_32 = t;
      int q_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_91(t);
          LocalPopChoice(q_32);
        }
      else
        {
          t = p_32;
          {
            ATerm v_32 = t;
            int w_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_6, e_6, f_6, t);
                LocalPopChoice(w_32);
              }
            else
              {
                t = v_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_6, t);
  }
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_47 = NULL;
        i_47 = t;
        {
          ATerm z_32 = t;
          int a_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_14 = NULL;
              t = i_47;
              {
                ATerm b_33 = t;
                int c_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_14 = NULL,j_14 = NULL;
                    t = term_n_9;
                    i_14 = t;
                    t = term_m_30;
                    j_14 = t;
                    t = term_n_30;
                    t = q_7(i_14, j_14, t);
                    LocalPopChoice(c_33);
                  }
                else
                  {
                    t = b_33;
                    t = fetch_1_0(i_6, t);
                  }
              }
              t = i_47;
              t = default_system_usage_0_0(t);
              t = term_y_26;
              f_14 = t;
              t = SSL_exit(f_14);
              LocalPopChoice(a_33);
            }
          else
            {
              t = z_32;
              {
                ATerm s_14 = NULL,x_14 = NULL,y_14 = NULL;
                t = term_n_9;
                x_14 = t;
                t = term_h_31;
                y_14 = t;
                t = term_d_33;
                t = q_7(x_14, y_14, t);
                t = i_47;
                t = default_system_about_0_0(t);
                t = term_y_26;
                s_14 = t;
                t = SSL_exit(s_14);
              }
            }
        }
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        {
          ATerm h_33 = t;
          int m_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL;
              static ATerm j_6 (ATerm t)
              {
                ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL,i_4 = NULL;
                o_47 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_47 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_47);
                m_47 = t;
                t = n_47;
                if(((n_46 != NULL) && (n_46 != t)))
                  _fail(t);
                else
                  n_46 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_47);
                i_4 = t;
                t = SSLsetAnnotations(i_4, m_47);
                return(t);
              }
              t = fetch_1_0(j_6, t);
              t = term_m_19;
              k_47 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_46)), term_n_33);
              l_47 = t;
              t = SSL_printnl(k_47, l_47);
              t = (ATerm) ATmakeAppl(sym__2, term_m_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_46)), term_n_33));
              t = default_system_usage_0_0(t);
              t = term_q_10;
              j_47 = t;
              t = SSL_exit(j_47);
              LocalPopChoice(m_33);
            }
          else
            {
              t = h_33;
            }
        }
      }
  }
  o_46 = t;
  t = term_q_27;
  t = table_destroy_0_0(t);
  t = o_46;
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL;
  t = parse_options_1_0(a_90, t);
  t_47 = t;
  t = term_o_33;
  t = table_create_0_0(t);
  t = term_o_33;
  u_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_33, term_p_33, t_47);
  t = lookup_table_0_1(u_47, t);
  x_47 = t;
  t = term_p_33;
  v_47 = t;
  t = x_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(v_47, t_47, w_47, t);
  t = t_47;
  t = c_90(t);
  {
    ATerm s_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_90, t);
        LocalPopChoice(u_33);
      }
    else
      {
        t = s_33;
        {
          ATerm v_33 = t;
          int e_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_90(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_34);
            }
          else
            {
              t = v_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm f_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      LocalPopChoice(h_34);
    }
  else
    {
      t = f_34;
      {
        ATerm i_34 = t;
        int n_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(n_34);
          }
        else
          {
            t = i_34;
            {
              ATerm o_34 = t;
              int v_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(v_34);
                }
              else
                {
                  t = o_34;
                  {
                    ATerm w_34 = t;
                    int x_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(m_6, n_6, o_6, t);
                        LocalPopChoice(x_34);
                      }
                    else
                      {
                        t = w_34;
                        {
                          ATerm y_34 = t;
                          int z_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(z_34);
                            }
                          else
                            {
                              t = y_34;
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
  ATerm j_48 = NULL,k_48 = NULL;
  t = term_a_35;
  j_48 = t;
  t = term_z_20;
  k_48 = t;
  t = term_b_35;
  t = t_7(j_48, k_48, t);
  t = term_d_35;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_f_35;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm g_35 = t;
  int h_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL;
      t = term_n_9;
      n_48 = t;
      t = term_a_21;
      o_48 = t;
      t = term_i_35;
      t = q_7(n_48, o_48, t);
      m_48 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_48);
      LocalPopChoice(h_35);
    }
  else
    {
      t = g_35;
      t = term_b_10;
    }
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_48 = NULL,r_48 = NULL,s_48 = NULL;
        p_48 = t;
        t = term_n_9;
        r_48 = t;
        t = term_l_28;
        s_48 = t;
        t = term_n_35;
        t = q_7(r_48, s_48, t);
        t = p_48;
        LocalPopChoice(l_35);
      }
    else
      {
        t = k_35;
        {
          ATerm p_35 = t;
          int q_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_48 = NULL,z_48 = NULL;
              z_48 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  y_48 = ATgetArgument(t, 0);
                  {
                    ATerm g_15 = NULL,n_4 = NULL;
                    t = SSLgetAnnotations(z_48);
                    g_15 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, y_48);
                    n_4 = t;
                    t = SSLsetAnnotations(n_4, g_15);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = z_48;
                }
              LocalPopChoice(q_35);
              t = xtc_transform_file_2_0(q_6, pass_includes_0_0, t);
            }
          else
            {
              t = p_35;
              t = xtc_transform_term_2_0(p_7, pass_includes_0_0, t);
            }
        }
      }
  }
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_49 = NULL,g_49 = NULL;
        g_49 = t;
        if(match_cons(t, sym_FILE_1))
          {
            f_49 = ATgetArgument(t, 0);
            {
              ATerm r_15 = NULL,p_4 = NULL;
              t = SSLgetAnnotations(g_49);
              r_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_49);
              p_4 = t;
              t = SSLsetAnnotations(p_4, r_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_49;
          }
        LocalPopChoice(t_35);
        t = xtc_transform_file_2_0(y_7, z_7, t);
      }
    else
      {
        t = s_35;
        t = xtc_transform_term_2_0(b_8, c_8, t);
      }
  }
  {
    ATerm u_35 = t;
    int w_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_49 = NULL,j_49 = NULL,k_49 = NULL;
        h_49 = t;
        t = term_n_9;
        j_49 = t;
        t = term_o_28;
        k_49 = t;
        t = term_x_35;
        t = q_7(j_49, k_49, t);
        t = h_49;
        LocalPopChoice(w_35);
      }
    else
      {
        t = u_35;
        {
          ATerm y_35 = t;
          int z_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_49 = NULL,r_49 = NULL;
              r_49 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  q_49 = ATgetArgument(t, 0);
                  {
                    ATerm y_15 = NULL,q_4 = NULL;
                    t = SSLgetAnnotations(r_49);
                    y_15 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, q_49);
                    q_4 = t;
                    t = SSLsetAnnotations(q_4, y_15);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = r_49;
                }
              LocalPopChoice(z_35);
              t = xtc_transform_file_2_0(g_8, h_8, t);
            }
          else
            {
              t = y_35;
              t = xtc_transform_term_2_0(j_8, o_8, t);
            }
        }
      }
  }
  {
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_49 = NULL,y_49 = NULL;
        y_49 = t;
        if(match_cons(t, sym_FILE_1))
          {
            x_49 = ATgetArgument(t, 0);
            {
              ATerm w_16 = NULL,r_4 = NULL;
              t = SSLgetAnnotations(y_49);
              w_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_49);
              r_4 = t;
              t = SSLsetAnnotations(r_4, w_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_49;
          }
        LocalPopChoice(b_36);
        t = xtc_transform_file_2_0(p_8, r_8, t);
      }
    else
      {
        t = a_36;
        t = xtc_transform_term_2_0(u_8, v_8, t);
      }
  }
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_50 = NULL,l_50 = NULL;
        l_50 = t;
        if(match_cons(t, sym_FILE_1))
          {
            k_50 = ATgetArgument(t, 0);
            {
              ATerm t_17 = NULL,s_4 = NULL;
              t = SSLgetAnnotations(l_50);
              t_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_50);
              s_4 = t;
              t = SSLsetAnnotations(s_4, t_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_50;
          }
        LocalPopChoice(d_36);
        t = xtc_transform_file_2_0(w_8, pass_verbose_0_0, t);
      }
    else
      {
        t = c_36;
        t = xtc_transform_term_2_0(z_8, pass_verbose_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_e_36;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_e_36;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_f_36;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_f_36;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_g_36;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_g_36;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_h_36;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL;
  t = pass_verbose_0_0(t);
  z_49 = t;
  t = term_i_36;
  t = xtc_find_0_0(t);
  a_50 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(z_49), a_50), term_j_36);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_h_36;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL;
  t = pass_verbose_0_0(t);
  c_50 = t;
  t = term_i_36;
  t = xtc_find_0_0(t);
  d_50 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(c_50), d_50), term_j_36);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_k_36;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_k_36;
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
