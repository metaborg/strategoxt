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
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_k_29;
ATerm term_f_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_r_28;
ATerm term_j_28;
ATerm term_h_28;
ATerm term_w_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_e_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_o_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_c_25;
ATerm term_a_25;
ATerm term_x_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_g_24;
ATerm term_b_24;
ATerm term_x_23;
ATerm term_h_23;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_c_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_s_21;
ATerm term_o_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_b_21;
ATerm term_t_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_b_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_w_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_h_16;
ATerm term_u_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_b_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
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
ATerm term_l_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_n_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_m_4;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_8, term_w_8, term_c_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_9, term_f_9, term_g_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_9, term_k_9, term_l_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_9, term_q_9, term_r_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_v_9, term_w_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_9, term_z_9, term_a_10);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_10, term_d_10, term_e_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_i_10, term_j_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_n_10, term_o_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_10, term_t_10, term_u_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_b_11, term_d_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_h_11, term_k_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_o_11, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_u_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_a_12, term_b_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_f_12, term_h_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_k_12, term_l_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_o_12, term_p_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_s_12, term_t_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_e_13, term_f_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_r_13, term_s_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_z_13, term_a_14);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_e_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_k_14, term_n_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_y_14);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_m_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_t_20);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__2, term_d_18, term_h_16);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym__2, term_w_18, term_n_24);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_t_24, term_q_17);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym__2, term_l_25, term_m_25);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym__2, term_h_28, term_q_17);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_v_28, term_q_17);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym__2, term_d_27, term_q_17);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym__2, term_k_31, term_q_17);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm read_from_0_0 (ATerm t);
static ATerm y_5 (ATerm j_17, ATerm k_17, ATerm t);
static ATerm b_6 (ATerm p_64 (ATerm), ATerm w_163, ATerm r_17, ATerm t);
static ATerm a_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t);
static ATerm c_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm s_69 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm e_63 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm a_83 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm w_69 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_6 (ATerm p_5, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm e_6 (ATerm l_79 (ATerm), ATerm q_34, ATerm o_34, ATerm t);
static ATerm k_8 (ATerm q_7, ATerm t);
static ATerm s_8 (ATerm s_7, ATerm x_7, ATerm z_7, ATerm t);
static ATerm v_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm t_80 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm s_80 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm u_80 (ATerm), ATerm t);
static ATerm t_5 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm u_5 (ATerm k_73 (ATerm), ATerm i_24, ATerm h_24, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm v_5 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm t);
static ATerm w_5 (ATerm w_80 (ATerm), ATerm o_36, ATerm n_36, ATerm t);
static ATerm f_6 (ATerm l_38, ATerm m_38, ATerm t);
static ATerm z_14 (ATerm p_14, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_5 (ATerm p_17, ATerm t);
static ATerm z_5 (ATerm t_38, ATerm u_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_16 (ATerm s_15, ATerm t);
static ATerm z_16 (ATerm y_15, ATerm z_15, ATerm a_16, ATerm t);
static ATerm a_17 (ATerm l_16, ATerm m_16, ATerm n_16, ATerm t);
static ATerm a_6 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm c_77 (ATerm), ATerm t);
ATerm repeat_1_0 (ATerm n_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm b_22 (ATerm a_21, ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm g_6 (ATerm l_14, ATerm m_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm h_6 (ATerm m_35, ATerm n_35, ATerm t);
ATerm end_scope_1_0 (ATerm i_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm h_79 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm m_82 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm n_82 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_6 (ATerm h_37, ATerm i_37, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_6 (ATerm h_35, ATerm i_35, ATerm g_35, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_6 (ATerm c_33, ATerm d_33, ATerm t);
ATerm foldr_2_0 (ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_80 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm need_help_1_0 (ATerm o_84 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_69 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm l_6 (ATerm x_31, ATerm y_31, ATerm t);
ATerm debug_1_0 (ATerm n_64 (ATerm), ATerm t);
ATerm map_1_0 (ATerm g_69 (ATerm), ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm m_6 (ATerm y_36, ATerm z_36, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm f_56 (ATerm), ATerm g_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_86 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm parse_options_1_0 (ATerm l_86 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm a_8 (ATerm t);
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
  ATerm s_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_m_4;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_b_8);
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_0, (ATerm) ATinsert(ATempty, term_b_8));
      t = f_6(s_0, u_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm y_5 (ATerm j_17, ATerm k_17, ATerm t)
{
  ATerm y_0 = NULL;
  t = SSL_write_term_to_stream_baf(j_17, k_17);
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_0);
  return(t);
}
static ATerm b_6 (ATerm p_64 (ATerm), ATerm w_163, ATerm r_17, ATerm t)
{
  ATerm a_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_163, term_c_8);
  t = a_6(t);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, r_17);
  t = p_64(t);
  t = fclose_0_0(t);
  t = r_17;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_8 = ATgetArgument(t, 0);
      if(match_cons(d_8, sym_Stream_1))
        {
          d_1 = ATgetArgument(d_8, 0);
        }
      else
        _fail(t);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(d_1, e_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  b_1 = t;
  t = xtc_new_file_0_0(t);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_1, b_1);
  t = b_6(a_0, c_1, b_1, t);
  t = SSL_close_file(c_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(j_83, k_83, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm c_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
  o_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      p_2 = ATgetArgument(t, 0);
      {
        ATerm h_0 = NULL,m_0 = NULL;
        t = SSL_int_to_string(p_2);
        h_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_8), h_0), term_e_8);
        m_0 = t;
        t = SSL_concat_strings(m_0);
      }
    }
  else
    {
      ATerm j_1 = NULL,k_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          p_2 = ATgetArgument(t, 0);
          q_2 = ATgetArgument(t, 1);
          r_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(q_2);
      j_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_2), term_n_8), j_1), term_g_8), p_2);
      k_1 = t;
      t = SSL_concat_strings(k_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm s_69 (ATerm), ATerm t)
{
  ATerm u_2 = NULL;
  static ATerm b_0 (ATerm t)
  {
    t = s_69(t);
    if(((u_2 != NULL) && (u_2 != t)))
      _fail(t);
    else
      u_2 = t;
    return(t);
  }
  t = fetch_1_0(b_0, t);
  t = not_null(u_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm v_2 = NULL;
  v_2 = t;
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm q_8 = ATgetArgument(t, 0);
              if((v_2 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm r_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_15), term_t_14), term_o_14), term_h_14), term_b_14), term_t_13), term_p_13), term_h_13), term_z_12), term_u_12), term_q_12), term_m_12), term_i_12), term_d_12), term_v_11), term_q_11), term_l_11), term_e_11), term_y_10), term_r_10), term_l_10), term_f_10), term_b_10), term_x_9), term_s_9), term_m_9), term_h_9), term_d_9);
        t = fetch_elem_1_0(f_0, t);
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, v_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm e_3 = NULL,o_3 = NULL;
  e_3 = t;
  {
    ATerm c_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_15 = ATgetArgument(t, 0);
            o_3 = ATgetArgument(t, 1);
            {
              ATerm i_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_15);
        {
          ATerm j_15 = t;
          int k_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_1 = NULL,s_1 = NULL,t_1 = NULL;
              t = o_3;
              {
                ATerm l_15 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_15;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              q_1 = t;
              t = term_m_15;
              s_1 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, q_1), term_n_15);
              t_1 = t;
              t = SSL_printnl(s_1, t_1);
              t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATinsert(ATempty, q_1), term_n_15));
              LocalPopChoice(k_15);
            }
          else
            {
              t = j_15;
              t = e_3;
            }
        }
      }
    else
      {
        t = c_15;
        t = e_3;
      }
  }
  t = e_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm e_63 (ATerm), ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL;
  z_3 = t;
  t = fork_0_0(t);
  y_3 = t;
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = z_3;
        t = e_63(t);
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = SSL_waitpid(y_3);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_15 = ATgetArgument(t, 0);
            if(((ATgetType(q_15) != AT_INT) || (ATgetInt((ATermInt) q_15) != 0)))
              _fail(t);
            {
              ATerm r_15 = ATgetArgument(t, 1);
            }
            {
              ATerm t_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_3;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm a_83 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  c_4 = t;
  t = a_83(t);
  t = xtc_find_0_0(t);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_4, c_4);
  {
    static ATerm j_0 (ATerm t)
    {
      ATerm d_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, b_4, c_4);
      t = c_6(b_4, c_4, t);
      t = term_u_15;
      d_4 = t;
      t = SSL_exit(d_4);
      return(t);
    }
    t = fork_and_wait_1_0(j_0, t);
  }
  t = c_4;
  return(t);
}
ATerm at_end_1_0 (ATerm w_69 (ATerm), ATerm t)
{
  static ATerm k_5 (ATerm t)
  {
    ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
    h_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_5 = ATgetFirst((ATermList) t);
        g_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_2 = NULL,x_2 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(h_5);
          l_2 = t;
          t = g_5;
          t = k_5(t);
          x_2 = t;
          t = (ATerm) ATinsert(CheckATermList(x_2), f_5);
          v_1 = t;
          t = SSLsetAnnotations(v_1, l_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_5;
        t = w_69(t);
      }
    return(t);
  }
  t = k_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
  h_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_4;
    }
  else
    {
      static ATerm q_0 (ATerm t)
      {
        t = not_null(j_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_4 = ATgetFirst((ATermList) t);
          if(((j_4 != NULL) && (j_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_4;
      t = at_end_1_0(q_0, t);
    }
  return(t);
}
static ATerm z_6 (ATerm p_5, ATerm t)
{
  ATerm q_6 = NULL;
  t = SSL_explode_term(p_5);
  if(match_cons(t, sym__2))
    {
      ATerm w_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL;
  u_6 = t;
  if(match_cons(t, sym__2))
    {
      s_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
      {
        ATerm x_15 = t;
        int b_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_0 (ATerm t)
            {
              t = t_6;
              return(t);
            }
            t = s_6;
            t = at_end_1_0(t_0, t);
            LocalPopChoice(b_16);
          }
        else
          {
            t = x_15;
            t = z_6(u_6, t);
          }
      }
    }
  else
    {
      t = z_6(u_6, t);
    }
  return(t);
}
static ATerm e_6 (ATerm l_79 (ATerm), ATerm q_34, ATerm o_34, ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,e_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
  g_7 = t;
  t = l_79(t);
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_7, q_34, o_34);
  t = n_6(a_7, q_34, o_34, t);
  {
    ATerm c_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_7 = NULL;
        t = term_h_16;
        j_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_7, term_h_16);
        t = m_6(a_7, j_7, t);
        LocalPopChoice(e_16);
      }
    else
      {
        t = c_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_7 = ATgetFirst((ATermList) t);
      e_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_h_16;
  h_7 = t;
  t = (ATerm) ATinsert(CheckATermList(e_7), (ATerm) ATinsert(CheckATermList(b_7), q_34));
  i_7 = t;
  t = SSL_table_put(a_7, h_7, i_7);
  t = g_7;
  return(t);
}
static ATerm k_8 (ATerm q_7, ATerm t)
{
  t = q_7;
  {
    ATerm i_16 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_16 = ATgetArgument(t, 0);
            ATerm r_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_16;
      }
  }
  t = term_s_16;
  t = debug_1_0(v_0, t);
  t = (ATerm) ATmakeAppl(sym__2, q_7, term_c_8);
  t = open_file_0_0(t);
  return(t);
}
static ATerm s_8 (ATerm s_7, ATerm x_7, ATerm z_7, ATerm t)
{
  t = SSL_open_file(s_7, x_7);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_u_16;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
  h_8 = t;
  if(match_cons(t, sym__2))
    {
      i_8 = ATgetArgument(t, 0);
      j_8 = ATgetArgument(t, 1);
      {
        ATerm f_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_8(h_8, t);
            LocalPopChoice(g_17);
          }
        else
          {
            t = f_17;
            t = s_8(i_8, j_8, h_8, t);
          }
      }
    }
  else
    {
      t = k_8(h_8, t);
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
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
  t = term_q_17;
  t = new_0_0(t);
  x_8 = t;
  t = term_t_17;
  y_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_8, term_t_17);
  t = l_6(x_8, y_8, t);
  z_8 = t;
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_b_8);
        j_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_8, (ATerm) ATinsert(ATempty, term_b_8));
        t = f_6(z_8, j_9, t);
        t = new_file_0_0(t);
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        t = z_8;
      }
  }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL;
  t = new_file_0_0(t);
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_9, term_c_8);
  t = open_file_0_0(t);
  t = term_q_17;
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_9, term_q_17);
  t = e_6(w_0, o_9, p_9, t);
  t = o_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL;
  p_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_3 = NULL,g_3 = NULL;
      t = p_10;
      t = xtc_new_file_0_0(t);
      d_3 = t;
      t = r_0(t);
      g_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_3, (ATerm) ATinsert(ATinsert(ATempty, d_3), term_i_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(d_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_3);
    }
  else
    {
      ATerm w_3 = NULL,x_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          q_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_10;
      t = xtc_new_file_0_0(t);
      w_3 = t;
      t = r_0(t);
      x_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_3), term_i_18), q_10), term_k_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(w_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_3);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm v_10 = NULL;
  static ATerm x_0 (ATerm t)
  {
    ATerm w_10 = NULL,x_10 = NULL;
    w_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), w_10);
    t = m_6(not_null(v_10), w_10, t);
    x_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_10, x_10);
    return(t);
  }
  if(((v_10 != NULL) && (v_10 != t)))
    _fail(t);
  else
    v_10 = t;
  t = SSL_table_keys(v_10);
  t = map_1_0(x_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm t_80 (ATerm), ATerm t)
{
  ATerm a_11 = NULL;
  a_11 = t;
  {
    ATerm m_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_11 = NULL;
        t = term_w_18;
        t = get_config_0_0(t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, term_d_14);
        t = geq_0_0(t);
        t = a_11;
        t = t_80(t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = m_18;
        t = a_11;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm s_80 (ATerm), ATerm t)
{
  ATerm j_11 = NULL;
  j_11 = t;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_11 = NULL;
        t = term_w_18;
        t = get_config_0_0(t);
        n_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_11, term_h_11);
        t = geq_0_0(t);
        t = j_11;
        t = s_80(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = j_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm u_80 (ATerm), ATerm t)
{
  ATerm t_11 = NULL;
  t_11 = t;
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_11 = NULL;
        t = term_w_18;
        t = get_config_0_0(t);
        w_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_11, term_q_9);
        t = geq_0_0(t);
        t = t_11;
        t = u_80(t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        t = t_11;
      }
  }
  return(t);
}
static ATerm t_5 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  t = o_73(t);
  {
    static ATerm z_0 (ATerm t)
    {
      ATerm y_11 = NULL;
      y_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_24, y_11);
      t = n_73(t);
      return(t);
    }
    t = fetch_1_0(z_0, t);
  }
  t = l_24;
  return(t);
}
static ATerm u_5 (ATerm k_73 (ATerm), ATerm i_24, ATerm h_24, ATerm t)
{
  static ATerm g_13 (ATerm t)
  {
    ATerm y_12 = NULL,a_13 = NULL,d_13 = NULL;
    y_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_13 = ATgetFirst((ATermList) t);
            d_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_19 = t;
          int c_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_12;
              {
                static ATerm f_1 (ATerm t)
                {
                  t = h_24;
                  return(t);
                }
                t = t_5(k_73, f_1, a_13, d_13, t);
              }
              t = g_13(t);
              LocalPopChoice(c_19);
            }
          else
            {
              t = b_19;
              {
                ATerm p_4 = NULL,s_4 = NULL,y_1 = NULL;
                t = SSLgetAnnotations(y_12);
                p_4 = t;
                t = d_13;
                t = g_13(t);
                s_4 = t;
                t = (ATerm) ATinsert(CheckATermList(s_4), a_13);
                y_1 = t;
                t = SSLsetAnnotations(y_1, p_4);
              }
            }
        }
      }
    return(t);
  }
  t = i_24;
  t = g_13(t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm u_13 = NULL;
  if(match_cons(t, sym__2))
    {
      u_13 = ATgetArgument(t, 0);
      if((u_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,o_13 = NULL;
  l_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_19 = ATgetArgument(t, 0);
            ATerm g_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
        t = m_6(e_36, f_36, t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = (ATerm) ATempty;
      }
  }
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_13, g_36);
  t = u_5(g_1, o_13, g_36, t);
  m_13 = t;
  t = SSL_table_put(e_36, f_36, m_13);
  t = l_13;
  return(t);
}
static ATerm w_5 (ATerm w_80 (ATerm), ATerm o_36, ATerm n_36, ATerm t)
{
  static ATerm h_1 (ATerm t)
  {
    ATerm v_13 = NULL,x_13 = NULL;
    if(match_cons(t, sym__2))
      {
        v_13 = ATgetArgument(t, 0);
        x_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, o_36, v_13, x_13);
    t = w_80(t);
    return(t);
  }
  t = n_36;
  t = map_1_0(h_1, t);
  return(t);
}
static ATerm f_6 (ATerm l_38, ATerm m_38, ATerm t)
{
  t = SSL_access(l_38, m_38);
  return(t);
}
static ATerm z_14 (ATerm p_14, ATerm t)
{
  t = SSL_fclose(p_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL;
  v_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_14 = ATgetArgument(t, 0);
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_14);
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            t = z_14(v_14, t);
          }
      }
    }
  else
    {
      t = z_14(v_14, t);
    }
  return(t);
}
static ATerm x_5 (ATerm p_17, ATerm t)
{
  t = SSL_read_term_from_stream(p_17);
  return(t);
}
static ATerm z_5 (ATerm t_38, ATerm u_38, ATerm t)
{
  ATerm a_15 = NULL;
  t = SSL_fopen(t_38, u_38);
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_15);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_15 = NULL;
  t = SSL_stdin_stream();
  d_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_15);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_15 = NULL;
  t = SSL_stdout_stream();
  e_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_15 = NULL;
  t = SSL_stderr_stream();
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_15);
  return(t);
}
static ATerm y_16 (ATerm s_15, ATerm t)
{
  ATerm v_15 = NULL;
  t = SSL_explode_term(s_15);
  if(match_cons(t, sym__2))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_19 = ATgetArgument(t, 1);
        if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
          {
            v_15 = ATgetFirst((ATermList) k_19);
            {
              ATerm l_19 = (ATerm) ATgetNext((ATermList) k_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_16 (ATerm y_15, ATerm z_15, ATerm a_16, ATerm t)
{
  ATerm d_16 = NULL,f_16 = NULL,g_16 = NULL,j_16 = NULL,a_2 = NULL;
  t = SSLgetAnnotations(a_16);
  g_16 = t;
  t = y_15;
  if(match_cons(t, sym_Path_1))
    {
      j_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_16, z_15);
  a_2 = t;
  t = SSLsetAnnotations(a_2, g_16);
  if(match_cons(t, sym__2))
    {
      d_16 = ATgetArgument(t, 0);
      f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(d_16, f_16, t);
  return(t);
}
static ATerm a_17 (ATerm l_16, ATerm m_16, ATerm n_16, ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,t_16 = NULL,b_2 = NULL;
  t = SSLgetAnnotations(n_16);
  q_16 = t;
  t = SSL_is_string(l_16);
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_16, m_16);
  b_2 = t;
  t = SSLsetAnnotations(b_2, q_16);
  if(match_cons(t, sym__2))
    {
      o_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(o_16, p_16, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  v_16 = t;
  if(match_cons(t, sym__2))
    {
      w_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
      {
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_16(v_16, t);
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
            {
              ATerm r_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_16(w_16, x_16, v_16, t);
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = r_19;
                  t = a_17(w_16, x_16, v_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_16(v_16, t);
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_17 = NULL;
      e_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_17, term_w_19);
      t = a_6(t);
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      t = debug_1_0(i_1, t);
      _fail(t);
    }
  c_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(d_17, t);
  b_17 = t;
  t = c_17;
  t = fclose_0_0(t);
  t = b_17;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_x_19;
  return(t);
}
static ATerm m_1 (ATerm t)
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
      ATerm h_17 = NULL,i_17 = NULL;
      h_17 = t;
      t = (ATerm) ATinsert(ATempty, term_b_20);
      i_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_17, (ATerm) ATinsert(ATempty, term_b_20));
      t = f_6(h_17, i_17, t);
      LocalPopChoice(a_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = z_19;
      {
        ATerm c_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_20 = t;
            if((PushChoice() == 0))
              {
                ATerm l_17 = NULL,m_17 = NULL;
                l_17 = t;
                t = (ATerm) ATinsert(ATempty, term_b_8);
                m_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, l_17, (ATerm) ATinsert(ATempty, term_b_8));
                t = f_6(l_17, m_17, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_20;
              }
            t = debug_1_0(l_1, t);
            LocalPopChoice(e_20);
          }
        else
          {
            t = c_20;
            t = debug_1_0(m_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_j_20;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,j_18 = NULL;
  g_18 = t;
  t = term_m_15;
  h_18 = t;
  t = (ATerm) ATinsert(ATempty, term_l_20);
  j_18 = t;
  t = SSL_printnl(h_18, j_18);
  t = g_18;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm l_18 = NULL,n_18 = NULL,o_18 = NULL;
  if(match_cons(t, sym__3))
    {
      l_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
      o_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_5(l_18, n_18, o_18, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  p_18 = t;
  t = term_m_15;
  q_18 = t;
  t = (ATerm) ATinsert(ATempty, term_n_20);
  r_18 = t;
  t = SSL_printnl(q_18, r_18);
  t = p_18;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  s_18 = t;
  t = term_m_15;
  t_18 = t;
  t = (ATerm) ATinsert(ATempty, term_l_20);
  u_18 = t;
  t = SSL_printnl(t_18, u_18);
  t = s_18;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,s_17 = NULL,u_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  n_17 = t;
  t = if_verbose5_1_0(n_1, t);
  {
    ATerm o_20 = t;
    if((PushChoice() == 0))
      {
        ATerm e_18 = NULL,f_18 = NULL;
        t = term_p_20;
        e_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, n_17);
        f_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_20, (ATerm) ATmakeAppl(sym_Imported_1, n_17));
        t = m_6(e_18, f_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_20;
      }
  }
  s_17 = t;
  t = term_p_20;
  a_18 = t;
  t = term_t_20;
  b_18 = t;
  t = (ATerm) ATinsert(ATempty, n_17);
  c_18 = t;
  t = SSL_table_put(a_18, b_18, c_18);
  t = s_17;
  t = if_verbose4_1_0(p_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(u_1, t);
  o_17 = t;
  t = term_p_20;
  z_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_20, o_17);
  t = w_5(w_1, z_17, o_17, t);
  t = if_verbose6_1_0(x_1, t);
  t = term_p_20;
  u_17 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, n_17);
  x_17 = t;
  t = (ATerm) ATempty;
  y_17 = t;
  t = SSL_table_put(u_17, x_17, y_17);
  t = (ATerm) ATmakeAppl(sym__3, term_p_20, (ATerm)ATmakeAppl(sym_Imported_1, n_17), (ATerm) ATempty);
  t = if_verbose4_1_0(z_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm c_77 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
  o_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_19 = ATgetFirst((ATermList) t);
          q_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 = NULL,x_6 = NULL,y_6 = NULL,g_2 = NULL;
            t = SSLgetAnnotations(o_19);
            j_6 = t;
            t = p_19;
            t = c_77(t);
            x_6 = t;
            t = q_19;
            t = filter_1_0(c_77, t);
            y_6 = t;
            t = (ATerm) ATinsert(CheckATermList(y_6), x_6);
            g_2 = t;
            t = SSLsetAnnotations(g_2, j_6);
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
            t = q_19;
            t = filter_1_0(c_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm n_67 (ATerm), ATerm t)
{
  static ATerm d_20 (ATerm t)
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_67(t);
        t = d_20(t);
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
      }
    return(t);
  }
  t = d_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_21;
      t = get_config_0_0(t);
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_20 = NULL;
            t = term_k_21;
            f_20 = t;
            t = SSL_getenv(f_20);
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_l_21;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL;
  t = term_p_20;
  r_20 = t;
  t = term_m_21;
  s_20 = t;
  t = term_o_21;
  t = m_6(r_20, s_20, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm p_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_21;
      }
  }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm h_20 = NULL;
  t = if_verbose5_1_0(c_2, t);
  h_20 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_20 = NULL,m_20 = NULL;
        t = term_p_20;
        k_20 = t;
        t = term_t_20;
        m_20 = t;
        t = term_v_21;
        t = m_6(k_20, m_20, t);
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        {
          ATerm q_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          q_20 = t;
          t = repeat_1_0(e_2, t);
          t = q_20;
        }
      }
  }
  t = h_20;
  t = if_verbose5_1_0(f_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_w_21;
  return(t);
}
static ATerm b_22 (ATerm a_21, ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
  t = term_p_20;
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, a_21);
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_20, (ATerm) ATmakeAppl(sym_Tool_1, a_21));
  t = m_6(d_21, e_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_21 = ATgetFirst((ATermList) t);
      if(match_cons(x_21, sym__2))
        {
          ATerm z_21 = ATgetArgument(x_21, 0);
          c_21 = ATgetArgument(x_21, 1);
        }
      else
        _fail(t);
      {
        ATerm y_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_21;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_w_21;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_p_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(a_3, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_21 = NULL,i_21 = NULL,j_21 = NULL;
      t = if_verbose5_1_0(j_2, t);
      t = xtc_load_0_0(t);
      j_21 = t;
      if(match_cons(t, sym__2))
        {
          f_21 = ATgetArgument(t, 0);
          i_21 = ATgetArgument(t, 1);
          {
            ATerm f_22 = t;
            int g_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_21 = NULL,q_21 = NULL,r_21 = NULL;
                t = term_p_20;
                q_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, f_21);
                r_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_20, (ATerm) ATmakeAppl(sym_Tool_1, f_21));
                t = m_6(q_21, r_21, t);
                {
                  static ATerm n_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((i_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((n_21 != NULL) && (n_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          n_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(n_2, t);
                }
                t = not_null(n_21);
                LocalPopChoice(g_22);
              }
            else
              {
                t = f_22;
                t = b_22(j_21, t);
              }
          }
        }
      else
        {
          t = b_22(j_21, t);
        }
      t = if_verbose5_1_0(w_2, t);
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm a_22 = NULL,n_7 = NULL,o_7 = NULL;
        a_22 = t;
        t = term_m_15;
        n_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_22), a_22), term_h_22);
        o_7 = t;
        t = SSL_printnl(n_7, o_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_22), a_22), term_h_22);
        t = if_verbose5_1_0(z_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm g_6 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_copy(l_14, m_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL;
  z_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_7 = NULL;
        t = z_22;
        t = o_0(t);
        w_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = w_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = w_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, a_23, w_7);
        t = g_6(a_23, w_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_23);
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        {
          ATerm l_22 = t;
          int m_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_8 = NULL;
              t = z_22;
              t = o_0(t);
              l_8 = t;
              {
                ATerm n_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm m_8 = NULL;
                    m_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = m_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = m_8;
                          }
                        else
                          {
                            t = m_8;
                            if((a_23 != t))
                              {
                                _fail(t);
                              }
                            t = m_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_22;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, a_23, l_8);
              t = g_6(a_23, l_8, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_23);
              LocalPopChoice(m_22);
            }
          else
            {
              t = l_22;
              t = z_22;
              t = o_0(t);
              if((a_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_23);
            }
        }
      }
  }
  return(t);
}
static ATerm h_6 (ATerm m_35, ATerm n_35, ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL;
  f_23 = t;
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
        t = m_6(m_35, n_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_22 = ATgetFirst((ATermList) t);
            e_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_22);
        t = SSL_table_put(m_35, n_35, e_23);
        t = (ATerm) ATmakeAppl(sym__3, m_35, n_35, e_23);
      }
    else
      {
        t = o_22;
        t = SSL_table_remove(m_35, n_35);
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
      }
  }
  t = f_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL;
  l_23 = t;
  t = i_79(t);
  k_23 = t;
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_23 = NULL;
        t = term_h_16;
        n_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_23, term_h_16);
        t = m_6(k_23, n_23, t);
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
      j_23 = ATgetFirst((ATermList) t);
      i_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_h_16;
  m_23 = t;
  t = SSL_table_put(k_23, m_23, i_23);
  t = j_23;
  {
    static ATerm b_3 (ATerm t)
    {
      ATerm o_23 = NULL;
      o_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_23, o_23);
      t = h_6(k_23, o_23, t);
      return(t);
    }
    t = map_1_0(b_3, t);
  }
  t = l_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t)
{
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_80(t);
      t = e_80(t);
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      t = e_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm h_79 (ATerm), ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
  r_23 = t;
  t = h_79(t);
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_23, term_h_16);
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_22 = ATgetArgument(t, 0);
            ATerm y_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_16;
        z_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_23, term_h_16);
        t = m_6(q_23, z_23, t);
        LocalPopChoice(w_22);
      }
    else
      {
        t = v_22;
        t = (ATerm) ATempty;
      }
  }
  s_23 = t;
  t = term_h_16;
  t_23 = t;
  t = (ATerm) ATinsert(CheckATermList(s_23), (ATerm) ATempty);
  u_23 = t;
  t = SSL_table_put(q_23, t_23, u_23);
  t = r_23;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_d_18;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(q_24);
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        t = q_24;
      }
  }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm m_82 (ATerm), ATerm t)
{
  ATerm c_24 = NULL;
  static ATerm f_3 (ATerm t)
  {
    ATerm d_24 = NULL;
    d_24 = t;
    {
      ATerm d_23 = t;
      int g_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_24 = NULL,f_24 = NULL;
          t = term_d_18;
          e_24 = t;
          t = term_h_16;
          f_24 = t;
          t = term_h_23;
          t = m_6(e_24, f_24, t);
          LocalPopChoice(g_23);
        }
      else
        {
          t = d_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((c_24 != NULL) && (c_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          c_24 = ATgetFirst((ATermList) t);
        {
          ATerm p_23 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = c_24;
    t = map_1_0(h_3, t);
    t = d_24;
    t = end_scope_1_0(j_3, t);
    return(t);
  }
  t = begin_scope_1_0(c_3, t);
  t = restore_always_2_0(m_82, f_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_18;
      t = get_config_0_0(t);
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      t = term_x_23;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  static ATerm k_3 (ATerm t)
  {
    ATerm y_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_24 = NULL;
        t = term_k_18;
        t = get_config_0_0(t);
        u_24 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, u_24);
        LocalPopChoice(a_24);
      }
    else
      {
        t = y_23;
        t = term_m_4;
      }
    t = n_82(t);
    t = copy_to_1_0(m_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(k_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,y_24 = NULL,z_24 = NULL,b_25 = NULL;
  v_24 = t;
  t = term_q_17;
  t = whoami_0_0(t);
  w_24 = t;
  t = term_m_15;
  z_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_24), w_24), term_b_24);
  b_25 = t;
  t = SSL_printnl(z_24, b_25);
  t = term_w_8;
  y_24 = t;
  t = SSL_exit(y_24);
  t = v_24;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  if(match_string(t, "-k"))
    {
      t = e_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_25;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,n_25 = NULL;
  f_25 = t;
  t = SSL_string_to_int(f_25);
  g_25 = t;
  t = term_j_24;
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_24, g_25);
  t = p_6(n_25, g_25, t);
  t = f_25;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_k_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, p_3, q_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
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
static ATerm s_3 (ATerm t)
{
  ATerm q_25 = NULL,u_25 = NULL;
  t = term_w_18;
  q_25 = t;
  t = term_n_24;
  u_25 = t;
  t = term_o_24;
  t = p_6(q_25, u_25, t);
  t = term_p_24;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_r_24;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  t = SSL_string_to_int(v_25);
  w_25 = t;
  t = term_w_18;
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_18, w_25);
  t = p_6(x_25, w_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_25);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_s_24;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL;
  t = term_t_24;
  z_25 = t;
  t = term_q_17;
  a_26 = t;
  t = term_x_24;
  t = p_6(z_25, a_26, t);
  t = term_a_25;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_3, s_3, t_3, t);
      LocalPopChoice(h_25);
    }
  else
    {
      t = d_25;
      {
        ATerm i_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_3, v_3, a_4, t);
            LocalPopChoice(j_25);
          }
        else
          {
            t = i_25;
            t = Option_3_0(e_4, f_4, g_4, t);
          }
      }
    }
  return(t);
}
static ATerm p_6 (ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm d_26 = NULL;
  t = term_k_25;
  d_26 = t;
  t = SSL_table_put(d_26, h_37, i_37);
  t = (ATerm) ATmakeAppl(sym__3, term_k_25, h_37, i_37);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_26 = NULL,j_26 = NULL,l_26 = NULL;
      t = term_q_17;
      t = e_0(t);
      i_26 = t;
      t = term_l_25;
      j_26 = t;
      t = term_m_25;
      l_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_25, term_m_25, i_26);
      t = n_6(j_26, l_26, i_26, t);
      _fail(t);
    }
  else
    {
      ATerm o_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_26 = ATgetFirst((ATermList) t);
          h_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_26;
      t = c_0(t);
      t = term_q_17;
      t = d_0(t);
      o_26 = t;
      t = (ATerm) ATinsert(CheckATermList(h_26), o_26);
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm q_26 = NULL;
  q_26 = t;
  if(match_string(t, "-o"))
    {
      t = q_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_26;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  r_26 = t;
  t = term_i_18;
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_18, r_26);
  t = p_6(s_26, r_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_26);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, l_4, n_4, t);
  return(t);
}
static ATerm n_6 (ATerm h_35, ATerm i_35, ATerm g_35, ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,y_26 = NULL;
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_25 = ATgetArgument(t, 0);
            ATerm y_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
        t = m_6(h_35, i_35, t);
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        t = (ATerm) ATempty;
      }
  }
  v_26 = t;
  t = (ATerm) ATinsert(CheckATermList(v_26), g_35);
  y_26 = t;
  t = SSL_table_put(h_35, i_35, y_26);
  t = u_26;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm o_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_27 = NULL,x_27 = NULL,y_27 = NULL;
      t = term_q_17;
      t = n_0(t);
      u_27 = t;
      t = term_l_25;
      x_27 = t;
      t = term_m_25;
      y_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_25, term_m_25, u_27);
      t = n_6(x_27, y_27, u_27, t);
      _fail(t);
    }
  else
    {
      ATerm i_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_27 = ATgetFirst((ATermList) t);
          r_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_27 = ATgetFirst((ATermList) t);
          t_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_27;
      t = k_0(t);
      t = s_27;
      t = l_0(t);
      i_28 = t;
      t = (ATerm) ATinsert(CheckATermList(t_27), i_28);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm k_28 = NULL;
  k_28 = t;
  if(match_string(t, "-i"))
    {
      t = k_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_28;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL;
  l_28 = t;
  t = term_k_18;
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_18, l_28);
  t = p_6(m_28, l_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_28);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, q_4, r_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_17;
  t = whoami_0_0(t);
  n_28 = t;
  t = term_m_15;
  p_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_26), n_28);
  q_28 = t;
  t = SSL_printnl(p_28, q_28);
  t = term_w_8;
  o_28 = t;
  t = SSL_exit(o_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_26;
  t = get_config_0_0(t);
  return(t);
}
static ATerm i_6 (ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm f_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_33, d_33);
      LocalPopChoice(k_26);
    }
  else
    {
      t = f_26;
      t = SSL_addr(c_33, d_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
  s_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_28;
      t = y_75(t);
    }
  else
    {
      ATerm x_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_28 = ATgetFirst((ATermList) t);
          u_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_28;
      t = foldr_2_0(y_75, z_75, t);
      x_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_28, x_28);
      t = z_75(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_n_24;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  if(match_cons(t, sym__2))
    {
      a_9 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(a_9, b_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_29 = NULL,t_8 = NULL,u_8 = NULL;
  t = times_0_0(t);
  u_8 = t;
  t = SSL_explode_term(u_8);
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      t_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_8;
  t = foldr_2_0(u_4, v_4, t);
  a_29 = t;
  t = SSL_TicksToSeconds(a_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
  l_29 = t;
  if(match_cons(t, sym__2))
    {
      m_29 = ATgetArgument(t, 0);
      n_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_29;
        if((m_29 != t))
          {
            _fail(t);
          }
        t = l_29;
        LocalPopChoice(p_26);
      }
    else
      {
        t = n_26;
        t = (ATerm) ATmakeAppl(sym__2, m_29, n_29);
        {
          ATerm t_26 = t;
          int w_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_29, n_29);
              LocalPopChoice(w_26);
            }
          else
            {
              t = t_26;
              t = SSL_gtr(m_29, n_29);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_29, n_29);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_80 (ATerm), ATerm t)
{
  ATerm r_29 = NULL;
  r_29 = t;
  {
    ATerm x_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_29 = NULL;
        t = term_w_18;
        t = get_config_0_0(t);
        v_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_29, term_w_8);
        t = geq_0_0(t);
        t = r_29;
        t = p_80(t);
        LocalPopChoice(z_26);
      }
    else
      {
        t = x_26;
        t = r_29;
      }
  }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,c_30 = NULL,d_30 = NULL;
  t = run_time_0_0(t);
  z_29 = t;
  t = term_q_17;
  t = whoami_0_0(t);
  a_30 = t;
  t = term_m_15;
  c_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_27), z_29), term_g_8), a_30);
  d_30 = t;
  t = SSL_printnl(c_30, d_30);
  t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_27), z_29), term_g_8), a_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_24;
  e_30 = t;
  t = SSL_exit(e_30);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL;
  n_30 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_30;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_30 = ATgetArgument(t, 0);
          {
            ATerm t_9 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(n_30);
            t_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_30);
            i_2 = t;
            t = SSLsetAnnotations(i_2, t_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_30;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_27;
      t = get_config_0_0(t);
      LocalPopChoice(c_27);
    }
  else
    {
      t = b_27;
      t = fetch_1_0(a_5, t);
    }
  t = o_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_30 = ATgetFirst((ATermList) t);
      r_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_30 = NULL,w_30 = NULL;
        static ATerm b_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_30)), not_null(w_30));
          return(t);
        }
        t = r_30;
        t = i_0(t);
        if(((v_30 != NULL) && (v_30 != t)))
          _fail(t);
        else
          v_30 = t;
        t = q_30;
        t = g_0(t);
        if(((w_30 != NULL) && (w_30 != t)))
          _fail(t);
        else
          w_30 = t;
        t = r_30;
        t = reverse_acc_2_0(g_0, b_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_17;
      t = i_0(t);
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,k_2 = NULL;
  c_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_31);
  a_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_31);
  k_2 = t;
  t = SSLsetAnnotations(k_2, a_31);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm e_31 = NULL;
  e_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_31), term_e_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_26;
      t = get_config_0_0(t);
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      t = fetch_1_0(c_5, t);
    }
  t = term_h_27;
  t = echo_0_0(t);
  t = term_l_25;
  y_30 = t;
  t = term_m_25;
  z_30 = t;
  t = term_i_27;
  t = m_6(y_30, z_30, t);
  t = reverse_acc_2_0(_id, d_5, t);
  t = map_1_0(e_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm q_69 (ATerm), ATerm t)
{
  static ATerm d_32 (ATerm t)
  {
    ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
    a_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_32 = ATgetFirst((ATermList) t);
        c_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_27 = t;
      int k_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_10 = NULL,k_10 = NULL,s_2 = NULL;
          t = SSLgetAnnotations(a_32);
          h_10 = t;
          t = b_32;
          t = q_69(t);
          k_10 = t;
          t = (ATerm) ATinsert(CheckATermList(c_32), k_10);
          s_2 = t;
          t = SSLsetAnnotations(s_2, h_10);
          LocalPopChoice(k_27);
        }
      else
        {
          t = j_27;
          {
            ATerm c_11 = NULL,i_11 = NULL,t_2 = NULL;
            t = SSLgetAnnotations(a_32);
            c_11 = t;
            t = c_32;
            t = d_32(t);
            i_11 = t;
            t = (ATerm) ATinsert(CheckATermList(i_11), b_32);
            t_2 = t;
            t = SSLsetAnnotations(t_2, c_11);
          }
        }
    }
    return(t);
  }
  t = d_32(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
  h_32 = t;
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_27 = ATgetFirst((ATermList) t);
                ATerm p_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_32;
          }
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        t = (ATerm) ATinsert(ATempty, h_32);
      }
  }
  i_32 = t;
  t = term_x_23;
  j_32 = t;
  t = SSL_printnl(j_32, i_32);
  t = h_32;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm l_6 (ATerm x_31, ATerm y_31, ATerm t)
{
  t = SSL_strcat(x_31, y_31);
  return(t);
}
ATerm debug_1_0 (ATerm n_64 (ATerm), ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL;
  n_32 = t;
  t = n_64(t);
  o_32 = t;
  t = term_m_15;
  p_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_32), o_32);
  q_32 = t;
  t = SSL_printnl(p_32, q_32);
  t = n_32;
  return(t);
}
ATerm map_1_0 (ATerm g_69 (ATerm), ATerm t)
{
  static ATerm h_33 (ATerm t)
  {
    ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
    e_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_33;
      }
    else
      {
        ATerm z_11 = NULL,c_12 = NULL,g_12 = NULL,i_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_33 = ATgetFirst((ATermList) t);
            g_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_33);
        z_11 = t;
        t = f_33;
        t = g_69(t);
        c_12 = t;
        t = g_33;
        t = h_33(t);
        g_12 = t;
        t = (ATerm) ATinsert(CheckATermList(g_12), c_12);
        i_3 = t;
        t = SSLsetAnnotations(i_3, z_11);
      }
    return(t);
  }
  t = h_33(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm q_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(v_27);
    }
  else
    {
      t = q_27;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_w_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_33 = NULL;
      p_33 = t;
      t = SSL_is_string(p_33);
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      {
        ATerm b_28 = t;
        int c_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_5, t);
            LocalPopChoice(c_28);
          }
        else
          {
            t = b_28;
            {
              ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
              v_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_33 = ATgetArgument(t, 0);
                  t = w_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_33 = ATgetArgument(t, 0);
                      t = w_33;
                      {
                        ATerm d_28 = t;
                        int e_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(e_28);
                          }
                        else
                          {
                            t = d_28;
                            t = debug_1_0(j_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm b_34 = NULL,c_34 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_33 = ATgetArgument(t, 0);
                          x_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_33;
                      t = eval_config_0_0(t);
                      b_34 = t;
                      t = x_33;
                      t = eval_config_0_0(t);
                      c_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_34, c_34);
                      t = l_6(b_34, c_34, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_6 (ATerm y_36, ATerm z_36, ATerm t)
{
  t = SSL_table_get(y_36, z_36);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL;
  g_34 = t;
  t = term_k_25;
  h_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_25, g_34);
  t = m_6(h_34, g_34, t);
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_34 = NULL,u_34 = NULL;
        t = eval_config_0_0(t);
        t_34 = t;
        t = term_k_25;
        u_34 = t;
        t = SSL_table_put(u_34, g_34, t_34);
        t = t_34;
        LocalPopChoice(g_28);
      }
    else
      {
        t = f_28;
      }
  }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL;
  t = term_h_28;
  x_34 = t;
  t = term_q_17;
  y_34 = t;
  t = term_j_28;
  t = p_6(x_34, y_34, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_r_28;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,j_35 = NULL,k_35 = NULL;
  t = term_h_28;
  j_35 = t;
  t = term_q_17;
  k_35 = t;
  t = term_j_28;
  t = p_6(j_35, k_35, t);
  t = term_v_28;
  a_35 = t;
  t = term_q_17;
  b_35 = t;
  t = term_w_28;
  t = p_6(a_35, b_35, t);
  t = term_y_28;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_5, m_5, n_5, t);
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
      t = Option_3_0(o_5, q_5, r_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_56 (ATerm), ATerm g_56 (ATerm), ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,l_3 = NULL;
  t_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_35 = ATgetFirst((ATermList) t);
      q_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_35);
  o_35 = t;
  t = p_35;
  t = f_56(t);
  r_35 = t;
  t = q_35;
  t = g_56(t);
  s_35 = t;
  t = (ATerm) ATinsert(CheckATermList(s_35), r_35);
  l_3 = t;
  t = SSLsetAnnotations(l_3, o_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,d_36 = NULL,j_36 = NULL,t_4 = NULL;
  y_35 = t;
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_29;
        t = m_86(t);
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
      }
  }
  t = y_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_36 = ATgetFirst((ATermList) t);
      b_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_35);
  z_35 = t;
  t = term_e_26;
  j_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_26, a_36);
  t = p_6(j_36, a_36, t);
  t = b_36;
  {
    static ATerm x_36 (ATerm t)
    {
      ATerm g_29 = t;
      int h_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_29 = t;
          int j_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_36 = NULL;
              m_36 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_36;
              LocalPopChoice(j_29);
            }
          else
            {
              t = i_29;
              t = m_86(t);
              t = Cons_2_0(_id, x_36, t);
            }
          LocalPopChoice(h_29);
        }
      else
        {
          t = g_29;
          {
            ATerm t_36 = NULL,u_36 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_36 = ATgetFirst((ATermList) t);
                u_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_36), (ATerm) ATmakeAppl(sym_Undefined_1, t_36));
          }
        }
      return(t);
    }
    t = x_36(t);
  }
  d_36 = t;
  t = (ATerm) ATinsert(CheckATermList(d_36), (ATerm) ATmakeAppl(sym_Program_1, a_36));
  t_4 = t;
  t = SSLsetAnnotations(t_4, z_35);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm n_37 = NULL;
  n_37 = t;
  if(match_string(t, "--help"))
    {
      t = n_37;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_37;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_37;
        }
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL;
  t = term_d_27;
  o_37 = t;
  t = term_q_17;
  p_37 = t;
  t = term_k_29;
  t = p_6(o_37, p_37, t);
  t = term_o_29;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_p_29;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  g_37 = t;
  t = term_l_25;
  k_37 = t;
  t = term_m_25;
  l_37 = t;
  t = (ATerm) ATempty;
  m_37 = t;
  t = SSL_table_put(k_37, l_37, m_37);
  t = g_37;
  {
    static ATerm s_5 (ATerm t)
    {
      ATerm q_29 = t;
      int s_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_86(t);
          LocalPopChoice(s_29);
        }
      else
        {
          t = q_29;
          {
            ATerm t_29 = t;
            int u_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_6, k_6, o_6, t);
                LocalPopChoice(u_29);
              }
            else
              {
                t = t_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_5, t);
  }
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_38 = NULL;
        e_38 = t;
        {
          ATerm y_29 = t;
          int b_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_13 = NULL;
              t = e_38;
              {
                ATerm f_30 = t;
                int g_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_d_27;
                    t = get_config_0_0(t);
                    LocalPopChoice(g_30);
                  }
                else
                  {
                    t = f_30;
                    t = fetch_1_0(r_6, t);
                  }
              }
              t = e_38;
              t = default_system_usage_0_0(t);
              t = term_n_24;
              c_13 = t;
              t = SSL_exit(c_13);
              LocalPopChoice(b_30);
            }
          else
            {
              t = y_29;
              {
                ATerm n_13 = NULL;
                t = term_h_28;
                t = get_config_0_0(t);
                t = e_38;
                t = default_system_about_0_0(t);
                t = term_n_24;
                n_13 = t;
                t = SSL_exit(n_13);
              }
            }
        }
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        {
          ATerm h_30 = t;
          int i_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
              static ATerm v_6 (ATerm t)
              {
                ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,w_4 = NULL;
                k_38 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    j_38 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_38);
                i_38 = t;
                t = j_38;
                if(((e_37 != NULL) && (e_37 != t)))
                  _fail(t);
                else
                  e_37 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, j_38);
                w_4 = t;
                t = SSLsetAnnotations(w_4, i_38);
                return(t);
              }
              t = fetch_1_0(v_6, t);
              t = term_m_15;
              g_38 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_37)), term_j_30);
              h_38 = t;
              t = SSL_printnl(g_38, h_38);
              t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_37)), term_j_30));
              t = default_system_usage_0_0(t);
              t = term_w_8;
              f_38 = t;
              t = SSL_exit(f_38);
              LocalPopChoice(i_30);
            }
          else
            {
              t = h_30;
            }
        }
      }
  }
  f_37 = t;
  t = term_l_25;
  j_37 = t;
  t = SSL_table_destroy(j_37);
  t = f_37;
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,x_38 = NULL,y_38 = NULL;
  t = parse_options_1_0(q_84, t);
  r_38 = t;
  t = term_k_30;
  y_38 = t;
  t = SSL_table_create(y_38);
  t = term_k_30;
  s_38 = t;
  t = term_l_30;
  x_38 = t;
  t = SSL_table_put(s_38, x_38, r_38);
  t = r_38;
  t = s_84(t);
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_84, t);
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        {
          ATerm s_30 = t;
          int t_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_84(t);
              t = report_success_0_0(t);
              LocalPopChoice(t_30);
            }
          else
            {
              t = s_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm u_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(x_30);
    }
  else
    {
      t = u_30;
      {
        ATerm d_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(f_31);
          }
        else
          {
            t = d_31;
            {
              ATerm g_31 = t;
              int h_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(d_7, f_7, k_7, t);
                  LocalPopChoice(h_31);
                }
              else
                {
                  t = g_31;
                  {
                    ATerm i_31 = t;
                    int j_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(j_31);
                      }
                    else
                      {
                        t = i_31;
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
static ATerm c_7 (ATerm t)
{
  t = xtc_io_1_0(l_7, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL;
  t = term_k_31;
  e_39 = t;
  t = term_q_17;
  f_39 = t;
  t = term_l_31;
  t = p_6(e_39, f_39, t);
  t = term_m_31;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_n_31;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_39 = NULL,v_39 = NULL;
      v_39 = t;
      if(match_cons(t, sym_FILE_1))
        {
          u_39 = ATgetArgument(t, 0);
          {
            ATerm y_13 = NULL,y_4 = NULL;
            t = SSLgetAnnotations(v_39);
            y_13 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, u_39);
            y_4 = t;
            t = SSLsetAnnotations(y_4, y_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_39;
        }
      LocalPopChoice(p_31);
      t = xtc_transform_file_2_0(m_7, p_7, t);
    }
  else
    {
      t = o_31;
      t = xtc_transform_term_2_0(r_7, t_7, t);
    }
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_40 = NULL,h_40 = NULL;
        h_40 = t;
        if(match_cons(t, sym_FILE_1))
          {
            g_40 = ATgetArgument(t, 0);
            {
              ATerm j_14 = NULL,z_4 = NULL;
              t = SSLgetAnnotations(h_40);
              j_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_40);
              z_4 = t;
              t = SSLsetAnnotations(z_4, j_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_40;
          }
        LocalPopChoice(r_31);
        t = xtc_transform_file_2_0(u_7, v_7, t);
      }
    else
      {
        t = q_31;
        t = xtc_transform_term_2_0(y_7, a_8, t);
      }
  }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm w_39 = NULL;
  t = term_t_31;
  t = xtc_find_0_0(t);
  w_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_39), term_u_31);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm y_39 = NULL;
  t = term_t_31;
  t = xtc_find_0_0(t);
  y_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_39), term_u_31);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_v_31;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_v_31;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm astratego2text_0_0 (ATerm t)
{
  t = option_wrap_4_0(w_6, default_usage_0_0, _id, c_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = astratego2text_0_0(t);
  return(t);
}
