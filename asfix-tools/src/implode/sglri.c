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
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_a_34;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_d_33;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_u_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_k_31;
ATerm term_h_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_t_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_t_29;
ATerm term_r_29;
ATerm term_n_29;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_d_28;
ATerm term_a_28;
ATerm term_y_27;
ATerm term_l_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_x_25;
ATerm term_r_25;
ATerm term_p_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_f_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_s_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_d_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_q_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_h_14;
ATerm term_z_13;
ATerm term_y_13;
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
ATerm term_a_13;
ATerm term_z_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_d_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_p_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_f_8;
ATerm term_d_8;
ATerm term_z_7;
ATerm term_y_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_8, term_w_8, term_x_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_9, term_b_9, term_d_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_9, term_k_9, term_l_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_w_9, term_y_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_10, term_f_10, term_g_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_k_10, term_l_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_o_10, term_p_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_10, term_v_10, term_w_10);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_f_11, term_g_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_o_11, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_v_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_z_11, term_h_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_p_12, term_s_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_k_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_o_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_r_13, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_y_13, term_z_13);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_p_14, term_q_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_u_14, term_v_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_a_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_g_15, term_i_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_p_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_w_15, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_f_16, term_g_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_o_16, term_p_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_16, term_x_16);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_j_17, term_k_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_m_20, term_b_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_m_20, term_n_20);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, term_m_22, term_l_22);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_q_18, term_h_26);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_26);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_m_26, term_t_22);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym__2, term_d_27, term_f_27);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_d_31, term_t_22);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym__2, term_h_31, term_t_22);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_r_29, term_t_22);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym__2, term_a_34, term_t_22);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm read_from_0_0 (ATerm t);
static ATerm h_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm i_6 (ATerm y_65 (ATerm), ATerm q_170, ATerm v_17, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm t);
static ATerm j_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm a_71 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm n_64 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm b_82 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm a_82 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm c_82 (ATerm), ATerm t);
static ATerm m_6 (ATerm v_74 (ATerm), ATerm w_74 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm n_6 (ATerm s_74 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm y_0 (ATerm t);
static ATerm o_6 (ATerm c_37, ATerm d_37, ATerm e_37, ATerm t);
static ATerm p_6 (ATerm e_82 (ATerm), ATerm m_37, ATerm l_37, ATerm t);
static ATerm t_6 (ATerm n_39, ATerm o_39, ATerm t);
static ATerm k_8 (ATerm c_8, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_6 (ATerm t_17, ATerm t);
static ATerm r_6 (ATerm v_39, ATerm w_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_10 (ATerm c_9, ATerm t);
static ATerm a_11 (ATerm j_9, ATerm m_9, ATerm n_9, ATerm t);
static ATerm b_11 (ATerm x_9, ATerm a_10, ATerm c_10, ATerm t);
static ATerm s_6 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm k_78 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm t_68 (ATerm), ATerm u_68 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm i_16 (ATerm z_14, ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm z_84 (ATerm), ATerm t);
static ATerm u_6 (ATerm o_80 (ATerm), ATerm s_34, ATerm q_34, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm x_0 (ATerm), ATerm z_0 (ATerm), ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm sglr_2_0 (ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm parse_and_implode_0_0 (ATerm t);
static ATerm w_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm x_6 (ATerm k_36, ATerm l_36, ATerm t);
ATerm end_scope_1_0 (ATerm l_80 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm k_80 (ATerm), ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm l_84 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm m_84 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_7 (ATerm f_38, ATerm g_38, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm e_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm h_27 (ATerm y_26, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm v_6 (ATerm l_38, ATerm k_38, ATerm t);
static ATerm d_7 (ATerm f_36, ATerm g_36, ATerm e_36, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm sglri_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm y_6 (ATerm e_33, ATerm f_33, ATerm t);
ATerm foldr_2_0 (ATerm g_77 (ATerm), ATerm h_77 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_81 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm need_help_1_0 (ATerm b_86 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_70 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm b_7 (ATerm z_31, ATerm a_32, ATerm t);
ATerm debug_1_0 (ATerm w_65 (ATerm), ATerm t);
ATerm map_1_0 (ATerm o_70 (ATerm), ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm c_7 (ATerm w_37, ATerm x_37, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_57 (ATerm), ATerm j_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_87 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm parse_options_1_0 (ATerm y_87 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm f_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_y_7;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm q_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_z_7);
      q_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_0, (ATerm) ATinsert(ATempty, term_z_7));
      t = t_6(f_0, q_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm h_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm s_0 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_0);
  return(t);
}
static ATerm i_6 (ATerm y_65 (ATerm), ATerm q_170, ATerm v_17, ATerm t)
{
  ATerm u_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_170, term_d_8);
  t = s_6(t);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_0, v_17);
  t = y_65(t);
  t = fclose_0_0(t);
  t = v_17;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_8 = ATgetArgument(t, 0);
      if(match_cons(e_8, sym_Stream_1))
        {
          d_1 = ATgetArgument(e_8, 0);
        }
      else
        _fail(t);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(d_1, e_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm t)
{
  ATerm w_0 = NULL,b_1 = NULL;
  b_1 = t;
  t = xtc_new_file_0_0(t);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_0, b_1);
  t = i_6(a_0, w_0, b_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_0);
  t = xtc_transform_file_2_0(y_83, z_83, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm j_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
  s_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      t_2 = ATgetArgument(t, 0);
      {
        ATerm h_0 = NULL,j_0 = NULL;
        t = SSL_int_to_string(t_2);
        h_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_8), h_0), term_f_8);
        j_0 = t;
        t = SSL_concat_strings(j_0);
      }
    }
  else
    {
      ATerm k_1 = NULL,l_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          t_2 = ATgetArgument(t, 0);
          u_2 = ATgetArgument(t, 1);
          v_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(u_2);
      k_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_2), term_p_8), k_1), term_j_8), t_2);
      l_1 = t;
      t = SSL_concat_strings(l_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm a_71 (ATerm), ATerm t)
{
  ATerm y_2 = NULL;
  static ATerm b_0 (ATerm t)
  {
    t = a_71(t);
    if(((y_2 != NULL) && (y_2 != t)))
      _fail(t);
    else
      y_2 = t;
    return(t);
  }
  t = fetch_1_0(b_0, t);
  t = not_null(y_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm z_2 = NULL;
  z_2 = t;
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm c_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm s_8 = ATgetArgument(t, 0);
              if((z_2 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm t_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_17), term_e_17), term_t_16), term_h_16), term_c_16), term_y_15), term_r_15), term_k_15), term_c_15), term_w_14), term_s_14), term_h_14), term_t_13), term_p_13), term_l_13), term_t_12), term_k_12), term_w_11), term_q_11), term_i_11), term_d_11), term_s_10), term_m_10), term_h_10), term_z_9), term_t_9), term_f_9), term_z_8);
        t = fetch_elem_1_0(c_0, t);
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, z_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm d_3 = NULL,o_3 = NULL;
  d_3 = t;
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_17 = ATgetArgument(t, 0);
            o_3 = ATgetArgument(t, 1);
            {
              ATerm u_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_17);
        {
          ATerm w_17 = t;
          int x_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_1 = NULL,z_1 = NULL,a_2 = NULL;
              t = o_3;
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
              x_1 = t;
              t = term_b_18;
              z_1 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, x_1), term_d_18);
              a_2 = t;
              t = SSL_printnl(z_1, a_2);
              t = (ATerm) ATmakeAppl(sym__2, term_b_18, (ATerm) ATinsert(ATinsert(ATempty, x_1), term_d_18));
              LocalPopChoice(x_17);
            }
          else
            {
              t = w_17;
              t = d_3;
            }
        }
      }
    else
      {
        t = p_17;
        t = d_3;
      }
  }
  t = d_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm n_64 (ATerm), ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL;
  b_4 = t;
  t = fork_0_0(t);
  a_4 = t;
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = b_4;
        t = n_64(t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        t = SSL_waitpid(a_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_18 = ATgetArgument(t, 0);
            if(((ATgetType(h_18) != AT_INT) || (ATgetInt((ATermInt) h_18) != 0)))
              _fail(t);
            {
              ATerm j_18 = ATgetArgument(t, 1);
            }
            {
              ATerm n_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = b_4;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_4 = NULL;
  static ATerm e_0 (ATerm t)
  {
    ATerm g_4 = NULL,h_4 = NULL;
    g_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_4), g_4);
    t = c_7(not_null(f_4), g_4, t);
    h_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_4, h_4);
    return(t);
  }
  if(((f_4 != NULL) && (f_4 != t)))
    _fail(t);
  else
    f_4 = t;
  t = SSL_table_keys(f_4);
  t = map_1_0(e_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_82 (ATerm), ATerm t)
{
  ATerm k_4 = NULL;
  k_4 = t;
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_4 = NULL;
        t = term_q_18;
        t = get_config_0_0(t);
        n_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_4, term_f_16);
        t = geq_0_0(t);
        t = k_4;
        t = b_82(t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = k_4;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_82 (ATerm), ATerm t)
{
  ATerm q_4 = NULL;
  q_4 = t;
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_4 = NULL;
        t = term_q_18;
        t = get_config_0_0(t);
        x_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_4, term_z_11);
        t = geq_0_0(t);
        t = q_4;
        t = a_82(t);
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        t = q_4;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_82 (ATerm), ATerm t)
{
  ATerm a_5 = NULL;
  a_5 = t;
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 = NULL;
        t = term_q_18;
        t = get_config_0_0(t);
        e_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_5, term_w_9);
        t = geq_0_0(t);
        t = a_5;
        t = c_82(t);
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        t = a_5;
      }
  }
  return(t);
}
static ATerm m_6 (ATerm v_74 (ATerm), ATerm w_74 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  t = w_74(t);
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm g_5 = NULL;
      g_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, g_5);
      t = v_74(t);
      return(t);
    }
    t = fetch_1_0(m_0, t);
  }
  t = p_24;
  return(t);
}
static ATerm n_6 (ATerm s_74 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  static ATerm c_6 (ATerm t)
  {
    ATerm t_5 = NULL,v_5 = NULL,w_5 = NULL;
    t_5 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_5 = ATgetFirst((ATermList) t);
            w_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_18 = t;
          int w_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_5;
              {
                static ATerm o_0 (ATerm t)
                {
                  t = l_24;
                  return(t);
                }
                t = m_6(s_74, o_0, v_5, w_5, t);
              }
              t = c_6(t);
              LocalPopChoice(w_18);
            }
          else
            {
              t = v_18;
              {
                ATerm g_2 = NULL,j_2 = NULL,k_0 = NULL;
                t = SSLgetAnnotations(t_5);
                g_2 = t;
                t = w_5;
                t = c_6(t);
                j_2 = t;
                t = (ATerm) ATinsert(CheckATermList(j_2), v_5);
                k_0 = t;
                t = SSLsetAnnotations(k_0, g_2);
              }
            }
        }
      }
    return(t);
  }
  t = m_24;
  t = c_6(t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm l_7 = NULL;
  if(match_cons(t, sym__2))
    {
      l_7 = ATgetArgument(t, 0);
      if((l_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm c_37, ATerm d_37, ATerm e_37, ATerm t)
{
  ATerm l_6 = NULL,z_6 = NULL,a_7 = NULL;
  l_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_37, d_37);
  {
    ATerm x_18 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_19 = ATgetArgument(t, 0);
            ATerm h_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_37, d_37);
        t = c_7(c_37, d_37, t);
        LocalPopChoice(f_19);
      }
    else
      {
        t = x_18;
        t = (ATerm) ATempty;
      }
  }
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_7, e_37);
  t = n_6(y_0, a_7, e_37, t);
  z_6 = t;
  t = SSL_table_put(c_37, d_37, z_6);
  t = l_6;
  return(t);
}
static ATerm p_6 (ATerm e_82 (ATerm), ATerm m_37, ATerm l_37, ATerm t)
{
  static ATerm a_1 (ATerm t)
  {
    ATerm m_7 = NULL,q_7 = NULL;
    if(match_cons(t, sym__2))
      {
        m_7 = ATgetArgument(t, 0);
        q_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_37, m_7, q_7);
    t = e_82(t);
    return(t);
  }
  t = l_37;
  t = map_1_0(a_1, t);
  return(t);
}
static ATerm t_6 (ATerm n_39, ATerm o_39, ATerm t)
{
  t = SSL_access(n_39, o_39);
  return(t);
}
static ATerm k_8 (ATerm c_8, ATerm t)
{
  t = SSL_fclose(c_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL;
  h_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_8 = ATgetArgument(t, 0);
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_8);
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            t = k_8(h_8, t);
          }
      }
    }
  else
    {
      t = k_8(h_8, t);
    }
  return(t);
}
static ATerm q_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm r_6 (ATerm v_39, ATerm w_39, ATerm t)
{
  ATerm l_8 = NULL;
  t = SSL_fopen(v_39, w_39);
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_8);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_8 = NULL;
  t = SSL_stdin_stream();
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_8 = NULL;
  t = SSL_stdout_stream();
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_8 = NULL;
  t = SSL_stderr_stream();
  o_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_8);
  return(t);
}
static ATerm z_10 (ATerm c_9, ATerm t)
{
  ATerm e_9 = NULL;
  t = SSL_explode_term(c_9);
  if(match_cons(t, sym__2))
    {
      ATerm l_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_19 = ATgetArgument(t, 1);
        if(((ATgetType(m_19) == AT_LIST) && !(ATisEmpty(m_19))))
          {
            e_9 = ATgetFirst((ATermList) m_19);
            {
              ATerm n_19 = (ATerm) ATgetNext((ATermList) m_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_9;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_11 (ATerm j_9, ATerm m_9, ATerm n_9, ATerm t)
{
  ATerm o_9 = NULL,r_9 = NULL,s_9 = NULL,v_9 = NULL,q_1 = NULL;
  t = SSLgetAnnotations(n_9);
  s_9 = t;
  t = j_9;
  if(match_cons(t, sym_Path_1))
    {
      v_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_9, m_9);
  q_1 = t;
  t = SSLsetAnnotations(q_1, s_9);
  if(match_cons(t, sym__2))
    {
      o_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(o_9, r_9, t);
  return(t);
}
static ATerm b_11 (ATerm x_9, ATerm a_10, ATerm c_10, ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,j_10 = NULL,r_10 = NULL,r_1 = NULL;
  t = SSLgetAnnotations(c_10);
  j_10 = t;
  t = SSL_is_string(x_9);
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_10, a_10);
  r_1 = t;
  t = SSLsetAnnotations(r_1, j_10);
  if(match_cons(t, sym__2))
    {
      d_10 = ATgetArgument(t, 0);
      e_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(d_10, e_10, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm t_10 = NULL,x_10 = NULL,y_10 = NULL;
  t_10 = t;
  if(match_cons(t, sym__2))
    {
      x_10 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
      {
        ATerm o_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_10(t_10, t);
            LocalPopChoice(q_19);
          }
        else
          {
            t = o_19;
            {
              ATerm r_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_11(x_10, y_10, t_10, t);
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = r_19;
                  t = b_11(x_10, y_10, t_10, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_10(t_10, t);
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_11 = NULL,j_11 = NULL,k_11 = NULL;
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_11 = NULL;
      l_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_11, term_w_19);
      t = s_6(t);
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      t = debug_1_0(c_1, t);
      _fail(t);
    }
  j_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_6(k_11, t);
  c_11 = t;
  t = j_11;
  t = fclose_0_0(t);
  t = c_11;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_x_19;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_11 = NULL,u_11 = NULL;
      t_11 = t;
      t = (ATerm) ATinsert(ATempty, term_d_20);
      u_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_11, (ATerm) ATinsert(ATempty, term_d_20));
      t = t_6(t_11, u_11, t);
      LocalPopChoice(a_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = z_19;
      {
        ATerm e_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_20 = t;
            if((PushChoice() == 0))
              {
                ATerm a_12 = NULL,b_12 = NULL;
                a_12 = t;
                t = (ATerm) ATinsert(ATempty, term_z_7);
                b_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_12, (ATerm) ATinsert(ATempty, term_z_7));
                t = t_6(a_12, b_12, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_20;
              }
            t = debug_1_0(f_1, t);
            LocalPopChoice(f_20);
          }
        else
          {
            t = e_20;
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
  t = term_h_20;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = debug_1_0(m_1, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  v_12 = t;
  t = term_b_18;
  w_12 = t;
  t = (ATerm) ATinsert(ATempty, term_j_20);
  x_12 = t;
  t = SSL_printnl(w_12, x_12);
  t = v_12;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm y_12 = NULL,b_13 = NULL,c_13 = NULL;
  if(match_cons(t, sym__3))
    {
      y_12 = ATgetArgument(t, 0);
      b_13 = ATgetArgument(t, 1);
      c_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_6(y_12, b_13, c_13, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  d_13 = t;
  t = term_b_18;
  e_13 = t;
  t = (ATerm) ATinsert(ATempty, term_k_20);
  f_13 = t;
  t = SSL_printnl(e_13, f_13);
  t = d_13;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
  g_13 = t;
  t = term_b_18;
  h_13 = t;
  t = (ATerm) ATinsert(ATempty, term_j_20);
  i_13 = t;
  t = SSL_printnl(h_13, i_13);
  t = g_13;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,j_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,q_12 = NULL;
  c_12 = t;
  t = if_verbose5_1_0(h_1, t);
  {
    ATerm l_20 = t;
    if((PushChoice() == 0))
      {
        ATerm r_12 = NULL,u_12 = NULL;
        t = term_m_20;
        r_12 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_12);
        u_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_20, (ATerm) ATmakeAppl(sym_Imported_1, c_12));
        t = c_7(r_12, u_12, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_20;
      }
  }
  e_12 = t;
  t = term_m_20;
  m_12 = t;
  t = term_n_20;
  n_12 = t;
  t = (ATerm) ATinsert(ATempty, c_12);
  q_12 = t;
  t = SSL_table_put(m_12, n_12, q_12);
  t = e_12;
  t = if_verbose4_1_0(j_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(n_1, t);
  d_12 = t;
  t = term_m_20;
  l_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_20, d_12);
  t = p_6(o_1, l_12, d_12, t);
  t = if_verbose6_1_0(p_1, t);
  t = term_m_20;
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, c_12);
  g_12 = t;
  t = (ATerm) ATempty;
  j_12 = t;
  t = SSL_table_put(f_12, g_12, j_12);
  t = (ATerm) ATmakeAppl(sym__3, term_m_20, (ATerm)ATmakeAppl(sym_Imported_1, c_12), (ATerm) ATempty);
  t = if_verbose4_1_0(s_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm k_78 (ATerm), ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
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
          x_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 = NULL,i_4 = NULL,j_4 = NULL,u_1 = NULL;
            t = SSLgetAnnotations(v_13);
            z_3 = t;
            t = w_13;
            t = k_78(t);
            i_4 = t;
            t = x_13;
            t = filter_1_0(k_78, t);
            j_4 = t;
            t = (ATerm) ATinsert(CheckATermList(j_4), i_4);
            u_1 = t;
            t = SSLsetAnnotations(u_1, z_3);
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            t = x_13;
            t = filter_1_0(k_78, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm t_68 (ATerm), ATerm u_68 (ATerm), ATerm t)
{
  static ATerm a_14 (ATerm t)
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_68(t);
        t = a_14(t);
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        t = u_68(t);
      }
    return(t);
  }
  t = a_14(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_20;
      t = get_config_0_0(t);
      LocalPopChoice(t_20);
    }
  else
    {
      t = s_20;
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_14 = NULL;
            t = term_x_20;
            b_14 = t;
            t = SSL_getenv(b_14);
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm l_14 = NULL,r_14 = NULL;
  t = term_m_20;
  l_14 = t;
  t = term_b_21;
  r_14 = t;
  t = term_c_21;
  t = c_7(l_14, r_14, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm d_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_21;
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm e_14 = NULL;
  t = if_verbose5_1_0(t_1, t);
  e_14 = t;
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_14 = NULL,j_14 = NULL;
        t = term_m_20;
        i_14 = t;
        t = term_n_20;
        j_14 = t;
        t = term_h_21;
        t = c_7(i_14, j_14, t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        {
          ATerm k_14 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          k_14 = t;
          t = repeat_2_0(w_1, _id, t);
          t = k_14;
        }
      }
  }
  t = e_14;
  t = if_verbose5_1_0(y_1, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_i_21;
  return(t);
}
static ATerm i_16 (ATerm z_14, ATerm t)
{
  ATerm b_15 = NULL,d_15 = NULL,f_15 = NULL;
  t = term_m_20;
  d_15 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, z_14);
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_20, (ATerm) ATmakeAppl(sym_Tool_1, z_14));
  t = c_7(d_15, f_15, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_21 = ATgetFirst((ATermList) t);
      if(match_cons(j_21, sym__2))
        {
          ATerm q_21 = ATgetArgument(j_21, 0);
          b_15 = ATgetArgument(j_21, 1);
        }
      else
        _fail(t);
      {
        ATerm m_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_15;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_i_21;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_m_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
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
      ATerm h_15 = NULL,o_15 = NULL,q_15 = NULL;
      t = if_verbose5_1_0(c_2, t);
      t = xtc_load_0_0(t);
      q_15 = t;
      if(match_cons(t, sym__2))
        {
          h_15 = ATgetArgument(t, 0);
          o_15 = ATgetArgument(t, 1);
          {
            ATerm v_21 = t;
            int z_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
                t = term_m_20;
                u_15 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, h_15);
                v_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_m_20, (ATerm) ATmakeAppl(sym_Tool_1, h_15));
                t = c_7(u_15, v_15, t);
                {
                  static ATerm e_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((o_15 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          t_15 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_2, t);
                }
                t = not_null(t_15);
                LocalPopChoice(z_21);
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
        ATerm d_16 = NULL,w_4 = NULL,z_4 = NULL;
        d_16 = t;
        t = term_b_18;
        w_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_22), d_16), term_f_22);
        z_4 = t;
        t = SSL_printnl(w_4, z_4);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_22), d_16), term_f_22);
        t = if_verbose5_1_0(i_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm z_84 (ATerm), ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL;
  l_16 = t;
  t = z_84(t);
  t = xtc_find_0_0(t);
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_16, l_16);
  {
    static ATerm m_2 (ATerm t)
    {
      ATerm m_16 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, k_16, l_16);
      t = j_6(k_16, l_16, t);
      t = term_h_22;
      m_16 = t;
      t = SSL_exit(m_16);
      return(t);
    }
    t = fork_and_wait_1_0(m_2, t);
  }
  t = l_16;
  return(t);
}
static ATerm u_6 (ATerm o_80 (ATerm), ATerm s_34, ATerm q_34, ATerm t)
{
  ATerm n_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,w_16 = NULL,y_16 = NULL;
  s_16 = t;
  t = o_80(t);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_16, s_34, q_34);
  t = d_7(n_16, s_34, q_34, t);
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_16 = NULL;
        t = term_l_22;
        z_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_16, term_l_22);
        t = c_7(n_16, z_16, t);
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_16 = ATgetFirst((ATermList) t);
      r_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_l_22;
  w_16 = t;
  t = (ATerm) ATinsert(CheckATermList(r_16), (ATerm) ATinsert(CheckATermList(q_16), s_34));
  y_16 = t;
  t = SSL_table_put(n_16, w_16, y_16);
  t = s_16;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_m_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,l_17 = NULL;
  t = P__tmpdir_0_0(t);
  d_17 = t;
  t = term_r_22;
  l_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_17, term_r_22);
  t = b_7(d_17, l_17, t);
  h_17 = t;
  t = term_s_22;
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_17, term_s_22);
  t = b_7(h_17, i_17, t);
  g_17 = t;
  t = SSL_mkstemp(g_17);
  if(match_cons(t, sym__2))
    {
      b_17 = ATgetArgument(t, 0);
      a_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_t_22;
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_17, term_t_22);
  t = u_6(o_2, b_17, c_17, t);
  t = SSL_close(a_17);
  t = b_17;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm x_0 (ATerm), ATerm z_0 (ATerm), ATerm t)
{
  ATerm r_17 = NULL,z_17 = NULL;
  r_17 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm a_18 = NULL,c_18 = NULL;
      t = r_17;
      t = xtc_new_file_0_0(t);
      a_18 = t;
      t = z_0(t);
      c_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_18, (ATerm) ATinsert(ATinsert(ATempty, a_18), term_u_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(x_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_18);
    }
  else
    {
      ATerm e_18 = NULL,i_18 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_17;
      t = xtc_new_file_0_0(t);
      e_18 = t;
      t = z_0(t);
      i_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_18), term_u_22), z_17), term_v_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(x_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_18);
    }
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_22;
      t = get_config_0_0(t);
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      {
        ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
        t = term_b_18;
        l_18 = t;
        t = (ATerm) ATinsert(ATempty, term_a_23);
        m_18 = t;
        t = SSL_printnl(l_18, m_18);
        t = term_w_8;
        k_18 = t;
        t = SSL_exit(k_18);
        t = (ATerm) ATinsert(ATempty, term_a_23);
      }
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_b_23;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_b_23;
  return(t);
}
ATerm sglr_2_0 (ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm t)
{
  ATerm c_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_18 = NULL,z_18 = NULL;
      z_18 = t;
      if(match_cons(t, sym_FILE_1))
        {
          y_18 = ATgetArgument(t, 0);
          {
            ATerm i_5 = NULL,k_2 = NULL;
            t = SSLgetAnnotations(z_18);
            i_5 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, y_18);
            k_2 = t;
            t = SSLsetAnnotations(k_2, i_5);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_18;
        }
      LocalPopChoice(e_23);
      {
        static ATerm w_2 (ATerm t)
        {
          ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
          c_19 = t;
          t = g_63(t);
          a_19 = t;
          t = c_19;
          t = h_63(t);
          b_19 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(b_19), a_19), term_z_22);
          return(t);
        }
        t = xtc_transform_file_2_0(q_2, w_2, t);
      }
    }
  else
    {
      t = c_23;
      {
        static ATerm b_3 (ATerm t)
        {
          ATerm d_19 = NULL,e_19 = NULL,k_19 = NULL;
          k_19 = t;
          t = g_63(t);
          d_19 = t;
          t = k_19;
          t = h_63(t);
          e_19 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(e_19), d_19), term_z_22);
          return(t);
        }
        t = xtc_transform_term_2_0(a_3, b_3, t);
      }
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm p_19 = NULL;
  t = term_f_23;
  {
    ATerm h_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = h_23;
        t = (ATerm) ATempty;
      }
  }
  p_19 = t;
  t = (ATerm) ATinsert(CheckATermList(p_19), term_k_23);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_l_23;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_p_23;
  {
    ATerm q_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(s_23);
      }
    else
      {
        t = q_23;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_l_23;
  return(t);
}
static ATerm i_3 (ATerm t)
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
ATerm parse_and_implode_0_0 (ATerm t)
{
  t = sglr_2_0(get_parse_table_0_0, c_3, t);
  {
    ATerm y_23 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_20 = NULL,c_20 = NULL;
        c_20 = t;
        if(match_cons(t, sym_FILE_1))
          {
            b_20 = ATgetArgument(t, 0);
            {
              ATerm d_6 = NULL,n_2 = NULL;
              t = SSLgetAnnotations(c_20);
              d_6 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_20);
              n_2 = t;
              t = SSLsetAnnotations(n_2, d_6);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_20;
          }
        LocalPopChoice(c_24);
        t = xtc_transform_file_2_0(e_3, f_3, t);
      }
    else
      {
        t = y_23;
        t = xtc_transform_term_2_0(g_3, i_3, t);
      }
  }
  return(t);
}
static ATerm w_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  z_20 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_7 = NULL;
        t = z_20;
        t = v_0(t);
        o_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = o_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = o_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, a_21, o_7);
        t = w_6(a_21, o_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_21);
        LocalPopChoice(h_24);
      }
    else
      {
        t = d_24;
        {
          ATerm k_24 = t;
          int n_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_8 = NULL;
              t = z_20;
              t = v_0(t);
              a_8 = t;
              {
                ATerm r_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_8 = NULL;
                    b_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = b_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = b_8;
                          }
                        else
                          {
                            t = b_8;
                            if((a_21 != t))
                              {
                                _fail(t);
                              }
                            t = b_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_24;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, a_21, a_8);
              t = w_6(a_21, a_8, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_21);
              LocalPopChoice(n_24);
            }
          else
            {
              t = k_24;
              t = z_20;
              t = v_0(t);
              if((a_21 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_21);
            }
        }
      }
  }
  return(t);
}
static ATerm x_6 (ATerm k_36, ATerm l_36, ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL;
  l_21 = t;
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
        t = c_7(k_36, l_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_24 = ATgetFirst((ATermList) t);
            k_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_24);
        t = SSL_table_put(k_36, l_36, k_21);
        t = (ATerm) ATmakeAppl(sym__3, k_36, l_36, k_21);
      }
    else
      {
        t = s_24;
        t = SSL_table_remove(k_36, l_36);
        t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
      }
  }
  t = l_21;
  return(t);
}
ATerm end_scope_1_0 (ATerm l_80 (ATerm), ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,r_21 = NULL,w_21 = NULL;
  r_21 = t;
  t = l_80(t);
  p_21 = t;
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_21 = NULL;
        t = term_l_22;
        x_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_21, term_l_22);
        t = c_7(p_21, x_21, t);
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_21 = ATgetFirst((ATermList) t);
      n_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_l_22;
  w_21 = t;
  t = SSL_table_put(p_21, w_21, n_21);
  t = o_21;
  {
    static ATerm k_3 (ATerm t)
    {
      ATerm y_21 = NULL;
      y_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_21, y_21);
      t = x_6(p_21, y_21, t);
      return(t);
    }
    t = map_1_0(k_3, t);
  }
  t = r_21;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm t)
{
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_81(t);
      t = m_81(t);
      LocalPopChoice(y_24);
    }
  else
    {
      t = x_24;
      t = m_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_80 (ATerm), ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
  b_22 = t;
  t = k_80(t);
  a_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_22, term_l_22);
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_22 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_25 = ATgetArgument(t, 0);
            ATerm h_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_22;
        i_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_22, term_l_22);
        t = c_7(a_22, i_22, t);
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        t = (ATerm) ATempty;
      }
  }
  c_22 = t;
  t = term_l_22;
  d_22 = t;
  t = (ATerm) ATinsert(CheckATermList(c_22), (ATerm) ATempty);
  e_22 = t;
  t = SSL_table_put(a_22, d_22, e_22);
  t = b_22;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_m_22;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm w_22 = NULL;
  w_22 = t;
  {
    ATerm j_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(w_22);
        LocalPopChoice(m_25);
      }
    else
      {
        t = j_25;
        t = w_22;
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_m_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm n_22 = NULL;
  static ATerm m_3 (ATerm t)
  {
    ATerm o_22 = NULL;
    o_22 = t;
    {
      ATerm n_25 = t;
      int p_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_22 = NULL,q_22 = NULL;
          t = term_m_22;
          p_22 = t;
          t = term_l_22;
          q_22 = t;
          t = term_r_25;
          t = c_7(p_22, q_22, t);
          LocalPopChoice(p_25);
        }
      else
        {
          t = n_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((n_22 != NULL) && (n_22 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          n_22 = ATgetFirst((ATermList) t);
        {
          ATerm s_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = n_22;
    t = map_1_0(n_3, t);
    t = o_22;
    t = end_scope_1_0(p_3, t);
    return(t);
  }
  t = begin_scope_1_0(l_3, t);
  t = restore_always_2_0(l_84, m_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_22;
      t = get_config_0_0(t);
      LocalPopChoice(w_25);
    }
  else
    {
      t = v_25;
      t = term_x_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  static ATerm q_3 (ATerm t)
  {
    ATerm y_25 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_23 = NULL;
        t = term_v_22;
        t = get_config_0_0(t);
        d_23 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_23);
        LocalPopChoice(c_26);
      }
    else
      {
        t = y_25;
        t = term_y_7;
      }
    t = m_84(t);
    t = copy_to_1_0(r_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(q_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_23 = NULL,i_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  g_23 = t;
  t = term_t_22;
  t = whoami_0_0(t);
  i_23 = t;
  t = term_b_18;
  n_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_26), i_23), term_d_26);
  o_23 = t;
  t = SSL_printnl(n_23, o_23);
  t = term_w_8;
  m_23 = t;
  t = SSL_exit(m_23);
  t = g_23;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm r_23 = NULL;
  r_23 = t;
  if(match_string(t, "-k"))
    {
      t = r_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_23;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm u_23 = NULL,w_23 = NULL,x_23 = NULL;
  u_23 = t;
  t = SSL_string_to_int(u_23);
  w_23 = t;
  t = term_f_26;
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_26, w_23);
  t = f_7(x_23, w_23, t);
  t = u_23;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_g_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_3, t_3, u_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm z_23 = NULL;
  z_23 = t;
  if(match_string(t, "-S"))
    {
      t = z_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_23;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL;
  t = term_q_18;
  a_24 = t;
  t = term_h_26;
  b_24 = t;
  t = term_i_26;
  t = f_7(a_24, b_24, t);
  t = term_j_26;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_k_26;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
  e_24 = t;
  t = SSL_string_to_int(e_24);
  f_24 = t;
  t = term_q_18;
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_18, f_24);
  t = f_7(g_24, f_24, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_24);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_l_26;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL;
  t = term_m_26;
  i_24 = t;
  t = term_t_22;
  j_24 = t;
  t = term_n_26;
  t = f_7(i_24, j_24, t);
  t = term_o_26;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_3, w_3, y_3, t);
      LocalPopChoice(v_26);
    }
  else
    {
      t = q_26;
      {
        ATerm w_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_4, d_4, e_4, t);
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            t = Option_3_0(l_4, m_4, o_4, t);
          }
      }
    }
  return(t);
}
static ATerm f_7 (ATerm f_38, ATerm g_38, ATerm t)
{
  ATerm o_24 = NULL;
  t = term_a_27;
  o_24 = t;
  t = SSL_table_put(o_24, f_38, g_38);
  t = (ATerm) ATmakeAppl(sym__3, term_a_27, f_38, g_38);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
      t = term_t_22;
      t = i_0(t);
      b_25 = t;
      t = term_d_27;
      c_25 = t;
      t = term_f_27;
      d_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_27, term_f_27, b_25);
      t = d_7(c_25, d_25, b_25, t);
      _fail(t);
    }
  else
    {
      ATerm i_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_24 = ATgetFirst((ATermList) t);
          a_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_24;
      t = d_0(t);
      t = term_t_22;
      t = g_0(t);
      i_25 = t;
      t = (ATerm) ATinsert(CheckATermList(a_25), i_25);
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm k_25 = NULL;
  k_25 = t;
  if(match_string(t, "-o"))
    {
      t = k_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_25;
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm l_25 = NULL,o_25 = NULL;
  l_25 = t;
  t = term_u_22;
  o_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_22, l_25);
  t = f_7(o_25, l_25, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_25);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_4, r_4, s_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm q_25 = NULL;
  q_25 = t;
  if(match_string(t, "-i"))
    {
      t = q_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_25;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  t_25 = t;
  t = term_v_22;
  u_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_22, t_25);
  t = f_7(u_25, t_25, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_25);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_l_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_4, u_4, v_4, t);
  return(t);
}
ATerm at_end_1_0 (ATerm e_71 (ATerm), ATerm t)
{
  static ATerm u_26 (ATerm t)
  {
    ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
    t_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_26 = ATgetFirst((ATermList) t);
        s_26 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_8 = NULL,y_8 = NULL,p_2 = NULL;
          t = SSLgetAnnotations(t_26);
          v_8 = t;
          t = s_26;
          t = u_26(t);
          y_8 = t;
          t = (ATerm) ATinsert(CheckATermList(y_8), r_26);
          p_2 = t;
          t = SSLsetAnnotations(p_2, v_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_26;
        t = e_71(t);
      }
    return(t);
  }
  t = u_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
  z_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_25;
    }
  else
    {
      static ATerm y_4 (ATerm t)
      {
        t = not_null(b_26);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_26 = ATgetFirst((ATermList) t);
          if(((b_26 != NULL) && (b_26 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            b_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_26;
      t = at_end_1_0(y_4, t);
    }
  return(t);
}
static ATerm h_27 (ATerm y_26, ATerm t)
{
  ATerm z_26 = NULL;
  t = SSL_explode_term(y_26);
  if(match_cons(t, sym__2))
    {
      ATerm m_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,e_27 = NULL;
  e_27 = t;
  if(match_cons(t, sym__2))
    {
      b_27 = ATgetArgument(t, 0);
      c_27 = ATgetArgument(t, 1);
      {
        ATerm n_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_5 (ATerm t)
            {
              t = c_27;
              return(t);
            }
            t = b_27;
            t = at_end_1_0(b_5, t);
            LocalPopChoice(r_27);
          }
        else
          {
            t = n_27;
            t = h_27(e_27, t);
          }
      }
    }
  else
    {
      t = h_27(e_27, t);
    }
  return(t);
}
static ATerm v_6 (ATerm l_38, ATerm k_38, ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  t = l_38;
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(t_27);
      }
    else
      {
        t = s_27;
        t = (ATerm) ATempty;
      }
  }
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_38, j_27);
  t = conc_0_0(t);
  i_27 = t;
  t = term_a_27;
  k_27 = t;
  t = SSL_table_put(k_27, l_38, i_27);
  t = (ATerm) ATmakeAppl(sym__3, term_a_27, l_38, i_27);
  return(t);
}
static ATerm d_7 (ATerm f_36, ATerm g_36, ATerm e_36, ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_36, g_36);
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_27 = ATgetArgument(t, 0);
            ATerm x_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_36, g_36);
        t = c_7(f_36, g_36, t);
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        t = (ATerm) ATempty;
      }
  }
  p_27 = t;
  t = (ATerm) ATinsert(CheckATermList(p_27), e_36);
  q_27 = t;
  t = SSL_table_put(f_36, g_36, q_27);
  t = o_27;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm z_27 = NULL,b_28 = NULL,c_28 = NULL,e_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_28 = NULL,g_28 = NULL,n_28 = NULL;
      t = term_t_22;
      t = t_0(t);
      f_28 = t;
      t = term_d_27;
      g_28 = t;
      t = term_f_27;
      n_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_27, term_f_27, f_28);
      t = d_7(g_28, n_28, f_28, t);
      _fail(t);
    }
  else
    {
      ATerm s_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_27 = ATgetFirst((ATermList) t);
          b_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_28 = ATgetFirst((ATermList) t);
          e_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_27;
      t = p_0(t);
      t = c_28;
      t = r_0(t);
      s_28 = t;
      t = (ATerm) ATinsert(CheckATermList(e_28), s_28);
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL;
  t_28 = t;
  t = term_z_22;
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_22, t_28);
  t = f_7(u_28, t_28, t);
  t = t_28;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_y_27;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm v_28 = NULL,x_28 = NULL,y_28 = NULL;
  v_28 = t;
  t = term_f_23;
  x_28 = t;
  t = (ATerm) ATinsert(ATempty, v_28);
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_23, (ATerm) ATinsert(ATempty, v_28));
  t = v_6(x_28, y_28, t);
  t = v_28;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_a_28;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
  b_29 = t;
  t = term_p_23;
  c_29 = t;
  t = (ATerm) ATinsert(ATempty, b_29);
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_23, (ATerm) ATinsert(ATempty, b_29));
  t = v_6(c_29, d_29, t);
  t = b_29;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(c_5, d_5, f_5, t);
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_5, j_5, k_5, t);
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            t = ArgOption_3_0(l_5, n_5, p_5, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_22;
  t = whoami_0_0(t);
  e_29 = t;
  t = term_b_18;
  g_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_28), e_29);
  h_29 = t;
  t = SSL_printnl(g_29, h_29);
  t = term_w_8;
  f_29 = t;
  t = SSL_exit(f_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_28;
  t = get_config_0_0(t);
  return(t);
}
static ATerm y_6 (ATerm e_33, ATerm f_33, ATerm t)
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_33, f_33);
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      t = SSL_addr(e_33, f_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_77 (ATerm), ATerm h_77 (ATerm), ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL;
  k_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_29;
      t = g_77(t);
    }
  else
    {
      ATerm p_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_29 = ATgetFirst((ATermList) t);
          m_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_29;
      t = foldr_2_0(g_77, h_77, t);
      p_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_29, p_29);
      t = h_77(t);
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
  t = term_h_26;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL;
  if(match_cons(t, sym__2))
    {
      p_9 = ATgetArgument(t, 0);
      q_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(p_9, q_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_29 = NULL,g_9 = NULL,h_9 = NULL;
  t = times_0_0(t);
  h_9 = t;
  t = SSL_explode_term(h_9);
  if(match_cons(t, sym__2))
    {
      ATerm q_28 = ATgetArgument(t, 0);
      g_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9;
  t = foldr_2_0(r_5, s_5, t);
  s_29 = t;
  t = SSL_TicksToSeconds(s_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
  q_30 = t;
  if(match_cons(t, sym__2))
    {
      r_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_30;
        if((r_30 != t))
          {
            _fail(t);
          }
        t = q_30;
        LocalPopChoice(w_28);
      }
    else
      {
        t = r_28;
        t = (ATerm) ATmakeAppl(sym__2, r_30, s_30);
        {
          ATerm z_28 = t;
          int a_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_30, s_30);
              LocalPopChoice(a_29);
            }
          else
            {
              t = z_28;
              t = SSL_gtr(r_30, s_30);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, r_30, s_30);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_81 (ATerm), ATerm t)
{
  ATerm b_31 = NULL;
  b_31 = t;
  {
    ATerm i_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_31 = NULL;
        t = term_q_18;
        t = get_config_0_0(t);
        g_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_31, term_w_8);
        t = geq_0_0(t);
        t = b_31;
        t = x_81(t);
        LocalPopChoice(j_29);
      }
    else
      {
        t = i_29;
        t = b_31;
      }
  }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,l_31 = NULL,m_31 = NULL;
  t = run_time_0_0(t);
  i_31 = t;
  t = term_t_22;
  t = whoami_0_0(t);
  j_31 = t;
  t = term_b_18;
  l_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_29), i_31), term_j_8), j_31);
  m_31 = t;
  t = SSL_printnl(l_31, m_31);
  t = (ATerm) ATmakeAppl(sym__2, term_b_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_29), i_31), term_j_8), j_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_26;
  n_31 = t;
  t = SSL_exit(n_31);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  w_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_31 = ATgetArgument(t, 0);
          {
            ATerm q_10 = NULL,r_2 = NULL;
            t = SSLgetAnnotations(w_31);
            q_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_31);
            r_2 = t;
            t = SSLsetAnnotations(r_2, q_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_86 (ATerm), ATerm t)
{
  ATerm o_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_29;
      t = get_config_0_0(t);
      LocalPopChoice(q_29);
    }
  else
    {
      t = o_29;
      t = fetch_1_0(x_5, t);
    }
  t = b_86(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_32 = NULL,e_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_32 = ATgetFirst((ATermList) t);
      e_32 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_32 = NULL,j_32 = NULL;
        static ATerm y_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_32)), not_null(j_32));
          return(t);
        }
        t = e_32;
        t = n_0(t);
        if(((i_32 != NULL) && (i_32 != t)))
          _fail(t);
        else
          i_32 = t;
        t = c_32;
        t = l_0(t);
        if(((j_32 != NULL) && (j_32 != t)))
          _fail(t);
        else
          j_32 = t;
        t = e_32;
        t = reverse_acc_2_0(l_0, y_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_22;
      t = n_0(t);
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm w_32 = NULL;
  w_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_32), term_t_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_28;
      t = get_config_0_0(t);
      n_32 = t;
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      {
        static ATerm z_5 (ATerm t)
        {
          ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL,x_2 = NULL;
          s_32 = t;
          if(match_cons(t, sym_Program_1))
            {
              r_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_32);
          q_32 = t;
          t = r_32;
          if(((n_32 != NULL) && (n_32 != t)))
            _fail(t);
          else
            n_32 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, r_32);
          x_2 = t;
          t = SSLsetAnnotations(x_2, q_32);
          return(t);
        }
        t = fetch_1_0(z_5, t);
      }
    }
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_29), not_null(n_32)), term_y_29);
        t = echo_0_0(t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
      }
  }
  t = term_a_30;
  t = echo_0_0(t);
  t = term_d_27;
  o_32 = t;
  t = term_f_27;
  p_32 = t;
  t = term_b_30;
  t = c_7(o_32, p_32, t);
  t = reverse_acc_2_0(_id, a_6, t);
  t = map_1_0(b_6, t);
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_30), term_g_30), term_f_30), term_e_30);
        t = echo_0_0(t);
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm y_70 (ATerm), ATerm t)
{
  static ATerm x_33 (ATerm t)
  {
    ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
    u_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_33 = ATgetFirst((ATermList) t);
        w_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_30 = t;
      int j_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_11 = NULL,n_11 = NULL,h_3 = NULL;
          t = SSLgetAnnotations(u_33);
          h_11 = t;
          t = v_33;
          t = y_70(t);
          n_11 = t;
          t = (ATerm) ATinsert(CheckATermList(w_33), n_11);
          h_3 = t;
          t = SSLsetAnnotations(h_3, h_11);
          LocalPopChoice(j_30);
        }
      else
        {
          t = i_30;
          {
            ATerm y_11 = NULL,i_12 = NULL,j_3 = NULL;
            t = SSLgetAnnotations(u_33);
            y_11 = t;
            t = w_33;
            t = x_33(t);
            i_12 = t;
            t = (ATerm) ATinsert(CheckATermList(i_12), v_33);
            j_3 = t;
            t = SSLsetAnnotations(j_3, y_11);
          }
        }
    }
    return(t);
  }
  t = x_33(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
  b_34 = t;
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_30 = ATgetFirst((ATermList) t);
                ATerm n_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_34;
          }
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        t = (ATerm) ATinsert(ATempty, b_34);
      }
  }
  c_34 = t;
  t = term_x_25;
  d_34 = t;
  t = SSL_printnl(d_34, c_34);
  t = b_34;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_28;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm b_7 (ATerm z_31, ATerm a_32, ATerm t)
{
  t = SSL_strcat(z_31, a_32);
  return(t);
}
ATerm debug_1_0 (ATerm w_65 (ATerm), ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL,v_34 = NULL;
  h_34 = t;
  t = w_65(t);
  i_34 = t;
  t = term_b_18;
  j_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_34), i_34);
  v_34 = t;
  t = SSL_printnl(j_34, v_34);
  t = h_34;
  return(t);
}
ATerm map_1_0 (ATerm o_70 (ATerm), ATerm t)
{
  static ATerm k_35 (ATerm t)
  {
    ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
    h_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_35;
      }
    else
      {
        ATerm j_13 = NULL,c_14 = NULL,d_14 = NULL,x_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_35 = ATgetFirst((ATermList) t);
            j_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_35);
        j_13 = t;
        t = i_35;
        t = o_70(t);
        c_14 = t;
        t = j_35;
        t = k_35(t);
        d_14 = t;
        t = (ATerm) ATinsert(CheckATermList(d_14), c_14);
        x_3 = t;
        t = SSLsetAnnotations(x_3, j_13);
      }
    return(t);
  }
  t = k_35(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_t_30;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_35 = NULL;
      s_35 = t;
      t = SSL_is_string(s_35);
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      {
        ATerm w_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(e_6, t);
            LocalPopChoice(x_30);
          }
        else
          {
            t = w_30;
            {
              ATerm z_35 = NULL,h_36 = NULL,i_36 = NULL;
              z_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_36 = ATgetArgument(t, 0);
                  t = h_36;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_36 = ATgetArgument(t, 0);
                      t = h_36;
                      {
                        ATerm y_30 = t;
                        int z_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(z_30);
                          }
                        else
                          {
                            t = y_30;
                            t = debug_1_0(f_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_36 = NULL,q_36 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_36 = ATgetArgument(t, 0);
                          i_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_36;
                      t = eval_config_0_0(t);
                      p_36 = t;
                      t = i_36;
                      t = eval_config_0_0(t);
                      q_36 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_36, q_36);
                      t = b_7(p_36, q_36, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_7 (ATerm w_37, ATerm x_37, ATerm t)
{
  t = SSL_table_get(w_37, x_37);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL;
  u_36 = t;
  t = term_a_27;
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_27, u_36);
  t = c_7(v_36, u_36, t);
  {
    ATerm a_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_36 = NULL,x_36 = NULL;
        t = eval_config_0_0(t);
        w_36 = t;
        t = term_a_27;
        x_36 = t;
        t = SSL_table_put(x_36, u_36, w_36);
        t = w_36;
        LocalPopChoice(c_31);
      }
    else
      {
        t = a_31;
      }
  }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL;
  t = term_d_31;
  a_37 = t;
  t = term_t_22;
  b_37 = t;
  t = term_e_31;
  t = f_7(a_37, b_37, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_f_31;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
  t = term_d_31;
  j_37 = t;
  t = term_t_22;
  k_37 = t;
  t = term_e_31;
  t = f_7(j_37, k_37, t);
  t = term_h_31;
  h_37 = t;
  t = term_t_22;
  i_37 = t;
  t = term_k_31;
  t = f_7(h_37, i_37, t);
  t = term_o_31;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_p_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_6, k_6, e_7, t);
      LocalPopChoice(r_31);
    }
  else
    {
      t = q_31;
      t = Option_3_0(g_7, h_7, i_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_57 (ATerm), ATerm j_57 (ATerm), ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,m_5 = NULL;
  u_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_37 = ATgetFirst((ATermList) t);
      r_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_37);
  p_37 = t;
  t = q_37;
  t = i_57(t);
  s_37 = t;
  t = r_37;
  t = j_57(t);
  t_37 = t;
  t = (ATerm) ATinsert(CheckATermList(t_37), s_37);
  m_5 = t;
  t = SSLsetAnnotations(m_5, p_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,i_38 = NULL,j_38 = NULL,o_5 = NULL;
  b_38 = t;
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_31;
        t = z_87(t);
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
      }
  }
  t = b_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_38 = ATgetFirst((ATermList) t);
      e_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_38);
  c_38 = t;
  t = term_m_28;
  j_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_28, d_38);
  t = f_7(j_38, d_38, t);
  t = e_38;
  {
    static ATerm a_39 (ATerm t)
    {
      ATerm x_31 = t;
      int y_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_32 = t;
          int d_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_38 = NULL;
              t_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_38;
              LocalPopChoice(d_32);
            }
          else
            {
              t = b_32;
              t = z_87(t);
              t = Cons_2_0(_id, a_39, t);
            }
          LocalPopChoice(y_31);
        }
      else
        {
          t = x_31;
          {
            ATerm w_38 = NULL,x_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_38 = ATgetFirst((ATermList) t);
                x_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_38), (ATerm) ATmakeAppl(sym_Undefined_1, w_38));
          }
        }
      return(t);
    }
    t = a_39(t);
  }
  i_38 = t;
  t = (ATerm) ATinsert(CheckATermList(i_38), (ATerm) ATmakeAppl(sym_Program_1, d_38));
  o_5 = t;
  t = SSLsetAnnotations(o_5, c_38);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm m_39 = NULL;
  m_39 = t;
  if(match_string(t, "--help"))
    {
      t = m_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_39;
        }
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL;
  t = term_r_29;
  p_39 = t;
  t = term_t_22;
  q_39 = t;
  t = term_f_32;
  t = f_7(p_39, q_39, t);
  t = term_g_32;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_h_32;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
  h_39 = t;
  t = term_d_27;
  j_39 = t;
  t = term_f_27;
  k_39 = t;
  t = (ATerm) ATempty;
  l_39 = t;
  t = SSL_table_put(j_39, k_39, l_39);
  t = h_39;
  {
    static ATerm j_7 (ATerm t)
    {
      ATerm k_32 = t;
      int l_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_87(t);
          LocalPopChoice(l_32);
        }
      else
        {
          t = k_32;
          {
            ATerm m_32 = t;
            int t_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_7, n_7, p_7, t);
                LocalPopChoice(t_32);
              }
            else
              {
                t = m_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_7, t);
  }
  {
    ATerm u_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_40 = NULL;
        b_40 = t;
        {
          ATerm x_32 = t;
          int y_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_15 = NULL;
              t = b_40;
              {
                ATerm z_32 = t;
                int a_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_29;
                    t = get_config_0_0(t);
                    LocalPopChoice(a_33);
                  }
                else
                  {
                    t = z_32;
                    t = fetch_1_0(r_7, t);
                  }
              }
              t = b_40;
              t = default_system_usage_0_0(t);
              t = term_h_26;
              j_15 = t;
              t = SSL_exit(j_15);
              LocalPopChoice(y_32);
            }
          else
            {
              t = x_32;
              {
                ATerm n_15 = NULL;
                t = term_d_31;
                t = get_config_0_0(t);
                t = b_40;
                t = default_system_about_0_0(t);
                t = term_h_26;
                n_15 = t;
                t = SSL_exit(n_15);
              }
            }
        }
        LocalPopChoice(v_32);
      }
    else
      {
        t = u_32;
        {
          ATerm b_33 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
              static ATerm s_7 (ATerm t)
              {
                ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,q_5 = NULL;
                h_40 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_40);
                f_40 = t;
                t = g_40;
                if(((f_39 != NULL) && (f_39 != t)))
                  _fail(t);
                else
                  f_39 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_40);
                q_5 = t;
                t = SSLsetAnnotations(q_5, f_40);
                return(t);
              }
              t = fetch_1_0(s_7, t);
              t = term_b_18;
              d_40 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_39)), term_d_33);
              e_40 = t;
              t = SSL_printnl(d_40, e_40);
              t = (ATerm) ATmakeAppl(sym__2, term_b_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_39)), term_d_33));
              t = default_system_usage_0_0(t);
              t = term_w_8;
              c_40 = t;
              t = SSL_exit(c_40);
              LocalPopChoice(c_33);
            }
          else
            {
              t = b_33;
            }
        }
      }
  }
  g_39 = t;
  t = term_d_27;
  i_39 = t;
  t = SSL_table_destroy(i_39);
  t = g_39;
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL,y_40 = NULL;
  t = parse_options_1_0(d_86, t);
  p_40 = t;
  t = term_g_33;
  y_40 = t;
  t = SSL_table_create(y_40);
  t = term_g_33;
  q_40 = t;
  t = term_h_33;
  r_40 = t;
  t = SSL_table_put(q_40, r_40, p_40);
  t = p_40;
  t = f_86(t);
  {
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_86, t);
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
        {
          ATerm k_33 = t;
          int l_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_86(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_33);
            }
          else
            {
              t = k_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm m_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sglri_options_0_0(t);
      LocalPopChoice(n_33);
    }
  else
    {
      t = m_33;
      {
        ATerm o_33 = t;
        int p_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(p_33);
          }
        else
          {
            t = o_33;
            {
              ATerm q_33 = t;
              int r_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(r_33);
                }
              else
                {
                  t = q_33;
                  {
                    ATerm s_33 = t;
                    int t_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(v_7, w_7, x_7, t);
                        LocalPopChoice(t_33);
                      }
                    else
                      {
                        t = s_33;
                        {
                          ATerm y_33 = t;
                          int z_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(z_33);
                            }
                          else
                            {
                              t = y_33;
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
static ATerm u_7 (ATerm t)
{
  t = xtc_io_1_0(parse_and_implode_0_0, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL;
  t = term_a_34;
  a_41 = t;
  t = term_t_22;
  b_41 = t;
  t = term_e_34;
  t = f_7(a_41, b_41, t);
  t = term_f_34;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(t_7, default_usage_0_0, _id, u_7, t);
  return(t);
}
