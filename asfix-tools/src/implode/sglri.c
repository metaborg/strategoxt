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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_n_34;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_v_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_m_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_f_31;
ATerm term_k_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_p_29;
ATerm term_k_29;
ATerm term_g_29;
ATerm term_p_28;
ATerm term_m_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_v_26;
ATerm term_r_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_z_25;
ATerm term_o_25;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_m_23;
ATerm term_e_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_s_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_n_20;
ATerm term_j_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_a_20;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_n_19;
ATerm term_r_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_u_13;
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
ATerm term_h_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_w_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_i_8;
ATerm term_g_8;
ATerm term_e_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_9, term_c_9, term_d_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_9, term_j_9, term_l_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_9, term_q_9, term_r_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_9, term_a_10, term_d_10);
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
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_r_10, term_s_10);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_11, term_d_11, term_e_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_h_11, term_j_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_o_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_v_11, term_w_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_g_12, term_i_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_p_12, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_h_13, term_i_13);
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
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_z_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_h_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_o_14, term_t_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_a_15);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_e_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_o_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_y_15, term_z_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_d_16, term_e_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_l_16, term_m_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_x_16, term_a_17);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_17, term_d_17, term_e_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_h_17, term_i_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym__2, term_j_20, term_f_21);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_j_20, term_n_20);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_c_22);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym__2, term_r_18, term_r_26);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_k_22);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_m_27);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_p_31, term_k_22);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym__2, term_s_31, term_k_22);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym__2, term_k_29, term_k_22);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym__2, term_n_34, term_k_22);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm read_from_0_0 (ATerm t);
static ATerm g_6 (ATerm l_17, ATerm m_17, ATerm t);
static ATerm h_6 (ATerm x_64 (ATerm), ATerm f_169, ATerm t_17, ATerm t);
static ATerm a_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm t);
static ATerm i_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm z_69 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm m_63 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm v_80 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm u_80 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm w_80 (ATerm), ATerm t);
static ATerm l_6 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm o_24, ATerm n_24, ATerm t);
static ATerm m_6 (ATerm r_73 (ATerm), ATerm k_24, ATerm j_24, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm n_6 (ATerm c_36, ATerm d_36, ATerm e_36, ATerm t);
static ATerm o_6 (ATerm y_80 (ATerm), ATerm m_36, ATerm l_36, ATerm t);
static ATerm h_8 (ATerm y_7, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm p_6 (ATerm r_17, ATerm t);
static ATerm q_6 (ATerm v_38, ATerm w_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_10 (ATerm x_8, ATerm t);
static ATerm x_10 (ATerm f_9, ATerm g_9, ATerm h_9, ATerm t);
static ATerm y_10 (ATerm u_9, ATerm v_9, ATerm w_9, ATerm t);
static ATerm r_6 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm j_77 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm i_16 (ATerm g_15, ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm h_83 (ATerm), ATerm t);
static ATerm s_6 (ATerm n_79 (ATerm), ATerm o_34, ATerm m_34, ATerm t);
static ATerm h_18 (ATerm k_17, ATerm t);
static ATerm i_18 (ATerm p_17, ATerm u_17, ATerm v_17, ATerm t);
static ATerm p_2 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm t_6 (ATerm n_38, ATerm o_38, ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm sglr_2_0 (ATerm f_62 (ATerm), ATerm g_62 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm parse_and_implode_0_0 (ATerm t);
static ATerm v_6 (ATerm l_14, ATerm m_14, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm w_6 (ATerm k_35, ATerm l_35, ATerm t);
ATerm end_scope_1_0 (ATerm k_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm j_79 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm t_82 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm u_82 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_7 (ATerm f_37, ATerm g_37, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm d_70 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm r_28 (ATerm g_28, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm u_6 (ATerm l_37, ATerm k_37, ATerm t);
static ATerm c_7 (ATerm f_35, ATerm g_35, ATerm e_35, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm sglri_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_6 (ATerm a_33, ATerm b_33, ATerm t);
ATerm foldr_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_80 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm need_help_1_0 (ATerm v_84 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_69 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm a_7 (ATerm v_31, ATerm w_31, ATerm t);
ATerm debug_1_0 (ATerm v_64 (ATerm), ATerm t);
ATerm map_1_0 (ATerm n_69 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm b_7 (ATerm w_36, ATerm x_36, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm h_56 (ATerm), ATerm i_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_86 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm parse_options_1_0 (ATerm s_86 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm j_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_e_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm s_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_g_8);
      s_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_0, (ATerm) ATinsert(ATempty, term_g_8));
      t = t_6(j_0, s_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm g_6 (ATerm l_17, ATerm m_17, ATerm t)
{
  ATerm u_0 = NULL;
  t = SSL_write_term_to_stream_baf(l_17, m_17);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_0);
  return(t);
}
static ATerm h_6 (ATerm x_64 (ATerm), ATerm f_169, ATerm t_17, ATerm t)
{
  ATerm w_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_169, term_i_8);
  t = r_6(t);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_0, t_17);
  t = x_64(t);
  t = fclose_0_0(t);
  t = t_17;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm a_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_8 = ATgetArgument(t, 0);
      if(match_cons(j_8, sym_Stream_1))
        {
          a_1 = ATgetArgument(j_8, 0);
        }
      else
        _fail(t);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(a_1, d_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL;
  x_0 = t;
  t = xtc_new_file_0_0(t);
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_0, x_0);
  t = h_6(a_0, y_0, x_0, t);
  t = SSL_close_file(y_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_0);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(q_83, r_83, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm i_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL;
  r_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      s_2 = ATgetArgument(t, 0);
      {
        ATerm l_0 = NULL,m_0 = NULL;
        t = SSL_int_to_string(s_2);
        l_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_8), l_0), term_o_8);
        m_0 = t;
        t = SSL_concat_strings(m_0);
      }
    }
  else
    {
      ATerm l_1 = NULL,n_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          s_2 = ATgetArgument(t, 0);
          t_2 = ATgetArgument(t, 1);
          u_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(t_2);
      l_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_2), term_s_8), l_1), term_r_8), s_2);
      n_1 = t;
      t = SSL_concat_strings(n_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm z_69 (ATerm), ATerm t)
{
  ATerm x_2 = NULL;
  static ATerm b_0 (ATerm t)
  {
    t = z_69(t);
    if(((x_2 != NULL) && (x_2 != t)))
      _fail(t);
    else
      x_2 = t;
    return(t);
  }
  t = fetch_1_0(b_0, t);
  t = not_null(x_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm y_2 = NULL;
  y_2 = t;
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm v_8 = ATgetArgument(t, 0);
              if((y_2 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm a_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_17), term_f_17), term_b_17), term_p_16), term_h_16), term_b_16), term_w_15), term_p_15), term_f_15), term_b_15), term_u_14), term_k_14), term_a_14), term_s_13), term_o_13), term_k_13), term_t_12), term_k_12), term_x_11), term_q_11), term_l_11), term_f_11), term_w_10), term_j_10), term_f_10), term_t_9), term_o_9), term_e_9);
        t = fetch_elem_1_0(f_0, t);
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, y_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm c_3 = NULL,n_3 = NULL;
  c_3 = t;
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_17 = ATgetArgument(t, 0);
            n_3 = ATgetArgument(t, 1);
            {
              ATerm s_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_17);
        {
          ATerm w_17 = t;
          int x_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_1 = NULL,a_2 = NULL,b_2 = NULL;
              t = n_3;
              {
                ATerm y_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_17;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              y_1 = t;
              t = term_z_17;
              a_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, y_1), term_a_18);
              b_2 = t;
              t = SSL_printnl(a_2, b_2);
              t = (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATinsert(ATempty, y_1), term_a_18));
              LocalPopChoice(x_17);
            }
          else
            {
              t = w_17;
              t = c_3;
            }
        }
      }
    else
      {
        t = n_17;
        t = c_3;
      }
  }
  t = c_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm m_63 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL;
  a_4 = t;
  t = fork_0_0(t);
  z_3 = t;
  {
    ATerm b_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = a_4;
        t = m_63(t);
        LocalPopChoice(d_18);
      }
    else
      {
        t = b_18;
        t = SSL_waitpid(z_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_18 = ATgetArgument(t, 0);
            if(((ATgetType(e_18) != AT_INT) || (ATgetInt((ATermInt) e_18) != 0)))
              _fail(t);
            {
              ATerm j_18 = ATgetArgument(t, 1);
            }
            {
              ATerm m_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = a_4;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm d_4 = NULL;
  static ATerm h_0 (ATerm t)
  {
    ATerm e_4 = NULL,f_4 = NULL;
    e_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_4), e_4);
    t = b_7(not_null(d_4), e_4, t);
    f_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_4, f_4);
    return(t);
  }
  if(((d_4 != NULL) && (d_4 != t)))
    _fail(t);
  else
    d_4 = t;
  t = SSL_table_keys(d_4);
  t = map_1_0(h_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm i_4 = NULL;
  i_4 = t;
  {
    ATerm n_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_4 = NULL;
        t = term_r_18;
        t = get_config_0_0(t);
        l_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_4, term_l_16);
        t = geq_0_0(t);
        t = i_4;
        t = v_80(t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = n_18;
        t = i_4;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_80 (ATerm), ATerm t)
{
  ATerm o_4 = NULL;
  o_4 = t;
  {
    ATerm s_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_4 = NULL;
        t = term_r_18;
        t = get_config_0_0(t);
        q_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_4, term_p_12);
        t = geq_0_0(t);
        t = o_4;
        t = u_80(t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = s_18;
        t = o_4;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm x_4 = NULL;
  x_4 = t;
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_4 = NULL;
        t = term_r_18;
        t = get_config_0_0(t);
        z_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_4, term_a_10);
        t = geq_0_0(t);
        t = x_4;
        t = w_80(t);
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = x_4;
      }
  }
  return(t);
}
static ATerm l_6 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm o_24, ATerm n_24, ATerm t)
{
  t = v_73(t);
  {
    static ATerm q_0 (ATerm t)
    {
      ATerm f_5 = NULL;
      f_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_24, f_5);
      t = u_73(t);
      return(t);
    }
    t = fetch_1_0(q_0, t);
  }
  t = n_24;
  return(t);
}
static ATerm m_6 (ATerm r_73 (ATerm), ATerm k_24, ATerm j_24, ATerm t)
{
  static ATerm z_5 (ATerm t)
  {
    ATerm s_5 = NULL,u_5 = NULL,v_5 = NULL;
    s_5 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_5 = ATgetFirst((ATermList) t);
            v_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_18 = t;
          int z_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_5;
              {
                static ATerm z_0 (ATerm t)
                {
                  t = j_24;
                  return(t);
                }
                t = l_6(r_73, z_0, u_5, v_5, t);
              }
              t = z_5(t);
              LocalPopChoice(z_18);
            }
          else
            {
              t = y_18;
              {
                ATerm g_2 = NULL,m_2 = NULL,g_0 = NULL;
                t = SSLgetAnnotations(s_5);
                g_2 = t;
                t = v_5;
                t = z_5(t);
                m_2 = t;
                t = (ATerm) ATinsert(CheckATermList(m_2), u_5);
                g_0 = t;
                t = SSLsetAnnotations(g_0, g_2);
              }
            }
        }
      }
    return(t);
  }
  t = k_24;
  t = z_5(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm j_7 = NULL;
  if(match_cons(t, sym__2))
    {
      j_7 = ATgetArgument(t, 0);
      if((j_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_6 (ATerm c_36, ATerm d_36, ATerm e_36, ATerm t)
{
  ATerm k_6 = NULL,y_6 = NULL,z_6 = NULL;
  k_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_36, d_36);
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_19 = ATgetArgument(t, 0);
            ATerm d_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_36, d_36);
        t = b_7(c_36, d_36, t);
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = (ATerm) ATempty;
      }
  }
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_6, e_36);
  t = m_6(b_1, z_6, e_36, t);
  y_6 = t;
  t = SSL_table_put(c_36, d_36, y_6);
  t = k_6;
  return(t);
}
static ATerm o_6 (ATerm y_80 (ATerm), ATerm m_36, ATerm l_36, ATerm t)
{
  static ATerm c_1 (ATerm t)
  {
    ATerm l_7 = NULL,m_7 = NULL;
    if(match_cons(t, sym__2))
      {
        l_7 = ATgetArgument(t, 0);
        m_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_36, l_7, m_7);
    t = y_80(t);
    return(t);
  }
  t = l_36;
  t = map_1_0(c_1, t);
  return(t);
}
static ATerm h_8 (ATerm y_7, ATerm t)
{
  t = SSL_fclose(y_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_8 = NULL,f_8 = NULL;
  f_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_8 = ATgetArgument(t, 0);
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_8);
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            t = h_8(f_8, t);
          }
      }
    }
  else
    {
      t = h_8(f_8, t);
    }
  return(t);
}
static ATerm p_6 (ATerm r_17, ATerm t)
{
  t = SSL_read_term_from_stream(r_17);
  return(t);
}
static ATerm q_6 (ATerm v_38, ATerm w_38, ATerm t)
{
  ATerm k_8 = NULL;
  t = SSL_fopen(v_38, w_38);
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_8);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_8 = NULL;
  t = SSL_stdin_stream();
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_8 = NULL;
  t = SSL_stdout_stream();
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_8 = NULL;
  t = SSL_stderr_stream();
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_8);
  return(t);
}
static ATerm u_10 (ATerm x_8, ATerm t)
{
  ATerm y_8 = NULL;
  t = SSL_explode_term(x_8);
  if(match_cons(t, sym__2))
    {
      ATerm g_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_19 = ATgetArgument(t, 1);
        if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
          {
            y_8 = ATgetFirst((ATermList) h_19);
            {
              ATerm i_19 = (ATerm) ATgetNext((ATermList) h_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_8;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_10 (ATerm f_9, ATerm g_9, ATerm h_9, ATerm t)
{
  ATerm k_9 = NULL,m_9 = NULL,n_9 = NULL,s_9 = NULL,m_1 = NULL;
  t = SSLgetAnnotations(h_9);
  n_9 = t;
  t = f_9;
  if(match_cons(t, sym_Path_1))
    {
      s_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_9, g_9);
  m_1 = t;
  t = SSLsetAnnotations(m_1, n_9);
  if(match_cons(t, sym__2))
    {
      k_9 = ATgetArgument(t, 0);
      m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(k_9, m_9, t);
  return(t);
}
static ATerm y_10 (ATerm u_9, ATerm v_9, ATerm w_9, ATerm t)
{
  ATerm z_9 = NULL,b_10 = NULL,c_10 = NULL,k_10 = NULL,p_1 = NULL;
  t = SSLgetAnnotations(w_9);
  c_10 = t;
  t = SSL_is_string(u_9);
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_10, v_9);
  p_1 = t;
  t = SSLsetAnnotations(p_1, c_10);
  if(match_cons(t, sym__2))
    {
      z_9 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(z_9, b_10, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL,q_10 = NULL;
  m_10 = t;
  if(match_cons(t, sym__2))
    {
      n_10 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_10(m_10, t);
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            {
              ATerm l_19 = t;
              int m_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_10(n_10, q_10, m_10, t);
                  LocalPopChoice(m_19);
                }
              else
                {
                  t = l_19;
                  t = y_10(n_10, q_10, m_10, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_10(m_10, t);
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_n_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_11 = NULL;
      i_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_11, term_s_19);
      t = r_6(t);
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      t = debug_1_0(e_1, t);
      _fail(t);
    }
  a_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(b_11, t);
  z_10 = t;
  t = a_11;
  t = fclose_0_0(t);
  t = z_10;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm x_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_11 = NULL,r_11 = NULL;
      k_11 = t;
      t = (ATerm) ATinsert(ATempty, term_a_20);
      r_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_11, (ATerm) ATinsert(ATempty, term_a_20));
      t = t_6(k_11, r_11, t);
      LocalPopChoice(z_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = x_19;
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_20 = t;
            if((PushChoice() == 0))
              {
                ATerm s_11 = NULL,t_11 = NULL;
                s_11 = t;
                t = (ATerm) ATinsert(ATempty, term_g_8);
                t_11 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_11, (ATerm) ATinsert(ATempty, term_g_8));
                t = t_6(s_11, t_11, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_20;
              }
            t = debug_1_0(f_1, t);
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            t = debug_1_0(g_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = debug_1_0(i_1, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_e_20;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  v_12 = t;
  t = term_z_17;
  w_12 = t;
  t = (ATerm) ATinsert(ATempty, term_g_20);
  x_12 = t;
  t = SSL_printnl(w_12, x_12);
  t = v_12;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym__3))
    {
      y_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
      a_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_6(y_12, z_12, a_13, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
  b_13 = t;
  t = term_z_17;
  c_13 = t;
  t = (ATerm) ATinsert(ATempty, term_h_20);
  d_13 = t;
  t = SSL_printnl(c_13, d_13);
  t = b_13;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
  e_13 = t;
  t = term_z_17;
  f_13 = t;
  t = (ATerm) ATinsert(ATempty, term_g_20);
  g_13 = t;
  t = SSL_printnl(f_13, g_13);
  t = e_13;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,j_12 = NULL,n_12 = NULL,o_12 = NULL;
  z_11 = t;
  t = if_verbose5_1_0(h_1, t);
  {
    ATerm i_20 = t;
    if((PushChoice() == 0))
      {
        ATerm q_12 = NULL,r_12 = NULL;
        t = term_j_20;
        q_12 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, z_11);
        r_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATmakeAppl(sym_Imported_1, z_11));
        t = b_7(q_12, r_12, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_20;
      }
  }
  b_12 = t;
  t = term_j_20;
  j_12 = t;
  t = term_n_20;
  n_12 = t;
  t = (ATerm) ATinsert(ATempty, z_11);
  o_12 = t;
  t = SSL_table_put(j_12, n_12, o_12);
  t = b_12;
  t = if_verbose4_1_0(j_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(o_1, t);
  a_12 = t;
  t = term_j_20;
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_20, a_12);
  t = o_6(q_1, f_12, a_12, t);
  t = if_verbose6_1_0(r_1, t);
  t = term_j_20;
  c_12 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, z_11);
  d_12 = t;
  t = (ATerm) ATempty;
  e_12 = t;
  t = SSL_table_put(c_12, d_12, e_12);
  t = (ATerm) ATmakeAppl(sym__3, term_j_20, (ATerm)ATmakeAppl(sym_Imported_1, z_11), (ATerm) ATempty);
  t = if_verbose4_1_0(t_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm j_77 (ATerm), ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,y_13 = NULL;
  v_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_13;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_13 = ATgetFirst((ATermList) t);
          y_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_4 = NULL,k_4 = NULL,n_4 = NULL,s_1 = NULL;
            t = SSLgetAnnotations(v_13);
            b_4 = t;
            t = w_13;
            t = j_77(t);
            k_4 = t;
            t = y_13;
            t = filter_1_0(j_77, t);
            n_4 = t;
            t = (ATerm) ATinsert(CheckATermList(n_4), k_4);
            s_1 = t;
            t = SSLsetAnnotations(s_1, b_4);
            LocalPopChoice(q_20);
          }
        else
          {
            t = o_20;
            t = y_13;
            t = filter_1_0(j_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm t)
{
  static ATerm d_14 (ATerm t)
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_67(t);
        t = d_14(t);
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = t_67(t);
      }
    return(t);
  }
  t = d_14(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm u_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_20;
      t = get_config_0_0(t);
      LocalPopChoice(y_20);
    }
  else
    {
      t = u_20;
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_14 = NULL;
            t = term_c_21;
            e_14 = t;
            t = SSL_getenv(e_14);
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_e_21;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL;
  t = term_j_20;
  r_14 = t;
  t = term_f_21;
  s_14 = t;
  t = term_g_21;
  t = b_7(r_14, s_14, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm h_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_21;
      }
  }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_i_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm i_14 = NULL;
  t = if_verbose5_1_0(u_1, t);
  i_14 = t;
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_14 = NULL,p_14 = NULL;
        t = term_j_20;
        j_14 = t;
        t = term_n_20;
        p_14 = t;
        t = term_l_21;
        t = b_7(j_14, p_14, t);
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        {
          ATerm q_14 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          q_14 = t;
          t = repeat_2_0(w_1, _id, t);
          t = q_14;
        }
      }
  }
  t = i_14;
  t = if_verbose5_1_0(x_1, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_m_21;
  return(t);
}
static ATerm i_16 (ATerm g_15, ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
  t = term_j_20;
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, g_15);
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATmakeAppl(sym_Tool_1, g_15));
  t = b_7(k_15, l_15, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_21 = ATgetFirst((ATermList) t);
      if(match_cons(p_21, sym__2))
        {
          ATerm r_21 = ATgetArgument(p_21, 0);
          j_15 = ATgetArgument(p_21, 1);
        }
      else
        _fail(t);
      {
        ATerm q_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_15;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_m_21;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_j_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(k_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_15 = NULL,n_15 = NULL,q_15 = NULL;
      t = if_verbose5_1_0(c_2, t);
      t = xtc_load_0_0(t);
      q_15 = t;
      if(match_cons(t, sym__2))
        {
          m_15 = ATgetArgument(t, 0);
          n_15 = ATgetArgument(t, 1);
          {
            ATerm v_21 = t;
            int w_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_15 = NULL,v_15 = NULL,a_16 = NULL;
                t = term_j_20;
                v_15 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, m_15);
                a_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATmakeAppl(sym_Tool_1, m_15));
                t = b_7(v_15, a_16, t);
                {
                  static ATerm e_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((n_15 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((u_15 != NULL) && (u_15 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_15 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_2, t);
                }
                t = not_null(u_15);
                LocalPopChoice(w_21);
              }
            else
              {
                t = v_21;
                t = i_16(q_15, t);
              }
          }
        }
      else
        {
          t = i_16(q_15, t);
        }
      t = if_verbose5_1_0(f_2, t);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm f_16 = NULL,c_5 = NULL,d_5 = NULL;
        f_16 = t;
        t = term_z_17;
        c_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_21), f_16), term_x_21);
        d_5 = t;
        t = SSL_printnl(c_5, d_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_21), f_16), term_x_21);
        t = if_verbose5_1_0(j_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  ATerm k_16 = NULL,o_16 = NULL;
  o_16 = t;
  t = h_83(t);
  t = xtc_find_0_0(t);
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_16, o_16);
  {
    static ATerm n_2 (ATerm t)
    {
      ATerm q_16 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, k_16, o_16);
      t = i_6(k_16, o_16, t);
      t = term_z_21;
      q_16 = t;
      t = SSL_exit(q_16);
      return(t);
    }
    t = fork_and_wait_1_0(n_2, t);
  }
  t = o_16;
  return(t);
}
static ATerm s_6 (ATerm n_79 (ATerm), ATerm o_34, ATerm m_34, ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,y_16 = NULL;
  u_16 = t;
  t = n_79(t);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_16, o_34, m_34);
  t = c_7(r_16, o_34, m_34, t);
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_16 = NULL;
        t = term_c_22;
        z_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_16, term_c_22);
        t = b_7(r_16, z_16, t);
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_16 = ATgetFirst((ATermList) t);
      t_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_c_22;
  v_16 = t;
  t = (ATerm) ATinsert(CheckATermList(t_16), (ATerm) ATinsert(CheckATermList(s_16), o_34));
  y_16 = t;
  t = SSL_table_put(r_16, v_16, y_16);
  t = u_16;
  return(t);
}
static ATerm h_18 (ATerm k_17, ATerm t)
{
  t = k_17;
  {
    ATerm d_22 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_22 = ATgetArgument(t, 0);
            ATerm f_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_22;
      }
  }
  t = term_g_22;
  t = debug_1_0(p_2, t);
  t = (ATerm) ATmakeAppl(sym__2, k_17, term_i_8);
  t = open_file_0_0(t);
  return(t);
}
static ATerm i_18 (ATerm p_17, ATerm u_17, ATerm v_17, ATerm t)
{
  t = SSL_open_file(p_17, u_17);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_h_22;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm c_18 = NULL,f_18 = NULL,g_18 = NULL;
  c_18 = t;
  if(match_cons(t, sym__2))
    {
      f_18 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_18(c_18, t);
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            t = i_18(f_18, g_18, c_18, t);
          }
      }
    }
  else
    {
      t = h_18(c_18, t);
    }
  return(t);
}
static ATerm t_6 (ATerm n_38, ATerm o_38, ATerm t)
{
  t = SSL_access(n_38, o_38);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,o_18 = NULL;
  t = term_k_22;
  t = new_0_0(t);
  k_18 = t;
  t = term_l_22;
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_18, term_l_22);
  t = a_7(k_18, l_18, t);
  o_18 = t;
  {
    ATerm m_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_18 = NULL;
        t = (ATerm) ATinsert(ATempty, term_g_8);
        q_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_18, (ATerm) ATinsert(ATempty, term_g_8));
        t = t_6(o_18, q_18, t);
        t = new_file_0_0(t);
        LocalPopChoice(o_22);
      }
    else
      {
        t = m_22;
        t = o_18;
      }
  }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL;
  t = new_file_0_0(t);
  t_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_18, term_i_8);
  t = open_file_0_0(t);
  t = term_k_22;
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_18, term_k_22);
  t = s_6(v_2, t_18, u_18, t);
  t = t_18;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL;
  q_19 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_5 = NULL,i_5 = NULL;
      t = q_19;
      t = xtc_new_file_0_0(t);
      h_5 = t;
      t = v_0(t);
      i_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_5, (ATerm) ATinsert(ATinsert(ATempty, h_5), term_r_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = SSL_close_file(h_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_5);
    }
  else
    {
      ATerm c_6 = NULL,d_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_19;
      t = xtc_new_file_0_0(t);
      c_6 = t;
      t = v_0(t);
      d_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_6), term_r_22), r_19), term_s_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = SSL_close_file(c_6);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_6);
    }
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_22;
      t = get_config_0_0(t);
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      {
        ATerm u_19 = NULL,v_19 = NULL,y_19 = NULL;
        t = term_z_17;
        v_19 = t;
        t = (ATerm) ATinsert(ATempty, term_w_22);
        y_19 = t;
        t = SSL_printnl(v_19, y_19);
        t = term_c_9;
        u_19 = t;
        t = SSL_exit(u_19);
        t = (ATerm) ATinsert(ATempty, term_w_22);
      }
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_x_22;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_x_22;
  return(t);
}
ATerm sglr_2_0 (ATerm f_62 (ATerm), ATerm g_62 (ATerm), ATerm t)
{
  ATerm y_22 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_20 = NULL,l_20 = NULL;
      l_20 = t;
      if(match_cons(t, sym_FILE_1))
        {
          k_20 = ATgetArgument(t, 0);
          {
            ATerm i_7 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(l_20);
            i_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, k_20);
            i_2 = t;
            t = SSLsetAnnotations(i_2, i_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_20;
        }
      LocalPopChoice(b_23);
      {
        static ATerm a_3 (ATerm t)
        {
          ATerm m_20 = NULL,p_20 = NULL,t_20 = NULL;
          t_20 = t;
          t = f_62(t);
          m_20 = t;
          t = t_20;
          t = g_62(t);
          p_20 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(p_20), m_20), term_v_22);
          return(t);
        }
        t = xtc_transform_file_2_0(z_2, a_3, t);
      }
    }
  else
    {
      t = y_22;
      {
        static ATerm d_3 (ATerm t)
        {
          ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
          x_20 = t;
          t = f_62(t);
          v_20 = t;
          t = x_20;
          t = g_62(t);
          w_20 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_20), v_20), term_v_22);
          return(t);
        }
        t = xtc_transform_term_2_0(b_3, d_3, t);
      }
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm d_21 = NULL;
  t = term_e_23;
  {
    ATerm f_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(h_23);
      }
    else
      {
        t = f_23;
        t = (ATerm) ATempty;
      }
  }
  d_21 = t;
  t = (ATerm) ATinsert(CheckATermList(d_21), term_m_23);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_o_23;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_p_23;
  {
    ATerm t_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(v_23);
      }
    else
      {
        t = t_23;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_o_23;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_p_23;
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  t = sglr_2_0(get_parse_table_0_0, e_3, t);
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_21 = NULL,o_21 = NULL;
        o_21 = t;
        if(match_cons(t, sym_FILE_1))
          {
            n_21 = ATgetArgument(t, 0);
            {
              ATerm s_7 = NULL,l_2 = NULL;
              t = SSLgetAnnotations(o_21);
              s_7 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_21);
              l_2 = t;
              t = SSLsetAnnotations(l_2, s_7);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_21;
          }
        LocalPopChoice(z_23);
        t = xtc_transform_file_2_0(f_3, h_3, t);
      }
    else
      {
        t = y_23;
        t = xtc_transform_term_2_0(j_3, k_3, t);
      }
  }
  return(t);
}
static ATerm v_6 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_copy(l_14, m_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm n_22 = NULL,p_22 = NULL;
  n_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_8 = NULL;
        t = n_22;
        t = r_0(t);
        p_8 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = p_8;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = p_8;
          }
        t = (ATerm) ATmakeAppl(sym__2, p_22, p_8);
        t = v_6(p_22, p_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_22);
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        {
          ATerm d_24 = t;
          int e_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_8 = NULL;
              t = n_22;
              t = r_0(t);
              w_8 = t;
              {
                ATerm f_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm z_8 = NULL;
                    z_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = z_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = z_8;
                          }
                        else
                          {
                            t = z_8;
                            if((p_22 != t))
                              {
                                _fail(t);
                              }
                            t = z_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_24;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, p_22, w_8);
              t = v_6(p_22, w_8, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_22);
              LocalPopChoice(e_24);
            }
          else
            {
              t = d_24;
              t = n_22;
              t = r_0(t);
              if((p_22 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_22);
            }
        }
      }
  }
  return(t);
}
static ATerm w_6 (ATerm k_35, ATerm l_35, ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL;
  a_23 = t;
  {
    ATerm g_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_35, l_35);
        t = b_7(k_35, l_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_24 = ATgetFirst((ATermList) t);
            z_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_24);
        t = SSL_table_put(k_35, l_35, z_22);
        t = (ATerm) ATmakeAppl(sym__3, k_35, l_35, z_22);
      }
    else
      {
        t = g_24;
        t = SSL_table_remove(k_35, l_35);
        t = (ATerm) ATmakeAppl(sym__2, k_35, l_35);
      }
  }
  t = a_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,g_23 = NULL,i_23 = NULL,j_23 = NULL;
  i_23 = t;
  t = k_79(t);
  g_23 = t;
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_23 = NULL;
        t = term_c_22;
        k_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_23, term_c_22);
        t = b_7(g_23, k_23, t);
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_23 = ATgetFirst((ATermList) t);
      c_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_c_22;
  j_23 = t;
  t = SSL_table_put(g_23, j_23, c_23);
  t = d_23;
  {
    static ATerm l_3 (ATerm t)
    {
      ATerm l_23 = NULL;
      l_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_23, l_23);
      t = w_6(g_23, l_23, t);
      return(t);
    }
    t = map_1_0(l_3, t);
  }
  t = i_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_80(t);
      t = g_80(t);
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      t = g_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_79 (ATerm), ATerm t)
{
  ATerm n_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,u_23 = NULL;
  q_23 = t;
  t = j_79(t);
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_23, term_c_22);
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_24 = ATgetArgument(t, 0);
            ATerm z_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_22;
        a_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_23, term_c_22);
        t = b_7(n_23, a_24, t);
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        t = (ATerm) ATempty;
      }
  }
  r_23 = t;
  t = term_c_22;
  s_23 = t;
  t = (ATerm) ATinsert(CheckATermList(r_23), (ATerm) ATempty);
  u_23 = t;
  t = SSL_table_put(n_23, s_23, u_23);
  t = q_23;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_q_22;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(v_24);
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
        t = v_24;
      }
  }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_82 (ATerm), ATerm t)
{
  ATerm h_24 = NULL;
  static ATerm o_3 (ATerm t)
  {
    ATerm i_24 = NULL;
    i_24 = t;
    {
      ATerm i_25 = t;
      int j_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_24 = NULL,s_24 = NULL;
          t = term_q_22;
          l_24 = t;
          t = term_c_22;
          s_24 = t;
          t = term_o_25;
          t = b_7(l_24, s_24, t);
          LocalPopChoice(j_25);
        }
      else
        {
          t = i_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((h_24 != NULL) && (h_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          h_24 = ATgetFirst((ATermList) t);
        {
          ATerm t_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = h_24;
    t = map_1_0(p_3, t);
    t = i_24;
    t = end_scope_1_0(q_3, t);
    return(t);
  }
  t = begin_scope_1_0(m_3, t);
  t = restore_always_2_0(t_82, o_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm u_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_22;
      t = get_config_0_0(t);
      LocalPopChoice(y_25);
    }
  else
    {
      t = u_25;
      t = term_z_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm u_82 (ATerm), ATerm t)
{
  static ATerm r_3 (ATerm t)
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_25 = NULL;
        t = term_s_22;
        t = get_config_0_0(t);
        a_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_25);
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        t = term_e_8;
      }
    t = u_82(t);
    t = copy_to_1_0(s_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(r_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  b_25 = t;
  t = term_k_22;
  t = whoami_0_0(t);
  c_25 = t;
  t = term_z_17;
  g_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_26), c_25), term_j_26);
  h_25 = t;
  t = SSL_printnl(g_25, h_25);
  t = term_c_9;
  f_25 = t;
  t = SSL_exit(f_25);
  t = b_25;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm k_25 = NULL;
  k_25 = t;
  if(match_string(t, "-k"))
    {
      t = k_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_25;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  l_25 = t;
  t = SSL_string_to_int(l_25);
  m_25 = t;
  t = term_m_26;
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_26, m_25);
  t = e_7(n_25, m_25, t);
  t = l_25;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_3, u_3, v_3, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm p_25 = NULL;
  p_25 = t;
  if(match_string(t, "-S"))
    {
      t = p_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_25;
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL;
  t = term_r_18;
  q_25 = t;
  t = term_r_26;
  r_25 = t;
  t = term_v_26;
  t = e_7(q_25, r_25, t);
  t = term_y_26;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_z_26;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm s_25 = NULL,v_25 = NULL,w_25 = NULL;
  s_25 = t;
  t = SSL_string_to_int(s_25);
  v_25 = t;
  t = term_r_18;
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_18, v_25);
  t = e_7(w_25, v_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_25);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_b_27;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm x_25 = NULL,a_26 = NULL;
  t = term_c_27;
  x_25 = t;
  t = term_k_22;
  a_26 = t;
  t = term_d_27;
  t = e_7(x_25, a_26, t);
  t = term_e_27;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_3, y_3, c_4, t);
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_4, h_4, j_4, t);
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            t = Option_3_0(m_4, p_4, r_4, t);
          }
      }
    }
  return(t);
}
static ATerm e_7 (ATerm f_37, ATerm g_37, ATerm t)
{
  ATerm b_26 = NULL;
  t = term_k_27;
  b_26 = t;
  t = SSL_table_put(b_26, f_37, g_37);
  t = (ATerm) ATmakeAppl(sym__3, term_k_27, f_37, g_37);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
      t = term_k_22;
      t = e_0(t);
      g_26 = t;
      t = term_l_27;
      h_26 = t;
      t = term_m_27;
      i_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_27, term_m_27, g_26);
      t = c_7(h_26, i_26, g_26, t);
      _fail(t);
    }
  else
    {
      ATerm l_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_26 = ATgetFirst((ATermList) t);
          f_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_26;
      t = c_0(t);
      t = term_k_22;
      t = d_0(t);
      l_26 = t;
      t = (ATerm) ATinsert(CheckATermList(f_26), l_26);
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm n_26 = NULL;
  n_26 = t;
  if(match_string(t, "-o"))
    {
      t = n_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_26;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm o_26 = NULL,q_26 = NULL;
  o_26 = t;
  t = term_r_22;
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_22, o_26);
  t = e_7(q_26, o_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_26);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_4, t_4, u_4, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm s_26 = NULL;
  s_26 = t;
  if(match_string(t, "-i"))
    {
      t = s_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_26;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL;
  t_26 = t;
  t = term_s_22;
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_22, t_26);
  t = e_7(u_26, t_26, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_26);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_4, w_4, y_4, t);
  return(t);
}
ATerm at_end_1_0 (ATerm d_70 (ATerm), ATerm t)
{
  static ATerm b_28 (ATerm t)
  {
    ATerm s_27 = NULL,z_27 = NULL,a_28 = NULL;
    a_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_27 = ATgetFirst((ATermList) t);
        z_27 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_9 = NULL,e_10 = NULL,o_2 = NULL;
          t = SSLgetAnnotations(a_28);
          x_9 = t;
          t = z_27;
          t = b_28(t);
          e_10 = t;
          t = (ATerm) ATinsert(CheckATermList(e_10), s_27);
          o_2 = t;
          t = SSLsetAnnotations(o_2, x_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_28;
        t = d_70(t);
      }
    return(t);
  }
  t = b_28(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,a_27 = NULL;
  w_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_26;
    }
  else
    {
      static ATerm a_5 (ATerm t)
      {
        t = not_null(a_27);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_26 = ATgetFirst((ATermList) t);
          if(((a_27 != NULL) && (a_27 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_26;
      t = at_end_1_0(a_5, t);
    }
  return(t);
}
static ATerm r_28 (ATerm g_28, ATerm t)
{
  ATerm h_28 = NULL;
  t = SSL_explode_term(g_28);
  if(match_cons(t, sym__2))
    {
      ATerm p_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_28;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_28 = NULL,n_28 = NULL,o_28 = NULL;
  o_28 = t;
  if(match_cons(t, sym__2))
    {
      k_28 = ATgetArgument(t, 0);
      n_28 = ATgetArgument(t, 1);
      {
        ATerm q_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_5 (ATerm t)
            {
              t = n_28;
              return(t);
            }
            t = k_28;
            t = at_end_1_0(b_5, t);
            LocalPopChoice(r_27);
          }
        else
          {
            t = q_27;
            t = r_28(o_28, t);
          }
      }
    }
  else
    {
      t = r_28(o_28, t);
    }
  return(t);
}
static ATerm u_6 (ATerm l_37, ATerm k_37, ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,v_28 = NULL;
  t = l_37;
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        t = (ATerm) ATempty;
      }
  }
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_37, t_28);
  t = conc_0_0(t);
  s_28 = t;
  t = term_k_27;
  v_28 = t;
  t = SSL_table_put(v_28, l_37, s_28);
  t = (ATerm) ATmakeAppl(sym__3, term_k_27, l_37, s_28);
  return(t);
}
static ATerm c_7 (ATerm f_35, ATerm g_35, ATerm e_35, ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  x_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_35, g_35);
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_27 = ATgetArgument(t, 0);
            ATerm y_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_35, g_35);
        t = b_7(f_35, g_35, t);
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        t = (ATerm) ATempty;
      }
  }
  y_28 = t;
  t = (ATerm) ATinsert(CheckATermList(y_28), e_35);
  z_28 = t;
  t = SSL_table_put(f_35, g_35, z_28);
  t = x_28;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_29 = NULL,s_29 = NULL,v_29 = NULL;
      t = term_k_22;
      t = p_0(t);
      o_29 = t;
      t = term_l_27;
      s_29 = t;
      t = term_m_27;
      v_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_27, term_m_27, o_29);
      t = c_7(s_29, v_29, o_29, t);
      _fail(t);
    }
  else
    {
      ATerm d_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_29 = ATgetFirst((ATermList) t);
          l_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_29 = ATgetFirst((ATermList) t);
          n_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_29;
      t = n_0(t);
      t = m_29;
      t = o_0(t);
      d_30 = t;
      t = (ATerm) ATinsert(CheckATermList(n_29), d_30);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm e_30 = NULL,h_30 = NULL;
  e_30 = t;
  t = term_v_22;
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_22, e_30);
  t = e_7(h_30, e_30, t);
  t = e_30;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_c_28;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,n_30 = NULL;
  i_30 = t;
  t = term_e_23;
  j_30 = t;
  t = (ATerm) ATinsert(ATempty, i_30);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_23, (ATerm) ATinsert(ATempty, i_30));
  t = u_6(j_30, n_30, t);
  t = i_30;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_d_28;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  t = term_p_23;
  s_30 = t;
  t = (ATerm) ATinsert(ATempty, r_30);
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_23, (ATerm) ATinsert(ATempty, r_30));
  t = u_6(s_30, t_30, t);
  t = r_30;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm f_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(e_5, g_5, j_5, t);
      LocalPopChoice(i_28);
    }
  else
    {
      t = f_28;
      {
        ATerm j_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_5, m_5, o_5, t);
            LocalPopChoice(l_28);
          }
        else
          {
            t = j_28;
            t = ArgOption_3_0(q_5, r_5, t_5, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_22;
  t = whoami_0_0(t);
  u_30 = t;
  t = term_z_17;
  w_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_28), u_30);
  x_30 = t;
  t = SSL_printnl(w_30, x_30);
  t = term_c_9;
  v_30 = t;
  t = SSL_exit(v_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_28;
  t = get_config_0_0(t);
  return(t);
}
static ATerm x_6 (ATerm a_33, ATerm b_33, ATerm t)
{
  ATerm q_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_33, b_33);
      LocalPopChoice(u_28);
    }
  else
    {
      t = q_28;
      t = SSL_addr(a_33, b_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  z_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_30;
      t = f_76(t);
    }
  else
    {
      ATerm e_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_31 = ATgetFirst((ATermList) t);
          b_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_31;
      t = foldr_2_0(f_76, g_76, t);
      e_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_31, e_31);
      t = g_76(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_r_26;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm t_10 = NULL,v_10 = NULL;
  if(match_cons(t, sym__2))
    {
      t_10 = ATgetArgument(t, 0);
      v_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(t_10, v_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_31 = NULL,o_10 = NULL,p_10 = NULL;
  t = times_0_0(t);
  p_10 = t;
  t = SSL_explode_term(p_10);
  if(match_cons(t, sym__2))
    {
      ATerm w_28 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10;
  t = foldr_2_0(w_5, x_5, t);
  h_31 = t;
  t = SSL_TicksToSeconds(h_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_31 = NULL,x_31 = NULL,y_31 = NULL;
  u_31 = t;
  if(match_cons(t, sym__2))
    {
      x_31 = ATgetArgument(t, 0);
      y_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_31;
        if((x_31 != t))
          {
            _fail(t);
          }
        t = u_31;
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
        t = (ATerm) ATmakeAppl(sym__2, x_31, y_31);
        {
          ATerm c_29 = t;
          int d_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_31, y_31);
              LocalPopChoice(d_29);
            }
          else
            {
              t = c_29;
              t = SSL_gtr(x_31, y_31);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_31, y_31);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm c_32 = NULL;
  c_32 = t;
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_32 = NULL;
        t = term_r_18;
        t = get_config_0_0(t);
        e_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_32, term_c_9);
        t = geq_0_0(t);
        t = c_32;
        t = r_80(t);
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        t = c_32;
      }
  }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,j_32 = NULL,k_32 = NULL;
  t = run_time_0_0(t);
  g_32 = t;
  t = term_k_22;
  t = whoami_0_0(t);
  h_32 = t;
  t = term_z_17;
  j_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_29), g_32), term_r_8), h_32);
  k_32 = t;
  t = SSL_printnl(j_32, k_32);
  t = (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_29), g_32), term_r_8), h_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_26;
  l_32 = t;
  t = SSL_exit(l_32);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL;
  u_32 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_32;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_32 = ATgetArgument(t, 0);
          {
            ATerm p_11 = NULL,q_2 = NULL;
            t = SSLgetAnnotations(u_32);
            p_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_32);
            q_2 = t;
            t = SSLsetAnnotations(q_2, p_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_32;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm h_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_29;
      t = get_config_0_0(t);
      LocalPopChoice(j_29);
    }
  else
    {
      t = h_29;
      t = fetch_1_0(a_6, t);
    }
  t = v_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_32 = ATgetFirst((ATermList) t);
      y_32 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_33 = NULL,f_33 = NULL;
        static ATerm b_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_33)), not_null(f_33));
          return(t);
        }
        t = y_32;
        t = k_0(t);
        if(((e_33 != NULL) && (e_33 != t)))
          _fail(t);
        else
          e_33 = t;
        t = x_32;
        t = i_0(t);
        if(((f_33 != NULL) && (f_33 != t)))
          _fail(t);
        else
          f_33 = t;
        t = y_32;
        t = reverse_acc_2_0(i_0, b_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_22;
      t = k_0(t);
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm s_33 = NULL;
  s_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_33), term_p_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_28;
      t = get_config_0_0(t);
      j_33 = t;
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
      {
        static ATerm e_6 (ATerm t)
        {
          ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,w_2 = NULL;
          o_33 = t;
          if(match_cons(t, sym_Program_1))
            {
              n_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_33);
          m_33 = t;
          t = n_33;
          if(((j_33 != NULL) && (j_33 != t)))
            _fail(t);
          else
            j_33 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, n_33);
          w_2 = t;
          t = SSLsetAnnotations(w_2, m_33);
          return(t);
        }
        t = fetch_1_0(e_6, t);
      }
    }
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_29), not_null(j_33)), term_w_29);
        t = echo_0_0(t);
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
      }
  }
  t = term_y_29;
  t = echo_0_0(t);
  t = term_l_27;
  k_33 = t;
  t = term_m_27;
  l_33 = t;
  t = term_z_29;
  t = b_7(k_33, l_33, t);
  t = reverse_acc_2_0(_id, f_6, t);
  t = map_1_0(j_6, t);
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_30), term_g_30), term_f_30), term_c_30);
        t = echo_0_0(t);
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  static ATerm n_35 (ATerm t)
  {
    ATerm h_35 = NULL,i_35 = NULL,m_35 = NULL;
    h_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_35 = ATgetFirst((ATermList) t);
        m_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_30 = t;
      int m_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_12 = NULL,l_12 = NULL,g_3 = NULL;
          t = SSLgetAnnotations(h_35);
          h_12 = t;
          t = i_35;
          t = x_69(t);
          l_12 = t;
          t = (ATerm) ATinsert(CheckATermList(m_35), l_12);
          g_3 = t;
          t = SSLsetAnnotations(g_3, h_12);
          LocalPopChoice(m_30);
        }
      else
        {
          t = l_30;
          {
            ATerm j_13 = NULL,x_13 = NULL,i_3 = NULL;
            t = SSLgetAnnotations(h_35);
            j_13 = t;
            t = m_35;
            t = n_35(t);
            x_13 = t;
            t = (ATerm) ATinsert(CheckATermList(x_13), i_35);
            i_3 = t;
            t = SSLsetAnnotations(i_3, j_13);
          }
        }
    }
    return(t);
  }
  t = n_35(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
  r_35 = t;
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_30 = ATgetFirst((ATermList) t);
                ATerm y_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_35;
          }
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        t = (ATerm) ATinsert(ATempty, r_35);
      }
  }
  s_35 = t;
  t = term_z_25;
  t_35 = t;
  t = SSL_printnl(t_35, s_35);
  t = r_35;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_28;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm a_7 (ATerm v_31, ATerm w_31, ATerm t)
{
  t = SSL_strcat(v_31, w_31);
  return(t);
}
ATerm debug_1_0 (ATerm v_64 (ATerm), ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
  x_35 = t;
  t = v_64(t);
  y_35 = t;
  t = term_z_17;
  z_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_35), y_35);
  a_36 = t;
  t = SSL_printnl(z_35, a_36);
  t = x_35;
  return(t);
}
ATerm map_1_0 (ATerm n_69 (ATerm), ATerm t)
{
  static ATerm a_37 (ATerm t)
  {
    ATerm v_36 = NULL,y_36 = NULL,z_36 = NULL;
    v_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_36;
      }
    else
      {
        ATerm v_14 = NULL,y_14 = NULL,z_14 = NULL,w_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_36 = ATgetFirst((ATermList) t);
            z_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_36);
        v_14 = t;
        t = y_36;
        t = n_69(t);
        y_14 = t;
        t = z_36;
        t = a_37(t);
        z_14 = t;
        t = (ATerm) ATinsert(CheckATermList(z_14), y_14);
        w_3 = t;
        t = SSLsetAnnotations(w_3, v_14);
      }
    return(t);
  }
  t = a_37(t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_f_31;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_37 = NULL;
      m_37 = t;
      t = SSL_is_string(m_37);
      LocalPopChoice(i_31);
    }
  else
    {
      t = g_31;
      {
        ATerm j_31 = t;
        int k_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(d_7, t);
            LocalPopChoice(k_31);
          }
        else
          {
            t = j_31;
            {
              ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
              x_37 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_37 = ATgetArgument(t, 0);
                  t = y_37;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_37 = ATgetArgument(t, 0);
                      t = y_37;
                      {
                        ATerm l_31 = t;
                        int m_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(m_31);
                          }
                        else
                          {
                            t = l_31;
                            t = debug_1_0(f_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_38 = NULL,h_38 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_37 = ATgetArgument(t, 0);
                          z_37 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_37;
                      t = eval_config_0_0(t);
                      g_38 = t;
                      t = z_37;
                      t = eval_config_0_0(t);
                      h_38 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_38, h_38);
                      t = a_7(g_38, h_38, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_7 (ATerm w_36, ATerm x_36, ATerm t)
{
  t = SSL_table_get(w_36, x_36);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL;
  l_38 = t;
  t = term_k_27;
  m_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_27, l_38);
  t = b_7(m_38, l_38, t);
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_38 = NULL,q_38 = NULL;
        t = eval_config_0_0(t);
        p_38 = t;
        t = term_k_27;
        q_38 = t;
        t = SSL_table_put(q_38, l_38, p_38);
        t = p_38;
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
      }
  }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL;
  t = term_p_31;
  t_38 = t;
  t = term_k_22;
  u_38 = t;
  t = term_q_31;
  t = e_7(t_38, u_38, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_r_31;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL;
  t = term_p_31;
  b_39 = t;
  t = term_k_22;
  c_39 = t;
  t = term_q_31;
  t = e_7(b_39, c_39, t);
  t = term_s_31;
  z_38 = t;
  t = term_k_22;
  a_39 = t;
  t = term_t_31;
  t = e_7(z_38, a_39, t);
  t = term_z_31;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_7, h_7, k_7, t);
      LocalPopChoice(d_32);
    }
  else
    {
      t = b_32;
      t = Option_3_0(n_7, o_7, p_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_56 (ATerm), ATerm i_56 (ATerm), ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,l_5 = NULL;
  i_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_39 = ATgetFirst((ATermList) t);
      f_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_39);
  d_39 = t;
  t = e_39;
  t = h_56(t);
  g_39 = t;
  t = f_39;
  t = i_56(t);
  h_39 = t;
  t = (ATerm) ATinsert(CheckATermList(h_39), g_39);
  l_5 = t;
  t = SSLsetAnnotations(l_5, d_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,b_40 = NULL,d_40 = NULL,n_5 = NULL;
  v_39 = t;
  {
    ATerm f_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_32;
        t = t_86(t);
        LocalPopChoice(i_32);
      }
    else
      {
        t = f_32;
      }
  }
  t = v_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_39 = ATgetFirst((ATermList) t);
      y_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_39);
  w_39 = t;
  t = term_p_28;
  d_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_28, x_39);
  t = e_7(d_40, x_39, t);
  t = y_39;
  {
    static ATerm r_40 (ATerm t)
    {
      ATerm n_32 = t;
      int o_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_32 = t;
          int q_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_40 = NULL;
              h_40 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_40;
              LocalPopChoice(q_32);
            }
          else
            {
              t = p_32;
              t = t_86(t);
              t = Cons_2_0(_id, r_40, t);
            }
          LocalPopChoice(o_32);
        }
      else
        {
          t = n_32;
          {
            ATerm n_40 = NULL,o_40 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_40 = ATgetFirst((ATermList) t);
                o_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_40), (ATerm) ATmakeAppl(sym_Undefined_1, n_40));
          }
        }
      return(t);
    }
    t = r_40(t);
  }
  b_40 = t;
  t = (ATerm) ATinsert(CheckATermList(b_40), (ATerm) ATmakeAppl(sym_Program_1, x_39));
  n_5 = t;
  t = SSLsetAnnotations(n_5, w_39);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm i_41 = NULL;
  i_41 = t;
  if(match_string(t, "--help"))
    {
      t = i_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_41;
        }
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL;
  t = term_k_29;
  j_41 = t;
  t = term_k_22;
  k_41 = t;
  t = term_r_32;
  t = e_7(j_41, k_41, t);
  t = term_s_32;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_v_32;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL;
  d_41 = t;
  t = term_l_27;
  f_41 = t;
  t = term_m_27;
  g_41 = t;
  t = (ATerm) ATempty;
  h_41 = t;
  t = SSL_table_put(f_41, g_41, h_41);
  t = d_41;
  {
    static ATerm q_7 (ATerm t)
    {
      ATerm w_32 = t;
      int z_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_86(t);
          LocalPopChoice(z_32);
        }
      else
        {
          t = w_32;
          {
            ATerm c_33 = t;
            int d_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_7, t_7, u_7, t);
                LocalPopChoice(d_33);
              }
            else
              {
                t = c_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_7, t);
  }
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_41 = NULL;
        t_41 = t;
        {
          ATerm i_33 = t;
          int p_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_16 = NULL;
              t = t_41;
              {
                ATerm q_33 = t;
                int r_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_k_29;
                    t = get_config_0_0(t);
                    LocalPopChoice(r_33);
                  }
                else
                  {
                    t = q_33;
                    t = fetch_1_0(v_7, t);
                  }
              }
              t = t_41;
              t = default_system_usage_0_0(t);
              t = term_r_26;
              g_16 = t;
              t = SSL_exit(g_16);
              LocalPopChoice(p_33);
            }
          else
            {
              t = i_33;
              {
                ATerm n_16 = NULL;
                t = term_p_31;
                t = get_config_0_0(t);
                t = t_41;
                t = default_system_about_0_0(t);
                t = term_r_26;
                n_16 = t;
                t = SSL_exit(n_16);
              }
            }
        }
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        {
          ATerm t_33 = t;
          int u_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
              static ATerm w_7 (ATerm t)
              {
                ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,p_5 = NULL;
                z_41 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_41 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_41);
                x_41 = t;
                t = y_41;
                if(((b_41 != NULL) && (b_41 != t)))
                  _fail(t);
                else
                  b_41 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_41);
                p_5 = t;
                t = SSLsetAnnotations(p_5, x_41);
                return(t);
              }
              t = fetch_1_0(w_7, t);
              t = term_z_17;
              v_41 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_41)), term_v_33);
              w_41 = t;
              t = SSL_printnl(v_41, w_41);
              t = (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_41)), term_v_33));
              t = default_system_usage_0_0(t);
              t = term_c_9;
              u_41 = t;
              t = SSL_exit(u_41);
              LocalPopChoice(u_33);
            }
          else
            {
              t = t_33;
            }
        }
      }
  }
  c_41 = t;
  t = term_l_27;
  e_41 = t;
  t = SSL_table_destroy(e_41);
  t = c_41;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
  t = parse_options_1_0(x_84, t);
  e_42 = t;
  t = term_w_33;
  h_42 = t;
  t = SSL_table_create(h_42);
  t = term_w_33;
  f_42 = t;
  t = term_x_33;
  g_42 = t;
  t = SSL_table_put(f_42, g_42, e_42);
  t = e_42;
  t = z_84(t);
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_84, t);
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        {
          ATerm a_34 = t;
          int b_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_85(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_34);
            }
          else
            {
              t = a_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sglri_options_0_0(t);
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
      {
        ATerm e_34 = t;
        int f_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
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
                  t = output_option_0_0(t);
                  LocalPopChoice(h_34);
                }
              else
                {
                  t = g_34;
                  {
                    ATerm i_34 = t;
                    int j_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(a_8, b_8, c_8, t);
                        LocalPopChoice(j_34);
                      }
                    else
                      {
                        t = i_34;
                        {
                          ATerm k_34 = t;
                          int l_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(l_34);
                            }
                          else
                            {
                              t = k_34;
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
static ATerm z_7 (ATerm t)
{
  t = xtc_io_1_0(parse_and_implode_0_0, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  t = term_n_34;
  j_42 = t;
  t = term_k_22;
  k_42 = t;
  t = term_p_34;
  t = e_7(j_42, k_42, t);
  t = term_q_34;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(x_7, default_usage_0_0, _id, z_7, t);
  return(t);
}
