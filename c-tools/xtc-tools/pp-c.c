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
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_p_32;
ATerm term_c_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_x_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_r_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_x_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_r_27;
ATerm term_y_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_x_24;
ATerm term_s_24;
ATerm term_h_24;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_o_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_u_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_l_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_o_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_c_20;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_p_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_d_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
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
ATerm term_g_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_n_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_v_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_a_9, term_v_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_9, term_c_10, term_d_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_10, term_g_10, term_i_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_10, term_p_10, term_q_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_w_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_a_11, term_b_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_f_11, term_g_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_k_11, term_l_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_o_11, term_p_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_11, term_u_11, term_v_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_12, term_c_12, term_d_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_h_12, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_m_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_p_12, term_q_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_v_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_z_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_h_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_n_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_w_13, term_x_13);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_i_14, term_j_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_p_14, term_q_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_u_14, term_v_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_a_15, term_b_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_h_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_m_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_u_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_y_15, term_e_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_u_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_b_21);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym__2, term_a_18, term_y_17);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym__2, term_v_8, term_e_25);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_25);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym__2, term_v_25, term_d_18);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym__2, term_m_26, term_n_26);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_g_29, term_d_18);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym__2, term_j_29, term_d_18);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym__2, term_a_28, term_d_18);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__2, term_x_31, term_d_18);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm g_6 (ATerm p_28, ATerm q_28, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm r_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm u_6 (ATerm u_65 (ATerm), ATerm w_165, ATerm v_17, ATerm t);
static ATerm c_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm t);
static ATerm v_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm w_70 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm j_64 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm l_83 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm a_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_7 (ATerm y_5, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm x_6 (ATerm a_79 (ATerm), ATerm x_29, ATerm v_29, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
static ATerm h_6 (ATerm b_19, ATerm c_19, ATerm t);
ATerm at_last_1_0 (ATerm l_71 (ATerm), ATerm t);
static ATerm j_6 (ATerm t_70 (ATerm), ATerm p_19, ATerm j_197, ATerm t);
ATerm at_suffix_1_0 (ATerm e_71 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm x_70 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm m_95 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm remove_extension_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm n_80 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm m_80 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm o_80 (ATerm), ATerm t);
static ATerm l_6 (ATerm r_74 (ATerm), ATerm s_74 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm m_6 (ATerm o_74 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm r_1 (ATerm t);
static ATerm n_6 (ATerm h_32, ATerm i_32, ATerm j_32, ATerm t);
static ATerm o_6 (ATerm q_80 (ATerm), ATerm r_32, ATerm q_32, ATerm t);
static ATerm q_6 (ATerm s_34, ATerm t_34, ATerm t);
static ATerm n_21 (ATerm e_21, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm p_6 (ATerm t_17, ATerm t);
static ATerm s_6 (ATerm a_35, ATerm b_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_23 (ATerm d_22, ATerm t);
static ATerm a_24 (ATerm h_22, ATerm i_22, ATerm j_22, ATerm t);
static ATerm c_24 (ATerm t_22, ATerm u_22, ATerm v_22, ATerm t);
static ATerm t_6 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_78 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm o_28 (ATerm o_27, ATerm t);
static ATerm d_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm y_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm z_6 (ATerm p_31, ATerm q_31, ATerm t);
ATerm end_scope_1_0 (ATerm x_78 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm w_78 (ATerm), ATerm t);
static ATerm n_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm x_82 (ATerm), ATerm t);
static ATerm y_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm y_82 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_7 (ATerm k_33, ATerm l_33, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_7 (ATerm k_31, ATerm l_31, ATerm j_31, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm a_7 (ATerm j_28, ATerm k_28, ATerm t);
ATerm foldr_2_0 (ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_80 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm need_help_1_0 (ATerm n_84 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_70 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm d_7 (ATerm j_50, ATerm k_50, ATerm t);
ATerm debug_1_0 (ATerm s_65 (ATerm), ATerm t);
ATerm map_1_0 (ATerm k_70 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm e_7 (ATerm b_33, ATerm c_33, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm k_57 (ATerm), ATerm l_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_86 (ATerm), ATerm t);
static ATerm b_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm parse_options_1_0 (ATerm k_86 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm io_pp_c_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm g_6 (ATerm p_28, ATerm q_28, ATerm t)
{
  ATerm w_4 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(p_28, q_28);
      LocalPopChoice(u_8);
    }
  else
    {
      t = w_4;
      t = SSL_subtr(p_28, q_28);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,e_0 = NULL,f_0 = NULL;
  t = term_v_8;
  {
    ATerm w_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = w_8;
        t = term_a_9;
      }
  }
  b_0 = t;
  t = term_a_9;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_a_9);
  t = g_6(b_0, f_0, t);
  e_0 = t;
  t = SSL_int_to_string(e_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_v_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm z_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_b_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm f_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_e_9);
      f_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_0, (ATerm) ATinsert(ATempty, term_e_9));
      t = q_6(z_0, f_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm r_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm g_1 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_1);
  return(t);
}
static ATerm u_6 (ATerm u_65 (ATerm), ATerm w_165, ATerm v_17, ATerm t)
{
  ATerm h_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_165, term_f_9);
  t = t_6(t);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, v_17);
  t = u_65(t);
  t = fclose_0_0(t);
  t = v_17;
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_9 = ATgetArgument(t, 0);
      if(match_cons(g_9, sym_Stream_1))
        {
          o_1 = ATgetArgument(g_9, 0);
        }
      else
        _fail(t);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(o_1, p_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,n_1 = NULL;
  n_1 = t;
  t = xtc_new_file_0_0(t);
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_1, n_1);
  t = u_6(c_0, l_1, n_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
  t = xtc_transform_file_2_0(k_82, l_82, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm v_6 (ATerm f_14, ATerm g_14, ATerm t)
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
        ATerm m_0 = NULL,q_0 = NULL;
        t = SSL_int_to_string(x_2);
        m_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_9), m_0), term_i_9);
        q_0 = t;
        t = SSL_concat_strings(q_0);
      }
    }
  else
    {
      ATerm j_1 = NULL,k_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_2 = ATgetArgument(t, 0);
          y_2 = ATgetArgument(t, 1);
          z_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_2);
      j_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_2), term_n_9), j_1), term_k_9), x_2);
      k_1 = t;
      t = SSL_concat_strings(k_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_70 (ATerm), ATerm t)
{
  ATerm e_3 = NULL;
  static ATerm h_0 (ATerm t)
  {
    t = w_70(t);
    if(((e_3 != NULL) && (e_3 != t)))
      _fail(t);
    else
      e_3 = t;
    return(t);
  }
  t = fetch_1_0(h_0, t);
  t = not_null(e_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm f_3 = NULL;
  f_3 = t;
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm r_9 = ATgetArgument(t, 0);
              if((f_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm t_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_16), term_v_15), term_r_15), term_n_15), term_j_15), term_c_15), term_w_14), term_r_14), term_l_14), term_z_13), term_o_13), term_i_13), term_a_13), term_w_12), term_s_12), term_n_12), term_j_12), term_f_12), term_w_11), term_s_11), term_m_11), term_i_11), term_c_11), term_y_10), term_r_10), term_n_10), term_e_10), term_w_9);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, f_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm j_3 = NULL,w_3 = NULL;
  j_3 = t;
  {
    ATerm p_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_16 = ATgetArgument(t, 0);
            w_3 = ATgetArgument(t, 1);
            {
              ATerm y_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(r_16);
        {
          ATerm z_16 = t;
          int a_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_1 = NULL,x_1 = NULL,y_1 = NULL;
              t = w_3;
              {
                ATerm c_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_17;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              v_1 = t;
              t = term_d_17;
              x_1 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, v_1), term_e_17);
              y_1 = t;
              t = SSL_printnl(x_1, y_1);
              t = (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATinsert(ATinsert(ATempty, v_1), term_e_17));
              LocalPopChoice(a_17);
            }
          else
            {
              t = z_16;
              t = j_3;
            }
        }
      }
    else
      {
        t = p_16;
        t = j_3;
      }
  }
  t = j_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm j_64 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,i_4 = NULL;
  i_4 = t;
  t = fork_0_0(t);
  g_4 = t;
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_4;
        t = j_64(t);
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        t = SSL_waitpid(g_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_17 = ATgetArgument(t, 0);
            if(((ATgetType(h_17) != AT_INT) || (ATgetInt((ATermInt) h_17) != 0)))
              _fail(t);
            {
              ATerm k_17 = ATgetArgument(t, 1);
            }
            {
              ATerm m_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm l_83 (ATerm), ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL;
  m_4 = t;
  t = l_83(t);
  t = xtc_find_0_0(t);
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_4, m_4);
  {
    static ATerm s_0 (ATerm t)
    {
      ATerm n_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, l_4, m_4);
      t = v_6(l_4, m_4, t);
      t = term_p_17;
      n_4 = t;
      t = SSL_exit(n_4);
      return(t);
    }
    t = fork_and_wait_1_0(s_0, t);
  }
  t = m_4;
  return(t);
}
ATerm at_end_1_0 (ATerm a_71 (ATerm), ATerm t)
{
  static ATerm q_5 (ATerm t)
  {
    ATerm m_5 = NULL,n_5 = NULL,p_5 = NULL;
    p_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_5 = ATgetFirst((ATermList) t);
        n_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_2 = NULL,l_2 = NULL,u_1 = NULL;
          t = SSLgetAnnotations(p_5);
          g_2 = t;
          t = n_5;
          t = q_5(t);
          l_2 = t;
          t = (ATerm) ATinsert(CheckATermList(l_2), m_5);
          u_1 = t;
          t = SSLsetAnnotations(u_1, g_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_5;
        t = a_71(t);
      }
    return(t);
  }
  t = q_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
  p_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_4;
    }
  else
    {
      static ATerm u_0 (ATerm t)
      {
        t = not_null(r_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_4 = ATgetFirst((ATermList) t);
          if(((r_4 != NULL) && (r_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_4;
      t = at_end_1_0(u_0, t);
    }
  return(t);
}
static ATerm j_7 (ATerm y_5, ATerm t)
{
  ATerm z_5 = NULL;
  t = SSL_explode_term(y_5);
  if(match_cons(t, sym__2))
    {
      ATerm q_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_6 = NULL,d_6 = NULL,w_6 = NULL;
  w_6 = t;
  if(match_cons(t, sym__2))
    {
      c_6 = ATgetArgument(t, 0);
      d_6 = ATgetArgument(t, 1);
      {
        ATerm r_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_0 (ATerm t)
            {
              t = d_6;
              return(t);
            }
            t = c_6;
            t = at_end_1_0(w_0, t);
            LocalPopChoice(s_17);
          }
        else
          {
            t = r_17;
            t = j_7(w_6, t);
          }
      }
    }
  else
    {
      t = j_7(w_6, t);
    }
  return(t);
}
static ATerm x_6 (ATerm a_79 (ATerm), ATerm x_29, ATerm v_29, ATerm t)
{
  ATerm l_7 = NULL,r_7 = NULL,t_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL;
  x_7 = t;
  t = a_79(t);
  l_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_7, x_29, v_29);
  t = f_7(l_7, x_29, v_29, t);
  {
    ATerm u_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_8 = NULL;
        t = term_y_17;
        d_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_7, term_y_17);
        t = e_7(l_7, d_8, t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = u_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_7 = ATgetFirst((ATermList) t);
      t_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_y_17;
  y_7 = t;
  t = (ATerm) ATinsert(CheckATermList(t_7), (ATerm) ATinsert(CheckATermList(r_7), x_29));
  z_7 = t;
  t = SSL_table_put(l_7, y_7, z_7);
  t = x_7;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_a_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,o_8 = NULL;
  t = P__tmpdir_0_0(t);
  h_8 = t;
  t = term_b_18;
  o_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_8, term_b_18);
  t = d_7(h_8, o_8, t);
  j_8 = t;
  t = term_c_18;
  k_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_8, term_c_18);
  t = d_7(j_8, k_8, t);
  i_8 = t;
  t = SSL_mkstemp(i_8);
  if(match_cons(t, sym__2))
    {
      f_8 = ATgetArgument(t, 0);
      e_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_d_18;
  g_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_8, term_d_18);
  t = x_6(x_0, f_8, g_8, t);
  t = SSL_close(e_8);
  t = f_8;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL;
  s_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_8 = NULL,y_8 = NULL;
      t = s_8;
      t = xtc_new_file_0_0(t);
      x_8 = t;
      t = v_0(t);
      y_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_8, (ATerm) ATinsert(ATinsert(ATempty, x_8), term_f_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_8);
    }
  else
    {
      ATerm c_9 = NULL,d_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_8;
      t = xtc_new_file_0_0(t);
      c_9 = t;
      t = v_0(t);
      d_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_9), term_f_18), t_8), term_g_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_9);
    }
  return(t);
}
static ATerm h_6 (ATerm b_19, ATerm c_19, ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL;
  t = c_19;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_19;
    }
  else
    {
      ATerm l_3 = NULL,q_3 = NULL,c_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_10 = ATgetFirst((ATermList) t);
          k_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_19);
      l_3 = t;
      t = k_10;
      {
        static ATerm b_4 (ATerm t)
        {
          ATerm h_18 = t;
          int i_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_3 = NULL;
              r_3 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_3;
              LocalPopChoice(i_18);
            }
          else
            {
              t = h_18;
              {
                ATerm u_3 = NULL;
                t = Cons_2_0(_id, b_4, t);
                u_3 = t;
                t = (ATerm) ATinsert(CheckATermList(u_3), b_19);
              }
            }
          return(t);
        }
        t = b_4(t);
      }
      q_3 = t;
      t = (ATerm) ATinsert(CheckATermList(q_3), j_10);
      c_2 = t;
      t = SSLsetAnnotations(c_2, l_3);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm l_71 (ATerm), ATerm t)
{
  static ATerm b_12 (ATerm t)
  {
    ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
    x_11 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_11 = ATgetFirst((ATermList) t);
        z_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_18 = t;
      int k_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_4 = NULL,j_2 = NULL;
          t = SSLgetAnnotations(x_11);
          t_4 = t;
          t = z_11;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(z_11), y_11);
          j_2 = t;
          t = SSLsetAnnotations(j_2, t_4);
          t = l_71(t);
          LocalPopChoice(k_18);
        }
      else
        {
          t = j_18;
          {
            ATerm t_5 = NULL,w_5 = NULL,k_2 = NULL;
            t = SSLgetAnnotations(x_11);
            t_5 = t;
            t = z_11;
            t = b_12(t);
            w_5 = t;
            t = (ATerm) ATinsert(CheckATermList(w_5), y_11);
            k_2 = t;
            t = SSLsetAnnotations(k_2, t_5);
          }
        }
    }
    return(t);
  }
  t = b_12(t);
  return(t);
}
static ATerm j_6 (ATerm t_70 (ATerm), ATerm p_19, ATerm j_197, ATerm t)
{
  static ATerm y_0 (ATerm t)
  {
    ATerm e_12 = NULL;
    e_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_19, e_12);
    t = t_70(t);
    t = e_12;
    return(t);
  }
  t = j_197;
  t = SRTS_one(y_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm e_71 (ATerm), ATerm t)
{
  static ATerm g_13 (ATerm t)
  {
    ATerm l_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_71(t);
        LocalPopChoice(n_18);
      }
    else
      {
        t = l_18;
        {
          ATerm b_13 = NULL,e_13 = NULL,f_13 = NULL,c_7 = NULL,n_7 = NULL,o_2 = NULL;
          b_13 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_13 = ATgetFirst((ATermList) t);
              f_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_13);
          c_7 = t;
          t = f_13;
          t = g_13(t);
          n_7 = t;
          t = (ATerm) ATinsert(CheckATermList(n_7), e_13);
          o_2 = t;
          t = SSLsetAnnotations(o_2, c_7);
        }
      }
    return(t);
  }
  t = g_13(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm x_70 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL;
  static ATerm a_1 (ATerm t)
  {
    ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,y_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,h_14 = NULL,r_2 = NULL,q_2 = NULL;
    h_14 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_13 = ATgetFirst((ATermList) t);
        a_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_14);
    u_13 = t;
    t = y_13;
    t = x_70(t);
    b_14 = t;
    t = (ATerm) ATinsert(CheckATermList(a_14), b_14);
    q_2 = t;
    t = SSLsetAnnotations(q_2, u_13);
    c_14 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_13 = ATgetFirst((ATermList) t);
        t_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_14);
    r_13 = t;
    t = t_13;
    if(((p_13 != NULL) && (p_13 != t)))
      _fail(t);
    else
      p_13 = t;
    t = (ATerm) ATinsert(CheckATermList(t_13), s_13);
    r_2 = t;
    t = SSLsetAnnotations(r_2, r_13);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(a_1, t);
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_13, not_null(p_13));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm m_95 (ATerm), ATerm t)
{
  ATerm z_14 = NULL,g_15 = NULL;
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(m_95, t);
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      {
        ATerm s_14 = NULL;
        s_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_14, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      g_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_14;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_15;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm r_18 = ATgetFirst((ATermList) t);
              ATerm t_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = g_15;
          t = list_tokenize_1_0(m_95, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm u_18 = ATgetFirst((ATermList) t);
          ATerm v_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_15;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, z_14);
        }
      else
        {
          ATerm w_15 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_18 = ATgetFirst((ATermList) t);
              ATerm x_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = g_15;
          t = list_tokenize_1_0(m_95, t);
          w_15 = t;
          t = (ATerm) ATinsert(CheckATermList(w_15), z_14);
        }
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm k_16 = NULL;
  if(match_cons(t, sym__2))
    {
      k_16 = ATgetArgument(t, 0);
      if((k_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm l_16 = NULL;
  l_16 = t;
  t = SSL_implode_string(l_16);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,g_16 = NULL,h_16 = NULL,b_3 = NULL;
  h_16 = t;
  if(match_cons(t, sym__2))
    {
      c_16 = ATgetArgument(t, 0);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_16);
  b_16 = t;
  t = SSL_explode_string(d_16);
  g_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_16, g_16);
  b_3 = t;
  t = SSLsetAnnotations(b_3, b_16);
  if(match_cons(t, sym__2))
    {
      z_15 = ATgetArgument(t, 0);
      a_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_16;
  {
    static ATerm b_1 (ATerm t)
    {
      ATerm i_16 = NULL;
      i_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_16, z_15);
      t = j_6(c_1, i_16, z_15, t);
      return(t);
    }
    t = list_tokenize_1_0(b_1, t);
  }
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm t_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_18 = ATgetFirst((ATermList) t);
      t_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_16;
  return(t);
}
ATerm remove_extension_0_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,q_16 = NULL;
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_z_18), n_16);
  t = string_tokenize_0_0(t);
  t = at_last_1_0(e_1, t);
  m_16 = t;
  t = term_a_19;
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, m_16);
  t = h_6(q_16, m_16, t);
  o_16 = t;
  t = SSL_concat_strings(o_16);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm u_16 = NULL;
  static ATerm i_1 (ATerm t)
  {
    ATerm v_16 = NULL,w_16 = NULL;
    v_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_16), v_16);
    t = e_7(not_null(u_16), v_16, t);
    w_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_16, w_16);
    return(t);
  }
  if(((u_16 != NULL) && (u_16 != t)))
    _fail(t);
  else
    u_16 = t;
  t = SSL_table_keys(u_16);
  t = map_1_0(i_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm n_80 (ATerm), ATerm t)
{
  ATerm j_17 = NULL;
  j_17 = t;
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_17 = NULL;
        t = term_v_8;
        t = get_config_0_0(t);
        l_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_17, term_l_15);
        t = geq_0_0(t);
        t = j_17;
        t = n_80(t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = j_17;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm z_17 = NULL;
  z_17 = t;
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_18 = NULL;
        t = term_v_8;
        t = get_config_0_0(t);
        e_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_18, term_h_12);
        t = geq_0_0(t);
        t = z_17;
        t = m_80(t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = z_17;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm o_80 (ATerm), ATerm t)
{
  ATerm m_18 = NULL;
  m_18 = t;
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_18 = NULL;
        t = term_v_8;
        t = get_config_0_0(t);
        q_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_18, term_p_10);
        t = geq_0_0(t);
        t = m_18;
        t = o_80(t);
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        t = m_18;
      }
  }
  return(t);
}
static ATerm l_6 (ATerm r_74 (ATerm), ATerm s_74 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  t = s_74(t);
  {
    static ATerm m_1 (ATerm t)
    {
      ATerm s_18 = NULL;
      s_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, s_18);
      t = r_74(t);
      return(t);
    }
    t = fetch_1_0(m_1, t);
  }
  t = p_24;
  return(t);
}
static ATerm m_6 (ATerm o_74 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  static ATerm e_20 (ATerm t)
  {
    ATerm u_19 = NULL,x_19 = NULL,a_20 = NULL;
    u_19 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_19 = ATgetFirst((ATermList) t);
            a_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_19;
              {
                static ATerm q_1 (ATerm t)
                {
                  t = l_24;
                  return(t);
                }
                t = l_6(o_74, q_1, x_19, a_20, t);
              }
              t = e_20(t);
              LocalPopChoice(k_19);
            }
          else
            {
              t = j_19;
              {
                ATerm a_8 = NULL,l_8 = NULL,k_3 = NULL;
                t = SSLgetAnnotations(u_19);
                a_8 = t;
                t = a_20;
                t = e_20(t);
                l_8 = t;
                t = (ATerm) ATinsert(CheckATermList(l_8), x_19);
                k_3 = t;
                t = SSLsetAnnotations(k_3, a_8);
              }
            }
        }
      }
    return(t);
  }
  t = m_24;
  t = e_20(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm p_20 = NULL;
  if(match_cons(t, sym__2))
    {
      p_20 = ATgetArgument(t, 0);
      if((p_20 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_6 (ATerm h_32, ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm h_20 = NULL,j_20 = NULL,k_20 = NULL;
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_32, i_32);
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_19 = ATgetArgument(t, 0);
            ATerm o_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_32, i_32);
        t = e_7(h_32, i_32, t);
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = (ATerm) ATempty;
      }
  }
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_20, j_32);
  t = m_6(r_1, k_20, j_32, t);
  j_20 = t;
  t = SSL_table_put(h_32, i_32, j_20);
  t = h_20;
  return(t);
}
static ATerm o_6 (ATerm q_80 (ATerm), ATerm r_32, ATerm q_32, ATerm t)
{
  static ATerm s_1 (ATerm t)
  {
    ATerm q_20 = NULL,r_20 = NULL;
    if(match_cons(t, sym__2))
      {
        q_20 = ATgetArgument(t, 0);
        r_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, r_32, q_20, r_20);
    t = q_80(t);
    return(t);
  }
  t = q_32;
  t = map_1_0(s_1, t);
  return(t);
}
static ATerm q_6 (ATerm s_34, ATerm t_34, ATerm t)
{
  t = SSL_access(s_34, t_34);
  return(t);
}
static ATerm n_21 (ATerm e_21, ATerm t)
{
  t = SSL_fclose(e_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_21 = NULL,k_21 = NULL;
  k_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_21 = ATgetArgument(t, 0);
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_21);
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            t = n_21(k_21, t);
          }
      }
    }
  else
    {
      t = n_21(k_21, t);
    }
  return(t);
}
static ATerm p_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm s_6 (ATerm a_35, ATerm b_35, ATerm t)
{
  ATerm p_21 = NULL;
  t = SSL_fopen(a_35, b_35);
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_21);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_21 = NULL;
  t = SSL_stdin_stream();
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_21 = NULL;
  t = SSL_stdout_stream();
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_21 = NULL;
  t = SSL_stderr_stream();
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_21);
  return(t);
}
static ATerm w_23 (ATerm d_22, ATerm t)
{
  ATerm e_22 = NULL;
  t = SSL_explode_term(d_22);
  if(match_cons(t, sym__2))
    {
      ATerm s_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_19 = ATgetArgument(t, 1);
        if(((ATgetType(t_19) == AT_LIST) && !(ATisEmpty(t_19))))
          {
            e_22 = ATgetFirst((ATermList) t_19);
            {
              ATerm v_19 = (ATerm) ATgetNext((ATermList) t_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_22;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_22;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_22;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_22;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_24 (ATerm h_22, ATerm i_22, ATerm j_22, ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,p_22 = NULL,p_3 = NULL;
  t = SSLgetAnnotations(j_22);
  m_22 = t;
  t = h_22;
  if(match_cons(t, sym_Path_1))
    {
      p_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_22, i_22);
  p_3 = t;
  t = SSLsetAnnotations(p_3, m_22);
  if(match_cons(t, sym__2))
    {
      k_22 = ATgetArgument(t, 0);
      l_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(k_22, l_22, t);
  return(t);
}
static ATerm c_24 (ATerm t_22, ATerm u_22, ATerm v_22, ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,z_22 = NULL,j_23 = NULL,s_3 = NULL;
  t = SSLgetAnnotations(v_22);
  z_22 = t;
  t = SSL_is_string(t_22);
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_23, u_22);
  s_3 = t;
  t = SSLsetAnnotations(s_3, z_22);
  if(match_cons(t, sym__2))
    {
      w_22 = ATgetArgument(t, 0);
      x_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(w_22, x_22, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm o_23 = NULL,s_23 = NULL,u_23 = NULL;
  o_23 = t;
  if(match_cons(t, sym__2))
    {
      s_23 = ATgetArgument(t, 0);
      u_23 = ATgetArgument(t, 1);
      {
        ATerm w_19 = t;
        int y_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_23(o_23, t);
            LocalPopChoice(y_19);
          }
        else
          {
            t = w_19;
            {
              ATerm z_19 = t;
              int b_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_24(s_23, u_23, o_23, t);
                  LocalPopChoice(b_20);
                }
              else
                {
                  t = z_19;
                  t = c_24(s_23, u_23, o_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_23(o_23, t);
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  ATerm d_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_24 = NULL;
      g_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_24, term_g_20);
      t = t_6(t);
      LocalPopChoice(f_20);
    }
  else
    {
      t = d_20;
      t = debug_1_0(t_1, t);
      _fail(t);
    }
  e_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(f_24, t);
  d_24 = t;
  t = e_24;
  t = fclose_0_0(t);
  t = d_24;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_24 = NULL,n_24 = NULL;
      k_24 = t;
      t = (ATerm) ATinsert(ATempty, term_o_20);
      n_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_24, (ATerm) ATinsert(ATempty, term_o_20));
      t = q_6(k_24, n_24, t);
      LocalPopChoice(n_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = m_20;
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_20 = t;
            if((PushChoice() == 0))
              {
                ATerm o_24 = NULL,u_24 = NULL;
                o_24 = t;
                t = (ATerm) ATinsert(ATempty, term_e_9);
                u_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, o_24, (ATerm) ATinsert(ATempty, term_e_9));
                t = q_6(o_24, u_24, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_20;
              }
            t = debug_1_0(w_1, t);
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            t = debug_1_0(z_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_v_20;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_w_20;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
  p_25 = t;
  t = term_d_17;
  q_25 = t;
  t = (ATerm) ATinsert(ATempty, term_x_20);
  r_25 = t;
  t = SSL_printnl(q_25, r_25);
  t = p_25;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm u_25 = NULL,x_25 = NULL,y_25 = NULL;
  if(match_cons(t, sym__3))
    {
      u_25 = ATgetArgument(t, 0);
      x_25 = ATgetArgument(t, 1);
      y_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_6(u_25, x_25, y_25, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
  b_26 = t;
  t = term_d_17;
  c_26 = t;
  t = (ATerm) ATinsert(ATempty, term_y_20);
  d_26 = t;
  t = SSL_printnl(c_26, d_26);
  t = b_26;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  t = term_d_17;
  g_26 = t;
  t = (ATerm) ATinsert(ATempty, term_x_20);
  h_26 = t;
  t = SSL_printnl(g_26, h_26);
  t = f_26;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm v_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,m_25 = NULL;
  v_24 = t;
  t = if_verbose5_1_0(a_2, t);
  {
    ATerm z_20 = t;
    if((PushChoice() == 0))
      {
        ATerm n_25 = NULL,o_25 = NULL;
        t = term_a_21;
        n_25 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, v_24);
        o_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATmakeAppl(sym_Imported_1, v_24));
        t = e_7(n_25, o_25, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_20;
      }
  }
  z_24 = t;
  t = term_a_21;
  i_25 = t;
  t = term_b_21;
  j_25 = t;
  t = (ATerm) ATinsert(ATempty, v_24);
  m_25 = t;
  t = SSL_table_put(i_25, j_25, m_25);
  t = z_24;
  t = if_verbose4_1_0(d_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(f_2, t);
  y_24 = t;
  t = term_a_21;
  h_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, y_24);
  t = o_6(h_2, h_25, y_24, t);
  t = if_verbose6_1_0(i_2, t);
  t = term_a_21;
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, v_24);
  f_25 = t;
  t = (ATerm) ATempty;
  g_25 = t;
  t = SSL_table_put(a_25, f_25, g_25);
  t = (ATerm) ATmakeAppl(sym__3, term_a_21, (ATerm)ATmakeAppl(sym_Imported_1, v_24), (ATerm) ATempty);
  t = if_verbose4_1_0(m_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm g_78 (ATerm), ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
  v_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_26;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_26 = ATgetFirst((ATermList) t);
          x_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_9 = NULL,l_9 = NULL,m_9 = NULL,z_4 = NULL;
            t = SSLgetAnnotations(v_26);
            h_9 = t;
            t = w_26;
            t = g_78(t);
            l_9 = t;
            t = x_26;
            t = filter_1_0(g_78, t);
            m_9 = t;
            t = (ATerm) ATinsert(CheckATermList(m_9), l_9);
            z_4 = t;
            t = SSLsetAnnotations(z_4, h_9);
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
            t = x_26;
            t = filter_1_0(g_78, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm t)
{
  static ATerm a_27 (ATerm t)
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_68(t);
        t = a_27(t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = q_68(t);
      }
    return(t);
  }
  t = a_27(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_21;
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
            ATerm b_27 = NULL;
            t = term_r_21;
            b_27 = t;
            t = SSL_getenv(b_27);
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
static ATerm n_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_s_21;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL;
  t = term_a_21;
  i_27 = t;
  t = term_u_21;
  j_27 = t;
  t = term_w_21;
  t = e_7(i_27, j_27, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm x_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_21;
      }
  }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = debug_1_0(u_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm d_27 = NULL;
  t = if_verbose5_1_0(n_2, t);
  d_27 = t;
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_27 = NULL,f_27 = NULL;
        t = term_a_21;
        e_27 = t;
        t = term_b_21;
        f_27 = t;
        t = term_b_22;
        t = e_7(e_27, f_27, t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        {
          ATerm g_27 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          g_27 = t;
          t = repeat_2_0(s_2, _id, t);
          t = g_27;
        }
      }
  }
  t = d_27;
  t = if_verbose5_1_0(t_2, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = debug_1_0(a_3, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_c_22;
  return(t);
}
static ATerm o_28 (ATerm o_27, ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
  t = term_a_21;
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, o_27);
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATmakeAppl(sym_Tool_1, o_27));
  t = e_7(t_27, u_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_22 = ATgetFirst((ATermList) t);
      if(match_cons(f_22, sym__2))
        {
          ATerm n_22 = ATgetArgument(f_22, 0);
          s_27 = ATgetArgument(f_22, 1);
        }
      else
        _fail(t);
      {
        ATerm g_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_27;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = debug_1_0(g_3, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_c_22;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_a_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(i_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_o_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_27 = NULL,w_27 = NULL,y_27 = NULL;
      t = if_verbose5_1_0(v_2, t);
      t = xtc_load_0_0(t);
      y_27 = t;
      if(match_cons(t, sym__2))
        {
          v_27 = ATgetArgument(t, 0);
          w_27 = ATgetArgument(t, 1);
          {
            ATerm s_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
                t = term_a_21;
                d_28 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, v_27);
                e_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATmakeAppl(sym_Tool_1, v_27));
                t = e_7(d_28, e_28, t);
                {
                  static ATerm c_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((w_27 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((c_28 != NULL) && (c_28 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(c_3, t);
                }
                t = not_null(c_28);
                LocalPopChoice(y_22);
              }
            else
              {
                t = s_22;
                t = o_28(y_27, t);
              }
          }
        }
      else
        {
          t = o_28(y_27, t);
        }
      t = if_verbose5_1_0(d_3, t);
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      {
        ATerm n_28 = NULL,z_9 = NULL,b_10 = NULL;
        n_28 = t;
        t = term_d_17;
        z_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_23), n_28), term_a_23);
        b_10 = t;
        t = SSL_printnl(z_9, b_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_23), n_28), term_a_23);
        t = if_verbose5_1_0(h_3, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm y_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL;
  c_30 = t;
  if(match_cons(t, sym_FILE_1))
    {
      d_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_10 = NULL;
        t = c_30;
        t = r_0(t);
        m_10 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = m_10;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = m_10;
          }
        t = (ATerm) ATmakeAppl(sym__2, d_30, m_10);
        t = y_6(d_30, m_10, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_30);
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        {
          ATerm e_23 = t;
          int f_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_10 = NULL;
              t = c_30;
              t = r_0(t);
              u_10 = t;
              {
                ATerm g_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm v_10 = NULL;
                    v_10 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = v_10;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = v_10;
                          }
                        else
                          {
                            t = v_10;
                            if((d_30 != t))
                              {
                                _fail(t);
                              }
                            t = v_10;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_23;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, d_30, u_10);
              t = y_6(d_30, u_10, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_30);
              LocalPopChoice(f_23);
            }
          else
            {
              t = e_23;
              t = c_30;
              t = r_0(t);
              if((d_30 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_30);
            }
        }
      }
  }
  return(t);
}
static ATerm z_6 (ATerm p_31, ATerm q_31, ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  j_30 = t;
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_31, q_31);
        t = e_7(p_31, q_31, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_23 = ATgetFirst((ATermList) t);
            i_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_23);
        t = SSL_table_put(p_31, q_31, i_30);
        t = (ATerm) ATmakeAppl(sym__3, p_31, q_31, i_30);
      }
    else
      {
        t = h_23;
        t = SSL_table_remove(p_31, q_31);
        t = (ATerm) ATmakeAppl(sym__2, p_31, q_31);
      }
  }
  t = j_30;
  return(t);
}
ATerm end_scope_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  n_30 = t;
  t = x_78(t);
  m_30 = t;
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_30 = NULL;
        t = term_y_17;
        p_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_30, term_y_17);
        t = e_7(m_30, p_30, t);
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_30 = ATgetFirst((ATermList) t);
      k_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_y_17;
  o_30 = t;
  t = SSL_table_put(m_30, o_30, k_30);
  t = l_30;
  {
    static ATerm m_3 (ATerm t)
    {
      ATerm q_30 = NULL;
      q_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_30, q_30);
      t = z_6(m_30, q_30, t);
      return(t);
    }
    t = map_1_0(m_3, t);
  }
  t = n_30;
  return(t);
}
ATerm restore_always_2_0 (ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm t)
{
  ATerm n_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_79(t);
      t = y_79(t);
      LocalPopChoice(p_23);
    }
  else
    {
      t = n_23;
      t = y_79(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_78 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,b_31 = NULL;
  x_30 = t;
  t = w_78(t);
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_30, term_y_17);
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_31 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_23 = ATgetArgument(t, 0);
            ATerm v_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_17;
        y_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_30, term_y_17);
        t = e_7(w_30, y_31, t);
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        t = (ATerm) ATempty;
      }
  }
  y_30 = t;
  t = term_y_17;
  z_30 = t;
  t = (ATerm) ATinsert(CheckATermList(y_30), (ATerm) ATempty);
  b_31 = t;
  t = SSL_table_put(w_30, z_30, b_31);
  t = x_30;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_a_18;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm x_32 = NULL;
  x_32 = t;
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(x_32);
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        t = x_32;
      }
  }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_a_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm b_32 = NULL;
  static ATerm o_3 (ATerm t)
  {
    ATerm e_32 = NULL;
    e_32 = t;
    {
      ATerm z_23 = t;
      int b_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_32 = NULL,g_32 = NULL;
          t = term_a_18;
          f_32 = t;
          t = term_y_17;
          g_32 = t;
          t = term_h_24;
          t = e_7(f_32, g_32, t);
          LocalPopChoice(b_24);
        }
      else
        {
          t = z_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((b_32 != NULL) && (b_32 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          b_32 = ATgetFirst((ATermList) t);
        {
          ATerm i_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = b_32;
    t = map_1_0(t_3, t);
    t = e_32;
    t = end_scope_1_0(v_3, t);
    return(t);
  }
  t = begin_scope_1_0(n_3, t);
  t = restore_always_2_0(x_82, o_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm j_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_18;
      t = get_config_0_0(t);
      LocalPopChoice(r_24);
    }
  else
    {
      t = j_24;
      t = term_s_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  static ATerm x_3 (ATerm t)
  {
    ATerm t_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_33 = NULL;
        t = term_g_18;
        t = get_config_0_0(t);
        a_33 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_33);
        LocalPopChoice(w_24);
      }
    else
      {
        t = t_24;
        t = term_b_9;
      }
    t = y_82(t);
    t = copy_to_1_0(y_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(x_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,h_33 = NULL,i_33 = NULL;
  d_33 = t;
  t = term_d_18;
  t = whoami_0_0(t);
  e_33 = t;
  t = term_d_17;
  h_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_25), e_33), term_x_24);
  i_33 = t;
  t = SSL_printnl(h_33, i_33);
  t = term_a_9;
  f_33 = t;
  t = SSL_exit(f_33);
  t = d_33;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm m_33 = NULL;
  m_33 = t;
  if(match_string(t, "-k"))
    {
      t = m_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_33;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
  n_33 = t;
  t = SSL_string_to_int(n_33);
  o_33 = t;
  t = term_c_25;
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_25, o_33);
  t = h_7(p_33, o_33, t);
  t = n_33;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, a_4, c_4, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm r_33 = NULL;
  r_33 = t;
  if(match_string(t, "-S"))
    {
      t = r_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_33;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm s_33 = NULL,y_33 = NULL;
  t = term_v_8;
  s_33 = t;
  t = term_e_25;
  y_33 = t;
  t = term_k_25;
  t = h_7(s_33, y_33, t);
  t = term_l_25;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_s_25;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
  z_33 = t;
  t = SSL_string_to_int(z_33);
  a_34 = t;
  t = term_v_8;
  b_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_8, a_34);
  t = h_7(b_34, a_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_33);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_t_25;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL;
  t = term_v_25;
  c_34 = t;
  t = term_d_18;
  d_34 = t;
  t = term_w_25;
  t = h_7(c_34, d_34, t);
  t = term_z_25;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_4, e_4, f_4, t);
      LocalPopChoice(i_26);
    }
  else
    {
      t = e_26;
      {
        ATerm j_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_4, j_4, k_4, t);
            LocalPopChoice(k_26);
          }
        else
          {
            t = j_26;
            t = Option_3_0(o_4, s_4, u_4, t);
          }
      }
    }
  return(t);
}
static ATerm h_7 (ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm e_34 = NULL;
  t = term_l_26;
  e_34 = t;
  t = SSL_table_put(e_34, k_33, l_33);
  t = (ATerm) ATmakeAppl(sym__3, term_l_26, k_33, l_33);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
      t = term_d_18;
      t = i_0(t);
      j_34 = t;
      t = term_m_26;
      k_34 = t;
      t = term_n_26;
      l_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_26, term_n_26, j_34);
      t = f_7(k_34, l_34, j_34, t);
      _fail(t);
    }
  else
    {
      ATerm o_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_34 = ATgetFirst((ATermList) t);
          i_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_34;
      t = d_0(t);
      t = term_d_18;
      t = g_0(t);
      o_34 = t;
      t = (ATerm) ATinsert(CheckATermList(i_34), o_34);
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  if(match_string(t, "-o"))
    {
      t = u_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_34;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm v_34 = NULL,x_34 = NULL;
  v_34 = t;
  t = term_f_18;
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_18, v_34);
  t = h_7(x_34, v_34, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_34);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_o_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_4, x_4, y_4, t);
  return(t);
}
static ATerm f_7 (ATerm k_31, ATerm l_31, ATerm j_31, ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
  e_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_31, l_31);
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_26 = ATgetArgument(t, 0);
            ATerm s_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_31, l_31);
        t = e_7(k_31, l_31, t);
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        t = (ATerm) ATempty;
      }
  }
  f_35 = t;
  t = (ATerm) ATinsert(CheckATermList(f_35), j_31);
  g_35 = t;
  t = SSL_table_put(k_31, l_31, g_35);
  t = e_35;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,s_35 = NULL,t_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
      t = term_d_18;
      t = p_0(t);
      u_35 = t;
      t = term_m_26;
      v_35 = t;
      t = term_n_26;
      w_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_26, term_n_26, u_35);
      t = f_7(v_35, w_35, u_35, t);
      _fail(t);
    }
  else
    {
      ATerm g_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_35 = ATgetFirst((ATermList) t);
          o_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_35 = ATgetFirst((ATermList) t);
          t_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_35;
      t = n_0(t);
      t = s_35;
      t = o_0(t);
      g_36 = t;
      t = (ATerm) ATinsert(CheckATermList(t_35), g_36);
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm i_36 = NULL;
  i_36 = t;
  if(match_string(t, "-i"))
    {
      t = i_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_36;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL;
  j_36 = t;
  t = term_g_18;
  k_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_18, j_36);
  t = h_7(k_36, j_36, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_36);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_t_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, b_5, c_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,q_36 = NULL,r_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_18;
  t = whoami_0_0(t);
  n_36 = t;
  t = term_d_17;
  q_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_26), n_36);
  r_36 = t;
  t = SSL_printnl(q_36, r_36);
  t = term_a_9;
  o_36 = t;
  t = SSL_exit(o_36);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_y_26;
  t = get_config_0_0(t);
  return(t);
}
static ATerm a_7 (ATerm j_28, ATerm k_28, ATerm t)
{
  ATerm z_26 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_28, k_28);
      LocalPopChoice(c_27);
    }
  else
    {
      t = z_26;
      t = SSL_addr(j_28, k_28);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
  u_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_36;
      t = c_77(t);
    }
  else
    {
      ATerm z_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_36 = ATgetFirst((ATermList) t);
          w_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_36;
      t = foldr_2_0(c_77, d_77, t);
      z_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_36, z_36);
      t = d_77(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_e_25;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL;
  if(match_cons(t, sym__2))
    {
      q_11 = ATgetArgument(t, 0);
      r_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(q_11, r_11, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_37 = NULL,e_11 = NULL,h_11 = NULL;
  t = times_0_0(t);
  h_11 = t;
  t = SSL_explode_term(h_11);
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11;
  t = foldr_2_0(d_5, f_5, t);
  h_37 = t;
  t = SSL_TicksToSeconds(h_37);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
  t_37 = t;
  if(match_cons(t, sym__2))
    {
      u_37 = ATgetArgument(t, 0);
      v_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_37;
        if((u_37 != t))
          {
            _fail(t);
          }
        t = t_37;
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        t = (ATerm) ATmakeAppl(sym__2, u_37, v_37);
        {
          ATerm m_27 = t;
          int n_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_37, v_37);
              LocalPopChoice(n_27);
            }
          else
            {
              t = m_27;
              t = SSL_gtr(u_37, v_37);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_37, v_37);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm z_37 = NULL;
  z_37 = t;
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_38 = NULL;
        t = term_v_8;
        t = get_config_0_0(t);
        b_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_38, term_a_9);
        t = geq_0_0(t);
        t = z_37;
        t = j_80(t);
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        t = z_37;
      }
  }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,g_38 = NULL,h_38 = NULL;
  t = run_time_0_0(t);
  d_38 = t;
  t = term_d_18;
  t = whoami_0_0(t);
  e_38 = t;
  t = term_d_17;
  g_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_27), d_38), term_k_9), e_38);
  h_38 = t;
  t = SSL_printnl(g_38, h_38);
  t = (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_27), d_38), term_k_9), e_38));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_25;
  i_38 = t;
  t = SSL_exit(i_38);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL;
  r_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_38 = ATgetArgument(t, 0);
          {
            ATerm r_12 = NULL,e_5 = NULL;
            t = SSLgetAnnotations(r_38);
            r_12 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_38);
            e_5 = t;
            t = SSLsetAnnotations(e_5, r_12);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  ATerm x_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_28;
      t = get_config_0_0(t);
      LocalPopChoice(z_27);
    }
  else
    {
      t = x_27;
      t = fetch_1_0(i_5, t);
    }
  t = n_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_38 = ATgetFirst((ATermList) t);
      v_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_38 = NULL,a_39 = NULL;
        static ATerm j_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_38)), not_null(a_39));
          return(t);
        }
        t = v_38;
        t = l_0(t);
        if(((z_38 != NULL) && (z_38 != t)))
          _fail(t);
        else
          z_38 = t;
        t = u_38;
        t = k_0(t);
        if(((a_39 != NULL) && (a_39 != t)))
          _fail(t);
        else
          a_39 = t;
        t = v_38;
        t = reverse_acc_2_0(k_0, j_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_18;
      t = l_0(t);
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_5 = NULL;
  g_39 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_39);
  e_39 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_39);
  h_5 = t;
  t = SSLsetAnnotations(h_5, e_39);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm i_39 = NULL;
  i_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_39), term_b_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL;
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_26;
      t = get_config_0_0(t);
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      t = fetch_1_0(o_5, t);
    }
  t = term_h_28;
  t = echo_0_0(t);
  t = term_m_26;
  c_39 = t;
  t = term_n_26;
  d_39 = t;
  t = term_i_28;
  t = e_7(c_39, d_39, t);
  t = reverse_acc_2_0(_id, r_5, t);
  t = map_1_0(s_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm u_70 (ATerm), ATerm t)
{
  static ATerm f_40 (ATerm t)
  {
    ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
    c_40 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_40 = ATgetFirst((ATermList) t);
        e_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_28 = t;
      int m_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_13 = NULL,m_13 = NULL,k_5 = NULL;
          t = SSLgetAnnotations(c_40);
          j_13 = t;
          t = d_40;
          t = u_70(t);
          m_13 = t;
          t = (ATerm) ATinsert(CheckATermList(e_40), m_13);
          k_5 = t;
          t = SSLsetAnnotations(k_5, j_13);
          LocalPopChoice(m_28);
        }
      else
        {
          t = l_28;
          {
            ATerm e_14 = NULL,k_14 = NULL,l_5 = NULL;
            t = SSLgetAnnotations(c_40);
            e_14 = t;
            t = e_40;
            t = f_40(t);
            k_14 = t;
            t = (ATerm) ATinsert(CheckATermList(k_14), d_40);
            l_5 = t;
            t = SSLsetAnnotations(l_5, e_14);
          }
        }
    }
    return(t);
  }
  t = f_40(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
  j_40 = t;
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_40;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_28 = ATgetFirst((ATermList) t);
                ATerm u_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_40;
          }
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = (ATerm) ATinsert(ATempty, j_40);
      }
  }
  k_40 = t;
  t = term_s_24;
  l_40 = t;
  t = SSL_printnl(l_40, k_40);
  t = j_40;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm d_7 (ATerm j_50, ATerm k_50, ATerm t)
{
  t = SSL_strcat(j_50, k_50);
  return(t);
}
ATerm debug_1_0 (ATerm s_65 (ATerm), ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL;
  p_40 = t;
  t = s_65(t);
  q_40 = t;
  t = term_d_17;
  r_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_40), q_40);
  s_40 = t;
  t = SSL_printnl(r_40, s_40);
  t = p_40;
  return(t);
}
ATerm map_1_0 (ATerm k_70 (ATerm), ATerm t)
{
  static ATerm h_41 (ATerm t)
  {
    ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL;
    e_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_41;
      }
    else
      {
        ATerm x_14 = NULL,d_15 = NULL,e_15 = NULL,o_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_41 = ATgetFirst((ATermList) t);
            g_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_41);
        x_14 = t;
        t = f_41;
        t = k_70(t);
        d_15 = t;
        t = g_41;
        t = h_41(t);
        e_15 = t;
        t = (ATerm) ATinsert(CheckATermList(e_15), d_15);
        o_9 = t;
        t = SSLsetAnnotations(o_9, x_14);
      }
    return(t);
  }
  t = h_41(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_x_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_41 = NULL;
      p_41 = t;
      t = SSL_is_string(p_41);
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      {
        ATerm a_29 = t;
        int b_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_5, t);
            LocalPopChoice(b_29);
          }
        else
          {
            t = a_29;
            {
              ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
              v_41 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_41 = ATgetArgument(t, 0);
                  t = w_41;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_41 = ATgetArgument(t, 0);
                      t = w_41;
                      {
                        ATerm c_29 = t;
                        int d_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(d_29);
                          }
                        else
                          {
                            t = c_29;
                            t = debug_1_0(v_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm b_42 = NULL,c_42 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_41 = ATgetArgument(t, 0);
                          x_41 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_41;
                      t = eval_config_0_0(t);
                      b_42 = t;
                      t = x_41;
                      t = eval_config_0_0(t);
                      c_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_42, c_42);
                      t = d_7(b_42, c_42, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_7 (ATerm b_33, ATerm c_33, ATerm t)
{
  t = SSL_table_get(b_33, c_33);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL;
  g_42 = t;
  t = term_l_26;
  h_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_26, g_42);
  t = e_7(h_42, g_42, t);
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_42 = NULL,j_42 = NULL;
        t = eval_config_0_0(t);
        i_42 = t;
        t = term_l_26;
        j_42 = t;
        t = SSL_table_put(j_42, g_42, i_42);
        t = i_42;
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
      }
  }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  t = term_g_29;
  m_42 = t;
  t = term_d_18;
  n_42 = t;
  t = term_h_29;
  t = h_7(m_42, n_42, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_i_29;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  t = term_g_29;
  q_42 = t;
  t = term_d_18;
  r_42 = t;
  t = term_h_29;
  t = h_7(q_42, r_42, t);
  t = term_j_29;
  o_42 = t;
  t = term_d_18;
  p_42 = t;
  t = term_k_29;
  t = h_7(o_42, p_42, t);
  t = term_l_29;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_5, a_6, b_6, t);
      LocalPopChoice(o_29);
    }
  else
    {
      t = n_29;
      t = Option_3_0(e_6, f_6, i_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_57 (ATerm), ATerm l_57 (ATerm), ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,s_9 = NULL;
  x_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_42 = ATgetFirst((ATermList) t);
      u_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_42);
  s_42 = t;
  t = t_42;
  t = k_57(t);
  v_42 = t;
  t = u_42;
  t = l_57(t);
  w_42 = t;
  t = (ATerm) ATinsert(CheckATermList(w_42), v_42);
  s_9 = t;
  t = SSLsetAnnotations(s_9, s_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,h_43 = NULL,i_43 = NULL,x_9 = NULL;
  c_43 = t;
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_29;
        t = l_86(t);
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
      }
  }
  t = c_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_43 = ATgetFirst((ATermList) t);
      f_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_43);
  d_43 = t;
  t = term_y_26;
  i_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_26, e_43);
  t = h_7(i_43, e_43, t);
  t = f_43;
  {
    static ATerm s_43 (ATerm t)
    {
      ATerm s_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_29 = t;
          int w_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_43 = NULL;
              l_43 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_43;
              LocalPopChoice(w_29);
            }
          else
            {
              t = u_29;
              t = l_86(t);
              t = Cons_2_0(_id, s_43, t);
            }
          LocalPopChoice(t_29);
        }
      else
        {
          t = s_29;
          {
            ATerm o_43 = NULL,p_43 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_43 = ATgetFirst((ATermList) t);
                p_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_43), (ATerm) ATmakeAppl(sym_Undefined_1, o_43));
          }
        }
      return(t);
    }
    t = s_43(t);
  }
  h_43 = t;
  t = (ATerm) ATinsert(CheckATermList(h_43), (ATerm) ATmakeAppl(sym_Program_1, e_43));
  x_9 = t;
  t = SSLsetAnnotations(x_9, d_43);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm e_44 = NULL;
  e_44 = t;
  if(match_string(t, "--help"))
    {
      t = e_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_44;
        }
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL;
  t = term_a_28;
  f_44 = t;
  t = term_d_18;
  g_44 = t;
  t = term_y_29;
  t = h_7(f_44, g_44, t);
  t = term_z_29;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_a_30;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_86 (ATerm), ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
  z_43 = t;
  t = term_m_26;
  b_44 = t;
  t = term_n_26;
  c_44 = t;
  t = (ATerm) ATempty;
  d_44 = t;
  t = SSL_table_put(b_44, c_44, d_44);
  t = z_43;
  {
    static ATerm k_6 (ATerm t)
    {
      ATerm b_30 = t;
      int e_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_86(t);
          LocalPopChoice(e_30);
        }
      else
        {
          t = b_30;
          {
            ATerm f_30 = t;
            int g_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_7, g_7, i_7, t);
                LocalPopChoice(g_30);
              }
            else
              {
                t = f_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_6, t);
  }
  {
    ATerm h_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_44 = NULL;
        n_44 = t;
        {
          ATerm s_30 = t;
          int t_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_16 = NULL;
              t = n_44;
              {
                ATerm u_30 = t;
                int v_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_a_28;
                    t = get_config_0_0(t);
                    LocalPopChoice(v_30);
                  }
                else
                  {
                    t = u_30;
                    t = fetch_1_0(k_7, t);
                  }
              }
              t = n_44;
              t = default_system_usage_0_0(t);
              t = term_e_25;
              j_16 = t;
              t = SSL_exit(j_16);
              LocalPopChoice(t_30);
            }
          else
            {
              t = s_30;
              {
                ATerm x_16 = NULL;
                t = term_g_29;
                t = get_config_0_0(t);
                t = n_44;
                t = default_system_about_0_0(t);
                t = term_e_25;
                x_16 = t;
                t = SSL_exit(x_16);
              }
            }
        }
        LocalPopChoice(r_30);
      }
    else
      {
        t = h_30;
        {
          ATerm a_31 = t;
          int c_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
              static ATerm m_7 (ATerm t)
              {
                ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,a_10 = NULL;
                t_44 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_44 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_44);
                r_44 = t;
                t = s_44;
                if(((x_43 != NULL) && (x_43 != t)))
                  _fail(t);
                else
                  x_43 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_44);
                a_10 = t;
                t = SSLsetAnnotations(a_10, r_44);
                return(t);
              }
              t = fetch_1_0(m_7, t);
              t = term_d_17;
              p_44 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_43)), term_d_31);
              q_44 = t;
              t = SSL_printnl(p_44, q_44);
              t = (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_43)), term_d_31));
              t = default_system_usage_0_0(t);
              t = term_a_9;
              o_44 = t;
              t = SSL_exit(o_44);
              LocalPopChoice(c_31);
            }
          else
            {
              t = a_31;
            }
        }
      }
  }
  y_43 = t;
  t = term_m_26;
  a_44 = t;
  t = SSL_table_destroy(a_44);
  t = y_43;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL;
  t = parse_options_1_0(p_84, t);
  y_44 = t;
  t = term_e_31;
  b_45 = t;
  t = SSL_table_create(b_45);
  t = term_e_31;
  z_44 = t;
  t = term_f_31;
  a_45 = t;
  t = SSL_table_put(z_44, a_45, y_44);
  t = y_44;
  t = r_84(t);
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_84, t);
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        {
          ATerm i_31 = t;
          int m_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_84(t);
              t = report_success_0_0(t);
              LocalPopChoice(m_31);
            }
          else
            {
              t = i_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      {
        ATerm r_31 = t;
        int s_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(s_31);
          }
        else
          {
            t = r_31;
            {
              ATerm t_31 = t;
              int u_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(q_7, s_7, u_7, t);
                  LocalPopChoice(u_31);
                }
              else
                {
                  t = t_31;
                  {
                    ATerm v_31 = t;
                    int w_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(w_31);
                      }
                    else
                      {
                        t = v_31;
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
static ATerm p_7 (ATerm t)
{
  t = xtc_io_1_0(v_7, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL;
  t = term_x_31;
  j_45 = t;
  t = term_d_18;
  k_45 = t;
  t = term_z_31;
  t = h_7(j_45, k_45, t);
  t = term_a_32;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_c_32;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm d_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_45 = NULL,s_45 = NULL;
      s_45 = t;
      if(match_cons(t, sym_FILE_1))
        {
          r_45 = ATgetArgument(t, 0);
          {
            ATerm b_17 = NULL,h_10 = NULL;
            t = SSLgetAnnotations(s_45);
            b_17 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, r_45);
            h_10 = t;
            t = SSLsetAnnotations(h_10, b_17);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_45;
        }
      LocalPopChoice(k_32);
      t = xtc_transform_file_2_0(w_7, b_8, t);
    }
  else
    {
      t = d_32;
      t = xtc_transform_term_2_0(c_8, m_8, t);
    }
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_46 = NULL,b_46 = NULL;
        b_46 = t;
        if(match_cons(t, sym_FILE_1))
          {
            a_46 = ATgetArgument(t, 0);
            {
              ATerm i_17 = NULL,l_10 = NULL;
              t = SSLgetAnnotations(b_46);
              i_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_46);
              l_10 = t;
              t = SSLsetAnnotations(l_10, i_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_46;
          }
        LocalPopChoice(m_32);
        t = xtc_transform_file_2_0(n_8, pass_verbose_0_0, t);
      }
    else
      {
        t = l_32;
        t = xtc_transform_term_2_0(p_8, pass_verbose_0_0, t);
      }
  }
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_46 = NULL,i_46 = NULL;
        i_46 = t;
        if(match_cons(t, sym_FILE_1))
          {
            h_46 = ATgetArgument(t, 0);
            {
              ATerm w_17 = NULL,s_10 = NULL;
              t = SSLgetAnnotations(i_46);
              w_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_46);
              s_10 = t;
              t = SSLsetAnnotations(s_10, w_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_46;
          }
        LocalPopChoice(o_32);
        t = xtc_transform_file_2_0(q_8, pass_verbose_0_0, t);
      }
    else
      {
        t = n_32;
        t = xtc_transform_term_2_0(r_8, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_p_32;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm t_45 = NULL;
  t = term_s_32;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  t_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_45), term_t_32);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_p_32;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm u_45 = NULL;
  t = term_s_32;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  u_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_45), term_t_32);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_u_32;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_u_32;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_v_32;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_v_32;
  return(t);
}
ATerm io_pp_c_0_0 (ATerm t)
{
  t = option_wrap_4_0(o_7, default_usage_0_0, _id, p_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_c_0_0(t);
  return(t);
}
