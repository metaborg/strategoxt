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
ATerm term_b_35;
ATerm term_a_35;
ATerm term_x_34;
ATerm term_v_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_t_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_t_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_b_30;
ATerm term_y_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_u_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_a_27;
ATerm term_r_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_j_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_s_25;
ATerm term_m_25;
ATerm term_f_24;
ATerm term_v_23;
ATerm term_s_23;
ATerm term_q_23;
ATerm term_l_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_b_23;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_p_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_g_21;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_q_18;
ATerm term_d_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
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
ATerm term_q_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_l_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_10, term_s_9, term_k_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_n_10, term_o_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_v_10, term_w_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_b_11, term_c_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_h_11, term_i_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_11, term_m_11, term_n_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_t_11, term_u_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_z_11, term_a_12);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_d_12, term_f_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_i_12, term_j_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_m_12, term_p_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_v_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_z_12, term_a_13);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_u_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_z_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_e_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_o_14, term_q_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_y_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_e_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_i_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_r_15, term_u_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_z_15, term_d_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_i_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_q_16, term_r_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_x_16, term_y_16);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym__2, term_e_22, term_u_22);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__2, term_e_22, term_f_22);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym__2, term_w_19, term_q_18);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_a_26);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_26);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym__2, term_j_26, term_m_19);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym__2, term_o_27, term_m_19);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym__2, term_v_27, term_m_19);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym__2, term_a_27, term_c_27);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym__2, term_v_29, term_m_19);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__2, term_b_30, term_m_19);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_b_29, term_m_19);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym__2, term_q_33, term_m_19);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_6 (ATerm g_33, ATerm h_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm b_6 (ATerm l_17, ATerm m_17, ATerm t);
static ATerm c_6 (ATerm r_64 (ATerm), ATerm y_166, ATerm t_17, ATerm t);
static ATerm h_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm t);
static ATerm d_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm t_69 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm g_63 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm b_83 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm x_69 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_7 (ATerm u_6, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm f_6 (ATerm h_79 (ATerm), ATerm o_34, ATerm m_34, ATerm t);
static ATerm w_8 (ATerm e_8, ATerm t);
static ATerm x_8 (ATerm i_8, ATerm j_8, ATerm k_8, ATerm t);
static ATerm z_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm p_80 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm o_80 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm q_80 (ATerm), ATerm t);
static ATerm h_6 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm o_24, ATerm n_24, ATerm t);
static ATerm i_6 (ATerm l_73 (ATerm), ATerm k_24, ATerm j_24, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm j_6 (ATerm c_36, ATerm d_36, ATerm e_36, ATerm t);
static ATerm k_6 (ATerm s_80 (ATerm), ATerm m_36, ATerm l_36, ATerm t);
static ATerm o_6 (ATerm n_38, ATerm o_38, ATerm t);
static ATerm p_14 (ATerm a_14, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_6 (ATerm r_17, ATerm t);
static ATerm m_6 (ATerm v_38, ATerm w_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_17 (ATerm q_15, ATerm t);
static ATerm j_17 (ATerm w_15, ATerm x_15, ATerm a_16, ATerm t);
static ATerm k_17 (ATerm n_16, ATerm o_16, ATerm p_16, ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm d_77 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm w_22 (ATerm m_21, ATerm t);
static ATerm v_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm p_6 (ATerm v_31, ATerm w_31, ATerm t);
ATerm debug_1_0 (ATerm p_64 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm q_6 (ATerm l_14, ATerm m_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm r_6 (ATerm k_35, ATerm l_35, ATerm t);
ATerm end_scope_1_0 (ATerm e_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm d_79 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm n_82 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm o_82 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_6 (ATerm f_37, ATerm g_37, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_6 (ATerm f_35, ATerm g_35, ATerm e_35, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm pp_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_6 (ATerm a_33, ATerm b_33, ATerm t);
ATerm foldr_2_0 (ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_80 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm need_help_1_0 (ATerm p_84 (ATerm), ATerm t);
ATerm map_1_0 (ATerm h_69 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm v_6 (ATerm w_36, ATerm x_36, ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_69 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm h_56 (ATerm), ATerm i_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_86 (ATerm), ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm parse_options_1_0 (ATerm m_86 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm j_9 (ATerm t);
ATerm pp_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_6 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm w_4 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(g_33, h_33);
      LocalPopChoice(k_9);
    }
  else
    {
      t = w_4;
      t = SSL_subtr(g_33, h_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,m_0 = NULL;
  t = term_l_9;
  {
    ATerm m_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(r_9);
      }
    else
      {
        t = m_9;
        t = term_s_9;
      }
  }
  b_0 = t;
  t = term_s_9;
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_s_9);
  t = a_6(b_0, m_0, t);
  f_0 = t;
  t = SSL_int_to_string(f_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_l_9);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm u_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_u_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm w_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_v_9);
      w_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_0, (ATerm) ATinsert(ATempty, term_v_9));
      t = o_6(u_0, w_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm b_6 (ATerm l_17, ATerm m_17, ATerm t)
{
  ATerm a_1 = NULL;
  t = SSL_write_term_to_stream_baf(l_17, m_17);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_1);
  return(t);
}
static ATerm c_6 (ATerm r_64 (ATerm), ATerm y_166, ATerm t_17, ATerm t)
{
  ATerm b_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_166, term_w_9);
  t = n_6(t);
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_1, t_17);
  t = r_64(t);
  t = fclose_0_0(t);
  t = t_17;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm e_1 = NULL,f_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      if(match_cons(x_9, sym_Stream_1))
        {
          e_1 = ATgetArgument(x_9, 0);
        }
      else
        _fail(t);
      f_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(e_1, f_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL;
  c_1 = t;
  t = xtc_new_file_0_0(t);
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_1, c_1);
  t = c_6(h_0, d_1, c_1, t);
  t = SSL_close_file(d_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, d_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(k_83, l_83, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm d_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm h_2 = NULL,j_2 = NULL,o_2 = NULL,w_2 = NULL;
  h_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      j_2 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,x_0 = NULL;
        t = SSL_int_to_string(j_2);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_10), s_0), term_z_9);
        x_0 = t;
        t = SSL_concat_strings(x_0);
      }
    }
  else
    {
      ATerm s_1 = NULL,w_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          j_2 = ATgetArgument(t, 0);
          o_2 = ATgetArgument(t, 1);
          w_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(o_2);
      s_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_2), term_c_10), s_1), term_b_10), j_2);
      w_1 = t;
      t = SSL_concat_strings(w_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm a_3 = NULL;
  static ATerm j_0 (ATerm t)
  {
    t = t_69(t);
    if(((a_3 != NULL) && (a_3 != t)))
      _fail(t);
    else
      a_3 = t;
    return(t);
  }
  t = fetch_1_0(j_0, t);
  t = not_null(a_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_3 = NULL;
  b_3 = t;
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm g_10 = ATgetArgument(t, 0);
              if((b_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm h_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_16), term_v_16), term_k_16), term_f_16), term_v_15), term_o_15), term_j_15), term_f_15), term_a_15), term_t_14), term_i_14), term_b_14), term_w_13), term_r_13), term_k_13), term_b_13), term_w_12), term_q_12), term_k_12), term_g_12), term_b_12), term_w_11), term_r_11), term_j_11), term_e_11), term_z_10), term_r_10), term_l_10);
        t = fetch_elem_1_0(q_0, t);
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm h_3 = NULL,t_3 = NULL;
  h_3 = t;
  {
    ATerm a_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_17 = ATgetArgument(t, 0);
            t_3 = ATgetArgument(t, 1);
            {
              ATerm h_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_17);
        {
          ATerm p_17 = t;
          int q_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_2 = NULL,m_2 = NULL,n_2 = NULL;
              t = t_3;
              {
                ATerm s_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_17;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              k_2 = t;
              t = term_u_17;
              m_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, k_2), term_v_17);
              n_2 = t;
              t = SSL_printnl(m_2, n_2);
              t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATempty, k_2), term_v_17));
              LocalPopChoice(q_17);
            }
          else
            {
              t = p_17;
              t = h_3;
            }
        }
      }
    else
      {
        t = a_17;
        t = h_3;
      }
  }
  t = h_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm g_63 (ATerm), ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL;
  d_4 = t;
  t = fork_0_0(t);
  c_4 = t;
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = d_4;
        t = g_63(t);
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        t = SSL_waitpid(c_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_17 = ATgetArgument(t, 0);
            if(((ATgetType(z_17) != AT_INT) || (ATgetInt((ATermInt) z_17) != 0)))
              _fail(t);
            {
              ATerm a_18 = ATgetArgument(t, 1);
            }
            {
              ATerm c_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = d_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm b_83 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,k_4 = NULL;
  k_4 = t;
  t = b_83(t);
  t = xtc_find_0_0(t);
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_4, k_4);
  {
    static ATerm t_0 (ATerm t)
    {
      ATerm l_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, i_4, k_4);
      t = d_6(i_4, k_4, t);
      t = term_d_18;
      l_4 = t;
      t = SSL_exit(l_4);
      return(t);
    }
    t = fork_and_wait_1_0(t_0, t);
  }
  t = k_4;
  return(t);
}
ATerm at_end_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  static ATerm s_5 (ATerm t)
  {
    ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
    q_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_5 = ATgetFirst((ATermList) t);
        p_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_2 = NULL,y_2 = NULL,l_1 = NULL;
          t = SSLgetAnnotations(q_5);
          t_2 = t;
          t = p_5;
          t = s_5(t);
          y_2 = t;
          t = (ATerm) ATinsert(CheckATermList(y_2), o_5);
          l_1 = t;
          t = SSLsetAnnotations(l_1, t_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_5;
        t = x_69(t);
      }
    return(t);
  }
  t = s_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,q_4 = NULL;
  n_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_4;
    }
  else
    {
      static ATerm v_0 (ATerm t)
      {
        t = not_null(q_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_4 = ATgetFirst((ATermList) t);
          if(((q_4 != NULL) && (q_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_4;
      t = at_end_1_0(v_0, t);
    }
  return(t);
}
static ATerm k_7 (ATerm u_6, ATerm t)
{
  ATerm x_6 = NULL;
  t = SSL_explode_term(u_6);
  if(match_cons(t, sym__2))
    {
      ATerm h_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
  e_7 = t;
  if(match_cons(t, sym__2))
    {
      c_7 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm y_0 (ATerm t)
            {
              t = d_7;
              return(t);
            }
            t = c_7;
            t = at_end_1_0(y_0, t);
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            t = k_7(e_7, t);
          }
      }
    }
  else
    {
      t = k_7(e_7, t);
    }
  return(t);
}
static ATerm f_6 (ATerm h_79 (ATerm), ATerm o_34, ATerm m_34, ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL,p_7 = NULL,q_7 = NULL,s_7 = NULL,v_7 = NULL;
  q_7 = t;
  t = h_79(t);
  l_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_7, o_34, m_34);
  t = w_6(l_7, o_34, m_34, t);
  {
    ATerm n_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL;
        t = term_q_18;
        y_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_7, term_q_18);
        t = v_6(l_7, y_7, t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = n_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_7 = ATgetFirst((ATermList) t);
      p_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_q_18;
  s_7 = t;
  t = (ATerm) ATinsert(CheckATermList(p_7), (ATerm) ATinsert(CheckATermList(m_7), o_34));
  v_7 = t;
  t = SSL_table_put(l_7, s_7, v_7);
  t = q_7;
  return(t);
}
static ATerm w_8 (ATerm e_8, ATerm t)
{
  t = e_8;
  {
    ATerm w_18 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_18 = ATgetArgument(t, 0);
            ATerm d_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_18;
      }
  }
  t = term_e_19;
  t = debug_1_0(z_0, t);
  t = (ATerm) ATmakeAppl(sym__2, e_8, term_w_9);
  t = open_file_0_0(t);
  return(t);
}
static ATerm x_8 (ATerm i_8, ATerm j_8, ATerm k_8, ATerm t)
{
  t = SSL_open_file(i_8, j_8);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_f_19;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
  t_8 = t;
  if(match_cons(t, sym__2))
    {
      u_8 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_8(t_8, t);
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            t = x_8(u_8, v_8, t_8, t);
          }
      }
    }
  else
    {
      t = w_8(t_8, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  t = term_m_19;
  t = new_0_0(t);
  c_9 = t;
  t = term_n_19;
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_9, term_n_19);
  t = p_6(c_9, d_9, t);
  e_9 = t;
  {
    ATerm o_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_v_9);
        i_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_9, (ATerm) ATinsert(ATempty, term_v_9));
        t = o_6(e_9, i_9, t);
        t = new_file_0_0(t);
        LocalPopChoice(s_19);
      }
    else
      {
        t = o_19;
        t = e_9;
      }
  }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL;
  t = new_file_0_0(t);
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_9, term_w_9);
  t = open_file_0_0(t);
  t = term_m_19;
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_9, term_m_19);
  t = f_6(g_1, n_9, o_9, t);
  t = n_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm f_10 = NULL,i_10 = NULL;
  f_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm j_3 = NULL,l_3 = NULL;
      t = f_10;
      t = xtc_new_file_0_0(t);
      j_3 = t;
      t = r_0(t);
      l_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_3, (ATerm) ATinsert(ATinsert(ATempty, j_3), term_x_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(j_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_3);
    }
  else
    {
      ATerm y_3 = NULL,b_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_10;
      t = xtc_new_file_0_0(t);
      y_3 = t;
      t = r_0(t);
      b_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_3), term_x_19), i_10), term_z_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(y_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_3);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm p_10 = NULL;
  static ATerm h_1 (ATerm t)
  {
    ATerm q_10 = NULL,s_10 = NULL;
    q_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_10), q_10);
    t = v_6(not_null(p_10), q_10, t);
    s_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_10, s_10);
    return(t);
  }
  if(((p_10 != NULL) && (p_10 != t)))
    _fail(t);
  else
    p_10 = t;
  t = SSL_table_keys(p_10);
  t = map_1_0(h_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm p_80 (ATerm), ATerm t)
{
  ATerm u_10 = NULL;
  u_10 = t;
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_10 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        y_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_10, term_z_15);
        t = geq_0_0(t);
        t = u_10;
        t = p_80(t);
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = u_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm o_80 (ATerm), ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_11 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        f_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_11, term_u_12);
        t = geq_0_0(t);
        t = d_11;
        t = o_80(t);
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = d_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm q_80 (ATerm), ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_11 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        v_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_11, term_b_11);
        t = geq_0_0(t);
        t = o_11;
        t = q_80(t);
        LocalPopChoice(f_20);
      }
    else
      {
        t = e_20;
        t = o_11;
      }
  }
  return(t);
}
static ATerm h_6 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm o_24, ATerm n_24, ATerm t)
{
  t = p_73(t);
  {
    static ATerm i_1 (ATerm t)
    {
      ATerm x_11 = NULL;
      x_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_24, x_11);
      t = o_73(t);
      return(t);
    }
    t = fetch_1_0(i_1, t);
  }
  t = n_24;
  return(t);
}
static ATerm i_6 (ATerm l_73 (ATerm), ATerm k_24, ATerm j_24, ATerm t)
{
  static ATerm y_12 (ATerm t)
  {
    ATerm n_12 = NULL,r_12 = NULL,s_12 = NULL;
    n_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_12 = ATgetFirst((ATermList) t);
            s_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_12;
              {
                static ATerm j_1 (ATerm t)
                {
                  t = j_24;
                  return(t);
                }
                t = h_6(l_73, j_1, r_12, s_12, t);
              }
              t = y_12(t);
              LocalPopChoice(h_20);
            }
          else
            {
              t = g_20;
              {
                ATerm p_4 = NULL,u_4 = NULL,n_1 = NULL;
                t = SSLgetAnnotations(n_12);
                p_4 = t;
                t = s_12;
                t = y_12(t);
                u_4 = t;
                t = (ATerm) ATinsert(CheckATermList(u_4), r_12);
                n_1 = t;
                t = SSLsetAnnotations(n_1, p_4);
              }
            }
        }
      }
    return(t);
  }
  t = k_24;
  t = y_12(t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      o_13 = ATgetArgument(t, 0);
      if((o_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm c_36, ATerm d_36, ATerm e_36, ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_36, d_36);
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_20 = ATgetArgument(t, 0);
            ATerm l_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_36, d_36);
        t = v_6(c_36, d_36, t);
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        t = (ATerm) ATempty;
      }
  }
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_13, e_36);
  t = i_6(k_1, i_13, e_36, t);
  h_13 = t;
  t = SSL_table_put(c_36, d_36, h_13);
  t = g_13;
  return(t);
}
static ATerm k_6 (ATerm s_80 (ATerm), ATerm m_36, ATerm l_36, ATerm t)
{
  static ATerm m_1 (ATerm t)
  {
    ATerm p_13 = NULL,q_13 = NULL;
    if(match_cons(t, sym__2))
      {
        p_13 = ATgetArgument(t, 0);
        q_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_36, p_13, q_13);
    t = s_80(t);
    return(t);
  }
  t = l_36;
  t = map_1_0(m_1, t);
  return(t);
}
static ATerm o_6 (ATerm n_38, ATerm o_38, ATerm t)
{
  t = SSL_access(n_38, o_38);
  return(t);
}
static ATerm p_14 (ATerm a_14, ATerm t)
{
  t = SSL_fclose(a_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_14 = NULL,k_14 = NULL;
  k_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_14 = ATgetArgument(t, 0);
      {
        ATerm m_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_14);
            LocalPopChoice(q_20);
          }
        else
          {
            t = m_20;
            t = p_14(k_14, t);
          }
      }
    }
  else
    {
      t = p_14(k_14, t);
    }
  return(t);
}
static ATerm l_6 (ATerm r_17, ATerm t)
{
  t = SSL_read_term_from_stream(r_17);
  return(t);
}
static ATerm m_6 (ATerm v_38, ATerm w_38, ATerm t)
{
  ATerm r_14 = NULL;
  t = SSL_fopen(v_38, w_38);
  r_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_14 = NULL;
  t = SSL_stdin_stream();
  s_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_14 = NULL;
  t = SSL_stdout_stream();
  v_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_14 = NULL;
  t = SSL_stderr_stream();
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_14);
  return(t);
}
static ATerm i_17 (ATerm q_15, ATerm t)
{
  ATerm t_15 = NULL;
  t = SSL_explode_term(q_15);
  if(match_cons(t, sym__2))
    {
      ATerm r_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_20 = ATgetArgument(t, 1);
        if(((ATgetType(u_20) == AT_LIST) && !(ATisEmpty(u_20))))
          {
            t_15 = ATgetFirst((ATermList) u_20);
            {
              ATerm x_20 = (ATerm) ATgetNext((ATermList) u_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_17 (ATerm w_15, ATerm x_15, ATerm a_16, ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,e_16 = NULL,l_16 = NULL,q_1 = NULL;
  t = SSLgetAnnotations(a_16);
  e_16 = t;
  t = w_15;
  if(match_cons(t, sym_Path_1))
    {
      l_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_16, x_15);
  q_1 = t;
  t = SSLsetAnnotations(q_1, e_16);
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(b_16, c_16, t);
  return(t);
}
static ATerm k_17 (ATerm n_16, ATerm o_16, ATerm p_16, ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,b_17 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(p_16);
  u_16 = t;
  t = SSL_is_string(n_16);
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_17, o_16);
  t_1 = t;
  t = SSLsetAnnotations(t_1, u_16);
  if(match_cons(t, sym__2))
    {
      s_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(s_16, t_16, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
      {
        ATerm z_20 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_17(d_17, t);
            LocalPopChoice(d_21);
          }
        else
          {
            t = z_20;
            {
              ATerm e_21 = t;
              int f_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_17(e_17, f_17, d_17, t);
                  LocalPopChoice(f_21);
                }
              else
                {
                  t = e_21;
                  t = k_17(e_17, f_17, d_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_17(d_17, t);
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_g_21;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,w_17 = NULL;
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_18 = NULL;
      b_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_18, term_j_21);
      t = n_6(t);
      LocalPopChoice(i_21);
    }
  else
    {
      t = h_21;
      t = debug_1_0(o_1, t);
      _fail(t);
    }
  o_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(w_17, t);
  n_17 = t;
  t = o_17;
  t = fclose_0_0(t);
  t = n_17;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_k_21;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_18 = NULL,f_18 = NULL;
      e_18 = t;
      t = (ATerm) ATinsert(ATempty, term_p_21);
      f_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_18, (ATerm) ATinsert(ATempty, term_p_21));
      t = o_6(e_18, f_18, t);
      LocalPopChoice(o_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_21;
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_21 = t;
            if((PushChoice() == 0))
              {
                ATerm g_18 = NULL,i_18 = NULL;
                g_18 = t;
                t = (ATerm) ATinsert(ATempty, term_v_9);
                i_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_18, (ATerm) ATinsert(ATempty, term_v_9));
                t = o_6(g_18, i_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_21;
              }
            t = debug_1_0(p_1, t);
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            t = debug_1_0(r_1, t);
          }
      }
      t = (ATerm) ATempty;
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
  t = term_w_21;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_x_21;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm c_19 = NULL,i_19 = NULL,j_19 = NULL;
  c_19 = t;
  t = term_u_17;
  i_19 = t;
  t = (ATerm) ATinsert(ATempty, term_y_21);
  j_19 = t;
  t = SSL_printnl(i_19, j_19);
  t = c_19;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,p_19 = NULL;
  if(match_cons(t, sym__3))
    {
      k_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
      p_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_6(k_19, l_19, p_19, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,t_19 = NULL;
  q_19 = t;
  t = term_u_17;
  r_19 = t;
  t = (ATerm) ATinsert(ATempty, term_c_22);
  t_19 = t;
  t = SSL_printnl(r_19, t_19);
  t = q_19;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,y_19 = NULL;
  u_19 = t;
  t = term_u_17;
  v_19 = t;
  t = (ATerm) ATinsert(ATempty, term_y_21);
  y_19 = t;
  t = SSL_printnl(v_19, y_19);
  t = u_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm j_18 = NULL,m_18 = NULL,o_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,y_18 = NULL,z_18 = NULL;
  j_18 = t;
  t = if_verbose5_1_0(u_1, t);
  {
    ATerm d_22 = t;
    if((PushChoice() == 0))
      {
        ATerm a_19 = NULL,b_19 = NULL;
        t = term_e_22;
        a_19 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, j_18);
        b_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATmakeAppl(sym_Imported_1, j_18));
        t = v_6(a_19, b_19, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_22;
      }
  }
  o_18 = t;
  t = term_e_22;
  v_18 = t;
  t = term_f_22;
  y_18 = t;
  t = (ATerm) ATinsert(ATempty, j_18);
  z_18 = t;
  t = SSL_table_put(v_18, y_18, z_18);
  t = o_18;
  t = if_verbose4_1_0(x_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(a_2, t);
  m_18 = t;
  t = term_e_22;
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_22, m_18);
  t = k_6(b_2, u_18, m_18, t);
  t = if_verbose6_1_0(c_2, t);
  t = term_e_22;
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, j_18);
  s_18 = t;
  t = (ATerm) ATempty;
  t_18 = t;
  t = SSL_table_put(r_18, s_18, t_18);
  t = (ATerm) ATmakeAppl(sym__3, term_e_22, (ATerm)ATmakeAppl(sym_Imported_1, j_18), (ATerm) ATempty);
  t = if_verbose4_1_0(e_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm d_77 (ATerm), ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  n_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_20;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_20 = ATgetFirst((ATermList) t);
          p_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_5 = NULL,e_6 = NULL,g_6 = NULL,z_1 = NULL;
            t = SSLgetAnnotations(n_20);
            x_5 = t;
            t = o_20;
            t = d_77(t);
            e_6 = t;
            t = p_20;
            t = filter_1_0(d_77, t);
            g_6 = t;
            t = (ATerm) ATinsert(CheckATermList(g_6), e_6);
            z_1 = t;
            t = SSLsetAnnotations(z_1, x_5);
            LocalPopChoice(i_22);
          }
        else
          {
            t = g_22;
            t = p_20;
            t = filter_1_0(d_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm t)
{
  static ATerm s_20 (ATerm t)
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_67(t);
        t = s_20(t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        t = n_67(t);
      }
    return(t);
  }
  t = s_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_22;
      t = get_config_0_0(t);
      LocalPopChoice(o_22);
    }
  else
    {
      t = n_22;
      {
        ATerm q_22 = t;
        int r_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_20 = NULL;
            t = term_s_22;
            t_20 = t;
            t = SSL_getenv(t_20);
            LocalPopChoice(r_22);
          }
        else
          {
            t = q_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_t_22;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL;
  t = term_e_22;
  b_21 = t;
  t = term_u_22;
  c_21 = t;
  t = term_x_22;
  t = v_6(b_21, c_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm y_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_22;
      }
  }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_b_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_20 = NULL;
  t = if_verbose5_1_0(g_2, t);
  v_20 = t;
  {
    ATerm c_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_20 = NULL,y_20 = NULL;
        t = term_e_22;
        w_20 = t;
        t = term_f_22;
        y_20 = t;
        t = term_g_23;
        t = v_6(w_20, y_20, t);
        LocalPopChoice(f_23);
      }
    else
      {
        t = c_23;
        {
          ATerm a_21 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          a_21 = t;
          t = repeat_2_0(l_2, _id, t);
          t = a_21;
        }
      }
  }
  t = v_20;
  t = if_verbose5_1_0(p_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = debug_1_0(s_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_h_23;
  return(t);
}
static ATerm w_22 (ATerm m_21, ATerm t)
{
  ATerm q_21 = NULL,t_21 = NULL,v_21 = NULL;
  t = term_e_22;
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, m_21);
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATmakeAppl(sym_Tool_1, m_21));
  t = v_6(t_21, v_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_23 = ATgetFirst((ATermList) t);
      if(match_cons(i_23, sym__2))
        {
          ATerm k_23 = ATgetArgument(i_23, 0);
          q_21 = ATgetArgument(i_23, 1);
        }
      else
        _fail(t);
      {
        ATerm j_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_21;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = debug_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_h_23;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_e_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(d_3, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
      t = if_verbose5_1_0(r_2, t);
      t = xtc_load_0_0(t);
      b_22 = t;
      if(match_cons(t, sym__2))
        {
          z_21 = ATgetArgument(t, 0);
          a_22 = ATgetArgument(t, 1);
          {
            ATerm o_23 = t;
            int p_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_22 = NULL,j_22 = NULL,k_22 = NULL;
                t = term_e_22;
                j_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, z_21);
                k_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATmakeAppl(sym_Tool_1, z_21));
                t = v_6(j_22, k_22, t);
                {
                  static ATerm u_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((a_22 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((h_22 != NULL) && (h_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(u_2, t);
                }
                t = not_null(h_22);
                LocalPopChoice(p_23);
              }
            else
              {
                t = o_23;
                t = w_22(b_22, t);
              }
          }
        }
      else
        {
          t = w_22(b_22, t);
        }
      t = if_verbose5_1_0(v_2, t);
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      {
        ATerm v_22 = NULL,n_7 = NULL,o_7 = NULL;
        v_22 = t;
        t = term_u_17;
        n_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_23), v_22), term_q_23);
        o_7 = t;
        t = SSL_printnl(n_7, o_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_23), v_22), term_q_23);
        t = if_verbose5_1_0(c_3, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm p_6 (ATerm v_31, ATerm w_31, ATerm t)
{
  t = SSL_strcat(v_31, w_31);
  return(t);
}
ATerm debug_1_0 (ATerm p_64 (ATerm), ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,d_23 = NULL,e_23 = NULL;
  z_22 = t;
  t = p_64(t);
  a_23 = t;
  t = term_u_17;
  d_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_22), a_23);
  e_23 = t;
  t = SSL_printnl(d_23, e_23);
  t = z_22;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_v_23;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_23 = NULL;
      r_23 = t;
      t = SSL_is_string(r_23);
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
      {
        ATerm y_23 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(e_3, t);
            LocalPopChoice(c_24);
          }
        else
          {
            t = y_23;
            {
              ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
              z_23 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_24 = ATgetArgument(t, 0);
                  t = a_24;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_24 = ATgetArgument(t, 0);
                      t = a_24;
                      {
                        ATerm d_24 = t;
                        int e_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(e_24);
                          }
                        else
                          {
                            t = d_24;
                            t = debug_1_0(f_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_24 = NULL,l_24 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_24 = ATgetArgument(t, 0);
                          b_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_24;
                      t = eval_config_0_0(t);
                      i_24 = t;
                      t = b_24;
                      t = eval_config_0_0(t);
                      l_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_24, l_24);
                      t = p_6(i_24, l_24, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL;
  t_24 = t;
  t = term_f_24;
  u_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_24, t_24);
  t = v_6(u_24, t_24, t);
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL,w_24 = NULL;
        t = eval_config_0_0(t);
        v_24 = t;
        t = term_f_24;
        w_24 = t;
        t = SSL_table_put(w_24, t_24, v_24);
        t = v_24;
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
      }
  }
  return(t);
}
static ATerm q_6 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_copy(l_14, m_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL;
  q_25 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_8 = NULL;
        t = q_25;
        t = o_0(t);
        m_8 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = m_8;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = m_8;
          }
        t = (ATerm) ATmakeAppl(sym__2, r_25, m_8);
        t = q_6(r_25, m_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_25);
        LocalPopChoice(p_24);
      }
    else
      {
        t = m_24;
        {
          ATerm q_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_8 = NULL;
              t = q_25;
              t = o_0(t);
              z_8 = t;
              {
                ATerm s_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm a_9 = NULL;
                    a_9 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = a_9;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = a_9;
                          }
                        else
                          {
                            t = a_9;
                            if((r_25 != t))
                              {
                                _fail(t);
                              }
                            t = a_9;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_24;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, r_25, z_8);
              t = q_6(r_25, z_8, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_25);
              LocalPopChoice(r_24);
            }
          else
            {
              t = q_24;
              t = q_25;
              t = o_0(t);
              if((r_25 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_25);
            }
        }
      }
  }
  return(t);
}
static ATerm r_6 (ATerm k_35, ATerm l_35, ATerm t)
{
  ATerm y_25 = NULL,f_26 = NULL;
  f_26 = t;
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_35, l_35);
        t = v_6(k_35, l_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_24 = ATgetFirst((ATermList) t);
            y_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_24);
        t = SSL_table_put(k_35, l_35, y_25);
        t = (ATerm) ATmakeAppl(sym__3, k_35, l_35, y_25);
      }
    else
      {
        t = x_24;
        t = SSL_table_remove(k_35, l_35);
        t = (ATerm) ATmakeAppl(sym__2, k_35, l_35);
      }
  }
  t = f_26;
  return(t);
}
ATerm end_scope_1_0 (ATerm e_79 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,k_26 = NULL,l_26 = NULL;
  k_26 = t;
  t = e_79(t);
  i_26 = t;
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_26 = NULL;
        t = term_q_18;
        m_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_26, term_q_18);
        t = v_6(i_26, m_26, t);
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_26 = ATgetFirst((ATermList) t);
      g_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_q_18;
  l_26 = t;
  t = SSL_table_put(i_26, l_26, g_26);
  t = h_26;
  {
    static ATerm g_3 (ATerm t)
    {
      ATerm n_26 = NULL;
      n_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_26, n_26);
      t = r_6(i_26, n_26, t);
      return(t);
    }
    t = map_1_0(g_3, t);
  }
  t = k_26;
  return(t);
}
ATerm restore_always_2_0 (ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm t)
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_79(t);
      t = a_80(t);
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      t = a_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  ATerm q_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  t_26 = t;
  t = d_79(t);
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_26, term_q_18);
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_25 = ATgetArgument(t, 0);
            ATerm h_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_18;
        b_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_26, term_q_18);
        t = v_6(q_26, b_27, t);
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        t = (ATerm) ATempty;
      }
  }
  u_26 = t;
  t = term_q_18;
  v_26 = t;
  t = (ATerm) ATinsert(CheckATermList(u_26), (ATerm) ATempty);
  w_26 = t;
  t = SSL_table_put(q_26, v_26, w_26);
  t = t_26;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm k_27 = NULL;
  k_27 = t;
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(k_27);
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = k_27;
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  ATerm e_27 = NULL;
  static ATerm n_3 (ATerm t)
  {
    ATerm f_27 = NULL;
    f_27 = t;
    {
      ATerm k_25 = t;
      int l_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_27 = NULL,h_27 = NULL;
          t = term_w_19;
          g_27 = t;
          t = term_q_18;
          h_27 = t;
          t = term_m_25;
          t = v_6(g_27, h_27, t);
          LocalPopChoice(l_25);
        }
      else
        {
          t = k_25;
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
          ATerm n_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = e_27;
    t = map_1_0(o_3, t);
    t = f_27;
    t = end_scope_1_0(p_3, t);
    return(t);
  }
  t = begin_scope_1_0(m_3, t);
  t = restore_always_2_0(n_82, n_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_19;
      t = get_config_0_0(t);
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      t = term_s_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm o_82 (ATerm), ATerm t)
{
  static ATerm r_3 (ATerm t)
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_27 = NULL;
        t = term_z_19;
        t = get_config_0_0(t);
        r_27 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_27);
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        t = term_u_9;
      }
    t = o_82(t);
    t = copy_to_1_0(s_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(r_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,y_27 = NULL,b_28 = NULL;
  s_27 = t;
  t = term_m_19;
  t = whoami_0_0(t);
  t_27 = t;
  t = term_u_17;
  y_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_25), t_27), term_v_25);
  b_28 = t;
  t = SSL_printnl(y_27, b_28);
  t = term_s_9;
  u_27 = t;
  t = SSL_exit(u_27);
  t = s_27;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm h_28 = NULL;
  h_28 = t;
  if(match_string(t, "-k"))
    {
      t = h_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_28;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
  i_28 = t;
  t = SSL_string_to_int(i_28);
  j_28 = t;
  t = term_x_25;
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_25, j_28);
  t = y_6(k_28, j_28, t);
  t = i_28;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_3, v_3, w_3, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  if(match_string(t, "-S"))
    {
      t = o_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_28;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm p_28 = NULL,t_28 = NULL;
  t = term_l_9;
  p_28 = t;
  t = term_a_26;
  t_28 = t;
  t = term_b_26;
  t = y_6(p_28, t_28, t);
  t = term_c_26;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_d_26;
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
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  x_28 = t;
  t = SSL_string_to_int(x_28);
  y_28 = t;
  t = term_l_9;
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_9, y_28);
  t = y_6(z_28, y_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_28);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_e_26;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm a_29 = NULL,d_29 = NULL;
  t = term_j_26;
  a_29 = t;
  t = term_m_19;
  d_29 = t;
  t = term_o_26;
  t = y_6(a_29, d_29, t);
  t = term_p_26;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_r_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_3, z_3, a_4, t);
      LocalPopChoice(x_26);
    }
  else
    {
      t = s_26;
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_4, f_4, g_4, t);
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
            t = Option_3_0(h_4, j_4, m_4, t);
          }
      }
    }
  return(t);
}
static ATerm y_6 (ATerm f_37, ATerm g_37, ATerm t)
{
  ATerm e_29 = NULL;
  t = term_f_24;
  e_29 = t;
  t = SSL_table_put(e_29, f_37, g_37);
  t = (ATerm) ATmakeAppl(sym__3, term_f_24, f_37, g_37);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_29 = NULL,m_29 = NULL,n_29 = NULL;
      t = term_m_19;
      t = e_0(t);
      j_29 = t;
      t = term_a_27;
      m_29 = t;
      t = term_c_27;
      n_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_27, term_c_27, j_29);
      t = w_6(m_29, n_29, j_29, t);
      _fail(t);
    }
  else
    {
      ATerm q_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_29 = ATgetFirst((ATermList) t);
          i_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_29;
      t = c_0(t);
      t = term_m_19;
      t = d_0(t);
      q_29 = t;
      t = (ATerm) ATinsert(CheckATermList(i_29), q_29);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm x_29 = NULL;
  x_29 = t;
  if(match_string(t, "-o"))
    {
      t = x_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_29;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  z_29 = t;
  t = term_x_19;
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_19, z_29);
  t = y_6(a_30, z_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_29);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
static ATerm w_6 (ATerm f_35, ATerm g_35, ATerm e_35, ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_35, g_35);
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_27 = ATgetArgument(t, 0);
            ATerm m_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_35, g_35);
        t = v_6(f_35, g_35, t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = (ATerm) ATempty;
      }
  }
  d_30 = t;
  t = (ATerm) ATinsert(CheckATermList(d_30), e_35);
  e_30 = t;
  t = SSL_table_put(f_35, g_35, e_30);
  t = c_30;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
      t = term_m_19;
      t = n_0(t);
      p_30 = t;
      t = term_a_27;
      q_30 = t;
      t = term_c_27;
      r_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_27, term_c_27, p_30);
      t = w_6(q_30, r_30, p_30, t);
      _fail(t);
    }
  else
    {
      ATerm v_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_30 = ATgetFirst((ATermList) t);
          m_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_30 = ATgetFirst((ATermList) t);
          o_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_30;
      t = k_0(t);
      t = n_30;
      t = l_0(t);
      v_30 = t;
      t = (ATerm) ATinsert(CheckATermList(o_30), v_30);
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm x_30 = NULL;
  x_30 = t;
  if(match_string(t, "-i"))
    {
      t = x_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_30;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  y_30 = t;
  t = term_z_19;
  z_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_19, y_30);
  t = y_6(z_30, y_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_30);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_4, x_4, y_4, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm b_31 = NULL;
  b_31 = t;
  if(match_string(t, "-a"))
    {
      t = b_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = b_31;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
  c_31 = t;
  t = term_o_27;
  d_31 = t;
  t = term_m_19;
  e_31 = t;
  t = term_p_27;
  t = y_6(d_31, e_31, t);
  t = c_31;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_q_27;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--annotations", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  f_31 = t;
  t = term_v_27;
  g_31 = t;
  t = term_m_19;
  h_31 = t;
  t = term_w_27;
  t = y_6(g_31, h_31, t);
  t = f_31;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_5, b_5, c_5, t);
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      t = Option_3_0(d_5, f_5, g_5, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_19;
  t = whoami_0_0(t);
  i_31 = t;
  t = term_u_17;
  k_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_28), i_31);
  l_31 = t;
  t = SSL_printnl(k_31, l_31);
  t = term_s_9;
  j_31 = t;
  t = SSL_exit(j_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_28;
  t = get_config_0_0(t);
  return(t);
}
static ATerm s_6 (ATerm a_33, ATerm b_33, ATerm t)
{
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_33, b_33);
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
      t = SSL_addr(a_33, b_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  n_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_31;
      t = z_75(t);
    }
  else
    {
      ATerm s_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_31 = ATgetFirst((ATermList) t);
          p_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_31;
      t = foldr_2_0(z_75, a_76, t);
      s_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_31, s_31);
      t = a_76(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_a_26;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm t_9 = NULL,y_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(t_9, y_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_31 = NULL,p_9 = NULL,q_9 = NULL;
  t = times_0_0(t);
  q_9 = t;
  t = SSL_explode_term(q_9);
  if(match_cons(t, sym__2))
    {
      ATerm g_28 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9;
  t = foldr_2_0(i_5, m_5, t);
  x_31 = t;
  t = SSL_TicksToSeconds(x_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  i_32 = t;
  if(match_cons(t, sym__2))
    {
      j_32 = ATgetArgument(t, 0);
      k_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_32;
        if((j_32 != t))
          {
            _fail(t);
          }
        t = i_32;
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = (ATerm) ATmakeAppl(sym__2, j_32, k_32);
        {
          ATerm n_28 = t;
          int q_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_32, k_32);
              LocalPopChoice(q_28);
            }
          else
            {
              t = n_28;
              t = SSL_gtr(j_32, k_32);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_32, k_32);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_80 (ATerm), ATerm t)
{
  ATerm o_32 = NULL;
  o_32 = t;
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_32 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        q_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_32, term_s_9);
        t = geq_0_0(t);
        t = o_32;
        t = l_80(t);
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = o_32;
      }
  }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,v_32 = NULL,w_32 = NULL;
  t = run_time_0_0(t);
  s_32 = t;
  t = term_m_19;
  t = whoami_0_0(t);
  t_32 = t;
  t = term_u_17;
  v_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_28), s_32), term_b_10), t_32);
  w_32 = t;
  t = SSL_printnl(v_32, w_32);
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_28), s_32), term_b_10), t_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_26;
  x_32 = t;
  t = SSL_exit(x_32);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL;
  k_33 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_33;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_33 = ATgetArgument(t, 0);
          {
            ATerm x_10 = NULL,d_2 = NULL;
            t = SSLgetAnnotations(k_33);
            x_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_33);
            d_2 = t;
            t = SSLsetAnnotations(d_2, x_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_33;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_84 (ATerm), ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_29;
      t = get_config_0_0(t);
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
      t = fetch_1_0(r_5, t);
    }
  t = p_84(t);
  return(t);
}
ATerm map_1_0 (ATerm h_69 (ATerm), ATerm t)
{
  static ATerm a_34 (ATerm t)
  {
    ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
    x_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_33;
      }
    else
      {
        ATerm k_11 = NULL,p_11 = NULL,q_11 = NULL,f_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_33 = ATgetFirst((ATermList) t);
            z_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_33);
        k_11 = t;
        t = y_33;
        t = h_69(t);
        p_11 = t;
        t = z_33;
        t = a_34(t);
        q_11 = t;
        t = (ATerm) ATinsert(CheckATermList(q_11), p_11);
        f_2 = t;
        t = SSLsetAnnotations(f_2, k_11);
      }
    return(t);
  }
  t = a_34(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_34 = ATgetFirst((ATermList) t);
      e_34 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_34 = NULL,u_34 = NULL;
        static ATerm u_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_34)), not_null(u_34));
          return(t);
        }
        t = e_34;
        t = i_0(t);
        if(((t_34 != NULL) && (t_34 != t)))
          _fail(t);
        else
          t_34 = t;
        t = d_34;
        t = g_0(t);
        if(((u_34 != NULL) && (u_34 != t)))
          _fail(t);
        else
          u_34 = t;
        t = e_34;
        t = reverse_acc_2_0(g_0, u_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_19;
      t = i_0(t);
    }
  return(t);
}
static ATerm v_6 (ATerm w_36, ATerm x_36, ATerm t)
{
  t = SSL_table_get(w_36, x_36);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm z_34 = NULL,h_35 = NULL,i_35 = NULL,x_2 = NULL;
  i_35 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_35);
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_35);
  x_2 = t;
  t = SSLsetAnnotations(x_2, z_34);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm n_35 = NULL;
  n_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_35), term_c_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_34 = NULL,y_34 = NULL;
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_28;
      t = get_config_0_0(t);
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
      t = fetch_1_0(v_5, t);
    }
  t = term_k_29;
  t = echo_0_0(t);
  t = term_a_27;
  w_34 = t;
  t = term_c_27;
  y_34 = t;
  t = term_l_29;
  t = v_6(w_34, y_34, t);
  t = reverse_acc_2_0(_id, w_5, t);
  t = map_1_0(y_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  static ATerm t_36 (ATerm t)
  {
    ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL;
    q_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_36 = ATgetFirst((ATermList) t);
        s_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_29 = t;
      int p_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_12 = NULL,o_12 = NULL,i_3 = NULL;
          t = SSLgetAnnotations(q_36);
          e_12 = t;
          t = r_36;
          t = r_69(t);
          o_12 = t;
          t = (ATerm) ATinsert(CheckATermList(s_36), o_12);
          i_3 = t;
          t = SSLsetAnnotations(i_3, e_12);
          LocalPopChoice(p_29);
        }
      else
        {
          t = o_29;
          {
            ATerm c_13 = NULL,f_13 = NULL,k_3 = NULL;
            t = SSLgetAnnotations(q_36);
            c_13 = t;
            t = s_36;
            t = t_36(t);
            f_13 = t;
            t = (ATerm) ATinsert(CheckATermList(f_13), r_36);
            k_3 = t;
            t = SSLsetAnnotations(k_3, c_13);
          }
        }
    }
    return(t);
  }
  t = t_36(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
  z_36 = t;
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_36;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_29 = ATgetFirst((ATermList) t);
                ATerm u_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_36;
          }
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
        t = (ATerm) ATinsert(ATempty, z_36);
      }
  }
  a_37 = t;
  t = term_s_25;
  b_37 = t;
  t = SSL_printnl(b_37, a_37);
  t = z_36;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_28;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL;
  t = term_v_29;
  h_37 = t;
  t = term_m_19;
  i_37 = t;
  t = term_w_29;
  t = y_6(h_37, i_37, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_y_29;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  t = term_v_29;
  l_37 = t;
  t = term_m_19;
  m_37 = t;
  t = term_w_29;
  t = y_6(l_37, m_37, t);
  t = term_b_30;
  j_37 = t;
  t = term_m_19;
  k_37 = t;
  t = term_f_30;
  t = y_6(j_37, k_37, t);
  t = term_g_30;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_5, t_6, z_6, t);
      LocalPopChoice(j_30);
    }
  else
    {
      t = i_30;
      t = Option_3_0(a_7, b_7, f_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_56 (ATerm), ATerm i_56 (ATerm), ATerm t)
{
  ATerm n_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,q_3 = NULL;
  x_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_37 = ATgetFirst((ATermList) t);
      u_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_37);
  n_37 = t;
  t = t_37;
  t = h_56(t);
  v_37 = t;
  t = u_37;
  t = i_56(t);
  w_37 = t;
  t = (ATerm) ATinsert(CheckATermList(w_37), v_37);
  q_3 = t;
  t = SSLsetAnnotations(q_3, n_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_86 (ATerm), ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,k_38 = NULL,l_38 = NULL,z_4 = NULL;
  f_38 = t;
  {
    ATerm k_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_30;
        t = n_86(t);
        LocalPopChoice(s_30);
      }
    else
      {
        t = k_30;
      }
  }
  t = f_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_38 = ATgetFirst((ATermList) t);
      i_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_38);
  g_38 = t;
  t = term_d_28;
  l_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_28, h_38);
  t = y_6(l_38, h_38, t);
  t = i_38;
  {
    static ATerm b_39 (ATerm t)
    {
      ATerm u_30 = t;
      int w_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_31 = t;
          int m_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_38 = NULL;
              q_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_38;
              LocalPopChoice(m_31);
            }
          else
            {
              t = a_31;
              t = n_86(t);
              t = Cons_2_0(_id, b_39, t);
            }
          LocalPopChoice(w_30);
        }
      else
        {
          t = u_30;
          {
            ATerm t_38 = NULL,u_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_38 = ATgetFirst((ATermList) t);
                u_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_38), (ATerm) ATmakeAppl(sym_Undefined_1, t_38));
          }
        }
      return(t);
    }
    t = b_39(t);
  }
  k_38 = t;
  t = (ATerm) ATinsert(CheckATermList(k_38), (ATerm) ATmakeAppl(sym_Program_1, h_38));
  z_4 = t;
  t = SSLsetAnnotations(z_4, g_38);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm v_39 = NULL;
  v_39 = t;
  if(match_string(t, "--help"))
    {
      t = v_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_39;
        }
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL;
  t = term_b_29;
  w_39 = t;
  t = term_m_19;
  x_39 = t;
  t = term_q_31;
  t = y_6(w_39, x_39, t);
  t = term_r_31;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_t_31;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,r_39 = NULL,s_39 = NULL;
  i_39 = t;
  t = term_a_27;
  k_39 = t;
  t = term_c_27;
  r_39 = t;
  t = (ATerm) ATempty;
  s_39 = t;
  t = SSL_table_put(k_39, r_39, s_39);
  t = i_39;
  {
    static ATerm g_7 (ATerm t)
    {
      ATerm u_31 = t;
      int y_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_86(t);
          LocalPopChoice(y_31);
        }
      else
        {
          t = u_31;
          {
            ATerm z_31 = t;
            int a_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_7, i_7, j_7, t);
                LocalPopChoice(a_32);
              }
            else
              {
                t = z_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_7, t);
  }
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_40 = NULL;
        h_40 = t;
        {
          ATerm d_32 = t;
          int e_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_13 = NULL;
              t = h_40;
              {
                ATerm f_32 = t;
                int g_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_b_29;
                    t = get_config_0_0(t);
                    LocalPopChoice(g_32);
                  }
                else
                  {
                    t = f_32;
                    t = fetch_1_0(r_7, t);
                  }
              }
              t = h_40;
              t = default_system_usage_0_0(t);
              t = term_a_26;
              v_13 = t;
              t = SSL_exit(v_13);
              LocalPopChoice(e_32);
            }
          else
            {
              t = d_32;
              {
                ATerm j_14 = NULL;
                t = term_v_29;
                t = get_config_0_0(t);
                t = h_40;
                t = default_system_about_0_0(t);
                t = term_a_26;
                j_14 = t;
                t = SSL_exit(j_14);
              }
            }
        }
        LocalPopChoice(c_32);
      }
    else
      {
        t = b_32;
        {
          ATerm h_32 = t;
          int l_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_40 = NULL,j_40 = NULL,n_40 = NULL;
              static ATerm t_7 (ATerm t)
              {
                ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,e_5 = NULL;
                q_40 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_40);
                o_40 = t;
                t = p_40;
                if(((g_39 != NULL) && (g_39 != t)))
                  _fail(t);
                else
                  g_39 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_40);
                e_5 = t;
                t = SSLsetAnnotations(e_5, o_40);
                return(t);
              }
              t = fetch_1_0(t_7, t);
              t = term_u_17;
              j_40 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_39)), term_m_32);
              n_40 = t;
              t = SSL_printnl(j_40, n_40);
              t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_39)), term_m_32));
              t = default_system_usage_0_0(t);
              t = term_s_9;
              i_40 = t;
              t = SSL_exit(i_40);
              LocalPopChoice(l_32);
            }
          else
            {
              t = h_32;
            }
        }
      }
  }
  h_39 = t;
  t = term_a_27;
  j_39 = t;
  t = SSL_table_destroy(j_39);
  t = h_39;
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL;
  t = parse_options_1_0(r_84, t);
  v_40 = t;
  t = term_n_32;
  y_40 = t;
  t = SSL_table_create(y_40);
  t = term_n_32;
  w_40 = t;
  t = term_p_32;
  x_40 = t;
  t = SSL_table_put(w_40, x_40, v_40);
  t = v_40;
  t = t_84(t);
  {
    ATerm r_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_84, t);
        LocalPopChoice(u_32);
      }
    else
      {
        t = r_32;
        {
          ATerm y_32 = t;
          int z_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_84(t);
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
static ATerm u_7 (ATerm t)
{
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      {
        ATerm e_33 = t;
        int f_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(f_33);
          }
        else
          {
            t = e_33;
            {
              ATerm i_33 = t;
              int l_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(l_33);
                }
              else
                {
                  t = i_33;
                  {
                    ATerm m_33 = t;
                    int n_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(x_7, z_7, a_8, t);
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
                              t = verbose_option_0_0(t);
                              LocalPopChoice(p_33);
                            }
                          else
                            {
                              t = o_33;
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
static ATerm w_7 (ATerm t)
{
  t = xtc_io_1_0(b_8, t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL;
  t = term_q_33;
  p_41 = t;
  t = term_m_19;
  q_41 = t;
  t = term_r_33;
  t = y_6(p_41, q_41, t);
  t = term_s_33;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_t_33;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_41 = NULL;
      s_41 = t;
      t = term_o_27;
      t = get_config_0_0(t);
      t = s_41;
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      {
        ATerm w_33 = t;
        int b_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_42 = NULL,b_42 = NULL;
            b_42 = t;
            if(match_cons(t, sym_FILE_1))
              {
                a_42 = ATgetArgument(t, 0);
                {
                  ATerm u_14 = NULL,h_5 = NULL;
                  t = SSLgetAnnotations(b_42);
                  u_14 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, a_42);
                  h_5 = t;
                  t = SSLsetAnnotations(h_5, u_14);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = b_42;
              }
            LocalPopChoice(b_34);
            t = xtc_transform_file_2_0(c_8, d_8, t);
          }
        else
          {
            t = w_33;
            t = xtc_transform_term_2_0(f_8, g_8, t);
          }
      }
    }
  {
    ATerm c_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_42 = NULL,i_42 = NULL;
        i_42 = t;
        if(match_cons(t, sym_FILE_1))
          {
            h_42 = ATgetArgument(t, 0);
            {
              ATerm d_15 = NULL,j_5 = NULL;
              t = SSLgetAnnotations(i_42);
              d_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_42);
              j_5 = t;
              t = SSLsetAnnotations(j_5, d_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_42;
          }
        LocalPopChoice(f_34);
        t = xtc_transform_file_2_0(h_8, l_8, t);
      }
    else
      {
        t = c_34;
        t = xtc_transform_term_2_0(n_8, o_8, t);
      }
  }
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_42 = NULL;
        j_42 = t;
        t = term_v_27;
        t = get_config_0_0(t);
        t = j_42;
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
              ATerm q_42 = NULL,r_42 = NULL;
              r_42 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  q_42 = ATgetArgument(t, 0);
                  {
                    ATerm k_15 = NULL,k_5 = NULL;
                    t = SSLgetAnnotations(r_42);
                    k_15 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, q_42);
                    k_5 = t;
                    t = SSLsetAnnotations(k_5, k_15);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = r_42;
                }
              LocalPopChoice(j_34);
              t = xtc_transform_file_2_0(p_8, q_8, t);
            }
          else
            {
              t = i_34;
              t = xtc_transform_term_2_0(r_8, s_8, t);
            }
        }
      }
  }
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_42 = NULL,y_42 = NULL;
        y_42 = t;
        if(match_cons(t, sym_FILE_1))
          {
            x_42 = ATgetArgument(t, 0);
            {
              ATerm s_15 = NULL,l_5 = NULL;
              t = SSLgetAnnotations(y_42);
              s_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_42);
              l_5 = t;
              t = SSLsetAnnotations(l_5, s_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_42;
          }
        LocalPopChoice(l_34);
        t = xtc_transform_file_2_0(y_8, b_9, t);
      }
    else
      {
        t = k_34;
        t = xtc_transform_term_2_0(f_9, g_9, t);
      }
  }
  {
    ATerm n_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_43 = NULL,l_43 = NULL;
        l_43 = t;
        if(match_cons(t, sym_FILE_1))
          {
            k_43 = ATgetArgument(t, 0);
            {
              ATerm j_16 = NULL,t_5 = NULL;
              t = SSLgetAnnotations(l_43);
              j_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_43);
              t_5 = t;
              t = SSLsetAnnotations(t_5, j_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_43;
          }
        LocalPopChoice(p_34);
        t = xtc_transform_file_2_0(h_9, pass_verbose_0_0, t);
      }
    else
      {
        t = n_34;
        t = xtc_transform_term_2_0(j_9, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_q_34;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_q_34;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_r_34;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_r_34;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_s_34;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_s_34;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_v_34;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  t = pass_verbose_0_0(t);
  z_42 = t;
  t = term_x_34;
  t = xtc_find_0_0(t);
  a_43 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(z_42), a_43), term_a_35);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_v_34;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL;
  t = pass_verbose_0_0(t);
  c_43 = t;
  t = term_x_34;
  t = xtc_find_0_0(t);
  d_43 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(c_43), d_43), term_a_35);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_b_35;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_b_35;
  return(t);
}
ATerm pp_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(u_7, default_usage_0_0, _id, w_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pp_stratego_0_0(t);
  return(t);
}
