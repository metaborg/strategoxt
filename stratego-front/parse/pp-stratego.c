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
ATerm term_c_35;
ATerm term_z_34;
ATerm term_w_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_p_34;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_n_31;
ATerm term_t_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_c_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_j_29;
ATerm term_h_29;
ATerm term_a_29;
ATerm term_v_28;
ATerm term_r_28;
ATerm term_b_28;
ATerm term_z_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_m_27;
ATerm term_d_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_q_26;
ATerm term_n_26;
ATerm term_i_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_m_25;
ATerm term_f_24;
ATerm term_v_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_l_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_z_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_o_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_g_21;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_p_18;
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
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
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
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
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
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym__2, term_e_22, term_u_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__2, term_e_22, term_f_22);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_p_18);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_z_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_25);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_e_26, term_l_19);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym__2, term_o_27, term_l_19);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_r_27, term_l_19);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym__2, term_a_27, term_b_27);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym__2, term_u_29, term_l_19);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__2, term_y_29, term_l_19);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__2, term_v_28, term_l_19);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym__2, term_q_33, term_l_19);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_6 (ATerm i_33, ATerm j_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm b_6 (ATerm j_17, ATerm k_17, ATerm t);
static ATerm c_6 (ATerm p_64 (ATerm), ATerm n_166, ATerm r_17, ATerm t);
static ATerm h_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t);
static ATerm d_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm s_69 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm e_63 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm a_83 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm w_69 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_7 (ATerm u_6, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm f_6 (ATerm l_79 (ATerm), ATerm q_34, ATerm o_34, ATerm t);
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
ATerm if_verbose5_1_0 (ATerm t_80 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm s_80 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm u_80 (ATerm), ATerm t);
static ATerm h_6 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm i_6 (ATerm k_73 (ATerm), ATerm i_24, ATerm h_24, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm j_6 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm t);
static ATerm k_6 (ATerm w_80 (ATerm), ATerm o_36, ATerm n_36, ATerm t);
static ATerm o_6 (ATerm l_38, ATerm m_38, ATerm t);
static ATerm p_14 (ATerm a_14, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_6 (ATerm p_17, ATerm t);
static ATerm m_6 (ATerm t_38, ATerm u_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_17 (ATerm q_15, ATerm t);
static ATerm i_17 (ATerm w_15, ATerm x_15, ATerm a_16, ATerm t);
static ATerm m_17 (ATerm n_16, ATerm o_16, ATerm p_16, ATerm t);
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
ATerm filter_1_0 (ATerm c_77 (ATerm), ATerm t);
ATerm repeat_1_0 (ATerm n_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm y_22 (ATerm p_21, ATerm t);
static ATerm v_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm p_6 (ATerm x_31, ATerm y_31, ATerm t);
ATerm debug_1_0 (ATerm n_64 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm q_6 (ATerm l_14, ATerm m_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm r_6 (ATerm m_35, ATerm n_35, ATerm t);
ATerm end_scope_1_0 (ATerm i_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm h_79 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm m_82 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm n_82 (ATerm), ATerm t);
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
static ATerm y_6 (ATerm h_37, ATerm i_37, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_6 (ATerm h_35, ATerm i_35, ATerm g_35, ATerm t);
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
static ATerm s_6 (ATerm c_33, ATerm d_33, ATerm t);
ATerm foldr_2_0 (ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_80 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm need_help_1_0 (ATerm o_84 (ATerm), ATerm t);
ATerm map_1_0 (ATerm g_69 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm v_6 (ATerm y_36, ATerm z_36, ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_69 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm f_56 (ATerm), ATerm g_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_86 (ATerm), ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm parse_options_1_0 (ATerm l_86 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm t);
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
static ATerm a_6 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm w_4 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(i_33, j_33);
      LocalPopChoice(k_9);
    }
  else
    {
      t = w_4;
      t = SSL_subtr(i_33, j_33);
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
static ATerm b_6 (ATerm j_17, ATerm k_17, ATerm t)
{
  ATerm a_1 = NULL;
  t = SSL_write_term_to_stream_baf(j_17, k_17);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_1);
  return(t);
}
static ATerm c_6 (ATerm p_64 (ATerm), ATerm n_166, ATerm r_17, ATerm t)
{
  ATerm b_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_166, term_w_9);
  t = n_6(t);
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_1, r_17);
  t = p_64(t);
  t = fclose_0_0(t);
  t = r_17;
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
ATerm xtc_transform_term_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(j_83, k_83, t);
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
ATerm fetch_elem_1_0 (ATerm s_69 (ATerm), ATerm t)
{
  ATerm a_3 = NULL;
  static ATerm j_0 (ATerm t)
  {
    t = s_69(t);
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
              ATerm l_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_17);
        {
          ATerm q_17 = t;
          int s_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_2 = NULL,m_2 = NULL,n_2 = NULL;
              t = t_3;
              {
                ATerm t_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_17;
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
              LocalPopChoice(s_17);
            }
          else
            {
              t = q_17;
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
ATerm fork_and_wait_1_0 (ATerm e_63 (ATerm), ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL;
  d_4 = t;
  t = fork_0_0(t);
  c_4 = t;
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = d_4;
        t = e_63(t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = SSL_waitpid(c_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm y_17 = ATgetArgument(t, 0);
            if(((ATgetType(y_17) != AT_INT) || (ATgetInt((ATermInt) y_17) != 0)))
              _fail(t);
            {
              ATerm z_17 = ATgetArgument(t, 1);
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
ATerm xtc_command_1_0 (ATerm a_83 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,k_4 = NULL;
  k_4 = t;
  t = a_83(t);
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
ATerm at_end_1_0 (ATerm w_69 (ATerm), ATerm t)
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
        t = w_69(t);
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
      ATerm i_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_18) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm y_0 (ATerm t)
            {
              t = d_7;
              return(t);
            }
            t = c_7;
            t = at_end_1_0(y_0, t);
            LocalPopChoice(k_18);
          }
        else
          {
            t = j_18;
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
static ATerm f_6 (ATerm l_79 (ATerm), ATerm q_34, ATerm o_34, ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL,p_7 = NULL,q_7 = NULL,s_7 = NULL,v_7 = NULL;
  q_7 = t;
  t = l_79(t);
  l_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_7, q_34, o_34);
  t = w_6(l_7, q_34, o_34, t);
  {
    ATerm m_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL;
        t = term_p_18;
        y_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_7, term_p_18);
        t = v_6(l_7, y_7, t);
        LocalPopChoice(o_18);
      }
    else
      {
        t = m_18;
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
  t = term_p_18;
  s_7 = t;
  t = (ATerm) ATinsert(CheckATermList(p_7), (ATerm) ATinsert(CheckATermList(m_7), q_34));
  v_7 = t;
  t = SSL_table_put(l_7, s_7, v_7);
  t = q_7;
  return(t);
}
static ATerm w_8 (ATerm e_8, ATerm t)
{
  t = e_8;
  {
    ATerm v_18 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_18 = ATgetArgument(t, 0);
            ATerm b_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_18;
      }
  }
  t = term_c_19;
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
  t = term_d_19;
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
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_8(t_8, t);
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
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
  t = term_l_19;
  t = new_0_0(t);
  c_9 = t;
  t = term_m_19;
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_9, term_m_19);
  t = p_6(c_9, d_9, t);
  e_9 = t;
  {
    ATerm n_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_v_9);
        i_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_9, (ATerm) ATinsert(ATempty, term_v_9));
        t = o_6(e_9, i_9, t);
        t = new_file_0_0(t);
        LocalPopChoice(r_19);
      }
    else
      {
        t = n_19;
        t = e_9;
      }
  }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL;
  t = new_file_0_0(t);
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_9, term_w_9);
  t = open_file_0_0(t);
  t = term_l_19;
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_9, term_l_19);
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
      t = (ATerm) ATmakeAppl(sym__2, l_3, (ATerm) ATinsert(ATinsert(ATempty, j_3), term_v_19));
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
      t = (ATerm) ATmakeAppl(sym__2, b_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_3), term_v_19), i_10), term_y_19));
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
ATerm if_verbose5_1_0 (ATerm t_80 (ATerm), ATerm t)
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
        t = t_80(t);
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
ATerm if_verbose4_1_0 (ATerm s_80 (ATerm), ATerm t)
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
        t = s_80(t);
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
ATerm if_verbose6_1_0 (ATerm u_80 (ATerm), ATerm t)
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
        t = u_80(t);
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
static ATerm h_6 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  t = o_73(t);
  {
    static ATerm i_1 (ATerm t)
    {
      ATerm x_11 = NULL;
      x_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_24, x_11);
      t = n_73(t);
      return(t);
    }
    t = fetch_1_0(i_1, t);
  }
  t = l_24;
  return(t);
}
static ATerm i_6 (ATerm k_73 (ATerm), ATerm i_24, ATerm h_24, ATerm t)
{
  static ATerm y_12 (ATerm t)
  {
    ATerm n_12 = NULL,r_12 = NULL,s_12 = NULL;
    n_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_24;
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
                  t = h_24;
                  return(t);
                }
                t = h_6(k_73, j_1, r_12, s_12, t);
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
  t = i_24;
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
static ATerm j_6 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
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
        t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
        t = v_6(e_36, f_36, t);
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        t = (ATerm) ATempty;
      }
  }
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_13, g_36);
  t = i_6(k_1, i_13, g_36, t);
  h_13 = t;
  t = SSL_table_put(e_36, f_36, h_13);
  t = g_13;
  return(t);
}
static ATerm k_6 (ATerm w_80 (ATerm), ATerm o_36, ATerm n_36, ATerm t)
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
    t = (ATerm) ATmakeAppl(sym__3, o_36, p_13, q_13);
    t = w_80(t);
    return(t);
  }
  t = n_36;
  t = map_1_0(m_1, t);
  return(t);
}
static ATerm o_6 (ATerm l_38, ATerm m_38, ATerm t)
{
  t = SSL_access(l_38, m_38);
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
static ATerm l_6 (ATerm p_17, ATerm t)
{
  t = SSL_read_term_from_stream(p_17);
  return(t);
}
static ATerm m_6 (ATerm t_38, ATerm u_38, ATerm t)
{
  ATerm r_14 = NULL;
  t = SSL_fopen(t_38, u_38);
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
static ATerm h_17 (ATerm q_15, ATerm t)
{
  ATerm t_15 = NULL;
  t = SSL_explode_term(q_15);
  if(match_cons(t, sym__2))
    {
      ATerm r_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_20 = ATgetArgument(t, 1);
        if(((ATgetType(s_20) == AT_LIST) && !(ATisEmpty(s_20))))
          {
            t_15 = ATgetFirst((ATermList) s_20);
            {
              ATerm t_20 = (ATerm) ATgetNext((ATermList) s_20);
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
static ATerm i_17 (ATerm w_15, ATerm x_15, ATerm a_16, ATerm t)
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
static ATerm m_17 (ATerm n_16, ATerm o_16, ATerm p_16, ATerm t)
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
        ATerm u_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_17(d_17, t);
            LocalPopChoice(w_20);
          }
        else
          {
            t = u_20;
            {
              ATerm y_20 = t;
              int e_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_17(e_17, f_17, d_17, t);
                  LocalPopChoice(e_21);
                }
              else
                {
                  t = y_20;
                  t = m_17(e_17, f_17, d_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_17(d_17, t);
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
  ATerm n_17 = NULL,o_17 = NULL,a_18 = NULL;
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
      a_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(a_18, t);
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
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_18 = NULL,f_18 = NULL;
      e_18 = t;
      t = (ATerm) ATinsert(ATempty, term_o_21);
      f_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_18, (ATerm) ATinsert(ATempty, term_o_21));
      t = o_6(e_18, f_18, t);
      LocalPopChoice(n_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = m_21;
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_21 = t;
            if((PushChoice() == 0))
              {
                ATerm g_18 = NULL,h_18 = NULL;
                g_18 = t;
                t = (ATerm) ATinsert(ATempty, term_v_9);
                h_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_18, (ATerm) ATinsert(ATempty, term_v_9));
                t = o_6(g_18, h_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_21;
              }
            t = debug_1_0(p_1, t);
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
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
  t = term_t_21;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_v_21;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
  h_19 = t;
  t = term_u_17;
  i_19 = t;
  t = (ATerm) ATinsert(ATempty, term_w_21);
  j_19 = t;
  t = SSL_printnl(i_19, j_19);
  t = h_19;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm k_19 = NULL,o_19 = NULL,p_19 = NULL;
  if(match_cons(t, sym__3))
    {
      k_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
      p_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_6(k_19, o_19, p_19, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm q_19 = NULL,s_19 = NULL,t_19 = NULL;
  q_19 = t;
  t = term_u_17;
  s_19 = t;
  t = (ATerm) ATinsert(ATempty, term_x_21);
  t_19 = t;
  t = SSL_printnl(s_19, t_19);
  t = q_19;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,z_19 = NULL;
  w_19 = t;
  t = term_u_17;
  x_19 = t;
  t = (ATerm) ATinsert(ATempty, term_w_21);
  z_19 = t;
  t = SSL_printnl(x_19, z_19);
  t = w_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm l_18 = NULL,n_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  l_18 = t;
  t = if_verbose5_1_0(u_1, t);
  {
    ATerm b_22 = t;
    if((PushChoice() == 0))
      {
        ATerm a_19 = NULL,g_19 = NULL;
        t = term_e_22;
        a_19 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, l_18);
        g_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATmakeAppl(sym_Imported_1, l_18));
        t = v_6(a_19, g_19, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_22;
      }
  }
  q_18 = t;
  t = term_e_22;
  x_18 = t;
  t = term_f_22;
  y_18 = t;
  t = (ATerm) ATinsert(ATempty, l_18);
  z_18 = t;
  t = SSL_table_put(x_18, y_18, z_18);
  t = q_18;
  t = if_verbose4_1_0(x_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(a_2, t);
  n_18 = t;
  t = term_e_22;
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_22, n_18);
  t = k_6(b_2, u_18, n_18, t);
  t = if_verbose6_1_0(c_2, t);
  t = term_e_22;
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, l_18);
  s_18 = t;
  t = (ATerm) ATempty;
  t_18 = t;
  t = SSL_table_put(r_18, s_18, t_18);
  t = (ATerm) ATmakeAppl(sym__3, term_e_22, (ATerm)ATmakeAppl(sym_Imported_1, l_18), (ATerm) ATempty);
  t = if_verbose4_1_0(e_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm c_77 (ATerm), ATerm t)
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
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_5 = NULL,e_6 = NULL,g_6 = NULL,z_1 = NULL;
            t = SSLgetAnnotations(n_20);
            x_5 = t;
            t = o_20;
            t = c_77(t);
            e_6 = t;
            t = p_20;
            t = filter_1_0(c_77, t);
            g_6 = t;
            t = (ATerm) ATinsert(CheckATermList(g_6), e_6);
            z_1 = t;
            t = SSLsetAnnotations(z_1, x_5);
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            t = p_20;
            t = filter_1_0(c_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm n_67 (ATerm), ATerm t)
{
  static ATerm v_20 (ATerm t)
  {
    ATerm i_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_67(t);
        t = v_20(t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = i_22;
      }
    return(t);
  }
  t = v_20(t);
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
            ATerm x_20 = NULL;
            t = term_s_22;
            x_20 = t;
            t = SSL_getenv(x_20);
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
  ATerm d_21 = NULL,f_21 = NULL;
  t = term_e_22;
  d_21 = t;
  t = term_u_22;
  f_21 = t;
  t = term_v_22;
  t = v_6(d_21, f_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm x_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_22;
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
  t = term_z_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm z_20 = NULL;
  t = if_verbose5_1_0(g_2, t);
  z_20 = t;
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_21 = NULL,b_21 = NULL;
        t = term_e_22;
        a_21 = t;
        t = term_f_22;
        b_21 = t;
        t = term_f_23;
        t = v_6(a_21, b_21, t);
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        {
          ATerm c_21 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          c_21 = t;
          t = repeat_1_0(l_2, t);
          t = c_21;
        }
      }
  }
  t = z_20;
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
  t = term_g_23;
  return(t);
}
static ATerm y_22 (ATerm p_21, ATerm t)
{
  ATerm u_21 = NULL,y_21 = NULL,z_21 = NULL;
  t = term_e_22;
  y_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, p_21);
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATmakeAppl(sym_Tool_1, p_21));
  t = v_6(y_21, z_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_23 = ATgetFirst((ATermList) t);
      if(match_cons(h_23, sym__2))
        {
          ATerm k_23 = ATgetArgument(h_23, 0);
          u_21 = ATgetArgument(h_23, 1);
        }
      else
        _fail(t);
      {
        ATerm i_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_21;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = debug_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_g_23;
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
      ATerm a_22 = NULL,c_22 = NULL,d_22 = NULL;
      t = if_verbose5_1_0(r_2, t);
      t = xtc_load_0_0(t);
      d_22 = t;
      if(match_cons(t, sym__2))
        {
          a_22 = ATgetArgument(t, 0);
          c_22 = ATgetArgument(t, 1);
          {
            ATerm o_23 = t;
            int p_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
                t = term_e_22;
                k_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, a_22);
                l_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATmakeAppl(sym_Tool_1, a_22));
                t = v_6(k_22, l_22, t);
                {
                  static ATerm u_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((c_22 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((j_22 != NULL) && (j_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(u_2, t);
                }
                t = not_null(j_22);
                LocalPopChoice(p_23);
              }
            else
              {
                t = o_23;
                t = y_22(d_22, t);
              }
          }
        }
      else
        {
          t = y_22(d_22, t);
        }
      t = if_verbose5_1_0(v_2, t);
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      {
        ATerm w_22 = NULL,n_7 = NULL,o_7 = NULL;
        w_22 = t;
        t = term_u_17;
        n_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_23), w_22), term_q_23);
        o_7 = t;
        t = SSL_printnl(n_7, o_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_23), w_22), term_q_23);
        t = if_verbose5_1_0(c_3, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm p_6 (ATerm x_31, ATerm y_31, ATerm t)
{
  t = SSL_strcat(x_31, y_31);
  return(t);
}
ATerm debug_1_0 (ATerm n_64 (ATerm), ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,j_23 = NULL;
  c_23 = t;
  t = n_64(t);
  d_23 = t;
  t = term_u_17;
  e_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_23), d_23);
  j_23 = t;
  t = SSL_printnl(e_23, j_23);
  t = c_23;
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
      ATerm s_23 = NULL;
      s_23 = t;
      t = SSL_is_string(s_23);
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(e_3, t);
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            {
              ATerm a_24 = NULL,d_24 = NULL,e_24 = NULL;
              a_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_24 = ATgetArgument(t, 0);
                  t = d_24;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_24 = ATgetArgument(t, 0);
                      t = d_24;
                      {
                        ATerm b_24 = t;
                        int c_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(c_24);
                          }
                        else
                          {
                            t = b_24;
                            t = debug_1_0(f_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_24 = NULL,q_24 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_24 = ATgetArgument(t, 0);
                          e_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_24;
                      t = eval_config_0_0(t);
                      o_24 = t;
                      t = e_24;
                      t = eval_config_0_0(t);
                      q_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_24, q_24);
                      t = p_6(o_24, q_24, t);
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
  ATerm u_24 = NULL,v_24 = NULL;
  u_24 = t;
  t = term_f_24;
  v_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_24, u_24);
  t = v_6(v_24, u_24, t);
  {
    ATerm g_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_24 = NULL,x_24 = NULL;
        t = eval_config_0_0(t);
        w_24 = t;
        t = term_f_24;
        x_24 = t;
        t = SSL_table_put(x_24, u_24, w_24);
        t = w_24;
        LocalPopChoice(j_24);
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
  ATerm u_25 = NULL,v_25 = NULL;
  u_25 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_8 = NULL;
        t = u_25;
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
        t = (ATerm) ATmakeAppl(sym__2, v_25, m_8);
        t = q_6(v_25, m_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_25);
        LocalPopChoice(n_24);
      }
    else
      {
        t = k_24;
        {
          ATerm p_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_8 = NULL;
              t = u_25;
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
                            if((v_25 != t))
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
              t = (ATerm) ATmakeAppl(sym__2, v_25, z_8);
              t = q_6(v_25, z_8, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_25);
              LocalPopChoice(r_24);
            }
          else
            {
              t = p_24;
              t = u_25;
              t = o_0(t);
              if((v_25 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_25);
            }
        }
      }
  }
  return(t);
}
static ATerm r_6 (ATerm m_35, ATerm n_35, ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL;
  g_26 = t;
  {
    ATerm t_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
        t = v_6(m_35, n_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_24 = ATgetFirst((ATermList) t);
            f_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_24);
        t = SSL_table_put(m_35, n_35, f_26);
        t = (ATerm) ATmakeAppl(sym__3, m_35, n_35, f_26);
      }
    else
      {
        t = t_24;
        t = SSL_table_remove(m_35, n_35);
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
      }
  }
  t = g_26;
  return(t);
}
ATerm end_scope_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm h_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
  l_26 = t;
  t = i_79(t);
  k_26 = t;
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_26 = NULL;
        t = term_p_18;
        o_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_26, term_p_18);
        t = v_6(k_26, o_26, t);
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
      j_26 = ATgetFirst((ATermList) t);
      h_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_p_18;
  m_26 = t;
  t = SSL_table_put(k_26, m_26, h_26);
  t = j_26;
  {
    static ATerm g_3 (ATerm t)
    {
      ATerm p_26 = NULL;
      p_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_26, p_26);
      t = r_6(k_26, p_26, t);
      return(t);
    }
    t = map_1_0(g_3, t);
  }
  t = l_26;
  return(t);
}
ATerm restore_always_2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t)
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_80(t);
      t = e_80(t);
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      t = e_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm h_79 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
  u_26 = t;
  t = h_79(t);
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_26, term_p_18);
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_25 = ATgetArgument(t, 0);
            ATerm h_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_p_18;
        c_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_26, term_p_18);
        t = v_6(t_26, c_27, t);
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        t = (ATerm) ATempty;
      }
  }
  v_26 = t;
  t = term_p_18;
  w_26 = t;
  t = (ATerm) ATinsert(CheckATermList(v_26), (ATerm) ATempty);
  x_26 = t;
  t = SSL_table_put(t_26, w_26, x_26);
  t = u_26;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm n_27 = NULL;
  n_27 = t;
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(n_27);
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = n_27;
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_u_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm m_82 (ATerm), ATerm t)
{
  ATerm f_27 = NULL;
  static ATerm n_3 (ATerm t)
  {
    ATerm g_27 = NULL;
    g_27 = t;
    {
      ATerm k_25 = t;
      int l_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_27 = NULL,i_27 = NULL;
          t = term_u_19;
          h_27 = t;
          t = term_p_18;
          i_27 = t;
          t = term_m_25;
          t = v_6(h_27, i_27, t);
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
        if(((f_27 != NULL) && (f_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_27 = ATgetFirst((ATermList) t);
        {
          ATerm n_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = f_27;
    t = map_1_0(o_3, t);
    t = g_27;
    t = end_scope_1_0(p_3, t);
    return(t);
  }
  t = begin_scope_1_0(m_3, t);
  t = restore_always_2_0(m_82, n_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_19;
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
ATerm xtc_io_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  static ATerm r_3 (ATerm t)
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_27 = NULL;
        t = term_y_19;
        t = get_config_0_0(t);
        s_27 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, s_27);
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        t = term_u_9;
      }
    t = n_82(t);
    t = copy_to_1_0(s_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(r_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm t_27 = NULL,x_27 = NULL,a_28 = NULL,d_28 = NULL,g_28 = NULL;
  t_27 = t;
  t = term_l_19;
  t = whoami_0_0(t);
  x_27 = t;
  t = term_u_17;
  d_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_25), x_27), term_t_25);
  g_28 = t;
  t = SSL_printnl(d_28, g_28);
  t = term_s_9;
  a_28 = t;
  t = SSL_exit(a_28);
  t = t_27;
  return(t);
}
static ATerm u_3 (ATerm t)
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
static ATerm v_3 (ATerm t)
{
  ATerm j_28 = NULL,m_28 = NULL,n_28 = NULL;
  j_28 = t;
  t = SSL_string_to_int(j_28);
  m_28 = t;
  t = term_x_25;
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_25, m_28);
  t = y_6(n_28, m_28, t);
  t = j_28;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_3, v_3, w_3, t);
  return(t);
}
static ATerm x_3 (ATerm t)
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
static ATerm z_3 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL;
  t = term_l_9;
  w_28 = t;
  t = term_z_25;
  x_28 = t;
  t = term_a_26;
  t = y_6(w_28, x_28, t);
  t = term_b_26;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_c_26;
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
  ATerm y_28 = NULL,z_28 = NULL,c_29 = NULL;
  y_28 = t;
  t = SSL_string_to_int(y_28);
  z_28 = t;
  t = term_l_9;
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_9, z_28);
  t = y_6(c_29, z_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_28);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_d_26;
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
  ATerm d_29 = NULL,e_29 = NULL;
  t = term_e_26;
  d_29 = t;
  t = term_l_19;
  e_29 = t;
  t = term_i_26;
  t = y_6(d_29, e_29, t);
  t = term_n_26;
  return(t);
}
static ATerm m_4 (ATerm t)
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
      t = Option_3_0(x_3, z_3, a_4, t);
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
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
static ATerm y_6 (ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm f_29 = NULL;
  t = term_f_24;
  f_29 = t;
  t = SSL_table_put(f_29, h_37, i_37);
  t = (ATerm) ATmakeAppl(sym__3, term_f_24, h_37, i_37);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,l_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
      t = term_l_19;
      t = e_0(t);
      m_29 = t;
      t = term_a_27;
      n_29 = t;
      t = term_b_27;
      o_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_27, term_b_27, m_29);
      t = w_6(n_29, o_29, m_29, t);
      _fail(t);
    }
  else
    {
      ATerm w_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_29 = ATgetFirst((ATermList) t);
          l_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_29;
      t = c_0(t);
      t = term_l_19;
      t = d_0(t);
      w_29 = t;
      t = (ATerm) ATinsert(CheckATermList(l_29), w_29);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
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
static ATerm s_4 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  a_30 = t;
  t = term_v_19;
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_19, a_30);
  t = y_6(b_30, a_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_30);
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
static ATerm w_6 (ATerm h_35, ATerm i_35, ATerm g_35, ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
  {
    ATerm e_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_27 = ATgetArgument(t, 0);
            ATerm l_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
        t = v_6(h_35, i_35, t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = e_27;
        t = (ATerm) ATempty;
      }
  }
  e_30 = t;
  t = (ATerm) ATinsert(CheckATermList(e_30), g_35);
  f_30 = t;
  t = SSL_table_put(h_35, i_35, f_30);
  t = d_30;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
      t = term_l_19;
      t = n_0(t);
      q_30 = t;
      t = term_a_27;
      r_30 = t;
      t = term_b_27;
      s_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_27, term_b_27, q_30);
      t = w_6(r_30, s_30, q_30, t);
      _fail(t);
    }
  else
    {
      ATerm w_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_30 = ATgetFirst((ATermList) t);
          n_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_30 = ATgetFirst((ATermList) t);
          p_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_30;
      t = k_0(t);
      t = o_30;
      t = l_0(t);
      w_30 = t;
      t = (ATerm) ATinsert(CheckATermList(p_30), w_30);
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm y_30 = NULL;
  y_30 = t;
  if(match_string(t, "-i"))
    {
      t = y_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_30;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  z_30 = t;
  t = term_y_19;
  a_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_19, z_30);
  t = y_6(a_31, z_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_30);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_m_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_4, x_4, y_4, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm c_31 = NULL;
  c_31 = t;
  if(match_string(t, "-a"))
    {
      t = c_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = c_31;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
  d_31 = t;
  t = term_o_27;
  e_31 = t;
  t = term_l_19;
  f_31 = t;
  t = term_p_27;
  t = y_6(e_31, f_31, t);
  t = d_31;
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
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
  g_31 = t;
  t = term_r_27;
  h_31 = t;
  t = term_l_19;
  i_31 = t;
  t = term_u_27;
  t = y_6(h_31, i_31, t);
  t = g_31;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_v_27;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm w_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_5, b_5, c_5, t);
      LocalPopChoice(y_27);
    }
  else
    {
      t = w_27;
      t = Option_3_0(d_5, f_5, g_5, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_19;
  t = whoami_0_0(t);
  j_31 = t;
  t = term_u_17;
  l_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_27), j_31);
  m_31 = t;
  t = SSL_printnl(l_31, m_31);
  t = term_s_9;
  k_31 = t;
  t = SSL_exit(k_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_28;
  t = get_config_0_0(t);
  return(t);
}
static ATerm s_6 (ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm c_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_33, d_33);
      LocalPopChoice(e_28);
    }
  else
    {
      t = c_28;
      t = SSL_addr(c_33, d_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_31;
      t = y_75(t);
    }
  else
    {
      ATerm t_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_31 = ATgetFirst((ATermList) t);
          q_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_31;
      t = foldr_2_0(y_75, z_75, t);
      t_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_31, t_31);
      t = z_75(t);
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
  t = term_z_25;
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
  ATerm w_31 = NULL,p_9 = NULL,q_9 = NULL;
  t = times_0_0(t);
  q_9 = t;
  t = SSL_explode_term(q_9);
  if(match_cons(t, sym__2))
    {
      ATerm f_28 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9;
  t = foldr_2_0(i_5, m_5, t);
  w_31 = t;
  t = SSL_TicksToSeconds(w_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
  j_32 = t;
  if(match_cons(t, sym__2))
    {
      k_32 = ATgetArgument(t, 0);
      l_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_32;
        if((k_32 != t))
          {
            _fail(t);
          }
        t = j_32;
        LocalPopChoice(k_28);
      }
    else
      {
        t = h_28;
        t = (ATerm) ATmakeAppl(sym__2, k_32, l_32);
        {
          ATerm l_28 = t;
          int o_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_32, l_32);
              LocalPopChoice(o_28);
            }
          else
            {
              t = l_28;
              t = SSL_gtr(k_32, l_32);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_32, l_32);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_80 (ATerm), ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_32 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        r_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_32, term_s_9);
        t = geq_0_0(t);
        t = p_32;
        t = p_80(t);
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = p_32;
      }
  }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,w_32 = NULL,x_32 = NULL;
  t = run_time_0_0(t);
  t_32 = t;
  t = term_l_19;
  t = whoami_0_0(t);
  u_32 = t;
  t = term_u_17;
  w_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_28), t_32), term_b_10), u_32);
  x_32 = t;
  t = SSL_printnl(w_32, x_32);
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_28), t_32), term_b_10), u_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_25;
  y_32 = t;
  t = SSL_exit(y_32);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL;
  l_33 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_33;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_33 = ATgetArgument(t, 0);
          {
            ATerm x_10 = NULL,d_2 = NULL;
            t = SSLgetAnnotations(l_33);
            x_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_33);
            d_2 = t;
            t = SSLsetAnnotations(d_2, x_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_33;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_28;
      t = get_config_0_0(t);
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      t = fetch_1_0(r_5, t);
    }
  t = o_84(t);
  return(t);
}
ATerm map_1_0 (ATerm g_69 (ATerm), ATerm t)
{
  static ATerm b_34 (ATerm t)
  {
    ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL;
    y_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_33;
      }
    else
      {
        ATerm k_11 = NULL,p_11 = NULL,q_11 = NULL,f_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_33 = ATgetFirst((ATermList) t);
            a_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_33);
        k_11 = t;
        t = z_33;
        t = g_69(t);
        p_11 = t;
        t = a_34;
        t = b_34(t);
        q_11 = t;
        t = (ATerm) ATinsert(CheckATermList(q_11), p_11);
        f_2 = t;
        t = SSLsetAnnotations(f_2, k_11);
      }
    return(t);
  }
  t = b_34(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_34 = ATgetFirst((ATermList) t);
      f_34 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_34 = NULL,v_34 = NULL;
        static ATerm u_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_34)), not_null(v_34));
          return(t);
        }
        t = f_34;
        t = i_0(t);
        if(((u_34 != NULL) && (u_34 != t)))
          _fail(t);
        else
          u_34 = t;
        t = e_34;
        t = g_0(t);
        if(((v_34 != NULL) && (v_34 != t)))
          _fail(t);
        else
          v_34 = t;
        t = f_34;
        t = reverse_acc_2_0(g_0, u_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_19;
      t = i_0(t);
    }
  return(t);
}
static ATerm v_6 (ATerm y_36, ATerm z_36, ATerm t)
{
  t = SSL_table_get(y_36, z_36);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,j_35 = NULL,x_2 = NULL;
  j_35 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_35);
  a_35 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_35);
  x_2 = t;
  t = SSLsetAnnotations(x_2, a_35);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm o_35 = NULL;
  o_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_35), term_a_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL;
  ATerm b_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_28;
      t = get_config_0_0(t);
      LocalPopChoice(g_29);
    }
  else
    {
      t = b_29;
      t = fetch_1_0(v_5, t);
    }
  t = term_h_29;
  t = echo_0_0(t);
  t = term_a_27;
  x_34 = t;
  t = term_b_27;
  y_34 = t;
  t = term_j_29;
  t = v_6(x_34, y_34, t);
  t = reverse_acc_2_0(_id, w_5, t);
  t = map_1_0(y_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm q_69 (ATerm), ATerm t)
{
  static ATerm u_36 (ATerm t)
  {
    ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
    r_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_36 = ATgetFirst((ATermList) t);
        t_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_29 = t;
      int p_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_12 = NULL,o_12 = NULL,i_3 = NULL;
          t = SSLgetAnnotations(r_36);
          e_12 = t;
          t = s_36;
          t = q_69(t);
          o_12 = t;
          t = (ATerm) ATinsert(CheckATermList(t_36), o_12);
          i_3 = t;
          t = SSLsetAnnotations(i_3, e_12);
          LocalPopChoice(p_29);
        }
      else
        {
          t = k_29;
          {
            ATerm c_13 = NULL,f_13 = NULL,k_3 = NULL;
            t = SSLgetAnnotations(r_36);
            c_13 = t;
            t = t_36;
            t = u_36(t);
            f_13 = t;
            t = (ATerm) ATinsert(CheckATermList(f_13), s_36);
            k_3 = t;
            t = SSLsetAnnotations(k_3, c_13);
          }
        }
    }
    return(t);
  }
  t = u_36(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
  a_37 = t;
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_29 = ATgetFirst((ATermList) t);
                ATerm t_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_37;
          }
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        t = (ATerm) ATinsert(ATempty, a_37);
      }
  }
  b_37 = t;
  t = term_q_25;
  c_37 = t;
  t = SSL_printnl(c_37, b_37);
  t = a_37;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_28;
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
  ATerm g_37 = NULL,j_37 = NULL;
  t = term_u_29;
  g_37 = t;
  t = term_l_19;
  j_37 = t;
  t = term_v_29;
  t = y_6(g_37, j_37, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_x_29;
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
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
  t = term_u_29;
  m_37 = t;
  t = term_l_19;
  n_37 = t;
  t = term_v_29;
  t = y_6(m_37, n_37, t);
  t = term_y_29;
  k_37 = t;
  t = term_l_19;
  l_37 = t;
  t = term_c_30;
  t = y_6(k_37, l_37, t);
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
ATerm Cons_2_0 (ATerm f_56 (ATerm), ATerm g_56 (ATerm), ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,b_38 = NULL,q_3 = NULL;
  b_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_37 = ATgetFirst((ATermList) t);
      v_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_38);
  o_37 = t;
  t = p_37;
  t = f_56(t);
  w_37 = t;
  t = v_37;
  t = g_56(t);
  x_37 = t;
  t = (ATerm) ATinsert(CheckATermList(x_37), w_37);
  q_3 = t;
  t = SSLsetAnnotations(q_3, o_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,n_38 = NULL,o_38 = NULL,z_4 = NULL;
  g_38 = t;
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_30;
        t = m_86(t);
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
      }
  }
  t = g_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_38 = ATgetFirst((ATermList) t);
      j_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_38);
  h_38 = t;
  t = term_b_28;
  o_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_28, i_38);
  t = y_6(o_38, i_38, t);
  t = j_38;
  {
    static ATerm c_39 (ATerm t)
    {
      ATerm u_30 = t;
      int v_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_30 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_38 = NULL;
              r_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_38;
              LocalPopChoice(b_31);
            }
          else
            {
              t = x_30;
              t = m_86(t);
              t = Cons_2_0(_id, c_39, t);
            }
          LocalPopChoice(v_30);
        }
      else
        {
          t = u_30;
          {
            ATerm y_38 = NULL,z_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_38 = ATgetFirst((ATermList) t);
                z_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_38), (ATerm) ATmakeAppl(sym_Undefined_1, y_38));
          }
        }
      return(t);
    }
    t = c_39(t);
  }
  n_38 = t;
  t = (ATerm) ATinsert(CheckATermList(n_38), (ATerm) ATmakeAppl(sym_Program_1, i_38));
  z_4 = t;
  t = SSLsetAnnotations(z_4, h_38);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm w_39 = NULL;
  w_39 = t;
  if(match_string(t, "--help"))
    {
      t = w_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_39;
        }
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL;
  t = term_v_28;
  y_39 = t;
  t = term_l_19;
  z_39 = t;
  t = term_n_31;
  t = y_6(y_39, z_39, t);
  t = term_r_31;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,p_39 = NULL,q_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
  p_39 = t;
  t = term_a_27;
  t_39 = t;
  t = term_b_27;
  u_39 = t;
  t = (ATerm) ATempty;
  v_39 = t;
  t = SSL_table_put(t_39, u_39, v_39);
  t = p_39;
  {
    static ATerm g_7 (ATerm t)
    {
      ATerm u_31 = t;
      int v_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_86(t);
          LocalPopChoice(v_31);
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
        ATerm l_40 = NULL;
        l_40 = t;
        {
          ATerm d_32 = t;
          int e_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_13 = NULL;
              t = l_40;
              {
                ATerm f_32 = t;
                int g_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_v_28;
                    t = get_config_0_0(t);
                    LocalPopChoice(g_32);
                  }
                else
                  {
                    t = f_32;
                    t = fetch_1_0(r_7, t);
                  }
              }
              t = l_40;
              t = default_system_usage_0_0(t);
              t = term_z_25;
              v_13 = t;
              t = SSL_exit(v_13);
              LocalPopChoice(e_32);
            }
          else
            {
              t = d_32;
              {
                ATerm j_14 = NULL;
                t = term_u_29;
                t = get_config_0_0(t);
                t = l_40;
                t = default_system_about_0_0(t);
                t = term_z_25;
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
          int i_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
              static ATerm t_7 (ATerm t)
              {
                ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL,e_5 = NULL;
                r_40 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_40);
                p_40 = t;
                t = q_40;
                if(((h_39 != NULL) && (h_39 != t)))
                  _fail(t);
                else
                  h_39 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_40);
                e_5 = t;
                t = SSLsetAnnotations(e_5, p_40);
                return(t);
              }
              t = fetch_1_0(t_7, t);
              t = term_u_17;
              n_40 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_39)), term_m_32);
              o_40 = t;
              t = SSL_printnl(n_40, o_40);
              t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_39)), term_m_32));
              t = default_system_usage_0_0(t);
              t = term_s_9;
              m_40 = t;
              t = SSL_exit(m_40);
              LocalPopChoice(i_32);
            }
          else
            {
              t = h_32;
            }
        }
      }
  }
  i_39 = t;
  t = term_a_27;
  q_39 = t;
  t = SSL_table_destroy(q_39);
  t = i_39;
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL;
  t = parse_options_1_0(q_84, t);
  w_40 = t;
  t = term_n_32;
  z_40 = t;
  t = SSL_table_create(z_40);
  t = term_n_32;
  x_40 = t;
  t = term_o_32;
  y_40 = t;
  t = SSL_table_put(x_40, y_40, w_40);
  t = w_40;
  t = s_84(t);
  {
    ATerm q_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_84, t);
        LocalPopChoice(s_32);
      }
    else
      {
        t = q_32;
        {
          ATerm v_32 = t;
          int z_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_84(t);
              t = report_success_0_0(t);
              LocalPopChoice(z_32);
            }
          else
            {
              t = v_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
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
              ATerm g_33 = t;
              int h_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(h_33);
                }
              else
                {
                  t = g_33;
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
  ATerm q_41 = NULL,r_41 = NULL;
  t = term_q_33;
  q_41 = t;
  t = term_l_19;
  r_41 = t;
  t = term_r_33;
  t = y_6(q_41, r_41, t);
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
      ATerm t_41 = NULL;
      t_41 = t;
      t = term_o_27;
      t = get_config_0_0(t);
      t = t_41;
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      {
        ATerm w_33 = t;
        int x_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_42 = NULL,c_42 = NULL;
            c_42 = t;
            if(match_cons(t, sym_FILE_1))
              {
                b_42 = ATgetArgument(t, 0);
                {
                  ATerm u_14 = NULL,h_5 = NULL;
                  t = SSLgetAnnotations(c_42);
                  u_14 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, b_42);
                  h_5 = t;
                  t = SSLsetAnnotations(h_5, u_14);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = c_42;
              }
            LocalPopChoice(x_33);
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
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_42 = NULL,j_42 = NULL;
        j_42 = t;
        if(match_cons(t, sym_FILE_1))
          {
            i_42 = ATgetArgument(t, 0);
            {
              ATerm d_15 = NULL,j_5 = NULL;
              t = SSLgetAnnotations(j_42);
              d_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_42);
              j_5 = t;
              t = SSLsetAnnotations(j_5, d_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_42;
          }
        LocalPopChoice(d_34);
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
        ATerm k_42 = NULL;
        k_42 = t;
        t = term_r_27;
        t = get_config_0_0(t);
        t = k_42;
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
              ATerm r_42 = NULL,s_42 = NULL;
              s_42 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  r_42 = ATgetArgument(t, 0);
                  {
                    ATerm k_15 = NULL,k_5 = NULL;
                    t = SSLgetAnnotations(s_42);
                    k_15 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, r_42);
                    k_5 = t;
                    t = SSLsetAnnotations(k_5, k_15);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = s_42;
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
        ATerm y_42 = NULL,z_42 = NULL;
        z_42 = t;
        if(match_cons(t, sym_FILE_1))
          {
            y_42 = ATgetArgument(t, 0);
            {
              ATerm s_15 = NULL,l_5 = NULL;
              t = SSLgetAnnotations(z_42);
              s_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_42);
              l_5 = t;
              t = SSLsetAnnotations(l_5, s_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_42;
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
    ATerm m_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_43 = NULL,m_43 = NULL;
        m_43 = t;
        if(match_cons(t, sym_FILE_1))
          {
            l_43 = ATgetArgument(t, 0);
            {
              ATerm j_16 = NULL,t_5 = NULL;
              t = SSLgetAnnotations(m_43);
              j_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_43);
              t_5 = t;
              t = SSLsetAnnotations(t_5, j_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_43;
          }
        LocalPopChoice(n_34);
        t = xtc_transform_file_2_0(h_9, pass_verbose_0_0, t);
      }
    else
      {
        t = m_34;
        t = xtc_transform_term_2_0(j_9, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_p_34;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_p_34;
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
  t = term_t_34;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL;
  t = pass_verbose_0_0(t);
  a_43 = t;
  t = term_w_34;
  t = xtc_find_0_0(t);
  b_43 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(a_43), b_43), term_z_34);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_t_34;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL;
  t = pass_verbose_0_0(t);
  d_43 = t;
  t = term_w_34;
  t = xtc_find_0_0(t);
  e_43 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(d_43), e_43), term_z_34);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_c_35;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_c_35;
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
