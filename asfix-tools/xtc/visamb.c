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
ATerm term_c_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_q_30;
ATerm term_o_30;
ATerm term_i_30;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_k_29;
ATerm term_b_29;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_e_28;
ATerm term_u_27;
ATerm term_s_27;
ATerm term_p_27;
ATerm term_n_27;
ATerm term_b_27;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_q_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_x_23;
ATerm term_r_23;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_x_21;
ATerm term_s_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_c_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_h_20;
ATerm term_e_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_q_19;
ATerm term_k_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_u_17;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
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
ATerm term_d_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_o_8;
ATerm term_k_8;
ATerm term_u_4;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_9, term_e_9, term_g_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_9, term_l_9, term_n_9);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_9, term_r_9, term_s_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_w_9, term_y_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_10, term_c_10, term_d_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_h_10, term_i_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_n_10, term_p_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_10, term_s_10, term_t_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_d_11, term_e_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_h_11, term_j_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_q_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_w_11, term_x_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_d_12, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_h_12, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_m_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_q_12, term_r_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_v_12, term_y_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_e_13, term_g_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_y_13);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_k_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_b_15, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_g_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_m_15, term_t_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_y_15, term_z_15);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_u_20, term_h_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__2, term_u_20, term_v_20);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("visamb.pp.af", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.pp.af", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym__2, term_c_18, term_b_18);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__2, term_k_18, term_a_25);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_25);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_f_18);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_a_26, term_b_26);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_f_18);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__2, term_q_28, term_f_18);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym__2, term_n_27, term_f_18);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_d_31, term_f_18);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Vis-amb", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm read_from_0_0 (ATerm t);
static ATerm u_5 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm v_5 (ATerm y_64 (ATerm), ATerm j_165, ATerm v_17, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm t);
static ATerm w_5 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm a_70 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm n_63 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm u_83 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm e_70 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_7 (ATerm s_6, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm h_6 (ATerm o_79 (ATerm), ATerm s_34, ATerm q_34, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm w_80 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm v_80 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm x_80 (ATerm), ATerm t);
static ATerm z_5 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm a_6 (ATerm s_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm d_1 (ATerm t);
static ATerm b_6 (ATerm g_36, ATerm h_36, ATerm i_36, ATerm t);
static ATerm c_6 (ATerm z_80 (ATerm), ATerm q_36, ATerm p_36, ATerm t);
static ATerm g_6 (ATerm r_38, ATerm s_38, ATerm t);
static ATerm c_13 (ATerm o_12, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_6 (ATerm t_17, ATerm t);
static ATerm e_6 (ATerm a_39, ATerm b_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_15 (ATerm w_13, ATerm t);
static ATerm p_15 (ATerm a_14, ATerm b_14, ATerm c_14, ATerm t);
static ATerm q_15 (ATerm t_14, ATerm u_14, ATerm x_14, ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm k_77 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm t_67 (ATerm), ATerm u_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_20 (ATerm o_19, ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm build_pp_tables_0_0 (ATerm t);
static ATerm i_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm j_6 (ATerm o_35, ATerm p_35, ATerm t);
ATerm end_scope_1_0 (ATerm l_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm k_79 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm g_83 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm h_83 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_6 (ATerm j_37, ATerm k_37, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_6 (ATerm j_35, ATerm k_35, ATerm i_35, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_6 (ATerm e_33, ATerm f_33, ATerm t);
ATerm foldr_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm s_80 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm need_help_1_0 (ATerm w_84 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_69 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm n_6 (ATerm z_31, ATerm a_32, ATerm t);
ATerm debug_1_0 (ATerm w_64 (ATerm), ATerm t);
ATerm map_1_0 (ATerm o_69 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm o_6 (ATerm a_37, ATerm b_37, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm o_56 (ATerm), ATerm p_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_86 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm parse_options_1_0 (ATerm t_86 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm e_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_u_4;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          e_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_k_8);
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_0, (ATerm) ATinsert(ATempty, term_k_8));
      t = g_6(e_0, u_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm u_5 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm w_0 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_0);
  return(t);
}
static ATerm v_5 (ATerm y_64 (ATerm), ATerm j_165, ATerm v_17, ATerm t)
{
  ATerm x_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_165, term_o_8);
  t = f_6(t);
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_0, v_17);
  t = y_64(t);
  t = fclose_0_0(t);
  t = v_17;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm f_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_8 = ATgetArgument(t, 0);
      if(match_cons(r_8, sym_Stream_1))
        {
          f_1 = ATgetArgument(r_8, 0);
        }
      else
        _fail(t);
      g_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(f_1, g_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm t)
{
  ATerm a_1 = NULL,c_1 = NULL;
  c_1 = t;
  t = xtc_new_file_0_0(t);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, c_1);
  t = v_5(a_0, a_1, c_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, a_1);
  t = xtc_transform_file_2_0(t_82, u_82, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm w_5 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
  t_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      u_2 = ATgetArgument(t, 0);
      {
        ATerm h_0 = NULL,j_0 = NULL;
        t = SSL_int_to_string(u_2);
        h_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_8), h_0), term_s_8);
        j_0 = t;
        t = SSL_concat_strings(j_0);
      }
    }
  else
    {
      ATerm j_1 = NULL,k_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          u_2 = ATgetArgument(t, 0);
          v_2 = ATgetArgument(t, 1);
          w_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(v_2);
      j_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_2), term_w_8), j_1), term_u_8), u_2);
      k_1 = t;
      t = SSL_concat_strings(k_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm a_70 (ATerm), ATerm t)
{
  ATerm z_2 = NULL;
  static ATerm b_0 (ATerm t)
  {
    t = a_70(t);
    if(((z_2 != NULL) && (z_2 != t)))
      _fail(t);
    else
      z_2 = t;
    return(t);
  }
  t = fetch_1_0(b_0, t);
  t = not_null(z_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm a_3 = NULL;
  a_3 = t;
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm c_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm a_9 = ATgetArgument(t, 0);
              if((a_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm c_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_16), term_u_15), term_j_15), term_d_15), term_v_14), term_l_14), term_z_13), term_t_13), term_o_13), term_i_13), term_z_12), term_s_12), term_n_12), term_j_12), term_f_12), term_y_11), term_t_11), term_k_11), term_f_11), term_y_10), term_u_10), term_q_10), term_j_10), term_e_10), term_a_10), term_t_9), term_p_9), term_i_9);
        t = fetch_elem_1_0(c_0, t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, a_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm i_3 = NULL,s_3 = NULL;
  i_3 = t;
  {
    ATerm b_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_16 = ATgetArgument(t, 0);
            s_3 = ATgetArgument(t, 1);
            {
              ATerm f_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_16);
        {
          ATerm g_16 = t;
          int j_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_1 = NULL,y_1 = NULL,z_1 = NULL;
              t = s_3;
              {
                ATerm n_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_16;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              w_1 = t;
              t = term_o_16;
              y_1 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, w_1), term_p_16);
              z_1 = t;
              t = SSL_printnl(y_1, z_1);
              t = (ATerm) ATmakeAppl(sym__2, term_o_16, (ATerm) ATinsert(ATinsert(ATempty, w_1), term_p_16));
              LocalPopChoice(j_16);
            }
          else
            {
              t = g_16;
              t = i_3;
            }
        }
      }
    else
      {
        t = b_16;
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
ATerm fork_and_wait_1_0 (ATerm n_63 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  c_4 = t;
  t = fork_0_0(t);
  b_4 = t;
  {
    ATerm r_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = c_4;
        t = n_63(t);
        LocalPopChoice(t_16);
      }
    else
      {
        t = r_16;
        t = SSL_waitpid(b_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_16 = ATgetArgument(t, 0);
            if(((ATgetType(u_16) != AT_INT) || (ATgetInt((ATermInt) u_16) != 0)))
              _fail(t);
            {
              ATerm a_17 = ATgetArgument(t, 1);
            }
            {
              ATerm b_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  ATerm e_4 = NULL,g_4 = NULL;
  g_4 = t;
  t = u_83(t);
  t = xtc_find_0_0(t);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_4, g_4);
  {
    static ATerm f_0 (ATerm t)
    {
      ATerm j_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, e_4, g_4);
      t = w_5(e_4, g_4, t);
      t = term_u_17;
      j_4 = t;
      t = SSL_exit(j_4);
      return(t);
    }
    t = fork_and_wait_1_0(f_0, t);
  }
  t = g_4;
  return(t);
}
ATerm at_end_1_0 (ATerm e_70 (ATerm), ATerm t)
{
  static ATerm n_5 (ATerm t)
  {
    ATerm j_5 = NULL,k_5 = NULL,m_5 = NULL;
    m_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_5 = ATgetFirst((ATermList) t);
        k_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_2 = NULL,i_2 = NULL,p_1 = NULL;
          t = SSLgetAnnotations(m_5);
          f_2 = t;
          t = k_5;
          t = n_5(t);
          i_2 = t;
          t = (ATerm) ATinsert(CheckATermList(i_2), j_5);
          p_1 = t;
          t = SSLsetAnnotations(p_1, f_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_5;
        t = e_70(t);
      }
    return(t);
  }
  t = n_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL;
  m_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_4;
    }
  else
    {
      static ATerm m_0 (ATerm t)
      {
        t = not_null(o_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_4 = ATgetFirst((ATermList) t);
          if(((o_4 != NULL) && (o_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_4;
      t = at_end_1_0(m_0, t);
    }
  return(t);
}
static ATerm d_7 (ATerm s_6, ATerm t)
{
  ATerm t_6 = NULL;
  t = SSL_explode_term(s_6);
  if(match_cons(t, sym__2))
    {
      ATerm w_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
  x_6 = t;
  if(match_cons(t, sym__2))
    {
      v_6 = ATgetArgument(t, 0);
      w_6 = ATgetArgument(t, 1);
      {
        ATerm x_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm q_0 (ATerm t)
            {
              t = w_6;
              return(t);
            }
            t = v_6;
            t = at_end_1_0(q_0, t);
            LocalPopChoice(y_17);
          }
        else
          {
            t = x_17;
            t = d_7(x_6, t);
          }
      }
    }
  else
    {
      t = d_7(x_6, t);
    }
  return(t);
}
static ATerm h_6 (ATerm o_79 (ATerm), ATerm s_34, ATerm q_34, ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
  k_7 = t;
  t = o_79(t);
  f_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_7, s_34, q_34);
  t = p_6(f_7, s_34, q_34, t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_7 = NULL;
        t = term_b_18;
        p_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_7, term_b_18);
        t = o_6(f_7, p_7, t);
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_7 = ATgetFirst((ATermList) t);
      h_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_b_18;
  l_7 = t;
  t = (ATerm) ATinsert(CheckATermList(h_7), (ATerm) ATinsert(CheckATermList(g_7), s_34));
  m_7 = t;
  t = SSL_table_put(f_7, l_7, m_7);
  t = k_7;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_c_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm r_7 = NULL,t_7 = NULL,u_7 = NULL,x_7 = NULL,y_7 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
  t = P__tmpdir_0_0(t);
  x_7 = t;
  t = term_d_18;
  d_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_7, term_d_18);
  t = n_6(x_7, d_8, t);
  b_8 = t;
  t = term_e_18;
  c_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_8, term_e_18);
  t = n_6(b_8, c_8, t);
  y_7 = t;
  t = SSL_mkstemp(y_7);
  if(match_cons(t, sym__2))
    {
      t_7 = ATgetArgument(t, 0);
      r_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_18;
  u_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_7, term_f_18);
  t = h_6(s_0, t_7, u_7, t);
  t = SSL_close(r_7);
  t = t_7;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL;
  h_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm j_8 = NULL,m_8 = NULL;
      t = h_8;
      t = xtc_new_file_0_0(t);
      j_8 = t;
      t = v_0(t);
      m_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_8, (ATerm) ATinsert(ATinsert(ATempty, j_8), term_g_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_8);
    }
  else
    {
      ATerm p_8 = NULL,q_8 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_8;
      t = xtc_new_file_0_0(t);
      p_8 = t;
      t = v_0(t);
      q_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_8), term_g_18), i_8), term_h_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_8);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm v_8 = NULL;
  static ATerm y_0 (ATerm t)
  {
    ATerm x_8 = NULL,b_9 = NULL;
    x_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_8), x_8);
    t = o_6(not_null(v_8), x_8, t);
    b_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_8, b_9);
    return(t);
  }
  if(((v_8 != NULL) && (v_8 != t)))
    _fail(t);
  else
    v_8 = t;
  t = SSL_table_keys(v_8);
  t = map_1_0(y_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm f_9 = NULL;
  f_9 = t;
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_9 = NULL;
        t = term_k_18;
        t = get_config_0_0(t);
        h_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_9, term_b_15);
        t = geq_0_0(t);
        t = f_9;
        t = w_80(t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        t = f_9;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm m_9 = NULL;
  m_9 = t;
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_9 = NULL;
        t = term_k_18;
        t = get_config_0_0(t);
        o_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_9, term_n_11);
        t = geq_0_0(t);
        t = m_9;
        t = v_80(t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = m_9;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm x_9 = NULL;
  x_9 = t;
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_10 = NULL;
        t = term_k_18;
        t = get_config_0_0(t);
        f_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_10, term_w_9);
        t = geq_0_0(t);
        t = x_9;
        t = x_80(t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = x_9;
      }
  }
  return(t);
}
static ATerm z_5 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  t = w_73(t);
  {
    static ATerm z_0 (ATerm t)
    {
      ATerm m_10 = NULL;
      m_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, m_10);
      t = v_73(t);
      return(t);
    }
    t = fetch_1_0(z_0, t);
  }
  t = p_24;
  return(t);
}
static ATerm a_6 (ATerm s_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  static ATerm l_11 (ATerm t)
  {
    ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL;
    a_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_11 = ATgetFirst((ATermList) t);
            c_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_18 = t;
          int x_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_11;
              {
                static ATerm b_1 (ATerm t)
                {
                  t = l_24;
                  return(t);
                }
                t = z_5(s_73, b_1, b_11, c_11, t);
              }
              t = l_11(t);
              LocalPopChoice(x_18);
            }
          else
            {
              t = w_18;
              {
                ATerm f_3 = NULL,j_3 = NULL,r_1 = NULL;
                t = SSLgetAnnotations(a_11);
                f_3 = t;
                t = c_11;
                t = l_11(t);
                j_3 = t;
                t = (ATerm) ATinsert(CheckATermList(j_3), b_11);
                r_1 = t;
                t = SSLsetAnnotations(r_1, f_3);
              }
            }
        }
      }
    return(t);
  }
  t = m_24;
  t = l_11(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm a_12 = NULL;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      if((a_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm g_36, ATerm h_36, ATerm i_36, ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,v_11 = NULL;
  r_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_36, h_36);
  {
    ATerm z_18 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_19 = ATgetArgument(t, 0);
            ATerm f_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_36, h_36);
        t = o_6(g_36, h_36, t);
        LocalPopChoice(b_19);
      }
    else
      {
        t = z_18;
        t = (ATerm) ATempty;
      }
  }
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_11, i_36);
  t = a_6(d_1, v_11, i_36, t);
  s_11 = t;
  t = SSL_table_put(g_36, h_36, s_11);
  t = r_11;
  return(t);
}
static ATerm c_6 (ATerm z_80 (ATerm), ATerm q_36, ATerm p_36, ATerm t)
{
  static ATerm e_1 (ATerm t)
  {
    ATerm b_12 = NULL,c_12 = NULL;
    if(match_cons(t, sym__2))
      {
        b_12 = ATgetArgument(t, 0);
        c_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, q_36, b_12, c_12);
    t = z_80(t);
    return(t);
  }
  t = p_36;
  t = map_1_0(e_1, t);
  return(t);
}
static ATerm g_6 (ATerm r_38, ATerm s_38, ATerm t)
{
  t = SSL_access(r_38, s_38);
  return(t);
}
static ATerm c_13 (ATerm o_12, ATerm t)
{
  t = SSL_fclose(o_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL;
  x_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_12 = ATgetArgument(t, 0);
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_12);
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            t = c_13(x_12, t);
          }
      }
    }
  else
    {
      t = c_13(x_12, t);
    }
  return(t);
}
static ATerm d_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm e_6 (ATerm a_39, ATerm b_39, ATerm t)
{
  ATerm d_13 = NULL;
  t = SSL_fopen(a_39, b_39);
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_13 = NULL;
  t = SSL_stdin_stream();
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_13 = NULL;
  t = SSL_stdout_stream();
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_13 = NULL;
  t = SSL_stderr_stream();
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_13);
  return(t);
}
static ATerm o_15 (ATerm w_13, ATerm t)
{
  ATerm x_13 = NULL;
  t = SSL_explode_term(w_13);
  if(match_cons(t, sym__2))
    {
      ATerm i_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_19 = ATgetArgument(t, 1);
        if(((ATgetType(j_19) == AT_LIST) && !(ATisEmpty(j_19))))
          {
            x_13 = ATgetFirst((ATermList) j_19);
            {
              ATerm k_19 = (ATerm) ATgetNext((ATermList) j_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_13;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_13;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_15 (ATerm a_14, ATerm b_14, ATerm c_14, ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,j_14 = NULL,p_14 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(c_14);
  j_14 = t;
  t = a_14;
  if(match_cons(t, sym_Path_1))
    {
      p_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_14, b_14);
  t_1 = t;
  t = SSLsetAnnotations(t_1, j_14);
  if(match_cons(t, sym__2))
    {
      d_14 = ATgetArgument(t, 0);
      e_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(d_14, e_14, t);
  return(t);
}
static ATerm q_15 (ATerm t_14, ATerm u_14, ATerm x_14, ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,f_15 = NULL,v_1 = NULL;
  t = SSLgetAnnotations(x_14);
  a_15 = t;
  t = SSL_is_string(t_14);
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_15, u_14);
  v_1 = t;
  t = SSLsetAnnotations(v_1, a_15);
  if(match_cons(t, sym__2))
    {
      y_14 = ATgetArgument(t, 0);
      z_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(y_14, z_14, t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm h_15 = NULL,l_15 = NULL,n_15 = NULL;
  h_15 = t;
  if(match_cons(t, sym__2))
    {
      l_15 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_15(h_15, t);
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            {
              ATerm n_19 = t;
              int p_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_15(l_15, n_15, h_15, t);
                  LocalPopChoice(p_19);
                }
              else
                {
                  t = n_19;
                  t = q_15(l_15, n_15, h_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_15(h_15, t);
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_q_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,v_15 = NULL;
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_15 = NULL;
      w_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_15, term_z_19);
      t = f_6(t);
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
      t = debug_1_0(h_1, t);
      _fail(t);
    }
  s_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(v_15, t);
  r_15 = t;
  t = s_15;
  t = fclose_0_0(t);
  t = r_15;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_a_20;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_e_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_16 = NULL,h_16 = NULL;
      c_16 = t;
      t = (ATerm) ATinsert(ATempty, term_h_20);
      h_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_16, (ATerm) ATinsert(ATempty, term_h_20));
      t = g_6(c_16, h_16, t);
      LocalPopChoice(g_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = f_20;
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_20 = t;
            if((PushChoice() == 0))
              {
                ATerm i_16 = NULL,k_16 = NULL;
                i_16 = t;
                t = (ATerm) ATinsert(ATempty, term_k_8);
                k_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_16, (ATerm) ATinsert(ATempty, term_k_8));
                t = g_6(i_16, k_16, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_20;
              }
            t = debug_1_0(i_1, t);
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            t = debug_1_0(l_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = debug_1_0(n_1, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL;
  f_17 = t;
  t = term_o_16;
  g_17 = t;
  t = (ATerm) ATinsert(ATempty, term_p_20);
  h_17 = t;
  t = SSL_printnl(g_17, h_17);
  t = f_17;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
  if(match_cons(t, sym__3))
    {
      i_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
      k_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_6(i_17, j_17, k_17, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,p_17 = NULL;
  l_17 = t;
  t = term_o_16;
  m_17 = t;
  t = (ATerm) ATinsert(ATempty, term_r_20);
  p_17 = t;
  t = SSL_printnl(m_17, p_17);
  t = l_17;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL;
  q_17 = t;
  t = term_o_16;
  r_17 = t;
  t = (ATerm) ATinsert(ATempty, term_p_20);
  s_17 = t;
  t = SSL_printnl(r_17, s_17);
  t = q_17;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,q_16 = NULL,s_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,c_17 = NULL;
  l_16 = t;
  t = if_verbose5_1_0(m_1, t);
  {
    ATerm s_20 = t;
    if((PushChoice() == 0))
      {
        ATerm d_17 = NULL,e_17 = NULL;
        t = term_u_20;
        d_17 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, l_16);
        e_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_20, (ATerm) ATmakeAppl(sym_Imported_1, l_16));
        t = o_6(d_17, e_17, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_20;
      }
  }
  q_16 = t;
  t = term_u_20;
  y_16 = t;
  t = term_v_20;
  z_16 = t;
  t = (ATerm) ATinsert(ATempty, l_16);
  c_17 = t;
  t = SSL_table_put(y_16, z_16, c_17);
  t = q_16;
  t = if_verbose4_1_0(o_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(s_1, t);
  m_16 = t;
  t = term_u_20;
  x_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_20, m_16);
  t = c_6(u_1, x_16, m_16, t);
  t = if_verbose6_1_0(x_1, t);
  t = term_u_20;
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, l_16);
  v_16 = t;
  t = (ATerm) ATempty;
  w_16 = t;
  t = SSL_table_put(s_16, v_16, w_16);
  t = (ATerm) ATmakeAppl(sym__3, term_u_20, (ATerm)ATmakeAppl(sym_Imported_1, l_16), (ATerm) ATempty);
  t = if_verbose4_1_0(a_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm k_77 (ATerm), ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_18;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_18 = ATgetFirst((ATermList) t);
          n_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_4 = NULL,y_4 = NULL,e_5 = NULL,k_2 = NULL;
            t = SSLgetAnnotations(l_18);
            v_4 = t;
            t = m_18;
            t = k_77(t);
            y_4 = t;
            t = n_18;
            t = filter_1_0(k_77, t);
            e_5 = t;
            t = (ATerm) ATinsert(CheckATermList(e_5), y_4);
            k_2 = t;
            t = SSLsetAnnotations(k_2, v_4);
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            t = n_18;
            t = filter_1_0(k_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm t_67 (ATerm), ATerm u_67 (ATerm), ATerm t)
{
  static ATerm q_18 (ATerm t)
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_67(t);
        t = q_18(t);
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        t = u_67(t);
      }
    return(t);
  }
  t = q_18(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_21;
      t = get_config_0_0(t);
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_18 = NULL;
            t = term_f_21;
            r_18 = t;
            t = SSL_getenv(r_18);
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_g_21;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm c_19 = NULL,e_19 = NULL;
  t = term_u_20;
  c_19 = t;
  t = term_h_21;
  e_19 = t;
  t = term_i_21;
  t = o_6(c_19, e_19, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm j_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_21;
      }
  }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_k_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm u_18 = NULL;
  t = if_verbose5_1_0(b_2, t);
  u_18 = t;
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_18 = NULL,y_18 = NULL;
        t = term_u_20;
        v_18 = t;
        t = term_v_20;
        y_18 = t;
        t = term_n_21;
        t = o_6(v_18, y_18, t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        {
          ATerm a_19 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          a_19 = t;
          t = repeat_2_0(d_2, _id, t);
          t = a_19;
        }
      }
  }
  t = u_18;
  t = if_verbose5_1_0(e_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm l_20 (ATerm o_19, ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  t = term_u_20;
  s_19 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, o_19);
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_20, (ATerm) ATmakeAppl(sym_Tool_1, o_19));
  t = o_6(s_19, t_19, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_21 = ATgetFirst((ATermList) t);
      if(match_cons(p_21, sym__2))
        {
          ATerm r_21 = ATgetArgument(p_21, 0);
          r_19 = ATgetArgument(p_21, 1);
        }
      else
        _fail(t);
      {
        ATerm q_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_19;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_u_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
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
      ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
      t = if_verbose5_1_0(h_2, t);
      t = xtc_load_0_0(t);
      w_19 = t;
      if(match_cons(t, sym__2))
        {
          u_19 = ATgetArgument(t, 0);
          v_19 = ATgetArgument(t, 1);
          {
            ATerm v_21 = t;
            int w_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
                t = term_u_20;
                c_20 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, u_19);
                d_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_u_20, (ATerm) ATmakeAppl(sym_Tool_1, u_19));
                t = o_6(c_20, d_20, t);
                {
                  static ATerm l_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((v_19 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((b_20 != NULL) && (b_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          b_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(l_2, t);
                }
                t = not_null(b_20);
                LocalPopChoice(w_21);
              }
            else
              {
                t = v_21;
                t = l_20(w_19, t);
              }
          }
        }
      else
        {
          t = l_20(w_19, t);
        }
      t = if_verbose5_1_0(n_2, t);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm k_20 = NULL,t_5 = NULL,x_5 = NULL;
        k_20 = t;
        t = term_o_16;
        t_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_22), k_20), term_x_21);
        x_5 = t;
        t = SSL_printnl(t_5, x_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_22), k_20), term_x_21);
        t = if_verbose5_1_0(q_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm build_pp_tables_0_0 (ATerm t)
{
  ATerm q_20 = NULL,t_20 = NULL;
  t = term_b_22;
  t = xtc_find_0_0(t);
  q_20 = t;
  t = term_c_22;
  t = xtc_find_0_0(t);
  t_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_20), term_d_22), q_20), term_d_22);
  return(t);
}
static ATerm i_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL;
  y_21 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_6 = NULL;
        t = y_21;
        t = r_0(t);
        y_6 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = y_6;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = y_6;
          }
        t = (ATerm) ATmakeAppl(sym__2, z_21, y_6);
        t = i_6(z_21, y_6, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, z_21);
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        {
          ATerm j_22 = t;
          int k_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_7 = NULL;
              t = y_21;
              t = r_0(t);
              o_7 = t;
              {
                ATerm l_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm q_7 = NULL;
                    q_7 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = q_7;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = q_7;
                          }
                        else
                          {
                            t = q_7;
                            if((z_21 != t))
                              {
                                _fail(t);
                              }
                            t = q_7;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_22;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, z_21, o_7);
              t = i_6(z_21, o_7, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_21);
              LocalPopChoice(k_22);
            }
          else
            {
              t = j_22;
              t = y_21;
              t = r_0(t);
              if((z_21 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_21);
            }
        }
      }
  }
  return(t);
}
static ATerm j_6 (ATerm o_35, ATerm p_35, ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL;
  h_22 = t;
  {
    ATerm m_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_35, p_35);
        t = o_6(o_35, p_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_22 = ATgetFirst((ATermList) t);
            g_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(s_22);
        t = SSL_table_put(o_35, p_35, g_22);
        t = (ATerm) ATmakeAppl(sym__3, o_35, p_35, g_22);
      }
    else
      {
        t = m_22;
        t = SSL_table_remove(o_35, p_35);
        t = (ATerm) ATmakeAppl(sym__2, o_35, p_35);
      }
  }
  t = h_22;
  return(t);
}
ATerm end_scope_1_0 (ATerm l_79 (ATerm), ATerm t)
{
  ATerm i_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
  p_22 = t;
  t = l_79(t);
  o_22 = t;
  {
    ATerm v_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_22 = NULL;
        t = term_b_18;
        r_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_22, term_b_18);
        t = o_6(o_22, r_22, t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = v_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_22 = ATgetFirst((ATermList) t);
      i_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_b_18;
  q_22 = t;
  t = SSL_table_put(o_22, q_22, i_22);
  t = n_22;
  {
    static ATerm s_2 (ATerm t)
    {
      ATerm u_22 = NULL;
      u_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_22, u_22);
      t = j_6(o_22, u_22, t);
      return(t);
    }
    t = map_1_0(s_2, t);
  }
  t = p_22;
  return(t);
}
ATerm restore_always_2_0 (ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm t)
{
  ATerm b_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_80(t);
      t = h_80(t);
      LocalPopChoice(d_23);
    }
  else
    {
      t = b_23;
      t = h_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,c_23 = NULL;
  x_22 = t;
  t = k_79(t);
  w_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_22, term_b_18);
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_23 = ATgetArgument(t, 0);
            ATerm h_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_b_18;
        i_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_22, term_b_18);
        t = o_6(w_22, i_23, t);
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        t = (ATerm) ATempty;
      }
  }
  y_22 = t;
  t = term_b_18;
  z_22 = t;
  t = (ATerm) ATinsert(CheckATermList(y_22), (ATerm) ATempty);
  c_23 = t;
  t = SSL_table_put(w_22, z_22, c_23);
  t = x_22;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_c_18;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm s_23 = NULL;
  s_23 = t;
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(s_23);
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = s_23;
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_c_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm g_83 (ATerm), ATerm t)
{
  ATerm m_23 = NULL;
  static ATerm c_3 (ATerm t)
  {
    ATerm n_23 = NULL;
    n_23 = t;
    {
      ATerm l_23 = t;
      int q_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_23 = NULL,p_23 = NULL;
          t = term_c_18;
          o_23 = t;
          t = term_b_18;
          p_23 = t;
          t = term_r_23;
          t = o_6(o_23, p_23, t);
          LocalPopChoice(q_23);
        }
      else
        {
          t = l_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((m_23 != NULL) && (m_23 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          m_23 = ATgetFirst((ATermList) t);
        {
          ATerm t_23 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = m_23;
    t = map_1_0(d_3, t);
    t = n_23;
    t = end_scope_1_0(e_3, t);
    return(t);
  }
  t = begin_scope_1_0(b_3, t);
  t = restore_always_2_0(g_83, c_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm u_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_18;
      t = get_config_0_0(t);
      LocalPopChoice(w_23);
    }
  else
    {
      t = u_23;
      t = term_x_23;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  static ATerm g_3 (ATerm t)
  {
    ATerm d_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL;
        t = term_h_18;
        t = get_config_0_0(t);
        v_23 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_23);
        LocalPopChoice(i_24);
      }
    else
      {
        t = d_24;
        t = term_u_4;
      }
    t = h_83(t);
    t = copy_to_1_0(h_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(g_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
  y_23 = t;
  t = term_f_18;
  t = whoami_0_0(t);
  z_23 = t;
  t = term_o_16;
  b_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_24), z_23), term_r_24);
  c_24 = t;
  t = SSL_printnl(b_24, c_24);
  t = term_e_9;
  a_24 = t;
  t = SSL_exit(a_24);
  t = y_23;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm e_24 = NULL;
  e_24 = t;
  if(match_string(t, "-k"))
    {
      t = e_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_24;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
  f_24 = t;
  t = SSL_string_to_int(f_24);
  g_24 = t;
  t = term_t_24;
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_24, g_24);
  t = r_6(h_24, g_24, t);
  t = f_24;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_3, l_3, m_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm j_24 = NULL;
  j_24 = t;
  if(match_string(t, "-S"))
    {
      t = j_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_24;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm k_24 = NULL,n_24 = NULL;
  t = term_k_18;
  k_24 = t;
  t = term_a_25;
  n_24 = t;
  t = term_c_25;
  t = r_6(k_24, n_24, t);
  t = term_d_25;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_i_25;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm o_24 = NULL,u_24 = NULL,v_24 = NULL;
  o_24 = t;
  t = SSL_string_to_int(o_24);
  u_24 = t;
  t = term_k_18;
  v_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_18, u_24);
  t = r_6(v_24, u_24, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_24);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_j_25;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL;
  t = term_k_25;
  w_24 = t;
  t = term_f_18;
  x_24 = t;
  t = term_m_25;
  t = r_6(w_24, x_24, t);
  t = term_n_25;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_q_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_3, q_3, r_3, t);
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_3, u_3, v_3, t);
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            t = Option_3_0(w_3, x_3, y_3, t);
          }
      }
    }
  return(t);
}
static ATerm r_6 (ATerm j_37, ATerm k_37, ATerm t)
{
  ATerm y_24 = NULL;
  t = term_z_25;
  y_24 = t;
  t = SSL_table_put(y_24, j_37, k_37);
  t = (ATerm) ATmakeAppl(sym__3, term_z_25, j_37, k_37);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm b_25 = NULL,e_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
      t = term_f_18;
      t = i_0(t);
      f_25 = t;
      t = term_a_26;
      g_25 = t;
      t = term_b_26;
      h_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_26, term_b_26, f_25);
      t = p_6(g_25, h_25, f_25, t);
      _fail(t);
    }
  else
    {
      ATerm l_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_25 = ATgetFirst((ATermList) t);
          e_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_25;
      t = d_0(t);
      t = term_f_18;
      t = g_0(t);
      l_25 = t;
      t = (ATerm) ATinsert(CheckATermList(e_25), l_25);
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  if(match_string(t, "-o"))
    {
      t = o_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_25;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm p_25 = NULL,r_25 = NULL;
  p_25 = t;
  t = term_g_18;
  r_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_18, p_25);
  t = r_6(r_25, p_25, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_25);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, a_4, d_4, t);
  return(t);
}
static ATerm p_6 (ATerm j_35, ATerm k_35, ATerm i_35, ATerm t)
{
  ATerm u_25 = NULL,x_25 = NULL,y_25 = NULL;
  u_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_35, k_35);
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_26 = ATgetArgument(t, 0);
            ATerm g_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_35, k_35);
        t = o_6(j_35, k_35, t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = (ATerm) ATempty;
      }
  }
  x_25 = t;
  t = (ATerm) ATinsert(CheckATermList(x_25), i_35);
  y_25 = t;
  t = SSL_table_put(j_35, k_35, y_25);
  t = u_25;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,p_26 = NULL,q_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
      t = term_f_18;
      t = p_0(t);
      t_26 = t;
      t = term_a_26;
      u_26 = t;
      t = term_b_26;
      v_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_26, term_b_26, t_26);
      t = p_6(u_26, v_26, t_26, t);
      _fail(t);
    }
  else
    {
      ATerm z_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_26 = ATgetFirst((ATermList) t);
          n_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_26 = ATgetFirst((ATermList) t);
          q_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_26;
      t = n_0(t);
      t = p_26;
      t = o_0(t);
      z_26 = t;
      t = (ATerm) ATinsert(CheckATermList(q_26), z_26);
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm c_27 = NULL;
  c_27 = t;
  if(match_string(t, "-i"))
    {
      t = c_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_27;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL;
  d_27 = t;
  t = term_h_18;
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_18, d_27);
  t = r_6(e_27, d_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_27);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_4, h_4, i_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_18;
  t = whoami_0_0(t);
  f_27 = t;
  t = term_o_16;
  h_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_26), f_27);
  i_27 = t;
  t = SSL_printnl(h_27, i_27);
  t = term_e_9;
  g_27 = t;
  t = SSL_exit(g_27);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_26;
  t = get_config_0_0(t);
  return(t);
}
static ATerm k_6 (ATerm e_33, ATerm f_33, ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_33, f_33);
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      t = SSL_addr(e_33, f_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,o_27 = NULL;
  k_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_27;
      t = g_76(t);
    }
  else
    {
      ATerm t_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_27 = ATgetFirst((ATermList) t);
          o_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_27;
      t = foldr_2_0(g_76, h_76, t);
      t_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_27, t_27);
      t = h_76(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_a_25;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm l_8 = NULL,n_8 = NULL;
  if(match_cons(t, sym__2))
    {
      l_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(l_8, n_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_28 = NULL,e_8 = NULL,f_8 = NULL;
  t = times_0_0(t);
  f_8 = t;
  t = SSL_explode_term(f_8);
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      e_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_8;
  t = foldr_2_0(k_4, l_4, t);
  b_28 = t;
  t = SSL_TicksToSeconds(b_28);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
  y_28 = t;
  if(match_cons(t, sym__2))
    {
      z_28 = ATgetArgument(t, 0);
      a_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_29;
        if((z_28 != t))
          {
            _fail(t);
          }
        t = y_28;
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
        {
          ATerm w_26 = t;
          int x_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_28, a_29);
              LocalPopChoice(x_26);
            }
          else
            {
              t = w_26;
              t = SSL_gtr(z_28, a_29);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_80 (ATerm), ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  {
    ATerm y_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_29 = NULL;
        t = term_k_18;
        t = get_config_0_0(t);
        g_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_29, term_e_9);
        t = geq_0_0(t);
        t = e_29;
        t = s_80(t);
        LocalPopChoice(a_27);
      }
    else
      {
        t = y_26;
        t = e_29;
      }
  }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,l_29 = NULL,m_29 = NULL;
  t = run_time_0_0(t);
  i_29 = t;
  t = term_f_18;
  t = whoami_0_0(t);
  j_29 = t;
  t = term_o_16;
  l_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_27), i_29), term_u_8), j_29);
  m_29 = t;
  t = SSL_printnl(l_29, m_29);
  t = (ATerm) ATmakeAppl(sym__2, term_o_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_27), i_29), term_u_8), j_29));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_25;
  n_29 = t;
  t = SSL_exit(n_29);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL;
  w_29 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_29;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_29 = ATgetArgument(t, 0);
          {
            ATerm j_9 = NULL,m_2 = NULL;
            t = SSLgetAnnotations(w_29);
            j_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_29);
            m_2 = t;
            t = SSLsetAnnotations(m_2, j_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_29;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_84 (ATerm), ATerm t)
{
  ATerm j_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_27;
      t = get_config_0_0(t);
      LocalPopChoice(m_27);
    }
  else
    {
      t = j_27;
      t = fetch_1_0(q_4, t);
    }
  t = w_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_29 = ATgetFirst((ATermList) t);
      a_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_30 = NULL,h_30 = NULL;
        static ATerm r_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_30)), not_null(h_30));
          return(t);
        }
        t = a_30;
        t = l_0(t);
        if(((g_30 != NULL) && (g_30 != t)))
          _fail(t);
        else
          g_30 = t;
        t = z_29;
        t = k_0(t);
        if(((h_30 != NULL) && (h_30 != t)))
          _fail(t);
        else
          h_30 = t;
        t = a_30;
        t = reverse_acc_2_0(k_0, r_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_18;
      t = l_0(t);
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_2 = NULL;
  n_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_30);
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_30);
  o_2 = t;
  t = SSLsetAnnotations(o_2, l_30);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_30), term_p_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL;
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_26;
      t = get_config_0_0(t);
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      t = fetch_1_0(s_4, t);
    }
  t = term_s_27;
  t = echo_0_0(t);
  t = term_a_26;
  j_30 = t;
  t = term_b_26;
  k_30 = t;
  t = term_u_27;
  t = o_6(j_30, k_30, t);
  t = reverse_acc_2_0(_id, t_4, t);
  t = map_1_0(w_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm y_69 (ATerm), ATerm t)
{
  static ATerm m_31 (ATerm t)
  {
    ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
    j_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_31 = ATgetFirst((ATermList) t);
        l_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_27 = t;
      int w_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_9 = NULL,z_9 = NULL,x_2 = NULL;
          t = SSLgetAnnotations(j_31);
          u_9 = t;
          t = k_31;
          t = y_69(t);
          z_9 = t;
          t = (ATerm) ATinsert(CheckATermList(l_31), z_9);
          x_2 = t;
          t = SSLsetAnnotations(x_2, u_9);
          LocalPopChoice(w_27);
        }
      else
        {
          t = v_27;
          {
            ATerm k_10 = NULL,o_10 = NULL,y_2 = NULL;
            t = SSLgetAnnotations(j_31);
            k_10 = t;
            t = l_31;
            t = m_31(t);
            o_10 = t;
            t = (ATerm) ATinsert(CheckATermList(o_10), k_31);
            y_2 = t;
            t = SSLsetAnnotations(y_2, k_10);
          }
        }
    }
    return(t);
  }
  t = m_31(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
  q_31 = t;
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_27 = ATgetFirst((ATermList) t);
                ATerm a_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_31;
          }
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        t = (ATerm) ATinsert(ATempty, q_31);
      }
  }
  r_31 = t;
  t = term_x_23;
  s_31 = t;
  t = SSL_printnl(s_31, r_31);
  t = q_31;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm n_6 (ATerm z_31, ATerm a_32, ATerm t)
{
  t = SSL_strcat(z_31, a_32);
  return(t);
}
ATerm debug_1_0 (ATerm w_64 (ATerm), ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,b_32 = NULL;
  w_31 = t;
  t = w_64(t);
  x_31 = t;
  t = term_o_16;
  y_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_31), x_31);
  b_32 = t;
  t = SSL_printnl(y_31, b_32);
  t = w_31;
  return(t);
}
ATerm map_1_0 (ATerm o_69 (ATerm), ATerm t)
{
  static ATerm q_32 (ATerm t)
  {
    ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
    n_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_32;
      }
    else
      {
        ATerm i_11 = NULL,o_11 = NULL,p_11 = NULL,n_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_32 = ATgetFirst((ATermList) t);
            p_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_32);
        i_11 = t;
        t = o_32;
        t = o_69(t);
        o_11 = t;
        t = p_32;
        t = q_32(t);
        p_11 = t;
        t = (ATerm) ATinsert(CheckATermList(p_11), o_11);
        n_3 = t;
        t = SSLsetAnnotations(n_3, i_11);
      }
    return(t);
  }
  t = q_32(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_32 = NULL;
      y_32 = t;
      t = SSL_is_string(y_32);
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      {
        ATerm h_28 = t;
        int i_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_4, t);
            LocalPopChoice(i_28);
          }
        else
          {
            t = h_28;
            {
              ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
              g_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_33 = ATgetArgument(t, 0);
                  t = h_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_33 = ATgetArgument(t, 0);
                      t = h_33;
                      {
                        ATerm j_28 = t;
                        int k_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(k_28);
                          }
                        else
                          {
                            t = j_28;
                            t = debug_1_0(a_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_33 = NULL,n_33 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_33 = ATgetArgument(t, 0);
                          i_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_33;
                      t = eval_config_0_0(t);
                      m_33 = t;
                      t = i_33;
                      t = eval_config_0_0(t);
                      n_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_33, n_33);
                      t = n_6(m_33, n_33, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_6 (ATerm a_37, ATerm b_37, ATerm t)
{
  t = SSL_table_get(a_37, b_37);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL;
  r_33 = t;
  t = term_z_25;
  s_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_25, r_33);
  t = o_6(s_33, r_33, t);
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_33 = NULL,u_33 = NULL;
        t = eval_config_0_0(t);
        t_33 = t;
        t = term_z_25;
        u_33 = t;
        t = SSL_table_put(u_33, r_33, t_33);
        t = t_33;
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
      }
  }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  t = term_n_28;
  x_33 = t;
  t = term_f_18;
  y_33 = t;
  t = term_o_28;
  t = r_6(x_33, y_33, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_p_28;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL;
  t = term_n_28;
  b_34 = t;
  t = term_f_18;
  c_34 = t;
  t = term_o_28;
  t = r_6(b_34, c_34, t);
  t = term_q_28;
  z_33 = t;
  t = term_f_18;
  a_34 = t;
  t = term_r_28;
  t = r_6(z_33, a_34, t);
  t = term_s_28;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_t_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_5, h_5, i_5, t);
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      t = Option_3_0(l_5, o_5, p_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_56 (ATerm), ATerm p_56 (ATerm), ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,p_3 = NULL;
  i_34 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_34 = ATgetFirst((ATermList) t);
      f_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_34);
  d_34 = t;
  t = e_34;
  t = o_56(t);
  g_34 = t;
  t = f_34;
  t = p_56(t);
  h_34 = t;
  t = (ATerm) ATinsert(CheckATermList(h_34), g_34);
  p_3 = t;
  t = SSLsetAnnotations(p_3, d_34);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,c_35 = NULL,l_35 = NULL,m_35 = NULL,z_4 = NULL;
  y_34 = t;
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_29;
        t = u_86(t);
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
      }
  }
  t = y_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_35 = ATgetFirst((ATermList) t);
      c_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_34);
  z_34 = t;
  t = term_j_26;
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_26, a_35);
  t = r_6(m_35, a_35, t);
  t = c_35;
  {
    static ATerm z_35 (ATerm t)
    {
      ATerm c_29 = t;
      int d_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_29 = t;
          int h_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_35 = NULL;
              s_35 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_35;
              LocalPopChoice(h_29);
            }
          else
            {
              t = f_29;
              t = u_86(t);
              t = Cons_2_0(_id, z_35, t);
            }
          LocalPopChoice(d_29);
        }
      else
        {
          t = c_29;
          {
            ATerm v_35 = NULL,w_35 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_35 = ATgetFirst((ATermList) t);
                w_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_35), (ATerm) ATmakeAppl(sym_Undefined_1, v_35));
          }
        }
      return(t);
    }
    t = z_35(t);
  }
  l_35 = t;
  t = (ATerm) ATinsert(CheckATermList(l_35), (ATerm) ATmakeAppl(sym_Program_1, a_35));
  z_4 = t;
  t = SSLsetAnnotations(z_4, z_34);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm u_36 = NULL;
  u_36 = t;
  if(match_string(t, "--help"))
    {
      t = u_36;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_36;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_36;
        }
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL;
  t = term_n_27;
  v_36 = t;
  t = term_f_18;
  w_36 = t;
  t = term_k_29;
  t = r_6(v_36, w_36, t);
  t = term_o_29;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_p_29;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,t_36 = NULL;
  l_36 = t;
  t = term_a_26;
  n_36 = t;
  t = term_b_26;
  o_36 = t;
  t = (ATerm) ATempty;
  t_36 = t;
  t = SSL_table_put(n_36, o_36, t_36);
  t = l_36;
  {
    static ATerm q_5 (ATerm t)
    {
      ATerm q_29 = t;
      int r_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_86(t);
          LocalPopChoice(r_29);
        }
      else
        {
          t = q_29;
          {
            ATerm s_29 = t;
            int t_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_5, s_5, y_5, t);
                LocalPopChoice(t_29);
              }
            else
              {
                t = s_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_5, t);
  }
  {
    ATerm u_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_37 = NULL;
        f_37 = t;
        {
          ATerm y_29 = t;
          int b_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_12 = NULL;
              t = f_37;
              {
                ATerm c_30 = t;
                int d_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_n_27;
                    t = get_config_0_0(t);
                    LocalPopChoice(d_30);
                  }
                else
                  {
                    t = c_30;
                    t = fetch_1_0(l_6, t);
                  }
              }
              t = f_37;
              t = default_system_usage_0_0(t);
              t = term_a_25;
              u_12 = t;
              t = SSL_exit(u_12);
              LocalPopChoice(b_30);
            }
          else
            {
              t = y_29;
              {
                ATerm a_13 = NULL;
                t = term_n_28;
                t = get_config_0_0(t);
                t = f_37;
                t = default_system_about_0_0(t);
                t = term_a_25;
                a_13 = t;
                t = SSL_exit(a_13);
              }
            }
        }
        LocalPopChoice(x_29);
      }
    else
      {
        t = u_29;
        {
          ATerm e_30 = t;
          int f_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
              static ATerm m_6 (ATerm t)
              {
                ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,b_5 = NULL;
                n_37 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_37 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_37);
                l_37 = t;
                t = m_37;
                if(((e_36 != NULL) && (e_36 != t)))
                  _fail(t);
                else
                  e_36 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_37);
                b_5 = t;
                t = SSLsetAnnotations(b_5, l_37);
                return(t);
              }
              t = fetch_1_0(m_6, t);
              t = term_o_16;
              h_37 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_36)), term_i_30);
              i_37 = t;
              t = SSL_printnl(h_37, i_37);
              t = (ATerm) ATmakeAppl(sym__2, term_o_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_36)), term_i_30));
              t = default_system_usage_0_0(t);
              t = term_e_9;
              g_37 = t;
              t = SSL_exit(g_37);
              LocalPopChoice(f_30);
            }
          else
            {
              t = e_30;
            }
        }
      }
  }
  f_36 = t;
  t = term_a_26;
  m_36 = t;
  t = SSL_table_destroy(m_36);
  t = f_36;
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL;
  t = parse_options_1_0(y_84, t);
  x_37 = t;
  t = term_o_30;
  a_38 = t;
  t = SSL_table_create(a_38);
  t = term_o_30;
  y_37 = t;
  t = term_q_30;
  z_37 = t;
  t = SSL_table_put(y_37, z_37, x_37);
  t = x_37;
  t = a_85(t);
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_84, t);
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        {
          ATerm t_30 = t;
          int u_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_85(t);
              t = report_success_0_0(t);
              LocalPopChoice(u_30);
            }
          else
            {
              t = t_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
      {
        ATerm x_30 = t;
        int y_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(y_30);
          }
        else
          {
            t = x_30;
            {
              ATerm z_30 = t;
              int a_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(z_6, a_7, b_7, t);
                  LocalPopChoice(a_31);
                }
              else
                {
                  t = z_30;
                  {
                    ATerm b_31 = t;
                    int c_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(c_31);
                      }
                    else
                      {
                        t = b_31;
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
static ATerm u_6 (ATerm t)
{
  t = xtc_io_1_0(c_7, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL;
  t = term_d_31;
  i_38 = t;
  t = term_f_18;
  j_38 = t;
  t = term_e_31;
  t = r_6(i_38, j_38, t);
  t = term_f_31;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_g_31;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_38 = NULL,t_38 = NULL;
      t_38 = t;
      if(match_cons(t, sym_FILE_1))
        {
          q_38 = ATgetArgument(t, 0);
          {
            ATerm k_13 = NULL,d_5 = NULL;
            t = SSLgetAnnotations(t_38);
            k_13 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, q_38);
            d_5 = t;
            t = SSLsetAnnotations(d_5, k_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_38;
        }
      LocalPopChoice(i_31);
      t = xtc_transform_file_2_0(e_7, i_7, t);
    }
  else
    {
      t = h_31;
      t = xtc_transform_term_2_0(j_7, n_7, t);
    }
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_38 = NULL,e_39 = NULL;
        e_39 = t;
        if(match_cons(t, sym_FILE_1))
          {
            z_38 = ATgetArgument(t, 0);
            {
              ATerm r_13 = NULL,f_5 = NULL;
              t = SSLgetAnnotations(e_39);
              r_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_38);
              f_5 = t;
              t = SSLsetAnnotations(f_5, r_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_39;
          }
        LocalPopChoice(o_31);
        t = xtc_transform_file_2_0(s_7, build_pp_tables_0_0, t);
      }
    else
      {
        t = n_31;
        t = xtc_transform_term_2_0(v_7, build_pp_tables_0_0, t);
      }
  }
  {
    ATerm p_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_39 = NULL,l_39 = NULL;
        l_39 = t;
        if(match_cons(t, sym_FILE_1))
          {
            k_39 = ATgetArgument(t, 0);
            {
              ATerm m_14 = NULL,g_5 = NULL;
              t = SSLgetAnnotations(l_39);
              m_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_39);
              g_5 = t;
              t = SSLsetAnnotations(g_5, m_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_39;
          }
        LocalPopChoice(t_31);
        t = xtc_transform_file_2_0(w_7, z_7, t);
      }
    else
      {
        t = p_31;
        t = xtc_transform_term_2_0(a_8, g_8, t);
      }
  }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_u_31;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_u_31;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_v_31;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_v_31;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_c_32;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_c_32;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(q_6, default_usage_0_0, _id, u_6, t);
  return(t);
}
