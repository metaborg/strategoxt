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
ATerm term_j_32;
ATerm term_i_32;
ATerm term_g_32;
ATerm term_a_32;
ATerm term_x_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_m_30;
ATerm term_k_30;
ATerm term_i_30;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_j_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_d_28;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_z_25;
ATerm term_x_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_a_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_x_23;
ATerm term_k_23;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_c_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_i_21;
ATerm term_a_21;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_j_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_x_19;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_j_18;
ATerm term_w_17;
ATerm term_i_17;
ATerm term_e_17;
ATerm term_s_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_c_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_9, term_f_8, term_i_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_9, term_l_9, term_m_9);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_9, term_r_9, term_t_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_b_10, term_c_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_h_10, term_j_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_o_10, term_p_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_10, term_t_10, term_u_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_y_10, term_a_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_f_11, term_g_11);
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
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_o_11, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_v_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_z_11, term_a_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_f_12, term_k_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_o_12, term_q_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_t_12, term_u_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_x_12, term_y_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_e_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_i_13, term_j_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_o_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_s_13, term_t_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_z_13, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_m_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_s_14, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_y_14, term_z_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_f_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_m_15, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_s_15);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_y_20, term_p_21);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__2, term_y_20, term_a_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_e_17);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym__2, term_c_8, term_j_24);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym__2, term_x_24, term_s_18);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym__2, term_v_25, term_x_25);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_s_18);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_a_29, term_s_18);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym__2, term_d_27, term_s_18);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym__2, term_g_31, term_s_18);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.pp.af", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm v_5 (ATerm t_28, ATerm u_28, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm d_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm g_6 (ATerm q_66 (ATerm), ATerm q_167, ATerm x_17, ATerm t);
static ATerm h_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm t);
static ATerm h_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm s_71 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm f_65 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm l_84 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm x_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_7 (ATerm w_6, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm j_6 (ATerm a_80 (ATerm), ATerm b_30, ATerm z_29, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm n_81 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm m_81 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm o_81 (ATerm), ATerm t);
static ATerm x_5 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm u_24, ATerm t_24, ATerm t);
static ATerm y_5 (ATerm l_75 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm h_1 (ATerm t);
static ATerm z_5 (ATerm l_32, ATerm m_32, ATerm n_32, ATerm t);
static ATerm a_6 (ATerm q_81 (ATerm), ATerm v_32, ATerm u_32, ATerm t);
static ATerm c_6 (ATerm w_34, ATerm x_34, ATerm t);
static ATerm a_14 (ATerm q_13, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm b_6 (ATerm t_17, ATerm t);
static ATerm e_6 (ATerm f_35, ATerm g_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_16 (ATerm r_14, ATerm t);
static ATerm v_16 (ATerm a_15, ATerm b_15, ATerm g_15, ATerm t);
static ATerm w_16 (ATerm t_15, ATerm w_15, ATerm x_15, ATerm t);
static ATerm f_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_79 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm v_21 (ATerm m_20, ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm k_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm l_6 (ATerm t_31, ATerm u_31, ATerm t);
ATerm end_scope_1_0 (ATerm x_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm w_79 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm x_83 (ATerm), ATerm t);
static ATerm k_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm y_83 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_6 (ATerm o_33, ATerm p_33, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_6 (ATerm o_31, ATerm p_31, ATerm n_31, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_6 (ATerm n_28, ATerm o_28, ATerm t);
ATerm foldr_2_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_81 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm need_help_1_0 (ATerm n_85 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_71 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_6 (ATerm d_51, ATerm e_51, ATerm t);
ATerm debug_1_0 (ATerm o_66 (ATerm), ATerm t);
ATerm map_1_0 (ATerm g_71 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm q_6 (ATerm f_33, ATerm g_33, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_58 (ATerm), ATerm h_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_87 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm parse_options_1_0 (ATerm k_87 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
ATerm io_pp_box_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm v_5 (ATerm t_28, ATerm u_28, ATerm t)
{
  ATerm x_4 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(t_28, u_28);
      LocalPopChoice(b_8);
    }
  else
    {
      t = x_4;
      t = SSL_subtr(t_28, u_28);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,q_0 = NULL;
  t = term_c_8;
  {
    ATerm d_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(e_8);
      }
    else
      {
        t = d_8;
        t = term_f_8;
      }
  }
  b_0 = t;
  t = term_f_8;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_f_8);
  t = v_5(b_0, q_0, t);
  f_0 = t;
  t = SSL_int_to_string(f_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_c_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_g_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm c_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_k_8);
      c_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_0, (ATerm) ATinsert(ATempty, term_k_8));
      t = c_6(w_0, c_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm d_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm d_1 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_1);
  return(t);
}
static ATerm g_6 (ATerm q_66 (ATerm), ATerm q_167, ATerm x_17, ATerm t)
{
  ATerm e_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_167, term_l_8);
  t = f_6(t);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_1, x_17);
  t = q_66(t);
  t = fclose_0_0(t);
  t = x_17;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      if(match_cons(n_8, sym_Stream_1))
        {
          q_1 = ATgetArgument(n_8, 0);
        }
      else
        _fail(t);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(q_1, r_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm t)
{
  ATerm f_1 = NULL,g_1 = NULL;
  g_1 = t;
  t = xtc_new_file_0_0(t);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_1, g_1);
  t = g_6(h_0, f_1, g_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_1);
  t = xtc_transform_file_2_0(k_83, l_83, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm h_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
  v_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      w_2 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,t_0 = NULL;
        t = SSL_int_to_string(w_2);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_8), s_0), term_r_8);
        t_0 = t;
        t = SSL_concat_strings(t_0);
      }
    }
  else
    {
      ATerm l_1 = NULL,m_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          w_2 = ATgetArgument(t, 0);
          x_2 = ATgetArgument(t, 1);
          y_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(x_2);
      l_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_2), term_w_8), l_1), term_t_8), w_2);
      m_1 = t;
      t = SSL_concat_strings(m_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm s_71 (ATerm), ATerm t)
{
  ATerm e_3 = NULL;
  static ATerm j_0 (ATerm t)
  {
    t = s_71(t);
    if(((e_3 != NULL) && (e_3 != t)))
      _fail(t);
    else
      e_3 = t;
    return(t);
  }
  t = fetch_1_0(j_0, t);
  t = not_null(e_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm h_3 = NULL;
  h_3 = t;
  {
    ATerm z_8 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm e_9 = ATgetArgument(t, 0);
              if((h_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm f_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_15), term_o_15), term_j_15), term_c_15), term_v_14), term_p_14), term_i_14), term_w_13), term_p_13), term_l_13), term_g_13), term_z_12), term_v_12), term_r_12), term_m_12), term_c_12), term_w_11), term_q_11), term_m_11), term_h_11), term_c_11), term_v_10), term_r_10), term_k_10), term_e_10), term_u_9), term_n_9), term_j_9);
        t = fetch_elem_1_0(m_0, t);
        LocalPopChoice(d_9);
      }
    else
      {
        t = z_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, h_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_3 = NULL,v_3 = NULL;
  n_3 = t;
  {
    ATerm v_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_16 = ATgetArgument(t, 0);
            v_3 = ATgetArgument(t, 1);
            {
              ATerm c_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_15);
        {
          ATerm e_16 = t;
          int f_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_1 = NULL,w_1 = NULL,x_1 = NULL;
              t = v_3;
              {
                ATerm g_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_16;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              u_1 = t;
              t = term_h_16;
              w_1 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, u_1), term_i_16);
              x_1 = t;
              t = SSL_printnl(w_1, x_1);
              t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATempty, u_1), term_i_16));
              LocalPopChoice(f_16);
            }
          else
            {
              t = e_16;
              t = n_3;
            }
        }
      }
    else
      {
        t = v_15;
        t = n_3;
      }
  }
  t = n_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm f_65 (ATerm), ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL;
  f_4 = t;
  t = fork_0_0(t);
  e_4 = t;
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = f_4;
        t = f_65(t);
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        t = SSL_waitpid(e_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_16 = ATgetArgument(t, 0);
            if(((ATgetType(m_16) != AT_INT) || (ATgetInt((ATermInt) m_16) != 0)))
              _fail(t);
            {
              ATerm q_16 = ATgetArgument(t, 1);
            }
            {
              ATerm r_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm j_4 = NULL,l_4 = NULL;
  l_4 = t;
  t = l_84(t);
  t = xtc_find_0_0(t);
  j_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_4, l_4);
  {
    static ATerm u_0 (ATerm t)
    {
      ATerm m_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, j_4, l_4);
      t = h_6(j_4, l_4, t);
      t = term_s_16;
      m_4 = t;
      t = SSL_exit(m_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
  }
  t = l_4;
  return(t);
}
ATerm at_end_1_0 (ATerm x_71 (ATerm), ATerm t)
{
  static ATerm r_5 (ATerm t)
  {
    ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL;
    p_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_5 = ATgetFirst((ATermList) t);
        o_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_2 = NULL,q_2 = NULL,b_2 = NULL;
          t = SSLgetAnnotations(p_5);
          h_2 = t;
          t = o_5;
          t = r_5(t);
          q_2 = t;
          t = (ATerm) ATinsert(CheckATermList(q_2), n_5);
          b_2 = t;
          t = SSLsetAnnotations(b_2, h_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_5;
        t = x_71(t);
      }
    return(t);
  }
  t = r_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,t_4 = NULL;
  o_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_4;
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
          p_4 = ATgetFirst((ATermList) t);
          if(((t_4 != NULL) && (t_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_4;
      t = at_end_1_0(v_0, t);
    }
  return(t);
}
static ATerm k_7 (ATerm w_6, ATerm t)
{
  ATerm x_6 = NULL;
  t = SSL_explode_term(w_6);
  if(match_cons(t, sym__2))
    {
      ATerm t_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_16) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm b_7 = NULL,d_7 = NULL,e_7 = NULL;
  e_7 = t;
  if(match_cons(t, sym__2))
    {
      b_7 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
      {
        ATerm x_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_0 (ATerm t)
            {
              t = d_7;
              return(t);
            }
            t = b_7;
            t = at_end_1_0(x_0, t);
            LocalPopChoice(y_16);
          }
        else
          {
            t = x_16;
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
static ATerm j_6 (ATerm a_80 (ATerm), ATerm b_30, ATerm z_29, ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
  p_7 = t;
  t = a_80(t);
  m_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_7, b_30, z_29);
  t = r_6(m_7, b_30, z_29, t);
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_7 = NULL;
        t = term_e_17;
        u_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_7, term_e_17);
        t = q_6(m_7, u_7, t);
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_7 = ATgetFirst((ATermList) t);
      o_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_e_17;
  q_7 = t;
  t = (ATerm) ATinsert(CheckATermList(o_7), (ATerm) ATinsert(CheckATermList(n_7), b_30));
  r_7 = t;
  t = SSL_table_put(m_7, q_7, r_7);
  t = p_7;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm x_7 = NULL;
  ATerm f_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_8 = NULL,i_3 = NULL;
      j_8 = t;
      t = term_i_17;
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_8, term_i_17);
      t = p_6(j_8, i_3, t);
      x_7 = t;
      t = SSL_mkstemp(x_7);
      LocalPopChoice(h_17);
    }
  else
    {
      t = f_17;
      {
        ATerm m_8 = NULL;
        t = term_w_17;
        m_8 = t;
        t = SSL_perror(m_8);
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
  t = term_j_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL,x_8 = NULL,y_8 = NULL;
  t = P__tmpdir_0_0(t);
  x_8 = t;
  t = term_r_18;
  y_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_8, term_r_18);
  t = p_6(x_8, y_8, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      p_8 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_s_18;
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_8, term_s_18);
  t = j_6(y_0, p_8, q_8, t);
  t = SSL_close(o_8);
  t = p_8;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm c_9 = NULL,g_9 = NULL;
  c_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_9 = NULL,p_9 = NULL;
      t = c_9;
      t = xtc_new_file_0_0(t);
      o_9 = t;
      t = r_0(t);
      p_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_9, (ATerm) ATinsert(ATinsert(ATempty, o_9), term_t_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_9);
    }
  else
    {
      ATerm w_9 = NULL,x_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          g_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_9;
      t = xtc_new_file_0_0(t);
      w_9 = t;
      t = r_0(t);
      x_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_9), term_t_18), g_9), term_u_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_9);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_9 = NULL;
  static ATerm z_0 (ATerm t)
  {
    ATerm z_9 = NULL,a_10 = NULL;
    z_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_9), z_9);
    t = q_6(not_null(y_9), z_9, t);
    a_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_9, a_10);
    return(t);
  }
  if(((y_9 != NULL) && (y_9 != t)))
    _fail(t);
  else
    y_9 = t;
  t = SSL_table_keys(y_9);
  t = map_1_0(z_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm n_81 (ATerm), ATerm t)
{
  ATerm d_10 = NULL;
  d_10 = t;
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_10 = NULL;
        t = term_c_8;
        t = get_config_0_0(t);
        f_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_10, term_y_14);
        t = geq_0_0(t);
        t = d_10;
        t = n_81(t);
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = d_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm m_81 (ATerm), ATerm t)
{
  ATerm i_10 = NULL;
  i_10 = t;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_10 = NULL;
        t = term_c_8;
        t = get_config_0_0(t);
        m_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_10, term_s_11);
        t = geq_0_0(t);
        t = i_10;
        t = m_81(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = i_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm o_81 (ATerm), ATerm t)
{
  ATerm x_10 = NULL;
  x_10 = t;
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_10 = NULL;
        t = term_c_8;
        t = get_config_0_0(t);
        z_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_10, term_b_10);
        t = geq_0_0(t);
        t = x_10;
        t = o_81(t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        t = x_10;
      }
  }
  return(t);
}
static ATerm x_5 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm u_24, ATerm t_24, ATerm t)
{
  t = p_75(t);
  {
    static ATerm a_1 (ATerm t)
    {
      ATerm b_11 = NULL;
      b_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_24, b_11);
      t = o_75(t);
      return(t);
    }
    t = fetch_1_0(a_1, t);
  }
  t = t_24;
  return(t);
}
static ATerm y_5 (ATerm l_75 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  static ATerm d_12 (ATerm t)
  {
    ATerm t_11 = NULL,u_11 = NULL,x_11 = NULL;
    t_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_11 = ATgetFirst((ATermList) t);
            x_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_19 = t;
          int c_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_11;
              {
                static ATerm b_1 (ATerm t)
                {
                  t = p_24;
                  return(t);
                }
                t = x_5(l_75, b_1, u_11, x_11, t);
              }
              t = d_12(t);
              LocalPopChoice(c_19);
            }
          else
            {
              t = b_19;
              {
                ATerm q_3 = NULL,d_4 = NULL,d_2 = NULL;
                t = SSLgetAnnotations(t_11);
                q_3 = t;
                t = x_11;
                t = d_12(t);
                d_4 = t;
                t = (ATerm) ATinsert(CheckATermList(d_4), u_11);
                d_2 = t;
                t = SSLsetAnnotations(d_2, q_3);
              }
            }
        }
      }
    return(t);
  }
  t = q_24;
  t = d_12(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm p_12 = NULL;
  if(match_cons(t, sym__2))
    {
      p_12 = ATgetArgument(t, 0);
      if((p_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm l_32, ATerm m_32, ATerm n_32, ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_32, m_32);
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
        t = (ATerm) ATmakeAppl(sym__2, l_32, m_32);
        t = q_6(l_32, m_32, t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = (ATerm) ATempty;
      }
  }
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_12, n_32);
  t = y_5(h_1, j_12, n_32, t);
  i_12 = t;
  t = SSL_table_put(l_32, m_32, i_12);
  t = h_12;
  return(t);
}
static ATerm a_6 (ATerm q_81 (ATerm), ATerm v_32, ATerm u_32, ATerm t)
{
  static ATerm i_1 (ATerm t)
  {
    ATerm a_13 = NULL,b_13 = NULL;
    if(match_cons(t, sym__2))
      {
        a_13 = ATgetArgument(t, 0);
        b_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, v_32, a_13, b_13);
    t = q_81(t);
    return(t);
  }
  t = u_32;
  t = map_1_0(i_1, t);
  return(t);
}
static ATerm c_6 (ATerm w_34, ATerm x_34, ATerm t)
{
  t = SSL_access(w_34, x_34);
  return(t);
}
static ATerm a_14 (ATerm q_13, ATerm t)
{
  t = SSL_fclose(q_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_13 = NULL,x_13 = NULL;
  x_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_13 = ATgetArgument(t, 0);
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_13);
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            t = a_14(x_13, t);
          }
      }
    }
  else
    {
      t = a_14(x_13, t);
    }
  return(t);
}
static ATerm b_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm e_6 (ATerm f_35, ATerm g_35, ATerm t)
{
  ATerm b_14 = NULL;
  t = SSL_fopen(f_35, g_35);
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_14 = NULL;
  t = SSL_stdin_stream();
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_14 = NULL;
  t = SSL_stdout_stream();
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_14 = NULL;
  t = SSL_stderr_stream();
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_14);
  return(t);
}
static ATerm u_16 (ATerm r_14, ATerm t)
{
  ATerm t_14 = NULL;
  t = SSL_explode_term(r_14);
  if(match_cons(t, sym__2))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_19 = ATgetArgument(t, 1);
        if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
          {
            t_14 = ATgetFirst((ATermList) k_19);
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
  t = t_14;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_16 (ATerm a_15, ATerm b_15, ATerm g_15, ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,l_15 = NULL,r_15 = NULL,f_2 = NULL;
  t = SSLgetAnnotations(g_15);
  l_15 = t;
  t = a_15;
  if(match_cons(t, sym_Path_1))
    {
      r_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_15, b_15);
  f_2 = t;
  t = SSLsetAnnotations(f_2, l_15);
  if(match_cons(t, sym__2))
    {
      h_15 = ATgetArgument(t, 0);
      i_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(h_15, i_15, t);
  return(t);
}
static ATerm w_16 (ATerm t_15, ATerm w_15, ATerm x_15, ATerm t)
{
  ATerm y_15 = NULL,b_16 = NULL,d_16 = NULL,j_16 = NULL,j_2 = NULL;
  t = SSLgetAnnotations(x_15);
  d_16 = t;
  t = SSL_is_string(t_15);
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_16, w_15);
  j_2 = t;
  t = SSLsetAnnotations(j_2, d_16);
  if(match_cons(t, sym__2))
    {
      y_15 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(y_15, b_16, t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
  n_16 = t;
  if(match_cons(t, sym__2))
    {
      o_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
      {
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_16(n_16, t);
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
            {
              ATerm o_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_16(o_16, p_16, n_16, t);
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = o_19;
                  t = w_16(o_16, p_16, n_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_16(n_16, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,g_17 = NULL;
  g_17 = t;
  {
    ATerm t_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_17, term_x_19);
        t = f_6(t);
        LocalPopChoice(u_19);
      }
    else
      {
        t = t_19;
        {
          ATerm h_5 = NULL,i_5 = NULL;
          t = term_c_20;
          i_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_20, g_17);
          t = p_6(i_5, g_17, t);
          h_5 = t;
          t = SSL_perror(h_5);
          _fail(t);
        }
      }
  }
  a_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_6(b_17, t);
  z_16 = t;
  t = a_17;
  t = fclose_0_0(t);
  t = z_16;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_17 = NULL,k_17 = NULL;
      j_17 = t;
      t = (ATerm) ATinsert(ATempty, term_j_20);
      k_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_17, (ATerm) ATinsert(ATempty, term_j_20));
      t = c_6(j_17, k_17, t);
      LocalPopChoice(i_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = h_20;
      {
        ATerm k_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_20 = t;
            if((PushChoice() == 0))
              {
                ATerm l_17 = NULL,m_17 = NULL;
                l_17 = t;
                t = (ATerm) ATinsert(ATempty, term_k_8);
                m_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, l_17, (ATerm) ATinsert(ATempty, term_k_8));
                t = c_6(l_17, m_17, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_20;
              }
            t = debug_1_0(j_1, t);
            LocalPopChoice(l_20);
          }
        else
          {
            t = k_20;
            t = debug_1_0(k_1, t);
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
  t = term_q_20;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_s_20;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  t = term_h_16;
  f_18 = t;
  t = (ATerm) ATinsert(ATempty, term_t_20);
  g_18 = t;
  t = SSL_printnl(f_18, g_18);
  t = e_18;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,k_18 = NULL;
  if(match_cons(t, sym__3))
    {
      h_18 = ATgetArgument(t, 0);
      i_18 = ATgetArgument(t, 1);
      k_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_5(h_18, i_18, k_18, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  t = term_h_16;
  m_18 = t;
  t = (ATerm) ATinsert(ATempty, term_v_20);
  n_18 = t;
  t = SSL_printnl(m_18, n_18);
  t = l_18;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
  o_18 = t;
  t = term_h_16;
  p_18 = t;
  t = (ATerm) ATinsert(ATempty, term_t_20);
  q_18 = t;
  t = SSL_printnl(p_18, q_18);
  t = o_18;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,u_17 = NULL,v_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  p_17 = t;
  t = if_verbose5_1_0(n_1, t);
  {
    ATerm w_20 = t;
    if((PushChoice() == 0))
      {
        ATerm c_18 = NULL,d_18 = NULL;
        t = term_y_20;
        c_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, p_17);
        d_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_20, (ATerm) ATmakeAppl(sym_Imported_1, p_17));
        t = q_6(c_18, d_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_20;
      }
  }
  r_17 = t;
  t = term_y_20;
  z_17 = t;
  t = term_a_21;
  a_18 = t;
  t = (ATerm) ATinsert(ATempty, p_17);
  b_18 = t;
  t = SSL_table_put(z_17, a_18, b_18);
  t = r_17;
  t = if_verbose4_1_0(p_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(t_1, t);
  q_17 = t;
  t = term_y_20;
  y_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_20, q_17);
  t = a_6(v_1, y_17, q_17, t);
  t = if_verbose6_1_0(y_1, t);
  t = term_y_20;
  s_17 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, p_17);
  u_17 = t;
  t = (ATerm) ATempty;
  v_17 = t;
  t = SSL_table_put(s_17, u_17, v_17);
  t = (ATerm) ATmakeAppl(sym__3, term_y_20, (ATerm)ATmakeAppl(sym_Imported_1, p_17), (ATerm) ATempty);
  t = if_verbose4_1_0(z_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm g_79 (ATerm), ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  p_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_19 = ATgetFirst((ATermList) t);
          r_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_5 = NULL,n_6 = NULL,o_6 = NULL,m_2 = NULL;
            t = SSLgetAnnotations(p_19);
            u_5 = t;
            t = q_19;
            t = g_79(t);
            n_6 = t;
            t = r_19;
            t = filter_1_0(g_79, t);
            o_6 = t;
            t = (ATerm) ATinsert(CheckATermList(o_6), n_6);
            m_2 = t;
            t = SSLsetAnnotations(m_2, u_5);
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            t = r_19;
            t = filter_1_0(g_79, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm t)
{
  static ATerm v_19 (ATerm t)
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_69(t);
        t = v_19(t);
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = m_69(t);
      }
    return(t);
  }
  t = v_19(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_21;
      t = get_config_0_0(t);
      LocalPopChoice(h_21);
    }
  else
    {
      t = f_21;
      {
        ATerm j_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_19 = NULL;
            t = term_n_21;
            w_19 = t;
            t = SSL_getenv(w_19);
            LocalPopChoice(m_21);
          }
        else
          {
            t = j_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL;
  t = term_y_20;
  e_20 = t;
  t = term_p_21;
  f_20 = t;
  t = term_q_21;
  t = q_6(e_20, f_20, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm r_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_21;
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
  t = term_s_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm y_19 = NULL;
  t = if_verbose5_1_0(a_2, t);
  y_19 = t;
  {
    ATerm t_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_19 = NULL,a_20 = NULL;
        t = term_y_20;
        z_19 = t;
        t = term_a_21;
        a_20 = t;
        t = term_x_21;
        t = q_6(z_19, a_20, t);
        LocalPopChoice(w_21);
      }
    else
      {
        t = t_21;
        {
          ATerm b_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          b_20 = t;
          t = repeat_2_0(e_2, _id, t);
          t = b_20;
        }
      }
  }
  t = y_19;
  t = if_verbose5_1_0(g_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_y_21;
  return(t);
}
static ATerm v_21 (ATerm m_20, ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,r_20 = NULL;
  t = term_y_20;
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, m_20);
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_20, (ATerm) ATmakeAppl(sym_Tool_1, m_20));
  t = q_6(p_20, r_20, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_21 = ATgetFirst((ATermList) t);
      if(match_cons(z_21, sym__2))
        {
          ATerm b_22 = ATgetArgument(z_21, 0);
          o_20 = ATgetArgument(z_21, 1);
        }
      else
        _fail(t);
      {
        ATerm a_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_20;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = debug_1_0(r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_y_21;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_y_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(u_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
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
      ATerm u_20 = NULL,x_20 = NULL,z_20 = NULL;
      t = if_verbose5_1_0(k_2, t);
      t = xtc_load_0_0(t);
      z_20 = t;
      if(match_cons(t, sym__2))
        {
          u_20 = ATgetArgument(t, 0);
          x_20 = ATgetArgument(t, 1);
          {
            ATerm f_22 = t;
            int g_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_21 = NULL,k_21 = NULL,l_21 = NULL;
                t = term_y_20;
                k_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, u_20);
                l_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_y_20, (ATerm) ATmakeAppl(sym_Tool_1, u_20));
                t = q_6(k_21, l_21, t);
                {
                  static ATerm n_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((x_20 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((g_21 != NULL) && (g_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(n_2, t);
                }
                t = not_null(g_21);
                LocalPopChoice(g_22);
              }
            else
              {
                t = f_22;
                t = v_21(z_20, t);
              }
          }
        }
      else
        {
          t = v_21(z_20, t);
        }
      t = if_verbose5_1_0(p_2, t);
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm u_21 = NULL,h_7 = NULL,i_7 = NULL;
        u_21 = t;
        t = term_h_16;
        h_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_22), u_21), term_h_22);
        i_7 = t;
        t = SSL_printnl(h_7, i_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_22), u_21), term_h_22);
        t = if_verbose5_1_0(s_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm k_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,y_22 = NULL;
  v_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_7 = NULL;
        t = v_22;
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
        t = (ATerm) ATmakeAppl(sym__2, y_22, w_7);
        t = k_6(y_22, w_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_22);
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
              ATerm h_8 = NULL;
              t = v_22;
              t = o_0(t);
              h_8 = t;
              {
                ATerm n_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm i_8 = NULL;
                    i_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = i_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = i_8;
                          }
                        else
                          {
                            t = i_8;
                            if((y_22 != t))
                              {
                                _fail(t);
                              }
                            t = i_8;
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
              t = (ATerm) ATmakeAppl(sym__2, y_22, h_8);
              t = k_6(y_22, h_8, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_22);
              LocalPopChoice(m_22);
            }
          else
            {
              t = l_22;
              t = v_22;
              t = o_0(t);
              if((y_22 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_22);
            }
        }
      }
  }
  return(t);
}
static ATerm l_6 (ATerm t_31, ATerm u_31, ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL;
  d_23 = t;
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_31, u_31);
        t = q_6(t_31, u_31, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_22 = ATgetFirst((ATermList) t);
            c_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_22);
        t = SSL_table_put(t_31, u_31, c_23);
        t = (ATerm) ATmakeAppl(sym__3, t_31, u_31, c_23);
      }
    else
      {
        t = o_22;
        t = SSL_table_remove(t_31, u_31);
        t = (ATerm) ATmakeAppl(sym__2, t_31, u_31);
      }
  }
  t = d_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,l_23 = NULL,m_23 = NULL;
  l_23 = t;
  t = x_79(t);
  i_23 = t;
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_23 = NULL;
        t = term_e_17;
        n_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_23, term_e_17);
        t = q_6(i_23, n_23, t);
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
      h_23 = ATgetFirst((ATermList) t);
      g_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_e_17;
  m_23 = t;
  t = SSL_table_put(i_23, m_23, g_23);
  t = h_23;
  {
    static ATerm a_3 (ATerm t)
    {
      ATerm p_23 = NULL;
      p_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_23, p_23);
      t = l_6(i_23, p_23, t);
      return(t);
    }
    t = map_1_0(a_3, t);
  }
  t = l_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm t)
{
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_80(t);
      t = y_80(t);
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      t = y_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_79 (ATerm), ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
  s_23 = t;
  t = w_79(t);
  r_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_23, term_e_17);
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_22 = ATgetArgument(t, 0);
            ATerm a_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_e_17;
        z_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_23, term_e_17);
        t = q_6(r_23, z_23, t);
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        t = (ATerm) ATempty;
      }
  }
  t_23 = t;
  t = term_e_17;
  u_23 = t;
  t = (ATerm) ATinsert(CheckATermList(t_23), (ATerm) ATempty);
  v_23 = t;
  t = SSL_table_put(r_23, u_23, v_23);
  t = s_23;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_j_18;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm k_24 = NULL;
  k_24 = t;
  {
    ATerm b_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(k_24);
        LocalPopChoice(e_23);
      }
    else
      {
        t = b_23;
        t = k_24;
      }
  }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_j_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  ATerm e_24 = NULL;
  static ATerm d_3 (ATerm t)
  {
    ATerm f_24 = NULL;
    f_24 = t;
    {
      ATerm f_23 = t;
      int j_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_24 = NULL,h_24 = NULL;
          t = term_j_18;
          g_24 = t;
          t = term_e_17;
          h_24 = t;
          t = term_k_23;
          t = q_6(g_24, h_24, t);
          LocalPopChoice(j_23);
        }
      else
        {
          t = f_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_24 != NULL) && (e_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_24 = ATgetFirst((ATermList) t);
        {
          ATerm o_23 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = e_24;
    t = map_1_0(f_3, t);
    t = f_24;
    t = end_scope_1_0(g_3, t);
    return(t);
  }
  t = begin_scope_1_0(b_3, t);
  t = restore_always_2_0(x_83, d_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm q_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_18;
      t = get_config_0_0(t);
      LocalPopChoice(w_23);
    }
  else
    {
      t = q_23;
      t = term_x_23;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  static ATerm j_3 (ATerm t)
  {
    ATerm y_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_24 = NULL;
        t = term_u_18;
        t = get_config_0_0(t);
        n_24 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_24);
        LocalPopChoice(a_24);
      }
    else
      {
        t = y_23;
        t = term_g_8;
      }
    t = y_83(t);
    t = copy_to_1_0(k_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(j_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_24 = NULL,r_24 = NULL,s_24 = NULL,y_24 = NULL,z_24 = NULL;
  o_24 = t;
  t = term_s_18;
  t = whoami_0_0(t);
  r_24 = t;
  t = term_h_16;
  y_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_24), r_24), term_b_24);
  z_24 = t;
  t = SSL_printnl(y_24, z_24);
  t = term_f_8;
  s_24 = t;
  t = SSL_exit(s_24);
  t = o_24;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm b_25 = NULL;
  b_25 = t;
  if(match_string(t, "-k"))
    {
      t = b_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_25;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
  c_25 = t;
  t = SSL_string_to_int(c_25);
  d_25 = t;
  t = term_d_24;
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_24, d_25);
  t = t_6(e_25, d_25, t);
  t = c_25;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_i_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_3, m_3, o_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm i_25 = NULL;
  i_25 = t;
  if(match_string(t, "-S"))
    {
      t = i_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_25;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL;
  t = term_c_8;
  j_25 = t;
  t = term_j_24;
  k_25 = t;
  t = term_l_24;
  t = t_6(j_25, k_25, t);
  t = term_m_24;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_v_24;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,o_25 = NULL;
  l_25 = t;
  t = SSL_string_to_int(l_25);
  m_25 = t;
  t = term_c_8;
  o_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_8, m_25);
  t = t_6(o_25, m_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_25);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_w_24;
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
  ATerm p_25 = NULL,q_25 = NULL;
  t = term_x_24;
  p_25 = t;
  t = term_s_18;
  q_25 = t;
  t = term_a_25;
  t = t_6(p_25, q_25, t);
  t = term_f_25;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_3, s_3, u_3, t);
      LocalPopChoice(n_25);
    }
  else
    {
      t = h_25;
      {
        ATerm r_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_3, x_3, y_3, t);
            LocalPopChoice(t_25);
          }
        else
          {
            t = r_25;
            t = Option_3_0(z_3, a_4, b_4, t);
          }
      }
    }
  return(t);
}
static ATerm t_6 (ATerm o_33, ATerm p_33, ATerm t)
{
  ATerm s_25 = NULL;
  t = term_u_25;
  s_25 = t;
  t = SSL_table_put(s_25, o_33, p_33);
  t = (ATerm) ATmakeAppl(sym__3, term_u_25, o_33, p_33);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,y_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_26 = NULL,c_26 = NULL,j_26 = NULL;
      t = term_s_18;
      t = e_0(t);
      b_26 = t;
      t = term_v_25;
      c_26 = t;
      t = term_x_25;
      j_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_25, term_x_25, b_26);
      t = r_6(c_26, j_26, b_26, t);
      _fail(t);
    }
  else
    {
      ATerm m_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_25 = ATgetFirst((ATermList) t);
          y_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_25;
      t = c_0(t);
      t = term_s_18;
      t = d_0(t);
      m_26 = t;
      t = (ATerm) ATinsert(CheckATermList(y_25), m_26);
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm p_26 = NULL;
  p_26 = t;
  if(match_string(t, "-o"))
    {
      t = p_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_26;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL;
  q_26 = t;
  t = term_t_18;
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_18, q_26);
  t = t_6(r_26, q_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_26);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_4, g_4, h_4, t);
  return(t);
}
static ATerm r_6 (ATerm o_31, ATerm p_31, ATerm n_31, ATerm t)
{
  ATerm u_26 = NULL,x_26 = NULL,y_26 = NULL;
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_31, p_31);
  {
    ATerm a_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_26 = ATgetArgument(t, 0);
            ATerm f_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_31, p_31);
        t = q_6(o_31, p_31, t);
        LocalPopChoice(d_26);
      }
    else
      {
        t = a_26;
        t = (ATerm) ATempty;
      }
  }
  x_26 = t;
  t = (ATerm) ATinsert(CheckATermList(x_26), n_31);
  y_26 = t;
  t = SSL_table_put(o_31, p_31, y_26);
  t = u_26;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
      t = term_s_18;
      t = n_0(t);
      k_27 = t;
      t = term_v_25;
      l_27 = t;
      t = term_x_25;
      m_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_25, term_x_25, k_27);
      t = r_6(l_27, m_27, k_27, t);
      _fail(t);
    }
  else
    {
      ATerm s_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_27 = ATgetFirst((ATermList) t);
          h_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_27 = ATgetFirst((ATermList) t);
          j_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_27;
      t = k_0(t);
      t = i_27;
      t = l_0(t);
      s_27 = t;
      t = (ATerm) ATinsert(CheckATermList(j_27), s_27);
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm w_27 = NULL;
  w_27 = t;
  if(match_string(t, "-i"))
    {
      t = w_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_27;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  x_27 = t;
  t = term_u_18;
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_18, x_27);
  t = t_6(y_27, x_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_27);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_g_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_4, k_4, n_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_28 = NULL,f_28 = NULL,h_28 = NULL,i_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_18;
  t = whoami_0_0(t);
  c_28 = t;
  t = term_h_16;
  h_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_26), c_28);
  i_28 = t;
  t = SSL_printnl(h_28, i_28);
  t = term_f_8;
  f_28 = t;
  t = SSL_exit(f_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_26;
  t = get_config_0_0(t);
  return(t);
}
static ATerm m_6 (ATerm n_28, ATerm o_28, ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_28, o_28);
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      t = SSL_addr(n_28, o_28);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_28;
      t = c_78(t);
    }
  else
    {
      ATerm y_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_28 = ATgetFirst((ATermList) t);
          r_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_28;
      t = foldr_2_0(c_78, d_78, t);
      y_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_28, y_28);
      t = d_78(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_j_24;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  if(match_cons(t, sym__2))
    {
      a_9 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(a_9, b_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_29 = NULL,u_8 = NULL,v_8 = NULL;
  t = times_0_0(t);
  v_8 = t;
  t = SSL_explode_term(v_8);
  if(match_cons(t, sym__2))
    {
      ATerm n_26 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8;
  t = foldr_2_0(q_4, r_4, t);
  h_29 = t;
  t = SSL_TicksToSeconds(h_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_29 = NULL,e_30 = NULL,f_30 = NULL;
  s_29 = t;
  if(match_cons(t, sym__2))
    {
      e_30 = ATgetArgument(t, 0);
      f_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_30;
        if((e_30 != t))
          {
            _fail(t);
          }
        t = s_29;
        LocalPopChoice(s_26);
      }
    else
      {
        t = o_26;
        t = (ATerm) ATmakeAppl(sym__2, e_30, f_30);
        {
          ATerm t_26 = t;
          int v_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_30, f_30);
              LocalPopChoice(v_26);
            }
          else
            {
              t = t_26;
              t = SSL_gtr(e_30, f_30);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_30, f_30);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm j_30 = NULL;
  j_30 = t;
  {
    ATerm w_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_30 = NULL;
        t = term_c_8;
        t = get_config_0_0(t);
        l_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_30, term_f_8);
        t = geq_0_0(t);
        t = j_30;
        t = j_81(t);
        LocalPopChoice(z_26);
      }
    else
      {
        t = w_26;
        t = j_30;
      }
  }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,q_30 = NULL,r_30 = NULL;
  t = run_time_0_0(t);
  n_30 = t;
  t = term_s_18;
  t = whoami_0_0(t);
  o_30 = t;
  t = term_h_16;
  q_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_27), n_30), term_t_8), o_30);
  r_30 = t;
  t = SSL_printnl(q_30, r_30);
  t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_27), n_30), term_t_8), o_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_24;
  s_30 = t;
  t = SSL_exit(s_30);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL;
  f_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_31 = ATgetArgument(t, 0);
          {
            ATerm s_9 = NULL,o_2 = NULL;
            t = SSLgetAnnotations(f_31);
            s_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_31);
            o_2 = t;
            t = SSLsetAnnotations(o_2, s_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_85 (ATerm), ATerm t)
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
      t = fetch_1_0(u_4, t);
    }
  t = n_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_31 = ATgetFirst((ATermList) t);
      r_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_31 = NULL,z_31 = NULL;
        static ATerm v_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_31)), not_null(z_31));
          return(t);
        }
        t = r_31;
        t = i_0(t);
        if(((y_31 != NULL) && (y_31 != t)))
          _fail(t);
        else
          y_31 = t;
        t = q_31;
        t = g_0(t);
        if(((z_31 != NULL) && (z_31 != t)))
          _fail(t);
        else
          z_31 = t;
        t = r_31;
        t = reverse_acc_2_0(g_0, v_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_18;
      t = i_0(t);
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,t_2 = NULL;
  f_32 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_32);
  d_32 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_32);
  t_2 = t;
  t = SSLsetAnnotations(t_2, d_32);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm h_32 = NULL;
  h_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_32), term_e_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL;
  ATerm f_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_26;
      t = get_config_0_0(t);
      LocalPopChoice(n_27);
    }
  else
    {
      t = f_27;
      t = fetch_1_0(w_4, t);
    }
  t = term_o_27;
  t = echo_0_0(t);
  t = term_v_25;
  b_32 = t;
  t = term_x_25;
  c_32 = t;
  t = term_p_27;
  t = q_6(b_32, c_32, t);
  t = reverse_acc_2_0(_id, y_4, t);
  t = map_1_0(z_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm q_71 (ATerm), ATerm t)
{
  static ATerm r_33 (ATerm t)
  {
    ATerm m_33 = NULL,n_33 = NULL,q_33 = NULL;
    m_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_33 = ATgetFirst((ATermList) t);
        q_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_27 = t;
      int r_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_10 = NULL,q_10 = NULL,z_2 = NULL;
          t = SSLgetAnnotations(m_33);
          l_10 = t;
          t = n_33;
          t = q_71(t);
          q_10 = t;
          t = (ATerm) ATinsert(CheckATermList(q_33), q_10);
          z_2 = t;
          t = SSLsetAnnotations(z_2, l_10);
          LocalPopChoice(r_27);
        }
      else
        {
          t = q_27;
          {
            ATerm d_11 = NULL,i_11 = NULL,c_3 = NULL;
            t = SSLgetAnnotations(m_33);
            d_11 = t;
            t = q_33;
            t = r_33(t);
            i_11 = t;
            t = (ATerm) ATinsert(CheckATermList(i_11), n_33);
            c_3 = t;
            t = SSLsetAnnotations(c_3, d_11);
          }
        }
    }
    return(t);
  }
  t = r_33(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,c_34 = NULL;
  v_33 = t;
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_33;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_27 = ATgetFirst((ATermList) t);
                ATerm z_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_33;
          }
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        t = (ATerm) ATinsert(ATempty, v_33);
      }
  }
  w_33 = t;
  t = term_x_23;
  c_34 = t;
  t = SSL_printnl(c_34, w_33);
  t = v_33;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_6 (ATerm d_51, ATerm e_51, ATerm t)
{
  t = SSL_strcat(d_51, e_51);
  return(t);
}
ATerm debug_1_0 (ATerm o_66 (ATerm), ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
  g_34 = t;
  t = o_66(t);
  h_34 = t;
  t = term_h_16;
  i_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_34), h_34);
  j_34 = t;
  t = SSL_printnl(i_34, j_34);
  t = g_34;
  return(t);
}
ATerm map_1_0 (ATerm g_71 (ATerm), ATerm t)
{
  static ATerm b_35 (ATerm t)
  {
    ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
    y_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_34;
      }
    else
      {
        ATerm b_12 = NULL,g_12 = NULL,l_12 = NULL,r_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_34 = ATgetFirst((ATermList) t);
            a_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_34);
        b_12 = t;
        t = z_34;
        t = g_71(t);
        g_12 = t;
        t = a_35;
        t = b_35(t);
        l_12 = t;
        t = (ATerm) ATinsert(CheckATermList(l_12), g_12);
        r_3 = t;
        t = SSLsetAnnotations(r_3, b_12);
      }
    return(t);
  }
  t = b_35(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_35 = NULL;
      n_35 = t;
      t = SSL_is_string(n_35);
      LocalPopChoice(g_28);
    }
  else
    {
      t = e_28;
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_5, t);
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            {
              ATerm t_35 = NULL,u_35 = NULL,y_35 = NULL;
              t_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_35 = ATgetArgument(t, 0);
                  t = u_35;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_35 = ATgetArgument(t, 0);
                      t = u_35;
                      {
                        ATerm l_28 = t;
                        int m_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(m_28);
                          }
                        else
                          {
                            t = l_28;
                            t = debug_1_0(c_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_36 = NULL,j_36 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_35 = ATgetArgument(t, 0);
                          y_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_35;
                      t = eval_config_0_0(t);
                      c_36 = t;
                      t = y_35;
                      t = eval_config_0_0(t);
                      j_36 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_36, j_36);
                      t = p_6(c_36, j_36, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_6 (ATerm f_33, ATerm g_33, ATerm t)
{
  t = SSL_table_get(f_33, g_33);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL;
  n_36 = t;
  t = term_u_25;
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_25, n_36);
  t = q_6(o_36, n_36, t);
  {
    ATerm s_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_36 = NULL,q_36 = NULL;
        t = eval_config_0_0(t);
        p_36 = t;
        t = term_u_25;
        q_36 = t;
        t = SSL_table_put(q_36, n_36, p_36);
        t = p_36;
        LocalPopChoice(v_28);
      }
    else
      {
        t = s_28;
      }
  }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL;
  t = term_w_28;
  w_36 = t;
  t = term_s_18;
  x_36 = t;
  t = term_x_28;
  t = t_6(w_36, x_36, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_z_28;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm y_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
  t = term_w_28;
  b_37 = t;
  t = term_s_18;
  c_37 = t;
  t = term_x_28;
  t = t_6(b_37, c_37, t);
  t = term_a_29;
  y_36 = t;
  t = term_s_18;
  a_37 = t;
  t = term_b_29;
  t = t_6(y_36, a_37, t);
  t = term_c_29;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_d_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_5, f_5, l_5, t);
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      t = Option_3_0(m_5, q_5, s_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_58 (ATerm), ATerm h_58 (ATerm), ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,n_37 = NULL,t_3 = NULL;
  n_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_37 = ATgetFirst((ATermList) t);
      f_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_37);
  d_37 = t;
  t = e_37;
  t = g_58(t);
  g_37 = t;
  t = f_37;
  t = h_58(t);
  h_37 = t;
  t = (ATerm) ATinsert(CheckATermList(h_37), g_37);
  t_3 = t;
  t = SSLsetAnnotations(t_3, d_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_87 (ATerm), ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,y_37 = NULL,z_37 = NULL,b_5 = NULL;
  s_37 = t;
  {
    ATerm g_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_29;
        t = l_87(t);
        LocalPopChoice(i_29);
      }
    else
      {
        t = g_29;
      }
  }
  t = s_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_37 = ATgetFirst((ATermList) t);
      v_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_37);
  t_37 = t;
  t = term_i_26;
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_26, u_37);
  t = t_6(z_37, u_37, t);
  t = v_37;
  {
    static ATerm j_38 (ATerm t)
    {
      ATerm k_29 = t;
      int l_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_29 = t;
          int n_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_38 = NULL;
              c_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_38;
              LocalPopChoice(n_29);
            }
          else
            {
              t = m_29;
              t = l_87(t);
              t = Cons_2_0(_id, j_38, t);
            }
          LocalPopChoice(l_29);
        }
      else
        {
          t = k_29;
          {
            ATerm f_38 = NULL,g_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_38 = ATgetFirst((ATermList) t);
                g_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_38), (ATerm) ATmakeAppl(sym_Undefined_1, f_38));
          }
        }
      return(t);
    }
    t = j_38(t);
  }
  y_37 = t;
  t = (ATerm) ATinsert(CheckATermList(y_37), (ATerm) ATmakeAppl(sym_Program_1, u_37));
  b_5 = t;
  t = SSLsetAnnotations(b_5, t_37);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm v_38 = NULL;
  v_38 = t;
  if(match_string(t, "--help"))
    {
      t = v_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_38;
        }
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL;
  t = term_d_27;
  w_38 = t;
  t = term_s_18;
  x_38 = t;
  t = term_o_29;
  t = t_6(w_38, x_38, t);
  t = term_p_29;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_q_29;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
  q_38 = t;
  t = term_v_25;
  s_38 = t;
  t = term_x_25;
  t_38 = t;
  t = (ATerm) ATempty;
  u_38 = t;
  t = SSL_table_put(s_38, t_38, u_38);
  t = q_38;
  {
    static ATerm t_5 (ATerm t)
    {
      ATerm r_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_87(t);
          LocalPopChoice(t_29);
        }
      else
        {
          t = r_29;
          {
            ATerm u_29 = t;
            int v_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_5, i_6, s_6, t);
                LocalPopChoice(v_29);
              }
            else
              {
                t = u_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_5, t);
  }
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_39 = NULL;
        e_39 = t;
        {
          ATerm y_29 = t;
          int a_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_13 = NULL;
              t = e_39;
              {
                ATerm c_30 = t;
                int d_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_d_27;
                    t = get_config_0_0(t);
                    LocalPopChoice(d_30);
                  }
                else
                  {
                    t = c_30;
                    t = fetch_1_0(u_6, t);
                  }
              }
              t = e_39;
              t = default_system_usage_0_0(t);
              t = term_j_24;
              f_13 = t;
              t = SSL_exit(f_13);
              LocalPopChoice(a_30);
            }
          else
            {
              t = y_29;
              {
                ATerm k_13 = NULL;
                t = term_w_28;
                t = get_config_0_0(t);
                t = e_39;
                t = default_system_about_0_0(t);
                t = term_j_24;
                k_13 = t;
                t = SSL_exit(k_13);
              }
            }
        }
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        {
          ATerm g_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
              static ATerm v_6 (ATerm t)
              {
                ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,e_5 = NULL;
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
                if(((o_38 != NULL) && (o_38 != t)))
                  _fail(t);
                else
                  o_38 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, j_39);
                e_5 = t;
                t = SSLsetAnnotations(e_5, i_39);
                return(t);
              }
              t = fetch_1_0(v_6, t);
              t = term_h_16;
              g_39 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_38)), term_i_30);
              h_39 = t;
              t = SSL_printnl(g_39, h_39);
              t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_38)), term_i_30));
              t = default_system_usage_0_0(t);
              t = term_f_8;
              f_39 = t;
              t = SSL_exit(f_39);
              LocalPopChoice(h_30);
            }
          else
            {
              t = g_30;
            }
        }
      }
  }
  p_38 = t;
  t = term_v_25;
  r_38 = t;
  t = SSL_table_destroy(r_38);
  t = p_38;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm s_85 (ATerm), ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  t = parse_options_1_0(p_85, t);
  p_39 = t;
  t = term_k_30;
  s_39 = t;
  t = SSL_table_create(s_39);
  t = term_k_30;
  q_39 = t;
  t = term_m_30;
  r_39 = t;
  t = SSL_table_put(q_39, r_39, p_39);
  t = p_39;
  t = r_85(t);
  {
    ATerm p_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_85, t);
        LocalPopChoice(t_30);
      }
    else
      {
        t = p_30;
        {
          ATerm u_30 = t;
          int v_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_85(t);
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
static ATerm y_6 (ATerm t)
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      {
        ATerm y_30 = t;
        int z_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(z_30);
          }
        else
          {
            t = y_30;
            {
              ATerm a_31 = t;
              int b_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(a_7, c_7, f_7, t);
                  LocalPopChoice(b_31);
                }
              else
                {
                  t = a_31;
                  {
                    ATerm c_31 = t;
                    int d_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(d_31);
                      }
                    else
                      {
                        t = c_31;
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
static ATerm z_6 (ATerm t)
{
  t = xtc_io_1_0(g_7, t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL;
  t = term_g_31;
  a_40 = t;
  t = term_s_18;
  b_40 = t;
  t = term_h_31;
  t = t_6(a_40, b_40, t);
  t = term_i_31;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_j_31;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_40 = NULL,j_40 = NULL;
      j_40 = t;
      if(match_cons(t, sym_FILE_1))
        {
          i_40 = ATgetArgument(t, 0);
          {
            ATerm u_13 = NULL,g_5 = NULL;
            t = SSLgetAnnotations(j_40);
            u_13 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, i_40);
            g_5 = t;
            t = SSLsetAnnotations(g_5, u_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_40;
        }
      LocalPopChoice(l_31);
      t = xtc_transform_file_2_0(j_7, l_7, t);
    }
  else
    {
      t = k_31;
      t = xtc_transform_term_2_0(s_7, t_7, t);
    }
  {
    ATerm m_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_40 = NULL,s_40 = NULL;
        s_40 = t;
        if(match_cons(t, sym_FILE_1))
          {
            r_40 = ATgetArgument(t, 0);
            {
              ATerm l_14 = NULL,j_5 = NULL;
              t = SSLgetAnnotations(s_40);
              l_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_40);
              j_5 = t;
              t = SSLsetAnnotations(j_5, l_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_40;
          }
        LocalPopChoice(s_31);
        t = xtc_transform_file_2_0(v_7, pass_verbose_0_0, t);
      }
    else
      {
        t = m_31;
        t = xtc_transform_term_2_0(y_7, pass_verbose_0_0, t);
      }
  }
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_40 = NULL,z_40 = NULL;
        z_40 = t;
        if(match_cons(t, sym_FILE_1))
          {
            y_40 = ATgetArgument(t, 0);
            {
              ATerm x_14 = NULL,k_5 = NULL;
              t = SSLgetAnnotations(z_40);
              x_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_40);
              k_5 = t;
              t = SSLsetAnnotations(k_5, x_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_40;
          }
        LocalPopChoice(w_31);
        t = xtc_transform_file_2_0(z_7, pass_verbose_0_0, t);
      }
    else
      {
        t = v_31;
        t = xtc_transform_term_2_0(a_8, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_x_31;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm k_40 = NULL;
  t = term_a_32;
  t = xtc_find_0_0(t);
  k_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_40), term_g_32);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_x_31;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm l_40 = NULL;
  t = term_a_32;
  t = xtc_find_0_0(t);
  l_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_40), term_g_32);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_i_32;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_i_32;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_j_32;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm io_pp_box_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_6, default_usage_0_0, _id, z_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_box_0_0(t);
  return(t);
}
