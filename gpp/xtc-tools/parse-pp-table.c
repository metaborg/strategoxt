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
ATerm term_y_31;
ATerm term_v_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_r_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_u_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_g_29;
ATerm term_a_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_s_28;
ATerm term_f_28;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_w_26;
ATerm term_f_26;
ATerm term_d_26;
ATerm term_a_26;
ATerm term_s_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_l_25;
ATerm term_e_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_c_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_v_23;
ATerm term_r_23;
ATerm term_t_22;
ATerm term_p_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_f_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_k_21;
ATerm term_y_20;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_e_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_18;
ATerm term_p_18;
ATerm term_w_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_v_16;
ATerm term_o_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
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
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_f_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_b_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_9, term_g_8, term_h_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_9, term_n_9, term_q_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_9, term_u_9, term_v_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_9, term_y_9, term_z_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_f_10, term_h_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_n_10, term_p_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_10, term_t_10, term_u_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_y_10, term_z_10);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_f_11, term_h_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_k_11, term_l_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_o_11, term_p_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_u_11, term_v_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_z_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_e_12, term_f_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_j_12, term_k_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_p_12, term_q_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_z_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_c_13, term_d_13);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_13, term_g_13, term_h_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_o_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_s_13, term_t_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_y_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_h_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_q_14, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_b_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_n_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_s_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_y_20);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_v_16);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_e_24);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_v_24, term_m_17);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_q_25);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym__2, term_s_28, term_m_17);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym__2, term_x_18, term_m_17);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_f_27, term_m_17);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_m_17);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table.tbl", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm y_5 (ATerm o_33, ATerm p_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm g_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm j_6 (ATerm q_66 (ATerm), ATerm a_167, ATerm x_17, ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm t);
static ATerm k_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm s_71 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm f_65 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm v_85 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm x_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_7 (ATerm v_6, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_6 (ATerm k_81 (ATerm), ATerm w_34, ATerm u_34, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm v_82 (ATerm), ATerm t);
static ATerm z_0 (ATerm t);
ATerm pass_v_verbose_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm x_82 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm w_82 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm y_82 (ATerm), ATerm t);
static ATerm a_6 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm u_24, ATerm t_24, ATerm t);
static ATerm b_6 (ATerm l_75 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm j_1 (ATerm t);
static ATerm c_6 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t);
static ATerm d_6 (ATerm a_83 (ATerm), ATerm q_37, ATerm p_37, ATerm t);
static ATerm f_6 (ATerm r_39, ATerm s_39, ATerm t);
static ATerm j_14 (ATerm z_13, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_6 (ATerm t_17, ATerm t);
static ATerm h_6 (ATerm a_40, ATerm b_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_16 (ATerm d_15, ATerm t);
static ATerm a_17 (ATerm l_15, ATerm m_15, ATerm p_15, ATerm t);
static ATerm b_17 (ATerm c_16, ATerm f_16, ATerm h_16, ATerm t);
static ATerm i_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_79 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm c_22 (ATerm u_20, ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm xtc_sglr_1_0 (ATerm l_97 (ATerm), ATerm t);
static ATerm n_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm o_6 (ATerm o_36, ATerm p_36, ATerm t);
ATerm end_scope_1_0 (ATerm h_81 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm g_81 (ATerm), ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm h_85 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm i_85 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm w_6 (ATerm j_38, ATerm k_38, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_6 (ATerm j_36, ATerm k_36, ATerm i_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_6 (ATerm i_33, ATerm j_33, ATerm t);
ATerm foldr_2_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_82 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm need_help_1_0 (ATerm x_86 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_71 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm s_6 (ATerm d_32, ATerm e_32, ATerm t);
ATerm debug_1_0 (ATerm o_66 (ATerm), ATerm t);
ATerm map_1_0 (ATerm g_71 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm t_6 (ATerm a_38, ATerm b_38, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_58 (ATerm), ATerm h_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_88 (ATerm), ATerm t);
static ATerm r_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm parse_options_1_0 (ATerm u_88 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm y_5 (ATerm o_33, ATerm p_33, ATerm t)
{
  ATerm y_4 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_33, p_33);
      LocalPopChoice(a_8);
    }
  else
    {
      t = y_4;
      t = SSL_subtr(o_33, p_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,j_0 = NULL,q_0 = NULL;
  t = term_b_8;
  {
    ATerm c_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(f_8);
      }
    else
      {
        t = c_8;
        t = term_g_8;
      }
  }
  b_0 = t;
  t = term_g_8;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_g_8);
  t = y_5(b_0, q_0, t);
  j_0 = t;
  t = SSL_int_to_string(j_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_b_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_h_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm d_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_i_8);
      d_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_0, (ATerm) ATinsert(ATempty, term_i_8));
      t = f_6(w_0, d_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm g_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm e_1 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_1);
  return(t);
}
static ATerm j_6 (ATerm q_66 (ATerm), ATerm a_167, ATerm x_17, ATerm t)
{
  ATerm f_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_167, term_m_8);
  t = i_6(t);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_1, x_17);
  t = q_66(t);
  t = fclose_0_0(t);
  t = x_17;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm i_1 = NULL,k_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_8 = ATgetArgument(t, 0);
      if(match_cons(o_8, sym_Stream_1))
        {
          i_1 = ATgetArgument(o_8, 0);
        }
      else
        _fail(t);
      k_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(i_1, k_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL;
  h_1 = t;
  t = xtc_new_file_0_0(t);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_1, h_1);
  t = j_6(f_0, g_1, h_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_1);
  t = xtc_transform_file_2_0(u_84, v_84, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm k_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL;
  w_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_2 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,t_0 = NULL;
        t = SSL_int_to_string(x_2);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_8), s_0), term_p_8);
        t_0 = t;
        t = SSL_concat_strings(t_0);
      }
    }
  else
    {
      ATerm n_1 = NULL,o_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_2 = ATgetArgument(t, 0);
          y_2 = ATgetArgument(t, 1);
          z_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_2);
      n_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_2), term_u_8), n_1), term_t_8), x_2);
      o_1 = t;
      t = SSL_concat_strings(o_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm s_71 (ATerm), ATerm t)
{
  ATerm d_3 = NULL;
  static ATerm h_0 (ATerm t)
  {
    t = s_71(t);
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
    ATerm v_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm d_9 = ATgetArgument(t, 0);
              if((e_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm e_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_15), term_i_15), term_c_15), term_y_14), term_u_14), term_i_14), term_a_14), term_v_13), term_p_13), term_k_13), term_e_13), term_a_13), term_w_12), term_l_12), term_g_12), term_a_12), term_w_11), term_r_11), term_m_11), term_i_11), term_a_11), term_v_10), term_q_10), term_j_10), term_a_10), term_w_9), term_r_9), term_i_9);
        t = fetch_elem_1_0(m_0, t);
        LocalPopChoice(y_8);
      }
    else
      {
        t = v_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, e_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm m_3 = NULL,x_3 = NULL;
  m_3 = t;
  {
    ATerm s_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_15 = ATgetArgument(t, 0);
            x_3 = ATgetArgument(t, 1);
            {
              ATerm w_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_15);
        {
          ATerm x_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_1 = NULL,w_1 = NULL,x_1 = NULL;
              t = x_3;
              {
                ATerm z_15 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_15;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              u_1 = t;
              t = term_b_16;
              w_1 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, u_1), term_d_16);
              x_1 = t;
              t = SSL_printnl(w_1, x_1);
              t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATempty, u_1), term_d_16));
              LocalPopChoice(y_15);
            }
          else
            {
              t = x_15;
              t = m_3;
            }
        }
      }
    else
      {
        t = s_15;
        t = m_3;
      }
  }
  t = m_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm f_65 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL;
  h_4 = t;
  t = fork_0_0(t);
  g_4 = t;
  {
    ATerm e_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = h_4;
        t = f_65(t);
        LocalPopChoice(g_16);
      }
    else
      {
        t = e_16;
        t = SSL_waitpid(g_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_16 = ATgetArgument(t, 0);
            if(((ATgetType(i_16) != AT_INT) || (ATgetInt((ATermInt) i_16) != 0)))
              _fail(t);
            {
              ATerm l_16 = ATgetArgument(t, 1);
            }
            {
              ATerm m_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = h_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL;
  o_4 = t;
  t = v_85(t);
  t = xtc_find_0_0(t);
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_4, o_4);
  {
    static ATerm u_0 (ATerm t)
    {
      ATerm p_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_4, o_4);
      t = k_6(n_4, o_4, t);
      t = term_o_16;
      p_4 = t;
      t = SSL_exit(p_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
  }
  t = o_4;
  return(t);
}
ATerm at_end_1_0 (ATerm x_71 (ATerm), ATerm t)
{
  static ATerm q_5 (ATerm t)
  {
    ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
    o_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_5 = ATgetFirst((ATermList) t);
        n_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_2 = NULL,k_2 = NULL,b_2 = NULL;
          t = SSLgetAnnotations(o_5);
          d_2 = t;
          t = n_5;
          t = q_5(t);
          k_2 = t;
          t = (ATerm) ATinsert(CheckATermList(k_2), m_5);
          b_2 = t;
          t = SSLsetAnnotations(b_2, d_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_5;
        t = x_71(t);
      }
    return(t);
  }
  t = q_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  r_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_4;
    }
  else
    {
      static ATerm v_0 (ATerm t)
      {
        t = not_null(t_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_4 = ATgetFirst((ATermList) t);
          if(((t_4 != NULL) && (t_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_4;
      t = at_end_1_0(v_0, t);
    }
  return(t);
}
static ATerm k_7 (ATerm v_6, ATerm t)
{
  ATerm x_6 = NULL;
  t = SSL_explode_term(v_6);
  if(match_cons(t, sym__2))
    {
      ATerm p_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_16) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm b_7 = NULL,g_7 = NULL,h_7 = NULL;
  h_7 = t;
  if(match_cons(t, sym__2))
    {
      b_7 = ATgetArgument(t, 0);
      g_7 = ATgetArgument(t, 1);
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_0 (ATerm t)
            {
              t = g_7;
              return(t);
            }
            t = b_7;
            t = at_end_1_0(x_0, t);
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            t = k_7(h_7, t);
          }
      }
    }
  else
    {
      t = k_7(h_7, t);
    }
  return(t);
}
static ATerm m_6 (ATerm k_81 (ATerm), ATerm w_34, ATerm u_34, ATerm t)
{
  ATerm n_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
  r_7 = t;
  t = k_81(t);
  n_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_7, w_34, u_34);
  t = u_6(n_7, w_34, u_34, t);
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_7 = NULL;
        t = term_v_16;
        u_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_7, term_v_16);
        t = t_6(n_7, u_7, t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_7 = ATgetFirst((ATermList) t);
      q_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_v_16;
  s_7 = t;
  t = (ATerm) ATinsert(CheckATermList(q_7), (ATerm) ATinsert(CheckATermList(p_7), w_34));
  t_7 = t;
  t = SSL_table_put(n_7, s_7, t_7);
  t = r_7;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm z_7 = NULL;
  ATerm c_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_8 = NULL,i_3 = NULL;
      d_8 = t;
      t = term_h_17;
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_8, term_h_17);
      t = s_6(d_8, i_3, t);
      z_7 = t;
      t = SSL_mkstemp(z_7);
      LocalPopChoice(g_17);
    }
  else
    {
      t = c_17;
      {
        ATerm e_8 = NULL;
        t = term_i_17;
        e_8 = t;
        t = SSL_perror(e_8);
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
static ATerm y_0 (ATerm t)
{
  t = term_j_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL,q_8 = NULL,s_8 = NULL;
  t = P__tmpdir_0_0(t);
  q_8 = t;
  t = term_l_17;
  s_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_8, term_l_17);
  t = s_6(q_8, s_8, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      k_8 = ATgetArgument(t, 0);
      j_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_m_17;
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_8, term_m_17);
  t = m_6(y_0, k_8, l_8, t);
  t = SSL_close(j_8);
  t = k_8;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  z_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm b_9 = NULL,c_9 = NULL;
      t = z_8;
      t = xtc_new_file_0_0(t);
      b_9 = t;
      t = r_0(t);
      c_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_9, (ATerm) ATinsert(ATinsert(ATempty, b_9), term_w_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_9);
    }
  else
    {
      ATerm g_9 = NULL,k_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_9;
      t = xtc_new_file_0_0(t);
      g_9 = t;
      t = r_0(t);
      k_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_9), term_w_17), a_9), term_p_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_9);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm t_9 = NULL;
  t_9 = t;
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_10 = NULL;
        t = term_b_8;
        t = get_config_0_0(t);
        b_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_10, term_u_9);
        t = geq_0_0(t);
        t = t_9;
        t = v_82(t);
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = t_9;
      }
  }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_x_18);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(z_0, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm d_10 = NULL;
  static ATerm a_1 (ATerm t)
  {
    ATerm e_10 = NULL,g_10 = NULL;
    e_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_10), e_10);
    t = t_6(not_null(d_10), e_10, t);
    g_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_10, g_10);
    return(t);
  }
  if(((d_10 != NULL) && (d_10 != t)))
    _fail(t);
  else
    d_10 = t;
  t = SSL_table_keys(d_10);
  t = map_1_0(a_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm i_10 = NULL;
  i_10 = t;
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_10 = NULL;
        t = term_b_8;
        t = get_config_0_0(t);
        k_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_10, term_w_14);
        t = geq_0_0(t);
        t = i_10;
        t = x_82(t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        t = i_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm o_10 = NULL;
  o_10 = t;
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_10 = NULL;
        t = term_b_8;
        t = get_config_0_0(t);
        s_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_10, term_u_11);
        t = geq_0_0(t);
        t = o_10;
        t = w_82(t);
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = o_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm c_11 = NULL;
  c_11 = t;
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_11 = NULL;
        t = term_b_8;
        t = get_config_0_0(t);
        e_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_11, term_y_9);
        t = geq_0_0(t);
        t = c_11;
        t = y_82(t);
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        t = c_11;
      }
  }
  return(t);
}
static ATerm a_6 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm u_24, ATerm t_24, ATerm t)
{
  t = p_75(t);
  {
    static ATerm b_1 (ATerm t)
    {
      ATerm g_11 = NULL;
      g_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_24, g_11);
      t = o_75(t);
      return(t);
    }
    t = fetch_1_0(b_1, t);
  }
  t = t_24;
  return(t);
}
static ATerm b_6 (ATerm l_75 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  static ATerm m_12 (ATerm t)
  {
    ATerm c_12 = NULL,d_12 = NULL,h_12 = NULL;
    c_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_12 = ATgetFirst((ATermList) t);
            h_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_19 = t;
          int f_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_12;
              {
                static ATerm c_1 (ATerm t)
                {
                  t = p_24;
                  return(t);
                }
                t = a_6(l_75, c_1, d_12, h_12, t);
              }
              t = m_12(t);
              LocalPopChoice(f_19);
            }
          else
            {
              t = e_19;
              {
                ATerm q_3 = NULL,a_4 = NULL,f_2 = NULL;
                t = SSLgetAnnotations(c_12);
                q_3 = t;
                t = h_12;
                t = m_12(t);
                a_4 = t;
                t = (ATerm) ATinsert(CheckATermList(a_4), d_12);
                f_2 = t;
                t = SSLsetAnnotations(f_2, q_3);
              }
            }
        }
      }
    return(t);
  }
  t = q_24;
  t = m_12(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm i_13 = NULL;
  if(match_cons(t, sym__2))
    {
      i_13 = ATgetArgument(t, 0);
      if((i_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  r_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_19 = ATgetArgument(t, 0);
            ATerm j_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
        t = t_6(g_37, h_37, t);
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        t = (ATerm) ATempty;
      }
  }
  t_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_12, i_37);
  t = b_6(j_1, t_12, i_37, t);
  s_12 = t;
  t = SSL_table_put(g_37, h_37, s_12);
  t = r_12;
  return(t);
}
static ATerm d_6 (ATerm a_83 (ATerm), ATerm q_37, ATerm p_37, ATerm t)
{
  static ATerm l_1 (ATerm t)
  {
    ATerm j_13 = NULL,n_13 = NULL;
    if(match_cons(t, sym__2))
      {
        j_13 = ATgetArgument(t, 0);
        n_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, q_37, j_13, n_13);
    t = a_83(t);
    return(t);
  }
  t = p_37;
  t = map_1_0(l_1, t);
  return(t);
}
static ATerm f_6 (ATerm r_39, ATerm s_39, ATerm t)
{
  t = SSL_access(r_39, s_39);
  return(t);
}
static ATerm j_14 (ATerm z_13, ATerm t)
{
  t = SSL_fclose(z_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL;
  e_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_14 = ATgetArgument(t, 0);
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_14);
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            t = j_14(e_14, t);
          }
      }
    }
  else
    {
      t = j_14(e_14, t);
    }
  return(t);
}
static ATerm e_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm h_6 (ATerm a_40, ATerm b_40, ATerm t)
{
  ATerm k_14 = NULL;
  t = SSL_fopen(a_40, b_40);
  k_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_14 = NULL;
  t = SSL_stdin_stream();
  m_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_14 = NULL;
  t = SSL_stdout_stream();
  r_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_14 = NULL;
  t = SSL_stderr_stream();
  s_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_14);
  return(t);
}
static ATerm z_16 (ATerm d_15, ATerm t)
{
  ATerm e_15 = NULL;
  t = SSL_explode_term(d_15);
  if(match_cons(t, sym__2))
    {
      ATerm m_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_19 = ATgetArgument(t, 1);
        if(((ATgetType(n_19) == AT_LIST) && !(ATisEmpty(n_19))))
          {
            e_15 = ATgetFirst((ATermList) n_19);
            {
              ATerm o_19 = (ATerm) ATgetNext((ATermList) n_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_17 (ATerm l_15, ATerm m_15, ATerm p_15, ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,u_15 = NULL,a_16 = NULL,h_2 = NULL;
  t = SSLgetAnnotations(p_15);
  u_15 = t;
  t = l_15;
  if(match_cons(t, sym_Path_1))
    {
      a_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_16, m_15);
  h_2 = t;
  t = SSLsetAnnotations(h_2, u_15);
  if(match_cons(t, sym__2))
    {
      q_15 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(q_15, r_15, t);
  return(t);
}
static ATerm b_17 (ATerm c_16, ATerm f_16, ATerm h_16, ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,n_16 = NULL,s_16 = NULL,l_2 = NULL;
  t = SSLgetAnnotations(h_16);
  n_16 = t;
  t = SSL_is_string(c_16);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_16, f_16);
  l_2 = t;
  t = SSLsetAnnotations(l_2, n_16);
  if(match_cons(t, sym__2))
    {
      j_16 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(j_16, k_16, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  w_16 = t;
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
      {
        ATerm p_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_16(w_16, t);
            LocalPopChoice(q_19);
          }
        else
          {
            t = p_19;
            {
              ATerm r_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_17(x_16, y_16, w_16, t);
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = r_19;
                  t = b_17(x_16, y_16, w_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_16(w_16, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,k_17 = NULL;
  k_17 = t;
  {
    ATerm t_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_17, term_y_19);
        t = i_6(t);
        LocalPopChoice(x_19);
      }
    else
      {
        t = t_19;
        {
          ATerm c_5 = NULL,l_5 = NULL;
          t = term_z_19;
          l_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_19, k_17);
          t = s_6(l_5, k_17, t);
          c_5 = t;
          t = SSL_perror(c_5);
          _fail(t);
        }
      }
  }
  e_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(f_17, t);
  d_17 = t;
  t = e_17;
  t = fclose_0_0(t);
  t = d_17;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_a_20;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_17 = NULL,q_17 = NULL;
      p_17 = t;
      t = (ATerm) ATinsert(ATempty, term_e_20);
      q_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_17, (ATerm) ATinsert(ATempty, term_e_20));
      t = f_6(p_17, q_17, t);
      LocalPopChoice(d_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = c_20;
      {
        ATerm f_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_20 = t;
            if((PushChoice() == 0))
              {
                ATerm r_17 = NULL,s_17 = NULL;
                r_17 = t;
                t = (ATerm) ATinsert(ATempty, term_i_8);
                s_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_17, (ATerm) ATinsert(ATempty, term_i_8));
                t = f_6(r_17, s_17, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_20;
              }
            t = debug_1_0(m_1, t);
            LocalPopChoice(h_20);
          }
        else
          {
            t = f_20;
            t = debug_1_0(p_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_q_20;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = debug_1_0(t_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_r_20;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  i_18 = t;
  t = term_b_16;
  j_18 = t;
  t = (ATerm) ATinsert(ATempty, term_s_20);
  k_18 = t;
  t = SSL_printnl(j_18, k_18);
  t = i_18;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  if(match_cons(t, sym__3))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
      n_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_6(l_18, m_18, n_18, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm o_18 = NULL,q_18 = NULL,r_18 = NULL;
  o_18 = t;
  t = term_b_16;
  q_18 = t;
  t = (ATerm) ATinsert(ATempty, term_t_20);
  r_18 = t;
  t = SSL_printnl(q_18, r_18);
  t = o_18;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  s_18 = t;
  t = term_b_16;
  t_18 = t;
  t = (ATerm) ATinsert(ATempty, term_s_20);
  u_18 = t;
  t = SSL_printnl(t_18, u_18);
  t = s_18;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  u_17 = t;
  t = if_verbose5_1_0(q_1, t);
  {
    ATerm v_20 = t;
    if((PushChoice() == 0))
      {
        ATerm g_18 = NULL,h_18 = NULL;
        t = term_w_20;
        g_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, u_17);
        h_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_20, (ATerm) ATmakeAppl(sym_Imported_1, u_17));
        t = t_6(g_18, h_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_20;
      }
  }
  y_17 = t;
  t = term_w_20;
  d_18 = t;
  t = term_y_20;
  e_18 = t;
  t = (ATerm) ATinsert(ATempty, u_17);
  f_18 = t;
  t = SSL_table_put(d_18, e_18, f_18);
  t = y_17;
  t = if_verbose4_1_0(s_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(v_1, t);
  v_17 = t;
  t = term_w_20;
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_20, v_17);
  t = d_6(y_1, c_18, v_17, t);
  t = if_verbose6_1_0(z_1, t);
  t = term_w_20;
  z_17 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, u_17);
  a_18 = t;
  t = (ATerm) ATempty;
  b_18 = t;
  t = SSL_table_put(z_17, a_18, b_18);
  t = (ATerm) ATmakeAppl(sym__3, term_w_20, (ATerm)ATmakeAppl(sym_Imported_1, u_17), (ATerm) ATempty);
  t = if_verbose4_1_0(a_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm g_79 (ATerm), ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
  u_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_19 = ATgetFirst((ATermList) t);
          w_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_5 = NULL,x_5 = NULL,z_5 = NULL,o_2 = NULL;
            t = SSLgetAnnotations(u_19);
            u_5 = t;
            t = v_19;
            t = g_79(t);
            x_5 = t;
            t = w_19;
            t = filter_1_0(g_79, t);
            z_5 = t;
            t = (ATerm) ATinsert(CheckATermList(z_5), x_5);
            o_2 = t;
            t = SSLsetAnnotations(o_2, u_5);
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            t = w_19;
            t = filter_1_0(g_79, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm t)
{
  static ATerm g_20 (ATerm t)
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_69(t);
        t = g_20(t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = m_69(t);
      }
    return(t);
  }
  t = g_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_21;
      t = get_config_0_0(t);
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      {
        ATerm m_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_20 = NULL;
            t = term_q_21;
            i_20 = t;
            t = SSL_getenv(i_20);
            LocalPopChoice(o_21);
          }
        else
          {
            t = m_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_r_21;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  t = term_w_20;
  o_20 = t;
  t = term_s_21;
  p_20 = t;
  t = term_t_21;
  t = t_6(o_20, p_20, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm u_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_21;
      }
  }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_20 = NULL;
  t = if_verbose5_1_0(c_2, t);
  k_20 = t;
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_20 = NULL,m_20 = NULL;
        t = term_w_20;
        l_20 = t;
        t = term_y_20;
        m_20 = t;
        t = term_y_21;
        t = t_6(l_20, m_20, t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        {
          ATerm n_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          n_20 = t;
          t = repeat_2_0(g_2, _id, t);
          t = n_20;
        }
      }
  }
  t = k_20;
  t = if_verbose5_1_0(i_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
static ATerm c_22 (ATerm u_20, ATerm t)
{
  ATerm x_20 = NULL,z_20 = NULL,a_21 = NULL;
  t = term_w_20;
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, u_20);
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_20, (ATerm) ATmakeAppl(sym_Tool_1, u_20));
  t = t_6(z_20, a_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_22 = ATgetFirst((ATermList) t);
      if(match_cons(b_22, sym__2))
        {
          ATerm e_22 = ATgetArgument(b_22, 0);
          x_20 = ATgetArgument(b_22, 1);
        }
      else
        _fail(t);
      {
        ATerm d_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_20;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = debug_1_0(s_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_z_21;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_w_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(v_2, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_f_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
      t = if_verbose5_1_0(m_2, t);
      t = xtc_load_0_0(t);
      d_21 = t;
      if(match_cons(t, sym__2))
        {
          b_21 = ATgetArgument(t, 0);
          c_21 = ATgetArgument(t, 1);
          {
            ATerm i_22 = t;
            int j_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_21 = NULL,n_21 = NULL,p_21 = NULL;
                t = term_w_20;
                n_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, b_21);
                p_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_20, (ATerm) ATmakeAppl(sym_Tool_1, b_21));
                t = t_6(n_21, p_21, t);
                {
                  static ATerm p_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((c_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((l_21 != NULL) && (l_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          l_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(p_2, t);
                }
                t = not_null(l_21);
                LocalPopChoice(j_22);
              }
            else
              {
                t = i_22;
                t = c_22(d_21, t);
              }
          }
        }
      else
        {
          t = c_22(d_21, t);
        }
      t = if_verbose5_1_0(r_2, t);
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      {
        ATerm a_22 = NULL,e_7 = NULL,f_7 = NULL;
        a_22 = t;
        t = term_b_16;
        e_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_22), a_22), term_k_22);
        f_7 = t;
        t = SSL_printnl(e_7, f_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_22), a_22), term_k_22);
        t = if_verbose5_1_0(t_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_m_22;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_m_22;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_22 = NULL,r_22 = NULL;
      r_22 = t;
      if(match_cons(t, sym_FILE_1))
        {
          q_22 = ATgetArgument(t, 0);
          {
            ATerm v_7 = NULL,q_2 = NULL;
            t = SSLgetAnnotations(r_22);
            v_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, q_22);
            q_2 = t;
            t = SSLsetAnnotations(q_2, v_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_22;
        }
      LocalPopChoice(o_22);
      {
        static ATerm c_3 (ATerm t)
        {
          ATerm s_22 = NULL,u_22 = NULL;
          t = term_m_17;
          t = l_97(t);
          t = xtc_find_0_0(t);
          s_22 = t;
          t = term_m_17;
          t = pass_v_verbose_0_0(t);
          u_22 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_22), s_22), term_t_22), term_p_22);
          return(t);
        }
        t = xtc_transform_file_2_0(a_3, c_3, t);
      }
    }
  else
    {
      t = n_22;
      {
        static ATerm g_3 (ATerm t)
        {
          ATerm y_22 = NULL,z_22 = NULL;
          t = term_m_17;
          t = l_97(t);
          t = xtc_find_0_0(t);
          y_22 = t;
          t = term_m_17;
          t = pass_v_verbose_0_0(t);
          z_22 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(z_22), y_22), term_t_22), term_p_22);
          return(t);
        }
        t = xtc_transform_term_2_0(f_3, g_3, t);
      }
    }
  return(t);
}
static ATerm n_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm b_24 = NULL,d_24 = NULL;
  b_24 = t;
  if(match_cons(t, sym_FILE_1))
    {
      d_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_8 = NULL;
        t = b_24;
        t = o_0(t);
        n_8 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = n_8;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = n_8;
          }
        t = (ATerm) ATmakeAppl(sym__2, d_24, n_8);
        t = n_6(d_24, n_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_24);
        LocalPopChoice(w_22);
      }
    else
      {
        t = v_22;
        {
          ATerm x_22 = t;
          int a_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_8 = NULL;
              t = b_24;
              t = o_0(t);
              w_8 = t;
              {
                ATerm b_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_8 = NULL;
                    x_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = x_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = x_8;
                          }
                        else
                          {
                            t = x_8;
                            if((d_24 != t))
                              {
                                _fail(t);
                              }
                            t = x_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_23;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, d_24, w_8);
              t = n_6(d_24, w_8, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_24);
              LocalPopChoice(a_23);
            }
          else
            {
              t = x_22;
              t = b_24;
              t = o_0(t);
              if((d_24 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_24);
            }
        }
      }
  }
  return(t);
}
static ATerm o_6 (ATerm o_36, ATerm p_36, ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL;
  i_24 = t;
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
        t = t_6(o_36, p_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_23 = ATgetFirst((ATermList) t);
            h_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(d_23);
        t = SSL_table_put(o_36, p_36, h_24);
        t = (ATerm) ATmakeAppl(sym__3, o_36, p_36, h_24);
      }
    else
      {
        t = c_23;
        t = SSL_table_remove(o_36, p_36);
        t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
      }
  }
  t = i_24;
  return(t);
}
ATerm end_scope_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  m_24 = t;
  t = h_81(t);
  l_24 = t;
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_24 = NULL;
        t = term_v_16;
        s_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_24, term_v_16);
        t = t_6(l_24, s_24, t);
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_24 = ATgetFirst((ATermList) t);
      j_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_v_16;
  n_24 = t;
  t = SSL_table_put(l_24, n_24, j_24);
  t = k_24;
  {
    static ATerm h_3 (ATerm t)
    {
      ATerm w_24 = NULL;
      w_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_24, w_24);
      t = o_6(l_24, w_24, t);
      return(t);
    }
    t = map_1_0(h_3, t);
  }
  t = m_24;
  return(t);
}
ATerm restore_always_2_0 (ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_82(t);
      t = i_82(t);
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      t = i_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_81 (ATerm), ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
  a_25 = t;
  t = g_81(t);
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_24, term_v_16);
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_23 = ATgetArgument(t, 0);
            ATerm m_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_16;
        h_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_24, term_v_16);
        t = t_6(z_24, h_25, t);
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = (ATerm) ATempty;
      }
  }
  b_25 = t;
  t = term_v_16;
  c_25 = t;
  t = (ATerm) ATinsert(CheckATermList(b_25), (ATerm) ATempty);
  d_25 = t;
  t = SSL_table_put(z_24, c_25, d_25);
  t = a_25;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_j_17;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(r_25);
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        t = r_25;
      }
  }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_j_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm h_85 (ATerm), ATerm t)
{
  ATerm k_25 = NULL;
  static ATerm k_3 (ATerm t)
  {
    ATerm m_25 = NULL;
    m_25 = t;
    {
      ATerm p_23 = t;
      int q_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_25 = NULL,o_25 = NULL;
          t = term_j_17;
          n_25 = t;
          t = term_v_16;
          o_25 = t;
          t = term_r_23;
          t = t_6(n_25, o_25, t);
          LocalPopChoice(q_23);
        }
      else
        {
          t = p_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_25 != NULL) && (k_25 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_25 = ATgetFirst((ATermList) t);
        {
          ATerm s_23 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = k_25;
    t = map_1_0(l_3, t);
    t = m_25;
    t = end_scope_1_0(n_3, t);
    return(t);
  }
  t = begin_scope_1_0(j_3, t);
  t = restore_always_2_0(h_85, k_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_17;
      t = get_config_0_0(t);
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      t = term_v_23;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm i_85 (ATerm), ATerm t)
{
  static ATerm r_3 (ATerm t)
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_25 = NULL;
        t = term_p_18;
        t = get_config_0_0(t);
        w_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, w_25);
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        t = term_h_8;
      }
    t = i_85(t);
    t = copy_to_1_0(s_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(r_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,b_26 = NULL,c_26 = NULL,e_26 = NULL;
  x_25 = t;
  t = term_m_17;
  t = whoami_0_0(t);
  y_25 = t;
  t = term_b_16;
  c_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_23), y_25), term_y_23);
  e_26 = t;
  t = SSL_printnl(c_26, e_26);
  t = term_g_8;
  b_26 = t;
  t = SSL_exit(b_26);
  t = x_25;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  if(match_string(t, "-k"))
    {
      t = g_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_26;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,l_26 = NULL;
  i_26 = t;
  t = SSL_string_to_int(i_26);
  j_26 = t;
  t = term_a_24;
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_24, j_26);
  t = w_6(l_26, j_26, t);
  t = i_26;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_3, v_3, w_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm o_26 = NULL;
  o_26 = t;
  if(match_string(t, "-S"))
    {
      t = o_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_26;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  t = term_b_8;
  p_26 = t;
  t = term_e_24;
  q_26 = t;
  t = term_f_24;
  t = w_6(p_26, q_26, t);
  t = term_g_24;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_o_24;
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
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  x_26 = t;
  t = SSL_string_to_int(x_26);
  y_26 = t;
  t = term_b_8;
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_8, y_26);
  t = w_6(z_26, y_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_26);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_r_24;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm a_27 = NULL,c_27 = NULL;
  t = term_v_24;
  a_27 = t;
  t = term_m_17;
  c_27 = t;
  t = term_x_24;
  t = w_6(a_27, c_27, t);
  t = term_y_24;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_e_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_3, z_3, b_4, t);
      LocalPopChoice(g_25);
    }
  else
    {
      t = f_25;
      {
        ATerm i_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_4, d_4, e_4, t);
            LocalPopChoice(j_25);
          }
        else
          {
            t = i_25;
            t = Option_3_0(f_4, i_4, j_4, t);
          }
      }
    }
  return(t);
}
static ATerm w_6 (ATerm j_38, ATerm k_38, ATerm t)
{
  ATerm d_27 = NULL;
  t = term_l_25;
  d_27 = t;
  t = SSL_table_put(d_27, j_38, k_38);
  t = (ATerm) ATmakeAppl(sym__3, term_l_25, j_38, k_38);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
      t = term_m_17;
      t = e_0(t);
      l_27 = t;
      t = term_p_25;
      m_27 = t;
      t = term_q_25;
      n_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_25, term_q_25, l_27);
      t = u_6(m_27, n_27, l_27, t);
      _fail(t);
    }
  else
    {
      ATerm q_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_27 = ATgetFirst((ATermList) t);
          i_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_27;
      t = c_0(t);
      t = term_m_17;
      t = d_0(t);
      q_27 = t;
      t = (ATerm) ATinsert(CheckATermList(i_27), q_27);
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  if(match_string(t, "-o"))
    {
      t = t_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_27;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL;
  u_27 = t;
  t = term_w_17;
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_17, u_27);
  t = w_6(v_27, u_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_27);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_s_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, l_4, m_4, t);
  return(t);
}
static ATerm u_6 (ATerm j_36, ATerm k_36, ATerm i_36, ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
  x_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_25 = ATgetArgument(t, 0);
            ATerm z_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
        t = t_6(j_36, k_36, t);
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        t = (ATerm) ATempty;
      }
  }
  y_27 = t;
  t = (ATerm) ATinsert(CheckATermList(y_27), i_36);
  z_27 = t;
  t = SSL_table_put(j_36, k_36, z_27);
  t = x_27;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,q_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_28 = NULL,w_28 = NULL,z_28 = NULL;
      t = term_m_17;
      t = n_0(t);
      t_28 = t;
      t = term_p_25;
      w_28 = t;
      t = term_q_25;
      z_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_25, term_q_25, t_28);
      t = u_6(w_28, z_28, t_28, t);
      _fail(t);
    }
  else
    {
      ATerm f_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_28 = ATgetFirst((ATermList) t);
          l_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_28 = ATgetFirst((ATermList) t);
          q_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_28;
      t = k_0(t);
      t = m_28;
      t = l_0(t);
      f_29 = t;
      t = (ATerm) ATinsert(CheckATermList(q_28), f_29);
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm h_29 = NULL;
  h_29 = t;
  if(match_string(t, "-i"))
    {
      t = h_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_29;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm l_29 = NULL,p_29 = NULL;
  l_29 = t;
  t = term_p_18;
  p_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_18, l_29);
  t = w_6(p_29, l_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_29);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_4, u_4, v_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_17;
  t = whoami_0_0(t);
  q_29 = t;
  t = term_b_16;
  s_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_26), q_29);
  t_29 = t;
  t = SSL_printnl(s_29, t_29);
  t = term_g_8;
  r_29 = t;
  t = SSL_exit(r_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_f_26;
  t = get_config_0_0(t);
  return(t);
}
static ATerm p_6 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm h_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_33, j_33);
      LocalPopChoice(k_26);
    }
  else
    {
      t = h_26;
      t = SSL_addr(i_33, j_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  v_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_29;
      t = c_78(t);
    }
  else
    {
      ATerm a_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_29 = ATgetFirst((ATermList) t);
          x_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_29;
      t = foldr_2_0(c_78, d_78, t);
      a_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_29, a_30);
      t = d_78(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_e_24;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL;
  if(match_cons(t, sym__2))
    {
      o_9 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(o_9, p_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_30 = NULL,j_9 = NULL,l_9 = NULL;
  t = times_0_0(t);
  l_9 = t;
  t = SSL_explode_term(l_9);
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      j_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9;
  t = foldr_2_0(w_4, x_4, t);
  d_30 = t;
  t = SSL_TicksToSeconds(d_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  o_30 = t;
  if(match_cons(t, sym__2))
    {
      p_30 = ATgetArgument(t, 0);
      q_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_30;
        if((p_30 != t))
          {
            _fail(t);
          }
        t = o_30;
        LocalPopChoice(r_26);
      }
    else
      {
        t = n_26;
        t = (ATerm) ATmakeAppl(sym__2, p_30, q_30);
        {
          ATerm s_26 = t;
          int t_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_30, q_30);
              LocalPopChoice(t_26);
            }
          else
            {
              t = s_26;
              t = SSL_gtr(p_30, q_30);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_30, q_30);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_82 (ATerm), ATerm t)
{
  ATerm w_30 = NULL;
  w_30 = t;
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_30 = NULL;
        t = term_b_8;
        t = get_config_0_0(t);
        y_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_30, term_g_8);
        t = geq_0_0(t);
        t = w_30;
        t = t_82(t);
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = w_30;
      }
  }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,d_31 = NULL,e_31 = NULL;
  t = run_time_0_0(t);
  a_31 = t;
  t = term_m_17;
  t = whoami_0_0(t);
  b_31 = t;
  t = term_b_16;
  d_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_26), a_31), term_t_8), b_31);
  e_31 = t;
  t = SSL_printnl(d_31, e_31);
  t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_26), a_31), term_t_8), b_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_24;
  f_31 = t;
  t = SSL_exit(f_31);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL;
  o_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_31 = ATgetArgument(t, 0);
          {
            ATerm m_10 = NULL,u_2 = NULL;
            t = SSLgetAnnotations(o_31);
            m_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_31);
            u_2 = t;
            t = SSLsetAnnotations(u_2, m_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm b_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_27;
      t = get_config_0_0(t);
      LocalPopChoice(e_27);
    }
  else
    {
      t = b_27;
      t = fetch_1_0(a_5, t);
    }
  t = x_86(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_31 = ATgetFirst((ATermList) t);
      s_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_31 = NULL,x_31 = NULL;
        static ATerm b_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_31)), not_null(x_31));
          return(t);
        }
        t = s_31;
        t = i_0(t);
        if(((w_31 != NULL) && (w_31 != t)))
          _fail(t);
        else
          w_31 = t;
        t = r_31;
        t = g_0(t);
        if(((x_31 != NULL) && (x_31 != t)))
          _fail(t);
        else
          x_31 = t;
        t = s_31;
        t = reverse_acc_2_0(g_0, b_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_17;
      t = i_0(t);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,f_32 = NULL,b_3 = NULL;
  f_32 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_32);
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_32);
  b_3 = t;
  t = SSLsetAnnotations(b_3, b_32);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm h_32 = NULL;
  h_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_32), term_g_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL;
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_26;
      t = get_config_0_0(t);
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      t = fetch_1_0(e_5, t);
    }
  t = term_o_27;
  t = echo_0_0(t);
  t = term_p_25;
  z_31 = t;
  t = term_q_25;
  a_32 = t;
  t = term_p_27;
  t = t_6(z_31, a_32, t);
  t = reverse_acc_2_0(_id, g_5, t);
  t = map_1_0(i_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm q_71 (ATerm), ATerm t)
{
  static ATerm e_33 (ATerm t)
  {
    ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
    b_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_33 = ATgetFirst((ATermList) t);
        d_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_27 = t;
      int s_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_10 = NULL,b_11 = NULL,o_3 = NULL;
          t = SSLgetAnnotations(b_33);
          x_10 = t;
          t = c_33;
          t = q_71(t);
          b_11 = t;
          t = (ATerm) ATinsert(CheckATermList(d_33), b_11);
          o_3 = t;
          t = SSLsetAnnotations(o_3, x_10);
          LocalPopChoice(s_27);
        }
      else
        {
          t = r_27;
          {
            ATerm q_11 = NULL,t_11 = NULL,p_3 = NULL;
            t = SSLgetAnnotations(b_33);
            q_11 = t;
            t = d_33;
            t = e_33(t);
            t_11 = t;
            t = (ATerm) ATinsert(CheckATermList(t_11), c_33);
            p_3 = t;
            t = SSLsetAnnotations(p_3, q_11);
          }
        }
    }
    return(t);
  }
  t = e_33(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
  k_33 = t;
  {
    ATerm w_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_33;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_28 = ATgetFirst((ATermList) t);
                ATerm c_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_33;
          }
        LocalPopChoice(a_28);
      }
    else
      {
        t = w_27;
        t = (ATerm) ATinsert(ATempty, k_33);
      }
  }
  l_33 = t;
  t = term_v_23;
  m_33 = t;
  t = SSL_printnl(m_33, l_33);
  t = k_33;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_f_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm s_6 (ATerm d_32, ATerm e_32, ATerm t)
{
  t = SSL_strcat(d_32, e_32);
  return(t);
}
ATerm debug_1_0 (ATerm o_66 (ATerm), ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL;
  s_33 = t;
  t = o_66(t);
  t_33 = t;
  t = term_b_16;
  u_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_33), t_33);
  v_33 = t;
  t = SSL_printnl(u_33, v_33);
  t = s_33;
  return(t);
}
ATerm map_1_0 (ATerm g_71 (ATerm), ATerm t)
{
  static ATerm k_34 (ATerm t)
  {
    ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
    h_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_34;
      }
    else
      {
        ATerm o_12 = NULL,u_12 = NULL,v_12 = NULL,t_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_34 = ATgetFirst((ATermList) t);
            j_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_34);
        o_12 = t;
        t = i_34;
        t = g_71(t);
        u_12 = t;
        t = j_34;
        t = k_34(t);
        v_12 = t;
        t = (ATerm) ATinsert(CheckATermList(v_12), u_12);
        t_3 = t;
        t = SSLsetAnnotations(t_3, o_12);
      }
    return(t);
  }
  t = k_34(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_f_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_35 = NULL;
      d_35 = t;
      t = SSL_is_string(d_35);
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_5, t);
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
            {
              ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
              j_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_35 = ATgetArgument(t, 0);
                  t = k_35;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_35 = ATgetArgument(t, 0);
                      t = k_35;
                      {
                        ATerm n_28 = t;
                        int o_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(o_28);
                          }
                        else
                          {
                            t = n_28;
                            t = debug_1_0(p_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_35 = NULL,q_35 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_35 = ATgetArgument(t, 0);
                          l_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_35;
                      t = eval_config_0_0(t);
                      p_35 = t;
                      t = l_35;
                      t = eval_config_0_0(t);
                      q_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_35, q_35);
                      t = s_6(p_35, q_35, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_6 (ATerm a_38, ATerm b_38, ATerm t)
{
  t = SSL_table_get(a_38, b_38);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL;
  u_35 = t;
  t = term_l_25;
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_25, u_35);
  t = t_6(v_35, u_35, t);
  {
    ATerm p_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_35 = NULL,x_35 = NULL;
        t = eval_config_0_0(t);
        w_35 = t;
        t = term_l_25;
        x_35 = t;
        t = SSL_table_put(x_35, u_35, w_35);
        t = w_35;
        LocalPopChoice(r_28);
      }
    else
      {
        t = p_28;
      }
  }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm a_36 = NULL,c_36 = NULL;
  t = term_s_28;
  a_36 = t;
  t = term_m_17;
  c_36 = t;
  t = term_u_28;
  t = w_6(a_36, c_36, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_v_28;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm d_36 = NULL,l_36 = NULL,m_36 = NULL,q_36 = NULL;
  t = term_s_28;
  m_36 = t;
  t = term_m_17;
  q_36 = t;
  t = term_u_28;
  t = w_6(m_36, q_36, t);
  t = term_x_18;
  d_36 = t;
  t = term_m_17;
  l_36 = t;
  t = term_x_28;
  t = w_6(d_36, l_36, t);
  t = term_y_28;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_a_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_5, s_5, t_5, t);
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
      t = Option_3_0(v_5, w_5, l_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_58 (ATerm), ATerm h_58 (ATerm), ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,d_5 = NULL;
  w_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_36 = ATgetFirst((ATermList) t);
      t_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_36);
  r_36 = t;
  t = s_36;
  t = g_58(t);
  u_36 = t;
  t = t_36;
  t = h_58(t);
  v_36 = t;
  t = (ATerm) ATinsert(CheckATermList(v_36), u_36);
  d_5 = t;
  t = SSLsetAnnotations(d_5, r_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_88 (ATerm), ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,l_37 = NULL,m_37 = NULL,f_5 = NULL;
  b_37 = t;
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_29;
        t = v_88(t);
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
      }
  }
  t = b_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_37 = ATgetFirst((ATermList) t);
      e_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_37);
  c_37 = t;
  t = term_f_26;
  m_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_26, d_37);
  t = w_6(m_37, d_37, t);
  t = e_37;
  {
    static ATerm c_38 (ATerm t)
    {
      ATerm i_29 = t;
      int j_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_29 = t;
          int m_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_37 = NULL;
              t_37 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_37;
              LocalPopChoice(m_29);
            }
          else
            {
              t = k_29;
              t = v_88(t);
              t = Cons_2_0(_id, c_38, t);
            }
          LocalPopChoice(j_29);
        }
      else
        {
          t = i_29;
          {
            ATerm w_37 = NULL,x_37 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_37 = ATgetFirst((ATermList) t);
                x_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_37), (ATerm) ATmakeAppl(sym_Undefined_1, w_37));
          }
        }
      return(t);
    }
    t = c_38(t);
  }
  l_37 = t;
  t = (ATerm) ATinsert(CheckATermList(l_37), (ATerm) ATmakeAppl(sym_Program_1, d_37));
  f_5 = t;
  t = SSLsetAnnotations(f_5, c_37);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm q_38 = NULL;
  q_38 = t;
  if(match_string(t, "--help"))
    {
      t = q_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_38;
        }
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm r_38 = NULL,x_38 = NULL;
  t = term_f_27;
  r_38 = t;
  t = term_m_17;
  x_38 = t;
  t = term_n_29;
  t = w_6(r_38, x_38, t);
  t = term_o_29;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_u_29;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_88 (ATerm), ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL;
  l_38 = t;
  t = term_p_25;
  n_38 = t;
  t = term_q_25;
  o_38 = t;
  t = (ATerm) ATempty;
  p_38 = t;
  t = SSL_table_put(n_38, o_38, p_38);
  t = l_38;
  {
    static ATerm q_6 (ATerm t)
    {
      ATerm y_29 = t;
      int z_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_88(t);
          LocalPopChoice(z_29);
        }
      else
        {
          t = y_29;
          {
            ATerm b_30 = t;
            int c_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_6, y_6, z_6, t);
                LocalPopChoice(c_30);
              }
            else
              {
                t = b_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_6, t);
  }
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_39 = NULL;
        e_39 = t;
        {
          ATerm g_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_13 = NULL;
              t = e_39;
              {
                ATerm i_30 = t;
                int j_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_f_27;
                    t = get_config_0_0(t);
                    LocalPopChoice(j_30);
                  }
                else
                  {
                    t = i_30;
                    t = fetch_1_0(a_7, t);
                  }
              }
              t = e_39;
              t = default_system_usage_0_0(t);
              t = term_e_24;
              q_13 = t;
              t = SSL_exit(q_13);
              LocalPopChoice(h_30);
            }
          else
            {
              t = g_30;
              {
                ATerm u_13 = NULL;
                t = term_s_28;
                t = get_config_0_0(t);
                t = e_39;
                t = default_system_about_0_0(t);
                t = term_e_24;
                u_13 = t;
                t = SSL_exit(u_13);
              }
            }
        }
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        {
          ATerm k_30 = t;
          int l_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
              static ATerm c_7 (ATerm t)
              {
                ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,h_5 = NULL;
                k_39 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    j_39 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_39);
                i_39 = t;
                t = j_39;
                if(((h_38 != NULL) && (h_38 != t)))
                  _fail(t);
                else
                  h_38 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, j_39);
                h_5 = t;
                t = SSLsetAnnotations(h_5, i_39);
                return(t);
              }
              t = fetch_1_0(c_7, t);
              t = term_b_16;
              g_39 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_38)), term_m_30);
              h_39 = t;
              t = SSL_printnl(g_39, h_39);
              t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_38)), term_m_30));
              t = default_system_usage_0_0(t);
              t = term_g_8;
              f_39 = t;
              t = SSL_exit(f_39);
              LocalPopChoice(l_30);
            }
          else
            {
              t = k_30;
            }
        }
      }
  }
  i_38 = t;
  t = term_p_25;
  m_38 = t;
  t = SSL_table_destroy(m_38);
  t = i_38;
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm t)
{
  ATerm q_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
  t = parse_options_1_0(z_86, t);
  q_39 = t;
  t = term_n_30;
  v_39 = t;
  t = SSL_table_create(v_39);
  t = term_n_30;
  t_39 = t;
  t = term_r_30;
  u_39 = t;
  t = SSL_table_put(t_39, u_39, q_39);
  t = q_39;
  t = b_87(t);
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_87, t);
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        {
          ATerm u_30 = t;
          int v_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_87(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_30);
            }
          else
            {
              t = u_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm x_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(z_30);
    }
  else
    {
      t = x_30;
      {
        ATerm c_31 = t;
        int g_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(g_31);
          }
        else
          {
            t = c_31;
            {
              ATerm h_31 = t;
              int i_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(j_7, l_7, m_7, t);
                  LocalPopChoice(i_31);
                }
              else
                {
                  t = h_31;
                  {
                    ATerm j_31 = t;
                    int k_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(k_31);
                      }
                    else
                      {
                        t = j_31;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = xtc_io_1_0(o_7, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm z_39 = NULL,e_40 = NULL;
  t = term_l_31;
  z_39 = t;
  t = term_m_17;
  e_40 = t;
  t = term_m_31;
  t = w_6(z_39, e_40, t);
  t = term_p_31;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_q_31;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = xtc_sglr_1_0(w_7, t);
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_40 = NULL,m_40 = NULL;
        m_40 = t;
        if(match_cons(t, sym_FILE_1))
          {
            l_40 = ATgetArgument(t, 0);
            {
              ATerm p_14 = NULL,j_5 = NULL;
              t = SSLgetAnnotations(m_40);
              p_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_40);
              j_5 = t;
              t = SSLsetAnnotations(j_5, p_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_40;
          }
        LocalPopChoice(u_31);
        t = xtc_transform_file_2_0(x_7, pass_verbose_0_0, t);
      }
    else
      {
        t = t_31;
        t = xtc_transform_term_2_0(y_7, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_v_31;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_y_31;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(d_7, default_usage_0_0, _id, i_7, t);
  return(t);
}
