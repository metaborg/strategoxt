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
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_d_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_y_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_s_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_u_29;
ATerm term_s_29;
ATerm term_i_29;
ATerm term_g_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_w_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_y_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_a_27;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_i_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_q_25;
ATerm term_b_25;
ATerm term_v_23;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_d_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_i_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_o_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_a_21;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_x_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_u_17;
ATerm term_r_17;
ATerm term_p_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_h_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_x_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_o_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_t_9, term_o_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_10, term_r_10, term_u_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_x_10, term_y_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_b_11, term_c_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_f_11, term_g_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_o_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_t_11, term_u_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_a_12, term_b_12);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_e_12, term_j_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_n_12, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_e_13, term_f_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_m_13, term_o_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_s_13, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_x_13, term_a_14);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_h_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_t_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_f_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_u_15, term_w_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_g_16, term_m_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_u_16, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_e_17, term_f_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_p_17, term_r_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_d_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_g_18, term_h_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym__2, term_y_21, term_o_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym__2, term_y_21, term_z_21);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym__2, term_g_19, term_f_19);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_c_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_26);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym__2, term_n_26, term_j_19);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_w_27, term_j_19);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym__2, term_b_28, term_j_19);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym__2, term_a_27, term_c_27);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym__2, term_s_29, term_j_19);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym__2, term_z_29, term_j_19);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym__2, term_z_28, term_j_19);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym__2, term_w_32, term_j_19);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm b_6 (ATerm k_33, ATerm l_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm c_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm d_6 (ATerm s_65 (ATerm), ATerm j_168, ATerm v_17, ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t);
static ATerm e_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm u_70 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm h_64 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm t_84 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm y_70 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm m_7 (ATerm v_6, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm g_6 (ATerm i_80 (ATerm), ATerm s_34, ATerm q_34, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm v_81 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm u_81 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm w_81 (ATerm), ATerm t);
static ATerm i_6 (ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm j_6 (ATerm m_74 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_6 (ATerm c_37, ATerm d_37, ATerm e_37, ATerm t);
static ATerm l_6 (ATerm y_81 (ATerm), ATerm m_37, ATerm l_37, ATerm t);
static ATerm p_6 (ATerm n_39, ATerm o_39, ATerm t);
static ATerm c_13 (ATerm t_12, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_6 (ATerm t_17, ATerm t);
static ATerm n_6 (ATerm v_39, ATerm w_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm p_15 (ATerm y_13, ATerm t);
static ATerm q_15 (ATerm e_14, ATerm i_14, ATerm j_14, ATerm t);
static ATerm r_15 (ATerm u_14, ATerm v_14, ATerm w_14, ATerm t);
static ATerm o_6 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm e_78 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm d_21 (ATerm h_20, ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm q_6 (ATerm z_31, ATerm a_32, ATerm t);
ATerm debug_1_0 (ATerm q_65 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm r_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm s_6 (ATerm k_36, ATerm l_36, ATerm t);
ATerm end_scope_1_0 (ATerm f_80 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_81 (ATerm), ATerm g_81 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm e_80 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm f_84 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm g_84 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_6 (ATerm f_38, ATerm g_38, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_6 (ATerm f_36, ATerm g_36, ATerm e_36, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm pp_stratego_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm t_6 (ATerm e_33, ATerm f_33, ATerm t);
ATerm foldr_2_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_81 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm need_help_1_0 (ATerm v_85 (ATerm), ATerm t);
ATerm map_1_0 (ATerm i_70 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm w_6 (ATerm w_37, ATerm x_37, ATerm t);
static ATerm n_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_70 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_57 (ATerm), ATerm j_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_87 (ATerm), ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm parse_options_1_0 (ATerm s_87 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm l_9 (ATerm t);
ATerm pp_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm b_6 (ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm z_4 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(k_33, l_33);
      LocalPopChoice(n_9);
    }
  else
    {
      t = z_4;
      t = SSL_subtr(k_33, l_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL;
  t = term_o_9;
  {
    ATerm q_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(r_9);
      }
    else
      {
        t = q_9;
        t = term_t_9;
      }
  }
  b_0 = t;
  t = term_t_9;
  e_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_t_9);
  t = b_6(b_0, e_0, t);
  c_0 = t;
  t = SSL_int_to_string(c_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_o_9);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_u_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm b_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_v_9);
      b_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_0, (ATerm) ATinsert(ATempty, term_v_9));
      t = p_6(w_0, b_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm c_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm c_1 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_1);
  return(t);
}
static ATerm d_6 (ATerm s_65 (ATerm), ATerm j_168, ATerm v_17, ATerm t)
{
  ATerm d_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_168, term_x_9);
  t = o_6(t);
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_1, v_17);
  t = s_65(t);
  t = fclose_0_0(t);
  t = v_17;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm g_1 = NULL,j_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_10 = ATgetArgument(t, 0);
      if(match_cons(a_10, sym_Stream_1))
        {
          g_1 = ATgetArgument(a_10, 0);
        }
      else
        _fail(t);
      j_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(g_1, j_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t)
{
  ATerm e_1 = NULL,f_1 = NULL;
  f_1 = t;
  t = xtc_new_file_0_0(t);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_1, f_1);
  t = d_6(f_0, e_1, f_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, e_1);
  t = xtc_transform_file_2_0(s_83, t_83, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm e_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm i_2 = NULL,x_2 = NULL,y_2 = NULL,a_3 = NULL;
  i_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_2 = ATgetArgument(t, 0);
      {
        ATerm m_0 = NULL,q_0 = NULL;
        t = SSL_int_to_string(x_2);
        m_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), m_0), term_b_10);
        q_0 = t;
        t = SSL_concat_strings(q_0);
      }
    }
  else
    {
      ATerm q_1 = NULL,r_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_2 = ATgetArgument(t, 0);
          y_2 = ATgetArgument(t, 1);
          a_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_2);
      q_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_f_10), q_1), term_e_10), x_2);
      r_1 = t;
      t = SSL_concat_strings(r_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_70 (ATerm), ATerm t)
{
  ATerm d_3 = NULL;
  static ATerm h_0 (ATerm t)
  {
    t = u_70(t);
    if(((d_3 != NULL) && (d_3 != t)))
      _fail(t);
    else
      d_3 = t;
    return(t);
  }
  t = fetch_1_0(h_0, t);
  t = not_null(d_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm e_3 = NULL;
  e_3 = t;
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm j_10 = ATgetArgument(t, 0);
              if((e_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm k_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_18), term_e_18), term_u_17), term_j_17), term_w_16), term_n_16), term_d_16), term_y_15), term_n_15), term_g_15), term_a_15), term_p_14), term_b_14), term_u_13), term_q_13), term_h_13), term_y_12), term_u_12), term_p_12), term_k_12), term_c_12), term_v_11), term_q_11), term_l_11), term_d_11), term_z_10), term_v_10), term_p_10);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, e_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm i_3 = NULL,w_3 = NULL;
  i_3 = t;
  {
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_18 = ATgetArgument(t, 0);
            w_3 = ATgetArgument(t, 1);
            {
              ATerm m_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_18);
        {
          ATerm n_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_2 = NULL,l_2 = NULL,m_2 = NULL;
              t = w_3;
              {
                ATerm p_18 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_18;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              j_2 = t;
              t = term_q_18;
              l_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, j_2), term_r_18);
              m_2 = t;
              t = SSL_printnl(l_2, m_2);
              t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATempty, j_2), term_r_18));
              LocalPopChoice(o_18);
            }
          else
            {
              t = n_18;
              t = i_3;
            }
        }
      }
    else
      {
        t = j_18;
        t = i_3;
      }
  }
  t = i_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm h_64 (ATerm), ATerm t)
{
  ATerm e_4 = NULL,g_4 = NULL;
  g_4 = t;
  t = fork_0_0(t);
  e_4 = t;
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = g_4;
        t = h_64(t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = SSL_waitpid(e_4);
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
              ATerm w_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = g_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm t_84 (ATerm), ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL;
  m_4 = t;
  t = t_84(t);
  t = xtc_find_0_0(t);
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_4, m_4);
  {
    static ATerm s_0 (ATerm t)
    {
      ATerm n_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, l_4, m_4);
      t = e_6(l_4, m_4, t);
      t = term_x_18;
      n_4 = t;
      t = SSL_exit(n_4);
      return(t);
    }
    t = fork_and_wait_1_0(s_0, t);
  }
  t = m_4;
  return(t);
}
ATerm at_end_1_0 (ATerm y_70 (ATerm), ATerm t)
{
  static ATerm a_6 (ATerm t)
  {
    ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
    r_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_5 = ATgetFirst((ATermList) t);
        q_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_2 = NULL,u_2 = NULL,n_1 = NULL;
          t = SSLgetAnnotations(r_5);
          r_2 = t;
          t = q_5;
          t = a_6(t);
          u_2 = t;
          t = (ATerm) ATinsert(CheckATermList(u_2), p_5);
          n_1 = t;
          t = SSLsetAnnotations(n_1, r_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_5;
        t = y_70(t);
      }
    return(t);
  }
  t = a_6(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_4 = NULL,u_4 = NULL,w_4 = NULL;
  p_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_4;
    }
  else
    {
      static ATerm u_0 (ATerm t)
      {
        t = not_null(w_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_4 = ATgetFirst((ATermList) t);
          if(((w_4 != NULL) && (w_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_4;
      t = at_end_1_0(u_0, t);
    }
  return(t);
}
static ATerm m_7 (ATerm v_6, ATerm t)
{
  ATerm y_6 = NULL;
  t = SSL_explode_term(v_6);
  if(match_cons(t, sym__2))
    {
      ATerm y_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL;
  f_7 = t;
  if(match_cons(t, sym__2))
    {
      d_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
      {
        ATerm z_18 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_0 (ATerm t)
            {
              t = e_7;
              return(t);
            }
            t = d_7;
            t = at_end_1_0(x_0, t);
            LocalPopChoice(b_19);
          }
        else
          {
            t = z_18;
            t = m_7(f_7, t);
          }
      }
    }
  else
    {
      t = m_7(f_7, t);
    }
  return(t);
}
static ATerm g_6 (ATerm i_80 (ATerm), ATerm s_34, ATerm q_34, ATerm t)
{
  ATerm n_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,x_7 = NULL,z_7 = NULL;
  u_7 = t;
  t = i_80(t);
  n_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_7, s_34, q_34);
  t = x_6(n_7, s_34, q_34, t);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL;
        t = term_f_19;
        c_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_7, term_f_19);
        t = w_6(n_7, c_8, t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_7 = ATgetFirst((ATermList) t);
      t_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_f_19;
  x_7 = t;
  t = (ATerm) ATinsert(CheckATermList(t_7), (ATerm) ATinsert(CheckATermList(s_7), s_34));
  z_7 = t;
  t = SSL_table_put(n_7, x_7, z_7);
  t = u_7;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,q_8 = NULL,r_8 = NULL,t_8 = NULL;
  t = P__tmpdir_0_0(t);
  k_8 = t;
  t = term_h_19;
  t_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_8, term_h_19);
  t = q_6(k_8, t_8, t);
  q_8 = t;
  t = term_i_19;
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_8, term_i_19);
  t = q_6(q_8, r_8, t);
  l_8 = t;
  t = SSL_mkstemp(l_8);
  if(match_cons(t, sym__2))
    {
      g_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_j_19;
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_8, term_j_19);
  t = g_6(y_0, g_8, j_8, t);
  t = SSL_close(f_8);
  t = g_8;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  v_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_8 = NULL,y_8 = NULL;
      t = v_8;
      t = xtc_new_file_0_0(t);
      x_8 = t;
      t = v_0(t);
      y_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_8, (ATerm) ATinsert(ATinsert(ATempty, x_8), term_l_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_8);
    }
  else
    {
      ATerm d_9 = NULL,e_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_8;
      t = xtc_new_file_0_0(t);
      d_9 = t;
      t = v_0(t);
      e_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_9), term_l_19), w_8), term_m_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_9);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_9 = NULL;
  static ATerm z_0 (ATerm t)
  {
    ATerm k_9 = NULL,m_9 = NULL;
    k_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_9), k_9);
    t = w_6(not_null(f_9), k_9, t);
    m_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_9, m_9);
    return(t);
  }
  if(((f_9 != NULL) && (f_9 != t)))
    _fail(t);
  else
    f_9 = t;
  t = SSL_table_keys(f_9);
  t = map_1_0(z_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm p_9 = NULL;
  p_9 = t;
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_9 = NULL;
        t = term_o_9;
        t = get_config_0_0(t);
        s_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_9, term_e_17);
        t = geq_0_0(t);
        t = p_9;
        t = v_81(t);
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = p_9;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  ATerm w_9 = NULL;
  w_9 = t;
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_9 = NULL;
        t = term_o_9;
        t = get_config_0_0(t);
        z_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_9, term_w_12);
        t = geq_0_0(t);
        t = w_9;
        t = u_81(t);
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = w_9;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_81 (ATerm), ATerm t)
{
  ATerm d_10 = NULL;
  d_10 = t;
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_10 = NULL;
        t = term_o_9;
        t = get_config_0_0(t);
        g_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_10, term_b_11);
        t = geq_0_0(t);
        t = d_10;
        t = w_81(t);
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        t = d_10;
      }
  }
  return(t);
}
static ATerm i_6 (ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  t = q_74(t);
  {
    static ATerm a_1 (ATerm t)
    {
      ATerm l_10 = NULL;
      l_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, l_10);
      t = p_74(t);
      return(t);
    }
    t = fetch_1_0(a_1, t);
  }
  t = p_24;
  return(t);
}
static ATerm j_6 (ATerm m_74 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  static ATerm p_11 (ATerm t)
  {
    ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
    h_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_11 = ATgetFirst((ATermList) t);
            j_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_20 = t;
          int c_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_11;
              {
                static ATerm h_1 (ATerm t)
                {
                  t = l_24;
                  return(t);
                }
                t = i_6(m_74, h_1, i_11, j_11, t);
              }
              t = p_11(t);
              LocalPopChoice(c_20);
            }
          else
            {
              t = b_20;
              {
                ATerm k_3 = NULL,p_3 = NULL,p_1 = NULL;
                t = SSLgetAnnotations(h_11);
                k_3 = t;
                t = j_11;
                t = p_11(t);
                p_3 = t;
                t = (ATerm) ATinsert(CheckATermList(p_3), i_11);
                p_1 = t;
                t = SSLsetAnnotations(p_1, k_3);
              }
            }
        }
      }
    return(t);
  }
  t = m_24;
  t = p_11(t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm f_12 = NULL;
  if(match_cons(t, sym__2))
    {
      f_12 = ATgetArgument(t, 0);
      if((f_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_6 (ATerm c_37, ATerm d_37, ATerm e_37, ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_37, d_37);
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_20 = ATgetArgument(t, 0);
            ATerm g_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_37, d_37);
        t = w_6(c_37, d_37, t);
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = (ATerm) ATempty;
      }
  }
  z_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_11, e_37);
  t = j_6(i_1, z_11, e_37, t);
  y_11 = t;
  t = SSL_table_put(c_37, d_37, y_11);
  t = x_11;
  return(t);
}
static ATerm l_6 (ATerm y_81 (ATerm), ATerm m_37, ATerm l_37, ATerm t)
{
  static ATerm k_1 (ATerm t)
  {
    ATerm h_12 = NULL,i_12 = NULL;
    if(match_cons(t, sym__2))
      {
        h_12 = ATgetArgument(t, 0);
        i_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_37, h_12, i_12);
    t = y_81(t);
    return(t);
  }
  t = l_37;
  t = map_1_0(k_1, t);
  return(t);
}
static ATerm p_6 (ATerm n_39, ATerm o_39, ATerm t)
{
  t = SSL_access(n_39, o_39);
  return(t);
}
static ATerm c_13 (ATerm t_12, ATerm t)
{
  t = SSL_fclose(t_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  a_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_12 = ATgetArgument(t, 0);
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_12);
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            t = c_13(a_13, t);
          }
      }
    }
  else
    {
      t = c_13(a_13, t);
    }
  return(t);
}
static ATerm m_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm n_6 (ATerm v_39, ATerm w_39, ATerm t)
{
  ATerm g_13 = NULL;
  t = SSL_fopen(v_39, w_39);
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_13 = NULL;
  t = SSL_stdin_stream();
  k_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_13 = NULL;
  t = SSL_stdout_stream();
  l_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_13 = NULL;
  t = SSL_stderr_stream();
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_13);
  return(t);
}
static ATerm p_15 (ATerm y_13, ATerm t)
{
  ATerm z_13 = NULL;
  t = SSL_explode_term(y_13);
  if(match_cons(t, sym__2))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_20 = ATgetArgument(t, 1);
        if(((ATgetType(q_20) == AT_LIST) && !(ATisEmpty(q_20))))
          {
            z_13 = ATgetFirst((ATermList) q_20);
            {
              ATerm s_20 = (ATerm) ATgetNext((ATermList) q_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_13;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_13;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm q_15 (ATerm e_14, ATerm i_14, ATerm j_14, ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL,s_14 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(j_14);
  m_14 = t;
  t = e_14;
  if(match_cons(t, sym_Path_1))
    {
      s_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_14, i_14);
  t_1 = t;
  t = SSLsetAnnotations(t_1, m_14);
  if(match_cons(t, sym__2))
    {
      k_14 = ATgetArgument(t, 0);
      l_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(k_14, l_14, t);
  return(t);
}
static ATerm r_15 (ATerm u_14, ATerm v_14, ATerm w_14, ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,e_15 = NULL,u_1 = NULL;
  t = SSLgetAnnotations(w_14);
  z_14 = t;
  t = SSL_is_string(u_14);
  e_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_15, v_14);
  u_1 = t;
  t = SSLsetAnnotations(u_1, z_14);
  if(match_cons(t, sym__2))
    {
      x_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(x_14, y_14, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
  j_15 = t;
  if(match_cons(t, sym__2))
    {
      k_15 = ATgetArgument(t, 0);
      l_15 = ATgetArgument(t, 1);
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_15(j_15, t);
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            {
              ATerm y_20 = t;
              int z_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_15(k_15, l_15, j_15, t);
                  LocalPopChoice(z_20);
                }
              else
                {
                  t = y_20;
                  t = r_15(k_15, l_15, j_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_15(j_15, t);
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_a_21;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_15 = NULL,v_15 = NULL,x_15 = NULL;
  ATerm b_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_16 = NULL;
      e_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_16, term_j_21);
      t = o_6(t);
      LocalPopChoice(e_21);
    }
  else
    {
      t = b_21;
      t = debug_1_0(l_1, t);
      _fail(t);
    }
  v_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(x_15, t);
  t_15 = t;
  t = v_15;
  t = fclose_0_0(t);
  t = t_15;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_k_21;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_16 = NULL,i_16 = NULL;
      h_16 = t;
      t = (ATerm) ATinsert(ATempty, term_o_21);
      i_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_16, (ATerm) ATinsert(ATempty, term_o_21));
      t = p_6(h_16, i_16, t);
      LocalPopChoice(n_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = m_21;
      {
        ATerm p_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_21 = t;
            if((PushChoice() == 0))
              {
                ATerm j_16 = NULL,k_16 = NULL;
                j_16 = t;
                t = (ATerm) ATinsert(ATempty, term_v_9);
                k_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_16, (ATerm) ATinsert(ATempty, term_v_9));
                t = p_6(j_16, k_16, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_21;
              }
            t = debug_1_0(m_1, t);
            LocalPopChoice(q_21);
          }
        else
          {
            t = p_21;
            t = debug_1_0(o_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_t_21;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_u_21;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  g_17 = t;
  t = term_q_18;
  h_17 = t;
  t = (ATerm) ATinsert(ATempty, term_v_21);
  i_17 = t;
  t = SSL_printnl(h_17, i_17);
  t = g_17;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,q_17 = NULL;
  if(match_cons(t, sym__3))
    {
      l_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
      q_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_6(l_17, m_17, q_17, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm s_17 = NULL,w_17 = NULL,x_17 = NULL;
  s_17 = t;
  t = term_q_18;
  w_17 = t;
  t = (ATerm) ATinsert(ATempty, term_w_21);
  x_17 = t;
  t = SSL_printnl(w_17, x_17);
  t = s_17;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
  y_17 = t;
  t = term_q_18;
  z_17 = t;
  t = (ATerm) ATinsert(ATempty, term_v_21);
  a_18 = t;
  t = SSL_printnl(z_17, a_18);
  t = y_17;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm l_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,s_16 = NULL,t_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
  l_16 = t;
  t = if_verbose5_1_0(s_1, t);
  {
    ATerm x_21 = t;
    if((PushChoice() == 0))
      {
        ATerm c_17 = NULL,d_17 = NULL;
        t = term_y_21;
        c_17 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, l_16);
        d_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_21, (ATerm) ATmakeAppl(sym_Imported_1, l_16));
        t = w_6(c_17, d_17, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_21;
      }
  }
  p_16 = t;
  t = term_y_21;
  z_16 = t;
  t = term_z_21;
  a_17 = t;
  t = (ATerm) ATinsert(ATempty, l_16);
  b_17 = t;
  t = SSL_table_put(z_16, a_17, b_17);
  t = p_16;
  t = if_verbose4_1_0(w_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(y_1, t);
  o_16 = t;
  t = term_y_21;
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_21, o_16);
  t = l_6(z_1, y_16, o_16, t);
  t = if_verbose6_1_0(a_2, t);
  t = term_y_21;
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, l_16);
  s_16 = t;
  t = (ATerm) ATempty;
  t_16 = t;
  t = SSL_table_put(q_16, s_16, t_16);
  t = (ATerm) ATmakeAppl(sym__3, term_y_21, (ATerm)ATmakeAppl(sym_Imported_1, l_16), (ATerm) ATempty);
  t = if_verbose4_1_0(b_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm e_78 (ATerm), ATerm t)
{
  ATerm a_19 = NULL,c_19 = NULL,k_19 = NULL;
  a_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_19 = ATgetFirst((ATermList) t);
          k_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_4 = NULL,c_5 = NULL,d_5 = NULL,c_2 = NULL;
            t = SSLgetAnnotations(a_19);
            v_4 = t;
            t = c_19;
            t = e_78(t);
            c_5 = t;
            t = k_19;
            t = filter_1_0(e_78, t);
            d_5 = t;
            t = (ATerm) ATinsert(CheckATermList(d_5), c_5);
            c_2 = t;
            t = SSLsetAnnotations(c_2, v_4);
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            t = k_19;
            t = filter_1_0(e_78, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm t)
{
  static ATerm n_19 (ATerm t)
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_68(t);
        t = n_19(t);
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        t = o_68(t);
      }
    return(t);
  }
  t = n_19(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_22;
      t = get_config_0_0(t);
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_19 = NULL;
            t = term_m_22;
            o_19 = t;
            t = SSL_getenv(o_19);
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_n_22;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm x_19 = NULL,a_20 = NULL;
  t = term_y_21;
  x_19 = t;
  t = term_o_22;
  a_20 = t;
  t = term_p_22;
  t = w_6(x_19, a_20, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm q_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_22;
      }
  }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm t_19 = NULL;
  t = if_verbose5_1_0(d_2, t);
  t_19 = t;
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_19 = NULL,v_19 = NULL;
        t = term_y_21;
        u_19 = t;
        t = term_z_21;
        v_19 = t;
        t = term_w_22;
        t = w_6(u_19, v_19, t);
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        {
          ATerm w_19 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          w_19 = t;
          t = repeat_2_0(h_2, _id, t);
          t = w_19;
        }
      }
  }
  t = t_19;
  t = if_verbose5_1_0(k_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_x_22;
  return(t);
}
static ATerm d_21 (ATerm h_20, ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  t = term_y_21;
  l_20 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, h_20);
  m_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_21, (ATerm) ATmakeAppl(sym_Tool_1, h_20));
  t = w_6(l_20, m_20, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_22 = ATgetFirst((ATermList) t);
      if(match_cons(y_22, sym__2))
        {
          ATerm c_23 = ATgetArgument(y_22, 0);
          k_20 = ATgetArgument(y_22, 1);
        }
      else
        _fail(t);
      {
        ATerm b_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_20;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = debug_1_0(t_2, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_x_22;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_y_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(w_2, t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_d_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm e_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_20 = NULL,p_20 = NULL,r_20 = NULL;
      t = if_verbose5_1_0(o_2, t);
      t = xtc_load_0_0(t);
      r_20 = t;
      if(match_cons(t, sym__2))
        {
          o_20 = ATgetArgument(t, 0);
          p_20 = ATgetArgument(t, 1);
          {
            ATerm i_23 = t;
            int j_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
                t = term_y_21;
                w_20 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, o_20);
                x_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_y_21, (ATerm) ATmakeAppl(sym_Tool_1, o_20));
                t = w_6(w_20, x_20, t);
                {
                  static ATerm q_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((p_20 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((v_20 != NULL) && (v_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(q_2, t);
                }
                t = not_null(v_20);
                LocalPopChoice(j_23);
              }
            else
              {
                t = i_23;
                t = d_21(r_20, t);
              }
          }
        }
      else
        {
          t = d_21(r_20, t);
        }
      t = if_verbose5_1_0(s_2, t);
      LocalPopChoice(h_23);
    }
  else
    {
      t = e_23;
      {
        ATerm c_21 = NULL,v_5 = NULL,w_5 = NULL;
        c_21 = t;
        t = term_q_18;
        v_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_23), c_21), term_k_23);
        w_5 = t;
        t = SSL_printnl(v_5, w_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_23), c_21), term_k_23);
        t = if_verbose5_1_0(v_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm q_6 (ATerm z_31, ATerm a_32, ATerm t)
{
  t = SSL_strcat(z_31, a_32);
  return(t);
}
ATerm debug_1_0 (ATerm q_65 (ATerm), ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
  f_21 = t;
  t = q_65(t);
  g_21 = t;
  t = term_q_18;
  h_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_21), g_21);
  i_21 = t;
  t = SSL_printnl(h_21, i_21);
  t = f_21;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_o_23;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_21 = NULL;
      r_21 = t;
      t = SSL_is_string(r_21);
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_2, t);
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            {
              ATerm e_22 = NULL,h_22 = NULL,j_22 = NULL;
              e_22 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_22 = ATgetArgument(t, 0);
                  t = h_22;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_22 = ATgetArgument(t, 0);
                      t = h_22;
                      {
                        ATerm t_23 = t;
                        int u_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(u_23);
                          }
                        else
                          {
                            t = t_23;
                            t = debug_1_0(c_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_22 = NULL,s_22 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_22 = ATgetArgument(t, 0);
                          j_22 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_22;
                      t = eval_config_0_0(t);
                      r_22 = t;
                      t = j_22;
                      t = eval_config_0_0(t);
                      s_22 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_22, s_22);
                      t = q_6(r_22, s_22, t);
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
  ATerm z_22 = NULL,a_23 = NULL;
  z_22 = t;
  t = term_v_23;
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_23, z_22);
  t = w_6(a_23, z_22, t);
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_23 = NULL,g_23 = NULL;
        t = eval_config_0_0(t);
        f_23 = t;
        t = term_v_23;
        g_23 = t;
        t = SSL_table_put(g_23, z_22, f_23);
        t = f_23;
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
      }
  }
  return(t);
}
static ATerm r_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL;
  j_24 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_7 = NULL;
        t = j_24;
        t = r_0(t);
        p_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = p_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = p_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, k_24, p_7);
        t = r_6(k_24, p_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_24);
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        {
          ATerm a_24 = t;
          int b_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_8 = NULL;
              t = j_24;
              t = r_0(t);
              b_8 = t;
              {
                ATerm c_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm d_8 = NULL;
                    d_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = d_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = d_8;
                          }
                        else
                          {
                            t = d_8;
                            if((k_24 != t))
                              {
                                _fail(t);
                              }
                            t = d_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_24;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, k_24, b_8);
              t = r_6(k_24, b_8, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_24);
              LocalPopChoice(b_24);
            }
          else
            {
              t = a_24;
              t = j_24;
              t = r_0(t);
              if((k_24 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_24);
            }
        }
      }
  }
  return(t);
}
static ATerm s_6 (ATerm k_36, ATerm l_36, ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL;
  z_24 = t;
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
        t = w_6(k_36, l_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_24 = ATgetFirst((ATermList) t);
            y_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(e_24);
        t = SSL_table_put(k_36, l_36, y_24);
        t = (ATerm) ATmakeAppl(sym__3, k_36, l_36, y_24);
      }
    else
      {
        t = d_24;
        t = SSL_table_remove(k_36, l_36);
        t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
      }
  }
  t = z_24;
  return(t);
}
ATerm end_scope_1_0 (ATerm f_80 (ATerm), ATerm t)
{
  ATerm a_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  e_25 = t;
  t = f_80(t);
  d_25 = t;
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_25 = NULL;
        t = term_f_19;
        g_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_25, term_f_19);
        t = w_6(d_25, g_25, t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_25 = ATgetFirst((ATermList) t);
      a_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_f_19;
  f_25 = t;
  t = SSL_table_put(d_25, f_25, a_25);
  t = c_25;
  {
    static ATerm f_3 (ATerm t)
    {
      ATerm h_25 = NULL;
      h_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_25, h_25);
      t = s_6(d_25, h_25, t);
      return(t);
    }
    t = map_1_0(f_3, t);
  }
  t = e_25;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_81 (ATerm), ATerm g_81 (ATerm), ATerm t)
{
  ATerm i_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_81(t);
      t = g_81(t);
      LocalPopChoice(n_24);
    }
  else
    {
      t = i_24;
      t = g_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  k_25 = t;
  t = e_80(t);
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_25, term_f_19);
  {
    ATerm o_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm s_24 = ATgetArgument(t, 0);
            ATerm t_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_19;
        t_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_25, term_f_19);
        t = w_6(j_25, t_25, t);
        LocalPopChoice(r_24);
      }
    else
      {
        t = o_24;
        t = (ATerm) ATempty;
      }
  }
  l_25 = t;
  t = term_f_19;
  m_25 = t;
  t = (ATerm) ATinsert(CheckATermList(l_25), (ATerm) ATempty);
  n_25 = t;
  t = SSL_table_put(j_25, m_25, n_25);
  t = k_25;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_g_19;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm e_26 = NULL;
  e_26 = t;
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(e_26);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        t = e_26;
      }
  }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  ATerm y_25 = NULL;
  static ATerm h_3 (ATerm t)
  {
    ATerm z_25 = NULL;
    z_25 = t;
    {
      ATerm w_24 = t;
      int x_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_26 = NULL,b_26 = NULL;
          t = term_g_19;
          a_26 = t;
          t = term_f_19;
          b_26 = t;
          t = term_b_25;
          t = w_6(a_26, b_26, t);
          LocalPopChoice(x_24);
        }
      else
        {
          t = w_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_25 != NULL) && (y_25 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_25 = ATgetFirst((ATermList) t);
        {
          ATerm i_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = y_25;
    t = map_1_0(j_3, t);
    t = z_25;
    t = end_scope_1_0(m_3, t);
    return(t);
  }
  t = begin_scope_1_0(g_3, t);
  t = restore_always_2_0(f_84, h_3, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_19;
      t = get_config_0_0(t);
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      t = term_q_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  static ATerm o_3 (ATerm t)
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_26 = NULL;
        t = term_m_19;
        t = get_config_0_0(t);
        h_26 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_26);
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        t = term_u_9;
      }
    t = g_84(t);
    t = copy_to_1_0(q_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(o_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,t_26 = NULL;
  j_26 = t;
  t = term_j_19;
  t = whoami_0_0(t);
  k_26 = t;
  t = term_q_18;
  m_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_25), k_26), term_u_25);
  t_26 = t;
  t = SSL_printnl(m_26, t_26);
  t = term_t_9;
  l_26 = t;
  t = SSL_exit(l_26);
  t = j_26;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm v_26 = NULL;
  v_26 = t;
  if(match_string(t, "-k"))
    {
      t = v_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_26;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm w_26 = NULL,y_26 = NULL,z_26 = NULL;
  w_26 = t;
  t = SSL_string_to_int(w_26);
  y_26 = t;
  t = term_w_25;
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_25, y_26);
  t = z_6(z_26, y_26, t);
  t = w_26;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, s_3, u_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm b_27 = NULL;
  b_27 = t;
  if(match_string(t, "-S"))
    {
      t = b_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_27;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL;
  t = term_o_9;
  d_27 = t;
  t = term_c_26;
  e_27 = t;
  t = term_d_26;
  t = z_6(d_27, e_27, t);
  t = term_f_26;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_g_26;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
  h_27 = t;
  t = SSL_string_to_int(h_27);
  i_27 = t;
  t = term_o_9;
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_9, i_27);
  t = z_6(j_27, i_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_27);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_i_26;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL;
  t = term_n_26;
  k_27 = t;
  t = term_j_19;
  l_27 = t;
  t = term_o_26;
  t = z_6(k_27, l_27, t);
  t = term_p_26;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_q_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_3, x_3, y_3, t);
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
      {
        ATerm u_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_3, a_4, b_4, t);
            LocalPopChoice(x_26);
          }
        else
          {
            t = u_26;
            t = Option_3_0(c_4, d_4, f_4, t);
          }
      }
    }
  return(t);
}
static ATerm z_6 (ATerm f_38, ATerm g_38, ATerm t)
{
  ATerm m_27 = NULL;
  t = term_v_23;
  m_27 = t;
  t = SSL_table_put(m_27, f_38, g_38);
  t = (ATerm) ATmakeAppl(sym__3, term_v_23, f_38, g_38);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
      t = term_j_19;
      t = i_0(t);
      s_27 = t;
      t = term_a_27;
      t_27 = t;
      t = term_c_27;
      u_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_27, term_c_27, s_27);
      t = x_6(t_27, u_27, s_27, t);
      _fail(t);
    }
  else
    {
      ATerm x_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_27 = ATgetFirst((ATermList) t);
          r_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_27;
      t = d_0(t);
      t = term_j_19;
      t = g_0(t);
      x_27 = t;
      t = (ATerm) ATinsert(CheckATermList(r_27), x_27);
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm z_27 = NULL;
  z_27 = t;
  if(match_string(t, "-o"))
    {
      t = z_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_27;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm c_28 = NULL,f_28 = NULL;
  c_28 = t;
  t = term_l_19;
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_19, c_28);
  t = z_6(f_28, c_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_28);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, j_4, t);
  return(t);
}
static ATerm x_6 (ATerm f_36, ATerm g_36, ATerm e_36, ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,m_28 = NULL;
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_36, g_36);
  {
    ATerm g_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_27 = ATgetArgument(t, 0);
            ATerm p_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_36, g_36);
        t = w_6(f_36, g_36, t);
        LocalPopChoice(n_27);
      }
    else
      {
        t = g_27;
        t = (ATerm) ATempty;
      }
  }
  i_28 = t;
  t = (ATerm) ATinsert(CheckATermList(i_28), e_36);
  m_28 = t;
  t = SSL_table_put(f_36, g_36, m_28);
  t = h_28;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,h_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
      t = term_j_19;
      t = p_0(t);
      l_29 = t;
      t = term_a_27;
      m_29 = t;
      t = term_c_27;
      n_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_27, term_c_27, l_29);
      t = x_6(m_29, n_29, l_29, t);
      _fail(t);
    }
  else
    {
      ATerm t_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_29 = ATgetFirst((ATermList) t);
          c_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_29 = ATgetFirst((ATermList) t);
          h_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_29;
      t = n_0(t);
      t = d_29;
      t = o_0(t);
      t_29 = t;
      t = (ATerm) ATinsert(CheckATermList(h_29), t_29);
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm v_29 = NULL;
  v_29 = t;
  if(match_string(t, "-i"))
    {
      t = v_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_29;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL;
  w_29 = t;
  t = term_m_19;
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_19, w_29);
  t = z_6(x_29, w_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_29);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_v_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, o_4, q_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm b_30 = NULL;
  b_30 = t;
  if(match_string(t, "-a"))
    {
      t = b_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = b_30;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  c_30 = t;
  t = term_w_27;
  d_30 = t;
  t = term_j_19;
  e_30 = t;
  t = term_y_27;
  t = z_6(d_30, e_30, t);
  t = c_30;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_a_28;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--annotations", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm h_30 = NULL,l_30 = NULL,n_30 = NULL;
  h_30 = t;
  t = term_b_28;
  l_30 = t;
  t = term_j_19;
  n_30 = t;
  t = term_d_28;
  t = z_6(l_30, n_30, t);
  t = h_30;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm g_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_4, s_4, t_4, t);
      LocalPopChoice(j_28);
    }
  else
    {
      t = g_28;
      t = Option_3_0(x_4, y_4, a_5, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_19;
  t = whoami_0_0(t);
  o_30 = t;
  t = term_q_18;
  q_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_28), o_30);
  r_30 = t;
  t = SSL_printnl(q_30, r_30);
  t = term_t_9;
  p_30 = t;
  t = SSL_exit(p_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_28;
  t = get_config_0_0(t);
  return(t);
}
static ATerm t_6 (ATerm e_33, ATerm f_33, ATerm t)
{
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_33, f_33);
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
      t = SSL_addr(e_33, f_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_30;
      t = a_77(t);
    }
  else
    {
      ATerm y_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_30 = ATgetFirst((ATermList) t);
          v_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_30;
      t = foldr_2_0(a_77, b_77, t);
      y_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_30, y_30);
      t = b_77(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_c_26;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      z_8 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(z_8, a_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_31 = NULL,o_8 = NULL,p_8 = NULL;
  t = times_0_0(t);
  p_8 = t;
  t = SSL_explode_term(p_8);
  if(match_cons(t, sym__2))
    {
      ATerm p_28 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8;
  t = foldr_2_0(b_5, f_5, t);
  b_31 = t;
  t = SSL_TicksToSeconds(b_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL;
  m_31 = t;
  if(match_cons(t, sym__2))
    {
      n_31 = ATgetArgument(t, 0);
      o_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_31;
        if((n_31 != t))
          {
            _fail(t);
          }
        t = m_31;
        LocalPopChoice(r_28);
      }
    else
      {
        t = q_28;
        t = (ATerm) ATmakeAppl(sym__2, n_31, o_31);
        {
          ATerm s_28 = t;
          int t_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_31, o_31);
              LocalPopChoice(t_28);
            }
          else
            {
              t = s_28;
              t = SSL_gtr(n_31, o_31);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_31, o_31);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_81 (ATerm), ATerm t)
{
  ATerm s_31 = NULL;
  s_31 = t;
  {
    ATerm u_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_31 = NULL;
        t = term_o_9;
        t = get_config_0_0(t);
        u_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_31, term_t_9);
        t = geq_0_0(t);
        t = s_31;
        t = r_81(t);
        LocalPopChoice(v_28);
      }
    else
      {
        t = u_28;
        t = s_31;
      }
  }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,b_32 = NULL,c_32 = NULL;
  t = run_time_0_0(t);
  w_31 = t;
  t = term_j_19;
  t = whoami_0_0(t);
  x_31 = t;
  t = term_q_18;
  b_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_28), w_31), term_e_10), x_31);
  c_32 = t;
  t = SSL_printnl(b_32, c_32);
  t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_28), w_31), term_e_10), x_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_26;
  d_32 = t;
  t = SSL_exit(d_32);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL;
  m_32 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_32;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_32 = ATgetArgument(t, 0);
          {
            ATerm y_9 = NULL,e_2 = NULL;
            t = SSLgetAnnotations(m_32);
            y_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_32);
            e_2 = t;
            t = SSLsetAnnotations(e_2, y_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_32;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_28;
      t = get_config_0_0(t);
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      t = fetch_1_0(i_5, t);
    }
  t = v_85(t);
  return(t);
}
ATerm map_1_0 (ATerm i_70 (ATerm), ATerm t)
{
  static ATerm c_33 (ATerm t)
  {
    ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
    z_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_32;
      }
    else
      {
        ATerm n_10 = NULL,s_10 = NULL,t_10 = NULL,g_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_33 = ATgetFirst((ATermList) t);
            b_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_32);
        n_10 = t;
        t = a_33;
        t = i_70(t);
        s_10 = t;
        t = b_33;
        t = c_33(t);
        t_10 = t;
        t = (ATerm) ATinsert(CheckATermList(t_10), s_10);
        g_2 = t;
        t = SSLsetAnnotations(g_2, n_10);
      }
    return(t);
  }
  t = c_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_33 = ATgetFirst((ATermList) t);
      i_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_33 = NULL,p_33 = NULL;
        static ATerm j_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_33)), not_null(p_33));
          return(t);
        }
        t = i_33;
        t = l_0(t);
        if(((o_33 != NULL) && (o_33 != t)))
          _fail(t);
        else
          o_33 = t;
        t = h_33;
        t = k_0(t);
        if(((p_33 != NULL) && (p_33 != t)))
          _fail(t);
        else
          p_33 = t;
        t = i_33;
        t = reverse_acc_2_0(k_0, j_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_19;
      t = l_0(t);
    }
  return(t);
}
static ATerm w_6 (ATerm w_37, ATerm x_37, ATerm t)
{
  t = SSL_table_get(w_37, x_37);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,b_3 = NULL;
  v_33 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_33);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_33);
  b_3 = t;
  t = SSLsetAnnotations(b_3, t_33);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm x_33 = NULL;
  x_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_33), term_a_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL;
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_28;
      t = get_config_0_0(t);
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      t = fetch_1_0(n_5, t);
    }
  t = term_g_29;
  t = echo_0_0(t);
  t = term_a_27;
  r_33 = t;
  t = term_c_27;
  s_33 = t;
  t = term_i_29;
  t = w_6(r_33, s_33, t);
  t = reverse_acc_2_0(_id, s_5, t);
  t = map_1_0(t_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_70 (ATerm), ATerm t)
{
  static ATerm f_35 (ATerm t)
  {
    ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
    c_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_35 = ATgetFirst((ATermList) t);
        e_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_29 = t;
      int k_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_11 = NULL,r_11 = NULL,l_3 = NULL;
          t = SSLgetAnnotations(c_35);
          k_11 = t;
          t = d_35;
          t = s_70(t);
          r_11 = t;
          t = (ATerm) ATinsert(CheckATermList(e_35), r_11);
          l_3 = t;
          t = SSLsetAnnotations(l_3, k_11);
          LocalPopChoice(k_29);
        }
      else
        {
          t = j_29;
          {
            ATerm g_12 = NULL,l_12 = NULL,n_3 = NULL;
            t = SSLgetAnnotations(c_35);
            g_12 = t;
            t = e_35;
            t = f_35(t);
            l_12 = t;
            t = (ATerm) ATinsert(CheckATermList(l_12), d_35);
            n_3 = t;
            t = SSLsetAnnotations(n_3, g_12);
          }
        }
    }
    return(t);
  }
  t = f_35(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
  j_35 = t;
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_29 = ATgetFirst((ATermList) t);
                ATerm r_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_35;
          }
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
        t = (ATerm) ATinsert(ATempty, j_35);
      }
  }
  k_35 = t;
  t = term_q_25;
  l_35 = t;
  t = SSL_printnl(l_35, k_35);
  t = j_35;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_28;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  t = term_s_29;
  p_35 = t;
  t = term_j_19;
  q_35 = t;
  t = term_u_29;
  t = z_6(p_35, q_35, t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_y_29;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL;
  t = term_s_29;
  t_35 = t;
  t = term_j_19;
  u_35 = t;
  t = term_u_29;
  t = z_6(t_35, u_35, t);
  t = term_z_29;
  r_35 = t;
  t = term_j_19;
  s_35 = t;
  t = term_a_30;
  t = z_6(r_35, s_35, t);
  t = term_f_30;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, x_5, y_5, t);
      LocalPopChoice(j_30);
    }
  else
    {
      t = i_30;
      t = Option_3_0(z_5, h_6, u_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_57 (ATerm), ATerm j_57 (ATerm), ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,y_35 = NULL,z_35 = NULL,h_36 = NULL,i_36 = NULL,t_3 = NULL;
  i_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_35 = ATgetFirst((ATermList) t);
      y_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_36);
  v_35 = t;
  t = w_35;
  t = i_57(t);
  z_35 = t;
  t = y_35;
  t = j_57(t);
  h_36 = t;
  t = (ATerm) ATinsert(CheckATermList(h_36), z_35);
  t_3 = t;
  t = SSLsetAnnotations(t_3, v_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_87 (ATerm), ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,v_36 = NULL,w_36 = NULL,e_5 = NULL;
  q_36 = t;
  {
    ATerm k_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_30;
        t = t_87(t);
        LocalPopChoice(m_30);
      }
    else
      {
        t = k_30;
      }
  }
  t = q_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_36 = ATgetFirst((ATermList) t);
      t_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_36);
  r_36 = t;
  t = term_l_28;
  w_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_28, s_36);
  t = z_6(w_36, s_36, t);
  t = t_36;
  {
    static ATerm p_37 (ATerm t)
    {
      ATerm w_30 = t;
      int x_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_36 = NULL;
              z_36 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_36;
              LocalPopChoice(a_31);
            }
          else
            {
              t = z_30;
              t = t_87(t);
              t = Cons_2_0(_id, p_37, t);
            }
          LocalPopChoice(x_30);
        }
      else
        {
          t = w_30;
          {
            ATerm h_37 = NULL,i_37 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_37 = ATgetFirst((ATermList) t);
                i_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_37), (ATerm) ATmakeAppl(sym_Undefined_1, h_37));
          }
        }
      return(t);
    }
    t = p_37(t);
  }
  v_36 = t;
  t = (ATerm) ATinsert(CheckATermList(v_36), (ATerm) ATmakeAppl(sym_Program_1, s_36));
  e_5 = t;
  t = SSLsetAnnotations(e_5, r_36);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm d_38 = NULL;
  d_38 = t;
  if(match_string(t, "--help"))
    {
      t = d_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_38;
        }
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm e_38 = NULL,h_38 = NULL;
  t = term_z_28;
  e_38 = t;
  t = term_j_19;
  h_38 = t;
  t = term_c_31;
  t = z_6(e_38, h_38, t);
  t = term_d_31;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_e_31;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL;
  y_37 = t;
  t = term_a_27;
  a_38 = t;
  t = term_c_27;
  b_38 = t;
  t = (ATerm) ATempty;
  c_38 = t;
  t = SSL_table_put(a_38, b_38, c_38);
  t = y_37;
  {
    static ATerm a_7 (ATerm t)
    {
      ATerm f_31 = t;
      int g_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_87(t);
          LocalPopChoice(g_31);
        }
      else
        {
          t = f_31;
          {
            ATerm h_31 = t;
            int i_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_7, c_7, g_7, t);
                LocalPopChoice(i_31);
              }
            else
              {
                t = h_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_7, t);
  }
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_38 = NULL;
        t_38 = t;
        {
          ATerm l_31 = t;
          int p_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_13 = NULL;
              t = t_38;
              {
                ATerm q_31 = t;
                int r_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_z_28;
                    t = get_config_0_0(t);
                    LocalPopChoice(r_31);
                  }
                else
                  {
                    t = q_31;
                    t = fetch_1_0(h_7, t);
                  }
              }
              t = t_38;
              t = default_system_usage_0_0(t);
              t = term_c_26;
              d_13 = t;
              t = SSL_exit(d_13);
              LocalPopChoice(p_31);
            }
          else
            {
              t = l_31;
              {
                ATerm i_13 = NULL;
                t = term_s_29;
                t = get_config_0_0(t);
                t = t_38;
                t = default_system_about_0_0(t);
                t = term_c_26;
                i_13 = t;
                t = SSL_exit(i_13);
              }
            }
        }
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        {
          ATerm t_31 = t;
          int v_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
              static ATerm i_7 (ATerm t)
              {
                ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,h_5 = NULL;
                z_38 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_38 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_38);
                x_38 = t;
                t = y_38;
                if(((u_37 != NULL) && (u_37 != t)))
                  _fail(t);
                else
                  u_37 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_38);
                h_5 = t;
                t = SSLsetAnnotations(h_5, x_38);
                return(t);
              }
              t = fetch_1_0(i_7, t);
              t = term_q_18;
              v_38 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_37)), term_y_31);
              w_38 = t;
              t = SSL_printnl(v_38, w_38);
              t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_37)), term_y_31));
              t = default_system_usage_0_0(t);
              t = term_t_9;
              u_38 = t;
              t = SSL_exit(u_38);
              LocalPopChoice(v_31);
            }
          else
            {
              t = t_31;
            }
        }
      }
  }
  v_37 = t;
  t = term_a_27;
  z_37 = t;
  t = SSL_table_destroy(z_37);
  t = v_37;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
  t = parse_options_1_0(x_85, t);
  e_39 = t;
  t = term_e_32;
  h_39 = t;
  t = SSL_table_create(h_39);
  t = term_e_32;
  f_39 = t;
  t = term_f_32;
  g_39 = t;
  t = SSL_table_put(f_39, g_39, e_39);
  t = e_39;
  t = z_85(t);
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_85, t);
        LocalPopChoice(h_32);
      }
    else
      {
        t = g_32;
        {
          ATerm i_32 = t;
          int j_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_86(t);
              t = report_success_0_0(t);
              LocalPopChoice(j_32);
            }
          else
            {
              t = i_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm k_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      LocalPopChoice(n_32);
    }
  else
    {
      t = k_32;
      {
        ATerm o_32 = t;
        int p_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(p_32);
          }
        else
          {
            t = o_32;
            {
              ATerm q_32 = t;
              int r_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(r_32);
                }
              else
                {
                  t = q_32;
                  {
                    ATerm s_32 = t;
                    int t_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(l_7, o_7, q_7, t);
                        LocalPopChoice(t_32);
                      }
                    else
                      {
                        t = s_32;
                        {
                          ATerm u_32 = t;
                          int v_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(v_32);
                            }
                          else
                            {
                              t = u_32;
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
static ATerm k_7 (ATerm t)
{
  t = xtc_io_1_0(r_7, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL;
  t = term_w_32;
  z_39 = t;
  t = term_j_19;
  a_40 = t;
  t = term_x_32;
  t = z_6(z_39, a_40, t);
  t = term_y_32;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_d_33;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm g_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_40 = NULL;
      c_40 = t;
      t = term_w_27;
      t = get_config_0_0(t);
      t = c_40;
      LocalPopChoice(j_33);
    }
  else
    {
      t = g_33;
      {
        ATerm m_33 = t;
        int n_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_40 = NULL,n_40 = NULL;
            n_40 = t;
            if(match_cons(t, sym_FILE_1))
              {
                j_40 = ATgetArgument(t, 0);
                {
                  ATerm p_13 = NULL,k_5 = NULL;
                  t = SSLgetAnnotations(n_40);
                  p_13 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, j_40);
                  k_5 = t;
                  t = SSLsetAnnotations(k_5, p_13);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = n_40;
              }
            LocalPopChoice(n_33);
            t = xtc_transform_file_2_0(v_7, w_7, t);
          }
        else
          {
            t = m_33;
            t = xtc_transform_term_2_0(y_7, a_8, t);
          }
      }
    }
  {
    ATerm q_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_40 = NULL,a_41 = NULL;
        a_41 = t;
        if(match_cons(t, sym_FILE_1))
          {
            z_40 = ATgetArgument(t, 0);
            {
              ATerm w_13 = NULL,l_5 = NULL;
              t = SSLgetAnnotations(a_41);
              w_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_40);
              l_5 = t;
              t = SSLsetAnnotations(l_5, w_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_41;
          }
        LocalPopChoice(w_33);
        t = xtc_transform_file_2_0(e_8, h_8, t);
      }
    else
      {
        t = q_33;
        t = xtc_transform_term_2_0(i_8, m_8, t);
      }
  }
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_41 = NULL;
        b_41 = t;
        t = term_b_28;
        t = get_config_0_0(t);
        t = b_41;
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
              ATerm l_41 = NULL,m_41 = NULL;
              m_41 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  l_41 = ATgetArgument(t, 0);
                  {
                    ATerm b_15 = NULL,m_5 = NULL;
                    t = SSLgetAnnotations(m_41);
                    b_15 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, l_41);
                    m_5 = t;
                    t = SSLsetAnnotations(m_5, b_15);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = m_41;
                }
              LocalPopChoice(b_34);
              t = xtc_transform_file_2_0(n_8, s_8, t);
            }
          else
            {
              t = a_34;
              t = xtc_transform_term_2_0(u_8, b_9, t);
            }
        }
      }
  }
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_41 = NULL,u_41 = NULL;
        u_41 = t;
        if(match_cons(t, sym_FILE_1))
          {
            t_41 = ATgetArgument(t, 0);
            {
              ATerm s_15 = NULL,o_5 = NULL;
              t = SSLgetAnnotations(u_41);
              s_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_41);
              o_5 = t;
              t = SSLsetAnnotations(o_5, s_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_41;
          }
        LocalPopChoice(d_34);
        t = xtc_transform_file_2_0(c_9, g_9, t);
      }
    else
      {
        t = c_34;
        t = xtc_transform_term_2_0(h_9, i_9, t);
      }
  }
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_42 = NULL,h_42 = NULL;
        h_42 = t;
        if(match_cons(t, sym_FILE_1))
          {
            g_42 = ATgetArgument(t, 0);
            {
              ATerm c_16 = NULL,f_6 = NULL;
              t = SSLgetAnnotations(h_42);
              c_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_42);
              f_6 = t;
              t = SSLsetAnnotations(f_6, c_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_42;
          }
        LocalPopChoice(f_34);
        t = xtc_transform_file_2_0(j_9, pass_verbose_0_0, t);
      }
    else
      {
        t = e_34;
        t = xtc_transform_term_2_0(l_9, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_g_34;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_g_34;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_h_34;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_h_34;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_i_34;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_i_34;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_j_34;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL;
  t = pass_verbose_0_0(t);
  v_41 = t;
  t = term_k_34;
  t = xtc_find_0_0(t);
  w_41 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(v_41), w_41), term_l_34);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_j_34;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL;
  t = pass_verbose_0_0(t);
  y_41 = t;
  t = term_k_34;
  t = xtc_find_0_0(t);
  z_41 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(y_41), z_41), term_l_34);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_m_34;
  return(t);
}
ATerm pp_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(j_7, default_usage_0_0, _id, k_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pp_stratego_0_0(t);
  return(t);
}
