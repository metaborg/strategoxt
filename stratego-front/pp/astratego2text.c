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
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_c_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_e_30;
ATerm term_g_29;
ATerm term_c_29;
ATerm term_z_28;
ATerm term_s_28;
ATerm term_n_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_v_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_s_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_a_24;
ATerm term_t_23;
ATerm term_i_23;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_m_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_w_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_d_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_s_19;
ATerm term_j_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_p_17;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_l_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_d_13;
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
ATerm term_p_12;
ATerm term_o_12;
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
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_f_11;
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
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_w_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_k_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_s_4;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_8, term_z_8, term_a_9);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_9, term_e_9, term_f_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_9, term_k_9, term_l_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_9, term_r_9, term_s_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_y_9, term_z_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_d_10, term_e_10);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_10, term_i_10, term_k_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_p_10, term_q_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_10, term_t_10, term_u_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_x_10, term_y_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_b_11, term_c_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_j_11, term_k_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_11, term_r_11, term_s_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_11, term_x_11, term_y_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_d_12, term_f_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_i_12, term_j_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_m_12, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_x_12, term_y_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_b_13, term_d_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_k_13, term_o_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_s_13, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_w_13, term_y_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_d_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_p_14, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_u_14, term_v_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_z_14, term_c_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_o_20, term_b_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_o_20, term_p_20);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_x_17);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_r_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_24);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym__2, term_c_25, term_b_18);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_r_25, term_s_25);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym__2, term_e_28, term_b_18);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym__2, term_h_28, term_b_18);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym__2, term_f_27, term_b_18);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_u_30, term_b_18);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm read_from_0_0 (ATerm t);
static ATerm a_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm d_6 (ATerm s_65 (ATerm), ATerm s_165, ATerm v_17, ATerm t);
static ATerm a_0 (ATerm t);
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
static ATerm a_7 (ATerm p_6, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm g_6 (ATerm i_80 (ATerm), ATerm s_34, ATerm q_34, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm v_81 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm u_81 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm w_81 (ATerm), ATerm t);
static ATerm u_5 (ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm v_5 (ATerm m_74 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm w_5 (ATerm c_37, ATerm d_37, ATerm e_37, ATerm t);
static ATerm x_5 (ATerm y_81 (ATerm), ATerm m_37, ATerm l_37, ATerm t);
static ATerm z_5 (ATerm n_39, ATerm o_39, ATerm t);
static ATerm h_13 (ATerm v_12, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_5 (ATerm t_17, ATerm t);
static ATerm b_6 (ATerm v_39, ATerm w_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_16 (ATerm x_13, ATerm t);
static ATerm b_16 (ATerm e_14, ATerm h_14, ATerm i_14, ATerm t);
static ATerm e_16 (ATerm a_15, ATerm b_15, ATerm e_15, ATerm t);
static ATerm c_6 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm e_78 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm g_20 (ATerm e_19, ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm h_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm i_6 (ATerm k_36, ATerm l_36, ATerm t);
ATerm end_scope_1_0 (ATerm f_80 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_81 (ATerm), ATerm g_81 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm e_80 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm f_84 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm g_84 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_6 (ATerm f_38, ATerm g_38, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_6 (ATerm f_36, ATerm g_36, ATerm e_36, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_6 (ATerm e_33, ATerm f_33, ATerm t);
ATerm foldr_2_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_81 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm need_help_1_0 (ATerm v_85 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_70 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm m_6 (ATerm z_31, ATerm a_32, ATerm t);
ATerm debug_1_0 (ATerm q_65 (ATerm), ATerm t);
ATerm map_1_0 (ATerm i_70 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm n_6 (ATerm w_37, ATerm x_37, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_57 (ATerm), ATerm j_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_87 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm parse_options_1_0 (ATerm s_87 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm astratego2text_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm q_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_s_4;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          q_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_8);
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_0, (ATerm) ATinsert(ATempty, term_a_8));
      t = z_5(q_0, u_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm a_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm z_0 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_0);
  return(t);
}
static ATerm d_6 (ATerm s_65 (ATerm), ATerm s_165, ATerm v_17, ATerm t)
{
  ATerm b_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_165, term_b_8);
  t = c_6(t);
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_1, v_17);
  t = s_65(t);
  t = fclose_0_0(t);
  t = v_17;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm e_1 = NULL,f_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_8 = ATgetArgument(t, 0);
      if(match_cons(g_8, sym_Stream_1))
        {
          e_1 = ATgetArgument(g_8, 0);
        }
      else
        _fail(t);
      f_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(e_1, f_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL;
  d_1 = t;
  t = xtc_new_file_0_0(t);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_1, d_1);
  t = d_6(a_0, c_1, d_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_1);
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
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL;
  r_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      s_2 = ATgetArgument(t, 0);
      {
        ATerm e_0 = NULL,h_0 = NULL;
        t = SSL_int_to_string(s_2);
        e_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_8), e_0), term_k_8);
        h_0 = t;
        t = SSL_concat_strings(h_0);
      }
    }
  else
    {
      ATerm j_1 = NULL,k_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          s_2 = ATgetArgument(t, 0);
          t_2 = ATgetArgument(t, 1);
          u_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(t_2);
      j_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_2), term_p_8), j_1), term_o_8), s_2);
      k_1 = t;
      t = SSL_concat_strings(k_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_70 (ATerm), ATerm t)
{
  ATerm x_2 = NULL;
  static ATerm b_0 (ATerm t)
  {
    t = u_70(t);
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
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm c_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm t_8 = ATgetArgument(t, 0);
              if((y_2 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm v_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_15), term_d_15), term_w_14), term_s_14), term_l_14), term_a_14), term_u_13), term_p_13), term_g_13), term_z_12), term_t_12), term_p_12), term_k_12), term_g_12), term_z_11), term_t_11), term_m_11), term_d_11), term_z_10), term_v_10), term_r_10), term_l_10), term_g_10), term_a_10), term_t_9), term_m_9), term_g_9), term_b_9);
        t = fetch_elem_1_0(c_0, t);
        LocalPopChoice(s_8);
      }
    else
      {
        t = r_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, y_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm g_3 = NULL,q_3 = NULL;
  g_3 = t;
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_15 = ATgetArgument(t, 0);
            q_3 = ATgetArgument(t, 1);
            {
              ATerm p_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(n_15);
        {
          ATerm q_15 = t;
          int s_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_1 = NULL,s_1 = NULL,t_1 = NULL;
              t = q_3;
              {
                ATerm t_15 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_15;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              q_1 = t;
              t = term_u_15;
              s_1 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, q_1), term_x_15);
              t_1 = t;
              t = SSL_printnl(s_1, t_1);
              t = (ATerm) ATmakeAppl(sym__2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, q_1), term_x_15));
              LocalPopChoice(s_15);
            }
          else
            {
              t = q_15;
              t = g_3;
            }
        }
      }
    else
      {
        t = m_15;
        t = g_3;
      }
  }
  t = g_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm h_64 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL;
  a_4 = t;
  t = fork_0_0(t);
  z_3 = t;
  {
    ATerm y_15 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = a_4;
        t = h_64(t);
        LocalPopChoice(c_16);
      }
    else
      {
        t = y_15;
        t = SSL_waitpid(z_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_16 = ATgetArgument(t, 0);
            if(((ATgetType(d_16) != AT_INT) || (ATgetInt((ATermInt) d_16) != 0)))
              _fail(t);
            {
              ATerm j_16 = ATgetArgument(t, 1);
            }
            {
              ATerm m_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = a_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm t_84 (ATerm), ATerm t)
{
  ATerm c_4 = NULL,e_4 = NULL;
  e_4 = t;
  t = t_84(t);
  t = xtc_find_0_0(t);
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_4, e_4);
  {
    static ATerm f_0 (ATerm t)
    {
      ATerm h_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, c_4, e_4);
      t = e_6(c_4, e_4, t);
      t = term_p_17;
      h_4 = t;
      t = SSL_exit(h_4);
      return(t);
    }
    t = fork_and_wait_1_0(f_0, t);
  }
  t = e_4;
  return(t);
}
ATerm at_end_1_0 (ATerm y_70 (ATerm), ATerm t)
{
  static ATerm l_5 (ATerm t)
  {
    ATerm h_5 = NULL,i_5 = NULL,k_5 = NULL;
    k_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_5 = ATgetFirst((ATermList) t);
        i_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_2 = NULL,o_2 = NULL,w_1 = NULL;
          t = SSLgetAnnotations(k_5);
          f_2 = t;
          t = i_5;
          t = l_5(t);
          o_2 = t;
          t = (ATerm) ATinsert(CheckATermList(o_2), h_5);
          w_1 = t;
          t = SSLsetAnnotations(w_1, f_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_5;
        t = y_70(t);
      }
    return(t);
  }
  t = l_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
  k_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_4;
    }
  else
    {
      static ATerm j_0 (ATerm t)
      {
        t = not_null(m_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_4 = ATgetFirst((ATermList) t);
          if(((m_4 != NULL) && (m_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_4;
      t = at_end_1_0(j_0, t);
    }
  return(t);
}
static ATerm a_7 (ATerm p_6, ATerm t)
{
  ATerm r_6 = NULL;
  t = SSL_explode_term(p_6);
  if(match_cons(t, sym__2))
    {
      ATerm q_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
  v_6 = t;
  if(match_cons(t, sym__2))
    {
      t_6 = ATgetArgument(t, 0);
      u_6 = ATgetArgument(t, 1);
      {
        ATerm r_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_0 (ATerm t)
            {
              t = u_6;
              return(t);
            }
            t = t_6;
            t = at_end_1_0(m_0, t);
            LocalPopChoice(s_17);
          }
        else
          {
            t = r_17;
            t = a_7(v_6, t);
          }
      }
    }
  else
    {
      t = a_7(v_6, t);
    }
  return(t);
}
static ATerm g_6 (ATerm i_80 (ATerm), ATerm s_34, ATerm q_34, ATerm t)
{
  ATerm d_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  h_7 = t;
  t = i_80(t);
  d_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_7, s_34, q_34);
  t = o_6(d_7, s_34, q_34, t);
  {
    ATerm u_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_7 = NULL;
        t = term_x_17;
        k_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_7, term_x_17);
        t = n_6(d_7, k_7, t);
        LocalPopChoice(w_17);
      }
    else
      {
        t = u_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_7 = ATgetFirst((ATermList) t);
      g_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_x_17;
  i_7 = t;
  t = (ATerm) ATinsert(CheckATermList(g_7), (ATerm) ATinsert(CheckATermList(f_7), s_34));
  j_7 = t;
  t = SSL_table_put(d_7, i_7, j_7);
  t = h_7;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,w_7 = NULL,y_7 = NULL,c_8 = NULL,f_8 = NULL;
  t = P__tmpdir_0_0(t);
  r_7 = t;
  t = term_z_17;
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_7, term_z_17);
  t = m_6(r_7, f_8, t);
  y_7 = t;
  t = term_a_18;
  c_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_7, term_a_18);
  t = m_6(y_7, c_8, t);
  w_7 = t;
  t = SSL_mkstemp(w_7);
  if(match_cons(t, sym__2))
    {
      p_7 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_b_18;
  q_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_7, term_b_18);
  t = g_6(s_0, p_7, q_7, t);
  t = SSL_close(n_7);
  t = p_7;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL;
  h_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm j_8 = NULL,q_8 = NULL;
      t = h_8;
      t = xtc_new_file_0_0(t);
      j_8 = t;
      t = v_0(t);
      q_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_8, (ATerm) ATinsert(ATinsert(ATempty, j_8), term_c_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_8);
    }
  else
    {
      ATerm u_8 = NULL,x_8 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_8;
      t = xtc_new_file_0_0(t);
      u_8 = t;
      t = v_0(t);
      x_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_8), term_c_18), i_8), term_d_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_8);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_8 = NULL;
  static ATerm w_0 (ATerm t)
  {
    ATerm h_9 = NULL,i_9 = NULL;
    h_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_8), h_9);
    t = n_6(not_null(y_8), h_9, t);
    i_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_9, i_9);
    return(t);
  }
  if(((y_8 != NULL) && (y_8 != t)))
    _fail(t);
  else
    y_8 = t;
  t = SSL_table_keys(y_8);
  t = map_1_0(w_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm o_9 = NULL;
  o_9 = t;
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_9 = NULL;
        t = term_j_18;
        t = get_config_0_0(t);
        q_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_9, term_p_14);
        t = geq_0_0(t);
        t = o_9;
        t = v_81(t);
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
        t = o_9;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  ATerm u_9 = NULL;
  u_9 = t;
  {
    ATerm k_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_9 = NULL;
        t = term_j_18;
        t = get_config_0_0(t);
        w_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_9, term_j_11);
        t = geq_0_0(t);
        t = u_9;
        t = u_81(t);
        LocalPopChoice(n_18);
      }
    else
      {
        t = k_18;
        t = u_9;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_81 (ATerm), ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  {
    ATerm s_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_10 = NULL;
        t = term_j_18;
        t = get_config_0_0(t);
        f_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_10, term_r_9);
        t = geq_0_0(t);
        t = b_10;
        t = w_81(t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = s_18;
        t = b_10;
      }
  }
  return(t);
}
static ATerm u_5 (ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  t = q_74(t);
  {
    static ATerm x_0 (ATerm t)
    {
      ATerm o_10 = NULL;
      o_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, o_10);
      t = p_74(t);
      return(t);
    }
    t = fetch_1_0(x_0, t);
  }
  t = p_24;
  return(t);
}
static ATerm v_5 (ATerm m_74 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  static ATerm l_11 (ATerm t)
  {
    ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
    g_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_11 = ATgetFirst((ATermList) t);
            i_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_18 = t;
          int x_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_11;
              {
                static ATerm y_0 (ATerm t)
                {
                  t = l_24;
                  return(t);
                }
                t = u_5(m_74, y_0, h_11, i_11, t);
              }
              t = l_11(t);
              LocalPopChoice(x_18);
            }
          else
            {
              t = w_18;
              {
                ATerm f_3 = NULL,o_3 = NULL,z_1 = NULL;
                t = SSLgetAnnotations(g_11);
                f_3 = t;
                t = i_11;
                t = l_11(t);
                o_3 = t;
                t = (ATerm) ATinsert(CheckATermList(o_3), h_11);
                z_1 = t;
                t = SSLsetAnnotations(z_1, f_3);
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
static ATerm a_1 (ATerm t)
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
static ATerm w_5 (ATerm c_37, ATerm d_37, ATerm e_37, ATerm t)
{
  ATerm q_11 = NULL,u_11 = NULL,w_11 = NULL;
  q_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_37, d_37);
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_19 = ATgetArgument(t, 0);
            ATerm b_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_37, d_37);
        t = n_6(c_37, d_37, t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        t = (ATerm) ATempty;
      }
  }
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_11, e_37);
  t = v_5(a_1, w_11, e_37, t);
  u_11 = t;
  t = SSL_table_put(c_37, d_37, u_11);
  t = q_11;
  return(t);
}
static ATerm x_5 (ATerm y_81 (ATerm), ATerm m_37, ATerm l_37, ATerm t)
{
  static ATerm g_1 (ATerm t)
  {
    ATerm b_12 = NULL,e_12 = NULL;
    if(match_cons(t, sym__2))
      {
        b_12 = ATgetArgument(t, 0);
        e_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_37, b_12, e_12);
    t = y_81(t);
    return(t);
  }
  t = l_37;
  t = map_1_0(g_1, t);
  return(t);
}
static ATerm z_5 (ATerm n_39, ATerm o_39, ATerm t)
{
  t = SSL_access(n_39, o_39);
  return(t);
}
static ATerm h_13 (ATerm v_12, ATerm t)
{
  t = SSL_fclose(v_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL;
  f_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_13 = ATgetArgument(t, 0);
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_13);
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            t = h_13(f_13, t);
          }
      }
    }
  else
    {
      t = h_13(f_13, t);
    }
  return(t);
}
static ATerm y_5 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm b_6 (ATerm v_39, ATerm w_39, ATerm t)
{
  ATerm i_13 = NULL;
  t = SSL_fopen(v_39, w_39);
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_13 = NULL;
  t = SSL_stdin_stream();
  l_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_13 = NULL;
  t = SSL_stdout_stream();
  m_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_13);
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
static ATerm a_16 (ATerm x_13, ATerm t)
{
  ATerm z_13 = NULL;
  t = SSL_explode_term(x_13);
  if(match_cons(t, sym__2))
    {
      ATerm f_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_19 = ATgetArgument(t, 1);
        if(((ATgetType(g_19) == AT_LIST) && !(ATisEmpty(g_19))))
          {
            z_13 = ATgetFirst((ATermList) g_19);
            {
              ATerm h_19 = (ATerm) ATgetNext((ATermList) g_19);
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
static ATerm b_16 (ATerm e_14, ATerm h_14, ATerm i_14, ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,q_14 = NULL,y_14 = NULL,b_2 = NULL;
  t = SSLgetAnnotations(i_14);
  q_14 = t;
  t = e_14;
  if(match_cons(t, sym_Path_1))
    {
      y_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_14, h_14);
  b_2 = t;
  t = SSLsetAnnotations(b_2, q_14);
  if(match_cons(t, sym__2))
    {
      j_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(j_14, k_14, t);
  return(t);
}
static ATerm e_16 (ATerm a_15, ATerm b_15, ATerm e_15, ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,r_15 = NULL,c_2 = NULL;
  t = SSLgetAnnotations(e_15);
  k_15 = t;
  t = SSL_is_string(a_15);
  r_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_15, b_15);
  c_2 = t;
  t = SSLsetAnnotations(c_2, k_15);
  if(match_cons(t, sym__2))
    {
      i_15 = ATgetArgument(t, 0);
      j_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(i_15, j_15, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,z_15 = NULL;
  v_15 = t;
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_16(v_15, t);
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            {
              ATerm k_19 = t;
              int q_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_16(w_15, z_15, v_15, t);
                  LocalPopChoice(q_19);
                }
              else
                {
                  t = k_19;
                  t = e_16(w_15, z_15, v_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_16(v_15, t);
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_s_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
  ATerm t_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_16 = NULL;
      i_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_16, term_y_19);
      t = c_6(t);
      LocalPopChoice(x_19);
    }
  else
    {
      t = t_19;
      t = debug_1_0(h_1, t);
      _fail(t);
    }
  g_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(h_16, t);
  f_16 = t;
  t = g_16;
  t = fclose_0_0(t);
  t = f_16;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_16 = NULL,l_16 = NULL;
      k_16 = t;
      t = (ATerm) ATinsert(ATempty, term_d_20);
      l_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_16, (ATerm) ATinsert(ATempty, term_d_20));
      t = z_5(k_16, l_16, t);
      LocalPopChoice(c_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = b_20;
      {
        ATerm f_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_20 = t;
            if((PushChoice() == 0))
              {
                ATerm m_16 = NULL,n_16 = NULL;
                m_16 = t;
                t = (ATerm) ATinsert(ATempty, term_a_8);
                n_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_16, (ATerm) ATinsert(ATempty, term_a_8));
                t = z_5(m_16, n_16, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_20;
              }
            t = debug_1_0(i_1, t);
            LocalPopChoice(h_20);
          }
        else
          {
            t = f_20;
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
  t = term_j_20;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_k_20;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  a_17 = t;
  t = term_u_15;
  b_17 = t;
  t = (ATerm) ATinsert(ATempty, term_l_20);
  c_17 = t;
  t = SSL_printnl(b_17, c_17);
  t = a_17;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  if(match_cons(t, sym__3))
    {
      d_17 = ATgetArgument(t, 0);
      e_17 = ATgetArgument(t, 1);
      f_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_5(d_17, e_17, f_17, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  g_17 = t;
  t = term_u_15;
  h_17 = t;
  t = (ATerm) ATinsert(ATempty, term_m_20);
  i_17 = t;
  t = SSL_printnl(h_17, i_17);
  t = g_17;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
  j_17 = t;
  t = term_u_15;
  k_17 = t;
  t = (ATerm) ATinsert(ATempty, term_l_20);
  l_17 = t;
  t = SSL_printnl(k_17, l_17);
  t = j_17;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  o_16 = t;
  t = if_verbose5_1_0(m_1, t);
  {
    ATerm n_20 = t;
    if((PushChoice() == 0))
      {
        ATerm y_16 = NULL,z_16 = NULL;
        t = term_o_20;
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, o_16);
        z_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_20, (ATerm) ATmakeAppl(sym_Imported_1, o_16));
        t = n_6(y_16, z_16, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_20;
      }
  }
  q_16 = t;
  t = term_o_20;
  v_16 = t;
  t = term_p_20;
  w_16 = t;
  t = (ATerm) ATinsert(ATempty, o_16);
  x_16 = t;
  t = SSL_table_put(v_16, w_16, x_16);
  t = q_16;
  t = if_verbose4_1_0(o_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(r_1, t);
  p_16 = t;
  t = term_o_20;
  u_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_20, p_16);
  t = x_5(u_1, u_16, p_16, t);
  t = if_verbose6_1_0(v_1, t);
  t = term_o_20;
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, o_16);
  s_16 = t;
  t = (ATerm) ATempty;
  t_16 = t;
  t = SSL_table_put(r_16, s_16, t_16);
  t = (ATerm) ATmakeAppl(sym__3, term_o_20, (ATerm)ATmakeAppl(sym_Imported_1, o_16), (ATerm) ATempty);
  t = if_verbose4_1_0(x_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm e_78 (ATerm), ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL;
  g_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_18;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_18 = ATgetFirst((ATermList) t);
          i_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_4 = NULL,f_5 = NULL,j_5 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(g_18);
            v_4 = t;
            t = h_18;
            t = e_78(t);
            f_5 = t;
            t = i_18;
            t = filter_1_0(e_78, t);
            j_5 = t;
            t = (ATerm) ATinsert(CheckATermList(j_5), f_5);
            i_2 = t;
            t = SSLsetAnnotations(i_2, v_4);
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            t = i_18;
            t = filter_1_0(e_78, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm t)
{
  static ATerm l_18 (ATerm t)
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_68(t);
        t = l_18(t);
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        t = o_68(t);
      }
    return(t);
  }
  t = l_18(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_20;
      t = get_config_0_0(t);
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm x_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_18 = NULL;
            t = term_z_20;
            m_18 = t;
            t = SSL_getenv(m_18);
            LocalPopChoice(y_20);
          }
        else
          {
            t = x_20;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = debug_1_0(a_2, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL;
  t = term_o_20;
  t_18 = t;
  t = term_b_21;
  u_18 = t;
  t = term_c_21;
  t = n_6(t_18, u_18, t);
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
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm o_18 = NULL;
  t = if_verbose5_1_0(y_1, t);
  o_18 = t;
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_18 = NULL,q_18 = NULL;
        t = term_o_20;
        p_18 = t;
        t = term_p_20;
        q_18 = t;
        t = term_h_21;
        t = n_6(p_18, q_18, t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        {
          ATerm r_18 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          r_18 = t;
          t = repeat_2_0(d_2, _id, t);
          t = r_18;
        }
      }
  }
  t = o_18;
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
  t = term_i_21;
  return(t);
}
static ATerm g_20 (ATerm e_19, ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  t = term_o_20;
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, e_19);
  n_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_20, (ATerm) ATmakeAppl(sym_Tool_1, e_19));
  t = n_6(m_19, n_19, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_21 = ATgetFirst((ATermList) t);
      if(match_cons(j_21, sym__2))
        {
          ATerm l_21 = ATgetArgument(j_21, 0);
          l_19 = ATgetArgument(j_21, 1);
        }
      else
        _fail(t);
      {
        ATerm k_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_19;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_i_21;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_o_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm o_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_19 = NULL,p_19 = NULL,r_19 = NULL;
      t = if_verbose5_1_0(h_2, t);
      t = xtc_load_0_0(t);
      r_19 = t;
      if(match_cons(t, sym__2))
        {
          o_19 = ATgetArgument(t, 0);
          p_19 = ATgetArgument(t, 1);
          {
            ATerm r_21 = t;
            int s_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
                t = term_o_20;
                v_19 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, o_19);
                w_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_o_20, (ATerm) ATmakeAppl(sym_Tool_1, o_19));
                t = n_6(v_19, w_19, t);
                {
                  static ATerm l_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((p_19 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((u_19 != NULL) && (u_19 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_19 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(l_2, t);
                }
                t = not_null(u_19);
                LocalPopChoice(s_21);
              }
            else
              {
                t = r_21;
                t = g_20(r_19, t);
              }
          }
        }
      else
        {
          t = g_20(r_19, t);
        }
      t = if_verbose5_1_0(n_2, t);
      LocalPopChoice(q_21);
    }
  else
    {
      t = o_21;
      {
        ATerm e_20 = NULL,t_5 = NULL,f_6 = NULL;
        e_20 = t;
        t = term_u_15;
        t_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_21), e_20), term_v_21);
        f_6 = t;
        t = SSL_printnl(t_5, f_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_21), e_20), term_v_21);
        t = if_verbose5_1_0(q_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm h_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm n_21 = NULL,p_21 = NULL;
  n_21 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_7 = NULL;
        t = n_21;
        t = r_0(t);
        b_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = b_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = b_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, p_21, b_7);
        t = h_6(p_21, b_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_21);
        LocalPopChoice(d_22);
      }
    else
      {
        t = a_22;
        {
          ATerm e_22 = t;
          int h_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_7 = NULL;
              t = n_21;
              t = r_0(t);
              t_7 = t;
              {
                ATerm i_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm u_7 = NULL;
                    u_7 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = u_7;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = u_7;
                          }
                        else
                          {
                            t = u_7;
                            if((p_21 != t))
                              {
                                _fail(t);
                              }
                            t = u_7;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_22;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, p_21, t_7);
              t = h_6(p_21, t_7, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_21);
              LocalPopChoice(h_22);
            }
          else
            {
              t = e_22;
              t = n_21;
              t = r_0(t);
              if((p_21 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_21);
            }
        }
      }
  }
  return(t);
}
static ATerm i_6 (ATerm k_36, ATerm l_36, ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL;
  u_21 = t;
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
        t = n_6(k_36, l_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_22 = ATgetFirst((ATermList) t);
            t_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(k_22);
        t = SSL_table_put(k_36, l_36, t_21);
        t = (ATerm) ATmakeAppl(sym__3, k_36, l_36, t_21);
      }
    else
      {
        t = j_22;
        t = SSL_table_remove(k_36, l_36);
        t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
      }
  }
  t = u_21;
  return(t);
}
ATerm end_scope_1_0 (ATerm f_80 (ATerm), ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,b_22 = NULL,c_22 = NULL;
  b_22 = t;
  t = f_80(t);
  z_21 = t;
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_22 = NULL;
        t = term_x_17;
        f_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_21, term_x_17);
        t = n_6(z_21, f_22, t);
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_21 = ATgetFirst((ATermList) t);
      x_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_x_17;
  c_22 = t;
  t = SSL_table_put(z_21, c_22, x_21);
  t = y_21;
  {
    static ATerm a_3 (ATerm t)
    {
      ATerm g_22 = NULL;
      g_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_21, g_22);
      t = i_6(z_21, g_22, t);
      return(t);
    }
    t = map_1_0(a_3, t);
  }
  t = b_22;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_81 (ATerm), ATerm g_81 (ATerm), ATerm t)
{
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_81(t);
      t = g_81(t);
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      t = g_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
  n_22 = t;
  t = e_80(t);
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_22, term_x_17);
  {
    ATerm v_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_22 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_22 = ATgetArgument(t, 0);
            ATerm z_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_17;
        w_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_22, term_x_17);
        t = n_6(m_22, w_22, t);
        LocalPopChoice(x_22);
      }
    else
      {
        t = v_22;
        t = (ATerm) ATempty;
      }
  }
  o_22 = t;
  t = term_x_17;
  p_22 = t;
  t = (ATerm) ATinsert(CheckATermList(o_22), (ATerm) ATempty);
  q_22 = t;
  t = SSL_table_put(m_22, p_22, q_22);
  t = n_22;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_y_17;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm k_23 = NULL;
  k_23 = t;
  {
    ATerm a_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(k_23);
        LocalPopChoice(e_23);
      }
    else
      {
        t = a_23;
        t = k_23;
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  ATerm b_23 = NULL;
  static ATerm c_3 (ATerm t)
  {
    ATerm c_23 = NULL;
    c_23 = t;
    {
      ATerm f_23 = t;
      int h_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_23 = NULL,g_23 = NULL;
          t = term_y_17;
          d_23 = t;
          t = term_x_17;
          g_23 = t;
          t = term_i_23;
          t = n_6(d_23, g_23, t);
          LocalPopChoice(h_23);
        }
      else
        {
          t = f_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((b_23 != NULL) && (b_23 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          b_23 = ATgetFirst((ATermList) t);
        {
          ATerm j_23 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = b_23;
    t = map_1_0(d_3, t);
    t = c_23;
    t = end_scope_1_0(e_3, t);
    return(t);
  }
  t = begin_scope_1_0(b_3, t);
  t = restore_always_2_0(f_84, c_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_18;
      t = get_config_0_0(t);
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      t = term_t_23;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  static ATerm h_3 (ATerm t)
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_23 = NULL;
        t = term_d_18;
        t = get_config_0_0(t);
        n_23 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_23);
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        t = term_s_4;
      }
    t = g_84(t);
    t = copy_to_1_0(i_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(h_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL;
  o_23 = t;
  t = term_b_18;
  t = whoami_0_0(t);
  p_23 = t;
  t = term_u_15;
  r_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_24), p_23), term_a_24);
  s_23 = t;
  t = SSL_printnl(r_23, s_23);
  t = term_z_8;
  q_23 = t;
  t = SSL_exit(q_23);
  t = o_23;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm u_23 = NULL;
  u_23 = t;
  if(match_string(t, "-k"))
    {
      t = u_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_23;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
  x_23 = t;
  t = SSL_string_to_int(x_23);
  y_23 = t;
  t = term_n_24;
  z_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_24, y_23);
  t = q_6(z_23, y_23, t);
  t = x_23;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_3, k_3, m_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm b_24 = NULL;
  b_24 = t;
  if(match_string(t, "-S"))
    {
      t = b_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_24;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  t = term_j_18;
  c_24 = t;
  t = term_r_24;
  d_24 = t;
  t = term_t_24;
  t = q_6(c_24, d_24, t);
  t = term_y_24;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_z_24;
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
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
  e_24 = t;
  t = SSL_string_to_int(e_24);
  f_24 = t;
  t = term_j_18;
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_18, f_24);
  t = q_6(g_24, f_24, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_24);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_b_25;
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
  ATerm h_24 = NULL,i_24 = NULL;
  t = term_c_25;
  h_24 = t;
  t = term_b_18;
  i_24 = t;
  t = term_d_25;
  t = q_6(h_24, i_24, t);
  t = term_h_25;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_3, r_3, s_3, t);
      LocalPopChoice(n_25);
    }
  else
    {
      t = m_25;
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_3, u_3, v_3, t);
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            t = Option_3_0(w_3, x_3, y_3, t);
          }
      }
    }
  return(t);
}
static ATerm q_6 (ATerm f_38, ATerm g_38, ATerm t)
{
  ATerm j_24 = NULL;
  t = term_q_25;
  j_24 = t;
  t = SSL_table_put(j_24, f_38, g_38);
  t = (ATerm) ATmakeAppl(sym__3, term_q_25, f_38, g_38);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,u_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
      t = term_b_18;
      t = i_0(t);
      v_24 = t;
      t = term_r_25;
      w_24 = t;
      t = term_s_25;
      x_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_25, term_s_25, v_24);
      t = o_6(w_24, x_24, v_24, t);
      _fail(t);
    }
  else
    {
      ATerm a_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_24 = ATgetFirst((ATermList) t);
          u_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_24;
      t = d_0(t);
      t = term_b_18;
      t = g_0(t);
      a_25 = t;
      t = (ATerm) ATinsert(CheckATermList(u_24), a_25);
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  if(match_string(t, "-o"))
    {
      t = e_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_25;
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL;
  f_25 = t;
  t = term_c_18;
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_18, f_25);
  t = q_6(g_25, f_25, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_25);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_4, d_4, f_4, t);
  return(t);
}
static ATerm o_6 (ATerm f_36, ATerm g_36, ATerm e_36, ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_36, g_36);
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_25 = ATgetArgument(t, 0);
            ATerm y_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_36, g_36);
        t = n_6(f_36, g_36, t);
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        t = (ATerm) ATempty;
      }
  }
  k_25 = t;
  t = (ATerm) ATinsert(CheckATermList(k_25), e_36);
  l_25 = t;
  t = SSL_table_put(f_36, g_36, l_25);
  t = j_25;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm x_25 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_26 = NULL,j_26 = NULL,k_26 = NULL;
      t = term_b_18;
      t = p_0(t);
      h_26 = t;
      t = term_r_25;
      j_26 = t;
      t = term_s_25;
      k_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_25, term_s_25, h_26);
      t = o_6(j_26, k_26, h_26, t);
      _fail(t);
    }
  else
    {
      ATerm p_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_25 = ATgetFirst((ATermList) t);
          e_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_26 = ATgetFirst((ATermList) t);
          g_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_25;
      t = n_0(t);
      t = f_26;
      t = o_0(t);
      p_26 = t;
      t = (ATerm) ATinsert(CheckATermList(g_26), p_26);
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm t_26 = NULL;
  t_26 = t;
  if(match_string(t, "-i"))
    {
      t = t_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_26;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL;
  u_26 = t;
  t = term_d_18;
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_18, u_26);
  t = q_6(v_26, u_26, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_26);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, i_4, j_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,a_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_18;
  t = whoami_0_0(t);
  w_26 = t;
  t = term_u_15;
  y_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_26), w_26);
  a_27 = t;
  t = SSL_printnl(y_26, a_27);
  t = term_z_8;
  x_26 = t;
  t = SSL_exit(x_26);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_26;
  t = get_config_0_0(t);
  return(t);
}
static ATerm j_6 (ATerm e_33, ATerm f_33, ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_33, f_33);
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      t = SSL_addr(e_33, f_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
  c_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_27;
      t = a_77(t);
    }
  else
    {
      ATerm h_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_27 = ATgetFirst((ATermList) t);
          e_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_27;
      t = foldr_2_0(a_77, b_77, t);
      h_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_27, h_27);
      t = b_77(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_r_24;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL;
  if(match_cons(t, sym__2))
    {
      l_8 = ATgetArgument(t, 0);
      m_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(l_8, m_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_27 = NULL,d_8 = NULL,e_8 = NULL;
  t = times_0_0(t);
  e_8 = t;
  t = SSL_explode_term(e_8);
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_8;
  t = foldr_2_0(n_4, o_4, t);
  k_27 = t;
  t = SSL_TicksToSeconds(k_27);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,m_28 = NULL;
  i_28 = t;
  if(match_cons(t, sym__2))
    {
      j_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_28;
        if((j_28 != t))
          {
            _fail(t);
          }
        t = i_28;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = (ATerm) ATmakeAppl(sym__2, j_28, m_28);
        {
          ATerm n_26 = t;
          int o_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_28, m_28);
              LocalPopChoice(o_26);
            }
          else
            {
              t = n_26;
              t = SSL_gtr(j_28, m_28);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_28, m_28);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_81 (ATerm), ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_28 = NULL;
        t = term_j_18;
        t = get_config_0_0(t);
        y_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_28, term_z_8);
        t = geq_0_0(t);
        t = w_28;
        t = r_81(t);
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        t = w_28;
      }
  }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,d_29 = NULL,e_29 = NULL;
  t = run_time_0_0(t);
  a_29 = t;
  t = term_b_18;
  t = whoami_0_0(t);
  b_29 = t;
  t = term_u_15;
  d_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_26), a_29), term_o_8), b_29);
  e_29 = t;
  t = SSL_printnl(d_29, e_29);
  t = (ATerm) ATmakeAppl(sym__2, term_u_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_26), a_29), term_o_8), b_29));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_24;
  f_29 = t;
  t = SSL_exit(f_29);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL;
  o_29 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_29;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_29 = ATgetArgument(t, 0);
          {
            ATerm d_9 = NULL,k_2 = NULL;
            t = SSLgetAnnotations(o_29);
            d_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_29);
            k_2 = t;
            t = SSLsetAnnotations(k_2, d_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_29;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm z_26 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_27;
      t = get_config_0_0(t);
      LocalPopChoice(b_27);
    }
  else
    {
      t = z_26;
      t = fetch_1_0(q_4, t);
    }
  t = v_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_29 = ATgetFirst((ATermList) t);
      s_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_29 = NULL,x_29 = NULL;
        static ATerm r_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_29)), not_null(x_29));
          return(t);
        }
        t = s_29;
        t = l_0(t);
        if(((w_29 != NULL) && (w_29 != t)))
          _fail(t);
        else
          w_29 = t;
        t = r_29;
        t = k_0(t);
        if(((x_29 != NULL) && (x_29 != t)))
          _fail(t);
        else
          x_29 = t;
        t = s_29;
        t = reverse_acc_2_0(k_0, r_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_18;
      t = l_0(t);
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,m_2 = NULL;
  d_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_30);
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_30);
  m_2 = t;
  t = SSLsetAnnotations(m_2, b_30);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm f_30 = NULL;
  f_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_30), term_g_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_26;
      t = get_config_0_0(t);
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      t = fetch_1_0(t_4, t);
    }
  t = term_l_27;
  t = echo_0_0(t);
  t = term_r_25;
  z_29 = t;
  t = term_s_25;
  a_30 = t;
  t = term_m_27;
  t = n_6(z_29, a_30, t);
  t = reverse_acc_2_0(_id, u_4, t);
  t = map_1_0(w_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_70 (ATerm), ATerm t)
{
  static ATerm g_31 (ATerm t)
  {
    ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
    d_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_31 = ATgetFirst((ATermList) t);
        f_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_27 = t;
      int o_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_9 = NULL,x_9 = NULL,v_2 = NULL;
          t = SSLgetAnnotations(d_31);
          n_9 = t;
          t = e_31;
          t = s_70(t);
          x_9 = t;
          t = (ATerm) ATinsert(CheckATermList(f_31), x_9);
          v_2 = t;
          t = SSLsetAnnotations(v_2, n_9);
          LocalPopChoice(o_27);
        }
      else
        {
          t = n_27;
          {
            ATerm j_10 = NULL,n_10 = NULL,w_2 = NULL;
            t = SSLgetAnnotations(d_31);
            j_10 = t;
            t = f_31;
            t = g_31(t);
            n_10 = t;
            t = (ATerm) ATinsert(CheckATermList(n_10), e_31);
            w_2 = t;
            t = SSLsetAnnotations(w_2, j_10);
          }
        }
    }
    return(t);
  }
  t = g_31(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
  k_31 = t;
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_27 = ATgetFirst((ATermList) t);
                ATerm s_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_31;
          }
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        t = (ATerm) ATinsert(ATempty, k_31);
      }
  }
  l_31 = t;
  t = term_t_23;
  m_31 = t;
  t = SSL_printnl(m_31, l_31);
  t = k_31;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm m_6 (ATerm z_31, ATerm a_32, ATerm t)
{
  t = SSL_strcat(z_31, a_32);
  return(t);
}
ATerm debug_1_0 (ATerm q_65 (ATerm), ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
  q_31 = t;
  t = q_65(t);
  r_31 = t;
  t = term_u_15;
  s_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_31), r_31);
  t_31 = t;
  t = SSL_printnl(s_31, t_31);
  t = q_31;
  return(t);
}
ATerm map_1_0 (ATerm i_70 (ATerm), ATerm t)
{
  static ATerm k_32 (ATerm t)
  {
    ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
    h_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_32;
      }
    else
      {
        ATerm e_11 = NULL,n_11 = NULL,p_11 = NULL,l_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_32 = ATgetFirst((ATermList) t);
            j_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_32);
        e_11 = t;
        t = i_32;
        t = i_70(t);
        n_11 = t;
        t = j_32;
        t = k_32(t);
        p_11 = t;
        t = (ATerm) ATinsert(CheckATermList(p_11), n_11);
        l_3 = t;
        t = SSLsetAnnotations(l_3, e_11);
      }
    return(t);
  }
  t = k_32(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(u_27);
    }
  else
    {
      t = t_27;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_v_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_32 = NULL;
      s_32 = t;
      t = SSL_is_string(s_32);
      LocalPopChoice(x_27);
    }
  else
    {
      t = w_27;
      {
        ATerm y_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(y_4, t);
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
            {
              ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
              y_32 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_32 = ATgetArgument(t, 0);
                  t = z_32;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_32 = ATgetArgument(t, 0);
                      t = z_32;
                      {
                        ATerm a_28 = t;
                        int b_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(b_28);
                          }
                        else
                          {
                            t = a_28;
                            t = debug_1_0(a_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_33 = NULL,h_33 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_32 = ATgetArgument(t, 0);
                          a_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_32;
                      t = eval_config_0_0(t);
                      g_33 = t;
                      t = a_33;
                      t = eval_config_0_0(t);
                      h_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
                      t = m_6(g_33, h_33, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_6 (ATerm w_37, ATerm x_37, ATerm t)
{
  t = SSL_table_get(w_37, x_37);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL;
  l_33 = t;
  t = term_q_25;
  m_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_25, l_33);
  t = n_6(m_33, l_33, t);
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_33 = NULL,o_33 = NULL;
        t = eval_config_0_0(t);
        n_33 = t;
        t = term_q_25;
        o_33 = t;
        t = SSL_table_put(o_33, l_33, n_33);
        t = n_33;
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
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
static ATerm e_5 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL;
  t = term_e_28;
  r_33 = t;
  t = term_b_18;
  s_33 = t;
  t = term_f_28;
  t = q_6(r_33, s_33, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_g_28;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL;
  t = term_e_28;
  v_33 = t;
  t = term_b_18;
  w_33 = t;
  t = term_f_28;
  t = q_6(v_33, w_33, t);
  t = term_h_28;
  t_33 = t;
  t = term_b_18;
  u_33 = t;
  t = term_k_28;
  t = q_6(t_33, u_33, t);
  t = term_l_28;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_n_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_5, e_5, g_5, t);
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      t = Option_3_0(m_5, n_5, o_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_57 (ATerm), ATerm j_57 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,n_3 = NULL;
  c_34 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_33 = ATgetFirst((ATermList) t);
      z_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_34);
  x_33 = t;
  t = y_33;
  t = i_57(t);
  a_34 = t;
  t = z_33;
  t = j_57(t);
  b_34 = t;
  t = (ATerm) ATinsert(CheckATermList(b_34), a_34);
  n_3 = t;
  t = SSLsetAnnotations(n_3, x_33);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_87 (ATerm), ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL,v_34 = NULL,x_34 = NULL,y_34 = NULL,x_4 = NULL;
  h_34 = t;
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_28;
        t = t_87(t);
        LocalPopChoice(r_28);
      }
    else
      {
        t = q_28;
      }
  }
  t = h_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_34 = ATgetFirst((ATermList) t);
      v_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_34);
  i_34 = t;
  t = term_b_26;
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_26, j_34);
  t = q_6(y_34, j_34, t);
  t = v_34;
  {
    static ATerm i_35 (ATerm t)
    {
      ATerm t_28 = t;
      int u_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_28 = t;
          int x_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_35 = NULL;
              b_35 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_35;
              LocalPopChoice(x_28);
            }
          else
            {
              t = v_28;
              t = t_87(t);
              t = Cons_2_0(_id, i_35, t);
            }
          LocalPopChoice(u_28);
        }
      else
        {
          t = t_28;
          {
            ATerm e_35 = NULL,f_35 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_35 = ATgetFirst((ATermList) t);
                f_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_35), (ATerm) ATmakeAppl(sym_Undefined_1, e_35));
          }
        }
      return(t);
    }
    t = i_35(t);
  }
  x_34 = t;
  t = (ATerm) ATinsert(CheckATermList(x_34), (ATerm) ATmakeAppl(sym_Program_1, j_34));
  x_4 = t;
  t = SSLsetAnnotations(x_4, i_34);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm u_35 = NULL;
  u_35 = t;
  if(match_string(t, "--help"))
    {
      t = u_35;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_35;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_35;
        }
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL;
  t = term_f_27;
  v_35 = t;
  t = term_b_18;
  w_35 = t;
  t = term_z_28;
  t = q_6(v_35, w_35, t);
  t = term_c_29;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_g_29;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL;
  p_35 = t;
  t = term_r_25;
  r_35 = t;
  t = term_s_25;
  s_35 = t;
  t = (ATerm) ATempty;
  t_35 = t;
  t = SSL_table_put(r_35, s_35, t_35);
  t = p_35;
  {
    static ATerm p_5 (ATerm t)
    {
      ATerm h_29 = t;
      int i_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_87(t);
          LocalPopChoice(i_29);
        }
      else
        {
          t = h_29;
          {
            ATerm j_29 = t;
            int k_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_5, r_5, s_5, t);
                LocalPopChoice(k_29);
              }
            else
              {
                t = j_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_5, t);
  }
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_36 = NULL;
        o_36 = t;
        {
          ATerm p_29 = t;
          int q_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_12 = NULL;
              t = o_36;
              {
                ATerm t_29 = t;
                int u_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_f_27;
                    t = get_config_0_0(t);
                    LocalPopChoice(u_29);
                  }
                else
                  {
                    t = t_29;
                    t = fetch_1_0(k_6, t);
                  }
              }
              t = o_36;
              t = default_system_usage_0_0(t);
              t = term_r_24;
              n_12 = t;
              t = SSL_exit(n_12);
              LocalPopChoice(q_29);
            }
          else
            {
              t = p_29;
              {
                ATerm w_12 = NULL;
                t = term_e_28;
                t = get_config_0_0(t);
                t = o_36;
                t = default_system_about_0_0(t);
                t = term_r_24;
                w_12 = t;
                t = SSL_exit(w_12);
              }
            }
        }
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
        {
          ATerm v_29 = t;
          int y_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
              static ATerm l_6 (ATerm t)
              {
                ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,z_4 = NULL;
                u_36 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_36 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_36);
                s_36 = t;
                t = t_36;
                if(((n_35 != NULL) && (n_35 != t)))
                  _fail(t);
                else
                  n_35 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_36);
                z_4 = t;
                t = SSLsetAnnotations(z_4, s_36);
                return(t);
              }
              t = fetch_1_0(l_6, t);
              t = term_u_15;
              q_36 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_35)), term_e_30);
              r_36 = t;
              t = SSL_printnl(q_36, r_36);
              t = (ATerm) ATmakeAppl(sym__2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_35)), term_e_30));
              t = default_system_usage_0_0(t);
              t = term_z_8;
              p_36 = t;
              t = SSL_exit(p_36);
              LocalPopChoice(y_29);
            }
          else
            {
              t = v_29;
            }
        }
      }
  }
  o_35 = t;
  t = term_r_25;
  q_35 = t;
  t = SSL_table_destroy(q_35);
  t = o_35;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,h_37 = NULL;
  t = parse_options_1_0(x_85, t);
  z_36 = t;
  t = term_g_30;
  h_37 = t;
  t = SSL_table_create(h_37);
  t = term_g_30;
  a_37 = t;
  t = term_h_30;
  b_37 = t;
  t = SSL_table_put(a_37, b_37, z_36);
  t = z_36;
  t = z_85(t);
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_85, t);
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        {
          ATerm k_30 = t;
          int l_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_86(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_30);
            }
          else
            {
              t = k_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      {
        ATerm o_30 = t;
        int p_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(p_30);
          }
        else
          {
            t = o_30;
            {
              ATerm q_30 = t;
              int r_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(x_6, y_6, z_6, t);
                  LocalPopChoice(r_30);
                }
              else
                {
                  t = q_30;
                  {
                    ATerm s_30 = t;
                    int t_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(t_30);
                      }
                    else
                      {
                        t = s_30;
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
static ATerm w_6 (ATerm t)
{
  t = xtc_io_1_0(c_7, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL;
  t = term_u_30;
  r_37 = t;
  t = term_b_18;
  s_37 = t;
  t = term_v_30;
  t = q_6(r_37, s_37, t);
  t = term_w_30;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_x_30;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_38 = NULL,c_38 = NULL;
      c_38 = t;
      if(match_cons(t, sym_FILE_1))
        {
          b_38 = ATgetArgument(t, 0);
          {
            ATerm c_13 = NULL,b_5 = NULL;
            t = SSLgetAnnotations(c_38);
            c_13 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, b_38);
            b_5 = t;
            t = SSLsetAnnotations(b_5, c_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_38;
        }
      LocalPopChoice(z_30);
      t = xtc_transform_file_2_0(e_7, l_7, t);
    }
  else
    {
      t = y_30;
      t = xtc_transform_term_2_0(m_7, o_7, t);
    }
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_38 = NULL,n_38 = NULL;
        n_38 = t;
        if(match_cons(t, sym_FILE_1))
          {
            m_38 = ATgetArgument(t, 0);
            {
              ATerm r_13 = NULL,d_5 = NULL;
              t = SSLgetAnnotations(n_38);
              r_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_38);
              d_5 = t;
              t = SSLsetAnnotations(d_5, r_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_38;
          }
        LocalPopChoice(b_31);
        t = xtc_transform_file_2_0(s_7, v_7, t);
      }
    else
      {
        t = a_31;
        t = xtc_transform_term_2_0(x_7, z_7, t);
      }
  }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_c_31;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm d_38 = NULL;
  t = term_h_31;
  t = xtc_find_0_0(t);
  d_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_38), term_i_31);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_c_31;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm e_38 = NULL;
  t = term_h_31;
  t = xtc_find_0_0(t);
  e_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_38), term_i_31);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_j_31;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_j_31;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm astratego2text_0_0 (ATerm t)
{
  t = option_wrap_4_0(s_6, default_usage_0_0, _id, w_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = astratego2text_0_0(t);
  return(t);
}
